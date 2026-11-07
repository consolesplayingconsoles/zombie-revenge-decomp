/* Straight-line functions with calls and guards (batch gen_tq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ee84(int, int, int);
float nlLength(int, int);
int FUN_0c01f8d4(int a4, int a5, int a6);

int FUN_0c01f8d4(int a4, int a5, int a6)
{
    int stk[18];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register int t7;
    register int t8;
    register int t12;
    register int t11;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register float u27;
    register float u29;
    register int t35;
    register int t36;
    int t37;
    register int t54;
    register int t22;
    register int t23;
    register int t24;
    register int t25;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    u0 = *(float *)0xC23FE68;
    u1 = *(float *)((a4 + 0x3C));
    u2 = *(float *)((a4 + 0x30));
    u3 = *(float *)0xC23FE70;
    u4 = *(float *)((a4 + 0x44));
    *(unsigned int *)(((int)stk + 16)) = ((int)(((*(float *)((a4 + 0x38))) - u3) * 0.049999997f) & 0x1F);
    t7 = ((int)((u1 - u0) * 0.049999997f) & 0x3F);
    t8 = ((int)((u2 - u0) * 0.049999997f) & 0x3F);
    if ((int)((int)((u1 - u0) * 0.049999997f) & 0x3F) > (int)((int)((u2 - u0) * 0.049999997f) & 0x3F)) {
        t7 = ((int)((u2 - u0) * 0.049999997f) & 0x3F);
        t8 = ((int)((u1 - u0) * 0.049999997f) & 0x3F);
    }
    t12 = ((int)((u4 - u3) * 0.049999997f) & 0x1F);
    if ((int)((int)((u4 - u3) * 0.049999997f) & 0x1F) > (int)(*(int *)(((int)stk + 16)))) {
        t11 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = ((int)((u4 - u3) * 0.049999997f) & 0x1F);
        t12 = t11;
    }
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = t12;
    *(unsigned int *)(((int)stk + 24)) = ((((t12 << 1) + t12) << 8) + 0xC23FF94);
    t18 = 0xC23FF94;
    t19 = t12;
    t20 = 0x0;
    t21 = a6;
    u27 = 0.049999997f;
    u29 = 999.899963f;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) > (int)(*(int *)(((int)stk + 16)))) {
            break;
        }
        t23 = t7;
        t23 = (t23 << 1);
        t35 = *(int *)(((int)stk + 24));
        t23 = (t23 + t7);
        t22 = t7;
        t23 = (t23 << 2);
        t23 = (t23 + t35);
        t36 = t35;
        t37 = t7;
        for (;;) {
            if ((int)t22 > (int)t8) {
                break;
            }
            *(unsigned int *)(((int)stk + 20)) = t23;
            t24 = t23;
            for (;;) {
                t36 = (*(int *)(((int)stk + 20)));
                t24 = (*(int *)((t24 + 0x0)));
                if (t24 == t36) {
                    break;
                }
                t36 = 0xC245FA4;
                t25 = (*(int *)((t24 + 0x8)));
                t19 = (*(int *)((t36 + 0x0)));
                t37 = (*(int *)((t25 + 0x0)));
                if (t37 != t19) {
                    *(unsigned int *)((t25 + 0x0)) = t19;
                    t18 = (*(int *)((t25 + 0x8)));
                    t37 = (*(int *)0xC245F9C);
                    if (t18 != t37) {
                        t37 = (*(int *)(((int)stk + 12)));
                        t36 = (*(int *)((t25 + 0x98)));
                        if ((t36 & t37) != 0) {
                            t21 = a4;
                            t20 = t25;
                            t21 = (t21 + 0x3C);
                            t19 = a4;
                            t54 = FUN_0c01ee84(t19, t20, t21);
                            *(unsigned int *)(((int)stk + 28)) = t54;
                            if (t54 != 0) {
                                t20 = 0x8C;
                                t19 = a4;
                                t36 = 0xC0DCDA0;
                                t20 = (t20 + a4);
                                t19 = (t19 + 0x30);
                                u27 = (nlLength(t19, t20));
                                if (u29 > u27) {
                                    t37 = (*(int *)(((int)stk + 28)));
                                    t18 = ((int)stk + 4);
                                    t36 = (*(int *)(((int)stk + 4)));
                                    t18 = (t18 + 0x38);
                                    u29 = u27;
                                    *(unsigned int *)((t36 + 0x0)) = t37;
                                    t36 = 0x8C;
                                    t37 = 0xC0E61D4;
                                    t36 = (t36 + a4);
                                    *(unsigned int *)(((int)stk + 32)) = t25;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t36); }
                                    t36 = 0x98;
                                    t18 = ((int)stk + 4);
                                    t18 = (t18 + 0x2C);
                                    t36 = (t36 + a4);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t18) = *(struct mv3 *)(t36); }
                                }
                            }
                        }
                    }
                }
            }
            t23 = (t23 + 0xC);
            t22 = (t22 + 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        t18 = (*(int *)(((int)stk + 24)));
        t18 = (t18 + 0x300);
        *(unsigned int *)(((int)stk + 24)) = t18;
    }
    if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x38)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x2C)); }
    }
    return (*(int *)(((int)stk + 32)));
}
