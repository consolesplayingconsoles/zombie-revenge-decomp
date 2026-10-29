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
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(int);
int FUN_0c0e6248(int);
int pdVibMxStart(int, int);
int FUN_0c05e6dc(int a4, int a5, int a6);
int FUN_0c0cc108(int a4);
int FUN_0c069152(int a4, int a5, int a6, int a7);


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

    FUN_0c0e6248(a4);
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

int FUN_0c069152(int a4, int a5, int a6, int a7)
{
    int t0;
    float u4;
    int t31;
    int t32;
    int t33;
    int t79;
    float u80;
    float u81;
    int t73;
    float u74;
    float u75;
    int t67;
    float u68;
    float u69;
    int t46;
    int t54;
    int t84;
    int t119;
    float u133;
    float u155;
    int t29;
    int t30;
    float u34;
    float u35;
    int t61;
    float u62;
    float u63;
    int t48;
    int t49;
    float u51;
    float u52;
    int stk[11];

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if ((*(float *)((a4 + 0x34))) > 30.0f) {
                u4 = *(float *)((a4 + 0x34));
                *(float *)((a4 + 0x34)) = (u4 + 0.199999988f);
                if ((u4 + 0.199999988f) > 35.0f) {
                    FUN_0c0e19f2(a4, a5, a6, a7);
                }
            } else {
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.699999988f);
            }
            *(float *)((a4 + 0x74)) = ((*(float *)((a4 + 0x74))) + 0.0599999987f);
        }
    } else {
        t31 = 0x0;
        t32 = 0x0;
        t33 = 0x0;
        for (;;) {
            t79 = t31;
            u80 = u34;
            u81 = u35;
            if ((*(int *)((t33 + 0xC247030))) == 4) {
                t31 = 0xC246FF0;
                t31 = (t31 + t32);
                t31 = (*(int *)((t31 + 0x0)));
                u35 = (*(float *)((a4 + 0x30)));
                u34 = (*(float *)((t31 + 0x30)));
                u34 = (u34 - u35);
                u34 = _builtin_fabsf(u34);
                t73 = t31;
                u74 = u34;
                u75 = u35;
                if (4.0f > u34) {
                    u34 = (*(float *)((t31 + 0x38)));
                    u35 = (*(float *)((a4 + 0x38)));
                    u34 = (u34 - u35);
                    u34 = _builtin_fabsf(u34);
                    t67 = t31;
                    u68 = u34;
                    u69 = u35;
                    if (4.0f > u34) {
                        u34 = (*(float *)((t31 + 0x34)));
                        u35 = (*(float *)((a4 + 0x34)));
                        u34 = (u34 - u35);
                        u34 = _builtin_fabsf(u34);
                        if (10.0999994f > u34) {
                            if ((*(int *)((a4 + 0xA0))) == 8) {
                                t31 = 0xBE;
                                t46 = ((int (*)(int))(FUN_0c0cc3f8))(t31);
                            } else {
                                t48 = t29;
                                t49 = t30;
                                u51 = u34;
                                u52 = u35;
                            }
                            u34 = u51;
                            u35 = u52;
                            t29 = t48;
                            t30 = t49;
                            t31 = 0x229A9;
                            t54 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(t31, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t29 = (*(int *)0xC2475B0);
                            t30 = (*(int *)((a4 + 0xA0)));
                            t29 = (t29 | t30);
                            *(unsigned int *)0xC2475B0 = t29;
                            FUN_0c016a64();
                            t30 = (*(int *)((a4 + 0x80)));
                            t30 = (t30 + 0x1);
                            *(unsigned int *)((a4 + 0x80)) = t30;
                        } else {
                            t61 = t31;
                            u62 = u34;
                            u63 = u35;
                        }
                        t67 = t61;
                        u68 = u62;
                        u69 = u63;
                    }
                    t73 = t67;
                    u74 = u68;
                    u75 = u69;
                }
                t79 = t73;
                u80 = u74;
                u81 = u75;
            }
            u34 = u80;
            u35 = u81;
            t29 = 0x8;
            t31 = t79;
            t33 = (t33 + 0x4);
            t32 = (t32 + 0x4);
            if ((unsigned int)t33 >= (unsigned int)t29) {
                break;
            }
        }
        t84 = *(int *)((a4 + 0xA0));
        if (t84 != 1) {
            if (t84 != 8) {
            } else {
                FUN_0c0c60d0((a4 + 0x30), 0xC0FB043, 0x7);
            }
        } else {
            FUN_0c0c60d0((a4 + 0x30), 0xC0FB03C, 0x7);
        }
    }
    nlPushMatrix(0x0);
    t119 = *(int *)((a4 + 0xA0));
    if (t119 != 1) {
        if (t119 != 8) {
        } else {
            *(volatile int *)((a4 + 0x98));
            *(volatile int *)((a4 + 0xA4));
            *(unsigned int *)(((0x98 + a4) + 0x0)) = (FUN_0c0e5f1c());
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            nlRotateAY((*(short *)((a4 + 0x62))));
            nlRotateAZ((*(short *)((a4 + 0x64))));
            nlRotateAX((*(short *)((a4 + 0x60))));
            u133 = *(float *)((a4 + 0x74));
            nlScale(u133, u133, u133);
            FUN_0c0de000((*(float *)((a4 + 0x74))));
            FUN_0c0c465c(((*(int *)((a4 + 0x78))) + (*(int *)((a4 + 0x98)))));
        }
    } else {
        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x300);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAY(((*(short *)((a4 + 0x62))) + (*(int *)((a4 + 0x98)))));
        nlRotateAZ((*(short *)((a4 + 0x64))));
        nlRotateAX((*(short *)((a4 + 0x60))));
        u155 = *(float *)((a4 + 0x74));
        nlScale(u155, u155, u155);
        FUN_0c0de000((*(float *)((a4 + 0x74))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
    }
    return nlPopMatrix(0x1);
}
