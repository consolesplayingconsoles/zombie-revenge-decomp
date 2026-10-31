/* Straight-line functions with calls and guards (batch gen_ib): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016a86(void);
int FUN_0c016d2c(void);
int FUN_0c016d40(void);
int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01937a(void);
int FUN_0c019980(void);
int FUN_0c019a36(void);
int FUN_0c019a5c(int, int, int, int);
int FUN_0c01a874(void);
int FUN_0c01d562(int, int, int, int, int, int, int, int, int);
int FUN_0c0209ba(int);
int FUN_0c02a288(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c02f4b8(int, int);
extern int FUN_0c035b26();
int FUN_0c036b64(int);
int FUN_0c04996a(void);
int FUN_0c04f352(int);
int FUN_0c0534a4(void);
int FUN_0c055936(int);
int FUN_0c056098(int, int, int);
int FUN_0c058fa0(int);
int FUN_0c0651ac(int, int, int, int, float);
int FUN_0c065398(int, int, int, int, float);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c07e636(int, int);
int FUN_0c07fc50(int);
int FUN_0c0848d6(int, int, int, int, float, float, float);
int FUN_0c0849da(int, int, int, int, float);
int FUN_0c0852bc(int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a9f70(int);
int FUN_0c0b264e(void);
int FUN_0c0b2e48(void);
int FUN_0c0b33a8(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0bbbf4(int);
int FUN_0c0bfabc(void);
int FUN_0c0c4290(int);
int FUN_0c0c4364(int, int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c452c(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c8d06(int);
int FUN_0c0cc752(int);
int FUN_0c0cc88c(int);
int FUN_0c0d9ca0(float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float FUN_0c0dcea0(int);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0de310(float, float, float);
int FUN_0c0e16c0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e27be(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int mwPlyPreInitSofdec(void);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c06e384(int a4, int a5, int a6, int a7);
int FUN_0c0a269a(int a4, int a5, int a6, int a7);
int FUN_0c0173a0(int a4, int a5, int a6, int a7);
int FUN_0c075d20(int a4, int a5, int a6, int a7);
int FUN_0c017038(int a4, int a5, int a6, int a7);
int FUN_0c020aa4(int a4);
int FUN_0c0a9988(int a4, int a5, int a6, int a7);
int FUN_0c01ad40(int a4);
int FUN_0c0923c4(int a4, int a5, int a6, int a7);
int FUN_0c04f188(int a4, int a5, int a6);
void FUN_0c030c18(int a4, int a5, int a6);
int FUN_0c0800c6(int a4, int a5, int a6, int a7);

int FUN_0c06e384(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t0;
    register int t2;
    register int t9;
    register int t18;
    register int t24;
    register int t36;
    register int t41;
    register int t49;
    register int t68;
    register int t29;
    register int t7;
    register int t8;
    register int t10;
    register float u11;
    register int t40;

    t0 = *(short *)((a4 + 0x44));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 == 2) {
                t2 = (FUN_0c0e19f2(a4, a5, a6, a7));
            }
            t29 = t2;
        } else {
            nlPushMatrix(0x0);
            FUN_0c0dbda0((a4 + 0x50));
            t9 = 0x0;
            for (;;) {
                if ((int)t9 >= (int)(*(short *)((a4 + 0x46)))) {
                    break;
                }
                t10 = t9;
                t10 = (t10 << 1);
                t8 = (*(int *)((a4 + 0x4C)));
                t10 = (t10 + t9);
                t10 = (t10 << 2);
                t8 = (t8 + t10);
                u11 = (*(float *)((t8 + 0x4)));
                FUN_0c0db470(((*(int *)((a4 + 0x48))) + t10), t8);
                t18 = FUN_0c0c8d06(((*(int *)((a4 + 0x4C))) + t10));
                t9 = (t9 + 0x1);
                if ((int)t18 < 0) {
                    t7 = (*(int *)((a4 + 0x4C)));
                    t7 = (t7 + t10);
                    *(float *)((t7 + 0x4)) = u11;
                }
            }
            t24 = ((int (*)(int))((*(int *)((a4 + 0xA4)))))(a4);
            nlGetMatrix((a4 + 0x50));
            FUN_0c0c47ae((*(short *)((a4 + 0x42))));
            t29 = (nlPopMatrix(0x1));
        }
        t68 = t29;
    } else {
        t36 = *(short *)((a4 + 0x46));
        *(unsigned int *)(((0x4C + a4) + 0x0)) = (FUN_0c0e27be((((t36 << 1) + t36) << 2)));
        nlPushMatrix(0x0);
        FUN_0c0dbda0((a4 + 0x50));
        t41 = 0x0;
        for (;;) {
            if ((int)t41 >= (int)(*(short *)((a4 + 0x46)))) {
                break;
            }
            t40 = t41;
            t40 = (t40 << 1);
            t40 = (t40 + t41);
            t40 = (t40 << 2);
            FUN_0c0db470(((*(int *)((a4 + 0x48))) + t40), ((*(int *)((a4 + 0x4C))) + t40));
            t41 = (t41 + 0x1);
        }
        nlPopMatrix(0x1);
        FUN_0c0e6248();
        if ((*(short *)((a4 + 0x46))) == 2) {
            t49 = *(int *)((a4 + 0x48));
            *(unsigned int *)(((int)stk + 4)) = t49;
            nlSubVector3op((((int)stk + 4) + 0x4), (t49 + 0xC), t49);
            *(float *)((a4 + 0xA8)) = (FUN_0c0dcea0((((int)stk + 4) + 0x4)));
            *(unsigned int *)(((0xAC + a4) + 0x0)) = (-(FUN_0c0d9ca0(((*(float *)(((int)stk + 12))) / (*(float *)((a4 + 0xA8)))))));
            *(unsigned int *)(((0xB0 + a4) + 0x0)) = (FUN_0c0d9dc0((*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 16)))));
        }
        FUN_0c0da2e0();
        *(unsigned short *)(((0x9C + a4) + 0x0)) = (FUN_0c0e5f1c());
        FUN_0c0da2e0();
        *(unsigned short *)(((0x9E + a4) + 0x0)) = (FUN_0c0e5f1c());
        FUN_0c0da2e0();
        *(unsigned short *)(((0xA0 + a4) + 0x0)) = (FUN_0c0e5f1c());
        *(unsigned short *)((a4 + 0x44)) = ((*(short *)((a4 + 0x44))) + 0x1);
        t68 = 0x44;
    }
    return t68;
}

int FUN_0c0a269a(int a4, int a5, int a6, int a7)
{
    int stk[24];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    v0_6 = *(int *)((v0_0 + 0x30));
    v0_4 = (v0_0);
    v0_5 = (v0_6);
    if (((*(int *)((((*(int *)((v0_6 + 0xBC))) << 2) + 0xC247030))) != 0)) goto L_C0A26D6;
    FUN_0c0e19f2(v0_0, v0_1, v0_2, v0_3);
    L_C0A26D6:;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)((v0_5 + 0x3E4))));
    FUN_0c0db470(0xC10CEDC, (v0_4 + 0x54));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x18);
    FUN_0c0db470((v0_4 + 0x34), (((int)stk + 4) + 0x18));
    FUN_0c0dbda0(((*(int *)((v0_5 + 0x3E4))) + 0x240));
    FUN_0c0db470((v0_4 + 0x44), (((int)stk + 4) + 0x24));
    *(unsigned int *)(((int)stk + 8)) = 0xF;
    v0_6 = (((v0_4 + 0x54) + 0x24));
    v0_7 = ((v0_4 + 0x54));
    w0_0 = (0.799999952f);
    w0_1 = (0.0f);
    L_C0A2720:;
    FUN_0c0651ac(v0_7, v0_6, 0xC10CEE8, 0xC0F9FC4, w0_0);
    v0_8 = ((*(int *)(((int)stk + 4))));
    v0_9 = ((((int)stk + 4) + 0x18));
    v0_10 = ((v0_4 + 0x34));
    L_C0A27E4:;
    if (!(((unsigned int)v0_10 < (unsigned int)(v0_4 + 0x54)))) goto L_C0A27EC;
    w0_2 = *(float *)((v0_10 + 0xC));
    v0_11 = !(w0_2 > (nlLength(v0_8, v0_6)));
    w0_2 = (w0_2);
    if (v0_11) goto L_C0A27DE;
    nlSubVector3op((((int)stk + 4) + 0xC), v0_6, v0_9);
    nlScaleUnitVector((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC), w0_2);
    nlAddVector3op(v0_6, (((int)stk + 4) + 0xC), v0_9);
    goto L_C0A27EC;
    L_C0A27EC:;
    v0_8 = (0x4);
    v0_7 = ((v0_7 + 0x24));
    if ((!(0.0f > (*(float *)((v0_6 + 0x4)))))) goto L_C0A27FA;
    *(float *)((v0_6 + v0_8)) = w0_1;
    L_C0A27FA:;
    v0_8 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_8 - 1);
    v0_6 = ((v0_6 + 0x24));
    if (((v0_8 - 1) != 0)) goto L_C0A2720;
    v0_6 = *(int *)((((unsigned short)(*(short *)((v0_5 + 0x454))) << 2) + 0xC195F48));
    w0_0 = *(float *)((v0_5 + 0x458));
    FUN_0c0848d6(v0_0, v0_1, v0_2, v0_3, (*(float *)(((0x45C + v0_5) + 0x0))), (*(float *)(((0x45C + v0_5) + 0x4))), (*(float *)(((0x45C + v0_5) + 0x8))));
    v0_5 = (v0_4 + 0x54);
    v0_8 = (v0_6);
    v0_9 = (0xC0DC950);
    v0_4 = (0x703);
    v0_10 = (0xC0DCCA0);
    v0_6 = v0_5;
    v0_7 = (0xF);
    v0_5 = (0xC0DC6E0);
    w0_2 = (w0_0);
    L_C0A2836:;
    FUN_0c0dbda0(((*(int *)(((int)stk + 12))) + 0x2AC));
    FUN_0c0dcca0(v0_6);
    nlRotateAX((*(int *)((v0_6 + 0x18))));
    nlRotateAZ((*(int *)((v0_6 + 0x1C))));
    FUN_0c0dcca0(0xC10CEF4);
    v0_5 = ((int (*)(int, float))(v0_8))(v0_4, w0_2);
    v0_5 = (v0_7 - 0x1) != 0;
    v0_6 = ((v0_6 + 0x24));
    v0_7 = ((v0_7 - 0x1));
    if (v0_5) goto L_C0A2836;
    FUN_0c0849da(v0_0, v0_1, v0_2, v0_3, F4);
    return (nlPopMatrix(0x1));
    L_C0A27DE:;
    v0_8 = ((v0_8 + 0xC));
    v0_9 = ((v0_9 + 0xC));
    v0_10 = ((v0_10 + 0x10));
    goto L_C0A27E4;
}

int FUN_0c0173a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((*(int *)0xC23ED50) != (*(int *)((a4 + 0x80)))) {
        return 0x80;
    }
    t2 = *(int *)((a4 + 0x98));
    if (t2 != 0) {
        if (t2 != 1) {
            t3 = 0;
            if (t2 != 2) {
                t4 = 0;
                if (t2 == 3) {
                    *(unsigned int *)((a4 + 0x70)) = (int)((float)(*(int *)((a4 + 0x70))) * 0.099999994f);
                    *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + (*(int *)(((0x70 + a4) + 0x0))));
                    t5 = *(int *)(((a4 + 0x68) + 0x0));
                    t6 = *(short *)((a4 + 0x62));
                    if (_builtin_fabsf((float)(short)(t6 - t5)) > 14336.0f) {
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                    }
                    u0 = _builtin_fabsf((float)(short)(t6 - t5));
                    u1 = 0.099999994f;
                    t4 = ((_builtin_fabsf((float)(short)(t6 - t5)) > 14336.0f));
                } else {
                    t4 = ((t2 == 4));
                }
                u2 = u0;
                u0 = u1;
                t3 = (t4);
            } else {
                *(unsigned int *)((a4 + 0xA0)) = (*(short *)((a4 + 0x62)));
                t2 = *(int *)((a4 + 0x9C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x54)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F2D4)); }
                FUN_0c0a68ec((a4 + 0x6C), ((*(float *)((a4 + 0x30))) - (*(float *)((a4 + 0x54)))), ((*(float *)((a4 + 0x38))) - (*(float *)((a4 + 0x5C)))));
                *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x6C))) + 0x7800);
                *(unsigned int *)((a4 + 0xA0)) = ((*(short *)((a4 + 0x62))) - (*(short *)((a4 + 0xA0))));
                t2 = *(int *)((a4 + 0xA0));
                t4 = *(int *)((a4 + 0x70));
                if (!(_builtin_fabsf((float)t4) > _builtin_fabsf((float)t2))) {
                    *(unsigned int *)((a4 + 0x70)) = (*(int *)((a4 + 0xA0)));
                } else {
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                }
                u2 = _builtin_fabsf((float)t4);
                u0 = _builtin_fabsf((float)t2);
                t3 = ((_builtin_fabsf((float)t4) > _builtin_fabsf((float)t2)));
            }
        } else {
            if ((int)(*(int *)(((*(int *)(((((*(int *)((a4 + 0x9C))) << 2) + 0xC246FF0) + 0x0))) + 0x2B4))) >= (int)0x21) {
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
            }
        }
    } else {
        if (((*(int *)0xC23ED5C) & 80) != 0) {
            if ((*(int *)0xC23ED54) != (*(int *)((a4 + 0x84)))) {
            } else {
                t2 = 0x0;
                for (;;) {
                    if (((*(int *)((0xC247030 + (t2 << 2)))) == 4) && (t0 = *(int *)((((t2 << 2) + 0xC246FF0) + 0x0)), t1 = *(int *)((t0 + 0x20C)), (t1 & 0x100000) != 0)) {
                        break;
                    }
                    t2 = (t2 + 0x1);
                    if ((int)t2 >= (int)0x2) {
                        *(unsigned int *)(((a4 + 0x68) + 0x0)) = (*(short *)((a4 + 0x62)));
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                        t2 = 0x0;
                        nlPushMatrix(t2);
                        t2 = (*(int *)0xC247BF4);
                        nlMultiMatrix(t2);
                        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
                        t2 = (*(short *)((a4 + 0x62)));
                        nlRotateAY(t2);
                        t2 = (*(int *)((a4 + 0x78)));
                        FUN_0c0c465c(t2);
                        t2 = 0x1;
                        return nlPopMatrix(t2);
                    }
                }
                *(unsigned int *)((a4 + 0x9C)) = t2;
                *(unsigned int *)(((a4 + 0x68) + 0x0)) = (*(short *)((a4 + 0x62)));
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
            }
        }
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)0xC247BF4));
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

int FUN_0c075d20(int a4, int a5, int a6, int a7)
{
    int stk[16];
    register int t1;
    register int t8;
    register int t9;
    register int t10;
    register int t13;
    register int t11;
    register float u14;
    register int t17;
    register int t15;
    register int t18;
    register float u21;
    register int t23;
    register float u24;
    register int t27;
    register float u28;
    register float u30;
    register int t45;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0685a4(a4, a5, a6, a7);
    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - 6.0f);
    if (0.0f > (*(float *)((a4 + 0x90)))) {
        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 3200.0f);
    }
    t8 = 0xD;
    t9 = 0x0;
    t10 = 0x47AE927;
    for (;;) {
        t13 = (t10 & 0x1);
        t11 = (int)(((unsigned int)t13 >> 1) | ((unsigned int)t13 << 31));
        u14 = -100.0f;
        u14 = u14 + 0.0634920597f * (float)((((t10 >> 1) | t11) ^ t8) & 0xFFF);
        *(float *)(((int)stk + 4)) = u14;
        t17 = ((((t10 >> 1) | t11) ^ t8) & 0x1);
        t15 = (int)(((unsigned int)t17 >> 1) | ((unsigned int)t17 << 31));
        t18 = ((((((t10 >> 1) | t11) ^ t8) >> 1) | t15) ^ (((((t10 >> 1) | t11) ^ t8) | t8) * 0x22AC8EE1));
        u21 = (float)(((((((t10 >> 1) | t11) ^ t8) >> 1) | t15) ^ (((((t10 >> 1) | t11) ^ t8) | t8) * 0x22AC8EE1)) & 0xFFF);
        t23 = (((((((t10 >> 1) | t11) ^ t8) | t8) * 0x22AC8EE1) | ((((((t10 >> 1) | t11) ^ t8) >> 1) | t15) ^ (((((t10 >> 1) | t11) ^ t8) | t8) * 0x22AC8EE1))) * 0x22AC8EE1);
        t10 = ((((((t10 >> 1) | t11) ^ t8) >> 1) | t15) ^ (((((t10 >> 1) | t11) ^ t8) | t8) * 0x22AC8EE1));
        t10 = (t10 >> 1);
        u24 = 0.0f;
        u24 = u24 + 0.0170940161f * u21;
        *(float *)(((int)stk + 8)) = u24;
        t27 = (t18 & 0x1);
        t10 = (t10 | ((int)(((unsigned int)t27 >> 1) | ((unsigned int)t27 << 31))));
        t10 = (t10 ^ t23);
        t8 = t10;
        t8 = (t8 | t23);
        u28 = 0.0f;
        u28 = u28 + 0.781440735f * (float)(t10 & 0xFFF);
        t8 = (t8 * 0x22AC8EE1);
        *(float *)(((int)stk + 12)) = u28;
        u30 = *(float *)((a4 + 0x90));
        *(float *)(((int)stk + 12)) = (u28 + u30);
        if ((u28 + u30) > 3200.0f) {
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - 3200.0f);
        }
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + -1600.0f);
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((int)stk + 4));
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        nlRotateAZ(t9);
        nlScale(8.0f, 8.0f, 8.0f);
        FUN_0c0de000(8.0f);
        FUN_0c0c475c(0x2F1, 0.0799999982f);
        t45 = nlPopMatrix(0x1);
        t9 = (t9 + 0x3751);
        if ((int)t9 < (int)0x45254) continue;
        break;
    }
    return t45;
}

int FUN_0c017038(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((*(int *)0xC23ED50) != (*(int *)((a4 + 0x80)))) {
        return 0x80;
    }
    t2 = *(int *)((a4 + 0x98));
    if (t2 != 0) {
        if (t2 != 1) {
            t3 = 0;
            if (t2 != 2) {
                t4 = 0;
                if (t2 == 3) {
                    u0 = *(float *)0xC017274;
                    *(unsigned int *)((a4 + 0x70)) = (int)((float)(*(int *)((a4 + 0x70))) * u0);
                    *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + (*(int *)(((0x70 + a4) + 0x0))));
                    t5 = *(int *)(((a4 + 0x68) + 0x0));
                    t6 = *(short *)((a4 + 0x62));
                    u1 = *(float *)0xC017278;
                    if (_builtin_fabsf((float)(short)(t6 - t5)) > u1) {
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                    }
                    u2 = _builtin_fabsf((float)(short)(t6 - t5));
                    u3 = u0;
                    t4 = ((_builtin_fabsf((float)(short)(t6 - t5)) > u1));
                } else {
                    t4 = ((t2 == 4));
                }
                u0 = u2;
                u1 = u3;
                t3 = (t4);
            } else {
                *(unsigned int *)((a4 + 0xA0)) = (*(short *)((a4 + 0x62)));
                t2 = *(int *)((a4 + 0x9C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x54)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F2D4)); }
                FUN_0c0a68ec((a4 + 0x6C), ((*(float *)((a4 + 0x30))) - (*(float *)((a4 + 0x54)))), ((*(float *)((a4 + 0x38))) - (*(float *)((a4 + 0x5C)))));
                *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x6C))) + 0x800);
                *(unsigned int *)((a4 + 0xA0)) = ((*(short *)((a4 + 0x62))) - (*(short *)((a4 + 0xA0))));
                t2 = *(int *)((a4 + 0xA0));
                t4 = *(int *)((a4 + 0x70));
                if (!(_builtin_fabsf((float)t4) > _builtin_fabsf((float)t2))) {
                    *(unsigned int *)((a4 + 0x70)) = (*(int *)((a4 + 0xA0)));
                } else {
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                }
                u0 = _builtin_fabsf((float)t4);
                u1 = _builtin_fabsf((float)t2);
                t3 = ((_builtin_fabsf((float)t4) > _builtin_fabsf((float)t2)));
            }
        } else {
            if ((int)(*(int *)(((*(int *)(((((*(int *)((a4 + 0x9C))) << 2) + 0xC246FF0) + 0x0))) + 0x2B4))) >= (int)0x19) {
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
            }
        }
    } else {
        if (((*(int *)0xC23ED5C) & 80) != 0) {
            if ((*(int *)0xC23ED54) != (*(int *)((a4 + 0x84)))) {
            } else {
                t2 = 0x0;
                for (;;) {
                    if (((*(int *)((0xC247030 + (t2 << 2)))) == 4) && (t0 = *(int *)((((t2 << 2) + 0xC246FF0) + 0x0)), t1 = *(int *)((t0 + 0x20C)), (t1 & 0x100000) != 0)) {
                        break;
                    }
                    t2 = (t2 + 0x1);
                    if ((int)t2 >= (int)0x2) {
                        *(unsigned int *)(((a4 + 0x68) + 0x0)) = (*(short *)((a4 + 0x62)));
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                        t2 = 0x0;
                        nlPushMatrix(t2);
                        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
                        t2 = (*(short *)((a4 + 0x62)));
                        nlRotateAY(t2);
                        t2 = (*(int *)((a4 + 0x78)));
                        FUN_0c0c465c(t2);
                        t2 = 0x1;
                        return nlPopMatrix(t2);
                    }
                }
                *(unsigned int *)((a4 + 0x9C)) = t2;
                *(unsigned int *)(((a4 + 0x68) + 0x0)) = (*(short *)((a4 + 0x62)));
                *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

int FUN_0c020aa4(int a4)
{
    int stk[5];
    register int t12;
    register int t14;
    register int t15;
    register int t19;
    register int t22;
    register int t29;

    *(unsigned int *)((a4 + 0x20C)) = 0x20;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x388)) = 0x0;
    *(float *)((a4 + 0x390)) = 0.0f;
    *(float *)((a4 + 0x214)) = (*(float *)((((((*(int *)((a4 + 0xC0))) << 2) << 1) + 0xC1FE510) + 0x0)));
    *(float *)((a4 + 0x218)) = (*(float *)(((0xC1FE510 + (((*(int *)((a4 + 0xC0))) << 2) << 1)) + 0x4)));
    *(unsigned int *)((a4 + 0xD8)) = 0x0;
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0xCC)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0xD0)) = 0xFFFFFFFF;
    FUN_0c0855ba(a4);
    FUN_0c0ba6e8(a4);
    FUN_0c0ba776(a4);
    FUN_0c085638(a4);
    FUN_0c01d562(a4, 0xC1EFAE0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x2;
    FUN_0c0bb0f4(a4);
    *(unsigned int *)((a4 + 0x474)) = 0x0;
    *(unsigned int *)((a4 + 0x478)) = 0x0;
    *(unsigned int *)((a4 + 0x480)) = 0x0;
    *(unsigned int *)((a4 + 0x484)) = 0x0;
    *(unsigned int *)((a4 + 0x490)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x4A4)) = (*(int *)0xC23ED50);
    *(unsigned int *)((a4 + 0x4DC)) = 0x0;
    *(unsigned int *)((a4 + 0x508)) = 0x0;
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    *(unsigned int *)((a4 + 0x514)) = 0x0;
    *(unsigned int *)((a4 + 0x54C)) = 0x0;
    *(unsigned int *)((a4 + 0x5E8)) = 0x0;
    *(unsigned int *)((a4 + 0x500)) = 0x1;
    *(unsigned int *)((a4 + 0x4C4)) = 0x5;
    *(unsigned int *)((a4 + 0x4C8)) = 0xE;
    *(unsigned int *)((a4 + 0x4CC)) = 0x1;
    *(unsigned int *)((a4 + 0x4D0)) = 0x0;
    *(unsigned int *)((a4 + 0x5C0)) = 0x0;
    *(unsigned int *)((a4 + 0x5C8)) = 0x0;
    *(unsigned int *)((a4 + 0x5CC)) = 0x0;
    *(unsigned int *)((a4 + 0x544)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = 0xA;
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    t12 = *(int *)((a4 + 0x4F0));
    t14 = ((int (*)(int))((*(int *)(((((t12 << 2) + t12) << 2) + 0xC1F8E3C)))))(a4);
    t15 = *(int *)((a4 + 0x4F4));
    t19 = ((int (*)(int))((*(int *)((((*(int *)(((0x4F8 + a4) + 0x0))) << 2) + (*(int *)((0xC1F79B8 + (((t15 << 1) + t15) << 2)))))))))(a4);
    if ((*(int *)((a4 + 0x47C))) != 0) {
        t22 = ((int (*)(int))((*(int *)((a4 + 0x47C)))))(a4);
    }
    *(unsigned int *)((a4 + 0x530)) = 0x0;
    FUN_0c036b64(a4);
    FUN_0c0209ba(a4);
    FUN_0c085704(a4);
    t29 = FUN_0c0bbbf4(a4);
    *(unsigned int *)((a4 + 0x0)) = 0xC0201F4;
    return t29;
}

int FUN_0c0a9988(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    *(unsigned int *)(((*(int *)0xC246FF0) + 0x2E8)) = 0x2;
    *(unsigned int *)(((*(int *)0xC246FF4) + 0x2E8)) = 0x2;
    *(unsigned int *)(((*(int *)0xC246FF8) + 0x2E8)) = 0x2;
    FUN_0c019a5c(0x2, 0xC246FF0, a6, a7);
    FUN_0c0bfabc();
    FUN_0c0e16c0((*(int *)0xC23ECE0));
    nlPushMatrix(0x0);
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0((*(short *)0xC2021AC), 1.33333325f, 9.99999975e-05f, 300.0f);
    FUN_0c0dc0b0(0x1);
    nlPopMatrix(0x1);
    FUN_0c0a9f70((*(int *)0xC24FA44));
    FUN_0c0e16c0((*(int *)0xC23ECEC));
    FUN_0c0e16c0((*(int *)0xC23ECE4));
    FUN_0c0e16c0((*(int *)0xC23ECF0));
    FUN_0c0e16c0((*(int *)0xC23ECF4));
    if ((*(int *)0xC204998) == 0) {
    } else {
        if ((*(int *)0xC2049A8) == 0) {
        } else {
            if ((((int)(*(int *)0xC249884) < (int)0xFFFFFFC0) && (t0 = *(int *)0xC249808, (unsigned int)t0 <= (unsigned int)0x1)) || ((t1 = *(int *)0xC24988C, (int)t1 < (int)0xFFFFFFC0) && (t2 = *(int *)0xC249858, (unsigned int)t2 <= (unsigned int)0x1))) {
                t0 = *(int *)0xC24FA40;
                *(unsigned int *)0xC24FA40 = (t0 - 1);
                if ((int)(t0 - 1) < 0) {
                    *(unsigned int *)0xC24FA40 = 0x0;
                }
            } else {
                if ((((int)(*(int *)0xC249884) > (int)0x40) && ((t3 = *(int *)0xC249808, (unsigned int)t3 <= (unsigned int)0x1) || ((t4 = *(int *)0xC249808, (unsigned int)t4 > (unsigned int)0x1E) && (t5 = *(int *)0xC23A258, (t5 & 3) == 0)))) || ((t6 = *(int *)0xC24988C, (int)t6 > (int)0x40) && ((t7 = *(int *)0xC249858, (unsigned int)t7 <= (unsigned int)0x1) || ((t8 = *(int *)0xC249858, (unsigned int)t8 > (unsigned int)0x1E) && (t9 = *(int *)0xC23A258, (t9 & 3) == 0))))) {
                    t0 = *(int *)0xC24FA40;
                    *(unsigned int *)0xC24FA40 = (t0 + 0x1);
                    if ((unsigned int)(t0 + 0x1) >= (unsigned int)0xD) {
                        *(unsigned int *)0xC24FA40 = 0xC;
                    }
                }
            }
            *(unsigned int *)0xC260840 = (*(int *)((((*(int *)0xC24FA40) << 2) + 0xC10D920)));
        }
    }
    *(unsigned int *)0xC24FA44 = ((*(int *)0xC24FA44) + 0x1);
    t0 = FUN_0c016a86();
    if (t0 != 0) {
        t1 = *(int *)0xC24FA44;
        if ((int)t1 >= (int)0xA4) {
            if ((unsigned int)t1 < (unsigned int)0x3BF) {
                *(unsigned int *)0xC24FA44 = 0x3BF;
                *(unsigned int *)0xC247DAC = 0x3BF;
            } else {
                *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
            }
        } else {
            *(unsigned int *)0xC24FA44 = 0xA4;
            *(unsigned int *)0xC247DAC = 0xA4;
        }
    }
    return t0;
}

int FUN_0c01ad40(int a4)
{
    int t20;
    register int t53;
    register int t65;
    register int t59;
    register int t73;

    FUN_0c0de310(0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC23A19C = 0x0;
    FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
    if (((*(int *)0xC23A19C) & 0x10000) == 0) {
        FUN_0c0c4290((*(int *)0xC23ED50));
        FUN_0c0c4364((*(int *)0xC23ED50), 0x0);
        if ((*(int *)0xC204998) != 0) {
            FUN_0c0c452c((*(int *)0xC23ED50));
        }
    }
    t20 = *(int *)0xC23A19C;
    if (((0x400 & t20) == 0) && ((t20 & 0x20000) == 0)) {
        FUN_0c0cc88c((*(int *)0xC23ED50));
    }
    *(unsigned int *)0xC23A19C = ((*(int *)0xC23A19C) & 0xFFFCFAFF);
    FUN_0c019980();
    FUN_0c019a36();
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    FUN_0c0b264e();
    FUN_0c0b2e48();
    FUN_0c0852bc((*(int *)0xC23ED50));
    FUN_0c055936((*(int *)0xC23ED50));
    FUN_0c058fa0((*(int *)0xC23ED50));
    FUN_0c016d2c();
    FUN_0c016d40();
    FUN_0c016d74();
    FUN_0c0534a4();
    mwPlyPreInitSofdec();
    *(unsigned int *)((a4 + 0x44)) = 0x4;
    *(unsigned int *)0xC23ED9C = 0x3;
    FUN_0c01a874();
    *(unsigned int *)((a4 + 0x34)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    *(unsigned int *)0xC23EDA4 = (FUN_0c0e5dc0());
    FUN_0c04996a();
    t53 = *(int *)0xC23A1A8;
    if ((t53 & 0x1) != 0) {
        t65 = (t53 & 0x1);
        if ((t53 & 0x1) != 0) {
            t59 = 0xC20BB28;
            if ((int)(*(int *)0xC23ED50) >= (int)(*(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB28)))) {
                t59 = (FUN_0c0cc752((*(int *)0xC23ED50)));
            }
            t65 = t59;
        }
        t73 = t65;
    } else {
        t73 = (FUN_0c0cc752((*(int *)0xC23ED50)));
    }
    if ((*(int *)0xC204998) != 0) {
        *(unsigned int *)0xC1FF890 = 0x0;
    }
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        *(unsigned int *)0xC1EFD5C = 0x0;
    }
    return t73;
}

int FUN_0c0923c4(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t0;
    register int t26;
    register int t42;
    register int t43;
    register int t49;
    register int t54;
    register float u56;
    register int t57;
    register int t58;
    register int t59;
    register int t64;
    register int t65;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a4 + 0x34));
    if (((*(int *)((0xC247604 + ((*(int *)((t0 + 0xBC))) << 2)))) == 1) && ((t3 = *(int *)((a4 + 0x38)), t4 = *(int *)((0xC247030 + (t3 << 2))), t4 == 4) && (t5 = *(int *)0xC23ED5C, (t5 & 0x10080) == 0))) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if (((*(int *)0xC23ED88) & 0x20000) != 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFDFFFF);
        *(unsigned int *)((a4 + 0x3C)) = 0x1;
        *(unsigned int *)((a4 + 0x40)) = 0x64;
    }
    if ((*(int *)((a4 + 0x3C))) != 0) {
        if ((int)(*(int *)((a4 + 0x48))) < (int)0xC00) {
            *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) + 0x200);
        }
        t26 = *(int *)((a4 + 0x40));
        *(unsigned int *)((a4 + 0x40)) = (t26 - 1);
        if ((int)(t26 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
        }
    } else {
        if ((int)(*(int *)((a4 + 0x48))) > 0) {
            *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) - 64);
        }
    }
    *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + (*(int *)(((0x48 + a4) + 0x0))));
    if ((*(int *)0xC23EDB4) == 0) {
        t42 = *(int *)((t0 + 0x21C));
        t43 = t42;
        if ((int)t42 < 0) {
            t43 = (t42 + 0x3);
        }
        *(unsigned int *)(((int)stk + 8)) = (0x14 - ((t43 >> 1) >> 1));
        nlPushMatrix(((((*(int *)((a4 + 0x38))) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
        FUN_0c0dcca0(0xC10AC1C);
        t49 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 4)) = (((t49 << 2) << 2) << 1);
        FUN_0c0db840(((((t49 << 2) << 2) << 1) + (a4 + 0x4C)));
        nlRotateAZ((*(int *)((a4 + 0x44))));
        FUN_0c0c47ae(0x12A1);
        if (((t43 >> 1) >> 1) != 0) {
            t54 = *(int *)(((int)stk + 4));
            u56 = *(float *)(((*(int *)((a4 + 0x30))) + 0x270));
            t57 = ((t43 >> 1) >> 1);
            t58 = ((a4 + 0x4C) + t54);
            t59 = (((a4 + 0x4C) + t54) + 0x20);
            for (;;) {
                FUN_0c065398(t58, t59, 0xC10AC28, 0xC10AC34, 0.699999988f);
                t58 = (t58 + 0x20);
                if ((u56 + (1.0f + 1.0f)) > (*(float *)((t59 + 0x4)))) {
                    *(float *)((t59 + 0x4)) = (u56 + (1.0f + 1.0f));
                }
                t57 = (t57 - 0x1);
                t59 = (t59 + 0x20);
                if (t57 == 0) {
                    break;
                }
            }
            t64 = ((t43 >> 1) >> 1);
            t65 = ((a4 + 0x4C) + (*(int *)(((int)stk + 4))));
            for (;;) {
                FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                FUN_0c0dcca0(t65);
                nlRotateAY((*(int *)((t65 + 0x18))));
                nlRotateAZ((*(int *)((t65 + 0x1C))));
                FUN_0c0c465c(0x123E);
                t64 = (t64 - 0x1);
                t65 = (t65 + 0x20);
                if (t64 == 0) {
                    break;
                }
            }
        }
        return nlPopMatrix(0x1);
    }
    return 0xC23EDB4;
}

int FUN_0c04f188(int a4, int a5, int a6)
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
    t1 = t0;
    if ((t0 & 12) == 0) {
    } else {
        if ((*(int *)((0xC247030 + ((((*(int *)((a4 + 0xBC))) + 0x1) & 0x1) << 2)))) == 4) {
            t0 = *(int *)(((((0x1 & ((*(int *)((a4 + 0xBC))) + 0x1)) << 2) + 0xC246FF0) + 0x0));
            *(unsigned int *)((t0 + 0x1B0)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x24C + t0)) = *(struct mv3 *)((a4 + 0x60)); }
            *(unsigned short *)((t0 + 0x6E)) = (*(short *)((a4 + 0x6E)));
            FUN_0c056098(t0, a5, a6);
            if ((*(int *)((a4 + 0x3D0))) != 0) {
                *(float *)((t0 + 0x50)) = 0.0f;
                *(float *)((t0 + 0x48)) = 0.0f;
                *(unsigned int *)((t0 + 0x3B4)) = 0x0;
                *(unsigned int *)((t0 + 0x3B0)) = 0x0;
                *(unsigned int *)((t0 + 0x3AC)) = 0x0;
                *(unsigned int *)((t0 + 0x1B0)) = 0x0;
                *(unsigned int *)((t0 + 0x324)) = 0x0;
                *(unsigned int *)((t0 + 0x328)) = 0x0;
                *(unsigned short *)((t0 + 0x454)) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((0x24C + t0)); }
                *(unsigned int *)((t0 + 0xA4)) = ((*(int *)((t0 + 0xA4))) & 0xFFFFFFF5);
                FUN_0c0b33a8(t0, (*(int *)((a4 + 0x3D0))));
            } else {
                FUN_0c04f352(t0);
            }
        }
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x324)) = 0x0;
        *(float *)((a4 + 0x50)) = 0.0f;
        *(float *)((a4 + 0x48)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x24C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((0x24C + a4)); }
        if ((*(int *)((a4 + 0x3CC))) != 0) {
            *(unsigned int *)((a4 + 0x328)) = 0x0;
            *(unsigned short *)((a4 + 0x454)) = 0x0;
            *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFFFF5);
            FUN_0c0b33a8(a4, (*(int *)((a4 + 0x3CC))));
        } else {
            *(unsigned int *)((a4 + 0x20C)) = 0x1;
            *(unsigned int *)((a4 + 0x210)) = 0x0;
            *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x394)) = 0x0;
            *(unsigned int *)((a4 + 0x328)) = 0x78;
            *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
        }
        t0 = *(int *)0xC23ED5C;
        *(unsigned int *)0xC23ED5C = (t0 | 0x20);
        t1 = (t0 | 0x20);
    }
    return t1;
}

void FUN_0c030c18(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t1 = *(int *)((a4 + 0x4F8));
    if ((unsigned int)t1 >= (unsigned int)0xE) {
        return;
    }
    switch ((t1 << 1)) {
        case 0:
        {
            return;
        }
        case 2:
        {
            t1 = *(int *)((a4 + 0x538));
            if (t1 == 0) {
                return;
            }
            if (t1 == 1) {
                return;
            }
            if (t1 == 10) {
                return;
            }
            if (t1 == 2) {
                return;
            }
            t1 = ((int (*)(int, int, int))(FUN_0c035b26))(a4, a5, a6);
            if (t1 == 0) {
                return;
            }
            t1 = FUN_0c02f4b8(a4, 0x1);
            if (t1 != 0) {
                t1 = FUN_0c02a35a(a4);
                if (t1 != 0) {
                    if ((t1 == 1) && (t0 = *(int *)((a4 + 0x3B8)), (t0 & 2) != 0)) {
                        *(unsigned int *)((a4 + 0x508)) = 0x0;
                        *(unsigned int *)((a4 + 0x554)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                        t0 = *(int *)((a4 + 0x4F0));
                        ((int (*)(int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4);
    return;
                    }
                    *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                    return;
                }
                *(unsigned int *)((a4 + 0x508)) = 0x0;
                *(unsigned int *)((a4 + 0x554)) = 0x2;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                t0 = *(int *)((a4 + 0x4F0));
                ((int (*)(int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4);
    return;
            }
            t0 = *(int *)((a4 + 0x538));
            if ((t0 == 8) || ((t0 == 6) || (t0 == 7))) {
                if ((*(int *)((a4 + 0x28C))) != 0) {
                    if ((int)(*(int *)(((*(int *)((((*(int *)((a4 + 0x28C))) << 2) + 0xC246FF0))) + 0x310))) > 0) {
                        if (((*(int *)((a4 + 0x3B8))) & 2) == 0) {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                        }
                    }
                } else {
                    if (((*(int *)((a4 + 0x3B8))) & 2) == 0) {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                    }
                }
            }
            return;
        }
        case 4:
        {
            return;
        }
        case 6:
        {
            t0 = FUN_0c02a416(a4);
            if (t0 != 0) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                return;
            }
            t0 = *(int *)((a4 + 0x538));
            if (t0 != 0) {
                if (t0 != 10) {
                    if (t0 != 2) {
                        t0 = ((int (*)(int))(FUN_0c035b26))(a4);
                        if (t0 != 0) {
                            t0 = FUN_0c02f4b8(a4, 0x1);
                            if (t0 != 0) {
                                *(unsigned int *)((a4 + 0x508)) = 0x0;
                                *(unsigned int *)((a4 + 0x554)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                t0 = *(int *)((a4 + 0x4F0));
                                ((int (*)(int))((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C)))))(a4);
    return;
                            }
                            return;
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            return;
        }
        case 8:
        {
            return;
        }
        case 10:
        {
            return;
        }
        case 12:
        {
            return;
        }
        case 14:
        {
            return;
        }
        case 16:
        {
            return;
        }
        case 18:
        {
            t0 = FUN_0c02a416(a4);
            if (t0 != 0) {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                return;
            }
            FUN_0c02a288(a4);
    return;
        }
        default:
        {
            return;
        }
    }
}

int FUN_0c0800c6(int a4, int a5, int a6, int a7)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F5;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_1 = a4;
    v0_0 = a6;
    v0_0 = a7;
    *(float *)(((int)stk + 12)) = F15;
    *(float *)(((int)stk + 8)) = F14;
    v0_2 = (*(int *)0xC247D70) == 0;
    *(float *)(((int)stk + 8)) = F15;
    *(float *)(((int)stk + 4)) = F14;
    v0_0 = (v0_1);
    if (v0_2) goto L_C0800F0;
    return FUN_0c07fc50(v0_0);
    L_C0800F0:;
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_1 = (0xC23EE14);
    v0_2 = (0x8);
    L_C0800F4:;
    v0_4 = *(int *)((v0_1 + 0x4));
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C080154;
    v0_4 = (int)(*(short *)((v0_3 + 0x46))) <= 0;
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (v0_4) goto L_C080154;
    v0_4 = (*(short *)((v0_3 + 0x44))) != (*(int *)0xC23ED50);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (v0_4) goto L_C080154;
    v0_4 = (*(int *)((v0_1 + 0x0))) != 0;
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (v0_4) goto L_C080154;
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R12 = (v0_3);
    L_C08015A:;
    w0_0 = *(float *)((R12 + 0x0));
    w0_1 = *(float *)((v0_0 + 0x3A4));
    w0_2 = *(float *)((R12 + 0x8));
    w0_3 = *(float *)((v0_0 + 0x3AC));
    w0_2 = ((w0_3 - w0_2) * (w0_3 - w0_2));
    w0_2 = w0_2 + (w0_1 - w0_0) * (w0_1 - w0_0);
    v0_1 = FUN_0c07e5c8(v0_0);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_2 = (v0_1);
    F15 = (_builtin_sqrtf(w0_2));
    if ((v0_1 != 1)) goto L_C080188;
    w0_0 = *(float *)((v0_0 + 0x3B0));
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_2 = (0x3B0);
    F15 = ((F15 + w0_0));
    L_C080188:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + v0_0)) = *(struct mv3 *)((0x3A4 + v0_0)); }
    v0_1 = *(int *)0xC247CA4;
    v0_3 = !((*(float *)((v0_1 + 0x20))) > F15);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_2 = (0x20);
    v0_1 = (v0_1);
    if (v0_3) goto L_C0801A6;
    w0_0 = *(float *)((v0_1 + v0_2));
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    F15 = (w0_0);
    L_C0801B0:;
    v0_2 = *(short *)((v0_1 + 0x14));
    w0_0 = *(float *)((v0_1 + 0x20));
    w0_1 = (float)(short)v0_2;
    w0_1 = w0_1 + (float)((*(short *)((v0_1 + 0x16))) - (short)v0_2) * (((*(float *)((v0_0 + 0x29C))) - w0_0) / ((*(float *)((v0_1 + 0x24))) - w0_0));
    *(unsigned int *)((v0_0 + 0x3DC)) = (int)w0_1;
    *(unsigned int *)(((0x3E0 + v0_0) + 0x0)) = (short)(FUN_0c0d9dc0(((*(float *)((v0_0 + 0x3A4))) - (*(float *)((R12 + 0x0)))), ((*(float *)((v0_0 + 0x3AC))) - (*(float *)((R12 + 0x8))))));
    *(unsigned int *)(((0x3D4 + v0_0) + 0x0)) = (int)((float)(*(int *)(((0x3D4 + v0_0) + 0x0))) + ((float)(FUN_0c07e636((*(int *)((v0_0 + 0x3D4))), (*(int *)((v0_0 + 0x3DC))))) * 0.0199999996f));
    *(unsigned int *)(((0x3D8 + v0_0) + 0x0)) = (int)((float)(*(int *)(((0x3D8 + v0_0) + 0x0))) + ((float)(FUN_0c07e636((*(int *)((v0_0 + 0x3D8))), (*(int *)((v0_0 + 0x3E0))))) * 0.0199999996f));
    v0_1 = !(_builtin_fabsf(((*(float *)((v0_0 + 0x29C))) - F15)) > 0.299999982f);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_2 = (0x29C);
    w0_0 = (0.299999982f);
    if (v0_1) goto L_C08027A;
    v0_1 = !((*(float *)((v0_0 + v0_2))) > F15);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (v0_1) goto L_C08026E;
    *(float *)((v0_0 + v0_2)) = ((*(float *)((v0_0 + v0_2))) - w0_0);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    L_C08027A:;
    return FUN_0c07e2b0(v0_0);
    L_C08026E:;
    *(float *)((v0_0 + v0_2)) = ((*(float *)((v0_0 + v0_2))) + 0.799999952f);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    goto L_C08027A;
    L_C0801A6:;
    v0_3 = !(F15 > (*(float *)((v0_1 + 0x24))));
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_2 = (0x24);
    if (v0_3) goto L_C0801B0;
    w0_0 = *(float *)((v0_1 + v0_2));
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    F15 = (w0_0);
    goto L_C0801B0;
    L_C080154:;
    v0_3 = (v0_2 - 0x1) != 0;
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    v0_1 = ((v0_1 + 0x8));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C0800F4;
    goto L_C08015A;
}
