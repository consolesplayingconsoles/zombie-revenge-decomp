/* Straight-line functions with calls and guards (batch gen_ih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSTM_GetStat(int);
int ADXT_Stop(void);
int FUN_0c010c40(int);
int FUN_0c01d8de(int, int, int, int, int, int);
int FUN_0c02a19a(int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c038bd6(int, int);
int FUN_0c038ce0(int, int);
int FUN_0c039e96(int);
int FUN_0c03a66c(int, int, int, int);
int FUN_0c03a68e(int, int, int, int);
int FUN_0c03a834(int, int);
int FUN_0c03afe8(int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c048610(int);
int FUN_0c0555ca(int, int, int, int);
int FUN_0c05561a(int, int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c079de4(int);
int FUN_0c08545a(int, int, float, float, float);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7ed4(int, int, int, int);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c4684(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c4784(int, float);
int FUN_0c0c60d0(int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(int);
int FUN_0c22a06c(int);
int FUN_0c22a512(int);
int adxt_RcvrReplay(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int thunk_kmSetCheapShadowMode(int);
int FUN_0c079f10(int a4);
int FUN_0c08e7d4(int a4, int a5, int a6, int a7);
int FUN_0c07928a(void);
int FUN_0c06ab92(int a4, int a5, int a6, int a7);
float FUN_0c06d49c(int a4, int a5, int a6, int a7);
int FUN_0c0708b0(int a4, int a5, int a6);
int FUN_0c03ae58(int a4, int a5);
int FUN_0c03b9d4(int a4, int a5, int a6, int a7);
int FUN_0c012ca8(void);
int FUN_0c05a2dc(int a4, int a5, int a6, float f4);
int FUN_0c0829ec(void);
int FUN_0c064fac(int a4, int a5, int a6, int a7);
int FUN_0c03b0e2(int a4, int a5);
int FUN_0c0b2262(int a4);
int FUN_0c22b13a(int a4);
int FUN_0c0487fc(int a4, float f4, float f5, float f6);
int FUN_0c06d9fc(int a4);

int FUN_0c079f10(int a4)
{
    int stk[5];
    register int t10;
    register int t11;
    register int t20;
    register int t30;
    register float u33;
    register int t41;
    register int t69;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((*(int *)0xC23ED9C) != 24) && (t2 = *(int *)(((*(int *)0xC23ECF8) + 0x38)), t3 = *(int *)0xC23ECFC, t4 = *(short *)((t3 + 0x2)), t5 = *(int *)((0xC2078A4 + (t4 << 2))), (int)t2 < (int)(t5 - 3))) {
    } else {
        *(float *)((a4 + 0x34)) = 0.0f;
        *(float *)((a4 + 0x5C)) = 0.0f;
        *(unsigned int *)((a4 + 0x80)) = 0x4;
    }
    t10 = *(int *)((a4 + 0x80));
    t11 = *(int *)0xC23ED9C;
    if (t10 != 0) {
        if (t10 != 1) {
            if (t10 != 2) {
                if (t10 != 3) {
                    if (t10 == 4) {
                        if (t11 == 7) {
                            *(float *)((a4 + 0x5C)) = 0.0f;
                            *(unsigned int *)((a4 + 0x80)) = 0x0;
                        }
                    }
                } else {
                    *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) - (*(float *)(((0x90 + a4) + 0x0))));
                    t20 = *(int *)((a4 + 0x98));
                    *(unsigned int *)((a4 + 0x98)) = (t20 - 1);
                    if ((int)(t20 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x80)) = 0x6;
                    }
                }
            } else {
                if (t11 != 25) {
                    t30 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t30 + 0x6800);
                    u33 = (*(float *)((a4 + 0x58)));
                    u33 = u33 + 0.0799999982f * (FUN_0c0da410((t30 + 0x6800)));
                    *(float *)((a4 + 0x34)) = u33;
                    *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) + (*(float *)(((0x90 + a4) + 0x0))));
                    if ((*(int *)0xC23ED9C) == 8) {
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) >> 1);
                        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x5C))) / (float)(*(int *)((a4 + 0x98))));
                        *(float *)((a4 + 0x34)) = 0.0f;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    } else {
                        t41 = *(int *)((a4 + 0x98));
                        *(unsigned int *)((a4 + 0x98)) = (t41 - 1);
                        if ((int)(t41 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x80)) = 0x6;
                            *(float *)((a4 + 0x34)) = 0.0f;
                        }
                    }
                }
            }
        } else {
            t69 = *(int *)((a4 + 0x98));
            *(unsigned int *)((a4 + 0x98)) = (t69 - 1);
            if ((int)(t69 - 1) > 0) {
            } else {
                *(unsigned int *)((a4 + 0x98)) = 0xA32;
                *(float *)((a4 + 0x90)) = (20.0f / (float)(*(int *)((a4 + 0x98))));
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x98)) = 0x59;
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    }
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x5C))) + (*(float *)((a4 + 0x54))));
    if ((*(float *)((a4 + 0x38))) != (*(float *)((a4 + 0x44)))) {
        *(float *)((a4 + 0x44)) = (*(float *)((a4 + 0x38)));
        FUN_0c01d8de(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    return FUN_0c079de4(a4);
}

int FUN_0c08e7d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY((*(short *)((a4 + 0x8A))));
    nlRotateAX((*(short *)((a4 + 0x88))));
    nlRotateAZ((*(short *)((a4 + 0x8C))));
    if ((*(short *)((a4 + 0xA0))) != 0) {
        u0 = *(float *)((a4 + 0x90));
        nlScale(u0, u0, u0);
        FUN_0c0de000((*(float *)((a4 + 0x90))));
        u0 = ((((float)(*(short *)((a4 + 0xA0))) * 0.099999994f) / (float)(*(short *)((a4 + 0x98)))) + 0.899999976f);
    } else {
        u1 = *(float *)((a4 + 0x90));
        t0 = *(short *)((a4 + 0x98));
        t1 = *(short *)((a4 + 0x8E));
        u2 = ((((float)((short)t0 - (short)t1) * 0.199999988f) / (float)(short)t0) + 1.0f);
        nlScale((u1 * u2), ((u1 * (float)(short)t1) / (float)(short)t0), (u1 * u2));
        u3 = (u1 * u2);
        if (((u1 * (float)(short)t1) / (float)(short)t0) > (u1 * u2)) {
            u3 = ((u1 * (float)(short)t1) / (float)(short)t0);
        }
        FUN_0c0de000(u3);
        u0 = (((float)(*(short *)((a4 + 0x8E))) * 0.899999976f) / (float)(*(short *)((a4 + 0x98))));
    }
    FUN_0c0c475c((*(short *)((a4 + 0x9A))), u0);
    nlPopMatrix(0x1);
    t0 = *(short *)((a4 + 0x9E));
    *(unsigned short *)((a4 + 0x9E)) = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) >= (int)(*(short *)((a4 + 0x9C)))) {
        *(unsigned short *)((a4 + 0x9E)) = 0x0;
        if ((*(short *)((a4 + 0xA0))) != 0) {
            *(unsigned short *)((a4 + 0x9A)) = ((*(short *)((a4 + 0x9A))) + 0x2);
            t0 = *(short *)((a4 + 0xA0));
            *(unsigned short *)((a4 + 0xA0)) = (t0 - 2);
            if ((int)(short)(t0 - 2) <= 0) {
                *(unsigned short *)((a4 + 0x98)) = (*(short *)((a4 + 0x8E)));
            }
        }
    }
    t0 = *(short *)((a4 + 0x8E));
    *(unsigned short *)((a4 + 0x8E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return ((int (*)(void))(FUN_0c0e19f2))();
    }
    return 0x8E;
}

int FUN_0c07928a(void)
{
    int stk[16];
    register int t1;
    register int t4;
    register int t5;
    register int t6;
    register int t11;
    register int t13;
    register int t19;
    register int t31;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t41;
    register int t43;
    register int t46;
    register int t48;
    register int t49;

    t1 = FUN_0c0e19aa(0xC079424, 0x4A50, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    FUN_0c0dc5a0();
    *(unsigned int *)(((int)stk + 12)) = (0x2548 + t1);
    *(unsigned int *)(((int)stk + 4)) = (0x3B80 + t1);
    *(unsigned int *)(((int)stk + 20)) = (0x469C + t1);
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    *(unsigned int *)(((int)stk + 8)) = 0xC100A5C;
    *(unsigned int *)(((int)stk + 28)) = 0x3;
    t4 = (0x2190 + t1);
    t5 = (t1 + 0x3C);
    t6 = (0x1674 + t1);
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0((*(int *)(((int)stk + 8))));
        t11 = *(int *)(((*(int *)(((int)stk + 8))) + 0xC));
        nlRotateAY(t11);
        *(unsigned int *)(((int)stk + 24)) = 0x5A;
        t13 = 0xC1004BC;
        for (;;) {
            if (((unsigned short)(*(short *)((t13 + 0xE))) & (*(int *)(((int)stk + 16)))) != 0) {
                FUN_0c0db470(t13, (*(int *)(((int)stk + 12))));
                *(unsigned short *)(((*(int *)(((int)stk + 4))) + 0x2)) = t11;
                t19 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 20)) = (t19 + 0x2);
                *(unsigned short *)((((t19 + 0x2) - 0x2) + 0x0)) = (*(short *)((t13 + 0xC)));
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x6);
                *(unsigned int *)((t1 + 0x2544)) = ((*(int *)((t1 + 0x2544))) + 0x1);
            } else {
                FUN_0c0db470(t13, t5);
                *(unsigned short *)((t6 + 0x2)) = t11;
                t5 = (t5 + 0xC);
                t6 = (t6 + 0x6);
                *(unsigned short *)((t4 + 0x0)) = (*(short *)((t13 + 0xC)));
                t4 = (t4 + 0x2);
                *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + 0x1);
            }
            t31 = *(int *)(((int)stk + 24));
            t13 = (t13 + 0x10);
            *(unsigned int *)(((int)stk + 24)) = (t31 - 1);
            if ((t31 - 1) == 0) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) << 1);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x10);
        t34 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 28)) = (t34 - 1);
        if ((t34 - 1) == 0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 12)) = 0x6;
    t35 = t4;
    t36 = 0xC100CBC;
    t37 = t5;
    t38 = t6;
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0(t36);
        t41 = *(int *)((t36 + 0xC));
        *(unsigned int *)(((int)stk + 4)) = t41;
        nlRotateAY(t41);
        *(unsigned int *)(((int)stk + 8)) = 0x22;
        t43 = 0xC100A9C;
        for (;;) {
            FUN_0c0db470(t43, t37);
            t37 = (t37 + 0xC);
            *(unsigned short *)((t38 + 0x2)) = (*(int *)(((int)stk + 4)));
            t38 = (t38 + 0x6);
            t46 = *(int *)((t43 + 0xC));
            t43 = (t43 + 0x10);
            *(unsigned short *)((t35 + 0x0)) = t46;
            t35 = (t35 + 0x2);
            *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + 0x1);
            t48 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t48 - 1);
            if ((t48 - 1) == 0) {
                break;
            }
        }
        t49 = *(int *)(((int)stk + 12));
        t36 = (t36 + 0x10);
        *(unsigned int *)(((int)stk + 12)) = (t49 - 1);
        if ((t49 - 1) == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c06ab92(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t4;
    register int t8;
    register int t11;
    register int t14;
    register int t15;
    register int t27;
    register int t35;
    register int t6;
    register int t28;
    int t16;

    if (0.0f > (*(float *)((a4 + 0xA0)))) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
        t4 = FUN_0c0cc3f8(0x921A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        *(unsigned int *)((a4 + 0x0)) = 0xC06AB84;
        t35 = t4;
    } else {
        if (((*(int *)0xC247030) != 4) && (t6 = *(int *)0xC247034, t6 != 4)) {
            t28 = t6;
        } else {
            FUN_0c0c60d0(0xC0FB124, 0xC0FB118, 0xC);
            *(unsigned int *)((a4 + 0x30)) = 0x20A3;
            *(float *)((a4 + 0x34)) = 192.0f;
            *(float *)((a4 + 0x38)) = 415.0f;
            *(float *)((a4 + 0x40)) = 4.0f;
            *(float *)((a4 + 0x44)) = 1.0f;
            *(unsigned int *)((a4 + 0x64)) = 0x9;
            t8 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x30));
            if (((*(int *)0xC23A258) & 1) != 0) {
                *(unsigned int *)((a4 + 0x30)) = 0x20A2;
                *(float *)((a4 + 0x34)) = 200.0f;
                *(float *)((a4 + 0x40)) = (((*(float *)((a4 + 0xA0))) * 7.75f) / 6.0f);
                t11 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x30));
            }
            *(unsigned int *)((a4 + 0x30)) = 0x20A4;
            *(float *)((a4 + 0x34)) = 160.0f;
            *(float *)((a4 + 0x38)) = 383.0f;
            *(float *)((a4 + 0x40)) = 0.699999988f;
            *(float *)((a4 + 0x44)) = 0.699999988f;
            t14 = ((int (*)(int, float))(FUN_0c0c0340))((a4 + 0x30), 0.699999988f);
            t15 = *(int *)0xC23A258;
            t27 = t15;
            if (((t15 & 128) == 0) && (t16 = *(int *)0xC23A258, (0x1 & t16) != 0)) {
                if ((*(int *)0xC23A1A0) == 0) {
                    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(*(short *)(((((unsigned int)(t16 & 0x100) >> 8) << 1) + 0xC0FB130)));
                } else {
                    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(*(short *)(((((unsigned int)(t16 & 0x100) >> 8) << 1) + 0xC0FB134)));
                }
                *(float *)((a4 + 0x34)) = 320.0f;
                *(float *)((a4 + 0x38)) = 304.0f;
                *(float *)((a4 + 0x40)) = 1.0f;
                *(float *)((a4 + 0x44)) = 1.0f;
                *(unsigned int *)((a4 + 0x64)) = 0xA;
                t27 = (((int (*)(int))(FUN_0c0c0340))((a4 + 0x30)));
            }
            t28 = t27;
        }
        t35 = t28;
    }
    return t35;
}

float FUN_0c06d49c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)0xC23ED9C;
    if (((int)t0 < (int)0xC) || ((int)t0 > (int)0xE)) {
        if ((int)t0 <= (int)0x9) {
            FUN_0c0685a4(t0, a5, a6, a7);
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAZ(((*(short *)((a4 + 0x64))) + (*(int *)((a4 + 0x70)))));
        nlRotateAY(((*(short *)((a4 + 0x62))) + (*(int *)((a4 + 0x6C)))));
        nlRotateAX(((*(short *)((a4 + 0x60))) + (*(int *)(((a4 + 0x68) + 0x0)))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        nlPopMatrix(0x1);
        u2 = ((*(float *)(((0x94 + a4) + 0x0))) * (*(float *)(((0x48 + a4) + 0x0))));
        u2 = u2 + (float)((*(short *)(((0x60 + a4) + 0x0))) + (*(int *)(((a4 + 0x68) + 0x0)))) * (*(float *)((a4 + 0x90)));
        *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) + u2);
        *(unsigned int *)(((a4 + 0x68) + 0x0)) = (int)((float)(*(int *)(((a4 + 0x68) + 0x0))) + (*(float *)((a4 + 0x48))));
        t0 = *(short *)(((0x64 + a4) + 0x0));
        t1 = *(int *)(((0x70 + a4) + 0x0));
        u2 = ((*(float *)(((0x94 + a4) + 0x0))) * (*(float *)(((0x50 + a4) + 0x0))));
        u2 = u2 + (float)(t0 + t1) * (*(float *)((a4 + 0x90)));
        *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) + u2);
        *(unsigned int *)((a4 + 0x70)) = (int)((float)(*(int *)((a4 + 0x70))) + (*(float *)((a4 + 0x50))));
        *(unsigned int *)((a4 + 0x6C)) = ((*(int *)((a4 + 0x6C))) + (int)(*(float *)((a4 + 0x4C))));
        t2 = *(short *)((a4 + 0x62));
        t3 = *(int *)((a4 + 0x6C));
        if ((((int)(t2 + t3) > (int)0xE38) && (u0 = *(float *)((a4 + 0x4C)), u0 > 0.0f)) || (((int)(t2 + t3) < (int)0xFFFFF1C8) && (u1 = *(float *)((a4 + 0x4C)), 0.0f > u1))) {
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) * (-1.0f));
        }
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) * 0.994999945f);
        u0 = (float)(t0 + t1);
    }
    return u0;
}

int FUN_0c0708b0(int a4, int a5, int a6)
{
    int stk[23];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_7 = a4;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 20)) = 0xC247038;
    *(unsigned int *)(((int)stk + 12)) = 0xE;
    v0_4 = (0xC23A1A8);
    v0_2 = (0xC246FF0);
    v0_3 = (0x0);
    v0_0 = (v0_7);
    v0_1 = (0x0);
    v0_5 = (0xC246FF8);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0)) goto L_C0708EC;
    L_C070A28:;
    return v0_4;
    L_C0708EC:;
    v0_4 = (0xC070948);
    v0_7 = (0xC08545A);
    w0_1 = (120.0f);
    w0_2 = (0.0f);
    w0_0 = (1.0f);
    L_C0708F6:;
    v0_7 = *(int *)(((int)stk + 20));
    v0_8 = *(int *)((v0_5 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (v0_7 + 0x4);
    v0_6 = (v0_8);
    v0_7 = ((*(int *)((((v0_7 + 0x4) - 4) + 0x0))));
    v0_5 = ((v0_5 + 0x4));
    if ((v0_8 == 0)) goto L_C070928;
    v0_4 = (v0_7);
    if ((v0_7 != 4)) goto L_C070928;
    v0_1 = FUN_0c08545a((v0_6 + 0x30), (((int)stk + 4) + 0x20), w0_0, w0_2, w0_1);
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C070926;
    v0_1 = (v0_3);
    L_C070932:;
    if ((v0_1 != 0)) goto L_C07094C;
    *(unsigned int *)((v0_0 + 0x30)) = v0_3;
    goto L_C070A28;
    L_C07094C:;
    v0_3 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_3 + 0x1);
    if (((int)(v0_3 + 0x1) < (int)0x12C)) goto L_C070A28;
    v0_3 = *(int *)0xC23A258;
    *(unsigned int *)(((int)stk + 16)) = (((unsigned int)((unsigned int)v0_3 >> 2) >> 2) & 0x3);
    v0_4 = ((((unsigned int)((unsigned int)v0_3 >> 2) >> 2) & 0x3));
    if (((((unsigned int)((unsigned int)v0_3 >> 2) >> 2) & 0x3) == 0)) goto L_C070A28;
    *(unsigned int *)(((int)stk + 12)) = 0x2;
    w0_0 = *(float *)0xC070A70;
    w0_1 = (*(float *)0xC070A6C);
    w0_1 = w0_1 + w0_0 * (FUN_0c0da410(((((*(int *)0xC23A258) << 8) << 2) << 2)));
    *(float *)((v0_0 + 0x34)) = w0_1;
    v0_5 = v0_2;
    v0_4 = (v0_2 + 0x40);
    v0_2 = (0xC0DC6E0);
    v0_3 = (0x3AC);
    v0_7 = v0_5;
    v0_5 = v0_4;
    w0_0 = (w0_0);
    w0_0 = ((*(float *)0xC070A78));
    L_C070998:;
    v0_2 = *(int *)((v0_5 + 0x0));
    v0_4 = (v0_2);
    v0_6 = ((*(int *)((v0_7 + 0x0))));
    v0_7 = ((v0_7 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    if ((v0_2 != 4)) goto L_C070A1E;
    nlSubVector3op((((int)stk + 4) + 0x14), (v0_1 + 0x30), (v0_6 + 0x30));
    nlScaleUnitVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), ((float)(*(int *)(((int)stk + 16))) * w0_0));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 32))));
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + w0_0);
    nlAddVector((((int)stk + 4) + 0x14), (v0_6 + 0x30));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((((int)stk + 4) + 0x14));
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    FUN_0c0c4784(v0_3, (*(float *)((v0_0 + 0x34))));
    v0_4 = ((nlPopMatrix(0x1)));
    L_C070A1E:;
    v0_2 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_2 - 1);
    if (((v0_2 - 1) != 0)) goto L_C070998;
    goto L_C070A28;
    L_C070926:;
    v0_1 = (v0_6);
    L_C070928:;
    v0_6 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_6 - 1);
    if (((v0_6 - 1) != 0)) goto L_C0708F6;
    goto L_C070932;
}

int FUN_0c03ae58(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c038ce0(a4, a5);
    if ((int)(*(int *)((a4 + 0x57C))) < (int)0x3) {
        *(unsigned int *)((a4 + 0x57C)) = 0x3;
    }
    if ((int)(*(int *)((a4 + 0x584))) < (int)0x2) {
        t0 = *(int *)((a4 + 0x4F0));
        t1 = *(int *)(((0x584 + a4) + 0x0));
        t2 = *(int *)(((0x5A4 + a4) + 0x0));
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + ((((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0x84) + ((((t1 << 1) + t1) << 2) << 2)) + (((t2 << 1) + t2) << 2)))));
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            t0 = *(int *)((a4 + 0x4F0));
            t1 = *(int *)((a4 + 0x584));
            t2 = *(int *)((a4 + 0x5A4));
            *(unsigned int *)(((0x5B8 + a4) + 0x0)) = (unsigned short)(*(short *)((((((t2 << 1) + t2) << 2) + (((((t1 << 1) + t1) << 2) << 2) + ((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10))) + 0x84))) + 0xA)));
        }
    } else {
        t0 = *(int *)((a4 + 0x4F0));
        t1 = *(int *)(((0x584 + a4) + 0x0));
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + (((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0xE4) + ((((t1 - 2) << 1) + (t1 - 2)) << 2)))));
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            t0 = *(int *)((a4 + 0x4F0));
            t1 = *(int *)((a4 + 0x584));
            *(unsigned int *)(((0x5B8 + a4) + 0x0)) = (unsigned short)(*(short *)(((((((t1 - 2) << 1) + (t1 - 2)) << 2) + ((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10))) + 0xE4)) + 0xA)));
        }
    }
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x800;
    *(unsigned int *)((a4 + 0x210)) = 0xB;
    *(unsigned int *)((a4 + 0x4C4)) = 0x3;
    *(unsigned int *)((a4 + 0x4C8)) = 0x7;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    t0 = *(int *)((a4 + 0x578));
    if (t0 == 6) {
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            t1 = *(int *)((a4 + 0xC8));
            if ((t1 & 4) != 0) {
                return FUN_0c039e96(a4);
            }
            return t1;
        }
        return 0x304;
    }
    return t0;
}

int FUN_0c03b9d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(int *)((a4 + 0xD0))) >= 0) {
        return 0xD0;
    }
    if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + 0.00999999978f);
    }
    t0 = *(int *)((a4 + 0x2F4));
    if ((t0 & 0xFFF0) != 0) {
        if ((t0 & 0xFFF0) != 0x100) {
            if ((t0 & 0xFFF0) != 0x200) {
                if ((t0 & 0xFFF0) != 0x300) {
                    if ((t0 & 0xFFF0) != 0x400) {
                        t1 = (t0 & 0xFFF0);
                        if ((t0 & 0xFFF0) == 0x500) {
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x20C)) = 0x800;
                            *(unsigned int *)((a4 + 0x210)) = 0x43;
                            t1 = 0x210;
                        }
                        return t1;
                    }
                    if (((*(int *)((a4 + 0xC8))) & 0x230) != 0) {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
                        *(unsigned int *)((a4 + 0x57C)) = 0x2;
                        *(unsigned int *)((a4 + 0x5A8)) = 0x0;
                        *(unsigned int *)((a4 + 0x5A4)) = 0x0;
                        *(unsigned int *)((a4 + 0x5A0)) = 0x0;
                        *(unsigned int *)((a4 + 0x580)) = 0x0;
                        return FUN_0c03afe8(a4, 0x0);
                    }
                    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
                    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
                        t0 = *(int *)((a4 + 0x4F0));
                        *(unsigned int *)((a4 + 0x560)) = (unsigned short)(*(short *)(((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0))) + 0x3C)));
                    }
                    return FUN_0c03a834(a4, 0x8000);
                }
                *(unsigned int *)((a4 + 0x20C)) = 0x200;
                *(unsigned int *)((a4 + 0x210)) = 0x7;
                *(unsigned int *)((a4 + 0x4C4)) = 0x1;
                *(unsigned int *)((a4 + 0x4C8)) = 0x4;
                return 0x4C8;
            }
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
            if ((int)(*(int *)((a4 + 0x304))) <= 0) {
                t0 = *(int *)((a4 + 0x4F0));
                *(unsigned int *)((a4 + 0x560)) = (unsigned short)(*(short *)(((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0))) + 0x40)));
            }
            return FUN_0c03a68e(a4, 0x8000, 0x1, a7);
        }
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            t0 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x560)) = (unsigned short)(*(short *)(((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0))) + 0x38)));
        }
        return FUN_0c03a66c(a4, 0x8000, 0x1, a7);
    }
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t0 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)((a4 + 0x560)) = (unsigned short)(*(short *)(((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0))) + 0x38)));
    }
    return FUN_0c03a66c(a4, 0x8000, 0x1, a7);
}

int FUN_0c012ca8(void)
{
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register float u13;
    register int t15;
    register int t29;
    int t30;
    register int t31;

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    t2 = 0x0;
    t3 = 0xC0F4274;
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        FUN_0c0c465c(t4);
        t2 = (t2 + 0x1);
        if ((unsigned int)t2 >= (unsigned int)0x5) {
            break;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.399999976f, 0.0f);
    FUN_0c0c465c(0x145B);
    FUN_0c0c465c(0x145C);
    nlPopMatrix(0x1);
    t11 = *(int *)0xC523158;
    u13 = (float)(t11 & 0x1F);
    if (((*(int *)0xC523158) & 32) != 0) {
        u13 = (31.0f - (float)(t11 & 0x1F));
    }
    t15 = 0x0;
    for (;;) {
        if (t15 == (*(int *)0xC1EF570)) {
            FUN_0c0c465c((*(int *)((((t15 << 2) + 0xC0F426C) + 0x0))));
            FUN_0c0c465c(0x145A);
            FUN_0c0c475c(0x1459, (u13 / 31.0f));
        } else {
            FUN_0c0c475c((*(int *)((((t15 << 2) + 0xC0F426C) + 0x0))), 0.5f);
            FUN_0c0c465c(0x1457);
        }
        FUN_0c0dcc70(0.0f, (-1.0f), 0.0f);
        t15 = (t15 + 0x1);
        if ((int)t15 >= (int)0x2) {
            break;
        }
    }
    t29 = nlPopMatrix(0x1);
    t30 = *(int *)0xC2498F4;
    t31 = *(int *)0xC1EF570;
    if ((0x3030 & t30) != 0) {
        if ((t30 & 0x2020) != 0) {
            if (t31 == 0) {
                *(unsigned int *)0xC1EF570 = 0x1;
            }
        } else {
            if (t31 != 0) {
                *(unsigned int *)0xC1EF570 = 0x0;
            }
        }
        return 0x2020;
    }
    if ((0xC & t30) != 0) {
        return FUN_0c010c40((t31 + 0x9));
    }
    if ((t30 & 0x2) != 0) {
        *(unsigned int *)0xC23A260 = 0x3;
    }
    return t29;
}

int FUN_0c05a2dc(int a4, int a5, int a6, float f4)
{
    int stk[22];
    register int t0;
    register int t1;
    register int t2;
    register int t72;
    register int t3;
    register int t7;
    register int t4;
    register int t5;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t31;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t35;
    register int t36;
    register int t37;
    register int t64;
    register int t65;
    register int t66;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((int)stk + 16)) = f4;
    t0 = (0x234 + a4);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t1 = (t1 + t2);
        if ((unsigned int)t0 >= (unsigned int)((0x234 + a4) + 0x10)) {
            break;
        }
    }
    t72 = 0xC;
    if ((int)t1 <= 0) {
    } else {
        t3 = FUN_0c0e262a((t1 << 1));
        t7 = t3;
        if ((int)t1 > 0) {
            t4 = t3;
            t5 = 0x0;
            for (;;) {
                t5 = (t5 + 0x1);
                *(unsigned short *)((t4 + 0x0)) = (*(short *)((a4 + 0x224)));
                t4 = (t4 + 0x2);
                if ((int)t5 >= (int)t1) {
                    break;
                }
            }
            t7 = 0x224;
        }
        t14 = t7;
        t15 = 0x0;
        t16 = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
        t17 = ((0x234 + a4) + 0x4);
        t18 = ((0x224 + a4) + 0x4);
        for (;;) {
            t19 = 0x0;
            for (;;) {
                if ((int)t19 >= (int)(*(int *)((t17 + 0x0)))) {
                    break;
                }
                t14 = t16;
                t15 = (*(int *)((t18 + 0x0)));
                t14 = (t14 << 1);
                *(unsigned short *)((t3 + t14)) = t15;
                for (;;) {
                    t14 = t1;
                    t15 = 0xC0E5F1C;
                    t14 = (FUN_0c0e5f1c(t16));
                    t16 = t14;
                    t14 = (t14 << 1);
                    t15 = (*(short *)((t3 + t14)));
                    t14 = 0x224;
                    if (t15 == (*(int *)((a4 + t14)))) {
                        break;
                    }
                }
                t19 = (a6 + 0x1);
            }
            t17 = (t17 + 0x4);
            t18 = (t18 + 0x4);
            if ((unsigned int)t17 >= (unsigned int)((0x234 + a4) + 0x10)) {
                break;
            }
        }
        t31 = a5;
        if ((int)t1 > (int)0x1) {
            *(volatile int *)((a4 + 0xF0));
            *(unsigned int *)(((int)stk + 12)) = (FUN_0c0e5dc0());
            t31 = (a5 - (((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1));
        } else {
            t35 = t17;
            t36 = t19;
            t37 = t18;
        }
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 44)) = (*(float *)((a4 + 0x30)));
        *(float *)(((int)stk + 48)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        *(float *)(((int)stk + 52)) = (*(float *)((a4 + 0x38)));
        *(unsigned int *)(((int)stk + 8)) = t3;
        if ((int)t1 > 0) {
            t43 = 0x0;
            t44 = t31;
            for (;;) {
                t45 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t45 + 0x2);
                t46 = *(short *)((((t45 + 0x2) - 2) + 0x0));
                FUN_0c0dc5a0();
                nlRotateAY(t44);
                nlRotateAX((*(int *)(((int)stk + 4))));
                FUN_0c0db4d0((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
                nlPopMatrix(0x1);
                if ((int)(short)t46 < (int)0x16) {
                    FUN_0c05561a(a4, (short)t46, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x10));
                } else {
                    FUN_0c0555ca(a4, (short)t46, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x10));
                }
                t43 = (t43 + 0x1);
                t44 = (t44 + (*(int *)(((int)stk + 12))));
                if ((int)t43 >= (int)t1) {
                    break;
                }
            }
        } else {
            t64 = t35;
            t65 = t36;
            t66 = t37;
        }
        t72 = (FUN_0c0e2a4c(t3, t64, t65, t66, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    }
    return t72;
}

int FUN_0c0829ec(void)
{
    int stk[15];
    register int t1;
    int t6;
    register float u35;
    register float u46;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((*(int *)((t1 + 0x3F4))) != 1) {
        *(unsigned int *)((t1 + 0x3F4)) = 0x0;
    }
    *(float *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x10) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = 0.0f;
    t6 = *(int *)0xC249838;
    if (((0x400 & t6) == 0) && ((0x200 & t6) == 0)) {
        if (((*(int *)0xC249838) & 0x10) != 0) {
            *(float *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = (-1.0f);
        }
        if (((*(int *)0xC249838) & 0x20) != 0) {
            *(float *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = 1.0f;
        }
        if (((*(int *)0xC249838) & 0x40) != 0) {
            *(unsigned short *)((t1 + 0x3CE)) = ((*(short *)((t1 + 0x3CE))) + 0x100);
        }
        if (((*(int *)0xC249838) & 0x80) != 0) {
            *(unsigned short *)((t1 + 0x3CE)) = ((*(short *)((t1 + 0x3CE))) - 0x100);
        }
    }
    if (((*(int *)0xC249838) & 0x400) != 0) {
        if (((*(int *)0xC249838) & 0x10) != 0) {
            if (((*(int *)0xC249838) & 0x2) != 0) {
                u35 = ((*(float *)((t1 + 0x258))) + 5.0f);
            } else {
                u35 = ((*(float *)((t1 + 0x258))) + 1.0f);
            }
            *(float *)((t1 + 0x258)) = u35;
        }
        if (((*(int *)0xC249838) & 0x20) != 0) {
            if (((*(int *)0xC249838) & 0x2) != 0) {
                u46 = ((*(float *)((t1 + 0x258))) - 5.0f);
            } else {
                u46 = ((*(float *)((t1 + 0x258))) - 1.0f);
            }
            *(float *)((t1 + 0x258)) = u46;
        }
        if (((*(int *)0xC249838) & 0x40) != 0) {
            *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (-1.0f);
        }
        if (((*(int *)0xC249838) & 0x80) != 0) {
            *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = 1.0f;
        }
    }
    if (((*(int *)0xC249838) & 0x200) != 0) {
        if ((0x10 & (*(int *)0xC249838)) != 0) {
            *(unsigned short *)((t1 + 0x3CC)) = ((*(short *)((t1 + 0x3CC))) + 0x100);
        }
        if ((0x20 & (*(int *)0xC249838)) != 0) {
            *(unsigned short *)((t1 + 0x3CC)) = ((*(short *)((t1 + 0x3CC))) - 0x100);
        }
        if ((0x40 & (*(int *)0xC249838)) != 0) {
            *(unsigned short *)((t1 + 0x3CE)) = ((*(short *)((t1 + 0x3CE))) + 0x100);
        }
        if ((0x80 & (*(int *)0xC249838)) != 0) {
            *(unsigned short *)((t1 + 0x3CE)) = ((*(short *)((t1 + 0x3CE))) - 0x100);
        }
    }
    if ((0x2 & (*(int *)0xC249838)) != 0) {
        *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x10) + 0x0))) * 5.0f);
        *(float *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0)) = ((*(float *)((((((int)stk + 4) + 0x10) + 0x8) + 0x0))) * 5.0f);
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    FUN_0c0a6688((((int)stk + 4) + 0x10), (0x3CC + t1), (((int)stk + 4) + 0x4));
    *(float *)((t1 + 0x254)) = ((*(float *)((t1 + 0x254))) + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(float *)((t1 + 0x25C)) = ((*(float *)((t1 + 0x25C))) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    return 0x25C;
}

int FUN_0c064fac(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t46;
    register int t4;
    register int t15;
    register int t24;
    register int t32;
    register int t36;

    t0 = *(int *)((a4 + 0x30));
    t1 = FUN_0c0685a4(a4, a5, a6, a7);
    t2 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t2 - 1);
    t46 = t1;
    if ((int)(t2 - 1) >= 0) {
    } else {
        t4 = FUN_0c0e19aa(0xC064876, 0x16D4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t4);
        nlPushMatrix(0x0);
        FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
        FUN_0c0dcca0(0xC0F9FB8);
        FUN_0c0db840((t4 + 0x30));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x3C)) = *(struct mv3 *)((t4 + 0x30)); }
        nlUnitMatrix();
        *(unsigned short *)((t4 + 0x6E)) = (*(short *)((t0 + 0x6E)));
        *(unsigned short *)((t4 + 0x6C)) = ((((*(int *)((a4 + 0x38))) << 8) << 2) - 2048);
        nlPopMatrix(0x1);
        t15 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t15 + 0x1);
        if ((int)(t15 + 0x1) >= (int)0x4) {
            FUN_0c0e19f2();
        }
        FUN_0c0cc3f8(0x52BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        t24 = *(int *)((a4 + 0x34));
        *(unsigned int *)((t4 + 0xBC)) = (*(int *)((t0 + 0xBC)));
        *(unsigned int *)(((0x200 + t4) + 0x0)) = (unsigned char)(*(signed char *)((t24 + 0x2)));
        if ((int)(*(short *)((t0 + 0xE8))) < (int)0x4) {
            t32 = 0x0;
            if ((*(signed char *)((t24 + 0x4))) != 0) {
                t32 = (*(int *)((t0 + 0x1EC)));
            }
            t36 = t32;
        } else {
            t36 = ((int)0x1 << (int)(*(int *)((t0 + 0xBC))));
        }
        *(unsigned int *)((t4 + 0x1EC)) = t36;
        *(unsigned int *)(((0x1E8 + t4) + 0x0)) = (unsigned char)(*(signed char *)((t24 + 0x3)));
        *(unsigned int *)(((0x1F4 + t4) + 0x0)) = (unsigned char)(*(signed char *)((t24 + 0x4)));
        *(unsigned int *)(((0x204 + t4) + 0x0)) = (unsigned char)(*(signed char *)((t24 + 0x5)));
        *(float *)((t4 + 0x1E4)) = 1.0f;
        *(unsigned int *)(((0x1FC + t4) + 0x0)) = (unsigned char)(*(signed char *)((t24 + 0x1)));
        *(unsigned int *)((t4 + 0x1F8)) = (unsigned char)(*(signed char *)((t24 + 0x0)));
        *(unsigned int *)(((0x22C + t4) + 0x0)) = (unsigned short)(*(short *)((t24 + 0x8)));
        *(float *)((t4 + 0x24C)) = (*(float *)((t24 + 0xC)));
        *(unsigned int *)((a4 + 0x3C)) = 0x8;
        t46 = 0x24C;
    }
    return t46;
}

int FUN_0c03b0e2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if ((int)(*(int *)((a4 + 0x57C))) > (int)0x2) {
        *(unsigned int *)((a4 + 0x57C)) = 0x2;
    }
    if ((((*(int *)((a4 + 0x20C))) == 4) && ((t0 = *(int *)((a4 + 0x500)), (int)t0 < (int)0x6) || (t1 = *(int *)((a4 + 0x500)), (int)t1 > (int)0xD))) || ((t2 = *(int *)((a4 + 0x2F0)), t2 != 0) && ((t3 = *(int *)((a4 + 0x500)), t3 != 1) && ((t4 = *(int *)((a4 + 0x57C)), t4 == 0) && (t5 = *(int *)((a4 + 0x304)), (int)t5 > 0))))) {
        FUN_0c038bd6(a4, a5);
        if ((*(int *)((a4 + 0x584))) == 1) {
            *(unsigned int *)((a4 + 0x584)) = 0x0;
        }
    } else {
        FUN_0c038ce0(a4, a5);
    }
    if ((int)(*(int *)((a4 + 0x584))) < (int)0x2) {
        t0 = *(int *)((a4 + 0x4F0));
        t1 = *(int *)(((0x584 + a4) + 0x0));
        t2 = *(int *)(((0x5A4 + a4) + 0x0));
        *(unsigned int *)(((((*(int *)((a4 + 0x5B4))) << 2) + (0x2C4 + a4)) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + ((((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0x84) + ((((t1 << 1) + t1) << 2) << 2)) + (((t2 << 1) + t2) << 2)))));
    } else {
        t0 = *(int *)((a4 + 0x4F0));
        t1 = *(int *)(((0x584 + a4) + 0x0));
        *(unsigned int *)(((((*(int *)((a4 + 0x5B4))) << 2) + (0x2C4 + a4)) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + (((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0xE4) + ((((t1 - 2) << 1) + (t1 - 2)) << 2)))));
    }
    *(unsigned int *)(((((*(int *)((a4 + 0x5B4))) << 2) + (0x2CC + a4)) + 0x0)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x200;
    *(unsigned int *)((a4 + 0x210)) = 0x7;
    *(unsigned int *)((a4 + 0x4C4)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0x4;
    t0 = *(int *)((a4 + 0x578));
    if (t0 == 6) {
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            if ((0x4 & (*(int *)((a4 + 0xC8)))) != 0) {
                return FUN_0c039e96(a4);
            }
            return 0xC8;
        }
        return 0x304;
    }
    return t0;
}

int FUN_0c0b2262(int a4)
{
    register int t0;

    nlUnitMatrix();
    t0 = *(int *)((a4 + 0x24C));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    if ((0x4 & (*(int *)0xC23ED88)) != 0) {
                        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFB);
                        *(unsigned int *)((a4 + 0x420)) = 0x10000;
                        t0 = *(int *)((a4 + 0x400));
                        *(unsigned int *)((a4 + 0x400)) = (t0 + 0x1);
                        *(unsigned int *)((a4 + 0x41C)) = (*(int *)((0xC202CA0 + ((t0 + 0x1) << 2))));
                        *(unsigned int *)((a4 + 0x24C)) = 0x2;
                        FUN_0c0a7ed4((*(int *)((a4 + 0x41C))), (*(int *)((a4 + 0x420))), (0x260 + a4), (0x3D4 + a4));
                    }
                }
            } else {
                FUN_0c0a7ed4((*(int *)((a4 + 0x41C))), (*(int *)((a4 + 0x420))), (0x260 + a4), (0x3D4 + a4));
                *(unsigned int *)((a4 + 0x420)) = ((*(int *)((a4 + 0x420))) + 0x444);
                if (((*(int *)0xC23ED88) & 8) != 0) {
                    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFF7);
                    *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
                }
            }
        } else {
            if ((0x4 & (*(int *)0xC23ED88)) != 0) {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFB);
                *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x41C)) = (*(int *)((0xC202CA0 + ((*(int *)((a4 + 0x400))) << 2))));
        *(unsigned int *)((a4 + 0x420)) = 0x10000;
        *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
        if ((0x4 & (*(int *)0xC23ED88)) != 0) {
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFB);
            *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
        }
    }
    *(unsigned short *)((a4 + 0x3CC)) = (*(short *)((a4 + 0x3D4)));
    *(unsigned short *)((a4 + 0x3CE)) = (*(short *)((a4 + 0x3D8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + a4)) = *(struct mv3 *)((0x260 + a4)); }
    nlRotateAX((-(*(short *)((a4 + 0x3CC)))));
    nlRotateAY((-(*(short *)((a4 + 0x3CE)))));
    FUN_0c0dcc70((-(*(float *)((a4 + 0x254)))), (-(*(float *)((a4 + 0x258)))), (-(*(float *)((a4 + 0x25C)))));
    nlGetMatrix((0x2AC + a4));
    nlInvertMatrix(0x0);
    nlGetMatrix((0x2EC + a4));
    return FUN_0c0dbda0((0x2AC + a4));
}

int FUN_0c22b13a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x1));
    if ((t2 == 3) && (t0 = *(signed char *)((a4 + 0x72)), t0 == 0)) {
        t0 = FUN_0c22a06c((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = FUN_0c22a512((*(int *)((a4 + 0x4))));
            if ((*(int *)((a4 + 0x64))) == t0) {
                *(unsigned short *)((a4 + 0x68)) = ((*(short *)((a4 + 0x68))) + 0x1);
                t3 = *(int *)((a4 + 0x38));
                if ((int)(*(short *)((a4 + 0x68))) > (int)((t3 << 2) + t3)) {
                    *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFE;
                }
            } else {
                *(unsigned short *)((a4 + 0x68)) = 0x0;
            }
            *(unsigned int *)((a4 + 0x64)) = t0;
            if ((*(short *)((a4 + 0x60))) != 0) {
                t0 = *(signed char *)((a4 + 0x6D));
                if ((t0 != 1) && (t0 != 2)) {
                } else {
                    ADXT_Stop();
                }
                if ((*(signed char *)((a4 + 0x6D))) != 0) {
                    *(unsigned short *)((a4 + 0x60)) = 0x0;
                    *(unsigned short *)((a4 + 0x68)) = 0x0;
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x68)) = 0x0;
        }
    } else {
        *(unsigned short *)((a4 + 0x68)) = 0x0;
    }
    if (((int)t2 >= (int)0x1) && (((int)t2 <= (int)0x3) && (t1 = *(signed char *)((a4 + 0x72)), t1 == 0))) {
        t0 = FUN_0c22a06c((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = 0x0;
            if ((*(int *)((a4 + 0x14))) != 0) {
                t1 = *(int *)((a4 + 0x14));
                t0 = (((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1));
            }
            if ((int)t0 < (int)0x40) {
                *(unsigned short *)((a4 + 0x6A)) = ((*(short *)((a4 + 0x6A))) + 0x1);
                if (t2 == 3) {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) <= (int)((t0 << 2) + t0)) {
                    } else {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                } else {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) > (int)(((t0 << 2) + t0) << 2)) {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                }
                t0 = 0x60;
                if ((*(short *)((a4 + 0x60))) != 0) {
                    t1 = *(signed char *)((a4 + 0x6D));
                    if (t1 == 1) {
                        ADXT_Stop();
                    } else {
                        if (t1 == 2) {
                            adxt_RcvrReplay(a4);
                        }
                    }
                    t1 = 0x6D;
                    if ((*(signed char *)((a4 + 0x6D))) != 0) {
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned short *)((a4 + 0x6A)) = 0x0;
                        t1 = 0x6A;
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x6A)) = 0x0;
            t0 = 0x6A;
        }
        t1 = t0;
    } else {
        *(unsigned short *)((a4 + 0x6A)) = 0x0;
        t1 = 0x6A;
    }
    t0 = t1;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t1 = ADXSTM_GetStat((*(int *)((a4 + 0x8))));
        t2 = t1;
        if (t1 == 4) {
            t1 = *(signed char *)((a4 + 0x6D));
            if (t1 == 1) {
                ADXT_Stop();
            } else {
                if (t1 == 2) {
                    adxt_RcvrReplay(a4);
                }
            }
            t1 = 0x6D;
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0487fc(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register float u21;
    register float u22;
    register float u17;
    register float u18;
    register float u14;
    register float u11;
    register int t35;
    register int t37;
    register int t45;
    register int t40;
    register int t54;

    *(volatile int *)((a4 + 0x48C));
    *(unsigned int *)(((int)stk + 32)) = 0x200;
    u21 = 0.0f;
    u22 = (-0.0599999987f);
    if ((*(int *)((a4 + 0x500))) == 2) {
    } else {
        u17 = 0.0f;
        u18 = 0.0599999987f;
        if ((*(int *)((a4 + 0x500))) == 3) {
        } else {
            u14 = (-0.0599999987f);
            if ((*(int *)((a4 + 0x500))) == 4) {
            } else {
                u11 = 0.0f;
                if ((*(int *)((a4 + 0x500))) == 5) {
                    u11 = 0.0599999987f;
                }
                u14 = u11;
            }
            u17 = u14;
            u18 = 0.0f;
        }
        u21 = u17;
        u22 = u18;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    *(float *)(((int)stk + 48)) = u21;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = u22;
    FUN_0c0db470((((int)stk + 12) + 0x24), (((int)stk + 12) + 0x18));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((((int)stk + 12) + 0x10) + 0x0)) = (*(float *)(((int)stk + 40)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 44)));
    nlPopMatrix(0x1);
    t35 = FUN_0c0350a4(a4, (*(int *)(((int)stk + 32))), 0x1, 0x0);
    if (t35 != 0) {
        t37 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
        FUN_0c03442c(a4, t37, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
        if (((int)(*(int *)((a4 + 0x54C))) > 0) && (t40 = *(int *)(((int)stk + 12)), t40 == 0)) {
            t45 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t45 + 0x1);
            if ((int)(t45 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
            } else {
                *(unsigned int *)((a4 + 0x500)) = 0x0;
                FUN_0c02a19a(a4);
            }
        } else {
            if (((*(int *)((a4 + 0x500))) != 2) && (t54 = *(int *)(((int)stk + 12)), t54 == 0)) {
                FUN_0c048610(a4);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x500)) = 0x0;
        FUN_0c02a19a(a4);
    }
    return (FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048A1C)));
}

int FUN_0c06d9fc(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x30));
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        thunk_kmSetCheapShadowMode(0x80);
        FUN_0c0e19f2();
    }
    if ((*(int *)0xC23ED50) != (*(int *)((t0 + 0x80)))) {
        return 0x80;
    }
    t1 = *(int *)((a4 + 0x54));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        u0 = FUN_0c0d9e90(((*(short *)((t0 + 0x62))) - (*(int *)(((t0 + 0x68) + 0x0)))));
        *(float *)((a4 + 0x48)) = ((((-u0) + 1.0f) * 13.0f) / 10.0f);
        if (((((-u0) + 1.0f) * 13.0f) / 10.0f) > 0.0f) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0((a4 + 0x34));
            nlRotateAY((*(short *)((a4 + 0x4E))));
            nlRotateAZ((*(short *)((a4 + 0x50))));
            nlScale((*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))), (*(float *)((a4 + 0x48))));
            u0 = *(float *)((a4 + 0x40));
            u1 = *(float *)((a4 + 0x44));
            u2 = *(float *)((a4 + 0x48));
            u3 = (u1 / 0.625f);
            if ((u2 / 10.0f) > (u1 / 0.625f)) {
                u3 = (u2 / 10.0f);
            }
            u4 = (u0 / 0.625f);
            if (u3 > (u0 / 0.625f)) {
                u0 = (u1 / 0.625f);
                if ((u2 / 10.0f) > (u1 / 0.625f)) {
                    u0 = (u2 / 10.0f);
                }
                u4 = u0;
            }
            FUN_0c0de000(u4);
            FUN_0c0df4c0(0x2);
            FUN_0c0c4684((*(short *)((a4 + 0x52))));
            return nlPopMatrix(0x1);
        }
        return 0x48;
    }
    if ((int)(*(int *)((t0 + 0x98))) <= (int)0x1) {
        return 0x98;
    }
    *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) + 0x1);
    u0 = FUN_0c0d9e90(((*(short *)((t0 + 0x62))) - (*(int *)(((t0 + 0x68) + 0x0)))));
    *(float *)((a4 + 0x48)) = ((((-u0) + 1.0f) * 13.0f) / 10.0f);
    if (((((-u0) + 1.0f) * 13.0f) / 10.0f) > 0.0f) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x34));
        nlRotateAY((*(short *)((a4 + 0x4E))));
        nlRotateAZ((*(short *)((a4 + 0x50))));
        nlScale((*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))), (*(float *)((a4 + 0x48))));
        u0 = *(float *)((a4 + 0x40));
        u1 = *(float *)((a4 + 0x44));
        u2 = *(float *)((a4 + 0x48));
        u3 = (u1 / 0.625f);
        if ((u2 / 10.0f) > (u1 / 0.625f)) {
            u3 = (u2 / 10.0f);
        }
        u4 = (u0 / 0.625f);
        if (u3 > (u0 / 0.625f)) {
            u0 = (u1 / 0.625f);
            if ((u2 / 10.0f) > (u1 / 0.625f)) {
                u0 = (u2 / 10.0f);
            }
            u4 = u0;
        }
        FUN_0c0de000(u4);
        FUN_0c0df4c0(0x2);
        FUN_0c0c4684((*(short *)((a4 + 0x52))));
        return nlPopMatrix(0x1);
    }
    return 0x48;
}
