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
    int stk[12];

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
    t1 = (int)(*(int *)((R4 + 0xBC))) < (int)0x2;
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
    *(unsigned int *)((t10 + 0x21C)) = 0x0;
    *(unsigned int *)((t10 + 0xBC)) = (*(int *)((R13 + 0xBC)));
    *(unsigned int *)(((0x200 + t10) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x2)));
    R0 = (0xE8);
    R14 = (t10);
    if (((int)(*(short *)((R13 + 0xE8))) >= (int)0x4)) goto L_C05B510;
    goto L_C05B500;
    L_C05B500:;
    if (((*(signed char *)((R12 + 0x4))) == 0)) goto L_C05B50C;
    goto L_C05B506;
    L_C05B506:;
    R1 = ((*(int *)((R13 + 0x1EC))));
    goto L_C05B51C;
    L_C05B51C:;
    *(unsigned int *)((R14 + 0x1EC)) = R1;
    *(unsigned int *)(((0x1E8 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x3)));
    *(unsigned int *)(((0x1F4 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x4)));
    *(unsigned int *)(((0x204 + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x5)));
    *(float *)((R14 + 0x1E4)) = (*(float *)((R12 + 0xC)));
    *(unsigned int *)(((0x1FC + R14) + 0x0)) = (unsigned char)(*(signed char *)((R12 + 0x1)));
    *(unsigned int *)((R14 + 0x1F8)) = (unsigned char)(*(signed char *)((R12 + 0x0)));
    *(unsigned int *)(((0x22C + R14) + 0x0)) = (unsigned short)(*(short *)((R12 + 0x8)));
    FUN_0c0cc3f8(0x828A9, R5, R6, R7, F4, F5, F6);
    FUN_0c0cc054((*(int *)((R13 + 0xBC))), 0x5);
    R0 = (0xEC);
    if (((int)(*(int *)((R13 + 0xEC))) <= (int)0x1E)) goto L_C05B612;
    goto L_C05B57C;
    L_C05B57C:;
    if (((int)(*(int *)((R13 + R0))) >= (int)0x3C)) goto L_C05B5F4;
    goto L_C05B584;
    L_C05B584:;
    *(unsigned int *)((R14 + 0x1F8)) = ((*(int *)((R14 + 0x1F8))) + 0x1);
    *(unsigned int *)((R14 + 0x1F4)) = (int)((float)(*(int *)((R14 + 0x1F4))) * 1.5f);
    goto L_C05B612;
    L_C05B612:;
    *(unsigned int *)((R13 + 0xEC)) = R11;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((*(int *)((R13 + 0xBC))) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    t43 = *(int *)((R13 + 0x344));
    FUN_0c0db470(((((t43 << 1) + t43) << 2) + 0xC1FEFBC), (R14 + 0x30));
    nlPopMatrix(0x1);
    *(unsigned short *)((R14 + 0x6E)) = (*(short *)((R13 + 0x6E)));
    *(unsigned int *)((R14 + 0x220)) = 0x124E;
    *(unsigned int *)((((int)stk + 8) + 0x0)) = (FUN_0c054ae0(R13));
    *(unsigned int *)((((int)stk + 8) + 0x4)) = (*(short *)((R14 + 0x6E)));
    *(unsigned int *)((((int)stk + 8) + 0x8)) = 0x0;
    FUN_0c0a6780(((int)stk + 8), (R14 + 0x48), 0.0f, 0.0f, (*(float *)0xC05B75C));
    u51 = *(float *)0xC05B764;
    *(float *)((R14 + 0x238)) = u51;
    *(unsigned short *)((R14 + 0x6C)) = (*(int *)((((int)stk + 8) + 0x0)));
    *(float *)((R14 + 0x24C)) = 1.0f;
    *(float *)((R14 + 0x250)) = u51;
    u53 = *(float *)0xC05B768;
    *(float *)((R14 + 0x3C)) = ((*(float *)((R14 + 0x30))) - ((*(float *)((R14 + 0x48))) * u53));
    *(float *)((R14 + 0x40)) = ((*(float *)((R14 + 0x34))) - ((*(float *)((R14 + 0x4C))) * u53));
    *(float *)((R14 + 0x44)) = ((*(float *)((R14 + 0x38))) - ((*(float *)((R14 + 0x50))) * u53));
    R0 = ((FUN_0c05b274(R13, R12, R14, 0x0, 0x0, u53)));
    goto L_C05B6EA;
    L_C05B5F4:;
    *(unsigned int *)((R14 + 0x1F8)) = ((*(int *)((R14 + 0x1F8))) + 0x2);
    *(unsigned int *)((R14 + 0x1F4)) = (int)((float)(*(int *)((R14 + 0x1F4))) * 2.5f);
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
    if (((*(int *)((R13 + 0x344))) != 0)) goto L_C05B498;
    goto L_C05B494;
    L_C05B494:;
    goto L_C05B6EA;
    L_C05B498:;
    t71 = *(int *)((((*(int *)((R13 + 0x34C))) << 2) + 0xC2475D4));
    R0 = (0x21C);
    R5 = (t71);
    if (((int)(*(int *)((t71 + 0x21C))) <= 0)) goto L_C05B4C4;
    goto L_C05B4AA;
    L_C05B4AA:;
    *(unsigned int *)((R5 + R0)) = ((*(int *)((R5 + R0))) - 1);
    t77 = *(int *)((R13 + 0xBC));
    *(unsigned int *)(((((t77 << 2) << 2) << 1) + 0xC247544)) = ((*(int *)(((((t77 << 2) << 2) << 1) + 0xC247544))) + 0x1);
    R0 = (0xC247544);
    R4 = (R11);
    goto L_C05B4C4;
}

int FUN_0c097870(int a4, int a5, int a6, int a7)
{
    int t0;
    int t5;
    int t90;
    int t6;
    int t10;
    int t16;
    int t18;
    int t21;
    int t28;
    int t34;
    int t41;
    int t47;
    int t53;
    int t60;
    int t66;
    int t67;
    int t93;
    int t94;
    int t96;
    int t79;
    int stk[10];

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((*(int *)((t0 + 0x2EC))) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    t5 = *(int *)((a4 + 0x38));
    t90 = t5;
    if ((int)t5 >= (int)0xE) {
        if ((int)t5 >= (int)0x22) {
            t79 = t5;
        } else {
            t6 = *(int *)((a4 + 0x38));
            nlPushMatrix(0x0);
            FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
            *(unsigned int *)(((int)stk + 4)) = (a4 + 0x44);
            t10 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x0);
                t10 = (t10 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t10 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0xC0));
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t16 = (a4 + 0x68);
            for (;;) {
                FUN_0c097520((t6 - 14), t16, 0x1);
                t18 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t18 + 0x1);
                t16 = (t16 + 0xC);
                if ((int)(t18 + 0x1) >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x100));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x48);
            t21 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x2);
                t21 = (t21 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t21 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), (0x1AC + a4), 0x3, 0xA);
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x180));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x6C);
            t28 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x3);
                t28 = (t28 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t28 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x1C0));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x90);
            t34 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x4);
                t34 = (t34 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t34 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), ((0x1AC + a4) + 0xF0), 0x3, 0xA);
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x240));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x144);
            t41 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x9);
                t41 = (t41 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t41 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x280));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0xB4);
            t47 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x5);
                t47 = (t47 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t47 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x2C0));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0xD8);
            t53 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x6);
                t53 = (t53 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t53 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), ((0x1AC + a4) + 0x1E0), 0x3, 0xA);
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x340));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0xFC);
            t60 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x7);
                t60 = (t60 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t60 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x380));
            t66 = ((a4 + 0x44) + 0x120);
            t67 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), t66, 0x8);
                t67 = (t67 + 0x1);
                t66 = (t66 + 0xC);
                if ((int)t67 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), ((0x1AC + a4) + 0x2D0), 0x3, 0xA);
            nlPopMatrix(0x1);
        }
        t90 = t79;
    }
    t93 = FUN_0c0849da(t90, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t94 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t94 - 1);
    if ((int)(t94 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
        t96 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t96 + 0x1);
        if ((int)(t96 + 0x1) > (int)0x3C) {
            return FUN_0c0e19f2();
        }
        return 0x40;
    }
    return t93;
}

int FUN_0c0265ac(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t20;
    int t35;
    int t28;
    int t30;
    int t55;
    int t75;
    int t85;
    int t79;
    int t96;
    int t99;
    int t104;
    int t88;
    int t62;
    int t41;
    int t23;
    int t82;
    int stk[15];

    t0 = *(int *)((a4 + 0x3A4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t6 = FUN_0c03227c(a4);
                    if (t6 == 0) {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x376;
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        nlPushMatrix(0x0);
                        nlUnitMatrix();
                        nlRotateAY((*(short *)((a4 + 0x6E))));
                        nlRotateAX(0x2000);
                        *(float *)(((int)stk + 16)) = 0.0f;
                        *(float *)(((int)stk + 20)) = 0.0f;
                        *(float *)(((int)stk + 24)) = -0.75f;
                        FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
                        *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
                        *(float *)((((((int)stk + 4) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
                        *(float *)((((((int)stk + 4) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x4B0 + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x18)); }
                        nlPopMatrix(0x1);
                        *(unsigned int *)((a4 + 0x20C)) = 0x20000;
                        *(unsigned int *)((a4 + 0x4C8)) = 0x2;
                        *(unsigned int *)((a4 + 0x4C4)) = 0x2;
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        FUN_0c0264ba(a4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
                        *(unsigned int *)((a4 + 0x4E8)) = 0x3;
                        *(unsigned int *)((a4 + 0x3A4)) = 0x2;
                        t23 = 0x3A4;
                    } else {
                        t20 = 0x2BC;
                        if ((*(int *)((a4 + 0x2BC))) == 0x37E) {
                            *(unsigned int *)((a4 + 0x4E8)) = 0x3;
                            *(unsigned int *)((a4 + 0x3A4)) = 0x4;
                            t20 = 0x3A4;
                        }
                        t23 = t20;
                    }
                    t41 = t23;
                } else {
                    t35 = t0;
                    if (t0 == 4) {
                        t28 = FUN_0c03227c(a4);
                        t30 = t28;
                        if (t28 == 0) {
                            *(unsigned int *)((a4 + 0x2C4)) = 0x376;
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x20C)) = 0x20000;
                            *(unsigned int *)((a4 + 0x4C8)) = 0x2;
                            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            FUN_0c0264ba(a4);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
                            *(unsigned int *)((a4 + 0x3A4)) = 0x2;
                            t30 = 0x3A4;
                        }
                        t35 = t30;
                    }
                    t41 = t35;
                }
                t62 = t41;
            } else {
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    *(unsigned int *)((a4 + 0x2B4)) = ((*(int *)((a4 + 0x2B4))) - 1);
                }
                t55 = 0x34;
                if ((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390)))) {
                } else {
                    t55 = (FUN_0c02a19a(a4, a5, a6, a7));
                }
                t62 = t55;
            }
            t88 = t62;
        } else {
            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                *(unsigned int *)((a4 + 0x2B4)) = ((*(int *)((a4 + 0x2B4))) - 1);
            }
            t75 = FUN_0c03374c(a4);
            t85 = t75;
            if (t75 == 0) {
            } else {
                if (t75 != 1) {
                    t79 = t75;
                    if (t75 != 2) {
                    } else {
                        *(unsigned int *)((a4 + 0x4C4)) = 0x6;
                        *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0x390)));
                        *(unsigned int *)((a4 + 0x544)) = 0x10;
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        FUN_0c0321d4(a4, (*(int *)((a4 + 0x544))));
                        *(unsigned int *)((a4 + 0x4E8)) = 0x2;
                        *(unsigned int *)((a4 + 0x3A4)) = 0x3;
                        t79 = 0x3A4;
                    }
                    t82 = t79;
                } else {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x378;
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
                    t82 = 0x3A4;
                }
                t85 = t82;
            }
            t88 = t85;
        }
        t104 = t88;
    } else {
        t96 = *(int *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3B0)) = (t96 + 0x1);
        t99 = 0x3B0;
        if ((int)t96 <= (int)0x1E) {
        } else {
            FUN_0c033850(a4);
            *(unsigned int *)((a4 + 0x2C4)) = 0x377;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
            *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
            t99 = 0x3A4;
        }
        t104 = t99;
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
