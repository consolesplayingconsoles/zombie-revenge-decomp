/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f172(int);
int FUN_0c02286c(int, int, float, float);
int FUN_0c022aa6(int);
int FUN_0c02a19a(int);
int FUN_0c032ae6(int);
int FUN_0c034c26(int);
int FUN_0c034d0c(int);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c036806(int, int, int, int, int, int, int);
int FUN_0c0558f8(int);
int FUN_0c05664c(int, int, int, int);
int FUN_0c0567c0(int);
int FUN_0c056928(int);
int FUN_0c057c50(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c06c89c(int, int, int, float, float);
int FUN_0c078d6e(void);
int FUN_0c078d72(int, int);
int FUN_0c0845f8(int, int);
int FUN_0c08463a(int, int);
int FUN_0c08467c(int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c5d32(int);
int FUN_0c0d3f0c(int);
int FUN_0c0d6a64(void);
float FUN_0c0d7114(int, int);
int FUN_0c0d9bd0(float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
float nlLength(int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int _quick_evn_mvn(void);
int FUN_0c0e6118(void);
int _quick_odd_mvn(int);
extern float _builtin_sqrtf(float);
int FUN_0c056e8e(int a4, int a5, int a6, int a7);
int FUN_0c0349ea(int a4, int a5, int a6);
int FUN_0c0d41c6(void);
int FUN_0c057014(int a4, int a5, int a6, int a7);
void FUN_0c098cfa(int a4, int a5, float f4, float f5);
int kmChangeContextSRCBlendMode(int a4);
int FUN_0c06c938(int a4);
int FUN_0c057aa8(int a4);
int FUN_0c074bb2(int a4);
float FUN_0c0d6fae(int a4, int a5, int a6);
int FUN_0c02761e(int a4);
int FUN_0c02750a(int a4, float f4);
int FUN_0c0c60d0(int a4, int a5, int a6);
int FUN_0c025b9a(int a4, float f4);
int FUN_0c06816c(int a4);
int FUN_0c070a42(int a4, int a5, int a6, int a7);
int FUN_0c0a760e(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0329ae(int a4, int a5);
int FUN_0c07918a(int a4, int a5, int a6, int a7);

int FUN_0c056e8e(int a4, int a5, int a6, int a7)
{
    int t2;
    int t21;
    float t25;
    int t33;
    int t22;

    FUN_0c05664c(a4, a5, a6, a7);
    t2 = *(int *)((0xC247604 + ((*(int *)((a4 + 0xBC))) << 2)));
    if ((t2 != 2) && (t2 != 1)) {
        if (t2 != 11) {
            if (t2 != 6) {
                if (t2 == 3) {
                    FUN_0c0567c0(a4);
                } else {
                    if (t2 == 4) {
                        FUN_0c056928(a4);
                    }
                }
                return FUN_0c057aa8(a4);
            }
            if ((*(int *)((a4 + 0x260))) != 0) {
                *(unsigned int *)((a4 + 0x21C)) = ((*(int *)((a4 + 0x21C))) - 1);
                t21 = *(int *)((a4 + 0x224));
                *(unsigned int *)((a4 + 0x224)) = (t21 - 1);
                if (((int)(t21 - 1) > 0) && (t22 = *(int *)((a4 + 0x21C)), t22 != 0)) {
                    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0xB;
                    *(unsigned short *)((a4 + 0x6C)) = 0x0;
                    *(unsigned int *)((a4 + 0x260)) = 0x0;
                    return 0x260;
                }
                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0x7;
                *(unsigned int *)((a4 + 0x25C)) = 0x3C;
                return 0x25C;
            }
            return 0x260;
        }
        t25 = FUN_0c01f172(a4);
        if (t25 > (*(float *)0xC056FF0)) {
            *(float *)((a4 + 0x34)) = (t25 + (*(float *)((a4 + 0x258))));
        }
        FUN_0c057c50(a4);
        t33 = *(int *)((a4 + 0x248));
        *(unsigned int *)((a4 + 0x248)) = (t33 + 0x100);
        *(unsigned short *)((a4 + 0x6E)) = (int)((FUN_0c0da410((t33 + 0x100))) * (*(float *)0xC056FF8));
        if (((*(int *)0xC23ED5C) & 0x40000) != 0) {
            FUN_0c0558f8(a4);
            FUN_0c0e19f2();
        }
        return FUN_0c057aa8(a4);
    }
    *(unsigned int *)((a4 + 0x260)) = 0x0;
    return FUN_0c057aa8(a4);
}

int FUN_0c0349ea(int a4, int a5, int a6)
{
    int t9;
    int t11;
    int t12;
    int t13;
    int t24;
    int t39;
    int stk[20];

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
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C0349EA:;
    R10 = (0xC23F268);
    R11 = (R6);
    R13 = (R5);
    R14 = (R4);
    if (((*(int *)((R4 + 0x508))) != 0)) goto L_C034A7C;
    goto L_C034A08;
    L_C034A08:;
    if (((*(int *)((R14 + 0x50C))) != 0)) goto L_C034A18;
    goto L_C034A10;
    L_C034A10:;
    t9 = (FUN_0c034c26(R14)) == 0;
    if (t9) goto L_C034B06;
    goto L_C034A18;
    L_C034A18:;
    t11 = *(int *)((((*(int *)((R14 + 0x510))) << 2) + 0xC246FF0));
    t12 = *(int *)((R14 + 0xBC));
    t13 = *(int *)((t11 + 0xBC));
    R12 = (t11);
    R4 = (((((((t12 << 1) + t12) << 2) << 2) << 2) + R10));
    R5 = (((((((t13 << 1) + t13) << 2) << 2) << 2) + R10));
    goto L_C034A9A;
    L_C034A9A:;
    *(float *)(((int)stk + 44)) = ((*(float *)((R5 + 0x0))) - (*(float *)((R4 + 0x0))));
    *(float *)(((int)stk + 48)) = ((*(float *)((R5 + 0x4))) - (*(float *)((R4 + 0x4))));
    *(float *)(((int)stk + 52)) = ((*(float *)((R5 + 0x8))) - (*(float *)((R4 + 0x8))));
    t24 = FUN_0c036806(R4, (((int)stk + 4) + 0x28), 0xA5E, (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x18), (((int)stk + 12) + 0x4), (R11));
    *(unsigned int *)((R13 + 0x0)) = t24;
    if ((t24 != 4)) goto L_C034AF6;
    goto L_C034AE0;
    L_C034AE0:;
    if (((*(int *)((R14 + 0x508))) != 0)) goto L_C034AF6;
    goto L_C034AE8;
    L_C034AE8:;
    if (((*(int *)((R12 + 0xBC))) != (*(int *)((R11 + 0x0))))) goto L_C034AF6;
    goto L_C034AF2;
    L_C034AF2:;
    *(unsigned int *)((R13 + 0x0)) = 0x0;
    goto L_C034AF6;
    L_C034AF6:;
    if (((*(int *)((R13 + 0x0))) == 0)) goto L_C034B0A;
    goto L_C034AFC;
    L_C034AFC:;
    if (((*(int *)((R13 + 0x0))) == 4)) goto L_C034B06;
    goto L_C034B02;
    L_C034B02:;
    *(unsigned int *)((R11 + 0x0)) = 0xFFFFFFFF;
    goto L_C034B06;
    L_C034B06:;
    R0 = (0x0);
    goto L_C034B0C;
    L_C034B0C:;
    return R0;
    L_C034B0A:;
    R0 = (0x1);
    goto L_C034B0C;
    L_C034A7C:;
    if (((*(int *)((R14 + 0x514))) == 0)) goto L_C034B06;
    goto L_C034A84;
    L_C034A84:;
    t39 = *(int *)((R14 + 0xBC));
    R4 = (((((((t39 << 1) + t39) << 2) << 2) << 2) + R10));
    R5 = ((0x518 + R14));
    goto L_C034A9A;
}

int FUN_0c0d41c6(void)
{
    int t2;
    int t33;
    int stk[10];

    _quick_evn_mvn();
    _quick_evn_mvn();
    t2 = 0x0;
    for (;;) {
        FUN_0c0d3f0c(t2);
        *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x0;
        if ((*(int *)0xC943400) != 2) {
            if ((*(int *)0xC943400) == 0) {
                if (t2 == (0x1 - (*(int *)0xC23A1BC))) {
                    *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
                }
            }
        } else {
            *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
        }
        *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x8)) = t2;
        if ((*(int *)(((t2 << 2) + 0xC23EDC0))) == 4) {
            *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x0;
        } else {
            if ((*(int *)(((t2 << 2) + 0xC23EDC0))) == 0) {
                *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x1;
            } else {
                *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x2;
            }
        }
        *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x40)) = 0x1;
        *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x54)) = 0x10000;
        *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x6C)) = (*(int *)((((t2 << 2) + 0xC246FF0) + 0x0)));
        *(unsigned int *)((((t2 * 0x1D4) + 0xC9436B4) + 0x70)) = (*(int *)(((((0x1 - t2) << 2) + 0xC246FF0) + 0x0)));
        *(unsigned int *)(((int)stk + 4)) = (0xC943574 + ((((t2 << 2) + t2) << 2) << 2));
        FUN_0c0e6118();
        *(volatile int *)(((int)stk + 4));
        FUN_0c0e6118();
        FUN_0c0da2e0();
        t33 = ((t2 * 0x1D4) + 0xC9436B4);
        t2 = (t2 + 0x1);
        *(unsigned int *)(((0x68 + t33) + 0x0)) = (FUN_0c0e5f1c());
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return FUN_0c0d6a64();
}

int FUN_0c057014(int a4, int a5, int a6, int a7)
{
    int t2;
    int t19;
    int t26;
    float t27;
    int t34;

    FUN_0c05664c(a4, a5, a6, a7);
    t2 = *(int *)((0xC247604 + ((*(int *)((a4 + 0xBC))) << 2)));
    if (t2 != 11) {
        if (t2 == 5) {
            return FUN_0c057aa8(a4);
        }
        if (t2 == 2) {
            return FUN_0c057aa8(a4);
        }
        if (t2 != 7) {
            if (t2 != 1) {
                if (t2 != 3) {
                    if (t2 != 4) {
                    } else {
                        FUN_0c056928(a4);
                    }
                } else {
                    FUN_0c0567c0(a4);
                }
            } else {
                *(volatile int *)((a4 + 0x23C));
                _quick_odd_mvn(0xC2475D4);
            }
            return FUN_0c057aa8(a4);
        }
        t19 = *(int *)((a4 + 0x25C));
        *(unsigned int *)((a4 + 0x25C)) = (t19 - 1);
        if ((int)(t19 - 1) <= 0) {
            *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0x8;
        }
        t26 = *(int *)((a4 + 0x25C));
        if ((t26 & 1) == 0) {
            return FUN_0c057aa8(a4);
        }
        return t26;
    }
    t27 = FUN_0c01f172(a4);
    if (t27 > -990.0f) {
        *(float *)((a4 + 0x34)) = (t27 + (*(float *)((a4 + 0x258))));
    }
    FUN_0c057c50(a4);
    t34 = *(int *)((a4 + 0x248));
    *(unsigned int *)((a4 + 0x248)) = (t34 + 0x100);
    *(unsigned short *)((a4 + 0x6E)) = (int)((FUN_0c0da410((t34 + 0x100))) * 8192.0f);
    if (((*(int *)0xC23ED5C) & 0x40000) != 0) {
        FUN_0c0558f8(a4);
        FUN_0c0e19f2();
    }
    return FUN_0c057aa8(a4);
}

void FUN_0c098cfa(int a4, int a5, float f4, float f5)
{
    float u0;
    float u2;
    float u4;

    if ((int)a4 < (int)a5) {
        return;
    }
    if ((int)(a4 - a5) <= (int)0x8) {
        u0 = 1.0f;
        if (0.0f > f5) {
            u0 = (-1.0f);
        }
        u2 = f5;
        if (0.0f > f5) {
            u2 = (-f5);
        }
        u4 = *(float *)0xC098EBC;
        nlPushMatrix(0x0);
        FUN_0c0dcc70(0.0f, (((((((float)(a4 - a5) * u0)) * (*(float *)0xC098EC4)) - f4)) * (*(float *)0xC098EC8)), 0.0f);
        nlRotateAY((a5 * 0x7123));
        nlScale(u2, u2, u2);
        FUN_0c0de000(u2);
        FUN_0c0848bc(((*(float *)0xC200ADC) * ((-((float)(a4 - a5) / u4)) + 1.0f)), ((*(float *)0xC200AE0) * ((-((float)(a4 - a5) / u4)) + 1.0f)), ((*(float *)0xC200AE4) * ((-((float)(a4 - a5) / u4)) + 1.0f)));
        FUN_0c0c47ae(0x2BE);
        nlPopMatrix(0x1);
    return;
    }
}

int kmChangeContextSRCBlendMode(int a4)
{
    if ((unsigned int)a4 < (unsigned int)0xC) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0xA0000000);
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x10000000);
            }
                break;
            case 2:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0x80000000);
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x14000000);
            }
                break;
            case 4:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0xC0000000);
            }
                break;
            case 6:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0x40000000);
            }
                break;
            case 8:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0xE0000000);
            }
                break;
            case 10:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0x60000000);
            }
                break;
            case 12:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0xA0000000);
            }
                break;
            case 14:
            case 18:
            {
            }
                break;
            case 16:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0x80000000);
            }
                break;
            case 20:
            {
                *(unsigned int *)0xC95288C = ((0x1FFFFFFF & (*(int *)0xC95288C)) | 0x20000000);
            }
                break;
            default:
            {
                *(unsigned int *)0xC95288C = (0x1FFFFFFF & (*(int *)0xC95288C));
            }
                break;
        }
    }
    *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
    return 0x0;
}

int FUN_0c06c938(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t4;
    int t6;
    int t16;
    int t33;

    t0 = *(int *)0xC247C5C;
    t1 = 0xC06C9A4;
    t2 = a4;
    t3 = (t0 + 0x36);
    t5 = 0x0;
    for (;;) {
        if ((int)(*(short *)((((t5 << 1) + (t0 + 0x36)) + 0x0))) < 0) {
            break;
        }
        t6 = (*(short *)((t3 + 0x0)));
        t3 = (t3 + 0x2);
        if ((*(short *)((((t6 << 1) + (t0 + 0x52)) + 0x0))) == 0) {
            t4 = t6;
            t4 = (t4 << 1);
            t4 = (t4 + t6);
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t4 = (t4 << 2);
            t2 = a4;
            t1 = (FUN_0c06c89c(t2, ((t0 + 0x6C) + t4), ((0x96C + t0) + t4), 10.0f, (1.0f + 1.0f)));
        } else {
            t16 = t2;
        }
        t5 = (t5 + 0x1);
        t2 = t16;
    }
    t18 = t1;
    t19 = t2;
    t20 = (t0 + 0x40);
    t21 = t4;
    t22 = 0x0;
    t23 = t6;
    for (;;) {
        if ((int)(*(short *)((((t22 << 1) + (t0 + 0x40)) + 0x0))) < 0) {
            break;
        }
        t23 = (*(short *)((t20 + 0x0)));
        t20 = (t20 + 0x2);
        if ((*(short *)((((t23 << 1) + (t0 + 0x52)) + 0x0))) == 0) {
            t21 = t23;
            t21 = (t21 << 1);
            t21 = (t21 + t23);
            t21 = (t21 << 2);
            t21 = (t21 << 2);
            t21 = (t21 << 2);
            t19 = a4;
            t18 = (FUN_0c06c89c(t19, ((t0 + 0x6C) + t21), ((0x96C + t0) + t21), 10.0f, (1.0f + 1.0f)));
        } else {
            t33 = t19;
        }
        t22 = (t22 + 0x1);
        t19 = t33;
    }
    return t18;
}

int FUN_0c057aa8(int a4)
{
    int t2;
    int t21;
    int t43;

    nlPushMatrix(0x0);
    t2 = *(int *)((0xC247604 + ((*(int *)((a4 + 0xBC))) << 2)));
    if (t2 != 1) {
        if (t2 != 10) {
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            nlRotateAZ((*(short *)((a4 + 0x70))));
            nlRotateAY((*(short *)((a4 + 0x6E))));
            nlRotateAX((*(short *)((a4 + 0x6C))));
            FUN_0c0c465c((*(int *)((a4 + 0x240))));
        }
    } else {
        t21 = *(int *)0xC23A258;
        if ((int)(*(int *)((a4 + 0x23C))) < (int)0x2) {
            if ((*(int *)0xC23EDB4) == 0) {
                nlMultiMatrix((((((*(int *)((a4 + 0x23C))) << 8) + 0xC25F840) + (((((*(int *)((a4 + 0x228))) << 2) << 2) << 2) << 1)) + ((((t21 & 0x1) << 2) << 2) << 2)));
                FUN_0c0c465c((*(int *)((a4 + 0x244))));
            }
        } else {
            nlMultiMatrix((((((*(int *)((a4 + 0x23C))) << 8) + 0xC25F840) + (((((*(int *)((a4 + 0x228))) << 2) << 2) << 2) << 1)) + ((((t21 & 0x1) << 2) << 2) << 2)));
            if (((*(int *)0xC23A258) & 31) != 0) {
                t43 = (*(int *)((a4 + 0x244)));
            } else {
                t43 = (unsigned short)(*(short *)((((*(int *)((a4 + 0x220))) << 1) + 0xC1FE91E)));
            }
            FUN_0c0c465c(t43);
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c074bb2(int a4)
{
    float u0;
    float u1;
    int t3;
    int t4;
    int t9;
    int t11;
    float u20;
    float u21;
    int t23;
    int t24;
    int t29;
    int t31;
    float u17;
    float u37;

    u0 = *(float *)((a4 + 0x54));
    u1 = *(float *)((a4 + 0x30));
    if (5.0f > _builtin_fabsf((((-u0) + u1) + -70.0f))) {
        t3 = *(short *)((a4 + 0x64));
        if ((int)t3 > 0) {
            t4 = *(short *)((a4 + 0x64));
            *(unsigned short *)((a4 + 0x64)) = (t4 - 24);
            if ((int)(short)(t4 - 24) >= 0) {
            } else {
                *(unsigned short *)((a4 + 0x64)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x64)) = (t3 + 0x18);
            if ((int)(short)(t3 + 0x18) > 0) {
                *(unsigned short *)((a4 + 0x64)) = 0x0;
            }
        }
        u17 = _builtin_fabsf((((-u0) + u1) + -70.0f));
    } else {
        if ((((-u0) + u1) + -70.0f) > 0.0f) {
            t9 = *(short *)((a4 + 0x64));
            *(unsigned short *)((a4 + 0x64)) = (t9 + (int)((((-u0) + u1) + -70.0f) * (1.0f + 1.0f)));
            if ((int)(short)(t9 + (int)((((-u0) + u1) + -70.0f) * (1.0f + 1.0f))) > (int)0x800) {
                *(unsigned short *)((a4 + 0x64)) = 0x800;
            }
        } else {
            t11 = *(short *)((a4 + 0x64));
            *(unsigned short *)((a4 + 0x64)) = (t11 + (int)((((-u0) + u1) + -70.0f) * (1.0f + 1.0f)));
            if ((int)(short)(t11 + (int)((((-u0) + u1) + -70.0f) * (1.0f + 1.0f))) < (int)0xFFFFF800) {
                *(unsigned short *)((a4 + 0x64)) = 0xFFFFF800;
            }
        }
        u17 = 0.0f;
    }
    u20 = *(float *)((a4 + 0x5C));
    u21 = *(float *)((a4 + 0x90));
    if (5.0f > _builtin_fabsf((((-u20) + u21) + 70.0f))) {
        t23 = *(short *)((a4 + 0x60));
        if ((int)t23 > 0) {
            t24 = *(short *)((a4 + 0x60));
            *(unsigned short *)((a4 + 0x60)) = (t24 - 24);
            if ((int)(short)(t24 - 24) >= 0) {
            } else {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x60)) = (t23 + 0x18);
            if ((int)(short)(t23 + 0x18) > 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
            }
        }
        u37 = _builtin_fabsf((((-u20) + u21) + 70.0f));
    } else {
        if ((((-u20) + u21) + 70.0f) > 0.0f) {
            t29 = *(short *)((a4 + 0x60));
            *(unsigned short *)((a4 + 0x60)) = (t29 + (int)((((-u20) + u21) + 70.0f) * (1.0f + 1.0f)));
            if ((int)(short)(t29 + (int)((((-u20) + u21) + 70.0f) * (1.0f + 1.0f))) > (int)0x800) {
                *(unsigned short *)((a4 + 0x60)) = 0x800;
            }
        } else {
            t31 = *(short *)((a4 + 0x60));
            *(unsigned short *)((a4 + 0x60)) = (t31 + (int)((((-u20) + u21) + 70.0f) * (1.0f + 1.0f)));
            if ((int)(short)(t31 + (int)((((-u20) + u21) + 70.0f) * (1.0f + 1.0f))) < (int)0xFFFFF800) {
                *(unsigned short *)((a4 + 0x60)) = 0xFFFFF800;
            }
        }
        u37 = 0.0f;
    }
    return 0x60;
}

float FUN_0c0d6fae(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;
    int t7;
    float u24;
    int t27;
    int t28;
    float u30;
    int t40;
    int t41;
    int t44;
    float u64;
    int t2;
    int t5;
    float u8;
    float u9;
    int t21;
    int t22;
    int t23;
    float u18;
    int stk[43];

    t0 = *(int *)0xC94315C;
    if (t0 != 0) {
        t1 = 0xFFFFFF78;
        t3 = 0xC94315C;
        t4 = a4;
        t6 = 0x0;
        t7 = t0;
        for (;;) {
            if ((t7 != 0) && (t2 = 0x10, (int)t6 < (int)t2)) {
                t1 = 0x228;
                t2 = 0xB;
                t3 = (*(int *)((t7 + t1)));
                u24 = u9;
                if ((int)t3 >= (int)t2) {
                    t1 = 0x6C;
                    t4 = (*(int *)((a4 + t1)));
                    t4 = (t4 + 0x30);
                    u8 = (FUN_0c0d7114(t4, (t7 + 0x30)));
                    u9 = 0.0f;
                    if (u8 == u9) {
                        t1 = 0x220;
                        t5 = t6;
                        t5 = (t5 << 2);
                        t1 = (*(int *)((t7 + t1)));
                        t1 = t5;
                        t3 = 0x6C;
                        t3 = (t3 + a4);
                        *(unsigned int *)(((((int)stk + 4) + 0x44) + t1)) = t7;
                        t4 = (*(int *)((t3 + 0x0)));
                        t5 = (t5 + ((int)stk + 4));
                        t3 = 0xC0DCDA0;
                        t4 = (t4 + 0x30);
                        u8 = (nlLength(t4, (t7 + 0x30)));
                        t6 = (t6 + 0x1);
                        *(float *)((t5 + 0x0)) = u8;
                    } else {
                        u18 = u9;
                    }
                    u24 = u18;
                } else {
                    t21 = t2;
                    t22 = t3;
                    t23 = t4;
                }
                u9 = u24;
                t1 = 0x284;
                t2 = t21;
                t3 = t22;
                t4 = t23;
                t7 = (*(int *)((t7 + t1)));
                continue;
            }
            break;
        }
        *(unsigned int *)(((((int)stk + 4) + 0x44) + (t6 << 2))) = 0x0;
        *(float *)((((int)stk + 4) + (t6 << 2))) = 999.998962f;
        t27 = 0xFFFFFFFF;
        t28 = t6;
        u30 = 999.998962f;
        for (;;) {
            t27 = (t27 + 0x1);
            if ((*(int *)(((((int)stk + 4) + 0x44) + (t27 << 2)))) == 0) {
                break;
            }
            u30 = (*(float *)((((int)stk + 4) + (t27 << 2))));
            if (!(u30 > ((*(float *)((((int)stk + 4) + (t28 << 2))))))) {
                t28 = t27;
            }
        }
        t40 = *(int *)((((t28 << 2) + (((int)stk + 4) + 0x44)) + 0x0));
        t41 = t40;
        if (t40 == 0) {
            t41 = 0xFFFFFFFF;
        }
        if (((*(int *)((a4 + 0x74))) == 3) && ((t41 != -1) && ((int)t27 > 0))) {
            t44 = 0x0;
            for (;;) {
                if ((*(int *)((((t28 << 2) + (((int)stk + 4) + 0x44)) + 0x0))) == (*(int *)((a4 + 0x78)))) {
                    break;
                }
                t44 = (t44 + 0x1);
                if ((int)t44 >= (int)t27) {
                    return u8;
                }
            }
            *(volatile int *)((a4 + 0x78));
        }
        u64 = u8;
    }
    return u64;
}

int FUN_0c02761e(int a4)
{
    int t0;
    int t1;
    int t4;
    int t15;

    t0 = FUN_0c034d0c(a4);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x4C8)) = 0x3;
        return FUN_0c02a19a(a4);
    }
    *(unsigned int *)((a4 + 0x524)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    *(unsigned int *)((a4 + 0xD8)) = 0x0;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x544)) = 0x0;
    *(unsigned int *)((a4 + 0x20C)) = 0x80;
    t1 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((*(int *)((((((t1 << 2) + t1) << 2) + 0xC1F8E3C) + 0x8))) + 0x2)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x534)) = 0x9;
    t4 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x55C)) = ((*(int *)((((((*(int *)((a4 + 0x544))) << 2) << 2) + (*(int *)(((*(int *)(((0xC1F8E3C + (((t4 << 2) + t4) << 2)) + 0xC))) + 0x4)))) + 0x4))) * (*(int *)0xC247070));
    FUN_0c032ae6(a4);
    FUN_0c022aa6(a4);
    *(unsigned int *)((a4 + 0x568)) = (*(int *)((a4 + 0x310)));
    *(unsigned int *)((a4 + 0x310)) = 0x0;
    *(unsigned int *)((a4 + 0x564)) = 0x0;
    *(unsigned int *)((a4 + 0x56C)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    *(unsigned int *)0xC247D04 = 0x7;
    *(unsigned int *)0xC247CD0 = 0xC102924;
    *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
    t15 = *(signed char *)((a4 + 0x510));
    *(unsigned char *)0xC247CB9 = t15;
    return t15;
}

int FUN_0c02750a(int a4, float f4)
{
    float u20;
    float u21;
    float u16;
    float u17;
    float u13;
    float u10;
    int t33;
    int t34;
    int stk[13];

    u20 = -0.0299999993f;
    u21 = 0.0f;
    if ((*(int *)((a4 + 0x500))) == 2) {
    } else {
        u16 = 0.0299999993f;
        u17 = 0.0f;
        if ((*(int *)((a4 + 0x500))) == 3) {
        } else {
            u13 = -0.0299999993f;
            if ((*(int *)((a4 + 0x500))) == 4) {
            } else {
                u10 = 0.0f;
                if ((*(int *)((a4 + 0x500))) == 5) {
                    u10 = 0.0299999993f;
                }
                u13 = u10;
            }
            u16 = 0.0f;
            u17 = u13;
        }
        u20 = u16;
        u21 = u17;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    *(float *)(((int)stk + 20)) = u21;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = u20;
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    nlPopMatrix(0x1);
    t33 = FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
    if (t33 != 0) {
        t34 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t34 + 0x1);
        if ((int)(t34 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
            FUN_0c02a19a(a4);
        }
    } else {
        FUN_0c02a19a(a4);
    }
    return (FUN_0c02286c(a4, 0x28, 0.0f, (*(float *)0xC027668)));
}

int FUN_0c0c60d0(int a4, int a5, int a6)
{
    float u1;
    int t58;
    int t50;
    float u10;
    float u13;
    int t14;
    int t15;
    int t16;
    float u17;
    float u18;
    float u19;
    float u20;
    int t21;
    int t22;
    int t25;
    int t26;
    float u28;
    float u29;
    float u30;
    float u31;
    int stk[11];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c0db470(a4, (((int)stk + 4) + 0x8));
    u1 = *(float *)(((int)stk + 20));
    t58 = 0xC0C6178;
    if (u1 > -100.0f) {
        t50 = 0xC0C617C;
        if (5.0f > u1) {
            if (((*(int *)0xC23A258) & 1) != 0) {
                *(float *)0xC31FCC0 = ((((((*(float *)(((int)stk + 12))) / ((*(float *)0xC247D0C) * u1))) * 320.0f) - ((float)((*(int *)(((int)stk + 8))) >> 1) * 7.19999933f)) + 320.0f);
                u10 = *(float *)(((int)stk + 20));
                *(float *)0xC31FCC4 = ((-(((((*(float *)(((int)stk + 16))) + 5.0f) / ((*(float *)0xC247D10) * u10))) * 240.0f)) + 240.0f);
                u13 = *(float *)(((int)stk + 20));
                *(float *)0xC31FCC8 = (-u13);
                t14 = 0xC;
                t15 = 0xC247D10;
                t16 = 0xC247D0C;
                u17 = u10;
                u18 = (-u13);
                u19 = 5.0f;
                u20 = 240.0f;
                for (;;) {
                    t21 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t21 + 0x1);
                    t22 = *(signed char *)((((t21 + 0x1) - 1) + 0x0));
                    if (t22 == 0) {
                        break;
                    }
                    t14 = (signed char)t22;
                    if (t14 != 32) {
                        t14 = (signed char)t22;
                        t14 = (t14 << 1);
                        t16 = (*(short *)((0xC1E8760 + t14)));
                        *(unsigned int *)0xC31FCBC = t16;
                        t14 = (FUN_0c0c0340(0xC31FCBC, u20));
                    } else {
                        t25 = t15;
                        t26 = t16;
                        u28 = u17;
                        u29 = u18;
                        u30 = u19;
                        u31 = u20;
                    }
                    u17 = u28;
                    u18 = u29;
                    u19 = u30;
                    u20 = u31;
                    t14 = 0x4;
                    t15 = t25;
                    t16 = t26;
                    u19 = (*(float *)((0xC31FCBC + t14)));
                    u19 = (u19 + 7.19999933f);
                    *(float *)((0xC31FCBC + t14)) = u19;
                }
            }
            *(volatile float *)0xC0C62B4;
            t50 = (FUN_0c0c5d32((((int)stk + 4) + 0x8)));
        }
        t58 = t50;
    }
    return t58;
}

int FUN_0c025b9a(int a4, float f4)
{
    float u20;
    float u21;
    float u16;
    float u17;
    float u13;
    float u10;
    int t33;
    int t34;
    int stk[13];

    u20 = 0.0f;
    u21 = -0.0249999985f;
    if ((*(int *)((a4 + 0x500))) == 2) {
    } else {
        u16 = 0.0f;
        u17 = 0.0249999985f;
        if ((*(int *)((a4 + 0x500))) == 3) {
        } else {
            u13 = -0.0249999985f;
            if ((*(int *)((a4 + 0x500))) == 4) {
            } else {
                u10 = 0.0f;
                if ((*(int *)((a4 + 0x500))) == 5) {
                    u10 = 0.0249999985f;
                }
                u13 = u10;
            }
            u16 = u13;
            u17 = 0.0f;
        }
        u20 = u16;
        u21 = u17;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    *(float *)(((int)stk + 20)) = u20;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = u21;
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    nlPopMatrix(0x1);
    t33 = FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
    if (t33 != 0) {
        t34 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t34 + 0x1);
        if ((int)(t34 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
            FUN_0c02a19a(a4);
        }
    } else {
        FUN_0c02a19a(a4);
    }
    return (FUN_0c02286c(a4, 0x28, 5.0f, 0.049999997f));
}

int FUN_0c06816c(int a4)
{
    int t16;
    int t20;
    int t23;
    int t32;
    int t6;
    int t36;
    int stk[9];

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0845f8((*(int *)((a4 + 0x78))), 0x0);
        FUN_0c0e19f2();
    } else {
        t6 = a4;
    }
    if ((*(int *)((a4 + 0x98))) == 3) {
        nlPushMatrix((*(int *)0xC247BF4));
        FUN_0c0db470((a4 + 0x30), (a4 + 0x54));
        FUN_0c08463a((*(int *)((a4 + 0x78))), (a4 + 0x54));
        nlPopMatrix(0x1);
        t16 = *(int *)0xC23ED88;
        t20 = t16;
        if ((t16 & 1) != 0) {
            FUN_0c0845f8((*(int *)((a4 + 0x78))), 0x0);
            t20 = (FUN_0c0e19f2());
        }
        t36 = t20;
    } else {
        t23 = *(int *)0xC23ED88;
        t32 = t23;
        if ((t23 & 1) != 0) {
            _quick_odd_mvn(t6);
            FUN_0c0dc5a0();
            nlRotateAY(0x8000);
            nlRotateAX(0xB400);
            FUN_0c0db4d0(((int)stk + 4), (((int)stk + 4) + 0xC));
            nlPopMatrix(0x1);
            t32 = (FUN_0c08467c((*(int *)((a4 + 0x78))), (((int)stk + 4) + 0xC)));
        }
        t36 = t32;
    }
    return t36;
}

int FUN_0c070a42(int a4, int a5, int a6, int a7)
{
    int t1;
    int t19;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x80));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.0583333299f);
            if (!((*(float *)((a4 + 0x74))) > (*(float *)((a4 + 0x90))))) {
                *(float *)((a4 + 0x90)) = (*(float *)((a4 + 0x74)));
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    } else {
        t19 = *(int *)0xC23ED5C;
        if ((0x200 & t19) != 0) {
            if ((0x800 & t19) == 0) {
            } else {
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.0f, (*(float *)((a4 + 0x90))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    nlPopMatrix(0x1);
    FUN_0c0dcc70(0.0f, 0.0f, (-(*(float *)((a4 + 0x90)))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

int FUN_0c0a760e(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9)
{
    float u0;
    int t1;
    int t17;
    float u3;
    int t5;
    int t18;
    int t12;
    float u16;
    int t6;
    float u9;
    float u10;

    u0 = ((f5 - f7) * (f5 - f7));
    u0 = u0 + (f4 - f6) * (f4 - f6);
    t1 = FUN_0c0d9dc0((f6 - f4), (f5 - f7));
    if (_builtin_sqrtf(u0) > (f8 + f9)) {
        *(unsigned int *)((a4 + 0x0)) = (-(short)t1);
        *(unsigned int *)((a5 + 0x0)) = 0x0;
        t18 = t1;
    } else {
        t17 = 0;
        if (f9 > (f8 + _builtin_sqrtf(u0))) {
            *(unsigned int *)((a4 + 0x0)) = ((-(short)t1) - 32768);
            *(unsigned int *)((a5 + 0x0)) = 0x8000;
            t12 = t1;
            u16 = (f8 + _builtin_sqrtf(u0));
            t17 = (1);
        } else {
            if (f8 > (f9 + _builtin_sqrtf(u0))) {
                *(unsigned int *)((a4 + 0x0)) = (-(short)t1);
                *(unsigned int *)((a5 + 0x0)) = 0x8000;
                t6 = t1;
                u9 = f8;
                u10 = (f9 + _builtin_sqrtf(u0));
            } else {
                u3 = (f8 * _builtin_sqrtf(u0));
                *(unsigned int *)((a5 + 0x0)) = ((FUN_0c0d9bd0(((((f9 * f9) + (f8 * f8)) - (_builtin_sqrtf(u0) * _builtin_sqrtf(u0))) / (((f8 * f9)) * (1.0f + 1.0f))))) + 0x8000);
                t5 = FUN_0c0d9bd0(((((_builtin_sqrtf(u0) * _builtin_sqrtf(u0)) + (f8 * f8)) - (f9 * f9)) / (u3 * (1.0f + 1.0f))));
                *(unsigned int *)((a4 + 0x0)) = ((-(short)t1) + t5);
                t6 = t5;
                u9 = ((((_builtin_sqrtf(u0) * _builtin_sqrtf(u0)) + (f8 * f8)) - (f9 * f9)) / (u3 * (1.0f + 1.0f)));
            }
            t12 = t6;
            u16 = u10;
            t17 = ((f8 > (f9 + _builtin_sqrtf(u0))));
        }
        t18 = t12;
    }
    return t18;
}

int FUN_0c0329ae(int a4, int a5)
{
    int t1;
    int t25;
    int stk[13];

    t1 = *(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)));
    t25 = t1;
    if (t1 == 4) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(short *)((a4 + 0x23E))));
        if ((int)(*(int *)((a4 + 0x4EC))) > 0) {
            *(float *)(((int)stk + 16)) = (*(float *)((a5 + 0x0)));
            *(float *)(((int)stk + 20)) = (*(float *)((a5 + 0x4)));
            *(float *)(((int)stk + 24)) = (*(float *)((a5 + 0x8)));
            FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
            *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
            *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
        } else {
            *(float *)(((int)stk + 16)) = (-(*(float *)((a5 + 0x0))));
            *(float *)(((int)stk + 20)) = (*(float *)((a5 + 0x4)));
            *(float *)(((int)stk + 24)) = (*(float *)((a5 + 0x8)));
            FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
            *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
            *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
        }
        nlPopMatrix(0x1);
        t25 = (nlAddVector((0x4B0 + a4), (((int)stk + 4) + 0x18)));
    }
    return t25;
}

int FUN_0c07918a(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t10;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = 0x1;
    t2 = 0xC100A5C;
    for (;;) {
        if (!((*(float *)((t2 + 0x4))) > -100.0f)) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(t2);
        nlRotateAY((*(int *)((t2 + 0xC))));
        FUN_0c078d72(0xC1004BC, t1);
        nlPopMatrix(0x1);
        t2 = (t2 + 0x10);
        t1 = (t1 << 1);
    }
    t10 = 0xC100CBC;
    for (;;) {
        if (!((*(float *)((t10 + 0x4))) > -100.0f)) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(t10);
        nlRotateAY((*(int *)((t10 + 0xC))));
        FUN_0c078d6e();
        nlPopMatrix(0x1);
        t10 = (t10 + 0x10);
    }
    return 0x4;
}
