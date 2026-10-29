/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXPD_GetStat(int);
int ADXSJD_Stop(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int FUN_0c015436(int, int, int, int);
int FUN_0c0154c0(int, int, int, float, float);
int FUN_0c01e822(int, int, int, int, int, float, float, float);
float FUN_0c01f1b8(int, int);
int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c035402(void);
int FUN_0c035828(int, int, int, int, int, float, float);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c041f2a(int);
int FUN_0c049b80(int);
int FUN_0c053ac4(int);
int FUN_0c053c64(int, int);
int FUN_0c061a8a(int, int, float);
int FUN_0c061ccc(void);
int FUN_0c062180(int, int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08455e(float);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c0845c4(void);
int FUN_0c0847a2(int);
int FUN_0c0847a8(float, float, float);
int FUN_0c0847ce(float, float, float);
int FUN_0c0847f4(float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7888(int, int, float, float, float);
int FUN_0c0b70fe(void);
int FUN_0c0bf908(int);
int FUN_0c0bfa90(void);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c4e78(int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0d80c0(int);
int nlCommonTextureClearTextureIndex(int);
int nlFreePalette(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
int FUN_0c0daf60(int, int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e4428(int);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c20f29a(int);
extern float _builtin_sqrtf(float);
int adxt_start_sj(int, int);
int buIsFormat(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int get_fat(int, int);
int kmFreeTexture(int);
int set_fat(int, int, int);
int thunk_FUN_0c22bece(int, int);
int thunk_FUN_0c22bfa2(int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int adxt_RcvrReplay(int a4, int a5);
int FUN_0c033850(int a4);
int FUN_0c062934(int a4, float f4, float f5);
int FUN_0c0a748e(int a4, int a5, int a6);
int ADXB_ExecOneWav8(int a4, int a5, int a6, int a7);
int FUN_0c0346ca(int a4);
int FUN_0c04fe58(int a4, int a5);
int FUN_0c0c4d50(void);
int gdFsLoadDirG(int a4, int a5);
int FUN_0c02a432(int a4);
float FUN_0c0830b2(int a4);
int FUN_0c20d298(int a4, int a5);
int FUN_0c010b04(int a4, float f4, float f5, float f6, float f7);
int FUN_0c03fd20(int a4);
int FUN_0c05faf6(int a4, int a5);
int FUN_0c05f9ee(int a4, int a5);
int FUN_0c0975d0(int a4, int a5, int a6, int a7);
int FUN_0c097720(int a4, int a5, int a6, int a7);
void FUN_0c0cf6e4(int a4, int a5, float f4, float f5, float f6, float f7, float f8);
int vmsfs_xwrite1(int a4, int a5);
int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7);
int FUN_0c015fcc(int a4, int a5, int a6, int a7, float f4, float f5);
float FUN_0c036efc(int a4, int a5, int a6, int a7);
int FUN_0c0852bc(int a4);
int FUN_0c0bf940(void);
int FUN_0c0dee40(int a4);
int FUN_0c0e4226(int a4, int a5, int a6);
int FUN_0c0e4b20(int a4);
int FUN_0c04e402(int a4, int a5);

int adxt_RcvrReplay(int a4, int a5)
{
    int t10;
    int t13;
    int t18;
    int t24;
    int t17;

    ADXCRS_Lock(a4, a5);
    thunk_FUN_0c22bece((*(int *)((a4 + 0xC))), 0x0);
    thunk_FUN_0c22bfa2((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        t10 = *(int *)((a4 + 0x14));
        t13 = ((int (*)(int))((*(int *)(((*(int *)((t10 + 0x0))) + 0x14)))))(t10);
    }
    t18 = 0x0;
    for (;;) {
        if ((int)t18 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t17 = t18;
        t17 = (t17 << 2);
        t17 = (t17 + (a4 + 0x18));
        t17 = (*(int *)((t17 + 0x0)));
        t24 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x14)))))(t17);
        t18 = (t18 + 0x1);
    }
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Seek((*(int *)((a4 + 0x8))), 0x0);
        ADXSTM_Start((*(int *)((a4 + 0x8))));
    }
    adxt_start_sj(a4, (*(int *)((a4 + 0x14))));
    return ADXCRS_Unlock();
}

int FUN_0c033850(int a4)
{
    int t0;
    int stk[16];

    t0 = *(int *)((a4 + 0x488));
    FUN_0c035828(a4, 0x400, 0x1, (((int)stk + 4) + 0x4), (((int)stk + 8) + 0x10), 1.5f, 0.0272199996f);
    if (((*(int *)(((int)stk + 8))) & 0x8000) != 0) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 24)));
    }
    if ((int)(*(int *)(((int)stk + 8))) < (int)0x1000) {
        *(unsigned int *)(((int)stk + 8)) = 0x1000;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = -1.5f;
    FUN_0c0db470((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x14));
    *(float *)(((((int)stk + 8) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 8) + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 8) + 0x4) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)((a4 + 0x4B0)) = ((*(float *)((a4 + 0x4B0))) + (*(float *)(((((int)stk + 8) + 0xC) + 0x0))));
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + (*(float *)(((((int)stk + 8) + 0x8) + 0x0))));
    *(float *)((a4 + 0x4B8)) = ((*(float *)((a4 + 0x4B8))) + (*(float *)(((((int)stk + 8) + 0x4) + 0x0))));
    nlPopMatrix(0x1);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
    *(unsigned int *)((t0 + 0x200)) = 0x1;
    *(unsigned int *)((t0 + 0x1E8)) = 0x1;
    *(unsigned int *)((t0 + 0x1F4)) = 0xA;
    *(unsigned int *)((t0 + 0x204)) = 0x0;
    *(float *)((t0 + 0x1E4)) = 3.0f;
    *(unsigned int *)((t0 + 0x1FC)) = 0x2;
    *(unsigned int *)((t0 + 0x1F8)) = 0x3;
    *(unsigned int *)((t0 + 0xD8)) = 0x0;
    return 0xD8;
}

int FUN_0c062934(int a4, float f4, float f5)
{
    int t1;
    int t41;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u34;
    float u40;
    int stk[14];

    nlPushMatrix(0x0);
    t1 = *(int *)((a4 + 0x244));
    t41 = 0;
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            FUN_0c062180((a4 + 0x30), (a4 + 0x6C));
        }
        u40 = f5;
        t41 = ((t1 == 1));
    } else {
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAZ((*(short *)((a4 + 0x70))));
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        nlPushMatrix(0x0);
        FUN_0c0caf6a(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (*(float *)(((*(int *)0xC247B94) + 0x3C))));
        FUN_0c0db840((((int)stk + 4) + 0x18));
        *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = ((*(float *)(((int)stk + 28))) - (*(float *)(((int)stk + 4))));
        *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = ((*(float *)(((int)stk + 32))) - (*(float *)(((*(int *)0xC247B94) + 0x3C))));
        *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = ((*(float *)(((int)stk + 36))) - (*(float *)(((int)stk + 8))));
        u28 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
        u29 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
        u30 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
        u31 = (u28 * u28);
        u31 = u31 + u29 * u29;
        u32 = u31;
        u32 = u32 + u30 * u30;
        nlScale((f5 / 1.0f), (f5 / 1.0f), _builtin_sqrtf(u32));
        u34 = (f5 / 1.0f);
        if (_builtin_sqrtf(u32) > (f5 / 1.0f)) {
            u34 = _builtin_sqrtf(u32);
        }
        FUN_0c061a8a((0x254 + a4), (0x258 + a4), u34);
        nlPopMatrix(0x1);
        FUN_0c061ccc();
        u40 = _builtin_sqrtf(u32);
        t41 = ((_builtin_sqrtf(u32) > (f5 / 1.0f)));
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0a748e(int a4, int a5, int a6)
{
    int stk[18];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 36)));
    FUN_0c0a7888((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 4))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 36)));
    nlUnitMatrix();
    nlRotateAY((-(*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
    nlRotateAZ((-(*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = (short)(FUN_0c0d9dc0((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8)))));
    return (nlPopMatrix(0x1));
}

int ADXB_ExecOneWav8(int a4, int a5, int a6, int a7)
{
    int t1;
    int t71;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t35;
    int t24;
    int t25;
    int t26;
    int t28;
    int t43;
    int t36;
    int t37;
    int t38;
    int t39;
    int t72;
    int t78;
    int t77;
    int t61;
    int t50;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t71 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                t35 = 0x0;
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t18 << 1) + t14) + t25) + 0x0)) = (((unsigned char)(*(signed char *)((t24 + t1))) - 128) << 8);
                        t28 = *(signed char *)((((t24 + 0x1) + t1) + 0x0));
                        t26 = (t26 + 0x1);
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = (((unsigned char)t28 - 128) << 8);
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                    t35 = t26;
                }
                t50 = t35;
            } else {
                t43 = 0x0;
                if ((int)t16 > 0) {
                    t36 = (0x0 + t1);
                    t37 = (0x0 + ((t18 << 1) + t14));
                    t38 = 0x0;
                    for (;;) {
                        t39 = *(signed char *)((t36 + 0x0));
                        t36 = (t36 + 0x1);
                        t38 = (t38 + 0x1);
                        *(unsigned short *)((t37 + 0x0)) = (((unsigned char)t39 - 128) << 8);
                        t37 = (t37 + 0x2);
                        if ((int)t38 >= (int)t16) {
                            break;
                        }
                    }
                    t43 = t38;
                }
                t50 = t43;
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = (t16 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t61 = t50;
        }
        t71 = t61;
    }
    t72 = *(int *)((a4 + 0x4));
    t78 = t72;
    if (t72 == 2) {
        t77 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t71);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t78 = t77;
    }
    return t78;
}

int FUN_0c0346ca(int a4)
{
    int t1;
    float u3;
    int t6;
    int t9;
    int t13;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    int t25;
    int t31;
    int stk[19];

    t1 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 56)) = (*(float *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC205CB8) + 0x0)));
    u3 = *(float *)0xC034850;
    *(float *)(((int)stk + 60)) = ((*(float *)((a4 + 0x4))) + u3);
    t6 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 64)) = (*(float *)((0x8 + (((((t6 << 1) + t6) << 2) << 1) + 0xC205CB8))));
    t9 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 44)) = (*(float *)((0xC + (((((t9 << 1) + t9) << 2) << 1) + 0xC205CB8))));
    *(float *)(((int)stk + 48)) = ((*(float *)((a4 + 0x4))) + u3);
    t13 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    *(float *)(((int)stk + 52)) = (*(float *)(((0xC205CB8 + ((((t13 << 1) + t13) << 2) << 1)) + 0x14)));
    u15 = *(float *)((a4 + 0x0));
    u16 = *(float *)(((int)stk + 56));
    u17 = *(float *)(((int)stk + 64));
    u18 = *(float *)((a4 + 0x8));
    u19 = *(float *)((a4 + 0x0));
    u20 = ((u18 - u17) * (u18 - u17));
    u20 = u20 + (u15 - u16) * (u15 - u16);
    u21 = *(float *)(((int)stk + 44));
    u22 = *(float *)(((int)stk + 52));
    u23 = *(float *)((a4 + 0x8));
    u24 = ((u23 - u22) * (u23 - u22));
    u24 = u24 + (u19 - u21) * (u19 - u21);
    t25 = (((int)stk + 8) + 0x24);
    if (_builtin_sqrtf(u24) > _builtin_sqrtf(u20)) {
        t25 = (((int)stk + 8) + 0x30);
    }
    *(float *)(((int)stk + 32)) = ((*(float *)((a4 + 0x0))) - (*(float *)((t25 + 0x0))));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = ((*(float *)((a4 + 0x8))) - (*(float *)((t25 + 0x8))));
    t31 = FUN_0c01e822(t25, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), 0x8, _builtin_sqrtf(u20), _builtin_sqrtf(u24), (u23 - u22));
    return (((t31 == 0)) ? 1 : 0);
}

int FUN_0c04fe58(int a4, int a5)
{
    int t0;
    int t15;
    int t20;
    int t21;
    float u25;
    float u26;
    int t28;
    float u31;
    float u32;
    int t34;
    float u43;
    float u44;
    int t45;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F1;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C04FE58:;
    t0 = *(int *)0xC23ED50;
    R0 = (t0);
    if ((t0 == 53)) goto L_C04FE66;
    goto L_C04FE62;
    L_C04FE62:;
    goto L_C04FF60;
    L_C04FF60:;
    return R0;
    L_C04FE66:;
    R0 = (0x394);
    if (((*(int *)((R4 + 0x394))) != 0)) goto L_C04FF60;
    goto L_C04FE6E;
    L_C04FE6E:;
    if ((((*(int *)((R5 + 0x0))) & 0x602) == 0)) goto L_C04FF60;
    goto L_C04FE76;
    L_C04FE76:;
    R5 = (0xC246FF0);
    R6 = (0x9B);
    if (((*(int *)((0xC247030 + ((((*(int *)((R4 + 0xBC))) + 0x1) & 0x1) << 2)))) != 4)) goto L_C04FEB2;
    goto L_C04FE92;
    L_C04FE92:;
    t15 = *(int *)(((*(int *)(((((0x1 & ((*(int *)((R4 + 0xBC))) + 0x1)) << 2) + R5) + 0x0))) + 0x210));
    R0 = (0x210);
    R5 = (t15);
    if ((t15 == R6)) goto L_C04FF60;
    goto L_C04FEAC;
    L_C04FEAC:;
    if ((R5 == 0x9C)) goto L_C04FF60;
    goto L_C04FEB2;
    L_C04FEB2:;
    t20 = *(short *)((R4 + 0x6E));
    *(unsigned int *)(((int)stk + 4)) = t20;
    t21 = *(int *)0xC1FE824;
    *(unsigned int *)(((int)stk + 8)) = (short)(t20 - t21);
    R0 = (0xC04FF90);
    R5 = (0xC1FE818);
    if ((!(6144.0f > _builtin_fabsf((float)(short)(t20 - t21))))) goto L_C04FF60;
    goto L_C04FED4;
    L_C04FED4:;
    u25 = *(float *)((R5 + 0x0));
    u26 = *(float *)((R4 + 0x30));
    t28 = !((*(float *)((R5 + 0x10))) > _builtin_fabsf((u26 - u25)));
    R0 = (0x10);
    F1 = (_builtin_fabsf((u26 - u25)));
    if (t28) goto L_C04FF60;
    goto L_C04FEE6;
    L_C04FEE6:;
    u31 = *(float *)((R5 + 0x8));
    u32 = *(float *)((R4 + 0x38));
    t34 = !((*(float *)((R5 + 0x14))) > _builtin_fabsf((u32 - u31)));
    R0 = (0x14);
    F1 = (_builtin_fabsf((u32 - u31)));
    if (t34) goto L_C04FF60;
    goto L_C04FEFA;
    L_C04FEFA:;
    *(unsigned int *)((R4 + 0x20C)) = 0x100;
    *(unsigned int *)((R4 + 0x210)) = R6;
    *(unsigned int *)((R4 + 0x2C4)) = 0x16B;
    *(unsigned int *)((R4 + 0x2CC)) = 0x1;
    *(unsigned int *)((R4 + 0xA4)) = ((*(int *)((R4 + 0xA4))) & 0xFFFFFFFD);
    *(unsigned int *)((R4 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((R4 + 0x394)) = 0x1;
    *(unsigned short *)((R4 + 0x6E)) = (*(int *)((R5 + 0xC)));
    *(unsigned int *)((R4 + 0x3B4)) = (*(int *)((R5 + 0x24)));
    *(float *)((R4 + 0x258)) = (((*(float *)((R5 + 0x18))) - (*(float *)((R4 + 0x30)))) / (float)(*(int *)((R4 + 0x3B4))));
    u43 = *(float *)((R4 + 0x38));
    u44 = *(float *)((R5 + 0x20));
    t45 = *(int *)((R4 + 0x3B4));
    *(float *)((R4 + 0x260)) = ((u44 - u43) / (float)t45);
    R0 = (0x260);
    F1 = (((u44 - u43) / (float)t45));
    goto L_C04FF60;
}

int FUN_0c0c4d50(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t21;
    int t22;
    int t23;
    int t33;
    int t25;
    int t26;
    int t27;
    int t38;
    int t34;
    int t35;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t47;
    int stk[10];

    t0 = *(int *)0xC1E80F0;
    t1 = *(int *)0xC1E80F8;
    t2 = (t0 + t1);
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0xC209E3C;
    t6 = 0x0;
    t7 = 0xC209E3C;
    t8 = 0x0;
    t9 = 0xC209E3C;
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (*(short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x2)));
        *(unsigned short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x2)) = t3;
        t3 = (t3 + (*(int *)(((int)stk + 4))));
        *(unsigned int *)(((int)stk + 4)) = (*(short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x0)));
        *(unsigned short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x0)) = t4;
        t4 = (t4 + (*(int *)(((int)stk + 4))));
        if ((*(short *)(((((t8 << 2) << 1) + 0xC209E3C) + 0x6))) != 0) {
            *(unsigned short *)((t7 + 0x6)) = t6;
            t6 = (t6 + (*(int *)(((int)stk + 4))));
        } else {
            *(unsigned short *)((t5 + 0x6)) = t6;
        }
        t21 = *(short *)((t9 + 0x4));
        t8 = (t8 + 0x1);
        *(unsigned short *)((t9 + 0x4)) = t2;
        t5 = (t5 + 0x8);
        t22 = t2;
        t2 = (t2 + t21);
        t9 = (t9 + 0x8);
        t7 = (t7 + 0x8);
        if ((int)t8 >= (int)0x5D) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 8)) = 0xC20A130;
    *(unsigned int *)(((int)stk + 4)) = (short)(t2 - 1);
    t23 = *(int *)(((int)stk + 8));
    t33 = ((short)(t2 - 1) + 0xC20A130);
    if ((int)(*(int *)(((int)stk + 4))) >= 0) {
        t25 = (t2 - 1);
        t26 = ((short)(t2 - 1) + 0xC20A130);
        t27 = ((((short)(t2 - 1) + (short)(t0 + t1)) + t23) + 0x1);
        for (;;) {
            t25 = (t25 - 1);
            *(unsigned char *)(((t27 - 0x1) + 0x0)) = (*(signed char *)((t26 + 0x0)));
            t27 = (t27 - 0x1);
            t26 = (t26 - 1);
            if ((int)(short)t25 < 0) {
                break;
            }
        }
        t33 = t26;
    }
    t38 = ((t0 + t1) - 1);
    if ((int)(short)((t0 + t1) - 1) >= 0) {
        t34 = (((short)((t0 + t1) - 1) + 0xC20A130) + 0x1);
        t35 = ((t0 + t1) - 1);
        for (;;) {
            t35 = (t35 - 1);
            *(unsigned char *)(((t34 - 0x1) + 0x0)) = 0x0;
            t34 = (t34 - 0x1);
            if ((int)(short)t35 < 0) {
                break;
            }
        }
        t38 = t35;
    }
    t39 = t22;
    t40 = (short)((t0 + t1) - 1);
    t41 = 0xC11989C;
    t42 = t38;
    t43 = 0x0;
    t44 = t33;
    t45 = 0xC1127D8;
    for (;;) {
        if ((int)t43 >= (int)(*(int *)0xC204750)) {
            break;
        }
        t47 = *(short *)((t45 + 0x0));
        t45 = (t45 + 0x2);
        t44 = t47;
        t43 = (t43 + 0x1);
        t40 = (*(int *)((t41 + 0x0)));
        t44 = (unsigned short)t44;
        t42 = t44;
        t42 = (t42 << 1);
        t42 = (t42 + t44);
        t42 = (t42 << 2);
        t42 = (t42 + 0xC24FB50);
        *(unsigned int *)((t42 + 0x0)) = t40;
        *(unsigned int *)((t42 + 0x4)) = (*(int *)((t41 + 0x8)));
        t39 = (*(short *)((t41 + 0xE)));
        t41 = (t41 + 0x10);
        *(unsigned short *)((t42 + 0x8)) = t39;
    }
    return t39;
}

int gdFsLoadDirG(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t9;
    int t29;
    int t11;
    int t23;
    int t13;
    int t16;
    int t52;
    int t45;
    int t56;
    int t19;
    int t20;
    int t42;
    int t48;
    int t49;

    t0 = *(int *)0xC2393C4;
    t2 = a5;
    if (a5 == 0) {
        t2 = (*(int *)((t0 + 0x10)));
    }
    t4 = *(signed char *)((a4 + 0x0));
    t5 = *(int *)0xC94D9B8;
    if ((t4 != 47) && (t4 != 92)) {
        t9 = gdFsSearchName(a4, (*(int *)((t0 + 0x10))), 0x0);
        t29 = 0xFFFFFFF8;
        if (t9 != 0) {
            t11 = *(int *)(((*(int *)0xC2393C4) + 0x10));
            t23 = 0xFFFFFFF5;
            if (((unsigned char)(*(signed char *)((((t11 + 0x10) + ((t9 - 1) * 0x2C)) + 0x8))) & 2) == 0) {
            } else {
                t13 = *(int *)((((t11 + 0x10) + ((t9 - 1) * 0x2C)) + 0x0));
                t16 = gdFsGetDirEnt(((*(int *)0xC2393C4) + 0x40), (t13 + 0x96), t2, (*(int *)((((t11 + 0x10) + ((t9 - 1) * 0x2C)) + 0x4))));
                if (((*(short *)(((*(int *)0xC94D9B8) + 0x0))) == 1) && ((t19 = *(int *)0xC94D9B8, t20 = *(int *)((t19 + 0x4)), t20 == (t13 + 0x96)) && ((t16 == 0) || (t16 == -12)))) {
                    FUN_0c20f29a(t2);
                }
                t23 = t16;
            }
            t29 = t23;
        }
        t56 = t29;
    } else {
        if ((*(short *)((t5 + 0x0))) == 1) {
            t42 = (gdFsSearchPath_dds(((t0 + 0x40) + 0x40), (*(int *)((t0 + 0x4))), (*(int *)((t0 + 0x8))), a4, (0x8 + t5)));
        } else {
            t42 = (gdFsSearchPath(((t0 + 0x40) + 0x40), (*(int *)((t0 + 0x4))), (*(int *)((t0 + 0x8))), a4));
        }
        t52 = 0xFFFFFFF8;
        if (t42 != 0) {
            t45 = gdFsGetDirEnt(((*(int *)0xC2393C4) + 0x40), (0x96 + t42), t2, 0x800);
            if (((*(short *)(((*(int *)0xC94D9B8) + 0x0))) == 1) && ((t48 = *(int *)0xC94D9B8, t49 = *(int *)((t48 + 0x4)), t49 == (0x96 + t42)) && ((t45 == 0) || (t45 == -12)))) {
                FUN_0c20f29a(t2);
            }
            t52 = t45;
        }
        t56 = t52;
    }
    return t56;
}

int FUN_0c02a432(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t22;
    int t23;
    int t24;
    int t35;
    int t41;
    int t37;
    int t31;
    int t28;
    int t19;
    int t18;
    int t17;
    int t27;
    int t26;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t41 = 0x4F8;
    } else {
        t1 = FUN_0c03593a(a4);
        if (t1 != 0) {
            t2 = FUN_0c02a35a(a4);
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 != 2) {
                        if (t2 != 3) {
                            *(unsigned int *)((a4 + 0x538)) = 0x2;
                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                        } else {
                            *(unsigned int *)((a4 + 0x538)) = 0x2;
                            *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x6;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                    t7 = FUN_0c0236ce(a4);
                    if (t7 != 0) {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    }
                }
                t31 = 0x4F8;
            } else {
                t11 = FUN_0c035b26(a4);
                if (t11 != 0) {
                    t12 = FUN_0c035ce4(a4);
                    if (t12 != 0) {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                        t19 = 0x4F8;
                    } else {
                        t13 = *(int *)((a4 + 0x538));
                        if ((t13 != 8) && ((t13 != 6) && ((t13 != 7) && (t13 != 4)))) {
                            if ((t13 != 1) && ((t13 != 3) && ((t13 != 5) && (t13 != 10)))) {
                                t14 = t13;
                                if ((t13 == 2) || (t13 == 9)) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    t14 = 0x4F8;
                                }
                                t17 = t14;
                            } else {
                                *(unsigned int *)((a4 + 0x524)) = 0x0;
                                t15 = FUN_0c0236ce(a4);
                                if (t15 == 0) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                                t17 = 0x4F8;
                            }
                            t18 = t17;
                        } else {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            t18 = 0x4F8;
                        }
                        t19 = t18;
                    }
                    t28 = t19;
                } else {
                    t22 = *(int *)((a4 + 0x538));
                    if ((t22 != 8) && ((t22 != 6) && ((t22 != 7) && (t22 != 4)))) {
                        if ((t22 != 1) && ((t22 != 3) && ((t22 != 5) && (t22 != 10)))) {
                            t23 = t22;
                            if ((t22 == 2) || (t22 == 9)) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                t23 = 0x4F8;
                            }
                            t26 = t23;
                        } else {
                            *(unsigned int *)((a4 + 0x524)) = 0x0;
                            t24 = FUN_0c0236ce(a4);
                            if (t24 == 0) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                            t26 = 0x4F8;
                        }
                        t27 = t26;
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                        t27 = 0x4F8;
                    }
                    t28 = t27;
                }
                t31 = t28;
            }
            t37 = t31;
        } else {
            *(unsigned int *)((a4 + 0x538)) = 0x1;
            *(unsigned int *)((a4 + 0x50C)) = 0x0;
            *(unsigned int *)((a4 + 0x524)) = 0x0;
            t35 = FUN_0c0236ce(a4);
            if (t35 == 0) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
            t37 = 0x4F8;
        }
        t41 = t37;
    }
    return t41;
}

float FUN_0c0830b2(int a4)
{
    int t4;
    int t5;
    int t8;
    int t20;
    int t26;
    int t28;
    int t29;
    float u34;
    int t36;
    int t37;
    int t43;
    int t44;
    int t54;
    float u61;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    float F0;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    int T_;
    R4 = a4;
    L_C0830B2:;
    t4 = *(short *)(((((((R4 << 1) + R4) << 2) << 1) + 0xC247DB8) + 0x16));
    t5 = (int)(*(short *)(((((((R4 << 1) + R4) << 2) << 1) + 0xC247DB8) + 0x14))) <= (int)t4;
    t8 = (((((R4 << 1) + R4) << 2) << 1) + 0xC247DB8);
    R0 = (t4);
    R4 = (((*(int *)(((R4 << 2) + 0xC1027E0))) + (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)))));
    R5 = t8;
    if (t5) goto L_C083192;
    goto L_C0830DE;
    L_C0830DE:;
    if (((*(int *)((R5 + 0x8))) == 0)) goto L_C0830EA;
    goto L_C0830E4;
    L_C0830E4:;
    F7 = ((*(float *)(((*(int *)((R5 + 0x8))) + 0x0))));
    goto L_C0830EE;
    L_C0830EE:;
    F8 = (1.0f);
    if (((*(int *)((R5 + 0x4))) == 0)) goto L_C0830FC;
    goto L_C0830F6;
    L_C0830F6:;
    F5 = ((*(float *)(((*(int *)((R5 + 0x4))) + 0x0))));
    goto L_C083100;
    L_C083100:;
    t20 = *(int *)((R5 + 0x0));
    R0 = (t20);
    if ((t20 == 0)) goto L_C083116;
    goto L_C083106;
    L_C083106:;
    if ((R0 == 2)) goto L_C08312C;
    goto L_C08310A;
    L_C08310A:;
    if ((R0 == 1)) goto L_C083158;
    goto L_C08310E;
    L_C08310E:;
    if ((R0 == 4)) goto L_C083188;
    goto L_C083112;
    L_C083112:;
    goto L_C0831B8;
    L_C0831B8:;
    return F0;
    L_C083188:;
    t26 = *(short *)((R5 + 0x16));
    *(unsigned short *)((R5 + 0x16)) = (t26 + 0x1);
    R0 = ((t26 + 0x1));
    goto L_C08318E;
    L_C08318E:;
    *(float *)((R4 + 0x0)) = F5;
    goto L_C0831B8;
    L_C083158:;
    t28 = *(short *)((R5 + 0x14));
    t29 = *(short *)((R5 + 0x16));
    *(unsigned short *)((R5 + 0x16)) = (t29 + 0x1);
    R0 = ((short)(t29 + 0x1));
    F0 = ((F8 - ((((float)t28 * (float)t28) - (((float)t28 - (float)(short)(t29 + 0x1)) * ((float)t28 - (float)(short)(t29 + 0x1)))) / ((float)t28 * (float)t28))));
    F5 = ((F5 * (((((float)t28 * (float)t28) - (((float)t28 - (float)(short)(t29 + 0x1)) * ((float)t28 - (float)(short)(t29 + 0x1)))) / ((float)t28 * (float)t28)))));
    goto L_C083184;
    L_C083184:;
    u34 = F5;
    u34 = u34 + F0 * F7;
    F5 = (u34);
    goto L_C08318E;
    L_C08312C:;
    t36 = *(short *)((R5 + 0x14));
    t37 = *(short *)((R5 + 0x16));
    *(unsigned short *)((R5 + 0x16)) = (t37 + 0x1);
    R0 = ((short)(t37 + 0x1));
    F4 = (((float)t36 * (float)t36));
    F6 = (((float)(short)(t37 + 0x1) * (float)(short)(t37 + 0x1)));
    goto L_C083144;
    L_C083144:;
    F0 = (((F4 - F6) / F4));
    F5 = ((F5 * (F8 - ((F4 - F6) / F4))));
    goto L_C083184;
    L_C083116:;
    t43 = *(short *)((R5 + 0x14));
    t44 = *(short *)((R5 + 0x16));
    *(unsigned short *)((R5 + 0x16)) = (t44 + 0x1);
    R0 = ((short)(t44 + 0x1));
    F4 = ((float)t43);
    F6 = ((float)(short)(t44 + 0x1));
    goto L_C083144;
    L_C0830FC:;
    F5 = ((*(float *)((R5 + 0xC))));
    goto L_C083100;
    L_C0830EA:;
    F7 = ((*(float *)((R5 + 0x10))));
    goto L_C0830EE;
    L_C083192:;
    if (((*(int *)((R5 + 0x4))) == 0)) goto L_C0831B8;
    goto L_C083198;
    L_C083198:;
    t54 = *(int *)((R5 + 0x0));
    R0 = (t54);
    if ((t54 != 3)) goto L_C0831B2;
    goto L_C08319E;
    L_C08319E:;
    u61 = (*(float *)((R4 + 0x0)));
    u61 = u61 + 0.049999997f * ((*(float *)(((*(int *)((R5 + 0x4))) + 0x0))) - (*(float *)((R4 + 0x0))));
    *(float *)((R4 + 0x0)) = u61;
    R0 = (0xC0831CC);
    F0 = (0.049999997f);
    goto L_C0831B8;
    L_C0831B2:;
    *(float *)((R4 + 0x0)) = (*(float *)(((*(int *)((R5 + 0x4))) + 0x0)));
    goto L_C0831B8;
}

int FUN_0c20d298(int a4, int a5)
{
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R7;
    int R8;
    int R9;
    int R10;
    int R12;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C20D298:;
    R0 = (R5);
    if ((R5 == 0)) goto L_C20D320;
    goto L_C20D29E;
    L_C20D29E:;
    if ((R0 == 1)) goto L_C20D328;
    goto L_C20D2A2;
    L_C20D2A2:;
    if ((R0 == 2)) goto L_C20D330;
    goto L_C20D2A6;
    L_C20D2A6:;
    if ((R0 == 3)) goto L_C20D338;
    goto L_C20D2AA;
    L_C20D2AA:;
    if ((R0 == 4)) goto L_C20D340;
    goto L_C20D2AE;
    L_C20D2AE:;
    if ((R0 != 5)) goto L_C20D2B6;
    goto L_C20D2B2;
    L_C20D2B2:;
    goto L_C20D380;
    L_C20D380:;
    R0 = (0x25C);
    R1 = (0xC20D7C8);
    goto L_C20D394;
    L_C20D394:;
    *(unsigned int *)((R4 + R0)) = R1;
    goto L_C20D39E;
    L_C20D39E:;
    return R0;
    L_C20D2B6:;
    if ((R0 != 6)) goto L_C20D2BE;
    goto L_C20D2BA;
    L_C20D2BA:;
    goto L_C20D388;
    L_C20D388:;
    R0 = (0x264);
    R2 = (0xC20D7CC);
    goto L_C20D39C;
    L_C20D39C:;
    *(unsigned int *)((R4 + R0)) = R2;
    goto L_C20D39E;
    L_C20D2BE:;
    if ((R0 != 7)) goto L_C20D2C6;
    goto L_C20D2C2;
    L_C20D2C2:;
    goto L_C20D390;
    L_C20D390:;
    R0 = (0x26C);
    R1 = (0xC20D7D0);
    goto L_C20D394;
    L_C20D2C6:;
    if ((R0 != 8)) goto L_C20D2CE;
    goto L_C20D2CA;
    L_C20D2CA:;
    goto L_C20D398;
    L_C20D398:;
    R0 = (0x274);
    R2 = (0xC20D7D4);
    goto L_C20D39C;
    L_C20D2CE:;
    goto L_C20D39E;
    L_C20D340:;
    R0 = (0x254);
    R2 = (0xC20D7C4);
    goto L_C20D39C;
    L_C20D338:;
    R0 = (0x24C);
    R1 = (0xC20D7C0);
    goto L_C20D394;
    L_C20D330:;
    R0 = (0x244);
    R2 = (0xC20D79A);
    goto L_C20D39C;
    L_C20D328:;
    R0 = (0x23C);
    R1 = (0xC20D796);
    goto L_C20D394;
    L_C20D320:;
    *(unsigned int *)((R4 + 0x234)) = 0xC20D792;
    R0 = (0x234);
    goto L_C20D39E;
}

int FUN_0c010b04(int a4, float f4, float f5, float f6, float f7)
{
    int t5;
    int t6;
    int t8;
    float u9;
    float u10;
    int t11;
    float u35;
    int t17;
    int stk[17];

    *(float *)(((int)stk + 4)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    nlPushMatrix(0x0);
    nlScale(f7, f7, 1.0f);
    t5 = FUN_0c0dcc70((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 16)) = 0xC1EF29C;
    t6 = t5;
    t8 = a4;
    u9 = 0.0f;
    u10 = 0.0f;
    for (;;) {
        t11 = *(signed char *)((t8 + 0x0));
        t8 = (t8 + 0x1);
        if ((signed char)t11 == 0) {
            break;
        }
        t6 = (signed char)t11;
        if (t6 != 32) {
            if (t6 != 10) {
                if (((unsigned int)((((signed char)t11 << 2) << 1) + 0xC1EEEC4) > (unsigned int)0xC1EEFC4) && (t17 = *(int *)(((int)stk + 16)), (unsigned int)((((signed char)t11 << 2) << 1) + 0xC1EEEC4) < (unsigned int)t17)) {
                    t6 = (FUN_0c0c465c(((*(int *)((((((signed char)t11 << 2) << 1) + 0xC1EEEC4) + 0x0))))));
                    t6 = 0x4;
                    u10 = (*(float *)((((((signed char)t11 << 2) << 1) + 0xC1EEEC4) + t6)));
                    if ((*(signed char *)((t8 + 0x0))) != 0) {
                        t6 = 0x4;
                        u10 = (u10 + (*(float *)((((((*(signed char *)((t8 + 0x0))) << 2) << 1) + 0xC1EEEC4) + t6))));
                    }
                }
            } else {
                t6 = 0xC010C30;
                u10 = 0.0f;
                u9 = (u9 - (*(float *)((t6 + 0x0))));
                t6 = (nlPopMatrix(0x1));
                t6 = (nlPushMatrix(0x0));
                t6 = (nlScale(f7, f7, 1.0f));
                t6 = 0x8;
                u35 = *(float *)((((int)stk + 4) + t6));
                t6 = 0x4;
                t6 = (FUN_0c0dcc70((*(float *)(((int)stk + 4))), ((*(float *)((((int)stk + 4) + t6))) + u9), u35));
            }
        } else {
            t6 = 0xC010C2C;
            u10 = (*(float *)((t6 + 0x0)));
            if ((*(signed char *)((t8 + 0x0))) == 0) {
            } else {
                t6 = 0x4;
                u10 = (u10 + (*(float *)((((((*(signed char *)((t8 + 0x0))) << 2) << 1) + 0xC1EEEC4) + t6))));
            }
        }
        t6 = (FUN_0c0dcc70(u10, 0.0f, 0.0f));
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c03fd20(int a4)
{
    int t0;
    int t2;
    int t5;
    int t8;
    int t17;
    int t21;
    float t31;
    int t35;
    int t47;
    int t39;
    int t24;
    int t12;
    int stk[7];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t2 = t0;
                    if (t0 != 4) {
                    } else {
                        t2 = (FUN_0c041f2a(a4));
                    }
                    t12 = t2;
                } else {
                    t5 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t5 - 1);
                    t8 = 0x3AC;
                    if ((int)(t5 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t8 = (FUN_0c041f2a(a4));
                    }
                    t12 = t8;
                }
                t24 = t12;
            } else {
                FUN_0c041f2a(a4);
                t17 = *(int *)((a4 + 0x2EC));
                t21 = t17;
                if ((t17 & 12) != 0) {
                    FUN_0c053ac4(a4);
                    FUN_0c035402();
                    *(unsigned int *)((a4 + 0x3AC)) = 0x14;
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    t21 = 0x4EC;
                }
                t24 = t21;
            }
            t39 = t24;
        } else {
            *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
            t31 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
            t35 = 0x34;
            if (t31 > (*(float *)((a4 + 0x34)))) {
                *(unsigned int *)((a4 + 0x2E8)) = 0x0;
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                *(float *)((a4 + 0x34)) = t31;
                *(float *)((a4 + 0x4C)) = 0.0f;
                t35 = (FUN_0c041f2a(a4));
            }
            t39 = t35;
        }
        t47 = t39;
    } else {
        *(unsigned int *)((a4 + 0x2E8)) = 0x2;
        FUN_0c041f2a(a4);
        *(float *)((a4 + 0x26C)) = 0.0f;
        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        t47 = 0x4EC;
    }
    return t47;
}



int FUN_0c0975d0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t16;
    int t60;
    int t1;
    float u8;
    float u9;
    float u10;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    float u31;
    int t48;
    int t49;
    int t50;
    int t51;
    float u52;
    float u53;

    if ((int)a6 > 0) {
        t0 = 0xC0976E4;
        t2 = a4;
        t3 = a5;
        t4 = a6;
        t5 = a7;
        t6 = 0x0;
        t7 = a5;
        for (;;) {
            if (((*(int *)((t7 + 0x0))) == 0) && (t1 = a7, (int)a4 < (int)t1)) {
                t0 = (FUN_0c0da2e0());
                t0 = 0x9;
                t0 = (FUN_0c0e5f1c());
                t0 = (t0 + 0x2A7);
                t1 = 0x14;
                *(unsigned int *)((t7 + 0x4)) = t0;
                *(unsigned int *)((t7 + 0x0)) = t1;
                t0 = (FUN_0c0da2e0());
                t0 = (unsigned char)t0;
                t16 = t0;
                t0 = 0x8;
                u9 = (float)t16;
                u9 = (u9 / 512.0f);
                u9 = (u9 + 0.5f);
                *(float *)((t7 + t0)) = u9;
                t2 = 0x0;
                t0 = (nlPushMatrix(t2));
                t0 = (FUN_0c0da2e0());
                t2 = t0;
                t2 = (t2 << 1);
                t0 = (nlRotateAY(t2));
                t1 = 0xC0DC950;
                t2 = 0xBFFF;
                t0 = (nlRotateAZ(t2));
                t2 = t7;
                t2 = (t2 + 0x10);
                t0 = (nlGetMatrix(t2));
                t2 = 0x1;
                t0 = (nlPopMatrix(t2));
            } else {
                t26 = t2;
                t27 = t3;
                t28 = t4;
                t29 = t5;
                u30 = u8;
                u31 = u9;
            }
            u8 = u30;
            u9 = u31;
            t1 = (*(int *)((t7 + 0x0)));
            t2 = t26;
            t3 = t27;
            t4 = t28;
            t5 = t29;
            if (t1 != 0) {
                t0 = 0x8;
                u8 = 0.0f;
                u9 = (*(float *)((t7 + t0)));
                if (u9 != u8) {
                    t1 = (*(int *)((t7 + 0x0)));
                    u9 = (float)t1;
                    u10 = u9;
                    u10 = (u10 / 20.0f);
                    t2 = 0x0;
                    t0 = (nlPushMatrix(t2));
                    t1 = 0xC200AEC;
                    t0 = (FUN_0c0848bc(((*(float *)0xC200AE8) * u10), ((*(float *)((t1 + 0x0))) * u10), ((*(float *)0xC200AF0) * u10)));
                    t1 = 0xC0DBDA0;
                    t2 = t7;
                    t2 = (t2 + 0x10);
                    t0 = (FUN_0c0dbda0(t2));
                    t2 = (*(int *)((t7 + 0x4)));
                    t0 = (FUN_0c0c47ae(t2));
                    t2 = 0x1;
                    t0 = (nlPopMatrix(t2));
                } else {
                    t48 = t2;
                    t49 = t3;
                    t50 = t4;
                    t51 = t5;
                    u52 = u8;
                    u53 = u9;
                }
                u8 = u52;
                u9 = u53;
                t1 = (*(int *)((t7 + 0x0)));
                t2 = t48;
                t3 = t49;
                t4 = t50;
                t5 = t51;
                t1 = (t1 - 1);
                *(unsigned int *)((t7 + 0x0)) = t1;
            }
            t6 = (t6 + 0x1);
            t7 = (t7 + 0x50);
            if ((int)t6 >= (int)a6) {
                break;
            }
        }
        t60 = t0;
    } else {
        t60 = 0xC0976E4;
    }
    return t60;
}

int FUN_0c097720(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t16;
    int t60;
    int t1;
    float u8;
    float u9;
    float u10;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    float u31;
    int t48;
    int t49;
    int t50;
    int t51;
    float u52;
    float u53;

    if ((int)a6 > 0) {
        t0 = 0xC097834;
        t2 = a4;
        t3 = a5;
        t4 = a6;
        t5 = a7;
        t6 = 0x0;
        t7 = a5;
        for (;;) {
            if (((*(int *)((t7 + 0x0))) == 0) && (t1 = a7, (int)a4 < (int)t1)) {
                t0 = (FUN_0c0da2e0());
                t0 = 0x9;
                t0 = (FUN_0c0e5f1c());
                t0 = (t0 + 0x2A7);
                t1 = 0x14;
                *(unsigned int *)((t7 + 0x4)) = t0;
                *(unsigned int *)((t7 + 0x0)) = t1;
                t0 = (FUN_0c0da2e0());
                t0 = (unsigned char)t0;
                t16 = t0;
                t0 = 0x8;
                u9 = (float)t16;
                u9 = (u9 / 512.0f);
                u9 = (u9 + 0.5f);
                *(float *)((t7 + t0)) = u9;
                t2 = 0x0;
                t0 = (nlPushMatrix(t2));
                t0 = (FUN_0c0da2e0());
                t2 = t0;
                t2 = (t2 << 1);
                t0 = (nlRotateAY(t2));
                t1 = 0xC0DC950;
                t2 = 0xBFFF;
                t0 = (nlRotateAZ(t2));
                t2 = t7;
                t2 = (t2 + 0x10);
                t0 = (nlGetMatrix(t2));
                t2 = 0x1;
                t0 = (nlPopMatrix(t2));
            } else {
                t26 = t2;
                t27 = t3;
                t28 = t4;
                t29 = t5;
                u30 = u8;
                u31 = u9;
            }
            u8 = u30;
            u9 = u31;
            t1 = (*(int *)((t7 + 0x0)));
            t2 = t26;
            t3 = t27;
            t4 = t28;
            t5 = t29;
            if (t1 != 0) {
                t0 = 0x8;
                u8 = 0.0f;
                u9 = (*(float *)((t7 + t0)));
                if (u9 != u8) {
                    t1 = (*(int *)((t7 + 0x0)));
                    u9 = (float)t1;
                    u10 = u9;
                    u10 = (u10 / 20.0f);
                    t2 = 0x0;
                    t0 = (nlPushMatrix(t2));
                    t1 = 0xC200AE0;
                    t0 = (FUN_0c0848bc(((*(float *)0xC200ADC) * u10), ((*(float *)((t1 + 0x0))) * u10), ((*(float *)0xC200AE4) * u10)));
                    t1 = 0xC0DBDA0;
                    t2 = t7;
                    t2 = (t2 + 0x10);
                    t0 = (FUN_0c0dbda0(t2));
                    t2 = (*(int *)((t7 + 0x4)));
                    t0 = (FUN_0c0c47ae(t2));
                    t2 = 0x1;
                    t0 = (nlPopMatrix(t2));
                } else {
                    t48 = t2;
                    t49 = t3;
                    t50 = t4;
                    t51 = t5;
                    u52 = u8;
                    u53 = u9;
                }
                u8 = u52;
                u9 = u53;
                t1 = (*(int *)((t7 + 0x0)));
                t2 = t48;
                t3 = t49;
                t4 = t50;
                t5 = t51;
                t1 = (t1 - 1);
                *(unsigned int *)((t7 + 0x0)) = t1;
            }
            t6 = (t6 + 0x1);
            t7 = (t7 + 0x50);
            if ((int)t6 >= (int)a6) {
                break;
            }
        }
        t60 = t0;
    } else {
        t60 = 0xC097834;
    }
    return t60;
}

void FUN_0c0cf6e4(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    int t11;
    int t12;
    int t17;
    int t20;
    int t23;
    int stk[24];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    F7 = f7;
    F8 = f8;
    L_C0CF6E4:;
    *(unsigned int *)(((int)stk + 8)) = R4;
    *(unsigned int *)(((int)stk + 4)) = R5;
    F15 = (F4);
    if ((R5 == 0)) goto L_C0CF7DA;
    goto L_C0CF700;
    L_C0CF700:;
    *(float *)(((int)stk + 24)) = 0.00109999999f;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(float *)(((int)stk + 28)) = F6;
    *(float *)(((int)stk + 32)) = F7;
    *(float *)(((int)stk + 56)) = F8;
    *(unsigned int *)(((int)stk + 64)) = 0x1000;
    *(unsigned int *)(((int)stk + 60)) = 0xFFFFFFFF;
    *(float *)(((int)stk + 16)) = (F15 + 0.0f);
    *(float *)(((int)stk + 20)) = (F5 + 0.0f);
    R11 = ((int)(F6 * 18.0f));
    R12 = ((int)(F7 * 34.0f));
    R13 = (0xC0C0340);
    R14 = (0xC1E9EEC);
    F1 = (0.00109999999f);
    F14 = (1.0f);
    F15 = ((F15 + 0.0f));
    F4 = (0.0f);
    F5 = ((F5 + 0.0f));
    goto L_C0CF79C;
    L_C0CF79C:;
    t11 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t11 + 0x1);
    t12 = *(signed char *)((((t11 + 0x1) - 1) + 0x0));
    R4 = (t12);
    if ((t12 != 0)) goto L_C0CF75E;
    goto L_C0CF7AA;
    L_C0CF7AA:;
    if (((int)(*(int *)(((int)stk + 8))) > 0)) goto L_C0CF7C2;
    goto L_C0CF7B0;
    L_C0CF7B0:;
    t17 = *(int *)(((int)stk + 8));
    R0 = (t17);
    if ((t17 != -1)) goto L_C0CF7DA;
    goto L_C0CF7B6;
    L_C0CF7B6:;
    t20 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t20 - 1);
    if (((*(signed char *)(((t20 - 1) + 0x0))) == 0)) goto L_C0CF7DA;
    goto L_C0CF7C2;
    L_C0CF7C2:;
    t23 = *(int *)0xC23A258;
    R0 = (t23);
    if (((t23 & 4) == 0)) goto L_C0CF7DA;
    goto L_C0CF7CA;
    L_C0CF7CA:;
    *(unsigned int *)(((int)stk + 12)) = (*(short *)((R14 + 0x80)));
    *(float *)(((int)stk + 56)) = F14;
    R0 = ((FUN_0c0c0340((((int)stk + 4) + 0x8), F4)));
    goto L_C0CF7DA;
    L_C0CF7DA:;
    return;
    L_C0CF75E:;
    R0 = ((signed char)R4);
    R5 = ((signed char)R4);
    if (((signed char)R4 != 10)) goto L_C0CF77C;
    goto L_C0CF768;
    L_C0CF768:;
    *(float *)(((int)stk + 16)) = F15;
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (float)R12);
    goto L_C0CF79C;
    L_C0CF77C:;
    if ((R0 == 32)) goto L_C0CF78E;
    goto L_C0CF780;
    L_C0CF780:;
    *(unsigned int *)(((int)stk + 12)) = (*(short *)((R14 + ((signed char)R4 << 1))));
    FUN_0c0c0340((((int)stk + 4) + 0x8), F4);
    goto L_C0CF78E;
    L_C0CF78E:;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + (float)R11);
    goto L_C0CF79C;
}

int vmsfs_xwrite1(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t54;
    int t45;
    int t9;
    int t37;
    int t10;
    int t11;
    int t12;
    int t32;
    int t16;
    int t26;
    int t64;
    int t13;
    int t14;
    int t15;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready(t0);
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t64 = 0xFFFFFF01;
    } else {
        t5 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t54 = 0xFFFFFF01;
        if (t5 != 0) {
            t45 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956770))) == 0) {
            } else {
                t9 = buIsFormat((*(int *)((a4 + 0x28))));
                t37 = 0xFFFFFF03;
                if ((int)t9 < 0) {
                } else {
                    t10 = *(int *)((a4 + 0x30));
                    t11 = *(int *)((a4 + 0x28));
                    t12 = get_fat(t11, t10);
                    t32 = 0xFFFFFF04;
                    if (((unsigned short)t12 == 0xFFFC) && (t13 = *(int *)((a4 + 0x30)), t14 = *(int *)((((t0 * 0x148) + 0xC956768) + 0x1C)), t15 = *(int *)((t14 + 0x38)), (int)t13 < (int)t15)) {
                        t16 = vmsfs_write_retry(t11, t10, a5);
                        t26 = t16;
                        if ((int)t16 < 0) {
                        } else {
                            set_fat(t11, t10, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t10;
                            } else {
                                set_fat(t11, (*(int *)((a4 + 0x3C))), t10);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t10;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t26 = 0x0;
                        }
                        t32 = t26;
                    }
                    t37 = t32;
                }
                t45 = t37;
            }
            t54 = t45;
        }
        t64 = t54;
    }
    return t64;
}

int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7)
{
    int t1;
    int t71;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t35;
    int t24;
    int t25;
    int t26;
    int t28;
    int t43;
    int t36;
    int t37;
    int t38;
    int t39;
    int t72;
    int t78;
    int t77;
    int t61;
    int t50;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t71 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                t35 = 0x0;
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t18 << 1) + t14) + t25) + 0x0)) = ((unsigned char)(*(signed char *)((t24 + t1))) << 8);
                        t28 = *(signed char *)((((t24 + 0x1) + t1) + 0x0));
                        t26 = (t26 + 0x1);
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = ((unsigned char)t28 << 8);
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                    t35 = t26;
                }
                t50 = t35;
            } else {
                t43 = 0x0;
                if ((int)t16 > 0) {
                    t36 = (0x0 + t1);
                    t37 = (0x0 + ((t18 << 1) + t14));
                    t38 = 0x0;
                    for (;;) {
                        t39 = *(signed char *)((t36 + 0x0));
                        t36 = (t36 + 0x1);
                        t38 = (t38 + 0x1);
                        *(unsigned short *)((t37 + 0x0)) = ((unsigned char)t39 << 8);
                        t37 = (t37 + 0x2);
                        if ((int)t38 >= (int)t16) {
                            break;
                        }
                    }
                    t43 = t38;
                }
                t50 = t43;
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = (t16 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t61 = t50;
        }
        t71 = t61;
    }
    t72 = *(int *)((a4 + 0x4));
    t78 = t72;
    if (t72 == 2) {
        t77 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t71);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t78 = t77;
    }
    return t78;
}

int FUN_0c015fcc(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t6;
    int t22;
    int t16;
    int t17;
    int t31;
    int t34;
    int t35;
    int t43;
    int t49;
    int t26;
    int t18;
    int t32;
    int t40;
    int stk[9];

    t0 = *(int *)0xC23EB34;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                *(unsigned int *)0xC23EB34 = 0x9;
            }
            t26 = t0;
        } else {
            FUN_0c0154c0((*(int *)0xC23EB20), 0x1, 0x2, f4, f5);
            t6 = *(int *)0xC23EB1C;
            t22 = t6;
            if (t6 == 9) {
                if ((int)(*(int *)0xC23EB24) < 0) {
                    *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                    t18 = t6;
                } else {
                    FUN_0c0e631c(0xC522A54, (*(int *)0xC23EB14), 0x3E0);
                    FUN_0c0e631c(0xC20116C, 0xC522D94, 0x20);
                    FUN_0c0b70fe();
                    FUN_0c0e2a4c((*(int *)0xC23EB14), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                    t16 = *(int *)0xC522D84;
                    *(unsigned int *)0xC23A1A4 = t16;
                    t17 = FUN_0c0c4e78(t16);
                    *(unsigned int *)0xC23EB34 = 0x9;
                    t18 = t17;
                }
                t22 = t18;
            }
            t26 = t22;
        }
        t49 = t26;
    } else {
        t31 = t0;
        t34 = 0xC0F40CC;
        t35 = 0x2;
        for (;;) {
            if ((int)t35 >= (int)0x6) {
                break;
            }
            t31 = (FUN_0c015436((*(int *)0xC23EB20), t35, a6, a7));
            if ((int)((*(int *)0xC23EB24)) >= 0) {
                t31 = 0xC1EF2D4;
                t32 = (*(signed char *)((t34 + 0x0)));
                *(unsigned char *)((t32 + t31)) = 0x1;
                t40 = t32;
            }
            t32 = t40;
            t35 = (t35 + 0x1);
            t34 = (t34 + 0x1);
        }
        t43 = FUN_0c015436((*(int *)0xC23EB20), 0x1, a6, a7);
        if ((int)(*(int *)0xC23EB24) < 0) {
            *(unsigned int *)0xC23EB34 = 0x2;
        } else {
            *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
        }
        t49 = t43;
    }
    return t49;
}

float FUN_0c036efc(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u8;
    float u9;
    float u16;
    float u17;
    int stk[20];

    *(unsigned int *)(((int)stk + 12)) = a7;
    u0 = *(float *)0xC037084;
    u1 = *(float *)((a5 + 0x4));
    u2 = *(float *)((a4 + 0x4));
    u3 = *(float *)((a5 + 0x0));
    u4 = *(float *)((a4 + 0x0));
    u5 = *(float *)((a5 + 0x8));
    u6 = *(float *)((a4 + 0x8));
    u8 = ((u2 - u1) * (u2 - u1));
    u8 = u8 + (u4 - u3) * (u4 - u3);
    u9 = u8;
    u9 = u9 + (u6 - u5) * (u6 - u5);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0)))), ((*(float *)((a4 + 0x4))) - (*(float *)((a5 + 0x4)))), ((*(float *)((a4 + 0x8))) - u5));
    u16 = *(float *)((a5 + 0xC));
    u17 = (u0 * (*(float *)((a4 + 0xC))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((u17 * u16) / (_builtin_sqrtf(u9) * _builtin_sqrtf(u9)));
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    nlPopMatrix(0x1);
    *(float *)((a6 + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x24) + 0x0))) / (*(float *)((a5 + 0xC))));
    *(float *)((a6 + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x24) + 0x4))) / (*(float *)((a5 + 0xC))));
    *(float *)((a6 + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x24) + 0x8))) / (*(float *)((a5 + 0xC))));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = _builtin_sqrtf(((((u17 * u16) / (_builtin_sqrtf(u9) * _builtin_sqrtf(u9)))) * (*(float *)((a4 + 0x10)))));
    return _builtin_sqrtf(u9);
}

int FUN_0c0852bc(int a4)
{
    int t1;

    t1 = 0xC1A4004;
    if ((*(int *)0xC23A180) != 1) {
        t1 = 0xC1A35FC;
    }
    FUN_0c08455e(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x0))) * 0.00999999978f));
    FUN_0c0844dc(((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x3))) << 8), ((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x2))) << 8), 0x0, ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x1))) * 0.00999999978f));
    FUN_0c0844dc(((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x6))) << 8), ((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x5))) << 8), 0x1, ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x4))) * 0.00999999978f));
    FUN_0c084570((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x7))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x8))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x9))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xA))), (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xB))));
    FUN_0c0845c4();
    FUN_0c0847a2((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x14))));
    FUN_0c0847f4(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xC))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xD))) * 0.00999999978f));
    FUN_0c0847a8(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xE))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xF))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x10))) * 0.00999999978f));
    return FUN_0c0847ce(((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x11))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x12))) * 0.00999999978f), ((float)(unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x13))) * 0.00999999978f));
}

int FUN_0c0bf940(void)
{
    int t5;
    int t6;
    int t15;
    int t29;
    int t34;
    int t11;
    int t18;
    int t19;
    int t24;

    if ((*(int *)0xC260CB8) != 0) {
        return FUN_0c0bfa90();
    }
    t5 = *(int *)0xC23A180;
    t6 = *(int *)0xC23ED50;
    if (t5 != 2) {
        if (t5 != 1) {
            *(unsigned int *)0xC260CB8 = (*(int *)(((t6 << 2) + 0xC1915F8)));
            t11 = 0xC1915F8;
        } else {
            *(unsigned int *)0xC260CB8 = (*(int *)(((t6 << 2) + 0xC1915BC)));
            t11 = 0xC1915BC;
        }
        t34 = t11;
    } else {
        t15 = *(short *)(((*(int *)0xC23ECFC) + 0x6));
        t29 = t15;
        if ((t15 & 8) != 0) {
            *(unsigned int *)0xC260CB8 = (*(int *)(((t6 << 2) + 0xC191410)));
            if (((*(int *)0xC23ED50) != 8) && ((t18 = *(int *)0xC23ED50, t18 != 19) && (t19 = *(int *)0xC23ED50, t19 != 29))) {
                t24 = t19;
            } else {
                FUN_0c0daf60(0x10, 0x10);
                FUN_0c0db0a0(0xE, 0xD);
                nlPrintf(0xC1A479C);
                t24 = (FUN_0c0daf60(0x8, 0x8));
            }
            t29 = t24;
        }
        t34 = t29;
    }
    if ((*(int *)0xC260CB8) != 0) {
        FUN_0c0d80c0(0x2008);
        if ((int)(*(int *)(((*(int *)0xC260CB8) + 0x8))) >= 0) {
            FUN_0c0cbe74(0x2, (*(int *)(((*(int *)0xC260CB8) + 0x8))), (*(int *)0xC4BFE28));
        }
        FUN_0c0bf908((*(int *)0xC260CB8));
        return FUN_0c0d80c0(0x0);
    }
    return t34;
}

int FUN_0c0dee40(int a4)
{
    int t0;
    int t63;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t10;
    int t1;
    int t2;
    int t6;
    int t8;
    int t11;
    int t12;
    int t13;
    int t14;
    int t43;
    int t44;
    int t39;
    int t40;
    int t29;
    int t30;
    int t27;
    int t56;
    int t57;
    int t58;
    int t49;
    int t52;
    int t53;
    int t54;
    int stk[12];

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = *(int *)((a4 + 0x0));
    t63 = 0x0;
    if (((int)t0 >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        t3 = t1;
        t4 = t0;
        t5 = 0x0;
        t7 = (a4 + 0x18);
        for (;;) {
            t9 = *(int *)((t7 + 0x20));
            t10 = t7;
            t7 = (t7 + 0x50);
            if (((int)t9 >= 0) && (t4 = 0xC948270, t11 = *(int *)0xC943D78, t3 = t11, t12 = *(int *)((t4 + 0x0)), t5 = t12, t8 = (t9 + t5), t8 = (t8 << 2), t8 = (t8 << 1), t3 = (t3 + t8), t13 = *(int *)((t3 + 0x0)), t2 = t13, t14 = (t9 + t5), t5 = 0x0, (unsigned int)t2 > (unsigned int)t5)) {
                t3 = (*(int *)0xC943D78);
                t3 = (t3 + t8);
                t2 = (*(int *)((t3 + 0x0)));
                t2 = (t2 - 1);
                *(unsigned int *)((t3 + 0x0)) = t2;
                t3 = (*(int *)0xC943D78);
                t3 = (t3 + t8);
                t2 = (*(int *)((t3 + 0x0)));
                if (t2 == 0) {
                    t2 = (*(int *)0xC943D78);
                    t2 = (t2 + t8);
                    t3 = (*(int *)((t2 + 0x4)));
                    *(unsigned int *)(((int)stk + 4)) = t3;
                    t3 = 0x3C;
                    t2 = (*(int *)(((int)stk + 4)));
                    t4 = (*(int *)0xC947AA8);
                    t6 = (t2 * t3);
                    t4 = (t4 + t6);
                    t2 = (*(int *)((t4 + 0x28)));
                    if (t2 == 0) {
                        t4 = 0xC21B088;
                        t2 = (kmFreeTexture(((*(int *)0xC947AA8) + t6)));
                        if (t2 != 0) {
                            t4 = 0x1;
                            *(unsigned int *)(((int)stk + 8)) = t4;
                            t27 = t4;
                        }
                        t30 = t27;
                    } else {
                        t29 = t3;
                        t30 = t4;
                    }
                    t3 = t29;
                    t4 = t30;
                    t5 = (*(int *)0xC947AA8);
                    t4 = 0x0;
                    t5 = (t5 + t6);
                    *(unsigned int *)((t5 + 0x2C)) = t4;
                    t5 = (*(int *)0xC947AA8);
                    t5 = (t5 + t6);
                    *(unsigned int *)((t5 + 0x38)) = 0xFFFFFFFF;
                    t5 = 0xC0D82A0;
                    t2 = (nlCommonTextureClearTextureIndex((*(int *)(((int)stk + 4)))));
                    t4 = (*(int *)0xC943D78);
                    t4 = (t4 + t8);
                    *(unsigned int *)((t4 + 0x4)) = 0xFFFFFFFF;
                } else {
                    t39 = t3;
                    t40 = t5;
                }
                t43 = t39;
                t44 = t40;
            } else {
                t43 = t3;
                t44 = t5;
            }
            t3 = t43;
            t4 = 0xC20CC50;
            t5 = t44;
            t5 = (*(int *)((t4 + 0x0)));
            if (t5 == 0) {
                t2 = (*(int *)((t10 + 0xC)));
                t5 = 0xFFFFFFE5;
                t2 = (((int)t5 >= 0) ? (t2 << (t5 & 31)) : ((-(int)t5 & 31) ? ((unsigned int)t2 >> (-(int)t5 & 31)) : 0));
                t5 = 0xC94C688;
                t3 = (*(int *)((t5 + 0x0)));
                if ((t3 != 0) && ((t49 = (0x7 & t2), t2 = (0x7 & t2), t2 == 5) || (t2 = t49, t2 == 6))) {
                    t5 = 0xC0D8660;
                    t2 = (nlFreePalette((*(int *)((t10 + 0x3C)))));
                } else {
                    t52 = t3;
                    t53 = t4;
                    t54 = t5;
                }
                t56 = t52;
                t57 = t53;
                t58 = t54;
            } else {
                t56 = t3;
                t57 = t4;
                t58 = t5;
            }
            t2 = 0x4C;
            t3 = t56;
            t4 = t57;
            t5 = t58;
            t4 = (*(int *)((t10 + t2)));
            t7 = (t7 + t4);
            if ((*(int *)((t7 + 0x0))) == 0) {
                break;
            }
        }
        t63 = (*(int *)(((int)stk + 8)));
    }
    return t63;
}

int FUN_0c0e4226(int a4, int a5, int a6)
{
    int t1;
    int t39;
    int t41;
    int t44;
    int t32;
    int t24;
    int t16;
    int t9;

    if (a5 != 0xA5) {
        if (a5 != 0xA6) {
            if (a5 != 0xA7) {
                if (a5 != 0x10A5) {
                    if ((a5 != 0x10A7) && ((a5 != 0x20A5) && ((a5 != 0x30A5) && (a5 != 0x40A5)))) {
                        t1 = 0xFFFFFFFE;
                        if (a5 != 0x50A5) {
                        } else {
                            t1 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0xF) << 16))));
                        }
                        t9 = t1;
                    } else {
                        t9 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
                    }
                    t16 = t9;
                } else {
                    t16 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0x7F) << 16))));
                }
                t24 = t16;
            } else {
                t24 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
            }
            t32 = t24;
        } else {
            t32 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1)))));
        }
        t44 = t32;
    } else {
        t39 = FUN_0c0e4428(((((a6 & 0x7F00) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
        t41 = t39;
        if (t39 != 0) {
        } else {
            t41 = (FUN_0c0e4428(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5)));
        }
        t44 = t41;
    }
    return t44;
}

int FUN_0c0e4b20(int a4)
{
    int t8;
    int t10;
    int t16;
    int t25;
    int t27;
    int t33;
    int t12;
    int t13;
    int t29;
    int t30;
    int stk[4];

    *(unsigned short *)(((((int)stk + 4) + 0xA) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 4)) = 0x0;
    if ((*(short *)(((int)stk + 14))) == 1) {
        *(unsigned short *)(((int)stk + 6)) = 0x0;
        for (;;) {
            if ((int)(*(short *)(((int)stk + 6))) >= (int)0x8) {
                if ((*(short *)(((int)stk + 4))) == 0) {
                    return 0xFFFFFFFF;
                }
                t8 = *(short *)(((int)stk + 6));
                *(unsigned char *)(((unsigned char)((((t8 << 1) + t8) << 2) << 1) + 0xC94C848)) = 0x1;
                return (*(short *)(((int)stk + 6)));
            }
            t10 = *(short *)(((int)stk + 6));
            if (((*(signed char *)(((unsigned char)((((t10 << 1) + t10) << 2) << 1) + 0xC94C848))) == 0) && (t12 = *(short *)(((int)stk + 6)), t13 = *(int *)(((unsigned char)((((t12 << 1) + t12) << 2) << 1) + 0xC94C850)), t13 == 0)) {
                break;
            }
            *(unsigned short *)(((int)stk + 6)) = ((*(short *)(((int)stk + 6))) + 0x1);
        }
        *(unsigned short *)(((int)stk + 4)) = 0x1;
        if ((*(short *)(((int)stk + 4))) == 0) {
            return 0xFFFFFFFF;
        }
        t16 = *(short *)(((int)stk + 6));
        *(unsigned char *)(((unsigned char)((((t16 << 1) + t16) << 2) << 1) + 0xC94C848)) = 0x1;
        return (*(short *)(((int)stk + 6)));
    }
    if ((*(short *)(((int)stk + 14))) == 2) {
        *(unsigned short *)(((int)stk + 6)) = 0x0;
        for (;;) {
            if ((int)(*(short *)(((int)stk + 6))) >= (int)0x8) {
                if ((*(short *)(((int)stk + 4))) == 0) {
                    return 0xFFFFFFFF;
                }
                t25 = *(short *)(((int)stk + 6));
                *(unsigned char *)(((unsigned char)((((t25 << 1) + t25) << 2) << 1) + 0xC94C848)) = 0x1;
                return (*(short *)(((int)stk + 6)));
            }
            t27 = *(short *)(((int)stk + 6));
            if (((*(signed char *)(((unsigned char)((((t27 << 1) + t27) << 2) << 1) + 0xC94C848))) == 0) && (t29 = *(short *)(((int)stk + 6)), t30 = *(int *)(((unsigned char)((((t29 << 1) + t29) << 2) << 1) + 0xC94C850)), t30 != 0)) {
                break;
            }
            *(unsigned short *)(((int)stk + 6)) = ((*(short *)(((int)stk + 6))) + 0x1);
        }
        *(unsigned short *)(((int)stk + 4)) = 0x1;
        if ((*(short *)(((int)stk + 4))) == 0) {
            return 0xFFFFFFFF;
        }
        t33 = *(short *)(((int)stk + 6));
        *(unsigned char *)(((unsigned char)((((t33 << 1) + t33) << 2) << 1) + 0xC94C848)) = 0x1;
        return (*(short *)(((int)stk + 6)));
    }
    return 0xFFFFFFFF;
}

int FUN_0c04e402(int a4, int a5)
{
    int t3;
    int t18;
    int t6;
    int t14;
    int t44;
    int t38;
    int t49;
    int t24;

    FUN_0c053c64(a4, 0x1);
    if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
        FUN_0c049b80(a4);
        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        t49 = 0x3AC;
    } else {
        t3 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t3 - 1);
        t18 = 0x3AC;
        if ((int)(t3 - 1) < 0) {
            t6 = 0x3AC;
            if (((*(int *)0xC23A1A8) & 0x100) == 0) {
                *(unsigned int *)((a4 + 0x20C)) = 0x800;
                t6 = 0x20C;
            }
            t14 = t6;
            if (((*(int *)((a5 + 0x0))) & 0x400) != 0) {
                *(unsigned int *)(((0x20C + a4) + 0x0)) = 0x40;
                *(unsigned int *)((a4 + 0x210)) = 0x7A;
                *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((((*(int *)((a4 + 0xC0))) << 2) << 2) + 0xC0F82AA) + 0x0)));
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x2D4)) = 0x1;
                if ((int)(*(int *)((a4 + 0x394))) >= 0) {
                    *(unsigned int *)((a4 + 0x394)) = 0x1;
                }
                t14 = 0x394;
            }
            t18 = t14;
        }
        t44 = t18;
        if ((((*(int *)((a5 + 0x0))) & 0x202) != 0) && (t24 = *(int *)((a5 + 0x8)), (t24 & 0x400) == 0)) {
            t38 = 0x394;
            if ((int)(*(int *)((a4 + 0x394))) >= 0) {
                if ((int)(*(int *)((a4 + 0x3AC))) > (int)0xFFFFFFF4) {
                    *(unsigned int *)((a4 + 0x20C)) = 0x80;
                    *(unsigned int *)((a4 + 0x210)) = 0x7C;
                    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((0xC0F82AA + (((*(int *)((a4 + 0xC0))) << 2) << 2)) + 0x2)));
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x2D4)) = 0x1;
                    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                }
                t38 = 0x3AC;
            }
            t44 = t38;
        }
        t49 = t44;
    }
    return t49;
}
