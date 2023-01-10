###########################################################################
## Makefile generated for component 'Fonction_Somme'. 
## 
## Makefile     : Fonction_Somme_rtw.mk
## Generated on : Mon Jan 09 21:03:32 2023
## Final product: ./Fonction_Somme.lib
## Product type : static-library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = Fonction_Somme
MAKEFILE                  = Fonction_Somme_rtw.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2022b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2022b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Users/oumai/Desktop/S9/KaptKoin
TGT_FCN_LIB               = None
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
CMD_FILE                  = Fonction_Somme_rtw.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
MODELLIB                  = Fonction_Somme.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          LCC-win64 v2.4.1 | gmake (64-bit Windows)
# Supported Version(s):    2.4.1
# ToolchainInfo Version:   2022b
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

SHELL              = cmd
LCC_ROOT           = $(MATLAB_ROOT)/sys/lcc64/lcc64
LCC_BUILDLIB       = $(LCC_ROOT)/bin/buildlib
LCC_LIB            = $(LCC_ROOT)/lib64
MW_EXTERNLIB_DIR   = $(MATLAB_ROOT)/extern/lib/win64/microsoft
MW_LIB_DIR         = $(MATLAB_ROOT)/lib/win64
TOOLCHAIN_INCLUDES = -I$(LCC_ROOT)/include64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Lcc-win64 C Compiler
CC_PATH = $(LCC_ROOT)/bin
CC = "$(CC_PATH)/lcc64"

# Linker: Lcc-win64 Linker
LD_PATH = $(LCC_ROOT)/bin
LD = "$(LD_PATH)/lcclnk64"

# Archiver: Lcc-win64 Archiver
AR_PATH = $(LCC_ROOT)/bin
AR = "$(AR_PATH)/lcclib64"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -Fo
LDDEBUG             =
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = /out:
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              =
CFLAGS               = -c -w -noregistrylookup -nodeclspec -I$(LCC_ROOT)/include64
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -dll -entry LibMain -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL) $(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./Fonction_Somme.lib
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/codegen/lib/Fonction_Somme -I$(START_DIR) -I$(MATLAB_ROOT)/extern/include

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

SRCS = $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_data.c $(START_DIR)/codegen/lib/Fonction_Somme/rt_nonfinite.c $(START_DIR)/codegen/lib/Fonction_Somme/rtGetNaN.c $(START_DIR)/codegen/lib/Fonction_Somme/rtGetInf.c $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_initialize.c $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_terminate.c $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme.c $(START_DIR)/codegen/lib/Fonction_Somme/imresize.c $(START_DIR)/codegen/lib/Fonction_Somme/imhist.c $(START_DIR)/codegen/lib/Fonction_Somme/multithresh.c $(START_DIR)/codegen/lib/Fonction_Somme/minOrMax.c $(START_DIR)/codegen/lib/Fonction_Somme/find.c $(START_DIR)/codegen/lib/Fonction_Somme/mean.c $(START_DIR)/codegen/lib/Fonction_Somme/sortIdx.c $(START_DIR)/codegen/lib/Fonction_Somme/unique.c $(START_DIR)/codegen/lib/Fonction_Somme/imfilter.c $(START_DIR)/codegen/lib/Fonction_Somme/imfindcircles.c $(START_DIR)/codegen/lib/Fonction_Somme/chaccum.c $(START_DIR)/codegen/lib/Fonction_Somme/medfilt2.c $(START_DIR)/codegen/lib/Fonction_Somme/chcenters.c $(START_DIR)/codegen/lib/Fonction_Somme/imhmax.c $(START_DIR)/codegen/lib/Fonction_Somme/imregionalmax.c $(START_DIR)/codegen/lib/Fonction_Somme/regionprops.c $(START_DIR)/codegen/lib/Fonction_Somme/bwconncomp.c $(START_DIR)/codegen/lib/Fonction_Somme/combineVectorElements.c $(START_DIR)/codegen/lib/Fonction_Somme/rgb2lab.c $(START_DIR)/codegen/lib/Fonction_Somme/sort.c $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_emxutil.c $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_rtwutil.c

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

LIBS = $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwgrayto8.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwtbbhist.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwrgb2gray_tbb.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwippfilter.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwgetnumcores.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwimfilter.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwordfilt2.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwimregionalmax.lib $(MATLAB_ROOT)/extern/lib/win64/microsoft/libmwippreconstruct.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS) /out:$(PRODUCT) @$(CMD_FILE)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(START_DIR)/codegen/lib/Fonction_Somme/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


Fonction_Somme_data.obj : $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_data.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rt_nonfinite.obj : $(START_DIR)/codegen/lib/Fonction_Somme/rt_nonfinite.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rtGetNaN.obj : $(START_DIR)/codegen/lib/Fonction_Somme/rtGetNaN.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rtGetInf.obj : $(START_DIR)/codegen/lib/Fonction_Somme/rtGetInf.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


Fonction_Somme_initialize.obj : $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_initialize.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


Fonction_Somme_terminate.obj : $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_terminate.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


Fonction_Somme.obj : $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


imresize.obj : $(START_DIR)/codegen/lib/Fonction_Somme/imresize.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


imhist.obj : $(START_DIR)/codegen/lib/Fonction_Somme/imhist.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


multithresh.obj : $(START_DIR)/codegen/lib/Fonction_Somme/multithresh.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


minOrMax.obj : $(START_DIR)/codegen/lib/Fonction_Somme/minOrMax.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


find.obj : $(START_DIR)/codegen/lib/Fonction_Somme/find.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


mean.obj : $(START_DIR)/codegen/lib/Fonction_Somme/mean.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


sortIdx.obj : $(START_DIR)/codegen/lib/Fonction_Somme/sortIdx.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


unique.obj : $(START_DIR)/codegen/lib/Fonction_Somme/unique.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


imfilter.obj : $(START_DIR)/codegen/lib/Fonction_Somme/imfilter.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


imfindcircles.obj : $(START_DIR)/codegen/lib/Fonction_Somme/imfindcircles.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


chaccum.obj : $(START_DIR)/codegen/lib/Fonction_Somme/chaccum.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


medfilt2.obj : $(START_DIR)/codegen/lib/Fonction_Somme/medfilt2.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


chcenters.obj : $(START_DIR)/codegen/lib/Fonction_Somme/chcenters.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


imhmax.obj : $(START_DIR)/codegen/lib/Fonction_Somme/imhmax.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


imregionalmax.obj : $(START_DIR)/codegen/lib/Fonction_Somme/imregionalmax.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


regionprops.obj : $(START_DIR)/codegen/lib/Fonction_Somme/regionprops.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


bwconncomp.obj : $(START_DIR)/codegen/lib/Fonction_Somme/bwconncomp.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


combineVectorElements.obj : $(START_DIR)/codegen/lib/Fonction_Somme/combineVectorElements.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rgb2lab.obj : $(START_DIR)/codegen/lib/Fonction_Somme/rgb2lab.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


sort.obj : $(START_DIR)/codegen/lib/Fonction_Somme/sort.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


Fonction_Somme_emxutil.obj : $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_emxutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


Fonction_Somme_rtwutil.obj : $(START_DIR)/codegen/lib/Fonction_Somme/Fonction_Somme_rtwutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


