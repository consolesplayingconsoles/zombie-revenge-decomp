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
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C0_uint { char p[0x1C0]; unsigned int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o290_uint { char p[0x290]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o324_uint { char p[0x324]; unsigned int v; };
struct o334_uint { char p[0x334]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o388_uint { char p[0x388]; unsigned int v; };
struct o390_float { char p[0x390]; float v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o3BC_float { char p[0x3BC]; float v; };
struct o3C0_float { char p[0x3C0]; float v; };
struct o3C4_float { char p[0x3C4]; float v; };
struct o3C8_float { char p[0x3C8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_int { char p[0x514]; int v; };
struct o578_uint { char p[0x578]; unsigned int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC8_int { char p[0xC8]; int v; };



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
    if ((((((struct o508_int *)(R4))->v)) != 0)) goto L_C035300;
    goto L_C0352CA;
    L_C0352CA:;
    if ((((((struct o50C_int *)(R14))->v)) == 0)) goto L_C03530E;
    goto L_C0352D2;
    L_C0352D2:;
    if (((*(int *)(((((((struct o510_int *)(R14))->v)) << 2) + 0xC247030))) != 0)) goto L_C0352E8;
    goto L_C0352E0;
    L_C0352E0:;
    (((struct o50C_uint *)(R14))->v) = 0x0;
    goto L_C03530E;
    L_C03530E:;
    R0 = (0x0);
    goto L_C0353AE;
    L_C0353AE:;
    return R0;
    L_C0352E8:;
    t9 = (((struct o510_int *)(R14))->v);
    R13 = ((((((((t9 << 1) + t9) << 2) << 2) << 2) + 0xC23F268) + 0xC));
    goto L_C035312;
    L_C035312:;
    FUN_0c0a7714((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((((struct o24C_float *)(R14))->v)) - (*(float *)((R13 + 0x0)))), (((((struct o250_float *)(R14))->v)) - ((((struct o4_float *)(R13))->v))), (((((struct o254_float *)(R14))->v)) - ((((struct o8_float *)(R13))->v))));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o30_float *)(R14))->v)) - (*(float *)((R13 + 0x0)))), (((((struct o34_float *)(R14))->v)) - ((((struct o4_float *)(R13))->v))), (((((struct o38_float *)(R14))->v)) - ((((struct o8_float *)(R13))->v))));
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
    if ((((((struct o514_int *)(R14))->v)) == 0)) goto L_C03530E;
    goto L_C035308;
    L_C035308:;
    R13 = ((0x518 + R14));
    goto L_C035312;
}

int FUN_0c049f54(int a4)
{
    if ((*(int *)0xC23EDAC) == 1) {
        (((struct o1EC_uint *)(a4))->v) = 0x0;
    } else {
        (((struct o1EC_uint *)(a4))->v) = 0xF;
    }
    (((struct o1B0_uint *)(a4))->v) = 0x0;
    (((struct o1BC_uint *)(a4))->v) = 0x0;
    (((struct o1C0_uint *)(a4))->v) = 0x0;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o210_uint *)(a4))->v) = 0x0;
    (((struct o290_uint *)(a4))->v) = 0x0;
    (((struct o3A0_uint *)(a4))->v) = 0x0;
    (((struct oA4_uint *)(a4))->v) = 0xA7F;
    if ((*(int *)((0xC247594 + (((((struct oBC_int *)(a4))->v)) << 2)))) == 0) {
        *(unsigned int *)((0xC247594 + (((((struct oBC_int *)(a4))->v)) << 2))) = 0x1;
        if ((*(int *)((0xC247030 + (((((struct oBC_int *)(a4))->v)) << 2)))) == 5) {
            *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030) + 0x0)) = 0x4;
        }
    }
    *(float *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC24758C)) = 0.0f;
    (((struct o334_uint *)(a4))->v) = 0x0;
    (((struct o324_uint *)(a4))->v) = 0x0;
    (((struct o388_uint *)(a4))->v) = 0x1;
    (((struct o390_float *)(a4))->v) = (*(float *)0xC04A0F8);
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o3B0_uint *)(a4))->v) = 0x0;
    (((struct o3B4_uint *)(a4))->v) = 0x0;
    (((struct o3B8_uint *)(a4))->v) = 0x0;
    (((struct o3BC_float *)(a4))->v) = 0.0f;
    (((struct o3C0_float *)(a4))->v) = 0.0f;
    (((struct o3C4_float *)(a4))->v) = 0.0f;
    (((struct o3C8_float *)(a4))->v) = 0.0f;
    return 0x3C8;
}

int fmMngInit(int a4, int a5, int a6)
{
    int t66;
    int t6;
    int t8;
    int t19;
    int t20;
    int t21;
    int t27;
    int t34;
    int t48;
    int t22;
    int t23;
    int t24;
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
        t66 = 0xFFFFFFFF;
        if (t19 == -1) {
        } else {
            t20 = *(int *)0xC239E50;
            t21 = thunk_FUN_0c22904c((t20 + 0x34), 0xC237C2C, 0xC);
            t66 = 0xFFFFFFF8;
            if ((t21 != 0) && (t22 = *(int *)0xC239E50, t23 = *(signed char *)(((t20 + 0x34) + 0x10)), t24 = *(short *)((t22 + 0x0)), t24 == t23)) {
                *(unsigned short *)((t22 + 0x2)) = (*(signed char *)(((t20 + 0x34) + 0x11)));
                t27 = *(short *)(((*(int *)0xC239E50) + 0x2));
                if (t27 != 0) {
                    t66 = 0xFFFFFFF8;
                    if (t27 != 1) {
                    } else {
                        FUN_0c229088((*(int *)(((*(int *)0xC239E50) + 0xC))), (*(int *)(((*(int *)0xC239E50) + 0x8))));
                        t34 = FUN_0c229172((*(int *)0xC239E50));
                        t66 = 0x0;
                        if (t34 != 0) {
                            t66 = t34;
                        }
                    }
                } else {
                    FUN_0c229088((*(int *)(((*(int *)0xC239E50) + 0xC))), (*(int *)(((*(int *)0xC239E50) + 0x8))));
                    t48 = FUN_0c229172((*(int *)0xC239E50));
                    t66 = 0x0;
                    if (t48 != 0) {
                        t66 = t48;
                    }
                }
            }
        }
    }
    return t66;
}

void FUN_0c03e5bc(int a4)
{
    int t0;

    t0 = (((struct o1BC_int *)(a4))->v);
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
                (((struct o578_uint *)(a4))->v) = 0x0;
                (((struct o57C_uint *)(a4))->v) = 0x0;
            }
                break;
            case 8:
            {
                (((struct o578_uint *)(a4))->v) = 0x0;
                (((struct o57C_uint *)(a4))->v) = 0x1;
            }
                break;
            case 10:
            {
                (((struct o578_uint *)(a4))->v) = 0x0;
                (((struct o57C_uint *)(a4))->v) = 0x2;
            }
                break;
            case 12:
            {
                (((struct o578_uint *)(a4))->v) = 0x4;
                (((struct o57C_uint *)(a4))->v) = 0x0;
            }
                break;
            case 14:
            case 34:
            {
                (((struct o578_uint *)(a4))->v) = 0x4;
                (((struct o57C_uint *)(a4))->v) = 0x1;
            }
                break;
            case 16:
            {
                (((struct o578_uint *)(a4))->v) = 0x4;
                (((struct o57C_uint *)(a4))->v) = 0x2;
            }
                break;
            case 18:
            {
                (((struct o578_uint *)(a4))->v) = 0x5;
                (((struct o57C_uint *)(a4))->v) = 0x2;
            }
                break;
            case 20:
            {
                (((struct o578_uint *)(a4))->v) = 0x6;
                (((struct o57C_uint *)(a4))->v) = 0x2;
            }
                break;
            case 22:
            {
                (((struct o578_uint *)(a4))->v) = 0x3;
                (((struct o57C_uint *)(a4))->v) = 0x3;
            }
                break;
            case 24:
            {
                (((struct o578_uint *)(a4))->v) = 0x2;
                if ((((((struct oC8_int *)(a4))->v)) & 0x230) == 0) {
                    (((struct o57C_uint *)(a4))->v) = 0x4;
                } else {
                    (((struct o57C_uint *)(a4))->v) = 0x3;
                }
            }
                break;
            case 26:
            {
                (((struct o578_uint *)(a4))->v) = 0x8;
                (((struct o57C_uint *)(a4))->v) = 0x1;
            }
                break;
            case 28:
            {
                (((struct o578_uint *)(a4))->v) = 0x9;
                (((struct o57C_uint *)(a4))->v) = 0x1;
            }
                break;
            case 30:
            {
                (((struct o578_uint *)(a4))->v) = 0x1;
                (((struct o57C_uint *)(a4))->v) = 0x2;
            }
                break;
            case 32:
            case 38:
            case 40:
            case 42:
            case 46:
            {
                (((struct o578_uint *)(a4))->v) = 0x0;
                (((struct o57C_uint *)(a4))->v) = 0x2;
            }
                break;
            case 36:
            case 56:
            {
                (((struct o578_uint *)(a4))->v) = 0x0;
                (((struct o57C_uint *)(a4))->v) = 0x1;
            }
                break;
            case 44:
            {
                (((struct o578_uint *)(a4))->v) = 0x4;
                (((struct o57C_uint *)(a4))->v) = 0x3;
            }
                break;
            case 48:
            case 52:
            {
                (((struct o578_uint *)(a4))->v) = 0x0;
                (((struct o57C_uint *)(a4))->v) = 0x3;
            }
                break;
            case 50:
            {
                (((struct o578_uint *)(a4))->v) = 0x7;
                (((struct o57C_uint *)(a4))->v) = 0x3;
            }
                break;
            default:
            {
                (((struct o578_uint *)(a4))->v) = 0x0;
                (((struct o57C_uint *)(a4))->v) = 0x4;
            }
                break;
        }
    } else {
        (((struct o578_uint *)(a4))->v) = 0x0;
        (((struct o57C_uint *)(a4))->v) = 0x0;
    }
}


