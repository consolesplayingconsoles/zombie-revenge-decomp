/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02f39e(int);
int FUN_0c034134(int, float);
int FUN_0c03457c(int, int);
int FUN_0c0346ca(int);
int FUN_0c051a48(int);
int FUN_0c0556ce(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b719e(int, int);
int FUN_0c0bd788(int, int);
int FUN_0c0bd958(int, int);
int FUN_0c0da0e0(int, float);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
extern float _builtin_sqrtf(float);
int nlGetMatrix(int);
float nlLength(int, int);
float FUN_0c0bdb70(int a4, int a5, int a6);
int FUN_0c0b736e(int a4, int a5);
void FUN_0c0810c6(int a4);
int FUN_0c0b7f4e(int a4);
int FUN_0c05561a(int a4, int a5, int a6, int a7);
int FUN_0c043234(int a4, int a5, int a6, int a7);
int FUN_0c04f352(int a4);
int FUN_0c0aed74(void);
int FUN_0c02f0e4(int a4, int a5);
void FUN_0c07b326(void);
void FUN_0c0cf808(void);
int FUN_0c0198c2(void);
void FUN_0c0bf88c(int a4, int a5, int a6);
int nlExp(float f4);
int FUN_0c0d18d8(void);
int FUN_0c0d1870(void);
int FUN_0c04080e(int a4);
void FUN_0c0b7144(void);
int FUN_0c0dc0b0(int a4);
void FUN_0c0cee6a(int a4, float f4);

float FUN_0c0bdb70(int a4, int a5, int a6)
{
    int t1;
    int t7;
    int t10;
    int t19;
    int t25;
    int t30;
    int t33;
    int t36;
    int t41;
    int t43;
    int t54;
    int t58;
    int t63;
    int t74;
    int stk[27];

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
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C0BDB70:;
    *(unsigned int *)(((int)stk + 12)) = R4;
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned short *)((R6 + 0xE)) = ((*(short *)((R6 + 0xE))) + 0x1);
    t1 = *(short *)((R6 + 0xC));
    R0 = (t1);
    R12 = (0x0);
    R13 = (R6);
    R9 = (0x0);
    if ((t1 == 0)) goto L_C0BDBA0;
    goto L_C0BDB9C;
    L_C0BDB9C:;
    goto L_C0BDCE8;
    L_C0BDCE8:;
    return F0;
    L_C0BDBA0:;
    t7 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = (((t7 << 1) + t7) << 2);
    t10 = *(int *)((((((unsigned int)(*(int *)((((((t7 << 1) + t7) << 2) + 0xC24FB50) + 0x4))) >> 2) - 1) << 2) + (*(int *)((0xC2623A0 + (((t7 << 1) + t7) << 2))))));
    *(unsigned int *)(((int)stk + 20)) = (FUN_0c0e262a(((((t10 << 1) + t10) << 2) << 2)));
    FUN_0c0bd788((*(int *)(((int)stk + 12))), (((int)stk + 4) + 0x38));
    FUN_0c0bd958((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x2C));
    *(unsigned short *)((R13 + 0x8)) = (*(short *)(((int)stk + 8)));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((int)stk + 4) + 0x38) + 0x0)));
    t19 = *(int *)(((((int)stk + 4) + 0x38) + 0x4));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((int)stk + 4) + 0x38) + 0x8)));
    R10 = ((((int)stk + 4) + 0x38));
    R11 = ((((int)stk + 4) + 0x2C));
    R8 = (t19);
    F15 = (0.00499999989f);
    goto L_C0BDBF6;
    L_C0BDBF6:;
    t25 = *(int *)((R11 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((R11 + 0x8)));
    R14 = (t25);
    goto L_C0BDBFC;
    L_C0BDBFC:;
    FUN_0c0db470(R14, (((int)stk + 4) + 0x14));
    t30 = (nlLength((((int)stk + 4) + 0x14), (*(int *)(((int)stk + 4))))) > F15;
    if (t30) goto L_C0BDC40;
    goto L_C0BDC14;
    L_C0BDC14:;
    if (((*(int *)((R14 + 0x24))) == 0)) goto L_C0BDC24;
    goto L_C0BDC1A;
    L_C0BDC1A:;
    *(unsigned int *)((R13 + 0x0)) = R12;
    *(unsigned short *)((R13 + 0xE)) = R12;
    goto L_C0BDC42;
    L_C0BDC42:;
    t33 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t33 - 1);
    if (((t33 - 1) != 0)) goto L_C0BDBFC;
    goto L_C0BDC4C;
    L_C0BDC4C:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
    t36 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (t36 - 1);
    R8 = ((R8 + 0xC));
    if (((t36 - 1) != 0)) goto L_C0BDBF6;
    goto L_C0BDC5E;
    L_C0BDC5E:;
    FUN_0c0e2a4c((*(int *)(((int)stk + 20))), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    *(unsigned short *)((R13 + 0xC)) = R9;
    t41 = FUN_0c0e262a((R9 * 0x2C));
    *(unsigned int *)((R13 + 0x0)) = t41;
    t43 = FUN_0c0e262a(((*(int *)(((int)stk + 16))) << 2));
    R0 = (t43);
    R12 = (0xC0E2A4C);
    R14 = (t41);
    R4 = ((*(int *)((R11 + 0x0))));
    R6 = (t43);
    R7 = ((*(int *)((R11 + 0x8))));
    goto L_C0BDC86;
    L_C0BDC86:;
    if (((*(int *)((R4 + 0x24))) == 0)) goto L_C0BDCC8;
    goto L_C0BDC8C;
    L_C0BDC8C:;
    t54 = *(int *)((R4 + 0x2C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R14) = *(struct mv3 *)(R4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0xC)) = *(struct mv3 *)((R4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x18)) = *(struct mv3 *)((R4 + 0x18)); }
    *(unsigned int *)((R14 + 0x24)) = (*(int *)((R4 + 0x28)));
    *(unsigned int *)((R14 + 0x28)) = R6;
    R5 = (t54);
    goto L_C0BDCBA;
    L_C0BDCBA:;
    *(unsigned int *)((R6 + 0x0)) = (*(int *)((R5 + 0x0)));
    t58 = *(int *)((R5 + 0x4));
    R5 = (t58);
    R6 = ((R6 + 0x4));
    if ((t58 != 0)) goto L_C0BDCBA;
    goto L_C0BDCC6;
    L_C0BDCC6:;
    R14 = ((R14 + 0x2C));
    goto L_C0BDCC8;
    L_C0BDCC8:;
    t63 = (R7 - 0x1) != 0;
    R4 = ((R4 + 0x30));
    R7 = ((R7 - 0x1));
    if (t63) goto L_C0BDC86;
    goto L_C0BDCCE;
    L_C0BDCCE:;
    FUN_0c0e2a4c((*(int *)((R10 + 0x0))), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((R10 + 0x4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((R11 + 0x0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0e2a4c((*(int *)((R11 + 0x4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    t74 = *(short *)((R13 + 0xA));
    *(unsigned int *)((R13 + 0x4)) = (*(int *)((0xC1960B8 + (t74 << 2))));
    R0 = ((t74 << 2));
    goto L_C0BDCE8;
    L_C0BDC24:;
    *(unsigned int *)((R14 + 0x24)) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0xC)) = *(struct mv3 *)(R8); }
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + (*(int *)((R14 + 0x28))));
    R9 = ((R9 + 0x1));
    goto L_C0BDC4C;
    L_C0BDC40:;
    R14 = ((R14 + 0x30));
    goto L_C0BDC42;
}

int FUN_0c0b736e(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t12;
    float u22;
    float u28;
    int t11;

    if ((int)0x9 > (int)a5) {
        t0 = 0xC24FB14;
        t1 = 0x9;
        t2 = 0xC24FB2C;
        for (;;) {
            t2 = (t2 - 12);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t0); }
            t1 = (t1 - 1);
            t0 = (t0 - 12);
            if ((int)t1 <= (int)a5) {
                break;
            }
        }
    }
    if (((*(short *)(((((0x1 & (a4 + 0x1)) << 2) + 0xC24FB2C) + 0x0))) != 0) && (t11 = *(short *)(((((0x1 & (a4 + 0x1)) << 2) + 0xC24FB2C) + 0x2)), (int)(unsigned short)t11 >= (int)a5)) {
        t12 = *(short *)(((((0x1 & (a4 + 0x1)) << 2) + 0xC24FB2C) + 0x2));
        *(unsigned short *)(((((0x1 & (a4 + 0x1)) << 2) + 0xC24FB2C) + 0x2)) = (t12 + 0x1);
        if ((int)(unsigned short)(t12 + 0x1) > (int)0x9) {
            *(unsigned short *)(((((0x1 & (a4 + 0x1)) << 2) + 0xC24FB2C) + 0x2)) = 0x0;
            *(unsigned short *)(((((0x1 & (a4 + 0x1)) << 2) + 0xC24FB2C) + 0x0)) = 0x0;
        }
    }
    *(unsigned int *)((((((a5 << 1) + a5) << 2) + 0xC24FAB4) + 0x0)) = (*(int *)(((a4 << 2) + 0xC247584)));
    *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC24FAB4) + 0xA)) = (*(int *)(((a4 << 2) + 0xC23EDC0)));
    u22 = *(float *)0xC0B74CC;
    u28 = 0.0f;
    if ((int)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0))) > 0) {
        u28 = (((float)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4))) / (float)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0)))) * u22);
    }
    *(float *)((((((a5 << 1) + a5) << 2) + 0xC24FAB4) + 0x4)) = u28;
    if (u28 > u22) {
        *(float *)((((((a5 << 1) + a5) << 2) + 0xC24FAB4) + 0x4)) = u22;
    }
    *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC24FAB4) + 0x8)) = (FUN_0c0b719e(a4, ((((a4 << 2) << 2) << 1) + 0xC247544)));
    *(unsigned short *)((((a4 << 2) + 0xC24FB2C) + 0x0)) = 0x1;
    *(unsigned short *)((((a4 << 2) + 0xC24FB2C) + 0x2)) = a5;
    return a5;
}

void FUN_0c0810c6(int a4)
{
    int t1;
    int t2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u9;
    float u21;
    int t33;
    float u22;
    float u32;

    t1 = *(int *)((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0));
    t2 = *(int *)((a4 + 0x3B4));
    u3 = *(float *)((a4 + 0x338));
    u4 = *(float *)((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + 0x8));
    u5 = *(float *)((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + 0x0));
    u6 = *(float *)((a4 + 0x340));
    u7 = ((u6 - u4) * (u6 - u4));
    u7 = u7 + (u3 - u5) * (u3 - u5);
    *(float *)((a4 + 0x368)) = _builtin_sqrtf(u7);
    *(unsigned int *)((a4 + 0x370)) = (*(short *)((t1 + 0x6E)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + a4)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268)); }
    u9 = *(float *)((t1 + 0x270));
    if ((u9 + 15.0f) > (*(float *)((a4 + 0x33C)))) {
        *(float *)((a4 + 0x33C)) = (u9 + 15.0f);
    }
    FUN_0c0db470((0x338 + a4), (0x37C + a4));
    *(float *)((a4 + 0x388)) = ((*(float *)((a4 + 0x37C))) / ((*(float *)0xC247D0C) * (*(float *)((a4 + 0x384)))));
    *(float *)((a4 + 0x38C)) = ((*(float *)((a4 + 0x380))) / ((*(float *)0xC247D10) * (*(float *)((a4 + 0x384)))));
    *(float *)((a4 + 0x3B0)) = (*(float *)(((*(int *)0xC247CA4) + 0x20)));
    u21 = *(float *)((a4 + 0x388));
    t33 = 0;
    if (1.0f > _builtin_fabsf(u21)) {
        u22 = *(float *)((a4 + 0x38C));
        if (!(1.0f > _builtin_fabsf(u22))) {
            *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x8);
        }
        u32 = _builtin_fabsf(u22);
        t33 = ((1.0f > _builtin_fabsf(u22)));
    } else {
        *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x8);
        u32 = _builtin_fabsf(u21);
        t33 = (0);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3A4 + a4)) = *(struct mv3 *)((0x338 + a4)); }
}

int FUN_0c0b7f4e(int a4)
{
    int t0;
    int t1;
    int t3;
    float u4;
    int t7;

    t0 = *(int *)((a4 + 0xA4));
    *(unsigned int *)((a4 + 0xA4)) = (t0 + 0x1);
    if (((t0 + 0x1) & 0x3) == 0) {
        t1 = FUN_0c0e1830(0xC0B8018, 0x24C);
        FUN_0c0e19d0(t1);
        *(float *)((t1 + 0x23C)) = 0.0f;
        t3 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t3 + 0x1);
        u4 = 320.0f;
        u4 = u4 + 22.0f * (float)t3;
        *(float *)((t1 + 0x240)) = u4;
        *(unsigned int *)((t1 + 0x22C)) = 0x0;
        *(unsigned int *)((t1 + 0x230)) = 0x1000;
        *(unsigned int *)((t1 + 0x234)) = 0xF0;
        *(float *)((t1 + 0x224)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        *(float *)((t1 + 0x48)) = -10.0f;
        *(unsigned char *)((t1 + 0x228)) = (*(signed char *)((((0xB4 + a4) + (*(int *)((a4 + 0xA8)))) + 0x0)));
        *(unsigned char *)(((0x228 + t1) + 0x1)) = 0x0;
        t7 = *(int *)((a4 + 0xA8));
        *(unsigned int *)((a4 + 0xA8)) = (t7 + 0x1);
        if ((*(signed char *)((((t7 + 0x1) + (0xB4 + a4)) + 0x0))) == 0) {
            return FUN_0c0e19f2(0x0);
        }
        return 0xA8;
    }
    return 0xA4;
}

int FUN_0c05561a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t3;
    int t4;

    t0 = FUN_0c0556ce(a5, 0x4, a6);
    if ((int)t0 < 0) {
        return 0xFFFFFFFF;
    }
    t1 = *(int *)(((t0 << 2) + 0xC2475D4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a6); }
    t3 = 0xC20C0B8;
    t4 = ((a5 << 2) << 2);
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        t3 = 0xC1FF60C;
        t4 = (a5 << 2);
    }
    *(unsigned int *)((t1 + 0x21C)) = (*(int *)((t4 + t3)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x60)) = *(struct mv3 *)(a7); }
    *(unsigned int *)((t1 + 0x25C)) = 0x0;
    return 0x0;
}

int FUN_0c043234(int a4, int a5, int a6, int a7)
{
    int t19;
    int t4;
    int t11;
    int t5;
    int t6;
    int t1;
    int t2;
    int t3;

    t19 = 0xFFFFFFFF;
    if ((((*(int *)0xC246304) & 0x1) == 0) && ((t1 = *(int *)0xC246310, (t1 & 0x1) != 0) && ((t2 = *(int *)((a4 + 0x418)), (int)t2 >= 0) && (t3 = *(int *)((a4 + 0x400)), t3 != 9)))) {
        t4 = FUN_0c0346ca((a4 + 0x30));
        t11 = 0xFFFFFFFF;
        if (t4 != 0) {
            t5 = 0x30;
            for (;;) {
                t6 = *(int *)(((0xC246FF0 + t5) + 0x0));
                if ((*(int *)((t6 + 0xC0))) == 8) {
                    break;
                }
                t5 = (t5 + 0x4);
                if ((unsigned int)t5 >= (unsigned int)0x40) {
                    return 0xFFFFFFFF;
                }
            }
            *(unsigned int *)0xC246304 = ((*(int *)0xC246304) | 0x1);
            *(unsigned int *)((a4 + 0x418)) = (*(int *)((t6 + 0x498)));
            *(unsigned int *)((t6 + 0x540)) = a4;
            *(unsigned int *)((t6 + 0x514)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + t6)) = *(struct mv3 *)((a4 + 0x30)); }
            t11 = (*(int *)((t6 + 0x498)));
        }
        t19 = t11;
    }
    return t19;
}

int FUN_0c04f352(int a4)
{
    int t3;

    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x210)) = 0x0;
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x394)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x24C + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((0x24C + a4)); }
    *(float *)((a4 + 0x50)) = 0.0f;
    *(float *)((a4 + 0x48)) = 0.0f;
    *(unsigned int *)((a4 + 0x3B4)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x324)) = 0x0;
    *(unsigned int *)((a4 + 0x328)) = 0x78;
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    t3 = FUN_0c051a48(a4);
    *(unsigned int *)((a4 + 0x0)) = 0xC04A118;
    return t3;
}

int FUN_0c0aed74(void)
{
    int t0;
    int stk[5];

    t0 = FUN_0c0e1830(0xC0AEE08, 0x440);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)) = t0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + t0)) = *(struct mv3 *)(0xC10F930); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x278 + t0)) = *(struct mv3 *)(0xC10F93C); }
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((t0 + 0x254))) - (*(float *)((t0 + 0x278)))), ((*(float *)((t0 + 0x258))) - (*(float *)((t0 + 0x27C)))), ((*(float *)((t0 + 0x25C))) - (*(float *)((t0 + 0x280)))));
    *(unsigned short *)((t0 + 0x3CC)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((t0 + 0x3CE)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t0 + 0x400)) = 0x1;
    if ((*(int *)0xC2475A4) != 0) {
        *(unsigned int *)((t0 + 0x420)) = 0x0;
    } else {
        *(unsigned int *)((t0 + 0x420)) = 0x1;
    }
    return 0x420;
}

int FUN_0c02f0e4(int a4, int a5)
{
    int t0;
    int t5;
    int t7;
    int t10;
    int t6;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c02f39e(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)((0x518 + a4)); }
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x4) + 0x4))) + 20.0f);
    if ((*(int *)(((int)stk + 4))) != 0) {
        if (t0 == 0) {
            return 0x0;
        }
        t5 = FUN_0c034134(a4, (*(float *)0xC02F208));
        if (t5 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    if ((t0 != 1) && ((t6 = *(int *)((a4 + 0x508)), t6 != 0) || (t0 != 3))) {
        return 0x0;
    }
    t7 = FUN_0c03457c(a4, (0x518 + a4));
    if ((*(float *)0xC02F204) > _builtin_fabsf((float)(short)t7)) {
        t10 = FUN_0c034134(a4, (*(float *)0xC02F208));
        if (t10 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

void FUN_0c07b326(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC07B3B0, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x98)) = 0x78;
    *(float *)((t1 + 0x90)) = (*(float *)0xC07B40C);
    *(unsigned int *)((t1 + 0x78)) = 0x2;
    if ((*(int *)0xC23ED50) == 98) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)(0xC2007CC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC2007C0); }
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (*(int *)((t1 + 0x78))));
        *(unsigned int *)((t1 + 0x80)) = 0x2;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)(0xC2007C0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC2007CC); }
    }
}

void FUN_0c0cf808(void)
{
    int t0;
    int t1;
    int t4;
    int t10;

    *(unsigned short *)0xC522B00 = 0x1;
    t0 = 0x0;
    for (;;) {
        if (t0 != 13) {
            t1 = 0x0;
            for (;;) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)(((((t0 * 0x2C) + 0xC522B04) + 0x4) + t1)) = *(struct mv2 *)((t1 + 0xC20BCA8)); }
                t1 = (t1 + 0x8);
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
        } else {
            t4 = 0x0;
            for (;;) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)(((((t0 * 0x2C) + 0xC522B04) + 0x4) + t4)) = *(struct mv2 *)((t4 + 0xC20BCD0)); }
                t4 = (t4 + 0x8);
                if ((unsigned int)t4 >= (unsigned int)0x28) {
                    break;
                }
            }
        }
        t10 = ((t0 * 0x2C) + 0xC522B04);
        t0 = (t0 + 0x1);
        *(unsigned short *)((t10 + 0x0)) = 0x1;
        if ((int)t0 >= (int)0xE) {
            break;
        }
    }
}

int FUN_0c0198c2(void)
{
    *(unsigned int *)0xC23F21C = 0x0;
    *(unsigned int *)0xC23F220 = 0x0;
    *(unsigned int *)0xC23F24C = 0x50;
    *(unsigned int *)0xC23F248 = 0x50;
    *(unsigned int *)0xC23F23C = 0x0;
    *(unsigned int *)0xC23F240 = 0x0;
    *(float *)0xC23F1D0 = 1.0f;
    *(float *)0xC23F1CC = 1.0f;
    *(float *)0xC23F1C0 = 1.0f;
    *(float *)0xC23F1BC = 1.0f;
    *(float *)0xC23F1B0 = (*(float *)0xC0199A8);
    *(float *)0xC23F1B4 = (*(float *)0xC0199AC);
    *(float *)0xC23F1B8 = (*(float *)0xC0199B0);
    *(float *)0xC23F1D8 = 1.0f;
    *(unsigned int *)0xC23F1E0 = 0xA;
    *(unsigned int *)0xC23F1AC = 0x2049;
    *(unsigned int *)0xC23F1DC = 0xFFFFFFFF;
    { struct mv14 { int w[14]; }; *(struct mv14 *)(0xC23F1E4) = *(struct mv14 *)(0xC23F1AC); }
    *(float *)0xC23F1EC = (*(float *)0xC0199B8);
    *(unsigned int *)0xC23F218 = 0x100A;
    *(unsigned int *)0xC23F214 = 0xFFFFFFFF;
    return 0x68;
}

void FUN_0c0bf88c(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t2;
    int t3;

    *(unsigned int *)((a4 + 0x0)) = 0xC260CBC;
    *(unsigned int *)((a5 + 0x0)) = 0xC261CBC;
    t4 = (*(int *)0xC191314);
    t5 = 0xC260CBC;
    t6 = (*(int *)0xC191318);
    t7 = 0xC261CBC;
    for (;;) {
        if ((int)(*(short *)((t4 + 0x0))) <= 0) {
            break;
        }
        t3 = t4;
        t2 = t5;
        { struct mv4 { int w[4]; }; *(struct mv4 *)(t2) = *(struct mv4 *)(t3); }
        t3 = (*(int *)((t5 + 0x8)));
        t4 = (t4 + 0x10);
        t3 = (t3 + 0xCF20000);
        *(unsigned int *)((t5 + 0x8)) = t3;
        t5 = (t5 + 0x10);
        t10 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t3 = t10;
        *(unsigned int *)((t7 + 0x0)) = t3;
        t7 = (t7 + 0x4);
    }
    t13 = t2;
    t14 = t3;
    t15 = (*(int *)((a6 + 0x0)));
    t16 = (*(int *)((a6 + 0x4)));
    t17 = t5;
    t18 = t7;
    for (;;) {
        if ((int)(*(short *)((t15 + 0x0))) <= 0) {
            break;
        }
        t14 = t15;
        t13 = t17;
        { struct mv4 { int w[4]; }; *(struct mv4 *)(t13) = *(struct mv4 *)(t14); }
        t14 = (*(int *)((t17 + 0x8)));
        t15 = (t15 + 0x10);
        t14 = (t14 + (*(int *)0xC4BFE28));
        *(unsigned int *)((t17 + 0x8)) = t14;
        t17 = (t17 + 0x10);
        t14 = (*(int *)((t16 + 0x0)));
        t16 = (t16 + 0x4);
        *(unsigned int *)((t18 + 0x0)) = t14;
        t18 = (t18 + 0x4);
    }
    { struct mv4 { int w[4]; }; *(struct mv4 *)(t17) = *(struct mv4 *)(t15); }
    *(unsigned int *)((t18 + 0x0)) = (*(int *)((t16 + 0x0)));
}

int nlExp(float f4)
{
    float u0;
    float u7;
    float u8;
    int t9;
    float u10;
    int t11;
    float u12;
    float u4;

    u0 = *(float *)0xC0DA124;
    if (!(0.0f > f4)) {
        u4 = (*(float *)0xC0DA128);
    } else {
        u4 = (*(float *)0xC0DA12C);
    }
    u7 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    u8 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    t9 = 0xA;
    u10 = ((u7 * u8) / (*(float *)0xC0DA130));
    for (;;) {
        t11 = t9;
        t9 = (t9 - 4);
        u12 = ((float)t11 + u10);
        u10 = (u7 * u8);
        u10 = (u10 / u12);
        if ((int)t9 < (int)0x6) {
            break;
        }
    }
    return FUN_0c0da0e0((int)(u4 + (f4 / u0)), ((((f4 - ((float)(int)(u4 + (f4 / u0)) * u0)) + u10) + (1.0f + 1.0f)) / ((u10 - (f4 - ((float)(int)(u4 + (f4 / u0)) * u0))) + (1.0f + 1.0f))));
}

int FUN_0c0d18d8(void)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t0;
    int t1;
    int t2;
    int t3;

    t4 = 0xC943494;
    t5 = 0xC247B24;
    t6 = 0x0;
    t7 = 0x4;
    for (;;) {
        t8 = (t5 + 0x8);
        for (;;) {
            t9 = *(int *)((t8 + 0x0));
            t8 = (t8 + 0x4);
            if (t9 != 0) {
                t0 = 0x28C;
                t2 = (*(int *)((t9 + t0)));
                if (t2 != 0) {
                    t0 = 0x224;
                    t1 = t4;
                    t1 = (t1 + 0x8);
                    t3 = (*(int *)((t9 + t0)));
                    t0 = (t0 + 0x10);
                    *(unsigned int *)((t4 + 0x0)) = t3;
                    t2 = (*(int *)((t9 + t0)));
                    t3 = 0xC0E61D4;
                    *(unsigned int *)((t4 + 0x4)) = t2;
                    t2 = t9;
                    t2 = (t2 + 0x30);
                    t0 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                    t0 = 0x250;
                    t6 = (t6 + 0x1);
                    t0 = (*(short *)((t9 + t0)));
                    *(unsigned short *)((t4 + 0x14)) = t0;
                    t0 = 0x254;
                    t0 = (*(short *)((t9 + t0)));
                    *(unsigned short *)((t4 + 0x16)) = t0;
                    t0 = 0x258;
                    t0 = (*(short *)((t9 + t0)));
                    *(unsigned short *)((t4 + 0x18)) = t0;
                    t4 = (t4 + 0x1C);
                }
            }
            t3 = t5;
            t3 = (t3 + 0x18);
            if ((unsigned int)t8 >= (unsigned int)t3) {
                break;
            }
        }
        t7 = (t7 - 0x1);
        t5 = (t5 + 0x18);
        if (t7 == 0) {
            break;
        }
    }
    *(unsigned int *)0xC943490 = t6;
    return t0;
}

int FUN_0c0d1870(void)
{
    int t0;
    int t5;

    t0 = 0xC20BF54;
    for (;;) {
        if ((int)(*(int *)((t0 + 0x0))) < 0) {
            t5 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC943418) = *(struct mv3 *)((0xC205CB8 + ((((t5 << 1) + t5) << 2) << 1))); }
            t0 = 0x0;
            *(unsigned int *)0xC943424 = t0;
            *(float *)0xC943428 = (*(float *)0xC0D19A0);
            return t0;
        }
        if ((*(int *)((t0 + 0x0))) == (*(int *)0xC23ED50)) {
            break;
        }
        t0 = (t0 + 0x2C);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC943418) = *(struct mv3 *)((t0 + 0x4)); }
    *(unsigned int *)0xC943424 = (*(int *)((t0 + 0x10)));
    *(float *)0xC943428 = (float)(*(int *)((t0 + 0x14)));
    return t0;
}

int FUN_0c04080e(int a4)
{
    int t8;
    float u3;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFF7FF);
    t8 = 0x0;
    if ((((*(float *)((a4 + 0x390))) + 10.0f) > (*(float *)((a4 + 0x34)))) && (u3 = *(float *)((a4 + 0x4C)), !(u3 > 0.0f))) {
        *(float *)((a4 + 0x64)) = (*(float *)((a4 + 0x4C)));
        *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + 10.0f);
        t8 = 0x1;
    }
    *(float *)((a4 + 0x4B0)) = 0.0f;
    *(float *)((a4 + 0x4B4)) = 0.0f;
    *(float *)((a4 + 0x4B8)) = 0.0f;
    return t8;
}

void FUN_0c0b7144(void)
{
    int t1;
    int t2;
    int t0;
    int stk[8];

    t1 = 0x9;
    for (;;) {
        t2 = 0xC24FAB4;
        for (;;) {
            if ((int)(*(int *)((t2 + 0x0))) < (int)(*(int *)(((t2 + 0xC) + 0x0)))) {
                t0 = ((int)stk + 4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t2); }
                t0 = t2;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)((t2 + 0xC)); }
                t0 = (t2 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(((int)stk + 4)); }
            }
            t2 = (t2 + 0xC);
            if ((unsigned int)t2 >= (unsigned int)0xC24FB20) {
                break;
            }
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
}

int FUN_0c0dc0b0(int a4)
{
    int t1;
    int t2;

    nlGetMatrix(0x0);
    t1 = *(signed char *)0xC9482B0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((signed char)(((t1 << 1) + t1) << 2) + 0xC9482B4)) = *(struct mv3 *)(0xC9482B4); }
    *(unsigned char *)0xC9482B0 = a4;
    t2 = *(signed char *)0xC9482B0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC9482B4) = *(struct mv3 *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC9482B4)); }
    return FUN_0c0dbda0((*(int *)0xC9482BC));
}

void FUN_0c0cee6a(int a4, float f4)
{
    int t0;

    t0 = *(int *)0xC943164;
    if ((int)t0 < (int)0x24) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((t0 << 2) << 2) + 0xC943168)) = *(struct mv3 *)(a4); }
        *(float *)(((((t0 << 2) << 2) + 0xC943168) + 0x4)) = 0.0f;
        *(float *)(((((t0 << 2) << 2) + 0xC943168) + 0xC)) = f4;
        *(unsigned int *)0xC943164 = ((*(int *)0xC943164) + 0x1);
    }
}
