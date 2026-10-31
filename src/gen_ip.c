/* Straight-line functions with calls and guards (batch gen_ip): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern int FUN_0c0169da();
int FUN_0c016a86(void);
int FUN_0c01cdf2(int);
int FUN_0c01db0e(int, int);
int FUN_0c0236ce(int);
int FUN_0c02a19a(int, int, int);
int FUN_0c02a220(int);
int FUN_0c02a432(int);
int FUN_0c02b0c2(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c0497a0(int);
int FUN_0c049804(int);
int FUN_0c04982e(int);
int FUN_0c04a26c(int);
int FUN_0c04a318(int, int);
int FUN_0c0503bc(int);
int FUN_0c051e92(int);
int FUN_0c053aa4(int);
int FUN_0c054d66(int);
int FUN_0c054fb0(int);
int FUN_0c056098(int, int, int);
int FUN_0c05fd8c(int, int, int, int, int, float, float, float, float);
int FUN_0c0603d0(int, int, int, int, int, float, float, float, float);
int FUN_0c063994(int, int, Stk4);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c07e636(int, int);
int FUN_0c081e0c(int);
int FUN_0c0845e8(int);
int FUN_0c0845f8(int, int);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c086920(int);
int FUN_0c092884(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b359e(int, int);
int FUN_0c0ba00c(int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c0340(int);
int FUN_0c0c1620(int);
int FUN_0c0c465c(int);
int FUN_0c0c497c(int, float);
int FUN_0c0c49b0(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cdf02(void);
int FUN_0c0ce770(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e5dc0(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c074112(int a4, int a5, int a6, int a7);
int FUN_0c04f608(int a4, int a5, int a6);
int FUN_0c0cd6f8(int a4);
int FUN_0c048aaa(int a4);
void FUN_0c0880d4(int a4);
int FUN_0c0a9bb8(void);
int FUN_0c0e1e7a(int a4, int a5, int a6);
int FUN_0c0c1910(int a4);
int FUN_0c0802c4(int a4);
int FUN_0c08238c(int a4, int a5);
int FUN_0c0b9f10(int a4);
void FUN_0c02a548(int a4);
int FUN_0c02ce56(int a4, int a5, int a6, int a7);
int FUN_0c0116d4(void);
int FUN_0c0c17e0(int a4);
int FUN_0c05c5d8(int a4, int a5);
int FUN_0c088274(int a4);
int FUN_0c0899d0(int a4);
int FUN_0c04a118(int a4);
int FUN_0c060e88(int a4, int a5);
int FUN_0c0a3e1c(int a4);
void FUN_0c02b1ac(int a4);
int FUN_0c0609f4(int a4, int a5);
int FUN_0c067de4(int a4);
int FUN_0c0a975a(int a4);

int FUN_0c074112(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC195A18));
    t1 = t0;
    if (((*(int *)0xC23ED88) & (*(int *)((a4 + 0x40)))) != 0) {
        t2 = t0;
        t0 = 0x10;
        for (;;) {
            t3 = *(short *)((t2 + 0x0));
            t2 = (t2 + 0x2);
            FUN_0c0c49b0(t3, a5, a6, a7);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
        FUN_0c0e19f2();
        t1 = t2;
    }
    *(float *)(((0x34 + a4) + 0x0)) = ((*(float *)(((0x34 + a4) + 0x0))) - (((FUN_0c0da410((*(int *)((a4 + 0x3C))))) + 0.5f) * 0.00999999978f));
    t0 = FUN_0c0da2e0();
    t2 = ((~(((~t0) + 0x1) & 0x1FFF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0x1FFF);
    }
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + (t2 + 0x2000));
    t0 = t1;
    t1 = 0x10;
    for (;;) {
        u0 = *(float *)((a4 + 0x34));
        u1 = *(float *)((a4 + 0x38));
        t3 = *(short *)((t0 + 0x0));
        t0 = (t0 + 0x2);
        u2 = u0;
        if (u1 > u0) {
            u2 = u1;
        }
        t2 = FUN_0c0c497c(t3, u2);
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t2;
}

int FUN_0c04f608(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x3B0));
    *(unsigned int *)((a4 + 0x3B0)) = (t0 - 1);
    if ((int)(t0 - 1) >= 0) {
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
    }
    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        if ((*(int *)((0xC247030 + ((((*(int *)((a4 + 0xBC))) + 0x1) & 0x1) << 2)))) == 4) {
            t1 = *(int *)((0xC246FF0 + ((((*(int *)((a4 + 0xBC))) + 0x1) & 0x1) << 2)));
            *(unsigned int *)((t1 + 0x1B0)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x24C + t1)) = *(struct mv3 *)((a4 + 0x60)); }
            *(unsigned short *)((t1 + 0x6E)) = (*(short *)((a4 + 0x6E)));
            FUN_0c056098(t1, a5, a6);
        }
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x324)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x24C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((0x24C + a4)); }
        *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x80);
        *(unsigned int *)((a4 + 0x0)) = 0xC04F7C8;
        return FUN_0c054fb0(a4);
    }
    return t0;
}

int FUN_0c0cd6f8(int a4)
{
    int stk[6];
    int t0;
    register int t5;
    register int t1;
    register int t17;
    register int t18;
    register int t38;
    register int t20;
    register float u29;
    register float u31;
    register int t36;
    register int t11;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC23ED5C;
    if ((0x200 & t0) != 0) {
        t5 = 0x800;
        if ((0x800 & t0) != 0) {
            t1 = FUN_0c0e1830(0xC0CD85C, 0x34);
            FUN_0c0e19d0(t1);
            *(unsigned int *)((t1 + 0x4)) = 0xC0CD6B0;
            *(unsigned int *)0xC247D04 = 0x7;
            *(unsigned int *)0xC247CD0 = 0xC1033D4;
            FUN_0c0cc3f8(0x71FA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t5 = (FUN_0c0e19f2());
        }
        t11 = t5;
    }
    t17 = *(int *)(((int)stk + 4));
    t18 = *(int *)((t17 + 0x30));
    *(unsigned int *)((t17 + 0x30)) = (t18 + 0x1);
    t38 = t11;
    if ((int)(t18 + 0x1) >= (int)0xB4) {
        t20 = FUN_0c0e19aa(0xC0CD9C0, 0x80, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t20);
        *(float *)((t20 + 0x44)) = (*(float *)0xC1E9EE4);
        *(float *)((t20 + 0x48)) = (*(float *)0xC1E9EE8);
        *(float *)((t20 + 0x4C)) = (*(float *)0xC1E9EEC);
        *(unsigned int *)((t20 + 0x34)) = 0xC1E9EF0;
        *(float *)((t20 + 0x38)) = (*(float *)0xC1E9EF0);
        *(float *)((t20 + 0x3C)) = (*(float *)0xC1E9EF4);
        *(float *)((t20 + 0x40)) = (*(float *)0xC1E9EF8);
        u29 = 0.349999994f;
        u29 = u29 + 2.49999994e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t20 + 0x68)) = u29;
        u31 = 0.399999976f;
        u31 = u31 + 0.5f * ((*(float *)((t20 + 0x68))) + -0.349999994f);
        *(float *)((t20 + 0x64)) = u31;
        *(unsigned int *)((t20 + 0x78)) = 0x3;
        t36 = FUN_0c0d9dc0(((*(float *)((t20 + 0x38))) - (*(float *)((t20 + 0x44)))), ((*(float *)((t20 + 0x40))) - (*(float *)((t20 + 0x4C)))));
        *(unsigned short *)(((0x5E + t20) + 0x0)) = t36;
        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x30)) = 0x0;
        t38 = t36;
    }
    return t38;
}

int FUN_0c048aaa(int a4)
{
    int stk[7];
    register int t1;
    register int t21;

    FUN_0c034fbc(a4, 0x300, 0x1, 0x0);
    t1 = *(int *)((a4 + 0x3A0));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
            } else {
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    *(unsigned int *)((a4 + 0x534)) = 0x0;
                    *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) & 0xFFFFFFBF);
                    FUN_0c02a19a(a4, 0x1, 0xC);
                }
            }
        } else {
            t21 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t21 - 1);
            if ((int)(t21 - 1) < 0) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x59A;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
        }
    } else {
        if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x599;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x534)) = 0x0;
            *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0xC0F675C); }
            FUN_0c063994(a4, ((int)stk + 4), *(Stk4 *)(((int)stk + 4)));
        }
    }
    return (FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048CB4)));
}

void FUN_0c0880d4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t0 - 1);
    if (t0 != 0) {
        t0 = *(int *)((a4 + 0x30));
        t1 = FUN_0c0e1830(0xC0889F4, 0x64);
        FUN_0c0e19d0(t1);
        t2 = *(int *)((t0 + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F274)); }
        u0 = (*(float *)0xC08823C);
        u0 = u0 + (*(float *)0xC088240) * (float)(FUN_0c0da2e0());
        *(float *)((t1 + 0x50)) = u0;
        u0 = (*(float *)0xC088244);
        u0 = u0 + (*(float *)0xC088248) * (float)(FUN_0c0da2e0());
        *(float *)((t1 + 0x58)) = u0;
        *(unsigned short *)((t1 + 0x5E)) = 0x16C;
        *(unsigned int *)(((0x48 + t1) + 0x0)) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
        *(float *)((t1 + 0x4C)) = 1.0f;
        *(float *)((t1 + 0x44)) = (*(float *)((a4 + 0x34)));
        *(unsigned int *)((t1 + 0x60)) = 0x1F;
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.00999999978f);
        FUN_0c0dc5a0();
        nlRotateAY((*(short *)((t0 + 0x222))));
        t2 = *(short *)((t0 + 0x220));
        t0 = FUN_0c0da2e0();
        nlRotateAX((0xFFFFC001 + (t2 - (t0 & 0xFFF))));
        FUN_0c0db470((t1 + 0x3C), (t1 + 0x3C));
        nlPopMatrix(0x1);
        if ((int)(*(int *)((a4 + 0x3C))) <= 0) {
            FUN_0c0e19f2();
    return;
        }
        return;
    }
}

int FUN_0c0a9bb8(void)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t3;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t24;
    register int t15;

    *(unsigned int *)(((int)stk + 4)) = 0xC23EDD0;
    t0 = 0x0;
    t1 = 0xC10D4BC;
    for (;;) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)((t1 + 0x14)));
        t3 = FUN_0c0e1830(0xC0B35E4, 0x474);
        FUN_0c0e19d0(t3);
        *(unsigned int *)(((0xC0 + t3) + 0x0)) = (*(signed char *)((t1 + 0x1)));
        *(unsigned int *)((t3 + 0xBC)) = (*(signed char *)((t1 + 0x0)));
        *(float *)(((0x468 + t3) + 0x8)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x4)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x0)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x8)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x4)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x0)) = 1.0f;
        *(float *)((t3 + 0x284)) = 1.0f;
        *(float *)((t3 + 0x27C)) = 1.0f;
        *(float *)((t3 + 0x278)) = 1.0f;
        *(float *)((t3 + 0x274)) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)((t1 + 0x8)); }
        t9 = (t3 + 0x30);
        t10 = 0x0;
        t11 = (*(int *)(((int)stk + 4)));
        t12 = ((*(int *)((t3 + 0xC0))) & 0xFFFFFFFE);
        t13 = t3;
        for (;;) {
            if (((*(int *)((t10 + 0xC23EDE0))) == 4) && (t15 = *(int *)((t10 + 0xC23EDC0)), t15 == t12)) {
                break;
            }
            t10 = (t10 + 0x4);
            t11 = (t11 + 0x4);
            if ((unsigned int)t10 >= (unsigned int)0xC) {
                t10 = t13;
                FUN_0c0855ba(t10);
                t10 = t13;
                FUN_0c0ba6e8(t10);
                t10 = t13;
                FUN_0c0ba776(t10);
                t10 = t13;
                FUN_0c085638(t10);
                t11 = (*(int *)(((int)stk + 8)));
                t10 = t13;
                FUN_0c0b359e(t10, t11);
                *(unsigned int *)((t0 + 0xC246FF0)) = t13;
                *(unsigned short *)((t13 + 0x6C)) = 0xFFFFF8E4;
                t0 = (t0 + 0x4);
                *(unsigned int *)((t13 + 0x2E8)) = 0x1;
                t1 = (t1 + 0x18);
                if ((unsigned int)t0 >= (unsigned int)0xC) {
                    t10 = 0xC0A9CB8;
                    t11 = 0x30;
                    return (FUN_0c0e1830(0xC0A9CB8, t11));
                }
                t10 = 0xC0B35E4;
                t11 = 0x474;
                *(unsigned int *)(((int)stk + 8)) = (*(int *)((t1 + 0x14)));
                t24 = FUN_0c0e1830(0xC0B35E4, t11);
                t13 = t24;
                t10 = t24;
                FUN_0c0e19d0(t10);
                t9 = 0xC0;
                t9 = (t9 + t13);
                t11 = 0x468;
                *(unsigned int *)((t9 + 0x0)) = (*(signed char *)((t1 + 0x1)));
                t9 = t13;
                t11 = (t11 + t13);
                t9 = (t9 + 0x30);
                t10 = 0x45C;
                *(unsigned int *)((t13 + 0xBC)) = (*(signed char *)((t1 + 0x0)));
                *(float *)((t11 + 0x8)) = 1.0f;
                *(float *)((t11 + 0x4)) = 1.0f;
                t10 = (t10 + t13);
                *(float *)((t11 + 0x0)) = 1.0f;
                *(float *)((t10 + 0x8)) = 1.0f;
                *(float *)((t10 + 0x4)) = 1.0f;
                *(float *)((t10 + 0x0)) = 1.0f;
                *(float *)((t13 + 0x284)) = 1.0f;
                *(float *)((t13 + 0x27C)) = 1.0f;
                *(float *)((t13 + 0x278)) = 1.0f;
                *(float *)((t13 + 0x274)) = 1.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t9) = *(struct mv3 *)((t1 + 0x8)); }
                t11 = (*(int *)(((int)stk + 4)));
                t10 = 0x0;
                t12 = (*(int *)((t13 + 0xC0)));
                t12 = (t12 & 0xFFFFFFFE);
                continue;
            }
        }
        *(unsigned int *)((t13 + 0xC4)) = (*(int *)((t11 + 0x0)));
        FUN_0c0855ba(t13);
        FUN_0c0ba6e8(t13);
        FUN_0c0ba776(t13);
        FUN_0c085638(t13);
        FUN_0c0b359e(t13, (*(int *)(((int)stk + 8))));
        *(unsigned int *)((t0 + 0xC246FF0)) = t13;
        *(unsigned short *)((t13 + 0x6C)) = 0xFFFFF8E4;
        t0 = (t0 + 0x4);
        *(unsigned int *)((t13 + 0x2E8)) = 0x1;
        t1 = (t1 + 0x18);
        if ((unsigned int)t0 >= (unsigned int)0xC) {
            break;
        }
    }
    return (FUN_0c0e1830(0xC0A9CB8, 0x30));
}

int FUN_0c0e1e7a(int a4, int a5, int a6)
{
    int stk[21];
    register int t7;
    register int t11;
    register int t13;
    register int t18;
    register int t14;
    register int t15;
    register int t21;
    register int t22;
    register int t32;
    register int t33;
    register int t41;
    register int t44;
    register int t48;

    *(unsigned int *)(((int)stk + 44)) = a5;
    if ((*(int *)((a4 + 0x1C))) != 0) {
        FUN_0c0db0a0(0xA, 0x11);
        *(int *)((int)stk + 36) = 0xC1EA830;
        nlPrintf(0xC1EA830);
        *(int *)((int)stk + 32) = a4;
        *(int *)((int)stk + 28) = 0xC1EA870;
        nlPrintf(0xC1EA870, a4);
        *(int *)((int)stk + 24) = a5;
        *(int *)((int)stk + 20) = 0xC1EA880;
        nlPrintf(0xC1EA880, a5);
        t7 = (*(int *)0xC94C790);
        *(int *)((int)stk + 16) = t7;
        *(int *)((int)stk + 12) = 0xC1EA890;
        nlPrintf(0xC1EA890, t7);
        t11 = (*(int *)(((*(int *)0xC94C790) + 0x0)));
        *(int *)((int)stk + 8) = t11;
        *(int *)((int)stk + 4) = 0xC1EA8A8;
        nlPrintf(0xC1EA8A8, t11);
        for (;;) {
        }
    }
    t13 = *(int *)((a4 + 0x24));
    t18 = 0x1;
    if (t13 != a4) {
        t14 = t13;
        t15 = 0x1;
        for (;;) {
            t14 = (*(int *)((t14 + 0x24)));
            t15 = (t15 + 0x1);
            if (t14 == a4) {
                break;
            }
        }
        t18 = t15;
    }
    if ((*(short *)((a5 + 0x2C))) == 0) {
        *(unsigned short *)((a5 + 0x2C)) = t18;
        *(unsigned int *)((a5 + 0x20)) = a4;
    } else {
        t21 = *(int *)((a5 + 0x20));
        t22 = *(int *)((t21 + 0x28));
        *(unsigned int *)((t21 + 0x28)) = (*(int *)((a4 + 0x28)));
        *(unsigned int *)(((*(int *)((a4 + 0x28))) + 0x24)) = t21;
        *(unsigned int *)((a4 + 0x28)) = t22;
        *(unsigned int *)((t22 + 0x24)) = a4;
        *(unsigned short *)((a5 + 0x2C)) = ((*(short *)((a5 + 0x2C))) + t18);
    }
    *(unsigned int *)(((int)stk + 48)) = (*(int *)((a5 + 0x20)));
    *(unsigned int *)(((int)stk + 40)) = (unsigned short)(*(short *)((a5 + 0x2C)));
    t32 = a5;
    for (;;) {
        t33 = *(int *)(((int)stk + 40));
        *(unsigned int *)(((int)stk + 40)) = (t33 - 1);
        if (((t33 - 1) + 0x1) == 0) {
            *(unsigned int *)((a4 + 0x1C)) = (*(int *)(((int)stk + 44)));
            return 0x2C;
        }
        if (t32 == (*(int *)(((int)stk + 48)))) {
            break;
        }
        t32 = (*(int *)((t32 + 0x24)));
    }
    FUN_0c0db0a0(0xA, 0x11);
    *(int *)((int)stk + 36) = 0xC1EA8C8;
    nlPrintf(0xC1EA8C8);
    *(int *)((int)stk + 32) = a4;
    *(int *)((int)stk + 28) = 0xC1EA870;
    nlPrintf(0xC1EA870, a4);
    t41 = t32;
    *(int *)((int)stk + 24) = t41;
    *(int *)((int)stk + 20) = 0xC1EA880;
    nlPrintf(0xC1EA880, t41);
    t44 = (*(int *)0xC94C790);
    *(int *)((int)stk + 16) = t44;
    *(int *)((int)stk + 12) = 0xC1EA890;
    nlPrintf(0xC1EA890, t44);
    t48 = (*(int *)(((*(int *)0xC94C790) + 0x0)));
    *(int *)((int)stk + 8) = t48;
    *(int *)((int)stk + 4) = 0xC1EA8A8;
    nlPrintf(0xC1EA8A8, t48);
    for (;;) {
    }
}

int FUN_0c0c1910(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x38));
    FUN_0c0c1620((*(int *)((a4 + 0x80))));
    FUN_0c0db0a0(0x14, 0x32);
    nlPrintf(0xC1E3C88, ((*(int *)((t0 + 0x2BC)))));
    FUN_0c0db0a0(0x14, 0x33);
    nlPrintf(0xC1E3C9C, ((*(int *)((((*(int *)((((((*(int *)((t0 + 0x2BC))) << 2) << 2) << 1) + 0xC1AAE98))) << 2) + (*(int *)0xC262384)))) + 0xCA10000));
    FUN_0c0db0a0(0x14, 0x34);
    nlPrintf(0xC1E3CA8, ((*(int *)((t0 + 0x2C0)))));
    FUN_0c0db0a0(0x14, 0x35);
    nlPrintf(0xC1E3C9C, ((*(int *)((((*(int *)((((((*(int *)((t0 + 0x2C0))) << 2) << 2) << 1) + 0xC1AAE98))) << 2) + (*(int *)0xC262384)))) + 0xCA10000));
    FUN_0c0db0a0(0x14, 0x36);
    nlPrintf(0xC1E3CBC, ((*(int *)((t0 + 0x2C4)))));
    FUN_0c0db0a0(0x14, 0x37);
    nlPrintf(0xC1E3CD4, ((*(int *)((t0 + 0x2C8)))));
    t0 = *(int *)((a4 + 0x88));
    if (t0 != 0) {
        return t0;
    }
    FUN_0c0db0a0(0x2F, ((*(int *)((a4 + 0x88))) + 0x32));
    nlPrintf(0xC1E3CEC);
    return FUN_0c0c17e0(a4);
}

int FUN_0c0802c4(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    FUN_0c07e5c8(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((0x3A4 + a4)); }
    if ((*(int *)0xC23ED50) == 8) {
        u0 = *(float *)(((*(int *)0xC247CA4) + 0x24));
        *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFEAAB;
        *(unsigned int *)(((0x3E0 + a4) + 0x0)) = (*(short *)(((*(int *)0xC247CA4) + 0x10)));
        u1 = u0;
    } else {
        u0 = *(float *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFFC72;
        *(unsigned int *)(((0x3E0 + a4) + 0x0)) = (*(short *)(((*(int *)0xC247CA4) + 0x10)));
        t0 = *(int *)0xC247CA4;
        if ((*(float *)((t0 + 0x20))) > u0) {
            u2 = (*(float *)((t0 + 0x20)));
        } else {
            u3 = u0;
            if (u0 > (*(float *)((t0 + 0x24)))) {
                u3 = (*(float *)((t0 + 0x24)));
            }
            u2 = u3;
        }
        u1 = u2;
    }
    *(unsigned int *)(((0x3D4 + a4) + 0x0)) = (int)((float)(*(int *)(((0x3D4 + a4) + 0x0))) + ((float)(FUN_0c07e636((*(int *)((a4 + 0x3D4))), (*(int *)((a4 + 0x3DC))))) * 0.0199999996f));
    *(unsigned int *)(((0x3D8 + a4) + 0x0)) = (int)((float)(*(int *)(((0x3D8 + a4) + 0x0))) + ((float)(FUN_0c07e636((*(int *)((a4 + 0x3D8))), (*(int *)((a4 + 0x3E0))))) * 0.0199999996f));
    u0 = *(float *)((a4 + 0x29C));
    u2 = _builtin_fabsf((u0 - u1));
    if (_builtin_fabsf((u0 - u1)) > 0.299999982f) {
        if ((*(float *)((a4 + 0x29C))) > u1) {
            u0 = *(float *)((a4 + 0x29C));
            *(float *)((a4 + 0x29C)) = (u0 - 0.299999982f);
            u1 = (u0 - 0.299999982f);
        } else {
            *(float *)((a4 + 0x29C)) = ((*(float *)((a4 + 0x29C))) + 0.799999952f);
            u1 = 0.799999952f;
        }
        u2 = u1;
    }
    return FUN_0c07e2b0(a4);
}

int FUN_0c08238c(int a4, int a5)
{
    int stk[11];
    register int t1;
    register float t22;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((*(int *)((t1 + 0x3F4))) == 1) {
        *(unsigned int *)((t1 + 0x3F4)) = 0x0;
        *(unsigned int *)((t1 + 0x430)) = 0x4000;
        *(volatile int *)((t1 + 0x3FC));
        *(unsigned int *)(((0x434 + t1) + 0x0)) = (FUN_0c0e5dc0());
        nlSubVector3op((0x338 + t1), (*(int *)(((int)stk + 4))), (0x254 + t1));
        FUN_0c0dce80((0x338 + t1), (0x338 + t1), 0.5f);
        nlSubVector3op((0x344 + t1), (*(int *)(((int)stk + 8))), (0x278 + t1));
        FUN_0c0dce80((0x344 + t1), (0x344 + t1), 0.5f);
        nlAddVector3op((0x350 + t1), (0x254 + t1), (0x338 + t1));
        nlAddVector3op((0x35C + t1), (0x278 + t1), (0x344 + t1));
    }
    *(unsigned int *)((t1 + 0x430)) = ((*(int *)((t1 + 0x430))) + (*(int *)(((0x434 + t1) + 0x0))));
    t22 = FUN_0c0da410((*(int *)((t1 + 0x430))));
    FUN_0c0dce80((((int)stk + 4) + 0x8), (0x338 + t1), t22);
    nlSubVector3op((0x254 + t1), (0x350 + t1), (((int)stk + 4) + 0x8));
    FUN_0c0dce80((((int)stk + 4) + 0x8), (0x344 + t1), t22);
    nlSubVector3op((0x278 + t1), (0x35C + t1), (((int)stk + 4) + 0x8));
    return (FUN_0c081e0c(t1));
}

int FUN_0c0b9f10(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x40));
    if (t0 != 0) {
        if (t0 != 1) {
            nlUnitMatrix();
            FUN_0c0dcca0(0xC11270C);
            FUN_0c0dcbb0(0xC112718);
            FUN_0c0de000((1.0f + 1.0f));
            return FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
        }
        t0 = *(int *)((a4 + 0x50));
        *(unsigned int *)((a4 + 0x50)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) <= (int)0x1A4) {
            t0 = FUN_0c016a86();
            if (t0 != 0) {
                *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
                return t0;
            }
            nlUnitMatrix();
            FUN_0c0dcca0(0xC11270C);
            FUN_0c0dcbb0(0xC112718);
            FUN_0c0de000((1.0f + 1.0f));
            return FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
        }
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
        return 0x50;
    }
    t0 = *(int *)((a4 + 0x50));
    *(unsigned int *)((a4 + 0x50)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)0x28) {
        if ((int)(*(int *)0xC23EDE0) >= (int)0x5) {
            FUN_0c0ba00c(0x0);
        }
        if ((int)(*(int *)0xC23EDE4) >= (int)0x5) {
            FUN_0c0ba00c(0x1);
        }
        *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
    }
    nlUnitMatrix();
    FUN_0c0dcca0(0xC11270C);
    FUN_0c0dcbb0(0xC112718);
    FUN_0c0de000((1.0f + 1.0f));
    return FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
}

void FUN_0c02a548(int a4)
{
    register int t0;

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t0 = *(int *)((a4 + 0x4F8));
        if ((t0 != 6) && (t0 != 7)) {
            t0 = *(int *)((a4 + 0x4F8));
            if ((t0 != 8) && (t0 != 9)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            }
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        }
        return;
    }
    t0 = *(int *)((a4 + 0x4F8));
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02a432(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                if ((*(int *)((a4 + 0x4C8))) == 2) {
                    FUN_0c02a220(a4);
    return;
                }
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
        }
    }
}

int FUN_0c02ce56(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC02CDB8;
        t3 = 0x4;
        for (;;) {
            if ((t3 != (*(int *)((a4 + 0xBC)))) && ((t0 = *(int *)(((0xC247030 + (t3 << 2)) + 0x0)), t0 != 0) && (t2 = *(int *)((((t3 << 2) + 0xC246FF0) + 0x0)), t1 = *(int *)((t2 + 0x48C)), t1 == 49))) {
                break;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0xC) {
                if ((int)t3 >= (int)0xC) {
                    *(unsigned int *)((a4 + 0x490)) = 0x0;
                    if ((*(int *)((a4 + 0x478))) == 0) {
                        t3 = 0x2BC;
                        *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(t3));
                        *(unsigned int *)((a4 + 0x478)) = 0xC02CE36;
                        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
                        *(unsigned int *)((a4 + 0x44C)) = 0x0;
                        *(unsigned int *)((a4 + 0x4F0)) = 0x2B;
                        t4 = *(int *)((a4 + 0x4D4));
                        *(unsigned int *)((a4 + 0x4D4)) = (t4 - 1);
                        if ((int)(t4 - 1) <= 0) {
                            t3 = 0x1;
                            if ((int)(*(int *)((a4 + 0x54C))) < (int)(*(int *)((a4 + 0x528)))) {
                                if ((*(int *)((a4 + 0x4F4))) != 44) {
                                    *(unsigned int *)((a4 + 0x4FC)) = t3;
                                    *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                                    *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                                    return 0x4D4;
                                }
                                *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                                *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                                return 0x4D4;
                            }
                            if ((*(int *)((a4 + 0x4F4))) != 45) {
                                *(unsigned int *)((a4 + 0x4FC)) = t3;
                                *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                                *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                                return 0x4D4;
                            }
                            *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                            *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                            return 0x4D4;
                        }
                        return 0x4D4;
                    }
                    *(unsigned int *)((a4 + 0x5CC)) = 0x0;
                    *(unsigned int *)((a4 + 0x44C)) = 0x0;
                    *(unsigned int *)((a4 + 0x4F0)) = 0x2B;
                    t4 = *(int *)((a4 + 0x4D4));
                    *(unsigned int *)((a4 + 0x4D4)) = (t4 - 1);
                    if ((int)(t4 - 1) <= 0) {
                        t3 = 0x1;
                        if ((int)(*(int *)((a4 + 0x54C))) < (int)(*(int *)((a4 + 0x528)))) {
                            if ((*(int *)((a4 + 0x4F4))) != 44) {
                                *(unsigned int *)((a4 + 0x4FC)) = t3;
                                *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                                *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                                return 0x4D4;
                            }
                            *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                            *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                            return 0x4D4;
                        }
                        if ((*(int *)((a4 + 0x4F4))) != 45) {
                            *(unsigned int *)((a4 + 0x4FC)) = t3;
                            *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                            *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                            return 0x4D4;
                        }
                        *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                        *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                        return 0x4D4;
                    }
                    return 0x4D4;
                }
                if ((*(int *)((a4 + 0x478))) == 0) {
                    t3 = 0x2BC;
                    *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(t3));
                    *(unsigned int *)((a4 + 0x478)) = 0xC02CE36;
                    *(unsigned int *)((a4 + 0x5CC)) = 0x0;
                    *(unsigned int *)((a4 + 0x44C)) = 0x0;
                    *(unsigned int *)((a4 + 0x4F0)) = 0x2B;
                    t4 = *(int *)((a4 + 0x4D4));
                    *(unsigned int *)((a4 + 0x4D4)) = (t4 - 1);
                    if ((int)(t4 - 1) <= 0) {
                        t3 = 0x1;
                        if ((int)(*(int *)((a4 + 0x54C))) < (int)(*(int *)((a4 + 0x528)))) {
                            if ((*(int *)((a4 + 0x4F4))) != 44) {
                                *(unsigned int *)((a4 + 0x4FC)) = t3;
                                *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                                *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                                return 0x4D4;
                            }
                            *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                            *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                            return 0x4D4;
                        }
                        if ((*(int *)((a4 + 0x4F4))) != 45) {
                            *(unsigned int *)((a4 + 0x4FC)) = t3;
                            *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                            *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                            return 0x4D4;
                        }
                        *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                        *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                        return 0x4D4;
                    }
                    return 0x4D4;
                }
                *(unsigned int *)((a4 + 0x5CC)) = 0x0;
                *(unsigned int *)((a4 + 0x44C)) = 0x0;
                *(unsigned int *)((a4 + 0x4F0)) = 0x2B;
                t4 = *(int *)((a4 + 0x4D4));
                *(unsigned int *)((a4 + 0x4D4)) = (t4 - 1);
                if ((int)(t4 - 1) <= 0) {
                    t3 = 0x1;
                    if ((int)(*(int *)((a4 + 0x54C))) < (int)(*(int *)((a4 + 0x528)))) {
                        if ((*(int *)((a4 + 0x4F4))) != 44) {
                            *(unsigned int *)((a4 + 0x4FC)) = t3;
                            *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                            *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                            return 0x4D4;
                        }
                        *(unsigned int *)((a4 + 0x4F4)) = 0x2C;
                        *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                        return 0x4D4;
                    }
                    if ((*(int *)((a4 + 0x4F4))) != 45) {
                        *(unsigned int *)((a4 + 0x4FC)) = t3;
                        *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                        *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                        return 0x4D4;
                    }
                    *(unsigned int *)((a4 + 0x4F4)) = 0x2D;
                    *(unsigned int *)((a4 + 0x4D4)) = 0x14;
                    return 0x4D4;
                }
                return 0x4D4;
            }
        }
        *(unsigned int *)((a4 + 0x490)) = (*(int *)((t2 + 0xBC)));
        *(unsigned int *)((t2 + 0x490)) = (*(int *)((a4 + 0xBC)));
        if ((int)t3 >= (int)0xC) {
            *(unsigned int *)((a4 + 0x490)) = 0x0;
        }
    }
    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(0x2BC));
        *(unsigned int *)((a4 + 0x478)) = 0xC02CE36;
    }
    *(unsigned int *)((a4 + 0x5CC)) = 0x0;
    *(unsigned int *)((a4 + 0x44C)) = 0x0;
    *(unsigned int *)((a4 + 0x4F0)) = 0x2B;
    t0 = *(int *)((a4 + 0x4D4));
    *(unsigned int *)((a4 + 0x4D4)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        if ((int)(*(int *)((a4 + 0x54C))) < (int)(*(int *)((a4 + 0x528)))) {
            if ((*(int *)((a4 + 0x4F4))) != 44) {
                *(unsigned int *)((a4 + 0x4FC)) = 0x1;
            }
            t0 = 0x2C;
        } else {
            if ((*(int *)((a4 + 0x4F4))) != 45) {
                *(unsigned int *)((a4 + 0x4FC)) = 0x1;
            }
            t0 = 0x2D;
        }
        *(unsigned int *)((a4 + 0x4F4)) = t0;
        *(unsigned int *)((a4 + 0x4D4)) = 0x14;
    }
    return 0x4D4;
}

int FUN_0c0116d4(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(int *)0xC23A1A8) == 0x100) {
        *(unsigned int *)0xC23ED50 = 0x3;
        if (((unsigned short)(*(short *)0xC2497C6) & 0xC) != 0) {
            *(unsigned int *)0xC23EDE0 = 0x4;
        } else {
            if (((unsigned short)(*(short *)0xC2497D6) & 0xC) != 0) {
                *(unsigned int *)0xC23EDE4 = 0x4;
            }
        }
        *(unsigned int *)0xC23A184 = 0x0;
        t1 = 0x4;
        t2 = 0xC;
    } else {
        if (((unsigned short)(*(short *)0xC2497C6) & 8) != 0) {
            FUN_0c0cdf02();
            FUN_0c0ce770(0x0);
            *(unsigned int *)0xC23EDE0 = 0x1;
        }
        if (((*(int *)0xC204994) == 0) && (t0 = *(short *)0xC2497D6, ((unsigned short)t0 & 8) != 0)) {
            FUN_0c0cdf02();
            FUN_0c0ce770(0x1);
            *(unsigned int *)0xC23EDE4 = 0x1;
        }
    }
    *(unsigned int *)0xC23ED44 = 0x1;
    *(unsigned int *)0xC23A190 = 0x0;
    *(unsigned int *)0xC23ED48 = 0x0;
    t0 = ((int (*)(int, int, int))(FUN_0c0169da))(0x0, t1, t2);
    return ((int (*)(int))(FUN_0c0169da))(0x1);
}

int FUN_0c0c17e0(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x38));
    FUN_0c0db0a0(0x32, 0x32);
    nlPrintf(0xC1E3BA8, ((*(int *)((t0 + 0x2AC)))), ((*(int *)((t0 + 0x2E8)))));
    FUN_0c0db0a0(0x32, 0x33);
    nlPrintf(0xC1E3BC4, ((*(int *)((t0 + 0x2B4)))), ((*(int *)((t0 + 0x2EC)))));
    FUN_0c0db0a0(0x32, 0x34);
    nlPrintf(0xC1E3BE4, ((*(int *)((t0 + 0x2D4)))), ((*(int *)((t0 + 0x2DC)))), ((*(int *)((t0 + 0x2E4)))));
    FUN_0c0db0a0(0x32, 0x35);
    nlPrintf(0xC1E3C00, ((*(int *)((t0 + 0x2C8)))), ((*(int *)(((0x2A4 + t0) + 0x0)))), ((*(int *)(((0x2A4 + t0) + 0x4)))));
    FUN_0c0db0a0(0x32, 0x36);
    nlPrintf(0xC1E3C24, ((*(int *)((t0 + 0x2B0)))), ((*(int *)((t0 + 0x2F0)))));
    FUN_0c0db0a0(0x32, 0x37);
    nlPrintf(0xC1E3C40, ((*(int *)((t0 + 0x2B8)))));
    FUN_0c0db0a0(0x32, 0x38);
    nlPrintf(0xC1E3C54, ((*(int *)((t0 + 0x2D8)))), ((*(int *)((t0 + 0x2E0)))));
    FUN_0c0db0a0(0x32, 0x39);
    nlPrintf(0xC1E3C68, ((*(int *)((t0 + 0x2F4)))));
    FUN_0c0db0a0(0x32, 0x3A);
    return (nlPrintf(0xC1E3C78, ((*(int *)((t0 + 0x2EC))))));
}

int FUN_0c05c5d8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((0xC247604 + ((*(int *)((a4 + 0x350))) << 2)));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(int *)(((((*(int *)((a4 + 0x350))) << 2) + 0xC2475D4) + 0x0));
        t2 = 0x348;
        if ((*(int *)((a4 + 0x348))) != 0) {
            t3 = 0x21C;
            if ((int)(*(int *)((t0 + 0x21C))) > 0) {
                t0 = FUN_0c0e19aa(0xC05C700, 0x2BC, (*(int *)0xC23ECE4));
                FUN_0c0e19d0(t0);
                *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
                *(unsigned int *)(((0x200 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
                t4 = 0x0;
                if ((*(signed char *)((a5 + 0x4))) != 0) {
                    t4 = (*(int *)((a4 + 0x1EC)));
                }
                *(unsigned int *)((t0 + 0x1EC)) = t4;
                *(unsigned int *)(((0x1E8 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
                *(unsigned int *)(((0x1F4 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
                *(unsigned int *)(((0x204 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
                *(float *)((t0 + 0x1E4)) = (*(float *)((a5 + 0xC)));
                *(unsigned int *)(((0x1FC + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
                *(unsigned int *)((t0 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
                *(unsigned int *)(((0x22C + t0) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
                t4 = *(int *)((a4 + 0xBC));
                t5 = *(int *)((a4 + 0x1E8));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + (((t5 << 1) + t5) << 2))); }
                *(unsigned int *)((t0 + 0xD0)) = (*(int *)((a4 + 0x350)));
                t3 = 0xD0;
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c088274(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c0e1830(0xC0889F4, 0x64);
    FUN_0c0e19d0(t0);
    u0 = (*(float *)0xC088384);
    u0 = u0 + (*(float *)0xC088388) * (float)(FUN_0c0da2e0());
    *(float *)((t0 + 0x50)) = u0;
    u0 = (*(float *)0xC08838C);
    u0 = u0 + (*(float *)0xC088390) * (float)(FUN_0c0da2e0());
    *(float *)((t0 + 0x58)) = u0;
    *(unsigned short *)((t0 + 0x5E)) = 0x16C;
    *(unsigned int *)(((0x48 + t0) + 0x0)) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
    *(float *)((t0 + 0x4C)) = 1.0f;
    *(float *)((t0 + 0x44)) = (*(float *)((a4 + 0x34)));
    *(unsigned int *)((t0 + 0x60)) = 0x1F;
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.00999999978f);
    FUN_0c0dc5a0();
    t1 = *(int *)((a4 + 0x30));
    nlRotateAY(((*(short *)((t1 + 0x6E))) + 0x7FFF));
    t2 = *(short *)((t1 + 0x6C));
    t3 = FUN_0c0da2e0();
    nlRotateAX((t2 - (t3 & 0xFFF)));
    FUN_0c0db470((t0 + 0x3C), (t0 + 0x3C));
    FUN_0c0dbda0((*(int *)((t1 + 0x3E4))));
    FUN_0c0db470(0xC10AA7C, (t0 + 0x30));
    t0 = nlPopMatrix(0x1);
    t1 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t0;
}

int FUN_0c0899d0(int a4)
{
    register int t1;
    int t10;
    register float u12;
    register int t22;
    register float u23;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((int)(*(int *)((a4 + 0x60))) < 0) {
        *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) - 1);
        return 0x60;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    t10 = FUN_0c0da2e0();
    nlRotateAZ((0x7FFF & t10));
    u12 = *(float *)((a4 + 0x58));
    nlScale(u12, u12, u12);
    FUN_0c0de000((*(float *)((a4 + 0x58))));
    FUN_0c0c465c(0x109);
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC089B2C));
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t22 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t22 + 0x1);
    if (((int)(t22 + 0x1) <= (int)0x78) && (u23 = *(float *)((a4 + 0x34)), !(0.0f > u23))) {
        return 0x34;
    }
    return FUN_0c0e19f2();
}

int FUN_0c04a118(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)0xC23A258;
    if ((*(int *)((a4 + 0x21C))) != t1) {
        *(unsigned int *)((a4 + 0x21C)) = t1;
        FUN_0c0497a0(a4);
        FUN_0c049804(a4);
        FUN_0c04a26c(a4);
        FUN_0c04982e(a4);
        FUN_0c053aa4(a4);
        FUN_0c092884(a4, (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0));
        *(unsigned int *)((a4 + 0x360)) = 0x0;
        *(float *)((a4 + 0x390)) = (*(float *)((a4 + 0xB4)));
        if ((*(int *)0xC23EDB4) == 0) {
            t1 = *(int *)0xC23ED9C;
            if ((t1 != 4) && (t1 != 7)) {
                if (((*(int *)((a4 + 0x20C))) & 13) == 0) {
                    t1 = FUN_0c0503bc(a4);
                    if (t1 == 0) {
                        FUN_0c04a318(a4, (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0));
                    }
                }
            } else {
                t1 = FUN_0c0503bc(a4);
                if (t1 != 0) {
                } else {
                    FUN_0c04a318(a4, (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0));
                }
            }
            t0 = *(int *)((a4 + 0xBC));
            *(float *)(((t0 << 2) + 0xC24758C)) = ((*(float *)(((t0 << 2) + 0xC24758C))) * 0.998999953f);
            FUN_0c054d66(a4);
            FUN_0c085704(a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
            FUN_0c051e92(a4);
            FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))));
            FUN_0c086920(a4);
            FUN_0c0bbbf4(a4);
            return FUN_0c01cdf2(a4);
        }
        return 0x390;
    }
    return 0x21C;
}

int FUN_0c060e88(int a4, int a5)
{
    int stk[22];
    register int t20;
    register int t21;

    *(unsigned int *)(((int)stk + 16)) = a5;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((a4 + 0x3E4))) + 0x100));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    *(float *)(((((int)stk + 8) + 0x30) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 8) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)((((((int)stk + 8) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (*(float *)0xC061008);
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    *(float *)(((((int)stk + 8) + 0x24) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 8) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)((((((int)stk + 8) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    FUN_0c0a7714((((int)stk + 8) + 0x4), ((int)stk + 8), ((*(float *)(((((int)stk + 8) + 0x24) + 0x0))) - (*(float *)(((((int)stk + 8) + 0x30) + 0x0)))), ((*(float *)(((((int)stk + 8) + 0x24) + 0x4))) - (*(float *)(((((int)stk + 8) + 0x30) + 0x4)))), ((*(float *)(((((int)stk + 8) + 0x24) + 0x8))) - (*(float *)(((((int)stk + 8) + 0x30) + 0x8)))));
    t20 = *(int *)(((int)stk + 8));
    t21 = *(short *)((a4 + 0x6E));
    *(unsigned int *)(((int)stk + 8)) = (t20 - t21);
    *(int *)((int)stk + 4) = 0x8;
    return (FUN_0c05fd8c(a4, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (t20 - t21), 0x8, (1.0f + 1.0f), 1.0f, 1.0f, 1.0f));
}

int FUN_0c0a3e1c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = 0xC10D084;
    t1 = 0x3;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC0A3F40, 0x5C, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0x30)) = a4;
        u0 = *(float *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        u1 = 0.799999952f;
        u1 = u1 + u0 * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x54)) = u1;
        *(float *)((t2 + 0x50)) = ((*(float *)((t2 + 0x54))) * 3.0f);
        *(float *)((t2 + 0x4C)) = ((*(float *)((t2 + 0x50))) * 0.0124999993f);
        u0 = -0.5f;
        u0 = u0 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x34)) = u0;
        u0 = -0.5f;
        u0 = u0 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x3C)) = u0;
        u0 = 0.099999994f;
        u0 = u0 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x40)) = u0;
        u0 = 0.099999994f;
        u0 = u0 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x44)) = u0;
        t1 = (t1 - 0x1);
        u0 = 0.099999994f;
        u0 = u0 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x48)) = u0;
        *(unsigned int *)((t2 + 0x58)) = 0x5A;
        if (t1 == 0) {
            break;
        }
    }
    return 0x58;
}

void FUN_0c02b1ac(int a4)
{
    register int t0;

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t0 = *(int *)((a4 + 0x4F8));
        if ((t0 != 6) && (t0 != 7)) {
            t0 = *(int *)((a4 + 0x4F8));
            if ((t0 != 8) && (t0 != 9)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            }
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        }
        return;
    }
    t0 = *(int *)((a4 + 0x4F8));
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02b0c2(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02b0c2(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                FUN_0c02b0c2(a4);
    return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                FUN_0c02b0c2(a4);
    return;
            }
        }
    }
}

int FUN_0c0609f4(int a4, int a5)
{
    int stk[22];
    register int t20;
    register int t21;
    register float u22;

    *(unsigned int *)(((int)stk + 16)) = a5;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((a4 + 0x3E4))) + 0x100));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    *(float *)(((((int)stk + 8) + 0x30) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 8) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)((((((int)stk + 8) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (*(float *)0xC060B58);
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    *(float *)(((((int)stk + 8) + 0x24) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 8) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)((((((int)stk + 8) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    FUN_0c0a7714((((int)stk + 8) + 0x4), ((int)stk + 8), ((*(float *)(((((int)stk + 8) + 0x24) + 0x0))) - (*(float *)(((((int)stk + 8) + 0x30) + 0x0)))), ((*(float *)(((((int)stk + 8) + 0x24) + 0x4))) - (*(float *)(((((int)stk + 8) + 0x30) + 0x4)))), ((*(float *)(((((int)stk + 8) + 0x24) + 0x8))) - (*(float *)(((((int)stk + 8) + 0x30) + 0x8)))));
    t20 = *(int *)(((int)stk + 8));
    t21 = *(short *)((a4 + 0x6E));
    *(unsigned int *)(((int)stk + 8)) = (t20 - t21);
    u22 = *(float *)0xC060B64;
    *(int *)((int)stk + 4) = 0x8;
    return (FUN_0c0603d0(a4, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (t20 - t21), 0x8, u22, 1.0f, 1.0f, 1.0f));
}

int FUN_0c067de4(int a4)
{
    register int t0;
    register float u0;

    if (((*(int *)0xC23ED5C) & 32) != 0) {
        FUN_0c0845f8(0x1, 0x0);
        FUN_0c0845e8(0x0);
        FUN_0c0e19f2();
    }
    u0 = 0.669999957f;
    u0 = u0 + 0.00999999978f * (float)((FUN_0c0da2e0()) & 0x1F);
    *(float *)((a4 + 0x90)) = u0;
    FUN_0c0846de(0x1, 0.0f, (*(float *)((a4 + 0x90))), 0.299999982f, 0.0f);
    *(float *)((a4 + 0x94)) = ((float)((FUN_0c0da2e0()) & 0x7) + 15.0f);
    FUN_0c0846be(0x1, (*(float *)((a4 + 0x94))));
    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    t0 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t0 + 0x800);
    u0 = 1.0f;
    u0 = u0 + 0.199999988f * (FUN_0c0da410((t0 + 0x800)));
    nlScale(u0, u0, u0);
    FUN_0c0de000(u0);
    FUN_0c0c465c(((*(int *)(((0x78 + a4) + 0x0))) + ((unsigned int)((*(int *)0xC23A258) & 0x3F) >> 1)));
    return nlPopMatrix(0x1);
}

int FUN_0c0a975a(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (((*(int *)0xC23A258) & 1) != 0) {
        *(unsigned int *)((a4 + 0x30)) = (*(int *)((a4 + 0x68)));
        *(float *)((a4 + 0x38)) = 240.0f;
        *(unsigned int *)((a4 + 0x58)) = 0x0;
        t0 = FUN_0c0da2e0();
        if ((t0 & 3) != 0) {
            t0 = FUN_0c0da2e0();
            if ((t0 & 7) == 0) {
                t0 = FUN_0c0da2e0();
                t1 = FUN_0c0da2e0();
                u0 = 0.00305185094f;
                u1 = ((float)t0 * (FUN_0c0da410((t1 << 1))));
            } else {
                t0 = FUN_0c0da2e0();
                t1 = FUN_0c0da2e0();
                u0 = 0.000305185094f;
                u1 = ((float)t0 * (FUN_0c0da410((t1 << 1))));
            }
            u2 = (*(float *)(((a4 + 0x38) + 0x0)));
            u2 = u2 + u0 * u1;
            *(float *)(((a4 + 0x38) + 0x0)) = u2;
        }
        t0 = FUN_0c0da2e0();
        if ((t0 & 31) == 0) {
            *(unsigned int *)(((0x58 + a4) + 0x0)) = (unsigned char)(FUN_0c0da2e0());
        }
        FUN_0c0c0340((a4 + 0x30));
    }
    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC10D264);
    FUN_0c0dcbb0(0xC10D270);
    FUN_0c0de000((1.0f + 1.0f));
    FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
    t0 = nlPopMatrix(0x1);
    t1 = *(int *)0xC24FA38;
    *(unsigned int *)0xC24FA38 = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    }
    return t0;
}
