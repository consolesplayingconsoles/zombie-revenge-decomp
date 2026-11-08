/* Straight-line functions with calls and guards (batch gen_tv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ef2a(int, int, int, int, int);
void FUN_0c01f6fc(int a4, int a5, float f4, float f5, float f6);
struct o0_float { float v; };
struct o8_float { char p[0x8]; float v; };


void FUN_0c01f6fc(int a4, int a5, float f4, float f5, float f6)
{
    int stk[19];
    register float u0;
    register float u1;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t20;
    register float u21;
    register float u22;
    register float u23;
    register float u27;
    register int t28;
    register int t33;
    register int t34;
    register int t45;
    register int t5;
    register int t8;
    register int t18;
    register int t19;

    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = -100.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = f4;
    *(float *)(((int)stk + 68)) = f5;
    *(float *)(((int)stk + 72)) = f6;
    u0 = (((struct o0_float *)0xC23FE68)->v);
    u1 = (((struct o8_float *)0xC23FE68)->v);
    *(unsigned int *)(((int)stk + 20)) = (((int)((f4 - u0) * 0.049999997f) & 0x3F) - 2);
    if ((int)(((int)((f4 - u0) * 0.049999997f) & 0x3F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        t5 = (((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2);
    } else {
        t5 = (((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2);
        if ((int)(((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2) > (int)0x3F) {
            t5 = 0x3F;
        }
    }
    if ((int)(((int)((f6 - u1) * 0.049999997f) & 0x1F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 16)) = (((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2);
        t8 = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2);
        if ((int)(((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2) > (int)0x1F) {
            *(unsigned int *)(((int)stk + 16)) = 0x1F;
        }
        t8 = (((int)((f6 - u1) * 0.049999997f) & 0x1F) - 2);
    }
    *(unsigned int *)(((int)stk + 24)) = 0xFFFFFFFF;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = t8;
    t12 = 0xC23FF94;
    t13 = (((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2);
    t14 = ((int)((f6 - u1) * 0.049999997f) & 0x1F);
    t15 = t8;
    t16 = 0x1F;
    t17 = (((t8 << 1) + t8) << 8);
    t20 = (((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2);
    u21 = ((f4 - u0) * 0.049999997f);
    u22 = u1;
    u23 = (f4 - u0);
    u27 = 9999.89941f;
    for (;;) {
        t28 = *(int *)(((int)stk + 8));
        t17 = (t17 + t12);
        if ((int)t28 > (int)(*(int *)(((int)stk + 16)))) {
            break;
        }
        t18 = (*(int *)(((int)stk + 20)));
        t19 = t18;
        t19 = (t19 << 1);
        t19 = (t19 + t18);
        t19 = (t19 << 2);
        t19 = (t19 + t17);
        t33 = t28;
        t34 = t18;
        for (;;) {
            if ((int)t18 > (int)t5) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = t19;
            t20 = t19;
            for (;;) {
                t12 = (*(int *)(((int)stk + 12)));
                t20 = (*(int *)((t20 + 0x0)));
                if (t20 == t12) {
                    break;
                }
                t12 = 0xC245FA4;
                t15 = (*(int *)((t20 + 0x8)));
                t13 = (*(int *)((t12 + 0x0)));
                t34 = (*(int *)((t15 + 0x0)));
                if (t34 != t13) {
                    *(unsigned int *)((t15 + 0x0)) = t13;
                    if (((*(int *)((t15 + 0x98))) & 1) != 0) {
                        t33 = ((int)stk + 8);
                        t33 = (t33 + 0x14);
                        t45 = t33;
                        *(int *)((int)stk + 4) = t45;
                        t14 = ((int)stk + 4);
                        t16 = ((int)stk + 4);
                        t13 = ((int)stk + 4);
                        t14 = (t14 + 0x30);
                        t16 = (t16 + 0x24);
                        t13 = (t13 + 0x3C);
                        t13 = (FUN_0c01ef2a(t13, t14, t15, t16, t45));
                        if (t13 != 0) {
                            u22 = (*(float *)(((int)stk + 44)));
                            u21 = (*(float *)(((int)stk + 68)));
                            u21 = (u21 - u22);
                            u21 = _builtin_fabsf(u21);
                            u23 = u21;
                            if (u27 > u23) {
                                t12 = ((int)stk + 8);
                                t34 = 0xC0E61D4;
                                t12 = (t12 + 0x20);
                                u27 = u23;
                                *(unsigned int *)(((int)stk + 24)) = t13;
                                t33 = a4;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t33) = *(struct mv3 *)(t12); }
                                t12 = ((int)stk + 8);
                                t33 = a5;
                                t12 = (t12 + 0x14);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t33) = *(struct mv3 *)(t12); }
                            }
                        }
                    }
                }
            }
            t19 = (t19 + 0xC);
            t18 = (t18 + 0x1);
        }
        t12 = 0x300;
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    *(volatile int *)(((int)stk + 24));
}
