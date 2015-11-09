# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

JOBS?=1
TARGET_JOBS?=$(JOBS)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = ARMARCH7diab
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := E:/ET
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/TP1



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = arm
CPU = ARMARCH7
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tARMV7LV:vxworks69
VSB_DIR = $(WIND_BASE)/target/lib
VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\" -DARMEL -DARMEL  -DARM_USE_VFP -DARM_USE_VFP -DIP_PORT_VXWORKS=69 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler =  -XO -Xsize-opt 
DEBUGFLAGS_C++-Compiler =  -XO -Xsize-opt 
DEBUGFLAGS_Linker =  -XO -Xsize-opt 
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler =  -XO -Xsize-opt 
endif


#Project Targets
PROJECT_TARGETS = TP1/$(MODE_DIR)/TP1.out \
	 TP1_partialImage/$(MODE_DIR)/TP1_partialImage.o


#Rules

# TP1
ifeq ($(DEBUG_MODE),1)
TP1/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
TP1/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
TP1/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler =  -XO -Xsize-opt 
TP1/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler =  -XO -Xsize-opt 
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Linker =  -XO -Xsize-opt 
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TP1/$(MODE_DIR)/% : DEBUGFLAGS_Assembler =  -XO -Xsize-opt 
endif
TP1/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 
TP1/$(MODE_DIR)/% : IDE_LIBRARIES = 
TP1/$(MODE_DIR)/% : IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\" -DARMEL -DARMEL  -DARM_USE_VFP -DARM_USE_VFP -DIP_PORT_VXWORKS=69 
TP1/$(MODE_DIR)/% : PROJECT_TYPE = DKM
TP1/$(MODE_DIR)/% : DEFINES = 
TP1/$(MODE_DIR)/% : EXPAND_DBG = 0
TP1/$(MODE_DIR)/% : VX_CPU_FAMILY = arm
TP1/$(MODE_DIR)/% : CPU = ARMARCH7
TP1/$(MODE_DIR)/% : TOOL_FAMILY = diab
TP1/$(MODE_DIR)/% : TOOL = diab
TP1/$(MODE_DIR)/% : TOOL_PATH = 
TP1/$(MODE_DIR)/% : CC_ARCH_SPEC = -tARMV7LV:vxworks69
TP1/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
TP1/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
TP1/$(MODE_DIR)/% : LIBPATH = 
TP1/$(MODE_DIR)/% : LIBS = 
TP1/$(MODE_DIR)/% : OBJ_DIR := TP1/$(MODE_DIR)

OBJECTS_TP1 = TP1_partialImage/$(MODE_DIR)/TP1_partialImage.o

ifeq ($(TARGET_JOBS),1)
TP1/$(MODE_DIR)/TP1.out : $(OBJECTS_TP1)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";ddump -Ng $(OBJECTS_TP1) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c arm -tags $(VSB_DIR)/tags/arm/ARMARCH7/common/dkm.tags > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dcc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -Xdollar-in-ident -ei1518,4177,4223,4301,4550,5409,1606 -ei4193,4826,4381,4237,1573,4007,4082,4177,4223,4260,4550,5361,5828,2273,5387,5388 -ei1522,4092,4111,4152,4167,4171,4174,4186,4188,4191,4192,4223,4231,4236,4284,4375,4494,4513,5152,5457 -Xforce-declarations  $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES)  $(IDE_DEFINES) $(DEFINES) -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dld -tARMV7LV:vxworks69 -X -r5 -r4 -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_TP1) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

else
TP1/$(MODE_DIR)/TP1.out : TP1/$(MODE_DIR)/TP1.out_jobs

endif
TP1/$(MODE_DIR)/TP1_compile_file : $(FILE) ;

_clean :: TP1/$(MODE_DIR)/TP1_clean

TP1/$(MODE_DIR)/TP1_clean : 
	$(TRACE_FLAG)if [ -d "TP1" ]; then cd "TP1"; rm -rf $(MODE_DIR); fi


# TP1_partialImage
ifeq ($(DEBUG_MODE),1)
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler =  -XO -Xsize-opt 
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler =  -XO -Xsize-opt 
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker =  -XO -Xsize-opt 
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
TP1_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler =  -XO -Xsize-opt 
endif
TP1_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 
TP1_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
TP1_partialImage/$(MODE_DIR)/% : IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\" -DARMEL -DARMEL  -DARM_USE_VFP -DARM_USE_VFP -DIP_PORT_VXWORKS=69 
TP1_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
TP1_partialImage/$(MODE_DIR)/% : DEFINES = 
TP1_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
TP1_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = arm
TP1_partialImage/$(MODE_DIR)/% : CPU = ARMARCH7
TP1_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = diab
TP1_partialImage/$(MODE_DIR)/% : TOOL = diab
TP1_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
TP1_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -tARMV7LV:vxworks69
TP1_partialImage/$(MODE_DIR)/% : VSB_DIR = $(WIND_BASE)/target/lib
TP1_partialImage/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
TP1_partialImage/$(MODE_DIR)/% : LIBPATH = 
TP1_partialImage/$(MODE_DIR)/% : LIBS = 
TP1_partialImage/$(MODE_DIR)/% : OBJ_DIR := TP1_partialImage/$(MODE_DIR)

TP1_partialImage/$(MODE_DIR)/Objects/TP1/main.o : $(PRJ_ROOT_DIR)/main.c $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only  -W:c++:.CPP -Xfp-fast  -Xc-new -Xdialect-c89  -ei1518,4177,4223,4301,4550,5409,1606 -ei4193,4826,4381,4237,1573,4007,4082,4177,4223,4260,4550,5361,5828,2273,5387,5388 -ei1522,4092,4111,4152,4167,4171,4174,4186,4188,4191,4192,4223,4231,4236,4284,4375,4494,4513,5152,5457 -Xforce-declarations   -Xmake-dependency=0xd $(IDE_DEFINES) $(DEFINES) $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -o "$@" -c "$<"


OBJECTS_TP1_partialImage = TP1_partialImage/$(MODE_DIR)/Objects/TP1/main.o

ifeq ($(TARGET_JOBS),1)
TP1_partialImage/$(MODE_DIR)/TP1_partialImage.o : $(OBJECTS_TP1_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dld -tARMV7LV:vxworks69 -X -r5  -o "$@" $(OBJECTS_TP1_partialImage) $(ADDED_OBJECTS) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

else
TP1_partialImage/$(MODE_DIR)/TP1_partialImage.o : TP1_partialImage/$(MODE_DIR)/TP1_partialImage.o_jobs

endif
TP1_partialImage/$(MODE_DIR)/TP1_partialImage_compile_file : $(FILE) ;

_clean :: TP1_partialImage/$(MODE_DIR)/TP1_partialImage_clean

TP1_partialImage/$(MODE_DIR)/TP1_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "TP1_partialImage" ]; then cd "TP1_partialImage"; rm -rf $(MODE_DIR); fi

force : 

TARGET_JOBS_RULE?=echo "Update the makefile template via File > Import > Build Settings : Update makefile template";exit 1
%_jobs : 
	$(TRACE_FLAG)$(TARGET_JOBS_RULE)

DEP_FILES := TP1_partialImage/$(MODE_DIR)/Objects/TP1/main.d
-include $(DEP_FILES)


WIND_SCOPETOOLS_BASE := $(subst \,/,$(WIND_SCOPETOOLS_BASE))

clean_scopetools :
	$(TRACE_FLAG)rm -rf $(PRJ_ROOT_DIR)/.coveragescope/db

CLEAN_STEP := clean_scopetools


-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

TARGET_JOBS_RULE=$(MAKE) -f $(MAKEFILE) --jobs $(TARGET_JOBS) $(MFLAGS) $* TARGET_JOBS=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS) TARGET_JOBS=1 &&\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
