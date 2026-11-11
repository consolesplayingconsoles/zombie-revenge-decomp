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
int FUN_0c0154c0(int, int, int);
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
int FUN_0c0c0340(int);
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
int FUN_0c0e2a4c(int);
int FUN_0c0e4428(int);
int _modls(void);
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
int set_fat(int, int);
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
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o488_int { char p[0x488]; int v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o524_int { char p[0x524]; int v; };
struct o538_int { char p[0x538]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct o10_float { char p[0x10]; float v; };
struct o24_float { char p[0x24]; float v; };





int FUN_0c033850(int a4)
{
    int t0;
    int stk[16];

    t0 = (((struct o488_int *)(a4))->v);
    FUN_0c035828(a4, 0x400, 0x1, (((int)stk + 4) + 0x4), (((int)stk + 8) + 0x10), 1.5f, 0.0272199996f);
    if (((*(int *)(((int)stk + 8))) & 0x8000) != 0) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 24)));
    }
    if ((int)(*(int *)(((int)stk + 8))) < (int)0x1000) {
        *(unsigned int *)(((int)stk + 8)) = 0x1000;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX((*(int *)(((int)stk + 8))));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = -1.5f;
    FUN_0c0db470((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x14));
    (((struct oC_float *)(((int)stk + 8)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o8_float *)(((int)stk + 8)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o4_float *)(((int)stk + 8)))->v) = (*(float *)(((int)stk + 36)));
    (((struct o4B0_float *)(a4))->v) = (((((struct o4B0_float *)(a4))->v)) + ((((struct oC_float *)(((int)stk + 8)))->v)));
    (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + ((((struct o8_float *)(((int)stk + 8)))->v)));
    (((struct o4B8_float *)(a4))->v) = (((((struct o4B8_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 8)))->v)));
    nlPopMatrix(0x1);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o1EC_uint *)(t0))->v) = ((((struct o1EC_int *)(a4))->v));
    (((struct o200_uint *)(t0))->v) = 0x1;
    (((struct o1E8_uint *)(t0))->v) = 0x1;
    (((struct o1F4_uint *)(t0))->v) = 0xA;
    (((struct o204_uint *)(t0))->v) = 0x0;
    (((struct o1E4_float *)(t0))->v) = 3.0f;
    (((struct o1FC_uint *)(t0))->v) = 0x2;
    (((struct o1F8_uint *)(t0))->v) = 0x3;
    (((struct oD8_uint *)(t0))->v) = 0x0;
    return 0xD8;
}


int FUN_0c0a748e(int a4, int a5, int a6)
{
    int stk[18];
    float R1004;
    float R1008;
    float R1012;
    int R1016;
    int R1020;
    int R1024;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    R1024 = a4;
    R1016 = a5;
    R1020 = a6;
    nlPushMatrix(0x0);
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    R1012 = (*(float *)(((int)stk + 28)));
    R1008 = (*(float *)(((int)stk + 32)));
    R1004 = (*(float *)(((int)stk + 36)));
    FUN_0c0a7888((R1016), (R1020), (R1012), (R1008), (R1004));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    R1012 = (*(float *)(((int)stk + 28)));
    R1008 = (*(float *)(((int)stk + 32)));
    R1004 = (*(float *)(((int)stk + 36)));
    nlUnitMatrix();
    nlRotateAY((-(*(int *)(((R1016) + 0x0)))));
    nlRotateAZ((-(*(int *)(((R1020) + 0x0)))));
    *(float *)(((int)stk + 40)) = (R1012);
    *(float *)(((int)stk + 44)) = (R1008);
    *(float *)(((int)stk + 48)) = (R1004);
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    R1012 = (*(float *)(((int)stk + 28)));
    R1008 = (*(float *)(((int)stk + 32)));
    R1004 = (*(float *)(((int)stk + 36)));
    *(unsigned int *)(((R1024) + 0x0)) = (short)(FUN_0c0d9dc0((R1004), (R1008)));
    return (nlPopMatrix(0x1));
}






int FUN_0c02a432(int a4)
{
    int t;

    if (FUN_0c02a416(a4) != 0) {
        (((struct o538_int *)(a4))->v) = 0xA;
        (((struct o4F8_int *)(a4))->v) = 0;
        return 0x4F8;
    }
    if (FUN_0c03593a(a4) == 0) {
        (((struct o538_int *)(a4))->v) = 0x1;
        (((struct o50C_int *)(a4))->v) = 0;
        (((struct o524_int *)(a4))->v) = 0;
        (((struct o4F8_int *)(a4))->v) = FUN_0c0236ce(a4) != 0 ? 2 : 0;
        return 0x4F8;
    }
    t = FUN_0c02a35a(a4);
    if (t != 0) {
        switch (t) {
        case 1:
            (((struct o524_int *)(a4))->v) = 0;
            if (FUN_0c0236ce(a4) != 0) {
                (((struct o538_int *)(a4))->v) = 0x2;
                (((struct o4F8_int *)(a4))->v) = 0x2;
            } else {
                (((struct o4F8_int *)(a4))->v) = 0;
            }
            break;
        case 2:
            (((struct o538_int *)(a4))->v) = 0x2;
            (((struct o4F8_int *)(a4))->v) = 0x6;
            break;
        case 3:
            (((struct o538_int *)(a4))->v) = 0x2;
            (((struct o4F8_int *)(a4))->v) = 0xC;
            break;
        default:
            (((struct o538_int *)(a4))->v) = 0x2;
            (((struct o4F8_int *)(a4))->v) = 0;
            break;
        }
        return 0x4F8;
    }
    if (FUN_0c035b26(a4) != 0 && FUN_0c035ce4(a4) != 0) {
        (((struct o4F8_int *)(a4))->v) = 0x4;
        return 0x4F8;
    }
    t = (((struct o538_int *)(a4))->v);
    switch (t) {
    case 4:
    case 6:
    case 7:
    case 8:
        (((struct o4F8_int *)(a4))->v) = 0x2;
        return 0x4F8;
    case 1:
    case 3:
    case 5:
    case 10:
        (((struct o524_int *)(a4))->v) = 0;
        (((struct o4F8_int *)(a4))->v) = FUN_0c0236ce(a4) == 0 ? 0 : 2;
        return 0x4F8;
    case 2:
    case 9:
        (((struct o4F8_int *)(a4))->v) = 0;
        return 0x4F8;
    }
    return t;
}










int vmsfs_xwrite1(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
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
        t64 = 0xFFFFFF01;
        if (t5 != 0) {
            t64 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956770))) == 0) {
            } else {
                t9 = buIsFormat((*(int *)((a4 + 0x28))));
                t64 = 0xFFFFFF03;
                if ((int)t9 < 0) {
                } else {
                    t10 = *(int *)((a4 + 0x30));
                    t11 = *(int *)((a4 + 0x28));
                    t12 = get_fat(t11, t10);
                    t64 = 0xFFFFFF04;
                    if (((unsigned short)t12 == 0xFFFC) && (t13 = *(int *)((a4 + 0x30)), t14 = *(int *)((((t0 * 0x148) + 0xC956768) + 0x1C)), t15 = *(int *)((t14 + 0x38)), (int)t13 < (int)t15)) {
                        t16 = vmsfs_write_retry(t11, t10, a5);
                        t64 = t16;
                        if ((int)t16 < 0) {
                        } else {
                            set_fat(t11, t10);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t10;
                            } else {
                                set_fat(t11, (*(int *)((a4 + 0x3C))));
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t10;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t64 = 0x0;
                        }
                    }
                }
            }
        }
    }
    return t64;
}


int FUN_0c015fcc(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t16;
    int t31;
    int t34;
    int t35;
    int t49;
    int t18;
    int t32;
    int t40;
    int stk[9];

    t31 = (((struct o20_int *)0xC23EB14)->v);
    if (t31 != 0) {
        if (t31 != 1) {
            if (t31 != 2) {
            } else {
                (((struct o20_uint *)0xC23EB14)->v) = 0x9;
            }
            t49 = t31;
        } else {
            FUN_0c0154c0(((((struct oC_int *)0xC23EB14)->v)), 0x1, 0x2);
            t18 = (((struct o8_int *)0xC23EB14)->v);
            t49 = t18;
            if (t18 == 9) {
                if ((int)((((struct o10_int *)0xC23EB14)->v)) < 0) {
                    (((struct o20_uint *)0xC23EB14)->v) = (((((struct o20_int *)0xC23EB14)->v)) + 0x1);
                } else {
                    FUN_0c0e631c(0xC522A54, ((((struct o0_int *)0xC23EB14)->v)), 0x3E0);
                    FUN_0c0e631c(0xC20116C, 0xC522D94, 0x20);
                    FUN_0c0b70fe();
                    FUN_0c0e2a4c(((((struct o0_int *)0xC23EB14)->v)));
                    t16 = *(int *)0xC522D84;
                    *(unsigned int *)0xC23A1A4 = t16;
                    t18 = FUN_0c0c4e78(t16);
                    (((struct o20_uint *)0xC23EB14)->v) = 0x9;
                }
                t49 = t18;
            }
        }
    } else {
        t34 = 0xC0F40CC;
        t35 = 0x2;
        for (;;) {
            if ((int)t35 >= (int)0x6) {
                break;
            }
            t31 = (FUN_0c015436(((((struct oC_int *)0xC23EB14)->v)), t35, a6, a7));
            if ((int)(((((struct o10_int *)0xC23EB14)->v))) >= 0) {
                t31 = 0xC1EF2D4;
                t32 = (*(signed char *)((t34 + 0x0)));
                *(unsigned char *)((t32 + t31)) = 0x1;
                t40 = t32;
            }
            t32 = t40;
            t35 = (t35 + 0x1);
            t34 = (t34 + 0x1);
        }
        t49 = FUN_0c015436(((((struct oC_int *)0xC23EB14)->v)), 0x1, a6, a7);
        if ((int)((((struct o10_int *)0xC23EB14)->v)) < 0) {
            (((struct o20_uint *)0xC23EB14)->v) = 0x2;
        } else {
            (((struct o20_uint *)0xC23EB14)->v) = (((((struct o20_int *)0xC23EB14)->v)) + 0x1);
        }
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
    float s1;

    *(unsigned int *)(((int)stk + 12)) = a7;
    u0 = *(float *)0xC037084;
    u1 = (((struct o4_float *)(a5))->v);
    u2 = (((struct o4_float *)(a4))->v);
    u3 = *(float *)((a5 + 0x0));
    u4 = *(float *)((a4 + 0x0));
    u5 = (((struct o8_float *)(a5))->v);
    u6 = (((struct o8_float *)(a4))->v);
    u8 = ((u2 - u1) * (u2 - u1));
    u8 = u8 + (u4 - u3) * (u4 - u3);
    u9 = u8;
    u9 = u9 + (u6 - u5) * (u6 - u5);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0)))), (((((struct o4_float *)(a4))->v)) - ((((struct o4_float *)(a5))->v))), (((((struct o8_float *)(a4))->v)) - u5));
    u16 = (((struct oC_float *)(a5))->v);
    u17 = (u0 * ((((struct oC_float *)(a4))->v)));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    s1 = _builtin_sqrtf(u9);
    *(float *)(((int)stk + 36)) = ((u17 * u16) / (s1 * s1));
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    (((struct o24_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 16)));
    (((struct o4_float *)((((int)stk + 4) + 0x24)))->v) = (*(float *)(((int)stk + 20)));
    (((struct o8_float *)((((int)stk + 4) + 0x24)))->v) = (*(float *)(((int)stk + 24)));
    nlPopMatrix(0x1);
    *(float *)((a6 + 0x0)) = (((((struct o24_float *)(((int)stk + 4)))->v)) / ((((struct oC_float *)(a5))->v)));
    (((struct o4_float *)(a6))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x24)))->v)) / ((((struct oC_float *)(a5))->v)));
    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)((((int)stk + 4) + 0x24)))->v)) / ((((struct oC_float *)(a5))->v)));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = _builtin_sqrtf(((((u17 * u16) / (s1 * s1))) * ((((struct o10_float *)(a4))->v))));
    return s1;
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
    (((struct o234_uint *)(R4))->v) = 0xC20D792;
    R0 = (0x234);
    goto L_C20D39E;
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
    float s1;
    float s2;

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
    s1 = _builtin_sqrtf(u24);
    s2 = _builtin_sqrtf(u20);
    if (s1 > s2) {
        t25 = (((int)stk + 8) + 0x30);
    }
    *(float *)(((int)stk + 32)) = ((*(float *)((a4 + 0x0))) - (*(float *)((t25 + 0x0))));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = ((*(float *)((a4 + 0x8))) - (*(float *)((t25 + 0x8))));
    t31 = FUN_0c01e822(t25, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), 0x8, s2, s1, (u23 - u22));
    return (((t31 == 0)) ? 1 : 0);
}



int FUN_0c0e4226(int a4, int a5, int a6)
{
    int t39;
    int t44;

    if (a5 != 0xA5) {
        if (a5 != 0xA6) {
            if (a5 != 0xA7) {
                if (a5 != 0x10A5) {
                    if ((a5 != 0x10A7) && ((a5 != 0x20A5) && ((a5 != 0x30A5) && (a5 != 0x40A5)))) {
                        t44 = 0xFFFFFFFE;
                        if (a5 != 0x50A5) {
                        } else {
                            t44 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0xF) << 16))));
                        }
                    } else {
                        t44 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
                    }
                } else {
                    t44 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + ((a6 & 0x7F) << 16))));
                }
            } else {
                t44 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 + 0x40) & 0x7F) << 16))));
            }
        } else {
            t44 = (FUN_0c0e4428(((a5 + ((a4 & 0xF) << 8)) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1)))));
        }
    } else {
        t39 = FUN_0c0e4428(((((a6 & 0x7F00) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
        t44 = t39;
        if (t39 != 0) {
        } else {
            t44 = (FUN_0c0e4428(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5)));
        }
    }
    return t44;
}

