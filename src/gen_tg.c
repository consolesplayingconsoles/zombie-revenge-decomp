/* Straight-line functions with calls and guards (batch gen_tg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ef2a(int, int, int, int, int);
int FUN_0c01ecb4(int a4);

int FUN_0c01ecb4(int a4)
{
    int stk[19];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t26;
    register int t27;
    register float u31;
    register float u32;
    register int t37;
    register int t39;
    register int t40;
    register int t49;
    register int t6;
    register int t9;
    register int t23;
    register int t24;
    register int t25;
    register float u51;

    u0 = *(float *)((a4 + 0x30));
    u1 = *(float *)0xC23FE68;
    u2 = *(float *)0xC23FE70;
    u3 = *(float *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 20)) = (((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2);
    if ((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        t6 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
    } else {
        t4 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
        if ((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2) > (int)0x3F) {
            t4 = 0x3F;
        }
        t6 = t4;
    }
    if ((int)(((int)((u3 - u2) * 0.049999997f) & 0x1F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 16)) = (((int)((u3 - u2) * 0.049999997f) & 0x1F) + 0x2);
        t9 = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (((int)((u3 - u2) * 0.049999997f) & 0x1F) + 0x2);
        if ((int)(((int)((u3 - u2) * 0.049999997f) & 0x1F) + 0x2) > (int)0x1F) {
            *(unsigned int *)(((int)stk + 16)) = 0x1F;
        }
        t9 = (((int)((u3 - u2) * 0.049999997f) & 0x1F) - 2);
    }
    *(float *)(((int)stk + 40)) = (*(float *)((a4 + 0x30)));
    *(float *)(((int)stk + 48)) = (*(float *)((a4 + 0x38)));
    *(float *)(((int)stk + 44)) = ((*(float *)((a4 + 0x34))) + 200.0f);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 32)) = ((*(float *)((a4 + 0x4C))) + -400.0f);
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = t9;
    *(unsigned int *)(((int)stk + 12)) = ((((t9 << 1) + t9) << 8) + 0xC23FF94);
    t17 = 0xC01EE74;
    t18 = 0xC23FF94;
    t19 = ((int)((u3 - u2) * 0.049999997f) & 0x1F);
    t20 = (((int)((u3 - u2) * 0.049999997f) & 0x1F) + 0x2);
    t21 = 0x0;
    t22 = 0x1F;
    t26 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
    t27 = t9;
    u31 = 0.0f;
    u32 = -999.899963f;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) > (int)(*(int *)(((int)stk + 16)))) {
            break;
        }
        t24 = (*(int *)(((int)stk + 20)));
        t37 = *(int *)(((int)stk + 12));
        t25 = t24;
        t25 = (t25 << 1);
        t25 = (t25 + t24);
        t25 = (t25 << 2);
        t25 = (t25 + t37);
        t39 = t37;
        t40 = t24;
        for (;;) {
            if ((int)t24 > (int)t6) {
                break;
            }
            t23 = t25;
            t26 = t25;
            for (;;) {
                t26 = (*(int *)((t26 + 0x0)));
                if (t26 == t23) {
                    break;
                }
                t40 = 0xC245FA4;
                t27 = (*(int *)((t26 + 0x8)));
                t19 = (*(int *)((t40 + 0x0)));
                t39 = (*(int *)((t27 + 0x0)));
                if (t39 != t19) {
                    t17 = 0x98;
                    *(unsigned int *)((t27 + 0x0)) = t19;
                    t17 = (*(int *)((t27 + t17)));
                    if ((t17 & 1) != 0) {
                        t18 = ((int)stk + 8);
                        t18 = (t18 + 0x2C);
                        t49 = t18;
                        *(int *)((int)stk + 4) = t49;
                        t21 = t27;
                        t20 = ((int)stk + 4);
                        t22 = ((int)stk + 4);
                        t20 = (t20 + 0x18);
                        t19 = ((int)stk + 4);
                        t22 = (t22 + 0x3C);
                        t19 = (t19 + 0x24);
                        t17 = (FUN_0c01ef2a(t19, t20, t21, t22, t49));
                        t19 = t17;
                        if ((t19 != 0) && (t17 = 0x3C, u51 = *(float *)((((int)stk + 8) + t17)), u31 = u51, u31 > u32)) {
                            u32 = u31;
                            *(unsigned int *)(((int)stk + 24)) = t27;
                        }
                    }
                }
            }
            t25 = (t25 + 0xC);
            t24 = (t24 + 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        t18 = (*(int *)(((int)stk + 12)));
        t18 = (t18 + 0x300);
        *(unsigned int *)(((int)stk + 12)) = t18;
    }
    if ((*(int *)(((int)stk + 24))) != 0) {
        *(float *)((a4 + 0xB4)) = (u32 + 0.000999999931f);
    } else {
        *(float *)((a4 + 0xB4)) = -999.899963f;
    }
    return (*(int *)(((int)stk + 24)));
}
