/* Straight-line functions with calls and guards (batch gen_ty): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ef2a(int, int, int, int, int);
float FUN_0c01f1b8(int a4, int a5);
struct o0_float { float v; };
struct o8_float { char p[0x8]; float v; };


float FUN_0c01f1b8(int a4, int a5)
{
    int stk[18];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t25;
    register int t26;
    register float u29;
    register float u30;
    register int t31;
    register int t32;
    register int t35;
    register int t36;
    register int t45;
    register float u73;
    register int t7;
    register int t10;
    register int t23;
    register int t24;
    float u47;

    *(unsigned int *)(((int)stk + 12)) = a5;
    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o0_float *)0xC23FE68)->v);
    u2 = *(float *)((a4 + 0x8));
    u3 = (((struct o8_float *)0xC23FE68)->v);
    *(unsigned int *)(((int)stk + 16)) = (((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2);
    if ((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        t7 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
    } else {
        t4 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
        if ((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2) > (int)0x3F) {
            t4 = 0x3F;
        }
        t7 = t4;
    }
    if ((int)(((int)((u2 - u3) * 0.049999997f) & 0x1F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 20)) = (((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2);
        t10 = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 20)) = (((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2);
        if ((int)(((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2) > (int)0x1F) {
            *(unsigned int *)(((int)stk + 20)) = 0x1F;
        }
        t10 = (((int)((u2 - u3) * 0.049999997f) & 0x1F) - 2);
    }
    *(float *)(((int)stk + 36)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 44)) = (*(float *)((a4 + 0x8)));
    *(float *)(((int)stk + 40)) = ((*(float *)((a4 + 0x4))) + 2000.0f);
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = -3000.0f;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = t10;
    t17 = t10;
    t18 = a4;
    t19 = ((int)((u2 - u3) * 0.049999997f) & 0x1F);
    t20 = (((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2);
    t21 = t10;
    t22 = ((((t10 << 1) + t10) << 8) + 0xC23FF94);
    t25 = 0x1F;
    t26 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
    u29 = 0.0f;
    u30 = -999.899963f;
    for (;;) {
        t31 = *(int *)(((int)stk + 8));
        t32 = *(int *)(((int)stk + 20));
        if ((int)t31 > (int)t32) {
            break;
        }
        t24 = (*(int *)(((int)stk + 16)));
        t25 = t24;
        t25 = (t25 << 1);
        t17 = t24;
        t25 = (t25 + t17);
        t25 = (t25 << 2);
        t25 = (t25 + t22);
        t35 = t31;
        t36 = t32;
        for (;;) {
            if ((int)t24 > (int)t7) {
                break;
            }
            t23 = t25;
            t26 = t25;
            for (;;) {
                t26 = (*(int *)((t26 + 0x0)));
                if (t26 == t23) {
                    break;
                }
                t20 = (*(int *)((t26 + 0x8)));
                t18 = (*(int *)0xC245FA4);
                t36 = (*(int *)((t20 + 0x0)));
                if (t36 != t18) {
                    *(unsigned int *)((t20 + 0x0)) = t18;
                    if (((*(int *)((t20 + 0x98))) & 1) != 0) {
                        t17 = ((int)stk + 8);
                        t17 = (t17 + 0x28);
                        t45 = t17;
                        *(int *)((int)stk + 4) = t45;
                        t19 = ((int)stk + 4);
                        t21 = ((int)stk + 4);
                        t18 = ((int)stk + 4);
                        t19 = (t19 + 0x14);
                        t21 = (t21 + 0x38);
                        t18 = (t18 + 0x20);
                        t18 = (FUN_0c01ef2a(t18, t19, t20, t21, t45));
                        if ((t18 != 0) && (u47 = *(float *)(((int)stk + 64)), u29 = u47, u29 > u30)) {
                            t36 = ((int)stk + 8);
                            t17 = 0xC0E61D4;
                            t35 = (*(int *)(((int)stk + 12)));
                            t36 = (t36 + 0x28);
                            u30 = u29;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t35) = *(struct mv3 *)(t36); }
                        }
                    }
                }
            }
            t25 = (t25 + 0xC);
            t24 = (t24 + 0x1);
        }
        t17 = 0x300;
        t22 = (t22 + t17);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    u73 = (u30 + 0.000999999931f);
    if (-990.899963f > u30) {
        u73 = -999.899963f;
    }
    return u73;
}
