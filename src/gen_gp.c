/* Straight-line functions with calls and guards (batch gen_gp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d3ee(int, int);
int FUN_0c01d636(int, int, int);
int FUN_0c033c8c(int, int, int, float);
float FUN_0c036efc(int, int, int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int FUN_0c018232(int a4, int a5, int a6);
int FUN_0c032be0(int a4);

int FUN_0c018232(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t4;
    int t79;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t14;
    int t23;
    int t34;
    int t45;
    int t56;
    int t67;
    int t9;
    int t74;
    int t75;
    int t76;
    int t77;
    int t62;
    int t63;
    int t64;
    int t65;
    int t51;
    int t52;
    int t53;
    int t54;
    int t40;
    int t41;
    int t42;
    int t43;
    int t29;
    int t30;
    int t31;
    int t32;
    int t19;
    int t20;
    int t21;

    t1 = *(int *)0xC23ED50;
    t2 = 0xC1A1C48;
    if ((*(int *)0xC23A180) == 2) {
        t2 = 0xC1A1A24;
    }
    t4 = *(int *)(((t1 << 2) + t2));
    t79 = t2;
    if (t4 != 0) {
        t5 = 0xC23A180;
        t6 = 0xC23ED50;
        t7 = (t1 << 2);
        t8 = a6;
        t10 = t4;
        for (;;) {
            t11 = *(short *)((t10 + 0x14));
            if (t11 != -1) {
                t12 = *(short *)((t10 + 0x14));
                t7 = 0xC018EB8;
                t5 = 0xC23ECE4;
                t8 = (*(int *)((t5 + 0x0)));
                if (t12 != 15) {
                    if (t12 != 14) {
                        if (t12 != 17) {
                            if (t12 != 18) {
                                if (t12 != 16) {
                                    if (t12 == 19) {
                                        t7 = 0xC018F34;
                                        t14 = FUN_0c0e19aa(t7, 0x244, t8);
                                        t9 = t14;
                                        t7 = t14;
                                        FUN_0c0e19d0(t7);
                                        t6 = 0xC0E61D4;
                                        t5 = t10;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)(t5); }
                                        t5 = t10;
                                        t6 = 0xC0E6248;
                                        t5 = (t5 + 0xC);
                                        FUN_0c0e6248();
                                        t5 = (*(int *)((t10 + 0x18)));
                                        *(unsigned int *)((t9 + 0x22C)) = t5;
                                    } else {
                                        t19 = t6;
                                        t20 = t7;
                                        t21 = t8;
                                    }
                                    t29 = t5;
                                    t30 = t19;
                                    t31 = t20;
                                    t32 = t21;
                                } else {
                                    t7 = 0xC018EF8;
                                    t23 = FUN_0c0e19aa(t7, 0x244, t8);
                                    t9 = t23;
                                    t7 = t23;
                                    FUN_0c0e19d0(t7);
                                    t6 = 0xC0E61D4;
                                    t5 = t10;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)(t5); }
                                    t5 = t10;
                                    t6 = 0xC0E6248;
                                    t5 = (t5 + 0xC);
                                    FUN_0c0e6248();
                                    t8 = 0x0;
                                    t7 = t9;
                                    FUN_0c01d636(t7, (*(int *)((t10 + 0x18))), t8);
                                }
                                t40 = t29;
                                t41 = t30;
                                t42 = t31;
                                t43 = t32;
                            } else {
                                t7 = 0xC018EBC;
                                t34 = FUN_0c0e19aa(t7, 0x244, t8);
                                t9 = t34;
                                t7 = t34;
                                FUN_0c0e19d0(t7);
                                t6 = 0xC0E61D4;
                                t5 = t10;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)(t5); }
                                t5 = t10;
                                t6 = 0xC0E6248;
                                t5 = (t5 + 0xC);
                                FUN_0c0e6248();
                                t7 = t9;
                                FUN_0c01d3ee(t7, (*(int *)((t10 + 0x18))));
                            }
                            t51 = t40;
                            t52 = t41;
                            t53 = t42;
                            t54 = t43;
                        } else {
                            t45 = FUN_0c0e19aa(t7, 0x244, t8);
                            t9 = t45;
                            t7 = t45;
                            FUN_0c0e19d0(t7);
                            t6 = 0xC0E61D4;
                            t5 = t10;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)(t5); }
                            t5 = t10;
                            t6 = 0xC0E6248;
                            t5 = (t5 + 0xC);
                            FUN_0c0e6248();
                            t7 = t9;
                            FUN_0c01d3ee(t7, (*(int *)((t10 + 0x18))));
                        }
                        t62 = t51;
                        t63 = t52;
                        t64 = t53;
                        t65 = t54;
                    } else {
                        t56 = FUN_0c0e19aa(t7, 0x244, t8);
                        t9 = t56;
                        t7 = t56;
                        FUN_0c0e19d0(t7);
                        t6 = 0xC0E61D4;
                        t5 = t10;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)(t5); }
                        t5 = t10;
                        t6 = 0xC0E6248;
                        t5 = (t5 + 0xC);
                        FUN_0c0e6248();
                        t8 = 0x1;
                        t7 = t9;
                        FUN_0c01d636(t7, (*(int *)((t10 + 0x18))), t8);
                    }
                    t74 = t62;
                    t75 = t63;
                    t76 = t64;
                    t77 = t65;
                } else {
                    t67 = FUN_0c0e19aa(t7, 0x244, t8);
                    t9 = t67;
                    t7 = t67;
                    FUN_0c0e19d0(t7);
                    t6 = 0xC0E61D4;
                    t5 = t10;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x30)) = *(struct mv3 *)(t5); }
                    t5 = t10;
                    t6 = 0xC0E6248;
                    t5 = (t5 + 0xC);
                    FUN_0c0e6248();
                    *(unsigned int *)(((0x224 + t9) + 0x0)) = (*(short *)((t10 + 0x16)));
                    t8 = 0x0;
                    t7 = t9;
                    FUN_0c01d636(t7, (*(int *)((t10 + 0x18))), t8);
                }
                t10 = (t10 + 0x1C);
                t5 = t74;
                t6 = t75;
                t7 = t76;
                t8 = t77;
                continue;
            }
            break;
        }
        t79 = t11;
    }
    return t79;
}

int FUN_0c032be0(int a4)
{
    int t0;
    float t1;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u13;
    float u14;
    int t19;
    int t21;
    int t37;
    int t39;
    float u15;
    int stk[28];

    t0 = *(int *)((a4 + 0x510));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x3C)) = *(struct mv3 *)(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F274)); }
    *(float *)(((int)stk + 76)) = 10.0f;
    *(float *)(((int)stk + 80)) = (1.0f + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)(((int)stk + 56)) = 10.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    t1 = FUN_0c036efc((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x28), (0x4B0 + a4), ((int)stk + 4));
    nlAddVector((a4 + 0x48), (0x4B0 + a4));
    u3 = *(float *)((a4 + 0x48));
    u4 = *(float *)((a4 + 0x4C));
    u5 = *(float *)((a4 + 0x50));
    u6 = (u4 * u4);
    u6 = u6 + u3 * u3;
    u7 = u6;
    u7 = u7 + u5 * u5;
    if (!((*(float *)(((int)stk + 4))) > _builtin_sqrtf(u7))) {
        *(float *)((a4 + 0x48)) = (((*(float *)((a4 + 0x48))) * (*(float *)(((int)stk + 4)))) / _builtin_sqrtf(u7));
        *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x4C))) * (*(float *)(((int)stk + 4)))) / _builtin_sqrtf(u7));
        u13 = *(float *)((a4 + 0x50));
        u14 = *(float *)(((int)stk + 4));
        *(float *)((a4 + 0x50)) = ((u13 * u14) / _builtin_sqrtf(u7));
        u15 = ((u13 * u14) / _builtin_sqrtf(u7));
    }
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    t19 = *(int *)((a4 + 0x4EC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t19 << 1) + t19) << 2) + 0xC246498)) = *(struct mv3 *)((a4 + 0x30)); }
    if ((int)(*(int *)((a4 + 0x4EC))) > 0) {
        t21 = 0x1;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)((((((t21 - 1) << 1) + (t21 - 1)) << 2) + 0xC246498)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(((((t21 << 1) + t21) << 2) + 0xC246498)); }
            FUN_0c033c8c((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 0x5, 0.5f);
            t21 = (t21 + 0x1);
            if ((int)t21 > (int)(*(int *)((a4 + 0x4EC)))) {
                break;
            }
        }
    }
    if (!(t1 > 4.0f)) {
        *(unsigned int *)0xC246A38 = 0x0;
        FUN_0c0e19f2();
    }
    t37 = *(int *)((a4 + 0x4EC));
    *(unsigned int *)((a4 + 0x4EC)) = (t37 + 0x1);
    t39 = 0x4EC;
    if ((int)(t37 + 0x1) > (int)0x78) {
        *(unsigned int *)0xC246A38 = 0x0;
        t39 = (FUN_0c0e19f2());
    }
    return t39;
}
