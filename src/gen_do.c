/* Straight-line functions with calls and guards (batch gen_do): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0264ba(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c0321d4(int, int);
int FUN_0c03227c(int);
int FUN_0c03374c(int);
int FUN_0c033850(int);
int FUN_0c054ae0(int);
int FUN_0c05b274(int, int, int, int, int, float);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c097520(int, int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, float, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
#pragma inline_asm(iaOcbwb)
struct o1E4_float { char p[0x1E4]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_int { char p[0x1F4]; int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o238_float { char p[0x238]; float v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2B4_uint { char p[0x2B4]; unsigned int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o344_int { char p[0x344]; int v; };
struct o34C_int { char p[0x34C]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o3A4_int { char p[0x3A4]; int v; };
struct o3A4_uint { char p[0x3A4]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o544_int { char p[0x544]; int v; };
struct o544_uint { char p[0x544]; unsigned int v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oE8_short { char p[0xE8]; short v; };
struct oEC_int { char p[0xEC]; int v; };
struct oEC_uint { char p[0xEC]; unsigned int v; };
struct o0_float { float v; };
struct o8_float { char p[0x8]; float v; };


static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c05b42e(int a4, int a5, int a6);
int FUN_0c097870(int a4, int a5, int a6, int a7);
int FUN_0c0265ac(int a4, int a5, int a6, int a7);
void FUN_0c211122(int a4, int a5);

int FUN_0c05b42e(int a4, int a5, int a6)
{
    int t1;
    int t10;
    int t43;
    float u51;
    float u53;
    int t65;
    int t71;
    int t77;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C05B42E:;
    t1 = (int)((((struct oBC_int *)(R4))->v)) < (int)0x2;
    R0 = (0xBC);
    R11 = (0x1);
    R12 = (R5);
    R13 = (R4);
    R4 = (0x0);
    if (t1) goto L_C05B48C;
    goto L_C05B450;
    L_C05B450:;
    R4 = (R11);
    goto L_C05B4C4;
    L_C05B4C4:;
    if ((R4 != 0)) goto L_C05B4CC;
    goto L_C05B4C8;
    L_C05B4C8:;
    goto L_C05B6EA;
    L_C05B6EA:;
    return R0;
    L_C05B4CC:;
    t10 = FUN_0c0e19aa(0xC05BCD0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t10);
    (((struct o21C_uint *)(t10))->v) = 0x0;
    (((struct oBC_uint *)(t10))->v) = ((((struct oBC_int *)(R13))->v));
    *(unsigned int *)(((0x200 + t10) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x2)));
    R0 = (0xE8);
    R14 = (t10);
    if (((int)((((struct oE8_short *)(R13))->v)) >= (int)0x4)) goto L_C05B510;
    goto L_C05B500;
    L_C05B500:;
    if (((*(signed char *)((R12 + 0x4))) == 0)) goto L_C05B50C;
    goto L_C05B506;
    L_C05B506:;
    R1 = (((((struct o1EC_int *)(R13))->v)));
    goto L_C05B51C;
    L_C05B51C:;
    (((struct o1EC_uint *)(R14))->v) = R1;
    *(unsigned int *)(((0x1E8 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x3)));
    *(unsigned int *)(((0x1F4 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x4)));
    *(unsigned int *)(((0x204 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x5)));
    (((struct o1E4_float *)(R14))->v) = ((((struct oC_float *)(R12))->v));
    *(unsigned int *)(((0x1FC + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x1)));
    (((struct o1F8_uint *)(R14))->v) = (unsigned char)(*(signed char *)((R12 + 0x0)));
    *(unsigned int *)(((0x22C + R14) + 0x0)) = (unsigned short)(*(short *)((R12 + 0x8)));
    FUN_0c0cc3f8(0x828A9, R5, R6, R7, F4, F5, F6);
    FUN_0c0cc054(((((struct oBC_int *)(R13))->v)), 0x5);
    R0 = (0xEC);
    if (((int)((((struct oEC_int *)(R13))->v)) <= (int)0x1E)) goto L_C05B612;
    goto L_C05B57C;
    L_C05B57C:;
    if (((int)(*(int *)((R13 + R0))) >= (int)0x3C)) goto L_C05B5F4;
    goto L_C05B584;
    L_C05B584:;
    (((struct o1F8_uint *)(R14))->v) = (((((struct o1F8_int *)(R14))->v)) + 0x1);
    (((struct o1F4_uint *)(R14))->v) = (int)((float)((((struct o1F4_int *)(R14))->v)) * 1.5f);
    goto L_C05B612;
    L_C05B612:;
    (((struct oEC_uint *)(R13))->v) = R11;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((((struct oBC_int *)(R13))->v)) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    t43 = (((struct o344_int *)(R13))->v);
    FUN_0c0db470(((((t43 << 1) + t43) << 2) + 0xC1FEFBC), (R14 + 0x30));
    nlPopMatrix(0x1);
    (((struct o6E_ushort *)(R14))->v) = ((((struct o6E_short *)(R13))->v));
    (((struct o220_uint *)(R14))->v) = 0x124E;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = (FUN_0c054ae0(R13));
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((struct o6E_short *)(R14))->v));
    *(unsigned int *)((((int)stk + 0) + 0x8)) = 0x0;
    FUN_0c0a6780(((int)stk + 0), (R14 + 0x48), 0.0f, 0.0f, ((((struct o0_float *)0xC05B75C)->v)));
    u51 = (((struct o8_float *)0xC05B75C)->v);
    (((struct o238_float *)(R14))->v) = u51;
    (((struct o6C_ushort *)(R14))->v) = (*(int *)((((int)stk + 0) + 0x0)));
    (((struct o24C_float *)(R14))->v) = 1.0f;
    (((struct o250_float *)(R14))->v) = u51;
    u53 = (((struct oC_float *)0xC05B75C)->v);
    (((struct o3C_float *)(R14))->v) = (((((struct o30_float *)(R14))->v)) - (((((struct o48_float *)(R14))->v)) * u53));
    (((struct o40_float *)(R14))->v) = (((((struct o34_float *)(R14))->v)) - (((((struct o4C_float *)(R14))->v)) * u53));
    (((struct o44_float *)(R14))->v) = (((((struct o38_float *)(R14))->v)) - (((((struct o50_float *)(R14))->v)) * u53));
    R0 = ((FUN_0c05b274(R13, R12, R14, 0x0, 0x0, u53)));
    goto L_C05B6EA;
    L_C05B5F4:;
    (((struct o1F8_uint *)(R14))->v) = (((((struct o1F8_int *)(R14))->v)) + 0x2);
    (((struct o1F4_uint *)(R14))->v) = (int)((float)((((struct o1F4_int *)(R14))->v)) * 2.5f);
    goto L_C05B612;
    L_C05B50C:;
    R1 = (0x0);
    goto L_C05B51C;
    L_C05B510:;
    t65 = *(short *)((R13 + R0));
    R1 = ((~((((int)t65 >= 0) ? (R11 << (t65 & 31)) : ((-(int)t65 & 31) ? ((int)R11 >> (-(int)t65 & 31)) : ((int)R11 >> 31))) | 0xFF000)));
    goto L_C05B51C;
    L_C05B48C:;
    R0 = (0x344);
    if ((((((struct o344_int *)(R13))->v)) != 0)) goto L_C05B498;
    goto L_C05B494;
    L_C05B494:;
    goto L_C05B6EA;
    L_C05B498:;
    t71 = *(int *)(((((((struct o34C_int *)(R13))->v)) << 2) + 0xC2475D4));
    R0 = (0x21C);
    R5 = (t71);
    if (((int)((((struct o21C_int *)(t71))->v)) <= 0)) goto L_C05B4C4;
    goto L_C05B4AA;
    L_C05B4AA:;
    *(unsigned int *)((R5 + R0)) = ((*(int *)((R5 + R0))) - 1);
    t77 = (((struct oBC_int *)(R13))->v);
    *(unsigned int *)(((((t77 << 2) << 2) << 1) + 0xC247544)) = ((*(int *)(((((t77 << 2) << 2) << 1) + 0xC247544))) + 0x1);
    R0 = (0xC247544);
    R4 = (R11);
    goto L_C05B4C4;
}


int FUN_0c0265ac(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t28;
    int t75;
    int t96;
    int t104;
    int stk[14];

    t0 = (((struct o3A4_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t6 = FUN_0c03227c(a4);
                    if (t6 == 0) {
                        (((struct o2C4_uint *)(a4))->v) = 0x376;
                        (((struct o2CC_uint *)(a4))->v) = 0x1;
                        nlPushMatrix(0x0);
                        nlUnitMatrix();
                        nlRotateAY(((((struct o6E_short *)(a4))->v)));
                        nlRotateAX(0x2000);
                        *(float *)(((int)stk + 12)) = 0.0f;
                        *(float *)(((int)stk + 16)) = 0.0f;
                        *(float *)(((int)stk + 20)) = -0.75f;
                        FUN_0c0db470((((int)stk + 0) + 0xC), ((int)stk + 0));
                        *(float *)(((((int)stk + 0) + 0x18) + 0x0)) = (*(float *)(((int)stk + 0)));
                        *(float *)((((((int)stk + 0) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 4)));
                        *(float *)((((((int)stk + 0) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 8)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x4B0 + a4)) = *(struct mv3 *)((((int)stk + 0) + 0x18)); }
                        nlPopMatrix(0x1);
                        (((struct o20C_uint *)(a4))->v) = 0x20000;
                        (((struct o4C8_uint *)(a4))->v) = 0x2;
                        (((struct o4C4_uint *)(a4))->v) = 0x2;
                        (((struct o534_uint *)(a4))->v) = 0x0;
                        FUN_0c0264ba(a4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
                        (((struct o4E8_uint *)(a4))->v) = 0x3;
                        (((struct o3A4_uint *)(a4))->v) = 0x2;
                        t104 = 0x3A4;
                    } else {
                        t104 = 0x2BC;
                        if (((((struct o2BC_int *)(a4))->v)) == 0x37E) {
                            (((struct o4E8_uint *)(a4))->v) = 0x3;
                            (((struct o3A4_uint *)(a4))->v) = 0x4;
                            t104 = 0x3A4;
                        }
                    }
                } else {
                    t104 = t0;
                    if (t0 == 4) {
                        t28 = FUN_0c03227c(a4);
                        t104 = t28;
                        if (t28 == 0) {
                            (((struct o2C4_uint *)(a4))->v) = 0x376;
                            (((struct o2CC_uint *)(a4))->v) = 0x1;
                            (((struct o20C_uint *)(a4))->v) = 0x20000;
                            (((struct o4C8_uint *)(a4))->v) = 0x2;
                            (((struct o4C4_uint *)(a4))->v) = 0x2;
                            (((struct o534_uint *)(a4))->v) = 0x0;
                            FUN_0c0264ba(a4);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
                            (((struct o3A4_uint *)(a4))->v) = 0x2;
                            t104 = 0x3A4;
                        }
                    }
                }
            } else {
                if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                    (((struct o2B4_uint *)(a4))->v) = (((((struct o2B4_int *)(a4))->v)) - 1);
                }
                t104 = 0x34;
                if (((((struct o34_float *)(a4))->v)) > ((((struct o390_float *)(a4))->v))) {
                } else {
                    t104 = (FUN_0c02a19a(a4, a5, a6, a7));
                }
            }
        } else {
            if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                (((struct o2B4_uint *)(a4))->v) = (((((struct o2B4_int *)(a4))->v)) - 1);
            }
            t75 = FUN_0c03374c(a4);
            t104 = t75;
            if (t75 == 0) {
            } else {
                if (t75 != 1) {
                    t104 = t75;
                    if (t75 != 2) {
                    } else {
                        (((struct o4C4_uint *)(a4))->v) = 0x6;
                        (((struct o34_float *)(a4))->v) = ((((struct o390_float *)(a4))->v));
                        (((struct o544_uint *)(a4))->v) = 0x10;
                        (((struct o534_uint *)(a4))->v) = 0x0;
                        FUN_0c0321d4(a4, ((((struct o544_int *)(a4))->v)));
                        (((struct o4E8_uint *)(a4))->v) = 0x2;
                        (((struct o3A4_uint *)(a4))->v) = 0x3;
                        t104 = 0x3A4;
                    }
                } else {
                    (((struct o2C4_uint *)(a4))->v) = 0x378;
                    (((struct o2CC_uint *)(a4))->v) = 0x1;
                    (((struct o3A4_uint *)(a4))->v) = (((((struct o3A4_int *)(a4))->v)) + 0x1);
                    t104 = 0x3A4;
                }
            }
        }
    } else {
        t96 = (((struct o3B0_int *)(a4))->v);
        (((struct o3B0_uint *)(a4))->v) = (t96 + 0x1);
        t104 = 0x3B0;
        if ((int)t96 <= (int)0x1E) {
        } else {
            FUN_0c033850(a4);
            (((struct o2C4_uint *)(a4))->v) = 0x377;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o4C4_uint *)(a4))->v) = 0x2;
            (((struct o3A4_uint *)(a4))->v) = (((((struct o3A4_int *)(a4))->v)) + 0x1);
            t104 = 0x3A4;
        }
    }
    return t104;
}

void FUN_0c211122(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC2111AC))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbwb((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}
