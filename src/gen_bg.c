/* Straight-line functions with calls and guards (batch gen_bg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_GetFileRange(int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXT_Stop(void);
int FUN_0c016a86(void);
int FUN_0c018f60(int);
int FUN_0c019444(int);
int FUN_0c01de60(int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c0222c0(int);
int FUN_0c0223fc(int);
int FUN_0c02248a(int);
int FUN_0c02253c(int);
int FUN_0c02286c(int, int, float, float);
int FUN_0c053ac4(int);
int FUN_0c056380(int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c082f04(int, int, float);
int FUN_0c082f78(int, int, int);
int FUN_0c082fae(int, int, int, int, float);
int FUN_0c08a5e4(int, int);
int FUN_0c08a7f0(int, int);
int FUN_0c0aa5ea(int);
int FUN_0c0af590(void);
int FUN_0c0af7f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0b70b4(void);
int FUN_0c0b736e(int, int);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c99d0(int);
int FUN_0c0c9d34(int);
int FUN_0c0ca332(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc890(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float FUN_0c0dcda0(int, int);
int FUN_0c0de000(float);
int FUN_0c0de190(int);
int FUN_0c0de1f0(int, float);
int FUN_0c0e0cc0(int, float, float, float, float, float, float);
int FUN_0c0e14c4(int);
int FUN_0c0e15d4(int, int, int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e262a(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5fe4(void);
int FUN_0c0e61d4(void);
int FUN_0c229d7e(int, ...);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_st_ext(float (*)[4]);
int adxt_start_stm(int);
int FUN_0c018142(int a4, int a5, int a6, int a7);
int FUN_0c075036(int a4, int a5, int a6, int a7);
int FUN_0c07a0f0(int a4);
int FUN_0c0ad702(void);
int FUN_0c01ef2a(int a4, int a5, int a6, int a7, int a8);
int FUN_0c08a9ac(int a4, int a5, int a6, int a7);
int FUN_0c0c66ba(int a4, int a5, int a6, int a7);
int FUN_0c08545a(int a4, int a5, float f4, float f5, float f6);
int FUN_0c0835fa(int a4);
int FUN_0c0ad83e(void);
float FUN_0c0ddef0(void);
int FUN_0c04b982(int a4);
int FUN_0c0af87a(int a4, int a5);
void FUN_0c01d562(int a4, int a5);
int FUN_0c025acc(int a4);
void FUN_0c08d840(int a4, float f4);
int FUN_0c01d2c2(int a4, int a5);
int FUN_0c0aa522(int a4);
float FUN_0c01df48(int a4, int a5, float f4, float f5);
int FUN_0c0ca862(int a4);
int FUN_0c04bae4(int a4, int a5);
int FUN_0c04982e(int a4, int a5, int a6);
int FUN_0c0d8350(int a4);
int FUN_0c0b72d6(int a4);
float FUN_0c0da410(int a4);
int FUN_0c07cdb0(int a4, int a5, int a6, int a7);
int FUN_0c0e06de(void);
int FUN_0c9de360(void);
void FUN_0c0dbda0(int a4);
int ADXT_StartAfs(int a4, int a5, int a6);
int FUN_0c0dc460(int a4);
int FUN_0c0193a2(int a4);

int FUN_0c018142(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t9;
    int t6;
    int t3;
    int t11;
    int t23;
    int t32;
    int t39;
    int t40;
    int t36;
    int t28;

    t0 = *(int *)0xC23A180;
    t1 = *(int *)0xC23ED50;
    t9 = (((t1 << 2) << 1) + 0xC1A1660);
    if (t0 != 2) {
        t6 = (((t1 << 2) << 1) + 0xC1A1BD0);
        if (t0 != 1) {
            t3 = (((t1 << 2) << 1) + 0xC1A3378);
            if (t0 != 3) {
                t3 = a4;
            }
            t6 = t3;
        }
        t9 = t6;
    }
    t11 = *(int *)((t9 + 0x0));
    if (t11 != 0) {
        if (t11 != 1) {
            if (t11 != 3) {
                return ((int (*)(int, int))(0xC017AE2))(t9, t1);
            }
            return FUN_0c019444((*(int *)((t9 + 0x4))));
        }
        t23 = *(int *)((t9 + 0x4));
        if ((int)(*(int *)0xC23ED9C) <= (int)0x2) {
            *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0xFFF7FFFF);
            t36 = t23;
        } else {
            t32 = t23;
            if (((*(int *)((0xC1A19B8 + ((t1 - 42) << 2)))) != 0) && (t28 = *(int *)0xC23ED5C, (t28 & 0x80000) != 0)) {
                t32 = (*(int *)((0xC1A19B8 + ((t1 - 42) << 2))));
            }
            t36 = t32;
        }
        FUN_0c018f60(t36);
        t39 = *(int *)0xC23ED60;
        *(unsigned int *)0xC23ED60 = (t39 | 0x1);
        return (t39 | 0x1);
    }
    t40 = *(int *)((t9 + 0x4));
    if (t40 != 0) {
        return ((int (*)(int, int))(0xC017AE2))(t40, t1);
    }
    return t11;
}

int FUN_0c075036(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    float t12;
    float u13;
    int t9;
    int t10;
    int t20;
    int stk[14];

    FUN_0c0685a4(a4, a5, a6, a7);
    t2 = 0x8C;
    t3 = a4;
    t4 = (*(int *)((a4 + 0x8C)));
    for (;;) {
        if ((*(short *)((t4 + 0x0))) == 0) {
            break;
        }
        t3 = (*(short *)((t4 + 0x0)));
        t2 = (unsigned short)t3;
        t3 = t2;
        if ((t2 != 25) && ((t9 = (t2 == 25), t2 = t3, t2 != 26) && (t10 = (t2 == 25), t2 = t3, t2 != 27))) {
            t20 = t3;
        } else {
            t3 = 0x0;
            t2 = (FUN_0c0dc510(t3));
            t3 = t4;
            t3 = (t3 + 0x4);
            t12 = FUN_0c01f1b8(t3, ((int)stk + 4));
            t2 = 0xC;
            u13 = *(float *)((t4 + t2));
            t2 = 0x4;
            t2 = (FUN_0c0dcc70((*(float *)((t4 + t2))), (t12 + 1.0f), u13));
            t2 = 0x78;
            t3 = (*(int *)((a4 + t2)));
            t2 = (FUN_0c0c465c(t3));
            t3 = 0x1;
            t2 = (FUN_0c0dc4c0(t3));
        }
        t4 = (t4 + 0x10);
        t3 = t20;
    }
    return t2;
}

int FUN_0c07a0f0(int a4)
{
    int t0;
    int t1;
    float u4;
    float u9;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c0e1830(0xC07A1D6, 0x2BC);
        FUN_0c0e19d0(t1);
        *(unsigned int *)((t1 + 0xBC)) = 0x18;
        *(float *)((t1 + 0x1E4)) = 5.5f;
        *(unsigned int *)((t1 + 0x1F8)) = 0x12;
        *(unsigned int *)((t1 + 0x200)) = 0x1;
        *(unsigned int *)((t1 + 0x1F4)) = 0x1E;
        u4 = (*(float *)((a4 + 0x30)));
        u4 = u4 + 10.0f * (float)t0;
        *(float *)((t1 + 0x30)) = (u4 + -20.0f);
        *(float *)((t1 + 0x38)) = (*(float *)((a4 + 0x38)));
        FUN_0c0e61d4();
        u9 = -0.5f;
        if ((*(int *)((a4 + 0x88))) != 0) {
            u9 = 0.5f;
        }
        *(float *)((t1 + 0x50)) = u9;
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0x230)) = a4;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    return 0x230;
}

int FUN_0c0ad702(void)
{
    int t1;
    int t4;
    int t5;
    int t14;
    int t16;
    int t18;
    int t3;

    t1 = FUN_0c0e19aa(0xC0AD61A, 0x24C, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t4 = 0xC10F398;
    for (;;) {
        t5 = *(short *)((t4 + 0x2));
        if (t5 == 0) {
            break;
        }
        if (((unsigned short)(*(short *)((t4 + 0x0))) & 0x2) != 0) {
            FUN_0c0cbafc((unsigned short)(*(short *)((t4 + 0x2))), 0x9, 0xFFFFFFFF, 0xFFFFFFFF);
        }
        t3 = (*(short *)((t4 + 0x0)));
        t3 = (unsigned short)t3;
        t3 = (t3 & 0x1);
        t14 = 0x100000;
        if (t3 != 0) {
            t14 = 0x0;
        }
        t16 = 0x0;
        if (t3 != 0) {
            t16 = 0x80000;
        }
        t18 = 0x3;
        if (t3 != 0) {
            t18 = 0x1;
        }
        FUN_0c0cbafc((unsigned short)(*(short *)((t4 + 0x2))), 0x2, 0x1000C0, ((t14 | t16) | (((t18 << 2) << 2) << 2)));
        t4 = (t4 + 0x14);
    }
    return t5;
}

int FUN_0c01ef2a(int a4, int a5, int a6, int a7, int a8)
{
    int t17;
    int t24;
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a7;
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0((a6 + 0x50));
    *(float *)(((int)stk + 8)) = ((*(float *)((a4 + 0x0))) + (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a4 + 0x4))) + (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 16)) = ((*(float *)((a4 + 0x8))) + (*(float *)((a5 + 0x8))));
    FUN_0c0db470(a4, (((int)stk + 4) + 0x10));
    FUN_0c0db470((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
    t17 = FUN_0c0e0cc0((*(int *)((a6 + 0x90))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
    if (t17 == 0) {
        FUN_0c0dc4c0(0x1);
        t24 = 0x0;
    } else {
        FUN_0c0dbda0((a6 + 0x10));
        FUN_0c0db470(0xC94C6C4, (*(int *)(((int)stk + 4))));
        FUN_0c0db4d0(0xC94C6D0, a8);
        FUN_0c0dc4c0(0x1);
        t24 = t17;
    }
    return t24;
}

int FUN_0c08a9ac(int a4, int a5, int a6, int a7)
{
    int t4;
    int t7;
    int t8;
    int t5;
    int t6;
    int t19;
    int t20;
    int t11;
    int t12;

    if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 3) {
        FUN_0c0e15d4((*(int *)((a4 + 0x30))), a5, a6, a7);
        t4 = FUN_0c0e14c4(0x0);
        *(unsigned int *)((a4 + 0x30)) = t4;
        return t4;
    }
    t7 = 0x0;
    for (;;) {
        t8 = *(int *)((((t7 << 2) + 0xC247030) + 0x0));
        if ((t8 != 4) && ((t8 != 5) && (t8 != 3))) {
            t5 = 0x154;
            t6 = t7;
            t5 = (t5 + a4);
            *(float *)((((((t7 << 1) + t6) << 2) + t5) + 0x4)) = 0.0f;
            t19 = t5;
            t20 = t6;
        } else {
            if ((((t8 == 4)) ? 1 : 0) != 0) {
                FUN_0c08a5e4(a4, t7);
            } else {
                t11 = t5;
                t12 = t6;
            }
            t5 = t11;
            t6 = t12;
            FUN_0c08a7f0(a4, t7);
        }
        t5 = t19;
        t7 = (t7 + 0x1);
        t6 = t20;
        if ((int)t7 >= (int)0xC) {
            break;
        }
    }
    return FUN_0c0e16c0((*(int *)((a4 + 0x30))));
}

int FUN_0c0c66ba(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;
    int t10;
    int t21;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R6;
    int R7;
    int R8;
    int R9;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R6 = a6;
    R7 = a7;
    L_C0C66BA:;
    t0 = *(short *)((R4 + 0x68));
    R0 = ((unsigned short)t0);
    R14 = (R4);
    if (((unsigned short)t0 == 0)) goto L_C0C66DA;
    goto L_C0C66CA;
    L_C0C66CA:;
    if ((R0 == 1)) goto L_C0C66EE;
    goto L_C0C66CE;
    L_C0C66CE:;
    if ((R0 == 2)) goto L_C0C6708;
    goto L_C0C66D2;
    L_C0C66D2:;
    if ((R0 == 3)) goto L_C0C6768;
    goto L_C0C66D6;
    L_C0C66D6:;
    goto L_C0C677E;
    L_C0C677E:;
    t7 = *(int *)0xC23A258;
    R0 = (t7);
    if (((t7 & 1) == 0)) goto L_C0C6792;
    goto L_C0C6786;
    L_C0C6786:;
    return FUN_0c0c0340((R14 + 0x30), F4);
    L_C0C6792:;
    return R0;
    L_C0C6768:;
    t10 = *(short *)((R14 + 0x6C));
    *(unsigned short *)((R14 + 0x6C)) = (t10 + 0x1);
    if (((int)(unsigned short)(t10 + 0x1) < (int)0x78)) goto L_C0C677E;
    goto L_C0C6778;
    L_C0C6778:;
    FUN_0c0e19f2(R4, a5, R6, R7);
    goto L_C0C677E;
    L_C0C6708:;
    *(float *)((R14 + 0x40)) = ((*(float *)((R14 + 0x40))) - 0.049999997f);
    *(float *)((R14 + 0x44)) = ((*(float *)((R14 + 0x44))) - 0.049999997f);
    R0 = (0x40);
    F4 = (1.0f);
    if (((*(float *)((R14 + 0x40))) > 1.0f)) goto L_C0C6734;
    goto L_C0C6726;
    L_C0C6726:;
    *(float *)((R14 + R0)) = F4;
    *(float *)((R14 + 0x44)) = F4;
    *(unsigned short *)((R14 + 0x68)) = ((*(short *)((R14 + 0x68))) + 0x1);
    goto L_C0C6734;
    L_C0C6734:;
    *(unsigned short *)((R14 + 0x6C)) = ((*(short *)((R14 + 0x6C))) + 0x1);
    goto L_C0C677E;
    L_C0C66EE:;
    t21 = *(short *)((R14 + 0x6A));
    *(unsigned short *)((R14 + 0x6A)) = (t21 + 0x1);
    if (((int)(unsigned short)(t21 + 0x1) < (int)0x3C)) goto L_C0C677E;
    goto L_C0C66FE;
    L_C0C66FE:;
    *(unsigned short *)((R14 + 0x68)) = ((*(short *)((R14 + 0x68))) + 0x1);
    goto L_C0C677E;
    L_C0C66DA:;
    *(float *)((R14 + 0x40)) = 3.0f;
    *(float *)((R14 + 0x44)) = 3.0f;
    *(unsigned short *)((R14 + 0x68)) = ((*(short *)((R14 + 0x68))) + 0x1);
    goto L_C0C66EE;
}

int FUN_0c08545a(int a4, int a5, float f4, float f5, float f6)
{
    float u16;
    int t26;
    float u19;
    int t23;
    float u24;
    int t25;
    float u20;
    int t21;
    float u18;
    int stk[10];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 4)) = f6;
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0(((*(int *)0xC247CB0) + 0x2AC));
    FUN_0c0db470((*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC));
    FUN_0c0dc4c0(0x1);
    *(float *)(((int)stk + 24)) = (-(*(float *)(((int)stk + 24))));
    *(float *)((a5 + 0x0)) = ((*(float *)(((int)stk + 16))) / (((*(float *)0xC247D14) * f4) - ((*(float *)(((int)stk + 24))) * (*(float *)0xC247D0C))));
    *(float *)((a5 + 0x4)) = ((*(float *)(((int)stk + 20))) / (((*(float *)0xC247D18) * f4) - ((*(float *)(((int)stk + 24))) * (*(float *)0xC247D10))));
    *(float *)((a5 + 0x8)) = (*(float *)(((int)stk + 24)));
    u16 = *(float *)(((int)stk + 24));
    t26 = 0x0;
    if (!((*(float *)(((int)stk + 8))) > u16) && (u18 = *(float *)(((int)stk + 4)), !(u16 > u18))) {
        u19 = *(float *)((a5 + 0x0));
        t23 = 0x0;
        u24 = _builtin_fabsf(u19);
        t25 = 0;
        if (1.0f > _builtin_fabsf(u19)) {
            u20 = *(float *)((a5 + 0x4));
            t21 = 0x1;
            if (!(1.0f > _builtin_fabsf(u20))) {
                t21 = 0x0;
            }
            t23 = t21;
            u24 = _builtin_fabsf(u20);
            t25 = ((1.0f > _builtin_fabsf(u20)));
        } else {
            t25 = (0);
        }
        t26 = t23;
    }
    return t26;
}

int FUN_0c0835fa(int a4)
{
    int t5;

    if ((*(int *)0xC2475A4) == 1) {
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x3B4)) = 0x1;
    }
    t5 = *(int *)((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0));
    FUN_0c082f04(a4, 0x3, (*(float *)((t5 + 0x22C))));
    FUN_0c082f04(a4, 0x4, (*(float *)((t5 + 0x230))));
    FUN_0c082f04(a4, 0x5, (*(float *)((t5 + 0x234))));
    FUN_0c082fae(a4, 0x3, 0x0, 0x168, (*(float *)0xC1028C8));
    FUN_0c082fae(a4, 0x5, 0x0, 0x168, (*(float *)0xC1028D0));
    FUN_0c082f78(a4, 0x0, 0xC247EA8);
    FUN_0c082f78(a4, 0x1, 0xC247EAC);
    FUN_0c082f78(a4, 0x2, 0xC247EB0);
    FUN_0c0e61d4();
    *(unsigned int *)((a4 + 0x370)) = 0xEAAA;
    *(unsigned int *)((a4 + 0x374)) = 0x2D;
    *(unsigned int *)((a4 + 0x3FC)) = 0x78;
    return 0x3FC;
}

int FUN_0c0ad83e(void)
{
    int t1;
    int t4;
    int t5;
    int t14;
    int t16;
    int t18;
    int t3;

    t1 = FUN_0c0e19aa(0xC0AD7E6, 0x24C, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t4 = 0xC10F398;
    for (;;) {
        t5 = *(short *)((t4 + 0x2));
        if (t5 == 0) {
            break;
        }
        if (((unsigned short)(*(short *)((t4 + 0x0))) & 0x2) != 0) {
            FUN_0c0cbafc((unsigned short)(*(short *)((t4 + 0x2))), 0x9, 0xFFFFFFFF, 0xFFFFFFFF);
        }
        t3 = (*(short *)((t4 + 0x0)));
        t3 = (unsigned short)t3;
        t3 = (t3 & 0x1);
        t14 = 0x100000;
        if (t3 != 0) {
            t14 = 0x0;
        }
        t16 = 0x0;
        if (t3 != 0) {
            t16 = 0x80000;
        }
        t18 = 0x3;
        if (t3 != 0) {
            t18 = 0x1;
        }
        FUN_0c0cbafc((unsigned short)(*(short *)((t4 + 0x2))), 0x2, 0x1000C0, ((t14 | t16) | (((t18 << 2) << 2) << 2)));
        t4 = (t4 + 0x14);
    }
    return t5;
}

float FUN_0c0ddef0(void)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u17[16];
    float u18[4];
    float u19[16];
    float u20[16];
    float u21[4];
    float u22[16];
    float u23[4];
    float u24[16];
    float u25[4];
    float u26[16];
    float u43[16];
    float u44[4];
    float u45[16];
    float u46[16];
    float u47[4];
    float u48[16];
    float u49[4];
    float u50[16];
    float u51[4];
    float u52[16];

    t0 = *(int *)0xC9482E0;
    u1 = *(float *)((t0 + 0x0));
    u2 = *(float *)(((t0 + 0x0) + 4));
    u3 = *(float *)(((t0 + 0x8) + 0x0));
    u4 = *(float *)((((t0 + 0x8) + 0x0) + 4));
    u5 = *(float *)((((t0 + 0x8) + 0x8) + 0x0));
    u6 = *(float *)(((((t0 + 0x8) + 0x8) + 0x0) + 4));
    u7 = *(float *)(((((t0 + 0x8) + 0x8) + 0x8) + 0x0));
    u8 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u9 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u10 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u11 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u12 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u13 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u14 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u15 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u16 = *(float *)((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_prefetch((void *)0xC9484E8);
    u17[0] = u2;
    u17[1] = u1;
    u17[2] = u4;
    u17[3] = u3;
    u17[4] = u6;
    u17[5] = u5;
    u17[6] = u8;
    u17[7] = u7;
    u17[8] = u10;
    u17[9] = u9;
    u17[10] = u12;
    u17[11] = u11;
    u17[12] = u14;
    u17[13] = u13;
    u17[14] = u16;
    u17[15] = u15;
    _builtin_st_ext((float (*)[4])u19);
    u18[0] = u19[0];
    u18[1] = u19[1];
    u18[2] = u19[2];
    u18[3] = u19[3];
    _builtin_ld_ext((float (*)[4])u17);
    _builtin_ftrv(u18, u18);
    u20[0] = u2;
    u20[1] = u1;
    u20[2] = u4;
    u20[3] = u3;
    u20[4] = u6;
    u20[5] = u5;
    u20[6] = u8;
    u20[7] = u7;
    u20[8] = u10;
    u20[9] = u9;
    u20[10] = u12;
    u20[11] = u11;
    u20[12] = u14;
    u20[13] = u13;
    u20[14] = u16;
    u20[15] = u15;
    u21[0] = u19[4];
    u21[1] = u19[5];
    u21[2] = u19[6];
    u21[3] = u19[7];
    _builtin_ld_ext((float (*)[4])u20);
    _builtin_ftrv(u21, u21);
    u22[0] = u2;
    u22[1] = u1;
    u22[2] = u4;
    u22[3] = u3;
    u22[4] = u6;
    u22[5] = u5;
    u22[6] = u8;
    u22[7] = u7;
    u22[8] = u10;
    u22[9] = u9;
    u22[10] = u12;
    u22[11] = u11;
    u22[12] = u14;
    u22[13] = u13;
    u22[14] = u16;
    u22[15] = u15;
    u23[0] = u19[8];
    u23[1] = u19[9];
    u23[2] = u19[10];
    u23[3] = u19[11];
    _builtin_ld_ext((float (*)[4])u22);
    _builtin_ftrv(u23, u23);
    u24[0] = u2;
    u24[1] = u1;
    u24[2] = u4;
    u24[3] = u3;
    u24[4] = u6;
    u24[5] = u5;
    u24[6] = u8;
    u24[7] = u7;
    u24[8] = u10;
    u24[9] = u9;
    u24[10] = u12;
    u24[11] = u11;
    u24[12] = u14;
    u24[13] = u13;
    u24[14] = u16;
    u24[15] = u15;
    u25[0] = u19[12];
    u25[1] = u19[13];
    u25[2] = u19[14];
    u25[3] = u19[15];
    _builtin_ld_ext((float (*)[4])u24);
    _builtin_ftrv(u25, u25);
    _builtin_prefetch((void *)0xC948508);
    _builtin_st_ext((float (*)[4])u26);
    u26[0] = u18[0];
    u26[1] = u18[1];
    u26[2] = u18[2];
    u26[3] = u18[3];
    u26[4] = u21[0];
    u26[5] = u21[1];
    u26[6] = u21[2];
    u26[7] = u21[3];
    u26[8] = u23[0];
    u26[9] = u23[1];
    u26[10] = u23[2];
    u26[11] = u23[3];
    u26[12] = u25[0];
    u26[13] = u25[1];
    u26[14] = u25[2];
    u26[15] = u25[3];
    _builtin_ld_ext((float (*)[4])u26);
    u27 = *(float *)0xC9484E8;
    u28 = *(float *)0xC9484EC;
    u29 = *(float *)0xC9484F0;
    u30 = *(float *)0xC9484F4;
    u31 = *(float *)0xC9484F8;
    u32 = *(float *)0xC9484FC;
    u33 = *(float *)0xC948500;
    u34 = *(float *)0xC948504;
    u35 = *(float *)0xC948508;
    u36 = *(float *)0xC94850C;
    u37 = *(float *)0xC948510;
    u38 = *(float *)0xC948514;
    u39 = *(float *)0xC948518;
    u40 = *(float *)0xC94851C;
    u41 = *(float *)0xC948520;
    u42 = *(float *)0xC948524;
    u43[0] = u27;
    u43[1] = u28;
    u43[2] = u29;
    u43[3] = u30;
    u43[4] = u31;
    u43[5] = u32;
    u43[6] = u33;
    u43[7] = u34;
    u43[8] = u35;
    u43[9] = u36;
    u43[10] = u37;
    u43[11] = u38;
    u43[12] = u39;
    u43[13] = u40;
    u43[14] = u41;
    u43[15] = u42;
    _builtin_st_ext((float (*)[4])u45);
    u44[0] = u45[0];
    u44[1] = u45[1];
    u44[2] = u45[2];
    u44[3] = u45[3];
    _builtin_ld_ext((float (*)[4])u43);
    _builtin_ftrv(u44, u44);
    u46[0] = u27;
    u46[1] = u28;
    u46[2] = u29;
    u46[3] = u30;
    u46[4] = u31;
    u46[5] = u32;
    u46[6] = u33;
    u46[7] = u34;
    u46[8] = u35;
    u46[9] = u36;
    u46[10] = u37;
    u46[11] = u38;
    u46[12] = u39;
    u46[13] = u40;
    u46[14] = u41;
    u46[15] = u42;
    u47[0] = u45[4];
    u47[1] = u45[5];
    u47[2] = u45[6];
    u47[3] = u45[7];
    _builtin_ld_ext((float (*)[4])u46);
    _builtin_ftrv(u47, u47);
    u48[0] = u27;
    u48[1] = u28;
    u48[2] = u29;
    u48[3] = u30;
    u48[4] = u31;
    u48[5] = u32;
    u48[6] = u33;
    u48[7] = u34;
    u48[8] = u35;
    u48[9] = u36;
    u48[10] = u37;
    u48[11] = u38;
    u48[12] = u39;
    u48[13] = u40;
    u48[14] = u41;
    u48[15] = u42;
    u49[0] = u45[8];
    u49[1] = u45[9];
    u49[2] = u45[10];
    u49[3] = u45[11];
    _builtin_ld_ext((float (*)[4])u48);
    _builtin_ftrv(u49, u49);
    u50[0] = u27;
    u50[1] = u28;
    u50[2] = u29;
    u50[3] = u30;
    u50[4] = u31;
    u50[5] = u32;
    u50[6] = u33;
    u50[7] = u34;
    u50[8] = u35;
    u50[9] = u36;
    u50[10] = u37;
    u50[11] = u38;
    u50[12] = u39;
    u50[13] = u40;
    u50[14] = u41;
    u50[15] = u42;
    u51[0] = u45[12];
    u51[1] = u45[13];
    u51[2] = u45[14];
    u51[3] = u45[15];
    _builtin_ld_ext((float (*)[4])u50);
    _builtin_ftrv(u51, u51);
    _builtin_st_ext((float (*)[4])u52);
    u52[0] = u44[0];
    u52[1] = u44[1];
    u52[2] = u44[2];
    u52[3] = u44[3];
    u52[4] = u47[0];
    u52[5] = u47[1];
    u52[6] = u47[2];
    u52[7] = u47[3];
    u52[8] = u49[0];
    u52[9] = u49[1];
    u52[10] = u49[2];
    u52[11] = u49[3];
    u52[12] = u51[0];
    u52[13] = u51[1];
    u52[14] = u51[2];
    u52[15] = u51[3];
    _builtin_ld_ext((float (*)[4])u52);
    return u27;
}

int FUN_0c04b982(int a4)
{
    int t0;
    int t5;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        FUN_0c053ac4(a4);
        *(unsigned short *)(((0x6E + a4) + 0x0)) = ((*(short *)(((0x6E + a4) + 0x0))) + (*(short *)((((*(int *)(((0x2A0 + a4) + 0x0))) << 1) + 0xC0F85D8))));
        t5 = FUN_0c056380(a4, 0x0);
        if (t5 != 0) {
            *(unsigned int *)((a4 + 0x20C)) = 0x200000;
            *(unsigned int *)((a4 + 0x210)) = 0x38;
            return 0x210;
        }
        *(unsigned int *)((a4 + 0x20C)) = 0x1;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        if ((int)(*(int *)((a4 + 0x394))) > 0) {
            *(unsigned int *)((a4 + 0x394)) = 0x0;
        }
        return 0x394;
    }
    return t0;
}

int FUN_0c0af87a(int a4, int a5)
{
    int t0;
    int t2;
    int t13;
    int stk[4];

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t2 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t2 - 546);
            if ((int)(t2 - 546) <= (int)0xFFFFC001) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
            }
        }
    } else {
        if ((int)(*(int *)0xC24FA38) >= (int)0x13A) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
        }
        t13 = *(int *)0xC24FA38;
        if ((t13 != 0xE0) && (t13 != 0xF4)) {
        } else {
            *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x1);
            FUN_0c0af590();
        }
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dcca0(0xC0FFC08);
    FUN_0c0dc890((*(short *)0xC0FFC16));
    FUN_0c0c465c((*(short *)0xC0FFC1A));
    FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
    FUN_0c0dcca0(0xC0FFC20);
    FUN_0c0dc890(((*(int *)((a4 + 0x38))) + (*(short *)0xC0FFC2E)));
    FUN_0c0c465c((*(short *)0xC0FFC32));
    FUN_0c0af7f8(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return FUN_0c0dc4c0(0x1);
}

void FUN_0c01d562(int a4, int a5)
{
    int t0;
    int t1;
    int t7;

    if (a5 != 0) {
        t0 = *(int *)((a5 + 0x4));
        t1 = FUN_0c0e262a(0xAC);
        *(float *)((t1 + 0xC)) = (FUN_0c0dcda0((t0 + 0x8), ((t0 + 0x8) + 0xC)));
        *(unsigned int *)((t1 + 0x8)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t1 + 0x4)) = 0x0;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x94)) = a4;
        *(unsigned int *)((t1 + 0x90)) = (*(int *)((a5 + 0x4)));
        *(unsigned int *)((t1 + 0x98)) = (*(int *)((a5 + 0x0)));
        *(unsigned int *)((a4 + 0x84)) = t1;
        *(unsigned int *)((t1 + 0xA8)) = 0x0;
        *(unsigned int *)((t1 + 0x9C)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t1 + 0xA0)) = 0x1;
        t7 = FUN_0c0e262a(0xC);
        *(unsigned int *)(((0xA4 + t1) + 0x0)) = t7;
        *(unsigned int *)((t7 + 0x8)) = t1;
        FUN_0c01de60(a4, t1);
    return;
    }
}

int FUN_0c025acc(int a4)
{
    int t33;
    int stk[3];

    *(unsigned int *)((a4 + 0x4C8)) = 0x1;
    if ((*(int *)((a4 + 0x524))) != 0) {
        if ((int)(*(int *)((a4 + 0x54C))) < (int)(*(int *)((a4 + 0x528)))) {
            FUN_0c0222c0(a4);
        } else {
            if ((int)(*(int *)((a4 + 0x54C))) > (int)(*(int *)((a4 + 0x528)))) {
                FUN_0c02248a(a4);
            } else {
                if ((0x1 & (*(int *)0xC23A258)) == 0) {
                    FUN_0c0223fc(a4);
                } else {
                    FUN_0c02253c(a4);
                }
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x500)) = 0x1;
    }
    FUN_0c02286c(a4, 0x28, (*(float *)0xC025BE4), (*(float *)0xC025BE0));
    *(volatile int *)0xC23A258;
    t33 = FUN_0c0e5fe4();
    if ((unsigned int)t33 > (unsigned int)(*(int *)(((0xBC + a4) + 0x0)))) {
        FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    }
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

void FUN_0c08d840(int a4, float f4)
{
    int t5;
    int t7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    float u8;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t13;
    int t14;

    t5 = a4;
    t7 = (*(int *)0xC248DC0);
    for (;;) {
        if (t7 == 0) {
            break;
        }
        t5 = t7;
        t5 = (t5 + 0x34);
        u8 = (FUN_0c0dcda0(t5, a4));
        if (!(u8 > f4)) {
            t5 = t7;
            t1 = 0x70;
            *(unsigned int *)((t7 + t1)) = 0x3;
            t4 = (*(int *)0xC248DC0);
            if (t5 == t4) {
                t2 = (*(int *)((t5 + 0x30)));
                *(unsigned int *)0xC248DC0 = t2;
                t13 = t2;
            } else {
                t3 = (*(int *)((t5 + 0x30)));
                *(unsigned int *)((t6 + 0x30)) = t3;
                t14 = t3;
            }
            t16 = t1;
            t17 = t13;
            t18 = t14;
            t19 = t4;
            t20 = t5;
        } else {
            t6 = t7;
        }
        t1 = t16;
        t2 = t17;
        t7 = (*(int *)((t7 + 0x30)));
        t3 = t18;
        t4 = t19;
        t5 = t20;
    }
}

int FUN_0c01d2c2(int a4, int a5)
{
    int t0;
    int t20;
    int t17;
    int t18;
    int t5;
    int t9;
    float u10;

    t0 = *(int *)((a5 + 0x200));
    if (((int)t0 >= (int)0x3) && ((int)t0 <= (int)0x16)) {
        t5 = 0x8;
        t9 = (0xC943514 + ((((*(int *)((a5 + 0xBC))) << 2) << 2) << 1));
        u10 = (float)(*(int *)((a5 + 0x1F4)));
    } else {
        t5 = 0x4;
        t9 = (0xC943514 + ((((*(int *)((a5 + 0xBC))) << 2) << 2) << 1));
        u10 = (float)(*(int *)((a5 + 0x1F4)));
    }
    *(unsigned int *)((a4 + 0x1CC)) = (int)(u10 * (*(float *)((t9 + t5))));
    t20 = 0x1F4;
    if ((*(int *)((a5 + 0x1F4))) != 0) {
        *(unsigned int *)((a4 + 0x1CC)) = (int)((float)(*(int *)((a4 + 0x1CC))) / (*(float *)((((((*(int *)((a4 + 0xBC))) << 2) << 2) << 1) + 0xC943520))));
        t17 = *(int *)((a4 + 0x1CC));
        t18 = 0x1;
        if ((int)t17 >= (int)0x1) {
            t18 = t17;
        }
        *(unsigned int *)((a4 + 0x1CC)) = t18;
        t20 = 0x1CC;
    }
    return t20;
}

int FUN_0c0aa522(int a4)
{
    int t0;
    int t1;
    int t9;
    int t29;

    t0 = *(int *)((a4 + 0x40));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t1 = *(int *)((a4 + 0x50));
            *(unsigned int *)((a4 + 0x50)) = (t1 - 1);
            if ((int)(t1 - 1) <= 0) {
                *(unsigned int *)0xC23A18C = 0x2;
            }
        }
    } else {
        t9 = FUN_0c016a86();
        if (t9 != 0) {
            if ((int)(*(int *)0xC24FA44) < (int)0x267) {
                *(unsigned int *)0xC24FA44 = 0x267;
            }
            if ((*(int *)0xC24FA5C) != 0) {
                *(unsigned int *)0xC23A18C = 0x2;
            }
            *(unsigned int *)0xC24FA60 = 0x5;
        }
        FUN_0c0aa5ea((*(int *)0xC24FA44));
    }
    t29 = *(int *)0xC24FA60;
    if (t29 != 0) {
        *(unsigned int *)0xC24FA60 = ((*(int *)0xC24FA60) - 1);
    }
    *(unsigned int *)0xC24FA44 = ((*(int *)0xC24FA44) + 0x1);
    return t29;
}

float FUN_0c01df48(int a4, int a5, float f4, float f5)
{
    int t0;
    int t2;
    int t3;
    float u4;
    float t11;
    float u12;
    float u13;
    float u22;
    int stk[9];

    t0 = 0xCC;
    if (a5 != 0) {
        t0 = 0xD0;
    }
    t2 = *(int *)((a4 + t0));
    if (((int)t2 <= (int)0xC) && ((int)t2 >= 0)) {
        t3 = *(int *)(((t2 << 2) + 0xC246FF0));
        u4 = *(float *)0xC01E054;
        *(float *)(((int)stk + 16)) = (((*(float *)((t3 + 0x30))) + (*(float *)((a4 + 0x30)))) * u4);
        *(float *)(((int)stk + 24)) = (((*(float *)((t3 + 0x38))) + (*(float *)((a4 + 0x38)))) * u4);
        *(float *)(((int)stk + 20)) = (((*(float *)((t3 + 0x34))) + (*(float *)((a4 + 0x34)))) * u4);
        t11 = FUN_0c01f1b8((((int)stk + 4) + 0xC), ((int)stk + 4));
        u12 = *(float *)((a4 + 0x58));
        u13 = *(float *)(((int)stk + 20));
        if (t11 > (u13 + u12)) {
            *(float *)((a4 + 0x34)) = (t11 + (*(float *)0xC01E05C));
        } else {
            *(float *)((a4 + 0x34)) = (u13 + u12);
        }
        *(float *)((a4 + 0x58)) = 0.0f;
        *(float *)((a4 + 0x4C)) = 0.0f;
        u22 = t11;
    }
    return u22;
}

int FUN_0c0ca862(int a4)
{
    int t4;

    FUN_0c0ca332(0xC20A270);
    FUN_0c0de000(1.5f);
    FUN_0c0c465c((*(int *)((a4 + 0x0))));
    t4 = *(int *)((a4 + 0x4));
    if ((t4 & 2) != 0) {
        FUN_0c0c9d34((*(int *)((a4 + 0xC))));
        FUN_0c0dc510(0x0);
        FUN_0c0c99d0(0x0);
        if (1.0f > (*(float *)((a4 + 0x10)))) {
            FUN_0c0de1f0((*(int *)((a4 + 0xC))), (*(float *)((a4 + 0x10))));
        } else {
            FUN_0c0de190((*(int *)((a4 + 0xC))));
        }
        return FUN_0c0dc4c0(0x1);
    }
    return t4;
}

int FUN_0c04bae4(int a4, int a5)
{
    int t5;
    int t8;
    int t12;

    if (((*(int *)((a5 + 0x8))) & 0x2) == 0) {
        *(unsigned int *)((a4 + 0x20C)) = 0x1;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
        t12 = 0x2D4;
    } else {
        t5 = *(int *)((a4 + 0x2EC));
        t8 = t5;
        if ((t5 & 12) != 0) {
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((((*(int *)((a4 + 0xC0))) << 2) << 1) + 0xC0F810C)));
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x210)) = 0x6B;
            *(unsigned int *)((a4 + 0x3AC)) = 0x0;
            t8 = 0x3AC;
        }
        t12 = t8;
    }
    return t12;
}

int FUN_0c04982e(int a4, int a5, int a6)
{
    int t24;
    int t21;

    if ((int)(*(int *)((a4 + 0x328))) >= 0) {
        *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
        if (((*(int *)0xC23A258) & 0x1) != 0) {
            *(unsigned short *)((a4 + 0x456)) = (*(short *)((a4 + 0x454)));
            *(unsigned short *)((a4 + 0x454)) = 0x1;
            *(float *)((a4 + 0x458)) = 0.199999988f;
        } else {
            *(unsigned short *)((a4 + 0x454)) = (*(short *)((a4 + 0x456)));
            *(float *)((a4 + 0x458)) = 1.0f;
        }
        if ((*(int *)((a4 + 0x328))) != 0) {
            *(unsigned int *)((a4 + 0x328)) = ((*(int *)((a4 + 0x328))) - 1);
        }
    }
    t24 = 0x328;
    if ((*(int *)((a4 + 0x328))) == 0) {
        t21 = 0x20C;
        if (((*(int *)((a4 + 0x20C))) & 0x4D8002) == 0) {
            *(unsigned int *)((a4 + 0x1B0)) = 0x0;
            *(unsigned int *)((a4 + 0x328)) = 0xFFFFFFFF;
            *(unsigned short *)((a4 + 0x454)) = 0x0;
            *(float *)((a4 + 0x458)) = 1.0f;
            t21 = 0x458;
        }
        t24 = t21;
    }
    return t24;
}

int FUN_0c0d8350(int a4)
{
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R7;
    int R9;
    int R10;
    int R12;
    int R13;
    int T_;
    R4 = a4;
    L_C0D8350:;
    R0 = (R4);
    if ((R4 != 8)) goto L_C0D8360;
    goto L_C0D8356;
    L_C0D8356:;
    R4 = (0x0);
    goto L_C0D83E8;
    L_C0D83E8:;
    return R4;
    L_C0D8360:;
    if ((R0 != 16)) goto L_C0D8370;
    goto L_C0D8364;
    L_C0D8364:;
    R4 = (0x1);
    goto L_C0D83E8;
    L_C0D8370:;
    R0 = (R4);
    if ((R4 != 32)) goto L_C0D8380;
    goto L_C0D8376;
    L_C0D8376:;
    R4 = (0x2);
    goto L_C0D83E8;
    L_C0D8380:;
    if ((R0 != 64)) goto L_C0D83B0;
    goto L_C0D8384;
    L_C0D8384:;
    R4 = (0x3);
    goto L_C0D83E8;
    L_C0D83B0:;
    if ((R4 != 0x80)) goto L_C0D83C0;
    goto L_C0D83B6;
    L_C0D83B6:;
    R4 = (0x4);
    goto L_C0D83E8;
    L_C0D83C0:;
    if ((R4 != 0x100)) goto L_C0D83D0;
    goto L_C0D83C6;
    L_C0D83C6:;
    R4 = (0x5);
    goto L_C0D83E8;
    L_C0D83D0:;
    if ((R4 != 0x200)) goto L_C0D83E0;
    goto L_C0D83D6;
    L_C0D83D6:;
    R4 = (0x6);
    goto L_C0D83E8;
    L_C0D83E0:;
    if ((R4 != 0x400)) goto L_C0D83E8;
    goto L_C0D83E6;
    L_C0D83E6:;
    R4 = (0x7);
    goto L_C0D83E8;
}

int FUN_0c0b72d6(int a4)
{
    int t0;
    int t1;

    t0 = 0xC24FAB4;
    t1 = 0x0;
    for (;;) {
        if ((int)(*(int *)((((a4 << 2) + 0xC247584) + 0x0))) <= (int)(*(int *)((t0 + 0x0)))) {
            t1 = (t1 + 0x1);
            t0 = (t0 + 0xC);
            if ((int)t1 >= (int)0xA) {
                break;
            }
            continue;
        }
        break;
    }
    if ((int)t1 < (int)0xA) {
        FUN_0c0b736e(a4, t1);
        FUN_0c0b70b4();
        return (t1 + 0x1);
    }
    *(unsigned short *)((((a4 << 2) + 0xC24FB2C) + 0x0)) = 0x0;
    return 0x0;
}

float FUN_0c0da410(int a4)
{
    float u0;
    float u1;
    float u2;
    int t3;
    float u4;
    int t5;
    float u6;
    float u7;
    float u8;

    u0 = (float)(int)((((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) / (1.0f + 1.0f)) / 1.57079625f) + 0.5f);
    u1 = (((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079625f));
    u2 = (((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079625f));
    t3 = 0xB;
    u4 = 0.0f;
    for (;;) {
        t5 = t3;
        t3 = (t3 - 2);
        u6 = ((float)t5 - u4);
        u4 = (u1 * u2);
        u4 = (u4 / u6);
        if ((int)t3 < (int)0x3) {
            break;
        }
    }
    u7 = ((((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079625f)) / (1.0f - u4));
    u8 = 1.0f;
    u8 = u8 + ((((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079625f)) / (1.0f - u4)) * ((((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079625f)) / (1.0f - u4));
    if (((int)((((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) / (1.0f + 1.0f)) / 1.57079625f) + 0.5f) & 0x1) == 0) {
        return ((u7 * (1.0f + 1.0f)) / u8);
    }
    return (-((u7 * (1.0f + 1.0f)) / u8));
}

int FUN_0c07cdb0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t15;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        t1 = 0xC2623A0;
        t2 = a4;
        t3 = t0;
        t4 = (t0 + 0x18);
        t5 = a7;
        for (;;) {
            if ((*(int *)((t4 + 0x0))) == 0) {
                break;
            }
            t1 = 0x4C;
            t3 = t4;
            t5 = (*(int *)((t3 + t1)));
            t1 = (*(int *)((t3 + 0x24)));
            if (t1 == -1) {
                t2 = ((*(int *)((t3 + 0x8))) & 0xFF3FFFFF);
                t2 = (t2 | 0x800000);
                *(unsigned int *)((t3 + 0x8)) = t2;
            }
            t5 = ((unsigned int)t5 >> 2);
            t4 = (t4 + 0x50);
            t5 = (t5 << 2);
            t4 = (t4 + t5);
        }
        t15 = t1;
    } else {
        t15 = 0xC2623A0;
    }
    return t15;
}

int FUN_0c0e06de(void)
{
    int t1;
    int t5;
    int t11;
    int t12;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    for (;;) {
        *(volatile int *)0xC94C6A0;
        t1 = FUN_0c0e5dc0();
        if ((int)(*(int *)(((int)stk + 16))) >= (int)t1) {
            return 0xFFFFFFFF;
        }
        t5 = *(int *)((((*(int *)(((int)stk + 16))) << 2) + (*(int *)0xC94C6A4)));
        *(unsigned int *)(((int)stk + 8)) = t5;
        if (t5 != -1) {
            break;
        }
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    }
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    for (;;) {
        if (((*(int *)(((int)stk + 8))) & (*(int *)(((int)stk + 4)))) == 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) << 1);
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    }
    t11 = *(int *)(((int)stk + 16));
    t12 = *(int *)0xC94C6A4;
    *(unsigned int *)(((t11 << 2) + t12)) = ((*(int *)(((t11 << 2) + t12))) | (*(int *)(((int)stk + 4))));
    return (((((*(int *)(((int)stk + 16))) << 2) << 2) << 1) + (*(int *)(((int)stk + 12))));
}

int FUN_0c9de360(void)
{
    int t5;
    int t6;
    int t15;
    int t3;
    int t4;
    int t11;

    if ((int)(*(int *)0xC20CF8C) <= 0) {
        FUN_0c0db4d0(0xC94CAA8, 0xC94CAD0);
        *(unsigned int *)(((int)_builtin_get_gbr() + 16)) = 0xC9DF0C0;
        *(unsigned int *)(((int)_builtin_get_gbr() + 20)) = 0xC0E5AA0;
        *(unsigned int *)(((int)_builtin_get_gbr() + 12)) = 0xC9DEF40;
        t15 = 0xC9DEF40;
    } else {
        t5 = 0x10;
        t6 = 0xC94CA68;
        for (;;) {
            if ((int)(*(int *)((t6 + 0x0))) > 0) {
                t4 = 0xC0DB4D0;
                FUN_0c0db4d0((t6 + 0x40), (t6 + 0x68));
                t4 = 0xC0DB470;
                FUN_0c0db470((t6 + 0x34), (t6 + 0x5C));
            } else {
                t11 = t3;
            }
            t3 = t11;
            t4 = 0xFFFFFFB0;
            t3 = (unsigned char)t4;
            t5 = (t5 - 0x1);
            t6 = (t6 + t3);
            if (t5 == 0) {
                break;
            }
        }
        *(unsigned int *)(((int)_builtin_get_gbr() + 16)) = 0xC9DF220;
        *(unsigned int *)(((int)_builtin_get_gbr() + 20)) = 0xC0E59E0;
        *(unsigned int *)(((int)_builtin_get_gbr() + 12)) = 0xC9DEFC0;
        t15 = 0xC9DEFC0;
    }
    return t15;
}

void FUN_0c0dbda0(int a4)
{
    int t1;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC9482BC);
    }
    u3 = *(float *)((t1 + 0x0));
    u4 = *(float *)(((t1 + 0x4) + 0x0));
    u5 = *(float *)((((t1 + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((t1 + 0x4) + 0x4) + 0x4) + 0x0));
    u7 = *(float *)((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u8 = *(float *)(((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u9 = *(float *)((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)(((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u11 = *(float *)((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u12 = *(float *)(((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u15 = *(float *)((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u16 = *(float *)(((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u17 = *(float *)((((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u18 = *(float *)(((((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    _builtin_st_ext((float (*)[4])u19);
    u19[0] = u3;
    u19[1] = u4;
    u19[2] = u5;
    u19[3] = u6;
    u19[4] = u7;
    u19[5] = u8;
    u19[6] = u9;
    u19[7] = u10;
    u19[8] = u11;
    u19[9] = u12;
    u19[10] = u13;
    u19[11] = u14;
    u19[12] = u15;
    u19[13] = u16;
    u19[14] = u17;
    u19[15] = u18;
    _builtin_ld_ext((float (*)[4])u19);
}

int ADXT_StartAfs(int a4, int a5, int a6)
{
    int t8;
    int stk[10];

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    ADXT_Stop();
    ADXCRS_Lock();
    ADXF_GetFileRange((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 28))), ((int)stk + 16));
    t8 = ADXSTM_OpenRange((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    if (t8 == 0) {
        ADXCRS_Unlock();
        FUN_0c229d7e(0xC236C08, ((*(int *)(((int)stk + 24)))), ((*(int *)(((int)stk + 28)))));
    } else {
        adxt_start_stm(a4);
    }
    return (ADXCRS_Unlock());
}

int FUN_0c0dc460(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;

    t0 = *(short *)0xC9482B4;
    t1 = a4;
    if ((int)a4 <= 0) {
        t1 = 0x1;
    }
    t3 = *(short *)0xC9482B6;
    t4 = (t0 - t1);
    if ((int)t0 < (int)t1) {
        t4 = 0x0;
    }
    t6 = *(int *)0xC9482B8;
    *(unsigned short *)0xC9482B4 = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0xC9482BC = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    return ((((int)t0 >= (int)t1)) ? 1 : 0);
}

int FUN_0c0193a2(int a4)
{
    int t0;
    int t7;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)(((a4 << 2) + 0xC207A74));
    t7 = 0xC207A74;
    if (t0 != 0) {
        t1 = 0xC207A74;
        t3 = t0;
        for (;;) {
            if ((*(int *)((t3 + 0x0))) == 0) {
                break;
            }
            t2 = (*(int *)((t3 + 0x0)));
            t3 = (t3 + 0x4);
            t1 = (((int (*)(int))(t2))(a4));
        }
        t7 = t1;
    }
    return t7;
}
