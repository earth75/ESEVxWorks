/* prjConfig.c - dynamicaly generated configuration file */


/*
GENERATED: Mon Oct 12 13:56:45 +0200 2015
DO NOT EDIT - file is regenerated whenever the project changes.
This file contains the non-BSP system initialization code
for Create a bootable VxWorks image (custom configured).
*/


/* includes */

#include <vxWorks.h>
#include <config.h>
#include <../src/hwif/h/mii/genericPhy.h>
#include <../src/hwif/h/mii/miiBus.h>
#include <adrSpaceLib.h>
#include <applUtilLib.h>
#include <auxv.h>
#include <cacheLib.h>
#include <classLib.h>
#include <configNet.h>
#include <cplusLib.h>
#include <dataCollectorLib.h>
#include <dbgLib.h>
#include <drv/erf/erfLib.h>
#include <drv/manager/device.h>
#include <drv/timer/timerDev.h>
#include <drv/wdb/wdbEndPktDrv.h>
#include <drv/wdb/wdbVioDrv.h>
#include <edrLib.h>
#include <end.h>
#include <endLib.h>
#include <envLib.h>
#include <eventLib.h>
#include <excLib.h>
#include <fioLib.h>
#include <fsEventUtilLib.h>
#include <fsMonitor.h>
#include <ftpLib.h>
#include <hashLib.h>
#include <hookLib.h>
#include <hostLib.h>
#include <hwif/vxbus/vxBus.h>
#include <hwif/vxbus/vxbPlbLib.h>
#include <intLib.h>
#include <ioLib.h>
#include <iosLib.h>
#include <iosScLib.h>
#include <isrDeferLib.h>
#include <jobQueueLib.h>
#include <loadElfLib.h>
#include <logLib.h>
#include <lstLib.h>
#include <m2IfLib.h>
#include <math.h>
#include <memLib.h>
#include <moduleLib.h>
#include <msgQLib.h>
#include <muxLib.h>
#include <muxTkLib.h>
#include <net/mbuf.h>
#include <netBufLib.h>
#include <netDrv.h>
#include <netLib.h>
#include <objLib.h>
#include <pipeDrv.h>
#include <pmLib.h>
#include <private/adrSpaceLibP.h>
#include <private/coprocLibP.h>
#include <private/eventDefsP.h>
#include <private/eventPointLibP.h>
#include <private/eventPointStubLibP.h>
#include <private/excLibP.h>
#include <private/fioLibP.h>
#include <private/ftpLibP.h>
#include <private/funcBindP.h>
#include <private/intLibP.h>
#include <private/isrLibP.h>
#include <private/jobLibP.h>
#include <private/kernelBaseLibP.h>
#include <private/kernelLibP.h>
#include <private/ledLibP.h>
#include <private/moduleHookLibP.h>
#include <private/offsetsP.h>
#include <private/pgMgrLibP.h>
#include <private/pgPoolLibP.h>
#include <private/pgPoolPhysLibP.h>
#include <private/pgPoolVirtLibP.h>
#include <private/poolLibP.h>
#include <private/qLibP.h>
#include <private/rtpDbgCmdLibP.h>
#include <private/rtpLibP.h>
#include <private/sdLibP.h>
#include <private/shellCmdP.h>
#include <private/shellHistLibP.h>
#include <private/shellLibP.h>
#include <private/svDataCollectorLibP.h>
#include <private/sysDbgLibP.h>
#include <private/syscallLibP.h>
#include <private/taskLibP.h>
#include <private/taskMemLibP.h>
#include <private/tipLibP.h>
#include <private/vmLibP.h>
#include <private/vxMemProbeLibP.h>
#include <private/vxdbgCpuLibP.h>
#include <private/vxdbgRtpLibP.h>
#include <private/workQLibP.h>
#include <private/wvFileUploadPathLibP.h>
#include <private/wvTsfsUploadPathLibP.h>
#include <private/wvUploadPathP.h>
#include <ptyDrv.h>
#include <rBuffLib.h>
#include <rawFsLib.h>
#include <rebootLib.h>
#include <remLib.h>
#include <rtpLib.h>
#include <sdLib.h>
#include <selectLib.h>
#include <semLib.h>
#include <shellConfigLib.h>
#include <shellInterpLib.h>
#include <shellLib.h>
#include <shlLib.h>
#include <sigLib.h>
#include <sioLib.h>
#include <spyLib.h>
#include <stdio.h>
#include <string.h>
#include <symLib.h>
#include <sysLib.h>
#include <sysSymTbl.h>
#include <syscallLib.h>
#include <syscallTbl.h>
#include <sysctlLib.h>
#include <taskHookLib.h>
#include <taskLib.h>
#include <taskUtilLib.h>
#include <taskVarLib.h>
#include <tickLib.h>
#include <timexLib.h>
#include <ttyLib.h>
#include <tyLib.h>
#include <unldLib.h>
#include <usrConfig.h>
#include <usrLib.h>
#include <version.h>
#include <vmLib.h>
#include <vxAtomicLib.h>
#include <vxBusLib.h>
#include <vxLib.h>
#include <vxWorks.h>
#include <vxbTimerLib.h>
#include <wait.h>
#include <wdLib.h>
#include <wdb/wdb.h>
#include <wdb/wdbBpLib.h>
#include <wdb/wdbCommIfLib.h>
#include <wdb/wdbLib.h>
#include <wdb/wdbLibP.h>
#include <wdb/wdbMbufLib.h>
#include <wdb/wdbRpcLib.h>
#include <wdb/wdbRtIfLib.h>
#include <wdb/wdbRtpLibP.h>
#include <wdb/wdbSvcLib.h>
#include <wdb/wdbUdpLib.h>
#include <wdb/wdbVioLib.h>
#include <wvLib.h>
#include <wvNetDLib.h>
#include <wvTmrLib.h>


/* imports */

IMPORT char etext [];                   /* defined by loader */
IMPORT char end [];                     /* defined by loader */
IMPORT char edata [];                   /* defined by loader */

/* forward declarations */

IMPORT void vxbArmGenIntCtlrRegister (void);
IMPORT void vxbImxSioRegister (void);
IMPORT void vxbImx31EpitTimerDrvRegister(void);
IMPORT STATUS adrSpaceShellCmdInit (void);
IMPORT u_short checksum (u_short *, int);
IMPORT STATUS dbgShellCmdInit ();
IMPORT STATUS usrFsShellCmdInit ();
IMPORT void vxbDmaLibInit(void);
IMPORT STATUS edrShellCmdInit ();
IMPORT void endEtherHdrInit (void);
IMPORT STATUS eventPointLibInit (void);
IMPORT STATUS eventPointStubLibInit (void);
IMPORT void m512xFecRegister(void);
extern STATUS mmanShowInit ();
IMPORT STATUS mmanShowShellCmdInit (void);
IMPORT STATUS memEdrRtpShellCmdInit (void);
IMPORT STATUS memEdrRtpShowInit (void);
IMPORT STATUS memEdrShellCmdInit (void);
IMPORT void mmanLibInit (void);
extern STATUS moduleShellCmdInit (void);
IMPORT STATUS hostnameSetup (char * );
IMPORT STATUS objInfoInit (void);
extern STATUS clockLibInit (void);
extern STATUS mmanFdLibInit (void);
extern STATUS usrRtpLibInit();
IMPORT STATUS rtpShowShellCmdInit (void);
IMPORT void windScInit (void);
IMPORT void mmanScLibInit (void);
extern void usrPosixScInit (void);
IMPORT void sdScInit (void);
IMPORT void shlScLibInit (void);
IMPORT STATUS sockScLibInit (void);
IMPORT STATUS sysctlScLibInit (void);
IMPORT void semBCreateLibInit (void);
IMPORT void semCCreateLibInit (void);
IMPORT void semMCreateLibInit (void);
IMPORT STATUS sdShowShellCmdInit (void);
extern char * startupScriptFieldSplit (char * field);
IMPORT STATUS symShellCmdInit ();
IMPORT void taskCreateLibInit (void);
IMPORT STATUS taskShellCmdInit ();
IMPORT STATUS vxbDelayLibInit (void);
extern STATUS unloadShellCmdInit (void);
IMPORT STATUS vmShowShellCmdInit (void);
IMPORT STATUS vxbAuxClkLibInit (void);
IMPORT STATUS vxbSysClkLibInit (void);
IMPORT STATUS vxbTimestampLibInit (void);
IMPORT void vxmux_mux_mblk_init (void);
IMPORT void usrWdbInit (void); 			void usrWdbInitDone (void);


/* BSP_STUBS */



/* configlettes */

#include <sysComms.c>
#include <edrStub.c>
#include <hwif/hwMemAlloc.uc>
#include <hwif/vxbVerChk.uc>
#include <intrinsics.c>
#include <ipcom_config.c>
#include <ipcom_ipd_config.c>
#include <ipnet_config.c>
#include <iptcp_config.c>
#include <net/coreip/usrBootLine.c>
#include <net/coreip/usrNetBoot.c>
#include <net/coreip/usrNetDaemon.c>
#include <net/coreip/usrNetEndLib.c>
#include <net/coreip/usrNetRemoteCfg.c>
#include <net/coreip/usrNetSysctl.c>
#include <sysClkInit.c>
#include <usrBanner.c>
#include <usrBootHwInit.c>
#include <usrBreakpoint.c>
#include <usrCache.c>
#include <usrCoprocs.c>
#include <usrEdrInit.c>
#include <usrFtp.c>
#include <usrHwSysctl.c>
#include <usrIsrDefer.c>
#include <usrKernel.c>
#include <usrKernelStack.c>
#include <usrMemEdr.c>
#include <usrMiiCfg.c>
#include <usrMmuInit.c>
#include <usrNetApplUtil.c>
#include <usrNetHostTblCfg.c>
#include <usrPmInit.c>
#include <usrPosixSc.c>
#include <usrScript.c>
#include <usrSemLib.c>
#include <usrSerial.c>
#include <usrShell.c>
#include <usrStandalone.c>
#include <usrStartup.c>
#include <usrSymTbl.c>
#include <usrSysHwInit2.c>
#include <usrSysSymTbl.c>
#include <usrSysctl.c>
#include <usrTip.c>
#include <usrVxbSioChanUtil.c>
#include <usrVxbTimerSys.c>
#include <usrVxdbg.c>
#include <usrWdbBanner.c>
#include <usrWdbBp.c>
#include <usrWdbCore.c>
#include <usrWdbGopher.c>
#include <usrWdbSys.c>
#include <usrWindview.c>
#include <wdbEnd.c>


/******************************************************************************
*
* usrInit - pre-kernel initialization
*/

void usrInit (int startType)
    {
    sysStart (startType);               /* clear BSS and set up the vector table base address. */
    usrBootHwInit ();                   /* call usrBootHwInit() routine */
    cacheLibInit (USER_I_CACHE_MODE, USER_D_CACHE_MODE); /* include cache support */
    excShowInit ();                     /* exception show routines */
    excVecInit ();                      /* exception handling */
    sysHwInit ();                       /* call the BSPs sysHwInit routine during system startup */
    usrCacheEnable ();                  /* optionally enable caches */
    objOwnershipInit ();                /* object management ownership */
    objInfoInit ();                     /* object management routines that requires lookup in a 			list of objects, such as the objNameToId() routine. */
    objLibInit ((OBJ_ALLOC_FUNC)FUNCPTR_OBJ_MEMALLOC_RTN, 				    (OBJ_FREE_FUNC)FUNCPTR_OBJ_MEMFREE_RTN,   				    OBJ_MEM_POOL_ID, 			      				    OBJ_LIBRARY_OPTIONS); /* object management */
    vxMemProbeInit ();                  /* Initialize vxMemProbe exception handler support */
    wvLibInit ();                       /* low-level kernel instrumentation needed by System Viewer */
    classListLibInit ();                /* object class list management */
    semLibInit ();                      /* semaphore support infrastructure */
                                        /* mutex semaphores */
                                        /* mutex semaphore creation routine */
    classLibInit ();                    /* object class management */
    kernelBaseInit ();                  /* required component DO NOT REMOVE. */
    taskCreateHookInit ();              /* user callouts on task creation/deletion */
    sysDebugModeInit ();                /* a flag indicating the system is in 'debug' mode */
    usrKernelInit (VX_GLOBAL_NO_STACK_FILL); /* context switch and interrupt handling (DO NOT REMOVE). */
    }



/******************************************************************************
*
* usrWindviewInit - 
*/

void usrWindviewInit (void)
    {
    windviewConfig ();                  /* initialize and control event logging */
    wvTmrRegister ((UINTFUNCPTR) sysTimestamp,					(UINTFUNCPTR) sysTimestampLock,	        				(FUNCPTR) sysTimestampEnable,					(FUNCPTR) sysTimestampDisable,					(FUNCPTR) sysTimestampConnect,					(UINTFUNCPTR) sysTimestampPeriod,					(UINTFUNCPTR) sysTimestampFreq); /* bsp specific timestamp routines  */
    rBuffLibInit ();                    /* System Viewer ring of buffers for event logging  */
    wdbTsfsDrv ("/tgtsvr");             /* virtual file system based on the WDB agent */
    wvTsfsUploadPathLibInit ();         /* initialize path for the upload through TSFS socket  */
    wvFileUploadPathLibInit ();         /* initialize path for the upload to file  */
    wvNetDInit ();                      /* System Viewer instrumentation for network */
    }



/******************************************************************************
*
* usrShowInit - enable object show routines
*/

void usrShowInit (void)
    {
    taskShowInit ();                    /* task show routine */
    memShowInit ();                     /* memory show routine */
    taskHookShowInit ();                /* task hook show routine */
    semShowInit ();                     /* semaphore show routine */
    symShowInit ();                     /* Routines to display information about symbols and symbol tables */
    vmShowInit ();                      /* VM library show routine */
                                        /* task floating point registers */
    edrShowInit ();                     /* ED&R show routines */
                                        /* handle show routines */
    adrSpaceShowInit();                 /* Address Space Allocator Show Routines: display 			information on the system address space allocator. */
    pgMgrShowInit();                    /* Page manager show routines: display information on 			page managers. */
    pgPoolShowInit();                   /* Generic page pool allocator show routines: display 			information on page pools. */
    rtpShowInit ();                     /* Display information on RTP. */
    sdShowInit ();                      /* Display information on Shared Data. */
    shlShowInit ();                     /* Display information on Shared Libraries */
    memEdrShowInit();                   /* Memory ED&R Show Routines */
    memEdrRtpShowInit();                /* Memory ED&R Show Routines for RTPs */
    mmanShowInit();                     /* Show routines for memory mapped objects */
    coprocShowInit ();                  /* task coprocessor registers */
    }



/******************************************************************************
*
* usrLoaderInit - The target loader initialization sequence
*/

void usrLoaderInit (void)
    {
    moduleLibInit ();                   /* Support library for module entities */
    loadElfInit ();                     /* ELF loader */
    loadLibInit (STORE_ABS_SYMBOLS);    /* Allows modules to be downloaded into running targets */
    unldLibInit ();                     /* Permits removal of dynamically downloaded modules */
    moduleHookLibInit ();               /* Pluggable hooks to extend the loader/unloader behavior */
    }



/******************************************************************************
*
* usrSymTblInit - Enable onboard symbol tables
*/

void usrSymTblInit (void)
    {
    usrSysSymTblInit ();                /* initialize system symbol table */
    usrStandaloneInit ();               /* Preferred method if not booting from the network */
    }



/******************************************************************************
*
* usrShellCmdInit - The kernel shell commands initialization sequence
*/

void usrShellCmdInit (void)
    {
    taskShellCmdInit ();                /* List of commands for the shell command interpreter related to tasks. */
    dbgShellCmdInit ();                 /* List of commands for the shell command interpreter related to debugging. */
    symShellCmdInit ();                 /* List of commands for the shell command interpreter related to symbol access. */
    usrFsShellCmdInit ();               /* List of commands for the shell command interpreter related to file system. */
    edrShellCmdInit ();                 /* List of commands for the shell command interpreter related to ED&R. */
    vmShowShellCmdInit ();              /* Virtual Memory show commands for the shell command interpreter.  */
    adrSpaceShellCmdInit ();            /* Address space commands for the shell command interpreter.  */
    sdShowShellCmdInit ();              /* Shared data show commands for the shell command interpreter.  */
    mmanShowShellCmdInit ();            /* mapped files commands for the shell command interpreter.  */
    memEdrShellCmdInit ();              /* Memory ED&R commands for the shell command interpreter.  */
    memEdrRtpShellCmdInit ();           /* Memory ED&R shell commands related to processes for the shell command interpreter. */
    moduleShellCmdInit();               /* Target loader commands for the shell command interpreter. */
    unloadShellCmdInit();               /* Unloader commands for the shell command interpreter.  */
    rtpShellCmdInit ();                 /* List of commands for the shell command interpreter related to processes. */
    rtpShowShellCmdInit ();             /* List of process show commands for the shell command interpreter.  */
    shlShellCmdInit ();                 /* List of SHL commands for the shell command interpreter */
    histShellCmdInit ();                /* Saving and loading commands for the shell command interpreter history. */
    spyShellCmdInit ();                 /* Shell commands for spy library */
    tipShellCmdInit ();                 /* tip shell command line support */
    }



/******************************************************************************
*
* usrShellInit - The kernel shell initialization sequence
*/

void usrShellInit (void)
    {
    shellLibInit ();                    /* Handles the shell core files */
    shellHistLibInit ();                /* Allows to save and load the shell history */
    dbgInit ();                         /* Breakpoints and stack tracer on target. Not needed for 			remote debugging with Workbench. */
    vxdbgRtpLibInit ();                 /* Initialize process debugging library. */
    usrBanner ();                       /* Display the WRS banner on startup */
    ledModeRegister (viLedLibInit);     /* Editing mode similar to the Vi editing mode */
    ledModeRegister (emacsLedLibInit);  /* Editing mode similar to the emacs editing mode */
    shellInterpRegister (shellInterpCInit); /* The C interpreter for the kernel shell */
    shellInterpRegister (shellInterpCmdInit); /* The command interpreter for the kernel shell */
    usrShellCmdInit ();                 /* The kernel shell commands initialization sequence */
    usrStartupScript (startupScriptFieldSplit (sysBootParams.startupScript)); /* Initial kernel shell script run at VxWorks startup */
    usrShell ();                        /* Interpreter for interactive development, prototyping, 			debugging and testing. */
    }



/******************************************************************************
*
* usrToolsInit - software development tools
*/

void usrToolsInit (void)
    {
    spyLibInit (SPY_TASKS_MAX);         /* utility to measure per-task CPU utilization */
    timexInit ();                       /* utility to measure function execution time */
    eventPointStubLibInit ();           /* stub eventpoint implementation */
    eventPointLibInit ();               /* eventpoints instrumentation */
    dataCollectorLibInit ();            /* Data collectors for tools */
    svDataCollectorLibInit ();          /* Data collectors for System Viewer */
    usrLoaderInit ();                   /* The target loader initialization sequence */
    usrSymTblInit ();                   /* Enable onboard symbol tables */
    usrVxdbgInit (VXDBG_EVT_TASK_PRIORITY,						   VXDBG_EVT_TASK_OPTIONS,						   VXDBG_EVT_TASK_STACK_SIZE); /* Support for the runtime debug library */
    usrWdbInit (); 			usrWdbInitDone (); /* WDB agent is initialized when kernel has been initialized. It then can debug whole system and supports task and system mode. */
    usrWindviewInit ();                 /* usrWindviewInit */
    rtpDbgCmdLibInit ();                /* Allows to send commands to perform operations in an RTP context */
    usrTipInit (TIP_CONFIG_STRING, TIP_ESCAPE_CHARACTER); /* interactive utility to connect to and manage multiple serial lines */
    usrShowInit ();                     /* enable object show routines */
    usrRtpLibInit ();                   /* List of commands for the shell C interpreter related to RTPs. */
    usrShellInit ();                    /* The kernel shell initialization sequence */
    }



/******************************************************************************
*
* usrKernelCreateInit - object creation routines
*/

void usrKernelCreateInit (void)
    {
    semDeleteLibInit ();                /* semaphore deletion routines */
    taskCreateLibInit ();               /* Capability to dynamically instantiate and delete tasks */
    taskMemLibInit ();                  /* taskStackAlloc and taskStackFree routines */
    msgQCreateLibInit ();               /* message queue creation and deletion library */
    wdCreateLibInit ();                 /* watchdog timers creation and deletion library */
    }



/******************************************************************************
*
* usrRtpInit - RTP init routines
*/

void usrRtpInit (void)
    {
    rtpHookLibInit (RTP_HOOK_TBL_SIZE); /* Add hook routines to be called on RTP operations. */
    rtpLibInit (RTP_HOOK_TBL_SIZE, SYSCALL_HOOK_TBL_SIZE, 				    RTP_SIGNAL_QUEUE_SIZE, 				    TASK_USER_EXC_STACK_OVERFLOW_SIZE, 				    TASK_USER_EXEC_STACK_OVERFLOW_SIZE, 				    TASK_USER_EXEC_STACK_UNDERFLOW_SIZE, 				    RTP_FD_NUM_MAX); /* Real Time Process. */
    sdLibInit (SD_HOOK_TBL_SIZE);       /* provide data sharing between RTPs or kernel */
    shlLibInit ();                      /* provide sharing of code between RTPs */
    }



/******************************************************************************
*
* usrKernelCoreInit - core kernel facilities
*/

void usrKernelCoreInit (void)
    {
    eventLibInit (VXEVENTS_OPTIONS);    /* VxWorks events */
                                        /* binary semaphores */
                                        /* counting semaphores */
                                        /* reader/writer semaphores */
    semOpenInit ();                     /* open/close/unlink semaphore modules */
    msgQLibInit ();                     /* message queues */
    msgQOpenInit ();                    /* open/close/unlink message queue modules */
    wdLibInit ();                       /* watchdog timers */
    taskOpenInit ();                    /* open/close/unlink task modules */
    wdbTaskHookInit ();                 /* task hooks debug support */
    vxdbgHooksInit ();                  /* hooks for the runtime debug library */
    }



/******************************************************************************
*
* usrKernelExtraInit - extended kernel facilities
*/

void usrKernelExtraInit (void)
    {
    hashLibInit ();                     /* hash library */
    taskVarInit ();                     /* allow global variables to be made private to a task */
    sigInit (POSIX_SIGNAL_MODE);        /* signals */
    clockLibInit ();                    /* POSIX clocks */
    usrSymLibInit (); symLibInit ();    /* Set of routines to manipulate symbols and symbol tables */
    syscallHookLibInit ();              /* Add hook routines to be called on system calls. */
    }



/******************************************************************************
*
* usrIosCoreInit - core I/O system
*/

void usrIosCoreInit (void)
    {
    iosInit (NUM_DRIVERS, NUM_FILES, "/null"); /* Basic IO system component */
    iosPathLibInit ();                  /* File System IO component */
    iosRmvLibInit ();                   /* Removable IO component */
    iosPxLibInit (IOS_POSIX_PSE52_MODE); /* POSIX IO component */
    iosRtpLibInit ();                   /* RTP IO component */
                                        /* Miscellaneous IO component */
    selectInit (NUM_FILES);             /* select */
    usrIsrDeferInit ();                 /* ISR deferral facility */
    tyLibInit (TYLIB_XOFF_PCNT, TYLIB_XON_PCNT, 				TYLIB_WRT_THRESHLD); /* Allows communication between processes */
    ttyDrv ();                          /* terminal driver */
    usrSerialInit ();                   /* SIO component */
    coprocLibInit();                    /* generalized coprocessor support */
    }



/******************************************************************************
*
* usrIosExtraInit - extended I/O system
*/

void usrIosExtraInit (void)
    {
    jobTaskLibInit (JOB_TASK_STACK_SIZE); /* task level work deferral */
    excInit (MAX_ISR_JOBS);             /* interrupt-level job facility */
    erfLibInit (ERF_MAX_USR_CATEGORIES, ERF_MAX_USR_TYPES); /* Event Reporting Framework */
    logInit (consoleFd, MAX_LOG_MSGS);  /* message logging */
    pipeDrv (PIPE_MAX_OPEN_FDS);        /* pipes */
    stdioInit ();                       /* buffered IO library */
    fioLibInit ();                      /* formatting for printf, scanf, etc. */
    floatInit ();                       /* allow printf and others to format floats correctly */
    devInit (DEVICE_MANAGER_MAX_NUM_DEVICES); /* Device Manager */
    xbdInit ();                         /* Extended Block Device */
    fsMonitorInit ();                   /* File System Monitor */
    fsEventUtilLibInit ();              /* File System Event Utilities */
    rawFsInit (NUM_RAWFS_FILES);        /* Raw block device file system interface */
    ptyDrv ();                          /* Allows communication between processes */
    usrBootLineParse (BOOT_LINE_ADRS);  /* parse some boot device configuration info  */
    }



/******************************************************************************
*
* usrNetHostInit - 
*/

void usrNetHostInit (void)
    {
    usrNetHostTblSetup ();              /* host table support */
    hostnameSetup (pTgtName);           /* assign local hostname to target */
    }



/******************************************************************************
*
* usrNetRemoteInit - 
*/

void usrNetRemoteInit (void)
    {
    remLibInit(RSH_STDERR_SETUP_TIMEOUT); /* Remote Command Library */
    remLibSysctlInit();                 /* Network sysctl tree support for remlib */
    usrFtpInit();                       /* File Transfer Protocol (FTP) library */
                                        /* Allows access to file system on boot host */
    usrNetRemoteCreate ();              /* Allows access to file system on boot host */
    }



/******************************************************************************
*
* usrNetworkInit - Initialize the network subsystem
*/

void usrNetworkInit (void)
    {
    usrNetApplUtilInit ();              /* Stack and Application Logging Utility */
    usrNetBoot ();                      /* Copy boot parameters for futher use by network */
    netBufLibInitialize (NETBUF_LEADING_CLSPACE_DRV); /* Network Buffer Library */
    netBufPoolInit ();                  /* netBufLib Generic Pool */
    linkBufPoolInit ();                 /* Network Buffer Library */
    vxmux_null_buf_init ();             /* Minimal clusterless network pool implementation for IPCOM */
    jobQueueLibInit();                  /* jobQueueLib prioritized work deferral mechanism */
    usrNetDaemonInit(NET_JOB_NUM_CFG,                        NET_TASK_PRIORITY, NET_TASK_OPTIONS,                        NET_TASK_STACKSIZE); /* Network Daemon Support */
    usrNetmaskGet ();                   /* Extracts netmask value from address field */
    usrNetSysctlInit();                 /* Networking System control support */
    usrNetHostInit ();                  /* initialize host table */
    rtpHostLibInit ();                  /* network sysctl tree support for host tables */
    muxCommonInit();                    /* MUX common support (all protocol and device styles) */
    muxLibInit();                       /* Support muxBind() protocols and their APIs */
    mux2LibInit();                      /* Support mux2Bind() protocols and their APIs */
    muxTkLibInit();                     /* Support muxTkBind() protocols and their APIs */
    vxmux_mux_mblk_init ();             /* MUX private support for M_BLK/Ipcom_pkt conversion */
    mux2OverEndInit();                  /* Support mux2Bind() protocols over END-style devices */
    muxTkOverEndInit();                 /* Support muxTkBind() protocols over END-style devices */
    endEtherHdrInit ();                 /* M_BLK ethernet/802.3 header build and parse */
    endLibInit();                       /* Support for END-style network devices. */
    usrNetRemoteInit ();                /* initialize network remote I/O access */
    usrNetEndLibInit();                 /* Support for network devices using MUX/END interface. */
    ipcom_usr_create ();                /* IPCOM user side functions */
    ipcom_create ();                    /* VxWorks IPCOM */
    netSysctlInit (TRUE);               /* Integrates IPNet sysctl nodes into VxWorks sysctl tree. */
    }



/******************************************************************************
*
* usrScInit - The system call initialization sequence
*/

void usrScInit (void)
    {
    usrPosixScInit ();                  /* system call handlers for POSIX based calls */
    sockScLibInit ();                   /* System call support for socket API */
    memRtpLibInit (RTP_HEAP_INIT_SIZE,RTP_HEAP_DEFAULT_OPTIONS); /* Initializes memory parameters to pass to RTP */
    windScInit ();                      /* system call handlers for WIND kernel  */
    mmanScLibInit ();                   /* system call handlers for memory management */
    sdScInit ();                        /* system call handlers for shared data */
    shlScLibInit ();                    /* system call handlers for shared libraries */
    iosScLibInit ();                    /* IOS system calls */
    sysctlScLibInit ();                 /* System call support for sysctl() */
    }



/******************************************************************************
*
* usrRoot - entry point for post-kernel initialization
*/

void usrRoot (char *pMemPoolStart, unsigned memPoolSize)
    {
    usrKernelCoreInit ();               /* core kernel facilities */
    poolLibInit();                      /* memory pools of fixed size items */
    memEdrInit ();                      /* Memory Error Detection and Reporting */
    memInit (pMemPoolStart, memPoolSize, 				 MEM_PART_DEFAULT_OPTIONS); /* full featured memory allocator */
    memPartLibInit (pMemPoolStart, memPoolSize); /* core memory partition manager */
    memEdrInit2();                      /* Memory Error Detection and Reporting */
    pgPoolLibInit();                    /* Generic Page Pool Allocator */
    pgPoolVirtLibInit();                /* Page Pool Allocator for Virtual Space */
    pgPoolPhysLibInit();                /* Page Pool Allocator for Physical Space */
                                        /* basic MMU component */
    usrMmuInit ((VIRT_ADDR) pMemPoolStart, memPoolSize); /* MMU global map support */
    usrKernelCreateInit ();             /* object creation routines */
    memInfoInit ();                     /* memory allocator info routines */
    envLibInit (ENV_VAR_USE_HOOKS);     /* unix compatible environment variables */
    usrPmInit ();                       /* reboot-safe protected memory region manager */
    usrEdrInit ();                      /* reboot-safe protected error log */
    edrStubInit ();                     /* protected error log stub initialization */
    usrSysHwInit2();                    /* call the usrSysHwInit2 routine during system startup */
    sysClkInit ();                      /* System clock component */
    pgMgrBaseLibInit();                 /* Basic Page Manager Library */
    pgMgrLibInit();                     /* Page Manager Library */
    usrSysctlInit();                    /* System control function */
    usrHwSysctlInit();                  /* System control hardware info registration */
    usrRtpInit ();                      /* RTP init routines */
    usrIosCoreInit ();                  /* core I/O system */
    mmanLibInit ();                     /* Memory mapping and unmapping routines */
    mmanFdLibInit();                    /* POSIX Memory Mapped Files */
    usrKernelExtraInit ();              /* extended kernel facilities */
    usrIosExtraInit ();                 /* extended I/O system */
    sockLibInit ();                     /* Socket API */
    usrNetworkInit ();                  /* Initialize the network subsystem */
    selTaskDeleteHookAdd ();            /* selectInit, part 2, install task delete hook */
    cplusCtorsLink ();                  /* run compiler generated initialization functions at system startup */
    cplusDemanglerInit ();              /* Support library for kernel shell and loader: provides human readable forms of C++ identifiers */
    usrScInit ();                       /* The system call initialization sequence */
    usrToolsInit ();                    /* software development tools */
    usrAppInit ();                      /* call usrAppInit() (in your usrAppInit.c project file) after startup. */
    }



/******************************************************************************
*
* usrWdbInit - the WDB target agent
*/

void usrWdbInit (void)
    {
    wdbConfig ();                       /* software agent to support the Workbench tools */
    wdbMemLibInit ();                   /* read/write target memory */
    wdbSysModeInit ();                  /* A breakpoint stops the entire operating system. */
    usrWdbTaskModeInit (WDB_SPAWN_STACK_SIZE,						    WDB_TASK_PRIORITY,						    WDB_TASK_OPTIONS,						    WDB_STACK_SIZE,						    WDB_MAX_RESTARTS,						    WDB_RESTART_TIME); /* A breakpoint stops one task, while others keep running. */
    wdbEventLibInit ();                 /* asynchronous event handling needed for breakpoints etc. */
    wdbEvtptLibInit ();                 /* support library for breakpoints and other asynchronous events. */
    wdbRtpLibInit (WDB_RTP_PRIORITY);   /* RTP operations: creation, deletion, ... */
    wdbDirectCallLibInit ();            /* call arbitrary functions directly from WDB */
    wdbCtxLibInit ();                   /* create/delete/manipulate tasks */
    wdbRegsLibInit ();                  /* get/set registers */
    wdbExternRegLibInit ();             /* Register support for system mode WDB */
    wdbExternCoprocRegLibInit ();       /* Coprocessor register support for system mode WDB */
    wdbTaskRegLibInit ();               /* registers support for task in WDB */
    wdbTaskCoprocRegLibInit ();         /* Coprocessor support for task in WDB */
    usrWdbGopherInit ();                /* information gathering language used by many tools */
    wdbCtxExitLibInit ();               /* ability to notify the host when a task exits */
    wdbExcLibInit ();                   /* notify the host when an exception occurs */
    wdbFuncCallLibInit ();              /* asynchronous function calls */
    wdbVioLibInit ();                   /* low-level virtual I/O handling */
    wdbVioDrv ("/vio");                 /* vxWorks driver for accessing virtual I/O */
    usrWdbBp ();                        /* core breakpoint library */
    wdbBpSyncLibInit ();                /* Breakpoint synchronization component */
    wdbTaskBpLibInit ();                /* task-mode breakpoint library */
    wdbRtpBpLibInit ();                 /* task-mode RTP breakpoint library */
    wdbRtpCtrlLibInit ();               /* Allow to stop real time processes when they are launched */
    wdbCtxStartLibInit ();              /* ability to notify the host when a task starts */
    wdbUserEvtLibInit ();               /* ability to send user events to the host */
    wdbMdlSymSyncLibInit ();            /* Synchronize modules and symbols between the target server and a target */
    usrWdbBanner ();                    /* print banner to console after the agent is initialized */
    }



/******************************************************************************
*
* hardWareInterFaceBusInit - bus-subsystem initialization
*/

void hardWareInterFaceBusInit (void)
    {
    vxbLibInit();                       /* vxBus Library Initialization */
    plbRegister();                      /* Processor Local Bus */
    miiBusRegister();                   /* MII bus controller for ethernet transceivers */
    genPhyRegister();                   /* Generic 10/100/1000 ethernet copper PHY driver */
    vxbImxSioRegister();                /* i.MX Series CPUs SIO support */
    vxbArmGenIntCtlrRegister();         /* ARM Generic Interrupt Controller driver */
    vxbImx31EpitTimerDrvRegister();     /* i.MX31 EPIT timer driver */
    m512xFecRegister();                 /* Freescale MPC512x FEC Enhanced Network Driver */
    }



/******************************************************************************
*
* hardWareInterFaceInit - Hardware Interface Initialization
*/

void hardWareInterFaceInit (void)
    {
    hwMemLibInit(); hwMemPoolCreate(&hwMemPool[0], HWMEM_POOL_SIZE); /* Init pre-kernel memory allocation globally */
                                        /* Pre-Kernel Memory Allocation */
    usrVxbTimerSysInit();               /* vxBus Timer Support */
    hardWareInterFaceBusInit();         /* vxBus subsystem */
    vxbInit();                          /* vxBus Library Activation */
    vxbSysClkLibInit();                 /* vxBus Sys Clk Support */
    vxbAuxClkLibInit();                 /* vxBus Aux Clk Support */
    vxbTimestampLibInit();              /* VxBus Timestamp Support */
    vxbDelayLibInit();                  /* vxBus Delay Timer Support */
    vxbDmaLibInit();                    /* vxBus Driver DMA System */
    }



/******************************************************************************
*
* vxbDevInit - Device initialization post kernel
*/

STATUS vxbDevInit (void)
    {
    return(vxbDevInitInternal ());      /* vxbus device initialization */
    }



/******************************************************************************
*
* vxbDevConnect - vxBus Device Connect post kernel
*/

STATUS vxbDevConnect (void)
    {
    return (vxbDevConnectInternal ());  /* vxbus device connection */
    }

