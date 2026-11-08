/* Straight-line functions with calls and guards (batch gen_fw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0208fc(int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0c74e8(int);
int FUN_0c0c7574(int);
int FUN_0c0c78b6(int, int, int);
int FUN_0c2300e4(void);
int FUN_0c230334(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c021524(int a4, int a5);
int _pd_peripheral_set_data(int a4, int a5, int a6);
int FUN_0c057950(int a4, int a5);
int FUN_0c0c7970(int a4, int a5);
int FUN_0c0b2a28(int a4);
int FUN_0c04fc18(int a4);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o22_short { char p[0x22]; short v; };
struct o358_int { char p[0x358]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_int { int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o32C_uint { char p[0x32C]; unsigned int v; };
struct o388_uint { char p[0x388]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o468_float { char p[0x468]; float v; };
struct o8_float { char p[0x8]; float v; };




int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t9;
    int t7;
    int t15;
    int t13;
    int t19;
    int t24;
    int t53;
    int t78;
    int t81;
    int t82;
    int t5;
    int t11;
    int t22;
    int t23;
    int t27;
    int t51;
    int t52;
    int t56;
    int t80;
    int t85;
    int stk[13];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1004 = a5;
    R1008 = a6;
    if ((*(int *)((0xD4 + (*(int *)0xC239F3C)))) == 1) {
        R1016 = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    t9 = 0x0;
    if (a8 != 0) {
        t7 = 0x1;
        if (a8 != 1) {
            if (a8 != 2) {
            } else {
                t5 = 0xFFFFFFFF;
            }
            t7 = t5;
        }
        t9 = t7;
    }
    t15 = 0x0;
    if (a9 != 0) {
        t13 = 0x1;
        if (a9 != 1) {
            if (a9 != 2) {
            } else {
                t11 = 0xFFFFFFFF;
            }
            t13 = t11;
        }
        t15 = t13;
    }
    syG2DmaSuspendAll();
    FUN_0c230334();
    t19 = R1008;
    if (t19 != 1) {
        if (t19 != 2) {
            if (t19 == 4) {
                R1008 = (R1004);
                R1004 = a4;
                R1012 = (t9 << 2);
                if ((int)a7 > 0) {
                    t24 = 0x0;
                    for (;;) {
                        if ((t24 & 0x7) == 0) {
                            FUN_0c230334();
                            FUN_0c2300e4();
                        } else {
                            t27 = t22;
                        }
                        t22 = t27;
                        t23 = (R1004);
                        t24 = (t24 + 0x1);
                        t22 = (R1008);
                        *(unsigned int *)((t22 + 0x0)) = (*(int *)((t23 + 0x0)));
                        t22 = (R1004);
                        t23 = (R1012);
                        t22 = (t22 + t23);
                        R1004 = t22;
                        R1008 = ((R1008) + (t15 << 2));
                        if ((int)t24 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            R1008 = (R1004);
            R1004 = a4;
            if ((int)a7 > 0) {
                t53 = 0x0;
                for (;;) {
                    if ((t53 & 0x7) == 0) {
                        FUN_0c230334();
                        FUN_0c2300e4();
                    } else {
                        t56 = t51;
                    }
                    t51 = t56;
                    t52 = (R1004);
                    t53 = (t53 + 0x1);
                    t51 = (R1008);
                    *(unsigned short *)((t51 + 0x0)) = (*(short *)((t52 + 0x0)));
                    t52 = (R1004);
                    t52 = (t52 + (t9 << 1));
                    R1004 = t52;
                    R1008 = ((R1008) + (t15 << 1));
                    if ((int)t53 >= (int)a7) {
                        break;
                    }
                }
            }
        }
    } else {
        t78 = R1004;
        R1008 = t78;
        R1004 = a4;
        if ((int)a7 > 0) {
            t81 = t78;
            t82 = 0x0;
            for (;;) {
                if ((t82 & 0x7) == 0) {
                    FUN_0c230334();
                    FUN_0c2300e4();
                } else {
                    t85 = t80;
                }
                t80 = t85;
                t81 = (R1004);
                t82 = (t82 + 0x1);
                t80 = (R1008);
                *(unsigned char *)((t80 + 0x0)) = (*(signed char *)((t81 + 0x0)));
                t81 = (R1004);
                t81 = (t81 + t9);
                R1004 = t81;
                R1008 = ((R1008) + t15);
                if ((int)t82 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    if ((*(int *)((0xD4 + (*(int *)0xC239F3C)))) == 1) {
        _builtin_set_imask(((unsigned int)((((R1016) & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}

int FUN_0c021524(int a4, int a5)
{
    int t0;
    int t2;
    int t152;
    int t4;
    int t5;
    int t17;
    int t37;
    int t38;
    int t61;
    int t62;
    int t64;
    int t87;
    int t129;
    int t84;

    t0 = (((struct o6C_int *)(a4))->v);
    t2 = *(int *)((((((t0 << 2) << 2) << 1) + 0xC246074) + 0x4));
    t152 = t2;
    if ((*(int *)((((((t0 << 2) << 2) << 1) + 0xC246074) + 0x8))) == 0) {
    } else {
        t4 = *(int *)((t2 + 0x0));
        if (t4 != -2) {
            if (t4 != -1) {
                t5 = *(short *)((t2 + 0xC));
                if (((unsigned short)t5 & 0x2000) != 0) {
                    t152 = t2;
                    if (((0xFFFFDFFF & (unsigned short)(*(short *)((t2 + 0xC)))) & ((((struct o8_int *)0xC2462F4)->v))) != 0) {
                        t17 = FUN_0c0208fc(t2);
                        t152 = t2;
                        if ((int)t17 < 0) {
                        } else {
                            (((struct o18_uint *)0xC23ED50)->v) = 0x0;
                            t152 = (t2 + 0x2C);
                        }
                    }
                } else {
                    if (((unsigned short)t5 & 0x8000) != 0) {
                        t152 = t2;
                        if ((int)((((struct o0_int *)0xC2462F4)->v)) <= (int)(0xFFFF7FFF & (unsigned short)(*(short *)((t2 + 0xC))))) {
                            t37 = (((struct o70_int *)(a4))->v);
                            (((struct o70_uint *)(a4))->v) = (t37 + 0x1);
                            t152 = t2;
                            if ((int)t37 > (int)0x5) {
                                (((struct o70_uint *)(a4))->v) = 0x0;
                                t38 = FUN_0c0208fc(t2);
                                t152 = t2;
                                if ((int)t38 >= 0) {
                                    (((struct o18_uint *)0xC23ED50)->v) = 0x0;
                                    t152 = (t2 + 0x2C);
                                }
                            }
                        }
                    } else {
                        if (((unsigned short)(*(short *)((t2 + 0xC))) & 0x4000) != 0) {
                            t61 = (((struct oC_int *)0xC23ED50)->v);
                            t62 = *(short *)((t2 + 0xC));
                            t152 = t2;
                            if (((0x800 & t61) != 0) && ((0x600 & t61) != 0)) {
                                t152 = t2;
                                if ((int)((((struct o18_int *)0xC2462F4)->v)) > (int)((0xFFFFBFFF & (unsigned short)t62) * 0x3C)) {
                                    t64 = FUN_0c0208fc(t2);
                                    t152 = t2;
                                    if ((int)t64 >= 0) {
                                        (((struct o18_uint *)0xC2462F4)->v) = 0x0;
                                        t152 = (t2 + 0x2C);
                                    }
                                }
                            }
                        } else {
                            t152 = t2;
                            if ((((*(int *)0xC23A1A8) & 1) != 0) && (t84 = *(int *)((t2 + 0x0)), (int)t84 < (int)0x29)) {
                            } else {
                                t152 = t2;
                                if ((int)((((struct o18_int *)0xC23ED50)->v)) > (int)((unsigned short)(*(short *)((t2 + 0xC))) * (unsigned short)0x3C)) {
                                    t87 = FUN_0c0208fc(t2);
                                    t152 = t2;
                                    if ((int)t87 >= 0) {
                                        (((struct o18_uint *)0xC23ED50)->v) = 0x0;
                                        t152 = (t2 + 0x2C);
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                t129 = (((struct o0_int *)0xC23ED50)->v);
                t152 = ((*(int *)((((((t129 << 1) + t129) << 2) + ((((struct o50_int *)(a4))->v))) + 0x0))) + ((unsigned short)((((struct o22_short *)(t2))->v)) * 0x2C));
            }
        } else {
            *(unsigned int *)((((((((((struct o6C_int *)(a4))->v)) << 2) << 2) << 1) + 0xC246074) + 0x8)) = 0x0;
            t152 = t2;
        }
    }
    *(unsigned int *)((((((((((struct o6C_int *)(a4))->v)) << 2) << 2) << 1) + 0xC246074) + 0x4)) = t152;
    return 0x6C;
}



int FUN_0c0c7970(int a4, int a5)
{
    int t0;
    int t1;
    int t10;
    int t20;
    int t43;
    int t51;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    t0 = *(int *)((R4 + 0xBC));
    t1 = *(int *)(((0xC246FF0 + (R5 << 2)) + 0x0));
    t10 = (*(int *)((((R5 << 2) + 0xC247030) + 0x0)));
    R0 = (0xBC);
    R12 = (t0);
    R13 = (R5);
    R14 = (((((t0 << 2) + t0) << 2) + 0xC31FCF8));
    R5 = (t1);
    R6 = (0xC246FF0);
    R7 = t10;
    if ((t1 == 0)) goto L_C0C7A98;
    if ((((*(int *)((R5 + 0xC8))) & 0x1CC) == 0)) goto L_C0C79B6;
    if (((int)R7 >= (int)0x2)) goto L_C0C79BA;
    L_C0C79B6:;
    R0 = (0xFFFFFFFF);
    L_C0C7A98:;
    return R0;
    L_C0C79BA:;
    R4 = (0x0);
    L_C0C79D2:;
    if (((int)R4 < (int)(*(int *)((R14 + 0x10))))) goto L_C0C79BE;
    L_C0C79D8:;
    if (((int)R4 >= (int)(*(int *)((R14 + 0x10))))) goto L_C0C7A04;
    t20 = *(int *)((((R4 << 2) + R14) + 0x0));
    *(unsigned int *)((t20 + 0x9C)) = 0x1;
    R14 = (t20);
    if ((R4 == 0)) goto L_C0C7A96;
    FUN_0c0c7574(R14);
    *(unsigned int *)((R14 + 0x98)) = (R12 << 2);
    FUN_0c0c74e8(R14);
    L_C0C7A96:;
    R0 = (0x0);
    goto L_C0C7A98;
    L_C0C7A04:;
    if (((*(int *)((R14 + 0x10))) != 4)) goto L_C0C7A8A;
    R5 = (0x3);
    if (((*(int *)(((R6 + 0x40) + ((*(int *)((0x70 + (*(int *)((R14 + 0xC)))))) << 2)))) == 5)) goto L_C0C7A74;
    R4 = (0x2);
    L_C0C7A20:;
    if (((*(int *)(((R6 + 0x40) + ((*(int *)((0x70 + (*(int *)((R14 + (R4 << 2))))))) << 2)))) != 5)) goto L_C0C7A50;
    R5 = (R4);
    L_C0C7A74:;
    *(unsigned int *)(((int)stk + 4)) = (R5 << 2);
    *(unsigned int *)(((*(int *)((((R5 << 2) + R14) + 0x0))) + 0x9C)) = 0x4;
    FUN_0c0c7574((*(int *)((R14 + (*(int *)(((int)stk + 4)))))));
    L_C0C7A8A:;
    t43 = FUN_0c0c78b6(0x0, R12, R13);
    FUN_0c0c74e8(t43);
    goto L_C0C7A96;
    L_C0C7A50:;
    if (((int)(*(int *)(((*(int *)((R14 + (R5 << 2)))) + 0x94))) <= (int)(*(int *)(((*(int *)((R14 + (R4 << 2)))) + 0x94))))) goto L_C0C7A6E;
    R5 = (R4);
    L_C0C7A6E:;
    t51 = (int)(R4 - 1) >= 0;
    R4 = ((R4 - 1));
    if (t51) goto L_C0C7A20;
    goto L_C0C7A74;
    L_C0C79BE:;
    if (((*(int *)(((*(int *)((((R4 << 2) + R14) + 0x0))) + 0x70))) == R13)) goto L_C0C79D8;
    R4 = ((R4 + 0x1));
    goto L_C0C79D2;
}

int FUN_0c0b2a28(int a4)
{
    (((struct o8_float *)((0x468 + a4)))->v) = 1.0f;
    (((struct o4_float *)((0x468 + a4)))->v) = 1.0f;
    (((struct o468_float *)(a4))->v) = 1.0f;
    (((struct o8_float *)((0x45C + a4)))->v) = 1.0f;
    (((struct o4_float *)((0x45C + a4)))->v) = 1.0f;
    (((struct o45C_float *)(a4))->v) = 1.0f;
    (((struct o284_float *)(a4))->v) = 1.0f;
    (((struct o27C_float *)(a4))->v) = 1.0f;
    (((struct o278_float *)(a4))->v) = 1.0f;
    (((struct o274_float *)(a4))->v) = 1.0f;
    (((struct o32C_uint *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2) << 2) << 2) + 0xC206A24) + ((((((struct oBC_int *)(a4))->v)) << 2) << 2))); }
    (((struct o6E_ushort *)(a4))->v) = (*(int *)((((0xC206A24 + ((((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2) << 2) << 2)) + ((((((struct oBC_int *)(a4))->v)) << 2) << 2)) + 0xC)));
    (((struct o388_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x40000000;
    FUN_0c0855ba(a4);
    FUN_0c0ba6e8(a4);
    FUN_0c0ba776(a4);
    return FUN_0c085638(a4);
}

int FUN_0c04fc18(int a4)
{
    int t1;

    t1 = 0xC1FE708;
    if (((((struct oBC_int *)(a4))->v)) != 0) {
        t1 = 0xC1FE750;
    }
    FUN_0c0b359e(a4, t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2) << 2) << 2) + 0xC206A24) + ((((((struct oBC_int *)(a4))->v)) << 2) << 2))); }
    (((struct o6E_ushort *)(a4))->v) = (*(int *)((((0xC206A24 + ((((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2) << 2) << 2)) + ((((((struct oBC_int *)(a4))->v)) << 2) << 2)) + 0xC)));
    (((struct o20C_uint *)(a4))->v) = 0x20000000;
    *(unsigned int *)((a4 + 0x0)) = 0xC0B35E4;
    return 0x20C;
}


int FUN_0c057950(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t9;
    int t12;
    int t14;
    int t18;
    int t20;
    int t24;
    int t29;
    int t32;
    int t33;
    int t34;
    int t36;
    int t38;
    int t42;
    int t48;
    int t50;
    int t52;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    int T_;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    R5 = a5;
    t0 = R14;
    R1008 = t0;
    t1 = R13;
    R1004 = t1;
    t2 = (((struct oBC_int *)(R4))->v);
    t4 = (*(int *)0xC1FF6D4) != 0;
    R1008 = t0;
    R1004 = t1;
    R14 = (0xC1FF6D4);
    R6 = (((t2 * 0xE) + 0xC247998));
    if (t4) goto L_C05796E;
    L_C057AA0:;
    R0 = (0x0);
    L_C057AA2:;
    return R0;
    L_C05796E:;
    t9 = ((*(int *)0xC23A1A8) & 0x100) != 0;
    if (t9) goto L_C057980;
    R0 = (0xC1FF60C);
    R7 = ((R5 << 2));
    L_C057988:;
    t12 = *(int *)((R7 + R0));
    t14 = (int)(unsigned short)(*(short *)((R6 + 0x2))) > 0;
    R5 = (0xA);
    R7 = (t12);
    if (t14) goto L_C0579C2;
    t18 = *(int *)(((((((struct o358_int *)(R4))->v)) << 2) + 0xC2475D4));
    t20 = (int)(((((struct o21C_int *)(t18))->v)) + R7) > (int)R5;
    R0 = (0x21C);
    R13 = (t18);
    if (t20) goto L_C0579B0;
    *(unsigned int *)((R13 + R0)) = ((*(int *)((R13 + R0))) + R7);
    goto L_C057AA0;
    L_C0579B0:;
    t24 = *(int *)((R13 + R0));
    *(unsigned int *)((R13 + R0)) = ((*(int *)((R13 + R0))) + ((-t24) + 0xA));
    *(unsigned short *)((R6 + 0x2)) = 0x1;
    R7 = ((R7 - ((-t24) + 0xA)));
    L_C0579C2:;
    t29 = (int)(unsigned short)(*(short *)((((((unsigned short)(*(short *)((R6 + 0x2))) - 1) << 1) + (R6 + 0x4)) + 0x0))) >= (int)R5;
    if (t29) goto L_C057A3A;
    t32 = (int)((unsigned short)(*(short *)((((((unsigned short)(*(short *)((R6 + 0x2))) - 1) << 1) + (R6 + 0x4)) + 0x0))) + R7) <= (int)R5;
    if (t32) goto L_C057A24;
    t33 = *(short *)((R6 + 0x2));
    t34 = *(short *)((((((unsigned short)t33 - 1) << 1) + (R6 + 0x4)) + 0x0));
    *(unsigned short *)((((((unsigned short)t33 - 1) << 1) + (R6 + 0x4)) + 0x0)) = ((*(short *)((((((unsigned short)t33 - 1) << 1) + (R6 + 0x4)) + 0x0))) + ((-(unsigned short)t34) + 0xA));
    t36 = *(short *)((R6 + 0x2));
    *(unsigned short *)((R6 + 0x2)) = (t36 + 0x1);
    t38 = (int)(unsigned short)(t36 + 0x1) <= (int)(*(int *)((R14 + 0x0)));
    R7 = ((R7 - ((-(unsigned short)t34) + 0xA)));
    if (t38) goto L_C057A74;
    *(unsigned short *)((R6 + 0x2)) = ((*(short *)((R6 + 0x2))) - 1);
    L_C057A78:;
    t42 = ((*(int *)0xC23A1A8) & 0x101) == 0;
    if (t42) goto L_C057AA0;
    (((struct o21C_uint *)((*(int *)(((((((struct o358_int *)(R4))->v)) << 2) + 0xC2475D4)))))->v) = (unsigned short)(*(short *)(((R6 + 0x4) + (((unsigned short)(*(short *)((R6 + 0x2))) - 1) << 1))));
    goto L_C057AA0;
    L_C057A74:;
    if (((int)R7 > 0)) goto L_C0579C2;
    goto L_C057A78;
    L_C057A24:;
    t48 = *(short *)((R6 + 0x2));
    *(unsigned short *)((((((unsigned short)t48 - 1) << 1) + (R6 + 0x4)) + 0x0)) = ((*(short *)((((((unsigned short)t48 - 1) << 1) + (R6 + 0x4)) + 0x0))) + R7);
    goto L_C057A78;
    L_C057A3A:;
    t50 = *(short *)((R6 + 0x2));
    *(unsigned short *)((R6 + 0x2)) = (t50 + 0x1);
    t52 = (int)(unsigned short)(t50 + 0x1) <= (int)(*(int *)((R14 + 0x0)));
    if (t52) goto L_C057A74;
    *(unsigned short *)((R6 + 0x2)) = ((*(short *)((R6 + 0x2))) - 1);
    R0 = (0xFFFFFFFF);
    goto L_C057AA2;
    L_C057980:;
    R0 = (0xC20C0B8);
    R7 = (((R5 << 2) << 2));
    goto L_C057988;
}

