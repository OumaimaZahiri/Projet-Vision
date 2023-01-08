package com.vision.kaptkoin


import android.Manifest
import android.R.attr.data
import android.app.Activity
import android.content.ActivityNotFoundException
import android.content.Intent
import android.content.pm.PackageManager
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.os.Environment
import android.provider.MediaStore
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.Toast
import androidx.constraintlayout.widget.StateSet.TAG
import androidx.fragment.app.Fragment
import androidx.navigation.fragment.findNavController
import com.vision.kaptkoin.databinding.FragmentSecondBinding
import java.io.File


/**
 * A simple [Fragment] subclass as the second destination in the navigation.
 */
class SecondFragment : Fragment() {

    private lateinit var filePhoto: File
    private var _binding: FragmentSecondBinding? = null
    private var takePhotoIntent = Intent(MediaStore.ACTION_IMAGE_CAPTURE)
    private val FILE_NAME = "photo"
    private var mImageUri: Uri? = null
    protected val CAPTURE_IMAGE_ACTIVITY_REQUEST_CODE = 0

    // This property is only valid between onCreateView and
    // onDestroyView.
    private val binding get() = _binding!!

    override fun onCreateView(
            inflater: LayoutInflater, container: ViewGroup?,
            savedInstanceState: Bundle?
    ): View? {

        _binding = FragmentSecondBinding.inflate(inflater, container, false)
        return binding.root

    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        binding.buttonSecond.setOnClickListener {
            findNavController().navigate(R.id.action_SecondFragment_to_FirstFragment)
        }


        binding.btnTakePhoto.setOnClickListener() {
            filePhoto = getPhotoFile(FILE_NAME)
            mImageUri = Uri.fromFile(filePhoto)
            try {
                startActivityForResult(takePhotoIntent, 1)
                takePhotoIntent.putExtra(android.provider.MediaStore.EXTRA_OUTPUT, mImageUri)
            } catch (e: ActivityNotFoundException) {
                // display error state to the user
            }
        }

        binding.btnChoosePhoto.setOnClickListener {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M){
                if (this.activity?.checkSelfPermission(Manifest.permission.READ_EXTERNAL_STORAGE)== PackageManager.PERMISSION_DENIED){
                    val permissions = arrayOf(Manifest.permission.READ_EXTERNAL_STORAGE)
                    requestPermissions(permissions, PERMISSION_CODE)
                } else{
                    chooseImageGallery();
                }
            }else{
                chooseImageGallery();
            }
        }
    }

    // companion object
    companion object {
        private val IMAGE_CHOOSE = 1000;
        private val PERMISSION_CODE = 1001;
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }


    private fun getPhotoFile(fileName: String): File {
        val directoryStorage = this.activity?.getExternalFilesDir(Environment.DIRECTORY_PICTURES)
        return File.createTempFile(fileName, ".jpg", directoryStorage)
    }

    private fun grabImage(imageView: ImageView) {

        val selectedImage: Uri? = takePhotoIntent.data
        val bitmap: Bitmap
        try {
            bitmap = BitmapFactory.decodeStream(this.activity?.contentResolver?.openInputStream(selectedImage!!))
            imageView.setImageBitmap(bitmap)
        } catch (e: Exception) {
            Toast.makeText(this.activity, "Failed to load", Toast.LENGTH_SHORT).show()
            Log.d(TAG, "Failed to load", e)
        }
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        if(requestCode == CAPTURE_IMAGE_ACTIVITY_REQUEST_CODE && resultCode == Activity.RESULT_OK){
            this.activity?.contentResolver?.notifyChange(mImageUri!!, null);
            grabImage(binding.viewImage)
        }
        super.onActivityResult(requestCode, resultCode, takePhotoIntent)
    }

    private fun chooseImageGallery() {
        val intent = Intent(Intent.ACTION_PICK)
        intent.type = "image/*"
        startActivityForResult(intent, IMAGE_CHOOSE)
    }



    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    ) {
        when(requestCode){
            PERMISSION_CODE -> {
                if (grantResults.isNotEmpty() && grantResults[0] == PackageManager.PERMISSION_GRANTED){
                    chooseImageGallery()
                }else{
                    Toast.makeText(this.activity,"Permission denied", Toast.LENGTH_SHORT).show()
                }
            }
        }
    }
}