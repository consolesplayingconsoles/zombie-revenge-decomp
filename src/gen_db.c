/* Straight-line functions with calls and guards (batch gen_db): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c035f64(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05473c(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de3c0(int, int);
int _quick_odd_mvn(int, int, int, float, float);
int FUN_0c229088(int, int);
int FUN_0c229172(int);
int FUN_0c232610(int, int, int);
int FUN_0c232624(int, int, int);
int thunk_FUN_0c22904c(int, int, int);
int FUN_0c02d22a(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0352b4(int a4, int a5, int a6, int a7);
int FUN_0c049f54(int a4);
int fmMngInit(int a4, int a5, int a6);
void FUN_0c03e5bc(int a4);
int FUN_0c057c50(int a4);


int FUN_0c0352b4(int a4, int a5, int a6, int a7)
{
    int t9;
    int t30;
    int stk[10];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    float F6;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0352B4:;
    *(unsigned int *)(((int)stk + 20)) = R5;
    *(unsigned int *)(((int)stk + 24)) = R6;
    R14 = (R4);
    if (((*(int *)((R4 + 0x508))) != 0)) goto L_C035300;
    goto L_C0352CA;
    L_C0352CA:;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C03530E;
    goto L_C0352D2;
    L_C0352D2:;
    if (((*(int *)((((*(int *)((R14 + 0x510))) << 2) + 0xC247030))) != 0)) goto L_C0352E8;
    goto L_C0352E0;
    L_C0352E0:;
    *(unsigned int *)((R14 + 0x50C)) = 0x0;
    goto L_C03530E;
    L_C03530E:;
    R0 = (0x0);
    goto L_C0353AE;
    L_C0353AE:;
    return R0;
    L_C0352E8:;
    t9 = *(int *)((R14 + 0x510));
    R13 = ((((((((t9 << 1) + t9) << 2) << 2) << 2) + 0xC23F268) + 0xC));
    goto L_C035312;
    L_C035312:;
    FUN_0c0a7714((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), ((*(float *)((R14 + 0x24C))) - (*(float *)((R13 + 0x0)))), ((*(float *)((R14 + 0x250))) - (*(float *)((R13 + 0x4)))), ((*(float *)((R14 + 0x254))) - (*(float *)((R13 + 0x8)))));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((R14 + 0x30))) - (*(float *)((R13 + 0x0)))), ((*(float *)((R14 + 0x34))) - (*(float *)((R13 + 0x4)))), ((*(float *)((R14 + 0x38))) - (*(float *)((R13 + 0x8)))));
    F4 = (8192.0f);
    if ((!(_builtin_fabsf((float)(short)((*(int *)(((int)stk + 16))) - (*(int *)(((int)stk + 8))))) > 8192.0f))) goto L_C03537A;
    goto L_C035376;
    L_C035376:;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 16)));
    goto L_C03537A;
    L_C03537A:;
    t30 = *(int *)(((int)stk + 4));
    R4 = (t30);
    if ((!(_builtin_fabsf((float)(short)((*(int *)(((int)stk + 12))) - t30)) > F4))) goto L_C035390;
    goto L_C03538C;
    L_C03538C:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    goto L_C035390;
    L_C035390:;
    FUN_0c0546fe(R14, (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))));
    FUN_0c05473c(R14, ((*(int *)(((int)stk + 4))) + 0x800), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))));
    R0 = (0x1);
    goto L_C0353AE;
    L_C035300:;
    if (((*(int *)((R14 + 0x514))) == 0)) goto L_C03530E;
    goto L_C035308;
    L_C035308:;
    R13 = ((0x518 + R14));
    goto L_C035312;
}

int FUN_0c049f54(int a4)
{
    if ((*(int *)0xC23EDAC) == 1) {
        *(unsigned int *)((a4 + 0x1EC)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x1EC)) = 0xF;
    }
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0x1C0)) = 0x0;
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x210)) = 0x0;
    *(unsigned int *)((a4 + 0x290)) = 0x0;
    *(unsigned int *)((a4 + 0x3A0)) = 0x0;
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    if ((*(int *)((0xC247594 + ((*(int *)((a4 + 0xBC))) << 2)))) == 0) {
        *(unsigned int *)((0xC247594 + ((*(int *)((a4 + 0xBC))) << 2))) = 0x1;
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)))) == 5) {
            *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
        }
    }
    *(float *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC24758C)) = 0.0f;
    *(unsigned int *)((a4 + 0x334)) = 0x0;
    *(unsigned int *)((a4 + 0x324)) = 0x0;
    *(unsigned int *)((a4 + 0x388)) = 0x1;
    *(float *)((a4 + 0x390)) = (*(float *)0xC04A0F8);
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x3B4)) = 0x0;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    *(float *)((a4 + 0x3BC)) = 0.0f;
    *(float *)((a4 + 0x3C0)) = 0.0f;
    *(float *)((a4 + 0x3C4)) = 0.0f;
    *(float *)((a4 + 0x3C8)) = 0.0f;
    return 0x3C8;
}

int fmMngInit(int a4, int a5, int a6)
{
    int t66;
    int t6;
    int t8;
    int t19;
    int t60;
    int t20;
    int t21;
    int t56;
    int t27;
    int t37;
    int t34;
    int t35;
    int t48;
    int t49;
    int t22;
    int t23;
    int t24;
    int t51;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t66 = 0xFFFFFFF9;
    if (((int)a4 >= (int)0x1) && ((int)a4 < (int)0x5)) {
        *(unsigned int *)0xC239E50 = 0xC95CA74;
        FUN_0c232610(a4, (((int)stk + 4) + 0x4), a6);
        *(unsigned short *)(((*(int *)0xC239E50) + 0x0)) = a4;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x4)) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((*(int *)0xC239E50) + 0x8)) = (*(int *)(((int)stk + 12)));
        t6 = *(int *)0xC239E50;
        *(unsigned int *)((t6 + 0x18)) = ((int)((*(int *)((t6 + 0x8))) + 0x7FFF) >> 15);
        t8 = *(int *)0xC239E50;
        *(unsigned int *)((t8 + 0x14)) = ((((int)(*(int *)((t8 + 0x8))) >> 6) - (*(int *)((t8 + 0x18)))) - 1);
        *(unsigned int *)(((*(int *)0xC239E50) + 0xC)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((*(int *)0xC239E50) + 0x1C)) = 0x0;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x20)) = 0x0;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x2C)) = 0x0;
        t19 = FUN_0c232624((*(int *)(((*(int *)0xC239E50) + 0x4))), ((*(int *)0xC239E50) + 0x34), 0x40);
        t60 = 0xFFFFFFFF;
        if (t19 == -1) {
        } else {
            t20 = *(int *)0xC239E50;
            t21 = thunk_FUN_0c22904c((t20 + 0x34), 0xC237C2C, 0xC);
            t56 = 0xFFFFFFF8;
            if ((t21 != 0) && (t22 = *(int *)0xC239E50, t23 = *(signed char *)(((t20 + 0x34) + 0x10)), t24 = *(short *)((t22 + 0x0)), t24 == t23)) {
                *(unsigned short *)((t22 + 0x2)) = (*(signed char *)(((t20 + 0x34) + 0x11)));
                t27 = *(short *)(((*(int *)0xC239E50) + 0x2));
                if (t27 != 0) {
                    t37 = 0xFFFFFFF8;
                    if (t27 != 1) {
                    } else {
                        FUN_0c229088((*(int *)(((*(int *)0xC239E50) + 0xC))), (*(int *)(((*(int *)0xC239E50) + 0x8))));
                        t34 = FUN_0c229172((*(int *)0xC239E50));
                        t35 = 0x0;
                        if (t34 != 0) {
                            t35 = t34;
                        }
                        t37 = t35;
                    }
                    t51 = t37;
                } else {
                    FUN_0c229088((*(int *)(((*(int *)0xC239E50) + 0xC))), (*(int *)(((*(int *)0xC239E50) + 0x8))));
                    t48 = FUN_0c229172((*(int *)0xC239E50));
                    t49 = 0x0;
                    if (t48 != 0) {
                        t49 = t48;
                    }
                    t51 = t49;
                }
                t56 = t51;
            }
            t60 = t56;
        }
        t66 = t60;
    }
    return t66;
}

void FUN_0c03e5bc(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1BC));
    if ((unsigned int)t0 < (unsigned int)0x1D) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 4:
            {
            }
                break;
            case 6:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x0;
                *(unsigned int *)((a4 + 0x57C)) = 0x0;
            }
                break;
            case 8:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x0;
                *(unsigned int *)((a4 + 0x57C)) = 0x1;
            }
                break;
            case 10:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x0;
                *(unsigned int *)((a4 + 0x57C)) = 0x2;
            }
                break;
            case 12:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x4;
                *(unsigned int *)((a4 + 0x57C)) = 0x0;
            }
                break;
            case 14:
            case 34:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x4;
                *(unsigned int *)((a4 + 0x57C)) = 0x1;
            }
                break;
            case 16:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x4;
                *(unsigned int *)((a4 + 0x57C)) = 0x2;
            }
                break;
            case 18:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x5;
                *(unsigned int *)((a4 + 0x57C)) = 0x2;
            }
                break;
            case 20:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x6;
                *(unsigned int *)((a4 + 0x57C)) = 0x2;
            }
                break;
            case 22:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x3;
                *(unsigned int *)((a4 + 0x57C)) = 0x3;
            }
                break;
            case 24:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x2;
                if (((*(int *)((a4 + 0xC8))) & 0x230) == 0) {
                    *(unsigned int *)((a4 + 0x57C)) = 0x4;
                } else {
                    *(unsigned int *)((a4 + 0x57C)) = 0x3;
                }
            }
                break;
            case 26:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x8;
                *(unsigned int *)((a4 + 0x57C)) = 0x1;
            }
                break;
            case 28:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x9;
                *(unsigned int *)((a4 + 0x57C)) = 0x1;
            }
                break;
            case 30:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x1;
                *(unsigned int *)((a4 + 0x57C)) = 0x2;
            }
                break;
            case 32:
            case 38:
            case 40:
            case 42:
            case 46:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x0;
                *(unsigned int *)((a4 + 0x57C)) = 0x2;
            }
                break;
            case 36:
            case 56:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x0;
                *(unsigned int *)((a4 + 0x57C)) = 0x1;
            }
                break;
            case 44:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x4;
                *(unsigned int *)((a4 + 0x57C)) = 0x3;
            }
                break;
            case 48:
            case 52:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x0;
                *(unsigned int *)((a4 + 0x57C)) = 0x3;
            }
                break;
            case 50:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x7;
                *(unsigned int *)((a4 + 0x57C)) = 0x3;
            }
                break;
            default:
            {
                *(unsigned int *)((a4 + 0x578)) = 0x0;
                *(unsigned int *)((a4 + 0x57C)) = 0x4;
            }
                break;
        }
    } else {
        *(unsigned int *)((a4 + 0x578)) = 0x0;
        *(unsigned int *)((a4 + 0x57C)) = 0x0;
    }
}

int FUN_0c057c50(int a4)
{
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t16;
    int t17;
    int t6;
    int t14;
    int t15;
    int t19;
    int t20;
    int t21;
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = 0xC2475D4;
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0xB4))) + 0.0699999928f), (*(float *)((a4 + 0x38))));
    if (((*(int *)0xC23A258) & 3) != 0) {
        t7 = 0xC23A258;
        t8 = 0x0;
        t9 = 0x0;
        t10 = 0x0;
        t11 = 0x0;
        for (;;) {
            if (((*(int *)((0xC247030 + (t11 << 2)))) == 4) && (t14 = *(int *)((a4 + 0xBC)), t7 = t14, t15 = *(int *)(((0xC247504 + t8) + 0x0)), t6 = t15, t6 == t7)) {
                t7 = 0xC0;
                t16 = *(int *)(((int)stk + 4));
                t17 = *(int *)(((0xBC + a4) + 0x0));
                if ((6.0f > ((*(float *)((t9 + ((t16 + t7) + (((t17 << 2) << 2) << 2))))))) && (t19 = ((t16 + t7) + (((t17 << 2) << 2) << 2)), t7 = 0xC246FF0, t7 = (t7 + t10), t20 = *(int *)((t7 + 0x0)), t7 = t20, t21 = *(int *)((t7 + 0x20C)), (t21 & 0x5) != 0)) {
                    break;
                }
                t11 = (t11 + 0x1);
                t9 = (t9 + 0x4);
                t10 = (t10 + 0x4);
                t8 = (t8 + 0x4);
                if ((int)t11 >= (int)0x2) {
                    FUN_0c0848bc(0.699999988f, 0.899999976f, 0.5f);
                    t8 = 0x1;
                    FUN_0c0de3c0(t8, t8);
                    t7 = 0xC0C465C;
                    FUN_0c0c465c(0xC9);
                    t8 = 0x5;
                    FUN_0c0de3c0(0x4, t8);
                    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                    t7 = 0xC0DC4C0;
                    return nlPopMatrix(0x1);
                }
                continue;
            }
            t11 = (t11 + 0x1);
            t9 = (t9 + 0x4);
            t10 = (t10 + 0x4);
            t8 = (t8 + 0x4);
            if ((int)t11 >= (int)0x2) {
                FUN_0c0848bc(0.699999988f, 0.899999976f, 0.5f);
                t8 = 0x1;
                FUN_0c0de3c0(t8, t8);
                t7 = 0xC0C465C;
                FUN_0c0c465c(0xC9);
                t8 = 0x5;
                FUN_0c0de3c0(0x4, t8);
                FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                t7 = 0xC0DC4C0;
                return nlPopMatrix(0x1);
            }
        }
        FUN_0c0de3c0(0x1, 0x1);
        FUN_0c0c475c(0xC9, 0.899999976f);
        FUN_0c0de3c0(0x4, 0x5);
    }
    return nlPopMatrix(0x1);
}
