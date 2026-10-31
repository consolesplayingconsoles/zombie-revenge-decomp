/* Straight-line functions with calls and guards (batch gen_hz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c01d562(int, int, int, int, int, int, int, int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c02286c(int, int, float, float);
int FUN_0c022aa6(int);
int FUN_0c02a19a(int);
int FUN_0c03217c(int, int, int);
int FUN_0c032ae6(int);
int FUN_0c032b70(int);
int FUN_0c0346ca(int);
int FUN_0c034d0c(int, int);
int FUN_0c036b64(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c054c8a(int);
int FUN_0c0552dc(int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08455e(float);
int FUN_0c0847a2(int);
int FUN_0c0847a8(float, float, float);
int FUN_0c0847ce(float, float, float);
int FUN_0c0847f4(float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c090bf0(int);
int FUN_0c090dec(int);
int FUN_0c09bd5c(int);
int FUN_0c09d6fe(int, int, int, int);
int FUN_0c09da24(int, int, int);
int FUN_0c09dd7a(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0cfa18();
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int nlUnitMatrix(void);
int FUN_0c09e048(int a4, int a5, int a6, int a7);
int FUN_0c06078c(int a4, int a5, int a6, int a7);
int FUN_0c0d0ffc(int a4);
int FUN_0c020540(int a4);
int FUN_0c026bbc(int a4, int a5);
int FUN_0c05df58(int a4, int a5);
int FUN_0c089578(int a4);
int FUN_0c0a0644(int a4, int a5, int a6, int a7);
int FUN_0c03fb28(int a4);
int FUN_0c0c1f1e(int a4);
int FUN_0c0947c8(int a4);

int FUN_0c09e048(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t7;
    register int t84;
    register int t85;
    register int t91;
    register int t92;
    register int t27;
    register int t28;
    register int t29;
    register int t149;
    register int t169;
    register int t161;
    register int t167;
    register int t163;
    register int t165;
    register int t175;
    register int t171;
    register int t173;
    register int t138;
    register int t139;
    register int t146;
    register int t147;
    register int t105;
    register int t106;
    register int t113;
    register int t114;
    register int t72;
    register int t73;
    register int t79;
    register int t80;
    register int t41;
    register int t42;
    register int t48;
    register int t49;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
    FUN_0c0db470(0xC10C5B8, ((int)stk + 4));
    nlPopMatrix(0x1);
    t7 = *(int *)((a4 + 0x44));
    if (t7 != 0) {
        if (t7 != 1) {
            t84 = 0x1;
            t85 = 0x1;
            t91 = 0x0;
            t92 = 0x0;
            if (t7 != 2) {
                if (t7 != 3) {
                    if (t7 != 4) {
                        t27 = 0x1;
                        t28 = 0x1;
                        t29 = 0x1;
                        if (t7 != 5) {
                            t27 = 0x0;
                            t28 = 0x0;
                            t29 = 0x0;
                        }
                        t41 = t27;
                        t42 = t28;
                        t48 = 0x0;
                        t49 = t29;
                    } else {
                        if ((*(int *)((t0 + 0x2BC))) != 0x5B1) {
                            *(unsigned int *)((a4 + 0x44)) = 0x5;
                            FUN_0c09bd5c(t0);
                        }
                        t41 = 0x1;
                        t42 = 0x1;
                        t48 = 0x1;
                        t49 = 0x1;
                    }
                    t72 = t41;
                    t73 = t42;
                    t79 = t48;
                    t80 = t49;
                } else {
                    if ((*(int *)((t0 + 0x2BC))) == 0x5B1) {
                        FUN_0c0cc3f8(0x334A9, 0x5B0, 0x5B1, 0x2, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc3f8(0x1431A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc3f8(0x532A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc3f8(0x632A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc3f8(0x928A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(unsigned int *)((a4 + 0x44)) = 0x4;
                    } else {
                        if ((*(int *)((t0 + 0x2BC))) != 0x5B0) {
                            *(unsigned int *)((a4 + 0x44)) = 0x2;
                        }
                    }
                    t72 = 0x0;
                    t73 = 0x1;
                    t79 = 0x0;
                    t80 = 0x0;
                }
                t84 = t72;
                t85 = t73;
                t91 = t79;
                t92 = t80;
            }
            t105 = t84;
            t106 = t85;
            t113 = t91;
            t114 = t92;
        } else {
            if ((*(int *)((t0 + 0x2BC))) == 0x5B0) {
                *(unsigned int *)((a4 + 0x44)) = 0x3;
            } else {
                if ((*(int *)((t0 + 0x2BC))) != 0x5AF) {
                    *(unsigned int *)((a4 + 0x44)) = 0x2;
                }
            }
            t105 = 0x0;
            t106 = 0x1;
            t113 = 0x0;
            t114 = 0x0;
        }
        t138 = t105;
        t139 = t106;
        t146 = t113;
        t147 = t114;
    } else {
        if ((*(int *)((t0 + 0x2BC))) == 0x5AF) {
            *(unsigned int *)((a4 + 0x44)) = 0x1;
        } else {
            if ((*(int *)((t0 + 0x2BC))) != 0x5AE) {
                FUN_0c09dd7a();
            }
        }
        t138 = 0x0;
        t139 = 0x0;
        t146 = 0x0;
        t147 = 0x0;
    }
    t149 = *(int *)((a4 + 0x48));
    if ((int)t149 < (int)0x1A4) {
        *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) + 0x1);
    }
    FUN_0c0844dc(0x4A00, 0x2900, 0x0, 0.713999987f);
    FUN_0c0844dc(0x4A00, 0x2900, 0x1, 0.713999987f);
    FUN_0c08455e(0.649999976f);
    FUN_0c0847a2(0x1);
    FUN_0c0847f4(0.0f, ((float)t149 * 0.00238095224f));
    FUN_0c0847a8(1.0f, 1.0f, 1.0f);
    t169 = (FUN_0c0847ce(1.0f, 1.0f, 1.0f));
    if (t139 != 0) {
        t161 = FUN_0c09d6fe((a4 + 0x4C), 0xC10C57C, ((int)stk + 4), (((t138 == 0)) ? 1 : 0));
        t167 = t161;
        if (t161 == 0) {
            t163 = *(int *)((a4 + 0x44));
            t165 = t163;
            if (t163 == 2) {
                *(float *)((t0 + 0x45C)) = 1.0f;
                *(float *)((t0 + 0x460)) = 1.0f;
                *(float *)((t0 + 0x464)) = 1.0f;
                t165 = (FUN_0c09dd7a());
            }
            t167 = t165;
        }
        t169 = t167;
    }
    t175 = t169;
    if (t147 != 0) {
        t171 = FUN_0c09da24((0x1C64 + a4), t0, t146);
        t173 = t171;
        if (t171 == 0) {
            *(float *)((t0 + 0x45C)) = 1.0f;
            *(float *)((t0 + 0x460)) = 1.0f;
            *(float *)((t0 + 0x464)) = 1.0f;
            t173 = (FUN_0c09dd7a());
        }
        t175 = t173;
    }
    return t175;
}

int FUN_0c06078c(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t1;
    register int t9;
    register int t22;
    register int t23;
    register int t25;
    register int t26;
    register int t62;
    register int t71;
    register float u63;

    t1 = *(int *)0xC247CAC;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        FUN_0c090dec(a4);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        *(unsigned int *)((a4 + 0x0)) = 0xC0605D8;
    } else {
        t9 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t9 - 1);
        if ((int)(t9 - 1) <= 0) {
            FUN_0c0e19f2(a4, a5, a6, a7);
        }
    }
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0272199996f);
    t22 = *(int *)((a4 + 0x248));
    t23 = 0x3CDEFC7A;
    t25 = ((((((t22 - 1) - 1) << 1) + ((t22 - 1) - 1)) << 2) + (0x25C + a4));
    t26 = ((((((t22 - 1) << 1) + (t22 - 1)) << 2) + (0x25C + a4)) + 0xC);
    for (;;) {
        if ((unsigned int)t26 <= (unsigned int)((0x25C + a4) + 0x24)) {
            break;
        }
        t26 = (t26 - 12);
        t23 = t26;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)(t25); }
        t25 = (t25 - 12);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x274 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x268 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + a4)) = *(struct mv3 *)((a4 + 0x30)); }
    if ((*(int *)((a4 + 0xD8))) == 0) {
        FUN_0c01cdc2(a4, t26);
    } else {
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8(0xF31A9, t26, (t22 - 1), (0x25C + a4), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        }
    }
    FUN_0c0848bc(0.799999952f, 0.399999976f, 1.0f);
    t62 = 0x0;
    for (;;) {
        if ((int)t62 >= (int)(*(int *)((a4 + 0x248)))) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((((t62 << 1) + t62) << 2) + (0x25C + a4)));
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        t71 = FUN_0c0da2e0();
        nlRotateAZ((t71 << 1));
        u63 = 8.0f;
        u63 = (u63 - (float)t62);
        nlScale(u63, u63, u63);
        FUN_0c0de000(u63);
        FUN_0c0c465c((*(int *)((a4 + 0x220))));
        nlPopMatrix(0x1);
        t62 = (t62 + 0x1);
    }
    return FUN_0c0849da();
}

int FUN_0c0d0ffc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;

    t8 = *(int *)0xC9433D4;
    t9 = *(int *)0xC23A1A8;
    t10 = *(int *)((((*(int *)0xC23A1BC) << 2) + 0xC246FF0));
    if ((*(int *)0xC9433CC) == 0) {
        t11 = 0xC246FF0;
        if (((t9 & 0x20) == 0) && (t0 = *(int *)0xC23EDB0, t0 != 0)) {
        } else {
            if ((((t9 & 0x20) != 0) && (t1 = *(int *)0xC23EDB0, t1 != 0)) || ((t2 = *(int *)((t8 + 0x40)), t2 == 0) || (t3 = *(int *)((t10 + 0x394)), t3 == -1))) {
            } else {
                t0 = *(int *)0xC9433C4;
                *(unsigned int *)0xC9433C4 = (t0 + 0x1);
                if ((t0 + 0x1) == (*(int *)0xC9433C8)) {
                    *(unsigned int *)0xC9433CC = 0x2;
                }
            }
            *(float *)((a4 + 0x40)) = 547.0f;
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + -72.0f);
            *(float *)((a4 + 0x48)) = 0.00139999995f;
            if ((*(int *)0xC9433CC) == 0) {
                *(float *)((a4 + 0x44)) = 415.0f;
                *(float *)((a4 + 0x68)) = 1.0f;
                if ((((*(int *)0xC23A1A8) & 0x20) != 0) && (t4 = *(int *)0xC9433A8, t4 != 0)) {
                    *(float *)((a4 + 0x48)) = 0.00109999999f;
                }
                *(unsigned int *)((a4 + 0x70)) = 0x3006;
                t0 = ((int (*)(int, int, int, int))(FUN_0c0cfa18))((a4 + 0x34), (*(int *)0xC9433C4), t10, t8);
                if ((0x20 & (*(int *)0xC23A1A8)) != 0) {
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 24.0f);
                    *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x34))) + 0x2050);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                }
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x35))) + 0x2050);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = 0x2035;
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x36))) + 0x2050);
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x37))) + 0x2050);
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = 0x2035;
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x38))) + 0x2050);
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = (0x2050 + (*(signed char *)((a4 + 0x39))));
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                t0 = (FUN_0c0c0340((a4 + 0x3C)));
            } else {
                t1 = *(int *)0xC9433CC;
                t2 = t1;
                if ((t1 != 1) && (t1 != 2)) {
                } else {
                    t1 = 0x205A;
                    if (((*(int *)0xC23A258) & 1) != 0) {
                        t1 = 0x2050;
                    }
                    *(float *)((a4 + 0x48)) = 0.00109999999f;
                    u0 = 0.599999964f;
                    u0 = u0 + 0.399999976f * (FUN_0c0da410(((((*(int *)0xC23A258) << 8) << 2) << 2)));
                    *(float *)((a4 + 0x68)) = u0;
                    if ((((*(int *)0xC23A1A8) & 0x20) != 0) && (t5 = *(int *)0xC9433A8, t5 != 0)) {
                        *(float *)((a4 + 0x48)) = 0.00109999999f;
                    }
                    *(unsigned int *)((a4 + 0x70)) = 0x3006;
                    t3 = ((int (*)(int, int))(FUN_0c0cfa18))((a4 + 0x34), (*(int *)0xC9433C4));
                    if ((0x20 & (*(int *)0xC23A1A8)) != 0) {
                        *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 24.0f);
                        *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x34))) + t1);
                        FUN_0c0c0340((a4 + 0x3C));
                        *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                    }
                    *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x35))) + t1);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(unsigned int *)((a4 + 0x3C)) = 0x2035;
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x36))) + t1);
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x37))) + t1);
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(unsigned int *)((a4 + 0x3C)) = 0x2035;
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x38))) + t1);
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(unsigned int *)((a4 + 0x3C)) = (t1 + (*(signed char *)((a4 + 0x39))));
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                    t2 = (FUN_0c0c0340((a4 + 0x3C)));
                }
                t0 = t2;
            }
            t11 = t0;
        }
        t0 = t11;
    } else {
        *(float *)((a4 + 0x40)) = 547.0f;
        *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + -72.0f);
        *(float *)((a4 + 0x48)) = 0.00139999995f;
        if ((*(int *)0xC9433CC) == 0) {
            *(float *)((a4 + 0x44)) = 415.0f;
            *(float *)((a4 + 0x68)) = 1.0f;
            if ((((*(int *)0xC23A1A8) & 0x20) != 0) && (t6 = *(int *)0xC9433A8, t6 != 0)) {
                *(float *)((a4 + 0x48)) = 0.00109999999f;
            }
            *(unsigned int *)((a4 + 0x70)) = 0x3006;
            t1 = ((int (*)(int, int, int, int))(FUN_0c0cfa18))((a4 + 0x34), (*(int *)0xC9433C4), t10, t8);
            if ((0x20 & (*(int *)0xC23A1A8)) != 0) {
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 24.0f);
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x34))) + 0x2050);
                FUN_0c0c0340((a4 + 0x3C));
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
            }
            *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x35))) + 0x2050);
            FUN_0c0c0340((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x3C)) = 0x2035;
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
            FUN_0c0c0340((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x36))) + 0x2050);
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
            FUN_0c0c0340((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x37))) + 0x2050);
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
            FUN_0c0c0340((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x3C)) = 0x2035;
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
            FUN_0c0c0340((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x38))) + 0x2050);
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
            FUN_0c0c0340((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x3C)) = (0x2050 + (*(signed char *)((a4 + 0x39))));
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
            t1 = (FUN_0c0c0340((a4 + 0x3C)));
        } else {
            t2 = *(int *)0xC9433CC;
            t3 = t2;
            if ((t2 != 1) && (t2 != 2)) {
            } else {
                t2 = 0x205A;
                if (((*(int *)0xC23A258) & 1) != 0) {
                    t2 = 0x2050;
                }
                *(float *)((a4 + 0x48)) = 0.00109999999f;
                u0 = 0.599999964f;
                u0 = u0 + 0.399999976f * (FUN_0c0da410(((((*(int *)0xC23A258) << 8) << 2) << 2)));
                *(float *)((a4 + 0x68)) = u0;
                if ((((*(int *)0xC23A1A8) & 0x20) != 0) && (t7 = *(int *)0xC9433A8, t7 != 0)) {
                    *(float *)((a4 + 0x48)) = 0.00109999999f;
                }
                *(unsigned int *)((a4 + 0x70)) = 0x3006;
                t4 = ((int (*)(int, int))(FUN_0c0cfa18))((a4 + 0x34), (*(int *)0xC9433C4));
                if ((0x20 & (*(int *)0xC23A1A8)) != 0) {
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 24.0f);
                    *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x34))) + t2);
                    FUN_0c0c0340((a4 + 0x3C));
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                }
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x35))) + t2);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = 0x2035;
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x36))) + t2);
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x37))) + t2);
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = 0x2035;
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = ((*(signed char *)((a4 + 0x38))) + t2);
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                FUN_0c0c0340((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = (t2 + (*(signed char *)((a4 + 0x39))));
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 24.0f);
                t3 = (FUN_0c0c0340((a4 + 0x3C)));
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c020540(int a4)
{
    int stk[6];
    register int t17;
    register int t19;
    register int t20;
    register int t24;
    register int t27;
    register int t34;
    register int t5;

    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x388)) = 0x0;
    *(float *)((a4 + 0x390)) = 0.0f;
    *(float *)((a4 + 0x214)) = (*(float *)((((((*(int *)((a4 + 0xC0))) << 2) << 1) + 0xC1FE510) + 0x0)));
    *(float *)((a4 + 0x218)) = (*(float *)(((0xC1FE510 + (((*(int *)((a4 + 0xC0))) << 2) << 1)) + 0x4)));
    *(unsigned int *)((a4 + 0xD8)) = 0x0;
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0xCC)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0xD0)) = 0xFFFFFFFF;
    if (((*(int *)0xC23A1A4) != 0) && (t5 = *(int *)((a4 + 0xC0)), t5 == 17)) {
        *(unsigned int *)((a4 + 0xC4)) = 0x1;
    }
    FUN_0c0855ba(a4);
    FUN_0c0ba6e8(a4);
    FUN_0c0ba776(a4);
    FUN_0c085638(a4);
    FUN_0c01d562(a4, 0xC1EFAE0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    FUN_0c0bb0f4(a4);
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x2;
    *(unsigned int *)((a4 + 0x474)) = 0x0;
    *(unsigned int *)((a4 + 0x478)) = 0x0;
    *(unsigned int *)((a4 + 0x480)) = 0x0;
    *(unsigned int *)((a4 + 0x484)) = 0x0;
    *(unsigned int *)((a4 + 0x494)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x490)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x4A4)) = (*(int *)0xC23ED50);
    *(unsigned int *)((a4 + 0x4DC)) = 0x0;
    *(unsigned int *)((a4 + 0x508)) = 0x0;
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    *(unsigned int *)((a4 + 0x514)) = 0x0;
    *(unsigned int *)((a4 + 0x54C)) = 0x0;
    *(unsigned int *)((a4 + 0x5E8)) = 0x0;
    *(unsigned int *)((a4 + 0x500)) = 0x1;
    *(unsigned int *)((a4 + 0x4C4)) = 0x0;
    *(unsigned int *)((a4 + 0x4C8)) = 0xE;
    *(unsigned int *)((a4 + 0x4CC)) = 0x0;
    *(unsigned int *)((a4 + 0x4D0)) = 0x0;
    *(unsigned int *)((a4 + 0x5C0)) = 0x0;
    *(unsigned int *)((a4 + 0x5C8)) = (*(int *)0xC246300);
    *(unsigned int *)((a4 + 0x5CC)) = (*(int *)0xC246300);
    *(unsigned int *)((a4 + 0x544)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    t17 = *(int *)((a4 + 0x4F0));
    t19 = ((int (*)(int))((*(int *)(((((t17 << 2) + t17) << 2) + 0xC1F8E3C)))))(a4);
    t20 = *(int *)((a4 + 0x4F4));
    t24 = ((int (*)(int))((*(int *)((((*(int *)(((0x4F8 + a4) + 0x0))) << 2) + (*(int *)((0xC1F79B8 + (((t20 << 1) + t20) << 2)))))))))(a4);
    if ((*(int *)((a4 + 0x47C))) != 0) {
        t27 = ((int (*)(int))((*(int *)((a4 + 0x47C)))))(a4);
    }
    *(unsigned int *)((a4 + 0x530)) = 0x0;
    FUN_0c036b64(a4);
    if ((int)(*(int *)((a4 + 0x554))) > 0) {
        t34 = FUN_0c0552dc(a4, (*(int *)((a4 + 0x554))));
        if ((int)t34 < 0) {
            *(unsigned int *)((a4 + 0x554)) = 0x1;
        } else {
            *(unsigned int *)((a4 + 0x554)) = 0x0;
        }
    } else {
        *(unsigned int *)((a4 + 0x554)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x0)) = 0xC0201F4;
    return 0x554;
}

int FUN_0c026bbc(int a4, int a5)
{
    int stk[6];
    register int t1;
    register int t7;
    register int t15;
    register int t55;
    register int t56;

    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    *(unsigned int *)((a4 + 0xD8)) = 0x0;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x3A0)) = 0x0;
    t1 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x55C)) = ((*(int *)((((*(int *)(((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t1 << 2) + t1) << 2))))))) + (((*(int *)((a4 + 0x544))) << 2) << 2)) + 0x4))) * (*(int *)0xC247070));
    *(unsigned int *)((a4 + 0x20C)) = 0x80;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    t7 = *(int *)((a4 + 0x544));
    if (t7 != 0) {
        if (t7 == 1) {
            FUN_0c032b70(a4);
            FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
        } else {
            if (t7 == 2) {
                FUN_0c032b70(a4);
                FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
            } else {
                if (t7 != 3) {
                } else {
                    t15 = FUN_0c0346ca((a4 + 0x30));
                    if (t15 != 0) {
                        FUN_0c03217c(a4, (*(int *)((a4 + 0x54C))), (*(int *)((a4 + 0x544))));
                        FUN_0c02286c(a4, 0x28, 0.0f, 0.0199999996f);
                    } else {
                        *(unsigned int *)((a4 + 0x544)) = 0x1;
                        FUN_0c032b70(a4);
                        FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
                    }
                }
            }
        }
        if ((unsigned int)((*(int *)0xC23A258) & 0x7) > (unsigned int)(*(int *)(((0xBC + a4) + 0x0)))) {
            FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        }
        *(unsigned int *)((a4 + 0x568)) = (*(int *)((a4 + 0x310)));
        *(unsigned int *)((a4 + 0x310)) = 0x0;
        *(unsigned int *)((a4 + 0x564)) = 0x0;
        *(unsigned int *)((a4 + 0x56C)) = 0x0;
        *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
        return 0x4F8;
    }
    if ((int)(*(int *)0xC23EDA4) >= (int)0xA) {
        t55 = FUN_0c034d0c(a4, a5);
        if (t55 == 0) {
            *(unsigned int *)((a4 + 0x4C8)) = 0x3;
            return FUN_0c02a19a(a4);
        }
        *(unsigned int *)((a4 + 0x524)) = 0x1;
        t56 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((((t56 << 2) + t56) << 2) + 0xC1F8E44))) + 0x2)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x534)) = 0x9;
        *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x568)) = (*(int *)((a4 + 0x310)));
        *(unsigned int *)((a4 + 0x310)) = 0x0;
        *(unsigned int *)((a4 + 0x564)) = 0x0;
        *(unsigned int *)((a4 + 0x56C)) = 0x0;
        FUN_0c032ae6(a4);
        FUN_0c022aa6(a4);
        *(unsigned int *)0xC247D04 = 0x7;
        *(unsigned int *)0xC247CD0 = 0xC102924;
        *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
        *(unsigned char *)0xC247CB9 = (*(signed char *)((a4 + 0x510)));
        if ((unsigned int)((*(int *)0xC23A258) & 0x7) > (unsigned int)(*(int *)(((0xBC + a4) + 0x0)))) {
            FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        }
        *(unsigned int *)((a4 + 0x568)) = (*(int *)((a4 + 0x310)));
        *(unsigned int *)((a4 + 0x310)) = 0x0;
        *(unsigned int *)((a4 + 0x564)) = 0x0;
        *(unsigned int *)((a4 + 0x56C)) = 0x0;
        *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
        return 0x4F8;
    }
    *(unsigned int *)((a4 + 0x544)) = 0x1;
    FUN_0c032b70(a4);
    FUN_0c02286c(a4, 0x28, (*(float *)0xC026E50), 0.0199999996f);
    if ((unsigned int)((*(int *)0xC23A258) & 0x7) > (unsigned int)(*(int *)(((0xBC + a4) + 0x0)))) {
        FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    }
    *(unsigned int *)((a4 + 0x568)) = (*(int *)((a4 + 0x310)));
    *(unsigned int *)((a4 + 0x310)) = 0x0;
    *(unsigned int *)((a4 + 0x564)) = 0x0;
    *(unsigned int *)((a4 + 0x56C)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c05df58(int a4, int a5)
{
    int stk[16];
    register int t1;

    t1 = FUN_0c0e19aa(0xC05E158, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    FUN_0c0cc3f8(0x432A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned int *)((t1 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) | 0xFF0);
    if ((*(int *)((a4 + 0x50C))) != 0) {
        *(unsigned int *)((t1 + 0xD4)) = 0x1;
        *(unsigned int *)((t1 + 0xCC)) = (*(int *)((a4 + 0x510)));
    }
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = 1.0f;
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)((t1 + 0x22C)) = 0x5A;
    *(float *)((t1 + 0x24C)) = (*(float *)((a5 + 0xC)));
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC0F9C20); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0F9C2C); }
    FUN_0c0dbda0(((((*(int *)((a4 + 0xBC))) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    FUN_0c0db470((((int)stk + 4) + 0x10), (t1 + 0x30));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x1C) + 0x8);
    FUN_0c0a79fa((((int)stk + 4) + 0x1C), ((((int)stk + 4) + 0x1C) + 0x4), ((((int)stk + 4) + 0x1C) + 0x8));
    nlUnitMatrix();
    nlRotateAY((*(int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0))));
    nlRotateAX((*(int *)(((((int)stk + 4) + 0x1C) + 0x0))));
    nlRotateAZ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    FUN_0c0db470((((int)stk + 4) + 0x4), (t1 + 0x48));
    FUN_0c0a7714((((int)stk + 4) + 0x1C), ((((int)stk + 4) + 0x1C) + 0x4), (*(float *)((t1 + 0x48))), (*(float *)((t1 + 0x4C))), (*(float *)((t1 + 0x50))));
    *(unsigned short *)((t1 + 0x6E)) = (*(int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0)));
    *(unsigned short *)((t1 + 0x6C)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x0)));
    nlPopMatrix(0x1);
    *(unsigned int *)((t1 + 0x220)) = 0x3EC;
    *(unsigned int *)((t1 + 0x220)) = 0x3DE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(float *)((t1 + 0x24C)) = (*(float *)0xC05E1F8);
    *(unsigned int *)((t1 + 0x244)) = 0x12;
    *(unsigned int *)((t1 + 0xEC)) = 0x0;
    return 0xEC;
}

int FUN_0c089578(int a4)
{
    int stk[16];
    register int t3;
    register int t4;
    register int t8;
    int t13;
    int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t21;
    register float u25;
    register float u26;
    register int t29;
    register int t32;
    int t35;
    register int t42;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t3 = *(short *)(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x3CE));
    t4 = FUN_0c0e19aa(0xC089778, 0x6C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t4);
    *(unsigned int *)((t4 + 0x64)) = 0x14;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    *(unsigned short *)((t4 + 0x52)) = t3;
    t8 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x70)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    *(unsigned short *)((t8 + 0x8A)) = t3;
    *(float *)((t8 + 0x90)) = 10.0f;
    *(unsigned short *)((t8 + 0x9A)) = 0x394;
    *(unsigned short *)((t8 + 0xA0)) = 0xF;
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 20)) = 0xC10AAB4;
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    for (;;) {
        *(unsigned int *)(((int)stk + 12)) = ((((FUN_0c0da2e0()) & 0x7FFF) + (t3 + 0x7FFF)) - 16384);
        t13 = FUN_0c0da2e0();
        FUN_0c0da2e0();
        t15 = FUN_0c0da2e0();
        t16 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 16)) = (-((0x1FFF & t13) + 0x1555));
        if ((int)(0x7 & t15) >= 0) {
            t17 = 0x0;
            t18 = t16;
            for (;;) {
                FUN_0c0da2e0();
                t21 = FUN_0c0e19aa(0xC0899D0, 0x6C, (*(int *)0xC23ECF0));
                FUN_0c0e19d0(t21);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t21 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
                u25 = *(float *)((t18 + 0x0));
                t18 = (t18 + 0x4);
                u26 = u25;
                u26 = u26 + 0.03125f * (float)(unsigned char)(FUN_0c0da2e0());
                *(float *)((t21 + 0x58)) = u26;
                *(unsigned int *)(((0x60 + t21) + 0x0)) = ((FUN_0c0da2e0()) & 0x1F);
                nlUnitMatrix();
                t29 = FUN_0c0da2e0();
                nlRotateAY((0xFFFFFE00 + ((t29 & 0x3FF) + (*(int *)(((int)stk + 12))))));
                t32 = FUN_0c0da2e0();
                nlRotateAX((0x80 + ((*(int *)(((int)stk + 16))) - (unsigned char)t32)));
                t35 = FUN_0c0da2e0();
                *(float *)((t21 + 0x44)) = ((FUN_0c0da410((0x3FFF & t35))) + 1.5999999f);
                FUN_0c0db470((t21 + 0x3C), (t21 + 0x3C));
                t17 = (t17 + 0x1);
                if ((int)t17 > (int)(0x7 & t15)) {
                    break;
                }
            }
        }
        t42 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t42 - 1);
        if ((t42 - 1) != 0) continue;
        break;
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0a0644(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t1 = *(int *)((a4 + 0x30));
    if (((*(int *)((t1 + 0x290))) & 0x40000000) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t2 = *(int *)((0xC247030 + ((*(int *)((0xBC + t1))) << 2)));
    if (t2 == 8) {
        return t2;
    }
    nlPushMatrix(0x0);
    u0 = 0.099999994f;
    if (((*(int *)0xC23A258) & 1) != 0) {
        u0 = 1.0f;
    }
    t2 = 0xC10CD18;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x40));
        FUN_0c0dcca0(t2);
        FUN_0c0dccf0();
        nlRotateAY((*(short *)((t0 + 0x3CE))));
        nlRotateAX((*(short *)((t0 + 0x3CC))));
        nlPushMatrix(0x0);
        u1 = *(float *)0xC10CD68;
        nlScale(u1, u1, 1.0f);
        FUN_0c0848bc(((*(float *)((t3 + 0xC10CD30))) * u0), ((*(float *)((t3 + 0xC10CD40))) * u0), ((*(float *)((t3 + 0xC10CD50))) * u0));
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(int *)0xC10CD60)) {
                break;
            }
            FUN_0c0de000((*(float *)0xC10CD68));
            FUN_0c0c47ae(0x291);
            t5 = (t5 + 0x1);
        }
        nlPopMatrix(0x1);
        u1 = *(float *)0xC10CD6C;
        nlScale(u1, u1, 1.0f);
        FUN_0c0848bc(((*(float *)((t4 + 0xC10CD34))) * u0), ((*(float *)((t4 + 0xC10CD44))) * u0), ((*(float *)((t4 + 0xC10CD54))) * u0));
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(int *)0xC10CD64)) {
                break;
            }
            FUN_0c0de000((*(float *)0xC10CD6C));
            FUN_0c0c47ae(0x3DA);
            t5 = (t5 + 0x1);
        }
        t2 = (t2 + 0xC);
        t4 = (t4 + 0x8);
        t3 = (t3 + 0x8);
        if ((unsigned int)t2 < (unsigned int)0xC10CD30) continue;
        break;
    }
    nlPopMatrix(0x1);
    return FUN_0c0849da();
}

int FUN_0c03fb28(int a4)
{
    int stk[12];
    register int t0;
    register float u4;
    register float t8;
    register int t15;
    register int t36;
    register int t71;
    int t96;
    register int t98;
    register int t110;
    register int t82;
    register int t42;
    register int t21;
    register int t39;
    register int t76;
    register int t104;

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x25C))) + -0.00999999978f);
                u4 = *(float *)0xC03FD6C;
                if (u4 > (*(float *)((a4 + 0x25C)))) {
                    *(float *)((a4 + 0x25C)) = u4;
                }
                nlAddVector((a4 + 0x48), (0x258 + a4));
                t8 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0xC));
                if (t8 > ((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x4C))))) {
                    *(float *)((a4 + 0x4C)) = (t8 - (*(float *)((a4 + 0x34))));
                    *(float *)((a4 + 0x25C)) = 0.0f;
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    t21 = 0x4EC;
                } else {
                    t15 = 0x2EC;
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        t15 = (FUN_0c041dd0(a4));
                    }
                    t21 = t15;
                }
                t42 = t21;
            } else {
                if (t0 == 3) {
                    nlAddVector((a4 + 0x48), (0x258 + a4));
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    }
                    t39 = (FUN_0c041f2a(a4));
                } else {
                    t36 = t0;
                    if (t0 == 4) {
                        t36 = (FUN_0c041f2a(a4));
                    }
                    t39 = t36;
                }
                t42 = t39;
            }
            t82 = t42;
        } else {
            *(float *)((a4 + 0x268)) = ((*(float *)((a4 + 0x268))) + (*(float *)(((0x26C + a4) + 0x0))));
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 24)) = (*(float *)((a4 + 0x268)));
            FUN_0c0dc5a0();
            nlRotateAZ((*(short *)(((*(int *)0xC247C58) + 0x64))));
            nlRotateAY((-(*(short *)((a4 + 0x6E)))));
            FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
            nlPopMatrix(0x1);
            nlAddVector3op((0x258 + a4), ((*(int *)0xC247C58) + 0x30), ((int)stk + 4));
            nlSubVector((0x258 + a4), (a4 + 0x30));
            nlAddVector((a4 + 0x48), (0x258 + a4));
            if ((*(float *)((a4 + 0x268))) > 50.0f) {
                nlScaleUnitVector((0x258 + a4), ((int)stk + 4), (*(float *)((a4 + 0x26C))));
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                t76 = 0x4EC;
            } else {
                t71 = 0x2EC;
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    t71 = (FUN_0c041dd0(a4));
                }
                t76 = t71;
            }
            t82 = t76;
        }
        t110 = t82;
    } else {
        if ((int)(*(int *)0xC2462F4) < (int)0x3) {
            *(float *)((a4 + 0x26C)) = 1.0f;
            *(float *)((a4 + 0x268)) = 0.0f;
            *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            FUN_0c041dd0(a4);
            *(unsigned int *)((a4 + 0x2D4)) = 0x3;
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x200);
            t104 = 0x2D4;
        } else {
            t96 = *(int *)((a4 + 0x2EC));
            t98 = t96;
            if ((0xC & t96) != 0) {
                t98 = (FUN_0c041dd0(a4));
            }
            t104 = t98;
        }
        t110 = t104;
    }
    return t110;
}

int FUN_0c0c1f1e(int a4)
{
    register int t1;
    register int t38;
    register int t43;
    register int t41;
    int t51;
    register int t73;
    register int t86;
    register int t81;
    register int t111;
    register int t126;
    register int t151;
    register int t145;
    register int t148;
    register int t146;
    register int t154;
    register int t161;
    register int t194;
    register int t199;
    register int t204;
    register int t6;
    register int t185;
    register int t47;
    register int t179;
    register int t94;
    register int t90;
    register int t83;
    register int t173;
    register int t168;
    register int t129;
    register int t130;
    register int t163;
    register int t156;

    t1 = *(int *)((a4 + 0x38));
    if (((*(int *)0xC2497B8) & 0x80000) != 0) {
        *(float *)((t1 + 0x30)) = 200.0f;
        *(float *)((t1 + 0x34)) = 1.0f;
        *(float *)((t1 + 0x38)) = 130.0f;
    }
    if ((((*(int *)0xC2497B0) & 0x40000) != 0) && (t6 = *(int *)0xC2497B8, (t6 & 0x4000000) == 0)) {
    } else {
        FUN_0c085704((*(int *)((a4 + 0x38))));
    }
    *(unsigned int *)((t1 + 0x2E4)) = 0x0;
    if (((*(int *)0xC2497E8) & 0x2) != 0) {
        if ((0x40 & (*(int *)0xC2497E0)) != 0) {
            t38 = *(int *)((t1 + 0x2E8));
            *(unsigned int *)((t1 + 0x2E8)) = (t38 - 1);
            if ((int)(t38 - 1) >= 0) {
            } else {
                *(unsigned int *)((t1 + 0x2E8)) = 0x0;
            }
            t47 = 0x2E8;
        } else {
            t43 = 0x2E4;
            if ((0x80 & (*(int *)0xC2497E0)) != 0) {
                t41 = *(int *)((t1 + 0x2E8));
                *(unsigned int *)((t1 + 0x2E8)) = (t41 + 0x1);
                if ((int)(t41 + 0x1) > (int)0x4) {
                    *(unsigned int *)((t1 + 0x2E8)) = 0x4;
                }
                t43 = 0x2E8;
            }
            t47 = t43;
        }
        t185 = t47;
    } else {
        t51 = *(int *)0xC2497E8;
        if ((t51 & 0x200) != 0) {
            if ((0x10 & (*(int *)0xC2497E8)) != 0) {
                *(unsigned int *)((t1 + 0x2E4)) = 0x2;
                t94 = 0x2E4;
            } else {
                t73 = *(int *)0xC2497E8;
                if ((t73 & 32) != 0) {
                    *(unsigned int *)((t1 + 0x2E4)) = 0x1;
                    t90 = 0x2E4;
                } else {
                    t86 = t73;
                    if ((t73 & 192) != 0) {
                        if ((0x40 & (*(int *)0xC2497E0)) != 0) {
                            *(unsigned int *)((t1 + 0x2F0)) = 0x1;
                            *(unsigned int *)((t1 + 0x2C8)) = 0x1;
                            *(unsigned int *)((t1 + 0x2D0)) = 0x1;
                            t83 = 0x2D0;
                        } else {
                            t81 = t73;
                            if ((0x80 & (*(int *)0xC2497E0)) != 0) {
                                *(unsigned int *)((t1 + 0x2F0)) = 0x0;
                                *(unsigned int *)((t1 + 0x2C8)) = 0x0;
                                t81 = 0x2C8;
                            }
                            t83 = t81;
                        }
                        t86 = t83;
                    }
                    t90 = t86;
                }
                t94 = t90;
            }
            t179 = t94;
        } else {
            if ((0x10 & t51) != 0) {
                t111 = *(int *)((a4 + 0x80));
                *(unsigned int *)((a4 + 0x80)) = (t111 - 2);
                if ((int)(t111 - 2) >= 0) {
                } else {
                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                }
                t173 = 0x80;
            } else {
                if (((*(int *)0xC2497E8) & 32) != 0) {
                    t126 = *(int *)((a4 + 0x80));
                    *(unsigned int *)((a4 + 0x80)) = (t126 + 0x2);
                    if ((int)(t126 + 0x2) <= (int)0x5BF) {
                    } else {
                        *(unsigned int *)((a4 + 0x80)) = 0x5BF;
                    }
                    t168 = 0x80;
                } else {
                    if ((((*(int *)0xC2497E0) & 0x40) == 0) && ((t129 = *(int *)0xC249808, (unsigned int)t129 <= (unsigned int)0x28) || (t130 = *(int *)0xC2497E8, (t130 & 0x40) == 0))) {
                        if (((*(int *)0xC2497E0) & 0x80) == 0) {
                            t151 = 0x28;
                            if ((unsigned int)(*(int *)0xC249808) > (unsigned int)0x28) {
                                t145 = *(int *)0xC2497E8;
                                t148 = t145;
                                if ((t145 & 0x80) != 0) {
                                    t146 = *(int *)((a4 + 0x80));
                                    *(unsigned int *)((a4 + 0x80)) = (t146 + 0x1);
                                    if ((int)(t146 + 0x1) > (int)0x5BF) {
                                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                                    }
                                    t148 = 0x80;
                                }
                                t151 = t148;
                            }
                            t156 = t151;
                        } else {
                            t154 = *(int *)((a4 + 0x80));
                            *(unsigned int *)((a4 + 0x80)) = (t154 + 0x1);
                            if ((int)(t154 + 0x1) > (int)0x5BF) {
                                *(unsigned int *)((a4 + 0x80)) = 0x0;
                            }
                            t156 = 0x80;
                        }
                        t163 = t156;
                    } else {
                        t161 = *(int *)((a4 + 0x80));
                        *(unsigned int *)((a4 + 0x80)) = (t161 - 1);
                        if ((int)(t161 - 1) < 0) {
                            *(unsigned int *)((a4 + 0x80)) = 0x5BF;
                        }
                        t163 = 0x80;
                    }
                    t168 = t163;
                }
                t173 = t168;
            }
            t179 = t173;
        }
        t185 = t179;
    }
    t194 = t185;
    if (((*(int *)0xC2497E0) & 0x400) != 0) {
        *(unsigned int *)(((0x2C4 + t1) + 0x0)) = (*(int *)((a4 + 0x80)));
        *(unsigned int *)((t1 + 0x2CC)) = 0x1;
        t194 = 0x2CC;
    }
    t199 = t194;
    if (((*(int *)0xC2497E0) & 0x200) != 0) {
        *(unsigned int *)(((0x2C8 + t1) + 0x0)) = (*(int *)((a4 + 0x80)));
        *(unsigned int *)((t1 + 0x2D0)) = 0x1;
        t199 = 0x2D0;
    }
    t204 = t199;
    if (((*(int *)0xC2497E0) & 0x2) != 0) {
        *(unsigned int *)((t1 + 0x2D4)) = ((*(int *)((t1 + 0x2D4))) + 0x1);
        t204 = 0x2D4;
    }
    return t204;
}

int FUN_0c0947c8(int a4)
{
    int stk[18];
    register int t1;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u12;
    register int t13;
    register int t15;
    register float u19;
    register float u21;
    register float u24;
    register int t31;
    register int t34;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t1 = FUN_0c0e19aa(0xC0949B4, 0x3C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0xBC)));
    nlPushMatrix(0x0);
    t8 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t9 = *(int *)(((*(int *)(((int)stk + 4))) + 0xBC));
    *(unsigned int *)(((int)stk + 8)) = (((((((t9 << 1) + t9) << 2) << 2) << 2) + 0xC23F268) + 0xC);
    *(unsigned int *)(((int)stk + 4)) = 0xD;
    t10 = 0xFFFFA001;
    for (;;) {
        t11 = 0x4;
        u12 = 1.5f;
        for (;;) {
            t13 = FUN_0c0da2e0();
            t15 = FUN_0c0e19aa(0xC094AD8, 0x68, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t15);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t15 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
            u19 = -0.099999994f;
            u19 = u19 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            *(float *)((t15 + 0x44)) = u19;
            u21 = u12;
            u21 = u21 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
            *(float *)((t15 + 0x40)) = u21;
            *(float *)(((t15 + 0x48) + 0x0)) = ((float)t13 * 3.05185094e-05f);
            *(float *)((t15 + 0x4C)) = ((float)(FUN_0c0da2e0()) * 3.05185094e-05f);
            *(float *)((t15 + 0x50)) = (1.0f - ((float)t13 * 3.05185094e-05f));
            u24 = 3.0f;
            u24 = u24 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t15 + 0x54)) = u24;
            *(unsigned int *)((t15 + 0x58)) = t10;
            *(unsigned int *)(((0x60 + t15) + 0x0)) = ((FUN_0c0da2e0()) & 0x3);
            *(unsigned int *)((t15 + 0x64)) = 0x28;
            nlUnitMatrix();
            nlRotateAY((*(short *)((t8 + 0x3CE))));
            nlRotateAX((*(short *)((t8 + 0x3CC))));
            t31 = FUN_0c0da2e0();
            nlRotateAZ((0xFFFFF800 + ((t31 & 0xFFF) + t10)));
            FUN_0c0db470((t15 + 0x3C), (t15 + 0x3C));
            t11 = (t11 - 0x1);
            u12 = (u12 * 0.899999976f);
            if (t11 == 0) {
                break;
            }
        }
        t34 = *(int *)(((int)stk + 4));
        t10 = (t10 + 0xE38);
        *(unsigned int *)(((int)stk + 4)) = (t34 - 1);
        if ((t34 - 1) != 0) continue;
        break;
    }
    return nlPopMatrix(0x1);
}
