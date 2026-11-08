/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c023738(int);
int FUN_0c0336d6(int, int, int);
int FUN_0c034134(int, float);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0c4684(int);
int FUN_0c0cae8e(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float nlLength(int, int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e4b20(int);
int FUN_0c0e4c34(int);
int FUN_0c0e4e88(int);
int FUN_0c0e55f0(void);
int FUN_0c0e563c(int);
int FUN_0c0e5dc0(void);
int _quick_odd_mvn(void);
int FUN_0c213912(int, int, int, int, int, int, int, int, int);
int FUN_0c229f30(int, int, int);
int FUN_0c22ad80(int);
int FUN_0c22d03a(int, int, int);
int mwlSbAllocWork(int);
int FUN_0c232f64(void);
int FUN_0c23363e(int, int, int);
int FUN_0c23370e(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_stat_decend(int, int, int, int);
int adxt_stat_playend(void);
int adxt_stat_playing(int);
int adxt_stat_prep(int, int, int, int);
int copy_device(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int);
int kmSetCheapShadowMode(void);
int thunk_kmSetCheapShadowMode(void);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int kmiAddSysConfigFlag(int);
int kmiAllocSysConfig(int);
int kmiGetSysConfigFlag(void);
int kmiSetSysConfigFlag(int);
int kmiWriteRegister(int, int);
int memset(int, int, int);
int mpdrv_frame_recv_main(void);
int mpdrv_frame_recv_post(void);
int mpdrv_frame_recv_pre(void);
int mpdrv_get_gunmode(void);
extern int mwRnaErrCallFunc();
int thunk_FUN_0c22b866(int, int, int);
int trigger(void);
void FUN_0c0bd788(int a4, int a5, int a6, int a7);
int FUN_0c069fba(void);
int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8);
int FUN_0c22b2b6(int a4, int a5, int a6, int a7);
int FUN_0c061214(int a4, int a5);
int FUN_0c232f8a(int a4, int a5, int a6, int a7);
int FUN_0c073eb4(void);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
int kdRecvFrame(void);
int FUN_0c0a6450(void);
int FUN_0c21375c(int a4, int a5, int a6);
int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int FUN_0c0bd4ac(void);
int FUN_0c02dc30(int a4);
int syChainAddHandler(int a4, int a5, int a6, int a7);
int FUN_0c02bfa8(int a4);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1D8_uint { char p[0x1D8]; unsigned int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o2F4_uint { char p[0x2F4]; unsigned int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o500_int { char p[0x500]; int v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o54C_uint { char p[0x54C]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o6D_uchar { char p[0x6D]; unsigned char v; };
struct o6E_short { char p[0x6E]; short v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



void FUN_0c0bd788(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t12;
    int t27;
    float t34;
    int t38;
    int t53;
    int t58;
    float t64;
    int t68;
    int t83;
    int stk[15];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F15;
    int T_;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0BD788:;
    R1008 = R5;
    t0 = *(int *)(((((R4 << 1) + R4) << 2) + 0xC2623A0));
    t2 = *(int *)((t0 + ((((unsigned int)(*(int *)(((((R4 << 1) + R4) << 2) + 0xC24FB54))) >> 2) - 1) << 2)));
    t3 = FUN_0c0e262a((((t2 << 1) + t2) << 2));
    R1012 = t3;
    t4 = FUN_0c0e262a((((t2 << 1) + t2) << 2));
    R1020 = t4;
    R0 = (t4);
    R10 = ((t0 + 0x18));
    R11 = (t4);
    R12 = (t3);
    R13 = (0x0);
    R14 = (t2);
    R9 = (0x0);
    goto L_C0BD92C;
    L_C0BD92C:;
    t12 = *(int *)((R10 + 0x0));
    R10 = ((R10 + 0x4));
    R4 = (t12);
    if ((t12 == 0)) goto L_C0BD936;
    goto L_C0BD932;
    L_C0BD932:;
    goto L_C0BD7E4;
    L_C0BD7E4:;
    if (((R4 & 0x80000000) == 0)) goto L_C0BD7F6;
    goto L_C0BD7EC;
    L_C0BD7EC:;
    R10 = (((R10 - 4) + 0x50));
    goto L_C0BD92C;
    L_C0BD7F6:;
    R0 = (0xC0BD844);
    R8 = (0x1);
    F15 = (9.99999997e-07f);
    if (((R4 & 0x10) == 0)) goto L_C0BD8AA;
    goto L_C0BD804;
    L_C0BD804:;
    R1016 = (*(int *)((R10 + 0x0)));
    R14 = ((R10 + 0x4));
    goto L_C0BD80A;
    L_C0BD80A:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BD848;
    goto L_C0BD810;
    L_C0BD810:;
    R14 = ((R14 + 0x8));
    goto L_C0BD89C;
    L_C0BD89C:;
    t27 = R1016;
    R1016 = (t27 - 1);
    if (((t27 - 1) != 0)) goto L_C0BD80A;
    goto L_C0BD8A6;
    L_C0BD8A6:;
    goto L_C0BD924;
    L_C0BD924:;
    R10 = (R14);
    goto L_C0BD92C;
    L_C0BD848:;
    R1004 = (R1012);
    R10 = (R9);
    if (((int)R13 <= 0)) goto L_C0BD86A;
    goto L_C0BD852;
    L_C0BD852:;
    t34 = nlLength((R1004), R14);
    F0 = (t34);
    if ((F15 > t34)) goto L_C0BD86A;
    goto L_C0BD85E;
    L_C0BD85E:;
    t38 = (int)(R10 + 0x1) < (int)R13;
    R1004 = ((R1004) + 0xC);
    R10 = ((R10 + 0x1));
    if (t38) goto L_C0BD852;
    goto L_C0BD86A;
    L_C0BD86A:;
    if (((int)R10 < (int)R13)) goto L_C0BD89A;
    goto L_C0BD86E;
    L_C0BD86E:;
    *(float *)((R12 + 0x0)) = (*(float *)((R14 + 0x0)));
    (((struct o4_float *)(R12))->v) = ((((struct o4_float *)(R14))->v));
    (((struct o8_float *)(R12))->v) = ((((struct o8_float *)(R14))->v));
    *(float *)((R11 + 0x0)) = ((((struct oC_float *)(R14))->v));
    (((struct o4_float *)(R11))->v) = ((((struct o10_float *)(R14))->v));
    (((struct o8_float *)(R11))->v) = ((((struct o14_float *)(R14))->v));
    R0 = (0x8);
    R11 = ((R11 + 0xC));
    R12 = ((R12 + 0xC));
    R13 = ((R13 + 0x1));
    goto L_C0BD89A;
    L_C0BD89A:;
    R14 = ((R14 + 0x20));
    goto L_C0BD89C;
    L_C0BD8AA:;
    if (((R4 & 0x8) == 0)) goto L_C0BD928;
    goto L_C0BD8B0;
    L_C0BD8B0:;
    t53 = *(int *)((R10 + 0x0));
    R1016 = ((t53 << 1) + t53);
    R14 = ((R10 + 0x4));
    goto L_C0BD8BC;
    L_C0BD8BC:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BD8C6;
    goto L_C0BD8C2;
    L_C0BD8C2:;
    R14 = ((R14 + 0x8));
    goto L_C0BD91A;
    L_C0BD91A:;
    t58 = R1016;
    R1016 = (t58 - 1);
    if (((t58 - 1) != 0)) goto L_C0BD8BC;
    goto L_C0BD924;
    L_C0BD8C6:;
    R1004 = (R1012);
    R10 = (R9);
    if (((int)R13 <= 0)) goto L_C0BD8E8;
    goto L_C0BD8D0;
    L_C0BD8D0:;
    t64 = nlLength((R1004), R14);
    F0 = (t64);
    if ((F15 > t64)) goto L_C0BD8E8;
    goto L_C0BD8DC;
    L_C0BD8DC:;
    t68 = (int)(R10 + 0x1) < (int)R13;
    R1004 = ((R1004) + 0xC);
    R10 = ((R10 + 0x1));
    if (t68) goto L_C0BD8D0;
    goto L_C0BD8E8;
    L_C0BD8E8:;
    if (((int)R10 < (int)R13)) goto L_C0BD918;
    goto L_C0BD8EC;
    L_C0BD8EC:;
    *(float *)((R12 + 0x0)) = (*(float *)((R14 + 0x0)));
    (((struct o4_float *)(R12))->v) = ((((struct o4_float *)(R14))->v));
    (((struct o8_float *)(R12))->v) = ((((struct o8_float *)(R14))->v));
    *(float *)((R11 + 0x0)) = ((((struct oC_float *)(R14))->v));
    (((struct o4_float *)(R11))->v) = ((((struct o10_float *)(R14))->v));
    (((struct o8_float *)(R11))->v) = ((((struct o14_float *)(R14))->v));
    R0 = (0x8);
    R11 = ((R11 + 0xC));
    R12 = ((R12 + 0xC));
    R13 = ((R13 + 0x1));
    goto L_C0BD918;
    L_C0BD918:;
    R14 = ((R14 + 0x20));
    goto L_C0BD91A;
    L_C0BD928:;
    goto L_C0BD928;
    L_C0BD936:;
    t83 = R1008;
    *(unsigned int *)((t83 + 0x0)) = (R1012);
    *(unsigned int *)((t83 + 0x4)) = (R1020);
    *(unsigned int *)((t83 + 0x8)) = R13;
}

int FUN_0c069fba(void)
{
    int t0;
    int t3;
    int t5;
    int t8;
    float u11;
    int t17;
    float u19;
    int t21;
    int t22;
    float u24;
    int t26;
    int t27;
    int t30;
    float u32;
    int t40;
    int t44;
    int stk[15];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t0 = *(int *)0xC23A258;
    if ((*(int *)0xC247C4C) == t0) {
    } else {
        *(unsigned int *)0xC247C4C = t0;
        t3 = 0x2;
        if ((*(int *)0xC23ED50) == 48) {
            t3 = 0x0;
        }
        t5 = *(int *)0xC247C50;
        *(unsigned int *)0xC247C50 = (t5 + 0x1);
        if ((int)(t5 + 0x1) >= (int)0x14) {
            *(unsigned int *)0xC247C50 = 0x0;
        }
        t8 = *(int *)0xC247C50;
        u11 = (1.0f - ((float)(t8 - 16) * 0.25f));
        if ((int)t8 < (int)0x10) {
            u11 = ((float)t8 * 0.0625f);
        }
        thunk_kmSetCheapShadowMode();
        R1008 = (((t3 << 2) + 0xC0FB0CC) + 0x4);
        t17 = *(int *)((((t3 << 2) + 0xC0FB0CC) + 0x0));
        R1004 = t17;
        u19 = (float)t17;
        u19 = u19 + u11 * (float)((*(int *)(((((t3 << 2) + 0xC0FB0CC) + 0x4) + 0x0))) - t17);
        FUN_0c0844dc(0xE000, (int)u19, 0x0, 1.0f);
        t21 = R1008;
        t22 = *(int *)((((t3 << 2) + 0xC0FB0CC) + 0x0));
        R1004 = t22;
        u24 = (float)t22;
        u24 = u24 + u11 * (float)((*(int *)((t21 + 0x0))) - t22);
        FUN_0c0844dc(0xE000, (int)u24, 0x1, 1.0f);
        t26 = 0x0;
        t27 = (0x0 + t3);
        for (;;) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0((0xC0FB04C + (((t27 << 1) + t27) << 2)));
            t30 = *(int *)(((((t27 << 2) << 1) + 0xC0FB0AC) + 0x0));
            R1004 = t30;
            u32 = (float)t30;
            u32 = u32 + u11 * (float)((*(int *)(((((t27 << 2) << 1) + 0xC0FB0AC) + 0x4))) - t30);
            nlRotateAY((int)u32);
            FUN_0c0dcca0((0xC0FB07C + (((t27 << 1) + t27) << 2)));
            FUN_0c0dcbb0((0xC0FB0DC + (((t27 << 1) + t27) << 2)));
            FUN_0c0df4c0(0x1);
            nlScale(1.0f, 1.0f, 0.099999994f);
            FUN_0c0de000(100.0f);
            FUN_0c0c4684(0x9E);
            t40 = nlPopMatrix(0x1);
            t26 = (t26 + 0x1);
            t27 = (t27 + 0x1);
            if ((int)t26 >= (int)0x2) {
                break;
            }
        }
        t44 = t40;
    }
    return t44;
}

int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t19;
    int t3;
    int t29;
    int t33;
    int t48;
    int t24;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if (a6 == 0) {
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
        t48 = 0x103;
    } else {
        t1 = *(int *)(((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522DC));
        t48 = 0x100;
        t19 = a6;
        if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 3) == 0) {
            t3 = a5;
            if ((0x1F & a5) != 0) {
                t3 = ((a5 + 0x1F) & 0xFFFFFFE0);
            }
            t19 = a6;
            if ((0x1F & a6) != 0) {
                t19 = ((a6 + 0x1F) & 0xFFFFFFE0);
            }
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x0)) = ((((struct o0_int *)0xC9522E4)->v));
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x4)) = t3;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0xC)) = a4;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x14)) = t19;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18)) = (a7 | 0x1);
            *(unsigned int *)((a8 + 0x0)) = (((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1));
            *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522DC) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522DC) + 0x0))) + 0x1) & 0x7);
            (((struct o0_uint *)0xC9522E4)->v) = (((((struct o0_int *)0xC9522E4)->v)) + 0x1);
            t48 = 0x0;
        }
        if (t48 == 0x100) {
        } else {
            if ((((*(int *)(((((((((struct o10_int *)0xC9522E4)->v)) << 8) + 0xC9520DC) + (((((((struct oC_int *)0xC9522E4)->v)) << 2) << 2) << 1)) + 0x18))) & 3) == 0) && (t24 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18)), (t24 & 0x3) == 1)) {
                *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18)) = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC) | 0x2);
                (((struct o0_uint *)0xFFA00020)->v) = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x4)));
                (((struct o4_uint *)0xFFA00020)->v) = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0xC))) + 0xF0000000) << 1);
                (((struct o8_uint *)0xFFA00020)->v) = ((unsigned int)((unsigned int)((unsigned int)t19 >> 2) >> 2) >> 1);
                t29 = 0x241;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 4) == 0) {
                    t29 = 0x2C1;
                }
                t33 = t29;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 16) != 0) {
                    t33 = (t29 | 0x1000);
                }
                (((struct oC_uint *)0xFFA00020)->v) = t33;
                (((struct o0_uint *)0xA05F6800)->v) = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0xC)));
                (((struct o4_uint *)0xA05F6800)->v) = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x14)));
                (((struct o8_uint *)0xA05F6800)->v) = 0x1;
                (((struct oC_uint *)0xC9522E4)->v) = t1;
                (((struct o10_uint *)0xC9522E4)->v) = ((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1);
                *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522E8) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522E8) + 0x0))) + 0x1) & 0x7);
            }
        }
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    }
    return t48;
}

int FUN_0c22b2b6(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        adxt_stat_playing(a4);
    } else {
        if (t0 == 1) {
            FUN_0c22ad80(a4);
        } else {
            t7 = *(signed char *)((a4 + 0x1));
            if (t7 == 2) {
                adxt_stat_prep(a4, a5, a6, a7);
            } else {
                if (t7 == 4) {
                    adxt_stat_decend(a4, a5, a6, a7);
                } else {
                    if ((*(signed char *)((a4 + 0x1))) == 5) {
                        adxt_stat_playend();
                    }
                }
            }
        }
    }
    return ((int (*)(int))(0xC22B13A))(a4);
}



int FUN_0c073eb4(void)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;

    t1 = FUN_0c0e19aa(0xC072780, 0x5E78, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t3 = 0x259;
    for (;;) {
        FUN_0c0cbafc(t3, 0x2, 0xFC006000, 0x84002000);
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x26D) {
            break;
        }
    }
    t5 = 0x410;
    for (;;) {
        FUN_0c0cbafc(t5, 0x2, 0x6000, 0x2000);
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x418) {
            break;
        }
    }
    t7 = 0x1B8;
    for (;;) {
        FUN_0c0cbafc(t7, 0x2, 0x6000, 0x2000);
        t7 = (t7 + 0x1);
        if ((int)t7 >= (int)0x1D6) {
            break;
        }
    }
    t9 = 0x281;
    for (;;) {
        FUN_0c0cbafc(t9, 0x2, 0xFC006000, 0x84002000);
        t9 = (t9 + 0x1);
        if ((int)t9 >= (int)0x291) {
            break;
        }
    }
    FUN_0c0cbafc(0x3E2, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DD, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DF, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E3, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E0, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E1, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DC, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DE, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E4, 0x2, 0xFC006000, 0x84002000);
    FUN_0c0cbafc(0x294, 0x2, 0xFC006000, 0x84002000);
    FUN_0c0cbafc(0x293, 0x2, 0xFC006000, 0x84002000);
    FUN_0c0cae8e(0x3E2);
    FUN_0c0cae8e(0x3DD);
    FUN_0c0cae8e(0x3E4);
    FUN_0c0cae8e(0x3E0);
    FUN_0c0cae8e(0x3E1);
    FUN_0c0cae8e(0x3E3);
    FUN_0c0cae8e(0x3DF);
    return (FUN_0c0cae8e(0x3DC));
}

int kmActivateFrameBuffer(int a4, int a5, int a6, int a7)
{
    int t62;
    int t0;
    int t5;
    int t40;

    t62 = 0xE;
    if ((a4 != 0) && (a5 != 0)) {
        (((struct o24_uint *)0xC952904)->v) = a4;
        (((struct o28_uint *)0xC952904)->v) = a5;
        (((struct o2C_uint *)0xC952904)->v) = a7;
        (((struct o0_uint *)0xC952904)->v) = a6;
        *(unsigned int *)0xC952330 = a6;
        t0 = kmiGetSysConfigFlag();
        if (t0 != 0x80000000) {
            t5 = kmiAddSysConfigFlag(0x800);
            t62 = 0x0;
            if (t5 == 0xB00) {
                kmiSetSysConfigFlag(0x80000000);
                t62 = (kmiAllocSysConfig(((((struct o3C_int *)0xC952904)->v))));
            }
        } else {
            t62 = 0xF;
            if ((*(int *)((a4 + 0x18))) != (*(int *)((a5 + 0x18)))) {
            } else {
                t62 = 0x10;
                if ((*(int *)((a4 + 0x14))) != (*(int *)((a5 + 0x14)))) {
                } else {
                    (((struct o0_uint *)0xC952630)->v) = (*(int *)((a4 + 0x1C)));
                    (((struct o8_uint *)0xC952630)->v) = 0x0;
                    (((struct o4_uint *)0xC952630)->v) = (*(int *)((a5 + 0x1C)));
                    (((struct oC_uint *)0xC952630)->v) = 0x0;
                    kmiWriteRegister(0x50, ((((struct o28_int *)0xC9525A4)->v)));
                    kmiWriteRegister(0x54, ((((struct o28_int *)0xC9525A4)->v)));
                    kmiWriteRegister(0x60, ((((struct o0_int *)0xC952630)->v)));
                    kmiWriteRegister(0x64, ((((struct o4_int *)0xC952630)->v)));
                    (((struct o28_uint *)0xC9525A4)->v) = ((((struct o0_int *)0xC952630)->v));
                    (((struct o2C_uint *)0xC9525A4)->v) = ((((struct o4_int *)0xC952630)->v));
                    if (a6 == 1) {
                        (((struct o30_uint *)0xC9524E4)->v) = 0x0;
                        (((struct o34_uint *)0xC9524E4)->v) = 0x0;
                        kmiWriteRegister(0x50, ((((struct o28_int *)0xC9525A4)->v)));
                        t40 = ((((struct o2C_int *)0xC9525A4)->v));
                    } else {
                        kmiWriteRegister(0x50, ((((struct o28_int *)0xC9525A4)->v)));
                        t40 = ((((struct o28_int *)0xC9525A4)->v));
                    }
                    kmiWriteRegister(0x54, t40);
                    (((struct o0_uint *)0xC9525A4)->v) = 0x1;
                    (((struct o0_uint *)0xC9524E4)->v) = a7;
                    t62 = 0x0;
                }
            }
        }
    }
    return t62;
}



int FUN_0c21375c(int a4, int a5, int a6)
{
    int t9;
    int t17;
    int t20;
    int t23;
    int t24;
    int t30;
    int t33;
    int t35;
    int t39;
    int t49;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    int R1008;
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C21375C:;
    R1008 = (R6 - (((R5 + 0x1F) & 0xFFFFFFE0) - R5));
    R10 = (0x74);
    R11 = (((R5 + 0x1F) & 0xFFFFFFE0));
    R12 = (R4);
    R13 = (0x0);
    R4 = (0x0);
    R5 = (0xC239418);
    R6 = (0x8);
    goto L_C21378A;
    L_C21378A:;
    if (((*(signed char *)((((R4 * R10) + R5) + 0x0))) == 0)) goto L_C21379C;
    goto L_C213796;
    L_C213796:;
    t9 = (int)(R4 + 0x1) < (int)R6;
    R4 = ((R4 + 0x1));
    if (t9) goto L_C21378A;
    goto L_C21379C;
    L_C21379C:;
    if ((R4 == 8)) goto L_C21386E;
    goto L_C2137A2;
    L_C2137A2:;
    memset(((R4 * R10) + R5), 0x0, 0x74);
    *(unsigned char *)((((R4 * R10) + R5) + 0x3)) = R12;
    *(unsigned int *)((((R4 * R10) + R5) + 0x20)) = (((((((R12 << 8) + R12) << 2) << 2) << 1) << 1) + R11);
    *(unsigned int *)((((R4 * R10) + R5) + 0x24)) = (((((unsigned int)((unsigned int)((unsigned int)(((R1008) - ((((((R12 << 8) + R12) << 2) << 2) << 1) << 1)) - 36) >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)((((R4 * R10) + R5) + 0x28)) = 0x24;
    *(unsigned int *)((((R4 * R10) + R5) + 0x2C)) = R11;
    *(unsigned int *)((((R4 * R10) + R5) + 0x30)) = 0x2000;
    *(unsigned int *)((((R4 * R10) + R5) + 0x34)) = 0x2020;
    t17 = FUN_0c22d03a((*(int *)((((R4 * R10) + R5) + 0x20))), (*(int *)((((R4 * R10) + R5) + 0x24))), (*(int *)((((R4 * R10) + R5) + 0x28))));
    *(unsigned int *)((((R4 * R10) + R5) + 0x10)) = t17;
    *(unsigned int *)((((R4 * R10) + R5) + 0x14)) = t17;
    t20 = ((R4 * R10) + R5);
    R10 = (0xC22D03A);
    R14 = t20;
    if ((t17 == 0)) goto L_C21386A;
    goto L_C213802;
    L_C213802:;
    R11 = (R13);
    if (((int)R12 <= 0)) goto L_C213848;
    goto L_C213808;
    L_C213808:;
    R1008 = (R11 << 2);
    t23 = *(int *)((R14 + 0x34));
    t24 = *(int *)((R14 + 0x30));
    *(unsigned int *)((((R11 << 2) + (R14 + 0x18)) + 0x0)) = (FUN_0c22d03a((((t23 * R11) << 1) + (*(int *)((R14 + 0x2C)))), (t24 << 1), ((t23 - t24) << 1)));
    if (((*(int *)((((R14 + 0x18) + (R1008)) + 0x0))) == 0)) goto L_C21386A;
    goto L_C213842;
    L_C213842:;
    t30 = (int)(R11 + 0x1) < (int)R12;
    R11 = ((R11 + 0x1));
    if (t30) goto L_C213808;
    goto L_C213848;
    L_C213848:;
    t33 = FUN_0c229f30((*(int *)((R14 + 0x14))), R12, (R14 + 0x18));
    *(unsigned int *)((R14 + 0x4)) = t33;
    if ((t33 == 0)) goto L_C21386A;
    goto L_C21385A;
    L_C21385A:;
    t35 = thunk_FUN_0c22b866((R14 + 0x18), R12, R6);
    *(unsigned int *)((R14 + 0xC)) = t35;
    if ((t35 != 0)) goto L_C21388C;
    goto L_C21386A;
    L_C21386A:;
    FUN_0c213912(R14, 0x0, 0x0, 0x0, R1008, *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
    goto L_C21386E;
    L_C21386E:;
    R0 = (0x0);
    goto L_C2138FE;
    L_C2138FE:;
    return R0;
    L_C21388C:;
    *(unsigned int *)((R14 + 0x38)) = 0x3C;
    t39 = *(int *)((R14 + 0x24));
    R2 = (t39);
    if (((int)t39 >= 0)) goto L_C21389A;
    goto L_C213896;
    L_C213896:;
    R2 = ((R2 + 0x7FF));
    goto L_C21389A;
    L_C21389A:;
    (((struct o3C_ushort *)(R14))->v) = ((int)R2 >> 11);
    (((struct o3E_ushort *)(R14))->v) = (int)((float)((((struct o3C_short *)(R14))->v)) * (*(float *)0xC2139C0));
    (((struct o40_ushort *)(R14))->v) = R13;
    R4 = ((R14 + 0x42));
    R5 = (R13);
    if (((int)R12 <= 0)) goto L_C2138D0;
    goto L_C2138C4;
    L_C2138C4:;
    R6 = (0xFFFFFF80);
    goto L_C2138C6;
    L_C2138C6:;
    *(unsigned short *)((R4 + 0x0)) = R6;
    t49 = (int)(R5 + 0x1) < (int)R12;
    R4 = ((R4 + 0x2));
    R5 = ((R5 + 0x1));
    if (t49) goto L_C2138C6;
    goto L_C2138D0;
    L_C2138D0:;
    (((struct o6C_uchar *)(R14))->v) = 0x1;
    (((struct o54_uint *)(R14))->v) = R13;
    (((struct o58_uint *)(R14))->v) = R13;
    (((struct o5C_uint *)(R14))->v) = R13;
    (((struct o60_ushort *)(R14))->v) = R13;
    (((struct o64_uint *)(R14))->v) = R13;
    (((struct o68_ushort *)(R14))->v) = R13;
    (((struct o6A_ushort *)(R14))->v) = R13;
    (((struct o6D_uchar *)(R14))->v) = 0x1;
    (((struct o72_uchar *)(R14))->v) = R13;
    *(unsigned char *)((R14 + 0x0)) = 0x1;
    R0 = (R14);
    goto L_C2138FE;
}


int FUN_0c0bd4ac(void)
{
    int t3;
    int t4;
    int t5;
    int t0;
    int t1;
    int t2;

    t3 = 0xC1527B4;
    t4 = 0xC1527B4;
    t5 = 0xC1527B4;
    for (;;) {
        if ((*(int *)(((t3 + 0x4) + 0x0))) == 0xC15233C) {
            t1 = 0xC15237C;
            *(unsigned int *)(((t3 + 0x4) + 0x0)) = t1;
        } else {
            t2 = 0xC15234C;
            if ((*(int *)(((t3 + 0x4) + 0x0))) == t2) {
                t0 = 0xC15238C;
                *(unsigned int *)(((t3 + 0x4) + 0x0)) = t0;
            } else {
                t1 = 0xC15235C;
                if ((*(int *)(((t3 + 0x4) + 0x0))) == t1) {
                    *(unsigned int *)(((t3 + 0x4) + 0x0)) = 0xC15239C;
                } else {
                    t0 = 0xC15236C;
                    if ((*(int *)(((t3 + 0x4) + 0x0))) == t0) {
                        *(unsigned int *)(((t3 + 0x4) + 0x0)) = 0xC1523AC;
                    }
                }
            }
        }
        t2 = 0xC1523EC;
        if ((*(int *)(((t4 + 0xC) + 0x0))) == t2) {
            t0 = 0xC15241C;
            *(unsigned int *)(((t4 + 0xC) + 0x0)) = t0;
        } else {
            t1 = 0xC1523FC;
            if ((*(int *)(((t4 + 0xC) + 0x0))) == t1) {
                *(unsigned int *)(((t4 + 0xC) + 0x0)) = 0xC15242C;
            } else {
                t0 = 0xC15240C;
                if ((*(int *)(((t4 + 0xC) + 0x0))) == t0) {
                    *(unsigned int *)(((t4 + 0xC) + 0x0)) = 0xC15243C;
                }
            }
        }
        if ((*(int *)(((t5 + 0x14) + 0x0))) == 0xC1522CC) {
            *(unsigned int *)(((t5 + 0x14) + 0x0)) = 0xC1522EC;
        } else {
            t2 = (*(int *)(((t5 + 0x14) + 0x0)));
            if (t2 == 0xC1522DC) {
                *(unsigned int *)(((t5 + 0x14) + 0x0)) = 0xC1522BC;
            }
        }
        t3 = (t3 + 0x18);
        t5 = (t5 + 0x18);
        t4 = (t4 + 0x18);
        if ((unsigned int)t3 < (unsigned int)0xC1531D4) continue;
        break;
    }
    if (((((struct o0_int *)0xC195A18)->v)) == 0xC191798) {
        (((struct o0_uint *)0xC195A18)->v) = 0xC1917E8;
    }
    if (((((struct o4_int *)0xC195A18)->v)) == 0xC191838) {
        (((struct o4_uint *)0xC195A18)->v) = 0xC191888;
    }
    if (((((struct o8_int *)0xC195A18)->v)) == 0xC191608) {
        (((struct o8_uint *)0xC195A18)->v) = 0xC191658;
    }
    if (((((struct oC_int *)0xC195A18)->v)) == 0xC1916A8) {
        (((struct oC_uint *)0xC195A18)->v) = 0xC1916F8;
    }
    if (((((struct o10_int *)0xC195A18)->v)) == 0xC1918D8) {
        (((struct o10_uint *)0xC195A18)->v) = 0xC191928;
    }
    if (((((struct o14_int *)0xC195A18)->v)) == 0xC1919C8) {
        (((struct o14_uint *)0xC195A18)->v) = 0xC191A18;
    }
    (((struct o8_ushort *)0xC0F84C2)->v) = 0x503;
    (((struct o6_ushort *)0xC0F84C2)->v) = 0x503;
    (((struct o2_ushort *)0xC0F84C2)->v) = 0x503;
    (((struct o0_ushort *)0xC0F84C2)->v) = 0x503;
    return 0x503;
}

int FUN_0c02dc30(int a4)
{
    int t19;
    int t20;
    int t24;
    int t34;
    int t37;
    int t39;
    int t44;
    int t46;
    int t47;
    int t51;
    int t52;
    int t112;
    int t66;
    int t80;
    int t87;
    int t1;
    int t35;
    int t36;

    (((struct o54C_uint *)(a4))->v) = 0x0;
    if ((((((struct o508_int *)(a4))->v)) == 0) && (t1 = (((struct o4C8_int *)(a4))->v), t1 != 2)) {
        if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) != 4) {
            (((struct o50C_uint *)(a4))->v) = 0x0;
        }
        if (((((struct o50C_int *)(a4))->v)) == 0) {
            FUN_0c0236ce(a4);
        }
    }
    t19 = FUN_0c023738(a4);
    if (t19 != 0) {
        (((struct o54C_uint *)(a4))->v) = 0x3;
        for (;;) {
            t20 = (((struct o4F4_int *)(a4))->v);
            t24 = FUN_0c034134(a4, (*(float *)(((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + ((*(int *)((((((t20 << 1) + t20) << 2) + 0xC1F79B4) + 0x8))) + 0x7C)) + 0x0))));
            if (t24 == 0) {
                (((struct o54C_uint *)(a4))->v) = (((((struct o54C_int *)(a4))->v)) - 1);
                if ((int)((((struct o54C_int *)(a4))->v)) <= 0) {
                    break;
                }
                continue;
            }
            break;
        }
    }
    t34 = (((struct o4F8_int *)(a4))->v);
    if ((t34 != 0) && ((t34 != 1) && (((t34 != 2) && (t34 != 3)) || ((t35 = (((struct o500_int *)(a4))->v), t35 == 14) || (t36 = (((struct o500_int *)(a4))->v), t36 == 15))))) {
    } else {
        t37 = (((struct o4F0_int *)(a4))->v);
        t39 = ((int (*)(int))((*(int *)(((((t37 << 2) + t37) << 2) + 0xC1F8E3C)))))(a4);
    }
    t44 = (((struct o4F4_int *)(a4))->v);
    t46 = ((int (*)(int))((*(int *)((((((t44 << 1) + t44) << 2) + 0xC1F79B4) + 0x0)))))(a4);
    t47 = (((struct o4F4_int *)(a4))->v);
    t51 = ((int (*)(int))((*(int *)(((((((struct o4F8_int *)(a4))->v)) << 2) + (*(int *)((((((t47 << 1) + t47) << 2) + 0xC1F79B4) + 0x4))))))))(a4);
    t52 = (((struct o4F8_int *)(a4))->v);
    t112 = t52;
    if (t52 != 4) {
        t112 = t52;
        if (t52 != 5) {
            t66 = (((struct oCC_int *)(a4))->v);
            t112 = 0xCC;
            if (((int)t66 >= 0) && ((int)t66 < (int)0x4)) {
                t80 = *(int *)((0xC247030 + (((((struct oCC_int *)(a4))->v)) << 2)));
                t112 = t80;
                if (t80 == 4) {
                    t87 = *(int *)((((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
                    t112 = 0xD0;
                    if (((((struct oD0_int *)(t87))->v)) == ((((struct oBC_int *)(a4))->v))) {
                        (((struct oD0_uint *)(t87))->v) = 0xFFFFFFFF;
                        (((struct o2F4_uint *)(t87))->v) = 0x400;
                        (((struct o1DC_uint *)(t87))->v) = ((((struct o6E_short *)(a4))->v));
                        (((struct o1D8_uint *)(t87))->v) = 0x4000;
                        (((struct o1D4_float *)(t87))->v) = 100.0f;
                        (((struct o1CC_uint *)(t87))->v) = 0x5;
                        t112 = 0x1CC;
                    }
                }
            }
        }
    }
    return t112;
}


