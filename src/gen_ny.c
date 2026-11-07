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

float FUN_0c035828(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int stk[18];
    register int t4;
    register float u5;
    register float t6;
    register float u7;
    register float t8;
    register float u9;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register int t21;
    register float u22;
    register float t23;
    register float u24;
    register float t25;
    register float u26;
    register float t27;
    register float u28;
    register float u29;
    register float u30;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u35;
    register int t3;

    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    FUN_0c03578e(a4, (*(int *)(((int)stk + 24))), ((int)stk + 12), (((int)stk + 12) + 0x4));
    t4 = 0x0;
    u5 = (*(float *)0xC035960);
    for (;;) {
        t6 = nlTan(t4);
        u7 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 8)) = (t6 * u7);
        t8 = FUN_0c0d9e90(t4);
        u9 = (f4 * f4);
        *(float *)(((int)stk + 4)) = (u9 * t8);
        u11 = (u9 * t8);
        u12 = (u11 * (FUN_0c0d9e90(t4)));
        u13 = *(float *)(((int)stk + 12));
        u14 = (f5 / (u12 * (1.0f + 1.0f)));
        u15 = (u14 * u13);
        u16 = (t6 * u7);
        u17 = (u15 * u13);
        u18 = *(float *)(((int)stk + 16));
        if (u5 > _builtin_fabsf(((u16 - u17) - u18))) {
            t3 = t4;
            u5 = _builtin_fabsf(((u16 - u17) - u18));
        }
        t4 = (t4 + a5);
        if ((int)t4 >= (int)0x3800) {
            break;
        }
    }
    t21 = 0x0;
    u22 = (*(float *)0xC035960);
    for (;;) {
        t23 = nlTan(t21);
        u24 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 8)) = (t23 * u24);
        t25 = FUN_0c0d9e90(t21);
        u26 = (f4 * f4);
        *(float *)(((int)stk + 4)) = (u26 * t25);
        t27 = FUN_0c0d9e90(t21);
        u28 = (u26 * t25);
        u29 = (u28 * t27);
        u30 = *(float *)(((int)stk + 12));
        u31 = (f5 / (u29 * (1.0f + 1.0f)));
        u32 = (u31 * u30);
        u33 = (t23 * u24);
        u34 = (u32 * u30);
        u35 = *(float *)(((int)stk + 16));
        if (u22 > _builtin_fabsf(((u33 - u34) - u35))) {
            u22 = _builtin_fabsf(((u33 - u34) - u35));
            t21 = (t21 - a5);
            if ((int)t21 <= (int)0xFFFFC800) {
                if ((int)t3 >= (int)(unsigned short)t21) {
                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)t3;
                    *(unsigned int *)((a8 + 0x0)) = (unsigned short)t21;
                    return t27;
                }
                *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)t21;
                *(unsigned int *)((a8 + 0x0)) = (unsigned short)t3;
                return t27;
            }
            continue;
        }
        break;
    }
    if ((int)t3 >= (int)(unsigned short)(t21 + a5)) {
        *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)t3;
        *(unsigned int *)((a8 + 0x0)) = (unsigned short)(t21 + a5);
    } else {
        *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)(t21 + a5);
        *(unsigned int *)((a8 + 0x0)) = (unsigned short)t3;
    }
    return t27;
}

