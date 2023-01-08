###########################################################################
## Makefile generated for component 'Fonction_Somme'. 
## 
## Makefile     : Fonction_Somme_rtw.mk
## Generated on : Sun Jan 08 16:23:03 2023
## Final product: .\Fonction_Somme.lib
## Product type : static-library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = Fonction_Somme
MAKEFILE                  = Fonction_Somme_rtw.mk
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2022b
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2022b\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\win64
START_DIR                 = D:\FISE3~1\vision
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ..\..\..
COMPILER_COMMAND_FILE     = Fonction_Somme_rtw_comp.rsp
CMD_FILE                  = Fonction_Somme_rtw.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
NODEBUG                   = 1
MODELLIB                  = Fonction_Somme.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)
# Supported Version(s):    16.0
# ToolchainInfo Version:   2022b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS /wd4251 /Zc:__cplusplus
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)\mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = .\Fonction_Somme.lib
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_CUSTOM = 
DEFINES_STANDARD = -DMODEL=Fonction_Somme

DEFINES = $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_data.c $(START_DIR)\codegen\lib\Fonction_Somme\rt_nonfinite.c $(START_DIR)\codegen\lib\Fonction_Somme\rtGetNaN.c $(START_DIR)\codegen\lib\Fonction_Somme\rtGetInf.c $(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_initialize.c $(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_terminate.c $(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme.c $(START_DIR)\codegen\lib\Fonction_Somme\imresize.c $(START_DIR)\codegen\lib\Fonction_Somme\imhist.c $(START_DIR)\codegen\lib\Fonction_Somme\multithresh.c $(START_DIR)\codegen\lib\Fonction_Somme\minOrMax.c $(START_DIR)\codegen\lib\Fonction_Somme\find.c $(START_DIR)\codegen\lib\Fonction_Somme\mean.c $(START_DIR)\codegen\lib\Fonction_Somme\sortIdx.c $(START_DIR)\codegen\lib\Fonction_Somme\unique.c $(START_DIR)\codegen\lib\Fonction_Somme\imfilter.c $(START_DIR)\codegen\lib\Fonction_Somme\imfindcircles.c $(START_DIR)\codegen\lib\Fonction_Somme\chaccum.c $(START_DIR)\codegen\lib\Fonction_Somme\medfilt2.c $(START_DIR)\codegen\lib\Fonction_Somme\chcenters.c $(START_DIR)\codegen\lib\Fonction_Somme\imhmax.c $(START_DIR)\codegen\lib\Fonction_Somme\imregionalmax.c $(START_DIR)\codegen\lib\Fonction_Somme\regionprops.c $(START_DIR)\codegen\lib\Fonction_Somme\bwconncomp.c $(START_DIR)\codegen\lib\Fonction_Somme\combineVectorElements.c $(START_DIR)\codegen\lib\Fonction_Somme\rgb2lab.c $(START_DIR)\codegen\lib\Fonction_Somme\sort.c $(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_emxutil.c $(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_rtwutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = Fonction_Somme_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj Fonction_Somme_initialize.obj Fonction_Somme_terminate.obj Fonction_Somme.obj imresize.obj imhist.obj multithresh.obj minOrMax.obj find.obj mean.obj sortIdx.obj unique.obj imfilter.obj imfindcircles.obj chaccum.obj medfilt2.obj chcenters.obj imhmax.obj imregionalmax.obj regionprops.obj bwconncomp.obj combineVectorElements.obj rgb2lab.obj sort.obj Fonction_Somme_emxutil.obj Fonction_Somme_rtwutil.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgrayto8.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwtbbhist.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwrgb2gray_tbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwippfilter.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgetnumcores.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwimfilter.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwordfilt2.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwimregionalmax.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwippreconstruct.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  /LIBPATH:"$(MATLAB_ROOT)\bin\win64" "$(MATLAB_ROOT)\bin\win64\libiomp5md.lib"

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_ = /source-charset:utf-8
CFLAGS_OPTS = /openmp /wd4101
CFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CFLAGS = $(CFLAGS) $(CFLAGS_) $(CFLAGS_OPTS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_ = /source-charset:utf-8
CPPFLAGS_OPTS = /openmp /wd4101
CPPFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_) $(CPPFLAGS_OPTS) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = /nodefaultlib:vcomp  

CPP_LDFLAGS = $(CPP_LDFLAGS) $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = /nodefaultlib:vcomp  

CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS) $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = /nodefaultlib:vcomp  

LDFLAGS = $(LDFLAGS) $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = /nodefaultlib:vcomp  

SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS) $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################


!include $(MATLAB_ROOT)\rtw\c\tools\vcdefs.mak


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@cmd /C "@echo ### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS) -out:$(PRODUCT) @$(CMD_FILE)
	@cmd /C "@echo ### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\Fonction_Somme}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\Fonction_Somme}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


Fonction_Somme_data.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_data.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_data.c"


rt_nonfinite.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\rt_nonfinite.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\rt_nonfinite.c"


rtGetNaN.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\rtGetNaN.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\rtGetNaN.c"


rtGetInf.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\rtGetInf.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\rtGetInf.c"


Fonction_Somme_initialize.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_initialize.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_initialize.c"


Fonction_Somme_terminate.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_terminate.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_terminate.c"


Fonction_Somme.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme.c"


imresize.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\imresize.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\imresize.c"


imhist.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\imhist.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\imhist.c"


multithresh.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\multithresh.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\multithresh.c"


minOrMax.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\minOrMax.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\minOrMax.c"


find.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\find.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\find.c"


mean.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\mean.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\mean.c"


sortIdx.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\sortIdx.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\sortIdx.c"


unique.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\unique.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\unique.c"


imfilter.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\imfilter.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\imfilter.c"


imfindcircles.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\imfindcircles.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\imfindcircles.c"


chaccum.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\chaccum.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\chaccum.c"


medfilt2.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\medfilt2.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\medfilt2.c"


chcenters.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\chcenters.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\chcenters.c"


imhmax.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\imhmax.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\imhmax.c"


imregionalmax.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\imregionalmax.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\imregionalmax.c"


regionprops.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\regionprops.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\regionprops.c"


bwconncomp.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\bwconncomp.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\bwconncomp.c"


combineVectorElements.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\combineVectorElements.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\combineVectorElements.c"


rgb2lab.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\rgb2lab.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\rgb2lab.c"


sort.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\sort.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\sort.c"


Fonction_Somme_emxutil.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_emxutil.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_emxutil.c"


Fonction_Somme_rtwutil.obj : "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_rtwutil.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\Fonction_Somme\Fonction_Somme_rtwutil.c"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


