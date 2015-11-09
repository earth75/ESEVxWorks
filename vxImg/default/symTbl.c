/* symTbl.c - standalone symbol tables wrapper */

/* CREATED BY C:/WindRiver/vxworks-6.9/host/resource/hutils/tcl/makeSymTbl.tcl
 *  WITH ARGS arm tmp.o symTbl.c
 *         ON Mon Oct 12 13:56:49 +0200 2015
 */

#include "vxWorks.h"
#include "symbol.h"

IMPORT int IA64_decode_identifier_ex ();
IMPORT int MD5_Final ();
IMPORT int MD5_Init ();
IMPORT int MD5_Transform ();
IMPORT int MD5_Update ();
IMPORT int MD5_version;
IMPORT int SHA1_Final ();
IMPORT int SHA1_Init ();
IMPORT int SHA1_Transform ();
IMPORT int SHA1_Update ();
IMPORT int SHA1_version;
IMPORT int STANDARDRtnTbl;
IMPORT int SetNewSeedtoRandomGenerator ();
IMPORT int VXWORKSRtnTbl;
IMPORT int ZBUF_GETSEG ();
IMPORT int _Randseed;
IMPORT int _STI__07__diab_atomic_init ();
IMPORT int __DIAB_rd_pk_db ();
IMPORT int __DIAB_rd_pk_fl ();
IMPORT int __DIAB_rd_pk_ld ();
IMPORT int __DIAB_rd_sw_db ();
IMPORT int __DIAB_rd_sw_fl ();
IMPORT int __DIAB_rd_sw_ld ();
IMPORT int __DIAB_wr_pk_db ();
IMPORT int __DIAB_wr_pk_fl ();
IMPORT int __DIAB_wr_pk_ld ();
IMPORT int __DIAB_wr_sw_db ();
IMPORT int __DIAB_wr_sw_fl ();
IMPORT int __DIAB_wr_sw_ld ();
IMPORT int __POL ();
IMPORT int ___x_diab_arm_div_o;
IMPORT int ___x_diab_comljmp_o;
IMPORT int ___x_diab_copytable_o;
IMPORT int ___x_diab_crtlibso_o;
IMPORT int ___x_diab_ctordtor_o;
IMPORT int ___x_diab_ff1_o;
IMPORT int ___x_diab_libg_o;
IMPORT int ___x_diab_rd_pk_db_o;
IMPORT int ___x_diab_rd_pk_fl_o;
IMPORT int ___x_diab_rd_pk_ld_o;
IMPORT int ___x_diab_rd_sw_db_o;
IMPORT int ___x_diab_rd_sw_fl_o;
IMPORT int ___x_diab_rd_sw_ld_o;
IMPORT int ___x_diab_sfpdadd_o;
IMPORT int ___x_diab_sfpdcmp_o;
IMPORT int ___x_diab_sfpdcmpe_o;
IMPORT int ___x_diab_sfpddiv_o;
IMPORT int ___x_diab_sfpddtof_o;
IMPORT int ___x_diab_sfpddtoi_o;
IMPORT int ___x_diab_sfpddtoll_o;
IMPORT int ___x_diab_sfpddtou_o;
IMPORT int ___x_diab_sfpddtoull_o;
IMPORT int ___x_diab_sfpdfeq_o;
IMPORT int ___x_diab_sfpdfge_o;
IMPORT int ___x_diab_sfpdfgt_o;
IMPORT int ___x_diab_sfpdfle_o;
IMPORT int ___x_diab_sfpdflt_o;
IMPORT int ___x_diab_sfpdfne_o;
IMPORT int ___x_diab_sfpditod_o;
IMPORT int ___x_diab_sfpdlltod_o;
IMPORT int ___x_diab_sfpdmul_o;
IMPORT int ___x_diab_sfpdneg_o;
IMPORT int ___x_diab_sfpdnorm_o;
IMPORT int ___x_diab_sfpdpol_o;
IMPORT int ___x_diab_sfpdsetup_o;
IMPORT int ___x_diab_sfpdulltod_o;
IMPORT int ___x_diab_sfpdutod_o;
IMPORT int ___x_diab_sfpfadd_o;
IMPORT int ___x_diab_sfpfcmp_o;
IMPORT int ___x_diab_sfpfcmpe_o;
IMPORT int ___x_diab_sfpfdiv_o;
IMPORT int ___x_diab_sfpffeq_o;
IMPORT int ___x_diab_sfpffge_o;
IMPORT int ___x_diab_sfpffgt_o;
IMPORT int ___x_diab_sfpffle_o;
IMPORT int ___x_diab_sfpfflt_o;
IMPORT int ___x_diab_sfpffne_o;
IMPORT int ___x_diab_sfpfftod_o;
IMPORT int ___x_diab_sfpfftoi_o;
IMPORT int ___x_diab_sfpfftoll_o;
IMPORT int ___x_diab_sfpfftou_o;
IMPORT int ___x_diab_sfpfftoull_o;
IMPORT int ___x_diab_sfpfitof_o;
IMPORT int ___x_diab_sfpflltof_o;
IMPORT int ___x_diab_sfpfmul_o;
IMPORT int ___x_diab_sfpfneg_o;
IMPORT int ___x_diab_sfpfnorm_o;
IMPORT int ___x_diab_sfpfsetup_o;
IMPORT int ___x_diab_sfpfulltof_o;
IMPORT int ___x_diab_sfpfutof_o;
IMPORT int ___x_diab_sfpround_o;
IMPORT int ___x_diab_sxpadd64_o;
IMPORT int ___x_diab_sxpasr64_o;
IMPORT int ___x_diab_sxpcmp64_o;
IMPORT int ___x_diab_sxpdiv64_o;
IMPORT int ___x_diab_sxplsl64_o;
IMPORT int ___x_diab_sxplsr64_o;
IMPORT int ___x_diab_sxpm6432_o;
IMPORT int ___x_diab_sxpmul64_o;
IMPORT int ___x_diab_sxprem32_o;
IMPORT int ___x_diab_sxprem64_o;
IMPORT int ___x_diab_torn_syncatomic_o;
IMPORT int ___x_diab_torn_syncmutex_o;
IMPORT int ___x_diab_torn_syncsem_o;
IMPORT int ___x_diab_wr_pk_db_o;
IMPORT int ___x_diab_wr_pk_fl_o;
IMPORT int ___x_diab_wr_pk_ld_o;
IMPORT int ___x_diab_wr_sw_db_o;
IMPORT int ___x_diab_wr_sw_fl_o;
IMPORT int ___x_diab_wr_sw_ld_o;
IMPORT int __add64 ();
IMPORT int __arm_call_via_o;
IMPORT int __asr64 ();
IMPORT int __assert ();
IMPORT int __clocale;
IMPORT int __common_intrinsicsInit ();
IMPORT int __common_long_jmp ();
IMPORT int __copy ();
IMPORT int __copy_multiple ();
IMPORT int __costate;
IMPORT int __cplusDem_o;
IMPORT int __cplusLoadObjFiles;
IMPORT int __cplusLoad_o;
IMPORT int __cplusUsr_o;
IMPORT int __cplusXtors_o;
IMPORT int __ctype;
IMPORT int __ctype_tolower;
IMPORT int __ctype_toupper;
IMPORT int __cxa_demangle ();
IMPORT int __daysSinceEpoch ();
IMPORT int __diab_alloc_mutex ();
IMPORT int __diab_alloc_semaphore ();
IMPORT int __diab_atomic_enter ();
IMPORT int __diab_atomic_restore ();
IMPORT int __diab_free_mutex ();
IMPORT int __diab_free_semaphore ();
IMPORT int __diab_intrinsics_impfpInit ();
IMPORT int __diab_intrinsics_implInit ();
IMPORT int __diab_intrinsics_tornInit ();
IMPORT int __diab_lock_mutex ();
IMPORT int __diab_lock_semaphore ();
IMPORT int __diab_trylock_mutex ();
IMPORT int __diab_trylock_semaphore ();
IMPORT int __diab_unlock_mutex ();
IMPORT int __diab_unlock_semaphore ();
IMPORT int __div32 ();
IMPORT int __div64 ();
IMPORT int __dtof ();
IMPORT int __dtoi ();
IMPORT int __dtoll ();
IMPORT int __dtou ();
IMPORT int __dtoull ();
IMPORT int __eq64 ();
IMPORT int __errno ();
IMPORT int __exec_ctors ();
IMPORT int __exec_dtors ();
IMPORT int __exec_xtor_table;
IMPORT unsigned int __ff1 (unsigned int);
IMPORT unsigned int __ff1l (unsigned int);
IMPORT unsigned int __ff1ll (unsigned long long);
IMPORT int __fini ();
IMPORT int __floatdidf ();
IMPORT int __floatdisf ();
IMPORT int __ftod ();
IMPORT int __ftoi ();
IMPORT int __ftoll ();
IMPORT int __ftou ();
IMPORT int __ftoull ();
IMPORT int __ge64 ();
IMPORT int __getDstInfo ();
IMPORT int __getDstInfoSub ();
IMPORT int __getTime ();
IMPORT int __getZoneInfo ();
IMPORT int __gt64 ();
IMPORT int __ieee754_rem_pio2 ();
IMPORT unsigned int __ieee_status (unsigned int mask, unsigned int flags);
IMPORT int __includeDiabIntrinsics;
IMPORT int __init ();
IMPORT int __itod ();
IMPORT int __itof ();
IMPORT int __julday ();
IMPORT int __kernel_cos ();
IMPORT int __kernel_rem_pio2 ();
IMPORT int __kernel_sin ();
IMPORT int __kernel_tan ();
IMPORT int __le64 ();
IMPORT int __lltod ();
IMPORT int __lltof ();
IMPORT int __locale;
IMPORT int __loctime;
IMPORT int __lsl64 ();
IMPORT int __lsr64 ();
IMPORT int __lt64 ();
IMPORT int __mul64 ();
IMPORT int __mul6432 ();
IMPORT int __ne64 ();
IMPORT int __rem32 ();
IMPORT int __rem64 ();
IMPORT int __rta_longjmp;
IMPORT int __sclose ();
IMPORT int __sflags ();
IMPORT int __sflush ();
IMPORT int __sfpRoundMode;
IMPORT int __sfvwrite ();
IMPORT int __smakebuf ();
IMPORT int __sread ();
IMPORT int __srefill ();
IMPORT int __srget ();
IMPORT int __sseek ();
IMPORT int __stderr ();
IMPORT int __stdin ();
IMPORT int __stdout ();
IMPORT int __strxfrm ();
IMPORT int __sub64 ();
IMPORT int __swbuf ();
IMPORT int __swrite ();
IMPORT int __swsetup ();
IMPORT int __taskVarAdd ();
IMPORT int __taskVarDelete ();
IMPORT int __taskVarGet ();
IMPORT int __taskVarSet ();
IMPORT int __udiv32 ();
IMPORT int __udiv64 ();
IMPORT int __uge64 ();
IMPORT int __ugt64 ();
IMPORT int __ule64 ();
IMPORT int __ulltod ();
IMPORT int __ulltof ();
IMPORT int __ult64 ();
IMPORT int __urem32 ();
IMPORT int __urem64 ();
IMPORT int __utod ();
IMPORT int __utof ();
IMPORT int __wdbEventListIsEmpty;
IMPORT int _applLog ();
IMPORT int _archHelp_msg;
IMPORT int _archIORead16 ();
IMPORT int _archIORead32 ();
IMPORT int _archIORead8 ();
IMPORT int _archIOWrite16 ();
IMPORT int _archIOWrite32 ();
IMPORT int _archIOWrite8 ();
IMPORT int _clockRealtime;
IMPORT int _closeSc ();
IMPORT int _cplusDemangle ();
IMPORT int _creatSc ();
IMPORT int _d_add ();
IMPORT int _d_cmp ();
IMPORT int _d_cmpe ();
IMPORT int _d_div ();
IMPORT int _d_dtof ();
IMPORT int _d_dtoi ();
IMPORT int _d_dtoll ();
IMPORT int _d_dtou ();
IMPORT int _d_dtoull ();
IMPORT int _d_feq ();
IMPORT int _d_fge ();
IMPORT int _d_fgt ();
IMPORT int _d_fle ();
IMPORT int _d_flt ();
IMPORT int _d_fne ();
IMPORT int _d_fnge ();
IMPORT int _d_fngt ();
IMPORT int _d_fnle ();
IMPORT int _d_fnlt ();
IMPORT int _d_itod ();
IMPORT int _d_lltod ();
IMPORT int _d_mul ();
IMPORT int _d_neg ();
IMPORT int _d_sub ();
IMPORT int _d_ulltod ();
IMPORT int _d_utod ();
IMPORT int _dbgArchInit ();
IMPORT int _dbgDsmInstRtn;
IMPORT int _dbgFuncCallCheck ();
IMPORT int _dbgInstSizeGet ();
IMPORT int _dbgRetAdrsGet ();
IMPORT int _dbgTaskPCGet ();
IMPORT int _dbgTaskPCSet ();
IMPORT int _edrErrorInjectSc ();
IMPORT int _endM2Packet_1213 ();
IMPORT int _endM2Packet_2233 ();
IMPORT int _exitSc ();
IMPORT int _f_add ();
IMPORT int _f_cmp ();
IMPORT int _f_cmpe ();
IMPORT int _f_div ();
IMPORT int _f_feq ();
IMPORT int _f_fge ();
IMPORT int _f_fgt ();
IMPORT int _f_fle ();
IMPORT int _f_flt ();
IMPORT int _f_fne ();
IMPORT int _f_fnge ();
IMPORT int _f_fngt ();
IMPORT int _f_fnle ();
IMPORT int _f_fnlt ();
IMPORT int _f_ftod ();
IMPORT int _f_ftoi ();
IMPORT int _f_ftoll ();
IMPORT int _f_ftou ();
IMPORT int _f_ftoull ();
IMPORT int _f_itof ();
IMPORT int _f_lltof ();
IMPORT int _f_mul ();
IMPORT int _f_neg ();
IMPORT int _f_sub ();
IMPORT int _f_ulltof ();
IMPORT int _f_utof ();
IMPORT int _fdatasyncSc ();
IMPORT int _fp_round ();
IMPORT int _fsyncSc ();
IMPORT int _func_IntLvlChgRtn;
IMPORT int _func_IntLvlDisableRtn;
IMPORT int _func_IntLvlEnableRtn;
IMPORT int _func_IntLvlVecAckRtn;
IMPORT int _func_IntLvlVecChkRtn;
IMPORT int _func_aimMmuLockRegionsImport;
IMPORT int _func_armIntStackSplit;
IMPORT int _func_armIrqHandler;
IMPORT int _func_armMmuCurrentGet;
IMPORT int _func_armMmuCurrentSet;
IMPORT int _func_cacheAimArch7DClearDisable;
IMPORT int _func_cacheAimArch7IClearDisable;
IMPORT int _func_cacheFuncsSet;
IMPORT int _func_classListAdd;
IMPORT int _func_classListInit;
IMPORT int _func_classListLock;
IMPORT int _func_classListRemove;
IMPORT int _func_classListTblInit;
IMPORT int _func_classListUnlock;
IMPORT int _func_consoleOut;
IMPORT int _func_coprocShow;
IMPORT int _func_coprocTaskRegsShow;
IMPORT int _func_dosFsFmtRtn;
IMPORT int _func_edrEvt;
IMPORT int _func_end2VxBusConnect;
IMPORT int _func_end8023AddressForm;
IMPORT int _func_endEtherAddressForm;
IMPORT int _func_endEtherPacketAddrGet;
IMPORT int _func_endEtherPacketDataGet;
IMPORT int _func_envGet;
IMPORT int _func_eventReceive;
IMPORT int _func_eventRsrcSend;
IMPORT int _func_eventRsrcShow;
IMPORT int _func_eventSend;
IMPORT int _func_eventTaskShow;
IMPORT int _func_eventTerminate;
IMPORT int _func_evtLogPayload;
IMPORT int _func_evtLogPayloadString;
IMPORT int _func_evtLogReserveTaskName;
IMPORT int _func_evtLogSyscall;
IMPORT int _func_excBaseHook;
IMPORT int _func_excBreakpoint;
IMPORT int _func_excInfoShow;
IMPORT int _func_excIntHook;
IMPORT int _func_excJobAdd;
IMPORT int _func_excPanicHook;
IMPORT int _func_exit;
IMPORT int _func_fclose;
IMPORT int _func_fcntl_dup;
IMPORT int _func_fdMap;
IMPORT int _func_fdMsync;
IMPORT int _func_fdUnmap;
IMPORT int _func_fileDoesNotExist;
IMPORT int _func_fioFltFormatRtn;
IMPORT int _func_fioFltScanRtn;
IMPORT int _func_ftpLs;
IMPORT int _func_ftpTransientFatal;
IMPORT int _func_ftruncMmanHook;
IMPORT int _func_handleAlloc;
IMPORT int _func_handleFreeAll;
IMPORT int _func_intConnectRtn;
IMPORT int _func_intDisconnectRtn;
IMPORT int _func_ioGlobalStdGet;
IMPORT int _func_ioPxCreateOrOpen;
IMPORT int _func_ioTaskStdSet;
IMPORT int _func_iosPathFdEntryIoctl;
IMPORT int _func_iosPosixFdEntryIoctl;
IMPORT int _func_iosRtpIoTableSizeGet;
IMPORT int _func_iosRtpIoTableSizeSet;
IMPORT int _func_isrConnect;
IMPORT int _func_isrCreate;
IMPORT int _func_isrDelete;
IMPORT int _func_isrDisconnect;
IMPORT int _func_isrDispatcher;
IMPORT int _func_isrInfo;
IMPORT int _func_jobTaskWorkAdd;
IMPORT int _func_kernelModuleListIdGet;
IMPORT int _func_kernelRoundRobinHook;
IMPORT int _func_kprintf;
IMPORT int _func_kwrite;
IMPORT int _func_lf_advlock;
IMPORT int _func_loadRtpDeltaBaseAddrApply;
IMPORT int _func_loadRtpSymsPolicyOverride;
IMPORT int _func_logMsg;
IMPORT int _func_loginPrompt2;
IMPORT int _func_loginStringGet;
IMPORT int _func_loginStringSet;
IMPORT int _func_m2PollStatsIfPoll;
IMPORT int _func_memPartCacheAlloc;
IMPORT int _func_memPartCacheFree;
IMPORT int _func_memPartCacheInfoGet;
IMPORT int _func_memPartRealloc;
IMPORT int _func_memPartReallocInternal;
IMPORT int _func_memalign;
IMPORT int _func_mmuFaultAddrGet;
IMPORT int _func_mmuFaultStatusGet;
IMPORT int _func_mmuIFaultStatusGet;
IMPORT int _func_moduleIdFigure;
IMPORT int _func_moduleSegInfoGet;
IMPORT int _func_mux;
IMPORT int _func_mux_l2;
IMPORT int _func_netAttrDeReg;
IMPORT int _func_netAttrReg;
IMPORT int _func_netChDirByName;
IMPORT int _func_netDaemonIxToQId;
IMPORT int _func_netDaemonQIdToIx;
IMPORT int _func_netLsByName;
IMPORT int _func_netPoolShow;
IMPORT int _func_objCoreRelease;
IMPORT int _func_objHandleToObjId;
IMPORT int _func_objNameVerifiedSet;
IMPORT int _func_objOwnerListAdd;
IMPORT int _func_objOwnerListRemove;
IMPORT int _func_objOwnerReclaim;
IMPORT int _func_objOwnerSetBaseInternal;
IMPORT int _func_objOwnerSetInternal;
IMPORT int _func_objRtpObjEachHook;
IMPORT int _func_ownerListLock;
IMPORT int _func_ownerListUnlock;
IMPORT int _func_pgMgrOverlapIterate;
IMPORT int _func_pgMgrPageAlloc;
IMPORT int _func_pgMgrPageFree;
IMPORT int _func_pgMgrPageMap;
IMPORT int _func_printErr;
IMPORT int _func_printExcPrintHook;
IMPORT int _func_pthread_testandset_canceltype;
IMPORT int _func_pxSSThreadIntHook;
IMPORT int _func_pxSSThreadStateInit;
IMPORT int _func_qPriBMapNativeResort;
IMPORT int _func_remCurIdGet;
IMPORT int _func_remCurIdSet;
IMPORT int _func_rtcUncache;
IMPORT int _func_rtpDelete;
IMPORT int _func_rtpDeleteHookAdd;
IMPORT int _func_rtpDeleteHookDelete;
IMPORT int _func_rtpDeletionDeferDisable;
IMPORT int _func_rtpDeletionDeferEnable;
IMPORT int _func_rtpExtraCmdGet;
IMPORT int _func_rtpHandleIdGet;
IMPORT int _func_rtpIdVerify;
IMPORT int _func_rtpInitCompleteHookAdd;
IMPORT int _func_rtpInitCompleteHookDelete;
IMPORT int _func_rtpPause;
IMPORT int _func_rtpPostCreateHookAdd;
IMPORT int _func_rtpPostCreateHookDelete;
IMPORT int _func_rtpPreCreateHookAdd;
IMPORT int _func_rtpPreCreateHookDelete;
IMPORT int _func_rtpSdUnmapAll;
IMPORT int _func_rtpShlDeleteAll;
IMPORT int _func_rtpShlInfoGet;
IMPORT int _func_rtpShlShow;
IMPORT int _func_rtpShlSymbolsRegister;
IMPORT int _func_rtpShlSymbolsUnregister;
IMPORT int _func_rtpShow;
IMPORT int _func_rtpSigExcKill;
IMPORT int _func_rtpSigPendDestroy;
IMPORT int _func_rtpSigPendInit;
IMPORT int _func_rtpSigPendKill;
IMPORT int _func_rtpSigaction;
IMPORT int _func_rtpSigpending;
IMPORT int _func_rtpSigprocmask;
IMPORT int _func_rtpSigqueue;
IMPORT int _func_rtpSigsuspend;
IMPORT int _func_rtpSigtimedwait;
IMPORT int _func_rtpSpawn;
IMPORT int _func_rtpSymTblIdGet;
IMPORT int _func_rtpTaskKill;
IMPORT int _func_rtpTaskSigBlock;
IMPORT int _func_rtpTaskSigCheck;
IMPORT int _func_rtpTaskSigPendKill;
IMPORT int _func_rtpTaskSigqueue;
IMPORT int _func_rtpVarAdd;
IMPORT int _func_rtpVerifiedLock;
IMPORT int _func_selPtyAdd;
IMPORT int _func_selPtyDelete;
IMPORT int _func_selPtySlaveAdd;
IMPORT int _func_selPtySlaveDelete;
IMPORT int _func_selTyAdd;
IMPORT int _func_selTyDelete;
IMPORT int _func_selWakeup;
IMPORT int _func_selWakeupAll;
IMPORT int _func_selWakeupListInit;
IMPORT int _func_selWakeupListTerm;
IMPORT int _func_semExchange;
IMPORT int _func_semRTake;
IMPORT int _func_semWTake;
IMPORT int _func_shellDbgCallPrint;
IMPORT int _func_shellDbgStackTrace;
IMPORT int _func_shellExcPrint;
IMPORT int _func_shlGottSet;
IMPORT int _func_sigExcKill;
IMPORT int _func_sigTimeoutRecalc;
IMPORT int _func_sigeventInit;
IMPORT int _func_sigfillset;
IMPORT int _func_signalMmanHook;
IMPORT int _func_sigprocmask;
IMPORT int _func_spy;
IMPORT int _func_spy2;
IMPORT int _func_spyClkStart;
IMPORT int _func_spyClkStop;
IMPORT int _func_spyReport;
IMPORT int _func_spyReport2;
IMPORT int _func_spyStop;
IMPORT int _func_spyTask;
IMPORT int _func_symEach;
IMPORT int _func_symEachCall;
IMPORT int _func_symFind;
IMPORT int _func_symFindSymbol;
IMPORT int _func_symNameGet;
IMPORT int _func_symRegister;
IMPORT int _func_symTblShutdown;
IMPORT int _func_symTypeGet;
IMPORT int _func_symValueGet;
IMPORT int _func_taskCreateHookAdd;
IMPORT int _func_taskDeleteHookAdd;
IMPORT int _func_taskMemCtxSwitch;
IMPORT int _func_taskPxAttrCreate;
IMPORT int _func_taskPxAttrGet;
IMPORT int _func_taskPxAttrSet;
IMPORT int _func_taskStackAlloc;
IMPORT int _func_taskStackFree;
IMPORT int _func_tipStart;
IMPORT int _func_tmrConnect;
IMPORT int _func_tmrDisable;
IMPORT int _func_tmrEnable;
IMPORT int _func_tmrFreq;
IMPORT int _func_tmrPeriod;
IMPORT int _func_tmrStamp;
IMPORT int _func_tmrStampLock;
IMPORT int _func_unldByModuleId;
IMPORT int _func_valloc;
IMPORT int _func_vfpExcHandle;
IMPORT int _func_vfpHasException;
IMPORT int _func_vfpIsEnabled;
IMPORT int _func_vfpSave;
IMPORT int _func_virtExtraMapInfoGet;
IMPORT int _func_virtSegInfoGet;
IMPORT int _func_vmBaseFuncsSet;
IMPORT int _func_vmInvPageMap;
IMPORT int _func_vmInvUnMap;
IMPORT int _func_vxMemProbeHook;
IMPORT int _func_vxbDelayCommon;
IMPORT int _func_vxbIntConnect;
IMPORT int _func_vxbIntDisable;
IMPORT int _func_vxbIntDisconnect;
IMPORT int _func_vxbIntDynaConnect;
IMPORT int _func_vxbIntDynaCtlrInputInit;
IMPORT int _func_vxbIntDynaVecAlloc;
IMPORT int _func_vxbIntDynaVecDevMultiProgram;
IMPORT int _func_vxbIntDynaVecDisable;
IMPORT int _func_vxbIntDynaVecEnable;
IMPORT int _func_vxbIntDynaVecErase;
IMPORT int _func_vxbIntDynaVecGet;
IMPORT int _func_vxbIntDynaVecOwnerFind;
IMPORT int _func_vxbIntDynaVecProgram;
IMPORT int _func_vxbIntEnable;
IMPORT int _func_vxbPciDevCfgRead;
IMPORT int _func_vxbPciDevCfgWrite;
IMPORT int _func_vxbUserHookDevInit;
IMPORT int _func_vxdbgBpDelete;
IMPORT int _func_vxdbgCtxCont;
IMPORT int _func_vxdbgCtxStop;
IMPORT int _func_vxdbgMemMove;
IMPORT int _func_vxdbgMemRead;
IMPORT int _func_vxdbgMemScan;
IMPORT int _func_vxdbgMemWrite;
IMPORT int _func_vxdbgRtpCont;
IMPORT int _func_vxdbgRtpIdVerify;
IMPORT int _func_vxdbgRtpStop;
IMPORT int _func_vxdbgTrap;
IMPORT int _func_wdbExternCoprocRegsGet;
IMPORT int _func_wdbExternCoprocRegsSet;
IMPORT int _func_wdbExternEnterHookAdd;
IMPORT int _func_wdbExternExitHookAdd;
IMPORT int _func_wdbExternNotifyHost;
IMPORT int _func_wdbExternRcvHook;
IMPORT int _func_wdbResumeSystem;
IMPORT int _func_wdbSuspendSystem;
IMPORT int _func_wdbTaskBpByIdRemove;
IMPORT int _func_wdbTaskCoprocRegsGet;
IMPORT int _func_wdbTaskCoprocRegsSet;
IMPORT int _func_wdbTrap;
IMPORT int _func_windSemRWDelete;
IMPORT int _func_windTickAnnounceHook;
IMPORT int _func_workQDbgTextDump;
IMPORT int _func_wvOnUploadPathClose;
IMPORT int _func_wvOnUploadPathCreate;
IMPORT int _getcwdSc ();
IMPORT int _hostAdd ();
IMPORT int _hostDelete ();
IMPORT int _hostGetByAddr ();
IMPORT int _hostGetByName ();
IMPORT int _hostTblSearchByName2 ();
IMPORT int _ioctlSc ();
IMPORT int _ipcom_gethostbyaddr_r;
IMPORT int _ipcom_gethostbyname_r;
IMPORT int _ipdhcpc_callback_hook;
IMPORT int _linkMemReqClAlign;
IMPORT int _linkMemReqMlinkAlign;
IMPORT int _mctlSc ();
IMPORT int _msgQOpenSc ();
IMPORT int _muxProtosPerEndInc;
IMPORT int _muxProtosPerEndStart;
IMPORT int _netMemReqDefault ();
IMPORT int _netSysctl;
IMPORT int _netSysctlCli;
IMPORT int _objClose ();
IMPORT int _openSc ();
IMPORT int _pLinkPoolFuncTbl;
IMPORT int _pNetBufCollect;
IMPORT int _pNetDpool;
IMPORT int _pNetPoolFuncAlignTbl;
IMPORT int _pNetPoolFuncTbl;
IMPORT int _pNetSysPool;
IMPORT int _pSigQueueFreeHead;
IMPORT int _pSysL2CacheClear;
IMPORT int _pSysL2CacheDisable;
IMPORT int _pSysL2CacheEnable;
IMPORT int _pSysL2CacheFlush;
IMPORT int _pSysL2CacheInvFunc;
IMPORT int _pSysL2CachePipeFlush;
IMPORT int _panicHook;
IMPORT int _pauseSc ();
IMPORT int _procNumWasSet;
IMPORT int _readSc ();
IMPORT int _rtpSigqueue ();
IMPORT int _rtpTaskSigqueue ();
IMPORT int _sdCreateSc ();
IMPORT int _sdOpenSc ();
IMPORT int _semExchangeSc ();
IMPORT int _semGiveSc ();
IMPORT int _semOpenSc ();
IMPORT int _semRTakeSc ();
IMPORT int _semTakeSc ();
IMPORT int _semWTakeSc ();
IMPORT int _setjmpSetup ();
IMPORT int _shlClose ();
IMPORT int _shlCloseSc ();
IMPORT int _shlGet ();
IMPORT int _shlGetSc ();
IMPORT int _shlOpen ();
IMPORT int _shlOpenSc ();
IMPORT int _shlPut ();
IMPORT int _shlPutSc ();
IMPORT int _shlUnlock ();
IMPORT int _shlUnlockSc ();
IMPORT int _sigCtxLoad ();
IMPORT int _sigCtxRtnValSet ();
IMPORT int _sigCtxSave ();
IMPORT int _sigCtxSetup ();
IMPORT int _sigCtxStackEnd ();
IMPORT int _sigactionSc ();
IMPORT int _sigfaulttable;
IMPORT int _sigqueueSc ();
IMPORT int _sigreturnSc ();
IMPORT int _sigsuspendSc ();
IMPORT int _sigtimedwaitSc ();
IMPORT int _taskOpenSc ();
IMPORT int _taskOpenWithGuardSc ();
IMPORT int _taskSigqueueSc ();
IMPORT int _taskSuspend ();
IMPORT int _taskTcbCurrentGetSc ();
IMPORT int _vdsqrt ();
IMPORT int _vxb_auxClkConnectRtn;
IMPORT int _vxb_auxClkDisableRtn;
IMPORT int _vxb_auxClkEnableRtn;
IMPORT int _vxb_auxClkRateGetRtn;
IMPORT int _vxb_auxClkRateSetRtn;
IMPORT int _vxb_clkConnectRtn;
IMPORT int _vxb_clkDisableRtn;
IMPORT int _vxb_clkEnableRtn;
IMPORT int _vxb_clkRateGetRtn;
IMPORT int _vxb_clkRateSetRtn;
IMPORT int _vxb_delayRtn;
IMPORT int _vxb_msDelayRtn;
IMPORT int _vxb_timestampConnectRtn;
IMPORT int _vxb_timestampDisableRtn;
IMPORT int _vxb_timestampEnableRtn;
IMPORT int _vxb_timestampFreqRtn;
IMPORT int _vxb_timestampLockRtn;
IMPORT int _vxb_timestampPeriodRtn;
IMPORT int _vxb_timestampRtn;
IMPORT int _vxb_usDelayRtn;
IMPORT int _vxmux_pNullPoolFuncTbl;
IMPORT int _vxworks_asctime_r ();
IMPORT int _vxworks_ctime_r ();
IMPORT int _vxworks_gmtime_r ();
IMPORT int _vxworks_localtime_r ();
IMPORT int _waitpidSc ();
IMPORT int _writeSc ();
IMPORT int _zbufCreate_nolock ();
IMPORT int _zbufDeleteEmpty ();
IMPORT int _zbufSetSeg ();
IMPORT int _zbuf_getseg_nolock ();
IMPORT int _zbuf_getsegptr_nolock ();
IMPORT int abort ();
IMPORT int abs ();
IMPORT int absSymbols_Bounds ();
IMPORT int absSymbols_Common ();
IMPORT int accept ();
IMPORT int acceptSc ();
IMPORT int access ();
IMPORT int accessSc ();
IMPORT int acos ();
IMPORT int adrSpaceInfoGet ();
IMPORT int adrSpaceIsOverlapped ();
IMPORT int adrSpaceLibInit ();
IMPORT int adrSpaceModel;
IMPORT int adrSpaceOptimizedSizeGet ();
IMPORT int adrSpacePageAlloc ();
IMPORT int adrSpacePageFree ();
IMPORT int adrSpacePageMap ();
IMPORT int adrSpacePageUnmap ();
IMPORT int adrSpaceRAMAddToPool ();
IMPORT int adrSpaceRAMReserve ();
IMPORT int adrSpaceRgnPreAlloc ();
IMPORT int adrSpaceShellCmdInit ();
IMPORT int adrSpaceShow ();
IMPORT int adrSpaceShowInit ();
IMPORT int adrSpaceVirtReserve ();
IMPORT int aimCacheInit ();
IMPORT int aimCacheSysctlInit ();
IMPORT int aimMmuBaseLibInit ();
IMPORT int aimMmuSysctlInit ();
IMPORT int allocChunkEndGuardSize;
IMPORT int applLoggerInit ();
IMPORT int applLoggerStop ();
IMPORT int applUtilInstInit ();
IMPORT int applUtilLogSem;
IMPORT int archPwrDown ();
IMPORT int archSysctlInit ();
IMPORT int armGetNpc ();
IMPORT int armGicCpu;
IMPORT int armGicInputs;
IMPORT int armInitExceptionModes ();
IMPORT int armInstrChangesPc ();
IMPORT int asMemDescNumEnt;
IMPORT int asctime ();
IMPORT int asctime_r ();
IMPORT int asin ();
IMPORT int assertlist;
IMPORT int atan ();
IMPORT int atan2 ();
IMPORT int atexit ();
IMPORT int atof ();
IMPORT int atoi ();
IMPORT int atol ();
IMPORT int atomic32Add ();
IMPORT int atomic32And ();
IMPORT int atomic32Cas ();
IMPORT int atomic32Clear ();
IMPORT int atomic32Dec ();
IMPORT int atomic32Get ();
IMPORT int atomic32Inc ();
IMPORT int atomic32Nand ();
IMPORT int atomic32Or ();
IMPORT int atomic32Set ();
IMPORT int atomic32Sub ();
IMPORT int atomic32Xor ();
IMPORT int attrib ();
IMPORT int attribDisplay ();
IMPORT int attribDisplayFile ();
IMPORT int autoNegForce;
IMPORT int auxClkDevUnitNo;
IMPORT int auxClkTimerNo;
IMPORT int avlDelete ();
IMPORT int avlInsert ();
IMPORT int avlInsertInform ();
IMPORT int avlMaximumGet ();
IMPORT int avlMinimumGet ();
IMPORT int avlPredecessorGet ();
IMPORT int avlRemoveInsert ();
IMPORT int avlSearch ();
IMPORT int avlSuccessorGet ();
IMPORT int avlTreeWalk ();
IMPORT int avlUintDelete ();
IMPORT int avlUintInsert ();
IMPORT int avlUintMaximumGet ();
IMPORT int avlUintMinimumGet ();
IMPORT int avlUintPredecessorGet ();
IMPORT int avlUintSearch ();
IMPORT int avlUintSuccessorGet ();
IMPORT int avlUintTreeWalk ();
IMPORT int b ();
IMPORT int bcmp ();
IMPORT int bcopy ();
IMPORT int bcopyBytes ();
IMPORT int bcopyLongs ();
IMPORT int bcopyNeon ();
IMPORT int bcopyWords ();
IMPORT int bd ();
IMPORT int bdall ();
IMPORT int bfill ();
IMPORT int bfillBytes ();
IMPORT int bh ();
IMPORT int bi ();
IMPORT int binaryOptionsTsfsDrv;
IMPORT int bind ();
IMPORT int bindSc ();
IMPORT int bindresvport ();
IMPORT int bindresvportCommon ();
IMPORT int bindresvport_af ();
IMPORT int binvert ();
IMPORT int bioInit ();
IMPORT int bio_alloc ();
IMPORT int bio_done ();
IMPORT int bio_free ();
IMPORT int bitFirstGet ();
IMPORT int bootBpAnchorExtract ();
IMPORT int bootChange ();
IMPORT int bootLeaseExtract ();
IMPORT int bootNetmaskExtract ();
IMPORT int bootParamsErrorPrint ();
IMPORT int bootParamsPrompt ();
IMPORT int bootParamsShow ();
IMPORT int bootScanNum ();
IMPORT int bootStringToStruct ();
IMPORT int bootStringToStructAdd ();
IMPORT int bootStructToString ();
IMPORT int bsearch ();
IMPORT int bspSerialChanGet ();
IMPORT int bsp_node;
IMPORT int bswap ();
IMPORT int busCtlrDevCtlr_desc;
IMPORT int bzero ();
IMPORT int c ();
IMPORT int cacheAddrAlign;
IMPORT int cacheAimArch6DClear ();
IMPORT int cacheAimArch6DFlush ();
IMPORT int cacheAimArch6DInvalidate ();
IMPORT int cacheAimArch6IClearDisable ();
IMPORT int cacheAimArch6IInvalidate ();
IMPORT int cacheAimArch6IInvalidateAll ();
IMPORT int cacheAimArch6PipeFlush ();
IMPORT int cacheAimArch7DClearAll ();
IMPORT int cacheAimArch7DDisable ();
IMPORT int cacheAimArch7DEnable ();
IMPORT int cacheAimArch7DFlushAll ();
IMPORT int cacheAimArch7DFlushPoU ();
IMPORT int cacheAimArch7DInvalidateAll ();
IMPORT int cacheAimArch7DIsOn ();
IMPORT int cacheAimArch7DProbe ();
IMPORT int cacheAimArch7DmaFree ();
IMPORT int cacheAimArch7DmaMalloc ();
IMPORT int cacheAimArch7IDisable ();
IMPORT int cacheAimArch7IEnable ();
IMPORT int cacheAimArch7IIsOn ();
IMPORT int cacheAimArch7IProbe ();
IMPORT int cacheAimArch7Identify ();
IMPORT int cacheAimArch7MmuIsOn ();
IMPORT int cacheAimArch7SizeInfoGet ();
IMPORT int cacheAimArch7TextUpdate ();
IMPORT int cacheAimCortexA9LibInit ();
IMPORT int cacheAimCortexA9PhysToVirt;
IMPORT int cacheAimCortexA9VirtToPhys;
IMPORT int cacheAimInfo;
IMPORT int cacheArchAlignSize;
IMPORT int cacheArchDClear ();
IMPORT int cacheArchDClearAll ();
IMPORT int cacheArchDFlush ();
IMPORT int cacheArchDFlushAll ();
IMPORT int cacheArchDInvalidate ();
IMPORT int cacheArchDInvalidateAll ();
IMPORT int cacheArchIInvalidate ();
IMPORT int cacheArchIInvalidateAll ();
IMPORT int cacheArchIntLock ();
IMPORT int cacheArchIntMask;
IMPORT int cacheArchL2CacheDisable ();
IMPORT int cacheArchL2CacheEnable ();
IMPORT int cacheArchL2CacheIsOn ();
IMPORT int cacheArchLocSizeGet ();
IMPORT int cacheArchLouSizeGet ();
IMPORT int cacheArchPipeFlush ();
IMPORT int cacheArchState;
IMPORT int cacheClear ();
IMPORT int cacheCortexA9DClearDisable ();
IMPORT int cacheCortexA9LibInstall ();
IMPORT int cacheDataEnabled;
IMPORT int cacheDataMode;
IMPORT int cacheDisable ();
IMPORT int cacheDma32Free ();
IMPORT int cacheDma32Malloc ();
IMPORT int cacheDmaFree ();
IMPORT int cacheDmaFreeRtn;
IMPORT int cacheDmaFuncs;
IMPORT int cacheDmaMalloc ();
IMPORT int cacheDmaMallocRtn;
IMPORT int cacheDrvFlush ();
IMPORT int cacheDrvInvalidate ();
IMPORT int cacheDrvPhysToVirt ();
IMPORT int cacheDrvVirtToPhys ();
IMPORT int cacheEnable ();
IMPORT int cacheFlush ();
IMPORT int cacheForeignClear ();
IMPORT int cacheForeignFlush ();
IMPORT int cacheForeignInvalidate ();
IMPORT int cacheFuncsSet ();
IMPORT int cacheInvalidate ();
IMPORT int cacheLib;
IMPORT int cacheLibInit ();
IMPORT int cacheLineMask;
IMPORT int cacheLineSize;
IMPORT int cacheLock ();
IMPORT int cacheMmuAvailable;
IMPORT int cacheNullFuncs;
IMPORT int cachePipeFlush ();
IMPORT int cacheTextLocalUpdate ();
IMPORT int cacheTextUpdate ();
IMPORT int cacheUnlock ();
IMPORT int cacheUserFuncs;
IMPORT int cache_node;
IMPORT int cafeTmrRegister ();
IMPORT int calloc ();
IMPORT int catInfo;
IMPORT int cd ();
IMPORT int ceil ();
IMPORT int cfree ();
IMPORT int cfront_decode_identifier ();
IMPORT int changeFpReg ();
IMPORT int changeLogLevel ();
IMPORT int changeReg ();
IMPORT int chdir ();
IMPORT int chdirSc ();
IMPORT int checkStack ();
IMPORT int checksum ();
IMPORT int chkdsk ();
IMPORT int chmod ();
IMPORT int chmodSc ();
IMPORT int classCreateConnect ();
IMPORT int classDestroyConnect ();
IMPORT int classIdTable;
IMPORT int classInit ();
IMPORT int classLibInit ();
IMPORT int classListLibInit ();
IMPORT int classMemPartIdSet ();
IMPORT int classShowConnect ();
IMPORT int clearerr ();
IMPORT int clock ();
IMPORT int clockCtlSc ();
IMPORT int clockLibInit ();
IMPORT int clockScLibInit ();
IMPORT int clock_getres ();
IMPORT int clock_getres_node;
IMPORT int clock_gettime ();
IMPORT int clock_gettime_wd ();
IMPORT int clock_nanosleep ();
IMPORT int clock_setres ();
IMPORT int clock_settime ();
IMPORT int clock_time_node;
IMPORT int close ();
IMPORT int closedir ();
IMPORT int commit ();
IMPORT int completionPathComplete ();
IMPORT int completionPathListGet ();
IMPORT int completionPathShow ();
IMPORT int completionSymComplete ();
IMPORT int completionSymListGet ();
IMPORT int completionSymShow ();
IMPORT int connect ();
IMPORT int connectSc ();
IMPORT int connectWithTimeout ();
IMPORT int consoleFd;
IMPORT int coprocCtxReplicate ();
IMPORT int coprocCtxStorageSizeGet ();
IMPORT int coprocDescriptorsInit ();
IMPORT int coprocDisable ();
IMPORT int coprocEnable ();
IMPORT int coprocLibInit ();
IMPORT int coprocMRegs ();
IMPORT int coprocRegListShow ();
IMPORT int coprocSave ();
IMPORT int coprocShow ();
IMPORT int coprocShowInit ();
IMPORT int coprocShowOnDebug ();
IMPORT int coprocTaskCreateHook ();
IMPORT int coprocTaskDeleteHook ();
IMPORT int coprocTaskRegsGet ();
IMPORT int coprocTaskRegsSet ();
IMPORT int coprocTaskRegsShow ();
IMPORT int coprocTaskSwapHook ();
IMPORT int coprocsDiscover ();
IMPORT int copy ();
IMPORT int copyStreams ();
IMPORT int copysign ();
IMPORT int cos ();
IMPORT int cosh ();
IMPORT int cp ();
IMPORT int cplusCallCtors ();
IMPORT int cplusCallDtors ();
IMPORT int cplusCtors ();
IMPORT int cplusCtorsLink ();
IMPORT int cplusDemangle ();
IMPORT int cplusDemangle2 ();
IMPORT int cplusDemangle2Func;
IMPORT int cplusDemangleFunc;
IMPORT int cplusDemangleToBuffer ();
IMPORT int cplusDemangleToBufferFunc;
IMPORT int cplusDemanglerInit ();
IMPORT int cplusDemanglerMode;
IMPORT int cplusDemanglerSet ();
IMPORT int cplusDemanglerStyle;
IMPORT int cplusDemanglerStyleInit ();
IMPORT int cplusDemanglerStyleSet ();
IMPORT int cplusDtors ();
IMPORT int cplusDtorsLink ();
IMPORT int cplusExtractDebug;
IMPORT int cplusLoadCtorsCall ();
IMPORT int cplusLoadFixup ();
IMPORT int cplusMangledSymCheck ();
IMPORT int cplusMangledSymGet ();
IMPORT int cplusMatchMangled ();
IMPORT int cplusMatchMangledListGet ();
IMPORT int cplusUnloadFixup ();
IMPORT int cplusUserAsk ();
IMPORT int cplusXtorGet ();
IMPORT int cplusXtorSet ();
IMPORT int cplusXtorStrategy;
IMPORT int cpsr ();
IMPORT int cpu_node;
IMPORT int creat ();
IMPORT char * creationDate;
IMPORT int cret ();
IMPORT int ctime ();
IMPORT int ctime_r ();
IMPORT int d ();
IMPORT int dataCollectorCreate ();
IMPORT int dataCollectorDelete ();
IMPORT int dataCollectorEach ();
IMPORT int dataCollectorFirstGet ();
IMPORT int dataCollectorLibInit ();
IMPORT int dataCollectorNextGet ();
IMPORT int dataCollectorRegister ();
IMPORT int dataCollectorStateSet ();
IMPORT int dataCollectorTrigAnyCnt;
IMPORT int dataCollectorUnregister ();
IMPORT int dbgBpEpCoreRtn ();
IMPORT int dbgBpListPrint ();
IMPORT int dbgCallPrint ();
IMPORT int dbgDisassemble ();
IMPORT int dbgDynPrintfCommonRtn ();
IMPORT int dbgHelp ();
IMPORT int dbgInit ();
IMPORT int dbgPrintDsp;
IMPORT int dbgPrintFpp;
IMPORT int dbgPrintSimd;
IMPORT int dbgShellCmdInit ();
IMPORT int dbgStackTrace ();
IMPORT int dbgTaskTraceCoreRtn ();
IMPORT int decode_identifier ();
IMPORT int decode_identifier_ex ();
IMPORT int decode_identifier_styled ();
IMPORT int defaultDrv;
IMPORT int demangle ();
IMPORT int demangleResultFree ();
IMPORT int demangleToBuffer ();
IMPORT int demangleToBufferEx ();
IMPORT int demangleToBufferExDebug;
IMPORT int demanglerNameFromStyle ();
IMPORT int demanglerStyleFromName ();
IMPORT int devAttach ();
IMPORT int devDetach ();
IMPORT int devGetByName ();
IMPORT int devInit ();
IMPORT int devMap ();
IMPORT int devMapUnsafe ();
IMPORT int devName ();
IMPORT int devResourceGet ();
IMPORT int devResourceIntrGet ();
IMPORT int devUnmap ();
IMPORT int devUnmapUnsafe ();
IMPORT int devs ();
IMPORT int difftime ();
IMPORT int dirList ();
IMPORT int diskFormat ();
IMPORT int diskInit ();
IMPORT int div ();
IMPORT int div32 ();
IMPORT int div_r ();
IMPORT int dllAdd ();
IMPORT int dllCount ();
IMPORT int dllEach ();
IMPORT int dllGet ();
IMPORT int dllInit ();
IMPORT int dllInsert ();
IMPORT int dllRemove ();
IMPORT int dllTerminate ();
IMPORT int dosfsDiskFormat ();
IMPORT int dprintf ();
IMPORT int dprintfVerboseLvl;
IMPORT int drvTable;
IMPORT int dsmInst ();
IMPORT int dsmNbytes ();
IMPORT int dummyErrno;
IMPORT int dup ();
IMPORT int dup2 ();
IMPORT int dup2Sc ();
IMPORT int dupSc ();
IMPORT int e ();
IMPORT int edrBootCountGet ();
IMPORT int edrBootShow ();
IMPORT int edrClear ();
IMPORT int edrDebug;
IMPORT int edrErrLogAttach ();
IMPORT int edrErrLogClear ();
IMPORT int edrErrLogCreate ();
IMPORT int edrErrLogHeaderProtect ();
IMPORT int edrErrLogHeaderUnprotect ();
IMPORT int edrErrLogIterCreate ();
IMPORT int edrErrLogIterNext ();
IMPORT int edrErrLogMaxNodeCount ();
IMPORT int edrErrLogNodeAlloc ();
IMPORT int edrErrLogNodeCommit ();
IMPORT int edrErrLogNodeCount ();
IMPORT int edrErrLogNodePosition ();
IMPORT int edrErrLogNodeProtect ();
IMPORT int edrErrLogNodeUnprotect ();
IMPORT int edrErrLogValidate ();
IMPORT int edrErrorInject ();
IMPORT int edrErrorInjectDsmHook;
IMPORT int edrErrorInjectHookAdd ();
IMPORT int edrErrorInjectHookDelete ();
IMPORT int edrErrorInjectHookTable;
IMPORT int edrErrorInjectPrePostHookAdd ();
IMPORT int edrErrorInjectPrePostHookDelete ();
IMPORT int edrErrorInjectPrePostHookTable;
IMPORT int edrErrorInjectStub ();
IMPORT int edrErrorInjectTextHookAdd ();
IMPORT int edrErrorInjectTextHookDelete ();
IMPORT int edrErrorInjectTextHookTable;
IMPORT int edrErrorLogClear ();
IMPORT int edrErrorPolicyHookRemove ();
IMPORT int edrErrorRecordCount ();
IMPORT int edrErrorRecordDecode ();
IMPORT int edrFatalShow ();
IMPORT int edrFlagsGet ();
IMPORT int edrFlagsGetSc ();
IMPORT int edrHelp ();
IMPORT int edrHookShow ();
IMPORT int edrInfoShow ();
IMPORT int edrInitFatalPolicyHandler ();
IMPORT int edrInitShow ();
IMPORT int edrInitStatus;
IMPORT int edrInjectHookShow ();
IMPORT int edrInjectPrePostHookShow ();
IMPORT int edrInjectTextHookShow ();
IMPORT int edrIntShow ();
IMPORT int edrInterruptFatalPolicyHandler ();
IMPORT int edrIsDebugMode ();
IMPORT int edrKernelFatalPolicyHandler ();
IMPORT int edrKernelShow ();
IMPORT int edrLibInit ();
IMPORT int edrLibInstalled;
IMPORT int edrLogBaseGet ();
IMPORT int edrLogSizeGet ();
IMPORT int edrMissedErrors;
IMPORT int edrNoMmu;
IMPORT int edrPmArena ();
IMPORT int edrPmRegion ();
IMPORT int edrPolicyHandlerHookAdd ();
IMPORT int edrPolicyHandlerHookGet ();
IMPORT int edrRebootShow ();
IMPORT int edrRootTaskInfo;
IMPORT int edrRtpFatalPolicyHandler ();
IMPORT int edrRtpShow ();
IMPORT int edrScInit ();
IMPORT int edrShellCmdInit ();
IMPORT int edrShow ();
IMPORT int edrShowInit ();
IMPORT int edrStatusMsg ();
IMPORT int edrStubInit ();
IMPORT int edrSystemDebugModeGet ();
IMPORT int edrSystemDebugModeInit ();
IMPORT int edrSystemDebugModeSet ();
IMPORT int edrUserShow ();
IMPORT int edrUsesDemangler;
IMPORT int elfArchInitHook;
IMPORT int elfArchMdlLoadHook;
IMPORT int elfArchReloc ();
IMPORT int elfArchSymProcessHook;
IMPORT int elfArchVerify ();
IMPORT int emacsLedLibInit ();
IMPORT int emulate_gnu_abi_bugs;
IMPORT int end8023AddressForm ();
IMPORT int endDevName ();
IMPORT int endDevTbl;
IMPORT int endEtherAddressForm ();
IMPORT int endEtherCrc32BeGet ();
IMPORT int endEtherCrc32LeGet ();
IMPORT int endEtherHdrInit ();
IMPORT int endEtherPacketAddrGet ();
IMPORT int endEtherPacketDataGet ();
IMPORT int endFindByName ();
IMPORT int endFirstUnitFind ();
IMPORT int endFlagsClr ();
IMPORT int endFlagsGet ();
IMPORT int endFlagsSet ();
IMPORT int endLibInit ();
IMPORT int endList;
IMPORT int endM2Free ();
IMPORT int endM2Init ();
IMPORT int endM2Ioctl ();
IMPORT int endM2Packet;
IMPORT int endMibIfInit ();
IMPORT int endMultiLstCnt ();
IMPORT int endMultiLstFirst ();
IMPORT int endMultiLstNext ();
IMPORT int endObjFlagSet ();
IMPORT int endObjInit ();
IMPORT int endObjectUnload ();
IMPORT int endPollStatsInit ();
IMPORT int endPoolClSize;
IMPORT int endPoolCreate ();
IMPORT int endPoolDestroy ();
IMPORT int endPoolJumboClSize;
IMPORT int endPoolJumboCreate ();
IMPORT int endRcvRtnCall ();
IMPORT int endTxSemGive ();
IMPORT int endTxSemTake ();
IMPORT int envGet ();
IMPORT int envLibInit ();
IMPORT int envLibSemId;
IMPORT int envPrivateCreate ();
IMPORT int envPrivateDestroy ();
IMPORT int envShow ();
IMPORT int erfCatDefSem;
IMPORT int erfCatEventQueues;
IMPORT int erfCategoriesAvailable ();
IMPORT int erfCategoryAllocate ();
IMPORT int erfCategoryQueueCreate ();
IMPORT int erfDbCatSem;
IMPORT int erfDefaultEventQueue;
IMPORT int erfEventQueueSize;
IMPORT int erfEventRaise ();
IMPORT int erfEventTaskOptions;
IMPORT int erfEventTaskPriority;
IMPORT int erfEventTaskStackSize;
IMPORT int erfHandlerDb;
IMPORT int erfHandlerRegister ();
IMPORT int erfHandlerUnregister ();
IMPORT int erfLibInit ();
IMPORT int erfLibInitialized;
IMPORT int erfMaxNumCat;
IMPORT int erfMaxNumType;
IMPORT int erfMaxNumUserCat;
IMPORT int erfMaxNumUserType;
IMPORT int erfNumUserCatDef;
IMPORT int erfNumUserTypeDef;
IMPORT int erfTypeAllocate ();
IMPORT int erfTypesAvailable ();
IMPORT int errno;
IMPORT int errnoGet ();
IMPORT int errnoOfTaskGet ();
IMPORT int errnoOfTaskSet ();
IMPORT int errnoSet ();
IMPORT int etherMultiAdd ();
IMPORT int etherMultiDel ();
IMPORT int etherMultiGet ();
IMPORT int etherbroadcastaddr;
IMPORT int eventClear ();
IMPORT int eventCtlSc ();
IMPORT int eventInit ();
IMPORT int eventLibInit ();
IMPORT int eventPointLibInit ();
IMPORT int eventPointStubLibInit ();
IMPORT int eventPointSwHandle ();
IMPORT int eventPointSwStubConnect ();
IMPORT int eventReceive ();
IMPORT int eventReceiveSc ();
IMPORT int eventRsrcSend ();
IMPORT int eventRsrcShow ();
IMPORT int eventSend ();
IMPORT int eventSendSc ();
IMPORT int eventStart ();
IMPORT int eventTaskShow ();
IMPORT int eventTerminate ();
IMPORT int evtAction;
IMPORT int evtBufferBind ();
IMPORT int evtBufferId;
IMPORT int evtEdrErrorInject ();
IMPORT int evtLogFuncBind ();
IMPORT int evtLogLibInit ();
IMPORT int evtLogPayload ();
IMPORT int evtLogPayloadString ();
IMPORT int evtLogPoint ();
IMPORT int evtLogSyscall ();
IMPORT int evtObjLogFuncBind ();
IMPORT int excEnterDataAbort ();
IMPORT int excEnterPrefetchAbort ();
IMPORT int excEnterSwi ();
IMPORT int excEnterUndef ();
IMPORT int excExcContinue ();
IMPORT int excExcHandle ();
IMPORT int excExcepHook;
IMPORT int excHookAdd ();
IMPORT int excInit ();
IMPORT int excIntConnect ();
IMPORT int excIntHandle ();
IMPORT int excJobAdd ();
IMPORT int excOsmInit ();
IMPORT int excPtrTableOffsetSet ();
IMPORT int excShowInit ();
IMPORT int excVBARGet ();
IMPORT int excVBARSet ();
IMPORT int excVecBaseSet ();
IMPORT int excVecGet ();
IMPORT int excVecInit ();
IMPORT int excVecSet ();
IMPORT int excVecUpdate ();
IMPORT int excVmStateSet ();
IMPORT int exit ();
IMPORT int exp ();
IMPORT int expm1 ();
IMPORT int fabs ();
IMPORT int fchmod ();
IMPORT int fclose ();
IMPORT int fcntl ();
IMPORT int fcntl_dup ();
IMPORT int fdClass;
IMPORT int fdInvalidDrv;
IMPORT int fdatasync ();
IMPORT int fdopen ();
IMPORT int fdprintf ();
IMPORT int feof ();
IMPORT int ferror ();
IMPORT int fflush ();
IMPORT int ffs32Lsb ();
IMPORT int ffs32Msb ();
IMPORT int ffs64Lsb ();
IMPORT int ffs64Msb ();
IMPORT int ffsLsb ();
IMPORT int ffsMsb ();
IMPORT int fgetc ();
IMPORT int fgetpos ();
IMPORT int fgets ();
IMPORT int fieldSzIncludeSign;
IMPORT int fileUpPathDefaultPerm;
IMPORT int fileno ();
IMPORT int fioBaseLibInit ();
IMPORT int fioBufPrint ();
IMPORT int fioBufPut ();
IMPORT int fioFltInstall ();
IMPORT int fioFormatV ();
IMPORT int fioLibInit ();
IMPORT int fioRdString ();
IMPORT int fioRead ();
IMPORT int fioScanV ();
IMPORT int fioSnBufPut ();
IMPORT int floatInit ();
IMPORT int floor ();
IMPORT int fmod ();
IMPORT int fopen ();
IMPORT int fpArmModules;
IMPORT int fpTypeGet ();
IMPORT int fpathconf ();
IMPORT int fpathconfSc ();
IMPORT int fppArchInit ();
IMPORT int fppArchTaskCreateInit ();
IMPORT int fppCtxShow ();
IMPORT int fppCtxToRegs ();
IMPORT int fppProbe ();
IMPORT int fppRegListShow ();
IMPORT int fppRegsToCtx ();
IMPORT int fppRestore ();
IMPORT int fppSave ();
IMPORT int fprintf ();
IMPORT int fputc ();
IMPORT int fputs ();
IMPORT int fread ();
IMPORT int free ();
IMPORT int freeifaddrs ();
IMPORT int freopen ();
IMPORT int frexp ();
IMPORT int fsEventUtilLibInit ();
IMPORT int fsMonitorInit ();
IMPORT int fsPathAddedEventRaise ();
IMPORT int fsPathAddedEventSetup ();
IMPORT int fsWaitForPath ();
IMPORT int fscanf ();
IMPORT int fseek ();
IMPORT int fsetpos ();
IMPORT int fsmGetDriver ();
IMPORT int fsmGetVolume ();
IMPORT int fsmInitialized;
IMPORT int fsmNameInstall ();
IMPORT int fsmNameMap ();
IMPORT int fsmNameUninstall ();
IMPORT int fsmProbeInstall ();
IMPORT int fsmProbeUninstall ();
IMPORT int fsmUnmountHookAdd ();
IMPORT int fsmUnmountHookDelete ();
IMPORT int fsmUnmountHookRun ();
IMPORT int fstat ();
IMPORT int fstatfs ();
IMPORT int fstatfs64 ();
IMPORT int fsync ();
IMPORT int ftell ();
IMPORT int ftpCommand ();
IMPORT int ftpCommandEnhanced ();
IMPORT int ftpDataConnGet ();
IMPORT int ftpDataConnInit ();
IMPORT int ftpDataConnInitPassiveMode ();
IMPORT int ftpHookup ();
IMPORT int ftpLibDebugOptionsSet ();
IMPORT int ftpLibInit ();
IMPORT int ftpLogin ();
IMPORT int ftpLs ();
IMPORT int ftpReplyGet ();
IMPORT int ftpReplyGetEnhanced ();
IMPORT int ftpReplyTimeout;
IMPORT int ftpTransientConfigGet ();
IMPORT int ftpTransientConfigSet ();
IMPORT int ftpTransientFatalInstall ();
IMPORT int ftpVerbose;
IMPORT int ftpXfer ();
IMPORT int ftplDebug;
IMPORT int ftplPasvModeDisable;
IMPORT int ftplTransientMaxRetryCount;
IMPORT int ftplTransientRetryInterval;
IMPORT int funcXbdBlkCacheAttach;
IMPORT int funcXbdBlkCacheDetach;
IMPORT int funcXbdBlkCacheStrategy;
IMPORT int fwrite ();
IMPORT int genPhyDevRegistration;
IMPORT int genPhyRegister ();
IMPORT int getHiddenSectorsFromDPT ();
IMPORT int getSymNames ();
IMPORT int getc ();
IMPORT int getchar ();
IMPORT int getcwd ();
IMPORT int getenv ();
IMPORT int getenv_s ();
IMPORT int gethostname ();
IMPORT int getifaddrs ();
IMPORT int getlhostbyaddr ();
IMPORT int getlhostbyname ();
IMPORT int getpeername ();
IMPORT int getpeernameSc ();
IMPORT int getpid ();
IMPORT int getpidSc ();
IMPORT int getppidSc ();
IMPORT int getprlimitSc ();
IMPORT int gets ();
IMPORT int getsockname ();
IMPORT int getsocknameSc ();
IMPORT int getsockopt ();
IMPORT int getsockoptSc ();
IMPORT int gettimeofday ();
IMPORT int getw ();
IMPORT int getwd ();
IMPORT int globalNoStackFill;
IMPORT int globalRAMPgPoolId;
IMPORT int gmtime ();
IMPORT int gmtime_r ();
IMPORT int gopherHookAdd ();
IMPORT int gopherWriteChar ();
IMPORT int gopherWriteScalar ();
IMPORT int gptAdd ();
IMPORT int gptCheckMap ();
IMPORT int gptCoreDebug;
IMPORT int gptCreate ();
IMPORT int gptCreatePartDev ();
IMPORT int gptDestroy ();
IMPORT int gptExtParse ();
IMPORT int gptMapDebug;
IMPORT int gptMapWrite ();
IMPORT int gptMbrParse ();
IMPORT int gptMigrate ();
IMPORT int gptParse ();
IMPORT int gptPartsGet ();
IMPORT int gptRead ();
IMPORT int gptRecover ();
IMPORT int gptRemove ();
IMPORT int gptShowMap ();
IMPORT int gptShowMbr ();
IMPORT int gptShowPartHdr ();
IMPORT int gptShowPartTable ();
IMPORT int h ();
IMPORT int handleContextGet ();
IMPORT int handleContextGetBase ();
IMPORT int handleContextSet ();
IMPORT int handleInit ();
IMPORT int handleShow ();
IMPORT int handleShowConnect ();
IMPORT int handleTerminate ();
IMPORT int handleTypeGet ();
IMPORT int handleVerify ();
IMPORT int hardWareInterFaceBusInit ();
IMPORT int hardWareInterFaceInit ();
IMPORT int hashFuncIterScale ();
IMPORT int hashFuncModulo ();
IMPORT int hashFuncMultiply ();
IMPORT int hashKeyCmp ();
IMPORT int hashKeyStrCmp ();
IMPORT int hashLibInit ();
IMPORT int hashTblCreate ();
IMPORT int hashTblDelete ();
IMPORT int hashTblDestroy ();
IMPORT int hashTblEach ();
IMPORT int hashTblFind ();
IMPORT int hashTblInit ();
IMPORT int hashTblPut ();
IMPORT int hashTblRemove ();
IMPORT int hashTblTerminate ();
IMPORT int hcfDeviceGet ();
IMPORT int hcfDeviceList;
IMPORT int hcfDeviceNum;
IMPORT int hdprintf ();
IMPORT int help ();
IMPORT int histLoad ();
IMPORT int histSave ();
IMPORT int histShellCmdInit ();
IMPORT int hookAddToHead ();
IMPORT int hookAddToTail ();
IMPORT int hookDelete ();
IMPORT int hookFind ();
IMPORT int hookShow ();
IMPORT int hookTblAddToHead ();
IMPORT int hookTblAddToTail ();
IMPORT int hookTblDelete ();
IMPORT int hookTblFind ();
IMPORT int hookTblInit ();
IMPORT int hookTblShow ();
IMPORT int hookTblUpdatersUnpend ();
IMPORT int hostAdd ();
IMPORT int hostDelete ();
IMPORT int hostGetByAddr ();
IMPORT int hostGetByName ();
IMPORT int hostInitFlag;
IMPORT int hostList;
IMPORT int hostListSem;
IMPORT int hostTblInit ();
IMPORT int hostTblSearchByAddr ();
IMPORT int hostTblSearchByAddr2 ();
IMPORT int hostTblSearchByName ();
IMPORT int hostTblSearchByName2 ();
IMPORT int hostTblSetup ();
IMPORT int hostentAlloc ();
IMPORT int hostentFree ();
IMPORT int hostlib_node;
IMPORT int hostnameSetup ();
IMPORT int hostnameSysctlSetup ();
IMPORT int hrfsDiskFormat ();
IMPORT int hrfsFmtRtn;
IMPORT int hwMemAlloc ();
IMPORT int hwMemFree ();
IMPORT int hwMemLibInit ();
IMPORT int hwMemPool;
IMPORT int hwMemPoolCreate ();
IMPORT int hw_node;
IMPORT int i ();
IMPORT int iam ();
IMPORT int imxEpitDev0Resources;
IMPORT int imxEpitDev1Resources;
IMPORT int imxFec0Resources;
IMPORT int imxSioDev1Resources;
IMPORT int imxSioDev2Resources;
IMPORT int in_netof ();
IMPORT int index ();
IMPORT int inet_addr ();
IMPORT int inet_aton ();
IMPORT int inet_lnaof ();
IMPORT int inet_makeaddr ();
IMPORT int inet_makeaddr_b ();
IMPORT int inet_netof ();
IMPORT int inet_netof_string ();
IMPORT int inet_network ();
IMPORT int inet_ntoa ();
IMPORT int inet_ntoa_b ();
IMPORT int inet_ntop ();
IMPORT int inet_pton ();
IMPORT int initApplLogger ();
IMPORT int instParamModify_desc;
IMPORT int intArchConnect ();
IMPORT int intArchDisconnect ();
IMPORT int intCnt;
IMPORT int intConnect ();
IMPORT int intContext ();
IMPORT int intCount ();
IMPORT int intCpuEnable ();
IMPORT int intCpuLock ();
IMPORT int intCpuMicroLock ();
IMPORT int intCpuMicroUnlock ();
IMPORT int intCpuUnlock ();
IMPORT int intCtlrChainISR ();
IMPORT int intCtlrDevID;
IMPORT int intCtlrHwConfGet ();
IMPORT int intCtlrISRAdd ();
IMPORT int intCtlrISRDisable ();
IMPORT int intCtlrISREnable ();
IMPORT int intCtlrISRRemove ();
IMPORT int intCtlrPinFind ();
IMPORT int intCtlrStrayISR ();
IMPORT int intCtlrTableArgGet ();
IMPORT int intCtlrTableCreate ();
IMPORT int intCtlrTableFlagsGet ();
IMPORT int intCtlrTableFlagsSet ();
IMPORT int intCtlrTableIsrGet ();
IMPORT int intCtlrTableUserSet ();
IMPORT int intDemuxErrorCount;
IMPORT int intDisable ();
IMPORT int intDisconnect ();
IMPORT int intEnable ();
IMPORT int intEnt ();
IMPORT int intExit ();
IMPORT int intIFLock ();
IMPORT int intIFUnlock ();
IMPORT int intIntRtnNonPreempt ();
IMPORT int intIntRtnPreempt ();
IMPORT int intLevelSet ();
IMPORT int intLibInit ();
IMPORT int intLock ();
IMPORT int intLockLevelGet ();
IMPORT int intLockLevelSet ();
IMPORT int intNestingLevel;
IMPORT int intRegsLock ();
IMPORT int intRegsUnlock ();
IMPORT int intRestrict ();
IMPORT int intUninitVecSet ();
IMPORT int intUnlock ();
IMPORT int intVBRSet ();
IMPORT int intVecBaseGet ();
IMPORT int intVecBaseSet ();
IMPORT int intVecTableWriteProtect ();
IMPORT int ioDefPath;
IMPORT int ioDefPathCat ();
IMPORT int ioDefPathGet ();
IMPORT int ioDefPathSet ();
IMPORT int ioDefPathValidate ();
IMPORT int ioFullFileNameGet ();
IMPORT int ioGlobalStdGet ();
IMPORT int ioGlobalStdSet ();
IMPORT int ioHelp ();
IMPORT int ioMaxLinkLevels;
IMPORT int ioPxCreateOrOpen ();
IMPORT int ioTaskStdGet ();
IMPORT int ioTaskStdSet ();
IMPORT int ioctl ();
IMPORT int iosClose ();
IMPORT int iosCreate ();
IMPORT int iosDelete ();
IMPORT int iosDevAdd ();
IMPORT int iosDevCheck ();
IMPORT int iosDevDelCallback ();
IMPORT int iosDevDelDrv ();
IMPORT int iosDevDelete ();
IMPORT int iosDevFind ();
IMPORT int iosDevMatch ();
IMPORT int iosDevReplace ();
IMPORT int iosDevReplaceExt ();
IMPORT int iosDevResume ();
IMPORT int iosDevShow ();
IMPORT int iosDevSuspend ();
IMPORT int iosDrvInit ();
IMPORT int iosDrvInstall ();
IMPORT int iosDrvIoctl ();
IMPORT int iosDrvIoctlMemValSet ();
IMPORT int iosDrvRemove ();
IMPORT int iosDrvShow ();
IMPORT int iosDvList;
IMPORT int iosFdDevFind ();
IMPORT int iosFdDrvValue ();
IMPORT int iosFdEntryGet ();
IMPORT int iosFdEntryIoctl ();
IMPORT int iosFdEntryPool;
IMPORT int iosFdEntryReturn ();
IMPORT int iosFdEntrySet ();
IMPORT int iosFdFree ();
IMPORT int iosFdMap ();
IMPORT int iosFdMaxFiles ();
IMPORT int iosFdNew ();
IMPORT int iosFdSet ();
IMPORT int iosFdShow ();
IMPORT int iosFdTable;
IMPORT int iosFdTableLock ();
IMPORT int iosFdTableUnlock ();
IMPORT int iosFdValue ();
IMPORT int iosInit ();
IMPORT int iosIoctl ();
IMPORT int iosIoctlInternal ();
IMPORT int iosLibInitialized;
IMPORT int iosLock ();
IMPORT int iosMaxDrivers;
IMPORT int iosMaxFiles;
IMPORT int iosNextDevGet ();
IMPORT int iosOpen ();
IMPORT int iosPathFdEntryIoctl ();
IMPORT int iosPathLibInit ();
IMPORT int iosPse52Mode;
IMPORT int iosPxLibInit ();
IMPORT int iosPxLibInitialized;
IMPORT int iosRead ();
IMPORT int iosRmvFdEntrySet ();
IMPORT int iosRmvLibInit ();
IMPORT int iosRtpDefPathGet ();
IMPORT int iosRtpDefPathSet ();
IMPORT int iosRtpDevCloseOrInvalidate ();
IMPORT int iosRtpFdEntryMap ();
IMPORT int iosRtpFdInvalid ();
IMPORT int iosRtpFdReserve ();
IMPORT int iosRtpFdReserveCntrl ();
IMPORT int iosRtpFdSetup ();
IMPORT int iosRtpFdShow ();
IMPORT int iosRtpFdTableGet ();
IMPORT int iosRtpFdTableSizeGet ();
IMPORT int iosRtpFdTblEntryGet ();
IMPORT int iosRtpFdUnmap2 ();
IMPORT int iosRtpIoTableSizeGet ();
IMPORT int iosRtpIoTableSizeSet ();
IMPORT int iosRtpLibInit ();
IMPORT int iosRtpTableSizeSet ();
IMPORT int iosScLibInit ();
IMPORT int iosShowInit ();
IMPORT int iosTaskCwdGet ();
IMPORT int iosTaskCwdSet ();
IMPORT int iosUnlock ();
IMPORT int iosWrite ();
IMPORT int iovecMemValidate ();
IMPORT int ip_inaddr_any;
IMPORT int ipc_node;
IMPORT int ipcomNetTask ();
IMPORT int ipcom_accept ();
IMPORT int ipcom_accept_usr ();
IMPORT int ipcom_asctime_r_vxworks ();
IMPORT int ipcom_atomic_add ();
IMPORT int ipcom_atomic_add_and_return ();
IMPORT int ipcom_atomic_dec ();
IMPORT int ipcom_atomic_get ();
IMPORT int ipcom_atomic_inc ();
IMPORT int ipcom_atomic_ptr_cas ();
IMPORT int ipcom_atomic_set ();
IMPORT int ipcom_atomic_sub ();
IMPORT int ipcom_atomic_sub_and_return ();
IMPORT int ipcom_bind ();
IMPORT int ipcom_bind_usr ();
IMPORT int ipcom_block_create ();
IMPORT int ipcom_block_delete ();
IMPORT int ipcom_block_post ();
IMPORT int ipcom_block_reader_create ();
IMPORT int ipcom_block_wait ();
IMPORT int ipcom_cache_line_size ();
IMPORT int ipcom_calloc ();
IMPORT int ipcom_chdir ();
IMPORT int ipcom_clearenv ();
IMPORT int ipcom_closedir ();
IMPORT int ipcom_closelog ();
IMPORT int ipcom_cmd_if_caps_to_str ();
IMPORT int ipcom_cmd_if_flags_to_str ();
IMPORT int ipcom_cmd_key_to_str ();
IMPORT int ipcom_cmd_sockaddr_to_str ();
IMPORT int ipcom_cmd_str_to_key ();
IMPORT int ipcom_cmd_str_to_key2 ();
IMPORT int ipcom_cmsg_nxthdr ();
IMPORT int ipcom_conf_max_link_hdr_size;
IMPORT int ipcom_conf_pkt_pool_buffer_alignment;
IMPORT int ipcom_conf_pkt_pool_buffer_extra_space;
IMPORT int ipcom_configure ();
IMPORT int ipcom_configure_reserved_cpus ();
IMPORT int ipcom_connect ();
IMPORT int ipcom_connect_usr ();
IMPORT int ipcom_cpu_is_online ();
IMPORT int ipcom_cpu_reserved_alloc ();
IMPORT int ipcom_cpu_reserved_free ();
IMPORT int ipcom_create ();
IMPORT int ipcom_ctime_r_vxworks ();
IMPORT int ipcom_dns;
IMPORT int ipcom_dns_init_ok;
IMPORT int ipcom_drv_eth_create ();
IMPORT int ipcom_drv_eth_exit ();
IMPORT int ipcom_drv_eth_filter_add_mcast_addr ();
IMPORT int ipcom_drv_eth_filter_exit ();
IMPORT int ipcom_drv_eth_filter_init ();
IMPORT int ipcom_drv_eth_filter_remove_mcast_addr ();
IMPORT int ipcom_drv_eth_init ();
IMPORT int ipcom_drv_eth_ip_attach ();
IMPORT int ipcom_errno_get ();
IMPORT int ipcom_errno_set ();
IMPORT int ipcom_fclose ();
IMPORT int ipcom_fdopen ();
IMPORT int ipcom_feof ();
IMPORT int ipcom_ferror ();
IMPORT int ipcom_fflush ();
IMPORT int ipcom_fileclose ();
IMPORT int ipcom_fileno ();
IMPORT int ipcom_fileopen ();
IMPORT int ipcom_fileread ();
IMPORT int ipcom_filewrite ();
IMPORT int ipcom_fopen ();
IMPORT int ipcom_forwarder_ipsec_sa_cache_size;
IMPORT int ipcom_forwarder_ipsec_single_output_queue;
IMPORT int ipcom_fread ();
IMPORT int ipcom_free ();
IMPORT int ipcom_freeaddrinfo ();
IMPORT int ipcom_freeaddrinfo2 ();
IMPORT int ipcom_freeifaddrs ();
IMPORT int ipcom_fseek ();
IMPORT int ipcom_fstat ();
IMPORT int ipcom_ftell ();
IMPORT int ipcom_fwrite ();
IMPORT int ipcom_get_cpuid ();
IMPORT int ipcom_get_ip_if_name ();
IMPORT int ipcom_get_mux_dev_name ();
IMPORT int ipcom_get_start_shell_ptr ();
IMPORT int ipcom_get_true_cpuid ();
IMPORT int ipcom_getaddrinfo ();
IMPORT int ipcom_getaddrinfo2 ();
IMPORT int ipcom_getcwd ();
IMPORT int ipcom_getenv ();
IMPORT int ipcom_getenv_as_int ();
IMPORT int ipcom_gethostbyaddr ();
IMPORT int ipcom_gethostbyaddr_r ();
IMPORT int ipcom_gethostbyaddrlocal ();
IMPORT int ipcom_gethostbyname ();
IMPORT int ipcom_gethostbyname_r ();
IMPORT int ipcom_gethostbynamelocal ();
IMPORT int ipcom_getifaddrs ();
IMPORT int ipcom_getlogmask_on ();
IMPORT int ipcom_getnameinfo ();
IMPORT int ipcom_getnameinfo2 ();
IMPORT int ipcom_getopt ();
IMPORT int ipcom_getopt_clear ();
IMPORT int ipcom_getopt_clear_r ();
IMPORT int ipcom_getopt_data;
IMPORT int ipcom_getopt_r ();
IMPORT int ipcom_getpeername ();
IMPORT int ipcom_getpeername_usr ();
IMPORT int ipcom_getpid ();
IMPORT int ipcom_getprotobyname ();
IMPORT int ipcom_getprotobynumber ();
IMPORT int ipcom_getservbyname ();
IMPORT int ipcom_getservbyport ();
IMPORT int ipcom_getsockaddrbyaddr ();
IMPORT int ipcom_getsockaddrbyaddrname ();
IMPORT int ipcom_getsockname ();
IMPORT int ipcom_getsockname_usr ();
IMPORT int ipcom_getsockopt ();
IMPORT int ipcom_getsockopt_usr ();
IMPORT int ipcom_gettimeofday ();
IMPORT int ipcom_h_errno;
IMPORT int ipcom_hash_add ();
IMPORT int ipcom_hash_delete ();
IMPORT int ipcom_hash_for_each ();
IMPORT int ipcom_hash_get ();
IMPORT int ipcom_hash_new ();
IMPORT int ipcom_hash_remove ();
IMPORT int ipcom_hash_update ();
IMPORT int ipcom_heap_sort ();
IMPORT int ipcom_if_attach ();
IMPORT int ipcom_if_attach_and_lock ();
IMPORT int ipcom_if_changelinkaddr ();
IMPORT int ipcom_if_changemtu ();
IMPORT int ipcom_if_changename ();
IMPORT int ipcom_if_detach ();
IMPORT int ipcom_if_free ();
IMPORT int ipcom_if_freenameindex ();
IMPORT int ipcom_if_indextoname ();
IMPORT int ipcom_if_malloc ();
IMPORT int ipcom_if_nameindex ();
IMPORT int ipcom_if_nametoindex ();
IMPORT int ipcom_if_nametonetif ();
IMPORT int ipcom_ima_stack_task ();
IMPORT int ipcom_in_checksum ();
IMPORT int ipcom_in_checksum_finish ();
IMPORT int ipcom_in_checksum_memcpy ();
IMPORT int ipcom_in_checksum_memcpy_asm ();
IMPORT int ipcom_in_checksum_pkt ();
IMPORT int ipcom_in_checksum_update ();
IMPORT int ipcom_in_checksum_update2_asm ();
IMPORT int ipcom_in_checksum_update_pkt ();
IMPORT int ipcom_inet_addr ();
IMPORT int ipcom_inet_aton ();
IMPORT int ipcom_inet_ntoa ();
IMPORT int ipcom_inet_ntop ();
IMPORT int ipcom_inet_pton ();
IMPORT int ipcom_init_config_vars ();
IMPORT int ipcom_initd ();
IMPORT int ipcom_interrupt_disable ();
IMPORT int ipcom_interrupt_enable ();
IMPORT int ipcom_ipc_close ();
IMPORT int ipcom_ipc_free ();
IMPORT int ipcom_ipc_install ();
IMPORT int ipcom_ipc_isopen ();
IMPORT int ipcom_ipc_malloc ();
IMPORT int ipcom_ipc_open ();
IMPORT int ipcom_ipc_receive ();
IMPORT int ipcom_ipc_send ();
IMPORT int ipcom_ipc_size ();
IMPORT int ipcom_ipc_uninstall ();
IMPORT int ipcom_ipd_datamsg ();
IMPORT int ipcom_ipd_exit ();
IMPORT int ipcom_ipd_init ();
IMPORT int ipcom_ipd_input ();
IMPORT int ipcom_ipd_input_process ();
IMPORT int ipcom_ipd_kill ();
IMPORT int ipcom_ipd_products;
IMPORT int ipcom_ipd_read ();
IMPORT int ipcom_ipd_reconfigure ();
IMPORT int ipcom_ipd_send ();
IMPORT int ipcom_ipd_sendmsg ();
IMPORT int ipcom_ipd_start ();
IMPORT int ipcom_ipproto_name ();
IMPORT int ipcom_is_pid_valid ();
IMPORT int ipcom_is_stack_task ();
IMPORT int ipcom_job_queue_init ();
IMPORT int ipcom_job_queue_pipe_schedule ();
IMPORT int ipcom_job_queue_schedule ();
IMPORT int ipcom_job_queue_schedule_singleton ();
IMPORT int ipcom_job_queue_schedule_singleton_delayed ();
IMPORT int ipcom_job_queue_singleton_delete ();
IMPORT int ipcom_job_queue_singleton_new ();
IMPORT int ipcom_key_db_file_root;
IMPORT int ipcom_list_first ();
IMPORT int ipcom_list_init ();
IMPORT int ipcom_list_insert_after ();
IMPORT int ipcom_list_insert_before ();
IMPORT int ipcom_list_insert_first ();
IMPORT int ipcom_list_insert_last ();
IMPORT int ipcom_list_last ();
IMPORT int ipcom_list_next ();
IMPORT int ipcom_list_prev ();
IMPORT int ipcom_list_remove ();
IMPORT int ipcom_list_unlink_head ();
IMPORT int ipcom_listen ();
IMPORT int ipcom_listen_usr ();
IMPORT int ipcom_lseek ();
IMPORT int ipcom_malloc ();
IMPORT int ipcom_mask_to_prefixlen ();
IMPORT int ipcom_mb ();
IMPORT int ipcom_mcmd_ifconfig ();
IMPORT int ipcom_mcmd_route ();
IMPORT int ipcom_memory_pool_new ();
IMPORT int ipcom_microtime ();
IMPORT int ipcom_millisleep ();
IMPORT int ipcom_mipc_addr2offset ();
IMPORT int ipcom_mipc_offset2addr ();
IMPORT int ipcom_mkdir ();
IMPORT int ipcom_mutex_create ();
IMPORT int ipcom_mutex_delete ();
IMPORT int ipcom_mutex_lock ();
IMPORT int ipcom_mutex_unlock ();
IMPORT int ipcom_null_pool_create;
IMPORT int ipcom_num_configured_cpus ();
IMPORT int ipcom_num_online_cpus ();
IMPORT int ipcom_observer_notify ();
IMPORT int ipcom_once ();
IMPORT int ipcom_once_mutex;
IMPORT int ipcom_opendir ();
IMPORT int ipcom_openlog ();
IMPORT int ipcom_parse_argstr ();
IMPORT int ipcom_pipe_attr_init ();
IMPORT int ipcom_pipe_free ();
IMPORT int ipcom_pipe_generic_create ();
IMPORT int ipcom_pipe_job_queue_create ();
IMPORT int ipcom_pipe_lockless_create ();
IMPORT int ipcom_pipe_new ();
IMPORT int ipcom_pipe_register_type ();
IMPORT int ipcom_pipe_tv_zero;
IMPORT int ipcom_pkt_alloc_info ();
IMPORT int ipcom_pkt_copy_info ();
IMPORT int ipcom_pkt_create ();
IMPORT int ipcom_pkt_create_info ();
IMPORT int ipcom_pkt_free ();
IMPORT int ipcom_pkt_get_info ();
IMPORT int ipcom_pkt_get_info_and_size ();
IMPORT int ipcom_pkt_get_info_safe ();
IMPORT int ipcom_pkt_hdrspace ();
IMPORT int ipcom_pkt_input ();
IMPORT int ipcom_pkt_input_queue ();
IMPORT int ipcom_pkt_make_linear ();
IMPORT int ipcom_pkt_malloc ();
IMPORT int ipcom_pkt_output_done ();
IMPORT int ipcom_pkt_set_info ();
IMPORT int ipcom_pkt_sg_get_data ();
IMPORT int ipcom_pkt_trim_head ();
IMPORT int ipcom_pkt_trim_tail ();
IMPORT int ipcom_pktbuf_free ();
IMPORT int ipcom_port;
IMPORT int ipcom_port_pkt_hdr_extra_size;
IMPORT int ipcom_pqueue_delete ();
IMPORT int ipcom_pqueue_for_each ();
IMPORT int ipcom_pqueue_get ();
IMPORT int ipcom_pqueue_get_next ();
IMPORT int ipcom_pqueue_insert ();
IMPORT int ipcom_pqueue_new ();
IMPORT int ipcom_pqueue_nop_store_index ();
IMPORT int ipcom_pqueue_remove ();
IMPORT int ipcom_pqueue_remove_next ();
IMPORT int ipcom_pqueue_size ();
IMPORT int ipcom_preempt_disable ();
IMPORT int ipcom_preempt_enable ();
IMPORT int ipcom_priority_map;
IMPORT int ipcom_proc_acreate ();
IMPORT int ipcom_proc_attr_init ();
IMPORT int ipcom_proc_cpu_affinity_clr ();
IMPORT int ipcom_proc_cpu_affinity_get ();
IMPORT int ipcom_proc_cpu_affinity_set ();
IMPORT int ipcom_proc_cpu_affinity_set_all ();
IMPORT int ipcom_proc_create ();
IMPORT int ipcom_proc_exit ();
IMPORT int ipcom_proc_find ();
IMPORT int ipcom_proc_free ();
IMPORT int ipcom_proc_getprio ();
IMPORT int ipcom_proc_init ();
IMPORT int ipcom_proc_malloc ();
IMPORT int ipcom_proc_self ();
IMPORT int ipcom_proc_setprio ();
IMPORT int ipcom_proc_vr_get ();
IMPORT int ipcom_proc_vr_set ();
IMPORT int ipcom_proc_yield ();
IMPORT int ipcom_rand ();
IMPORT int ipcom_random ();
IMPORT int ipcom_random_init ();
IMPORT int ipcom_random_seed_state ();
IMPORT int ipcom_readdir ();
IMPORT int ipcom_realloc ();
IMPORT int ipcom_recv ();
IMPORT int ipcom_recv_usr ();
IMPORT int ipcom_recvfrom ();
IMPORT int ipcom_recvfrom_usr ();
IMPORT int ipcom_recvmsg ();
IMPORT int ipcom_recvmsg_usr ();
IMPORT int ipcom_register_dev_name_mapping ();
IMPORT int ipcom_rename ();
IMPORT int ipcom_rewind ();
IMPORT int ipcom_rmb ();
IMPORT int ipcom_rmdir ();
IMPORT int ipcom_route_add ();
IMPORT int ipcom_route_first_entry ();
IMPORT int ipcom_route_free_table ();
IMPORT int ipcom_route_init_subtree_mask ();
IMPORT int ipcom_route_key_cmp ();
IMPORT int ipcom_route_lookup ();
IMPORT int ipcom_route_new_table ();
IMPORT int ipcom_route_next_entry ();
IMPORT int ipcom_route_remove ();
IMPORT int ipcom_route_walk_tree ();
IMPORT int ipcom_route_walk_tree_backwards ();
IMPORT int ipcom_rtp_tcb_index_get_fd ();
IMPORT int ipcom_run_cmd ();
IMPORT int ipcom_sem_create ();
IMPORT int ipcom_sem_delete ();
IMPORT int ipcom_sem_flush ();
IMPORT int ipcom_sem_getvalue ();
IMPORT int ipcom_sem_interrupt_flush ();
IMPORT int ipcom_sem_interrupt_post ();
IMPORT int ipcom_sem_post ();
IMPORT int ipcom_sem_wait ();
IMPORT int ipcom_send ();
IMPORT int ipcom_send_usr ();
IMPORT int ipcom_sendmsg ();
IMPORT int ipcom_sendmsg_usr ();
IMPORT int ipcom_sendto ();
IMPORT int ipcom_sendto_usr ();
IMPORT int ipcom_set_add ();
IMPORT int ipcom_set_clone ();
IMPORT int ipcom_set_contains ();
IMPORT int ipcom_set_delete ();
IMPORT int ipcom_set_equal ();
IMPORT int ipcom_set_for_each ();
IMPORT int ipcom_set_intersection ();
IMPORT int ipcom_set_new ();
IMPORT int ipcom_set_remove ();
IMPORT int ipcom_set_remove_all ();
IMPORT int ipcom_set_start_shell_ptr ();
IMPORT int ipcom_set_subtract ();
IMPORT int ipcom_set_union ();
IMPORT int ipcom_setenv ();
IMPORT int ipcom_setenv_as_int ();
IMPORT int ipcom_setlogfile ();
IMPORT int ipcom_setlogmask_on ();
IMPORT int ipcom_setlogudp ();
IMPORT int ipcom_setsockopt ();
IMPORT int ipcom_setsockopt_usr ();
IMPORT int ipcom_settimeofday ();
IMPORT int ipcom_shell_add_cmd ();
IMPORT int ipcom_shell_cmd_head;
IMPORT int ipcom_shell_find_cmd ();
IMPORT int ipcom_shell_find_cmd_hook;
IMPORT int ipcom_shell_fread ();
IMPORT int ipcom_shell_fwrite ();
IMPORT int ipcom_shell_remove_cmd ();
IMPORT int ipcom_shutdown ();
IMPORT int ipcom_shutdown_usr ();
IMPORT int ipcom_slab_add ();
IMPORT int ipcom_slab_alloc_from ();
IMPORT int ipcom_slab_alloc_try ();
IMPORT int ipcom_slab_free ();
IMPORT int ipcom_slab_get_objects_per_slab ();
IMPORT int ipcom_slab_memory_pool_list;
IMPORT int ipcom_slab_new ();
IMPORT int ipcom_slab_once;
IMPORT int ipcom_sleep ();
IMPORT int ipcom_sockaddr_to_prefixlen ();
IMPORT int ipcom_socket ();
IMPORT int ipcom_socket_usr ();
IMPORT int ipcom_socketclose ();
IMPORT int ipcom_socketclose_usr ();
IMPORT int ipcom_socketioctl ();
IMPORT int ipcom_socketioctl_usr ();
IMPORT int ipcom_socketread ();
IMPORT int ipcom_socketread_usr ();
IMPORT int ipcom_socketselect ();
IMPORT int ipcom_socketselect_usr ();
IMPORT int ipcom_socketwrite ();
IMPORT int ipcom_socketwrite_usr ();
IMPORT int ipcom_socketwritev ();
IMPORT int ipcom_socketwritev_usr ();
IMPORT int ipcom_spinlock_create ();
IMPORT int ipcom_spinlock_delete ();
IMPORT int ipcom_spinlock_lock ();
IMPORT int ipcom_spinlock_unlock ();
IMPORT int ipcom_srand ();
IMPORT int ipcom_srandom ();
IMPORT int ipcom_stackd_init ();
IMPORT int ipcom_start ();
IMPORT int ipcom_start_shell ();
IMPORT int ipcom_start_shell_native ();
IMPORT int ipcom_start_shell_ptr;
IMPORT int ipcom_stat ();
IMPORT int ipcom_stderr ();
IMPORT int ipcom_stdin ();
IMPORT int ipcom_stdio_set_echo ();
IMPORT int ipcom_stdout ();
IMPORT int ipcom_str_in_list ();
IMPORT int ipcom_strcasecmp ();
IMPORT int ipcom_strerror ();
IMPORT int ipcom_strerror_r ();
IMPORT int ipcom_strncasecmp ();
IMPORT int ipcom_sys_free;
IMPORT int ipcom_sys_malloc;
IMPORT int ipcom_sysctl ();
IMPORT int ipcom_syslog ();
IMPORT int ipcom_syslog_facility_names;
IMPORT int ipcom_syslog_printf ();
IMPORT int ipcom_syslog_priority_names;
IMPORT int ipcom_syslogd_init ();
IMPORT int ipcom_sysvar_add_observer ();
IMPORT int ipcom_sysvar_ext_setv ();
IMPORT int ipcom_sysvar_for_each ();
IMPORT int ipcom_sysvar_get ();
IMPORT int ipcom_sysvar_get0 ();
IMPORT int ipcom_sysvar_get_as_int ();
IMPORT int ipcom_sysvar_get_as_int0 ();
IMPORT int ipcom_sysvar_get_as_int_vr ();
IMPORT int ipcom_sysvar_get_descriptive_int0 ();
IMPORT int ipcom_sysvar_get_descriptive_int_vr ();
IMPORT int ipcom_sysvar_getvr ();
IMPORT int ipcom_sysvar_remove_observer ();
IMPORT int ipcom_sysvar_set ();
IMPORT int ipcom_sysvar_set0 ();
IMPORT int ipcom_sysvar_set_tree ();
IMPORT int ipcom_sysvar_setv ();
IMPORT int ipcom_sysvar_setvr ();
IMPORT int ipcom_sysvar_unset ();
IMPORT int ipcom_tmo2_cancel ();
IMPORT int ipcom_tmo2_delete ();
IMPORT int ipcom_tmo2_get ();
IMPORT int ipcom_tmo2_new ();
IMPORT int ipcom_tmo2_request ();
IMPORT int ipcom_tmo2_request_timeval ();
IMPORT int ipcom_tmo2_reset ();
IMPORT int ipcom_tmo2_select ();
IMPORT int ipcom_tmo_cancel ();
IMPORT int ipcom_tmo_get ();
IMPORT int ipcom_tmo_request ();
IMPORT int ipcom_tmo_reset ();
IMPORT int ipcom_unlink ();
IMPORT int ipcom_unsetenv ();
IMPORT int ipcom_usr_create ();
IMPORT int ipcom_version;
IMPORT int ipcom_vsyslog ();
IMPORT int ipcom_vxshell_add_cmd ();
IMPORT int ipcom_vxshell_add_cmd_hook;
IMPORT int ipcom_vxworks_boot_devname ();
IMPORT int ipcom_vxworks_loginStringGet ();
IMPORT int ipcom_vxworks_pkt_pool_hdr_ctor ();
IMPORT int ipcom_vxworks_proc_free ();
IMPORT int ipcom_vxworks_rtp_del_hook_add ();
IMPORT int ipcom_vxworks_task_del_hook ();
IMPORT int ipcom_windnet_socketwritev ();
IMPORT int ipcom_windnet_socklib_init ();
IMPORT int ipcom_windnet_socklib_sock_size ();
IMPORT int ipcom_windnet_socklib_socket_free ();
IMPORT int ipcom_windnet_socklib_socket_init ();
IMPORT int ipcom_wmb ();
IMPORT int ipcom_wv_event_2 ();
IMPORT int ipcom_wv_marker_1 ();
IMPORT int ipcom_wv_marker_2 ();
IMPORT int ipmcrypto_MD5_Final ();
IMPORT int ipmcrypto_MD5_Init ();
IMPORT int ipmcrypto_MD5_Update ();
IMPORT int ipmcrypto_SHA1_Final ();
IMPORT int ipmcrypto_SHA1_Init ();
IMPORT int ipmcrypto_SHA1_Update ();
IMPORT int ipmcrypto_md5_calculate ();
IMPORT int ipnet;
IMPORT int ipnet_arp_ioctl ();
IMPORT int ipnet_arp_request ();
IMPORT int ipnet_bit_array_clr ();
IMPORT int ipnet_bit_array_test_and_set ();
IMPORT int ipnet_bool_map;
IMPORT int ipnet_cmd_if_type_to_str ();
IMPORT int ipnet_cmd_ifconfig_hook;
IMPORT int ipnet_cmd_init_addrs ();
IMPORT int ipnet_cmd_msec_since ();
IMPORT int ipnet_cmd_neigh_for_each ();
IMPORT int ipnet_cmd_neigh_for_each_optmask ();
IMPORT int ipnet_cmd_qc_hook;
IMPORT int ipnet_cmd_route_hook;
IMPORT int ipnet_cmd_rt_flags_to_str ();
IMPORT int ipnet_cmd_rt_flags_to_str_short ();
IMPORT int ipnet_conf_boot_cmd;
IMPORT int ipnet_conf_cache_bufsiz;
IMPORT int ipnet_conf_inq_max;
IMPORT int ipnet_conf_interfaces;
IMPORT int ipnet_conf_ip4_min_mtu;
IMPORT int ipnet_conf_ip6_min_mtu;
IMPORT int ipnet_conf_link_layer;
IMPORT int ipnet_conf_max_dgram_frag_list_len;
IMPORT int ipnet_conf_max_reassembly_list_len;
IMPORT int ipnet_conf_max_sockets;
IMPORT int ipnet_conf_memory_limit;
IMPORT int ipnet_conf_reassembly_timeout;
IMPORT int ipnet_conf_update ();
IMPORT int ipnet_configd_start ();
IMPORT int ipnet_configure ();
IMPORT int ipnet_create ();
IMPORT int ipnet_create_reassembled_packet ();
IMPORT int ipnet_ctrl ();
IMPORT int ipnet_ctrl_sig ();
IMPORT int ipnet_do_close ();
IMPORT int ipnet_dst_cache;
IMPORT int ipnet_dst_cache_blackhole ();
IMPORT int ipnet_dst_cache_blackhole_flow_spec ();
IMPORT int ipnet_dst_cache_flush ();
IMPORT int ipnet_dst_cache_flush_where_neigh_is ();
IMPORT int ipnet_dst_cache_foreach ();
IMPORT int ipnet_dst_cache_init ();
IMPORT int ipnet_dst_cache_new ();
IMPORT int ipnet_dst_cache_select_best_rt ();
IMPORT int ipnet_dst_cache_set_path_mtu ();
IMPORT int ipnet_dst_cache_set_rx_handler ();
IMPORT int ipnet_dst_cache_set_tx_handler ();
IMPORT int ipnet_eth_add_hdr ();
IMPORT int ipnet_eth_addr_broadcast;
IMPORT int ipnet_eth_addr_broadcast_storage;
IMPORT int ipnet_eth_if_init ();
IMPORT int ipnet_eth_update_mib2_lastchange ();
IMPORT int ipnet_flags;
IMPORT int ipnet_flow_spec_domain ();
IMPORT int ipnet_flow_spec_from_info ();
IMPORT int ipnet_flow_spec_from_sock ();
IMPORT int ipnet_frag_release_peer_info ();
IMPORT int ipnet_frag_set_peer_info ();
IMPORT int ipnet_frag_to_peer_info ();
IMPORT int ipnet_fragment_packet ();
IMPORT int ipnet_get_sock ();
IMPORT int ipnet_has_priv ();
IMPORT int ipnet_icmp4_param_init ();
IMPORT int ipnet_icmp4_send ();
IMPORT int ipnet_icmp4_send_host_unreachable ();
IMPORT int ipnet_icmp4_send_port_unreachable ();
IMPORT int ipnet_if_can_detach ();
IMPORT int ipnet_if_clean ();
IMPORT int ipnet_if_clean_ppp_peer ();
IMPORT int ipnet_if_clean_snd_queue ();
IMPORT int ipnet_if_detach ();
IMPORT int ipnet_if_drv_ioctl ();
IMPORT int ipnet_if_drv_output ();
IMPORT int ipnet_if_free ();
IMPORT int ipnet_if_get_index_array ();
IMPORT int ipnet_if_indextonetif ();
IMPORT int ipnet_if_init ();
IMPORT int ipnet_if_init_ppp_peer ();
IMPORT int ipnet_if_link_ioctl ();
IMPORT int ipnet_if_nametonetif ();
IMPORT int ipnet_if_output ();
IMPORT int ipnet_if_set_ipv4_ppp_peer ();
IMPORT int ipnet_if_to_sockaddr_dl ();
IMPORT int ipnet_if_update_mib2_ifLastChange ();
IMPORT int ipnet_igmpv3_report_change ();
IMPORT int ipnet_increase_hdr_space ();
IMPORT int ipnet_ioctl_move_if_rt_to_vr ();
IMPORT int ipnet_ip4_acd_conflict ();
IMPORT int ipnet_ip4_add_addr ();
IMPORT int ipnet_ip4_add_addr2 ();
IMPORT int ipnet_ip4_add_route_table ();
IMPORT int ipnet_ip4_addr_to_sockaddr ();
IMPORT int ipnet_ip4_change_addr_mask ();
IMPORT int ipnet_ip4_configure_route_table ();
IMPORT int ipnet_ip4_dst_cache_get ();
IMPORT int ipnet_ip4_dst_cache_rx_ctor ();
IMPORT int ipnet_ip4_dst_unreachable ();
IMPORT int ipnet_ip4_dst_unreachable_filter ();
IMPORT int ipnet_ip4_flow_spec_from_info ();
IMPORT int ipnet_ip4_flow_spec_from_pkt ();
IMPORT int ipnet_ip4_fragment_timeout_peer ();
IMPORT int ipnet_ip4_get_addr_entry ();
IMPORT int ipnet_ip4_get_addr_type ();
IMPORT int ipnet_ip4_get_addr_type2 ();
IMPORT int ipnet_ip4_get_mss ();
IMPORT int ipnet_ip4_get_src_addr ();
IMPORT int ipnet_ip4_init ();
IMPORT int ipnet_ip4_input ();
IMPORT int ipnet_ip4_insert_addr_cache ();
IMPORT int ipnet_ip4_is_part_of_same_pkt ();
IMPORT int ipnet_ip4_kioevent ();
IMPORT int ipnet_ip4_netif_get_subbrd ();
IMPORT int ipnet_ip4_pkt_with_iphdr_rawsock_tx ();
IMPORT int ipnet_ip4_pkt_with_iphdr_tx ();
IMPORT int ipnet_ip4_reg_transport_layer ();
IMPORT int ipnet_ip4_remove_addr ();
IMPORT int ipnet_ip4_remove_addr_cache ();
IMPORT int ipnet_ip4_rfc1256_mode_update ();
IMPORT int ipnet_ip4_rx ();
IMPORT int ipnet_ip4_sendto ();
IMPORT int ipnet_ip4_transport_rx ();
IMPORT int ipnet_ip4_tx ();
IMPORT int ipnet_is_loopback ();
IMPORT int ipnet_is_sock_exceptional ();
IMPORT int ipnet_is_sock_readable ();
IMPORT int ipnet_is_sock_writable ();
IMPORT int ipnet_is_stack_task ();
IMPORT int ipnet_kioevent ();
IMPORT int ipnet_loop_pkt_tx ();
IMPORT int ipnet_loopback_attach ();
IMPORT int ipnet_loopback_get_netif ();
IMPORT int ipnet_loopback_if_init ();
IMPORT int ipnet_mcast_build_if_filter ();
IMPORT int ipnet_mcast_build_source_change_report ();
IMPORT int ipnet_mcast_clear ();
IMPORT int ipnet_mcast_free ();
IMPORT int ipnet_mcast_init ();
IMPORT int ipnet_mcast_report_finish ();
IMPORT int ipnet_mcast_schedule_membership_report ();
IMPORT int ipnet_mcast_time_to_msec ();
IMPORT int ipnet_msec_now ();
IMPORT int ipnet_neigh_dad ();
IMPORT int ipnet_neigh_flush ();
IMPORT int ipnet_neigh_flush_all ();
IMPORT int ipnet_neigh_foreach ();
IMPORT int ipnet_neigh_get ();
IMPORT int ipnet_neigh_init ();
IMPORT int ipnet_neigh_init_addr_observer ();
IMPORT int ipnet_neigh_invalidate ();
IMPORT int ipnet_neigh_is_probing ();
IMPORT int ipnet_neigh_netif_discard ();
IMPORT int ipnet_neigh_probe ();
IMPORT int ipnet_neigh_release ();
IMPORT int ipnet_neigh_set_blackhole ();
IMPORT int ipnet_neigh_set_external ();
IMPORT int ipnet_neigh_set_gateway ();
IMPORT int ipnet_neigh_set_lifetime ();
IMPORT int ipnet_neigh_set_lladdr ();
IMPORT int ipnet_neigh_set_local ();
IMPORT int ipnet_neigh_set_perm ();
IMPORT int ipnet_neigh_set_publ ();
IMPORT int ipnet_neigh_set_report ();
IMPORT int ipnet_neigh_set_silent ();
IMPORT int ipnet_neigh_set_state ();
IMPORT int ipnet_netif_change_flags ();
IMPORT int ipnet_netif_is_ifproxy ();
IMPORT int ipnet_netif_neigh_create ();
IMPORT int ipnet_next_ephemeral_port ();
IMPORT int ipnet_noeth_if_init ();
IMPORT int ipnet_packet_getsockopt ();
IMPORT int ipnet_packet_input ();
IMPORT int ipnet_packet_setsockopt ();
IMPORT int ipnet_pcap_ioctl ();
IMPORT int ipnet_peer_info_addref ();
IMPORT int ipnet_peer_info_get ();
IMPORT int ipnet_peer_info_init ();
IMPORT int ipnet_peer_info_release ();
IMPORT int ipnet_peer_info_timeout_cancel ();
IMPORT int ipnet_peer_info_timeout_schedule ();
IMPORT int ipnet_ping_stat_init ();
IMPORT int ipnet_ping_stat_receive ();
IMPORT int ipnet_ping_stat_report ();
IMPORT int ipnet_ping_stat_transmit ();
IMPORT int ipnet_pipe_create ();
IMPORT int ipnet_pkt_clone ();
IMPORT int ipnet_pkt_get_maxlen ();
IMPORT int ipnet_pkt_input ();
IMPORT int ipnet_pkt_pool_drain ();
IMPORT int ipnet_pkt_pool_hdr_count_hint ();
IMPORT int ipnet_pkt_pool_hdr_ctor_func;
IMPORT int ipnet_pkt_pool_init ();
IMPORT int ipnet_pkt_pool_slab_desc;
IMPORT int ipnet_pkt_queue_delete ();
IMPORT int ipnet_pkt_queue_fifo_template ();
IMPORT int ipnet_pkt_queue_init ();
IMPORT int ipnet_pkt_queue_new ();
IMPORT int ipnet_ppp_if_init ();
IMPORT int ipnet_queue_received_packet ();
IMPORT int ipnet_raw_input ();
IMPORT int ipnet_reassembly ();
IMPORT int ipnet_register_if_attach_handler ();
IMPORT int ipnet_release_sock ();
IMPORT int ipnet_resume_stack ();
IMPORT int ipnet_route_add ();
IMPORT int ipnet_route_add_table ();
IMPORT int ipnet_route_apply_mask ();
IMPORT int ipnet_route_cache_invalidate ();
IMPORT int ipnet_route_create_mask ();
IMPORT int ipnet_route_delete ();
IMPORT int ipnet_route_delete2 ();
IMPORT int ipnet_route_delete_name ();
IMPORT int ipnet_route_delete_table ();
IMPORT int ipnet_route_delete_vr ();
IMPORT int ipnet_route_first_entry ();
IMPORT int ipnet_route_for_each_data_init ();
IMPORT int ipnet_route_get_name ();
IMPORT int ipnet_route_get_rtab ();
IMPORT int ipnet_route_get_table_ids ();
IMPORT int ipnet_route_has_changed ();
IMPORT int ipnet_route_has_expired ();
IMPORT int ipnet_route_ip4_is_mcast_or_bcast ();
IMPORT int ipnet_route_is_virtual_router_valid ();
IMPORT int ipnet_route_key_cmp ();
IMPORT int ipnet_route_key_to_sockaddr ();
IMPORT int ipnet_route_lock ();
IMPORT int ipnet_route_lookup ();
IMPORT int ipnet_route_lookup_ecmp ();
IMPORT int ipnet_route_next_entry ();
IMPORT int ipnet_route_notify_func ();
IMPORT int ipnet_route_policy_get_rule_chain ();
IMPORT int ipnet_route_policy_ioctl ();
IMPORT int ipnet_route_raw_lookup ();
IMPORT int ipnet_route_raw_lookup2 ();
IMPORT int ipnet_route_remove_all ();
IMPORT int ipnet_route_remove_all_cb_for_each_entry ();
IMPORT int ipnet_route_remove_dynamic_rt_with_gw ();
IMPORT int ipnet_route_rotate_gateways ();
IMPORT int ipnet_route_set_lifetime ();
IMPORT int ipnet_route_set_name ();
IMPORT int ipnet_route_set_rtab ();
IMPORT int ipnet_route_sockaddr_to_key ();
IMPORT int ipnet_route_unlock ();
IMPORT int ipnet_route_vr_and_table_from_name ();
IMPORT int ipnet_route_walk_tree ();
IMPORT int ipnet_routesock_addr_add ();
IMPORT int ipnet_routesock_addr_conflict ();
IMPORT int ipnet_routesock_addr_delete ();
IMPORT int ipnet_routesock_if_announce ();
IMPORT int ipnet_routesock_if_change ();
IMPORT int ipnet_routesock_neigh_resolve ();
IMPORT int ipnet_routesock_rt_add ();
IMPORT int ipnet_routesock_rt_change ();
IMPORT int ipnet_routesock_rt_delete ();
IMPORT int ipnet_routesock_rt_miss ();
IMPORT int ipnet_routesock_rt_redirect ();
IMPORT int ipnet_sec_now ();
IMPORT int ipnet_sig_free ();
IMPORT int ipnet_sock_alloc_private_data ();
IMPORT int ipnet_sock_bind ();
IMPORT int ipnet_sock_bind_addr_removed ();
IMPORT int ipnet_sock_bind_to_port ();
IMPORT int ipnet_sock_change_addr_entry ();
IMPORT int ipnet_sock_data_avail ();
IMPORT int ipnet_sock_drop_all_multicast_memberships ();
IMPORT int ipnet_sock_free ();
IMPORT int ipnet_sock_get ();
IMPORT int ipnet_sock_get_bound_port_size ();
IMPORT int ipnet_sock_get_ops_handle ();
IMPORT int ipnet_sock_get_route ();
IMPORT int ipnet_sock_has_waiting_writers ();
IMPORT int ipnet_sock_init ();
IMPORT int ipnet_sock_ip4_get_mcast_data ();
IMPORT int ipnet_sock_ip4_get_ops ();
IMPORT int ipnet_sock_ip4_lookup ();
IMPORT int ipnet_sock_ip4_mcast_delete_data ();
IMPORT int ipnet_sock_ip4_register ();
IMPORT int ipnet_sock_join_router_alert_chain ();
IMPORT int ipnet_sock_leave_router_alert_chain ();
IMPORT int ipnet_sock_next ();
IMPORT int ipnet_sock_ops;
IMPORT int ipnet_sock_packet_lookup ();
IMPORT int ipnet_sock_packet_register ();
IMPORT int ipnet_sock_pkt_drain ();
IMPORT int ipnet_sock_register_ops ();
IMPORT int ipnet_sock_route_register ();
IMPORT int ipnet_sock_router_alert_pkt ();
IMPORT int ipnet_sock_set_reachable ();
IMPORT int ipnet_sock_set_unreachable ();
IMPORT int ipnet_sock_tcp_register ();
IMPORT int ipnet_sock_udp_register ();
IMPORT int ipnet_sock_unbind ();
IMPORT int ipnet_sock_unconnect ();
IMPORT int ipnet_sock_update_reuse ();
IMPORT int ipnet_sockopt_ip4_addr_to_netif ();
IMPORT int ipnet_softirq_init ();
IMPORT int ipnet_softirq_schedule ();
IMPORT int ipnet_start ();
IMPORT int ipnet_stats_tcp_established ();
IMPORT int ipnet_suspend_stack ();
IMPORT int ipnet_sys_accept ();
IMPORT int ipnet_sys_bind ();
IMPORT int ipnet_sys_checktcp ();
IMPORT int ipnet_sys_connect ();
IMPORT int ipnet_sys_get_ancillary_data ();
IMPORT int ipnet_sys_getname ();
IMPORT int ipnet_sys_getsockopt ();
IMPORT int ipnet_sys_if_attach ();
IMPORT int ipnet_sys_if_changelinkaddr ();
IMPORT int ipnet_sys_if_changemtu ();
IMPORT int ipnet_sys_if_changename ();
IMPORT int ipnet_sys_if_detach ();
IMPORT int ipnet_sys_if_free ();
IMPORT int ipnet_sys_if_indexname ();
IMPORT int ipnet_sys_if_malloc ();
IMPORT int ipnet_sys_if_nametonetif ();
IMPORT int ipnet_sys_listen ();
IMPORT int ipnet_sys_poll ();
IMPORT int ipnet_sys_poll_async ();
IMPORT int ipnet_sys_savesignal ();
IMPORT int ipnet_sys_sendmsg ();
IMPORT int ipnet_sys_setsockopt ();
IMPORT int ipnet_sys_shutdown ();
IMPORT int ipnet_sys_socket ();
IMPORT int ipnet_sys_socketclose ();
IMPORT int ipnet_sys_socketioctl ();
IMPORT int ipnet_sys_sysctl ();
IMPORT int ipnet_sysctl_common ();
IMPORT int ipnet_sysctl_create_ifinfo ();
IMPORT int ipnet_sysctl_get_base ();
IMPORT int ipnet_sysctl_if_add_addrs_one ();
IMPORT int ipnet_sysvar_get_as_int_vr ();
IMPORT int ipnet_sysvar_netif_get_as_int ();
IMPORT int ipnet_sysvar_netif_get_as_int_ex ();
IMPORT int ipnet_timeout_cancel ();
IMPORT int ipnet_timeout_msec_until ();
IMPORT int ipnet_timeout_schedule ();
IMPORT int ipnet_timeval_to_msec ();
IMPORT int ipnet_try_free_mem ();
IMPORT int ipnet_usr_sock_get_ops ();
IMPORT int ipnet_usr_sock_get_pipe ();
IMPORT int ipnet_usr_sock_get_response_pipe ();
IMPORT int ipnet_usr_sock_get_route_cache_id ();
IMPORT int ipnet_usr_sock_init ();
IMPORT int ipnet_usr_sock_init_sig ();
IMPORT int ipnet_usr_sock_recvmsg ();
IMPORT int ipnet_usr_sock_wait_until_writable ();
IMPORT int ipnet_version ();
IMPORT int iptcp;
IMPORT int iptcp_accept ();
IMPORT int iptcp_ao_rtnetlink_init ();
IMPORT int iptcp_change_state_global ();
IMPORT int iptcp_close ();
IMPORT int iptcp_conf_default_backlog;
IMPORT int iptcp_configure ();
IMPORT int iptcp_connect ();
IMPORT int iptcp_create ();
IMPORT int iptcp_drop_connection ();
IMPORT int iptcp_get_rto ();
IMPORT int iptcp_get_state ();
IMPORT int iptcp_getsockopt ();
IMPORT int iptcp_icmp4_report ();
IMPORT int iptcp_ioctl ();
IMPORT int iptcp_listen ();
IMPORT int iptcp_pkt_drain ();
IMPORT int iptcp_send ();
IMPORT int iptcp_send_reset ();
IMPORT int iptcp_setsockopt ();
IMPORT int iptcp_shutdown ();
IMPORT int iptcp_sock_free ();
IMPORT int iptcp_sock_init ();
IMPORT int iptcp_start ();
IMPORT int iptcp_tx_list;
IMPORT int iptcp_usr_recv ();
IMPORT int iptcp_version ();
IMPORT int iptcp_window_update ();
IMPORT int is_IA64_encoded_identifier ();
IMPORT int isalnum ();
IMPORT int isalpha ();
IMPORT int isatty ();
IMPORT int iscntrl ();
IMPORT int isdigit ();
IMPORT int isgraph ();
IMPORT int islower ();
IMPORT int isprint ();
IMPORT int ispunct ();
IMPORT int isrDeferJobAdd ();
IMPORT int isrDeferLibInit ();
IMPORT int isrDeferQueueGet ();
IMPORT int isrIdCurrent;
IMPORT int isrJobPool;
IMPORT int isrRerouteNotify ();
IMPORT int isspace ();
IMPORT int isupper ();
IMPORT int isxdigit ();
IMPORT int jobAdd ();
IMPORT int jobQueueCreate ();
IMPORT int jobQueueInit ();
IMPORT int jobQueueLibInit ();
IMPORT int jobQueuePost ();
IMPORT int jobQueuePriorityMask ();
IMPORT int jobQueueProcess ();
IMPORT int jobQueueProcessFunc;
IMPORT int jobQueueStdJobsAlloc ();
IMPORT int jobQueueStdPoolInit ();
IMPORT int jobQueueStdPost ();
IMPORT int jobQueueTask ();
IMPORT int jobTaskLibInit ();
IMPORT int jobTaskWorkAdd ();
IMPORT int kernSysctlInit ();
IMPORT int kern_node;
IMPORT int kernelBaseInit ();
IMPORT int kernelCpuEnable ();
IMPORT int kernelId;
IMPORT int kernelIdGet ();
IMPORT int kernelInit ();
IMPORT int kernelIsCpuIdle ();
IMPORT int kernelIsIdle;
IMPORT int kernelIsSystemIdle ();
IMPORT int kernelModuleListId;
IMPORT int kernelObjClassId;
IMPORT int kernelRgnPoolId;
IMPORT int kernelRoundRobinInstall ();
IMPORT int kernelState;
IMPORT int kernelTimeSlice ();
IMPORT int kernelTimeSliceGet ();
IMPORT int kernelVersion ();
IMPORT int kernelVirtPgPoolId;
IMPORT int kernel_sysctl ();
IMPORT int kill ();
IMPORT int killSc ();
IMPORT int l ();
IMPORT int labs ();
IMPORT int ld ();
IMPORT int ldCommonMatchAll;
IMPORT int ldexp ();
IMPORT int ldiv ();
IMPORT int ldiv_r ();
IMPORT int le_uuid_dec ();
IMPORT int le_uuid_enc ();
IMPORT int ledBeep ();
IMPORT int ledBwdFind ();
IMPORT int ledCDelete ();
IMPORT int ledChange ();
IMPORT int ledClose ();
IMPORT int ledComplete ();
IMPORT int ledCompletionSet ();
IMPORT int ledControl ();
IMPORT int ledDfltComplete ();
IMPORT int ledFwdFind ();
IMPORT int ledHistCurrentNumGet ();
IMPORT int ledHistFind ();
IMPORT int ledHistNextGet ();
IMPORT int ledHistNumGet ();
IMPORT int ledHistPrevGet ();
IMPORT int ledHistResize ();
IMPORT int ledHistoryAdd ();
IMPORT int ledHistoryClone ();
IMPORT int ledHistoryCreate ();
IMPORT int ledHistoryFree ();
IMPORT int ledHistoryLineAllocate ();
IMPORT int ledHistorySet ();
IMPORT int ledInactivityDelaySet ();
IMPORT int ledLibInit ();
IMPORT int ledModeDefaultNameGet ();
IMPORT int ledModeNameGet ();
IMPORT int ledModeRegister ();
IMPORT int ledModeSet ();
IMPORT int ledNWrite ();
IMPORT int ledOpen ();
IMPORT int ledPreempt ();
IMPORT int ledPreemptSet ();
IMPORT int ledRead ();
IMPORT int ledRead2 ();
IMPORT int ledRedraw ();
IMPORT int ledReplace ();
IMPORT int ledSearch ();
IMPORT int link ();
IMPORT int linkBufPoolInit ();
IMPORT int linkDataSyms;
IMPORT int linkSc ();
IMPORT int linkSyms;
IMPORT int linkedCtorsInitialized;
IMPORT int listen ();
IMPORT int listenSc ();
IMPORT int lkAddr ();
IMPORT int lkAddrInternal ();
IMPORT int lkup ();
IMPORT int ll ();
IMPORT int llr ();
IMPORT int loadCommonSymbolProcess ();
IMPORT int loadDefinedSymbolProcess ();
IMPORT int loadElfFileHeaderReadAndCheck ();
IMPORT int loadElfInit ();
IMPORT int loadElfProgramHeaderTableReadAndCheck ();
IMPORT int loadElfRelEntryRead ();
IMPORT int loadElfRelUEntryRead ();
IMPORT int loadElfRelaEntryRead ();
IMPORT int loadElfSectionHeaderCheck ();
IMPORT int loadElfSectionHeaderReadAndCheck ();
IMPORT int loadElfSymbolEntryRead ();
IMPORT int loadLibInit ();
IMPORT int loadModule ();
IMPORT int loadModuleAt ();
IMPORT int loadModuleInfoFromFd ();
IMPORT int loadModuleInfoFromFilenameOpen ();
IMPORT int loadModuleInfoInit ();
IMPORT int loadModuleInfoRelease ();
IMPORT int loadModuleSeek ();
IMPORT int loadModuleStringRead ();
IMPORT int loadModuleTagsCheck ();
IMPORT int loadModuleValueRead ();
IMPORT int loadRtpDefaultOptions;
IMPORT int loadRtpDefaultSymTblHashSizeLog2;
IMPORT int loadRtpFileInfoCreate ();
IMPORT int loadRtpFileInfoDestroy ();
IMPORT int loadRtpFileLoad ();
IMPORT int loadRtpFileSymbolsRegister ();
IMPORT int loadRtpFileVerify ();
IMPORT int loadRtpLibInit ();
IMPORT int loadRtpSymRegPolicyOverride;
IMPORT int loadSectionsInstall ();
IMPORT int loadSegInfoDescAllocate ();
IMPORT int loadSegInfoDescFree ();
IMPORT int loadSegmentsAllocate ();
IMPORT int loadShareTgtMemAlign ();
IMPORT int loadShareTgtMemFree ();
IMPORT int loadShareTgtMemSet ();
IMPORT int loadSysSymTblLoad ();
IMPORT int loadUndefinedSymbolProcess ();
IMPORT int loaderCacheBufferSize;
IMPORT int localToGlobalOffset;
IMPORT int localeconv ();
IMPORT int localtime ();
IMPORT int localtime_r ();
IMPORT int log ();
IMPORT int log10 ();
IMPORT int logDecorationChange ();
IMPORT int logFd;
IMPORT int logFdAdd ();
IMPORT int logFdDelete ();
IMPORT int logFdFromRlogin;
IMPORT int logFdSem;
IMPORT int logFdSet ();
IMPORT int logInit ();
IMPORT int logLevelChange ();
IMPORT int logMsg ();
IMPORT int logShow ();
IMPORT int logTask ();
IMPORT int logTaskId;
IMPORT int logTaskOptions;
IMPORT int logTaskPriority;
IMPORT int logTaskStackSize;
IMPORT int loggerInfoShow ();
IMPORT int loginHostname;
IMPORT int loginPassword;
IMPORT int loginUsername;
IMPORT int logout ();
IMPORT int longjmp ();
IMPORT int ls ();
IMPORT int lseek ();
IMPORT int lsr ();
IMPORT int lstAdd ();
IMPORT int lstConcat ();
IMPORT int lstCount ();
IMPORT int lstDelete ();
IMPORT int lstExtract ();
IMPORT int lstFind ();
IMPORT int lstFirst ();
IMPORT int lstFree ();
IMPORT int lstFree2 ();
IMPORT int lstGet ();
IMPORT int lstInit ();
IMPORT int lstInsert ();
IMPORT int lstLast ();
IMPORT int lstLibInit ();
IMPORT int lstNStep ();
IMPORT int lstNext ();
IMPORT int lstNth ();
IMPORT int lstPrevious ();
IMPORT int m ();
IMPORT int m2If64BitCounters;
IMPORT int m512xFecRegister ();
IMPORT int mRegs ();
IMPORT int m_prepend ();
IMPORT int malloc ();
IMPORT int manglingStyles;
IMPORT int map_add ();
IMPORT int map_alloc ();
IMPORT int map_del ();
IMPORT int map_find ();
IMPORT int map_first ();
IMPORT int map_free ();
IMPORT int map_init ();
IMPORT int map_last ();
IMPORT int map_remove ();
IMPORT int map_show ();
IMPORT int map_uninit ();
IMPORT int mathSoftInit ();
IMPORT int max_hdr;
IMPORT int max_linkhdr;
IMPORT int max_protohdr;
IMPORT int mblen ();
IMPORT int mbstowcs ();
IMPORT int mbtowc ();
IMPORT int md5_block_data_order ();
IMPORT int md5_block_host_order ();
IMPORT int mdlSymSyncLibInit ();
IMPORT int mdlSymSyncModAdd ();
IMPORT int mdlSymSyncModInfoGet ();
IMPORT int mdlSymSyncModuleRemove ();
IMPORT int mdlSymSyncStop ();
IMPORT int mdlSymSyncSymListAdd ();
IMPORT int mdlSymSyncSymListGet ();
IMPORT int memAddToPool ();
IMPORT int memBlockSizeGet ();
IMPORT int memDefaultAlignment;
IMPORT int memEdrBlockFind ();
IMPORT int memEdrBlockHdrPrint ();
IMPORT int memEdrBlockInfoGet ();
IMPORT int memEdrBlockInfoPrint ();
IMPORT int memEdrBlockMark ();
IMPORT int memEdrBlockShow ();
IMPORT int memEdrConfigClear ();
IMPORT int memEdrConfigInit ();
IMPORT int memEdrDb;
IMPORT int memEdrEnable;
IMPORT int memEdrErrorLog ();
IMPORT int memEdrFreeQueueFlush ();
IMPORT int memEdrInit ();
IMPORT int memEdrInit2 ();
IMPORT int memEdrItemGet ();
IMPORT int memEdrLocalFind ();
IMPORT int memEdrMemInit ();
IMPORT int memEdrPartHdrPrint ();
IMPORT int memEdrPartInfoGet ();
IMPORT int memEdrPartInfoPrint ();
IMPORT int memEdrPartShow ();
IMPORT int memEdrPoolErrMsg;
IMPORT int memEdrRtpBlockMark ();
IMPORT int memEdrRtpBlockShow ();
IMPORT int memEdrRtpPartShow ();
IMPORT int memEdrRtpShellCmdInit ();
IMPORT int memEdrRtpShowInit ();
IMPORT int memEdrShellCmdInit ();
IMPORT int memEdrShowInit ();
IMPORT int memEdrShowUtilInit ();
IMPORT int memEdrTaskUidGet ();
IMPORT int memEdrUserStopGet ();
IMPORT int memFindMax ();
IMPORT int memInfoGet ();
IMPORT int memInfoInit ();
IMPORT int memInit ();
IMPORT int memMsgBlockError;
IMPORT int memMsgBlockTooBig;
IMPORT int memOptionsGet ();
IMPORT int memOptionsSet ();
IMPORT int memPartAddToPool ();
IMPORT int memPartAlignedAlloc ();
IMPORT int memPartAlloc ();
IMPORT int memPartAllocErrorRtn;
IMPORT int memPartAllocN ();
IMPORT int memPartBlockErrorRtn;
IMPORT int memPartBlockIsValid ();
IMPORT int memPartBlockValidate ();
IMPORT int memPartClassId;
IMPORT int memPartCreate ();
IMPORT int memPartCreateHookSet ();
IMPORT int memPartDelete ();
IMPORT int memPartDeleteFree ();
IMPORT int memPartEdrErrorInject ();
IMPORT int memPartFindMax ();
IMPORT int memPartFree ();
IMPORT int memPartFreeListWalk ();
IMPORT int memPartFreeN ();
IMPORT int memPartHooksInstall ();
IMPORT int memPartInfoGet ();
IMPORT int memPartInit ();
IMPORT int memPartInsertFree ();
IMPORT int memPartLibInit ();
IMPORT int memPartOptionsDefault;
IMPORT int memPartOptionsGet ();
IMPORT int memPartOptionsSet ();
IMPORT int memPartRealloc ();
IMPORT int memPartReallocInternal ();
IMPORT int memPartShow ();
IMPORT int memPartVerifiedLock ();
IMPORT int memPoolEndAdrs;
IMPORT int memRtpLibInit ();
IMPORT int memShow ();
IMPORT int memShowInit ();
IMPORT int memSysPartId;
IMPORT int memSysPartition;
IMPORT int memalign ();
IMPORT int memchr ();
IMPORT int memcmp ();
IMPORT int memcpy ();
IMPORT int memmove ();
IMPORT int memoryDump ();
IMPORT int memoryModify ();
IMPORT int memset ();
IMPORT int mib2ErrorAdd ();
IMPORT int mib2Init ();
IMPORT int miiBusCreate ();
IMPORT int miiBusDelete ();
IMPORT int miiBusGet ();
IMPORT int miiBusIdleErrorCheck ();
IMPORT int miiBusListAdd ();
IMPORT int miiBusListDel ();
IMPORT int miiBusLpiModeGet ();
IMPORT int miiBusMediaAdd ();
IMPORT int miiBusMediaDefaultSet ();
IMPORT int miiBusMediaDel ();
IMPORT int miiBusMediaListGet ();
IMPORT int miiBusMediaUpdate ();
IMPORT int miiBusModeGet ();
IMPORT int miiBusModeSet ();
IMPORT int miiBusRead ();
IMPORT int miiBusRegister ();
IMPORT int miiBusWrite ();
IMPORT int miiLpiModeGet_desc;
IMPORT int miiMediaUpdate_desc;
IMPORT int miiModeGet_desc;
IMPORT int miiModeSet_desc;
IMPORT int miiRead_desc;
IMPORT int miiWrite_desc;
IMPORT int mkdir ();
IMPORT int mktime ();
IMPORT int mmBlkPool;
IMPORT int mmRngPool;
IMPORT int mmanBlockSplit ();
IMPORT int mmanFdLibInit ();
IMPORT int mmanFileList;
IMPORT int mmanFileMutex;
IMPORT int mmanLibInit ();
IMPORT int mmanMODelete ();
IMPORT int mmanMapListInit ();
IMPORT int mmanMemValidate ();
IMPORT int mmanPrivateMap ();
IMPORT int mmanProtectionSet ();
IMPORT int mmanRangeInsert ();
IMPORT int mmanRtpContextShow ();
IMPORT int mmanRtpDeleteAll ();
IMPORT int mmanRtpLock ();
IMPORT int mmanRtpMapShow ();
IMPORT int mmanScLibInit ();
IMPORT int mmanShowInit ();
IMPORT int mmanShowShellCmdInit ();
IMPORT int mmap ();
IMPORT int mmap64 ();
IMPORT int mmapSc ();
IMPORT int mmapShow ();
IMPORT int mmuArchCopySize;
IMPORT int mmuArchLibAttrs;
IMPORT int mmuArchLibFuncs;
IMPORT int mmuArchPteFlags;
IMPORT int mmuArchTtbrFlags;
IMPORT int mmuArchTtbrGet ();
IMPORT int mmuCacheStateTransTbl;
IMPORT int mmuContextTbl;
IMPORT int mmuCortexA8ADisable ();
IMPORT int mmuCortexA8AEnable ();
IMPORT int mmuCortexA8AcrGet ();
IMPORT int mmuCortexA8AcrSet ();
IMPORT int mmuCortexA8BufCopy ();
IMPORT int mmuCortexA8DTcmrGet ();
IMPORT int mmuCortexA8DTcmrSet ();
IMPORT int mmuCortexA8DacrSet ();
IMPORT int mmuCortexA8ITcmrGet ();
IMPORT int mmuCortexA8ITcmrSet ();
IMPORT int mmuCortexA8LibInstall ();
IMPORT int mmuCortexA8SecondLevelMiniHeap_Max;
IMPORT int mmuCortexA8TLBIDFlushAll ();
IMPORT int mmuCortexA8TLBIDFlushEntry ();
IMPORT int mmuCortexA8TtbrGet ();
IMPORT int mmuCortexA8TtbrGetAll ();
IMPORT int mmuCortexA8TtbrSet ();
IMPORT int mmuCortexA8TtbrSetAll ();
IMPORT int mmuCortexA8WordSet ();
IMPORT int mmuCortexA8WordSetMultiple ();
IMPORT int mmuCrGet;
IMPORT int mmuFarGet ();
IMPORT int mmuFsrGet ();
IMPORT int mmuHardCrGet ();
IMPORT int mmuIFsrGet ();
IMPORT int mmuInvalidState;
IMPORT int mmuLibFuncs;
IMPORT int mmuMaskTransTbl;
IMPORT int mmuModifyCr;
IMPORT int mmuModifyHardCr ();
IMPORT int mmuPhysToVirt ();
IMPORT int mmuProtStateTransTbl;
IMPORT int mmuReadId ();
IMPORT int mmuValidStateTransTbl;
IMPORT int mmuVirtToPhys ();
IMPORT int mmu_node;
IMPORT int modf ();
IMPORT int modlist;
IMPORT int moduleCheck ();
IMPORT int moduleCreate ();
IMPORT int moduleCreateHookAdd ();
IMPORT int moduleCreateHookDelete ();
IMPORT int moduleDelete ();
IMPORT int moduleDescDestroy ();
IMPORT int moduleEach ();
IMPORT int moduleFindByGroup ();
IMPORT int moduleFindByName ();
IMPORT int moduleFindByNameAndPath ();
IMPORT int moduleFirstSectionGet ();
IMPORT int moduleFlagsGet ();
IMPORT int moduleFlagsSet ();
IMPORT int moduleHookLibInit ();
IMPORT int moduleIdFigure ();
IMPORT int moduleIdListGet ();
IMPORT int moduleIdVerify ();
IMPORT int moduleInfoGet ();
IMPORT int moduleInit ();
IMPORT int moduleLibInit ();
IMPORT int moduleLoadHookAdd ();
IMPORT int moduleLoadHookDelete ();
IMPORT int moduleLoadHooksCall ();
IMPORT int moduleNameGet ();
IMPORT int moduleNextSectionGet ();
IMPORT int moduleSectionChecksumSet ();
IMPORT int moduleSectionDescFree ();
IMPORT int moduleSectionDescGet ();
IMPORT int moduleSectionRegister ();
IMPORT int moduleSegAdd ();
IMPORT int moduleSegEach ();
IMPORT int moduleSegFirst ();
IMPORT int moduleSegGet ();
IMPORT int moduleSegInfoGet ();
IMPORT int moduleSegNext ();
IMPORT int moduleShellCmdInit ();
IMPORT int moduleShow ();
IMPORT int moduleShowInit ();
IMPORT int moduleUndefSymAdd ();
IMPORT int moduleUnloadHookAdd ();
IMPORT int moduleUnloadHookDelete ();
IMPORT int moduleUnloadHooksCall ();
IMPORT int mprotect ();
IMPORT int mprotectSc ();
IMPORT int msgQClassId;
IMPORT int msgQClose ();
IMPORT int msgQCreate ();
IMPORT int msgQCreateLibInit ();
IMPORT int msgQDelete ();
IMPORT int msgQDestroy ();
IMPORT int msgQEvStart ();
IMPORT int msgQEvStop ();
IMPORT int msgQInfoGet ();
IMPORT int msgQInit ();
IMPORT int msgQInitialize ();
IMPORT int msgQLibInit ();
IMPORT int msgQLibInstalled;
IMPORT int msgQNumMsgs ();
IMPORT int msgQOpen ();
IMPORT int msgQOpenInit ();
IMPORT int msgQReceive ();
IMPORT int msgQReceiveSc ();
IMPORT int msgQSend ();
IMPORT int msgQSendSc ();
IMPORT int msgQSmNumMsgsRtn;
IMPORT int msgQSmReceiveRtn;
IMPORT int msgQSmSendRtn;
IMPORT int msgQTerminate ();
IMPORT int msgQUnlink ();
IMPORT int msync ();
IMPORT int mtranslate ();
IMPORT int munmap ();
IMPORT int munmapSc ();
IMPORT int mutexOptionsHostLib;
IMPORT int mutexOptionsIosLib;
IMPORT int mutexOptionsLogLib;
IMPORT int mutexOptionsNetDrv;
IMPORT int mutexOptionsSelectLib;
IMPORT int mutexOptionsSymLib;
IMPORT int mutexOptionsTsfsDrv;
IMPORT int mutexOptionsTyLib;
IMPORT int mux2Bind ();
IMPORT int mux2LibInit ();
IMPORT int mux2OverEndInit ();
IMPORT int mux2OverEndOutputFilterChainDrops;
IMPORT int mux2PollReceive ();
IMPORT int mux2PollSend ();
IMPORT int mux2Send ();
IMPORT int muxAddressForm ();
IMPORT int muxBind ();
IMPORT int muxBindCommon ();
IMPORT int muxBindStyles;
IMPORT int muxCommonInit ();
IMPORT int muxDebug;
IMPORT int muxDevAcquire ();
IMPORT int muxDevConnect_desc;
IMPORT int muxDevExists ();
IMPORT int muxDevLoad ();
IMPORT int muxDevRelease ();
IMPORT int muxDevStart ();
IMPORT int muxDevStop ();
IMPORT int muxDevStopAll ();
IMPORT int muxDevUnload ();
IMPORT int muxDevUnloadAsync ();
IMPORT int muxEndJobQDo ();
IMPORT int muxEndJobQDoJob ();
IMPORT int muxEndListGet ();
IMPORT int muxEndQnumGet ();
IMPORT int muxEndRxJobQueue ();
IMPORT int muxEndStyles;
IMPORT int muxError ();
IMPORT int muxErrorPost ();
IMPORT int muxErrorSkip ();
IMPORT int muxIfTypeGet ();
IMPORT int muxIoctl ();
IMPORT int muxIpcomPktFreeMblk ();
IMPORT int muxIpcomPktToMblkTx ();
IMPORT int muxL2PortDetachRtn;
IMPORT int muxLibInit ();
IMPORT int muxLinkDownNotify ();
IMPORT int muxLinkHeaderCreate ();
IMPORT int muxLinkUpNotify ();
IMPORT int muxLock;
IMPORT int muxMCastAddrAdd ();
IMPORT int muxMCastAddrDel ();
IMPORT int muxMCastAddrGet ();
IMPORT int muxMblkToIpcomPktMallocDrops;
IMPORT int muxMblkToIpcomPktTx ();
IMPORT int muxMblkToIpcomPktTxChainDrops;
IMPORT int muxPacketAddrGet ();
IMPORT int muxPacketDataGet ();
IMPORT int muxPollReceive ();
IMPORT int muxPollSend ();
IMPORT int muxProtoInfoGet ();
IMPORT int muxProtoListGet ();
IMPORT int muxReceive ();
IMPORT int muxRestoreIpcomPktFromMblkTx ();
IMPORT int muxSend ();
IMPORT int muxShow ();
IMPORT int muxTkBind ();
IMPORT int muxTkCookieGet ();
IMPORT int muxTkDrvCheck ();
IMPORT int muxTkLibInit ();
IMPORT int muxTkOverEndInit ();
IMPORT int muxTkPollReceive ();
IMPORT int muxTkPollSend ();
IMPORT int muxTkSend ();
IMPORT int muxTxRestart ();
IMPORT int muxUnbind ();
IMPORT int mv ();
IMPORT int nae_log ();
IMPORT int name_node;
IMPORT int namelessPrefix;
IMPORT int netAttachFlag;
IMPORT int netBufClOffset;
IMPORT int netBufLibInit ();
IMPORT int netBufLibInitialize ();
IMPORT int netBufLock;
IMPORT int netBufPoolInit ();
IMPORT int netClBlkFree ();
IMPORT int netClBlkGet ();
IMPORT int netClBlkJoin ();
IMPORT int netClFree ();
IMPORT int netClPoolIdGet ();
IMPORT int netClusterGet ();
IMPORT int netCoreSysctlInit ();
IMPORT int netDaemonQ ();
IMPORT int netDaemonQnum ();
IMPORT int netDaemonsCount ();
IMPORT int netDaemonsStart ();
IMPORT int netDevBootFlag;
IMPORT int netDevCreate ();
IMPORT int netDevCreate2 ();
IMPORT int netDrv ();
IMPORT int netDrvDebugLevelSet ();
IMPORT int netDrvFileDoesNotExist ();
IMPORT int netDrvFileDoesNotExistInstall ();
IMPORT int netErrnoSet ();
IMPORT int netHelp ();
IMPORT int netJobAdd ();
IMPORT int netJobNum;
IMPORT int netJobQueueId;
IMPORT int netLibInitialize ();
IMPORT int netLsByName ();
IMPORT int netMblkChainDup ();
IMPORT int netMblkClChainFree ();
IMPORT int netMblkClFree ();
IMPORT int netMblkClGet ();
IMPORT int netMblkClJoin ();
IMPORT int netMblkDup ();
IMPORT int netMblkFree ();
IMPORT int netMblkFromBufCopy ();
IMPORT int netMblkGet ();
IMPORT int netMblkOffsetToBufCopy ();
IMPORT int netMblkToBufCopy ();
IMPORT int netPoolCreate ();
IMPORT int netPoolCreateValidate ();
IMPORT int netPoolDelete ();
IMPORT int netPoolIdGet ();
IMPORT int netPoolIdGetWork ();
IMPORT int netPoolInit ();
IMPORT int netPoolInitWrapper ();
IMPORT int netPoolKheapInit ();
IMPORT int netPoolNameGet ();
IMPORT int netPoolRelPri;
IMPORT int netPoolRelease ();
IMPORT int netSysctl ();
IMPORT int netSysctlCli ();
IMPORT int netSysctlCtxList;
IMPORT int netSysctlInit ();
IMPORT int netTaskId;
IMPORT int netTaskNamePrefix;
IMPORT int netTaskOptions;
IMPORT int netTaskPriority;
IMPORT int netTaskStackSize;
IMPORT int netTupleFree ();
IMPORT int netTupleGet ();
IMPORT int netVersionString;
IMPORT int net_node;
IMPORT int netmask;
IMPORT int netsysctlname2oid ();
IMPORT int next_node;
IMPORT int noDev ();
IMPORT int numLogFds;
IMPORT int objAlloc ();
IMPORT int objAllocExtra ();
IMPORT int objArchLibInit ();
IMPORT int objClassIdGet ();
IMPORT int objClassTypeGet ();
IMPORT int objClose ();
IMPORT int objContextGet ();
IMPORT int objContextSet ();
IMPORT int objCoreInit ();
IMPORT int objCoreInvalidate ();
IMPORT int objCoreReclaim ();
IMPORT int objCoreRelease ();
IMPORT int objCoreTerminate ();
IMPORT int objCoreUnlink ();
IMPORT int objDeleteSc ();
IMPORT int objEach ();
IMPORT int objFree ();
IMPORT int objGenericVerify ();
IMPORT int objHandleAlloc ();
IMPORT int objHandleClose ();
IMPORT int objHandleDelete ();
IMPORT int objHandleTblCreate ();
IMPORT int objHandleTblTerminate ();
IMPORT int objHandleToObjId ();
IMPORT int objIdToObjHandle ();
IMPORT int objInfo ();
IMPORT int objInfoGetSc ();
IMPORT int objInfoInit ();
IMPORT int objLibInit ();
IMPORT int objMemAlloc ();
IMPORT int objMemFree ();
IMPORT int objNameGet ();
IMPORT int objNameLenGet ();
IMPORT int objNamePtrGet ();
IMPORT int objNamePtrSet ();
IMPORT int objNameSet ();
IMPORT int objNameToId ();
IMPORT int objOpen ();
IMPORT int objOwnerGet ();
IMPORT int objOwnerLibInstalled;
IMPORT int objOwnerSet ();
IMPORT int objOwnerSetBase ();
IMPORT int objOwnershipInit ();
IMPORT int objRoutineNameGet ();
IMPORT int objRtpAccess ();
IMPORT int objRtpHandleAlloc ();
IMPORT int objRtpHandleFree ();
IMPORT int objRtpIdToObjHandle ();
IMPORT int objRtpLibInit ();
IMPORT int objRtpRelease ();
IMPORT int objShow ();
IMPORT int objUnlink ();
IMPORT int objUnlinkSc ();
IMPORT int objVerify ();
IMPORT int objVerifyError ();
IMPORT int objVerifyMagicRead ();
IMPORT int objVerifyTypeRead ();
IMPORT int objectShow ();
IMPORT int oidfmt_node;
IMPORT int oidsInList;
IMPORT int open ();
IMPORT int opendir ();
IMPORT int oprintf ();
IMPORT int osmGuardPageSize;
IMPORT int pAddrString;
IMPORT int pAsInitParams;
IMPORT int pAsMemDesc;
IMPORT int pAuxClkName;
IMPORT int pBusHead;
IMPORT int pBusListHead;
IMPORT int pClkCookie;
IMPORT int pClkTimer;
IMPORT int pCoprocDescList;
IMPORT int pDataCollectorFunctions;
IMPORT int pDbgClnt;
IMPORT int pDevName;
IMPORT int pDriverListHead;
IMPORT int pEndPktDev;
IMPORT int pHead;
IMPORT int pIosDevCloseRtn;
IMPORT int pIosFdEntrySetRtn;
IMPORT int pIosFdInvalidRtn;
IMPORT int pIosRemovableDevDrv;
IMPORT int pIosSuspendedDevDrv;
IMPORT int pJobPool;
IMPORT int pLoadRoutine;
IMPORT int pLoaderHooksCall;
IMPORT int pM2TrapRtn;
IMPORT int pM2TrapRtnArg;
IMPORT int pMibRtn;
IMPORT int pNetPoolHead;
IMPORT int pNetSysctlCtxList;
IMPORT int pNullFd;
IMPORT int pPlbBus;
IMPORT int pPlbDev;
IMPORT int pPlbDevControl;
IMPORT int pRebootHookTbl;
IMPORT int pRootMemStart;
IMPORT int pRtpDbgCmdSvc;
IMPORT int pRtpDeleteHookTbl;
IMPORT int pRtpInitCompleteHookTbl;
IMPORT int pRtpPostCreateHookTbl;
IMPORT int pRtpPreCreateHookTbl;
IMPORT int pRtpStartupField;
IMPORT int pSockIoctlMemVal;
IMPORT int pSysClkName;
IMPORT int pSysPhysMemDescCortexA8Ext;
IMPORT int pSysPlbMethods;
IMPORT int pSyscallEntryHookTbl;
IMPORT int pSyscallExitHookTbl;
IMPORT int pSyscallRegisterHookTbl;
IMPORT int pSysctlCtxList;
IMPORT int pTaskLastDspTcb;
IMPORT int pTaskLastFpTcb;
IMPORT int pTgtName;
IMPORT int pTimestampCookie;
IMPORT int pTimestampTimer;
IMPORT int pTimestampTimerName;
IMPORT int pUnixIoctlMemVal;
IMPORT int pUnloaderHooksCall;
IMPORT int pVxbDelayCookie;
IMPORT int pVxbDelayTimer;
IMPORT int pVxbSpinLockGive;
IMPORT int pVxbSpinLockTake;
IMPORT int pWdbClnt;
IMPORT int pWdbCommIf;
IMPORT int pWdbCtxBpIf;
IMPORT int pWdbExternSystemRegs;
IMPORT int pWdbMemRegions;
IMPORT int pWdbRtIf;
IMPORT int pWdbXport;
IMPORT int pWvNetEvtMap;
IMPORT int pal_node;
IMPORT int panic ();
IMPORT int panicSuspend;
IMPORT int partitionExist;
IMPORT int pathBuild ();
IMPORT int pathCat ();
IMPORT int pathCondense ();
IMPORT int pathLastName ();
IMPORT int pathLastNamePtr ();
IMPORT int pathParse ();
IMPORT int pathSplit ();
IMPORT int pathconf ();
IMPORT int pathconfSc ();
IMPORT int pause ();
IMPORT int pc ();
IMPORT int period ();
IMPORT int periodHost ();
IMPORT int periodRun ();
IMPORT int perror ();
IMPORT int pgMgrBaseLibInit ();
IMPORT int pgMgrCreate ();
IMPORT int pgMgrDelete ();
IMPORT int pgMgrInfoGet ();
IMPORT int pgMgrInit ();
IMPORT int pgMgrLibInit ();
IMPORT int pgMgrMemContextShow ();
IMPORT int pgMgrPageAlloc ();
IMPORT int pgMgrPageAllocAt ();
IMPORT int pgMgrPageAttrGet ();
IMPORT int pgMgrPageAttrSet ();
IMPORT int pgMgrPageFree ();
IMPORT int pgMgrPageMap ();
IMPORT int pgMgrPageUnmap ();
IMPORT int pgMgrPrivateUnmap ();
IMPORT int pgMgrShow ();
IMPORT int pgMgrShowInit ();
IMPORT int pgPoolAddToPool ();
IMPORT int pgPoolAlignedAlloc ();
IMPORT int pgPoolAllocAt ();
IMPORT int pgPoolAvailAlloc ();
IMPORT int pgPoolBlockListShow ();
IMPORT int pgPoolCreate ();
IMPORT int pgPoolDelete ();
IMPORT int pgPoolFree ();
IMPORT int pgPoolInfoGet ();
IMPORT int pgPoolInit ();
IMPORT int pgPoolLibInit ();
IMPORT int pgPoolNextFreeGet ();
IMPORT int pgPoolPhysAddToPool ();
IMPORT int pgPoolPhysAlignedAlloc ();
IMPORT int pgPoolPhysAlloc ();
IMPORT int pgPoolPhysAllocAt ();
IMPORT int pgPoolPhysAvailAlloc ();
IMPORT int pgPoolPhysFree ();
IMPORT int pgPoolPhysLibInit ();
IMPORT int pgPoolPhysNextFreeGet ();
IMPORT int pgPoolPhysRangeEach ();
IMPORT int pgPoolPhysRangeIsAllocated ();
IMPORT int pgPoolPhysRangeIsFree ();
IMPORT int pgPoolPhysRangeVerify ();
IMPORT int pgPoolPhysRemoveFromPool ();
IMPORT int pgPoolRangeStateCheck ();
IMPORT int pgPoolRangeVerify ();
IMPORT int pgPoolRemoveFromPool ();
IMPORT int pgPoolShow ();
IMPORT int pgPoolShowInit ();
IMPORT int pgPoolVirtAddToPool ();
IMPORT int pgPoolVirtAlignedAlloc ();
IMPORT int pgPoolVirtAlloc ();
IMPORT int pgPoolVirtAllocAt ();
IMPORT int pgPoolVirtAvailAlloc ();
IMPORT int pgPoolVirtFree ();
IMPORT int pgPoolVirtLibInit ();
IMPORT int pgPoolVirtNextFreeGet ();
IMPORT int pgPoolVirtRangeEach ();
IMPORT int pgPoolVirtRangeIsAllocated ();
IMPORT int pgPoolVirtRangeIsFree ();
IMPORT int pgPoolVirtRangeVerify ();
IMPORT int pgPoolVirtRemoveFromPool ();
IMPORT int pipeDevCreate ();
IMPORT int pipeDevCreateSc ();
IMPORT int pipeDevDelete ();
IMPORT int pipeDevDeleteSc ();
IMPORT int pipeDrv ();
IMPORT int pipeMsgQOptions;
IMPORT int pipeSc ();
IMPORT int plbInit1 ();
IMPORT int plbIntrGet ();
IMPORT int plbIntrSet ();
IMPORT int plbRegister ();
IMPORT int pmDefaultArena ();
IMPORT int pmFreeSpace ();
IMPORT int pmInit ();
IMPORT int pmInvalidate ();
IMPORT int pmLibInit ();
IMPORT int pmPartId;
IMPORT int pmRegionAddr ();
IMPORT int pmRegionClose ();
IMPORT int pmRegionCreate ();
IMPORT int pmRegionOpen ();
IMPORT int pmRegionProtect ();
IMPORT int pmRegionSize ();
IMPORT int pmShow ();
IMPORT int pmValidate ();
IMPORT int poolBlockAdd ();
IMPORT int poolCreate ();
IMPORT int poolDelete ();
IMPORT int poolFindItem ();
IMPORT int poolFreeCount ();
IMPORT int poolIdListGet ();
IMPORT int poolIncrementGet ();
IMPORT int poolIncrementSet ();
IMPORT int poolInitialize ();
IMPORT int poolItemGet ();
IMPORT int poolItemReturn ();
IMPORT int poolLibInit ();
IMPORT int poolListGbl;
IMPORT int poolTotalCount ();
IMPORT int poolUnusedBlocksFree ();
IMPORT int posixSignalMode;
IMPORT int pow ();
IMPORT int ppGlobalEnviron;
IMPORT int printErr ();
IMPORT int printErrno ();
IMPORT int printExc ();
IMPORT int printLogo ();
IMPORT int printToEDRbuf ();
IMPORT int printf ();
IMPORT int priorityLevel;
IMPORT int priv_targetName;
IMPORT int psrShow ();
IMPORT int ptyDevCreate ();
IMPORT int ptyDevRemove ();
IMPORT int ptyDrv ();
IMPORT int putc ();
IMPORT int putchar ();
IMPORT int putenv ();
IMPORT int puts ();
IMPORT int putw ();
IMPORT int pwd ();
IMPORT int qFifoClass;
IMPORT int qFifoClassId;
IMPORT int qFifoEach ();
IMPORT int qFifoGet ();
IMPORT int qFifoInfo ();
IMPORT int qFifoInit ();
IMPORT int qFifoNext ();
IMPORT int qFifoPut ();
IMPORT int qFifoRemove ();
IMPORT int qFifoResort ();
IMPORT int qFifoRestore ();
IMPORT int qPriBMapClassId;
IMPORT int qPriBMapEach ();
IMPORT int qPriBMapGet ();
IMPORT int qPriBMapInfo ();
IMPORT int qPriBMapInit ();
IMPORT int qPriBMapKey ();
IMPORT int qPriBMapNext ();
IMPORT int qPriBMapPut ();
IMPORT int qPriBMapRemove ();
IMPORT int qPriBMapResort ();
IMPORT int qPriBMapRestore ();
IMPORT int qPriBMapSet ();
IMPORT int qPriDeltaAdvance ();
IMPORT int qPriDeltaClassId;
IMPORT int qPriDeltaEach ();
IMPORT int qPriDeltaGet ();
IMPORT int qPriDeltaGetExpired ();
IMPORT int qPriDeltaInfo ();
IMPORT int qPriDeltaInit ();
IMPORT int qPriDeltaKey ();
IMPORT int qPriDeltaNext ();
IMPORT int qPriDeltaPut ();
IMPORT int qPriDeltaRemove ();
IMPORT int qPriDeltaResort ();
IMPORT int qPriListClassId;
IMPORT int qPriListEach ();
IMPORT int qPriListFromTailClassId;
IMPORT int qPriListGet ();
IMPORT int qPriListInfo ();
IMPORT int qPriListInit ();
IMPORT int qPriListKey ();
IMPORT int qPriListNext ();
IMPORT int qPriListPut ();
IMPORT int qPriListPutFromTail ();
IMPORT int qPriListRemove ();
IMPORT int qPriListResort ();
IMPORT int qTradPriBMapClassId;
IMPORT int qTradPriBMapSetCompatible ();
IMPORT int qTradPriListClassId;
IMPORT int qTradPriListSetCompatible ();
IMPORT int qsort ();
IMPORT int r0 ();
IMPORT int r1 ();
IMPORT int r10 ();
IMPORT int r11 ();
IMPORT int r12 ();
IMPORT int r13 ();
IMPORT int r14 ();
IMPORT int r2 ();
IMPORT int r3 ();
IMPORT int r4 ();
IMPORT int r5 ();
IMPORT int r6 ();
IMPORT int r7 ();
IMPORT int r8 ();
IMPORT int r9 ();
IMPORT int rBuffCreate ();
IMPORT int rBuffDestroy ();
IMPORT int rBuffFlush ();
IMPORT int rBuffLibInit ();
IMPORT int rBuffNBytes ();
IMPORT int rBuffPollingInterval;
IMPORT int rBuffRead ();
IMPORT int rBuffReadCommit ();
IMPORT int rBuffReadReserve ();
IMPORT int rBuffReset ();
IMPORT int rBuffSetFd ();
IMPORT int rBuffUpload ();
IMPORT int rBuffWrite ();
IMPORT int raise ();
IMPORT int rand ();
IMPORT int rawFsBioBufferSize;
IMPORT int rawFsDevInit ();
IMPORT int rawFsDrvNum;
IMPORT int rawFsFdListMutexOptions;
IMPORT int rawFsFdMutexOptions;
IMPORT int rawFsInit ();
IMPORT int rawFsVolMutexOptions;
IMPORT int rawFsVolUnmount ();
IMPORT int rcmd ();
IMPORT int rcmd_af ();
IMPORT int read ();
IMPORT int readdir ();
IMPORT int readdir_r ();
IMPORT int readv ();
IMPORT int readyQBMap;
IMPORT int readyQHead;
IMPORT int realDemangleToBufferEx ();
IMPORT int realloc ();
IMPORT int reboot ();
IMPORT int rebootHookAdd ();
IMPORT int rebootHookDelete ();
IMPORT int rebootHookTbl;
IMPORT int rebootHookTblSize;
IMPORT int recv ();
IMPORT int recvSc ();
IMPORT int recvfrom ();
IMPORT int recvfromSc ();
IMPORT int recvmsg ();
IMPORT int recvmsgSc ();
IMPORT int reld ();
IMPORT int remCurIdGet ();
IMPORT int remCurIdSet ();
IMPORT int remLastResvPort;
IMPORT int remLibInit ();
IMPORT int remLibSysctlInit ();
IMPORT int remNumConnRetrials;
IMPORT int remPasswd;
IMPORT int remStdErrSetupTimeout;
IMPORT int remUser;
IMPORT int remove ();
IMPORT int removeSc ();
IMPORT int rename ();
IMPORT int renameSc ();
IMPORT int repeat ();
IMPORT int repeatHost ();
IMPORT int repeatRun ();
IMPORT int reschedule ();
IMPORT int restartTaskName;
IMPORT int restartTaskOptions;
IMPORT int restartTaskPriority;
IMPORT int restartTaskStackSize;
IMPORT int retran_noprs;
IMPORT int retran_notmr;
IMPORT int rewind ();
IMPORT int rewinddir ();
IMPORT int rindex ();
IMPORT int rm ();
IMPORT int rmdir ();
IMPORT int rngBufGet ();
IMPORT int rngBufPut ();
IMPORT int rngCreate ();
IMPORT int rngDelete ();
IMPORT int rngFlush ();
IMPORT int rngFreeBytes ();
IMPORT int rngIsEmpty ();
IMPORT int rngIsFull ();
IMPORT int rngMoveAhead ();
IMPORT int rngNBytes ();
IMPORT int rngPutAhead ();
IMPORT int rootMemNBytes;
IMPORT int rootTaskId;
IMPORT int roundRobinHookInstalled;
IMPORT int roundRobinOn;
IMPORT int roundRobinSlice;
IMPORT int routetable_node;
IMPORT int rresvport ();
IMPORT int rresvportCommon ();
IMPORT int rresvport_af ();
IMPORT int rtpAuxvAdd ();
IMPORT int rtpAuxvCopy ();
IMPORT int rtpAuxvLibInit ();
IMPORT int rtpAuxvSizeGet ();
IMPORT int rtpChildHandleGet ();
IMPORT int rtpChildIdGet ();
IMPORT int rtpChildWait ();
IMPORT int rtpClass;
IMPORT int rtpClassId;
IMPORT int rtpCodeSize;
IMPORT int rtpCodeStart;
IMPORT int rtpDbgCmdFuncCall ();
IMPORT int rtpDbgCmdLibInit ();
IMPORT int rtpDbgCmdMemAlloc ();
IMPORT int rtpDbgCmdTaskSpawn ();
IMPORT int rtpDelete ();
IMPORT int rtpDeleteForce ();
IMPORT int rtpDeleteHookAdd ();
IMPORT int rtpDeleteHookDelete ();
IMPORT int rtpDeleteMsg;
IMPORT int rtpDeletionDeferDisable ();
IMPORT int rtpDeletionDeferEnable ();
IMPORT int rtpExecCmdDelay;
IMPORT int rtpHandleIdGet ();
IMPORT int rtpHelp ();
IMPORT int rtpHookLibInit ();
IMPORT int rtpHookShow ();
IMPORT int rtpHookTblSize;
IMPORT int rtpHostLibInit ();
IMPORT int rtpIdFigure ();
IMPORT int rtpIdVerify ();
IMPORT int rtpInfoGet ();
IMPORT int rtpInfoGetSc ();
IMPORT int rtpInitCompleteHookAdd ();
IMPORT int rtpInitCompleteHookDelete ();
IMPORT int rtpInitialStackFrameCreate ();
IMPORT int rtpIoDefPathGet ();
IMPORT int rtpIoDefPathSet ();
IMPORT int rtpIoFdValue ();
IMPORT int rtpIoSysConstruct ();
IMPORT int rtpIoSysDestruct ();
IMPORT int rtpIoTableSizeGet ();
IMPORT int rtpIoTableSizeSet ();
IMPORT int rtpKill ();
IMPORT int rtpLibInit ();
IMPORT int rtpLibInstalled;
IMPORT int rtpLkAddr ();
IMPORT int rtpLkup ();
IMPORT int rtpMemShow ();
IMPORT int rtpNameTruncate ();
IMPORT int rtpParentDeleteNotify ();
IMPORT int rtpPause ();
IMPORT int rtpPostCreateHookAdd ();
IMPORT int rtpPostCreateHookDelete ();
IMPORT int rtpPreCreateHookAdd ();
IMPORT int rtpPreCreateHookDelete ();
IMPORT int rtpScLibInit ();
IMPORT int rtpShellCmdInit ();
IMPORT int rtpShellHookInit ();
IMPORT int rtpShlShow ();
IMPORT int rtpShlSymbolsRegister ();
IMPORT int rtpShlSymbolsUnregister ();
IMPORT int rtpShow ();
IMPORT int rtpShowInit ();
IMPORT int rtpShowShellCmdInit ();
IMPORT int rtpSigCtxCreate ();
IMPORT int rtpSigCtxStackAlloc ();
IMPORT int rtpSigDeleteMsg;
IMPORT int rtpSigExceptionExit ();
IMPORT int rtpSigLibInit ();
IMPORT int rtpSigPendDestroy ();
IMPORT int rtpSigPendInit ();
IMPORT int rtpSigPendKill ();
IMPORT int rtpSigQueueDelete ();
IMPORT int rtpSigQueueInit ();
IMPORT int rtpSigReturn ();
IMPORT int rtpSigSavedCtxGet ();
IMPORT int rtpSigStopMsg;
IMPORT int rtpSigSystemCallExit ();
IMPORT int rtpSigaction ();
IMPORT int rtpSigaltstack ();
IMPORT int rtpSigpending ();
IMPORT int rtpSigprocmask ();
IMPORT int rtpSigqueue ();
IMPORT int rtpSigsuspend ();
IMPORT int rtpSigtimedwait ();
IMPORT int rtpSigwait ();
IMPORT int rtpSigwaitinfo ();
IMPORT int rtpSp ();
IMPORT int rtpSpDelay;
IMPORT int rtpSpOptions;
IMPORT int rtpSpPriority;
IMPORT int rtpSpStackSize;
IMPORT int rtpSpTaskOptions;
IMPORT int rtpSpawn ();
IMPORT int rtpSpawnSc ();
IMPORT int rtpStopMsg;
IMPORT int rtpSymTblIdGet ();
IMPORT int rtpSymsAdd ();
IMPORT int rtpSymsOverride ();
IMPORT int rtpSymsRemove ();
IMPORT int rtpSysCallCtxRegsGet ();
IMPORT int rtpSysCallCtxStore ();
IMPORT int rtpSysCallRestartRegSet ();
IMPORT int rtpSyscallSigCheck ();
IMPORT int rtpSyscallSigDeliver ();
IMPORT int rtpSysctlRegister ();
IMPORT int rtpSysctlSyscall ();
IMPORT int rtpTaskAllCont ();
IMPORT int rtpTaskAllStop ();
IMPORT int rtpTaskExitRegister ();
IMPORT int rtpTaskKill ();
IMPORT int rtpTaskShow ();
IMPORT int rtpTaskSigPendKill ();
IMPORT int rtpTaskSigqueue ();
IMPORT int rtpUserModeSwitch ();
IMPORT int rtpVarAdd ();
IMPORT int rtpVarAddSc ();
IMPORT int rtpVarDelete ();
IMPORT int rtpVarDeleteAll ();
IMPORT int rtpVarInit ();
IMPORT int rtpVerifyAndLock ();
IMPORT int rtpVerifyTaskIdAndLock ();
IMPORT int rtpWait ();
IMPORT int rtpWaitQFlush ();
IMPORT int rtpWaitQInit ();
IMPORT int rtpZombieCleanup ();
IMPORT int rtpi ();
IMPORT char * runtimeName;
IMPORT char * runtimeVersion;
IMPORT char * runtimeVersionFull;
IMPORT int s ();
IMPORT int scMemPrivValidate ();
IMPORT int scMemValEnable ();
IMPORT int scMemValidate ();
IMPORT int scalbn ();
IMPORT int scanCharSet ();
IMPORT int scanField ();
IMPORT int scanf ();
IMPORT int sdClassId;
IMPORT int sdCreate ();
IMPORT int sdCreateHookAdd ();
IMPORT int sdCreateHookDelete ();
IMPORT int sdDelete ();
IMPORT int sdDeleteHookAdd ();
IMPORT int sdDeleteHookDelete ();
IMPORT int sdDeleteSc ();
IMPORT int sdGenericHookAdd ();
IMPORT int sdGenericHookDelete ();
IMPORT int sdInfoGet ();
IMPORT int sdInfoGetSc ();
IMPORT int sdIsMapped ();
IMPORT int sdLibInit ();
IMPORT int sdLibInstalled;
IMPORT int sdMap ();
IMPORT int sdMapSc ();
IMPORT int sdOpen ();
IMPORT int sdProtect ();
IMPORT int sdProtectSc ();
IMPORT int sdRtpMap ();
IMPORT int sdRtpUnmap ();
IMPORT int sdScInit ();
IMPORT int sdShow ();
IMPORT int sdShowInit ();
IMPORT int sdShowShellCmdInit ();
IMPORT int sdUnmap ();
IMPORT int sdUnmapSc ();
IMPORT int sdVerifiedLock ();
IMPORT int selNodeAdd ();
IMPORT int selNodeDelete ();
IMPORT int selTaskDeleteHookAdd ();
IMPORT int selWakeup ();
IMPORT int selWakeupAll ();
IMPORT int selWakeupListInit ();
IMPORT int selWakeupListLen ();
IMPORT int selWakeupListTerm ();
IMPORT int selWakeupType ();
IMPORT int select ();
IMPORT int selectInit ();
IMPORT int selectSc ();
IMPORT int semBCreate ();
IMPORT int semBGive ();
IMPORT int semBGiveDefer ();
IMPORT int semBGiveNoLock ();
IMPORT int semBGiveScalable ();
IMPORT int semBInit ();
IMPORT int semBInitialize ();
IMPORT int semBTake ();
IMPORT int semBTakeNoLock ();
IMPORT int semBTakeScalable ();
IMPORT int semCCreate ();
IMPORT int semCGive ();
IMPORT int semCGiveDefer ();
IMPORT int semCInit ();
IMPORT int semCInitialize ();
IMPORT int semCTake ();
IMPORT int semClass;
IMPORT int semClassId;
IMPORT int semClose ();
IMPORT int semCreateTbl;
IMPORT int semCtlSc ();
IMPORT int semDelete ();
IMPORT int semDeleteLibInit ();
IMPORT int semDestroy ();
IMPORT int semEvIsFreeTbl;
IMPORT int semEvStart ();
IMPORT int semEvStop ();
IMPORT int semExchange ();
IMPORT int semFlush ();
IMPORT int semFlushDefer ();
IMPORT int semFlushDeferTbl;
IMPORT int semFlushTbl;
IMPORT int semGive ();
IMPORT int semGiveDefer ();
IMPORT int semGiveDeferTbl;
IMPORT int semGiveNoLockTbl;
IMPORT int semGiveTbl;
IMPORT int semInfo ();
IMPORT int semInfoGet ();
IMPORT int semIntRestrict ();
IMPORT int semInvalid ();
IMPORT int semLibInit ();
IMPORT int semLocalIdVerify ();
IMPORT int semMCreate ();
IMPORT int semMGive ();
IMPORT int semMGiveForce ();
IMPORT int semMGiveKernWork ();
IMPORT int semMGiveNoLock ();
IMPORT int semMGiveScalable ();
IMPORT int semMInit ();
IMPORT int semMInitialize ();
IMPORT int semMPendQPut ();
IMPORT int semMTake ();
IMPORT int semMTakeByProxy ();
IMPORT int semMTakeNoLock ();
IMPORT int semMTakeScalable ();
IMPORT int semOpen ();
IMPORT int semOpenInit ();
IMPORT int semQFlush ();
IMPORT int semQFlushDefer ();
IMPORT int semQInit ();
IMPORT int semRMinGiveHard ();
IMPORT int semRMinTakeHard ();
IMPORT int semRTake ();
IMPORT int semRWCreate ();
IMPORT int semRWGive ();
IMPORT int semRWGiveForce ();
IMPORT int semRWInitialize ();
IMPORT int semRWLibMaxReaders;
IMPORT int semShow ();
IMPORT int semShowInit ();
IMPORT int semTake ();
IMPORT int semTakeNoLockTbl;
IMPORT int semTakeTbl;
IMPORT int semTerminate ();
IMPORT int semUnlink ();
IMPORT int semWMinGiveHard ();
IMPORT int semWMinTakeHard ();
IMPORT int semWTake ();
IMPORT int send ();
IMPORT int sendSc ();
IMPORT int send_full;
IMPORT int sendmsg ();
IMPORT int sendmsgSc ();
IMPORT int sendto ();
IMPORT int sendtoSc ();
IMPORT int setbuf ();
IMPORT int setbuffer ();
IMPORT int sethostname ();
IMPORT int setjmp ();
IMPORT int setlinebuf ();
IMPORT int setlocale ();
IMPORT int setprlimitSc ();
IMPORT int setsockopt ();
IMPORT int setsockoptSc ();
IMPORT int settimeofday ();
IMPORT int setvbuf ();
IMPORT int sfpDoubleNormalize ();
IMPORT int sfpDoubleNormalize2 ();
IMPORT int sfpDoubleSetup ();
IMPORT int sfpFloatNormalize ();
IMPORT int sfpFloatSetup ();
IMPORT int shConfig ();
IMPORT int sha1_block_data_order ();
IMPORT int sha1_block_host_order ();
IMPORT int shellAbort ();
IMPORT int shellAbortHandledByShell ();
IMPORT int shellActivate ();
IMPORT int shellBackgroundInit ();
IMPORT int shellBackgroundRead ();
IMPORT int shellCmdAdd ();
IMPORT int shellCmdAliasAdd ();
IMPORT int shellCmdAliasArrayAdd ();
IMPORT int shellCmdAliasDelete ();
IMPORT int shellCmdAliasShow ();
IMPORT int shellCmdArrayAdd ();
IMPORT int shellCmdCheck ();
IMPORT int shellCmdExec ();
IMPORT int shellCmdInfoArgsStore ();
IMPORT int shellCmdInfoCmdLineStore ();
IMPORT int shellCmdInfoFinalNameStore ();
IMPORT int shellCmdInfoGet ();
IMPORT int shellCmdInfoInitialNameStore ();
IMPORT int shellCmdInit ();
IMPORT int shellCmdMatchingAliasListGet ();
IMPORT int shellCmdMatchingCmdListGet ();
IMPORT int shellCmdMemRegister ();
IMPORT int shellCmdMemUnregister ();
IMPORT int shellCmdPreParseAdd ();
IMPORT int shellCmdPreParsedGet ();
IMPORT int shellCmdStatementExec ();
IMPORT int shellCmdStatementSplit ();
IMPORT int shellCmdSymTabIdGet ();
IMPORT int shellCmdTaskIdConvert ();
IMPORT int shellCmdTopicAdd ();
IMPORT int shellCompatibleCheck ();
IMPORT int shellCompatibleSet ();
IMPORT int shellCompletionPathnameGet ();
IMPORT int shellConfigDefaultGet ();
IMPORT int shellConfigDefaultSet ();
IMPORT int shellConfigDefaultValueGet ();
IMPORT int shellConfigDefaultValueSet ();
IMPORT int shellConfigDefaultValueUnset ();
IMPORT int shellConfigGet ();
IMPORT int shellConfigLibInit ();
IMPORT int shellConfigSet ();
IMPORT int shellConfigValueGet ();
IMPORT int shellConfigValueSet ();
IMPORT int shellConfigValueUnset ();
IMPORT int shellConsoleInit ();
IMPORT int shellConsoleTaskId;
IMPORT int shellContextFinalize ();
IMPORT int shellContextInit ();
IMPORT int shellContextListLock ();
IMPORT int shellContextListUnlock ();
IMPORT int shellDataAdd ();
IMPORT int shellDataAllRemove ();
IMPORT int shellDataFirst ();
IMPORT int shellDataFromNameAdd ();
IMPORT int shellDataFromNameGet ();
IMPORT int shellDataGet ();
IMPORT int shellDataNext ();
IMPORT int shellDataRemove ();
IMPORT int shellErrnoGet ();
IMPORT int shellErrnoSet ();
IMPORT int shellExec ();
IMPORT int shellExitWrapper ();
IMPORT int shellFirst ();
IMPORT int shellFromNameGet ();
IMPORT int shellFromTaskGet ();
IMPORT int shellFromTaskParentContextGet ();
IMPORT int shellGenericCreate ();
IMPORT int shellGenericInit ();
IMPORT int shellHistLibInit ();
IMPORT int shellHistSaveOrLoad ();
IMPORT int shellHistory ();
IMPORT int shellIOStdGet ();
IMPORT int shellIOStdSet ();
IMPORT int shellIdVerify ();
IMPORT int shellInOutBgndClose ();
IMPORT int shellInOutBgndGet ();
IMPORT int shellInOutBgndIoClose ();
IMPORT int shellInOutBgndOpen ();
IMPORT int shellInOutBgndRegister ();
IMPORT int shellInOutBlockingBlock ();
IMPORT int shellInOutBlockingBlockedDataGet ();
IMPORT int shellInOutBlockingClose ();
IMPORT int shellInOutBlockingDataSet ();
IMPORT int shellInOutBlockingGet ();
IMPORT int shellInOutBlockingOnDataClose ();
IMPORT int shellInOutBlockingOpen ();
IMPORT int shellInOutBlockingUnblock ();
IMPORT int shellInOutInitialGet ();
IMPORT int shellInOutInputHookAdd ();
IMPORT int shellInOutInputHookDelete ();
IMPORT int shellInOutInputHookSet ();
IMPORT int shellInOutInputHookUnset ();
IMPORT int shellInOutInputUniqueCheck ();
IMPORT int shellInOutMasterPtyGet ();
IMPORT int shellInOutRedirectClose ();
IMPORT int shellInOutRedirectOpen ();
IMPORT int shellInOutRedirectRestore ();
IMPORT int shellInOutRedirectScript ();
IMPORT int shellInOutRedirectSet ();
IMPORT int shellInOutSet ();
IMPORT int shellInOutSlavePtyGet ();
IMPORT int shellInOutUse ();
IMPORT int shellInternalArgStackAllocate ();
IMPORT int shellInternalArgumentEval ();
IMPORT int shellInternalDataSymbolGet ();
IMPORT int shellInternalDecValueDisplay ();
IMPORT int shellInternalFuncDoubleArgAdd ();
IMPORT int shellInternalFuncFloatArgAdd ();
IMPORT int shellInternalFuncLLongArgAdd ();
IMPORT int shellInternalFuncLongArgAdd ();
IMPORT int shellInternalFunctionCall ();
IMPORT int shellInternalHexValueDisplay ();
IMPORT int shellInternalKernelSymbolCreate ();
IMPORT int shellInternalOptFree ();
IMPORT int shellInternalOptGet ();
IMPORT int shellInternalStrSpaceTokenize ();
IMPORT int shellInternalStrToChar ();
IMPORT int shellInternalStrToFloat ();
IMPORT int shellInternalStrToInt ();
IMPORT int shellInternalStrToInt2 ();
IMPORT int shellInternalStrToInt32 ();
IMPORT int shellInternalStrToLong ();
IMPORT int shellInternalStrTokenize ();
IMPORT int shellInternalStrUnquote ();
IMPORT int shellInternalSymTblFromRtpGet ();
IMPORT int shellInternalSymTblFromTaskGet ();
IMPORT int shellInternalSymbolDisplay ();
IMPORT int shellInternalSymbolGet ();
IMPORT int shellInternalSymbolsResolve ();
IMPORT int shellInternalTaskNameMatch ();
IMPORT int shellInternalTextSymbolGet ();
IMPORT int shellInternalValueDisplay ();
IMPORT int shellInterpByNameFind ();
IMPORT int shellInterpCInit ();
IMPORT int shellInterpC_create_buffer ();
IMPORT int shellInterpC_delete_buffer ();
IMPORT int shellInterpC_flush_buffer ();
IMPORT int shellInterpC_init_buffer ();
IMPORT int shellInterpC_load_buffer_state ();
IMPORT int shellInterpC_scan_buffer ();
IMPORT int shellInterpC_scan_bytes ();
IMPORT int shellInterpC_scan_string ();
IMPORT int shellInterpC_switch_to_buffer ();
IMPORT int shellInterpCin;
IMPORT int shellInterpCleng;
IMPORT int shellInterpClex ();
IMPORT int shellInterpCmdInit ();
IMPORT int shellInterpCmdLibInit ();
IMPORT int shellInterpCout;
IMPORT int shellInterpCparse ();
IMPORT int shellInterpCrestart ();
IMPORT int shellInterpCtext;
IMPORT int shellInterpCtxCreate ();
IMPORT int shellInterpCtxGet ();
IMPORT int shellInterpDefaultNameGet ();
IMPORT int shellInterpDelete ();
IMPORT int shellInterpEvaluate ();
IMPORT int shellInterpLibInit ();
IMPORT int shellInterpNameGet ();
IMPORT int shellInterpPromptDftSet ();
IMPORT int shellInterpPromptGet ();
IMPORT int shellInterpPromptSet ();
IMPORT int shellInterpRegister ();
IMPORT int shellInterpRestart ();
IMPORT int shellInterpSet ();
IMPORT int shellInterpSwitch ();
IMPORT int shellLibInit ();
IMPORT int shellLineLenGet ();
IMPORT int shellLock ();
IMPORT int shellLoginInstall ();
IMPORT int shellLogout ();
IMPORT int shellLogout2 ();
IMPORT int shellLogoutInstall ();
IMPORT int shellMaxSessionsSet ();
IMPORT int shellMemAllRegFree ();
IMPORT int shellMemCalloc ();
IMPORT int shellMemFree ();
IMPORT int shellMemLibInit ();
IMPORT int shellMemMalloc ();
IMPORT int shellMemRealloc ();
IMPORT int shellMemRegAllFree ();
IMPORT int shellMemRegFree ();
IMPORT int shellMemRegMalloc ();
IMPORT int shellMemRegister ();
IMPORT int shellMemStrdup ();
IMPORT int shellMemStringAdd ();
IMPORT int shellMemStringFree ();
IMPORT int shellMemStringIsAllocated ();
IMPORT int shellMemStringShow ();
IMPORT int shellMemUnregister ();
IMPORT int shellNext ();
IMPORT int shellOutputLock ();
IMPORT int shellOutputUnlock ();
IMPORT int shellParserControl ();
IMPORT int shellPrint ();
IMPORT int shellPrintErr ();
IMPORT int shellPromptFmtDftSet ();
IMPORT int shellPromptFmtSet ();
IMPORT int shellPromptFmtStrAdd ();
IMPORT int shellPromptLibInit ();
IMPORT int shellPromptPrint ();
IMPORT int shellPromptSet ();
IMPORT int shellRemoteConfigStr;
IMPORT int shellResourceReleaseHookAdd ();
IMPORT int shellRestart ();
IMPORT int shellScriptAbort ();
IMPORT int shellScriptNoAbort ();
IMPORT int shellTask ();
IMPORT int shellTaskDefaultBaseNameGet ();
IMPORT int shellTaskDefaultBaseNameSet ();
IMPORT int shellTaskDefaultOptionsGet ();
IMPORT int shellTaskDefaultOptionsSet ();
IMPORT int shellTaskDefaultPriorityGet ();
IMPORT int shellTaskDefaultPrioritySet ();
IMPORT int shellTaskDefaultStackSizeGet ();
IMPORT int shellTaskDefaultStackSizeSet ();
IMPORT int shellTaskGet ();
IMPORT int shellTaskIdDefault ();
IMPORT int shellTerminate ();
IMPORT int shellWorkingMemCtxAttach ();
IMPORT int shellWorkingMemCtxAttachedShow ();
IMPORT int shellWorkingMemCtxCurrentGet ();
IMPORT int shellWorkingMemCtxCurrentSet ();
IMPORT int shellWorkingMemCtxDetach ();
IMPORT int shellWorkingMemCtxDuplicate ();
IMPORT int shellWorkingMemCtxGet ();
IMPORT int shellWorkingMemCtxIdConvert ();
IMPORT int shellWorkingMemCtxLastGet ();
IMPORT int shellWorkingMemCtxRtnSet ();
IMPORT int shlIdGive ();
IMPORT int shlLibInit ();
IMPORT int shlNodeList;
IMPORT int shlNodeListMutex;
IMPORT int shlNodeTake ();
IMPORT int shlNodeToShlId ();
IMPORT int shlRtpDeleteAll ();
IMPORT int shlRtpInfoGet ();
IMPORT int shlScLibInit ();
IMPORT int shlShellCmdInit ();
IMPORT int shlShow ();
IMPORT int shlShowInit ();
IMPORT int shlSymsAdd ();
IMPORT int shlSymsRemove ();
IMPORT int show ();
IMPORT int showLoggerInfo ();
IMPORT int shutdown ();
IMPORT int shutdownSc ();
IMPORT int sigEvtRtn;
IMPORT int sigInit ();
IMPORT int sigPendDestroy ();
IMPORT int sigPendInit ();
IMPORT int sigPendKill ();
IMPORT int sigaction ();
IMPORT int sigaddset ();
IMPORT int sigaltstackSc ();
IMPORT int sigblock ();
IMPORT int sigdelset ();
IMPORT int sigemptyset ();
IMPORT int sigfillset ();
IMPORT int sigismember ();
IMPORT int signal ();
IMPORT int sigpending ();
IMPORT int sigpendingSc ();
IMPORT int sigprocmask ();
IMPORT int sigprocmaskSc ();
IMPORT int sigqueue ();
IMPORT int sigqueueInit ();
IMPORT int sigreturn ();
IMPORT int sigsetjmp ();
IMPORT int sigsetmask ();
IMPORT int sigsuspend ();
IMPORT int sigtimedwait ();
IMPORT int sigvec ();
IMPORT int sigwait ();
IMPORT int sigwaitinfo ();
IMPORT int sin ();
IMPORT int sinh ();
IMPORT int sioChanConnect_desc;
IMPORT int sioChanGet_desc;
IMPORT int sioNextChannelNumberAssign ();
IMPORT int sizeNodesAlloc ();
IMPORT int sllCount ();
IMPORT SL_NODE *sllEach ();
IMPORT SL_NODE *sllGet ();
IMPORT int sllInit ();
IMPORT SL_NODE *sllPrevious ();
IMPORT void sllPutAtHead ();
IMPORT void sllPutAtTail ();
IMPORT void sllRemove ();
IMPORT int sllTerminate ();
IMPORT int smObjPoolMinusOne;
IMPORT int smObjTaskDeleteFailRtn;
IMPORT int smObjTcbFreeFailRtn;
IMPORT int smObjTcbFreeRtn;
IMPORT int snprintf ();
IMPORT int so ();
IMPORT int sockInfo ();
IMPORT int sockLibAdd ();
IMPORT int sockLibInit ();
IMPORT int sockLibMap;
IMPORT int sockScLibInit ();
IMPORT int sockShow ();
IMPORT int socket ();
IMPORT int socketDevHdr;
IMPORT int socketSc ();
IMPORT int sp ();
IMPORT int spTaskOptions;
IMPORT int spTaskPriority;
IMPORT int spTaskStackSize;
IMPORT int spinLockIsrGive ();
IMPORT int spinLockIsrInit ();
IMPORT int spinLockIsrTake ();
IMPORT int spinLockRestrict ();
IMPORT int spinLockTaskGive ();
IMPORT int spinLockTaskInit ();
IMPORT int spinLockTaskTake ();
IMPORT int sprintf ();
IMPORT int spy ();
IMPORT int spyClkStart ();
IMPORT int spyClkStartCommon ();
IMPORT int spyClkStop ();
IMPORT int spyClkStopCommon ();
IMPORT int spyComTask ();
IMPORT int spyCommon ();
IMPORT int spyCommon2 ();
IMPORT int spyCpuTbl;
IMPORT int spyHelp ();
IMPORT int spyIdleTotalTicks;
IMPORT int spyIncTicks;
IMPORT int spyInterruptTotalTicks;
IMPORT int spyKernelTotalTicks;
IMPORT int spyLibInit ();
IMPORT int spyNoSymbolPrint;
IMPORT int spyReport ();
IMPORT int spyReportCommon ();
IMPORT int spyReportCommon2 ();
IMPORT int spyShellCmdInit ();
IMPORT int spyStop ();
IMPORT int spyStopCommon ();
IMPORT int spyTask ();
IMPORT int spyTaskId;
IMPORT int spyTaskOptions;
IMPORT int spyTaskPriority;
IMPORT int spyTaskStackSize;
IMPORT int spyTotalTicks;
IMPORT int sqrt ();
IMPORT int srand ();
IMPORT int sscanf ();
IMPORT int startupScriptFieldSplit ();
IMPORT int stat ();
IMPORT int statSymTbl;
IMPORT int statfs ();
IMPORT int statfs64 ();
IMPORT int stdioFp ();
IMPORT int stdioFpCreate ();
IMPORT int stdioFpDestroy ();
IMPORT int stdioInit ();
IMPORT int stopApplLogger ();
IMPORT int strFree ();
IMPORT int strcasecmp ();
IMPORT int strcat ();
IMPORT int strchr ();
IMPORT int strcmp ();
IMPORT int strcoll ();
IMPORT int strcpy ();
IMPORT int strcspn ();
IMPORT int strdup ();
IMPORT int strerror ();
IMPORT int strerrorIf ();
IMPORT int strerror_r ();
IMPORT int strftime ();
IMPORT int strlcpy ();
IMPORT int strlen ();
IMPORT int strncasecmp ();
IMPORT int strncat ();
IMPORT int strncmp ();
IMPORT int strncpy ();
IMPORT int strpbrk ();
IMPORT int strrchr ();
IMPORT int strspn ();
IMPORT int strstr ();
IMPORT int strtod ();
IMPORT int strtok ();
IMPORT int strtok_r ();
IMPORT int strtol ();
IMPORT int strtoul ();
IMPORT int strxfrm ();
IMPORT int substrcmp ();
IMPORT int svDataCollectorLibInit ();
IMPORT int svDataCollectorsAdd ();
IMPORT int svDataCollectorsRemove ();
IMPORT int svDataCollectorsRemoveAll ();
IMPORT int swab ();
IMPORT int symAdd ();
IMPORT int symByCNameFind ();
IMPORT int symByValueAndTypeFind ();
IMPORT int symByValueFind ();
IMPORT int symEach ();
IMPORT int symEachCall ();
IMPORT int symFind ();
IMPORT int symFindByName ();
IMPORT int symFindByNameAndType ();
IMPORT int symFindByValue ();
IMPORT int symFindByValueAndType ();
IMPORT int symFindSymbol ();
IMPORT int symFree ();
IMPORT int symGroupDefault;
IMPORT int symLibInit ();
IMPORT int symListGet ();
IMPORT int symLkupPgSz;
IMPORT int symNameGet ();
IMPORT int symRegister ();
IMPORT int symRemove ();
IMPORT int symShellCmdInit ();
IMPORT int symShow ();
IMPORT int symShowInit ();
IMPORT int symTblAdd ();
IMPORT int symTblCreate ();
IMPORT int symTblDelete ();
IMPORT int symTblRemove ();
IMPORT int symTblShutdown ();
IMPORT int symTblSymSetRemove ();
IMPORT int symTypeGet ();
IMPORT int symTypeToStringConvert ();
IMPORT int symValueGet ();
IMPORT int syncLoadRtn;
IMPORT int syncSymAddRtn;
IMPORT int syncSymRemoveRtn;
IMPORT int syncUnldRtn;
IMPORT int sysAdaEnable;
IMPORT int sysAuxClkConnect ();
IMPORT int sysAuxClkDisable ();
IMPORT int sysAuxClkEnable ();
IMPORT int sysAuxClkHandleGet ();
IMPORT int sysAuxClkRateGet ();
IMPORT int sysAuxClkRateSet ();
IMPORT int sysBootFile;
IMPORT int sysBootHost;
IMPORT int sysBootLine;
IMPORT int sysBootParams;
IMPORT int sysBspDevFilter_desc;
IMPORT int sysBspRev ();
IMPORT int sysBus;
IMPORT int sysCacheLibInit;
IMPORT int sysClkConnect ();
IMPORT int sysClkDevUnitNo;
IMPORT int sysClkDisable ();
IMPORT int sysClkEnable ();
IMPORT int sysClkFreqGet ();
IMPORT int sysClkHandleGet ();
IMPORT int sysClkInit ();
IMPORT int sysClkRateGet ();
IMPORT int sysClkRateSet ();
IMPORT int sysClkTimerNo;
IMPORT int sysCplusEnable;
IMPORT int sysCpu;
IMPORT int sysCpuAvailableGet ();
IMPORT int sysDebugModeGet ();
IMPORT int sysDebugModeInit ();
IMPORT int sysDebugModeSet ();
IMPORT int sysDebugModeSetHookAdd ();
IMPORT int sysDebugModeSetHookDelete ();
IMPORT int sysDelay ();
IMPORT int sysExcMsg;
IMPORT int sysFecEnetAddrGet ();
IMPORT int sysFlags;
IMPORT int sysFlashGet ();
IMPORT int sysFlashSet ();
IMPORT int sysHwInit ();
IMPORT int sysHwInit0 ();
IMPORT int sysHwInit2 ();
IMPORT int sysInByte ();
IMPORT int sysInLong ();
IMPORT int sysInWord ();
IMPORT int sysInit ();
IMPORT int sysInstParamTable;
IMPORT int sysIntLvlChgRtn;
IMPORT int sysIntLvlDisableRtn;
IMPORT int sysIntLvlEnableRtn;
IMPORT int sysIntLvlVecAckRtn;
IMPORT int sysIntLvlVecChkRtn;
IMPORT int sysL2CacheEnabled;
IMPORT int sysMacIndex2Dev ();
IMPORT int sysMacIndex2Unit ();
IMPORT int sysMacOffsetGet ();
IMPORT int sysMemTop ();
IMPORT int sysMmuLibInit;
IMPORT int sysModel ();
IMPORT int sysMsDelay ();
IMPORT int sysNetDevName;
IMPORT int sysNetMacAddrGet ();
IMPORT int sysNetMacAddrSet ();
IMPORT int sysNetMacNVRamAddrGet ();
IMPORT int sysNvRamGet ();
IMPORT int sysNvRamSet ();
IMPORT int sysOutByte ();
IMPORT int sysOutLong ();
IMPORT int sysOutWord ();
IMPORT int sysPhysMemDesc;
IMPORT int sysPhysMemDescCortexA8ExtNumEnt;
IMPORT int sysPhysMemDescNumEnt;
IMPORT int sysPhysMemTop ();
IMPORT int sysProcNum;
IMPORT int sysProcNumGet ();
IMPORT int sysProcNumSet ();
IMPORT int sysSerialChanConnect ();
IMPORT int sysSerialChanGet ();
IMPORT int sysSerialConnectAll ();
IMPORT int sysStart ();
IMPORT int sysStartType;
IMPORT int sysSymPhysMemBottom;
IMPORT int sysSymPhysMemSize;
IMPORT int sysSymTbl;
IMPORT int sysTextProtect;
IMPORT int sysTimestamp ();
IMPORT int sysTimestampConnect ();
IMPORT int sysTimestampDisable ();
IMPORT int sysTimestampEnable ();
IMPORT int sysTimestampFreq ();
IMPORT int sysTimestampHandleGet ();
IMPORT int sysTimestampLock ();
IMPORT int sysTimestampPeriod ();
IMPORT int sysToMonitor ();
IMPORT int sysUsDelay ();
IMPORT int sysVmContext;
IMPORT int syscallArchInit ();
IMPORT int syscallDispatch ();
IMPORT int syscallEntryHookAdd ();
IMPORT int syscallEntryHookDelete ();
IMPORT int syscallExitHookAdd ();
IMPORT int syscallExitHookDelete ();
IMPORT int syscallGroupName;
IMPORT int syscallGroupRegister ();
IMPORT int syscallGroupTbl;
IMPORT int syscallHookLibInit ();
IMPORT int syscallHookShow ();
IMPORT int syscallHookTblSize;
IMPORT int syscallLibInit ();
IMPORT int syscallMonitor ();
IMPORT int syscallRegisterHookAdd ();
IMPORT int syscallRegisterHookDelete ();
IMPORT int syscallShow ();
IMPORT int syscallShowInit ();
IMPORT int syscallTrapHandle ();
IMPORT int syscall_node;
IMPORT int sysctl ();
IMPORT int sysctlCtxList;
IMPORT int sysctlInit ();
IMPORT int sysctlSc ();
IMPORT int sysctlScLibInit ();
IMPORT int sysctl__children;
IMPORT int sysctl_add_oid ();
IMPORT int sysctl_add_oid_internal ();
IMPORT int sysctl_ctx_entry_add ();
IMPORT int sysctl_ctx_entry_find ();
IMPORT int sysctl_ctx_free ();
IMPORT int sysctl_ctx_init ();
IMPORT int sysctl_find_oid ();
IMPORT int sysctl_handle_int ();
IMPORT int sysctl_handle_long ();
IMPORT int sysctl_handle_opaque ();
IMPORT int sysctl_handle_reg ();
IMPORT int sysctl_handle_string ();
IMPORT int sysctl_node;
IMPORT int sysctl_register_oid ();
IMPORT int sysctl_remove_oid ();
IMPORT int sysctl_sysctl_debug_dump_node ();
IMPORT int sysctl_unregister_oid ();
IMPORT int sysctlbyname ();
IMPORT int sysctlnametomib ();
IMPORT int system ();
IMPORT int systemSecurityIsEnabled;
IMPORT int tExcTaskExcStk;
IMPORT int tExcTaskStk;
IMPORT int tExcTaskTcb;
IMPORT int tagCheckEvaluateAsserts ();
IMPORT int tagCheckModuleAdd ();
IMPORT int tagCheckModuleDel ();
IMPORT int tagCheckStatementAdd ();
IMPORT int taglist;
IMPORT int tan ();
IMPORT int tanh ();
IMPORT int taskActivate ();
IMPORT int taskArgsGet ();
IMPORT int taskArgsSet ();
IMPORT int taskBpHook;
IMPORT int taskBpHookSet ();
IMPORT int taskClassId;
IMPORT int taskClose ();
IMPORT int taskCont ();
IMPORT int taskCpuAffinityGet ();
IMPORT int taskCpuAffinitySet ();
IMPORT int taskCpuLock ();
IMPORT int taskCpuUnlock ();
IMPORT int taskCpuUnlockNoResched ();
IMPORT int taskCreat ();
IMPORT int taskCreate ();
IMPORT int taskCreateHookAdd ();
IMPORT int taskCreateHookDelete ();
IMPORT int taskCreateHookInit ();
IMPORT int taskCreateHookShow ();
IMPORT int taskCreateHooks;
IMPORT int taskCreateHooksArrayA;
IMPORT int taskCreateHooksArrayB;
IMPORT int taskCreateLibInit ();
IMPORT int taskCreateWithGuard ();
IMPORT int taskCtlSc ();
IMPORT int taskDelay ();
IMPORT int taskDelaySc ();
IMPORT int taskDelete ();
IMPORT int taskDeleteForce ();
IMPORT int taskDeleteHookAdd ();
IMPORT int taskDeleteHookDelete ();
IMPORT int taskDeleteHookShow ();
IMPORT int taskDeleteHooks;
IMPORT int taskDeleteHooksArrayA;
IMPORT int taskDeleteHooksArrayB;
IMPORT int taskDestroy ();
IMPORT int taskEach ();
IMPORT int taskExit ();
IMPORT int taskHookShowInit ();
IMPORT int taskIdCurrent;
IMPORT int taskIdDefault ();
IMPORT int taskIdFigure ();
IMPORT int taskIdListGet ();
IMPORT int taskIdListSort ();
IMPORT int taskIdSelf ();
IMPORT int taskIdVerify ();
IMPORT int taskInfoGet ();
IMPORT int taskInit ();
IMPORT int taskInitExcStk ();
IMPORT int taskInitialize ();
IMPORT int taskIsDelayed ();
IMPORT int taskIsPended ();
IMPORT int taskIsReady ();
IMPORT int taskIsStopped ();
IMPORT int taskIsSuspended ();
IMPORT int taskKerExcStackSize;
IMPORT int taskKerExcStkOverflowSize;
IMPORT int taskKerExecStkOverflowSize;
IMPORT int taskKerExecStkUnderflowSize;
IMPORT int taskKillSc ();
IMPORT int taskLibInit ();
IMPORT int taskLock ();
IMPORT int taskMemCtxSwitch ();
IMPORT int taskMemLibInit ();
IMPORT int taskName ();
IMPORT int taskNameToId ();
IMPORT int taskOpen ();
IMPORT int taskOpenInit ();
IMPORT int taskOptionsGet ();
IMPORT int taskOptionsSet ();
IMPORT int taskOptionsString ();
IMPORT int taskPriNormalGet ();
IMPORT int taskPriorityGet ();
IMPORT int taskPrioritySet ();
IMPORT int taskRegName;
IMPORT int taskRegsGet ();
IMPORT int taskRegsInit ();
IMPORT int taskRegsModify ();
IMPORT int taskRegsSet ();
IMPORT int taskRegsShow ();
IMPORT int taskRegsShowOutput ();
IMPORT int taskReservedFieldGet ();
IMPORT int taskReservedFieldSet ();
IMPORT int taskReservedNumAllot ();
IMPORT int taskReset ();
IMPORT int taskRestart ();
IMPORT int taskResume ();
IMPORT int taskRtnValueSet ();
IMPORT int taskSafe ();
IMPORT int taskSchedInfoGet ();
IMPORT int taskShellCmdInit ();
IMPORT int taskShow ();
IMPORT int taskShowInit ();
IMPORT int taskSpareFieldGet ();
IMPORT int taskSpareFieldSet ();
IMPORT int taskSpareNumAllot ();
IMPORT int taskSpawn ();
IMPORT int taskStackAlloc ();
IMPORT int taskStackAllot ();
IMPORT int taskStackFree ();
IMPORT int taskStackGuardPageEnable ();
IMPORT int taskStackNoExecEnable ();
IMPORT int taskStackSizeGet ();
IMPORT int taskStatusString ();
IMPORT int taskStop ();
IMPORT int taskStopForce ();
IMPORT int taskStopMsg;
IMPORT int taskSuspend ();
IMPORT int taskSwapHookAdd ();
IMPORT int taskSwapHookAttach ();
IMPORT int taskSwapHookDelete ();
IMPORT int taskSwapHookDetach ();
IMPORT int taskSwapHookShow ();
IMPORT int taskSwapReference;
IMPORT int taskSwapTable;
IMPORT int taskSwitchHookAdd ();
IMPORT int taskSwitchHookDelete ();
IMPORT int taskSwitchHookShow ();
IMPORT int taskSwitchTable;
IMPORT int taskTcb ();
IMPORT int taskTerminate ();
IMPORT int taskUndelay ();
IMPORT int taskUnlink ();
IMPORT int taskUnlock ();
IMPORT int taskUnsafe ();
IMPORT int taskUnsafeInternal ();
IMPORT int taskUsrExcStackSize;
IMPORT int taskUsrExcStkOverflowSize;
IMPORT int taskUsrExecStkOverflowSize;
IMPORT int taskUsrExecStkUnderflowSize;
IMPORT int taskVarAdd ();
IMPORT int taskVarDelete ();
IMPORT int taskVarGet ();
IMPORT int taskVarInfo ();
IMPORT int taskVarInit ();
IMPORT int taskVarSet ();
IMPORT int taskWait ();
IMPORT int taskWaitShow ();
IMPORT int taskWaitShowCoreRtn ();
IMPORT int tcbReserveBitmap;
IMPORT int tcbSpareBitmap;
IMPORT int tcp_tmr_string;
IMPORT int td ();
IMPORT int ti ();
IMPORT int tick64Get ();
IMPORT int tick64Set ();
IMPORT int tickAnnounce ();
IMPORT int tickAnnounceHookAdd ();
IMPORT int tickGet ();
IMPORT int tickQHead;
IMPORT int tickSet ();
IMPORT int time ();
IMPORT int timestampDevUnitNo;
IMPORT int timestampTimerNo;
IMPORT int timex ();
IMPORT int timexClear ();
IMPORT int timexFunc ();
IMPORT int timexHelp ();
IMPORT int timexInit ();
IMPORT int timexN ();
IMPORT int timexPost ();
IMPORT int timexPre ();
IMPORT int timexShow ();
IMPORT int tip ();
IMPORT int tipConfigString;
IMPORT int tipEscapeChar;
IMPORT int tipLibInit ();
IMPORT int tipShellCmdInit ();
IMPORT int tipStart ();
IMPORT int tmpfile ();
IMPORT int tmpnam ();
IMPORT int tolower ();
IMPORT int toupper ();
IMPORT int tr ();
IMPORT int traceTimerStartValue;
IMPORT int traceTimestampGet ();
IMPORT int traceTmrMuxDisable ();
IMPORT int traceTmrMuxEnable ();
IMPORT int traceTmrRegister ();
IMPORT int traceTmrResolutionGet ();
IMPORT int trcDefaultArgs;
IMPORT int trcLibFuncs;
IMPORT int trcScanDepth;
IMPORT int trcStack ();
IMPORT int trcStackCtxTrace ();
IMPORT int trcStackTrace ();
IMPORT int ts ();
IMPORT int tt ();
IMPORT int ttyDevCreate ();
IMPORT int ttyDrv ();
IMPORT int tw ();
IMPORT int tyAbortFuncGet ();
IMPORT int tyAbortFuncSet ();
IMPORT int tyAbortGet ();
IMPORT int tyAbortSet ();
IMPORT int tyBackspaceChar;
IMPORT int tyBackspaceSet ();
IMPORT int tyDeleteLineChar;
IMPORT int tyDeleteLineSet ();
IMPORT int tyDevInit ();
IMPORT int tyDevRemove ();
IMPORT int tyDevTerminate ();
IMPORT int tyEOFGet ();
IMPORT int tyEOFSet ();
IMPORT int tyEofChar;
IMPORT int tyIRd ();
IMPORT int tyITx ();
IMPORT int tyIoctl ();
IMPORT int tyLibInit ();
IMPORT int tyMonitorTrapSet ();
IMPORT int tyRead ();
IMPORT int tyWrite ();
IMPORT int tyXoffHookSet ();
IMPORT int uNum;
IMPORT int udpCommIfInit ();
IMPORT int udpRcv ();
IMPORT int ungetc ();
IMPORT int unixIoctlMemValidate ();
IMPORT int unld ();
IMPORT int unldByGroup ();
IMPORT int unldByModuleId ();
IMPORT int unldByNameAndPath ();
IMPORT int unldLibInit ();
IMPORT int unlink ();
IMPORT int unlinkSc ();
IMPORT int unloadShellCmdInit ();
IMPORT int unmount ();
IMPORT int userRgnPoolId;
IMPORT int usrAppInit ();
IMPORT int usrBanner ();
IMPORT int usrBootHwInit ();
IMPORT int usrBootLineCrack ();
IMPORT int usrBootLineGet ();
IMPORT int usrBootLineInit ();
IMPORT int usrBootLineParse ();
IMPORT int usrBreakpointInit ();
IMPORT int usrBreakpointSet ();
IMPORT int usrCacheEnable ();
IMPORT int usrClock ();
IMPORT int usrEdrInit ();
IMPORT int usrFsShellCmdInit ();
IMPORT int usrFtpInit ();
IMPORT int usrHwSysctlInit ();
IMPORT int usrInit ();
IMPORT int usrIosCoreInit ();
IMPORT int usrIosExtraInit ();
IMPORT int usrIsrDeferInit ();
IMPORT int usrKernelCoreInit ();
IMPORT int usrKernelCreateInit ();
IMPORT int usrKernelExtraInit ();
IMPORT int usrKernelInit ();
IMPORT int usrLibInit ();
IMPORT int usrLoaderInit ();
IMPORT int usrMmuInit ();
IMPORT int usrModuleLoad ();
IMPORT int usrNetApplUtilInit ();
IMPORT int usrNetBoot ();
IMPORT int usrNetDaemonInit ();
IMPORT int usrNetDevNameGet ();
IMPORT int usrNetEndLibInit ();
IMPORT int usrNetHostInit ();
IMPORT int usrNetRemoteCreate ();
IMPORT int usrNetRemoteInit ();
IMPORT int usrNetSysctlInit ();
IMPORT int usrNetmaskGet ();
IMPORT int usrNetworkInit ();
IMPORT int usrPmInit ();
IMPORT int usrPosixScInit ();
IMPORT int usrRoot ();
IMPORT int usrRtpAppInit ();
IMPORT int usrRtpInit ();
IMPORT int usrRtpLibInit ();
IMPORT int usrScInit ();
IMPORT int usrSerialInit ();
IMPORT int usrShell ();
IMPORT int usrShellCmdInit ();
IMPORT int usrShellInit ();
IMPORT int usrShowInit ();
IMPORT int usrStandaloneInit ();
IMPORT int usrStartupScript ();
IMPORT int usrSymLibInit ();
IMPORT int usrSymTblInit ();
IMPORT int usrSysHwInit2 ();
IMPORT int usrSysSymTblInit ();
IMPORT int usrSysctlInit ();
IMPORT int usrTipInit ();
IMPORT int usrToolsInit ();
IMPORT int usrVxbTimerSysInit ();
IMPORT int usrVxdbgInit ();
IMPORT int usrWdbBanner ();
IMPORT int usrWdbBp ();
IMPORT int usrWdbGopherInit ();
IMPORT int usrWdbInit ();
IMPORT int usrWdbInitDone ();
IMPORT int usrWdbTaskModeInit ();
IMPORT int usrWindviewInit ();
IMPORT int usr_ext_node;
IMPORT int uswab ();
IMPORT int utime ();
IMPORT int uuidGen ();
IMPORT int uuidStr ();
IMPORT int uuid_compare ();
IMPORT int uuid_create ();
IMPORT int uuid_create_nil ();
IMPORT int uuid_dec_be ();
IMPORT int uuid_dec_le ();
IMPORT int uuid_enc_be ();
IMPORT int uuid_enc_le ();
IMPORT int uuid_equal ();
IMPORT int uuid_from_string ();
IMPORT int uuid_hash ();
IMPORT int uuid_is_nil ();
IMPORT int uuid_node ();
IMPORT int uuid_time ();
IMPORT int uuid_to_string ();
IMPORT int valloc ();
IMPORT int version ();
IMPORT int vfdprintf ();
IMPORT int vfpArchInit ();
IMPORT int vfpArchTaskCreateInit ();
IMPORT int vfpCtlRegName;
IMPORT int vfpCtxCreate ();
IMPORT int vfpCtxDelete ();
IMPORT int vfpCtxShow ();
IMPORT int vfpCtxToRegs ();
IMPORT int vfpDisable ();
IMPORT int vfpDoubleRegName;
IMPORT int vfpEnable ();
IMPORT int vfpExcHandle ();
IMPORT int vfpFpScrGet ();
IMPORT int vfpFpScrSet ();
IMPORT int vfpFpSidGet ();
IMPORT int vfpHasException ();
IMPORT int vfpIsEnabled ();
IMPORT int vfpProbe ();
IMPORT int vfpProbeSup ();
IMPORT int vfpProbeTrap ();
IMPORT int vfpRegListShow ();
IMPORT int vfpRegsToCtx ();
IMPORT int vfpRestore ();
IMPORT int vfpSave ();
IMPORT int vfpSingleRegName;
IMPORT int vfpTaskRegsCFmt;
IMPORT int vfpTaskRegsDFmt;
IMPORT int vfpTaskRegsSFmt;
IMPORT int vfprintf ();
IMPORT int vfpscrInitValue;
IMPORT int viLedLibInit ();
IMPORT int vmAttrShow ();
IMPORT int vmAttrStringGet ();
IMPORT int vmAttrToArchConvert ();
IMPORT int vmAttrToIndepConvert ();
IMPORT int vmBaseLibInit ();
IMPORT int vmBasePageSizeGet ();
IMPORT int vmBaseStateSet ();
IMPORT int vmBufferWrite ();
IMPORT int vmContextClassId;
IMPORT int vmContextHeaderPrint ();
IMPORT int vmContextRangeShow ();
IMPORT int vmContextShow ();
IMPORT int vmContextSwitch ();
IMPORT int vmContigBlockEach ();
IMPORT int vmCtxCreate ();
IMPORT int vmCtxDelete ();
IMPORT int vmCtxDestroy ();
IMPORT int vmCtxInit ();
IMPORT int vmCtxMask ();
IMPORT int vmCtxTerminate ();
IMPORT int vmCtxUnion ();
IMPORT int vmCtxUnionInit ();
IMPORT int vmCurrentGet ();
IMPORT int vmCurrentSet ();
IMPORT int vmGlobalMapInit ();
IMPORT int vmInfoGet ();
IMPORT int vmInvPageMap ();
IMPORT int vmInvTblLibInit ();
IMPORT int vmInvUnMap ();
IMPORT int vmKernelContextIdGet ();
IMPORT int vmLibInfo;
IMPORT int vmLibInit ();
IMPORT int vmMap ();
IMPORT int vmMaxPhysBitsGet ();
IMPORT int vmOptimizedSizeGet ();
IMPORT int vmPageBlockSizeGet ();
IMPORT int vmPageLock ();
IMPORT int vmPageMap ();
IMPORT int vmPageOptimize ();
IMPORT int vmPageSizeGet ();
IMPORT int vmPageUnlock ();
IMPORT int vmPageUnmap ();
IMPORT int vmPgMap ();
IMPORT int vmPgUnMap ();
IMPORT int vmPhysTranslate ();
IMPORT int vmPteSizeGet ();
IMPORT int vmShowInit ();
IMPORT int vmShowShellCmdInit ();
IMPORT int vmStateGet ();
IMPORT int vmStateSet ();
IMPORT int vmTextProtect ();
IMPORT int vmTranslate ();
IMPORT int vm_node;
IMPORT int voprintf ();
IMPORT int vprintf ();
IMPORT int vsnprintf ();
IMPORT int vsprintf ();
IMPORT int vxAbsTicks;
IMPORT int vxAtomic32Add ();
IMPORT int vxAtomic32And ();
IMPORT int vxAtomic32Cas ();
IMPORT int vxAtomic32Clear ();
IMPORT int vxAtomic32Dec ();
IMPORT int vxAtomic32Get ();
IMPORT int vxAtomic32Inc ();
IMPORT int vxAtomic32Nand ();
IMPORT int vxAtomic32Or ();
IMPORT int vxAtomic32Set ();
IMPORT int vxAtomic32Sub ();
IMPORT int vxAtomic32Xor ();
IMPORT int vxAtomicAdd ();
IMPORT int vxAtomicAnd ();
IMPORT int vxAtomicCas ();
IMPORT int vxAtomicClear ();
IMPORT int vxAtomicDec ();
IMPORT int vxAtomicGet ();
IMPORT int vxAtomicInc ();
IMPORT int vxAtomicNand ();
IMPORT int vxAtomicOr ();
IMPORT int vxAtomicSet ();
IMPORT int vxAtomicSub ();
IMPORT int vxAtomicXor ();
IMPORT int vxBaseCpuPhysIndex;
IMPORT int vxCas ();
IMPORT int vxCpsrGet ();
IMPORT int vxCpuConfigured;
IMPORT int vxCpuConfiguredGet ();
IMPORT int vxCpuEnabled;
IMPORT int vxCpuEnabledGet ();
IMPORT int vxCpuIdGet ();
IMPORT int vxCpuIdToPhysIndex ();
IMPORT int vxCpuIndexGet ();
IMPORT int vxCpuLibInit ();
IMPORT int vxCpuPhysIndexGet ();
IMPORT int vxCpuPhysIndexToId ();
IMPORT int vxCpuReserve ();
IMPORT int vxCpuReservedGet ();
IMPORT int vxCpuSetReserved;
IMPORT int vxCpuSetReservedAvail;
IMPORT int vxCpuUnreserve ();
IMPORT int vxEventPendQ;
IMPORT int vxIntStackBase;
IMPORT int vxIntStackEnd;
IMPORT int vxIntStackOverflowSize;
IMPORT int vxIntStackUnderflowSize;
IMPORT int vxIrqIntStackBase;
IMPORT int vxIrqIntStackEnd;
IMPORT int vxMemArchProbe ();
IMPORT int vxMemArchProbeInit ();
IMPORT int vxMemProbe ();
IMPORT int vxMemProbeByteRead ();
IMPORT int vxMemProbeByteWrite ();
IMPORT int vxMemProbeErrorRtn ();
IMPORT int vxMemProbeInit ();
IMPORT int vxMemProbeLongRead ();
IMPORT int vxMemProbeLongWrite ();
IMPORT int vxMemProbeSup ();
IMPORT int vxMemProbeSupEnd ();
IMPORT int vxMemProbeWordRead ();
IMPORT int vxMemProbeWordWrite ();
IMPORT int vxSvcIntStackBase;
IMPORT int vxSvcIntStackEnd;
IMPORT int vxTas ();
IMPORT int vxTaskEntry ();
IMPORT int vxTaskEntryFatalInject ();
IMPORT char * vxWorksVersion;
IMPORT const unsigned int vxWorksVersionMaint;
IMPORT const unsigned int vxWorksVersionMajor;
IMPORT const unsigned int vxWorksVersionMinor;
IMPORT int vxWorksVersionSvcPk;
IMPORT int vxbArmGenIntCtlrRegister ();
IMPORT int vxbArmGicLvlChg ();
IMPORT int vxbArmGicLvlVecAck ();
IMPORT int vxbArmGicLvlVecChk ();
IMPORT int vxbAuxClkConnect ();
IMPORT int vxbAuxClkDisable ();
IMPORT int vxbAuxClkEnable ();
IMPORT int vxbAuxClkLibInit ();
IMPORT int vxbAuxClkRateGet ();
IMPORT int vxbAuxClkRateSet ();
IMPORT int vxbBusAnnounce ();
IMPORT int vxbBusListLock;
IMPORT int vxbBusTypeRegister ();
IMPORT int vxbBusTypeString ();
IMPORT int vxbBusTypeUnregister ();
IMPORT int vxbDelay ();
IMPORT int vxbDelayLibInit ();
IMPORT int vxbDelayTimerFreeRunning;
IMPORT int vxbDevConnect ();
IMPORT int vxbDevConnectInternal ();
IMPORT int vxbDevInit ();
IMPORT int vxbDevInitInternal ();
IMPORT int vxbDevIntCapabCheck_desc;
IMPORT int vxbDevIterate ();
IMPORT int vxbDevMethodGet ();
IMPORT int vxbDevMethodRun ();
IMPORT int vxbDevParent ();
IMPORT int vxbDevPath ();
IMPORT int vxbDevRegMap_desc;
IMPORT int vxbDevRegister ();
IMPORT int vxbDevRemovalAnnounce ();
IMPORT int vxbDevStructAlloc ();
IMPORT int vxbDevStructFree ();
IMPORT int vxbDevStructListLock;
IMPORT int vxbDeviceAnnounce ();
IMPORT int vxbDeviceDriverRelease ();
IMPORT int vxbDeviceMethodRun ();
IMPORT int vxbDmaBufArchFlush;
IMPORT int vxbDmaBufArchInvalidate;
IMPORT int vxbDmaBufBspAlloc;
IMPORT int vxbDmaBufBspFree;
IMPORT int vxbDmaBufFlush ();
IMPORT int vxbDmaBufFragFill ();
IMPORT int vxbDmaBufInit ();
IMPORT int vxbDmaBufInvalidate ();
IMPORT int vxbDmaBufMapArchFlush;
IMPORT int vxbDmaBufMapArchInvalidate;
IMPORT int vxbDmaBufMapCreate ();
IMPORT int vxbDmaBufMapCreate_desc;
IMPORT int vxbDmaBufMapDestroy ();
IMPORT int vxbDmaBufMapDestroy_desc;
IMPORT int vxbDmaBufMapFlush ();
IMPORT int vxbDmaBufMapInvalidate ();
IMPORT int vxbDmaBufMapIoVecLoad ();
IMPORT int vxbDmaBufMapLoad ();
IMPORT int vxbDmaBufMapMblkLoad ();
IMPORT int vxbDmaBufMapMemAlloc_desc;
IMPORT int vxbDmaBufMapMemFree_desc;
IMPORT int vxbDmaBufMapSync ();
IMPORT int vxbDmaBufMapUnload ();
IMPORT int vxbDmaBufMemAlloc ();
IMPORT int vxbDmaBufMemFree ();
IMPORT int vxbDmaBufSync ();
IMPORT int vxbDmaBufTagCreate ();
IMPORT int vxbDmaBufTagDestroy ();
IMPORT int vxbDmaBufTagGet_desc;
IMPORT int vxbDmaBufTagParentGet ();
IMPORT int vxbDmaChanAlloc ();
IMPORT int vxbDmaChanFree ();
IMPORT int vxbDmaLibInit ();
IMPORT int vxbDmaResDedicatedGet_desc;
IMPORT int vxbDmaResourceGet_desc;
IMPORT int vxbDmaResourceRelease_desc;
IMPORT int vxbDriverUnregister ();
IMPORT int vxbDrvRescan ();
IMPORT int vxbDrvUnlink_desc;
IMPORT int vxbDrvVerCheck ();
IMPORT int vxbGlobalListsLock;
IMPORT int vxbImx31EpitTimerDrvRegister ();
IMPORT int vxbImxSetBaudRate ();
IMPORT int vxbImxSioRegister ();
IMPORT int vxbInit ();
IMPORT int vxbInstByNameFind ();
IMPORT int vxbInstParamByIndexGet ();
IMPORT int vxbInstParamByNameGet ();
IMPORT int vxbInstParamSet ();
IMPORT int vxbInstUnitGet ();
IMPORT int vxbInstUnitSet ();
IMPORT int vxbInstUsrOptionGet ();
IMPORT int vxbIntAcknowledge ();
IMPORT int vxbIntAlloc ();
IMPORT int vxbIntConnect ();
IMPORT int vxbIntCtlrAck_desc;
IMPORT int vxbIntCtlrAlloc_desc;
IMPORT int vxbIntCtlrConnect_desc;
IMPORT int vxbIntCtlrDisable_desc;
IMPORT int vxbIntCtlrDisconnect_desc;
IMPORT int vxbIntCtlrEnable_desc;
IMPORT int vxbIntCtlrFree_desc;
IMPORT int vxbIntDisable ();
IMPORT int vxbIntDisconnect ();
IMPORT int vxbIntEnable ();
IMPORT int vxbIntFree ();
IMPORT int vxbIntVectorGet ();
IMPORT int vxbLibError ();
IMPORT int vxbLibInit ();
IMPORT int vxbLockDelete ();
IMPORT int vxbLockGive ();
IMPORT int vxbLockInit ();
IMPORT int vxbLockTake ();
IMPORT int vxbMsDelay ();
IMPORT int vxbNextUnitGet ();
IMPORT int vxbRead16 ();
IMPORT int vxbRead32 ();
IMPORT int vxbRead8 ();
IMPORT int vxbRegMap ();
IMPORT int vxbRegUnmap ();
IMPORT int vxbResourceFind ();
IMPORT int vxbSerialChanGet ();
IMPORT int vxbSubDevAction ();
IMPORT int vxbSwap16 ();
IMPORT int vxbSwap32 ();
IMPORT int vxbSysClkConnect ();
IMPORT int vxbSysClkDisable ();
IMPORT int vxbSysClkEnable ();
IMPORT int vxbSysClkLibInit ();
IMPORT int vxbSysClkRateGet ();
IMPORT int vxbSysClkRateSet ();
IMPORT int vxbTimerAlloc ();
IMPORT int vxbTimerFeaturesGet ();
IMPORT int vxbTimerFuncGet_desc;
IMPORT int vxbTimerNumberGet_desc;
IMPORT int vxbTimerRelease ();
IMPORT int vxbTimestamp ();
IMPORT int vxbTimestampConnect ();
IMPORT int vxbTimestampDisable ();
IMPORT int vxbTimestampEnable ();
IMPORT int vxbTimestampFreq ();
IMPORT int vxbTimestampLibInit ();
IMPORT int vxbTimestampLock ();
IMPORT int vxbTimestampPeriod ();
IMPORT int vxbUsDelay ();
IMPORT int vxbWrite16 ();
IMPORT int vxbWrite32 ();
IMPORT int vxbWrite8 ();
IMPORT int vxdbgBpAdd ();
IMPORT int vxdbgBpAddrCheck ();
IMPORT int vxdbgBpAllDisable ();
IMPORT int vxdbgBpDelete ();
IMPORT int vxdbgBpFind ();
IMPORT int vxdbgBpList;
IMPORT int vxdbgBpMsgDrop ();
IMPORT int vxdbgBpMsgGet ();
IMPORT int vxdbgBpMsgPost ();
IMPORT int vxdbgBpMsgQCreate ();
IMPORT int vxdbgBpMsgQHdlrIsRunning ();
IMPORT int vxdbgClntRegister ();
IMPORT int vxdbgClntUnregister ();
IMPORT int vxdbgCont ();
IMPORT int vxdbgEnable ();
IMPORT int vxdbgEventIdAlloc ();
IMPORT int vxdbgEventIdFree ();
IMPORT int vxdbgEventInject ();
IMPORT int vxdbgEventLibInit ();
IMPORT int vxdbgHookAdd ();
IMPORT int vxdbgHookInvoke ();
IMPORT int vxdbgHooksInit ();
IMPORT int vxdbgInstrCmp ();
IMPORT int vxdbgInternalEventInject ();
IMPORT int vxdbgLibInit ();
IMPORT int vxdbgListDelete ();
IMPORT int vxdbgListInsert ();
IMPORT int vxdbgLockUnbreakable;
IMPORT int vxdbgMemAccess ();
IMPORT int vxdbgMemCtxSwitch ();
IMPORT int vxdbgMemMove ();
IMPORT int vxdbgMemRead ();
IMPORT int vxdbgMemScan ();
IMPORT int vxdbgMemWrite ();
IMPORT int vxdbgModuleLibInit ();
IMPORT int vxdbgRtpLibInit ();
IMPORT int vxdbgRunCtrlHookInvoke ();
IMPORT int vxdbgRunCtrlLibInit ();
IMPORT int vxdbgSafeUnbreakable;
IMPORT int vxdbgStep ();
IMPORT int vxdbgStop ();
IMPORT int vxdbgTaskCont ();
IMPORT int vxdbgTaskHookInit ();
IMPORT int vxdbgTaskLibInit ();
IMPORT int vxdbgTaskStep ();
IMPORT int vxdbgTaskStop ();
IMPORT int vxdbgUnbreakableOld;
IMPORT int vxfs_ramdisk_init_hook;
IMPORT int vxmux_mux_mblk_init ();
IMPORT int vxmux_null_buf_init ();
IMPORT int vxmux_null_pool;
IMPORT int w ();
IMPORT int wcstombs ();
IMPORT int wctomb ();
IMPORT int wdCancel ();
IMPORT int wdClassId;
IMPORT int wdCreate ();
IMPORT int wdCreateLibInit ();
IMPORT int wdDelete ();
IMPORT int wdDestroy ();
IMPORT int wdInit ();
IMPORT int wdInitialize ();
IMPORT int wdLibInit ();
IMPORT int wdStart ();
IMPORT int wdTerminate ();
IMPORT int wdTick ();
IMPORT int wdbAvailModes;
IMPORT int wdbAvailOptions;
IMPORT int wdbBpAddHookAdd ();
IMPORT int wdbBpSyncLibInit ();
IMPORT int wdbBpSysEnterHook;
IMPORT int wdbBpSysExitHook;
IMPORT int wdbCksum ();
IMPORT int wdbCmdLoop ();
IMPORT int wdbCnctModePost ();
IMPORT int wdbCommDevInit ();
IMPORT int wdbCommIfEnable ();
IMPORT int wdbCommMtu;
IMPORT int wdbCommMtuGet ();
IMPORT int wdbConfig ();
IMPORT int wdbConnectHookAdd ();
IMPORT int wdbConnectLibInit ();
IMPORT int wdbCtxCreateNotify ();
IMPORT int wdbCtxDeleteNotify ();
IMPORT int wdbCtxEvtLibInit ();
IMPORT int wdbCtxExitEventGet ();
IMPORT int wdbCtxExitLibInit ();
IMPORT int wdbCtxExitNotifyHook ();
IMPORT int wdbCtxLibInit ();
IMPORT int wdbCtxStartEventGet ();
IMPORT int wdbCtxStartLibInit ();
IMPORT int wdbDbgAddrCheck ();
IMPORT int wdbDbgArchInit ();
IMPORT int wdbDbgGetNpc ();
IMPORT int wdbDbgSysCallCheck ();
IMPORT int wdbDbgTraceModeClear ();
IMPORT int wdbDbgTraceModeSet ();
IMPORT int wdbDbgTrap ();
IMPORT int wdbDirectCallLibInit ();
IMPORT int wdbE ();
IMPORT int wdbEndDebug;
IMPORT int wdbEndDeviceAddress;
IMPORT int wdbEndPktDevInit ();
IMPORT int wdbEventDeq ();
IMPORT int wdbEventLibInit ();
IMPORT int wdbEventNodeInit ();
IMPORT int wdbEventPost ();
IMPORT int wdbEvtptClassConnect ();
IMPORT int wdbEvtptLibInit ();
IMPORT int wdbExcLibInit ();
IMPORT int wdbExternCoprocRegLibInit ();
IMPORT int wdbExternEnterHookAdd ();
IMPORT int wdbExternExitHookAdd ();
IMPORT int wdbExternInit ();
IMPORT int wdbExternLibInit ();
IMPORT int wdbExternRegLibInit ();
IMPORT int wdbFuncCallLibInit ();
IMPORT int wdbGopherLibInit ();
IMPORT int wdbInfoGet ();
IMPORT int wdbInstallCommIf ();
IMPORT int wdbInstallRtIf ();
IMPORT int wdbIoctl ();
IMPORT int wdbIsAlwaysEnabled;
IMPORT int wdbIsInitialized;
IMPORT int wdbIsNowExternal ();
IMPORT int wdbIsReady;
IMPORT int wdbMbufAlloc ();
IMPORT int wdbMbufFree ();
IMPORT int wdbMbufInit ();
IMPORT int wdbMdlSymSyncLibInit ();
IMPORT int wdbMemCoreLibInit ();
IMPORT int wdbMemLibInit ();
IMPORT int wdbMode;
IMPORT int wdbModeSet ();
IMPORT int wdbModeSetHookAdd ();
IMPORT int wdbNotifyHost ();
IMPORT int wdbNumMemRegions;
IMPORT int wdbOneShot;
IMPORT int wdbPort;
IMPORT int wdbRegsLibInit ();
IMPORT int wdbRpcGetArgs ();
IMPORT int wdbRpcNotifyConnect ();
IMPORT int wdbRpcNotifyHost ();
IMPORT int wdbRpcRcv ();
IMPORT int wdbRpcReply ();
IMPORT int wdbRpcReplyErr ();
IMPORT int wdbRpcResendReply ();
IMPORT int wdbRpcXportInit ();
IMPORT int wdbRtIf;
IMPORT int wdbRtLibInit ();
IMPORT int wdbRtMemInit ();
IMPORT int wdbRtpBpLibInit ();
IMPORT int wdbRtpCtrlLibInit ();
IMPORT int wdbRtpDeleteHookManage ();
IMPORT int wdbRtpInfoAlloc ();
IMPORT int wdbRtpLibInit ();
IMPORT int wdbRunsExternal ();
IMPORT int wdbRunsTasking ();
IMPORT int wdbSharedBuffer;
IMPORT int wdbSharedBufferSize;
IMPORT int wdbSp ();
IMPORT int wdbSvcAdd ();
IMPORT int wdbSvcDispatch ();
IMPORT int wdbSvcHookAdd ();
IMPORT int wdbSvcLibInit ();
IMPORT int wdbSysBpDisableAll ();
IMPORT int wdbSysBpEnableAll ();
IMPORT int wdbSysBpLibInit ();
IMPORT int wdbSysModeInit ();
IMPORT int wdbSystemSuspend ();
IMPORT int wdbTargetIsConnected ();
IMPORT int wdbTaskBpAdd ();
IMPORT int wdbTaskBpLibInit ();
IMPORT int wdbTaskCont ();
IMPORT int wdbTaskCoprocRegLibInit ();
IMPORT int wdbTaskCreateHookAdd ();
IMPORT int wdbTaskDeleteHookAdd ();
IMPORT int wdbTaskExtraModules;
IMPORT int wdbTaskHookInit ();
IMPORT int wdbTaskModeInit ();
IMPORT int wdbTaskRegLibInit ();
IMPORT int wdbTaskRestartHook;
IMPORT int wdbTaskStep ();
IMPORT int wdbTaskStop ();
IMPORT int wdbTgtInfoLibInit ();
IMPORT int wdbToolName;
IMPORT int wdbTsfsDefaultDirPerm;
IMPORT int wdbTsfsDrv ();
IMPORT int wdbTsfsRwBufferSize;
IMPORT int wdbUserEvtLibInit ();
IMPORT int wdbUserEvtPost ();
IMPORT int wdbVioChannelRegister ();
IMPORT int wdbVioChannelUnregister ();
IMPORT int wdbVioDrv ();
IMPORT int wdbVioLibInit ();
IMPORT int wdbXdrCreate ();
IMPORT int wdbXdrGetVal ();
IMPORT int wdbXdrGetpos ();
IMPORT int wdbXdrInline ();
IMPORT int wdbXdrPutVal ();
IMPORT int wdbXdrPutbytes ();
IMPORT int wdbXdrSetpos ();
IMPORT int whoami ();
IMPORT int windCont ();
IMPORT int windDelay ();
IMPORT int windDelete ();
IMPORT int windDummySc ();
IMPORT int windExit ();
IMPORT int windIntStackSet ();
IMPORT int windLoadContext ();
IMPORT int windNullReturn ();
IMPORT int windPendQFlush ();
IMPORT int windPendQGet ();
IMPORT int windPendQPut ();
IMPORT int windPendQRemove ();
IMPORT int windPendQTerminate ();
IMPORT int windPriNormalSet ();
IMPORT int windPrioritySet ();
IMPORT int windReadyQPut ();
IMPORT int windReadyQRemove ();
IMPORT int windResume ();
IMPORT int windScInit ();
IMPORT int windSemDelete ();
IMPORT int windSemRWDelete ();
IMPORT int windStop ();
IMPORT int windStopClear ();
IMPORT int windSuspend ();
IMPORT int windTickAnnounce ();
IMPORT int windTickAnnounceN ();
IMPORT int windTickWaitGet ();
IMPORT int windUndelay ();
IMPORT int windWdCancel ();
IMPORT int windWdStart ();
IMPORT int windviewConfig ();
IMPORT int workQAdd0 ();
IMPORT int workQAdd1 ();
IMPORT int workQAdd2 ();
IMPORT int workQDoWork ();
IMPORT int workQInit ();
IMPORT int workQIsEmpty;
IMPORT int workQIx;
IMPORT int workQPanic ();
IMPORT int workQPanicHook;
IMPORT int workQWorkInProgress;
IMPORT int write ();
IMPORT int writev ();
IMPORT int wvAllObjsSet ();
IMPORT int wvBufId;
IMPORT int wvCurrentLog;
IMPORT int wvCurrentLogGet ();
IMPORT int wvCurrentLogList;
IMPORT int wvCurrentLogListGet ();
IMPORT int wvCurrentLogListSet ();
IMPORT int wvCurrentLogSet ();
IMPORT int wvDefaultBufMax;
IMPORT int wvDefaultBufMin;
IMPORT int wvDefaultBufOptions;
IMPORT int wvDefaultBufSize;
IMPORT int wvDefaultBufThresh;
IMPORT int wvDefaultRBuffParams;
IMPORT int wvEdrInst ();
IMPORT int wvEvent ();
IMPORT int wvEventInst ();
IMPORT int wvEventSc ();
IMPORT int wvEvtBufferFullNotify;
IMPORT int wvEvtClassClear ();
IMPORT int wvEvtClassClearAll ();
IMPORT int wvEvtClassGet ();
IMPORT int wvEvtClassSet ();
IMPORT int wvEvtLogStart ();
IMPORT int wvEvtLogStop ();
IMPORT int wvFileUploadPathClose ();
IMPORT int wvFileUploadPathCreate ();
IMPORT int wvFileUploadPathLibInit ();
IMPORT int wvFileUploadPathWrite ();
IMPORT int wvHashTblCreate ();
IMPORT int wvHashTblDestroy ();
IMPORT int wvHashTblInsert ();
IMPORT int wvHashTblIterDone ();
IMPORT int wvHashTblIterInit ();
IMPORT int wvHashTblIterNext ();
IMPORT int wvHashTblIterNextEvent ();
IMPORT int wvLibInit ();
IMPORT int wvLibInit2 ();
IMPORT int wvLogCountGet ();
IMPORT int wvLogCreate ();
IMPORT int wvLogDelete ();
IMPORT int wvLogFirstGet ();
IMPORT int wvLogListChksum ();
IMPORT int wvLogListCreate ();
IMPORT int wvLogListDelete ();
IMPORT int wvLogListValidate ();
IMPORT int wvLogMsgString1;
IMPORT int wvLogMsgString2;
IMPORT int wvLogNextGet ();
IMPORT int wvLogRevision;
IMPORT int wvMaximumLogs;
IMPORT int wvMemScopeInst ();
IMPORT int wvNetDConfigure ();
IMPORT int wvNetDEventMap;
IMPORT int wvNetDInit ();
IMPORT int wvObjInst ();
IMPORT int wvObjInstModeSet ();
IMPORT int wvObjNameCurrentBuffAdd ();
IMPORT int wvOff ();
IMPORT int wvOn ();
IMPORT int wvPartitionGet ();
IMPORT int wvPartitionSet ();
IMPORT int wvPowerInst ();
IMPORT int wvRBuffErrorHandler ();
IMPORT int wvRBuffMgr ();
IMPORT int wvRBuffMgrId;
IMPORT int wvRBuffMgrPriorityDefault;
IMPORT int wvRBuffMgrPrioritySet ();
IMPORT int wvRtpEventSc ();
IMPORT int wvSalInst ();
IMPORT int wvSigInst ();
IMPORT int wvTmrDisable ();
IMPORT int wvTmrEnable ();
IMPORT int wvTmrFrequency64Get ();
IMPORT int wvTmrRegister ();
IMPORT int wvTmrTimestamp64Get ();
IMPORT int wvTmrTimestamp64ToTime ();
IMPORT int wvTsfsUploadPathClose ();
IMPORT int wvTsfsUploadPathCreate ();
IMPORT int wvTsfsUploadPathLibInit ();
IMPORT int wvTsfsUploadPathWrite ();
IMPORT int wvUpPathId;
IMPORT int wvUpTaskId;
IMPORT int wvUploadMaxAttempts;
IMPORT int wvUploadName;
IMPORT int wvUploadRetryBackoff;
IMPORT int wvUploadStart ();
IMPORT int wvUploadStop ();
IMPORT int wvUploadTaskConfig ();
IMPORT int wvUploadTaskOptions;
IMPORT int wvUploadTaskPriority;
IMPORT int wvUploadTaskStackSize;
IMPORT int xattrib ();
IMPORT int xbdAddGptPartition ();
IMPORT int xbdAttach ();
IMPORT int xbdAttachExt ();
IMPORT int xbdAttachSchecdPolicyById ();
IMPORT int xbdAttachSchecdPolicyByName ();
IMPORT int xbdBioSchedAvlDelete ();
IMPORT int xbdBioSchedAvlInsert ();
IMPORT int xbdBioSchedAvlMinGet ();
IMPORT int xbdBioSchedAvlNodeShow ();
IMPORT int xbdBioSchedAvlPredecessorGet ();
IMPORT int xbdBioSchedAvlSearch ();
IMPORT int xbdBioSchedAvlShow ();
IMPORT int xbdBioSchedAvlSuccessorGet ();
IMPORT int xbdBioSchedDeadlineAttach ();
IMPORT int xbdBioSchedDeadlineAvlCompare ();
IMPORT int xbdBioSchedDeadlineBioEnq ();
IMPORT int xbdBioSchedDeadlineDetach ();
IMPORT int xbdBioSchedDeadlineDispatch ();
IMPORT int xbdBioSchedDeadlineFini ();
IMPORT int xbdBioSchedDeadlineInit ();
IMPORT int xbdBioSchedDeadlinePolicy;
IMPORT int xbdBioSchedDeadlineReqDeq ();
IMPORT int xbdBioSchedDeadlineReqDone ();
IMPORT int xbdBioSchedDeadlineReqEnq ();
IMPORT int xbdBioSchedDeadlineReqGet ();
IMPORT int xbdBioSchedDeadlineReqMerged ();
IMPORT int xbdBioSchedDeadlineReqNext ();
IMPORT int xbdBioSchedDeadlineReqPrev ();
IMPORT int xbdBioSchedDeadlineReqPut ();
IMPORT int xbdBioSchedDeadlineShow ();
IMPORT int xbdBioSchedExit ();
IMPORT int xbdBioSchedFindBackMerge ();
IMPORT int xbdBioSchedFindBackMergeByHash ();
IMPORT int xbdBioSchedFindFrontMerge ();
IMPORT int xbdBioSchedFindFrontMergeByHash ();
IMPORT int xbdBioSchedFlush ();
IMPORT int xbdBioSchedGetAvlNode ();
IMPORT int xbdBioSchedHashNodeShow ();
IMPORT int xbdBioSchedInit ();
IMPORT int xbdBioSchedMaxActiveReqsSet ();
IMPORT int xbdBioSchedMaxBiosPerReqSet ();
IMPORT int xbdBioSchedMaxBlksPerBioSet ();
IMPORT int xbdBioSchedMaxBlksPerReqSet ();
IMPORT int xbdBioSchedMergeAdd ();
IMPORT int xbdBioSchedMergeBio ();
IMPORT int xbdBioSchedMergeRemove ();
IMPORT int xbdBioSchedPolicyAdd ();
IMPORT int xbdBioSchedPolicyAttach ();
IMPORT int xbdBioSchedPolicyDettach ();
IMPORT int xbdBioSchedPolicyNoop;
IMPORT int xbdBioSchedPolicyNoopAttach ();
IMPORT int xbdBioSchedPolicyNoopBioEnQ ();
IMPORT int xbdBioSchedPolicyNoopDetach ();
IMPORT int xbdBioSchedPolicyNoopDispatch ();
IMPORT int xbdBioSchedPolicyNoopFini ();
IMPORT int xbdBioSchedPolicyNoopInit ();
IMPORT int xbdBioSchedPolicyNoopReqDeQ ();
IMPORT int xbdBioSchedPolicyNoopReqDone ();
IMPORT int xbdBioSchedPolicyNoopReqEnQ ();
IMPORT int xbdBioSchedPolicyNoopReqGet ();
IMPORT int xbdBioSchedPolicyNoopReqPut ();
IMPORT int xbdBioSchedPolicyNoopShow ();
IMPORT int xbdBioSchedPolicyRemove ();
IMPORT int xbdBioSchedPolicySSD;
IMPORT int xbdBioSchedPolicySSDAttach ();
IMPORT int xbdBioSchedPolicySSDAvlCompare ();
IMPORT int xbdBioSchedPolicySSDDetach ();
IMPORT int xbdBioSchedPolicySSDDispatch ();
IMPORT int xbdBioSchedPolicySSDFini ();
IMPORT int xbdBioSchedPolicySSDInit ();
IMPORT int xbdBioSchedPolicySSDReqDeQ ();
IMPORT int xbdBioSchedPolicySSDReqDone ();
IMPORT int xbdBioSchedPolicySSDReqEnQ ();
IMPORT int xbdBioSchedPolicySSDReqGet ();
IMPORT int xbdBioSchedPolicySSDReqMerged ();
IMPORT int xbdBioSchedPolicySSDReqNext ();
IMPORT int xbdBioSchedPolicySSDReqPrev ();
IMPORT int xbdBioSchedPolicySSDReqPut ();
IMPORT int xbdBioSchedPolicySSDShow ();
IMPORT int xbdBioSchedPutAvlNode ();
IMPORT int xbdBioSchedReqDeq ();
IMPORT int xbdBioSchedReqEnq ();
IMPORT int xbdBioSchedReqGet ();
IMPORT int xbdBioSchedReqMergeable ();
IMPORT int xbdBioSchedReqMerged ();
IMPORT int xbdBioSchedReqPut ();
IMPORT int xbdBioSchedShow ();
IMPORT int xbdBioSchedStrategy ();
IMPORT int xbdBlockSize ();
IMPORT int xbdCacheInfoSet ();
IMPORT int xbdCreateGptPartition ();
IMPORT int xbdDetach ();
IMPORT int xbdDetachSchecdPolicyById ();
IMPORT int xbdDetachSchecdPolicyByName ();
IMPORT int xbdDump ();
IMPORT int xbdEventCategory;
IMPORT int xbdEventInstantiated;
IMPORT int xbdEventMediaChanged;
IMPORT int xbdEventPrimaryInsert;
IMPORT int xbdEventRemove;
IMPORT int xbdEventSecondaryInsert;
IMPORT int xbdEventSoftInsert;
IMPORT int xbdFindPolicyById ();
IMPORT int xbdFindPolicyByName ();
IMPORT int xbdGetBioSched ();
IMPORT int xbdGetNextBioGeneric ();
IMPORT int xbdGptPartAdd ();
IMPORT int xbdGptPartDevCreate ();
IMPORT int xbdGptPartFin ();
IMPORT int xbdGptPartStart ();
IMPORT int xbdGptPartVecAdd ();
IMPORT int xbdInit ();
IMPORT int xbdIoctl ();
IMPORT int xbdMapGet ();
IMPORT int xbdNBlocks ();
IMPORT int xbdPartitionDevCreate ();
IMPORT int xbdReqSchedComplete ();
IMPORT int xbdRequestBackMergeHash ();
IMPORT int xbdRequestCacheCreate ();
IMPORT int xbdRequestCacheDestroy ();
IMPORT int xbdRequestCacheLibFini ();
IMPORT int xbdRequestCacheLibInit ();
IMPORT int xbdRequestFrontMergeHash ();
IMPORT int xbdRequestHashKeyCmp ();
IMPORT int xbdRoot ();
IMPORT int xbdSchedDebug;
IMPORT int xbdSchedSSDDebug;
IMPORT int xbdSetBioSched ();
IMPORT int xbdSize ();
IMPORT int xbdSrvTaskGeneric ();
IMPORT int xbdStrategy ();
IMPORT int xbdStrategyGeneric ();
IMPORT int xbdSwitchSchecdPolicyById ();
IMPORT int xbdSwitchSchecdPolicyByName ();
IMPORT int xcopy ();
IMPORT int xdelete ();
IMPORT int xdrCksum ();
IMPORT int xdr_ARRAY ();
IMPORT int xdr_BOOL ();
IMPORT int xdr_CHECKSUM ();
IMPORT int xdr_ENUM ();
IMPORT int xdr_REFERENCE ();
IMPORT int xdr_TGT_ADDR_T ();
IMPORT int xdr_TGT_LONG_T ();
IMPORT int xdr_UINT32 ();
IMPORT int xdr_VOID ();
IMPORT int xdr_WDB_AGENT_INFO ();
IMPORT int xdr_WDB_CALL_RETURN_INFO ();
IMPORT int xdr_WDB_CONNECT_INFO ();
IMPORT int xdr_WDB_CONNECT_PARAMS ();
IMPORT int xdr_WDB_CORE ();
IMPORT int xdr_WDB_CTX ();
IMPORT int xdr_WDB_CTX_CREATE_DESC ();
IMPORT int xdr_WDB_CTX_KILL_DESC ();
IMPORT int xdr_WDB_CTX_STEP_DESC ();
IMPORT int xdr_WDB_DIRECT_CALL_RET ();
IMPORT int xdr_WDB_EVTPT_ADD_DESC ();
IMPORT int xdr_WDB_EVTPT_DEL_DESC ();
IMPORT int xdr_WDB_EVT_DATA ();
IMPORT int xdr_WDB_EVT_INFO ();
IMPORT int xdr_WDB_MEM_REGION ();
IMPORT int xdr_WDB_MEM_SCAN_DESC ();
IMPORT int xdr_WDB_MEM_XFER ();
IMPORT int xdr_WDB_MOD_INFO ();
IMPORT int xdr_WDB_OPQ_DATA_T ();
IMPORT int xdr_WDB_PARAM_WRAPPER ();
IMPORT int xdr_WDB_REG_READ_DESC ();
IMPORT int xdr_WDB_REG_WRITE_DESC ();
IMPORT int xdr_WDB_REPLY_WRAPPER ();
IMPORT int xdr_WDB_RT_INFO ();
IMPORT int xdr_WDB_SECT_INFO ();
IMPORT int xdr_WDB_SEG_INFO ();
IMPORT int xdr_WDB_STRING_ARRAY ();
IMPORT int xdr_WDB_STRING_T ();
IMPORT int xdr_WDB_SYM_ID ();
IMPORT int xdr_WDB_SYM_ID_LIST ();
IMPORT int xdr_WDB_SYM_INFO ();
IMPORT int xdr_WDB_SYM_LIST ();
IMPORT int xdr_WDB_SYM_MOD_DESC ();
IMPORT int xdr_WDB_TGT_INFO ();
IMPORT int xdr_WDB_TGT_INFO_2 ();
IMPORT int xpFuncs;
IMPORT int zbufCreate ();
IMPORT int zbufCut ();
IMPORT int zbufDelete ();
IMPORT int zbufDup ();
IMPORT int zbufExtractCopy ();
IMPORT int zbufInsert ();
IMPORT int zbufInsertBuf ();
IMPORT int zbufInsertBuf64 ();
IMPORT int zbufInsertCopy ();
IMPORT int zbufLength ();
IMPORT int zbufLibInit ();
IMPORT int zbufSegData ();
IMPORT int zbufSegFind ();
IMPORT int zbufSegLength ();
IMPORT int zbufSegNext ();
IMPORT int zbufSegPrev ();
IMPORT int zbufSockBufSend ();
IMPORT int zbufSockBufSend64 ();
IMPORT int zbufSockBufSendto ();
IMPORT int zbufSockBufSendto64 ();
IMPORT int zbufSockLibInit ();
IMPORT int zbufSockRecv ();
IMPORT int zbufSockRecvfrom ();
IMPORT int zbufSockSend ();
IMPORT int zbufSockSendto ();
IMPORT int zbufSplit ();
IMPORT int zbuf_free ();

SYMBOL standTbl [6150] =
    {
        {{NULL}, "IA64_decode_identifier_ex", (char*) IA64_decode_identifier_ex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "MD5_Final", (char*) MD5_Final, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "MD5_Init", (char*) MD5_Init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "MD5_Transform", (char*) MD5_Transform, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "MD5_Update", (char*) MD5_Update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "MD5_version", (char*) &MD5_version, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "SHA1_Final", (char*) SHA1_Final, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "SHA1_Init", (char*) SHA1_Init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "SHA1_Transform", (char*) SHA1_Transform, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "SHA1_Update", (char*) SHA1_Update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "SHA1_version", (char*) &SHA1_version, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "STANDARDRtnTbl", (char*) &STANDARDRtnTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "SetNewSeedtoRandomGenerator", (char*) SetNewSeedtoRandomGenerator, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "VXWORKSRtnTbl", (char*) &VXWORKSRtnTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ZBUF_GETSEG", (char*) ZBUF_GETSEG, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_Randseed", (char*) &_Randseed, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_STI__07__diab_atomic_init", (char*) _STI__07__diab_atomic_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_rd_pk_db", (char*) __DIAB_rd_pk_db, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_rd_pk_fl", (char*) __DIAB_rd_pk_fl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_rd_pk_ld", (char*) __DIAB_rd_pk_ld, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_rd_sw_db", (char*) __DIAB_rd_sw_db, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_rd_sw_fl", (char*) __DIAB_rd_sw_fl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_rd_sw_ld", (char*) __DIAB_rd_sw_ld, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_wr_pk_db", (char*) __DIAB_wr_pk_db, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_wr_pk_fl", (char*) __DIAB_wr_pk_fl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_wr_pk_ld", (char*) __DIAB_wr_pk_ld, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_wr_sw_db", (char*) __DIAB_wr_sw_db, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_wr_sw_fl", (char*) __DIAB_wr_sw_fl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__DIAB_wr_sw_ld", (char*) __DIAB_wr_sw_ld, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__POL", (char*) __POL, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "___x_diab_arm_div_o", (char*) &___x_diab_arm_div_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_comljmp_o", (char*) &___x_diab_comljmp_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_copytable_o", (char*) &___x_diab_copytable_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_crtlibso_o", (char*) &___x_diab_crtlibso_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_ctordtor_o", (char*) &___x_diab_ctordtor_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_ff1_o", (char*) &___x_diab_ff1_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_libg_o", (char*) &___x_diab_libg_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_rd_pk_db_o", (char*) &___x_diab_rd_pk_db_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_rd_pk_fl_o", (char*) &___x_diab_rd_pk_fl_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_rd_pk_ld_o", (char*) &___x_diab_rd_pk_ld_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_rd_sw_db_o", (char*) &___x_diab_rd_sw_db_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_rd_sw_fl_o", (char*) &___x_diab_rd_sw_fl_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_rd_sw_ld_o", (char*) &___x_diab_rd_sw_ld_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdadd_o", (char*) &___x_diab_sfpdadd_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdcmp_o", (char*) &___x_diab_sfpdcmp_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdcmpe_o", (char*) &___x_diab_sfpdcmpe_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpddiv_o", (char*) &___x_diab_sfpddiv_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpddtof_o", (char*) &___x_diab_sfpddtof_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpddtoi_o", (char*) &___x_diab_sfpddtoi_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpddtoll_o", (char*) &___x_diab_sfpddtoll_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpddtou_o", (char*) &___x_diab_sfpddtou_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpddtoull_o", (char*) &___x_diab_sfpddtoull_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdfeq_o", (char*) &___x_diab_sfpdfeq_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdfge_o", (char*) &___x_diab_sfpdfge_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdfgt_o", (char*) &___x_diab_sfpdfgt_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdfle_o", (char*) &___x_diab_sfpdfle_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdflt_o", (char*) &___x_diab_sfpdflt_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdfne_o", (char*) &___x_diab_sfpdfne_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpditod_o", (char*) &___x_diab_sfpditod_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdlltod_o", (char*) &___x_diab_sfpdlltod_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdmul_o", (char*) &___x_diab_sfpdmul_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdneg_o", (char*) &___x_diab_sfpdneg_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdnorm_o", (char*) &___x_diab_sfpdnorm_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdpol_o", (char*) &___x_diab_sfpdpol_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdsetup_o", (char*) &___x_diab_sfpdsetup_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdulltod_o", (char*) &___x_diab_sfpdulltod_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpdutod_o", (char*) &___x_diab_sfpdutod_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfadd_o", (char*) &___x_diab_sfpfadd_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfcmp_o", (char*) &___x_diab_sfpfcmp_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfcmpe_o", (char*) &___x_diab_sfpfcmpe_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfdiv_o", (char*) &___x_diab_sfpfdiv_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpffeq_o", (char*) &___x_diab_sfpffeq_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpffge_o", (char*) &___x_diab_sfpffge_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpffgt_o", (char*) &___x_diab_sfpffgt_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpffle_o", (char*) &___x_diab_sfpffle_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfflt_o", (char*) &___x_diab_sfpfflt_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpffne_o", (char*) &___x_diab_sfpffne_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfftod_o", (char*) &___x_diab_sfpfftod_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfftoi_o", (char*) &___x_diab_sfpfftoi_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfftoll_o", (char*) &___x_diab_sfpfftoll_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfftou_o", (char*) &___x_diab_sfpfftou_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfftoull_o", (char*) &___x_diab_sfpfftoull_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfitof_o", (char*) &___x_diab_sfpfitof_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpflltof_o", (char*) &___x_diab_sfpflltof_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfmul_o", (char*) &___x_diab_sfpfmul_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfneg_o", (char*) &___x_diab_sfpfneg_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfnorm_o", (char*) &___x_diab_sfpfnorm_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfsetup_o", (char*) &___x_diab_sfpfsetup_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfulltof_o", (char*) &___x_diab_sfpfulltof_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpfutof_o", (char*) &___x_diab_sfpfutof_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sfpround_o", (char*) &___x_diab_sfpround_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxpadd64_o", (char*) &___x_diab_sxpadd64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxpasr64_o", (char*) &___x_diab_sxpasr64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxpcmp64_o", (char*) &___x_diab_sxpcmp64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxpdiv64_o", (char*) &___x_diab_sxpdiv64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxplsl64_o", (char*) &___x_diab_sxplsl64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxplsr64_o", (char*) &___x_diab_sxplsr64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxpm6432_o", (char*) &___x_diab_sxpm6432_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxpmul64_o", (char*) &___x_diab_sxpmul64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxprem32_o", (char*) &___x_diab_sxprem32_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_sxprem64_o", (char*) &___x_diab_sxprem64_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_torn_syncatomic_o", (char*) &___x_diab_torn_syncatomic_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_torn_syncmutex_o", (char*) &___x_diab_torn_syncmutex_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_torn_syncsem_o", (char*) &___x_diab_torn_syncsem_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_wr_pk_db_o", (char*) &___x_diab_wr_pk_db_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_wr_pk_fl_o", (char*) &___x_diab_wr_pk_fl_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_wr_pk_ld_o", (char*) &___x_diab_wr_pk_ld_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_wr_sw_db_o", (char*) &___x_diab_wr_sw_db_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_wr_sw_fl_o", (char*) &___x_diab_wr_sw_fl_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "___x_diab_wr_sw_ld_o", (char*) &___x_diab_wr_sw_ld_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__add64", (char*) __add64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__arm_call_via_o", (char*) &__arm_call_via_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__asr64", (char*) __asr64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__assert", (char*) __assert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__clocale", (char*) &__clocale, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__common_intrinsicsInit", (char*) __common_intrinsicsInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__common_long_jmp", (char*) __common_long_jmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__copy", (char*) __copy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__copy_multiple", (char*) __copy_multiple, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__costate", (char*) &__costate, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__cplusDem_o", (char*) &__cplusDem_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__cplusLoadObjFiles", (char*) &__cplusLoadObjFiles, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__cplusLoad_o", (char*) &__cplusLoad_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__cplusUsr_o", (char*) &__cplusUsr_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__cplusXtors_o", (char*) &__cplusXtors_o, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__ctype", (char*) &__ctype, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__ctype_tolower", (char*) &__ctype_tolower, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__ctype_toupper", (char*) &__ctype_toupper, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__cxa_demangle", (char*) __cxa_demangle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__daysSinceEpoch", (char*) __daysSinceEpoch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_alloc_mutex", (char*) __diab_alloc_mutex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_alloc_semaphore", (char*) __diab_alloc_semaphore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_atomic_enter", (char*) __diab_atomic_enter, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_atomic_restore", (char*) __diab_atomic_restore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_free_mutex", (char*) __diab_free_mutex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_free_semaphore", (char*) __diab_free_semaphore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_intrinsics_impfpInit", (char*) __diab_intrinsics_impfpInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_intrinsics_implInit", (char*) __diab_intrinsics_implInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_intrinsics_tornInit", (char*) __diab_intrinsics_tornInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_lock_mutex", (char*) __diab_lock_mutex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_lock_semaphore", (char*) __diab_lock_semaphore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_trylock_mutex", (char*) __diab_trylock_mutex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_trylock_semaphore", (char*) __diab_trylock_semaphore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_unlock_mutex", (char*) __diab_unlock_mutex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__diab_unlock_semaphore", (char*) __diab_unlock_semaphore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__div32", (char*) __div32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__div64", (char*) __div64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__dtof", (char*) __dtof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__dtoi", (char*) __dtoi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__dtoll", (char*) __dtoll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__dtou", (char*) __dtou, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__dtoull", (char*) __dtoull, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__eq64", (char*) __eq64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__errno", (char*) __errno, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__exec_ctors", (char*) __exec_ctors, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__exec_dtors", (char*) __exec_dtors, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__exec_xtor_table", (char*) &__exec_xtor_table, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__ff1", (char*) __ff1, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ff1l", (char*) __ff1l, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ff1ll", (char*) __ff1ll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__fini", (char*) __fini, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__floatdidf", (char*) __floatdidf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__floatdisf", (char*) __floatdisf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ftod", (char*) __ftod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ftoi", (char*) __ftoi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ftoll", (char*) __ftoll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ftou", (char*) __ftou, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ftoull", (char*) __ftoull, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ge64", (char*) __ge64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__getDstInfo", (char*) __getDstInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__getDstInfoSub", (char*) __getDstInfoSub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__getTime", (char*) __getTime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__getZoneInfo", (char*) __getZoneInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__gt64", (char*) __gt64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ieee754_rem_pio2", (char*) __ieee754_rem_pio2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ieee_status", (char*) __ieee_status, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__includeDiabIntrinsics", (char*) &__includeDiabIntrinsics, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__init", (char*) __init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__itod", (char*) __itod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__itof", (char*) __itof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__julday", (char*) __julday, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__kernel_cos", (char*) __kernel_cos, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__kernel_rem_pio2", (char*) __kernel_rem_pio2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__kernel_sin", (char*) __kernel_sin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__kernel_tan", (char*) __kernel_tan, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__le64", (char*) __le64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__lltod", (char*) __lltod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__lltof", (char*) __lltof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__locale", (char*) &__locale, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__loctime", (char*) &__loctime, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "__lsl64", (char*) __lsl64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__lsr64", (char*) __lsr64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__lt64", (char*) __lt64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__mul64", (char*) __mul64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__mul6432", (char*) __mul6432, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ne64", (char*) __ne64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__rem32", (char*) __rem32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__rem64", (char*) __rem64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__rta_longjmp", (char*) &__rta_longjmp, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "__sclose", (char*) __sclose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__sflags", (char*) __sflags, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__sflush", (char*) __sflush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__sfpRoundMode", (char*) &__sfpRoundMode, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "__sfvwrite", (char*) __sfvwrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__smakebuf", (char*) __smakebuf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__sread", (char*) __sread, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__srefill", (char*) __srefill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__srget", (char*) __srget, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__sseek", (char*) __sseek, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__stderr", (char*) __stderr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__stdin", (char*) __stdin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__stdout", (char*) __stdout, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__strxfrm", (char*) __strxfrm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__sub64", (char*) __sub64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__swbuf", (char*) __swbuf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__swrite", (char*) __swrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__swsetup", (char*) __swsetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__taskVarAdd", (char*) __taskVarAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__taskVarDelete", (char*) __taskVarDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__taskVarGet", (char*) __taskVarGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__taskVarSet", (char*) __taskVarSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__udiv32", (char*) __udiv32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__udiv64", (char*) __udiv64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__uge64", (char*) __uge64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ugt64", (char*) __ugt64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ule64", (char*) __ule64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ulltod", (char*) __ulltod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ulltof", (char*) __ulltof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__ult64", (char*) __ult64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__urem32", (char*) __urem32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__urem64", (char*) __urem64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__utod", (char*) __utod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__utof", (char*) __utof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "__wdbEventListIsEmpty", (char*) &__wdbEventListIsEmpty, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_applLog", (char*) _applLog, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_archHelp_msg", (char*) &_archHelp_msg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_archIORead16", (char*) _archIORead16, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_archIORead32", (char*) _archIORead32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_archIORead8", (char*) _archIORead8, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_archIOWrite16", (char*) _archIOWrite16, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_archIOWrite32", (char*) _archIOWrite32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_archIOWrite8", (char*) _archIOWrite8, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_clockRealtime", (char*) &_clockRealtime, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_closeSc", (char*) _closeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_cplusDemangle", (char*) _cplusDemangle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_creatSc", (char*) _creatSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_add", (char*) _d_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_cmp", (char*) _d_cmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_cmpe", (char*) _d_cmpe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_div", (char*) _d_div, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_dtof", (char*) _d_dtof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_dtoi", (char*) _d_dtoi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_dtoll", (char*) _d_dtoll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_dtou", (char*) _d_dtou, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_dtoull", (char*) _d_dtoull, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_feq", (char*) _d_feq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fge", (char*) _d_fge, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fgt", (char*) _d_fgt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fle", (char*) _d_fle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_flt", (char*) _d_flt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fne", (char*) _d_fne, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fnge", (char*) _d_fnge, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fngt", (char*) _d_fngt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fnle", (char*) _d_fnle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_fnlt", (char*) _d_fnlt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_itod", (char*) _d_itod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_lltod", (char*) _d_lltod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_mul", (char*) _d_mul, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_neg", (char*) _d_neg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_sub", (char*) _d_sub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_ulltod", (char*) _d_ulltod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_d_utod", (char*) _d_utod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_dbgArchInit", (char*) _dbgArchInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_dbgDsmInstRtn", (char*) &_dbgDsmInstRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_dbgFuncCallCheck", (char*) _dbgFuncCallCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_dbgInstSizeGet", (char*) _dbgInstSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_dbgRetAdrsGet", (char*) _dbgRetAdrsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_dbgTaskPCGet", (char*) _dbgTaskPCGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_dbgTaskPCSet", (char*) _dbgTaskPCSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_edrErrorInjectSc", (char*) _edrErrorInjectSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_endM2Packet_1213", (char*) _endM2Packet_1213, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_endM2Packet_2233", (char*) _endM2Packet_2233, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_exitSc", (char*) _exitSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_add", (char*) _f_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_cmp", (char*) _f_cmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_cmpe", (char*) _f_cmpe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_div", (char*) _f_div, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_feq", (char*) _f_feq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fge", (char*) _f_fge, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fgt", (char*) _f_fgt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fle", (char*) _f_fle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_flt", (char*) _f_flt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fne", (char*) _f_fne, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fnge", (char*) _f_fnge, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fngt", (char*) _f_fngt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fnle", (char*) _f_fnle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_fnlt", (char*) _f_fnlt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_ftod", (char*) _f_ftod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_ftoi", (char*) _f_ftoi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_ftoll", (char*) _f_ftoll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_ftou", (char*) _f_ftou, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_ftoull", (char*) _f_ftoull, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_itof", (char*) _f_itof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_lltof", (char*) _f_lltof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_mul", (char*) _f_mul, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_neg", (char*) _f_neg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_sub", (char*) _f_sub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_ulltof", (char*) _f_ulltof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_f_utof", (char*) _f_utof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_fdatasyncSc", (char*) _fdatasyncSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_fp_round", (char*) _fp_round, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_fsyncSc", (char*) _fsyncSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_func_IntLvlChgRtn", (char*) &_func_IntLvlChgRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_IntLvlDisableRtn", (char*) &_func_IntLvlDisableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_IntLvlEnableRtn", (char*) &_func_IntLvlEnableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_IntLvlVecAckRtn", (char*) &_func_IntLvlVecAckRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_IntLvlVecChkRtn", (char*) &_func_IntLvlVecChkRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_aimMmuLockRegionsImport", (char*) &_func_aimMmuLockRegionsImport, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_armIntStackSplit", (char*) &_func_armIntStackSplit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_armIrqHandler", (char*) &_func_armIrqHandler, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_armMmuCurrentGet", (char*) &_func_armMmuCurrentGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_armMmuCurrentSet", (char*) &_func_armMmuCurrentSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_cacheAimArch7DClearDisable", (char*) &_func_cacheAimArch7DClearDisable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_cacheAimArch7IClearDisable", (char*) &_func_cacheAimArch7IClearDisable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_cacheFuncsSet", (char*) &_func_cacheFuncsSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_classListAdd", (char*) &_func_classListAdd, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_classListInit", (char*) &_func_classListInit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_classListLock", (char*) &_func_classListLock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_classListRemove", (char*) &_func_classListRemove, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_classListTblInit", (char*) &_func_classListTblInit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_classListUnlock", (char*) &_func_classListUnlock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_consoleOut", (char*) &_func_consoleOut, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_coprocShow", (char*) &_func_coprocShow, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_coprocTaskRegsShow", (char*) &_func_coprocTaskRegsShow, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_dosFsFmtRtn", (char*) &_func_dosFsFmtRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_edrEvt", (char*) &_func_edrEvt, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_end2VxBusConnect", (char*) &_func_end2VxBusConnect, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_end8023AddressForm", (char*) &_func_end8023AddressForm, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_endEtherAddressForm", (char*) &_func_endEtherAddressForm, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_endEtherPacketAddrGet", (char*) &_func_endEtherPacketAddrGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_endEtherPacketDataGet", (char*) &_func_endEtherPacketDataGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_envGet", (char*) &_func_envGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_eventReceive", (char*) &_func_eventReceive, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_eventRsrcSend", (char*) &_func_eventRsrcSend, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_eventRsrcShow", (char*) &_func_eventRsrcShow, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_eventSend", (char*) &_func_eventSend, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_eventTaskShow", (char*) &_func_eventTaskShow, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_eventTerminate", (char*) &_func_eventTerminate, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_evtLogPayload", (char*) &_func_evtLogPayload, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_evtLogPayloadString", (char*) &_func_evtLogPayloadString, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_evtLogReserveTaskName", (char*) &_func_evtLogReserveTaskName, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_evtLogSyscall", (char*) &_func_evtLogSyscall, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_excBaseHook", (char*) &_func_excBaseHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_excBreakpoint", (char*) &_func_excBreakpoint, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_excInfoShow", (char*) &_func_excInfoShow, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_excIntHook", (char*) &_func_excIntHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_excJobAdd", (char*) &_func_excJobAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_excPanicHook", (char*) &_func_excPanicHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_exit", (char*) &_func_exit, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_fclose", (char*) &_func_fclose, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_fcntl_dup", (char*) &_func_fcntl_dup, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_fdMap", (char*) &_func_fdMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_fdMsync", (char*) &_func_fdMsync, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_fdUnmap", (char*) &_func_fdUnmap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_fileDoesNotExist", (char*) &_func_fileDoesNotExist, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_fioFltFormatRtn", (char*) &_func_fioFltFormatRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_fioFltScanRtn", (char*) &_func_fioFltScanRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_ftpLs", (char*) &_func_ftpLs, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_ftpTransientFatal", (char*) &_func_ftpTransientFatal, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_ftruncMmanHook", (char*) &_func_ftruncMmanHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_handleAlloc", (char*) &_func_handleAlloc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_handleFreeAll", (char*) &_func_handleFreeAll, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_intConnectRtn", (char*) &_func_intConnectRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_intDisconnectRtn", (char*) &_func_intDisconnectRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_ioGlobalStdGet", (char*) &_func_ioGlobalStdGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_ioPxCreateOrOpen", (char*) &_func_ioPxCreateOrOpen, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_ioTaskStdSet", (char*) &_func_ioTaskStdSet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_iosPathFdEntryIoctl", (char*) &_func_iosPathFdEntryIoctl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_iosPosixFdEntryIoctl", (char*) &_func_iosPosixFdEntryIoctl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_iosRtpIoTableSizeGet", (char*) &_func_iosRtpIoTableSizeGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_iosRtpIoTableSizeSet", (char*) &_func_iosRtpIoTableSizeSet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_isrConnect", (char*) &_func_isrConnect, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_isrCreate", (char*) &_func_isrCreate, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_isrDelete", (char*) &_func_isrDelete, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_isrDisconnect", (char*) &_func_isrDisconnect, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_isrDispatcher", (char*) &_func_isrDispatcher, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_isrInfo", (char*) &_func_isrInfo, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_jobTaskWorkAdd", (char*) &_func_jobTaskWorkAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_kernelModuleListIdGet", (char*) &_func_kernelModuleListIdGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_kernelRoundRobinHook", (char*) &_func_kernelRoundRobinHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_kprintf", (char*) &_func_kprintf, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_kwrite", (char*) &_func_kwrite, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_lf_advlock", (char*) &_func_lf_advlock, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_loadRtpDeltaBaseAddrApply", (char*) &_func_loadRtpDeltaBaseAddrApply, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_loadRtpSymsPolicyOverride", (char*) &_func_loadRtpSymsPolicyOverride, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_logMsg", (char*) &_func_logMsg, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_loginPrompt2", (char*) &_func_loginPrompt2, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_loginStringGet", (char*) &_func_loginStringGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_loginStringSet", (char*) &_func_loginStringSet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_m2PollStatsIfPoll", (char*) &_func_m2PollStatsIfPoll, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_memPartCacheAlloc", (char*) &_func_memPartCacheAlloc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_memPartCacheFree", (char*) &_func_memPartCacheFree, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_memPartCacheInfoGet", (char*) &_func_memPartCacheInfoGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_memPartRealloc", (char*) &_func_memPartRealloc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_memPartReallocInternal", (char*) &_func_memPartReallocInternal, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_memalign", (char*) &_func_memalign, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_mmuFaultAddrGet", (char*) &_func_mmuFaultAddrGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_mmuFaultStatusGet", (char*) &_func_mmuFaultStatusGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_mmuIFaultStatusGet", (char*) &_func_mmuIFaultStatusGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_moduleIdFigure", (char*) &_func_moduleIdFigure, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_moduleSegInfoGet", (char*) &_func_moduleSegInfoGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_mux", (char*) &_func_mux, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_mux_l2", (char*) &_func_mux_l2, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_netAttrDeReg", (char*) &_func_netAttrDeReg, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_netAttrReg", (char*) &_func_netAttrReg, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_netChDirByName", (char*) &_func_netChDirByName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_netDaemonIxToQId", (char*) &_func_netDaemonIxToQId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_netDaemonQIdToIx", (char*) &_func_netDaemonQIdToIx, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_netLsByName", (char*) &_func_netLsByName, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_netPoolShow", (char*) &_func_netPoolShow, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objCoreRelease", (char*) &_func_objCoreRelease, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objHandleToObjId", (char*) &_func_objHandleToObjId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objNameVerifiedSet", (char*) &_func_objNameVerifiedSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objOwnerListAdd", (char*) &_func_objOwnerListAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objOwnerListRemove", (char*) &_func_objOwnerListRemove, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objOwnerReclaim", (char*) &_func_objOwnerReclaim, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objOwnerSetBaseInternal", (char*) &_func_objOwnerSetBaseInternal, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objOwnerSetInternal", (char*) &_func_objOwnerSetInternal, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_objRtpObjEachHook", (char*) &_func_objRtpObjEachHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_ownerListLock", (char*) &_func_ownerListLock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_ownerListUnlock", (char*) &_func_ownerListUnlock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_pgMgrOverlapIterate", (char*) &_func_pgMgrOverlapIterate, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_pgMgrPageAlloc", (char*) &_func_pgMgrPageAlloc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_pgMgrPageFree", (char*) &_func_pgMgrPageFree, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_pgMgrPageMap", (char*) &_func_pgMgrPageMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_printErr", (char*) &_func_printErr, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_printExcPrintHook", (char*) &_func_printExcPrintHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_pthread_testandset_canceltype", (char*) &_func_pthread_testandset_canceltype, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_pxSSThreadIntHook", (char*) &_func_pxSSThreadIntHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_pxSSThreadStateInit", (char*) &_func_pxSSThreadStateInit, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_qPriBMapNativeResort", (char*) &_func_qPriBMapNativeResort, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_remCurIdGet", (char*) &_func_remCurIdGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_remCurIdSet", (char*) &_func_remCurIdSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtcUncache", (char*) &_func_rtcUncache, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_rtpDelete", (char*) &_func_rtpDelete, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpDeleteHookAdd", (char*) &_func_rtpDeleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpDeleteHookDelete", (char*) &_func_rtpDeleteHookDelete, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpDeletionDeferDisable", (char*) &_func_rtpDeletionDeferDisable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpDeletionDeferEnable", (char*) &_func_rtpDeletionDeferEnable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpExtraCmdGet", (char*) &_func_rtpExtraCmdGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_rtpHandleIdGet", (char*) &_func_rtpHandleIdGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpIdVerify", (char*) &_func_rtpIdVerify, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpInitCompleteHookAdd", (char*) &_func_rtpInitCompleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpInitCompleteHookDelete", (char*) &_func_rtpInitCompleteHookDelete, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpPause", (char*) &_func_rtpPause, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpPostCreateHookAdd", (char*) &_func_rtpPostCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpPostCreateHookDelete", (char*) &_func_rtpPostCreateHookDelete, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpPreCreateHookAdd", (char*) &_func_rtpPreCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpPreCreateHookDelete", (char*) &_func_rtpPreCreateHookDelete, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSdUnmapAll", (char*) &_func_rtpSdUnmapAll, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpShlDeleteAll", (char*) &_func_rtpShlDeleteAll, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpShlInfoGet", (char*) &_func_rtpShlInfoGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpShlShow", (char*) &_func_rtpShlShow, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_rtpShlSymbolsRegister", (char*) &_func_rtpShlSymbolsRegister, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpShlSymbolsUnregister", (char*) &_func_rtpShlSymbolsUnregister, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpShow", (char*) &_func_rtpShow, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigExcKill", (char*) &_func_rtpSigExcKill, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigPendDestroy", (char*) &_func_rtpSigPendDestroy, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigPendInit", (char*) &_func_rtpSigPendInit, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigPendKill", (char*) &_func_rtpSigPendKill, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigaction", (char*) &_func_rtpSigaction, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigpending", (char*) &_func_rtpSigpending, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigprocmask", (char*) &_func_rtpSigprocmask, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigqueue", (char*) &_func_rtpSigqueue, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigsuspend", (char*) &_func_rtpSigsuspend, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSigtimedwait", (char*) &_func_rtpSigtimedwait, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSpawn", (char*) &_func_rtpSpawn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpSymTblIdGet", (char*) &_func_rtpSymTblIdGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_rtpTaskKill", (char*) &_func_rtpTaskKill, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpTaskSigBlock", (char*) &_func_rtpTaskSigBlock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpTaskSigCheck", (char*) &_func_rtpTaskSigCheck, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpTaskSigPendKill", (char*) &_func_rtpTaskSigPendKill, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpTaskSigqueue", (char*) &_func_rtpTaskSigqueue, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpVarAdd", (char*) &_func_rtpVarAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_rtpVerifiedLock", (char*) &_func_rtpVerifiedLock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_selPtyAdd", (char*) &_func_selPtyAdd, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selPtyDelete", (char*) &_func_selPtyDelete, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selPtySlaveAdd", (char*) &_func_selPtySlaveAdd, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selPtySlaveDelete", (char*) &_func_selPtySlaveDelete, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selTyAdd", (char*) &_func_selTyAdd, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selTyDelete", (char*) &_func_selTyDelete, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selWakeup", (char*) &_func_selWakeup, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selWakeupAll", (char*) &_func_selWakeupAll, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selWakeupListInit", (char*) &_func_selWakeupListInit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_selWakeupListTerm", (char*) &_func_selWakeupListTerm, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_semExchange", (char*) &_func_semExchange, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_semRTake", (char*) &_func_semRTake, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_semWTake", (char*) &_func_semWTake, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_shellDbgCallPrint", (char*) &_func_shellDbgCallPrint, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_shellDbgStackTrace", (char*) &_func_shellDbgStackTrace, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_shellExcPrint", (char*) &_func_shellExcPrint, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_shlGottSet", (char*) &_func_shlGottSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_sigExcKill", (char*) &_func_sigExcKill, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_sigTimeoutRecalc", (char*) &_func_sigTimeoutRecalc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_sigeventInit", (char*) &_func_sigeventInit, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_sigfillset", (char*) &_func_sigfillset, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_signalMmanHook", (char*) &_func_signalMmanHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_sigprocmask", (char*) &_func_sigprocmask, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_spy", (char*) &_func_spy, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_spy2", (char*) &_func_spy2, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_spyClkStart", (char*) &_func_spyClkStart, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_spyClkStop", (char*) &_func_spyClkStop, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_spyReport", (char*) &_func_spyReport, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_spyReport2", (char*) &_func_spyReport2, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_spyStop", (char*) &_func_spyStop, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_spyTask", (char*) &_func_spyTask, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symEach", (char*) &_func_symEach, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symEachCall", (char*) &_func_symEachCall, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symFind", (char*) &_func_symFind, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symFindSymbol", (char*) &_func_symFindSymbol, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symNameGet", (char*) &_func_symNameGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symRegister", (char*) &_func_symRegister, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symTblShutdown", (char*) &_func_symTblShutdown, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symTypeGet", (char*) &_func_symTypeGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_symValueGet", (char*) &_func_symValueGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_taskCreateHookAdd", (char*) &_func_taskCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_taskDeleteHookAdd", (char*) &_func_taskDeleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_taskMemCtxSwitch", (char*) &_func_taskMemCtxSwitch, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_taskPxAttrCreate", (char*) &_func_taskPxAttrCreate, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_taskPxAttrGet", (char*) &_func_taskPxAttrGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_taskPxAttrSet", (char*) &_func_taskPxAttrSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_taskStackAlloc", (char*) &_func_taskStackAlloc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_taskStackFree", (char*) &_func_taskStackFree, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_tipStart", (char*) &_func_tipStart, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_tmrConnect", (char*) &_func_tmrConnect, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_tmrDisable", (char*) &_func_tmrDisable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_tmrEnable", (char*) &_func_tmrEnable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_tmrFreq", (char*) &_func_tmrFreq, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_tmrPeriod", (char*) &_func_tmrPeriod, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_tmrStamp", (char*) &_func_tmrStamp, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_tmrStampLock", (char*) &_func_tmrStampLock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_unldByModuleId", (char*) &_func_unldByModuleId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_valloc", (char*) &_func_valloc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vfpExcHandle", (char*) &_func_vfpExcHandle, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vfpHasException", (char*) &_func_vfpHasException, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vfpIsEnabled", (char*) &_func_vfpIsEnabled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vfpSave", (char*) &_func_vfpSave, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_virtExtraMapInfoGet", (char*) &_func_virtExtraMapInfoGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_virtSegInfoGet", (char*) &_func_virtSegInfoGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vmBaseFuncsSet", (char*) &_func_vmBaseFuncsSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vmInvPageMap", (char*) &_func_vmInvPageMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vmInvUnMap", (char*) &_func_vmInvUnMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxMemProbeHook", (char*) &_func_vxMemProbeHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxbDelayCommon", (char*) &_func_vxbDelayCommon, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxbIntConnect", (char*) &_func_vxbIntConnect, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDisable", (char*) &_func_vxbIntDisable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDisconnect", (char*) &_func_vxbIntDisconnect, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaConnect", (char*) &_func_vxbIntDynaConnect, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaCtlrInputInit", (char*) &_func_vxbIntDynaCtlrInputInit, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecAlloc", (char*) &_func_vxbIntDynaVecAlloc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecDevMultiProgram", (char*) &_func_vxbIntDynaVecDevMultiProgram, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecDisable", (char*) &_func_vxbIntDynaVecDisable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecEnable", (char*) &_func_vxbIntDynaVecEnable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecErase", (char*) &_func_vxbIntDynaVecErase, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecGet", (char*) &_func_vxbIntDynaVecGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecOwnerFind", (char*) &_func_vxbIntDynaVecOwnerFind, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntDynaVecProgram", (char*) &_func_vxbIntDynaVecProgram, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbIntEnable", (char*) &_func_vxbIntEnable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbPciDevCfgRead", (char*) &_func_vxbPciDevCfgRead, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbPciDevCfgWrite", (char*) &_func_vxbPciDevCfgWrite, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_vxbUserHookDevInit", (char*) &_func_vxbUserHookDevInit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgBpDelete", (char*) &_func_vxdbgBpDelete, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgCtxCont", (char*) &_func_vxdbgCtxCont, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgCtxStop", (char*) &_func_vxdbgCtxStop, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgMemMove", (char*) &_func_vxdbgMemMove, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgMemRead", (char*) &_func_vxdbgMemRead, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgMemScan", (char*) &_func_vxdbgMemScan, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgMemWrite", (char*) &_func_vxdbgMemWrite, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgRtpCont", (char*) &_func_vxdbgRtpCont, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgRtpIdVerify", (char*) &_func_vxdbgRtpIdVerify, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgRtpStop", (char*) &_func_vxdbgRtpStop, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_vxdbgTrap", (char*) &_func_vxdbgTrap, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_wdbExternCoprocRegsGet", (char*) &_func_wdbExternCoprocRegsGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbExternCoprocRegsSet", (char*) &_func_wdbExternCoprocRegsSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbExternEnterHookAdd", (char*) &_func_wdbExternEnterHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbExternExitHookAdd", (char*) &_func_wdbExternExitHookAdd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbExternNotifyHost", (char*) &_func_wdbExternNotifyHost, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbExternRcvHook", (char*) &_func_wdbExternRcvHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbResumeSystem", (char*) &_func_wdbResumeSystem, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbSuspendSystem", (char*) &_func_wdbSuspendSystem, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbTaskBpByIdRemove", (char*) &_func_wdbTaskBpByIdRemove, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbTaskCoprocRegsGet", (char*) &_func_wdbTaskCoprocRegsGet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbTaskCoprocRegsSet", (char*) &_func_wdbTaskCoprocRegsSet, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wdbTrap", (char*) &_func_wdbTrap, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_windSemRWDelete", (char*) &_func_windSemRWDelete, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_func_windTickAnnounceHook", (char*) &_func_windTickAnnounceHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_workQDbgTextDump", (char*) &_func_workQDbgTextDump, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wvOnUploadPathClose", (char*) &_func_wvOnUploadPathClose, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_func_wvOnUploadPathCreate", (char*) &_func_wvOnUploadPathCreate, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_getcwdSc", (char*) _getcwdSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_hostAdd", (char*) _hostAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_hostDelete", (char*) _hostDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_hostGetByAddr", (char*) _hostGetByAddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_hostGetByName", (char*) _hostGetByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_hostTblSearchByName2", (char*) _hostTblSearchByName2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_ioctlSc", (char*) _ioctlSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_ipcom_gethostbyaddr_r", (char*) &_ipcom_gethostbyaddr_r, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_ipcom_gethostbyname_r", (char*) &_ipcom_gethostbyname_r, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_ipdhcpc_callback_hook", (char*) &_ipdhcpc_callback_hook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_linkMemReqClAlign", (char*) &_linkMemReqClAlign, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_linkMemReqMlinkAlign", (char*) &_linkMemReqMlinkAlign, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_mctlSc", (char*) _mctlSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_msgQOpenSc", (char*) _msgQOpenSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_muxProtosPerEndInc", (char*) &_muxProtosPerEndInc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_muxProtosPerEndStart", (char*) &_muxProtosPerEndStart, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_netMemReqDefault", (char*) _netMemReqDefault, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_netSysctl", (char*) &_netSysctl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_netSysctlCli", (char*) &_netSysctlCli, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_objClose", (char*) _objClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_openSc", (char*) _openSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_pLinkPoolFuncTbl", (char*) &_pLinkPoolFuncTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pNetBufCollect", (char*) &_pNetBufCollect, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pNetDpool", (char*) &_pNetDpool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_pNetPoolFuncAlignTbl", (char*) &_pNetPoolFuncAlignTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pNetPoolFuncTbl", (char*) &_pNetPoolFuncTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pNetSysPool", (char*) &_pNetSysPool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_pSigQueueFreeHead", (char*) &_pSigQueueFreeHead, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "_pSysL2CacheClear", (char*) &_pSysL2CacheClear, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pSysL2CacheDisable", (char*) &_pSysL2CacheDisable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pSysL2CacheEnable", (char*) &_pSysL2CacheEnable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pSysL2CacheFlush", (char*) &_pSysL2CacheFlush, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pSysL2CacheInvFunc", (char*) &_pSysL2CacheInvFunc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pSysL2CachePipeFlush", (char*) &_pSysL2CachePipeFlush, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_panicHook", (char*) &_panicHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_pauseSc", (char*) _pauseSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_procNumWasSet", (char*) &_procNumWasSet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_readSc", (char*) _readSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_rtpSigqueue", (char*) _rtpSigqueue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_rtpTaskSigqueue", (char*) _rtpTaskSigqueue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sdCreateSc", (char*) _sdCreateSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sdOpenSc", (char*) _sdOpenSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_semExchangeSc", (char*) _semExchangeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_semGiveSc", (char*) _semGiveSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_semOpenSc", (char*) _semOpenSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_semRTakeSc", (char*) _semRTakeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_semTakeSc", (char*) _semTakeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_semWTakeSc", (char*) _semWTakeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_setjmpSetup", (char*) _setjmpSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlClose", (char*) _shlClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlCloseSc", (char*) _shlCloseSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlGet", (char*) _shlGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlGetSc", (char*) _shlGetSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlOpen", (char*) _shlOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlOpenSc", (char*) _shlOpenSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlPut", (char*) _shlPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlPutSc", (char*) _shlPutSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlUnlock", (char*) _shlUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_shlUnlockSc", (char*) _shlUnlockSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigCtxLoad", (char*) _sigCtxLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigCtxRtnValSet", (char*) _sigCtxRtnValSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigCtxSave", (char*) _sigCtxSave, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigCtxSetup", (char*) _sigCtxSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigCtxStackEnd", (char*) _sigCtxStackEnd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigactionSc", (char*) _sigactionSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigfaulttable", (char*) &_sigfaulttable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_sigqueueSc", (char*) _sigqueueSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigreturnSc", (char*) _sigreturnSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigsuspendSc", (char*) _sigsuspendSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_sigtimedwaitSc", (char*) _sigtimedwaitSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_taskOpenSc", (char*) _taskOpenSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_taskOpenWithGuardSc", (char*) _taskOpenWithGuardSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_taskSigqueueSc", (char*) _taskSigqueueSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_taskSuspend", (char*) _taskSuspend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_taskTcbCurrentGetSc", (char*) _taskTcbCurrentGetSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_vdsqrt", (char*) _vdsqrt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_vx_offset_COMMON_SYM_pSymbol", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_DESC_ctxAlign", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_DESC_ctxSize", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_DESC_mask", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_DESC_next", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_DESC_pCtxGetRtn", (char*) 0x00000024, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_DESC_pLastEntry", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_TBL_ENTRY_pCtx", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_TBL_ENTRY_pDescriptor", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_TBL_ENTRY_pTask", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_COPROC_TBL_ENTRY_size", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DEV_HDR_drvNum", (char*) 0x0000001c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DEV_HDR_name", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DL_LIST_head", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DL_NODE_next", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_close", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_create", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_delete", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_inuse", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_ioctl", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_open", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_read", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_DRV_ENTRY_de_write", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_ESFARM_cpsr", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_ESFARM_pc", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_ESFARM_vecAddr", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_FD_ENTRY_pDevHdr", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_FD_ENTRY_refCnt", (char*) 0x00000050, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_FD_ENTRY_value", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HANDLE_attributes", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HANDLE_context", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HANDLE_contextType", (char*) 0x0000000b, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HANDLE_magic", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HANDLE_objSize", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HANDLE_safeCnt", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HANDLE_type", (char*) 0x0000000a, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HASH_TBL_elements", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HASH_TBL_pHashTbl", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HOOK_TBL_hookTableA", (char*) 0x0000008c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_HOOK_TBL_maxEntries", (char*) 0x00000070, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_JOB_arg1", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_JOB_arg2", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_JOB_function", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_JOB_isrTag", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_KERNEL_RTP_CMN_pWdbInfo", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_KERNEL_RTP_CMN_pgMgrId", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_KERNEL_RTP_CMN_sharedDataList", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_KERNEL_RTP_CMN_vmContextId", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MEM_PART_STATS_maxBlockSizeFree", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MEM_PART_STATS_maxBytesAlloc", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MEM_PART_STATS_numBlocksAlloc", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MEM_PART_STATS_numBlocksFree", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MEM_PART_STATS_numBytesAlloc", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MEM_PART_STATS_numBytesFree", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MEM_SECTION_HDR_size", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODLIST_DESC_moduleList", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_commTotalSize", (char*) 0x00000540, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_commonSymList", (char*) 0x00000554, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_ctors", (char*) 0x00000538, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_dtors", (char*) 0x0000053c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_flags", (char*) 0x0000051c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_format", (char*) 0x00000530, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_group", (char*) 0x00000534, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_nameWithPath", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_sectionList", (char*) 0x00000520, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_segmentList", (char*) 0x00000528, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_swapNeeded", (char*) 0x00000544, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_undefSymCount", (char*) 0x00000548, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MODULE_undefSymList", (char*) 0x0000054c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_NODE_message", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_NODE_msgLength", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_HEAD_count", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_HEAD_list", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_HEAD_pendQ", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_events", (char*) 0x0000008c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_freeQ", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_maxMsgLength", (char*) 0x00000080, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_maxMsgs", (char*) 0x0000007c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_msgQ", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_options", (char*) 0x000000a8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_recvTimeouts", (char*) 0x00000088, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_MSG_Q_sendTimeouts", (char*) 0x00000084, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_createRtn", (char*) 0x0000001c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_destroyRtn", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_handle", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_objClassType", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_objMemAllocRtn", (char*) 0x00000028, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_objMemFreeRtn", (char*) 0x0000002c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_objPartId", (char*) 0x00000030, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_objPrivList", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_objPubList", (char*) 0x0000003c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_objSize", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_options", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_pClassSem", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_OBJ_CLASS_showRtn", (char*) 0x00000024, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PAGE_MGR_OBJ_mmapList", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PAGE_MGR_OBJ_options", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PAGE_MGR_OBJ_physPgPoolId", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PAGE_MGR_OBJ_virtPgPoolId", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PAGE_MGR_OBJ_vmContextId", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_avlSize", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_cumBlocksAllocated", (char*) 0x000000fc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_cumWordsAllocated", (char*) 0x00000104, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_curBlocksAllocated", (char*) 0x000000f4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_curBlocksAllocatedInternal", (char*) 0x00000110, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_curBlocksFreed", (char*) 0x000000ec, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_curWordsAllocated", (char*) 0x000000f8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_curWordsAllocatedInternal", (char*) 0x00000114, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_curWordsFreed", (char*) 0x000000f0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_freeSizeNodeNb", (char*) 0x00000050, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_maxWordsAllocated", (char*) 0x0000010c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_options", (char*) 0x000000cc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_sectionHdrLst", (char*) 0x000000d0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_sem", (char*) 0x00000058, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PARTITION_totalWords", (char*) 0x000000c8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_ATTR_mq_curmsgs", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_ATTR_mq_flags", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_ATTR_mq_maxmsg", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_ATTR_mq_msgsize", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_DES_f_data", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_DES_f_flag", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_msgq_attr", (char*) 0x00000114, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_msgq_cond_data", (char*) 0x00000054, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_POSIX_MSG_Q_msgq_cond_read", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PSEMAPHORE_objCore", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PSEMAPHORE_pSelf", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_PSEMAPHORE_wSemId", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_Q_FIFO_G_HEAD_pFifoQ", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_BUFF_TYPE_dataEnd", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_BUFF_TYPE_dataLen", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_BUFF_TYPE_dataStart", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_BUFF_TYPE_next", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_BUFF_TYPE_prev", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_BUFF_TYPE_spaceAvail", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_BUFF_TYPE_uncommitedRead", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_buffSize", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_bytesPeak", (char*) 0x00000040, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_bytesRead", (char*) 0x0000003c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_bytesWritten", (char*) 0x00000038, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_currBuffs", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_dataContent", (char*) 0x00000024, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_emptyBuffs", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_maxBuffs", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_maxBuffsActual", (char*) 0x0000001c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_minBuffs", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_options", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_readsSinceReset", (char*) 0x0000002c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_srcPart", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_threshold", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_timesExtended", (char*) 0x00000030, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_timesXThreshold", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_INFO_TYPE_writesSinceReset", (char*) 0x00000028, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_TYPE_buffDesc", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_TYPE_buffRead", (char*) 0x000000b0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_TYPE_buffWrite", (char*) 0x000000b4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_TYPE_dataRead", (char*) 0x000000b8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_TYPE_dataWrite", (char*) 0x000000bc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RBUFF_TYPE_info", (char*) 0x000000cc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_REG_SET_pc", (char*) 0x0000003c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_REG_SET_size", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_REG_SET_sp", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_RTP_SIG_CTX_ctx_regset", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SECTION_DESC_address", (char*) 0x0000001c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SECTION_DESC_checksum", (char*) 0x00000030, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SECTION_DESC_flags", (char*) 0x00000028, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SECTION_DESC_name", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SECTION_DESC_sectionNode", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SECTION_DESC_size", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SECTION_DESC_type", (char*) 0x00000024, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEGMENT_address", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEGMENT_flags", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEGMENT_segmentNode", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEGMENT_size", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEGMENT_type", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_count", (char*) 0x0000005c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_events", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_events_options", (char*) 0x00000068, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_events_registered", (char*) 0x00000064, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_options", (char*) 0x00000045, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_priInheritFlag", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_qHead", (char*) 0x0000004c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_recurse", (char*) 0x00000046, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SEMAPHORE_semType", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SL_LIST_head", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SL_LIST_size", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SL_NODE_next", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_BLOCK_HDR_nWords", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_FREE_BLOCK_node", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_NODE_message", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_NODE_msgLength", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_freeQ", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_freeQSem", (char*) 0x0000002c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_maxMsgLength", (char*) 0x00000058, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_maxMsgs", (char*) 0x00000054, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_msgQ", (char*) 0x00000024, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_msgQSem", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_options", (char*) 0x00000050, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_recvTimeouts", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_MSG_Q_sendTimeouts", (char*) 0x0000005c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_curNumMsgQ", (char*) 0x000001d0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_curNumName", (char*) 0x000001dc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_curNumPart", (char*) 0x000001d8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_curNumSemB", (char*) 0x000001c8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_curNumSemC", (char*) 0x000001cc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_curNumTask", (char*) 0x000001d4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_maxMemParts", (char*) 0x000001c0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_maxMsgQueues", (char*) 0x000001b8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_maxNames", (char*) 0x000001c4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_maxSems", (char*) 0x000001b4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_maxTasks", (char*) 0x000001bc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_nameDtb", (char*) 0x00000184, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_objCpuTbl", (char*) 0x000001b0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_smMsgQPart", (char*) 0x000000b8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_smNamePart", (char*) 0x00000074, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_smPartPart", (char*) 0x000000fc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_smSemPart", (char*) 0x00000030, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_smSysPart", (char*) 0x00000140, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_MEM_HDR_smTcbPart", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_TCB_localTcb", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_TCB_ownerCpu", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_OBJ_objType", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_PARTITION_cumBlocksAllocated", (char*) 0x0000003c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_PARTITION_cumWordsAllocated", (char*) 0x00000040, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_PARTITION_curBlocksAllocated", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_PARTITION_curWordsAllocated", (char*) 0x00000038, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_PARTITION_freeList", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_PARTITION_totalWords", (char*) 0x00000028, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_SEMAPHORE_count", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_SEMAPHORE_flag", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_SEMAPHORE_lock", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_SEMAPHORE_objType", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_SEMAPHORE_smPendQ", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SM_SEMAPHORE_verify", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYMBOL_group", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYMBOL_name", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYMBOL_symRef", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYMBOL_type", (char*) 0x00000012, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYMBOL_value", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYMTAB_nameHashId", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYSCALL_ENTRY_STATE_args", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYSCALL_ENTRY_STATE_pUStack", (char*) 0x0000002c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYSCALL_ENTRY_STATE_pc", (char*) 0x00000028, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYSCALL_ENTRY_STATE_retAddrReg", (char*) 0x00000030, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYSCALL_ENTRY_STATE_scn", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_SYSCALL_ENTRY_STATE_size", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_actionArg", (char*) 0x00000078, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_actionDef", (char*) 0x0000007c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_actionFunc", (char*) 0x00000074, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_actionType", (char*) 0x00000070, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_chain", (char*) 0x00000058, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_condEx1", (char*) 0x00000064, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_condEx2", (char*) 0x0000006c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_condOp", (char*) 0x00000068, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_condType", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_conditional", (char*) 0x0000005c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_contextId", (char*) 0x00000050, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_contextType", (char*) 0x0000004c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_disable", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_eventId", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_hitCnt", (char*) 0x00000080, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_initialState", (char*) 0x00000084, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_objCore", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_objId", (char*) 0x00000054, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_pDataCollector", (char*) 0x00000088, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_TRIGGER_status", (char*) 0x00000046, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_dropped", (char*) 0x00000022, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_hiwatermark", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_node", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_pLastExp", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_pLastReg", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_pPeerSocket", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_pRecvPacket", (char*) 0x0000001c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_pSelfSocket", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_selfName", (char*) 0x00000012, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNCOMPCB_selfState", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_UNDEF_SYM_name", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_fpexc", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_fpinst", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_fpinst2", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_fpscr", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_fpsid", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_mfvfr0", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_mfvfr1", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VFP_CONTEXT_vfp_gpr", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VM_CONTEXT_mmuTransTbl", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VM_LIB_INFO_pVmCtxSwitchRtn", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc1Task", (char*) 0x01000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc2Task", (char*) 0x02000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc3Task", (char*) 0x04000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc4Task", (char*) 0x08000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc5Task", (char*) 0x10000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc6Task", (char*) 0x20000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc7Task", (char*) 0x40000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_coproc8Task", (char*) 0x80000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_VX_fpTask", (char*) 0x01000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WDOG_deferStartCnt", (char*) 0x0000005e, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WDOG_status", (char*) 0x0000005c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WDOG_timeout", (char*) 0x0000004c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WDOG_wdParameter", (char*) 0x00000058, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WDOG_wdRoutine", (char*) 0x00000054, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_arg", (char*) 0x0000005c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_count", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_cpuTime", (char*) 0x00000050, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_handlerRtn", (char*) 0x00000058, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_isrTag", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_objCore", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_options", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_ISR_serviceCount", (char*) 0x0000004c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_accessCnt", (char*) 0x00000042, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_classNode", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_handle", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_name", (char*) 0x00000030, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_objHandleList", (char*) 0x00000038, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_ownerId", (char*) 0x00000028, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_ownerList", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_ownerNode", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_ownerRtpId", (char*) 0x0000002c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_pObjClass", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_OBJ_refCnt", (char*) 0x00000040, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_binaryInfo", (char*) 0x00000084, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_cpuTimeInfo", (char*) 0x00000b5c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_defPath", (char*) 0x000000d4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_defPathLen", (char*) 0x000000d8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_entrAddr", (char*) 0x00000078, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_fdTable", (char*) 0x000000cc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_fdTableSize", (char*) 0x000000d0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_initTaskId", (char*) 0x0000007c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_kernelRtpCmn", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_lockTaskId", (char*) 0x00000b48, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_options", (char*) 0x00000074, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_pArgv", (char*) 0x00000068, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_pEnv", (char*) 0x0000006c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_pPathName", (char*) 0x00000064, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_pSchedInfo", (char*) 0x00000b6c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_pSigQFreeHead", (char*) 0x00000714, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_parentRtpId", (char*) 0x00000728, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_rtpNode", (char*) 0x00000058, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_semId", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_sigReturnRtn", (char*) 0x000000e0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_signalInfo", (char*) 0x000000e4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_sigwaitQ", (char*) 0x00000718, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_status", (char*) 0x00000070, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_symTabId", (char*) 0x00000080, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_taskCnt", (char*) 0x000000b4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_RTP_taskExitRtn", (char*) 0x000000dc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_attr", (char*) 0x000000bc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_clientCount", (char*) 0x000000d0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_objCore", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_options", (char*) 0x000000b8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_physAdrs", (char*) 0x000000c4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_sem", (char*) 0x00000048, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_size", (char*) 0x000000c0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SD_virtAdrs", (char*) 0x000000cc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_fd", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_linger", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_options", (char*) 0x00000006, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_pcb", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_qlen", (char*) 0x00000030, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_qlimit", (char*) 0x00000034, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_state", (char*) 0x0000000a, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_SOCKET_so_type", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_cpuTimeInfo", (char*) 0x00000168, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_entry", (char*) 0x000000c4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_errorStatus", (char*) 0x000000d4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_events", (char*) 0x00000110, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_excCnt", (char*) 0x00000070, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_excInfo", (char*) 0x000001bc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_fpStatus", (char*) 0x000001cc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_lockCnt", (char*) 0x00000080, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_objCore", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_options", (char*) 0x000000a0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pCoprocTbl", (char*) 0x000000f4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pDbgInfo", (char*) 0x00000138, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pEdrInfo", (char*) 0x000000d0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pExcRegSet", (char*) 0x00000130, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pExcStackBase", (char*) 0x00000064, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pExcStackEnd", (char*) 0x00000068, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pExcStackStart", (char*) 0x0000006c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pPendQ", (char*) 0x000000a8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pPriMutex", (char*) 0x00000090, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pPwrMgmtPState", (char*) 0x00000178, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pSchedInfo", (char*) 0x0000017c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pStackBase", (char*) 0x000000c8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pStackEnd", (char*) 0x000000cc, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pTlsDesc", (char*) 0x00000228, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_pUTcb", (char*) 0x0000009c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_priDrop", (char*) 0x0000008c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_priInheritCnt", (char*) 0x00000088, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_priMutexCnt", (char*) 0x00000084, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_priNormal", (char*) 0x0000007c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_priority", (char*) 0x00000078, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_qNode", (char*) 0x00000054, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_regs", (char*) 0x000001d8, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_rtpId", (char*) 0x00000098, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_safeCnt", (char*) 0x000000b0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_safetyQHead", (char*) 0x000000b4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_status", (char*) 0x00000074, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_swapInMask", (char*) 0x000000ac, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_swapOutMask", (char*) 0x000000ae, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_taskTicks", (char*) 0x000000e4, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_timeout", (char*) 0x0000004c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WIND_TCB_windSmpInfo", (char*) 0x00000184, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WORK_Q_IX_bitmask", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WORK_Q_IX_read", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WORK_Q_IX_write", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_HASH_NODE_eventSize", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_HASH_NODE_key", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_HASH_NODE_next", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_HASH_NODE_pEvent", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_HASH_TBL_size", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_HASH_TBL_tbl", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_LIST_hdr_magic", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_LIST_hdr_memPart", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_LIST_hdr_numLogs", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_LIST_hdr_wvLogListHead", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_configEventSize", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_memPart", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_node", (char*) 0x00000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_pConfigEvent", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_pEvtBuffer", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_WV_LOG_pHashTbl", (char*) 0x00000014, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_hiddenModule", (char*) 0x00000010, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadAllSymbols", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadCommonHeap", (char*) 0x00000800, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadCommonMatchAll", (char*) 0x00000400, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadCommonMatchNone", (char*) 0x00000100, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadCommonMatchUser", (char*) 0x00000200, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadCplusXtorAuto", (char*) 0x00001000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadCplusXtorManual", (char*) 0x00002000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadForce", (char*) 0x00000080, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadFullyLinked", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadGlobalSymbols", (char*) 0x00000008, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadLocalSymbols", (char*) 0x00000004, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadNoDownload", (char*) 0x00000040, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadNoSymbols", (char*) 0x00000002, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadWeakMatchAll", (char*) 0x00020000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_loadWeakMatchNone", (char*) 0x00010000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_FD_ENTRY", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_MSG_NODE", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_MSG_Q", (char*) 0x000000b0, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_SEMAPHORE", (char*) 0x00000070, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_SEM_RW_EXT", (char*) 0x00000018, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_SEM_RW_LIST_ENTRY", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_WDOG", (char*) 0x00000060, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_sizeof_WIND_OBJ", (char*) 0x00000044, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_syscallEntryBaseOffset", (char*) 0x0000000c, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_unloadCplusXtorAuto", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_unloadCplusXtorManual", (char*) 0x00000040, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_unloadForce", (char*) 0x00000002, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vx_offset_vfpNumSgpr", (char*) 0x00000020, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "_vxb_auxClkConnectRtn", (char*) &_vxb_auxClkConnectRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_auxClkDisableRtn", (char*) &_vxb_auxClkDisableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_auxClkEnableRtn", (char*) &_vxb_auxClkEnableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_auxClkRateGetRtn", (char*) &_vxb_auxClkRateGetRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_auxClkRateSetRtn", (char*) &_vxb_auxClkRateSetRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_clkConnectRtn", (char*) &_vxb_clkConnectRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_clkDisableRtn", (char*) &_vxb_clkDisableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_clkEnableRtn", (char*) &_vxb_clkEnableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_clkRateGetRtn", (char*) &_vxb_clkRateGetRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_clkRateSetRtn", (char*) &_vxb_clkRateSetRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_delayRtn", (char*) &_vxb_delayRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_msDelayRtn", (char*) &_vxb_msDelayRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_timestampConnectRtn", (char*) &_vxb_timestampConnectRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_timestampDisableRtn", (char*) &_vxb_timestampDisableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_timestampEnableRtn", (char*) &_vxb_timestampEnableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_timestampFreqRtn", (char*) &_vxb_timestampFreqRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_timestampLockRtn", (char*) &_vxb_timestampLockRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_timestampPeriodRtn", (char*) &_vxb_timestampPeriodRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_timestampRtn", (char*) &_vxb_timestampRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxb_usDelayRtn", (char*) &_vxb_usDelayRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxmux_pNullPoolFuncTbl", (char*) &_vxmux_pNullPoolFuncTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "_vxworks_asctime_r", (char*) _vxworks_asctime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_vxworks_ctime_r", (char*) _vxworks_ctime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_vxworks_gmtime_r", (char*) _vxworks_gmtime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_vxworks_localtime_r", (char*) _vxworks_localtime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_waitpidSc", (char*) _waitpidSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_writeSc", (char*) _writeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_zbufCreate_nolock", (char*) _zbufCreate_nolock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_zbufDeleteEmpty", (char*) _zbufDeleteEmpty, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_zbufSetSeg", (char*) _zbufSetSeg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_zbuf_getseg_nolock", (char*) _zbuf_getseg_nolock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "_zbuf_getsegptr_nolock", (char*) _zbuf_getsegptr_nolock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "abort", (char*) abort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "abs", (char*) abs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "absSymbols_Bounds", (char*) absSymbols_Bounds, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "absSymbols_Common", (char*) absSymbols_Common, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "accept", (char*) accept, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "acceptSc", (char*) acceptSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "access", (char*) access, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "accessSc", (char*) accessSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "acos", (char*) acos, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceInfoGet", (char*) adrSpaceInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceIsOverlapped", (char*) adrSpaceIsOverlapped, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceLibInit", (char*) adrSpaceLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceModel", (char*) &adrSpaceModel, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "adrSpaceOptimizedSizeGet", (char*) adrSpaceOptimizedSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpacePageAlloc", (char*) adrSpacePageAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpacePageFree", (char*) adrSpacePageFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpacePageMap", (char*) adrSpacePageMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpacePageUnmap", (char*) adrSpacePageUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceRAMAddToPool", (char*) adrSpaceRAMAddToPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceRAMReserve", (char*) adrSpaceRAMReserve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceRgnPreAlloc", (char*) adrSpaceRgnPreAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceShellCmdInit", (char*) adrSpaceShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceShow", (char*) adrSpaceShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceShowInit", (char*) adrSpaceShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "adrSpaceVirtReserve", (char*) adrSpaceVirtReserve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "aimCacheInit", (char*) aimCacheInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "aimCacheSysctlInit", (char*) aimCacheSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "aimMmuBaseLibInit", (char*) aimMmuBaseLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "aimMmuSysctlInit", (char*) aimMmuSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "allocChunkEndGuardSize", (char*) &allocChunkEndGuardSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "applLoggerInit", (char*) applLoggerInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "applLoggerStop", (char*) applLoggerStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "applUtilInstInit", (char*) applUtilInstInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "applUtilLogSem", (char*) &applUtilLogSem, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "archPwrDown", (char*) archPwrDown, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "archSysctlInit", (char*) archSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "armGetNpc", (char*) armGetNpc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "armGicCpu", (char*) &armGicCpu, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "armGicInputs", (char*) &armGicInputs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "armInitExceptionModes", (char*) armInitExceptionModes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "armInstrChangesPc", (char*) armInstrChangesPc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "asMemDescNumEnt", (char*) &asMemDescNumEnt, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "asctime", (char*) asctime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "asctime_r", (char*) asctime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "asin", (char*) asin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "assertlist", (char*) &assertlist, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "atan", (char*) atan, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atan2", (char*) atan2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atexit", (char*) atexit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atof", (char*) atof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atoi", (char*) atoi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atol", (char*) atol, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Add", (char*) atomic32Add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32And", (char*) atomic32And, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Cas", (char*) atomic32Cas, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Clear", (char*) atomic32Clear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Dec", (char*) atomic32Dec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Get", (char*) atomic32Get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Inc", (char*) atomic32Inc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Nand", (char*) atomic32Nand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Or", (char*) atomic32Or, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Set", (char*) atomic32Set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Sub", (char*) atomic32Sub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "atomic32Xor", (char*) atomic32Xor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "attrib", (char*) attrib, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "attribDisplay", (char*) attribDisplay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "attribDisplayFile", (char*) attribDisplayFile, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "autoNegForce", (char*) &autoNegForce, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "auxClkDevUnitNo", (char*) &auxClkDevUnitNo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "auxClkTimerNo", (char*) &auxClkTimerNo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "avlDelete", (char*) avlDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlInsert", (char*) avlInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlInsertInform", (char*) avlInsertInform, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlMaximumGet", (char*) avlMaximumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlMinimumGet", (char*) avlMinimumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlPredecessorGet", (char*) avlPredecessorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlRemoveInsert", (char*) avlRemoveInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlSearch", (char*) avlSearch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlSuccessorGet", (char*) avlSuccessorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlTreeWalk", (char*) avlTreeWalk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintDelete", (char*) avlUintDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintInsert", (char*) avlUintInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintMaximumGet", (char*) avlUintMaximumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintMinimumGet", (char*) avlUintMinimumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintPredecessorGet", (char*) avlUintPredecessorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintSearch", (char*) avlUintSearch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintSuccessorGet", (char*) avlUintSuccessorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "avlUintTreeWalk", (char*) avlUintTreeWalk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "b", (char*) b, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bcmp", (char*) bcmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bcopy", (char*) bcopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bcopyBytes", (char*) bcopyBytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bcopyLongs", (char*) bcopyLongs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bcopyNeon", (char*) bcopyNeon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bcopyWords", (char*) bcopyWords, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bd", (char*) bd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bdall", (char*) bdall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bfill", (char*) bfill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bfillBytes", (char*) bfillBytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bh", (char*) bh, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bi", (char*) bi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "binaryOptionsTsfsDrv", (char*) &binaryOptionsTsfsDrv, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "bind", (char*) bind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bindSc", (char*) bindSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bindresvport", (char*) bindresvport, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bindresvportCommon", (char*) bindresvportCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bindresvport_af", (char*) bindresvport_af, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "binvert", (char*) binvert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bioInit", (char*) bioInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bio_alloc", (char*) bio_alloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bio_done", (char*) bio_done, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bio_free", (char*) bio_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bitFirstGet", (char*) bitFirstGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootBpAnchorExtract", (char*) bootBpAnchorExtract, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootChange", (char*) bootChange, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootLeaseExtract", (char*) bootLeaseExtract, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootNetmaskExtract", (char*) bootNetmaskExtract, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootParamsErrorPrint", (char*) bootParamsErrorPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootParamsPrompt", (char*) bootParamsPrompt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootParamsShow", (char*) bootParamsShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootScanNum", (char*) bootScanNum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootStringToStruct", (char*) bootStringToStruct, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootStringToStructAdd", (char*) bootStringToStructAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bootStructToString", (char*) bootStructToString, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bsearch", (char*) bsearch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bspSerialChanGet", (char*) bspSerialChanGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "bsp_node", (char*) &bsp_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "bswap", (char*) bswap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "busCtlrDevCtlr_desc", (char*) &busCtlrDevCtlr_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "bzero", (char*) bzero, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "c", (char*) c, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAddrAlign", (char*) &cacheAddrAlign, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "cacheAimArch6DClear", (char*) cacheAimArch6DClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch6DFlush", (char*) cacheAimArch6DFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch6DInvalidate", (char*) cacheAimArch6DInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch6IClearDisable", (char*) cacheAimArch6IClearDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch6IInvalidate", (char*) cacheAimArch6IInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch6IInvalidateAll", (char*) cacheAimArch6IInvalidateAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch6PipeFlush", (char*) cacheAimArch6PipeFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DClearAll", (char*) cacheAimArch7DClearAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DDisable", (char*) cacheAimArch7DDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DEnable", (char*) cacheAimArch7DEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DFlushAll", (char*) cacheAimArch7DFlushAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DFlushPoU", (char*) cacheAimArch7DFlushPoU, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DInvalidateAll", (char*) cacheAimArch7DInvalidateAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DIsOn", (char*) cacheAimArch7DIsOn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DProbe", (char*) cacheAimArch7DProbe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DmaFree", (char*) cacheAimArch7DmaFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7DmaMalloc", (char*) cacheAimArch7DmaMalloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7IDisable", (char*) cacheAimArch7IDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7IEnable", (char*) cacheAimArch7IEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7IIsOn", (char*) cacheAimArch7IIsOn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7IProbe", (char*) cacheAimArch7IProbe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7Identify", (char*) cacheAimArch7Identify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7MmuIsOn", (char*) cacheAimArch7MmuIsOn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7SizeInfoGet", (char*) cacheAimArch7SizeInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimArch7TextUpdate", (char*) cacheAimArch7TextUpdate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimCortexA9LibInit", (char*) cacheAimCortexA9LibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheAimCortexA9PhysToVirt", (char*) &cacheAimCortexA9PhysToVirt, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "cacheAimCortexA9VirtToPhys", (char*) &cacheAimCortexA9VirtToPhys, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "cacheAimInfo", (char*) &cacheAimInfo, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "cacheArchAlignSize", (char*) &cacheArchAlignSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheArchDClear", (char*) cacheArchDClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchDClearAll", (char*) cacheArchDClearAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchDFlush", (char*) cacheArchDFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchDFlushAll", (char*) cacheArchDFlushAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchDInvalidate", (char*) cacheArchDInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchDInvalidateAll", (char*) cacheArchDInvalidateAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchIInvalidate", (char*) cacheArchIInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchIInvalidateAll", (char*) cacheArchIInvalidateAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchIntLock", (char*) cacheArchIntLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchIntMask", (char*) &cacheArchIntMask, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheArchL2CacheDisable", (char*) cacheArchL2CacheDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchL2CacheEnable", (char*) cacheArchL2CacheEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchL2CacheIsOn", (char*) cacheArchL2CacheIsOn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchLocSizeGet", (char*) cacheArchLocSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchLouSizeGet", (char*) cacheArchLouSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchPipeFlush", (char*) cacheArchPipeFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheArchState", (char*) &cacheArchState, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheClear", (char*) cacheClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheCortexA9DClearDisable", (char*) cacheCortexA9DClearDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheCortexA9LibInstall", (char*) cacheCortexA9LibInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDataEnabled", (char*) &cacheDataEnabled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheDataMode", (char*) &cacheDataMode, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheDisable", (char*) cacheDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDma32Free", (char*) cacheDma32Free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDma32Malloc", (char*) cacheDma32Malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDmaFree", (char*) cacheDmaFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDmaFreeRtn", (char*) &cacheDmaFreeRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheDmaFuncs", (char*) &cacheDmaFuncs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheDmaMalloc", (char*) cacheDmaMalloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDmaMallocRtn", (char*) &cacheDmaMallocRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheDrvFlush", (char*) cacheDrvFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDrvInvalidate", (char*) cacheDrvInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDrvPhysToVirt", (char*) cacheDrvPhysToVirt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheDrvVirtToPhys", (char*) cacheDrvVirtToPhys, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheEnable", (char*) cacheEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheFlush", (char*) cacheFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheForeignClear", (char*) cacheForeignClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheForeignFlush", (char*) cacheForeignFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheForeignInvalidate", (char*) cacheForeignInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheFuncsSet", (char*) cacheFuncsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheInvalidate", (char*) cacheInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheLib", (char*) &cacheLib, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheLibInit", (char*) cacheLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheLineMask", (char*) &cacheLineMask, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "cacheLineSize", (char*) &cacheLineSize, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "cacheLock", (char*) cacheLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheMmuAvailable", (char*) &cacheMmuAvailable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cacheNullFuncs", (char*) &cacheNullFuncs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cachePipeFlush", (char*) cachePipeFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheTextLocalUpdate", (char*) cacheTextLocalUpdate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheTextUpdate", (char*) cacheTextUpdate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheUnlock", (char*) cacheUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cacheUserFuncs", (char*) &cacheUserFuncs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cache_node", (char*) &cache_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cafeTmrRegister", (char*) cafeTmrRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "calloc", (char*) calloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "catInfo", (char*) &catInfo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cd", (char*) cd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ceil", (char*) ceil, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cfree", (char*) cfree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cfront_decode_identifier", (char*) cfront_decode_identifier, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "changeFpReg", (char*) changeFpReg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "changeLogLevel", (char*) changeLogLevel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "changeReg", (char*) changeReg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "chdir", (char*) chdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "chdirSc", (char*) chdirSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "checkStack", (char*) checkStack, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "checksum", (char*) checksum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "chkdsk", (char*) chkdsk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "chmod", (char*) chmod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "chmodSc", (char*) chmodSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "classCreateConnect", (char*) classCreateConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "classDestroyConnect", (char*) classDestroyConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "classIdTable", (char*) &classIdTable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "classInit", (char*) classInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "classLibInit", (char*) classLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "classListLibInit", (char*) classListLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "classMemPartIdSet", (char*) classMemPartIdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "classShowConnect", (char*) classShowConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clearerr", (char*) clearerr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock", (char*) clock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clockCtlSc", (char*) clockCtlSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clockLibInit", (char*) clockLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clockScLibInit", (char*) clockScLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock_getres", (char*) clock_getres, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock_getres_node", (char*) &clock_getres_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "clock_gettime", (char*) clock_gettime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock_gettime_wd", (char*) clock_gettime_wd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock_nanosleep", (char*) clock_nanosleep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock_setres", (char*) clock_setres, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock_settime", (char*) clock_settime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "clock_time_node", (char*) &clock_time_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "close", (char*) close, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "closedir", (char*) closedir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "commit", (char*) commit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "completionPathComplete", (char*) completionPathComplete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "completionPathListGet", (char*) completionPathListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "completionPathShow", (char*) completionPathShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "completionSymComplete", (char*) completionSymComplete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "completionSymListGet", (char*) completionSymListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "completionSymShow", (char*) completionSymShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "connect", (char*) connect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "connectSc", (char*) connectSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "connectWithTimeout", (char*) connectWithTimeout, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "consoleFd", (char*) &consoleFd, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "coprocCtxReplicate", (char*) coprocCtxReplicate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocCtxStorageSizeGet", (char*) coprocCtxStorageSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocDescriptorsInit", (char*) coprocDescriptorsInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocDisable", (char*) coprocDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocEnable", (char*) coprocEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocLibInit", (char*) coprocLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocMRegs", (char*) coprocMRegs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocRegListShow", (char*) coprocRegListShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocSave", (char*) coprocSave, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocShow", (char*) coprocShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocShowInit", (char*) coprocShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocShowOnDebug", (char*) coprocShowOnDebug, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocTaskCreateHook", (char*) coprocTaskCreateHook, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocTaskDeleteHook", (char*) coprocTaskDeleteHook, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocTaskRegsGet", (char*) coprocTaskRegsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocTaskRegsSet", (char*) coprocTaskRegsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocTaskRegsShow", (char*) coprocTaskRegsShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocTaskSwapHook", (char*) coprocTaskSwapHook, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "coprocsDiscover", (char*) coprocsDiscover, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "copy", (char*) copy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "copyStreams", (char*) copyStreams, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "copysign", (char*) copysign, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cos", (char*) cos, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cosh", (char*) cosh, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cp", (char*) cp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusCallCtors", (char*) cplusCallCtors, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusCallDtors", (char*) cplusCallDtors, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusCtors", (char*) cplusCtors, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusCtorsLink", (char*) cplusCtorsLink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDemangle", (char*) cplusDemangle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDemangle2", (char*) cplusDemangle2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDemangle2Func", (char*) &cplusDemangle2Func, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cplusDemangleFunc", (char*) &cplusDemangleFunc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cplusDemangleToBuffer", (char*) cplusDemangleToBuffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDemangleToBufferFunc", (char*) &cplusDemangleToBufferFunc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cplusDemanglerInit", (char*) cplusDemanglerInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDemanglerMode", (char*) &cplusDemanglerMode, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cplusDemanglerSet", (char*) cplusDemanglerSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDemanglerStyle", (char*) &cplusDemanglerStyle, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "cplusDemanglerStyleInit", (char*) cplusDemanglerStyleInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDemanglerStyleSet", (char*) cplusDemanglerStyleSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDtors", (char*) cplusDtors, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusDtorsLink", (char*) cplusDtorsLink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusExtractDebug", (char*) &cplusExtractDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cplusLoadCtorsCall", (char*) cplusLoadCtorsCall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusLoadFixup", (char*) cplusLoadFixup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusMangledSymCheck", (char*) cplusMangledSymCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusMangledSymGet", (char*) cplusMangledSymGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusMatchMangled", (char*) cplusMatchMangled, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusMatchMangledListGet", (char*) cplusMatchMangledListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusUnloadFixup", (char*) cplusUnloadFixup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusUserAsk", (char*) cplusUserAsk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusXtorGet", (char*) cplusXtorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusXtorSet", (char*) cplusXtorSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cplusXtorStrategy", (char*) &cplusXtorStrategy, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cpsr", (char*) cpsr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "cpu_node", (char*) &cpu_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "creat", (char*) creat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "creationDate", (char*) &creationDate, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "cret", (char*) cret, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ctime", (char*) ctime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ctime_r", (char*) ctime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "d", (char*) d, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorCreate", (char*) dataCollectorCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorDelete", (char*) dataCollectorDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorEach", (char*) dataCollectorEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorFirstGet", (char*) dataCollectorFirstGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorLibInit", (char*) dataCollectorLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorNextGet", (char*) dataCollectorNextGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorRegister", (char*) dataCollectorRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorStateSet", (char*) dataCollectorStateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dataCollectorTrigAnyCnt", (char*) &dataCollectorTrigAnyCnt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "dataCollectorUnregister", (char*) dataCollectorUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgBpEpCoreRtn", (char*) dbgBpEpCoreRtn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgBpListPrint", (char*) dbgBpListPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgCallPrint", (char*) dbgCallPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgDisassemble", (char*) dbgDisassemble, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgDynPrintfCommonRtn", (char*) dbgDynPrintfCommonRtn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgHelp", (char*) dbgHelp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgInit", (char*) dbgInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgPrintDsp", (char*) &dbgPrintDsp, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "dbgPrintFpp", (char*) &dbgPrintFpp, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "dbgPrintSimd", (char*) &dbgPrintSimd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "dbgShellCmdInit", (char*) dbgShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgStackTrace", (char*) dbgStackTrace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dbgTaskTraceCoreRtn", (char*) dbgTaskTraceCoreRtn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "decode_identifier", (char*) decode_identifier, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "decode_identifier_ex", (char*) decode_identifier_ex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "decode_identifier_styled", (char*) decode_identifier_styled, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "defaultDrv", (char*) &defaultDrv, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "demangle", (char*) demangle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "demangleResultFree", (char*) demangleResultFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "demangleToBuffer", (char*) demangleToBuffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "demangleToBufferEx", (char*) demangleToBufferEx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "demangleToBufferExDebug", (char*) &demangleToBufferExDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "demanglerNameFromStyle", (char*) demanglerNameFromStyle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "demanglerStyleFromName", (char*) demanglerStyleFromName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devAttach", (char*) devAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devDetach", (char*) devDetach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devGetByName", (char*) devGetByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devInit", (char*) devInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devMap", (char*) devMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devMapUnsafe", (char*) devMapUnsafe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devName", (char*) devName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devResourceGet", (char*) devResourceGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devResourceIntrGet", (char*) devResourceIntrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devUnmap", (char*) devUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devUnmapUnsafe", (char*) devUnmapUnsafe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "devs", (char*) devs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "difftime", (char*) difftime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dirList", (char*) dirList, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "diskFormat", (char*) diskFormat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "diskInit", (char*) diskInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "div", (char*) div, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "div32", (char*) div32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "div_r", (char*) div_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllAdd", (char*) dllAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllCount", (char*) dllCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllEach", (char*) dllEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllGet", (char*) dllGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllInit", (char*) dllInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllInsert", (char*) dllInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllRemove", (char*) dllRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dllTerminate", (char*) dllTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dosfsDiskFormat", (char*) dosfsDiskFormat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dprintf", (char*) dprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dprintfVerboseLvl", (char*) &dprintfVerboseLvl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "drvTable", (char*) &drvTable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "dsmInst", (char*) dsmInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dsmNbytes", (char*) dsmNbytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dummyErrno", (char*) &dummyErrno, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "dup", (char*) dup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dup2", (char*) dup2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dup2Sc", (char*) dup2Sc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "dupSc", (char*) dupSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "e", (char*) e, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrBootCountGet", (char*) edrBootCountGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrBootShow", (char*) edrBootShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrClear", (char*) edrClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrDebug", (char*) &edrDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrErrLogAttach", (char*) edrErrLogAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogClear", (char*) edrErrLogClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogCreate", (char*) edrErrLogCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogHeaderProtect", (char*) edrErrLogHeaderProtect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogHeaderUnprotect", (char*) edrErrLogHeaderUnprotect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogIterCreate", (char*) edrErrLogIterCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogIterNext", (char*) edrErrLogIterNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogMaxNodeCount", (char*) edrErrLogMaxNodeCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogNodeAlloc", (char*) edrErrLogNodeAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogNodeCommit", (char*) edrErrLogNodeCommit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogNodeCount", (char*) edrErrLogNodeCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogNodePosition", (char*) edrErrLogNodePosition, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogNodeProtect", (char*) edrErrLogNodeProtect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogNodeUnprotect", (char*) edrErrLogNodeUnprotect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrLogValidate", (char*) edrErrLogValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInject", (char*) edrErrorInject, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectDsmHook", (char*) &edrErrorInjectDsmHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrErrorInjectHookAdd", (char*) edrErrorInjectHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectHookDelete", (char*) edrErrorInjectHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectHookTable", (char*) &edrErrorInjectHookTable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrErrorInjectPrePostHookAdd", (char*) edrErrorInjectPrePostHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectPrePostHookDelete", (char*) edrErrorInjectPrePostHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectPrePostHookTable", (char*) &edrErrorInjectPrePostHookTable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrErrorInjectStub", (char*) edrErrorInjectStub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectTextHookAdd", (char*) edrErrorInjectTextHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectTextHookDelete", (char*) edrErrorInjectTextHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorInjectTextHookTable", (char*) &edrErrorInjectTextHookTable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrErrorLogClear", (char*) edrErrorLogClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorPolicyHookRemove", (char*) edrErrorPolicyHookRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorRecordCount", (char*) edrErrorRecordCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrErrorRecordDecode", (char*) edrErrorRecordDecode, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrFatalShow", (char*) edrFatalShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrFlagsGet", (char*) edrFlagsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrFlagsGetSc", (char*) edrFlagsGetSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrHelp", (char*) edrHelp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrHookShow", (char*) edrHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrInfoShow", (char*) edrInfoShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrInitFatalPolicyHandler", (char*) edrInitFatalPolicyHandler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrInitShow", (char*) edrInitShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrInitStatus", (char*) &edrInitStatus, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrInjectHookShow", (char*) edrInjectHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrInjectPrePostHookShow", (char*) edrInjectPrePostHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrInjectTextHookShow", (char*) edrInjectTextHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrIntShow", (char*) edrIntShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrInterruptFatalPolicyHandler", (char*) edrInterruptFatalPolicyHandler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrIsDebugMode", (char*) edrIsDebugMode, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrKernelFatalPolicyHandler", (char*) edrKernelFatalPolicyHandler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrKernelShow", (char*) edrKernelShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrLibInit", (char*) edrLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrLibInstalled", (char*) &edrLibInstalled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrLogBaseGet", (char*) edrLogBaseGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrLogSizeGet", (char*) edrLogSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrMissedErrors", (char*) &edrMissedErrors, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrNoMmu", (char*) &edrNoMmu, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "edrPmArena", (char*) edrPmArena, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrPmRegion", (char*) edrPmRegion, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrPolicyHandlerHookAdd", (char*) edrPolicyHandlerHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrPolicyHandlerHookGet", (char*) edrPolicyHandlerHookGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrRebootShow", (char*) edrRebootShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrRootTaskInfo", (char*) &edrRootTaskInfo, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "edrRtpFatalPolicyHandler", (char*) edrRtpFatalPolicyHandler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrRtpShow", (char*) edrRtpShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrScInit", (char*) edrScInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrShellCmdInit", (char*) edrShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrShow", (char*) edrShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrShowInit", (char*) edrShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrStatusMsg", (char*) edrStatusMsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrStubInit", (char*) edrStubInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrSystemDebugModeGet", (char*) edrSystemDebugModeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrSystemDebugModeInit", (char*) edrSystemDebugModeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrSystemDebugModeSet", (char*) edrSystemDebugModeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrUserShow", (char*) edrUserShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "edrUsesDemangler", (char*) &edrUsesDemangler, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "elfArchInitHook", (char*) &elfArchInitHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "elfArchMdlLoadHook", (char*) &elfArchMdlLoadHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "elfArchReloc", (char*) elfArchReloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "elfArchSymProcessHook", (char*) &elfArchSymProcessHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "elfArchVerify", (char*) elfArchVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "emacsLedLibInit", (char*) emacsLedLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "emulate_gnu_abi_bugs", (char*) &emulate_gnu_abi_bugs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "end8023AddressForm", (char*) end8023AddressForm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endDevName", (char*) endDevName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endDevTbl", (char*) &endDevTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "endEtherAddressForm", (char*) endEtherAddressForm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endEtherCrc32BeGet", (char*) endEtherCrc32BeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endEtherCrc32LeGet", (char*) endEtherCrc32LeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endEtherHdrInit", (char*) endEtherHdrInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endEtherPacketAddrGet", (char*) endEtherPacketAddrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endEtherPacketDataGet", (char*) endEtherPacketDataGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endFindByName", (char*) endFindByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endFirstUnitFind", (char*) endFirstUnitFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endFlagsClr", (char*) endFlagsClr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endFlagsGet", (char*) endFlagsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endFlagsSet", (char*) endFlagsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endLibInit", (char*) endLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endList", (char*) &endList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "endM2Free", (char*) endM2Free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endM2Init", (char*) endM2Init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endM2Ioctl", (char*) endM2Ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endM2Packet", (char*) &endM2Packet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "endMibIfInit", (char*) endMibIfInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endMultiLstCnt", (char*) endMultiLstCnt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endMultiLstFirst", (char*) endMultiLstFirst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endMultiLstNext", (char*) endMultiLstNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endObjFlagSet", (char*) endObjFlagSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endObjInit", (char*) endObjInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endObjectUnload", (char*) endObjectUnload, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endPollStatsInit", (char*) endPollStatsInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endPoolClSize", (char*) &endPoolClSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "endPoolCreate", (char*) endPoolCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endPoolDestroy", (char*) endPoolDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endPoolJumboClSize", (char*) &endPoolJumboClSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "endPoolJumboCreate", (char*) endPoolJumboCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endRcvRtnCall", (char*) endRcvRtnCall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endTxSemGive", (char*) endTxSemGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "endTxSemTake", (char*) endTxSemTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "envGet", (char*) envGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "envLibInit", (char*) envLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "envLibSemId", (char*) &envLibSemId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "envPrivateCreate", (char*) envPrivateCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "envPrivateDestroy", (char*) envPrivateDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "envShow", (char*) envShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfCatDefSem", (char*) &erfCatDefSem, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfCatEventQueues", (char*) &erfCatEventQueues, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfCategoriesAvailable", (char*) erfCategoriesAvailable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfCategoryAllocate", (char*) erfCategoryAllocate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfCategoryQueueCreate", (char*) erfCategoryQueueCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfDbCatSem", (char*) &erfDbCatSem, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfDefaultEventQueue", (char*) &erfDefaultEventQueue, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfEventQueueSize", (char*) &erfEventQueueSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "erfEventRaise", (char*) erfEventRaise, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfEventTaskOptions", (char*) &erfEventTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "erfEventTaskPriority", (char*) &erfEventTaskPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "erfEventTaskStackSize", (char*) &erfEventTaskStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "erfHandlerDb", (char*) &erfHandlerDb, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfHandlerRegister", (char*) erfHandlerRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfHandlerUnregister", (char*) erfHandlerUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfLibInit", (char*) erfLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfLibInitialized", (char*) &erfLibInitialized, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "erfMaxNumCat", (char*) &erfMaxNumCat, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfMaxNumType", (char*) &erfMaxNumType, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfMaxNumUserCat", (char*) &erfMaxNumUserCat, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfMaxNumUserType", (char*) &erfMaxNumUserType, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfNumUserCatDef", (char*) &erfNumUserCatDef, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfNumUserTypeDef", (char*) &erfNumUserTypeDef, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "erfTypeAllocate", (char*) erfTypeAllocate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "erfTypesAvailable", (char*) erfTypesAvailable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "errno", (char*) &errno, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "errnoGet", (char*) errnoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "errnoOfTaskGet", (char*) errnoOfTaskGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "errnoOfTaskSet", (char*) errnoOfTaskSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "errnoSet", (char*) errnoSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "etherMultiAdd", (char*) etherMultiAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "etherMultiDel", (char*) etherMultiDel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "etherMultiGet", (char*) etherMultiGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "etherbroadcastaddr", (char*) &etherbroadcastaddr, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "eventClear", (char*) eventClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventCtlSc", (char*) eventCtlSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventInit", (char*) eventInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventLibInit", (char*) eventLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventPointLibInit", (char*) eventPointLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventPointStubLibInit", (char*) eventPointStubLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventPointSwHandle", (char*) eventPointSwHandle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventPointSwStubConnect", (char*) eventPointSwStubConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventReceive", (char*) eventReceive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventReceiveSc", (char*) eventReceiveSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventRsrcSend", (char*) eventRsrcSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventRsrcShow", (char*) eventRsrcShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventSend", (char*) eventSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventSendSc", (char*) eventSendSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventStart", (char*) eventStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventTaskShow", (char*) eventTaskShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "eventTerminate", (char*) eventTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtAction", (char*) &evtAction, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "evtBufferBind", (char*) evtBufferBind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtBufferId", (char*) &evtBufferId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "evtEdrErrorInject", (char*) evtEdrErrorInject, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtLogFuncBind", (char*) evtLogFuncBind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtLogLibInit", (char*) evtLogLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtLogPayload", (char*) evtLogPayload, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtLogPayloadString", (char*) evtLogPayloadString, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtLogPoint", (char*) evtLogPoint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtLogSyscall", (char*) evtLogSyscall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "evtObjLogFuncBind", (char*) evtObjLogFuncBind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excEnterDataAbort", (char*) excEnterDataAbort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excEnterPrefetchAbort", (char*) excEnterPrefetchAbort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excEnterSwi", (char*) excEnterSwi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excEnterUndef", (char*) excEnterUndef, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excExcContinue", (char*) excExcContinue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excExcHandle", (char*) excExcHandle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excExcepHook", (char*) &excExcepHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "excHookAdd", (char*) excHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excInit", (char*) excInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excIntConnect", (char*) excIntConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excIntHandle", (char*) excIntHandle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excJobAdd", (char*) excJobAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excOsmInit", (char*) excOsmInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excPtrTableOffsetSet", (char*) excPtrTableOffsetSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excShowInit", (char*) excShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVBARGet", (char*) excVBARGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVBARSet", (char*) excVBARSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVecBaseSet", (char*) excVecBaseSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVecGet", (char*) excVecGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVecInit", (char*) excVecInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVecSet", (char*) excVecSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVecUpdate", (char*) excVecUpdate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "excVmStateSet", (char*) excVmStateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "exit", (char*) exit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "exp", (char*) exp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "expm1", (char*) expm1, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fabs", (char*) fabs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fchmod", (char*) fchmod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fclose", (char*) fclose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fcntl", (char*) fcntl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fcntl_dup", (char*) fcntl_dup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fdClass", (char*) &fdClass, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "fdInvalidDrv", (char*) &fdInvalidDrv, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "fdatasync", (char*) fdatasync, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fdopen", (char*) fdopen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fdprintf", (char*) fdprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "feof", (char*) feof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ferror", (char*) ferror, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fflush", (char*) fflush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ffs32Lsb", (char*) ffs32Lsb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ffs32Msb", (char*) ffs32Msb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ffs64Lsb", (char*) ffs64Lsb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ffs64Msb", (char*) ffs64Msb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ffsLsb", (char*) ffsLsb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ffsMsb", (char*) ffsMsb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fgetc", (char*) fgetc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fgetpos", (char*) fgetpos, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fgets", (char*) fgets, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fieldSzIncludeSign", (char*) &fieldSzIncludeSign, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "fileUpPathDefaultPerm", (char*) &fileUpPathDefaultPerm, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "fileno", (char*) fileno, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioBaseLibInit", (char*) fioBaseLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioBufPrint", (char*) fioBufPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioBufPut", (char*) fioBufPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioFltInstall", (char*) fioFltInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioFormatV", (char*) fioFormatV, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioLibInit", (char*) fioLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioRdString", (char*) fioRdString, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioRead", (char*) fioRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioScanV", (char*) fioScanV, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fioSnBufPut", (char*) fioSnBufPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "floatInit", (char*) floatInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "floor", (char*) floor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fmod", (char*) fmod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fopen", (char*) fopen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fpArmModules", (char*) &fpArmModules, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "fpTypeGet", (char*) fpTypeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fpathconf", (char*) fpathconf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fpathconfSc", (char*) fpathconfSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppArchInit", (char*) fppArchInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppArchTaskCreateInit", (char*) fppArchTaskCreateInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppCtxShow", (char*) fppCtxShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppCtxToRegs", (char*) fppCtxToRegs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppProbe", (char*) fppProbe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppRegListShow", (char*) fppRegListShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppRegsToCtx", (char*) fppRegsToCtx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppRestore", (char*) fppRestore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fppSave", (char*) fppSave, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fprintf", (char*) fprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fputc", (char*) fputc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fputs", (char*) fputs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fread", (char*) fread, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "free", (char*) free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "freeifaddrs", (char*) freeifaddrs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "freopen", (char*) freopen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "frexp", (char*) frexp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsEventUtilLibInit", (char*) fsEventUtilLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsMonitorInit", (char*) fsMonitorInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsPathAddedEventRaise", (char*) fsPathAddedEventRaise, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsPathAddedEventSetup", (char*) fsPathAddedEventSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsWaitForPath", (char*) fsWaitForPath, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fscanf", (char*) fscanf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fseek", (char*) fseek, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsetpos", (char*) fsetpos, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmGetDriver", (char*) fsmGetDriver, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmGetVolume", (char*) fsmGetVolume, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmInitialized", (char*) &fsmInitialized, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "fsmNameInstall", (char*) fsmNameInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmNameMap", (char*) fsmNameMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmNameUninstall", (char*) fsmNameUninstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmProbeInstall", (char*) fsmProbeInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmProbeUninstall", (char*) fsmProbeUninstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmUnmountHookAdd", (char*) fsmUnmountHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmUnmountHookDelete", (char*) fsmUnmountHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsmUnmountHookRun", (char*) fsmUnmountHookRun, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fstat", (char*) fstat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fstatfs", (char*) fstatfs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fstatfs64", (char*) fstatfs64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "fsync", (char*) fsync, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftell", (char*) ftell, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpCommand", (char*) ftpCommand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpCommandEnhanced", (char*) ftpCommandEnhanced, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpDataConnGet", (char*) ftpDataConnGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpDataConnInit", (char*) ftpDataConnInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpDataConnInitPassiveMode", (char*) ftpDataConnInitPassiveMode, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpHookup", (char*) ftpHookup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpLibDebugOptionsSet", (char*) ftpLibDebugOptionsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpLibInit", (char*) ftpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpLogin", (char*) ftpLogin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpLs", (char*) ftpLs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpReplyGet", (char*) ftpReplyGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpReplyGetEnhanced", (char*) ftpReplyGetEnhanced, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpReplyTimeout", (char*) &ftpReplyTimeout, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ftpTransientConfigGet", (char*) ftpTransientConfigGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpTransientConfigSet", (char*) ftpTransientConfigSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpTransientFatalInstall", (char*) ftpTransientFatalInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftpVerbose", (char*) &ftpVerbose, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ftpXfer", (char*) ftpXfer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ftplDebug", (char*) &ftplDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ftplPasvModeDisable", (char*) &ftplPasvModeDisable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ftplTransientMaxRetryCount", (char*) &ftplTransientMaxRetryCount, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ftplTransientRetryInterval", (char*) &ftplTransientRetryInterval, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "funcXbdBlkCacheAttach", (char*) &funcXbdBlkCacheAttach, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "funcXbdBlkCacheDetach", (char*) &funcXbdBlkCacheDetach, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "funcXbdBlkCacheStrategy", (char*) &funcXbdBlkCacheStrategy, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "fwrite", (char*) fwrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "genPhyDevRegistration", (char*) &genPhyDevRegistration, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "genPhyRegister", (char*) genPhyRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getHiddenSectorsFromDPT", (char*) getHiddenSectorsFromDPT, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getSymNames", (char*) getSymNames, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getc", (char*) getc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getchar", (char*) getchar, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getcwd", (char*) getcwd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getenv", (char*) getenv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getenv_s", (char*) getenv_s, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gethostname", (char*) gethostname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getifaddrs", (char*) getifaddrs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getlhostbyaddr", (char*) getlhostbyaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getlhostbyname", (char*) getlhostbyname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getpeername", (char*) getpeername, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getpeernameSc", (char*) getpeernameSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getpid", (char*) getpid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getpidSc", (char*) getpidSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getppidSc", (char*) getppidSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getprlimitSc", (char*) getprlimitSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gets", (char*) gets, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getsockname", (char*) getsockname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getsocknameSc", (char*) getsocknameSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getsockopt", (char*) getsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getsockoptSc", (char*) getsockoptSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gettimeofday", (char*) gettimeofday, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getw", (char*) getw, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "getwd", (char*) getwd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "globalNoStackFill", (char*) &globalNoStackFill, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "globalRAMPgPoolId", (char*) &globalRAMPgPoolId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "gmtime", (char*) gmtime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gmtime_r", (char*) gmtime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gopherHookAdd", (char*) gopherHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gopherWriteChar", (char*) gopherWriteChar, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gopherWriteScalar", (char*) gopherWriteScalar, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptAdd", (char*) gptAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptCheckMap", (char*) gptCheckMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptCoreDebug", (char*) &gptCoreDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "gptCreate", (char*) gptCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptCreatePartDev", (char*) gptCreatePartDev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptDestroy", (char*) gptDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptExtParse", (char*) gptExtParse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptMapDebug", (char*) &gptMapDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "gptMapWrite", (char*) gptMapWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptMbrParse", (char*) gptMbrParse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptMigrate", (char*) gptMigrate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptParse", (char*) gptParse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptPartsGet", (char*) gptPartsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptRead", (char*) gptRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptRecover", (char*) gptRecover, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptRemove", (char*) gptRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptShowMap", (char*) gptShowMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptShowMbr", (char*) gptShowMbr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptShowPartHdr", (char*) gptShowPartHdr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "gptShowPartTable", (char*) gptShowPartTable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "h", (char*) h, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleContextGet", (char*) handleContextGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleContextGetBase", (char*) handleContextGetBase, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleContextSet", (char*) handleContextSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleInit", (char*) handleInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleShow", (char*) handleShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleShowConnect", (char*) handleShowConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleTerminate", (char*) handleTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleTypeGet", (char*) handleTypeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "handleVerify", (char*) handleVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hardWareInterFaceBusInit", (char*) hardWareInterFaceBusInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hardWareInterFaceInit", (char*) hardWareInterFaceInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashFuncIterScale", (char*) hashFuncIterScale, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashFuncModulo", (char*) hashFuncModulo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashFuncMultiply", (char*) hashFuncMultiply, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashKeyCmp", (char*) hashKeyCmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashKeyStrCmp", (char*) hashKeyStrCmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashLibInit", (char*) hashLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblCreate", (char*) hashTblCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblDelete", (char*) hashTblDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblDestroy", (char*) hashTblDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblEach", (char*) hashTblEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblFind", (char*) hashTblFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblInit", (char*) hashTblInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblPut", (char*) hashTblPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblRemove", (char*) hashTblRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hashTblTerminate", (char*) hashTblTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hcfDeviceGet", (char*) hcfDeviceGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hcfDeviceList", (char*) &hcfDeviceList, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "hcfDeviceNum", (char*) &hcfDeviceNum, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "hdprintf", (char*) hdprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "help", (char*) help, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "histLoad", (char*) histLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "histSave", (char*) histSave, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "histShellCmdInit", (char*) histShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookAddToHead", (char*) hookAddToHead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookAddToTail", (char*) hookAddToTail, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookDelete", (char*) hookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookFind", (char*) hookFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookShow", (char*) hookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookTblAddToHead", (char*) hookTblAddToHead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookTblAddToTail", (char*) hookTblAddToTail, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookTblDelete", (char*) hookTblDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookTblFind", (char*) hookTblFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookTblInit", (char*) hookTblInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookTblShow", (char*) hookTblShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hookTblUpdatersUnpend", (char*) hookTblUpdatersUnpend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostAdd", (char*) hostAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostDelete", (char*) hostDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostGetByAddr", (char*) hostGetByAddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostGetByName", (char*) hostGetByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostInitFlag", (char*) &hostInitFlag, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "hostList", (char*) &hostList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "hostListSem", (char*) &hostListSem, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "hostTblInit", (char*) hostTblInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostTblSearchByAddr", (char*) hostTblSearchByAddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostTblSearchByAddr2", (char*) hostTblSearchByAddr2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostTblSearchByName", (char*) hostTblSearchByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostTblSearchByName2", (char*) hostTblSearchByName2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostTblSetup", (char*) hostTblSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostentAlloc", (char*) hostentAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostentFree", (char*) hostentFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostlib_node", (char*) &hostlib_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "hostnameSetup", (char*) hostnameSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hostnameSysctlSetup", (char*) hostnameSysctlSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hrfsDiskFormat", (char*) hrfsDiskFormat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hrfsFmtRtn", (char*) &hrfsFmtRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "hwMemAlloc", (char*) hwMemAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hwMemFree", (char*) hwMemFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hwMemLibInit", (char*) hwMemLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hwMemPool", (char*) &hwMemPool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "hwMemPoolCreate", (char*) hwMemPoolCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "hw_node", (char*) &hw_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "i", (char*) i, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iam", (char*) iam, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "imxEpitDev0Resources", (char*) &imxEpitDev0Resources, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "imxEpitDev1Resources", (char*) &imxEpitDev1Resources, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "imxFec0Resources", (char*) &imxFec0Resources, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "imxSioDev1Resources", (char*) &imxSioDev1Resources, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "imxSioDev2Resources", (char*) &imxSioDev2Resources, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "in_netof", (char*) in_netof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "index", (char*) index, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_addr", (char*) inet_addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_aton", (char*) inet_aton, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_lnaof", (char*) inet_lnaof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_makeaddr", (char*) inet_makeaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_makeaddr_b", (char*) inet_makeaddr_b, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_netof", (char*) inet_netof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_netof_string", (char*) inet_netof_string, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_network", (char*) inet_network, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_ntoa", (char*) inet_ntoa, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_ntoa_b", (char*) inet_ntoa_b, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_ntop", (char*) inet_ntop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "inet_pton", (char*) inet_pton, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "initApplLogger", (char*) initApplLogger, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "instParamModify_desc", (char*) &instParamModify_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "intArchConnect", (char*) intArchConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intArchDisconnect", (char*) intArchDisconnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCnt", (char*) &intCnt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "intConnect", (char*) intConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intContext", (char*) intContext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCount", (char*) intCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCpuEnable", (char*) intCpuEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCpuLock", (char*) intCpuLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCpuMicroLock", (char*) intCpuMicroLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCpuMicroUnlock", (char*) intCpuMicroUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCpuUnlock", (char*) intCpuUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrChainISR", (char*) intCtlrChainISR, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrDevID", (char*) &intCtlrDevID, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "intCtlrHwConfGet", (char*) intCtlrHwConfGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrISRAdd", (char*) intCtlrISRAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrISRDisable", (char*) intCtlrISRDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrISREnable", (char*) intCtlrISREnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrISRRemove", (char*) intCtlrISRRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrPinFind", (char*) intCtlrPinFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrStrayISR", (char*) intCtlrStrayISR, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrTableArgGet", (char*) intCtlrTableArgGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrTableCreate", (char*) intCtlrTableCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrTableFlagsGet", (char*) intCtlrTableFlagsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrTableFlagsSet", (char*) intCtlrTableFlagsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrTableIsrGet", (char*) intCtlrTableIsrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intCtlrTableUserSet", (char*) intCtlrTableUserSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intDemuxErrorCount", (char*) &intDemuxErrorCount, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "intDisable", (char*) intDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intDisconnect", (char*) intDisconnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intEnable", (char*) intEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intEnt", (char*) intEnt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intExit", (char*) intExit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intIFLock", (char*) intIFLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intIFUnlock", (char*) intIFUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intIntRtnNonPreempt", (char*) intIntRtnNonPreempt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intIntRtnPreempt", (char*) intIntRtnPreempt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intLevelSet", (char*) intLevelSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intLibInit", (char*) intLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intLock", (char*) intLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intLockLevelGet", (char*) intLockLevelGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intLockLevelSet", (char*) intLockLevelSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intNestingLevel", (char*) &intNestingLevel, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "intRegsLock", (char*) intRegsLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intRegsUnlock", (char*) intRegsUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intRestrict", (char*) intRestrict, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intUninitVecSet", (char*) intUninitVecSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intUnlock", (char*) intUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intVBRSet", (char*) intVBRSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intVecBaseGet", (char*) intVecBaseGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intVecBaseSet", (char*) intVecBaseSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "intVecTableWriteProtect", (char*) intVecTableWriteProtect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioDefPath", (char*) &ioDefPath, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ioDefPathCat", (char*) ioDefPathCat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioDefPathGet", (char*) ioDefPathGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioDefPathSet", (char*) ioDefPathSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioDefPathValidate", (char*) ioDefPathValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioFullFileNameGet", (char*) ioFullFileNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioGlobalStdGet", (char*) ioGlobalStdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioGlobalStdSet", (char*) ioGlobalStdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioHelp", (char*) ioHelp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioMaxLinkLevels", (char*) &ioMaxLinkLevels, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ioPxCreateOrOpen", (char*) ioPxCreateOrOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioTaskStdGet", (char*) ioTaskStdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioTaskStdSet", (char*) ioTaskStdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ioctl", (char*) ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosClose", (char*) iosClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosCreate", (char*) iosCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDelete", (char*) iosDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevAdd", (char*) iosDevAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevCheck", (char*) iosDevCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevDelCallback", (char*) iosDevDelCallback, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevDelDrv", (char*) iosDevDelDrv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevDelete", (char*) iosDevDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevFind", (char*) iosDevFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevMatch", (char*) iosDevMatch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevReplace", (char*) iosDevReplace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevReplaceExt", (char*) iosDevReplaceExt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevResume", (char*) iosDevResume, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevShow", (char*) iosDevShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDevSuspend", (char*) iosDevSuspend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDrvInit", (char*) iosDrvInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDrvInstall", (char*) iosDrvInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDrvIoctl", (char*) iosDrvIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDrvIoctlMemValSet", (char*) iosDrvIoctlMemValSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDrvRemove", (char*) iosDrvRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDrvShow", (char*) iosDrvShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosDvList", (char*) &iosDvList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "iosFdDevFind", (char*) iosFdDevFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdDrvValue", (char*) iosFdDrvValue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdEntryGet", (char*) iosFdEntryGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdEntryIoctl", (char*) iosFdEntryIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdEntryPool", (char*) &iosFdEntryPool, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "iosFdEntryReturn", (char*) iosFdEntryReturn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdEntrySet", (char*) iosFdEntrySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdFree", (char*) iosFdFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdMap", (char*) iosFdMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdMaxFiles", (char*) iosFdMaxFiles, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdNew", (char*) iosFdNew, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdSet", (char*) iosFdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdShow", (char*) iosFdShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdTable", (char*) &iosFdTable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "iosFdTableLock", (char*) iosFdTableLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdTableUnlock", (char*) iosFdTableUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosFdValue", (char*) iosFdValue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosInit", (char*) iosInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosIoctl", (char*) iosIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosIoctlInternal", (char*) iosIoctlInternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosLibInitialized", (char*) &iosLibInitialized, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "iosLock", (char*) iosLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosMaxDrivers", (char*) &iosMaxDrivers, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "iosMaxFiles", (char*) &iosMaxFiles, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "iosNextDevGet", (char*) iosNextDevGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosOpen", (char*) iosOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosPathFdEntryIoctl", (char*) iosPathFdEntryIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosPathLibInit", (char*) iosPathLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosPse52Mode", (char*) &iosPse52Mode, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "iosPxLibInit", (char*) iosPxLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosPxLibInitialized", (char*) &iosPxLibInitialized, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "iosRead", (char*) iosRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRmvFdEntrySet", (char*) iosRmvFdEntrySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRmvLibInit", (char*) iosRmvLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpDefPathGet", (char*) iosRtpDefPathGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpDefPathSet", (char*) iosRtpDefPathSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpDevCloseOrInvalidate", (char*) iosRtpDevCloseOrInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdEntryMap", (char*) iosRtpFdEntryMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdInvalid", (char*) iosRtpFdInvalid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdReserve", (char*) iosRtpFdReserve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdReserveCntrl", (char*) iosRtpFdReserveCntrl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdSetup", (char*) iosRtpFdSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdShow", (char*) iosRtpFdShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdTableGet", (char*) iosRtpFdTableGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdTableSizeGet", (char*) iosRtpFdTableSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdTblEntryGet", (char*) iosRtpFdTblEntryGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpFdUnmap2", (char*) iosRtpFdUnmap2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpIoTableSizeGet", (char*) iosRtpIoTableSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpIoTableSizeSet", (char*) iosRtpIoTableSizeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpLibInit", (char*) iosRtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosRtpTableSizeSet", (char*) iosRtpTableSizeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosScLibInit", (char*) iosScLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosShowInit", (char*) iosShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosTaskCwdGet", (char*) iosTaskCwdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosTaskCwdSet", (char*) iosTaskCwdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosUnlock", (char*) iosUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iosWrite", (char*) iosWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iovecMemValidate", (char*) iovecMemValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ip_inaddr_any", (char*) &ip_inaddr_any, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipc_node", (char*) &ipc_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcomNetTask", (char*) ipcomNetTask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_accept", (char*) ipcom_accept, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_accept_usr", (char*) ipcom_accept_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_asctime_r_vxworks", (char*) ipcom_asctime_r_vxworks, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_add", (char*) ipcom_atomic_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_add_and_return", (char*) ipcom_atomic_add_and_return, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_dec", (char*) ipcom_atomic_dec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_get", (char*) ipcom_atomic_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_inc", (char*) ipcom_atomic_inc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_ptr_cas", (char*) ipcom_atomic_ptr_cas, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_set", (char*) ipcom_atomic_set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_sub", (char*) ipcom_atomic_sub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_atomic_sub_and_return", (char*) ipcom_atomic_sub_and_return, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_bind", (char*) ipcom_bind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_bind_usr", (char*) ipcom_bind_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_block_create", (char*) ipcom_block_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_block_delete", (char*) ipcom_block_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_block_post", (char*) ipcom_block_post, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_block_reader_create", (char*) ipcom_block_reader_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_block_wait", (char*) ipcom_block_wait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cache_line_size", (char*) ipcom_cache_line_size, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_calloc", (char*) ipcom_calloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_chdir", (char*) ipcom_chdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_clearenv", (char*) ipcom_clearenv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_closedir", (char*) ipcom_closedir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_closelog", (char*) ipcom_closelog, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cmd_if_caps_to_str", (char*) ipcom_cmd_if_caps_to_str, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cmd_if_flags_to_str", (char*) ipcom_cmd_if_flags_to_str, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cmd_key_to_str", (char*) ipcom_cmd_key_to_str, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cmd_sockaddr_to_str", (char*) ipcom_cmd_sockaddr_to_str, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cmd_str_to_key", (char*) ipcom_cmd_str_to_key, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cmd_str_to_key2", (char*) ipcom_cmd_str_to_key2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cmsg_nxthdr", (char*) ipcom_cmsg_nxthdr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_conf_max_link_hdr_size", (char*) &ipcom_conf_max_link_hdr_size, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipcom_conf_pkt_pool_buffer_alignment", (char*) &ipcom_conf_pkt_pool_buffer_alignment, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_conf_pkt_pool_buffer_extra_space", (char*) &ipcom_conf_pkt_pool_buffer_extra_space, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_configure", (char*) ipcom_configure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_configure_reserved_cpus", (char*) ipcom_configure_reserved_cpus, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_connect", (char*) ipcom_connect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_connect_usr", (char*) ipcom_connect_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cpu_is_online", (char*) ipcom_cpu_is_online, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cpu_reserved_alloc", (char*) ipcom_cpu_reserved_alloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_cpu_reserved_free", (char*) ipcom_cpu_reserved_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_create", (char*) ipcom_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ctime_r_vxworks", (char*) ipcom_ctime_r_vxworks, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_dns", (char*) &ipcom_dns, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipcom_dns_init_ok", (char*) &ipcom_dns_init_ok, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_drv_eth_create", (char*) ipcom_drv_eth_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_drv_eth_exit", (char*) ipcom_drv_eth_exit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_drv_eth_filter_add_mcast_addr", (char*) ipcom_drv_eth_filter_add_mcast_addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_drv_eth_filter_exit", (char*) ipcom_drv_eth_filter_exit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_drv_eth_filter_init", (char*) ipcom_drv_eth_filter_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_drv_eth_filter_remove_mcast_addr", (char*) ipcom_drv_eth_filter_remove_mcast_addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_drv_eth_init", (char*) ipcom_drv_eth_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_drv_eth_ip_attach", (char*) ipcom_drv_eth_ip_attach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_errno_get", (char*) ipcom_errno_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_errno_set", (char*) ipcom_errno_set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fclose", (char*) ipcom_fclose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fdopen", (char*) ipcom_fdopen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_feof", (char*) ipcom_feof, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ferror", (char*) ipcom_ferror, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fflush", (char*) ipcom_fflush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fileclose", (char*) ipcom_fileclose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fileno", (char*) ipcom_fileno, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fileopen", (char*) ipcom_fileopen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fileread", (char*) ipcom_fileread, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_filewrite", (char*) ipcom_filewrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fopen", (char*) ipcom_fopen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_forwarder_ipsec_sa_cache_size", (char*) &ipcom_forwarder_ipsec_sa_cache_size, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_forwarder_ipsec_single_output_queue", (char*) &ipcom_forwarder_ipsec_single_output_queue, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_fread", (char*) ipcom_fread, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_free", (char*) ipcom_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_freeaddrinfo", (char*) ipcom_freeaddrinfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_freeaddrinfo2", (char*) ipcom_freeaddrinfo2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_freeifaddrs", (char*) ipcom_freeifaddrs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fseek", (char*) ipcom_fseek, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fstat", (char*) ipcom_fstat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ftell", (char*) ipcom_ftell, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_fwrite", (char*) ipcom_fwrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_get_cpuid", (char*) ipcom_get_cpuid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_get_ip_if_name", (char*) ipcom_get_ip_if_name, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_get_mux_dev_name", (char*) ipcom_get_mux_dev_name, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_get_start_shell_ptr", (char*) ipcom_get_start_shell_ptr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_get_true_cpuid", (char*) ipcom_get_true_cpuid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getaddrinfo", (char*) ipcom_getaddrinfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getaddrinfo2", (char*) ipcom_getaddrinfo2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getcwd", (char*) ipcom_getcwd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getenv", (char*) ipcom_getenv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getenv_as_int", (char*) ipcom_getenv_as_int, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_gethostbyaddr", (char*) ipcom_gethostbyaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_gethostbyaddr_r", (char*) ipcom_gethostbyaddr_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_gethostbyaddrlocal", (char*) ipcom_gethostbyaddrlocal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_gethostbyname", (char*) ipcom_gethostbyname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_gethostbyname_r", (char*) ipcom_gethostbyname_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_gethostbynamelocal", (char*) ipcom_gethostbynamelocal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getifaddrs", (char*) ipcom_getifaddrs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getlogmask_on", (char*) ipcom_getlogmask_on, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getnameinfo", (char*) ipcom_getnameinfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getnameinfo2", (char*) ipcom_getnameinfo2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getopt", (char*) ipcom_getopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getopt_clear", (char*) ipcom_getopt_clear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getopt_clear_r", (char*) ipcom_getopt_clear_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getopt_data", (char*) &ipcom_getopt_data, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipcom_getopt_r", (char*) ipcom_getopt_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getpeername", (char*) ipcom_getpeername, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getpeername_usr", (char*) ipcom_getpeername_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getpid", (char*) ipcom_getpid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getprotobyname", (char*) ipcom_getprotobyname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getprotobynumber", (char*) ipcom_getprotobynumber, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getservbyname", (char*) ipcom_getservbyname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getservbyport", (char*) ipcom_getservbyport, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getsockaddrbyaddr", (char*) ipcom_getsockaddrbyaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getsockaddrbyaddrname", (char*) ipcom_getsockaddrbyaddrname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getsockname", (char*) ipcom_getsockname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getsockname_usr", (char*) ipcom_getsockname_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getsockopt", (char*) ipcom_getsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_getsockopt_usr", (char*) ipcom_getsockopt_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_gettimeofday", (char*) ipcom_gettimeofday, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_h_errno", (char*) &ipcom_h_errno, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipcom_hash_add", (char*) ipcom_hash_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_hash_delete", (char*) ipcom_hash_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_hash_for_each", (char*) ipcom_hash_for_each, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_hash_get", (char*) ipcom_hash_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_hash_new", (char*) ipcom_hash_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_hash_remove", (char*) ipcom_hash_remove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_hash_update", (char*) ipcom_hash_update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_heap_sort", (char*) ipcom_heap_sort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_attach", (char*) ipcom_if_attach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_attach_and_lock", (char*) ipcom_if_attach_and_lock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_changelinkaddr", (char*) ipcom_if_changelinkaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_changemtu", (char*) ipcom_if_changemtu, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_changename", (char*) ipcom_if_changename, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_detach", (char*) ipcom_if_detach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_free", (char*) ipcom_if_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_freenameindex", (char*) ipcom_if_freenameindex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_indextoname", (char*) ipcom_if_indextoname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_malloc", (char*) ipcom_if_malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_nameindex", (char*) ipcom_if_nameindex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_nametoindex", (char*) ipcom_if_nametoindex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_if_nametonetif", (char*) ipcom_if_nametonetif, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ima_stack_task", (char*) ipcom_ima_stack_task, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum", (char*) ipcom_in_checksum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum_finish", (char*) ipcom_in_checksum_finish, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum_memcpy", (char*) ipcom_in_checksum_memcpy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum_memcpy_asm", (char*) ipcom_in_checksum_memcpy_asm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum_pkt", (char*) ipcom_in_checksum_pkt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum_update", (char*) ipcom_in_checksum_update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum_update2_asm", (char*) ipcom_in_checksum_update2_asm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_in_checksum_update_pkt", (char*) ipcom_in_checksum_update_pkt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_inet_addr", (char*) ipcom_inet_addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_inet_aton", (char*) ipcom_inet_aton, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_inet_ntoa", (char*) ipcom_inet_ntoa, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_inet_ntop", (char*) ipcom_inet_ntop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_inet_pton", (char*) ipcom_inet_pton, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_init_config_vars", (char*) ipcom_init_config_vars, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_initd", (char*) ipcom_initd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_interrupt_disable", (char*) ipcom_interrupt_disable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_interrupt_enable", (char*) ipcom_interrupt_enable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_close", (char*) ipcom_ipc_close, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_free", (char*) ipcom_ipc_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_install", (char*) ipcom_ipc_install, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_isopen", (char*) ipcom_ipc_isopen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_malloc", (char*) ipcom_ipc_malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_open", (char*) ipcom_ipc_open, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_receive", (char*) ipcom_ipc_receive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_send", (char*) ipcom_ipc_send, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_size", (char*) ipcom_ipc_size, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipc_uninstall", (char*) ipcom_ipc_uninstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_datamsg", (char*) ipcom_ipd_datamsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_exit", (char*) ipcom_ipd_exit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_init", (char*) ipcom_ipd_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_input", (char*) ipcom_ipd_input, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_input_process", (char*) ipcom_ipd_input_process, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_kill", (char*) ipcom_ipd_kill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_products", (char*) &ipcom_ipd_products, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_ipd_read", (char*) ipcom_ipd_read, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_reconfigure", (char*) ipcom_ipd_reconfigure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_send", (char*) ipcom_ipd_send, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_sendmsg", (char*) ipcom_ipd_sendmsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipd_start", (char*) ipcom_ipd_start, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_ipproto_name", (char*) ipcom_ipproto_name, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_is_pid_valid", (char*) ipcom_is_pid_valid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_is_stack_task", (char*) ipcom_is_stack_task, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_job_queue_init", (char*) ipcom_job_queue_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_job_queue_pipe_schedule", (char*) ipcom_job_queue_pipe_schedule, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_job_queue_schedule", (char*) ipcom_job_queue_schedule, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_job_queue_schedule_singleton", (char*) ipcom_job_queue_schedule_singleton, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_job_queue_schedule_singleton_delayed", (char*) ipcom_job_queue_schedule_singleton_delayed, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_job_queue_singleton_delete", (char*) ipcom_job_queue_singleton_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_job_queue_singleton_new", (char*) ipcom_job_queue_singleton_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_key_db_file_root", (char*) &ipcom_key_db_file_root, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_list_first", (char*) ipcom_list_first, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_init", (char*) ipcom_list_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_insert_after", (char*) ipcom_list_insert_after, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_insert_before", (char*) ipcom_list_insert_before, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_insert_first", (char*) ipcom_list_insert_first, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_insert_last", (char*) ipcom_list_insert_last, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_last", (char*) ipcom_list_last, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_next", (char*) ipcom_list_next, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_prev", (char*) ipcom_list_prev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_remove", (char*) ipcom_list_remove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_list_unlink_head", (char*) ipcom_list_unlink_head, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_listen", (char*) ipcom_listen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_listen_usr", (char*) ipcom_listen_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_lseek", (char*) ipcom_lseek, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_malloc", (char*) ipcom_malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mask_to_prefixlen", (char*) ipcom_mask_to_prefixlen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mb", (char*) ipcom_mb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mcmd_ifconfig", (char*) ipcom_mcmd_ifconfig, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mcmd_route", (char*) ipcom_mcmd_route, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_memory_pool_new", (char*) ipcom_memory_pool_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_microtime", (char*) ipcom_microtime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_millisleep", (char*) ipcom_millisleep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mipc_addr2offset", (char*) ipcom_mipc_addr2offset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mipc_offset2addr", (char*) ipcom_mipc_offset2addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mkdir", (char*) ipcom_mkdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mutex_create", (char*) ipcom_mutex_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mutex_delete", (char*) ipcom_mutex_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mutex_lock", (char*) ipcom_mutex_lock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_mutex_unlock", (char*) ipcom_mutex_unlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_null_pool_create", (char*) &ipcom_null_pool_create, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_num_configured_cpus", (char*) ipcom_num_configured_cpus, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_num_online_cpus", (char*) ipcom_num_online_cpus, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_observer_notify", (char*) ipcom_observer_notify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_once", (char*) ipcom_once, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_once_mutex", (char*) &ipcom_once_mutex, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipcom_opendir", (char*) ipcom_opendir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_openlog", (char*) ipcom_openlog, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_parse_argstr", (char*) ipcom_parse_argstr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_attr_init", (char*) ipcom_pipe_attr_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_free", (char*) ipcom_pipe_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_generic_create", (char*) ipcom_pipe_generic_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_job_queue_create", (char*) ipcom_pipe_job_queue_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_lockless_create", (char*) ipcom_pipe_lockless_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_new", (char*) ipcom_pipe_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_register_type", (char*) ipcom_pipe_register_type, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pipe_tv_zero", (char*) &ipcom_pipe_tv_zero, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_pkt_alloc_info", (char*) ipcom_pkt_alloc_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_copy_info", (char*) ipcom_pkt_copy_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_create", (char*) ipcom_pkt_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_create_info", (char*) ipcom_pkt_create_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_free", (char*) ipcom_pkt_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_get_info", (char*) ipcom_pkt_get_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_get_info_and_size", (char*) ipcom_pkt_get_info_and_size, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_get_info_safe", (char*) ipcom_pkt_get_info_safe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_hdrspace", (char*) ipcom_pkt_hdrspace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_input", (char*) ipcom_pkt_input, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_input_queue", (char*) ipcom_pkt_input_queue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_make_linear", (char*) ipcom_pkt_make_linear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_malloc", (char*) ipcom_pkt_malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_output_done", (char*) ipcom_pkt_output_done, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_set_info", (char*) ipcom_pkt_set_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_sg_get_data", (char*) ipcom_pkt_sg_get_data, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_trim_head", (char*) ipcom_pkt_trim_head, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pkt_trim_tail", (char*) ipcom_pkt_trim_tail, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pktbuf_free", (char*) ipcom_pktbuf_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_port", (char*) &ipcom_port, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_port_pkt_hdr_extra_size", (char*) &ipcom_port_pkt_hdr_extra_size, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_pqueue_delete", (char*) ipcom_pqueue_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_for_each", (char*) ipcom_pqueue_for_each, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_get", (char*) ipcom_pqueue_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_get_next", (char*) ipcom_pqueue_get_next, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_insert", (char*) ipcom_pqueue_insert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_new", (char*) ipcom_pqueue_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_nop_store_index", (char*) ipcom_pqueue_nop_store_index, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_remove", (char*) ipcom_pqueue_remove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_remove_next", (char*) ipcom_pqueue_remove_next, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_pqueue_size", (char*) ipcom_pqueue_size, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_preempt_disable", (char*) ipcom_preempt_disable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_preempt_enable", (char*) ipcom_preempt_enable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_priority_map", (char*) &ipcom_priority_map, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_proc_acreate", (char*) ipcom_proc_acreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_attr_init", (char*) ipcom_proc_attr_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_cpu_affinity_clr", (char*) ipcom_proc_cpu_affinity_clr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_cpu_affinity_get", (char*) ipcom_proc_cpu_affinity_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_cpu_affinity_set", (char*) ipcom_proc_cpu_affinity_set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_cpu_affinity_set_all", (char*) ipcom_proc_cpu_affinity_set_all, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_create", (char*) ipcom_proc_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_exit", (char*) ipcom_proc_exit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_find", (char*) ipcom_proc_find, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_free", (char*) ipcom_proc_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_getprio", (char*) ipcom_proc_getprio, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_init", (char*) ipcom_proc_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_malloc", (char*) ipcom_proc_malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_self", (char*) ipcom_proc_self, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_setprio", (char*) ipcom_proc_setprio, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_vr_get", (char*) ipcom_proc_vr_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_vr_set", (char*) ipcom_proc_vr_set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_proc_yield", (char*) ipcom_proc_yield, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_rand", (char*) ipcom_rand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_random", (char*) ipcom_random, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_random_init", (char*) ipcom_random_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_random_seed_state", (char*) ipcom_random_seed_state, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_readdir", (char*) ipcom_readdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_realloc", (char*) ipcom_realloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_recv", (char*) ipcom_recv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_recv_usr", (char*) ipcom_recv_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_recvfrom", (char*) ipcom_recvfrom, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_recvfrom_usr", (char*) ipcom_recvfrom_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_recvmsg", (char*) ipcom_recvmsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_recvmsg_usr", (char*) ipcom_recvmsg_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_register_dev_name_mapping", (char*) ipcom_register_dev_name_mapping, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_rename", (char*) ipcom_rename, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_rewind", (char*) ipcom_rewind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_rmb", (char*) ipcom_rmb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_rmdir", (char*) ipcom_rmdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_add", (char*) ipcom_route_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_first_entry", (char*) ipcom_route_first_entry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_free_table", (char*) ipcom_route_free_table, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_init_subtree_mask", (char*) ipcom_route_init_subtree_mask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_key_cmp", (char*) ipcom_route_key_cmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_lookup", (char*) ipcom_route_lookup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_new_table", (char*) ipcom_route_new_table, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_next_entry", (char*) ipcom_route_next_entry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_remove", (char*) ipcom_route_remove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_walk_tree", (char*) ipcom_route_walk_tree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_route_walk_tree_backwards", (char*) ipcom_route_walk_tree_backwards, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_rtp_tcb_index_get_fd", (char*) ipcom_rtp_tcb_index_get_fd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_run_cmd", (char*) ipcom_run_cmd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_create", (char*) ipcom_sem_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_delete", (char*) ipcom_sem_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_flush", (char*) ipcom_sem_flush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_getvalue", (char*) ipcom_sem_getvalue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_interrupt_flush", (char*) ipcom_sem_interrupt_flush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_interrupt_post", (char*) ipcom_sem_interrupt_post, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_post", (char*) ipcom_sem_post, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sem_wait", (char*) ipcom_sem_wait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_send", (char*) ipcom_send, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_send_usr", (char*) ipcom_send_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sendmsg", (char*) ipcom_sendmsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sendmsg_usr", (char*) ipcom_sendmsg_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sendto", (char*) ipcom_sendto, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sendto_usr", (char*) ipcom_sendto_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_add", (char*) ipcom_set_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_clone", (char*) ipcom_set_clone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_contains", (char*) ipcom_set_contains, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_delete", (char*) ipcom_set_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_equal", (char*) ipcom_set_equal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_for_each", (char*) ipcom_set_for_each, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_intersection", (char*) ipcom_set_intersection, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_new", (char*) ipcom_set_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_remove", (char*) ipcom_set_remove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_remove_all", (char*) ipcom_set_remove_all, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_start_shell_ptr", (char*) ipcom_set_start_shell_ptr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_subtract", (char*) ipcom_set_subtract, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_set_union", (char*) ipcom_set_union, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_setenv", (char*) ipcom_setenv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_setenv_as_int", (char*) ipcom_setenv_as_int, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_setlogfile", (char*) ipcom_setlogfile, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_setlogmask_on", (char*) ipcom_setlogmask_on, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_setlogudp", (char*) ipcom_setlogudp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_setsockopt", (char*) ipcom_setsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_setsockopt_usr", (char*) ipcom_setsockopt_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_settimeofday", (char*) ipcom_settimeofday, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_shell_add_cmd", (char*) ipcom_shell_add_cmd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_shell_cmd_head", (char*) &ipcom_shell_cmd_head, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipcom_shell_find_cmd", (char*) ipcom_shell_find_cmd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_shell_find_cmd_hook", (char*) &ipcom_shell_find_cmd_hook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_shell_fread", (char*) ipcom_shell_fread, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_shell_fwrite", (char*) ipcom_shell_fwrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_shell_remove_cmd", (char*) ipcom_shell_remove_cmd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_shutdown", (char*) ipcom_shutdown, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_shutdown_usr", (char*) ipcom_shutdown_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_slab_add", (char*) ipcom_slab_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_slab_alloc_from", (char*) ipcom_slab_alloc_from, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_slab_alloc_try", (char*) ipcom_slab_alloc_try, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_slab_free", (char*) ipcom_slab_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_slab_get_objects_per_slab", (char*) ipcom_slab_get_objects_per_slab, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_slab_memory_pool_list", (char*) &ipcom_slab_memory_pool_list, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipcom_slab_new", (char*) ipcom_slab_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_slab_once", (char*) &ipcom_slab_once, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_sleep", (char*) ipcom_sleep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sockaddr_to_prefixlen", (char*) ipcom_sockaddr_to_prefixlen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socket", (char*) ipcom_socket, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socket_usr", (char*) ipcom_socket_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketclose", (char*) ipcom_socketclose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketclose_usr", (char*) ipcom_socketclose_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketioctl", (char*) ipcom_socketioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketioctl_usr", (char*) ipcom_socketioctl_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketread", (char*) ipcom_socketread, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketread_usr", (char*) ipcom_socketread_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketselect", (char*) ipcom_socketselect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketselect_usr", (char*) ipcom_socketselect_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketwrite", (char*) ipcom_socketwrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketwrite_usr", (char*) ipcom_socketwrite_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketwritev", (char*) ipcom_socketwritev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_socketwritev_usr", (char*) ipcom_socketwritev_usr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_spinlock_create", (char*) ipcom_spinlock_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_spinlock_delete", (char*) ipcom_spinlock_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_spinlock_lock", (char*) ipcom_spinlock_lock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_spinlock_unlock", (char*) ipcom_spinlock_unlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_srand", (char*) ipcom_srand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_srandom", (char*) ipcom_srandom, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_stackd_init", (char*) ipcom_stackd_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_start", (char*) ipcom_start, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_start_shell", (char*) ipcom_start_shell, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_start_shell_native", (char*) ipcom_start_shell_native, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_start_shell_ptr", (char*) &ipcom_start_shell_ptr, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_stat", (char*) ipcom_stat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_stderr", (char*) ipcom_stderr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_stdin", (char*) ipcom_stdin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_stdio_set_echo", (char*) ipcom_stdio_set_echo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_stdout", (char*) ipcom_stdout, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_str_in_list", (char*) ipcom_str_in_list, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_strcasecmp", (char*) ipcom_strcasecmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_strerror", (char*) ipcom_strerror, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_strerror_r", (char*) ipcom_strerror_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_strncasecmp", (char*) ipcom_strncasecmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sys_free", (char*) &ipcom_sys_free, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_sys_malloc", (char*) &ipcom_sys_malloc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_sysctl", (char*) ipcom_sysctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_syslog", (char*) ipcom_syslog, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_syslog_facility_names", (char*) &ipcom_syslog_facility_names, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_syslog_printf", (char*) ipcom_syslog_printf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_syslog_priority_names", (char*) &ipcom_syslog_priority_names, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_syslogd_init", (char*) ipcom_syslogd_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_add_observer", (char*) ipcom_sysvar_add_observer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_ext_setv", (char*) ipcom_sysvar_ext_setv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_for_each", (char*) ipcom_sysvar_for_each, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_get", (char*) ipcom_sysvar_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_get0", (char*) ipcom_sysvar_get0, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_get_as_int", (char*) ipcom_sysvar_get_as_int, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_get_as_int0", (char*) ipcom_sysvar_get_as_int0, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_get_as_int_vr", (char*) ipcom_sysvar_get_as_int_vr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_get_descriptive_int0", (char*) ipcom_sysvar_get_descriptive_int0, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_get_descriptive_int_vr", (char*) ipcom_sysvar_get_descriptive_int_vr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_getvr", (char*) ipcom_sysvar_getvr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_remove_observer", (char*) ipcom_sysvar_remove_observer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_set", (char*) ipcom_sysvar_set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_set0", (char*) ipcom_sysvar_set0, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_set_tree", (char*) ipcom_sysvar_set_tree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_setv", (char*) ipcom_sysvar_setv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_setvr", (char*) ipcom_sysvar_setvr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_sysvar_unset", (char*) ipcom_sysvar_unset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_cancel", (char*) ipcom_tmo2_cancel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_delete", (char*) ipcom_tmo2_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_get", (char*) ipcom_tmo2_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_new", (char*) ipcom_tmo2_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_request", (char*) ipcom_tmo2_request, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_request_timeval", (char*) ipcom_tmo2_request_timeval, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_reset", (char*) ipcom_tmo2_reset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo2_select", (char*) ipcom_tmo2_select, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo_cancel", (char*) ipcom_tmo_cancel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo_get", (char*) ipcom_tmo_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo_request", (char*) ipcom_tmo_request, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_tmo_reset", (char*) ipcom_tmo_reset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_unlink", (char*) ipcom_unlink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_unsetenv", (char*) ipcom_unsetenv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_usr_create", (char*) ipcom_usr_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_version", (char*) &ipcom_version, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_vsyslog", (char*) ipcom_vsyslog, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_vxshell_add_cmd", (char*) ipcom_vxshell_add_cmd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_vxshell_add_cmd_hook", (char*) &ipcom_vxshell_add_cmd_hook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipcom_vxworks_boot_devname", (char*) ipcom_vxworks_boot_devname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_vxworks_loginStringGet", (char*) ipcom_vxworks_loginStringGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_vxworks_pkt_pool_hdr_ctor", (char*) ipcom_vxworks_pkt_pool_hdr_ctor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_vxworks_proc_free", (char*) ipcom_vxworks_proc_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_vxworks_rtp_del_hook_add", (char*) ipcom_vxworks_rtp_del_hook_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_vxworks_task_del_hook", (char*) ipcom_vxworks_task_del_hook, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_windnet_socketwritev", (char*) ipcom_windnet_socketwritev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_windnet_socklib_init", (char*) ipcom_windnet_socklib_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_windnet_socklib_sock_size", (char*) ipcom_windnet_socklib_sock_size, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_windnet_socklib_socket_free", (char*) ipcom_windnet_socklib_socket_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_windnet_socklib_socket_init", (char*) ipcom_windnet_socklib_socket_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_wmb", (char*) ipcom_wmb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_wv_event_2", (char*) ipcom_wv_event_2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_wv_marker_1", (char*) ipcom_wv_marker_1, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipcom_wv_marker_2", (char*) ipcom_wv_marker_2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipmcrypto_MD5_Final", (char*) ipmcrypto_MD5_Final, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipmcrypto_MD5_Init", (char*) ipmcrypto_MD5_Init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipmcrypto_MD5_Update", (char*) ipmcrypto_MD5_Update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipmcrypto_SHA1_Final", (char*) ipmcrypto_SHA1_Final, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipmcrypto_SHA1_Init", (char*) ipmcrypto_SHA1_Init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipmcrypto_SHA1_Update", (char*) ipmcrypto_SHA1_Update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipmcrypto_md5_calculate", (char*) ipmcrypto_md5_calculate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet", (char*) &ipnet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_arp_ioctl", (char*) ipnet_arp_ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_arp_request", (char*) ipnet_arp_request, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_bit_array_clr", (char*) ipnet_bit_array_clr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_bit_array_test_and_set", (char*) ipnet_bit_array_test_and_set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_bool_map", (char*) &ipnet_bool_map, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_cmd_if_type_to_str", (char*) ipnet_cmd_if_type_to_str, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_cmd_ifconfig_hook", (char*) &ipnet_cmd_ifconfig_hook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_cmd_init_addrs", (char*) ipnet_cmd_init_addrs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_cmd_msec_since", (char*) ipnet_cmd_msec_since, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_cmd_neigh_for_each", (char*) ipnet_cmd_neigh_for_each, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_cmd_neigh_for_each_optmask", (char*) ipnet_cmd_neigh_for_each_optmask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_cmd_qc_hook", (char*) &ipnet_cmd_qc_hook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_cmd_route_hook", (char*) &ipnet_cmd_route_hook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_cmd_rt_flags_to_str", (char*) ipnet_cmd_rt_flags_to_str, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_cmd_rt_flags_to_str_short", (char*) ipnet_cmd_rt_flags_to_str_short, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_conf_boot_cmd", (char*) &ipnet_conf_boot_cmd, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_cache_bufsiz", (char*) &ipnet_conf_cache_bufsiz, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_inq_max", (char*) &ipnet_conf_inq_max, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_interfaces", (char*) &ipnet_conf_interfaces, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_ip4_min_mtu", (char*) &ipnet_conf_ip4_min_mtu, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_ip6_min_mtu", (char*) &ipnet_conf_ip6_min_mtu, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_link_layer", (char*) &ipnet_conf_link_layer, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_max_dgram_frag_list_len", (char*) &ipnet_conf_max_dgram_frag_list_len, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_max_reassembly_list_len", (char*) &ipnet_conf_max_reassembly_list_len, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_max_sockets", (char*) &ipnet_conf_max_sockets, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_memory_limit", (char*) &ipnet_conf_memory_limit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_reassembly_timeout", (char*) &ipnet_conf_reassembly_timeout, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_conf_update", (char*) ipnet_conf_update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_configd_start", (char*) ipnet_configd_start, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_configure", (char*) ipnet_configure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_create", (char*) ipnet_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_create_reassembled_packet", (char*) ipnet_create_reassembled_packet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ctrl", (char*) ipnet_ctrl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ctrl_sig", (char*) ipnet_ctrl_sig, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_do_close", (char*) ipnet_do_close, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache", (char*) &ipnet_dst_cache, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "ipnet_dst_cache_blackhole", (char*) ipnet_dst_cache_blackhole, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_blackhole_flow_spec", (char*) ipnet_dst_cache_blackhole_flow_spec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_flush", (char*) ipnet_dst_cache_flush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_flush_where_neigh_is", (char*) ipnet_dst_cache_flush_where_neigh_is, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_foreach", (char*) ipnet_dst_cache_foreach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_init", (char*) ipnet_dst_cache_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_new", (char*) ipnet_dst_cache_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_select_best_rt", (char*) ipnet_dst_cache_select_best_rt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_set_path_mtu", (char*) ipnet_dst_cache_set_path_mtu, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_set_rx_handler", (char*) ipnet_dst_cache_set_rx_handler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_dst_cache_set_tx_handler", (char*) ipnet_dst_cache_set_tx_handler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_eth_add_hdr", (char*) ipnet_eth_add_hdr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_eth_addr_broadcast", (char*) &ipnet_eth_addr_broadcast, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_eth_addr_broadcast_storage", (char*) &ipnet_eth_addr_broadcast_storage, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_eth_if_init", (char*) ipnet_eth_if_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_eth_update_mib2_lastchange", (char*) ipnet_eth_update_mib2_lastchange, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_flags", (char*) &ipnet_flags, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_flow_spec_domain", (char*) ipnet_flow_spec_domain, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_flow_spec_from_info", (char*) ipnet_flow_spec_from_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_flow_spec_from_sock", (char*) ipnet_flow_spec_from_sock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_frag_release_peer_info", (char*) ipnet_frag_release_peer_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_frag_set_peer_info", (char*) ipnet_frag_set_peer_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_frag_to_peer_info", (char*) ipnet_frag_to_peer_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_fragment_packet", (char*) ipnet_fragment_packet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_get_sock", (char*) ipnet_get_sock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_has_priv", (char*) ipnet_has_priv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_icmp4_param_init", (char*) ipnet_icmp4_param_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_icmp4_send", (char*) ipnet_icmp4_send, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_icmp4_send_host_unreachable", (char*) ipnet_icmp4_send_host_unreachable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_icmp4_send_port_unreachable", (char*) ipnet_icmp4_send_port_unreachable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_can_detach", (char*) ipnet_if_can_detach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_clean", (char*) ipnet_if_clean, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_clean_ppp_peer", (char*) ipnet_if_clean_ppp_peer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_clean_snd_queue", (char*) ipnet_if_clean_snd_queue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_detach", (char*) ipnet_if_detach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_drv_ioctl", (char*) ipnet_if_drv_ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_drv_output", (char*) ipnet_if_drv_output, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_free", (char*) ipnet_if_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_get_index_array", (char*) ipnet_if_get_index_array, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_indextonetif", (char*) ipnet_if_indextonetif, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_init", (char*) ipnet_if_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_init_ppp_peer", (char*) ipnet_if_init_ppp_peer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_link_ioctl", (char*) ipnet_if_link_ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_nametonetif", (char*) ipnet_if_nametonetif, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_output", (char*) ipnet_if_output, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_set_ipv4_ppp_peer", (char*) ipnet_if_set_ipv4_ppp_peer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_to_sockaddr_dl", (char*) ipnet_if_to_sockaddr_dl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_if_update_mib2_ifLastChange", (char*) ipnet_if_update_mib2_ifLastChange, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_igmpv3_report_change", (char*) ipnet_igmpv3_report_change, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_increase_hdr_space", (char*) ipnet_increase_hdr_space, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ioctl_move_if_rt_to_vr", (char*) ipnet_ioctl_move_if_rt_to_vr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_acd_conflict", (char*) ipnet_ip4_acd_conflict, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_add_addr", (char*) ipnet_ip4_add_addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_add_addr2", (char*) ipnet_ip4_add_addr2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_add_route_table", (char*) ipnet_ip4_add_route_table, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_addr_to_sockaddr", (char*) ipnet_ip4_addr_to_sockaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_change_addr_mask", (char*) ipnet_ip4_change_addr_mask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_configure_route_table", (char*) ipnet_ip4_configure_route_table, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_dst_cache_get", (char*) ipnet_ip4_dst_cache_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_dst_cache_rx_ctor", (char*) ipnet_ip4_dst_cache_rx_ctor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_dst_unreachable", (char*) ipnet_ip4_dst_unreachable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_dst_unreachable_filter", (char*) ipnet_ip4_dst_unreachable_filter, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_flow_spec_from_info", (char*) ipnet_ip4_flow_spec_from_info, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_flow_spec_from_pkt", (char*) ipnet_ip4_flow_spec_from_pkt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_fragment_timeout_peer", (char*) ipnet_ip4_fragment_timeout_peer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_get_addr_entry", (char*) ipnet_ip4_get_addr_entry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_get_addr_type", (char*) ipnet_ip4_get_addr_type, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_get_addr_type2", (char*) ipnet_ip4_get_addr_type2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_get_mss", (char*) ipnet_ip4_get_mss, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_get_src_addr", (char*) ipnet_ip4_get_src_addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_init", (char*) ipnet_ip4_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_input", (char*) ipnet_ip4_input, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_insert_addr_cache", (char*) ipnet_ip4_insert_addr_cache, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_is_part_of_same_pkt", (char*) ipnet_ip4_is_part_of_same_pkt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_kioevent", (char*) ipnet_ip4_kioevent, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_netif_get_subbrd", (char*) ipnet_ip4_netif_get_subbrd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_pkt_with_iphdr_rawsock_tx", (char*) ipnet_ip4_pkt_with_iphdr_rawsock_tx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_pkt_with_iphdr_tx", (char*) ipnet_ip4_pkt_with_iphdr_tx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_reg_transport_layer", (char*) ipnet_ip4_reg_transport_layer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_remove_addr", (char*) ipnet_ip4_remove_addr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_remove_addr_cache", (char*) ipnet_ip4_remove_addr_cache, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_rfc1256_mode_update", (char*) ipnet_ip4_rfc1256_mode_update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_rx", (char*) ipnet_ip4_rx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_sendto", (char*) ipnet_ip4_sendto, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_transport_rx", (char*) ipnet_ip4_transport_rx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ip4_tx", (char*) ipnet_ip4_tx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_is_loopback", (char*) ipnet_is_loopback, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_is_sock_exceptional", (char*) ipnet_is_sock_exceptional, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_is_sock_readable", (char*) ipnet_is_sock_readable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_is_sock_writable", (char*) ipnet_is_sock_writable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_is_stack_task", (char*) ipnet_is_stack_task, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_kioevent", (char*) ipnet_kioevent, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_loop_pkt_tx", (char*) ipnet_loop_pkt_tx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_loopback_attach", (char*) ipnet_loopback_attach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_loopback_get_netif", (char*) ipnet_loopback_get_netif, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_loopback_if_init", (char*) ipnet_loopback_if_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_build_if_filter", (char*) ipnet_mcast_build_if_filter, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_build_source_change_report", (char*) ipnet_mcast_build_source_change_report, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_clear", (char*) ipnet_mcast_clear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_free", (char*) ipnet_mcast_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_init", (char*) ipnet_mcast_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_report_finish", (char*) ipnet_mcast_report_finish, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_schedule_membership_report", (char*) ipnet_mcast_schedule_membership_report, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_mcast_time_to_msec", (char*) ipnet_mcast_time_to_msec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_msec_now", (char*) ipnet_msec_now, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_dad", (char*) ipnet_neigh_dad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_flush", (char*) ipnet_neigh_flush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_flush_all", (char*) ipnet_neigh_flush_all, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_foreach", (char*) ipnet_neigh_foreach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_get", (char*) ipnet_neigh_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_init", (char*) ipnet_neigh_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_init_addr_observer", (char*) ipnet_neigh_init_addr_observer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_invalidate", (char*) ipnet_neigh_invalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_is_probing", (char*) ipnet_neigh_is_probing, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_netif_discard", (char*) ipnet_neigh_netif_discard, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_probe", (char*) ipnet_neigh_probe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_release", (char*) ipnet_neigh_release, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_blackhole", (char*) ipnet_neigh_set_blackhole, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_external", (char*) ipnet_neigh_set_external, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_gateway", (char*) ipnet_neigh_set_gateway, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_lifetime", (char*) ipnet_neigh_set_lifetime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_lladdr", (char*) ipnet_neigh_set_lladdr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_local", (char*) ipnet_neigh_set_local, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_perm", (char*) ipnet_neigh_set_perm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_publ", (char*) ipnet_neigh_set_publ, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_report", (char*) ipnet_neigh_set_report, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_silent", (char*) ipnet_neigh_set_silent, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_neigh_set_state", (char*) ipnet_neigh_set_state, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_netif_change_flags", (char*) ipnet_netif_change_flags, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_netif_is_ifproxy", (char*) ipnet_netif_is_ifproxy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_netif_neigh_create", (char*) ipnet_netif_neigh_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_next_ephemeral_port", (char*) ipnet_next_ephemeral_port, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_noeth_if_init", (char*) ipnet_noeth_if_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_packet_getsockopt", (char*) ipnet_packet_getsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_packet_input", (char*) ipnet_packet_input, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_packet_setsockopt", (char*) ipnet_packet_setsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pcap_ioctl", (char*) ipnet_pcap_ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_peer_info_addref", (char*) ipnet_peer_info_addref, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_peer_info_get", (char*) ipnet_peer_info_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_peer_info_init", (char*) ipnet_peer_info_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_peer_info_release", (char*) ipnet_peer_info_release, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_peer_info_timeout_cancel", (char*) ipnet_peer_info_timeout_cancel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_peer_info_timeout_schedule", (char*) ipnet_peer_info_timeout_schedule, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ping_stat_init", (char*) ipnet_ping_stat_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ping_stat_receive", (char*) ipnet_ping_stat_receive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ping_stat_report", (char*) ipnet_ping_stat_report, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ping_stat_transmit", (char*) ipnet_ping_stat_transmit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pipe_create", (char*) ipnet_pipe_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_clone", (char*) ipnet_pkt_clone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_get_maxlen", (char*) ipnet_pkt_get_maxlen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_input", (char*) ipnet_pkt_input, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_pool_drain", (char*) ipnet_pkt_pool_drain, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_pool_hdr_count_hint", (char*) ipnet_pkt_pool_hdr_count_hint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_pool_hdr_ctor_func", (char*) &ipnet_pkt_pool_hdr_ctor_func, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_pkt_pool_init", (char*) ipnet_pkt_pool_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_pool_slab_desc", (char*) &ipnet_pkt_pool_slab_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_pkt_queue_delete", (char*) ipnet_pkt_queue_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_queue_fifo_template", (char*) ipnet_pkt_queue_fifo_template, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_queue_init", (char*) ipnet_pkt_queue_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_pkt_queue_new", (char*) ipnet_pkt_queue_new, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_ppp_if_init", (char*) ipnet_ppp_if_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_queue_received_packet", (char*) ipnet_queue_received_packet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_raw_input", (char*) ipnet_raw_input, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_reassembly", (char*) ipnet_reassembly, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_register_if_attach_handler", (char*) ipnet_register_if_attach_handler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_release_sock", (char*) ipnet_release_sock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_resume_stack", (char*) ipnet_resume_stack, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_add", (char*) ipnet_route_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_add_table", (char*) ipnet_route_add_table, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_apply_mask", (char*) ipnet_route_apply_mask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_cache_invalidate", (char*) ipnet_route_cache_invalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_create_mask", (char*) ipnet_route_create_mask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_delete", (char*) ipnet_route_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_delete2", (char*) ipnet_route_delete2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_delete_name", (char*) ipnet_route_delete_name, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_delete_table", (char*) ipnet_route_delete_table, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_delete_vr", (char*) ipnet_route_delete_vr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_first_entry", (char*) ipnet_route_first_entry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_for_each_data_init", (char*) ipnet_route_for_each_data_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_get_name", (char*) ipnet_route_get_name, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_get_rtab", (char*) ipnet_route_get_rtab, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_get_table_ids", (char*) ipnet_route_get_table_ids, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_has_changed", (char*) ipnet_route_has_changed, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_has_expired", (char*) ipnet_route_has_expired, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_ip4_is_mcast_or_bcast", (char*) ipnet_route_ip4_is_mcast_or_bcast, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_is_virtual_router_valid", (char*) ipnet_route_is_virtual_router_valid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_key_cmp", (char*) ipnet_route_key_cmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_key_to_sockaddr", (char*) ipnet_route_key_to_sockaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_lock", (char*) ipnet_route_lock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_lookup", (char*) ipnet_route_lookup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_lookup_ecmp", (char*) ipnet_route_lookup_ecmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_next_entry", (char*) ipnet_route_next_entry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_notify_func", (char*) ipnet_route_notify_func, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_policy_get_rule_chain", (char*) ipnet_route_policy_get_rule_chain, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_policy_ioctl", (char*) ipnet_route_policy_ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_raw_lookup", (char*) ipnet_route_raw_lookup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_raw_lookup2", (char*) ipnet_route_raw_lookup2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_remove_all", (char*) ipnet_route_remove_all, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_remove_all_cb_for_each_entry", (char*) ipnet_route_remove_all_cb_for_each_entry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_remove_dynamic_rt_with_gw", (char*) ipnet_route_remove_dynamic_rt_with_gw, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_rotate_gateways", (char*) ipnet_route_rotate_gateways, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_set_lifetime", (char*) ipnet_route_set_lifetime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_set_name", (char*) ipnet_route_set_name, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_set_rtab", (char*) ipnet_route_set_rtab, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_sockaddr_to_key", (char*) ipnet_route_sockaddr_to_key, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_unlock", (char*) ipnet_route_unlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_vr_and_table_from_name", (char*) ipnet_route_vr_and_table_from_name, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_route_walk_tree", (char*) ipnet_route_walk_tree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_addr_add", (char*) ipnet_routesock_addr_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_addr_conflict", (char*) ipnet_routesock_addr_conflict, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_addr_delete", (char*) ipnet_routesock_addr_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_if_announce", (char*) ipnet_routesock_if_announce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_if_change", (char*) ipnet_routesock_if_change, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_neigh_resolve", (char*) ipnet_routesock_neigh_resolve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_rt_add", (char*) ipnet_routesock_rt_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_rt_change", (char*) ipnet_routesock_rt_change, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_rt_delete", (char*) ipnet_routesock_rt_delete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_rt_miss", (char*) ipnet_routesock_rt_miss, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_routesock_rt_redirect", (char*) ipnet_routesock_rt_redirect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sec_now", (char*) ipnet_sec_now, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sig_free", (char*) ipnet_sig_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_alloc_private_data", (char*) ipnet_sock_alloc_private_data, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_bind", (char*) ipnet_sock_bind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_bind_addr_removed", (char*) ipnet_sock_bind_addr_removed, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_bind_to_port", (char*) ipnet_sock_bind_to_port, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_change_addr_entry", (char*) ipnet_sock_change_addr_entry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_data_avail", (char*) ipnet_sock_data_avail, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_drop_all_multicast_memberships", (char*) ipnet_sock_drop_all_multicast_memberships, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_free", (char*) ipnet_sock_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_get", (char*) ipnet_sock_get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_get_bound_port_size", (char*) ipnet_sock_get_bound_port_size, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_get_ops_handle", (char*) ipnet_sock_get_ops_handle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_get_route", (char*) ipnet_sock_get_route, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_has_waiting_writers", (char*) ipnet_sock_has_waiting_writers, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_init", (char*) ipnet_sock_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_ip4_get_mcast_data", (char*) ipnet_sock_ip4_get_mcast_data, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_ip4_get_ops", (char*) ipnet_sock_ip4_get_ops, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_ip4_lookup", (char*) ipnet_sock_ip4_lookup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_ip4_mcast_delete_data", (char*) ipnet_sock_ip4_mcast_delete_data, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_ip4_register", (char*) ipnet_sock_ip4_register, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_join_router_alert_chain", (char*) ipnet_sock_join_router_alert_chain, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_leave_router_alert_chain", (char*) ipnet_sock_leave_router_alert_chain, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_next", (char*) ipnet_sock_next, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_ops", (char*) &ipnet_sock_ops, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ipnet_sock_packet_lookup", (char*) ipnet_sock_packet_lookup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_packet_register", (char*) ipnet_sock_packet_register, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_pkt_drain", (char*) ipnet_sock_pkt_drain, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_register_ops", (char*) ipnet_sock_register_ops, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_route_register", (char*) ipnet_sock_route_register, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_router_alert_pkt", (char*) ipnet_sock_router_alert_pkt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_set_reachable", (char*) ipnet_sock_set_reachable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_set_unreachable", (char*) ipnet_sock_set_unreachable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_tcp_register", (char*) ipnet_sock_tcp_register, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_udp_register", (char*) ipnet_sock_udp_register, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_unbind", (char*) ipnet_sock_unbind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_unconnect", (char*) ipnet_sock_unconnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sock_update_reuse", (char*) ipnet_sock_update_reuse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sockopt_ip4_addr_to_netif", (char*) ipnet_sockopt_ip4_addr_to_netif, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_softirq_init", (char*) ipnet_softirq_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_softirq_schedule", (char*) ipnet_softirq_schedule, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_start", (char*) ipnet_start, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_stats_tcp_established", (char*) ipnet_stats_tcp_established, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_suspend_stack", (char*) ipnet_suspend_stack, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_accept", (char*) ipnet_sys_accept, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_bind", (char*) ipnet_sys_bind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_checktcp", (char*) ipnet_sys_checktcp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_connect", (char*) ipnet_sys_connect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_get_ancillary_data", (char*) ipnet_sys_get_ancillary_data, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_getname", (char*) ipnet_sys_getname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_getsockopt", (char*) ipnet_sys_getsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_attach", (char*) ipnet_sys_if_attach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_changelinkaddr", (char*) ipnet_sys_if_changelinkaddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_changemtu", (char*) ipnet_sys_if_changemtu, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_changename", (char*) ipnet_sys_if_changename, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_detach", (char*) ipnet_sys_if_detach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_free", (char*) ipnet_sys_if_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_indexname", (char*) ipnet_sys_if_indexname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_malloc", (char*) ipnet_sys_if_malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_if_nametonetif", (char*) ipnet_sys_if_nametonetif, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_listen", (char*) ipnet_sys_listen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_poll", (char*) ipnet_sys_poll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_poll_async", (char*) ipnet_sys_poll_async, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_savesignal", (char*) ipnet_sys_savesignal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_sendmsg", (char*) ipnet_sys_sendmsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_setsockopt", (char*) ipnet_sys_setsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_shutdown", (char*) ipnet_sys_shutdown, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_socket", (char*) ipnet_sys_socket, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_socketclose", (char*) ipnet_sys_socketclose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_socketioctl", (char*) ipnet_sys_socketioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sys_sysctl", (char*) ipnet_sys_sysctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sysctl_common", (char*) ipnet_sysctl_common, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sysctl_create_ifinfo", (char*) ipnet_sysctl_create_ifinfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sysctl_get_base", (char*) ipnet_sysctl_get_base, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sysctl_if_add_addrs_one", (char*) ipnet_sysctl_if_add_addrs_one, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sysvar_get_as_int_vr", (char*) ipnet_sysvar_get_as_int_vr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sysvar_netif_get_as_int", (char*) ipnet_sysvar_netif_get_as_int, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_sysvar_netif_get_as_int_ex", (char*) ipnet_sysvar_netif_get_as_int_ex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_timeout_cancel", (char*) ipnet_timeout_cancel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_timeout_msec_until", (char*) ipnet_timeout_msec_until, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_timeout_schedule", (char*) ipnet_timeout_schedule, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_timeval_to_msec", (char*) ipnet_timeval_to_msec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_try_free_mem", (char*) ipnet_try_free_mem, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_get_ops", (char*) ipnet_usr_sock_get_ops, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_get_pipe", (char*) ipnet_usr_sock_get_pipe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_get_response_pipe", (char*) ipnet_usr_sock_get_response_pipe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_get_route_cache_id", (char*) ipnet_usr_sock_get_route_cache_id, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_init", (char*) ipnet_usr_sock_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_init_sig", (char*) ipnet_usr_sock_init_sig, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_recvmsg", (char*) ipnet_usr_sock_recvmsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_usr_sock_wait_until_writable", (char*) ipnet_usr_sock_wait_until_writable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ipnet_version", (char*) ipnet_version, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp", (char*) &iptcp, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "iptcp_accept", (char*) iptcp_accept, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_ao_rtnetlink_init", (char*) iptcp_ao_rtnetlink_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_change_state_global", (char*) iptcp_change_state_global, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_close", (char*) iptcp_close, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_conf_default_backlog", (char*) &iptcp_conf_default_backlog, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "iptcp_configure", (char*) iptcp_configure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_connect", (char*) iptcp_connect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_create", (char*) iptcp_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_drop_connection", (char*) iptcp_drop_connection, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_get_rto", (char*) iptcp_get_rto, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_get_state", (char*) iptcp_get_state, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_getsockopt", (char*) iptcp_getsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_icmp4_report", (char*) iptcp_icmp4_report, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_ioctl", (char*) iptcp_ioctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_listen", (char*) iptcp_listen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_pkt_drain", (char*) iptcp_pkt_drain, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_send", (char*) iptcp_send, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_send_reset", (char*) iptcp_send_reset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_setsockopt", (char*) iptcp_setsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_shutdown", (char*) iptcp_shutdown, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_sock_free", (char*) iptcp_sock_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_sock_init", (char*) iptcp_sock_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_start", (char*) iptcp_start, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_tx_list", (char*) &iptcp_tx_list, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "iptcp_usr_recv", (char*) iptcp_usr_recv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_version", (char*) iptcp_version, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iptcp_window_update", (char*) iptcp_window_update, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "is_IA64_encoded_identifier", (char*) is_IA64_encoded_identifier, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isalnum", (char*) isalnum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isalpha", (char*) isalpha, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isatty", (char*) isatty, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "iscntrl", (char*) iscntrl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isdigit", (char*) isdigit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isgraph", (char*) isgraph, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "islower", (char*) islower, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isprint", (char*) isprint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ispunct", (char*) ispunct, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isrDeferJobAdd", (char*) isrDeferJobAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isrDeferLibInit", (char*) isrDeferLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isrDeferQueueGet", (char*) isrDeferQueueGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isrIdCurrent", (char*) &isrIdCurrent, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "isrJobPool", (char*) &isrJobPool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "isrRerouteNotify", (char*) isrRerouteNotify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isspace", (char*) isspace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isupper", (char*) isupper, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "isxdigit", (char*) isxdigit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobAdd", (char*) jobAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueCreate", (char*) jobQueueCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueInit", (char*) jobQueueInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueLibInit", (char*) jobQueueLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueuePost", (char*) jobQueuePost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueuePriorityMask", (char*) jobQueuePriorityMask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueProcess", (char*) jobQueueProcess, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueProcessFunc", (char*) &jobQueueProcessFunc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "jobQueueStdJobsAlloc", (char*) jobQueueStdJobsAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueStdPoolInit", (char*) jobQueueStdPoolInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueStdPost", (char*) jobQueueStdPost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobQueueTask", (char*) jobQueueTask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobTaskLibInit", (char*) jobTaskLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "jobTaskWorkAdd", (char*) jobTaskWorkAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernSysctlInit", (char*) kernSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kern_node", (char*) &kern_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "kernelBaseInit", (char*) kernelBaseInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelCpuEnable", (char*) kernelCpuEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelId", (char*) &kernelId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "kernelIdGet", (char*) kernelIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelInit", (char*) kernelInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelIsCpuIdle", (char*) kernelIsCpuIdle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelIsIdle", (char*) &kernelIsIdle, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "kernelIsSystemIdle", (char*) kernelIsSystemIdle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelModuleListId", (char*) &kernelModuleListId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "kernelObjClassId", (char*) &kernelObjClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "kernelRgnPoolId", (char*) &kernelRgnPoolId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "kernelRoundRobinInstall", (char*) kernelRoundRobinInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelState", (char*) &kernelState, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "kernelTimeSlice", (char*) kernelTimeSlice, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelTimeSliceGet", (char*) kernelTimeSliceGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelVersion", (char*) kernelVersion, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kernelVirtPgPoolId", (char*) &kernelVirtPgPoolId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "kernel_sysctl", (char*) kernel_sysctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "kill", (char*) kill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "killSc", (char*) killSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "l", (char*) l, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "labs", (char*) labs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ld", (char*) ld, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ldCommonMatchAll", (char*) &ldCommonMatchAll, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "ldexp", (char*) ldexp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ldiv", (char*) ldiv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ldiv_r", (char*) ldiv_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "le_uuid_dec", (char*) le_uuid_dec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "le_uuid_enc", (char*) le_uuid_enc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledBeep", (char*) ledBeep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledBwdFind", (char*) ledBwdFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledCDelete", (char*) ledCDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledChange", (char*) ledChange, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledClose", (char*) ledClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledComplete", (char*) ledComplete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledCompletionSet", (char*) ledCompletionSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledControl", (char*) ledControl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledDfltComplete", (char*) ledDfltComplete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledFwdFind", (char*) ledFwdFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistCurrentNumGet", (char*) ledHistCurrentNumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistFind", (char*) ledHistFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistNextGet", (char*) ledHistNextGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistNumGet", (char*) ledHistNumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistPrevGet", (char*) ledHistPrevGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistResize", (char*) ledHistResize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistoryAdd", (char*) ledHistoryAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistoryClone", (char*) ledHistoryClone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistoryCreate", (char*) ledHistoryCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistoryFree", (char*) ledHistoryFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistoryLineAllocate", (char*) ledHistoryLineAllocate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledHistorySet", (char*) ledHistorySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledInactivityDelaySet", (char*) ledInactivityDelaySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledLibInit", (char*) ledLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledModeDefaultNameGet", (char*) ledModeDefaultNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledModeNameGet", (char*) ledModeNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledModeRegister", (char*) ledModeRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledModeSet", (char*) ledModeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledNWrite", (char*) ledNWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledOpen", (char*) ledOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledPreempt", (char*) ledPreempt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledPreemptSet", (char*) ledPreemptSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledRead", (char*) ledRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledRead2", (char*) ledRead2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledRedraw", (char*) ledRedraw, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledReplace", (char*) ledReplace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ledSearch", (char*) ledSearch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "link", (char*) link, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "linkBufPoolInit", (char*) linkBufPoolInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "linkDataSyms", (char*) &linkDataSyms, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "linkSc", (char*) linkSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "linkSyms", (char*) &linkSyms, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "linkedCtorsInitialized", (char*) &linkedCtorsInitialized, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "listen", (char*) listen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "listenSc", (char*) listenSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lkAddr", (char*) lkAddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lkAddrInternal", (char*) lkAddrInternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lkup", (char*) lkup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ll", (char*) ll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "llr", (char*) llr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadCommonSymbolProcess", (char*) loadCommonSymbolProcess, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadDefinedSymbolProcess", (char*) loadDefinedSymbolProcess, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfFileHeaderReadAndCheck", (char*) loadElfFileHeaderReadAndCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfInit", (char*) loadElfInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfProgramHeaderTableReadAndCheck", (char*) loadElfProgramHeaderTableReadAndCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfRelEntryRead", (char*) loadElfRelEntryRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfRelUEntryRead", (char*) loadElfRelUEntryRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfRelaEntryRead", (char*) loadElfRelaEntryRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfSectionHeaderCheck", (char*) loadElfSectionHeaderCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfSectionHeaderReadAndCheck", (char*) loadElfSectionHeaderReadAndCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadElfSymbolEntryRead", (char*) loadElfSymbolEntryRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadLibInit", (char*) loadLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModule", (char*) loadModule, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleAt", (char*) loadModuleAt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleInfoFromFd", (char*) loadModuleInfoFromFd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleInfoFromFilenameOpen", (char*) loadModuleInfoFromFilenameOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleInfoInit", (char*) loadModuleInfoInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleInfoRelease", (char*) loadModuleInfoRelease, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleSeek", (char*) loadModuleSeek, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleStringRead", (char*) loadModuleStringRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleTagsCheck", (char*) loadModuleTagsCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadModuleValueRead", (char*) loadModuleValueRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadRtpDefaultOptions", (char*) &loadRtpDefaultOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "loadRtpDefaultSymTblHashSizeLog2", (char*) &loadRtpDefaultSymTblHashSizeLog2, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "loadRtpFileInfoCreate", (char*) loadRtpFileInfoCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadRtpFileInfoDestroy", (char*) loadRtpFileInfoDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadRtpFileLoad", (char*) loadRtpFileLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadRtpFileSymbolsRegister", (char*) loadRtpFileSymbolsRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadRtpFileVerify", (char*) loadRtpFileVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadRtpLibInit", (char*) loadRtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadRtpSymRegPolicyOverride", (char*) &loadRtpSymRegPolicyOverride, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "loadSectionsInstall", (char*) loadSectionsInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadSegInfoDescAllocate", (char*) loadSegInfoDescAllocate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadSegInfoDescFree", (char*) loadSegInfoDescFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadSegmentsAllocate", (char*) loadSegmentsAllocate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadShareTgtMemAlign", (char*) loadShareTgtMemAlign, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadShareTgtMemFree", (char*) loadShareTgtMemFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadShareTgtMemSet", (char*) loadShareTgtMemSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadSysSymTblLoad", (char*) loadSysSymTblLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loadUndefinedSymbolProcess", (char*) loadUndefinedSymbolProcess, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loaderCacheBufferSize", (char*) &loaderCacheBufferSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "localToGlobalOffset", (char*) &localToGlobalOffset, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "localeconv", (char*) localeconv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "localtime", (char*) localtime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "localtime_r", (char*) localtime_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "log", (char*) log, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "log10", (char*) log10, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logDecorationChange", (char*) logDecorationChange, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logFd", (char*) &logFd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "logFdAdd", (char*) logFdAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logFdDelete", (char*) logFdDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logFdFromRlogin", (char*) &logFdFromRlogin, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "logFdSem", (char*) &logFdSem, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "logFdSet", (char*) logFdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logInit", (char*) logInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logLevelChange", (char*) logLevelChange, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logMsg", (char*) logMsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logShow", (char*) logShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logTask", (char*) logTask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "logTaskId", (char*) &logTaskId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "logTaskOptions", (char*) &logTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "logTaskPriority", (char*) &logTaskPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "logTaskStackSize", (char*) &logTaskStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "loggerInfoShow", (char*) loggerInfoShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "loginHostname", (char*) &loginHostname, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "loginPassword", (char*) &loginPassword, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "loginUsername", (char*) &loginUsername, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "logout", (char*) logout, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "longjmp", (char*) longjmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ls", (char*) ls, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lseek", (char*) lseek, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lsr", (char*) lsr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstAdd", (char*) lstAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstConcat", (char*) lstConcat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstCount", (char*) lstCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstDelete", (char*) lstDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstExtract", (char*) lstExtract, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstFind", (char*) lstFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstFirst", (char*) lstFirst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstFree", (char*) lstFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstFree2", (char*) lstFree2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstGet", (char*) lstGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstInit", (char*) lstInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstInsert", (char*) lstInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstLast", (char*) lstLast, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstLibInit", (char*) lstLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstNStep", (char*) lstNStep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstNext", (char*) lstNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstNth", (char*) lstNth, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "lstPrevious", (char*) lstPrevious, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "m", (char*) m, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "m2If64BitCounters", (char*) &m2If64BitCounters, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "m512xFecRegister", (char*) m512xFecRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mRegs", (char*) mRegs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "m_prepend", (char*) m_prepend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "malloc", (char*) malloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "manglingStyles", (char*) &manglingStyles, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "map_add", (char*) map_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_alloc", (char*) map_alloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_del", (char*) map_del, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_find", (char*) map_find, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_first", (char*) map_first, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_free", (char*) map_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_init", (char*) map_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_last", (char*) map_last, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_remove", (char*) map_remove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_show", (char*) map_show, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "map_uninit", (char*) map_uninit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mathSoftInit", (char*) mathSoftInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "max_hdr", (char*) &max_hdr, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "max_linkhdr", (char*) &max_linkhdr, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "max_protohdr", (char*) &max_protohdr, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mblen", (char*) mblen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mbstowcs", (char*) mbstowcs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mbtowc", (char*) mbtowc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "md5_block_data_order", (char*) md5_block_data_order, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "md5_block_host_order", (char*) md5_block_host_order, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mdlSymSyncLibInit", (char*) mdlSymSyncLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mdlSymSyncModAdd", (char*) mdlSymSyncModAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mdlSymSyncModInfoGet", (char*) mdlSymSyncModInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mdlSymSyncModuleRemove", (char*) mdlSymSyncModuleRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mdlSymSyncStop", (char*) mdlSymSyncStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mdlSymSyncSymListAdd", (char*) mdlSymSyncSymListAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mdlSymSyncSymListGet", (char*) mdlSymSyncSymListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memAddToPool", (char*) memAddToPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memBlockSizeGet", (char*) memBlockSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memDefaultAlignment", (char*) &memDefaultAlignment, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memEdrBlockFind", (char*) memEdrBlockFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrBlockHdrPrint", (char*) memEdrBlockHdrPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrBlockInfoGet", (char*) memEdrBlockInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrBlockInfoPrint", (char*) memEdrBlockInfoPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrBlockMark", (char*) memEdrBlockMark, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrBlockShow", (char*) memEdrBlockShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrConfigClear", (char*) memEdrConfigClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrConfigInit", (char*) memEdrConfigInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrDb", (char*) &memEdrDb, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "memEdrEnable", (char*) &memEdrEnable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memEdrErrorLog", (char*) memEdrErrorLog, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrFreeQueueFlush", (char*) memEdrFreeQueueFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrInit", (char*) memEdrInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrInit2", (char*) memEdrInit2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrItemGet", (char*) memEdrItemGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrLocalFind", (char*) memEdrLocalFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrMemInit", (char*) memEdrMemInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrPartHdrPrint", (char*) memEdrPartHdrPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrPartInfoGet", (char*) memEdrPartInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrPartInfoPrint", (char*) memEdrPartInfoPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrPartShow", (char*) memEdrPartShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrPoolErrMsg", (char*) &memEdrPoolErrMsg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memEdrRtpBlockMark", (char*) memEdrRtpBlockMark, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrRtpBlockShow", (char*) memEdrRtpBlockShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrRtpPartShow", (char*) memEdrRtpPartShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrRtpShellCmdInit", (char*) memEdrRtpShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrRtpShowInit", (char*) memEdrRtpShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrShellCmdInit", (char*) memEdrShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrShowInit", (char*) memEdrShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrShowUtilInit", (char*) memEdrShowUtilInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrTaskUidGet", (char*) memEdrTaskUidGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memEdrUserStopGet", (char*) memEdrUserStopGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memFindMax", (char*) memFindMax, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memInfoGet", (char*) memInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memInfoInit", (char*) memInfoInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memInit", (char*) memInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memMsgBlockError", (char*) &memMsgBlockError, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memMsgBlockTooBig", (char*) &memMsgBlockTooBig, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memOptionsGet", (char*) memOptionsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memOptionsSet", (char*) memOptionsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartAddToPool", (char*) memPartAddToPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartAlignedAlloc", (char*) memPartAlignedAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartAlloc", (char*) memPartAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartAllocErrorRtn", (char*) &memPartAllocErrorRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memPartAllocN", (char*) memPartAllocN, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartBlockErrorRtn", (char*) &memPartBlockErrorRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memPartBlockIsValid", (char*) memPartBlockIsValid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartBlockValidate", (char*) memPartBlockValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartClassId", (char*) &memPartClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memPartCreate", (char*) memPartCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartCreateHookSet", (char*) memPartCreateHookSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartDelete", (char*) memPartDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartDeleteFree", (char*) memPartDeleteFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartEdrErrorInject", (char*) memPartEdrErrorInject, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartFindMax", (char*) memPartFindMax, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartFree", (char*) memPartFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartFreeListWalk", (char*) memPartFreeListWalk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartFreeN", (char*) memPartFreeN, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartHooksInstall", (char*) memPartHooksInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartInfoGet", (char*) memPartInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartInit", (char*) memPartInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartInsertFree", (char*) memPartInsertFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartLibInit", (char*) memPartLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartOptionsDefault", (char*) &memPartOptionsDefault, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memPartOptionsGet", (char*) memPartOptionsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartOptionsSet", (char*) memPartOptionsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartRealloc", (char*) memPartRealloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartReallocInternal", (char*) memPartReallocInternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartShow", (char*) memPartShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPartVerifiedLock", (char*) memPartVerifiedLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memPoolEndAdrs", (char*) &memPoolEndAdrs, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "memRtpLibInit", (char*) memRtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memShow", (char*) memShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memShowInit", (char*) memShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memSysPartId", (char*) &memSysPartId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "memSysPartition", (char*) &memSysPartition, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "memalign", (char*) memalign, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memchr", (char*) memchr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memcmp", (char*) memcmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memcpy", (char*) memcpy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memmove", (char*) memmove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memoryDump", (char*) memoryDump, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memoryModify", (char*) memoryModify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "memset", (char*) memset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mib2ErrorAdd", (char*) mib2ErrorAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mib2Init", (char*) mib2Init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusCreate", (char*) miiBusCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusDelete", (char*) miiBusDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusGet", (char*) miiBusGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusIdleErrorCheck", (char*) miiBusIdleErrorCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusListAdd", (char*) miiBusListAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusListDel", (char*) miiBusListDel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusLpiModeGet", (char*) miiBusLpiModeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusMediaAdd", (char*) miiBusMediaAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusMediaDefaultSet", (char*) miiBusMediaDefaultSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusMediaDel", (char*) miiBusMediaDel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusMediaListGet", (char*) miiBusMediaListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusMediaUpdate", (char*) miiBusMediaUpdate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusModeGet", (char*) miiBusModeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusModeSet", (char*) miiBusModeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusRead", (char*) miiBusRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusRegister", (char*) miiBusRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiBusWrite", (char*) miiBusWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "miiLpiModeGet_desc", (char*) &miiLpiModeGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "miiMediaUpdate_desc", (char*) &miiMediaUpdate_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "miiModeGet_desc", (char*) &miiModeGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "miiModeSet_desc", (char*) &miiModeSet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "miiRead_desc", (char*) &miiRead_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "miiWrite_desc", (char*) &miiWrite_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mkdir", (char*) mkdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mktime", (char*) mktime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmBlkPool", (char*) &mmBlkPool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmRngPool", (char*) &mmRngPool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmanBlockSplit", (char*) mmanBlockSplit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanFdLibInit", (char*) mmanFdLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanFileList", (char*) &mmanFileList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmanFileMutex", (char*) &mmanFileMutex, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmanLibInit", (char*) mmanLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanMODelete", (char*) mmanMODelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanMapListInit", (char*) mmanMapListInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanMemValidate", (char*) mmanMemValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanPrivateMap", (char*) mmanPrivateMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanProtectionSet", (char*) mmanProtectionSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanRangeInsert", (char*) mmanRangeInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanRtpContextShow", (char*) mmanRtpContextShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanRtpDeleteAll", (char*) mmanRtpDeleteAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanRtpLock", (char*) mmanRtpLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanRtpMapShow", (char*) mmanRtpMapShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanScLibInit", (char*) mmanScLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanShowInit", (char*) mmanShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmanShowShellCmdInit", (char*) mmanShowShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmap", (char*) mmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmap64", (char*) mmap64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmapSc", (char*) mmapSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmapShow", (char*) mmapShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuArchCopySize", (char*) &mmuArchCopySize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mmuArchLibAttrs", (char*) &mmuArchLibAttrs, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuArchLibFuncs", (char*) &mmuArchLibFuncs, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuArchPteFlags", (char*) &mmuArchPteFlags, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mmuArchTtbrFlags", (char*) &mmuArchTtbrFlags, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mmuArchTtbrGet", (char*) mmuArchTtbrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCacheStateTransTbl", (char*) &mmuCacheStateTransTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuContextTbl", (char*) &mmuContextTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuCortexA8ADisable", (char*) mmuCortexA8ADisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8AEnable", (char*) mmuCortexA8AEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8AcrGet", (char*) mmuCortexA8AcrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8AcrSet", (char*) mmuCortexA8AcrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8BufCopy", (char*) mmuCortexA8BufCopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8DTcmrGet", (char*) mmuCortexA8DTcmrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8DTcmrSet", (char*) mmuCortexA8DTcmrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8DacrSet", (char*) mmuCortexA8DacrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8ITcmrGet", (char*) mmuCortexA8ITcmrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8ITcmrSet", (char*) mmuCortexA8ITcmrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8LibInstall", (char*) mmuCortexA8LibInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8SecondLevelMiniHeap_Max", (char*) &mmuCortexA8SecondLevelMiniHeap_Max, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mmuCortexA8TLBIDFlushAll", (char*) mmuCortexA8TLBIDFlushAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8TLBIDFlushEntry", (char*) mmuCortexA8TLBIDFlushEntry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8TtbrGet", (char*) mmuCortexA8TtbrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8TtbrGetAll", (char*) mmuCortexA8TtbrGetAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8TtbrSet", (char*) mmuCortexA8TtbrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8TtbrSetAll", (char*) mmuCortexA8TtbrSetAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8WordSet", (char*) mmuCortexA8WordSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCortexA8WordSetMultiple", (char*) mmuCortexA8WordSetMultiple, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuCrGet", (char*) &mmuCrGet, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mmuFarGet", (char*) mmuFarGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuFsrGet", (char*) mmuFsrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuHardCrGet", (char*) mmuHardCrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuIFsrGet", (char*) mmuIFsrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuInvalidState", (char*) &mmuInvalidState, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuLibFuncs", (char*) &mmuLibFuncs, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuMaskTransTbl", (char*) &mmuMaskTransTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuModifyCr", (char*) &mmuModifyCr, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mmuModifyHardCr", (char*) mmuModifyHardCr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuPhysToVirt", (char*) mmuPhysToVirt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuProtStateTransTbl", (char*) &mmuProtStateTransTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuReadId", (char*) mmuReadId, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmuValidStateTransTbl", (char*) &mmuValidStateTransTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mmuVirtToPhys", (char*) mmuVirtToPhys, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mmu_node", (char*) &mmu_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "modf", (char*) modf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "modlist", (char*) &modlist, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "moduleCheck", (char*) moduleCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleCreate", (char*) moduleCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleCreateHookAdd", (char*) moduleCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleCreateHookDelete", (char*) moduleCreateHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleDelete", (char*) moduleDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleDescDestroy", (char*) moduleDescDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleEach", (char*) moduleEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleFindByGroup", (char*) moduleFindByGroup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleFindByName", (char*) moduleFindByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleFindByNameAndPath", (char*) moduleFindByNameAndPath, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleFirstSectionGet", (char*) moduleFirstSectionGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleFlagsGet", (char*) moduleFlagsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleFlagsSet", (char*) moduleFlagsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleHookLibInit", (char*) moduleHookLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleIdFigure", (char*) moduleIdFigure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleIdListGet", (char*) moduleIdListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleIdVerify", (char*) moduleIdVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleInfoGet", (char*) moduleInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleInit", (char*) moduleInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleLibInit", (char*) moduleLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleLoadHookAdd", (char*) moduleLoadHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleLoadHookDelete", (char*) moduleLoadHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleLoadHooksCall", (char*) moduleLoadHooksCall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleNameGet", (char*) moduleNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleNextSectionGet", (char*) moduleNextSectionGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSectionChecksumSet", (char*) moduleSectionChecksumSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSectionDescFree", (char*) moduleSectionDescFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSectionDescGet", (char*) moduleSectionDescGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSectionRegister", (char*) moduleSectionRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSegAdd", (char*) moduleSegAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSegEach", (char*) moduleSegEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSegFirst", (char*) moduleSegFirst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSegGet", (char*) moduleSegGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSegInfoGet", (char*) moduleSegInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleSegNext", (char*) moduleSegNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleShellCmdInit", (char*) moduleShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleShow", (char*) moduleShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleShowInit", (char*) moduleShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleUndefSymAdd", (char*) moduleUndefSymAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleUnloadHookAdd", (char*) moduleUnloadHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleUnloadHookDelete", (char*) moduleUnloadHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "moduleUnloadHooksCall", (char*) moduleUnloadHooksCall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mprotect", (char*) mprotect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mprotectSc", (char*) mprotectSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQClassId", (char*) &msgQClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "msgQClose", (char*) msgQClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQCreate", (char*) msgQCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQCreateLibInit", (char*) msgQCreateLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQDelete", (char*) msgQDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQDestroy", (char*) msgQDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQEvStart", (char*) msgQEvStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQEvStop", (char*) msgQEvStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQInfoGet", (char*) msgQInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQInit", (char*) msgQInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQInitialize", (char*) msgQInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQLibInit", (char*) msgQLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQLibInstalled", (char*) &msgQLibInstalled, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "msgQNumMsgs", (char*) msgQNumMsgs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQOpen", (char*) msgQOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQOpenInit", (char*) msgQOpenInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQReceive", (char*) msgQReceive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQReceiveSc", (char*) msgQReceiveSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQSend", (char*) msgQSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQSendSc", (char*) msgQSendSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQSmNumMsgsRtn", (char*) &msgQSmNumMsgsRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "msgQSmReceiveRtn", (char*) &msgQSmReceiveRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "msgQSmSendRtn", (char*) &msgQSmSendRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "msgQTerminate", (char*) msgQTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msgQUnlink", (char*) msgQUnlink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "msync", (char*) msync, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mtranslate", (char*) mtranslate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "munmap", (char*) munmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "munmapSc", (char*) munmapSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mutexOptionsHostLib", (char*) &mutexOptionsHostLib, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mutexOptionsIosLib", (char*) &mutexOptionsIosLib, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mutexOptionsLogLib", (char*) &mutexOptionsLogLib, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mutexOptionsNetDrv", (char*) &mutexOptionsNetDrv, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mutexOptionsSelectLib", (char*) &mutexOptionsSelectLib, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mutexOptionsSymLib", (char*) &mutexOptionsSymLib, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mutexOptionsTsfsDrv", (char*) &mutexOptionsTsfsDrv, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mutexOptionsTyLib", (char*) &mutexOptionsTyLib, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "mux2Bind", (char*) mux2Bind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mux2LibInit", (char*) mux2LibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mux2OverEndInit", (char*) mux2OverEndInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mux2OverEndOutputFilterChainDrops", (char*) &mux2OverEndOutputFilterChainDrops, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "mux2PollReceive", (char*) mux2PollReceive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mux2PollSend", (char*) mux2PollSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mux2Send", (char*) mux2Send, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxAddressForm", (char*) muxAddressForm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxBind", (char*) muxBind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxBindCommon", (char*) muxBindCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxBindStyles", (char*) &muxBindStyles, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "muxCommonInit", (char*) muxCommonInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDebug", (char*) &muxDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "muxDevAcquire", (char*) muxDevAcquire, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevConnect_desc", (char*) &muxDevConnect_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "muxDevExists", (char*) muxDevExists, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevLoad", (char*) muxDevLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevRelease", (char*) muxDevRelease, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevStart", (char*) muxDevStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevStop", (char*) muxDevStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevStopAll", (char*) muxDevStopAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevUnload", (char*) muxDevUnload, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxDevUnloadAsync", (char*) muxDevUnloadAsync, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxEndJobQDo", (char*) muxEndJobQDo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxEndJobQDoJob", (char*) muxEndJobQDoJob, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxEndListGet", (char*) muxEndListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxEndQnumGet", (char*) muxEndQnumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxEndRxJobQueue", (char*) muxEndRxJobQueue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxEndStyles", (char*) &muxEndStyles, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "muxError", (char*) muxError, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxErrorPost", (char*) muxErrorPost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxErrorSkip", (char*) muxErrorSkip, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxIfTypeGet", (char*) muxIfTypeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxIoctl", (char*) muxIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxIpcomPktFreeMblk", (char*) muxIpcomPktFreeMblk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxIpcomPktToMblkTx", (char*) muxIpcomPktToMblkTx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxL2PortDetachRtn", (char*) &muxL2PortDetachRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "muxLibInit", (char*) muxLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxLinkDownNotify", (char*) muxLinkDownNotify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxLinkHeaderCreate", (char*) muxLinkHeaderCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxLinkUpNotify", (char*) muxLinkUpNotify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxLock", (char*) &muxLock, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "muxMCastAddrAdd", (char*) muxMCastAddrAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxMCastAddrDel", (char*) muxMCastAddrDel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxMCastAddrGet", (char*) muxMCastAddrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxMblkToIpcomPktMallocDrops", (char*) &muxMblkToIpcomPktMallocDrops, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "muxMblkToIpcomPktTx", (char*) muxMblkToIpcomPktTx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxMblkToIpcomPktTxChainDrops", (char*) &muxMblkToIpcomPktTxChainDrops, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "muxPacketAddrGet", (char*) muxPacketAddrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxPacketDataGet", (char*) muxPacketDataGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxPollReceive", (char*) muxPollReceive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxPollSend", (char*) muxPollSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxProtoInfoGet", (char*) muxProtoInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxProtoListGet", (char*) muxProtoListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxReceive", (char*) muxReceive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxRestoreIpcomPktFromMblkTx", (char*) muxRestoreIpcomPktFromMblkTx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxSend", (char*) muxSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxShow", (char*) muxShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkBind", (char*) muxTkBind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkCookieGet", (char*) muxTkCookieGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkDrvCheck", (char*) muxTkDrvCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkLibInit", (char*) muxTkLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkOverEndInit", (char*) muxTkOverEndInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkPollReceive", (char*) muxTkPollReceive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkPollSend", (char*) muxTkPollSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTkSend", (char*) muxTkSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxTxRestart", (char*) muxTxRestart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "muxUnbind", (char*) muxUnbind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "mv", (char*) mv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "nae_log", (char*) nae_log, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "name_node", (char*) &name_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "namelessPrefix", (char*) &namelessPrefix, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netAttachFlag", (char*) &netAttachFlag, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netBufClOffset", (char*) &netBufClOffset, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "netBufLibInit", (char*) netBufLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netBufLibInitialize", (char*) netBufLibInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netBufLock", (char*) &netBufLock, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "netBufPoolInit", (char*) netBufPoolInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netClBlkFree", (char*) netClBlkFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netClBlkGet", (char*) netClBlkGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netClBlkJoin", (char*) netClBlkJoin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netClFree", (char*) netClFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netClPoolIdGet", (char*) netClPoolIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netClusterGet", (char*) netClusterGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netCoreSysctlInit", (char*) netCoreSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDaemonQ", (char*) netDaemonQ, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDaemonQnum", (char*) netDaemonQnum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDaemonsCount", (char*) netDaemonsCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDaemonsStart", (char*) netDaemonsStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDevBootFlag", (char*) &netDevBootFlag, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netDevCreate", (char*) netDevCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDevCreate2", (char*) netDevCreate2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDrv", (char*) netDrv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDrvDebugLevelSet", (char*) netDrvDebugLevelSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDrvFileDoesNotExist", (char*) netDrvFileDoesNotExist, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netDrvFileDoesNotExistInstall", (char*) netDrvFileDoesNotExistInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netErrnoSet", (char*) netErrnoSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netHelp", (char*) netHelp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netJobAdd", (char*) netJobAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netJobNum", (char*) &netJobNum, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netJobQueueId", (char*) &netJobQueueId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "netLibInitialize", (char*) netLibInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netLsByName", (char*) netLsByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkChainDup", (char*) netMblkChainDup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkClChainFree", (char*) netMblkClChainFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkClFree", (char*) netMblkClFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkClGet", (char*) netMblkClGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkClJoin", (char*) netMblkClJoin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkDup", (char*) netMblkDup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkFree", (char*) netMblkFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkFromBufCopy", (char*) netMblkFromBufCopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkGet", (char*) netMblkGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkOffsetToBufCopy", (char*) netMblkOffsetToBufCopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netMblkToBufCopy", (char*) netMblkToBufCopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolCreate", (char*) netPoolCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolCreateValidate", (char*) netPoolCreateValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolDelete", (char*) netPoolDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolIdGet", (char*) netPoolIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolIdGetWork", (char*) netPoolIdGetWork, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolInit", (char*) netPoolInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolInitWrapper", (char*) netPoolInitWrapper, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolKheapInit", (char*) netPoolKheapInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolNameGet", (char*) netPoolNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netPoolRelPri", (char*) &netPoolRelPri, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netPoolRelease", (char*) netPoolRelease, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netSysctl", (char*) netSysctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netSysctlCli", (char*) netSysctlCli, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netSysctlCtxList", (char*) &netSysctlCtxList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "netSysctlInit", (char*) netSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netTaskId", (char*) &netTaskId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "netTaskNamePrefix", (char*) &netTaskNamePrefix, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netTaskOptions", (char*) &netTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netTaskPriority", (char*) &netTaskPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netTaskStackSize", (char*) &netTaskStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netTupleFree", (char*) netTupleFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netTupleGet", (char*) netTupleGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "netVersionString", (char*) &netVersionString, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "net_node", (char*) &net_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "netmask", (char*) &netmask, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "netsysctlname2oid", (char*) netsysctlname2oid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "next_node", (char*) &next_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "noDev", (char*) noDev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "numLogFds", (char*) &numLogFds, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "objAlloc", (char*) objAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objAllocExtra", (char*) objAllocExtra, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objArchLibInit", (char*) objArchLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objClassIdGet", (char*) objClassIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objClassTypeGet", (char*) objClassTypeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objClose", (char*) objClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objContextGet", (char*) objContextGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objContextSet", (char*) objContextSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objCoreInit", (char*) objCoreInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objCoreInvalidate", (char*) objCoreInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objCoreReclaim", (char*) objCoreReclaim, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objCoreRelease", (char*) objCoreRelease, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objCoreTerminate", (char*) objCoreTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objCoreUnlink", (char*) objCoreUnlink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objDeleteSc", (char*) objDeleteSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objEach", (char*) objEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objFree", (char*) objFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objGenericVerify", (char*) objGenericVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objHandleAlloc", (char*) objHandleAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objHandleClose", (char*) objHandleClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objHandleDelete", (char*) objHandleDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objHandleTblCreate", (char*) objHandleTblCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objHandleTblTerminate", (char*) objHandleTblTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objHandleToObjId", (char*) objHandleToObjId, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objIdToObjHandle", (char*) objIdToObjHandle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objInfo", (char*) objInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objInfoGetSc", (char*) objInfoGetSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objInfoInit", (char*) objInfoInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objLibInit", (char*) objLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objMemAlloc", (char*) objMemAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objMemFree", (char*) objMemFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objNameGet", (char*) objNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objNameLenGet", (char*) objNameLenGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objNamePtrGet", (char*) objNamePtrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objNamePtrSet", (char*) objNamePtrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objNameSet", (char*) objNameSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objNameToId", (char*) objNameToId, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objOpen", (char*) objOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objOwnerGet", (char*) objOwnerGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objOwnerLibInstalled", (char*) &objOwnerLibInstalled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "objOwnerSet", (char*) objOwnerSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objOwnerSetBase", (char*) objOwnerSetBase, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objOwnershipInit", (char*) objOwnershipInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objRoutineNameGet", (char*) objRoutineNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objRtpAccess", (char*) objRtpAccess, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objRtpHandleAlloc", (char*) objRtpHandleAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objRtpHandleFree", (char*) objRtpHandleFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objRtpIdToObjHandle", (char*) objRtpIdToObjHandle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objRtpLibInit", (char*) objRtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objRtpRelease", (char*) objRtpRelease, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objShow", (char*) objShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objUnlink", (char*) objUnlink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objUnlinkSc", (char*) objUnlinkSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objVerify", (char*) objVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objVerifyError", (char*) objVerifyError, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objVerifyMagicRead", (char*) objVerifyMagicRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objVerifyTypeRead", (char*) objVerifyTypeRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "objectShow", (char*) objectShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "oidfmt_node", (char*) &oidfmt_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "oidsInList", (char*) &oidsInList, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "open", (char*) open, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "opendir", (char*) opendir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "oprintf", (char*) oprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "osmGuardPageSize", (char*) &osmGuardPageSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pAddrString", (char*) &pAddrString, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pAsInitParams", (char*) &pAsInitParams, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pAsMemDesc", (char*) &pAsMemDesc, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pAuxClkName", (char*) &pAuxClkName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pBusHead", (char*) &pBusHead, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pBusListHead", (char*) &pBusListHead, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pClkCookie", (char*) &pClkCookie, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pClkTimer", (char*) &pClkTimer, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pCoprocDescList", (char*) &pCoprocDescList, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pDataCollectorFunctions", (char*) &pDataCollectorFunctions, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pDbgClnt", (char*) &pDbgClnt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pDevName", (char*) &pDevName, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pDriverListHead", (char*) &pDriverListHead, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pEndPktDev", (char*) &pEndPktDev, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pHead", (char*) &pHead, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pIosDevCloseRtn", (char*) &pIosDevCloseRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pIosFdEntrySetRtn", (char*) &pIosFdEntrySetRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pIosFdInvalidRtn", (char*) &pIosFdInvalidRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pIosRemovableDevDrv", (char*) &pIosRemovableDevDrv, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pIosSuspendedDevDrv", (char*) &pIosSuspendedDevDrv, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pJobPool", (char*) &pJobPool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pLoadRoutine", (char*) &pLoadRoutine, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pLoaderHooksCall", (char*) &pLoaderHooksCall, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pM2TrapRtn", (char*) &pM2TrapRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pM2TrapRtnArg", (char*) &pM2TrapRtnArg, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pMibRtn", (char*) &pMibRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pNetPoolHead", (char*) &pNetPoolHead, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pNetSysctlCtxList", (char*) &pNetSysctlCtxList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pNullFd", (char*) &pNullFd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pPlbBus", (char*) &pPlbBus, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pPlbDev", (char*) &pPlbDev, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pPlbDevControl", (char*) &pPlbDevControl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pRebootHookTbl", (char*) &pRebootHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pRootMemStart", (char*) &pRootMemStart, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pRtpDbgCmdSvc", (char*) &pRtpDbgCmdSvc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pRtpDeleteHookTbl", (char*) &pRtpDeleteHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pRtpInitCompleteHookTbl", (char*) &pRtpInitCompleteHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pRtpPostCreateHookTbl", (char*) &pRtpPostCreateHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pRtpPreCreateHookTbl", (char*) &pRtpPreCreateHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pRtpStartupField", (char*) &pRtpStartupField, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pSockIoctlMemVal", (char*) &pSockIoctlMemVal, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pSysClkName", (char*) &pSysClkName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pSysPhysMemDescCortexA8Ext", (char*) &pSysPhysMemDescCortexA8Ext, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pSysPlbMethods", (char*) &pSysPlbMethods, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pSyscallEntryHookTbl", (char*) &pSyscallEntryHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pSyscallExitHookTbl", (char*) &pSyscallExitHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pSyscallRegisterHookTbl", (char*) &pSyscallRegisterHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pSysctlCtxList", (char*) &pSysctlCtxList, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pTaskLastDspTcb", (char*) &pTaskLastDspTcb, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pTaskLastFpTcb", (char*) &pTaskLastFpTcb, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pTgtName", (char*) &pTgtName, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pTimestampCookie", (char*) &pTimestampCookie, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pTimestampTimer", (char*) &pTimestampTimer, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pTimestampTimerName", (char*) &pTimestampTimerName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pUnixIoctlMemVal", (char*) &pUnixIoctlMemVal, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pUnloaderHooksCall", (char*) &pUnloaderHooksCall, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pVxbDelayCookie", (char*) &pVxbDelayCookie, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pVxbDelayTimer", (char*) &pVxbDelayTimer, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pVxbSpinLockGive", (char*) &pVxbSpinLockGive, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pVxbSpinLockTake", (char*) &pVxbSpinLockTake, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pWdbClnt", (char*) &pWdbClnt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pWdbCommIf", (char*) &pWdbCommIf, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pWdbCtxBpIf", (char*) &pWdbCtxBpIf, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pWdbExternSystemRegs", (char*) &pWdbExternSystemRegs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pWdbMemRegions", (char*) &pWdbMemRegions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pWdbRtIf", (char*) &pWdbRtIf, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pWdbXport", (char*) &pWdbXport, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pWvNetEvtMap", (char*) &pWvNetEvtMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pal_node", (char*) &pal_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "panic", (char*) panic, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "panicSuspend", (char*) &panicSuspend, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "partitionExist", (char*) &partitionExist, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pathBuild", (char*) pathBuild, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathCat", (char*) pathCat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathCondense", (char*) pathCondense, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathLastName", (char*) pathLastName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathLastNamePtr", (char*) pathLastNamePtr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathParse", (char*) pathParse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathSplit", (char*) pathSplit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathconf", (char*) pathconf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pathconfSc", (char*) pathconfSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pause", (char*) pause, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pc", (char*) pc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "period", (char*) period, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "periodHost", (char*) periodHost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "periodRun", (char*) periodRun, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "perror", (char*) perror, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrBaseLibInit", (char*) pgMgrBaseLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrCreate", (char*) pgMgrCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrDelete", (char*) pgMgrDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrInfoGet", (char*) pgMgrInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrInit", (char*) pgMgrInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrLibInit", (char*) pgMgrLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrMemContextShow", (char*) pgMgrMemContextShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPageAlloc", (char*) pgMgrPageAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPageAllocAt", (char*) pgMgrPageAllocAt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPageAttrGet", (char*) pgMgrPageAttrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPageAttrSet", (char*) pgMgrPageAttrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPageFree", (char*) pgMgrPageFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPageMap", (char*) pgMgrPageMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPageUnmap", (char*) pgMgrPageUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrPrivateUnmap", (char*) pgMgrPrivateUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrShow", (char*) pgMgrShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgMgrShowInit", (char*) pgMgrShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolAddToPool", (char*) pgPoolAddToPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolAlignedAlloc", (char*) pgPoolAlignedAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolAllocAt", (char*) pgPoolAllocAt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolAvailAlloc", (char*) pgPoolAvailAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolBlockListShow", (char*) pgPoolBlockListShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolCreate", (char*) pgPoolCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolDelete", (char*) pgPoolDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolFree", (char*) pgPoolFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolInfoGet", (char*) pgPoolInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolInit", (char*) pgPoolInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolLibInit", (char*) pgPoolLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolNextFreeGet", (char*) pgPoolNextFreeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysAddToPool", (char*) pgPoolPhysAddToPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysAlignedAlloc", (char*) pgPoolPhysAlignedAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysAlloc", (char*) pgPoolPhysAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysAllocAt", (char*) pgPoolPhysAllocAt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysAvailAlloc", (char*) pgPoolPhysAvailAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysFree", (char*) pgPoolPhysFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysLibInit", (char*) pgPoolPhysLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysNextFreeGet", (char*) pgPoolPhysNextFreeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysRangeEach", (char*) pgPoolPhysRangeEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysRangeIsAllocated", (char*) pgPoolPhysRangeIsAllocated, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysRangeIsFree", (char*) pgPoolPhysRangeIsFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysRangeVerify", (char*) pgPoolPhysRangeVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolPhysRemoveFromPool", (char*) pgPoolPhysRemoveFromPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolRangeStateCheck", (char*) pgPoolRangeStateCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolRangeVerify", (char*) pgPoolRangeVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolRemoveFromPool", (char*) pgPoolRemoveFromPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolShow", (char*) pgPoolShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolShowInit", (char*) pgPoolShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtAddToPool", (char*) pgPoolVirtAddToPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtAlignedAlloc", (char*) pgPoolVirtAlignedAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtAlloc", (char*) pgPoolVirtAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtAllocAt", (char*) pgPoolVirtAllocAt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtAvailAlloc", (char*) pgPoolVirtAvailAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtFree", (char*) pgPoolVirtFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtLibInit", (char*) pgPoolVirtLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtNextFreeGet", (char*) pgPoolVirtNextFreeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtRangeEach", (char*) pgPoolVirtRangeEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtRangeIsAllocated", (char*) pgPoolVirtRangeIsAllocated, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtRangeIsFree", (char*) pgPoolVirtRangeIsFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtRangeVerify", (char*) pgPoolVirtRangeVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pgPoolVirtRemoveFromPool", (char*) pgPoolVirtRemoveFromPool, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pipeDevCreate", (char*) pipeDevCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pipeDevCreateSc", (char*) pipeDevCreateSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pipeDevDelete", (char*) pipeDevDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pipeDevDeleteSc", (char*) pipeDevDeleteSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pipeDrv", (char*) pipeDrv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pipeMsgQOptions", (char*) &pipeMsgQOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "pipeSc", (char*) pipeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "plbInit1", (char*) plbInit1, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "plbIntrGet", (char*) plbIntrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "plbIntrSet", (char*) plbIntrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "plbRegister", (char*) plbRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmDefaultArena", (char*) pmDefaultArena, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmFreeSpace", (char*) pmFreeSpace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmInit", (char*) pmInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmInvalidate", (char*) pmInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmLibInit", (char*) pmLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmPartId", (char*) &pmPartId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pmRegionAddr", (char*) pmRegionAddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmRegionClose", (char*) pmRegionClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmRegionCreate", (char*) pmRegionCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmRegionOpen", (char*) pmRegionOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmRegionProtect", (char*) pmRegionProtect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmRegionSize", (char*) pmRegionSize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmShow", (char*) pmShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pmValidate", (char*) pmValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolBlockAdd", (char*) poolBlockAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolCreate", (char*) poolCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolDelete", (char*) poolDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolFindItem", (char*) poolFindItem, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolFreeCount", (char*) poolFreeCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolIdListGet", (char*) poolIdListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolIncrementGet", (char*) poolIncrementGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolIncrementSet", (char*) poolIncrementSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolInitialize", (char*) poolInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolItemGet", (char*) poolItemGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolItemReturn", (char*) poolItemReturn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolLibInit", (char*) poolLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolListGbl", (char*) &poolListGbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "poolTotalCount", (char*) poolTotalCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "poolUnusedBlocksFree", (char*) poolUnusedBlocksFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "posixSignalMode", (char*) &posixSignalMode, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "pow", (char*) pow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ppGlobalEnviron", (char*) &ppGlobalEnviron, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "printErr", (char*) printErr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "printErrno", (char*) printErrno, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "printExc", (char*) printExc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "printLogo", (char*) printLogo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "printToEDRbuf", (char*) printToEDRbuf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "printf", (char*) printf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "priorityLevel", (char*) &priorityLevel, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "priv_targetName", (char*) &priv_targetName, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "psrShow", (char*) psrShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ptyDevCreate", (char*) ptyDevCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ptyDevRemove", (char*) ptyDevRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ptyDrv", (char*) ptyDrv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "putc", (char*) putc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "putchar", (char*) putchar, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "putenv", (char*) putenv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "puts", (char*) puts, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "putw", (char*) putw, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "pwd", (char*) pwd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoClass", (char*) &qFifoClass, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qFifoClassId", (char*) &qFifoClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qFifoEach", (char*) qFifoEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoGet", (char*) qFifoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoInfo", (char*) qFifoInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoInit", (char*) qFifoInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoNext", (char*) qFifoNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoPut", (char*) qFifoPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoRemove", (char*) qFifoRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoResort", (char*) qFifoResort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qFifoRestore", (char*) qFifoRestore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapClassId", (char*) &qPriBMapClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qPriBMapEach", (char*) qPriBMapEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapGet", (char*) qPriBMapGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapInfo", (char*) qPriBMapInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapInit", (char*) qPriBMapInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapKey", (char*) qPriBMapKey, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapNext", (char*) qPriBMapNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapPut", (char*) qPriBMapPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapRemove", (char*) qPriBMapRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapResort", (char*) qPriBMapResort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapRestore", (char*) qPriBMapRestore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriBMapSet", (char*) qPriBMapSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaAdvance", (char*) qPriDeltaAdvance, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaClassId", (char*) &qPriDeltaClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qPriDeltaEach", (char*) qPriDeltaEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaGet", (char*) qPriDeltaGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaGetExpired", (char*) qPriDeltaGetExpired, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaInfo", (char*) qPriDeltaInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaInit", (char*) qPriDeltaInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaKey", (char*) qPriDeltaKey, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaNext", (char*) qPriDeltaNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaPut", (char*) qPriDeltaPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaRemove", (char*) qPriDeltaRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriDeltaResort", (char*) qPriDeltaResort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListClassId", (char*) &qPriListClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qPriListEach", (char*) qPriListEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListFromTailClassId", (char*) &qPriListFromTailClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qPriListGet", (char*) qPriListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListInfo", (char*) qPriListInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListInit", (char*) qPriListInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListKey", (char*) qPriListKey, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListNext", (char*) qPriListNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListPut", (char*) qPriListPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListPutFromTail", (char*) qPriListPutFromTail, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListRemove", (char*) qPriListRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qPriListResort", (char*) qPriListResort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qTradPriBMapClassId", (char*) &qTradPriBMapClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qTradPriBMapSetCompatible", (char*) qTradPriBMapSetCompatible, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qTradPriListClassId", (char*) &qTradPriListClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "qTradPriListSetCompatible", (char*) qTradPriListSetCompatible, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "qsort", (char*) qsort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r0", (char*) r0, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r1", (char*) r1, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r10", (char*) r10, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r11", (char*) r11, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r12", (char*) r12, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r13", (char*) r13, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r14", (char*) r14, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r2", (char*) r2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r3", (char*) r3, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r4", (char*) r4, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r5", (char*) r5, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r6", (char*) r6, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r7", (char*) r7, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r8", (char*) r8, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "r9", (char*) r9, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffCreate", (char*) rBuffCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffDestroy", (char*) rBuffDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffFlush", (char*) rBuffFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffLibInit", (char*) rBuffLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffNBytes", (char*) rBuffNBytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffPollingInterval", (char*) &rBuffPollingInterval, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rBuffRead", (char*) rBuffRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffReadCommit", (char*) rBuffReadCommit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffReadReserve", (char*) rBuffReadReserve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffReset", (char*) rBuffReset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffSetFd", (char*) rBuffSetFd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffUpload", (char*) rBuffUpload, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rBuffWrite", (char*) rBuffWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "raise", (char*) raise, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rand", (char*) rand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rawFsBioBufferSize", (char*) &rawFsBioBufferSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rawFsDevInit", (char*) rawFsDevInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rawFsDrvNum", (char*) &rawFsDrvNum, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rawFsFdListMutexOptions", (char*) &rawFsFdListMutexOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rawFsFdMutexOptions", (char*) &rawFsFdMutexOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rawFsInit", (char*) rawFsInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rawFsVolMutexOptions", (char*) &rawFsVolMutexOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rawFsVolUnmount", (char*) rawFsVolUnmount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rcmd", (char*) rcmd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rcmd_af", (char*) rcmd_af, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "read", (char*) read, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "readdir", (char*) readdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "readdir_r", (char*) readdir_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "readv", (char*) readv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "readyQBMap", (char*) &readyQBMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "readyQHead", (char*) &readyQHead, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "realDemangleToBufferEx", (char*) realDemangleToBufferEx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "realloc", (char*) realloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "reboot", (char*) reboot, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rebootHookAdd", (char*) rebootHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rebootHookDelete", (char*) rebootHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rebootHookTbl", (char*) &rebootHookTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "rebootHookTblSize", (char*) &rebootHookTblSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "recv", (char*) recv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "recvSc", (char*) recvSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "recvfrom", (char*) recvfrom, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "recvfromSc", (char*) recvfromSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "recvmsg", (char*) recvmsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "recvmsgSc", (char*) recvmsgSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "reld", (char*) reld, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "remCurIdGet", (char*) remCurIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "remCurIdSet", (char*) remCurIdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "remLastResvPort", (char*) &remLastResvPort, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "remLibInit", (char*) remLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "remLibSysctlInit", (char*) remLibSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "remNumConnRetrials", (char*) &remNumConnRetrials, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "remPasswd", (char*) &remPasswd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "remStdErrSetupTimeout", (char*) &remStdErrSetupTimeout, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "remUser", (char*) &remUser, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "remove", (char*) remove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "removeSc", (char*) removeSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rename", (char*) rename, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "renameSc", (char*) renameSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "repeat", (char*) repeat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "repeatHost", (char*) repeatHost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "repeatRun", (char*) repeatRun, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "reschedule", (char*) reschedule, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "restartTaskName", (char*) &restartTaskName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "restartTaskOptions", (char*) &restartTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "restartTaskPriority", (char*) &restartTaskPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "restartTaskStackSize", (char*) &restartTaskStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "retran_noprs", (char*) &retran_noprs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "retran_notmr", (char*) &retran_notmr, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rewind", (char*) rewind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rewinddir", (char*) rewinddir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rindex", (char*) rindex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rm", (char*) rm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rmdir", (char*) rmdir, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngBufGet", (char*) rngBufGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngBufPut", (char*) rngBufPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngCreate", (char*) rngCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngDelete", (char*) rngDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngFlush", (char*) rngFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngFreeBytes", (char*) rngFreeBytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngIsEmpty", (char*) rngIsEmpty, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngIsFull", (char*) rngIsFull, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngMoveAhead", (char*) rngMoveAhead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngNBytes", (char*) rngNBytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rngPutAhead", (char*) rngPutAhead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rootMemNBytes", (char*) &rootMemNBytes, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "rootTaskId", (char*) &rootTaskId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "roundRobinHookInstalled", (char*) &roundRobinHookInstalled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "roundRobinOn", (char*) &roundRobinOn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "roundRobinSlice", (char*) &roundRobinSlice, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "routetable_node", (char*) &routetable_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rresvport", (char*) rresvport, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rresvportCommon", (char*) rresvportCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rresvport_af", (char*) rresvport_af, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpAuxvAdd", (char*) rtpAuxvAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpAuxvCopy", (char*) rtpAuxvCopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpAuxvLibInit", (char*) rtpAuxvLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpAuxvSizeGet", (char*) rtpAuxvSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpChildHandleGet", (char*) rtpChildHandleGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpChildIdGet", (char*) rtpChildIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpChildWait", (char*) rtpChildWait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpClass", (char*) &rtpClass, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "rtpClassId", (char*) &rtpClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpCodeSize", (char*) &rtpCodeSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpCodeStart", (char*) &rtpCodeStart, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpDbgCmdFuncCall", (char*) rtpDbgCmdFuncCall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDbgCmdLibInit", (char*) rtpDbgCmdLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDbgCmdMemAlloc", (char*) rtpDbgCmdMemAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDbgCmdTaskSpawn", (char*) rtpDbgCmdTaskSpawn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDelete", (char*) rtpDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDeleteForce", (char*) rtpDeleteForce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDeleteHookAdd", (char*) rtpDeleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDeleteHookDelete", (char*) rtpDeleteHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDeleteMsg", (char*) &rtpDeleteMsg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpDeletionDeferDisable", (char*) rtpDeletionDeferDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpDeletionDeferEnable", (char*) rtpDeletionDeferEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpExecCmdDelay", (char*) &rtpExecCmdDelay, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpHandleIdGet", (char*) rtpHandleIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpHelp", (char*) rtpHelp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpHookLibInit", (char*) rtpHookLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpHookShow", (char*) rtpHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpHookTblSize", (char*) &rtpHookTblSize, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "rtpHostLibInit", (char*) rtpHostLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIdFigure", (char*) rtpIdFigure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIdVerify", (char*) rtpIdVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpInfoGet", (char*) rtpInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpInfoGetSc", (char*) rtpInfoGetSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpInitCompleteHookAdd", (char*) rtpInitCompleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpInitCompleteHookDelete", (char*) rtpInitCompleteHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpInitialStackFrameCreate", (char*) rtpInitialStackFrameCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIoDefPathGet", (char*) rtpIoDefPathGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIoDefPathSet", (char*) rtpIoDefPathSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIoFdValue", (char*) rtpIoFdValue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIoSysConstruct", (char*) rtpIoSysConstruct, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIoSysDestruct", (char*) rtpIoSysDestruct, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIoTableSizeGet", (char*) rtpIoTableSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpIoTableSizeSet", (char*) rtpIoTableSizeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpKill", (char*) rtpKill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpLibInit", (char*) rtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpLibInstalled", (char*) &rtpLibInstalled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpLkAddr", (char*) rtpLkAddr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpLkup", (char*) rtpLkup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpMemShow", (char*) rtpMemShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpNameTruncate", (char*) rtpNameTruncate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpParentDeleteNotify", (char*) rtpParentDeleteNotify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpPause", (char*) rtpPause, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpPostCreateHookAdd", (char*) rtpPostCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpPostCreateHookDelete", (char*) rtpPostCreateHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpPreCreateHookAdd", (char*) rtpPreCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpPreCreateHookDelete", (char*) rtpPreCreateHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpScLibInit", (char*) rtpScLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShellCmdInit", (char*) rtpShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShellHookInit", (char*) rtpShellHookInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShlShow", (char*) rtpShlShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShlSymbolsRegister", (char*) rtpShlSymbolsRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShlSymbolsUnregister", (char*) rtpShlSymbolsUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShow", (char*) rtpShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShowInit", (char*) rtpShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpShowShellCmdInit", (char*) rtpShowShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigCtxCreate", (char*) rtpSigCtxCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigCtxStackAlloc", (char*) rtpSigCtxStackAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigDeleteMsg", (char*) &rtpSigDeleteMsg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSigExceptionExit", (char*) rtpSigExceptionExit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigLibInit", (char*) rtpSigLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigPendDestroy", (char*) rtpSigPendDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigPendInit", (char*) rtpSigPendInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigPendKill", (char*) rtpSigPendKill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigQueueDelete", (char*) rtpSigQueueDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigQueueInit", (char*) rtpSigQueueInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigReturn", (char*) rtpSigReturn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigSavedCtxGet", (char*) rtpSigSavedCtxGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigStopMsg", (char*) &rtpSigStopMsg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSigSystemCallExit", (char*) rtpSigSystemCallExit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigaction", (char*) rtpSigaction, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigaltstack", (char*) rtpSigaltstack, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigpending", (char*) rtpSigpending, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigprocmask", (char*) rtpSigprocmask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigqueue", (char*) rtpSigqueue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigsuspend", (char*) rtpSigsuspend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigtimedwait", (char*) rtpSigtimedwait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigwait", (char*) rtpSigwait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSigwaitinfo", (char*) rtpSigwaitinfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSp", (char*) rtpSp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSpDelay", (char*) &rtpSpDelay, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSpOptions", (char*) &rtpSpOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSpPriority", (char*) &rtpSpPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSpStackSize", (char*) &rtpSpStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSpTaskOptions", (char*) &rtpSpTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSpawn", (char*) rtpSpawn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSpawnSc", (char*) rtpSpawnSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpStopMsg", (char*) &rtpStopMsg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "rtpSymTblIdGet", (char*) rtpSymTblIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSymsAdd", (char*) rtpSymsAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSymsOverride", (char*) rtpSymsOverride, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSymsRemove", (char*) rtpSymsRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSysCallCtxRegsGet", (char*) rtpSysCallCtxRegsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSysCallCtxStore", (char*) rtpSysCallCtxStore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSysCallRestartRegSet", (char*) rtpSysCallRestartRegSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSyscallSigCheck", (char*) rtpSyscallSigCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSyscallSigDeliver", (char*) rtpSyscallSigDeliver, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSysctlRegister", (char*) rtpSysctlRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpSysctlSyscall", (char*) rtpSysctlSyscall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpTaskAllCont", (char*) rtpTaskAllCont, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpTaskAllStop", (char*) rtpTaskAllStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpTaskExitRegister", (char*) rtpTaskExitRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpTaskKill", (char*) rtpTaskKill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpTaskShow", (char*) rtpTaskShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpTaskSigPendKill", (char*) rtpTaskSigPendKill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpTaskSigqueue", (char*) rtpTaskSigqueue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpUserModeSwitch", (char*) rtpUserModeSwitch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpVarAdd", (char*) rtpVarAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpVarAddSc", (char*) rtpVarAddSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpVarDelete", (char*) rtpVarDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpVarDeleteAll", (char*) rtpVarDeleteAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpVarInit", (char*) rtpVarInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpVerifyAndLock", (char*) rtpVerifyAndLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpVerifyTaskIdAndLock", (char*) rtpVerifyTaskIdAndLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpWait", (char*) rtpWait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpWaitQFlush", (char*) rtpWaitQFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpWaitQInit", (char*) rtpWaitQInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpZombieCleanup", (char*) rtpZombieCleanup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "rtpi", (char*) rtpi, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "runtimeName", (char*) &runtimeName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "runtimeVersion", (char*) &runtimeVersion, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "runtimeVersionFull", (char*) &runtimeVersionFull, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "s", (char*) s, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "scMemPrivValidate", (char*) scMemPrivValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "scMemValEnable", (char*) scMemValEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "scMemValidate", (char*) scMemValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "scalbn", (char*) scalbn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "scanCharSet", (char*) scanCharSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "scanField", (char*) scanField, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "scanf", (char*) scanf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdClassId", (char*) &sdClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sdCreate", (char*) sdCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdCreateHookAdd", (char*) sdCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdCreateHookDelete", (char*) sdCreateHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdDelete", (char*) sdDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdDeleteHookAdd", (char*) sdDeleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdDeleteHookDelete", (char*) sdDeleteHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdDeleteSc", (char*) sdDeleteSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdGenericHookAdd", (char*) sdGenericHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdGenericHookDelete", (char*) sdGenericHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdInfoGet", (char*) sdInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdInfoGetSc", (char*) sdInfoGetSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdIsMapped", (char*) sdIsMapped, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdLibInit", (char*) sdLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdLibInstalled", (char*) &sdLibInstalled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sdMap", (char*) sdMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdMapSc", (char*) sdMapSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdOpen", (char*) sdOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdProtect", (char*) sdProtect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdProtectSc", (char*) sdProtectSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdRtpMap", (char*) sdRtpMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdRtpUnmap", (char*) sdRtpUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdScInit", (char*) sdScInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdShow", (char*) sdShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdShowInit", (char*) sdShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdShowShellCmdInit", (char*) sdShowShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdUnmap", (char*) sdUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdUnmapSc", (char*) sdUnmapSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sdVerifiedLock", (char*) sdVerifiedLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selNodeAdd", (char*) selNodeAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selNodeDelete", (char*) selNodeDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selTaskDeleteHookAdd", (char*) selTaskDeleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selWakeup", (char*) selWakeup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selWakeupAll", (char*) selWakeupAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selWakeupListInit", (char*) selWakeupListInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selWakeupListLen", (char*) selWakeupListLen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selWakeupListTerm", (char*) selWakeupListTerm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selWakeupType", (char*) selWakeupType, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "select", (char*) select, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selectInit", (char*) selectInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "selectSc", (char*) selectSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBCreate", (char*) semBCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBGive", (char*) semBGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBGiveDefer", (char*) semBGiveDefer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBGiveNoLock", (char*) semBGiveNoLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBGiveScalable", (char*) semBGiveScalable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBInit", (char*) semBInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBInitialize", (char*) semBInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBTake", (char*) semBTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBTakeNoLock", (char*) semBTakeNoLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semBTakeScalable", (char*) semBTakeScalable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semCCreate", (char*) semCCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semCGive", (char*) semCGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semCGiveDefer", (char*) semCGiveDefer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semCInit", (char*) semCInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semCInitialize", (char*) semCInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semCTake", (char*) semCTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semClass", (char*) &semClass, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "semClassId", (char*) &semClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semClose", (char*) semClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semCreateTbl", (char*) &semCreateTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semCtlSc", (char*) semCtlSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semDelete", (char*) semDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semDeleteLibInit", (char*) semDeleteLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semDestroy", (char*) semDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semEvIsFreeTbl", (char*) &semEvIsFreeTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semEvStart", (char*) semEvStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semEvStop", (char*) semEvStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semExchange", (char*) semExchange, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semFlush", (char*) semFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semFlushDefer", (char*) semFlushDefer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semFlushDeferTbl", (char*) &semFlushDeferTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semFlushTbl", (char*) &semFlushTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semGive", (char*) semGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semGiveDefer", (char*) semGiveDefer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semGiveDeferTbl", (char*) &semGiveDeferTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semGiveNoLockTbl", (char*) &semGiveNoLockTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semGiveTbl", (char*) &semGiveTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semInfo", (char*) semInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semInfoGet", (char*) semInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semIntRestrict", (char*) semIntRestrict, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semInvalid", (char*) semInvalid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semLibInit", (char*) semLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semLocalIdVerify", (char*) semLocalIdVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMCreate", (char*) semMCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMGive", (char*) semMGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMGiveForce", (char*) semMGiveForce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMGiveKernWork", (char*) semMGiveKernWork, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMGiveNoLock", (char*) semMGiveNoLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMGiveScalable", (char*) semMGiveScalable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMInit", (char*) semMInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMInitialize", (char*) semMInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMPendQPut", (char*) semMPendQPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMTake", (char*) semMTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMTakeByProxy", (char*) semMTakeByProxy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMTakeNoLock", (char*) semMTakeNoLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semMTakeScalable", (char*) semMTakeScalable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semOpen", (char*) semOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semOpenInit", (char*) semOpenInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semQFlush", (char*) semQFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semQFlushDefer", (char*) semQFlushDefer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semQInit", (char*) semQInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRMinGiveHard", (char*) semRMinGiveHard, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRMinTakeHard", (char*) semRMinTakeHard, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRTake", (char*) semRTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRWCreate", (char*) semRWCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRWGive", (char*) semRWGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRWGiveForce", (char*) semRWGiveForce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRWInitialize", (char*) semRWInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semRWLibMaxReaders", (char*) &semRWLibMaxReaders, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semShow", (char*) semShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semShowInit", (char*) semShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semTake", (char*) semTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semTakeNoLockTbl", (char*) &semTakeNoLockTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semTakeTbl", (char*) &semTakeTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "semTerminate", (char*) semTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semUnlink", (char*) semUnlink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semWMinGiveHard", (char*) semWMinGiveHard, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semWMinTakeHard", (char*) semWMinTakeHard, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "semWTake", (char*) semWTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "send", (char*) send, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sendSc", (char*) sendSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "send_full", (char*) &send_full, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sendmsg", (char*) sendmsg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sendmsgSc", (char*) sendmsgSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sendto", (char*) sendto, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sendtoSc", (char*) sendtoSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setbuf", (char*) setbuf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setbuffer", (char*) setbuffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sethostname", (char*) sethostname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setjmp", (char*) setjmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setlinebuf", (char*) setlinebuf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setlocale", (char*) setlocale, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setprlimitSc", (char*) setprlimitSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setsockopt", (char*) setsockopt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setsockoptSc", (char*) setsockoptSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "settimeofday", (char*) settimeofday, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "setvbuf", (char*) setvbuf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sfpDoubleNormalize", (char*) sfpDoubleNormalize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sfpDoubleNormalize2", (char*) sfpDoubleNormalize2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sfpDoubleSetup", (char*) sfpDoubleSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sfpFloatNormalize", (char*) sfpFloatNormalize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sfpFloatSetup", (char*) sfpFloatSetup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shConfig", (char*) shConfig, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sha1_block_data_order", (char*) sha1_block_data_order, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sha1_block_host_order", (char*) sha1_block_host_order, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellAbort", (char*) shellAbort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellAbortHandledByShell", (char*) shellAbortHandledByShell, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellActivate", (char*) shellActivate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellBackgroundInit", (char*) shellBackgroundInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellBackgroundRead", (char*) shellBackgroundRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdAdd", (char*) shellCmdAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdAliasAdd", (char*) shellCmdAliasAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdAliasArrayAdd", (char*) shellCmdAliasArrayAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdAliasDelete", (char*) shellCmdAliasDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdAliasShow", (char*) shellCmdAliasShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdArrayAdd", (char*) shellCmdArrayAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdCheck", (char*) shellCmdCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdExec", (char*) shellCmdExec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdInfoArgsStore", (char*) shellCmdInfoArgsStore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdInfoCmdLineStore", (char*) shellCmdInfoCmdLineStore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdInfoFinalNameStore", (char*) shellCmdInfoFinalNameStore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdInfoGet", (char*) shellCmdInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdInfoInitialNameStore", (char*) shellCmdInfoInitialNameStore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdInit", (char*) shellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdMatchingAliasListGet", (char*) shellCmdMatchingAliasListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdMatchingCmdListGet", (char*) shellCmdMatchingCmdListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdMemRegister", (char*) shellCmdMemRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdMemUnregister", (char*) shellCmdMemUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdPreParseAdd", (char*) shellCmdPreParseAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdPreParsedGet", (char*) shellCmdPreParsedGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdStatementExec", (char*) shellCmdStatementExec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdStatementSplit", (char*) shellCmdStatementSplit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdSymTabIdGet", (char*) shellCmdSymTabIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdTaskIdConvert", (char*) shellCmdTaskIdConvert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCmdTopicAdd", (char*) shellCmdTopicAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCompatibleCheck", (char*) shellCompatibleCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCompatibleSet", (char*) shellCompatibleSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellCompletionPathnameGet", (char*) shellCompletionPathnameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigDefaultGet", (char*) shellConfigDefaultGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigDefaultSet", (char*) shellConfigDefaultSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigDefaultValueGet", (char*) shellConfigDefaultValueGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigDefaultValueSet", (char*) shellConfigDefaultValueSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigDefaultValueUnset", (char*) shellConfigDefaultValueUnset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigGet", (char*) shellConfigGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigLibInit", (char*) shellConfigLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigSet", (char*) shellConfigSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigValueGet", (char*) shellConfigValueGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigValueSet", (char*) shellConfigValueSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConfigValueUnset", (char*) shellConfigValueUnset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConsoleInit", (char*) shellConsoleInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellConsoleTaskId", (char*) &shellConsoleTaskId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "shellContextFinalize", (char*) shellContextFinalize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellContextInit", (char*) shellContextInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellContextListLock", (char*) shellContextListLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellContextListUnlock", (char*) shellContextListUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataAdd", (char*) shellDataAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataAllRemove", (char*) shellDataAllRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataFirst", (char*) shellDataFirst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataFromNameAdd", (char*) shellDataFromNameAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataFromNameGet", (char*) shellDataFromNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataGet", (char*) shellDataGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataNext", (char*) shellDataNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellDataRemove", (char*) shellDataRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellErrnoGet", (char*) shellErrnoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellErrnoSet", (char*) shellErrnoSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellExec", (char*) shellExec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellExitWrapper", (char*) shellExitWrapper, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellFirst", (char*) shellFirst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellFromNameGet", (char*) shellFromNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellFromTaskGet", (char*) shellFromTaskGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellFromTaskParentContextGet", (char*) shellFromTaskParentContextGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellGenericCreate", (char*) shellGenericCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellGenericInit", (char*) shellGenericInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellHistLibInit", (char*) shellHistLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellHistSaveOrLoad", (char*) shellHistSaveOrLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellHistory", (char*) shellHistory, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellIOStdGet", (char*) shellIOStdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellIOStdSet", (char*) shellIOStdSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellIdVerify", (char*) shellIdVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBgndClose", (char*) shellInOutBgndClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBgndGet", (char*) shellInOutBgndGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBgndIoClose", (char*) shellInOutBgndIoClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBgndOpen", (char*) shellInOutBgndOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBgndRegister", (char*) shellInOutBgndRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingBlock", (char*) shellInOutBlockingBlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingBlockedDataGet", (char*) shellInOutBlockingBlockedDataGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingClose", (char*) shellInOutBlockingClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingDataSet", (char*) shellInOutBlockingDataSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingGet", (char*) shellInOutBlockingGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingOnDataClose", (char*) shellInOutBlockingOnDataClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingOpen", (char*) shellInOutBlockingOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutBlockingUnblock", (char*) shellInOutBlockingUnblock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutInitialGet", (char*) shellInOutInitialGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutInputHookAdd", (char*) shellInOutInputHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutInputHookDelete", (char*) shellInOutInputHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutInputHookSet", (char*) shellInOutInputHookSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutInputHookUnset", (char*) shellInOutInputHookUnset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutInputUniqueCheck", (char*) shellInOutInputUniqueCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutMasterPtyGet", (char*) shellInOutMasterPtyGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutRedirectClose", (char*) shellInOutRedirectClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutRedirectOpen", (char*) shellInOutRedirectOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutRedirectRestore", (char*) shellInOutRedirectRestore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutRedirectScript", (char*) shellInOutRedirectScript, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutRedirectSet", (char*) shellInOutRedirectSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutSet", (char*) shellInOutSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutSlavePtyGet", (char*) shellInOutSlavePtyGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInOutUse", (char*) shellInOutUse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalArgStackAllocate", (char*) shellInternalArgStackAllocate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalArgumentEval", (char*) shellInternalArgumentEval, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalDataSymbolGet", (char*) shellInternalDataSymbolGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalDecValueDisplay", (char*) shellInternalDecValueDisplay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalFuncDoubleArgAdd", (char*) shellInternalFuncDoubleArgAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalFuncFloatArgAdd", (char*) shellInternalFuncFloatArgAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalFuncLLongArgAdd", (char*) shellInternalFuncLLongArgAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalFuncLongArgAdd", (char*) shellInternalFuncLongArgAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalFunctionCall", (char*) shellInternalFunctionCall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalHexValueDisplay", (char*) shellInternalHexValueDisplay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalKernelSymbolCreate", (char*) shellInternalKernelSymbolCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalOptFree", (char*) shellInternalOptFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalOptGet", (char*) shellInternalOptGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrSpaceTokenize", (char*) shellInternalStrSpaceTokenize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrToChar", (char*) shellInternalStrToChar, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrToFloat", (char*) shellInternalStrToFloat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrToInt", (char*) shellInternalStrToInt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrToInt2", (char*) shellInternalStrToInt2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrToInt32", (char*) shellInternalStrToInt32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrToLong", (char*) shellInternalStrToLong, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrTokenize", (char*) shellInternalStrTokenize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalStrUnquote", (char*) shellInternalStrUnquote, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalSymTblFromRtpGet", (char*) shellInternalSymTblFromRtpGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalSymTblFromTaskGet", (char*) shellInternalSymTblFromTaskGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalSymbolDisplay", (char*) shellInternalSymbolDisplay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalSymbolGet", (char*) shellInternalSymbolGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalSymbolsResolve", (char*) shellInternalSymbolsResolve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalTaskNameMatch", (char*) shellInternalTaskNameMatch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalTextSymbolGet", (char*) shellInternalTextSymbolGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInternalValueDisplay", (char*) shellInternalValueDisplay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpByNameFind", (char*) shellInterpByNameFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCInit", (char*) shellInterpCInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_create_buffer", (char*) shellInterpC_create_buffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_delete_buffer", (char*) shellInterpC_delete_buffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_flush_buffer", (char*) shellInterpC_flush_buffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_init_buffer", (char*) shellInterpC_init_buffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_load_buffer_state", (char*) shellInterpC_load_buffer_state, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_scan_buffer", (char*) shellInterpC_scan_buffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_scan_bytes", (char*) shellInterpC_scan_bytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_scan_string", (char*) shellInterpC_scan_string, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpC_switch_to_buffer", (char*) shellInterpC_switch_to_buffer, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCin", (char*) &shellInterpCin, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "shellInterpCleng", (char*) &shellInterpCleng, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "shellInterpClex", (char*) shellInterpClex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCmdInit", (char*) shellInterpCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCmdLibInit", (char*) shellInterpCmdLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCout", (char*) &shellInterpCout, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "shellInterpCparse", (char*) shellInterpCparse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCrestart", (char*) shellInterpCrestart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCtext", (char*) &shellInterpCtext, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "shellInterpCtxCreate", (char*) shellInterpCtxCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpCtxGet", (char*) shellInterpCtxGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpDefaultNameGet", (char*) shellInterpDefaultNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpDelete", (char*) shellInterpDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpEvaluate", (char*) shellInterpEvaluate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpLibInit", (char*) shellInterpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpNameGet", (char*) shellInterpNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpPromptDftSet", (char*) shellInterpPromptDftSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpPromptGet", (char*) shellInterpPromptGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpPromptSet", (char*) shellInterpPromptSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpRegister", (char*) shellInterpRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpRestart", (char*) shellInterpRestart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpSet", (char*) shellInterpSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellInterpSwitch", (char*) shellInterpSwitch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellLibInit", (char*) shellLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellLineLenGet", (char*) shellLineLenGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellLock", (char*) shellLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellLoginInstall", (char*) shellLoginInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellLogout", (char*) shellLogout, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellLogout2", (char*) shellLogout2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellLogoutInstall", (char*) shellLogoutInstall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMaxSessionsSet", (char*) shellMaxSessionsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemAllRegFree", (char*) shellMemAllRegFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemCalloc", (char*) shellMemCalloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemFree", (char*) shellMemFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemLibInit", (char*) shellMemLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemMalloc", (char*) shellMemMalloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemRealloc", (char*) shellMemRealloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemRegAllFree", (char*) shellMemRegAllFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemRegFree", (char*) shellMemRegFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemRegMalloc", (char*) shellMemRegMalloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemRegister", (char*) shellMemRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemStrdup", (char*) shellMemStrdup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemStringAdd", (char*) shellMemStringAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemStringFree", (char*) shellMemStringFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemStringIsAllocated", (char*) shellMemStringIsAllocated, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemStringShow", (char*) shellMemStringShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellMemUnregister", (char*) shellMemUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellNext", (char*) shellNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellOutputLock", (char*) shellOutputLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellOutputUnlock", (char*) shellOutputUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellParserControl", (char*) shellParserControl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPrint", (char*) shellPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPrintErr", (char*) shellPrintErr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPromptFmtDftSet", (char*) shellPromptFmtDftSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPromptFmtSet", (char*) shellPromptFmtSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPromptFmtStrAdd", (char*) shellPromptFmtStrAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPromptLibInit", (char*) shellPromptLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPromptPrint", (char*) shellPromptPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellPromptSet", (char*) shellPromptSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellRemoteConfigStr", (char*) &shellRemoteConfigStr, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "shellResourceReleaseHookAdd", (char*) shellResourceReleaseHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellRestart", (char*) shellRestart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellScriptAbort", (char*) shellScriptAbort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellScriptNoAbort", (char*) shellScriptNoAbort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTask", (char*) shellTask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultBaseNameGet", (char*) shellTaskDefaultBaseNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultBaseNameSet", (char*) shellTaskDefaultBaseNameSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultOptionsGet", (char*) shellTaskDefaultOptionsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultOptionsSet", (char*) shellTaskDefaultOptionsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultPriorityGet", (char*) shellTaskDefaultPriorityGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultPrioritySet", (char*) shellTaskDefaultPrioritySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultStackSizeGet", (char*) shellTaskDefaultStackSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskDefaultStackSizeSet", (char*) shellTaskDefaultStackSizeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskGet", (char*) shellTaskGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTaskIdDefault", (char*) shellTaskIdDefault, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellTerminate", (char*) shellTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxAttach", (char*) shellWorkingMemCtxAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxAttachedShow", (char*) shellWorkingMemCtxAttachedShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxCurrentGet", (char*) shellWorkingMemCtxCurrentGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxCurrentSet", (char*) shellWorkingMemCtxCurrentSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxDetach", (char*) shellWorkingMemCtxDetach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxDuplicate", (char*) shellWorkingMemCtxDuplicate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxGet", (char*) shellWorkingMemCtxGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxIdConvert", (char*) shellWorkingMemCtxIdConvert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxLastGet", (char*) shellWorkingMemCtxLastGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shellWorkingMemCtxRtnSet", (char*) shellWorkingMemCtxRtnSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlIdGive", (char*) shlIdGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlLibInit", (char*) shlLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlNodeList", (char*) &shlNodeList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "shlNodeListMutex", (char*) &shlNodeListMutex, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "shlNodeTake", (char*) shlNodeTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlNodeToShlId", (char*) shlNodeToShlId, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlRtpDeleteAll", (char*) shlRtpDeleteAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlRtpInfoGet", (char*) shlRtpInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlScLibInit", (char*) shlScLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlShellCmdInit", (char*) shlShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlShow", (char*) shlShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlShowInit", (char*) shlShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlSymsAdd", (char*) shlSymsAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shlSymsRemove", (char*) shlSymsRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "show", (char*) show, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "showLoggerInfo", (char*) showLoggerInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shutdown", (char*) shutdown, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "shutdownSc", (char*) shutdownSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigEvtRtn", (char*) &sigEvtRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sigInit", (char*) sigInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigPendDestroy", (char*) sigPendDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigPendInit", (char*) sigPendInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigPendKill", (char*) sigPendKill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigaction", (char*) sigaction, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigaddset", (char*) sigaddset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigaltstackSc", (char*) sigaltstackSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigblock", (char*) sigblock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigdelset", (char*) sigdelset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigemptyset", (char*) sigemptyset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigfillset", (char*) sigfillset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigismember", (char*) sigismember, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "signal", (char*) signal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigpending", (char*) sigpending, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigpendingSc", (char*) sigpendingSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigprocmask", (char*) sigprocmask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigprocmaskSc", (char*) sigprocmaskSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigqueue", (char*) sigqueue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigqueueInit", (char*) sigqueueInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigreturn", (char*) sigreturn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigsetjmp", (char*) sigsetjmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigsetmask", (char*) sigsetmask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigsuspend", (char*) sigsuspend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigtimedwait", (char*) sigtimedwait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigvec", (char*) sigvec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigwait", (char*) sigwait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sigwaitinfo", (char*) sigwaitinfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sin", (char*) sin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sinh", (char*) sinh, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sioChanConnect_desc", (char*) &sioChanConnect_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sioChanGet_desc", (char*) &sioChanGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sioNextChannelNumberAssign", (char*) sioNextChannelNumberAssign, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sizeNodesAlloc", (char*) sizeNodesAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllCount", (char*) sllCount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllEach", (char*) sllEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllGet", (char*) sllGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllInit", (char*) sllInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllPrevious", (char*) sllPrevious, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllPutAtHead", (char*) sllPutAtHead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllPutAtTail", (char*) sllPutAtTail, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllRemove", (char*) sllRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sllTerminate", (char*) sllTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "smObjPoolMinusOne", (char*) &smObjPoolMinusOne, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "smObjTaskDeleteFailRtn", (char*) &smObjTaskDeleteFailRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "smObjTcbFreeFailRtn", (char*) &smObjTcbFreeFailRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "smObjTcbFreeRtn", (char*) &smObjTcbFreeRtn, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "snprintf", (char*) snprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "so", (char*) so, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sockInfo", (char*) sockInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sockLibAdd", (char*) sockLibAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sockLibInit", (char*) sockLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sockLibMap", (char*) &sockLibMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sockScLibInit", (char*) sockScLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sockShow", (char*) sockShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "socket", (char*) socket, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "socketDevHdr", (char*) &socketDevHdr, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "socketSc", (char*) socketSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sp", (char*) sp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spTaskOptions", (char*) &spTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spTaskPriority", (char*) &spTaskPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spTaskStackSize", (char*) &spTaskStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spinLockIsrGive", (char*) spinLockIsrGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spinLockIsrInit", (char*) spinLockIsrInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spinLockIsrTake", (char*) spinLockIsrTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spinLockRestrict", (char*) spinLockRestrict, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spinLockTaskGive", (char*) spinLockTaskGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spinLockTaskInit", (char*) spinLockTaskInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spinLockTaskTake", (char*) spinLockTaskTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sprintf", (char*) sprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spy", (char*) spy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyClkStart", (char*) spyClkStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyClkStartCommon", (char*) spyClkStartCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyClkStop", (char*) spyClkStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyClkStopCommon", (char*) spyClkStopCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyComTask", (char*) spyComTask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyCommon", (char*) spyCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyCommon2", (char*) spyCommon2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyCpuTbl", (char*) &spyCpuTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "spyHelp", (char*) spyHelp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyIdleTotalTicks", (char*) &spyIdleTotalTicks, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "spyIncTicks", (char*) &spyIncTicks, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "spyInterruptTotalTicks", (char*) &spyInterruptTotalTicks, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "spyKernelTotalTicks", (char*) &spyKernelTotalTicks, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "spyLibInit", (char*) spyLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyNoSymbolPrint", (char*) &spyNoSymbolPrint, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spyReport", (char*) spyReport, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyReportCommon", (char*) spyReportCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyReportCommon2", (char*) spyReportCommon2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyShellCmdInit", (char*) spyShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyStop", (char*) spyStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyStopCommon", (char*) spyStopCommon, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyTask", (char*) spyTask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "spyTaskId", (char*) &spyTaskId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spyTaskOptions", (char*) &spyTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spyTaskPriority", (char*) &spyTaskPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spyTaskStackSize", (char*) &spyTaskStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "spyTotalTicks", (char*) &spyTotalTicks, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sqrt", (char*) sqrt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "srand", (char*) srand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sscanf", (char*) sscanf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "startupScriptFieldSplit", (char*) startupScriptFieldSplit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "stat", (char*) stat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "statSymTbl", (char*) &statSymTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "statfs", (char*) statfs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "statfs64", (char*) statfs64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "stdioFp", (char*) stdioFp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "stdioFpCreate", (char*) stdioFpCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "stdioFpDestroy", (char*) stdioFpDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "stdioInit", (char*) stdioInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "stopApplLogger", (char*) stopApplLogger, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strFree", (char*) strFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strcasecmp", (char*) strcasecmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strcat", (char*) strcat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strchr", (char*) strchr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strcmp", (char*) strcmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strcoll", (char*) strcoll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strcpy", (char*) strcpy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strcspn", (char*) strcspn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strdup", (char*) strdup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strerror", (char*) strerror, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strerrorIf", (char*) strerrorIf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strerror_r", (char*) strerror_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strftime", (char*) strftime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strlcpy", (char*) strlcpy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strlen", (char*) strlen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strncasecmp", (char*) strncasecmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strncat", (char*) strncat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strncmp", (char*) strncmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strncpy", (char*) strncpy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strpbrk", (char*) strpbrk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strrchr", (char*) strrchr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strspn", (char*) strspn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strstr", (char*) strstr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strtod", (char*) strtod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strtok", (char*) strtok, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strtok_r", (char*) strtok_r, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strtol", (char*) strtol, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strtoul", (char*) strtoul, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "strxfrm", (char*) strxfrm, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "substrcmp", (char*) substrcmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "svDataCollectorLibInit", (char*) svDataCollectorLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "svDataCollectorsAdd", (char*) svDataCollectorsAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "svDataCollectorsRemove", (char*) svDataCollectorsRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "svDataCollectorsRemoveAll", (char*) svDataCollectorsRemoveAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "swab", (char*) swab, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symAdd", (char*) symAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symByCNameFind", (char*) symByCNameFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symByValueAndTypeFind", (char*) symByValueAndTypeFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symByValueFind", (char*) symByValueFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symEach", (char*) symEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symEachCall", (char*) symEachCall, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symFind", (char*) symFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symFindByName", (char*) symFindByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symFindByNameAndType", (char*) symFindByNameAndType, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symFindByValue", (char*) symFindByValue, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symFindByValueAndType", (char*) symFindByValueAndType, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symFindSymbol", (char*) symFindSymbol, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symFree", (char*) symFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symGroupDefault", (char*) &symGroupDefault, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "symLibInit", (char*) symLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symListGet", (char*) symListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symLkupPgSz", (char*) &symLkupPgSz, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "symNameGet", (char*) symNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symRegister", (char*) symRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symRemove", (char*) symRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symShellCmdInit", (char*) symShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symShow", (char*) symShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symShowInit", (char*) symShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTblAdd", (char*) symTblAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTblCreate", (char*) symTblCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTblDelete", (char*) symTblDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTblRemove", (char*) symTblRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTblShutdown", (char*) symTblShutdown, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTblSymSetRemove", (char*) symTblSymSetRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTypeGet", (char*) symTypeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symTypeToStringConvert", (char*) symTypeToStringConvert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "symValueGet", (char*) symValueGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syncLoadRtn", (char*) &syncLoadRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "syncSymAddRtn", (char*) &syncSymAddRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "syncSymRemoveRtn", (char*) &syncSymRemoveRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "syncUnldRtn", (char*) &syncUnldRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysAbsSymPhysMemBottom", (char*) 0x10000000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "sysAbsSymPhysMemSize", (char*) 0x3fe00000, 0, 0, SYM_GLOBAL | SYM_ABS},
        {{NULL}, "sysAdaEnable", (char*) &sysAdaEnable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysAuxClkConnect", (char*) sysAuxClkConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysAuxClkDisable", (char*) sysAuxClkDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysAuxClkEnable", (char*) sysAuxClkEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysAuxClkHandleGet", (char*) sysAuxClkHandleGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysAuxClkRateGet", (char*) sysAuxClkRateGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysAuxClkRateSet", (char*) sysAuxClkRateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysBootFile", (char*) &sysBootFile, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysBootHost", (char*) &sysBootHost, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysBootLine", (char*) &sysBootLine, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysBootParams", (char*) &sysBootParams, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysBspDevFilter_desc", (char*) &sysBspDevFilter_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysBspRev", (char*) sysBspRev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysBus", (char*) &sysBus, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysCacheLibInit", (char*) &sysCacheLibInit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysClkConnect", (char*) sysClkConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkDevUnitNo", (char*) &sysClkDevUnitNo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysClkDisable", (char*) sysClkDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkEnable", (char*) sysClkEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkFreqGet", (char*) sysClkFreqGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkHandleGet", (char*) sysClkHandleGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkInit", (char*) sysClkInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkRateGet", (char*) sysClkRateGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkRateSet", (char*) sysClkRateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysClkTimerNo", (char*) &sysClkTimerNo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysCplusEnable", (char*) &sysCplusEnable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysCpu", (char*) &sysCpu, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysCpuAvailableGet", (char*) sysCpuAvailableGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysDebugModeGet", (char*) sysDebugModeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysDebugModeInit", (char*) sysDebugModeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysDebugModeSet", (char*) sysDebugModeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysDebugModeSetHookAdd", (char*) sysDebugModeSetHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysDebugModeSetHookDelete", (char*) sysDebugModeSetHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysDelay", (char*) sysDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysExcMsg", (char*) &sysExcMsg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysFecEnetAddrGet", (char*) sysFecEnetAddrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysFlags", (char*) &sysFlags, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysFlashGet", (char*) sysFlashGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysFlashSet", (char*) sysFlashSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysHwInit", (char*) sysHwInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysHwInit0", (char*) sysHwInit0, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysHwInit2", (char*) sysHwInit2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysInByte", (char*) sysInByte, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysInLong", (char*) sysInLong, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysInWord", (char*) sysInWord, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysInit", (char*) sysInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysInstParamTable", (char*) &sysInstParamTable, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysIntLvlChgRtn", (char*) &sysIntLvlChgRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysIntLvlDisableRtn", (char*) &sysIntLvlDisableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysIntLvlEnableRtn", (char*) &sysIntLvlEnableRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysIntLvlVecAckRtn", (char*) &sysIntLvlVecAckRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysIntLvlVecChkRtn", (char*) &sysIntLvlVecChkRtn, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysL2CacheEnabled", (char*) &sysL2CacheEnabled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysMacIndex2Dev", (char*) sysMacIndex2Dev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysMacIndex2Unit", (char*) sysMacIndex2Unit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysMacOffsetGet", (char*) sysMacOffsetGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysMemTop", (char*) sysMemTop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysMmuLibInit", (char*) &sysMmuLibInit, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysModel", (char*) sysModel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysMsDelay", (char*) sysMsDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysNetDevName", (char*) &sysNetDevName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysNetMacAddrGet", (char*) sysNetMacAddrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysNetMacAddrSet", (char*) sysNetMacAddrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysNetMacNVRamAddrGet", (char*) sysNetMacNVRamAddrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysNvRamGet", (char*) sysNvRamGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysNvRamSet", (char*) sysNvRamSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysOutByte", (char*) sysOutByte, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysOutLong", (char*) sysOutLong, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysOutWord", (char*) sysOutWord, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysPhysMemDesc", (char*) &sysPhysMemDesc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysPhysMemDescCortexA8ExtNumEnt", (char*) &sysPhysMemDescCortexA8ExtNumEnt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysPhysMemDescNumEnt", (char*) &sysPhysMemDescNumEnt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysPhysMemTop", (char*) sysPhysMemTop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysProcNum", (char*) &sysProcNum, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysProcNumGet", (char*) sysProcNumGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysProcNumSet", (char*) sysProcNumSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysSerialChanConnect", (char*) sysSerialChanConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysSerialChanGet", (char*) sysSerialChanGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysSerialConnectAll", (char*) sysSerialConnectAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysStart", (char*) sysStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysStartType", (char*) &sysStartType, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysSymPhysMemBottom", (char*) &sysSymPhysMemBottom, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysSymPhysMemSize", (char*) &sysSymPhysMemSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysSymTbl", (char*) &sysSymTbl, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysTextProtect", (char*) &sysTextProtect, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysTimestamp", (char*) sysTimestamp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysTimestampConnect", (char*) sysTimestampConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysTimestampDisable", (char*) sysTimestampDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysTimestampEnable", (char*) sysTimestampEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysTimestampFreq", (char*) sysTimestampFreq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysTimestampHandleGet", (char*) sysTimestampHandleGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysTimestampLock", (char*) sysTimestampLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysTimestampPeriod", (char*) sysTimestampPeriod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysToMonitor", (char*) sysToMonitor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysUsDelay", (char*) sysUsDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysVmContext", (char*) &sysVmContext, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "syscallArchInit", (char*) syscallArchInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallDispatch", (char*) syscallDispatch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallEntryHookAdd", (char*) syscallEntryHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallEntryHookDelete", (char*) syscallEntryHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallExitHookAdd", (char*) syscallExitHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallExitHookDelete", (char*) syscallExitHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallGroupName", (char*) &syscallGroupName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "syscallGroupRegister", (char*) syscallGroupRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallGroupTbl", (char*) &syscallGroupTbl, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "syscallHookLibInit", (char*) syscallHookLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallHookShow", (char*) syscallHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallHookTblSize", (char*) &syscallHookTblSize, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "syscallLibInit", (char*) syscallLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallMonitor", (char*) syscallMonitor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallRegisterHookAdd", (char*) syscallRegisterHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallRegisterHookDelete", (char*) syscallRegisterHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallShow", (char*) syscallShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallShowInit", (char*) syscallShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscallTrapHandle", (char*) syscallTrapHandle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "syscall_node", (char*) &syscall_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysctl", (char*) sysctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctlCtxList", (char*) &sysctlCtxList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysctlInit", (char*) sysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctlSc", (char*) sysctlSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctlScLibInit", (char*) sysctlScLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl__children", (char*) &sysctl__children, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "sysctl_add_oid", (char*) sysctl_add_oid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_add_oid_internal", (char*) sysctl_add_oid_internal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_ctx_entry_add", (char*) sysctl_ctx_entry_add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_ctx_entry_find", (char*) sysctl_ctx_entry_find, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_ctx_free", (char*) sysctl_ctx_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_ctx_init", (char*) sysctl_ctx_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_find_oid", (char*) sysctl_find_oid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_handle_int", (char*) sysctl_handle_int, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_handle_long", (char*) sysctl_handle_long, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_handle_opaque", (char*) sysctl_handle_opaque, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_handle_reg", (char*) sysctl_handle_reg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_handle_string", (char*) sysctl_handle_string, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_node", (char*) &sysctl_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "sysctl_register_oid", (char*) sysctl_register_oid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_remove_oid", (char*) sysctl_remove_oid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_sysctl_debug_dump_node", (char*) sysctl_sysctl_debug_dump_node, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctl_unregister_oid", (char*) sysctl_unregister_oid, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctlbyname", (char*) sysctlbyname, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "sysctlnametomib", (char*) sysctlnametomib, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "system", (char*) system, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "systemSecurityIsEnabled", (char*) &systemSecurityIsEnabled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tExcTaskExcStk", (char*) &tExcTaskExcStk, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "tExcTaskStk", (char*) &tExcTaskStk, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "tExcTaskTcb", (char*) &tExcTaskTcb, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "tagCheckEvaluateAsserts", (char*) tagCheckEvaluateAsserts, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tagCheckModuleAdd", (char*) tagCheckModuleAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tagCheckModuleDel", (char*) tagCheckModuleDel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tagCheckStatementAdd", (char*) tagCheckStatementAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taglist", (char*) &taglist, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "tan", (char*) tan, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tanh", (char*) tanh, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskActivate", (char*) taskActivate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskArgsGet", (char*) taskArgsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskArgsSet", (char*) taskArgsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskBpHook", (char*) &taskBpHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskBpHookSet", (char*) taskBpHookSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskClassId", (char*) &taskClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskClose", (char*) taskClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCont", (char*) taskCont, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCpuAffinityGet", (char*) taskCpuAffinityGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCpuAffinitySet", (char*) taskCpuAffinitySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCpuLock", (char*) taskCpuLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCpuUnlock", (char*) taskCpuUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCpuUnlockNoResched", (char*) taskCpuUnlockNoResched, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreat", (char*) taskCreat, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreate", (char*) taskCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreateHookAdd", (char*) taskCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreateHookDelete", (char*) taskCreateHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreateHookInit", (char*) taskCreateHookInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreateHookShow", (char*) taskCreateHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreateHooks", (char*) &taskCreateHooks, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskCreateHooksArrayA", (char*) &taskCreateHooksArrayA, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskCreateHooksArrayB", (char*) &taskCreateHooksArrayB, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskCreateLibInit", (char*) taskCreateLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCreateWithGuard", (char*) taskCreateWithGuard, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskCtlSc", (char*) taskCtlSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDelay", (char*) taskDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDelaySc", (char*) taskDelaySc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDelete", (char*) taskDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDeleteForce", (char*) taskDeleteForce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDeleteHookAdd", (char*) taskDeleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDeleteHookDelete", (char*) taskDeleteHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDeleteHookShow", (char*) taskDeleteHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskDeleteHooks", (char*) &taskDeleteHooks, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskDeleteHooksArrayA", (char*) &taskDeleteHooksArrayA, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskDeleteHooksArrayB", (char*) &taskDeleteHooksArrayB, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskDestroy", (char*) taskDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskEach", (char*) taskEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskExit", (char*) taskExit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskHookShowInit", (char*) taskHookShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIdCurrent", (char*) &taskIdCurrent, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskIdDefault", (char*) taskIdDefault, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIdFigure", (char*) taskIdFigure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIdListGet", (char*) taskIdListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIdListSort", (char*) taskIdListSort, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIdSelf", (char*) taskIdSelf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIdVerify", (char*) taskIdVerify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskInfoGet", (char*) taskInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskInit", (char*) taskInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskInitExcStk", (char*) taskInitExcStk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskInitialize", (char*) taskInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIsDelayed", (char*) taskIsDelayed, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIsPended", (char*) taskIsPended, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIsReady", (char*) taskIsReady, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIsStopped", (char*) taskIsStopped, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskIsSuspended", (char*) taskIsSuspended, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskKerExcStackSize", (char*) &taskKerExcStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskKerExcStkOverflowSize", (char*) &taskKerExcStkOverflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskKerExecStkOverflowSize", (char*) &taskKerExecStkOverflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskKerExecStkUnderflowSize", (char*) &taskKerExecStkUnderflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskKillSc", (char*) taskKillSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskLibInit", (char*) taskLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskLock", (char*) taskLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskMemCtxSwitch", (char*) taskMemCtxSwitch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskMemLibInit", (char*) taskMemLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskName", (char*) taskName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskNameToId", (char*) taskNameToId, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskOpen", (char*) taskOpen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskOpenInit", (char*) taskOpenInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskOptionsGet", (char*) taskOptionsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskOptionsSet", (char*) taskOptionsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskOptionsString", (char*) taskOptionsString, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskPriNormalGet", (char*) taskPriNormalGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskPriorityGet", (char*) taskPriorityGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskPrioritySet", (char*) taskPrioritySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRegName", (char*) &taskRegName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskRegsGet", (char*) taskRegsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRegsInit", (char*) taskRegsInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRegsModify", (char*) taskRegsModify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRegsSet", (char*) taskRegsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRegsShow", (char*) taskRegsShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRegsShowOutput", (char*) taskRegsShowOutput, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskReservedFieldGet", (char*) taskReservedFieldGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskReservedFieldSet", (char*) taskReservedFieldSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskReservedNumAllot", (char*) taskReservedNumAllot, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskReset", (char*) taskReset, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRestart", (char*) taskRestart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskResume", (char*) taskResume, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskRtnValueSet", (char*) taskRtnValueSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSafe", (char*) taskSafe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSchedInfoGet", (char*) taskSchedInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskShellCmdInit", (char*) taskShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskShow", (char*) taskShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskShowInit", (char*) taskShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSpareFieldGet", (char*) taskSpareFieldGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSpareFieldSet", (char*) taskSpareFieldSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSpareNumAllot", (char*) taskSpareNumAllot, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSpawn", (char*) taskSpawn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStackAlloc", (char*) taskStackAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStackAllot", (char*) taskStackAllot, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStackFree", (char*) taskStackFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStackGuardPageEnable", (char*) taskStackGuardPageEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStackNoExecEnable", (char*) taskStackNoExecEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStackSizeGet", (char*) taskStackSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStatusString", (char*) taskStatusString, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStop", (char*) taskStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStopForce", (char*) taskStopForce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskStopMsg", (char*) &taskStopMsg, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskSuspend", (char*) taskSuspend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwapHookAdd", (char*) taskSwapHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwapHookAttach", (char*) taskSwapHookAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwapHookDelete", (char*) taskSwapHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwapHookDetach", (char*) taskSwapHookDetach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwapHookShow", (char*) taskSwapHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwapReference", (char*) &taskSwapReference, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskSwapTable", (char*) &taskSwapTable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskSwitchHookAdd", (char*) taskSwitchHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwitchHookDelete", (char*) taskSwitchHookDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwitchHookShow", (char*) taskSwitchHookShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskSwitchTable", (char*) &taskSwitchTable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "taskTcb", (char*) taskTcb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskTerminate", (char*) taskTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskUndelay", (char*) taskUndelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskUnlink", (char*) taskUnlink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskUnlock", (char*) taskUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskUnsafe", (char*) taskUnsafe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskUnsafeInternal", (char*) taskUnsafeInternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskUsrExcStackSize", (char*) &taskUsrExcStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskUsrExcStkOverflowSize", (char*) &taskUsrExcStkOverflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskUsrExecStkOverflowSize", (char*) &taskUsrExecStkOverflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskUsrExecStkUnderflowSize", (char*) &taskUsrExecStkUnderflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "taskVarAdd", (char*) taskVarAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskVarDelete", (char*) taskVarDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskVarGet", (char*) taskVarGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskVarInfo", (char*) taskVarInfo, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskVarInit", (char*) taskVarInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskVarSet", (char*) taskVarSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskWait", (char*) taskWait, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskWaitShow", (char*) taskWaitShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "taskWaitShowCoreRtn", (char*) taskWaitShowCoreRtn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tcbReserveBitmap", (char*) &tcbReserveBitmap, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tcbSpareBitmap", (char*) &tcbSpareBitmap, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tcp_tmr_string", (char*) &tcp_tmr_string, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "td", (char*) td, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ti", (char*) ti, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tick64Get", (char*) tick64Get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tick64Set", (char*) tick64Set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tickAnnounce", (char*) tickAnnounce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tickAnnounceHookAdd", (char*) tickAnnounceHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tickGet", (char*) tickGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tickQHead", (char*) &tickQHead, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "tickSet", (char*) tickSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "time", (char*) time, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timestampDevUnitNo", (char*) &timestampDevUnitNo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "timestampTimerNo", (char*) &timestampTimerNo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "timex", (char*) timex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexClear", (char*) timexClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexFunc", (char*) timexFunc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexHelp", (char*) timexHelp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexInit", (char*) timexInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexN", (char*) timexN, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexPost", (char*) timexPost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexPre", (char*) timexPre, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "timexShow", (char*) timexShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tip", (char*) tip, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tipConfigString", (char*) &tipConfigString, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tipEscapeChar", (char*) &tipEscapeChar, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tipLibInit", (char*) tipLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tipShellCmdInit", (char*) tipShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tipStart", (char*) tipStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tmpfile", (char*) tmpfile, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tmpnam", (char*) tmpnam, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tolower", (char*) tolower, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "toupper", (char*) toupper, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tr", (char*) tr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "traceTimerStartValue", (char*) &traceTimerStartValue, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "traceTimestampGet", (char*) traceTimestampGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "traceTmrMuxDisable", (char*) traceTmrMuxDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "traceTmrMuxEnable", (char*) traceTmrMuxEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "traceTmrRegister", (char*) traceTmrRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "traceTmrResolutionGet", (char*) traceTmrResolutionGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "trcDefaultArgs", (char*) &trcDefaultArgs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "trcLibFuncs", (char*) &trcLibFuncs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "trcScanDepth", (char*) &trcScanDepth, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "trcStack", (char*) trcStack, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "trcStackCtxTrace", (char*) trcStackCtxTrace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "trcStackTrace", (char*) trcStackTrace, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ts", (char*) ts, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tt", (char*) tt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ttyDevCreate", (char*) ttyDevCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ttyDrv", (char*) ttyDrv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tw", (char*) tw, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyAbortFuncGet", (char*) tyAbortFuncGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyAbortFuncSet", (char*) tyAbortFuncSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyAbortGet", (char*) tyAbortGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyAbortSet", (char*) tyAbortSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyBackspaceChar", (char*) &tyBackspaceChar, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tyBackspaceSet", (char*) tyBackspaceSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyDeleteLineChar", (char*) &tyDeleteLineChar, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tyDeleteLineSet", (char*) tyDeleteLineSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyDevInit", (char*) tyDevInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyDevRemove", (char*) tyDevRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyDevTerminate", (char*) tyDevTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyEOFGet", (char*) tyEOFGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyEOFSet", (char*) tyEOFSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyEofChar", (char*) &tyEofChar, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "tyIRd", (char*) tyIRd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyITx", (char*) tyITx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyIoctl", (char*) tyIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyLibInit", (char*) tyLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyMonitorTrapSet", (char*) tyMonitorTrapSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyRead", (char*) tyRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyWrite", (char*) tyWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "tyXoffHookSet", (char*) tyXoffHookSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uNum", (char*) &uNum, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "udpCommIfInit", (char*) udpCommIfInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "udpRcv", (char*) udpRcv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "ungetc", (char*) ungetc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unixIoctlMemValidate", (char*) unixIoctlMemValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unld", (char*) unld, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unldByGroup", (char*) unldByGroup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unldByModuleId", (char*) unldByModuleId, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unldByNameAndPath", (char*) unldByNameAndPath, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unldLibInit", (char*) unldLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unlink", (char*) unlink, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unlinkSc", (char*) unlinkSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unloadShellCmdInit", (char*) unloadShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "unmount", (char*) unmount, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "userRgnPoolId", (char*) &userRgnPoolId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "usrAppInit", (char*) usrAppInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBanner", (char*) usrBanner, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBootHwInit", (char*) usrBootHwInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBootLineCrack", (char*) usrBootLineCrack, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBootLineGet", (char*) usrBootLineGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBootLineInit", (char*) usrBootLineInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBootLineParse", (char*) usrBootLineParse, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBreakpointInit", (char*) usrBreakpointInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrBreakpointSet", (char*) usrBreakpointSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrCacheEnable", (char*) usrCacheEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrClock", (char*) usrClock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrEdrInit", (char*) usrEdrInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrFsShellCmdInit", (char*) usrFsShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrFtpInit", (char*) usrFtpInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrHwSysctlInit", (char*) usrHwSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrInit", (char*) usrInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrIosCoreInit", (char*) usrIosCoreInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrIosExtraInit", (char*) usrIosExtraInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrIsrDeferInit", (char*) usrIsrDeferInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrKernelCoreInit", (char*) usrKernelCoreInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrKernelCreateInit", (char*) usrKernelCreateInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrKernelExtraInit", (char*) usrKernelExtraInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrKernelInit", (char*) usrKernelInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrLibInit", (char*) usrLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrLoaderInit", (char*) usrLoaderInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrMmuInit", (char*) usrMmuInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrModuleLoad", (char*) usrModuleLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetApplUtilInit", (char*) usrNetApplUtilInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetBoot", (char*) usrNetBoot, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetDaemonInit", (char*) usrNetDaemonInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetDevNameGet", (char*) usrNetDevNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetEndLibInit", (char*) usrNetEndLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetHostInit", (char*) usrNetHostInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetRemoteCreate", (char*) usrNetRemoteCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetRemoteInit", (char*) usrNetRemoteInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetSysctlInit", (char*) usrNetSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetmaskGet", (char*) usrNetmaskGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrNetworkInit", (char*) usrNetworkInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrPmInit", (char*) usrPmInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrPosixScInit", (char*) usrPosixScInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrRoot", (char*) usrRoot, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrRtpAppInit", (char*) usrRtpAppInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrRtpInit", (char*) usrRtpInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrRtpLibInit", (char*) usrRtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrScInit", (char*) usrScInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrSerialInit", (char*) usrSerialInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrShell", (char*) usrShell, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrShellCmdInit", (char*) usrShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrShellInit", (char*) usrShellInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrShowInit", (char*) usrShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrStandaloneInit", (char*) usrStandaloneInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrStartupScript", (char*) usrStartupScript, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrSymLibInit", (char*) usrSymLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrSymTblInit", (char*) usrSymTblInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrSysHwInit2", (char*) usrSysHwInit2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrSysSymTblInit", (char*) usrSysSymTblInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrSysctlInit", (char*) usrSysctlInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrTipInit", (char*) usrTipInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrToolsInit", (char*) usrToolsInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrVxbTimerSysInit", (char*) usrVxbTimerSysInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrVxdbgInit", (char*) usrVxdbgInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrWdbBanner", (char*) usrWdbBanner, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrWdbBp", (char*) usrWdbBp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrWdbGopherInit", (char*) usrWdbGopherInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrWdbInit", (char*) usrWdbInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrWdbInitDone", (char*) usrWdbInitDone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrWdbTaskModeInit", (char*) usrWdbTaskModeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usrWindviewInit", (char*) usrWindviewInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "usr_ext_node", (char*) &usr_ext_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "uswab", (char*) uswab, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "utime", (char*) utime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuidGen", (char*) uuidGen, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuidStr", (char*) uuidStr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_compare", (char*) uuid_compare, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_create", (char*) uuid_create, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_create_nil", (char*) uuid_create_nil, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_dec_be", (char*) uuid_dec_be, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_dec_le", (char*) uuid_dec_le, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_enc_be", (char*) uuid_enc_be, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_enc_le", (char*) uuid_enc_le, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_equal", (char*) uuid_equal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_from_string", (char*) uuid_from_string, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_hash", (char*) uuid_hash, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_is_nil", (char*) uuid_is_nil, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_node", (char*) uuid_node, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_time", (char*) uuid_time, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "uuid_to_string", (char*) uuid_to_string, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "valloc", (char*) valloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "version", (char*) version, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfdprintf", (char*) vfdprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpArchInit", (char*) vfpArchInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpArchTaskCreateInit", (char*) vfpArchTaskCreateInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpCtlRegName", (char*) &vfpCtlRegName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vfpCtxCreate", (char*) vfpCtxCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpCtxDelete", (char*) vfpCtxDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpCtxShow", (char*) vfpCtxShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpCtxToRegs", (char*) vfpCtxToRegs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpDisable", (char*) vfpDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpDoubleRegName", (char*) &vfpDoubleRegName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vfpEnable", (char*) vfpEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpExcHandle", (char*) vfpExcHandle, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpFpScrGet", (char*) vfpFpScrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpFpScrSet", (char*) vfpFpScrSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpFpSidGet", (char*) vfpFpSidGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpHasException", (char*) vfpHasException, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpIsEnabled", (char*) vfpIsEnabled, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpProbe", (char*) vfpProbe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpProbeSup", (char*) vfpProbeSup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpProbeTrap", (char*) vfpProbeTrap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpRegListShow", (char*) vfpRegListShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpRegsToCtx", (char*) vfpRegsToCtx, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpRestore", (char*) vfpRestore, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpSave", (char*) vfpSave, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpSingleRegName", (char*) &vfpSingleRegName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vfpTaskRegsCFmt", (char*) &vfpTaskRegsCFmt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vfpTaskRegsDFmt", (char*) &vfpTaskRegsDFmt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vfpTaskRegsSFmt", (char*) &vfpTaskRegsSFmt, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vfprintf", (char*) vfprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vfpscrInitValue", (char*) &vfpscrInitValue, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "viLedLibInit", (char*) viLedLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmAttrShow", (char*) vmAttrShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmAttrStringGet", (char*) vmAttrStringGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmAttrToArchConvert", (char*) vmAttrToArchConvert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmAttrToIndepConvert", (char*) vmAttrToIndepConvert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmBaseLibInit", (char*) vmBaseLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmBasePageSizeGet", (char*) vmBasePageSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmBaseStateSet", (char*) vmBaseStateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmBufferWrite", (char*) vmBufferWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmContextClassId", (char*) &vmContextClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vmContextHeaderPrint", (char*) vmContextHeaderPrint, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmContextRangeShow", (char*) vmContextRangeShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmContextShow", (char*) vmContextShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmContextSwitch", (char*) vmContextSwitch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmContigBlockEach", (char*) vmContigBlockEach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxCreate", (char*) vmCtxCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxDelete", (char*) vmCtxDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxDestroy", (char*) vmCtxDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxInit", (char*) vmCtxInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxMask", (char*) vmCtxMask, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxTerminate", (char*) vmCtxTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxUnion", (char*) vmCtxUnion, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCtxUnionInit", (char*) vmCtxUnionInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCurrentGet", (char*) vmCurrentGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmCurrentSet", (char*) vmCurrentSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmGlobalMapInit", (char*) vmGlobalMapInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmInfoGet", (char*) vmInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmInvPageMap", (char*) vmInvPageMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmInvTblLibInit", (char*) vmInvTblLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmInvUnMap", (char*) vmInvUnMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmKernelContextIdGet", (char*) vmKernelContextIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmLibInfo", (char*) &vmLibInfo, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vmLibInit", (char*) vmLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmMap", (char*) vmMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmMaxPhysBitsGet", (char*) vmMaxPhysBitsGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmOptimizedSizeGet", (char*) vmOptimizedSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPageBlockSizeGet", (char*) vmPageBlockSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPageLock", (char*) vmPageLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPageMap", (char*) vmPageMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPageOptimize", (char*) vmPageOptimize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPageSizeGet", (char*) vmPageSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPageUnlock", (char*) vmPageUnlock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPageUnmap", (char*) vmPageUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPgMap", (char*) vmPgMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPgUnMap", (char*) vmPgUnMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPhysTranslate", (char*) vmPhysTranslate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmPteSizeGet", (char*) vmPteSizeGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmShowInit", (char*) vmShowInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmShowShellCmdInit", (char*) vmShowShellCmdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmStateGet", (char*) vmStateGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmStateSet", (char*) vmStateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmTextProtect", (char*) vmTextProtect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vmTranslate", (char*) vmTranslate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vm_node", (char*) &vm_node, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "voprintf", (char*) voprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vprintf", (char*) vprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vsnprintf", (char*) vsnprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vsprintf", (char*) vsprintf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAbsTicks", (char*) &vxAbsTicks, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxAtomic32Add", (char*) vxAtomic32Add, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32And", (char*) vxAtomic32And, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Cas", (char*) vxAtomic32Cas, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Clear", (char*) vxAtomic32Clear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Dec", (char*) vxAtomic32Dec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Get", (char*) vxAtomic32Get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Inc", (char*) vxAtomic32Inc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Nand", (char*) vxAtomic32Nand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Or", (char*) vxAtomic32Or, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Set", (char*) vxAtomic32Set, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Sub", (char*) vxAtomic32Sub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomic32Xor", (char*) vxAtomic32Xor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicAdd", (char*) vxAtomicAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicAnd", (char*) vxAtomicAnd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicCas", (char*) vxAtomicCas, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicClear", (char*) vxAtomicClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicDec", (char*) vxAtomicDec, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicGet", (char*) vxAtomicGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicInc", (char*) vxAtomicInc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicNand", (char*) vxAtomicNand, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicOr", (char*) vxAtomicOr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicSet", (char*) vxAtomicSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicSub", (char*) vxAtomicSub, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxAtomicXor", (char*) vxAtomicXor, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxBaseCpuPhysIndex", (char*) &vxBaseCpuPhysIndex, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxCas", (char*) vxCas, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpsrGet", (char*) vxCpsrGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuConfigured", (char*) &vxCpuConfigured, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxCpuConfiguredGet", (char*) vxCpuConfiguredGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuEnabled", (char*) &vxCpuEnabled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxCpuEnabledGet", (char*) vxCpuEnabledGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuIdGet", (char*) vxCpuIdGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuIdToPhysIndex", (char*) vxCpuIdToPhysIndex, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuIndexGet", (char*) vxCpuIndexGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuLibInit", (char*) vxCpuLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuPhysIndexGet", (char*) vxCpuPhysIndexGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuPhysIndexToId", (char*) vxCpuPhysIndexToId, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuReserve", (char*) vxCpuReserve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuReservedGet", (char*) vxCpuReservedGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxCpuSetReserved", (char*) &vxCpuSetReserved, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxCpuSetReservedAvail", (char*) &vxCpuSetReservedAvail, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxCpuUnreserve", (char*) vxCpuUnreserve, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxEventPendQ", (char*) &vxEventPendQ, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxIntStackBase", (char*) &vxIntStackBase, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxIntStackEnd", (char*) &vxIntStackEnd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxIntStackOverflowSize", (char*) &vxIntStackOverflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxIntStackUnderflowSize", (char*) &vxIntStackUnderflowSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxIrqIntStackBase", (char*) &vxIrqIntStackBase, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxIrqIntStackEnd", (char*) &vxIrqIntStackEnd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxMemArchProbe", (char*) vxMemArchProbe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemArchProbeInit", (char*) vxMemArchProbeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbe", (char*) vxMemProbe, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeByteRead", (char*) vxMemProbeByteRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeByteWrite", (char*) vxMemProbeByteWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeErrorRtn", (char*) vxMemProbeErrorRtn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeInit", (char*) vxMemProbeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeLongRead", (char*) vxMemProbeLongRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeLongWrite", (char*) vxMemProbeLongWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeSup", (char*) vxMemProbeSup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeSupEnd", (char*) vxMemProbeSupEnd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeWordRead", (char*) vxMemProbeWordRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxMemProbeWordWrite", (char*) vxMemProbeWordWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxSvcIntStackBase", (char*) &vxSvcIntStackBase, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxSvcIntStackEnd", (char*) &vxSvcIntStackEnd, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxTas", (char*) vxTas, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxTaskEntry", (char*) vxTaskEntry, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxTaskEntryFatalInject", (char*) vxTaskEntryFatalInject, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxWorksVersion", (char*) &vxWorksVersion, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxWorksVersionMaint", (char*) &vxWorksVersionMaint, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxWorksVersionMajor", (char*) &vxWorksVersionMajor, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxWorksVersionMinor", (char*) &vxWorksVersionMinor, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxWorksVersionSvcPk", (char*) &vxWorksVersionSvcPk, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbArmGenIntCtlrRegister", (char*) vxbArmGenIntCtlrRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbArmGicLvlChg", (char*) vxbArmGicLvlChg, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbArmGicLvlVecAck", (char*) vxbArmGicLvlVecAck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbArmGicLvlVecChk", (char*) vxbArmGicLvlVecChk, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbAuxClkConnect", (char*) vxbAuxClkConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbAuxClkDisable", (char*) vxbAuxClkDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbAuxClkEnable", (char*) vxbAuxClkEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbAuxClkLibInit", (char*) vxbAuxClkLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbAuxClkRateGet", (char*) vxbAuxClkRateGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbAuxClkRateSet", (char*) vxbAuxClkRateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbBusAnnounce", (char*) vxbBusAnnounce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbBusListLock", (char*) &vxbBusListLock, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbBusTypeRegister", (char*) vxbBusTypeRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbBusTypeString", (char*) vxbBusTypeString, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbBusTypeUnregister", (char*) vxbBusTypeUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDelay", (char*) vxbDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDelayLibInit", (char*) vxbDelayLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDelayTimerFreeRunning", (char*) &vxbDelayTimerFreeRunning, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDevConnect", (char*) vxbDevConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevConnectInternal", (char*) vxbDevConnectInternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevInit", (char*) vxbDevInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevInitInternal", (char*) vxbDevInitInternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevIntCapabCheck_desc", (char*) &vxbDevIntCapabCheck_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDevIterate", (char*) vxbDevIterate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevMethodGet", (char*) vxbDevMethodGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevMethodRun", (char*) vxbDevMethodRun, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevParent", (char*) vxbDevParent, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevPath", (char*) vxbDevPath, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevRegMap_desc", (char*) &vxbDevRegMap_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDevRegister", (char*) vxbDevRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevRemovalAnnounce", (char*) vxbDevRemovalAnnounce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevStructAlloc", (char*) vxbDevStructAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevStructFree", (char*) vxbDevStructFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDevStructListLock", (char*) &vxbDevStructListLock, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDeviceAnnounce", (char*) vxbDeviceAnnounce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDeviceDriverRelease", (char*) vxbDeviceDriverRelease, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDeviceMethodRun", (char*) vxbDeviceMethodRun, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufArchFlush", (char*) &vxbDmaBufArchFlush, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufArchInvalidate", (char*) &vxbDmaBufArchInvalidate, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufBspAlloc", (char*) &vxbDmaBufBspAlloc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufBspFree", (char*) &vxbDmaBufBspFree, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufFlush", (char*) vxbDmaBufFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufFragFill", (char*) vxbDmaBufFragFill, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufInit", (char*) vxbDmaBufInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufInvalidate", (char*) vxbDmaBufInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapArchFlush", (char*) &vxbDmaBufMapArchFlush, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufMapArchInvalidate", (char*) &vxbDmaBufMapArchInvalidate, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufMapCreate", (char*) vxbDmaBufMapCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapCreate_desc", (char*) &vxbDmaBufMapCreate_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufMapDestroy", (char*) vxbDmaBufMapDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapDestroy_desc", (char*) &vxbDmaBufMapDestroy_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufMapFlush", (char*) vxbDmaBufMapFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapInvalidate", (char*) vxbDmaBufMapInvalidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapIoVecLoad", (char*) vxbDmaBufMapIoVecLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapLoad", (char*) vxbDmaBufMapLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapMblkLoad", (char*) vxbDmaBufMapMblkLoad, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapMemAlloc_desc", (char*) &vxbDmaBufMapMemAlloc_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufMapMemFree_desc", (char*) &vxbDmaBufMapMemFree_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufMapSync", (char*) vxbDmaBufMapSync, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMapUnload", (char*) vxbDmaBufMapUnload, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMemAlloc", (char*) vxbDmaBufMemAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufMemFree", (char*) vxbDmaBufMemFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufSync", (char*) vxbDmaBufSync, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufTagCreate", (char*) vxbDmaBufTagCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufTagDestroy", (char*) vxbDmaBufTagDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaBufTagGet_desc", (char*) &vxbDmaBufTagGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaBufTagParentGet", (char*) vxbDmaBufTagParentGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaChanAlloc", (char*) vxbDmaChanAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaChanFree", (char*) vxbDmaChanFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaLibInit", (char*) vxbDmaLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDmaResDedicatedGet_desc", (char*) &vxbDmaResDedicatedGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaResourceGet_desc", (char*) &vxbDmaResourceGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDmaResourceRelease_desc", (char*) &vxbDmaResourceRelease_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDriverUnregister", (char*) vxbDriverUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDrvRescan", (char*) vxbDrvRescan, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbDrvUnlink_desc", (char*) &vxbDrvUnlink_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbDrvVerCheck", (char*) vxbDrvVerCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbGlobalListsLock", (char*) &vxbGlobalListsLock, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbImx31EpitTimerDrvRegister", (char*) vxbImx31EpitTimerDrvRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbImxSetBaudRate", (char*) vxbImxSetBaudRate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbImxSioRegister", (char*) vxbImxSioRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInit", (char*) vxbInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInstByNameFind", (char*) vxbInstByNameFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInstParamByIndexGet", (char*) vxbInstParamByIndexGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInstParamByNameGet", (char*) vxbInstParamByNameGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInstParamSet", (char*) vxbInstParamSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInstUnitGet", (char*) vxbInstUnitGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInstUnitSet", (char*) vxbInstUnitSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbInstUsrOptionGet", (char*) vxbInstUsrOptionGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntAcknowledge", (char*) vxbIntAcknowledge, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntAlloc", (char*) vxbIntAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntConnect", (char*) vxbIntConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntCtlrAck_desc", (char*) &vxbIntCtlrAck_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbIntCtlrAlloc_desc", (char*) &vxbIntCtlrAlloc_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbIntCtlrConnect_desc", (char*) &vxbIntCtlrConnect_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbIntCtlrDisable_desc", (char*) &vxbIntCtlrDisable_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbIntCtlrDisconnect_desc", (char*) &vxbIntCtlrDisconnect_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbIntCtlrEnable_desc", (char*) &vxbIntCtlrEnable_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbIntCtlrFree_desc", (char*) &vxbIntCtlrFree_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbIntDisable", (char*) vxbIntDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntDisconnect", (char*) vxbIntDisconnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntEnable", (char*) vxbIntEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntFree", (char*) vxbIntFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbIntVectorGet", (char*) vxbIntVectorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbLibError", (char*) vxbLibError, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbLibInit", (char*) vxbLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbLockDelete", (char*) vxbLockDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbLockGive", (char*) vxbLockGive, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbLockInit", (char*) vxbLockInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbLockTake", (char*) vxbLockTake, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbMsDelay", (char*) vxbMsDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbNextUnitGet", (char*) vxbNextUnitGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbRead16", (char*) vxbRead16, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbRead32", (char*) vxbRead32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbRead8", (char*) vxbRead8, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbRegMap", (char*) vxbRegMap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbRegUnmap", (char*) vxbRegUnmap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbResourceFind", (char*) vxbResourceFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSerialChanGet", (char*) vxbSerialChanGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSubDevAction", (char*) vxbSubDevAction, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSwap16", (char*) vxbSwap16, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSwap32", (char*) vxbSwap32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSysClkConnect", (char*) vxbSysClkConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSysClkDisable", (char*) vxbSysClkDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSysClkEnable", (char*) vxbSysClkEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSysClkLibInit", (char*) vxbSysClkLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSysClkRateGet", (char*) vxbSysClkRateGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbSysClkRateSet", (char*) vxbSysClkRateSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimerAlloc", (char*) vxbTimerAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimerFeaturesGet", (char*) vxbTimerFeaturesGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimerFuncGet_desc", (char*) &vxbTimerFuncGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbTimerNumberGet_desc", (char*) &vxbTimerNumberGet_desc, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxbTimerRelease", (char*) vxbTimerRelease, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestamp", (char*) vxbTimestamp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestampConnect", (char*) vxbTimestampConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestampDisable", (char*) vxbTimestampDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestampEnable", (char*) vxbTimestampEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestampFreq", (char*) vxbTimestampFreq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestampLibInit", (char*) vxbTimestampLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestampLock", (char*) vxbTimestampLock, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbTimestampPeriod", (char*) vxbTimestampPeriod, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbUsDelay", (char*) vxbUsDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbWrite16", (char*) vxbWrite16, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbWrite32", (char*) vxbWrite32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxbWrite8", (char*) vxbWrite8, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpAdd", (char*) vxdbgBpAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpAddrCheck", (char*) vxdbgBpAddrCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpAllDisable", (char*) vxdbgBpAllDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpDelete", (char*) vxdbgBpDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpFind", (char*) vxdbgBpFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpList", (char*) &vxdbgBpList, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxdbgBpMsgDrop", (char*) vxdbgBpMsgDrop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpMsgGet", (char*) vxdbgBpMsgGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpMsgPost", (char*) vxdbgBpMsgPost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpMsgQCreate", (char*) vxdbgBpMsgQCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgBpMsgQHdlrIsRunning", (char*) vxdbgBpMsgQHdlrIsRunning, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgClntRegister", (char*) vxdbgClntRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgClntUnregister", (char*) vxdbgClntUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgCont", (char*) vxdbgCont, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgEnable", (char*) vxdbgEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgEventIdAlloc", (char*) vxdbgEventIdAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgEventIdFree", (char*) vxdbgEventIdFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgEventInject", (char*) vxdbgEventInject, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgEventLibInit", (char*) vxdbgEventLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgHookAdd", (char*) vxdbgHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgHookInvoke", (char*) vxdbgHookInvoke, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgHooksInit", (char*) vxdbgHooksInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgInstrCmp", (char*) vxdbgInstrCmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgInternalEventInject", (char*) vxdbgInternalEventInject, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgLibInit", (char*) vxdbgLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgListDelete", (char*) vxdbgListDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgListInsert", (char*) vxdbgListInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgLockUnbreakable", (char*) &vxdbgLockUnbreakable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxdbgMemAccess", (char*) vxdbgMemAccess, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgMemCtxSwitch", (char*) vxdbgMemCtxSwitch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgMemMove", (char*) vxdbgMemMove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgMemRead", (char*) vxdbgMemRead, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgMemScan", (char*) vxdbgMemScan, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgMemWrite", (char*) vxdbgMemWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgModuleLibInit", (char*) vxdbgModuleLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgRtpLibInit", (char*) vxdbgRtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgRunCtrlHookInvoke", (char*) vxdbgRunCtrlHookInvoke, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgRunCtrlLibInit", (char*) vxdbgRunCtrlLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgSafeUnbreakable", (char*) &vxdbgSafeUnbreakable, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxdbgStep", (char*) vxdbgStep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgStop", (char*) vxdbgStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgTaskCont", (char*) vxdbgTaskCont, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgTaskHookInit", (char*) vxdbgTaskHookInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgTaskLibInit", (char*) vxdbgTaskLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgTaskStep", (char*) vxdbgTaskStep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgTaskStop", (char*) vxdbgTaskStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxdbgUnbreakableOld", (char*) &vxdbgUnbreakableOld, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "vxfs_ramdisk_init_hook", (char*) &vxfs_ramdisk_init_hook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "vxmux_mux_mblk_init", (char*) vxmux_mux_mblk_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxmux_null_buf_init", (char*) vxmux_null_buf_init, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "vxmux_null_pool", (char*) &vxmux_null_pool, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "w", (char*) w, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wcstombs", (char*) wcstombs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wctomb", (char*) wctomb, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdCancel", (char*) wdCancel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdClassId", (char*) &wdClassId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdCreate", (char*) wdCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdCreateLibInit", (char*) wdCreateLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdDelete", (char*) wdDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdDestroy", (char*) wdDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdInit", (char*) wdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdInitialize", (char*) wdInitialize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdLibInit", (char*) wdLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdStart", (char*) wdStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdTerminate", (char*) wdTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdTick", (char*) wdTick, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbAvailModes", (char*) &wdbAvailModes, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbAvailOptions", (char*) &wdbAvailOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbBpAddHookAdd", (char*) wdbBpAddHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbBpSyncLibInit", (char*) wdbBpSyncLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbBpSysEnterHook", (char*) &wdbBpSysEnterHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbBpSysExitHook", (char*) &wdbBpSysExitHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbCksum", (char*) wdbCksum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCmdLoop", (char*) wdbCmdLoop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCnctModePost", (char*) wdbCnctModePost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCommDevInit", (char*) wdbCommDevInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCommIfEnable", (char*) wdbCommIfEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCommMtu", (char*) &wdbCommMtu, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbCommMtuGet", (char*) wdbCommMtuGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbConfig", (char*) wdbConfig, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbConnectHookAdd", (char*) wdbConnectHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbConnectLibInit", (char*) wdbConnectLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxCreateNotify", (char*) wdbCtxCreateNotify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxDeleteNotify", (char*) wdbCtxDeleteNotify, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxEvtLibInit", (char*) wdbCtxEvtLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxExitEventGet", (char*) wdbCtxExitEventGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxExitLibInit", (char*) wdbCtxExitLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxExitNotifyHook", (char*) wdbCtxExitNotifyHook, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxLibInit", (char*) wdbCtxLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxStartEventGet", (char*) wdbCtxStartEventGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbCtxStartLibInit", (char*) wdbCtxStartLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDbgAddrCheck", (char*) wdbDbgAddrCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDbgArchInit", (char*) wdbDbgArchInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDbgGetNpc", (char*) wdbDbgGetNpc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDbgSysCallCheck", (char*) wdbDbgSysCallCheck, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDbgTraceModeClear", (char*) wdbDbgTraceModeClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDbgTraceModeSet", (char*) wdbDbgTraceModeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDbgTrap", (char*) wdbDbgTrap, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbDirectCallLibInit", (char*) wdbDirectCallLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbE", (char*) wdbE, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbEndDebug", (char*) &wdbEndDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbEndDeviceAddress", (char*) &wdbEndDeviceAddress, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbEndPktDevInit", (char*) wdbEndPktDevInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbEventDeq", (char*) wdbEventDeq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbEventLibInit", (char*) wdbEventLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbEventNodeInit", (char*) wdbEventNodeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbEventPost", (char*) wdbEventPost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbEvtptClassConnect", (char*) wdbEvtptClassConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbEvtptLibInit", (char*) wdbEvtptLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbExcLibInit", (char*) wdbExcLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbExternCoprocRegLibInit", (char*) wdbExternCoprocRegLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbExternEnterHookAdd", (char*) wdbExternEnterHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbExternExitHookAdd", (char*) wdbExternExitHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbExternInit", (char*) wdbExternInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbExternLibInit", (char*) wdbExternLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbExternRegLibInit", (char*) wdbExternRegLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbFuncCallLibInit", (char*) wdbFuncCallLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbGopherLibInit", (char*) wdbGopherLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbInfoGet", (char*) wdbInfoGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbInstallCommIf", (char*) wdbInstallCommIf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbInstallRtIf", (char*) wdbInstallRtIf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbIoctl", (char*) wdbIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbIsAlwaysEnabled", (char*) &wdbIsAlwaysEnabled, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbIsInitialized", (char*) &wdbIsInitialized, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbIsNowExternal", (char*) wdbIsNowExternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbIsReady", (char*) &wdbIsReady, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbMbufAlloc", (char*) wdbMbufAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbMbufFree", (char*) wdbMbufFree, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbMbufInit", (char*) wdbMbufInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbMdlSymSyncLibInit", (char*) wdbMdlSymSyncLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbMemCoreLibInit", (char*) wdbMemCoreLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbMemLibInit", (char*) wdbMemLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbMode", (char*) &wdbMode, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbModeSet", (char*) wdbModeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbModeSetHookAdd", (char*) wdbModeSetHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbNotifyHost", (char*) wdbNotifyHost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbNumMemRegions", (char*) &wdbNumMemRegions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbOneShot", (char*) &wdbOneShot, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbPort", (char*) &wdbPort, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbRegsLibInit", (char*) wdbRegsLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcGetArgs", (char*) wdbRpcGetArgs, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcNotifyConnect", (char*) wdbRpcNotifyConnect, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcNotifyHost", (char*) wdbRpcNotifyHost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcRcv", (char*) wdbRpcRcv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcReply", (char*) wdbRpcReply, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcReplyErr", (char*) wdbRpcReplyErr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcResendReply", (char*) wdbRpcResendReply, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRpcXportInit", (char*) wdbRpcXportInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRtIf", (char*) &wdbRtIf, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbRtLibInit", (char*) wdbRtLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRtMemInit", (char*) wdbRtMemInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRtpBpLibInit", (char*) wdbRtpBpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRtpCtrlLibInit", (char*) wdbRtpCtrlLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRtpDeleteHookManage", (char*) wdbRtpDeleteHookManage, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRtpInfoAlloc", (char*) wdbRtpInfoAlloc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRtpLibInit", (char*) wdbRtpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRunsExternal", (char*) wdbRunsExternal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbRunsTasking", (char*) wdbRunsTasking, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSharedBuffer", (char*) &wdbSharedBuffer, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wdbSharedBufferSize", (char*) &wdbSharedBufferSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbSp", (char*) wdbSp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSvcAdd", (char*) wdbSvcAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSvcDispatch", (char*) wdbSvcDispatch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSvcHookAdd", (char*) wdbSvcHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSvcLibInit", (char*) wdbSvcLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSysBpDisableAll", (char*) wdbSysBpDisableAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSysBpEnableAll", (char*) wdbSysBpEnableAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSysBpLibInit", (char*) wdbSysBpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSysModeInit", (char*) wdbSysModeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbSystemSuspend", (char*) wdbSystemSuspend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTargetIsConnected", (char*) wdbTargetIsConnected, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskBpAdd", (char*) wdbTaskBpAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskBpLibInit", (char*) wdbTaskBpLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskCont", (char*) wdbTaskCont, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskCoprocRegLibInit", (char*) wdbTaskCoprocRegLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskCreateHookAdd", (char*) wdbTaskCreateHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskDeleteHookAdd", (char*) wdbTaskDeleteHookAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskExtraModules", (char*) &wdbTaskExtraModules, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbTaskHookInit", (char*) wdbTaskHookInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskModeInit", (char*) wdbTaskModeInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskRegLibInit", (char*) wdbTaskRegLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskRestartHook", (char*) &wdbTaskRestartHook, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbTaskStep", (char*) wdbTaskStep, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTaskStop", (char*) wdbTaskStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTgtInfoLibInit", (char*) wdbTgtInfoLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbToolName", (char*) &wdbToolName, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbTsfsDefaultDirPerm", (char*) &wdbTsfsDefaultDirPerm, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbTsfsDrv", (char*) wdbTsfsDrv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbTsfsRwBufferSize", (char*) &wdbTsfsRwBufferSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wdbUserEvtLibInit", (char*) wdbUserEvtLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbUserEvtPost", (char*) wdbUserEvtPost, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbVioChannelRegister", (char*) wdbVioChannelRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbVioChannelUnregister", (char*) wdbVioChannelUnregister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbVioDrv", (char*) wdbVioDrv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbVioLibInit", (char*) wdbVioLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbXdrCreate", (char*) wdbXdrCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbXdrGetVal", (char*) wdbXdrGetVal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbXdrGetpos", (char*) wdbXdrGetpos, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbXdrInline", (char*) wdbXdrInline, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbXdrPutVal", (char*) wdbXdrPutVal, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbXdrPutbytes", (char*) wdbXdrPutbytes, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wdbXdrSetpos", (char*) wdbXdrSetpos, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "whoami", (char*) whoami, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windCont", (char*) windCont, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windDelay", (char*) windDelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windDelete", (char*) windDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windDummySc", (char*) windDummySc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windExit", (char*) windExit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windIntStackSet", (char*) windIntStackSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windLoadContext", (char*) windLoadContext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windNullReturn", (char*) windNullReturn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windPendQFlush", (char*) windPendQFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windPendQGet", (char*) windPendQGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windPendQPut", (char*) windPendQPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windPendQRemove", (char*) windPendQRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windPendQTerminate", (char*) windPendQTerminate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windPriNormalSet", (char*) windPriNormalSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windPrioritySet", (char*) windPrioritySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windReadyQPut", (char*) windReadyQPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windReadyQRemove", (char*) windReadyQRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windResume", (char*) windResume, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windScInit", (char*) windScInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windSemDelete", (char*) windSemDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windSemRWDelete", (char*) windSemRWDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windStop", (char*) windStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windStopClear", (char*) windStopClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windSuspend", (char*) windSuspend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windTickAnnounce", (char*) windTickAnnounce, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windTickAnnounceN", (char*) windTickAnnounceN, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windTickWaitGet", (char*) windTickWaitGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windUndelay", (char*) windUndelay, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windWdCancel", (char*) windWdCancel, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windWdStart", (char*) windWdStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "windviewConfig", (char*) windviewConfig, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "workQAdd0", (char*) workQAdd0, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "workQAdd1", (char*) workQAdd1, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "workQAdd2", (char*) workQAdd2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "workQDoWork", (char*) workQDoWork, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "workQInit", (char*) workQInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "workQIsEmpty", (char*) &workQIsEmpty, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "workQIx", (char*) &workQIx, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "workQPanic", (char*) workQPanic, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "workQPanicHook", (char*) &workQPanicHook, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "workQWorkInProgress", (char*) &workQWorkInProgress, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "write", (char*) write, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "writev", (char*) writev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvAllObjsSet", (char*) wvAllObjsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvBufId", (char*) &wvBufId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvCurrentLog", (char*) &wvCurrentLog, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvCurrentLogGet", (char*) wvCurrentLogGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvCurrentLogList", (char*) &wvCurrentLogList, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvCurrentLogListGet", (char*) wvCurrentLogListGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvCurrentLogListSet", (char*) wvCurrentLogListSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvCurrentLogSet", (char*) wvCurrentLogSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvDefaultBufMax", (char*) &wvDefaultBufMax, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvDefaultBufMin", (char*) &wvDefaultBufMin, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvDefaultBufOptions", (char*) &wvDefaultBufOptions, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvDefaultBufSize", (char*) &wvDefaultBufSize, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvDefaultBufThresh", (char*) &wvDefaultBufThresh, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvDefaultRBuffParams", (char*) &wvDefaultRBuffParams, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvEdrInst", (char*) wvEdrInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEvent", (char*) wvEvent, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEventInst", (char*) wvEventInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEventSc", (char*) wvEventSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEvtBufferFullNotify", (char*) &wvEvtBufferFullNotify, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvEvtClassClear", (char*) wvEvtClassClear, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEvtClassClearAll", (char*) wvEvtClassClearAll, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEvtClassGet", (char*) wvEvtClassGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEvtClassSet", (char*) wvEvtClassSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEvtLogStart", (char*) wvEvtLogStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvEvtLogStop", (char*) wvEvtLogStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvFileUploadPathClose", (char*) wvFileUploadPathClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvFileUploadPathCreate", (char*) wvFileUploadPathCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvFileUploadPathLibInit", (char*) wvFileUploadPathLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvFileUploadPathWrite", (char*) wvFileUploadPathWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvHashTblCreate", (char*) wvHashTblCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvHashTblDestroy", (char*) wvHashTblDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvHashTblInsert", (char*) wvHashTblInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvHashTblIterDone", (char*) wvHashTblIterDone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvHashTblIterInit", (char*) wvHashTblIterInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvHashTblIterNext", (char*) wvHashTblIterNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvHashTblIterNextEvent", (char*) wvHashTblIterNextEvent, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLibInit", (char*) wvLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLibInit2", (char*) wvLibInit2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogCountGet", (char*) wvLogCountGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogCreate", (char*) wvLogCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogDelete", (char*) wvLogDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogFirstGet", (char*) wvLogFirstGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogListChksum", (char*) wvLogListChksum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogListCreate", (char*) wvLogListCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogListDelete", (char*) wvLogListDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogListValidate", (char*) wvLogListValidate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogMsgString1", (char*) &wvLogMsgString1, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvLogMsgString2", (char*) &wvLogMsgString2, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvLogNextGet", (char*) wvLogNextGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvLogRevision", (char*) &wvLogRevision, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvMaximumLogs", (char*) &wvMaximumLogs, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvMemScopeInst", (char*) wvMemScopeInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvNetDConfigure", (char*) wvNetDConfigure, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvNetDEventMap", (char*) &wvNetDEventMap, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvNetDInit", (char*) wvNetDInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvObjInst", (char*) wvObjInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvObjInstModeSet", (char*) wvObjInstModeSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvObjNameCurrentBuffAdd", (char*) wvObjNameCurrentBuffAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvOff", (char*) wvOff, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvOn", (char*) wvOn, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvPartitionGet", (char*) wvPartitionGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvPartitionSet", (char*) wvPartitionSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvPowerInst", (char*) wvPowerInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvRBuffErrorHandler", (char*) wvRBuffErrorHandler, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvRBuffMgr", (char*) wvRBuffMgr, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvRBuffMgrId", (char*) &wvRBuffMgrId, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvRBuffMgrPriorityDefault", (char*) &wvRBuffMgrPriorityDefault, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvRBuffMgrPrioritySet", (char*) wvRBuffMgrPrioritySet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvRtpEventSc", (char*) wvRtpEventSc, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvSalInst", (char*) wvSalInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvSigInst", (char*) wvSigInst, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTmrDisable", (char*) wvTmrDisable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTmrEnable", (char*) wvTmrEnable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTmrFrequency64Get", (char*) wvTmrFrequency64Get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTmrRegister", (char*) wvTmrRegister, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTmrTimestamp64Get", (char*) wvTmrTimestamp64Get, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTmrTimestamp64ToTime", (char*) wvTmrTimestamp64ToTime, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTsfsUploadPathClose", (char*) wvTsfsUploadPathClose, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTsfsUploadPathCreate", (char*) wvTsfsUploadPathCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTsfsUploadPathLibInit", (char*) wvTsfsUploadPathLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvTsfsUploadPathWrite", (char*) wvTsfsUploadPathWrite, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvUpPathId", (char*) &wvUpPathId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvUpTaskId", (char*) &wvUpTaskId, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvUploadMaxAttempts", (char*) &wvUploadMaxAttempts, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvUploadName", (char*) &wvUploadName, 0, 0,  SYM_GLOBAL | SYM_BSS},
        {{NULL}, "wvUploadRetryBackoff", (char*) &wvUploadRetryBackoff, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvUploadStart", (char*) wvUploadStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvUploadStop", (char*) wvUploadStop, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvUploadTaskConfig", (char*) wvUploadTaskConfig, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "wvUploadTaskOptions", (char*) &wvUploadTaskOptions, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvUploadTaskPriority", (char*) &wvUploadTaskPriority, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "wvUploadTaskStackSize", (char*) &wvUploadTaskStackSize, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xattrib", (char*) xattrib, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdAddGptPartition", (char*) xbdAddGptPartition, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdAttach", (char*) xbdAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdAttachExt", (char*) xbdAttachExt, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdAttachSchecdPolicyById", (char*) xbdAttachSchecdPolicyById, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdAttachSchecdPolicyByName", (char*) xbdAttachSchecdPolicyByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlDelete", (char*) xbdBioSchedAvlDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlInsert", (char*) xbdBioSchedAvlInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlMinGet", (char*) xbdBioSchedAvlMinGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlNodeShow", (char*) xbdBioSchedAvlNodeShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlPredecessorGet", (char*) xbdBioSchedAvlPredecessorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlSearch", (char*) xbdBioSchedAvlSearch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlShow", (char*) xbdBioSchedAvlShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedAvlSuccessorGet", (char*) xbdBioSchedAvlSuccessorGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineAttach", (char*) xbdBioSchedDeadlineAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineAvlCompare", (char*) xbdBioSchedDeadlineAvlCompare, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineBioEnq", (char*) xbdBioSchedDeadlineBioEnq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineDetach", (char*) xbdBioSchedDeadlineDetach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineDispatch", (char*) xbdBioSchedDeadlineDispatch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineFini", (char*) xbdBioSchedDeadlineFini, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineInit", (char*) xbdBioSchedDeadlineInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlinePolicy", (char*) &xbdBioSchedDeadlinePolicy, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdBioSchedDeadlineReqDeq", (char*) xbdBioSchedDeadlineReqDeq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineReqDone", (char*) xbdBioSchedDeadlineReqDone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineReqEnq", (char*) xbdBioSchedDeadlineReqEnq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineReqGet", (char*) xbdBioSchedDeadlineReqGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineReqMerged", (char*) xbdBioSchedDeadlineReqMerged, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineReqNext", (char*) xbdBioSchedDeadlineReqNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineReqPrev", (char*) xbdBioSchedDeadlineReqPrev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineReqPut", (char*) xbdBioSchedDeadlineReqPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedDeadlineShow", (char*) xbdBioSchedDeadlineShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedExit", (char*) xbdBioSchedExit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedFindBackMerge", (char*) xbdBioSchedFindBackMerge, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedFindBackMergeByHash", (char*) xbdBioSchedFindBackMergeByHash, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedFindFrontMerge", (char*) xbdBioSchedFindFrontMerge, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedFindFrontMergeByHash", (char*) xbdBioSchedFindFrontMergeByHash, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedFlush", (char*) xbdBioSchedFlush, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedGetAvlNode", (char*) xbdBioSchedGetAvlNode, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedHashNodeShow", (char*) xbdBioSchedHashNodeShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedInit", (char*) xbdBioSchedInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedMaxActiveReqsSet", (char*) xbdBioSchedMaxActiveReqsSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedMaxBiosPerReqSet", (char*) xbdBioSchedMaxBiosPerReqSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedMaxBlksPerBioSet", (char*) xbdBioSchedMaxBlksPerBioSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedMaxBlksPerReqSet", (char*) xbdBioSchedMaxBlksPerReqSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedMergeAdd", (char*) xbdBioSchedMergeAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedMergeBio", (char*) xbdBioSchedMergeBio, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedMergeRemove", (char*) xbdBioSchedMergeRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyAdd", (char*) xbdBioSchedPolicyAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyAttach", (char*) xbdBioSchedPolicyAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyDettach", (char*) xbdBioSchedPolicyDettach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoop", (char*) &xbdBioSchedPolicyNoop, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdBioSchedPolicyNoopAttach", (char*) xbdBioSchedPolicyNoopAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopBioEnQ", (char*) xbdBioSchedPolicyNoopBioEnQ, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopDetach", (char*) xbdBioSchedPolicyNoopDetach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopDispatch", (char*) xbdBioSchedPolicyNoopDispatch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopFini", (char*) xbdBioSchedPolicyNoopFini, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopInit", (char*) xbdBioSchedPolicyNoopInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopReqDeQ", (char*) xbdBioSchedPolicyNoopReqDeQ, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopReqDone", (char*) xbdBioSchedPolicyNoopReqDone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopReqEnQ", (char*) xbdBioSchedPolicyNoopReqEnQ, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopReqGet", (char*) xbdBioSchedPolicyNoopReqGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopReqPut", (char*) xbdBioSchedPolicyNoopReqPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyNoopShow", (char*) xbdBioSchedPolicyNoopShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicyRemove", (char*) xbdBioSchedPolicyRemove, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSD", (char*) &xbdBioSchedPolicySSD, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdBioSchedPolicySSDAttach", (char*) xbdBioSchedPolicySSDAttach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDAvlCompare", (char*) xbdBioSchedPolicySSDAvlCompare, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDDetach", (char*) xbdBioSchedPolicySSDDetach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDDispatch", (char*) xbdBioSchedPolicySSDDispatch, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDFini", (char*) xbdBioSchedPolicySSDFini, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDInit", (char*) xbdBioSchedPolicySSDInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqDeQ", (char*) xbdBioSchedPolicySSDReqDeQ, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqDone", (char*) xbdBioSchedPolicySSDReqDone, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqEnQ", (char*) xbdBioSchedPolicySSDReqEnQ, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqGet", (char*) xbdBioSchedPolicySSDReqGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqMerged", (char*) xbdBioSchedPolicySSDReqMerged, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqNext", (char*) xbdBioSchedPolicySSDReqNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqPrev", (char*) xbdBioSchedPolicySSDReqPrev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDReqPut", (char*) xbdBioSchedPolicySSDReqPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPolicySSDShow", (char*) xbdBioSchedPolicySSDShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedPutAvlNode", (char*) xbdBioSchedPutAvlNode, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedReqDeq", (char*) xbdBioSchedReqDeq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedReqEnq", (char*) xbdBioSchedReqEnq, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedReqGet", (char*) xbdBioSchedReqGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedReqMergeable", (char*) xbdBioSchedReqMergeable, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedReqMerged", (char*) xbdBioSchedReqMerged, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedReqPut", (char*) xbdBioSchedReqPut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedShow", (char*) xbdBioSchedShow, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBioSchedStrategy", (char*) xbdBioSchedStrategy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdBlockSize", (char*) xbdBlockSize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdCacheInfoSet", (char*) xbdCacheInfoSet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdCreateGptPartition", (char*) xbdCreateGptPartition, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdDetach", (char*) xbdDetach, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdDetachSchecdPolicyById", (char*) xbdDetachSchecdPolicyById, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdDetachSchecdPolicyByName", (char*) xbdDetachSchecdPolicyByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdDump", (char*) xbdDump, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdEventCategory", (char*) &xbdEventCategory, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdEventInstantiated", (char*) &xbdEventInstantiated, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdEventMediaChanged", (char*) &xbdEventMediaChanged, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdEventPrimaryInsert", (char*) &xbdEventPrimaryInsert, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdEventRemove", (char*) &xbdEventRemove, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdEventSecondaryInsert", (char*) &xbdEventSecondaryInsert, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdEventSoftInsert", (char*) &xbdEventSoftInsert, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdFindPolicyById", (char*) xbdFindPolicyById, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdFindPolicyByName", (char*) xbdFindPolicyByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdGetBioSched", (char*) xbdGetBioSched, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdGetNextBioGeneric", (char*) xbdGetNextBioGeneric, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdGptPartAdd", (char*) xbdGptPartAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdGptPartDevCreate", (char*) xbdGptPartDevCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdGptPartFin", (char*) xbdGptPartFin, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdGptPartStart", (char*) xbdGptPartStart, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdGptPartVecAdd", (char*) xbdGptPartVecAdd, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdInit", (char*) xbdInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdIoctl", (char*) xbdIoctl, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdMapGet", (char*) xbdMapGet, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdNBlocks", (char*) xbdNBlocks, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdPartitionDevCreate", (char*) xbdPartitionDevCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdReqSchedComplete", (char*) xbdReqSchedComplete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRequestBackMergeHash", (char*) xbdRequestBackMergeHash, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRequestCacheCreate", (char*) xbdRequestCacheCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRequestCacheDestroy", (char*) xbdRequestCacheDestroy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRequestCacheLibFini", (char*) xbdRequestCacheLibFini, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRequestCacheLibInit", (char*) xbdRequestCacheLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRequestFrontMergeHash", (char*) xbdRequestFrontMergeHash, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRequestHashKeyCmp", (char*) xbdRequestHashKeyCmp, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdRoot", (char*) xbdRoot, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdSchedDebug", (char*) &xbdSchedDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdSchedSSDDebug", (char*) &xbdSchedSSDDebug, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "xbdSetBioSched", (char*) xbdSetBioSched, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdSize", (char*) xbdSize, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdSrvTaskGeneric", (char*) xbdSrvTaskGeneric, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdStrategy", (char*) xbdStrategy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdStrategyGeneric", (char*) xbdStrategyGeneric, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdSwitchSchecdPolicyById", (char*) xbdSwitchSchecdPolicyById, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xbdSwitchSchecdPolicyByName", (char*) xbdSwitchSchecdPolicyByName, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xcopy", (char*) xcopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdelete", (char*) xdelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdrCksum", (char*) xdrCksum, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_ARRAY", (char*) xdr_ARRAY, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_BOOL", (char*) xdr_BOOL, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_CHECKSUM", (char*) xdr_CHECKSUM, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_ENUM", (char*) xdr_ENUM, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_REFERENCE", (char*) xdr_REFERENCE, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_TGT_ADDR_T", (char*) xdr_TGT_ADDR_T, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_TGT_LONG_T", (char*) xdr_TGT_LONG_T, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_UINT32", (char*) xdr_UINT32, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_VOID", (char*) xdr_VOID, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_AGENT_INFO", (char*) xdr_WDB_AGENT_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CALL_RETURN_INFO", (char*) xdr_WDB_CALL_RETURN_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CONNECT_INFO", (char*) xdr_WDB_CONNECT_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CONNECT_PARAMS", (char*) xdr_WDB_CONNECT_PARAMS, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CORE", (char*) xdr_WDB_CORE, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CTX", (char*) xdr_WDB_CTX, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CTX_CREATE_DESC", (char*) xdr_WDB_CTX_CREATE_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CTX_KILL_DESC", (char*) xdr_WDB_CTX_KILL_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_CTX_STEP_DESC", (char*) xdr_WDB_CTX_STEP_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_DIRECT_CALL_RET", (char*) xdr_WDB_DIRECT_CALL_RET, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_EVTPT_ADD_DESC", (char*) xdr_WDB_EVTPT_ADD_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_EVTPT_DEL_DESC", (char*) xdr_WDB_EVTPT_DEL_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_EVT_DATA", (char*) xdr_WDB_EVT_DATA, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_EVT_INFO", (char*) xdr_WDB_EVT_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_MEM_REGION", (char*) xdr_WDB_MEM_REGION, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_MEM_SCAN_DESC", (char*) xdr_WDB_MEM_SCAN_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_MEM_XFER", (char*) xdr_WDB_MEM_XFER, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_MOD_INFO", (char*) xdr_WDB_MOD_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_OPQ_DATA_T", (char*) xdr_WDB_OPQ_DATA_T, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_PARAM_WRAPPER", (char*) xdr_WDB_PARAM_WRAPPER, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_REG_READ_DESC", (char*) xdr_WDB_REG_READ_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_REG_WRITE_DESC", (char*) xdr_WDB_REG_WRITE_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_REPLY_WRAPPER", (char*) xdr_WDB_REPLY_WRAPPER, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_RT_INFO", (char*) xdr_WDB_RT_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_SECT_INFO", (char*) xdr_WDB_SECT_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_SEG_INFO", (char*) xdr_WDB_SEG_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_STRING_ARRAY", (char*) xdr_WDB_STRING_ARRAY, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_STRING_T", (char*) xdr_WDB_STRING_T, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_SYM_ID", (char*) xdr_WDB_SYM_ID, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_SYM_ID_LIST", (char*) xdr_WDB_SYM_ID_LIST, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_SYM_INFO", (char*) xdr_WDB_SYM_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_SYM_LIST", (char*) xdr_WDB_SYM_LIST, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_SYM_MOD_DESC", (char*) xdr_WDB_SYM_MOD_DESC, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_TGT_INFO", (char*) xdr_WDB_TGT_INFO, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xdr_WDB_TGT_INFO_2", (char*) xdr_WDB_TGT_INFO_2, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "xpFuncs", (char*) &xpFuncs, 0, 0,  SYM_GLOBAL | SYM_DATA},
        {{NULL}, "zbufCreate", (char*) zbufCreate, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufCut", (char*) zbufCut, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufDelete", (char*) zbufDelete, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufDup", (char*) zbufDup, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufExtractCopy", (char*) zbufExtractCopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufInsert", (char*) zbufInsert, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufInsertBuf", (char*) zbufInsertBuf, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufInsertBuf64", (char*) zbufInsertBuf64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufInsertCopy", (char*) zbufInsertCopy, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufLength", (char*) zbufLength, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufLibInit", (char*) zbufLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSegData", (char*) zbufSegData, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSegFind", (char*) zbufSegFind, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSegLength", (char*) zbufSegLength, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSegNext", (char*) zbufSegNext, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSegPrev", (char*) zbufSegPrev, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockBufSend", (char*) zbufSockBufSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockBufSend64", (char*) zbufSockBufSend64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockBufSendto", (char*) zbufSockBufSendto, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockBufSendto64", (char*) zbufSockBufSendto64, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockLibInit", (char*) zbufSockLibInit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockRecv", (char*) zbufSockRecv, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockRecvfrom", (char*) zbufSockRecvfrom, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockSend", (char*) zbufSockSend, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSockSendto", (char*) zbufSockSendto, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbufSplit", (char*) zbufSplit, 0, 0,  SYM_GLOBAL | SYM_TEXT},
        {{NULL}, "zbuf_free", (char*) zbuf_free, 0, 0,  SYM_GLOBAL | SYM_TEXT},
    };


ULONG standTblSize = 6150;
