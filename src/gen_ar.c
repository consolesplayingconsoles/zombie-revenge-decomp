/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0110c6(int, int);
int FUN_0c016a64(void);
int FUN_0c01cdc2(int);
int FUN_0c01e7e8(int, int, int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c08d834(int);
int FUN_0c08d840(int, float);
int FUN_0c090bf0(int);
int FUN_0c0c465c(int);
int FUN_0c0c60d0(int, int, int);
int FUN_0c0cc054(int, int);
extern int FUN_0c0cc3f8();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19f2(int, int, int, int);
int _modls(void);
int _quick_odd_mvn(int);
int FUN_0c0e6248(int);
int pdVibMxStart(int, int);
int FUN_0c05e6dc(int a4, int a5, int a6);
int FUN_0c0cc108(int a4);
int FUN_0c069152(int a4, int a5, int a6, int a7);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };



int FUN_0c0cc108(int a4)
{
    int t126;
    int t1;
    int t7;
    float u26;
    int t30;
    int t31;
    int t41;
    int t51;
    int t55;
    int t65;
    int t66;
    int t68;
    int t69;
    int t76;
    int t77;
    int t84;
    int t88;
    int t100;
    int t117;
    int t110;
    int t104;
    int t94;
    int t79;
    int t71;
    int t89;
    int t91;
    int stk[16];

    { struct mvb4 { char c[4]; }; *(struct mvb4 *)(((int)stk + 4)) = *(struct mvb4 *)(0xC1E9DF8); }
    t126 = a4;
    if (a4 != 9) {
    } else {
        t1 = *(int *)0xC20A810;
        nlPushMatrix(0x0);
        FUN_0c0dcc70(-4.0f, -2.96999979f, -7.5f);
        FUN_0c0110c6((*(int *)0xC20A810), 0x2);
        FUN_0c0dcc70(0.799999952f, 0.0f, 0.0f);
        t7 = 0x0;
        for (;;) {
            if ((unsigned char)(*(signed char *)((((t1 << 2) + 0xC20A714) + 0x0))) != (unsigned char)(*(signed char *)((((int)stk + 4) + t7)))) {
                t7 = (t7 + 0x1);
                if ((int)t7 >= (int)0x3) {
                    break;
                }
                continue;
            }
            break;
        }
        FUN_0c0110c6(t7, 0x1);
        FUN_0c0dcc70(0.799999952f, 0.0f, 0.0f);
        FUN_0c0110c6((*(signed char *)((((t1 << 2) + 0xC20A714) + 0x1))), 0x1);
        FUN_0c0dcc70(0.799999952f, 0.0f, 0.0f);
        FUN_0c0110c6((unsigned char)(*(signed char *)((((t1 << 2) + 0xC20A714) + 0x2))), 0x2);
        FUN_0c0dcc70(0.799999952f, 0.0f, 0.0f);
        FUN_0c0110c6((unsigned char)(*(signed char *)((((t1 << 2) + 0xC20A714) + 0x3))), 0x3);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        u26 = -4.0f;
        u26 = u26 + 0.799999952f * (float)(*(int *)0xC20A814);
        FUN_0c0dcc70(u26, -2.63999987f, -7.5f);
        FUN_0c0110c6((*(int *)0xC20A814), 0x1);
        t30 = nlPopMatrix(0x1);
        t31 = *(int *)0xC2498F4;
        if ((t31 & 0x4) != 0) {
            *(unsigned char *)(((int)stk + 8)) = 0x1;
            *(unsigned char *)(((int)stk + 9)) = (*(signed char *)((((t1 << 2) + 0xC20A714) + 0x0)));
            *(unsigned char *)(((int)stk + 10)) = (*(signed char *)((((t1 << 2) + 0xC20A714) + 0x1)));
            *(unsigned char *)(((int)stk + 11)) = (*(signed char *)((((t1 << 2) + 0xC20A714) + 0x2)));
            *(unsigned char *)(((int)stk + 12)) = (*(signed char *)((((t1 << 2) + 0xC20A714) + 0x3)));
            pdVibMxStart(0x2, (((int)stk + 4) + 0x4));
            t117 = (FUN_0c0cc3f8((*(int *)((((*(int *)0xC20A810) << 2) + 0xC20A794))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        } else {
            t41 = *(int *)0xC20A814;
            if ((0xC0C0 & t31) == 0) {
                t51 = t30;
                if ((0x402 & t31) != 0) {
                    if ((t31 & 0x2) != 0) {
                        if ((int)t41 < (int)0x4) {
                            *(unsigned int *)0xC20A814 = ((*(int *)0xC20A814) + 0x1);
                        }
                    } else {
                        if ((int)t41 > 0) {
                            *(unsigned int *)0xC20A814 = ((*(int *)0xC20A814) - 1);
                        }
                    }
                    t51 = 0x2;
                }
                t110 = t51;
            } else {
                t55 = 0xFFFFFFFF;
                if ((t31 & 0x8080) != 0) {
                    t55 = 0x1;
                }
                if (t41 != 0) {
                    if (t41 != 1) {
                        if (t41 != 2) {
                            if (t41 != 3) {
                                t65 = *(signed char *)((((t1 << 2) + 0xC20A714) + 0x3));
                                t66 = (unsigned char)t65;
                                if (((int)(t55 + (unsigned char)t65) >= (int)0x1) && ((int)(t55 + (unsigned char)t65) <= (int)0xFF)) {
                                    *(unsigned char *)((((t1 << 2) + 0xC20A714) + 0x3)) = (t55 + (unsigned char)t65);
                                    t66 = (t55 + (unsigned char)t65);
                                }
                                t71 = t66;
                            } else {
                                t68 = *(signed char *)((((t1 << 2) + 0xC20A714) + 0x2));
                                t69 = (unsigned char)t68;
                                if (((int)(t55 + (unsigned char)t68) >= (int)0xF) && ((int)(t55 + (unsigned char)t68) <= (int)0x4F)) {
                                    *(unsigned char *)((((t1 << 2) + 0xC20A714) + 0x2)) = (t55 + (unsigned char)t68);
                                    t69 = (t55 + (unsigned char)t68);
                                }
                                t71 = t69;
                            }
                            t79 = t71;
                        } else {
                            t76 = *(signed char *)((((t1 << 2) + 0xC20A714) + 0x1));
                            t77 = t76;
                            if (((int)(t55 + t76) >= 0) && ((int)(t55 + t76) <= (int)0x7)) {
                                *(unsigned char *)((((t1 << 2) + 0xC20A714) + 0x1)) = (t55 + t76);
                                t77 = (t55 + t76);
                            }
                            t79 = t77;
                        }
                        t94 = t79;
                    } else {
                        t84 = 0x0;
                        for (;;) {
                            if ((unsigned char)(*(signed char *)((((t1 << 2) + 0xC20A714) + 0x0))) != (unsigned char)(*(signed char *)((((int)stk + 4) + t84)))) {
                                t88 = t84;
                                t84 = (t84 + 0x1);
                                if ((int)t84 >= (int)0x3) {
                                    t89 = t88; break;
                                }
                                continue;
                            }
                            t89 = t84; break;
                        }
                        if (((int)(t55 + t84) >= 0) && ((int)(t55 + t84) <= (int)0x3)) {
                            *(unsigned char *)((((t1 << 2) + 0xC20A714) + 0x0)) = (*(signed char *)((((int)stk + 4) + (t55 + t84))));
                            t91 = (t55 + t84);
                        } else {
                            t91 = t89;
                        }
                        t94 = t91;
                    }
                    t104 = t94;
                } else {
                    t100 = *(int *)0xC20A810;
                    if ((int)(t55 + t100) < 0) {
                    } else {
                        if ((unsigned int)(t55 + t100) >= (unsigned int)0x1F) {
                        } else {
                            *(unsigned int *)0xC20A810 = (t55 + t100);
                        }
                    }
                    t104 = t41;
                }
                t110 = t104;
            }
            t117 = t110;
        }
        t126 = t117;
    }
    return t126;
}

