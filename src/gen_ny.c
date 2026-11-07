/* Straight-line functions with calls and guards (batch gen_ny): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ef2a(int, int, int, int, int);
int FUN_0c03578e(int, int, int, int);
float FUN_0c0d9e90(int);
float nlLength(int, int);
float nlTan(int);
int FUN_0c01e822(int a4, int a5, int a6, int a7, int a8);
float FUN_0c035828(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

int FUN_0c01e822(int a4, int a5, int a6, int a7, int a8)
{
    int stk[26];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t20;
    register int t21;
    register float u24;
    register float u25;
    register int t29;
    register int t31;
    int t32;
    register int t43;
    register int t6;
    register int t9;
    register int t18;
    register int t19;

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)0xC23FE68;
    u2 = *(float *)((a4 + 0x8));
    u3 = *(float *)0xC23FE70;
    *(unsigned int *)(((int)stk + 32)) = (((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2);
    if ((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 32)) = 0x0;
        t6 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
    } else {
        t4 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
        if ((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2) > (int)0x3F) {
            t4 = 0x3F;
        }
        t6 = t4;
    }
    if ((int)(((int)((u2 - u3) * 0.049999997f) & 0x1F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 36)) = (((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2);
        t9 = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 36)) = (((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2);
        if ((int)(((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2) > (int)0x1F) {
            *(unsigned int *)(((int)stk + 36)) = 0x1F;
        }
        t9 = (((int)((u2 - u3) * 0.049999997f) & 0x1F) - 2);
    }
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = t9;
    *(unsigned int *)(((int)stk + 28)) = ((((t9 << 1) + t9) << 8) + 0xC23FF94);
    t13 = 0xC23FF94;
    t14 = 0x1F;
    t15 = (((int)((u2 - u3) * 0.049999997f) & 0x1F) + 0x2);
    t16 = t9;
    t17 = ((int)((u2 - u3) * 0.049999997f) & 0x1F);
    t20 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2);
    t21 = 0x0;
    u24 = 0.049999997f;
    u25 = 9999.89941f;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) > (int)(*(int *)(((int)stk + 36)))) {
            break;
        }
        t18 = (*(int *)(((int)stk + 32)));
        t29 = *(int *)(((int)stk + 28));
        t19 = t18;
        t19 = (t19 << 1);
        t19 = (t19 + t18);
        t19 = (t19 << 2);
        t19 = (t19 + t29);
        t31 = t29;
        t32 = t18;
        for (;;) {
            if ((int)t18 > (int)t6) {
                break;
            }
            *(unsigned int *)(((int)stk + 24)) = t19;
            t21 = t19;
            for (;;) {
                t31 = (*(int *)(((int)stk + 24)));
                t21 = (*(int *)((t21 + 0x0)));
                if (t21 == t31) {
                    break;
                }
                t16 = (*(int *)((t21 + 0x8)));
                t14 = (*(int *)0xC245FA4);
                t31 = (*(int *)((t16 + 0x0)));
                if (t31 != t14) {
                    *(unsigned int *)((t16 + 0x0)) = t14;
                    t32 = a8;
                    t31 = (*(int *)((t16 + 0x98)));
                    if ((t31 & t32) != 0) {
                        t31 = ((int)stk + 8);
                        t31 = (t31 + 0x24);
                        t43 = t31;
                        *(int *)((int)stk + 4) = t43;
                        t15 = (*(int *)(((int)stk + 12)));
                        t17 = ((int)stk + 4);
                        t17 = (t17 + 0x34);
                        t14 = a4;
                        t20 = (FUN_0c01ef2a(t14, t15, t16, t17, t43));
                        if (t20 != 0) {
                            t31 = 0xC0DCDA0;
                            t15 = ((int)stk + 8);
                            t15 = (t15 + 0x30);
                            t14 = a4;
                            u24 = (nlLength(t14, t15));
                            if (u25 > u24) {
                                t31 = ((int)stk + 8);
                                t32 = 0xC0E61D4;
                                u25 = u24;
                                t31 = (t31 + 0x30);
                                *(unsigned int *)(((int)stk + 40)) = t20;
                                t13 = (*(int *)(((int)stk + 20)));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t13) = *(struct mv3 *)(t31); }
                                t31 = ((int)stk + 8);
                                t13 = (*(int *)(((int)stk + 16)));
                                t31 = (t31 + 0x24);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t13) = *(struct mv3 *)(t31); }
                            }
                        }
                    }
                }
            }
            t19 = (t19 + 0xC);
            t18 = (t18 + 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        t13 = (*(int *)(((int)stk + 28)));
        t13 = (t13 + 0x300);
        *(unsigned int *)(((int)stk + 28)) = t13;
    }
    return (*(int *)(((int)stk + 40)));
}


