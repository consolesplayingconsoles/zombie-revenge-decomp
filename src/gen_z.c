/* Straight-line functions with calls and guards (batch gen_z): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_Destroy(int);
int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int FUN_0c01d984(int);
int FUN_0c054fb0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int nlCopyMatrix(int, int);
extern int nlGetMatrix8();
int nlLoadMatrix8(int);
int nlMultiMatrix8(int);
int nlTransposeMatrix(void);
int FUN_0c0dcc70(float, float, float);
int nlScaleUnitVector(int, int, float);
int FUN_0c0de030(int);
int FUN_0c0de8c0(void);
int FUN_0c0dea10(int, float);
int FUN_0c0e59e0(void);
int FUN_0c0e5dc0(void);
int ccitt_updcrc(int, int, int, int);
int FUN_0c22907e(int, int, int);
int FUN_0c22b324(int, int, int, int);
int FUN_0c233730(int, int, int);
int kmiUnloadDevice(void);
int memcpy2(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int p2_cache_set(void);
int thunk_FUN_0c22bfa2(int, int);
int thunk_FUN_0c22c7c2(int, int, int, int);
int FUN_0c01fb64(int a4, int a5);
int FUN_0c22cb3c(int a4, int a5, int a6, int a7);
int FUN_0c22c884(int a4, int a5, int a6, int a7);
void FUN_0c0db490(int a4, int a5, int a6);
void FUN_0c0db4f0(int a4, int a5, int a6);
int nl_set_cnv_proj_pers(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c22cb92(int a4, int a5, int a6, int a7);
void FUN_0c22a038(int a4);
int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7);
int nlInvLightVector(void);
int FUN_0c0de960(int a4, float f4);
int crcchk(int a4, int a5, int a6, int a7);
int ADXF_InitCache_P2_(int a4, int a5, int a6, int a7);
int FUN_0c0db800(int a4);
int adxt_stat_decend(int a4, int a5, int a6, int a7);
int kmiReleaseHardware(void);
int ADXB_CopyExtraBufMono(int a4, int a5, int a6, int a7);
int FUN_0c0dcca0(int a4);
int syHwCacheFinish(void);
int thunk_FUN_0c22907e(int a4, int a5, int a6);

int FUN_0c01fb64(int a4, int a5)
{
    int t0;

    t0 = *(int *)((a4 + 0xBC));
    if ((*(int *)((a4 + 0x20C))) == 0x40000) {
        *(unsigned int *)(((*(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0))) + 0xD0)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0xCC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x4D0)) = 0x0;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        *(unsigned int *)((a4 + 0x4C8)) = 0x1;
        *(unsigned int *)((a4 + 0x4C4)) = 0x0;
        *(unsigned int *)((a4 + 0x4CC)) = 0x0;
        *(unsigned int *)((a4 + 0x534)) = 0x0;
        *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    }
    FUN_0c01d984(a4);
    *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0xC)) = (*(int *)(((0xC247030 + (t0 << 2)) + 0x0)));
    *(unsigned int *)(((0xC247030 + (t0 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)0xC247074 = ((*(int *)0xC247074) - 1);
    *(unsigned int *)(((0xC246FF0 + (t0 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)((((t0 << 2) + 0xC246FF0) + 0x0)) = 0x0;
    *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x1;
    return FUN_0c054fb0(a4, 0xC246074);
}

int FUN_0c22cb3c(int a4, int a5, int a6, int a7)
{
    int t0;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x80)));
    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a4 + 0x84)));
    return 0x84;
}

int FUN_0c22c884(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t5;

    if (a4 == 0) {
        return mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
    }
    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((a4 + 0x8));
    t2 = (t0 * t1);
    if ((int)(t0 * t1) < 0) {
        t2 = ((t0 * t1) + 0x7);
    }
    *(unsigned int *)((a4 + 0x30)) = (((t2 >> 1) >> 1) >> 1);
    *(unsigned int *)((a4 + 0x8)) = a5;
    *(volatile int *)((a4 + 0x30));
    t5 = FUN_0c0e5dc0();
    *(unsigned int *)((a4 + 0x30)) = ((t5 << 2) << 1);
    return ((t5 << 2) << 1);
}

void FUN_0c0db490(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t3 + 0xC);
        FUN_0c0db470(((t3 + 0xC) - 12), ((t2 + 0xC) - 12));
    }
}

void FUN_0c0db4f0(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t3 + 0xC);
        FUN_0c0db4d0(((t3 + 0xC) - 12), ((t2 + 0xC) - 12));
    }
}

int nl_set_cnv_proj_pers(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int t3;
    int t4;

    t0 = ((int (*)(int, float, float, float, float, float, float, float, float))(nlGetMatrix8))(0xC948600, f4, f5, f6, f7, f8, f9, f10, f11);
    FUN_0c0de030(0xC9484E8);
    nlMultiMatrix8(0xC948600);
    t3 = ((int (*)(int))(nlGetMatrix8))(0xC948580);
    t4 = ((int (*)(int))(nlGetMatrix8))(0xC9485C0);
    return nlLoadMatrix8(0xC948600);
}

int FUN_0c22cb92(int a4, int a5, int a6, int a7)
{
    if (a4 == 0) {
        return mwRnaErrCallFunc(0xC237EE0, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x88)) = a5;
    *(unsigned int *)((a4 + 0x8C)) = a6;
    return FUN_0c233730((*(int *)((a4 + 0x40))), a5, a6);
}

void FUN_0c22a038(int a4)
{
    int t6;

    if (a4 != 0) {
        if ((*(int *)((a4 + 0x4))) != 0) {
            ADXB_Destroy((*(int *)((a4 + 0x4))));
        } else {
            t6 = a4;
        }
        ADXCRS_Lock(t6);
        memset(a4, 0x0, 0x4);
        ADXCRS_Unlock();
    return;
    }
}

int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7)
{
    memcpy2(a4, ((a5 << 1) + a4), a7);
    return memcpy2(((a6 << 1) + a4), (((a5 + a6) << 1) + a4), a7);
}

int nlInvLightVector(void)
{
    nlTransposeMatrix();
    FUN_0c0db4d0(0xC20CE50, 0xC948248);
    FUN_0c0db4d0(0xC20CE60, 0xC948238);
    nlScaleUnitVector(0xC948238, 0xC948238, (*(float *)0xC0DE790));
    return nlTransposeMatrix();
}

int FUN_0c0de960(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 16) != 0) {
        nlInvLightVector();
    }
    FUN_0c0e59e0();
    FUN_0c0de8c0();
    return FUN_0c0dea10(a4, f4);
}

int crcchk(int a4, int a5, int a6, int a7)
{
    int t1;
    int stk[4];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t1 = ccitt_updcrc(0x0, (*(int *)(((int)stk + 8))), 0xA, a7);
    if ((unsigned short)(*(short *)(((int)stk + 4))) != (unsigned short)(~t1)) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int ADXF_InitCache_P2_(int a4, int a5, int a6, int a7)
{
    int t1;

    FUN_0c22b324(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}

int FUN_0c0db800(int a4)
{
    int t0;

    t0 = *(int *)0xC9482BC;
    if (a4 == 0) {
        return nlLoadMatrix8((t0 - 64));
    }
    return nlCopyMatrix(a4, (t0 - 64));
}

int adxt_stat_decend(int a4, int a5, int a6, int a7)
{
    int t1;
    int t4;

    t1 = thunk_FUN_0c22c7c2((*(int *)((a4 + 0xC))), a5, a6, a7);
    t4 = t1;
    if ((int)t1 <= 0) {
        thunk_FUN_0c22bfa2((*(int *)((a4 + 0xC))), 0x0);
        *(unsigned char *)((a4 + 0x1)) = 0x5;
        t4 = 0x5;
    }
    return t4;
}

int kmiReleaseHardware(void)
{
    int t1;
    int t2;

    if ((*(int *)0xC239A8C) != 0) {
        t1 = kmiUnloadDevice();
        *(unsigned int *)0xC239A8C = 0x0;
        t2 = t1;
    }
    return t2;
}

int ADXB_CopyExtraBufMono(int a4, int a5, int a6, int a7)
{
    return memcpy2(a4, ((a5 << 1) + a4), a7);
}

int FUN_0c0dcca0(int a4)
{
    return FUN_0c0dcc70((*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))));
}

int syHwCacheFinish(void)
{
    return p2_cache_set();
}

int thunk_FUN_0c22907e(int a4, int a5, int a6)
{
    return FUN_0c22907e(a4, a5, a6);
}
