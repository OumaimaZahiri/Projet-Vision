# Sets the minimum version of CMake required to build your native library.
# This ensures that a certain set of CMake features is available to
# your build.

cmake_minimum_required(VERSION 3.4.1)

# Specifies a library name, specifies whether the library is STATIC or
# SHARED, and provides relative paths to the source code. You can
# define multiple libraries by adding multiple add_library() commands,
# and CMake builds them for you. When you build your app, Gradle
# automatically packages shared libraries with your APK.

add_library( # Specifies the name of the library.
        native-lib

        # Sets the library as a shared library.
        SHARED

        ./cpp/codegen/lib coin-detector

        # Provides a relative path to your source file(s).
        src/main/cpp/native-lib.cpp app-glue
        STATIC
        ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c

        imported-lib
        SHARED
        IMPORTED
        )

include_directories(./cpp/codegen
        ./cpp/codegen/lib
        imported-lib/include/)

find_library( # Defines the name of the path variable that stores the
        # location of the NDK library.
        log-lib

        # Specifies the name of the NDK library that
        # CMake needs to locate.
        log )

find_library(...)

# Links your native library against one or more other native libraries.
target_link_libraries( # Specifies the target library.
        native-lib

        app-glue

        imported-lib

        # Links the log library to the target library.
        ${log-lib} )

set_target_properties( # Specifies the target library.
        imported-lib

        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        imported-lib/src/${ANDROID_ABI}/libimported-lib.so )