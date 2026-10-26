/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_ExecOneAdx(int);
int ADXB_ExecOneAiff16(int);
int ADXB_ExecOneAiff8(int);
int ADXB_ExecOneAu16(int);
int ADXB_ExecOneAu8(int);
int ADXB_ExecOneAuUlaw(int);
int ADXB_ExecOneSpsd(int);
int ADXB_ExecOneWav16(int);
int ADXB_ExecOneWav4(int);
int ADXB_ExecOneWav8(int);
int ADX_GetCoefficient(int, int, int, int);
int FUN_0c019a5c(void);
int FUN_0c033530(int, int, int);
int FUN_0c096d6c(void);
int FUN_0c0c3ef8(int);
int FUN_0c0c47ae(int);
int FUN_0c0ce486(void);
int nlMultiMatrixRevOrder(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int nlAddVector(int, int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e4aa8(int);
int FUN_0c0e4f04(int, int);
int FUN_0c0e4fbe(int, int);
int FUN_0c0e505a(int, int);
int FUN_0c0e509a(int, int, int);
int _quick_evn_mvn(void);
int _quick_odd_mvn(int, int, int);
int FUN_0c0e62e0(int, int, int);
int setjmp(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c235d04(int);
int FUN_0c235ea4(int, int);
int kmSetFogDensity(int);
int longjmp(int, int);
int memset(int, int, int);
int FUN_0c0211a0(void);
int FUN_0c01993e(int a4);
int FUN_0c022a64(int a4);
int FUN_0c02a220(int a4);
int FUN_0c090638(int a4);
int FUN_0c0336d6(int a4, int a5, int a6);
int FUN_0c0b464a(float f4, float f5);
int FUN_0c09b470(int a4);
void FUN_0c0c99d0(int a4);
int FUN_0c0bb250(int a4, int a5, int a6, int a7);
int FUN_0c0d37e8(void);
int FUN_0c0da920(void);
int FUN_0c0db1e0(float f4);
int FUN_0c0c4322(int a4);
int FUN_0c0e1dfe(int a4, int a5);
int FUN_0c232e00(int a4);
int FUN_0c2334c8(int a4, int a5, int a6);
int buFbrSleepFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int syIntAdrChk_printh(int a4, int a5);
int syIntAdrChk_getchar(int a4, int a5);
int FUN_0c2344ba(int a4);
int ADXB_CheckWav(int a4);
int ADXB_CheckAu(int a4);
int buFbrKillFiber(int a4, int a5);
int SJ_SplitChunk(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav(int a4);
int ADXPD_ExecServer(void);
int FUN_0c233506(int a4, int a5, int a6);
int FUN_0c23370e(int a4, int a5);
int _destructFiber(int a4, int a5);
int FUN_0c2335a8(int a4, int a5);
int buFbrInit(void);
int ADXPD_EntryMono(int a4, int a5, int a6, int a7);
int ADXPD_EntrySte(int a4, int a5, int a6, int a7, int a8);
void buFbrWakeupFiber(int a4, int a5);
int ADXB_ExecOneAu(int a4);
int FUN_0c2337e6(int a4, int a5);
int syG2DmaResume(int a4);
int FUN_0c233d88(int a4);
int FUN_0c233800(int a4, int a5, int a6);
int ADXPD_SetCoef(int a4, int a5, int a6);
int ADXPD_Stop(int a4);
int FUN_0c233dbc(int a4, int a5);
int ADXB_CheckSpsd(int a4);
void ADXPD_Destroy(int a4);
void ADXPD_Start(int a4);
int ADXB_ExecOneAiff(int a4);
int FUN_0c233a38(int a4);
int FUN_0c233d54(int a4);
int FUN_0c233da8(int a4);
int ADXPD_Reset(int a4);
int FUN_0c233818(int a4, int a5, int a6);
int FUN_0c235bb8(void);
void FUN_0c235ce4(void);
int FUN_0c233774(void);
void FUN_0c233a46(void);
void FUN_0c233a4a(void);
void ADXPD_SetMode(int a4, int a5);
int ADXPD_GetStat(int a4);
int FUN_0c235ce0(int a4);

int FUN_0c0211a0(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t0;
    int t1;

    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = *(short *)(((0xC2460F4 + t2) + 0x4));
        t5 = (unsigned short)t4;
        if ((unsigned short)t4 == 2) {
            t0 = 0x80;
            t0 = (t0 + 0xC246074);
            t0 = (t0 + t3);
            t1 = 0x80;
            *(unsigned short *)((t0 + 0x4)) = 0x3;
            t1 = (t1 + 0xC246074);
            t1 = (t1 + t3);
            *(unsigned int *)((t1 + 0x8)) = 0x2;
            t5 = 0x3;
        }
        t2 = (t2 + 0x10);
        t3 = (t3 + 0x10);
        if ((unsigned int)t2 >= (unsigned int)0x200) {
            break;
        }
    }
    *(unsigned int *)0xC246308 = 0x1;
    return t5;
}

int FUN_0c01993e(int a4)
{
    int t0;
    int t11;

    t0 = *(int *)0xC23ED9C;
    if ((t0 != 7) && ((t0 != 4) && (t0 != 25))) {
        return FUN_0c019a5c();
    }
    if (((*(int *)0xC23A258) & 31) == 0) {
        *(unsigned int *)0xC23F244 = ((*(int *)0xC23F244) ^ 0x1);
    }
    t11 = ((int (*)(int, int))((*(int *)((((*(int *)0xC23F21C) << 2) + 0xC1EFA4C)))))(a4, 0xC23F1AC);
    return FUN_0c0ce486();
}

int FUN_0c022a64(int a4)
{
    float u1;

    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
    u1 = *(float *)0xC022B88;
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x60))) * u1);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x64))) * u1);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x68))) * u1);
    return nlAddVector((a4 + 0x48), (0x4B0 + a4));
}

int FUN_0c02a220(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x2F4));
    if (((t0 & 0xFFF0) != 0) && ((t0 & 0xFFF0) != 0x100)) {
        if ((t0 & 0xFFF0) != 0x200) {
            
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        }
    } else {
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x55C)) = 0x0;
    return 0x55C;
}

int FUN_0c090638(int a4)
{
    int t6;
    int t2;

    t6 = 0xC8;
    if (((*(int *)((a4 + 0xC8))) & 0x1FC) != 0) {
        t2 = FUN_0c0e19aa(0xC090450, 0x4C, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0x30)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t2 + 0x34)) = (*(int *)((a4 + 0x498)));
        *(float *)((t2 + 0x44)) = 1.5f;
        t6 = 0x44;
    }
    return t6;
}

int FUN_0c0336d6(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(volatile int *)(((*(int *)(((int)stk + 4))) + 0xBC));
    _quick_odd_mvn(a4, a5, a6);
    t4 = *(int *)(((int)stk + 8));
    t5 = *(short *)(((*(int *)(((int)stk + 4))) + 0x6E));
    *(volatile int *)(((int)stk + 12));
    return (FUN_0c033530((((int)stk + 4) + 0xC), t5, t4));
}

int FUN_0c0b464a(float f4, float f5)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B46E0, 0xB4);
    FUN_0c0e19d0(t0);
    *(float *)((t0 + 0x30)) = f4;
    *(float *)((t0 + 0x38)) = f5;
    *(float *)((t0 + 0x34)) = -11.0f;
    *(float *)((t0 + 0x74)) = 3.0f;
    return 0x74;
}

int FUN_0c09b470(int a4)
{
    int t1;
    int t4;

    t1 = FUN_0c0e19aa(0xC09A9C8, 0x8BC, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x34)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t1 + 0x30)) = a4;
    t4 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x44)) = (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)));
    *(unsigned int *)((t1 + 0x48)) = (*(int *)((a4 + 0x388)));
    return FUN_0c096d6c();
}

void FUN_0c0c99d0(int a4)
{
    float u0;
    float u2;

    if ((int)a4 >= 0) {
        u0 = *(float *)0xC0C9AC4;
        *(float *)0xC20A224 = (((float)a4 * u0) + (*(float *)0xC0C9AC8));
        u2 = *(float *)0xC0C9ACC;
        nlScale((((float)a4 * u0) + u2), (((float)a4 * u0) + u2), (((float)a4 * u0) + u2));
        nlMultiMatrixRevOrder(0xC20A1EC);
    return;
    }
}

int FUN_0c0bb250(int a4, int a5, int a6, int a7)
{
    FUN_0c0dcca0(a5);
    nlRotateAZ((-(*(short *)((a6 + 0x0)))));
    nlRotateAY((-(*(short *)(((a6 + 0x2) + 0x0)))));
    nlRotateAX((*(short *)((((a6 + 0x2) + 0x2) + 0x0))));
    FUN_0c0de000((*(float *)((a4 + 0x280))));
    return FUN_0c0c47ae((*(int *)((a7 + 0x0))));
}

int FUN_0c0d37e8(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0D382A, 0x74);
    *(unsigned int *)0xC943508 = t0;
    FUN_0c0e19d0(t0);
    *(float *)((t0 + 0x44)) = (*(float *)0xC0D38E8);
    *(float *)((t0 + 0x4C)) = 1.0f;
    *(float *)((t0 + 0x50)) = 1.0f;
    *(float *)((t0 + 0x60)) = 1.0f;
    *(float *)((t0 + 0x5C)) = 1.0f;
    *(float *)((t0 + 0x68)) = 1.0f;
    *(unsigned int *)((t0 + 0x6C)) = 0xFFFFFFFF;
    return 0x6C;
}

int FUN_0c0da920(void)
{
    int t0;
    int t4;
    int t5;

    t0 = *(int *)0xC944234;
    t4 = ((0x1 & t0) & 0x1);
    t5 = *(int *)0xC944238;
    *(unsigned int *)0xC944210 = (((((((int)(((unsigned int)t4 >> 1) | ((unsigned int)t4 << 31))) | ((0x8 & t0) << 27)) | ((*(int *)0xC944224) & 0x38000000)) | ((((~t0) & 0x4) << 16) << 8)) | ((0x10 & t0) << 21)) | ((unsigned int)((unsigned int)t5 >> 2) >> 1));
    return ((unsigned int)((unsigned int)t5 >> 2) >> 1);
}

int FUN_0c0db1e0(float f4)
{
    int t0;
    int t1;
    int t2;
    int stk[4];

    *(float *)(((int)stk + 4)) = f4;
    t0 = *(int *)((((int)stk + 4) + 0x0));
    t1 = (((int)t0 >> 23) - 127);
    t2 = (unsigned char)((short)((unsigned int)t0 >> 16) | 0x80);
    if ((int)(((int)t0 >> 23) - 127) < 0) {
        t1 = 0x0;
        t2 = (((int)(-(-(((int)t0 >> 23) - 127))) >= 0) ? ((unsigned char)((short)((unsigned int)t0 >> 16) | 0x80) << ((-(-(((int)t0 >> 23) - 127))) & 31)) : ((-(int)(-(-(((int)t0 >> 23) - 127))) & 31) ? ((int)(unsigned char)((short)((unsigned int)t0 >> 16) | 0x80) >> (-(int)(-(-(((int)t0 >> 23) - 127))) & 31)) : ((int)(unsigned char)((short)((unsigned int)t0 >> 16) | 0x80) >> 31)));
    }
    kmSetFogDensity(((t2 << 8) | (unsigned char)t1));
    return ((t2 << 8) | (unsigned char)t1);
}

int FUN_0c0c4322(int a4)
{
    int t0;
    int t3;
    int t1;
    int t5;
    int t11;
    int t6;
    int t7;

    t0 = *(int *)0xC23A180;
    t3 = 0xC15245C;
    if (t0 != 2) {
        t1 = 0xC1532AC;
        if (t0 != 1) {
            t1 = 0xC15244C;
        }
        t3 = t1;
    }
    t5 = *(int *)(((a4 << 2) + t3));
    t11 = t3;
    if (t5 != 0) {
        t6 = t3;
        t7 = t5;
        for (;;) {
            if ((*(int *)((t7 + 0x0))) == 0) {
                break;
            }
            t6 = (FUN_0c0c3ef8((*(int *)((t7 + 0x0)))));
            t7 = (t7 + 0x8);
        }
        t11 = t6;
    }
    return t11;
}

int FUN_0c0e1dfe(int a4, int a5)
{
    int t1;
    int t19;

    if ((*(int *)((a4 + 0x1C))) != 0) {
        t1 = *(int *)((a4 + 0x1C));
        *(unsigned short *)((t1 + 0x2C)) = ((*(short *)((t1 + 0x2C))) - 1);
        if ((*(short *)(((*(int *)((a4 + 0x1C))) + 0x2C))) == 0) {
            *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x20)) = 0x0;
        } else {
            if ((*(int *)(((*(int *)((a4 + 0x1C))) + 0x20))) == a4) {
                *(unsigned int *)(((*(int *)((a4 + 0x1C))) + 0x20)) = (*(int *)((a4 + 0x24)));
            }
        }
        *(unsigned int *)((a4 + 0x1C)) = 0x0;
        t19 = 0x2C;
    }
    *(unsigned int *)(((*(int *)((a4 + 0x24))) + 0x28)) = (*(int *)((a4 + 0x28)));
    *(unsigned int *)(((*(int *)((a4 + 0x28))) + 0x24)) = (*(int *)((a4 + 0x24)));
    *(unsigned int *)((a4 + 0x28)) = a4;
    *(unsigned int *)((a4 + 0x24)) = a4;
    return t19;
}

int FUN_0c232e00(int a4)
{
    int t14;

    if ((*(short *)((a4 + 0xA8))) != 0) {
        if ((*(short *)((a4 + 0xA8))) == 2) {
            return ADXB_ExecOneSpsd(a4);
        }
        if ((*(short *)((a4 + 0xA8))) == 3) {
            return ADXB_ExecOneAiff(a4);
        }
        if ((*(short *)((a4 + 0xA8))) == 4) {
            return ADXB_ExecOneAu(a4);
        }
        t14 = *(short *)((a4 + 0xA8));
        if (t14 == 1) {
            return ADXB_ExecOneWav(a4);
        }
        return t14;
    }
    return ADXB_ExecOneAdx(a4);
}

int FUN_0c2334c8(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = FUN_0c233800(a4, 0x9, 0x0);
    *(unsigned int *)((a5 + 0x0)) = t0;
    *(unsigned short *)(((0x48 + a4) + 0x0)) = t0;
    t1 = FUN_0c233800(a4, 0xA, 0x0);
    *(unsigned int *)((a6 + 0x0)) = t1;
    *(unsigned short *)(((0x4A + a4) + 0x0)) = t1;
    return 0x0;
}

int buFbrSleepFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t1;
    int t5;
    int t9;
    int t12;

    t1 = *(int *)(((*(int *)0xC990CB0) + 0xD78));
    t5 = 0x7FFFFFFF;
    if ((int)a4 >= 0) {
        t5 = ((*(int *)(((*(int *)0xC990CB0) + 0x204))) + a4);
    }
    *(unsigned int *)((t1 + 0x14)) = t5;
    t9 = setjmp(((*(int *)(((*(int *)0xC990CB0) + 0xD78))) + 0x18), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    t12 = t9;
    if (t9 == 0) {
        t12 = (longjmp(((*(int *)0xC990CB0) + 0x4), 0x1));
    }
    return t12;
}

int syIntAdrChk_printh(int a4, int a5)
{
    int t0;
    int t1;
    int t3;

    t0 = 0x1C;
    for (;;) {
        t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x30);
        if ((int)(unsigned char)(0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) >= (int)0xA) {
            t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x37);
        }
        t3 = FUN_0c235ea4(t1, a5);
        t0 = (t0 - 4);
        if ((int)t0 < 0) {
            break;
        }
    }
    return t3;
}

int syIntAdrChk_getchar(int a4, int a5)
{
    int t0;
    int t11;
    int t7;
    int t13;
    int t20;

    t0 = *(int *)0xC990E64;
    if (t0 != 0) {
        t11 = a5;
        if (t0 != 1) {
        } else {
            t7 = a5;
            if (((unsigned char)(*(signed char *)((((*(int *)0xC990E5C) + 0x1C) + 0x0))) & 0x4) == 4) {
                t7 = 0xD;
            }
            t11 = t7;
        }
        t20 = t11;
    } else {
        t13 = *(int *)0xC990E60;
        for (;;) {
            if ((unsigned char)(*(short *)((t13 + 0x1C))) != 0) {
                break;
            }
        }
        t20 = (*(signed char *)(((t13 + 0x14) + 0x0)));
    }
    return t20;
}

int FUN_0c2344ba(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0e62e0(a4, 0xC238B44, 0x4);
    if (t0 == 0) {
        t1 = FUN_0c0e62e0((a4 + 0x8), 0xC238B4C, 0x4);
        if (t1 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ADXB_CheckWav(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0e62e0(a4, 0xC238B68, 0x4);
    if (t0 == 0) {
        t1 = FUN_0c0e62e0((a4 + 0x8), 0xC238B70, 0x4);
        if (t1 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ADXB_CheckAu(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0e62e0(a4, 0xC238B54, 0x4);
    if (t0 != 0) {
        t1 = FUN_0c0e62e0(a4, 0xC238B5C, 0x4);
        if (t1 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int buFbrKillFiber(int a4, int a5)
{
    if ((*(int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC))) == 1) {
        buFbrWakeupFiber(a4, a5);
        *(unsigned int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC)) = 0x2;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int SJ_SplitChunk(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = _quick_evn_mvn();
    *(unsigned int *)((a7 + 0x4)) = (*(int *)((a6 + 0x4)));
    if ((int)(*(int *)((a6 + 0x4))) > (int)a5) {
        *(unsigned int *)((a6 + 0x4)) = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a6 + 0x0))) + (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a7 + 0x4)) = ((*(int *)((a7 + 0x4))) - (*(int *)((a6 + 0x4))));
    return t0;
}

int ADXB_ExecOneWav(int a4)
{
    if ((*(short *)((a4 + 0xAA))) == 2) {
        return ADXB_ExecOneWav4(a4);
    }
    if ((*(short *)((a4 + 0xAA))) == 1) {
        return ADXB_ExecOneWav8(a4);
    }
    if ((*(short *)((a4 + 0xAA))) == 0) {
        return ADXB_ExecOneWav16(a4);
    }
    return 0xAA;
}

int ADXPD_ExecServer(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0xC990CBC;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (FUN_0c235d04(t0));
        }
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xC990E5C) {
            break;
        }
    }
    return t3;
}

int FUN_0c233506(int a4, int a5, int a6)
{
    *(unsigned int *)((a6 + 0x0)) = (FUN_0c0e4aa8((*(short *)((a4 + 0x2)))));
    return 0x0;
}

int FUN_0c23370e(int a4, int a5)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8)) = (*(signed char *)(((int)stk + 4)));
    FUN_0c0e4f04((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x10))) + 0x4))), (*(signed char *)(((int)stk + 4))));
    return 0x0;
}

int _destructFiber(int a4, int a5)
{
    int t2;

    *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x0;
    if ((*(int *)((a5 + 0x118))) != 0) {
        t2 = *(int *)((a5 + 0x118));
        return ((int (*)(int, int))(t2))(a4, a5);
    }
    return 0x118;
}

int FUN_0c2335a8(int a4, int a5)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    FUN_0c0e505a((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x10))) + 0x4))), (*(signed char *)(((int)stk + 8))));
    return 0x0;
}

int buFbrInit(void)
{
    memset(0xC98F1B8, 0x0, 0x1AF8);
    *(unsigned int *)0xC990CB0 = 0x0;
    *(unsigned int *)0xC990CB4 = 0x0;
    *(unsigned int *)0xC990CB8 = 0x0;
    return 0xC990CB8;
}

int ADXPD_EntryMono(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((a4 + 0xC))) == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int ADXPD_EntrySte(int a4, int a5, int a6, int a7, int a8)
{
    if ((*(int *)((a4 + 0xC))) == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x2;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = a8;
        return 0x1;
    }
    return 0x0;
}

void buFbrWakeupFiber(int a4, int a5)
{
    if ((*(int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC))) != 0) {
        *(unsigned int *)((((a5 * 0x124) + (0x210 + a4)) + 0x14)) = (*(int *)((a4 + 0x204)));
    }
}

int ADXB_ExecOneAu(int a4)
{
    if ((*(short *)((a4 + 0xAA))) == 2) {
        return ADXB_ExecOneAuUlaw(a4);
    }
    if ((*(short *)((a4 + 0xAA))) == 1) {
        return ADXB_ExecOneAu8(a4);
    }
    return ADXB_ExecOneAu16(a4);
}

int FUN_0c2337e6(int a4, int a5)
{
    FUN_0c0e4fbe((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), a5);
    return 0x0;
}

int syG2DmaResume(int a4)
{
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC239F3C) + 0x0)))) + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c233d88(int a4)
{
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC239F3C) + 0x0)))) + 0x1C)) = 0x1;
    return 0x0;
}

int FUN_0c233800(int a4, int a5, int a6)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a6;
    return FUN_0c0e509a((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x10))) + 0x4))), a5, (*(signed char *)(((int)stk + 8))));
}

int ADXPD_SetCoef(int a4, int a5, int a6)
{
    return ADX_GetCoefficient(a6, a5, (a4 + 0x30), ((a4 + 0x30) + 0x2));
}

int ADXPD_Stop(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    return memset((a4 + 0x28), 0x0, 0x8);
}

int FUN_0c233dbc(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = a4;
    t1 = a5;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t1 = (t1 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) & 0xFFFF0000) | ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) & 0xFF) << 8) | ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) >> 8) & 0xFF));
        t0 = (t0 + 0x4);
        if (t1 == 0) {
            break;
        }
    }
    return 0x0;
}

int ADXB_CheckSpsd(int a4)
{
    int t0;

    t0 = FUN_0c0e62e0(a4, 0xC238B60, 0x4);
    return (((t0 == 0)) ? 1 : 0);
}

void ADXPD_Destroy(int a4)
{
    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        memset(a4, 0x0, 0x34);
    return;
    }
}

void ADXPD_Start(int a4)
{
    if ((*(int *)((a4 + 0xC))) == 0) {
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x1;
    }
}

int ADXB_ExecOneAiff(int a4)
{
    if ((*(short *)((a4 + 0xAA))) == 1) {
        return ADXB_ExecOneAiff8(a4);
    }
    return ADXB_ExecOneAiff16(a4);
}

int FUN_0c233a38(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((a4 + 0x4C)));
    *(unsigned char *)((a4 + 0x4C)) = 0x0;
    return 0x4C;
}

int FUN_0c233d54(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((((*(int *)0xA05F688C) & 1) == 0)) ? 1 : 0);
    return 0x0;
}

int FUN_0c233da8(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((((*(int *)0xA05F688C) & 16) == 0)) ? 1 : 0);
    return 0x0;
}

int ADXPD_Reset(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 3) {
        *(unsigned int *)((a4 + 0xC)) = 0x0;
    }
    return t0;
}

int FUN_0c233818(int a4, int a5, int a6)
{
    int stk[2];

    *(unsigned char *)(((int)stk + 4)) = a6;
    return FUN_0c0e509a(a4, a5, (*(signed char *)(((int)stk + 4))));
}

int FUN_0c235bb8(void)
{
    return memset(0xC990CBC, 0x0, 0x1A0);
}

void FUN_0c235ce4(void)
{
    *(unsigned int *)0xC23A16C = 0x1;
}

int FUN_0c233774(void)
{
    return 0x0;
}

void FUN_0c233a46(void)
{
    
}

void FUN_0c233a4a(void)
{
    
}

void ADXPD_SetMode(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

int ADXPD_GetStat(int a4)
{
    return (*(int *)((a4 + 0xC)));
}

int FUN_0c235ce0(int a4)
{
    return (*(int *)((a4 + 0x10)));
}
