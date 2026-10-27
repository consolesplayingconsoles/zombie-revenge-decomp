/* Straight-line functions with calls and guards (batch gen_fi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c4464(int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
extern int FUN_0c0e2a4c();
int FUN_0c087016(int a4, int a5);
int FUN_0c06ce0a(int a4);
int FUN_0c0e22cc(int a4, int a5, int a6);
int FUN_0c0be0e4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c01a49c(void);

int FUN_0c087016(int a4, int a5)
{
    int t1;
    int t9;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t23;
    int stk[12];

    *(unsigned int *)(((int)stk + 8)) = a4;
    t1 = FUN_0c0e19aa(0xC087290, 0x54, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC086FE0;
    *(unsigned int *)((t1 + 0x50)) = (a5 - 1);
    *(unsigned int *)((t1 + 0x3C)) = (FUN_0c0e262a(((a5 << 2) << 2)));
    *(unsigned int *)(((0x40 + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    *(unsigned int *)(((0x44 + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    *(unsigned int *)(((0x48 + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    *(unsigned int *)(((0x4C + t1) + 0x0)) = (FUN_0c0e262a((a5 << 2)));
    t9 = *(int *)((t1 + 0x3C));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)((t1 + 0x4C))) + (a5 << 2));
    t13 = ((*(int *)((t1 + 0x48))) + (a5 << 2));
    t14 = ((*(int *)((t1 + 0x44))) + (a5 << 2));
    t15 = ((*(int *)((t1 + 0x40))) + (a5 << 2));
    t16 = t9;
    t17 = a5;
    for (;;) {
        t18 = *(int *)(((int)stk + 8));
        t19 = t16;
        t16 = (t16 + 0x10);
        *(unsigned int *)(((int)stk + 8)) = (t18 + 0x10);
        { struct mv4 { int w[4]; }; *(struct mv4 *)(t19) = *(struct mv4 *)(((t18 + 0x10) - 16)); }
        *(unsigned int *)(((t15 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        t15 = (t15 - 0x4);
        *(unsigned int *)(((t14 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        t14 = (t14 - 0x4);
        *(unsigned int *)(((t13 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        t13 = (t13 - 0x4);
        t23 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t23 - 4);
        t17 = (t17 - 0x1);
        *(unsigned int *)(((t23 - 4) + 0x0)) = (((FUN_0c0da2e0()) << 2) << 2);
        if (t17 == 0) {
            break;
        }
    }
    return FUN_0c0cc3f8(0x630A9);
}

int FUN_0c06ce0a(int a4)
{
    int t5;
    int t6;
    int t17;
    int t24;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    int T_;
    R4 = a4;
    L_C06CE0A:;
    *(unsigned int *)(((int)stk + 4)) = 0xC246FF0;
    R10 = (0x0);
    R11 = (0xC23F268);
    R12 = (0xC0);
    R6 = (0x4);
    R9 = (0x2);
    goto L_C06CE2A;
    L_C06CE2A:;
    t5 = *(int *)(((int)stk + 4));
    t6 = *(int *)((((R6 << 2) + (t5 + 0x40)) + 0x0));
    R0 = (t5);
    R5 = (t6);
    if (((int)t6 < (int)0x3)) goto L_C06CEC8;
    goto L_C06CE3E;
    L_C06CE3E:;
    if (((int)R5 > (int)0x5)) goto L_C06CEC8;
    goto L_C06CE44;
    L_C06CE44:;
    R0 = ((R4 + 0x40));
    R14 = ((((((R6 << 1) + R6) << 2) << 2) << 2));
    R5 = ((R4 + 0x40));
    R7 = ((R4 + 0x40));
    R8 = ((R6 << 1));
    goto L_C06CEC0;
    L_C06CEC0:;
    if (((unsigned int)R5 < (unsigned int)(R4 + 0x50))) goto L_C06CE74;
    goto L_C06CEC8;
    L_C06CEC8:;
    t17 = (int)(R6 + 0x1) < (int)0xC;
    R6 = ((R6 + 0x1));
    if (t17) goto L_C06CE2A;
    goto L_C06CED0;
    L_C06CED0:;
    return R0;
    L_C06CE74:;
    if (((*(short *)((R5 + 0x0))) == R6)) goto L_C06CEC8;
    goto L_C06CE7A;
    L_C06CE7A:;
    if (((int)(*(short *)((R7 + 0x0))) >= 0)) goto L_C06CEBA;
    goto L_C06CE80;
    L_C06CE80:;
    *(unsigned short *)((R0 + 0x0)) = R6;
    R5 = (R10);
    goto L_C06CE84;
    L_C06CE84:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R4 + 0x6C) + R14) + R5)) = *(struct mv3 *)(((R14 + R11) + R5)); }
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x8)) = F4;
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x4)) = F4;
    t24 = (unsigned int)(R5 + 0xC) < (unsigned int)R12;
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x0)) = F4;
    R0 = (0x4);
    R5 = ((R5 + 0xC));
    if (t24) goto L_C06CE84;
    goto L_C06CEB0;
    L_C06CEB0:;
    *(unsigned short *)(((R8 + (R4 + 0x52)) + 0x0)) = R9;
    goto L_C06CEC8;
    L_C06CEBA:;
    R0 = ((R0 + 0x2));
    R5 = ((R5 + 0x2));
    R7 = ((R7 + 0x2));
    goto L_C06CEC0;
}

int FUN_0c0e22cc(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int t4;
    int t6;
    int t21;
    int t22;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t24;
    int t30;
    int t26;
    int stk[11];

    *(unsigned int *)(((int)stk + 4)) = a4;
    if (a5 != 0) {
        t2 = *(int *)((((a6 << 2) + a5) + 0x0));
        t3 = *(int *)((((a6 << 2) + a5) + 0x4));
        if (t2 == 1) {
            t4 = ((int (*)(int, int, int))(FUN_0c0e2a4c))(t3, a5, a6);
            *(unsigned int *)((((a6 << 2) + a5) + 0x0)) = 0x0;
            *(unsigned int *)((((a6 << 2) + a5) + 0x4)) = 0x0;
            t26 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))(a5, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
        } else {
            *(unsigned int *)(((int)stk + 8)) = (t2 - 1);
            t6 = FUN_0c0e262a(((t2 - 1) << 2));
            t21 = (0x0 + t3);
            t22 = 0x0;
            if ((int)t2 > 0) {
                t7 = t6;
                t8 = (0x0 + t3);
                t9 = (0x0 + t3);
                t10 = 0x0;
                t11 = 0x0;
                for (;;) {
                    t10 = (t10 + 0x1);
                    if ((*(int *)(((int)stk + 4))) != (*(int *)((t8 + 0x0)))) {
                        t7 = t11;
                        t7 = (t7 << 2);
                        *(unsigned int *)((t6 + t7)) = (*(int *)((t9 + 0x0)));
                        t11 = (t11 + 0x1);
                    }
                    t9 = (t9 + 0x4);
                    t8 = (t8 + 0x4);
                    if ((int)t10 >= (int)t2) {
                        break;
                    }
                }
                t21 = t9;
                t22 = t10;
            }
            t24 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))(t3, t21, t22, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            *(unsigned int *)((((a6 << 2) + a5) + 0x0)) = (*(int *)(((int)stk + 8)));
            *(unsigned int *)((((a6 << 2) + a5) + 0x4)) = t6;
            t26 = t24;
        }
        t30 = t26;
    }
    return t30;
}

int FUN_0c0be0e4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t0;
    int t41;
    int t1;
    int t38;
    int t4;
    int t24;
    int t25;
    int t26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    int t8;
    int t9;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    int t18;
    int t19;
    int t20;
    int t35;
    int t37;
    int stk[3];

    t0 = *(short *)((a4 + 0xC));
    t41 = t0;
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0xE));
        *(unsigned short *)((a4 + 0xE)) = (t1 - 1);
        t38 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            t4 = *(short *)((a4 + 0x8));
            t24 = a5;
            t25 = a6;
            t26 = a7;
            u27 = f4;
            u28 = f5;
            u29 = f6;
            u30 = f7;
            u31 = f8;
            u32 = f9;
            if ((*(int *)((0xC2623A0 + (((t4 << 1) + t4) << 2)))) != 0) {
                t8 = (*(short *)((a4 + 0xC)));
                t9 = (*(int *)((a4 + 0x0)));
                for (;;) {
                    u11 = *(float *)((t9 + 0x4));
                    u12 = *(float *)((t9 + 0x8));
                    u13 = *(float *)((t9 + 0x18));
                    u14 = *(float *)((t9 + 0x1C));
                    u15 = *(float *)((t9 + 0x20));
                    u16 = *(float *)((t9 + 0x0));
                    t18 = (*(int *)((t9 + 0x28)));
                    t19 = (*(int *)((t9 + 0x24)));
                    for (;;) {
                        t20 = *(int *)((t18 + 0x0));
                        t18 = (t18 + 0x4);
                        t19 = (t19 - 0x1);
                        *(float *)((t20 + 0x0)) = u16;
                        *(float *)((t20 + 0x4)) = u11;
                        *(float *)((t20 + 0x8)) = u12;
                        *(float *)((t20 + 0xC)) = u13;
                        *(float *)((t20 + 0x10)) = u14;
                        *(float *)((t20 + 0x14)) = u15;
                        if (t19 == 0) {
                            break;
                        }
                    }
                    t8 = (t8 - 0x1);
                    t9 = (t9 + 0x2C);
                    if (t8 == 0) {
                        break;
                    }
                }
                t24 = t9;
                t25 = t18;
                t26 = t19;
                u27 = u16;
                u28 = u11;
                u29 = u12;
                u30 = u13;
                u31 = u14;
                u32 = u15;
            }
            t35 = ((int (*)(int, int, int, int, float, float, float, float, float, float))(FUN_0c0e2a4c))((*(int *)(((*(int *)((a4 + 0x0))) + 0x28))), t24, t25, t26, u27, u28, u29, u30, u31, u32);
            t37 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))((*(int *)((a4 + 0x0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            *(unsigned int *)((a4 + 0x4)) = 0xC0BF3F2;
            *(unsigned short *)((a4 + 0xC)) = 0x0;
            t38 = 0x0;
        }
        t41 = t38;
    }
    return t41;
}

int FUN_0c01a49c(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t13;
    int t23;
    int t33;
    int t0;
    int t19;
    int t29;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC247030 + t1) + 0x0))) != 0) {
            t3 = 0xC246FF0;
            t3 = (t3 + t2);
            t0 = 0xC0;
            t3 = (*(int *)((t3 + 0x0)));
            t7 = *(int *)((t3 + t0));
            t4 = (t4 | (((int)t7 >= 0) ? (0x1 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)0x1 >> (-(int)t7 & 31)) : ((int)0x1 >> 31))));
        }
        t1 = (t1 + 0x4);
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    t13 = t0;
    if ((0x1 & t4) == 0) {
        t13 = (FUN_0c0c4464((*(int *)0xC23ED50), 0x0, 0x0, 0x1));
    } else {
        t19 = 0x1;
    }
    t23 = t13;
    if ((0x4 & t4) == 0) {
        t23 = (FUN_0c0c4464((*(int *)0xC23ED50), 0x2, 0x0, t19));
    } else {
        t29 = t19;
    }
    t33 = t23;
    if ((t4 & 0x10) == 0) {
        t33 = (FUN_0c0c4464((*(int *)0xC23ED50), 0x4, 0x0, t29));
    }
    return t33;
}
