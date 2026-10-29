/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_EntryErrFunc(int, int);
int ADXF_Init(void);
int ADXSJD_Start(int);
int ADXSTM_SetBufSize(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXSTM_Start(int);
int FUN_0c0f05a0(int, int);
int FUN_0c210336(void);
int FUN_0c213a4e(int, int);
int FUN_0c213d02(void);
int FUN_0c218514(int, int, int, int);
int FUN_0c21b600(int);
int FUN_0c21b654(int);
int FUN_0c21b6b2(int);
int FUN_0c21b73c(int);
int FUN_0c228e94(int, int);
int FUN_0c228ebc(int, int);
int FUN_0c228f20(int, int);
int FUN_0c229028(int);
int FUN_0c229ce0(void);
int FUN_0c229d40(void);
int ADXERR_CallErrFunc(void);
int FUN_0c229ef4(void);
int FUN_0c229f08(void);
int FUN_0c22a070(int, int);
int FUN_0c22a554(int);
int FUN_0c22a590(int);
int FUN_0c22a638(void);
int FUN_0c22c98e(int, int, int, int);
int FUN_0c22ca1a(int, int, int, int);
int FUN_0c22cae2(int, int, int, int);
int FUN_0c22cb3c(int, int, int, int);
int FUN_0c22cb92(int, int, int, int);
int FUN_0c22cd34(void);
int FUN_0c22d010(void);
int FUN_0c22fa60(int, int, int);
int FUN_0c22fa7e(int, int, int);
int FUN_0c22fa8e(int);
extern void _builtin_set_imask(int);
int adxf_ExecOne(int);
int adxf_read_sj32(int, int, int);
int buMount(int);
int buUnmount(int);
int gdFsStopRd(int);
int kbCfgIni(int, int, int);
int kdSendFrame(void);
int kmiCopyToFrameBuffer(int, int, int);
int kmiFBGarbageCollect(void);
int kmiFBSortQueue(void);
int kmiFBfree(int);
int kmiFBfreeEx(int, int);
int kmiFBgetfreemem(int, int, int, int);
int kmiQueryFinishDMA(int);
int kmiVQFBfree(int);
int kmtex_GetTextureLevel(int, int);
int memset(int, int, int);
int mpdrv_get_deviceinfo(int);
int pdVibIsReady(int);
int pdVibStart(int, int);
int syBtCfgSet(int, int, int);
int syTmrInt1SetEx(int, int, int, int);
int thunk_FUN_0c22b6fa(void);
int thunk_FUN_0c22b736(int, int, int, int);
int thunk_FUN_0c22c6d0(void);
int thunk_FUN_0c22c8cc(int, int, int, int);
int vmsfs_c_getstate(int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_findfirst_ex(int, int, int);
int vmsfs_findnext(int, int);
int vmsfs_findnext_ex(int, int, int);
int vmsfs_fisexist(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fsetparam(int, int, int);
int vmsfs_setretry(int);
int vmsfs_setwork(int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xfind(int, int);
int buCalcBackupFileSize(int a4, int a5, int a6);
int ADXT_IsIbufSafety(int a4);
int adxt_start_stm(int a4);
int FUN_0c213470(void);
int adxf_ChkPrmGfr(int a4, int a5);
int FUN_0c21b5a6(int a4);
int kmChangeContextFilterMode(int a4);
void kmiDACControl(void);
int FUN_0c21ef80(int a4);
int kmiCopyTextureToTexture(void);
int kmiPutGlobalParam(void);
int ccitt_updcrc(int a4, int a5, int a6, int a7);
int gdFsStrcmpi(int a4, int a5);
int syTmrGenSetClock(int a4);
int kmGetFreeTextureMem(int a4, int a5);
int kmChangeContextPaletteBank(int a4);
int kmChangeVertexPCW(int a4, int a5, int a6);
int gdFsClose(int a4);
int syCfgSetSoundMode(int a4, int a5, int a6);
int kmDiscardVertexBuffer(void);
int bcdtime2fad(int a4);
int buSetFileParam(int a4, int a5, int a6);
int FUN_0c214cdc(int a4, int a5, int a6);
int FUN_0c218676(int a4, int a5, int a6, int a7);
void ADXT_GetNumSctIbuf(int a4);
int adxf_ChkPrmPt(int a4, int a5);
int adxf_CreateAdxFs(void);
int syBtExit(void);
int adxt_start_sj(int a4, int a5);
int ADXF_ExecServer(void);
int ADXF_GetNumReqSct(int a4, int a5);
int buCreateFile(int a4, int a5, int a6, int a7);
int buCreateExecFile(int a4, int a5, int a6, int a7);
int ADXF_ReadSj32(int a4, int a5, int a6);
int ADXT_DiscardSmpl(int a4);
void kmiGetProfileInt(int a4, int a5, int a6);
int buFindFirstFileEx(int a4, int a5, int a6);
int buFindNextFileEx(int a4, int a5, int a6);
int buOpenFile(int a4, int a5, int a6);
int buGetFileInfo(int a4, int a5, int a6);
int syCfgGetCountryCode(int a4, int a5, int a6);
int syCfgGetDefaultLanguage(int a4, int a5, int a6);
int syCfgGetBroadcastType(int a4, int a5, int a6);
int FUN_0c214c80(int a4, int a5, int a6);
int FUN_0c21b7c0(int a4, int a5, int a6);
int kmiWaitAccurate(float f4);
int FUN_0c2186aa(int a4, int a5, int a6, int a7);
int kmiPurgeMemory(int a4, int a5);
int FUN_0c21b7ea(int a4, int a5, int a6);
int gdFsCheckEof(int a4, int a5);
int buFindNextFile(int a4, int a5);
int buFindExecFile(int a4, int a5);
int buIsExistFile(int a4, int a5);
int buGetLastError(int a4);
int buGetFileSize(int a4, int a5);
int pdVibMxStart(int a4, int a5);
int adxf_AllocAdxFs(void);
int gdFsGetTokenSize(int a4, int a5, int a6);
int gdFsGetSearchID(int a4);
void syChainMasterHandlerPVR_H(void);
int syTmrInit(void);
int buUnmountDisk(int a4);
int kmiCopyFromFrameBuffer(int a4, int a5, int a6);
int kmFreeTexture(int a4);
int kmiCreateDummyRegionforAvoidCacheBug(int a4);
int syChainMasterHandler(int a4);
int pdVibMxStop(int a4);
int FUN_0c2211be(int a4, int a5, int a6);
int FUN_0c2211e0(int a4, int a5, int a6);
int FUN_0c22124c(int a4, int a5, int a6);
int buMountDisk(int a4, int a5, int a6);
int kmiWriteRegisters(int a4, int a5, int a6, int a7);
int FUN_0c221282(int a4, int a5, int a6, int a7);
int FUN_0c213b90(int a4);
int FUN_0c213bae(int a4);
int FUN_0c214caa(int a4);
int FUN_0c2186d2(void);
int kmChangeContextDepthMode(int a4);
int kmChangeContextCullingMode(int a4);
int kmChangeContextFlipUV(int a4);
int kmChangeContextClampUV(int a4);
int kmChangeContextStripLength(int a4);
int kmGetCurrentVertexOffset(int a4);
int FUN_0c221142(int a4);
int FUN_0c221212(int a4);
int FUN_0c2212a2(int a4);
int FUN_0c221364(int a4, int a5);
int ADXF_GetFsizeSct(int a4);
int ADXF_Tell(int a4);
int ADXF_GetFsizeByte(int a4);
int ADXF_GetNumReadSct(int a4);
int ADXF_GetStat(int a4);
int FUN_0c214d10(int a4, int a5, int a6, int a7);
int kmQueryFinishFlushVertexBuffer(void);
int FUN_0c22100e(int a4, int a5);
int FUN_0c221230(int a4, int a5);
int buStat(int a4);
int syCfgGetIDAddress(int a4, int a5, int a6);
int kmiDefaultInterruptHandler(int a4);
int FUN_0c220e10(int a4);
int gdFsGetFileSize(int a4, int a5);
int gdFsGetFileSctSize(int a4, int a5);
int gdFsGetFileFad(int a4, int a5);
int gdFsSetTmode(int a4, int a5);
int gdFsGetTransStat(int a4);
int syTmrMicroToCount(int a4);
int syTmrGenSetCount(int a4);
int FUN_0c2134b2(int a4, int a5, int a6, int a7);
int kmChangeContextColorType(int a4);
int kmChangeVertexOffset(int a4, int a5);
void gdFsMemcpy(int a4, int a5, int a6);
int gdFsGetStat(int a4);
int kmiWaitForFinishDMA(int a4);
int kmiCopyToPVRMemory(int a4, int a5, int a6);
int kmiCopyFromPVRMemory(int a4, int a5, int a6);
int gdFsTell(int a4);
int gdFsGetNumRd(int a4);
int FUN_0c214cc8(int a4, int a5, int a6);
int kmGarbageCollectTexture(void);
int FUN_0c2212e0(int a4);
int syCfgInit(int a4);
int ADXT_SetOutVol(int a4, int a5, int a6, int a7);
int kdGetDevice(int a4);
int FUN_0c221160(void);
int FUN_0c221202(void);
int syTmrGenStart(void);
int kmiGetDstVertexBuffer(void);
int FUN_0c2211b0(int a4, int a5);
int FUN_0c22126e(int a4, int a5);
int kdGetDeviceInfo(int a4);
int ADXT_GetOutPan(int a4, int a5);
int kmiAddSysConfigFlag(int a4);
int gdFsCreateDirhn(int a4, int a5);
int kdVbInHandler(void);
int syCfgExit(void);
int ADXT_GetFilter(int a4);
int ADXT_SetFx(int a4, int a5, int a6, int a7);
int ADXT_GetFx(int a4, int a5, int a6, int a7);
int ADXT_SetFilter(int a4, int a5, int a6, int a7);
int ADXT_SetTranspose(int a4, int a5, int a6, int a7);
int ADXT_GetTranspose(int a4, int a5, int a6, int a7);
int ADXF_GetPtinfoSize(int a4);
int kmiFatalErrorEntry(int a4);
int syTmrGetCount(void);
int syTmrGenStop(void);
int syTmrGenGetCount(void);
int kmSetStripLength(int a4);
int kmiSetSysConfigFlag(int a4);
int kdDmaEndHandler1(void);
void buSetPrintFunc(int a4);
int buSetRetryCount(int a4);
int syCfgConvLang(int a4);
int pdVibMxIsReady(int a4);
int FUN_0c213c26(int a4, int a5);
int FUN_0c213cf2(int a4, int a5);
int ADXT_SetPauseBuf(void);
int ADXT_EntryErrFunc(int a4, int a5);
int kmiReadRegister(int a4);
int kmiGetSysConfigFlag(void);
int FUN_0c2212c0(void);
int gdFsChangeDir(void);
int syTmrDiffCount(int a4, int a5);
int FUN_0c213a4a(int a4, int a5);
int ADXT_GetStat(int a4);
void kmiCheckRenderer(void);
void kmiUnloadDevice(void);
void FUN_0c218da0(void);
void kmiInitRenderer(void);
void kmiFastTA(void);
void kmiFastTADirect(void);
int FUN_0c220da0(void);
int FUN_0c220da4(void);
int thunk_FUN_0c221364(int a4, int a5);
int syTmrInt1Set(int a4, int a5, int a6);

int buCalcBackupFileSize(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    if ((a4 != 0) && (((unsigned int)a4 <= (unsigned int)0x3) && ((unsigned int)a5 <= (unsigned int)0x3))) {
        t0 = *(int *)(((a4 << 2) + 0xC2393E0));
        t1 = *(int *)(((a5 << 2) + 0xC2393F0));
        t2 = 0x0;
        if ((0x1FF & (0x80 + ((t0 + t1) + a6))) != 0) {
            t2 = 0x1;
        }
        return (t2 + ((unsigned int)((unsigned int)(0x80 + ((t0 + t1) + a6)) >> 8) >> 1));
    }
    return 0xFFFFFF00;
}

int ADXT_IsIbufSafety(int a4)
{
    int t1;
    int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
        if ((int)t4 >= (int)((((*(short *)((a4 + 0x3E))) << 8) << 2) << 1)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int adxt_start_stm(int a4)
{
    ADXSTM_SetBufSize((*(int *)((a4 + 0x8))), ((((*(short *)((a4 + 0x3E))) << 8) << 2) << 1), ((((*(short *)((a4 + 0x3C))) << 8) << 2) << 1));
    ADXSTM_SetEos((*(int *)((a4 + 0x8))), 0x19);
    ADXSTM_Start((*(int *)((a4 + 0x8))));
    adxt_start_sj(a4, (*(int *)((a4 + 0x10))));
    *(unsigned char *)((a4 + 0x2)) = 0x0;
    return 0x0;
}

int FUN_0c213470(void)
{
    ADXF_Init();
    FUN_0c22d010();
    FUN_0c22cd34();
    FUN_0c229ce0();
    thunk_FUN_0c22b6fa();
    FUN_0c22a638();
    FUN_0c229ef4();
    FUN_0c229d40();
    return memset(0xC239418, 0x0, 0x3A0);
}


int FUN_0c21b5a6(int a4)
{
    int t2;
    int t3;
    int t4;
    int t12;
    int t13;
    int t9;
    int t10;
    int t7;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        t2 = FUN_0c21b73c(a4);
        t12 = t2;
        t13 = t2;
    } else {
        t3 = *(int *)((a4 + 0x18));
        if ((t3 & 8) != 0) {
            t4 = FUN_0c21b654(a4);
            t9 = t4;
            t10 = t4;
        } else {
            if ((t3 & 32) != 0) {
                t7 = (FUN_0c21b6b2(a4));
            } else {
                t7 = (FUN_0c21b600(a4));
            }
            t9 = t7;
            t10 = t7;
        }
        t12 = t9;
        t13 = t10;
    }
    *(unsigned int *)((a4 + 0x14)) = t13;
    return t12;
}

int kmChangeContextFilterMode(int a4)
{
    int t0;
    int t2;
    int stk[5];

    t0 = *(int *)0xC237778;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = (*(int *)0xC237774);
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t2 = *(int *)0xC237780;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = (*(int *)0xC23777C);
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t2;
    *(unsigned int *)0xC95288C = (((*(int *)0xC95288C) & 0xFFFF9FFF) | ((*(int *)((((int)stk + 4) + (a4 << 2)))) << 13));
    *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
    return 0x0;
}

void kmiDACControl(void)
{
    
}

int FUN_0c21ef80(int a4)
{
    return (((((((*(int *)((0xC239CD4 + ((*(int *)0xC9527AC) << 2)))) + (*(int *)((0xC239CD4 + ((*(int *)0xC9527B0) << 2))))) + (*(int *)((0xC239CD4 + ((*(int *)0xC9527B4) << 2))))) + (*(int *)((0xC239CD4 + ((*(int *)0xC9527B8) << 2))))) + (*(int *)((0xC239CD4 + ((*(int *)0xC9527BC) << 2))))) * a4) << 2);
}

int kmiCopyTextureToTexture(void)
{
    return 0x1;
}

int kmiPutGlobalParam(void)
{
    int t0;
    int t1;
    int t5;

    t0 = *(int *)0xC9529C8;
    t1 = *(int *)0xC952968;
    *(unsigned int *)0xC95296C = ((t0 << 2) + t1);
    FUN_0c22fa60((*(int *)((((t0 << 2) + t1) + 0x0))), 0xC239B2C, ((*(int *)0xC239B28) << 2));
    t5 = *(int *)0xC95296C;
    *(unsigned int *)((t5 + 0x0)) = ((*(int *)((t5 + 0x0))) + ((*(int *)0xC239B28) << 2));
    return (*(int *)0xC95296C);
}

int ccitt_updcrc(int a4, int a5, int a6, int a7)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t0;
    int t2;
    int t3;

    t4 = a4;
    t5 = a6;
    t6 = a7;
    t7 = a5;
    for (;;) {
        t8 = ((int)t5 > 0);
        t5 = (t5 - 1);
        if (!t8) {
            break;
        }
        t6 = (unsigned short)t4;
        t0 = t6;
        t3 = 0xFFFFFFF8;
        t0 = (((int)t3 >= 0) ? (t0 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)t0 >> (-(int)t3 & 31)) : ((int)t0 >> 31)));
        t9 = *(signed char *)((t7 + 0x0));
        t7 = (t7 + 0x1);
        t3 = t9;
        t0 = (unsigned char)t0;
        t2 = t6;
        t3 = (unsigned char)t3;
        t0 = (t0 ^ t3);
        t0 = (t0 << 1);
        t2 = (t2 << 8);
        t2 = (t2 & 0xFF00);
        t4 = t2;
        t4 = (t4 ^ ((*(short *)((0xC237848 + t0)))));
    }
    return t4;
}

int gdFsStrcmpi(int a4, int a5)
{
    int t2;
    int t3;
    int t6;
    int t8;
    int t11;
    int t0;
    int t1;

    t2 = a5;
    t3 = a4;
    for (;;) {
        if ((*(signed char *)((t3 + 0x0))) == 0) {
            break;
        }
        t6 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t0 = (FUN_0c2212e0(t6));
        t1 = (signed char)t0;
        t8 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t0 = (FUN_0c2212e0(t8));
        t0 = (signed char)t0;
        if (t1 == t0) continue;
        t0 = 0x0;
        return t0;
    }
    t11 = 0x1;
    if ((*(signed char *)((t2 + 0x0))) != 0) {
        t11 = 0x0;
    }
    return t11;
}

int syTmrGenSetClock(int a4)
{
    int t1;
    int t2;
    int t3;

    t1 = a4;
    if (((unsigned short)a4 != 0) && (((unsigned short)a4 != 1) && (((unsigned short)a4 != 2) && (((unsigned short)a4 != 3) && ((unsigned short)a4 != 4))))) {
        t1 = 0x2;
    }
    t2 = *(signed char *)0xFFD80004;
    t3 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t3 & 0xFB);
    *(unsigned short *)0xFFD80028 = (((*(short *)0xFFD80028) & 0xFFFFFFF8) | t1);
    *(unsigned char *)0xFFD80004 = t2;
    return (t3 & 0xFB);
}

int kmGetFreeTextureMem(int a4, int a5)
{
    int t0;
    int stk[8];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = kmiFBgetfreemem(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC));
    *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = (((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 8)))) + (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (*(int *)(((int)stk + 16)));
    return t0;
}

int kmChangeContextPaletteBank(int a4)
{
    int t0;

    t0 = *(int *)0xC952890;
    if (((t0 & 0x38000000) == 0x28000000) || ((t0 & 0x38000000) == 0x30000000)) {
        *(unsigned int *)0xC952890 = (((*(int *)0xC952890) & 0xF81FFFFF) | ((a4 & 0x3F) << 21));
        *(unsigned int *)0xC239B38 = (*(int *)0xC952890);
    }
    return 0x0;
}

int kmChangeVertexPCW(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int stk[5];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)0xC952968;
    *(unsigned int *)0xC95296C = ((a4 << 2) + t0);
    FUN_0c22fa60((*(int *)((((a4 << 2) + t0) + 0x0))), (((int)stk + 4) + 0x4), 0x4);
    t3 = *(int *)0xC95296C;
    *(unsigned int *)((t3 + 0x0)) = ((*(int *)((t3 + 0x0))) + ((*(int *)(((int)stk + 4))) << 2));
    return 0x0;
}

int gdFsClose(int a4)
{
    int t4;
    int t12;

    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) != 0) {
            t4 = *(short *)((a4 + 0x50));
            if ((t4 != 2) && ((t4 != 3) && (t4 != 4))) {
            } else {
                gdFsStopRd(a4);
            }
            *(unsigned short *)((a4 + 0x4C)) = 0x0;
        }
        t12 = 0x4C;
    }
    return t12;
}

int syCfgSetSoundMode(int a4, int a5, int a6)
{
    int t2;

    if ((*(int *)0xC239400) != 0) {
        if ((a4 != 0) && (a4 != 1)) {
            return 0xFFFFFFFF;
        }
        *(unsigned char *)0x8C00007E = a4;
        t2 = syBtCfgSet(0x2, (*(int *)0xC239400), a6);
        if (t2 == -1) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int kmDiscardVertexBuffer(void)
{
    int t2;
    int t3;

    t2 = kmiFBfreeEx((*(int *)0xC9529CC), (*(int *)0xC9529D0));
    if (t2 != 0) {
        return t2;
    }
    t3 = 0xC9529D4;
    for (;;) {
        if ((unsigned int)t3 >= (unsigned int)0xC9529E8) {
            break;
        }
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
    }
    return 0x0;
}

int bcdtime2fad(int a4)
{
    int t1;
    int t3;
    int t5;

    t1 = FUN_0c220e10((*(signed char *)((a4 + 0x0))));
    t3 = FUN_0c220e10((*(signed char *)(((a4 + 0x1) + 0x0))));
    t5 = FUN_0c220e10((*(signed char *)((((a4 + 0x1) + 0x1) + 0x0))));
    return ((((t1 * 0x3C) + t3) * 0x4B) + t5);
}

int buSetFileParam(int a4, int a5, int a6)
{
    int t2;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    t2 = vmsfs_c_getstate((*(int *)(((*(int *)(((int)stk + 4))) + 0x28))));
    if (t2 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fsetparam((*(int *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), (*(signed char *)(((int)stk + 12))));
}

int FUN_0c214cdc(int a4, int a5, int a6)
{
    int t9;
    int t0;
    int t2;
    int t3;

    t9 = a5;
    if ((0x2000000 & a4) != 0) {
        t0 = (a5 << 2);
        t2 = (a5 + 0x1);
        t3 = a6;
        if ((a4 & 0x400000) != 0) {
        } else {
            *(unsigned int *)(((a5 << 2) + 0xC9523A0)) = (0xFFFF0000 & a6);
            t0 = ((a5 + 0x1) << 2);
            t2 = ((a5 + 0x1) + 0x1);
            t3 = ((unsigned short)a6 << 16);
        }
        *(unsigned int *)((t0 + 0xC9523A0)) = t3;
        t9 = t2;
    }
    return t9;
}

int FUN_0c218676(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xA05F6908 = 0x4;
    *(unsigned int *)0xC952824 = ((*(int *)0xC952824) + 0x1);
    *(unsigned int *)((((*(int *)0xC952660) << 2) + 0xC952648)) = 0xFFFFFFFD;
    if ((*(int *)0xC9527A8) == 1) {
        *(unsigned int *)0xC952818 = ((*(int *)0xC952818) + 0x1);
        FUN_0c218514(0x0, a5, a6, a7);
    }
    return 0x0;
}

void ADXT_GetNumSctIbuf(int a4)
{
    int t1;
    int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
        
    }
}

int adxf_ChkPrmPt(int a4, int a5)
{
    if (((int)a4 >= 0) && ((int)a4 < (int)0x100)) {
        if (a5 == 0) {
            ADXERR_CallErrFunc();
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    ADXERR_CallErrFunc();
    return 0xFFFFFFFD;
}

int adxf_CreateAdxFs(void)
{
    int t0;

    t0 = adxf_AllocAdxFs();
    if (t0 == 0) {
        return 0x0;
    }
    *(unsigned char *)((t0 + 0x1)) = 0x1;
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    *(unsigned int *)((t0 + 0x1C)) = 0x0;
    *(unsigned int *)((t0 + 0x20)) = 0x0;
    *(unsigned int *)((t0 + 0x24)) = 0x0;
    *(unsigned char *)((t0 + 0x2)) = 0x0;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    return t0;
}

int syBtExit(void)
{
    int t3;
    int t4;

    if ((unsigned char)(*(signed char *)0x8C0080FC) == 1) {
        if ((unsigned char)(*(signed char *)0x8C0080FE) == 1) {
            return ((int (*)(void))(0x8C008300))();
        }
        *(unsigned int *)0x8C000064 = 0x8C008000;
        t3 = *(int *)0x8C0000E0;
        return ((int (*)(int))(t3))(0x3);
    }
    t4 = *(int *)0x8C0000E0;
    return ((int (*)(int))(t4))(0x1);
}

int adxt_start_sj(int a4, int a5)
{
    FUN_0c22a070((*(int *)((a4 + 0x4))), a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned char *)((a4 + 0x71)) = 0x0;
    return 0x71;
}

int ADXF_ExecServer(void)
{
    int t1;

    ADXCRS_Lock();
    t1 = 0xC95DF88;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 1) {
            adxf_ExecOne(t1);
        }
        t1 = (t1 + 0x30);
        if ((unsigned int)t1 >= (unsigned int)0xC95E288) {
            break;
        }
    }
    return ADXCRS_Unlock();
}

int ADXF_GetNumReqSct(int a4, int a5)
{
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        *(unsigned int *)((a5 + 0x0)) = 0x0;
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x1C)));
    return (*(int *)((a4 + 0x20)));
}

int buCreateFile(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fcreate(a4, a5, a6, a7);
}

int buCreateExecFile(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_xcreate(a4, a5, a6, a7);
}

int ADXF_ReadSj32(int a4, int a5, int a6)
{
    int t1;

    ADXCRS_Lock();
    t1 = adxf_read_sj32(a4, a5, a6);
    *(unsigned char *)((a4 + 0x2)) = 0x1;
    ADXCRS_Unlock();
    return t1;
}

int ADXT_DiscardSmpl(int a4)
{
    int t2;

    if ((*(signed char *)((a4 + 0x72))) == 0) {
        return 0x0;
    }
    *(volatile int *)((a4 + 0xC));
    t2 = thunk_FUN_0c22c6d0();
    FUN_0c213d02();
    return t2;
}

void kmiGetProfileInt(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c0f05a0(a4, 0xC2373F0);
    if (t0 == 0) {
        FUN_0c0f05a0(a5, 0xC2373FC);
        
    }
}

int buFindFirstFileEx(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findfirst_ex(a4, a5, a6);
}

int buFindNextFileEx(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findnext_ex(a4, a5, a6);
}

int buOpenFile(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fopen(a4, a5, a6);
}

int buGetFileInfo(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fgetinfo(a4, a5, a6);
}

int syCfgGetCountryCode(int a4, int a5, int a6)
{
    int t0;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x30;
        t0 = syCfgGetIDAddress(a4, a5, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(signed char *)((t0 + 0xA)));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int syCfgGetDefaultLanguage(int a4, int a5, int a6)
{
    int t0;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = syCfgGetIDAddress(a4, a5, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(signed char *)((t0 + 0xB)));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int syCfgGetBroadcastType(int a4, int a5, int a6)
{
    int t0;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x30;
        t0 = syCfgGetIDAddress(a4, a5, a6);
        if (t0 == 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(signed char *)((t0 + 0xC)));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c214c80(int a4, int a5, int a6)
{
    int t0;
    int t1;

    *(unsigned int *)0xC9524A8 = (((a4 & 0x7) << 16) << 8);
    if (a6 != 0) {
        t0 = *(int *)0xC9524A8;
        *(unsigned int *)0xC9524A8 = (t0 | 0x10000000);
        t1 = (t0 | 0x10000000);
    }
    if (a5 != 0) {
        *(unsigned int *)0xC9524A8 = ((*(int *)0xC9524A8) | 0x8000000);
    }
    return t1;
}

int FUN_0c21b7c0(int a4, int a5, int a6)
{
    int t1;

    t1 = *(int *)((((kmtex_GetTextureLevel(a6, a6)) << 2) + 0xC237604));
    return kmiCopyToFrameBuffer((a4 + 0x4), a5, (t1 + 0x4));
}

int kmiWaitAccurate(float f4)
{
    float u0;
    int stk[2];

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    u0 = *(float *)0xC2179E0;
    if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(int)(f4 * u0)) {
        for (;;) {
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            if ((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)(int)(f4 * u0)) {
                break;
            }
        }
    }
    return 0xC2179E0;
}

int FUN_0c2186aa(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xA05F6908 = 0x8;
    *(unsigned int *)0xC952820 = ((*(int *)0xC952820) + 0x1);
    if ((*(int *)0xC9527A8) == 1) {
        *(unsigned int *)0xC952814 = ((*(int *)0xC952814) + 0x1);
        FUN_0c218514(0x1, a5, a6, a7);
    }
    return 0x0;
}

int kmiPurgeMemory(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    if ((unsigned int)a4 <= (unsigned int)(a4 + a5)) {
        t0 = a4;
        for (;;) {
            t1 = FUN_0c22fa8e(t0);
            t0 = (t0 + 0x20);
            if ((unsigned int)t0 > (unsigned int)(a4 + a5)) {
                break;
            }
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c21b7ea(int a4, int a5, int a6)
{
    int t1;

    t1 = *(int *)((((kmtex_GetTextureLevel(a6, a6)) << 2) + 0xC237604));
    return kmiCopyFromFrameBuffer(a4, (a5 + 0x4), t1);
}

int gdFsCheckEof(int a4, int a5)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0xFFFFFFF6;
        }
        if ((int)(*(int *)((a4 + 0x14))) >= (int)(*(int *)((a4 + 0x10)))) {
            *(unsigned int *)((a5 + 0x0)) = 0x1;
        } else {
            *(unsigned int *)((a5 + 0x0)) = 0x0;
        }
        return 0x0;
    }
    return 0xFFFFFFF6;
}

int buFindNextFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findnext(a4, a5);
}

int buFindExecFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_xfind(a4, a5);
}

int buIsExistFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fisexist(a4, a5);
}

int buGetLastError(int a4)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)((0xC954330 + (a4 << 2))));
}

int buGetFileSize(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fgetsize(a4, a5);
}


int adxf_AllocAdxFs(void)
{
    int t0;
    int t1;
    int t6;

    if ((unsigned int)0xC95DF88 < (unsigned int)0xC95E288) {
        t0 = 0xC95DF88;
        t1 = 0xC95DF88;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x30);
            t1 = (t1 + 0x30);
            if ((unsigned int)t0 >= (unsigned int)0xC95E288) {
                return 0x0;
            }
        }
        t6 = t1;
    } else {
        t6 = 0x0;
    }
    return t6;
}

int gdFsGetTokenSize(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;

    t1 = a4;
    t2 = a6;
    t3 = 0x0;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t2 = a5;
        for (;;) {
            if ((*(signed char *)((t2 + 0x0))) == 0) {
                break;
            }
            if ((*(signed char *)((t1 + 0x0))) != ((*(signed char *)((t2 + 0x0))))) {
                t2 = (t2 + 0x1);
                continue;
            }
            return t3;
        }
        t3 = (t3 + 0x1);
        t1 = (t1 + 0x1);
    }
    return t3;
}

int gdFsGetSearchID(int a4)
{
    int t1;
    int t2;
    int t4;
    int t0;

    t1 = 0xDA;
    t2 = a4;
    for (;;) {
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t0 = (FUN_0c2212e0(t4));
        t0 = (unsigned char)t0;
        t1 = (t1 + t0);
    }
    return (unsigned char)((unsigned int)t1 >> 2);
}

void syChainMasterHandlerPVR_H(void)
{
    int t2;
    int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC953C30);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))));
        t2 = (*(int *)((t2 + 0x4)));
    }
}

int syTmrInit(void)
{
    int t1;

    *(unsigned char *)0xFFD80000 = 0x0;
    *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFE);
    *(unsigned short *)0xFFD80010 = 0x2;
    *(unsigned int *)0xFFD80008 = 0xFFFFFFFF;
    *(unsigned int *)0xFFD8000C = 0xFFFFFFFF;
    t1 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t1 | 0x1);
    return (t1 | 0x1);
}


int kmiCopyFromFrameBuffer(int a4, int a5, int a6)
{
    FUN_0c22fa7e(a4, (a5 + 0xA4000000), a6);
    kmiPurgeMemory(a4, a6);
    return 0x1;
}

int kmFreeTexture(int a4)
{
    int t4;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        t4 = (kmiVQFBfree(a4));
    } else {
        t4 = (kmiFBfree((*(int *)((a4 + 0x1C)))));
    }
    return t4;
}

int kmiCreateDummyRegionforAvoidCacheBug(int a4)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = 0x10000000;
    *(unsigned int *)(((int)stk + 8)) = 0x80000000;
    *(unsigned int *)(((int)stk + 12)) = 0x80000000;
    *(unsigned int *)(((int)stk + 16)) = 0x80000000;
    *(unsigned int *)(((int)stk + 20)) = 0x80000000;
    *(unsigned int *)(((int)stk + 24)) = 0x80000000;
    return (kmiCopyToPVRMemory(a4, ((int)stk + 4), 0x18));
}

int syChainMasterHandler(int a4)
{
    int t1;
    int t2;

    t1 = 0xC9539E8;
    t2 = (*(int *)(((((int)(short)a4 >> 4) << 2) + 0xC9539E8)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (((int (*)(int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8)))));
        t2 = (*(int *)((t2 + 0x4)));
    }
    return t1;
}


int FUN_0c2211be(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (FUN_0c228e94(0x14, ((int)stk + 4)));
}

int FUN_0c2211e0(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (FUN_0c228e94(0x15, ((int)stk + 4)));
}

int FUN_0c22124c(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (FUN_0c228e94(0x22, ((int)stk + 4)));
}

int buMountDisk(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_setwork(a4, a5, a6);
    if (t0 == 0) {
        return buMount(a4);
    }
    return t0;
}

int kmiWriteRegisters(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t0;
    int t1;

    t2 = 0x0;
    t3 = a7;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)a4) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 << 1);
        t1 = (t1 + a5);
        t0 = (*(int *)((t1 + 0x0)));
        t3 = (*(int *)((t1 + 0x4)));
        t1 = 0xA05F8000;
        t0 = (t0 + t1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t2 = (t2 + 0x1);
    }
    return t0;
}

int FUN_0c221282(int a4, int a5, int a6, int a7)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a7;
    return (FUN_0c228e94(0x24, ((int)stk + 4)));
}

int FUN_0c213b90(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c22a590((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c213bae(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c22a554((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c214caa(int a4)
{
    int t5;
    int t0;
    int t2;

    t5 = 0x1;
    if ((0x2000000 & a4) != 0) {
        t0 = 0x2;
        if ((0x1000000 & a4) != 0) {
            t0 = 0x3;
        }
        t2 = t0;
        if ((a4 & 0x400000) == 0) {
            t2 = (t0 + 0x1);
        }
        t5 = t2;
    }
    return t5;
}

int FUN_0c2186d2(void)
{
    *(unsigned int *)0xA05F6908 = 0x2;
    if ((*(int *)0xC952858) == 0) {
        *(unsigned int *)0xC9525AC = ((*(int *)0xC9525AC) | 0x10);
    }
    *(unsigned int *)0xC952858 = 0x0;
    return 0x0;
}

int kmChangeContextDepthMode(int a4)
{
    *(unsigned int *)0xC952888 = (((*(int *)0xC952888) & 0x1FFFFFFF) | (a4 << 29));
    *(unsigned int *)0xC239B30 = (*(int *)0xC952888);
    return 0x0;
}

int kmChangeContextCullingMode(int a4)
{
    *(unsigned int *)0xC952888 = (((*(int *)0xC952888) & 0xE7FFFFFF) | (a4 << 27));
    *(unsigned int *)0xC239B30 = (*(int *)0xC952888);
    return 0x0;
}

int kmChangeContextFlipUV(int a4)
{
    *(unsigned int *)0xC95288C = (((*(int *)0xC95288C) & 0xFFF9FFFF) | ((a4 << 16) << 1));
    *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
    return 0x0;
}

int kmChangeContextClampUV(int a4)
{
    *(unsigned int *)0xC95288C = (((*(int *)0xC95288C) & 0xFFFE7FFF) | (a4 << 15));
    *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
    return 0x0;
}

int kmChangeContextStripLength(int a4)
{
    int t0;

    t0 = *(int *)0xC952878;
    *(unsigned int *)0xC952878 = (((t0 & 0xFFF3FFFF) | ((a4 << 16) << 2)) | 0x800000);
    *(unsigned int *)0xC239B2C = (((t0 & 0xFFF3FFFF) | ((a4 << 16) << 2)) | 0x800000);
    return 0x0;
}

int kmGetCurrentVertexOffset(int a4)
{
    int t1;
    int t2;
    int t3;

    t1 = *(int *)(((a4 << 2) + (*(int *)0xC952968)));
    t2 = *(int *)(((a4 << 2) + 0xC9529B4));
    t3 = (t1 - t2);
    if ((int)(t1 - t2) < 0) {
        t3 = ((t1 - t2) + 0x3);
    }
    return ((t3 >> 1) >> 1);
}

int FUN_0c221142(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (FUN_0c228e94(0x1B, ((int)stk + 4)));
}

int FUN_0c221212(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (FUN_0c228e94(0x17, ((int)stk + 4)));
}

int FUN_0c2212a2(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (FUN_0c228e94(0x28, ((int)stk + 4)));
}

int FUN_0c221364(int a4, int a5)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        if ((*(signed char *)((a5 + 0x0))) != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int))(0xC22135C))(a4);
}

int ADXF_GetFsizeSct(int a4)
{
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x10)));
}

int ADXF_Tell(int a4)
{
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x18)));
}

int ADXF_GetFsizeByte(int a4)
{
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x14)));
}

int ADXF_GetNumReadSct(int a4)
{
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x24)));
}

int ADXF_GetStat(int a4)
{
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        return 0xFFFFFFFD;
    }
    return (*(signed char *)((a4 + 0x1)));
}

int FUN_0c214d10(int a4, int a5, int a6, int a7)
{
    int t3;

    t3 = a5;
    if ((a4 & 0x2000000) != 0) {
        *(unsigned int *)(((a5 << 2) + 0xC9523A0)) = a6;
        *(unsigned int *)((((a5 + 0x1) << 2) + 0xC9523A0)) = a7;
        t3 = ((a5 + 0x1) + 0x1);
    }
    return t3;
}

int kmQueryFinishFlushVertexBuffer(void)
{
    int t1;

    t1 = kmiQueryFinishDMA((*(int *)0xC952724));
    if (t1 != 1) {
        return 0xD;
    }
    return 0x0;
}

int FUN_0c22100e(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    return (FUN_0c228e94(0x1C, ((int)stk + 4)));
}

int FUN_0c221230(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    return (FUN_0c228e94(0x13, ((int)stk + 4)));
}

int buStat(int a4)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int syCfgGetIDAddress(int a4, int a5, int a6)
{
    int t0;

    t0 = kbCfgIni(0x0, a5, a6);
    if (t0 != 0) {
        return 0x0;
    }
    return FUN_0c229028(t0);
}

int kmiDefaultInterruptHandler(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((((a4 << 2) << 1) + 0xC95252C));
    t1 = *(int *)(((0xC95252C + ((a4 << 2) << 1)) + 0x4));
    return ((int (*)(int))(t0))(t1);
}

int FUN_0c220e10(int a4)
{
    return ((((((int)(0xF0 & (signed char)a4) >> 4) << 2) + ((int)(0xF0 & (signed char)a4) >> 4)) << 1) + (0xF & (signed char)a4));
}

int gdFsGetFileSize(int a4, int a5)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0xC)));
        return 0x1;
    }
    return 0x0;
}

int gdFsGetFileSctSize(int a4, int a5)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x10)));
        return 0x1;
    }
    return 0x0;
}

int gdFsGetFileFad(int a4, int a5)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x8)));
        return 0x1;
    }
    return 0x0;
}

int gdFsSetTmode(int a4, int a5)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0xFFFFFFF6;
        }
        *(unsigned short *)((a4 + 0x4E)) = a5;
        return 0x0;
    }
    return 0xFFFFFFF6;
}

int gdFsGetTransStat(int a4)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0xFFFFFFF6;
        }
        return (*(short *)((a4 + 0x4A)));
    }
    return 0xFFFFFFF6;
}

int syTmrMicroToCount(int a4)
{
    return (((unsigned int)((0x7F & a4) * 0x64) >> 7) + (((unsigned int)a4 >> 7) * 0x64));
}

int syTmrGenSetCount(int a4)
{
    int t0;
    int t1;

    t0 = *(signed char *)0xFFD80004;
    t1 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t1 & 0xFB);
    *(unsigned int *)0xFFD80020 = 0xFFFFFFFF;
    *(unsigned int *)0xFFD80024 = (-a4);
    *(unsigned char *)0xFFD80004 = t0;
    return (t1 & 0xFB);
}

int FUN_0c2134b2(int a4, int a5, int a6, int a7)
{
    thunk_FUN_0c22b736(a4, a5, a6, a7);
    FUN_0c229f08();
    return ((int (*)(void))(0xC22A64E))();
}

int kmChangeContextColorType(int a4)
{
    int t0;

    t0 = *(int *)0xC952878;
    *(unsigned int *)0xC952878 = ((t0 & 0xFFFFFFCF) | ((a4 << 2) << 2));
    *(unsigned int *)0xC239B2C = ((t0 & 0xFFFFFFCF) | ((a4 << 2) << 2));
    return 0x0;
}

int kmChangeVertexOffset(int a4, int a5)
{
    *(unsigned int *)((((*(int *)0xC952968) + (a4 << 2)) + 0x0)) = ((*(int *)(((a4 << 2) + 0xC9529B4))) + (a5 << 2));
    return 0x0;
}

void gdFsMemcpy(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if ((int)a6 > 0) {
        t0 = a5;
        t1 = a6;
        t2 = a4;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t1 = (t1 - 1);
            *(unsigned char *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x1);
            if ((int)t1 <= 0) {
                break;
            }
        }
    }
}

int gdFsGetStat(int a4)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0xFFFFFFF6;
        }
        return (*(short *)((a4 + 0x50)));
    }
    return 0xFFFFFFF6;
}

int kmiWaitForFinishDMA(int a4)
{
    int t0;

    for (;;) {
        t0 = kmiQueryFinishDMA(a4);
        if (t0 == 1) {
            break;
        }
    }
    return 0x1;
}

int kmiCopyToPVRMemory(int a4, int a5, int a6)
{
    FUN_0c22fa7e((a4 + 0xA5000000), a5, a6);
    return 0x1;
}

int kmiCopyFromPVRMemory(int a4, int a5, int a6)
{
    FUN_0c22fa7e(a4, (a5 + 0xA5000000), a6);
    return 0x1;
}

int gdFsTell(int a4)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0x0;
        }
        return (*(int *)((a4 + 0x14)));
    }
    return 0x0;
}

int gdFsGetNumRd(int a4)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0x0;
        }
        return (*(int *)((a4 + 0x18)));
    }
    return 0x0;
}

int FUN_0c214cc8(int a4, int a5, int a6)
{
    int t2;

    t2 = a5;
    if ((a4 & 0x1000000) != 0) {
        *(unsigned int *)(((a5 << 2) + 0xC9523A0)) = a6;
        t2 = (a5 + 0x1);
    }
    return t2;
}

int kmGarbageCollectTexture(void)
{
    kmiFBSortQueue();
    return (kmiFBGarbageCollect());
}

int FUN_0c2212e0(int a4)
{
    int t1;

    t1 = a4;
    if (((int)(signed char)a4 >= (int)0x61) && ((int)(signed char)a4 <= (int)0x7A)) {
        t1 = (a4 - 32);
    }
    return t1;
}

int syCfgInit(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)0xC239400 = a4;
    return 0x0;
}

int ADXT_SetOutVol(int a4, int a5, int a6, int a7)
{
    *(unsigned short *)((a4 + 0x40)) = a5;
    return thunk_FUN_0c22c8cc((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int kdGetDevice(int a4)
{
    return (((((a4 << 1) + a4) << 2) << 1) + 0xC953DEC);
}

int FUN_0c221160(void)
{
    return (FUN_0c228e94(0x18, 0x0));
}

int FUN_0c221202(void)
{
    return (FUN_0c228e94(0x16, 0x0));
}

int syTmrGenStart(void)
{
    int t0;

    *(unsigned char *)0xFFD80000 = 0x0;
    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t0 | 0x4);
    return (t0 | 0x4);
}

int kmiGetDstVertexBuffer(void)
{
    return (((*(int *)0xC9529C8) << 2) + (*(int *)0xC952968));
}

int FUN_0c2211b0(int a4, int a5)
{
    return (FUN_0c228f20(a4, a5));
}

int FUN_0c22126e(int a4, int a5)
{
    FUN_0c228ebc(a4, a5);
    return 0x1;
}

int kdGetDeviceInfo(int a4)
{
    return (mpdrv_get_deviceinfo(a4));
}

int ADXT_GetOutPan(int a4, int a5)
{
    return (*(short *)(((a4 + 0x42) + (a5 << 1))));
}

int kmiAddSysConfigFlag(int a4)
{
    int t0;

    t0 = *(int *)0xC239C6C;
    *(unsigned int *)0xC239C6C = (t0 | a4);
    return (t0 | a4);
}

int gdFsCreateDirhn(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    return a4;
}

int kdVbInHandler(void)
{
    *(unsigned int *)0xC954034 = ((*(int *)0xC954034) + 0x1);
    return kdSendFrame();
}

int syCfgExit(void)
{
    *(unsigned int *)0xC239400 = 0x0;
    return 0x0;
}

int ADXT_GetFilter(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    return ((int (*)(int))(0xC22CBC6))(t0);
}

int ADXT_SetFx(int a4, int a5, int a6, int a7)
{
    return FUN_0c22c98e((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int ADXT_GetFx(int a4, int a5, int a6, int a7)
{
    return FUN_0c22cae2((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int ADXT_SetFilter(int a4, int a5, int a6, int a7)
{
    return FUN_0c22cb92((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int ADXT_SetTranspose(int a4, int a5, int a6, int a7)
{
    return FUN_0c22ca1a((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int ADXT_GetTranspose(int a4, int a5, int a6, int a7)
{
    return FUN_0c22cb3c((*(int *)((a4 + 0xC))), a5, a6, a7);
}

int ADXF_GetPtinfoSize(int a4)
{
    return (*(int *)(((*(int *)(((a4 << 2) + 0xC95E288))) + 0x4)));
}

int kmiFatalErrorEntry(int a4)
{
    int t0;

    t0 = *(int *)0xC95256C;
    return ((int (*)(int))(t0))(a4);
}

int syTmrGetCount(void)
{
    return (0xFFFFFFFF - (*(int *)0xFFD8000C));
}

int syTmrGenStop(void)
{
    int t0;

    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t0 & 0xFB);
    return (t0 & 0xFB);
}

int syTmrGenGetCount(void)
{
    return (0xFFFFFFFF - (*(int *)0xFFD80024));
}

int kmSetStripLength(int a4)
{
    *(unsigned int *)0xC9524D8 = a4;
    return 0x0;
}

int kmiSetSysConfigFlag(int a4)
{
    *(unsigned int *)0xC239C6C = a4;
    return a4;
}

int kdDmaEndHandler1(void)
{
    *(unsigned int *)0xA05F6900 = 0x1000;
    return 0x1000;
}

void buSetPrintFunc(int a4)
{
    *(unsigned int *)0xC239CEC = a4;
}

int buSetRetryCount(int a4)
{
    return vmsfs_setretry(a4);
}

int syCfgConvLang(int a4)
{
    return (a4 - 48);
}

int pdVibMxIsReady(int a4)
{
    return pdVibIsReady(a4);
}

int FUN_0c213c26(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x3E)) = a5;
    return 0x3E;
}

int FUN_0c213cf2(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x6D)) = a5;
    return 0x6D;
}

int ADXT_SetPauseBuf(void)
{
    return 0x4000;
}

int ADXT_EntryErrFunc(int a4, int a5)
{
    return ADXERR_EntryErrFunc(a4, a5);
}

int kmiReadRegister(int a4)
{
    return (*(int *)((a4 + 0xA05F8000)));
}

int kmiGetSysConfigFlag(void)
{
    return (*(int *)0xC239C6C);
}

int FUN_0c2212c0(void)
{
    return 0xC237A48;
}

int gdFsChangeDir(void)
{
    return FUN_0c210336();
}

int syTmrDiffCount(int a4, int a5)
{
    return (a5 - a4);
}

int FUN_0c213a4a(int a4, int a5)
{
    return FUN_0c213a4e(a4, a5);
}

int ADXT_GetStat(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void kmiCheckRenderer(void)
{
    
}

void kmiUnloadDevice(void)
{
    
}

void FUN_0c218da0(void)
{
    
}

void kmiInitRenderer(void)
{
    
}

void kmiFastTA(void)
{
    
}

void kmiFastTADirect(void)
{
    
}

int FUN_0c220da0(void)
{
    return 0x1;
}

int FUN_0c220da4(void)
{
    return 0x1;
}

int thunk_FUN_0c221364(int a4, int a5)
{
    return FUN_0c221364(a4, a5);
}

int syTmrInt1Set(int a4, int a5, int a6)
{
    return syTmrInt1SetEx(a4, a5, a6, 0x2);
}
