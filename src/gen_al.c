/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c0c(void);
int FUN_0c010c14(void);
int FUN_0c010c40(int);
int FUN_0c010cb6(void);
int FUN_0c0112b0(int);
int FUN_0c012570(int);
int FUN_0c0146f0(int, int, int, int);
int FUN_0c015436(int, int);
int FUN_0c0154a4(void);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0159a2(int, int);
int FUN_0c016280(void);
int FUN_0c01e720(int);
int FUN_0c01e770(int);
int FUN_0c01e79a(int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037c66(int);
int FUN_0c037e44(int);
int FUN_0c037ee8(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c086bda(int, float);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a6928(int, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
extern int FUN_0c0be6ee();
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cec9a(int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0dcd10(int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dced0(int, int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
extern int FUN_0c0e19f2();
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0e61d4();
int FUN_0c0e631c(int, int, int);
extern float _builtin_sqrtf(float);
int buStat(int);
int FUN_0c09da24(int a4, int a5, int a6, int a7);
int FUN_0c014c4c(void);
int FUN_0c088fcc(int a4);
int FUN_0c09c02a(int a4);
int FUN_0c01e32e(int a4, int a5);
int FUN_0c03840e(int a4, int a5, int a6, int a7);
int FUN_0c02c6ee(int a4, float f4);

int FUN_0c09da24(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t11;
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t127;
    float u130;
    float u131;
    float u74;
    float u97;
    float u109;
    float u110;
    float u116;
    int t165;
    float u168;
    float u169;
    float u148;
    float u150;
    float u153;
    int t4;
    int t5;
    float u8;
    int t40;
    float u43;
    float u44;
    float u45;
    float u46;
    int t81;
    float u84;
    float u85;
    int t121;
    float u124;
    float u125;
    int t159;
    float u162;
    float u163;
    int stk[19];

    t1 = *(int *)((a4 + 0x8));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    if (a6 != 0) {
        t3 = 0xC247CAC;
        t6 = a4;
        t7 = 0x0;
        for (;;) {
            if ((int)t7 >= (int)(*(int *)((t1 + 0x2C)))) {
                break;
            }
            t6 = (*(int *)((a4 + 0x0)));
            t11 = (t6 * 0x2C);
            t6 = (t6 + 0x1);
            *(unsigned int *)((a4 + 0x0)) = t6;
            t5 = (*(int *)((t1 + 0x38)));
            t6 = t11;
            t4 = (*(int *)((a4 + 0x0)));
            t6 = (t6 + (*(int *)((a4 + 0xC))));
            if ((int)t4 >= (int)t5) {
                *(unsigned int *)((a4 + 0x0)) = 0x0;
            }
            t5 = (*(int *)((a4 + 0x4)));
            t5 = (t5 + 0x1);
            *(unsigned int *)((a4 + 0x4)) = t5;
            t5 = (t5 - 1);
            t3 = (*(int *)((t1 + 0x30)));
            t5 = (t5 << 2);
            *(unsigned int *)((t6 + 0x4)) = (*(int *)((t5 + t3)));
            t4 = (*(int *)((a4 + 0x4)));
            t5 = (*(int *)((t1 + 0x3C)));
            t3 = 0x24;
            if ((int)t4 >= (int)t5) {
                *(unsigned int *)((a4 + 0x4)) = 0x0;
            }
            *(float *)((t6 + t3)) = 0.0f;
            *(unsigned int *)((t6 + 0x0)) = 0x1;
            t3 = 0x10;
            t5 = (*(int *)0xC249730);
            t7 = (t7 + 0x1);
            t5 = (t5 + 0x1);
            *(unsigned int *)0xC249730 = t5;
            t5 = (t5 - 1);
            t5 = (t5 * (*(int *)((t1 + 0x8))));
            *(unsigned int *)((t6 + 0x20)) = t5;
            u8 = (*(float *)((t1 + t3)));
            t3 = 0x28;
            *(float *)((t6 + t3)) = u8;
        }
    }
    t37 = FUN_0c0dc510(0x0);
    t38 = *(int *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t39 = t37;
    t41 = a4;
    t42 = t38;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)((t1 + 0x38)))) {
            t40 = 0x14;
            t40 = (t40 + t1);
            t39 = 0x28;
            u44 = (*(float *)((t40 + 0x0)));
            u43 = (*(float *)((t42 + t39)));
            u43 = (u43 + u44);
            *(float *)((t42 + t39)) = u43;
            if ((*(int *)((t42 + 0x0))) != 0) {
                *(unsigned int *)(((int)stk + 12)) = 0x1;
            }
            t40 = ((*(int *)(((int)stk + 4))) * 0x3723);
            *(unsigned int *)(((int)stk + 8)) = t40;
            t39 = (*(int *)((t42 + 0x0)));
            t127 = t40;
            u130 = u43;
            u131 = u44;
            if (t39 != 1) {
            } else {
                t39 = 0x24;
                t41 = (*(int *)((t42 + 0x4)));
                *(unsigned int *)((t42 + 0x20)) = ((*(int *)((t42 + 0x20))) + (*(int *)((t1 + 0x4))));
                u44 = (*(float *)((t1 + 0x0)));
                u43 = (*(float *)((t42 + t39)));
                u43 = (u43 + u44);
                *(float *)((t42 + t39)) = u43;
                t39 = 0x8;
                u44 = (*(float *)((t41 + t39)));
                t39 = 0x24;
                u43 = (*(float *)((t42 + t39)));
                if (!(u44 > u43)) {
                    t41 = (t41 + 0x18);
                    if ((int)(*(int *)((t41 + 0x0))) < 0) {
                        t41 = (*(int *)((t42 + 0x4)));
                        t39 = 0x4;
                        u43 = (*(float *)((t1 + 0x0)));
                        u44 = (*(float *)((t41 + t39)));
                        t39 = 0x3E4;
                        u43 = (u43 * u44);
                        *(float *)0xC249738 = u43;
                        t39 = (FUN_0c0dbda0((((((*(int *)((t41 + 0x0))) << 2) << 2) << 2) + (*(int *)((a5 + t39))))));
                        t39 = (FUN_0c0dc890((*(int *)((t42 + 0x20)))));
                        t39 = 0x4;
                        u44 = (*(float *)((t41 + t39)));
                        t39 = 0x24;
                        u74 = *(float *)((t42 + t39));
                        t39 = 0xC;
                        t39 = (FUN_0c0dcc70((*(float *)((t1 + t39))), (u74 * u44), 0.0f));
                        t39 = (FUN_0c0db840((t42 + 0x8)));
                        t39 = (FUN_0c0db4d0(0xC249734, (t42 + 0x14)));
                        t39 = 0x24;
                        *(unsigned int *)((t42 + 0x0)) = 0x3;
                        *(float *)((t42 + t39)) = 1.0f;
                    } else {
                        t40 = 0x8;
                        u43 = (*(float *)((t42 + t39)));
                        t40 = (t40 + t41);
                        u44 = (*(float *)((t40 + 0x0)));
                        u43 = (u43 - u44);
                        *(float *)((t42 + t39)) = u43;
                        t81 = t40;
                        u84 = u43;
                        u85 = u44;
                    }
                    *(unsigned int *)((t42 + 0x4)) = t41;
                    u43 = u84;
                    u44 = u85;
                    t40 = t81;
                }
                t39 = (*(int *)((t42 + 0x0)));
                if (t39 != 2) {
                    t39 = 0x3E4;
                    t39 = (FUN_0c0dbda0((((((*(int *)((t41 + 0x0))) << 2) << 2) << 2) + (*(int *)((a5 + t39))))));
                    t39 = (FUN_0c0dc890((*(int *)((t42 + 0x20)))));
                    t39 = 0x4;
                    u44 = (*(float *)((t41 + t39)));
                    t39 = 0x24;
                    u97 = *(float *)((t42 + t39));
                    t39 = 0xC;
                    t39 = (FUN_0c0dcc70((*(float *)((t1 + t39))), (u97 * u44), 0.0f));
                    t39 = (FUN_0c0db840((((int)stk + 4) + 0xC)));
                    t39 = (FUN_0c0dccc0());
                    t39 = (FUN_0c0dcca0((((int)stk + 4) + 0xC)));
                    t39 = 0x3CE;
                    t39 = (FUN_0c0dc890((*(short *)((t2 + t39)))));
                    t39 = 0x3CC;
                    t39 = (FUN_0c0dc6e0((*(short *)((t2 + t39)))));
                    t39 = (FUN_0c0dc950((*(int *)(((int)stk + 8)))));
                    t39 = 0x20;
                    u109 = *(float *)((t1 + t39));
                    t39 = 0x1C;
                    u110 = *(float *)((t1 + t39));
                    t39 = 0x18;
                    t39 = (FUN_0c0848bc((*(float *)((t1 + t39))), u110, u109));
                    t39 = 0x278;
                    u44 = (*(float *)((a5 + t39)));
                    t39 = 0x28;
                    u46 = (*(float *)((t42 + t39)));
                    u46 = (u46 * u44);
                    t39 = (FUN_0c0dcb80(u46, u46, 1.0f));
                    u116 = u46;
                    if (1.0f > u46) {
                        u116 = 1.0f;
                    }
                    t39 = (FUN_0c0de000(u116));
                    t39 = (FUN_0c0c47ae((*(int *)((t1 + 0x28)))));
                } else {
                    t121 = t40;
                    u124 = u43;
                    u125 = u44;
                }
                t127 = t121;
                u130 = u124;
                u131 = u125;
            }
            u43 = u130;
            u44 = u131;
            t39 = (*(int *)((t42 + 0x0)));
            t40 = t127;
            t165 = t40;
            u168 = u43;
            u169 = u44;
            if (t39 == 3) {
                t39 = 0x24;
                t40 = t39;
                t40 = (t40 + t1);
                u43 = (*(float *)((t42 + t39)));
                u44 = (*(float *)((t40 + 0x0)));
                u43 = (u43 - u44);
                u44 = 0.0f;
                u46 = u43;
                *(float *)((t42 + t39)) = u43;
                if (u46 > u44) {
                    t39 = 0x278;
                    u43 = (*(float *)((a5 + t39)));
                    t39 = 0x28;
                    u45 = (*(float *)((t42 + t39)));
                    u45 = (u45 * u43);
                    t39 = (FUN_0c0dccc0());
                    t39 = (FUN_0c0dcca0((t42 + 0x8)));
                    t39 = 0x3CE;
                    t39 = (FUN_0c0dc890((*(short *)((t2 + t39)))));
                    t39 = 0x3CC;
                    t39 = (FUN_0c0dc6e0((*(short *)((t2 + t39)))));
                    t39 = (FUN_0c0dc950((*(int *)(((int)stk + 8)))));
                    t39 = 0x20;
                    u44 = (*(float *)((t1 + t39)));
                    t39 = 0x1C;
                    u148 = (u46 * u44);
                    u44 = (*(float *)((t1 + t39)));
                    t39 = 0x18;
                    u150 = (u46 * u44);
                    u44 = (*(float *)((t1 + t39)));
                    t39 = (FUN_0c0848bc((u46 * u44), u150, u148));
                    t39 = (FUN_0c0dcb80(u45, u45, 1.0f));
                    u153 = u45;
                    if (1.0f > u45) {
                        u153 = 1.0f;
                    }
                    t39 = (FUN_0c0de000(u153));
                    t39 = (FUN_0c0c47ae((*(int *)((t1 + 0x28)))));
                    t39 = (FUN_0c0dcd10((t42 + 0x8), (t42 + 0x14)));
                } else {
                    *(unsigned int *)((t42 + 0x0)) = 0x0;
                    t159 = t40;
                    u162 = u43;
                    u163 = u44;
                }
                t165 = t159;
                u168 = u162;
                u169 = u163;
            }
            u43 = u168;
            u44 = u169;
            t40 = t165;
            t42 = (t42 + 0x2C);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            continue;
        }
        break;
    }
    FUN_0c0dc4c0(0x1);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    return (*(int *)(((int)stk + 12)));
}

int FUN_0c014c4c(void)
{
    int t16;
    int t17;
    int t18;
    int t33;
    int t34;
    int t41;
    int t42;
    int t50;
    int t51;
    int t102;
    int t131;
    int t143;
    int t56;
    int stk[14];

    FUN_0c0dc510(0x0);
    FUN_0c0dcca0(0xC0F409C);
    FUN_0c0c465c(0x1436);
    FUN_0c0c465c(0x1440);
    FUN_0c0c465c(0x13B0);
    *(unsigned int *)0xC23EAC8 = (FUN_0c0146f0((*(int *)0xC23EAC8), 0xC23EB5B, (((int)stk + 8) + 0x4), 0x0));
    FUN_0c0dc510(0x0);
    FUN_0c0dc510(0x0);
    FUN_0c0dcca0(0xC0F461C);
    FUN_0c0c475c(0x1427, (*(float *)0xC23EB00));
    FUN_0c0c475c(0x1425, (*(float *)0xC23EB00));
    FUN_0c0dc4c0(0x1);
    FUN_0c0dcca0(0xC0F45C8);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 8) + 0x4) + 0x3);
    t16 = 0xC014D1C;
    t17 = (((int)stk + 8) + 0x4);
    t18 = ((((int)stk + 8) + 0x4) + 0x3);
    for (;;) {
        if ((unsigned int)t17 >= (unsigned int)(*(int *)(((int)stk + 8)))) {
            break;
        }
        t18 = (*(signed char *)((t17 + 0x0)));
        t17 = (t17 + 0x1);
        if ((int)t18 >= 0) {
            t16 = 0xC0F4568;
            t16 = (FUN_0c0c465c((*(int *)(((t18 << 2) + t16)))));
            t16 = t18;
            t18 = (*(signed char *)((0xC23EB5B + t16)));
            t16 = (FUN_0c0c465c(0x1417));
            t16 = 0xC0F4540;
            t16 = (FUN_0c0c465c((*(int *)(((t18 << 2) + t16)))));
        }
        t16 = (FUN_0c0dcc70(0.0f, -0.699999988f, 0.0f));
    }
    FUN_0c0dc4c0(0x1);
    t33 = *(int *)0xC23EAEC;
    t34 = *(int *)0xC23EB20;
    if (t33 != 0) {
        if (t33 != 1) {
            if (t33 != 2) {
                if (t33 == 3) {
                    FUN_0c0159a2(t34, 0xC1EF454);
                    if ((*(int *)0xC23EB1C) == 9) {
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                    }
                } else {
                    if (t33 == 4) {
                        t41 = *(signed char *)0xC23EBD7;
                        *(unsigned int *)(((int)stk + 8)) = t41;
                        t42 = FUN_0c012570(t41);
                        FUN_0c0112b0((signed char)t42);
                        *(unsigned char *)0xC23EB81 = (FUN_0c016280());
                        FUN_0c0e631c(((*(int *)0xC23EB0C) + 0xD801), 0xC23EB5B, 0xE0);
                        FUN_0c015436((*(int *)0xC23EB20), 0x0);
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                    } else {
                        if (t33 == 5) {
                            t50 = *(int *)0xC23EB1C;
                            if (t50 != 3) {
                                t51 = 0xC0F4604;
                                if (t50 != 10) {
                                    t51 = 0xC0F45F8;
                                }
                                t56 = t51;
                            } else {
                                FUN_0c0dcb80(0.379999995f, 0.379999995f, 0.379999995f);
                                t56 = 0xC0F4610;
                            }
                            FUN_0c0dcca0(t56);
                            FUN_0c010c14();
                            FUN_0c0156ea((*(int *)0xC23EB20), (*(int *)0xC23EB0C), 0xDC00, 0x0);
                            if ((*(int *)0xC23EB1C) == 9) {
                                FUN_0c0e2a4c((*(int *)0xC23EB08), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24));
                                FUN_0c0154a4();
                                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                            }
                        } else {
                            if (t33 == 6) {
                                *(unsigned int *)0xC23A260 = 0x3;
                            }
                        }
                    }
                }
            } else {
                FUN_0c0dc510(0x0);
                FUN_0c0dcca0(0xC0F4628);
                FUN_0c0c465c(0x1441);
                FUN_0c0dc4c0(0x1);
                FUN_0c0dcb80(0.444999993f, 0.444999993f, 0.444999993f);
                FUN_0c0dcca0(0xC0F45D4);
                t102 = FUN_0c010cb6();
                if (t102 != 0) {
                    if (t102 != 1) {
                    } else {
                        *(unsigned int *)0xC23A260 = 0x3;
                    }
                } else {
                    FUN_0c015436((*(int *)0xC23EB20), 0x0);
                    FUN_0c010c0c();
                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                }
                if (((*(int *)0xC2498F4) & 2) != 0) {
                    FUN_0c010c40(0xD);
                    *(unsigned int *)0xC23EAEC = 0x3;
                }
                if ((*(int *)0xC52314C) == 0) {
                } else {
                    *(unsigned int *)0xC23A260 = 0x3;
                }
            }
        } else {
            t131 = buStat(t34);
            if (t131 != 0) {
            } else {
                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
            }
        }
    } else {
        if ((*(int *)0xC52314C) != 0) {
            t143 = *(int *)0xC23EB38;
            *(unsigned int *)0xC23EB20 = t143;
            FUN_0c0cec9a(t143, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
            *(unsigned int *)0xC52314C = 0x0;
            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
        } else {
            *(unsigned int *)0xC23EAEC = 0x2;
        }
    }
    return (FUN_0c0dc4c0(0x1));
}

int FUN_0c088fcc(int a4)
{
    int t1;
    int t2;
    int t8;
    int t9;
    int t10;
    float u11;
    int t12;
    int t13;
    int t14;
    int t16;
    float u17;
    int t25;
    int t26;
    int t27;
    int t28;
    float t29;
    int t30;
    int t31;
    int t32;
    float t33;
    int t34;
    int t36;
    int t38;
    int t41;
    int t45;
    int t47;
    float u56;
    float t58;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t98;
    int t102;
    int t110;
    int t4;
    int t5;
    int t120;
    float u72;
    float u74;
    float u65;
    int t114;
    int stk[40];

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t2 = *(int *)((a4 + 0x120));
    *(unsigned int *)(((int)stk + 28)) = ((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268);
    *(unsigned int *)(((int)stk + 40)) = ((a4 + 0x58) + 0x28);
    *(unsigned int *)(((int)stk + 48)) = ((0x80 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 36)) = ((0xA8 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 32)) = (0xF8 + a4);
    *(unsigned int *)(((int)stk + 12)) = ((0xF8 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 44)) = 0xA;
    if (((*(int *)((a4 + 0x128))) == 0) && (t4 = *(int *)((a4 + 0x120)), t5 = *(int *)((0xC247030 + (t4 << 2))), t5 == 8)) {
        t120 = t5;
    } else {
        FUN_0c0dc510(0x0);
        FUN_0c0de3c0(0x4, 0x1);
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 12) + 0x34);
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x34) + 0x18);
        t8 = (a4 + 0x58);
        for (;;) {
            *(unsigned int *)(((int)stk + 52)) = (((int)stk + 12) + 0x34);
            t8 = (t8 - 4);
            *(unsigned int *)(((int)stk + 60)) = 0xC10A984;
            t9 = *(int *)(((int)stk + 32));
            t10 = *(int *)((t8 + 0x0));
            *(unsigned int *)(((int)stk + 32)) = (t9 - 4);
            u11 = *(float *)(((t9 - 4) + 0x0));
            *(float *)(((int)stk + 8)) = u11;
            t12 = *(int *)(((int)stk + 36));
            *(unsigned int *)(((int)stk + 36)) = (t12 - 4);
            t13 = FUN_0c0da2e0();
            t14 = *(int *)(((t12 - 4) + 0x0));
            *(unsigned int *)(((t12 - 4) + 0x0)) = (t14 + ((t13 & 0x1FF) + 0x400));
            t16 = *(int *)(((int)stk + 12));
            u17 = 0.899999976f;
            u17 = u17 + 0.099999994f * (FUN_0c0da410((t14 + ((t13 & 0x1FF) + 0x400))));
            *(unsigned int *)(((int)stk + 12)) = (t16 - 4);
            *(unsigned int *)(((int)stk + 24)) = ((short)((unsigned int)(*(int *)(((t16 - 4) + 0x0))) >> 16) + 0x1B8);
            *(unsigned int *)(((int)stk + 56)) = 0x4;
            *(unsigned int *)(((t16 - 4) + 0x0)) = ((((FUN_0c0da2e0()) + ((*(int *)(((t16 - 4) + 0x0))))) + 0x4000) & 0x1FFFFF);
            for (;;) {
                *(unsigned int *)(((int)stk + 52)) = ((*(int *)(((int)stk + 52))) + 0xC);
                *(unsigned int *)(((int)stk + 60)) = ((*(int *)(((int)stk + 60))) + 0xC);
                FUN_0c0e61d4();
                t25 = *(int *)(((int)stk + 56));
                *(unsigned int *)(((int)stk + 56)) = (t25 - 1);
                if ((t25 - 1) == 0) {
                    break;
                }
            }
            t26 = *(int *)(((int)stk + 40));
            *(unsigned int *)(((int)stk + 40)) = (t26 - 4);
            t27 = FUN_0c0da2e0();
            t28 = *(int *)(((t26 - 4) + 0x0));
            *(unsigned int *)(((t26 - 4) + 0x0)) = (t28 + ((t27 & 0xFFF) + 0x200));
            t29 = FUN_0c0da410((t28 + ((t27 & 0xFFF) + 0x200)));
            t30 = *(int *)(((int)stk + 48));
            *(unsigned int *)(((int)stk + 48)) = (t30 - 4);
            t31 = FUN_0c0da2e0();
            t32 = *(int *)(((t30 - 4) + 0x0));
            *(unsigned int *)(((t30 - 4) + 0x0)) = (t32 + ((unsigned char)t31 + 0x100));
            t33 = FUN_0c0da410((t32 + ((unsigned char)t31 + 0x100)));
            t34 = *(int *)(((int)stk + 16));
            *(float *)((t34 + 0x0)) = ((*(float *)((t34 + 0x0))) + (t33 * 1.0f));
            t36 = *(int *)(((int)stk + 20));
            *(float *)((t36 + 0x0)) = ((*(float *)((t36 + 0x0))) + (t33 * 1.0f));
            t38 = *(int *)(((int)stk + 16));
            *(float *)((t38 + 0x4)) = ((*(float *)((t38 + 0x4))) * (((t29 * 0.099999994f) + 0.899999976f)));
            t41 = *(int *)(((int)stk + 20));
            *(float *)((t41 + 0x4)) = ((*(float *)((t41 + 0x4))) * ((0.899999976f - (t29 * 0.099999994f))));
            t45 = ((int (*)(int, int, float))(FUN_0c0be6ee))((*(int *)(((int)stk + 24))), (((int)stk + 12) + 0x34), (t33 * 1.0f));
            FUN_0c0dbda0((0x2AC + t1));
            t47 = *(int *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 28)) = (t47 + 0xC);
            FUN_0c0dcca0(((t47 + 0xC) - 12));
            FUN_0c0dc890((*(short *)((t1 + 0x3CE))));
            FUN_0c0dc6e0((*(short *)((t1 + 0x3CC))));
            if ((int)t10 < (int)0x2AAA) {
                u56 = ((FUN_0c0da410((t10 << 1))) * 1.79999995f);
                *(unsigned int *)((t8 + 0x0)) = (t10 + 0x111);
                u72 = (((u11 * u17)) * u56);
                u74 = (u11 * u17);
            } else {
                if ((int)(*(int *)((a4 + 0x124))) < (int)0xA) {
                    t58 = FUN_0c0da410(t10);
                    *(unsigned int *)((t8 + 0x0)) = (t10 - 0x666);
                    u65 = (((u11 * u17)) * t58);
                } else {
                    *(unsigned int *)((t8 + 0x0)) = 0x3FFF;
                    u65 = (u11 * u17);
                }
                u72 = (u11 * u17);
                u74 = u65;
            }
            FUN_0c0dcb80(u74, u72, u74);
            FUN_0c0de000((u74 + (1.0f + 1.0f)));
            FUN_0c0c475c((*(int *)(((int)stk + 24))), 0.98999995f);
            t80 = *(int *)(((int)stk + 44));
            *(unsigned int *)(((int)stk + 44)) = (t80 - 1);
            if ((t80 - 1) != 0) continue;
            break;
        }
        t81 = 0x1B8;
        t82 = 0x20;
        for (;;) {
            t83 = t81;
            t81 = (t81 + 0x1);
            t84 = ((int (*)(int, int))(FUN_0c0be6ee))(t83, 0xC10A984);
            t82 = (t82 - 0x1);
            if (t82 == 0) {
                break;
            }
        }
        FUN_0c0de3c0(0x4, 0x5);
        FUN_0c0dc4c0(0x1);
        if ((*(int *)((((*(int *)((a4 + 0x120))) << 2) + 0xC247030))) == 0) {
            FUN_0c0e19f2();
        }
        if ((*(int *)((a4 + 0x128))) != 0) {
            t98 = *(int *)((a4 + 0x124));
            *(unsigned int *)((a4 + 0x124)) = (t98 - 1);
            t102 = 0x124;
            if ((int)(t98 - 1) <= 0) {
                *(unsigned int *)(((*(int *)((((*(int *)((a4 + 0x120))) << 2) + 0xC246FF0))) + 0x380)) = 0x0;
                t102 = (FUN_0c0e19f2());
            }
            t114 = t102;
        } else {
            t110 = 0x304;
            if ((int)(*(int *)(((*(int *)((((*(int *)((a4 + 0x120))) << 2) + 0xC246FF0))) + 0x304))) <= 0) {
                *(unsigned int *)((a4 + 0x128)) = 0x1;
                *(unsigned int *)((a4 + 0x124)) = 0x3C;
                t110 = 0x124;
            }
            t114 = t110;
        }
        t120 = t114;
    }
    return t120;
}

int FUN_0c09c02a(int a4)
{
    int t2;
    float u5;
    int t8;
    int t16;
    int t17;
    int t30;
    int t31;
    int t44;
    int t54;
    int t60;
    int t67;
    int t68;
    int t71;
    int t69;
    int t74;
    int t72;
    int t75;
    int t76;
    int t77;
    int t81;
    int t93;
    int stk[24];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    u5 = 1.0f;
    if (((*(int *)0xC23A258) & 1) != 0) {
        u5 = 0.5f;
    }
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t8 = ((int (*)(int))(FUN_0c0cc3f8))(0x524A9);
        FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x44))) == 0) {
        t16 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t16 - 1);
        if ((int)(t16 - 1) < 0) {
            t17 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0x524A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0e19f2();
        }
    }
    t30 = *(int *)((((*(int *)((a4 + 0x48))) << 2) + 0xC247030));
    if ((t30 != 4) && (t30 != 2)) {
        t31 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0x524A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0e19f2();
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dbda0((*(int *)(((*(int *)(((int)stk + 4))) + 0x3E4))));
    FUN_0c0db840((((int)stk + 4) + 0x24));
    FUN_0c0dccc0();
    FUN_0c0dcca0((((int)stk + 4) + 0x24));
    t44 = *(int *)0xC23A258;
    FUN_0c0dc890(((((t44 << 1) + t44) << 8) << 1));
    FUN_0c0dcca0(0xC200C48);
    FUN_0c0db840((((int)stk + 4) + 0x24));
    FUN_0c0dced0((((int)stk + 4) + 0x24), (a4 + 0x4C));
    FUN_0c0dce80((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), 0.129999995f);
    FUN_0c0dcd10((a4 + 0x4C), (((int)stk + 4) + 0xC));
    FUN_0c0dccc0();
    FUN_0c0dcca0((a4 + 0x4C));
    FUN_0c0848bc((u5 * 0.839999974f), (u5 * 0.869999945f), (u5 * 1.57999992f));
    t54 = 0x2;
    for (;;) {
        FUN_0c0dc510(0x0);
        FUN_0c0dc890((*(short *)((t2 + 0x3CE))));
        FUN_0c0dc6e0((*(short *)((t2 + 0x3CC))));
        t60 = FUN_0c0da2e0();
        FUN_0c0dc950((t60 << 1));
        FUN_0c0dcb80(4.76999998f, 4.76999998f, 1.0f);
        FUN_0c0de000(4.76999998f);
        FUN_0c0c47ae(0x291);
        FUN_0c0dc4c0(0x1);
        t54 = (t54 - 0x1);
        if (t54 == 0) {
            break;
        }
    }
    FUN_0c0848bc((u5 * 0.529999971f), (u5 * 0.649999976f), (u5 * 2.47999978f));
    *(unsigned int *)(((int)stk + 4)) = 0xD;
    *(unsigned int *)(((int)stk + 8)) = 0x40;
    t67 = 0x47AE927;
    for (;;) {
        t68 = *(int *)(((int)stk + 4));
        t71 = (t67 & 0x1);
        t69 = (int)(((unsigned int)t71 >> 1) | ((unsigned int)t71 << 31));
        t74 = ((((t67 >> 1) | t69) ^ t68) & 0x1);
        t72 = (int)(((unsigned int)t74 >> 1) | ((unsigned int)t74 << 31));
        t75 = ((((((t67 >> 1) | t69) ^ t68) >> 1) | t72) ^ (((((t67 >> 1) | t69) ^ t68) | t68) * 0x22AC8EE1));
        t76 = (((t67 >> 1) | t69) ^ t68);
        t77 = ((((((t67 >> 1) | t69) ^ t68) | t68) * 0x22AC8EE1) | ((((((t67 >> 1) | t69) ^ t68) >> 1) | t72) ^ (((((t67 >> 1) | t69) ^ t68) | t68) * 0x22AC8EE1)));
        t67 = ((((((t67 >> 1) | t69) ^ t68) >> 1) | t72) ^ (((((t67 >> 1) | t69) ^ t68) | t68) * 0x22AC8EE1));
        t67 = (t67 >> 1);
        t81 = (t75 & 0x1);
        t67 = (t67 | ((int)(((unsigned int)t81 >> 1) | ((unsigned int)t81 << 31))));
        t67 = (t67 ^ (t77 * 0x22AC8EE1));
        *(unsigned int *)(((int)stk + 4)) = (((t77 * 0x22AC8EE1) | t67) * 0x22AC8EE1);
        *(unsigned int *)(((int)stk + 12)) = t67;
        FUN_0c0dc510(0x0);
        FUN_0c0dc6e0(t75);
        FUN_0c0dc950((*(int *)(((int)stk + 12))));
        FUN_0c0dc890((unsigned short)(((*(int *)0xC23A258) * 0x320) + t76));
        FUN_0c0dcca0(0xC200C54);
        FUN_0c0dcb80(0.0199999996f, 0.0199999996f, 0.0199999996f);
        FUN_0c0de000(100.0f);
        FUN_0c0c47ae(0x3C9);
        FUN_0c0dc4c0(0x1);
        t93 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t93 - 1);
        if ((t93 - 1) == 0) {
            break;
        }
    }
    FUN_0c0dc4c0(0x1);
    return (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12)));
}

int FUN_0c01e32e(int a4, int a5)
{
    int t1;
    int t7;
    int t8;
    int t11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    int t30;
    int t31;
    int t34;
    int t41;
    int t43;
    int t44;
    int t61;
    int t122;
    int t114;
    int t67;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    float u78;
    float u79;
    float u80;
    float u81;
    float u82;
    int t94;
    int t96;
    int t98;
    int t99;
    int t141;
    int t130;
    int t53;
    int t48;
    int t36;
    int t106;
    int t102;
    int stk[36];

    t1 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, ((int)stk + 24), a5);
    if (t1 == 0) {
        FUN_0c01e720(a4);
        t141 = 0x0;
    } else {
        *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 24)));
        if ((*(int *)(((int)stk + 24))) != 4) {
            t7 = ((int (*)(void))(FUN_0c0e61d4))();
            t8 = ((int (*)(void))(FUN_0c0e61d4))();
            *(unsigned int *)((a4 + 0xB0)) = (*(int *)(((int)stk + 24)));
            if ((int)(*(int *)(((int)stk + 24))) >= (int)0x15) {
                t11 = ((int (*)(void))(FUN_0c0e61d4))();
                t53 = t1;
            } else {
                *(float *)(((int)stk + 20)) = 0.149999991f;
                u12 = *(float *)((a4 + 0x38));
                u13 = *(float *)((a4 + 0x5C));
                *(float *)(((int)stk + 16)) = (u12 - (u13 * 0.099999994f));
                u14 = *(float *)((a4 + 0x34));
                *(float *)(((int)stk + 44)) = u14;
                u15 = *(float *)((a4 + 0x58));
                *(float *)(((int)stk + 40)) = u15;
                *(float *)(((int)stk + 12)) = (u14 - (u15 * 0.099999994f));
                u16 = *(float *)((a4 + 0x30));
                *(float *)(((int)stk + 36)) = u16;
                u17 = *(float *)((a4 + 0x54));
                *(float *)(((int)stk + 8)) = (u16 - (u17 * 0.099999994f));
                *(float *)(((int)stk + 4)) = (u12 + u13);
                FUN_0c0a6928((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x54), (((int)stk + 4) + 0x58), 0x0, (u12 + u13), (u16 - (u17 * 0.099999994f)), (u14 - (u15 * 0.099999994f)), (u12 - (u13 * 0.099999994f)), 0.149999991f, (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0xA0))), (*(float *)((a4 + 0x8C))), (*(float *)((a4 + 0x90))), (*(float *)((a4 + 0x94))), ((*(float *)(((int)stk + 36))) + u17), ((*(float *)(((int)stk + 44))) + (*(float *)(((int)stk + 40)))));
                FUN_0c01e79a(a4, (((int)stk + 24) + 0x3C));
                t30 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, (((int)stk + 24) + 0x4), (0xFFFFFFFD & a5));
                if (t30 != 0) {
                    t31 = ((int (*)(int))(FUN_0c0e61d4))(t30);
                    if (((*(int *)((a4 + 0x98))) & 112) != 0) {
                        *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 28)));
                        t36 = a4;
                    } else {
                        t34 = ((int (*)(int))(FUN_0c0e61d4))(a4);
                        t36 = t1;
                    }
                    t48 = t36;
                } else {
                    t41 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, (((int)stk + 24) + 0x4), (0x2 & a5));
                    if (t41 == 0) {
                        FUN_0c01e720(a4);
                        t43 = ((int (*)(void))(FUN_0c0e61d4))();
                    } else {
                        t44 = ((int (*)(int))(FUN_0c0e61d4))(t41);
                    }
                    t48 = t1;
                }
                t53 = t48;
            }
            t130 = t53;
        } else {
            t61 = *(int *)((t1 + 0x8));
            t122 = t1;
            if ((int)t61 >= (int)0xC) {
            } else {
                t114 = t1;
                if ((int)t61 < 0) {
                } else {
                    if (((*(int *)((a4 + 0x20C))) & 0x400000) != 0) {
                        t106 = (FUN_0c01e720(a4));
                    } else {
                        t67 = *(int *)((((*(int *)((t1 + 0x8))) << 2) + 0xC246FF0));
                        FUN_0c0a68ec((((int)stk + 24) + 0x8), ((*(float *)((t67 + 0x30))) - (*(float *)((a4 + 0x30)))), ((*(float *)((t67 + 0x38))) - (*(float *)((a4 + 0x38)))));
                        u73 = *(float *)((a4 + 0x48));
                        u74 = *(float *)((a4 + 0x30));
                        u75 = *(float *)((t67 + 0x30));
                        u76 = *(float *)((a4 + 0x50));
                        u77 = *(float *)((a4 + 0x38));
                        u78 = *(float *)((t67 + 0x38));
                        u79 = *(float *)((a4 + 0x214));
                        u80 = *(float *)((t67 + 0x214));
                        u81 = (((u77 + u76) - u78) * ((u77 + u76) - u78));
                        u81 = u81 + ((u74 + u73) - u75) * ((u74 + u73) - u75);
                        u82 = (_builtin_fabsf((((u79 + u80) - _builtin_sqrtf(u81)) + 0.099999994f)) * 0.199999988f);
                        if ((_builtin_fabsf((((u79 + u80) - _builtin_sqrtf(u81)) + 0.099999994f)) * 0.199999988f) > 0.799999952f) {
                            u82 = 0.799999952f;
                        }
                        FUN_0c0a6800((*(int *)(((int)stk + 32))), (((int)stk + 24) + 0x30), 0.0f, 0.0f, u82);
                        *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - (*(float *)(((((int)stk + 24) + 0x30) + 0x0))));
                        *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) - (*(float *)(((((int)stk + 24) + 0x38) + 0x0))));
                        if (0.049999997f > _builtin_fabsf((*(float *)((a4 + 0x54))))) {
                            *(float *)((a4 + 0x54)) = 0.0f;
                        }
                        if (0.049999997f > _builtin_fabsf((*(float *)((a4 + 0x5C))))) {
                            *(float *)((a4 + 0x5C)) = 0.0f;
                        }
                        t94 = ((int (*)(float))(FUN_0c0e61d4))(0.049999997f);
                        t96 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, ((int)stk + 24), (0xFFFFFFFD & a5));
                        if (t96 == 0) {
                            FUN_0c01e770(a4);
                            t98 = ((int (*)(void))(FUN_0c0e61d4))();
                            t102 = t1;
                        } else {
                            t99 = ((int (*)(int))(FUN_0c0e61d4))(t96);
                            *(unsigned int *)((a4 + 0xAC)) = (*(int *)(((int)stk + 24)));
                            t102 = a4;
                        }
                        *(unsigned int *)0xC245F9C = 0xFFFFFFFF;
                        t106 = t102;
                    }
                    t114 = t106;
                }
                t122 = t114;
            }
            t130 = t122;
        }
        t141 = t130;
    }
    return t141;
}

int FUN_0c03840e(int a4, int a5, int a6, int a7)
{
    int t1;
    int t17;
    int t21;
    int t22;
    int t72;
    int t73;
    float u106;
    int t108;
    int t112;
    int t113;
    int t114;
    float u115;
    float u116;
    int t324;
    int t337;
    int t338;
    int t422;
    int t423;
    int t424;
    int t427;
    int t418;
    int t99;
    int t60;
    float u24;
    int t26;
    float u109;
    float u110;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t142;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t239;
    int t409;
    int t401;
    int t328;
    int t329;
    int t330;
    int t331;
    int t332;
    int t388;
    int t376;
    float u340;
    int t342;
    int stk[12];

    if ((*(int *)((a4 + 0x414))) == 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x224)) = ((*(float *)((a4 + 0x224))) - (*(float *)(((0x3EC + a4) + 0x0))));
    FUN_0c0dcd10((a4 + 0x30), (0x220 + a4));
    *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + (*(int *)(((0x22C + a4) + 0x0))));
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((0x230 + a4) + 0x0))));
    *(unsigned short *)((a4 + 0x70)) = ((*(short *)((a4 + 0x70))) + (*(int *)(((0x234 + a4) + 0x0))));
    FUN_0c0376f4(a4);
    FUN_0c037954(a4);
    t17 = *(int *)((a4 + 0x3F8));
    if (t17 != 0) {
        if (t17 == 1) {
            FUN_0c037c66(a4);
            *(unsigned int *)((a4 + 0x3E0)) = 0xFFFFFFFF;
            if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + 0x21C))) & 0x1)) {
                t21 = 0x21C;
                t22 = 0x0;
                for (;;) {
                    if (((*(int *)((((t22 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t21 = 0x3DC, t26 = *(int *)((a4 + t21)), t26 != t22)) {
                        t21 = 0x3F4;
                        u24 = (*(float *)((a4 + t21)));
                        u24 = (u24 + 4.0f);
                        t21 = 0x4;
                        if (u24 > ((*(float *)((((((t22 << 1) + t22) << 2) + (0x370 + a4)) + t21))))) {
                            break;
                        }
                        t22 = (t22 + 0x1);
                        if ((int)t22 >= (int)0x3) {
                            t21 = 0x3E0;
                            if ((int)(*(int *)((a4 + t21))) >= 0) {
                                t21 = 0x22C;
                                *(unsigned int *)((a4 + t21)) = 0x0;
                                t21 = (t21 + 0x4);
                                *(unsigned int *)((a4 + t21)) = 0x0;
                                t21 = (t21 + 0x4);
                                *(unsigned int *)((a4 + t21)) = 0x0;
                                t21 = 0x3F8;
                                *(unsigned int *)((a4 + t21)) = ((*(int *)((a4 + t21))) + 0x1);
                                t21 = 0xC;
                                t21 = (((int (*)(int))(FUN_0c0e61d4))(t22));
                                t21 = 0xC;
                                t21 = (((int (*)(void))(FUN_0c0e61d4))());
                                t21 = 0xC;
                                t21 = (((int (*)(void))(FUN_0c0e61d4))());
                                t21 = 0x3FC;
                                if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                                    t22 = a4;
                                    t21 = (FUN_0c037ee8(t22));
                                    return t21;
                                }
                                return t21;
                            }
                            t21 = 0xC;
                            t21 = (((int (*)(int))(FUN_0c0e61d4))(t22));
                            t21 = 0xC;
                            t21 = (((int (*)(void))(FUN_0c0e61d4))());
                            t21 = 0xC;
                            t21 = (((int (*)(void))(FUN_0c0e61d4))());
                            t21 = 0x3FC;
                            if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                                t22 = a4;
                                t21 = (FUN_0c037ee8(t22));
                                return t21;
                            }
                            return t21;
                        }
                        continue;
                    }
                    t22 = (t22 + 0x1);
                    if ((int)t22 >= (int)0x3) {
                        t21 = 0x3E0;
                        if ((int)(*(int *)((a4 + t21))) >= 0) {
                            t21 = 0x22C;
                            *(unsigned int *)((a4 + t21)) = 0x0;
                            t21 = (t21 + 0x4);
                            *(unsigned int *)((a4 + t21)) = 0x0;
                            t21 = (t21 + 0x4);
                            *(unsigned int *)((a4 + t21)) = 0x0;
                            t21 = 0x3F8;
                            *(unsigned int *)((a4 + t21)) = ((*(int *)((a4 + t21))) + 0x1);
                            t21 = 0xC;
                            t21 = (((int (*)(int))(FUN_0c0e61d4))(t22));
                            t21 = 0xC;
                            t21 = (((int (*)(void))(FUN_0c0e61d4))());
                            t21 = 0xC;
                            t21 = (((int (*)(void))(FUN_0c0e61d4))());
                            t21 = 0x3FC;
                            if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                                t22 = a4;
                                t21 = (FUN_0c037ee8(t22));
                                return t21;
                            }
                            return t21;
                        }
                        t21 = 0xC;
                        t21 = (((int (*)(int))(FUN_0c0e61d4))(t22));
                        t21 = 0xC;
                        t21 = (((int (*)(void))(FUN_0c0e61d4))());
                        t21 = 0xC;
                        t21 = (((int (*)(void))(FUN_0c0e61d4))());
                        t21 = 0x3FC;
                        if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                            t22 = a4;
                            t21 = (FUN_0c037ee8(t22));
                            return t21;
                        }
                        return t21;
                    }
                }
                *(unsigned int *)((a4 + 0x3E0)) = t22;
                t60 = t22;
            }
            if ((int)(*(int *)((a4 + 0x3E0))) >= 0) {
                *(unsigned int *)((a4 + 0x22C)) = 0x0;
                *(unsigned int *)((a4 + 0x230)) = 0x0;
                *(unsigned int *)((a4 + 0x234)) = 0x0;
                *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
            }
            t99 = t60;
        } else {
            if (t17 == 2) {
                FUN_0c086bda((a4 + 0x30), ((*(float *)((a4 + 0x224))) * 5.0f));
                *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
            } else {
                if (t17 == 3) {
                    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.049999997f);
                    t72 = *(int *)((a4 + 0x3FC));
                    *(unsigned int *)((a4 + 0x3FC)) = (t72 + 0x1);
                    if ((int)t72 > (int)0x3C) {
                        t73 = ((int (*)(void))(FUN_0c0e19f2))();
                    }
                }
            }
        }
        t418 = t99;
    } else {
        *(unsigned int *)((a4 + 0x3E0)) = 0xFFFFFFFF;
        if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + 0x21C))) & 0x1)) {
            *(float *)((a4 + 0x3F4)) = (FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4)));
            u106 = *(float *)((a4 + 0x3F4));
            t108 = 0x3F4;
            if (-10.0f > u106) {
                t108 = (((int (*)(void))(FUN_0c0e19f2))());
            } else {
                u109 = u106;
                u110 = -10.0f;
            }
            t112 = t108;
            t113 = a4;
            t114 = 0x0;
            u115 = u109;
            u116 = u110;
            for (;;) {
                if ((*(int *)((((t114 << 2) + (0x238 + a4)) + 0x0))) != 0) {
                    t113 = t114;
                    t112 = 0x3F4;
                    t113 = (t113 << 1);
                    t113 = (t113 + t114);
                    u116 = (*(float *)((a4 + t112)));
                    t113 = (t113 << 2);
                    u116 = (u116 + 4.0f);
                    t112 = 0x4;
                    u115 = (*(float *)((((0x370 + a4) + t113) + t112)));
                    if (u116 > u115) {
                        break;
                    }
                    t114 = (t114 + 0x1);
                    if ((int)t114 >= (int)0x3) {
                        t112 = 0x3E0;
                        if ((int)(*(int *)((a4 + t112))) < 0) {
                            t112 = 0xC;
                            t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0x3FC;
                            if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                t113 = a4;
                                t112 = (FUN_0c037ee8(t113));
                                return t112;
                            }
                            return t112;
                        }
                        t113 = a4;
                        t112 = (FUN_0c037e44(t113));
                        if (t112 != 0) {
                            t113 = a4;
                            t112 = (FUN_0c0376f4(t113));
                            t112 = 0x238;
                            if ((((*(int *)((a4 + t112))) != 0) && (t112 = 0x3E0, t132 = *(int *)((a4 + t112)), t132 != 0)) || (((t112 = 0x23C, t133 = *(int *)((a4 + t112)), t133 != 0) && (t112 = 0x3E0, t134 = *(int *)((a4 + t112)), t112 = t134, t112 != 1)) || ((t112 = 0x240, t135 = *(int *)((a4 + t112)), t135 != 0) && (t112 = 0x3E0, t136 = *(int *)((a4 + t112)), t112 = t136, t112 != 2)))) {
                                t112 = 0x3F8;
                                *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                t113 = a4;
                                t112 = (FUN_0c037c66(t113));
                                t112 = 0x3E0;
                                *(unsigned int *)((a4 + t112)) = 0xFFFFFFFF;
                                t112 = 0x21C;
                                if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + t112))) & 0x1)) {
                                    t113 = 0x0;
                                    for (;;) {
                                        if (((*(int *)((((t113 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t112 = 0x3DC, t142 = *(int *)((a4 + t112)), t142 != t113)) {
                                            t112 = 0x3F4;
                                            u116 = (*(float *)((a4 + t112)));
                                            u116 = (u116 + 4.0f);
                                            t112 = 0x4;
                                            u115 = (*(float *)((((((t113 << 1) + t113) << 2) + (0x370 + a4)) + t112)));
                                            if (u116 > u115) {
                                                break;
                                            }
                                            t113 = (t113 + 0x1);
                                            if ((int)t113 >= (int)0x3) {
                                                t112 = 0x3E0;
                                                if ((int)(*(int *)((a4 + t112))) >= 0) {
                                                    t112 = 0x22C;
                                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                                    t112 = (t112 + 0x4);
                                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                                    t112 = (t112 + 0x4);
                                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                                    t112 = 0x3F8;
                                                    *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                                    t112 = 0xC;
                                                    t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                                    t112 = 0xC;
                                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                    t112 = 0xC;
                                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                    t112 = 0x3FC;
                                                    if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                                        t113 = a4;
                                                        t112 = (FUN_0c037ee8(t113));
                                                        return t112;
                                                    }
                                                    return t112;
                                                }
                                                t112 = 0xC;
                                                t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                                t112 = 0xC;
                                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                t112 = 0xC;
                                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                t112 = 0x3FC;
                                                if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                                    t113 = a4;
                                                    t112 = (FUN_0c037ee8(t113));
                                                    return t112;
                                                }
                                                return t112;
                                            }
                                            continue;
                                        }
                                        t113 = (t113 + 0x1);
                                        if ((int)t113 >= (int)0x3) {
                                            t112 = 0x3E0;
                                            if ((int)(*(int *)((a4 + t112))) >= 0) {
                                                t112 = 0x22C;
                                                *(unsigned int *)((a4 + t112)) = 0x0;
                                                t112 = (t112 + 0x4);
                                                *(unsigned int *)((a4 + t112)) = 0x0;
                                                t112 = (t112 + 0x4);
                                                *(unsigned int *)((a4 + t112)) = 0x0;
                                                t112 = 0x3F8;
                                                *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                                t112 = 0xC;
                                                t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                                t112 = 0xC;
                                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                t112 = 0xC;
                                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                t112 = 0x3FC;
                                                if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                                    t113 = a4;
                                                    t112 = (FUN_0c037ee8(t113));
                                                    return t112;
                                                }
                                                return t112;
                                            }
                                            t112 = 0xC;
                                            t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                            t112 = 0xC;
                                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                            t112 = 0xC;
                                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                            t112 = 0x3FC;
                                            if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                                t113 = a4;
                                                t112 = (FUN_0c037ee8(t113));
                                                return t112;
                                            }
                                            return t112;
                                        }
                                    }
                                    t112 = 0x3E0;
                                    *(unsigned int *)((a4 + t112)) = t113;
                                    t112 = 0x3E0;
                                    if ((int)(*(int *)((a4 + t112))) >= 0) {
                                        t112 = 0x22C;
                                        *(unsigned int *)((a4 + t112)) = 0x0;
                                        t112 = (t112 + 0x4);
                                        *(unsigned int *)((a4 + t112)) = 0x0;
                                        t112 = (t112 + 0x4);
                                        *(unsigned int *)((a4 + t112)) = 0x0;
                                        t112 = 0x3F8;
                                        *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                        t112 = 0xC;
                                        t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                        t112 = 0xC;
                                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                        t112 = 0xC;
                                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                        t112 = 0x3FC;
                                        if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                            t113 = a4;
                                            t112 = (FUN_0c037ee8(t113));
                                            return t112;
                                        }
                                        return t112;
                                    }
                                    t112 = 0xC;
                                    t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                    t112 = 0xC;
                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t112 = 0xC;
                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t112 = 0x3FC;
                                    if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                        t113 = a4;
                                        t112 = (FUN_0c037ee8(t113));
                                        return t112;
                                    }
                                    return t112;
                                }
                                t112 = 0x3E0;
                                if ((int)(*(int *)((a4 + t112))) >= 0) {
                                    t112 = 0x22C;
                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                    t112 = (t112 + 0x4);
                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                    t112 = (t112 + 0x4);
                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                    t112 = 0x3F8;
                                    *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                    t112 = 0xC;
                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t112 = 0xC;
                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t112 = 0xC;
                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t112 = 0x3FC;
                                    if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                        t113 = a4;
                                        t112 = (FUN_0c037ee8(t113));
                                        return t112;
                                    }
                                    return t112;
                                }
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0x3FC;
                                if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                    t113 = a4;
                                    t112 = (FUN_0c037ee8(t113));
                                    return t112;
                                }
                                return t112;
                            }
                            t112 = 0x22C;
                            *(unsigned int *)((a4 + t112)) = 0x0;
                            t112 = (t112 + 0x4);
                            *(unsigned int *)((a4 + t112)) = 0x0;
                            t112 = (t112 + 0x4);
                            *(unsigned int *)((a4 + t112)) = 0x0;
                            t112 = 0x3F8;
                            *(unsigned int *)((a4 + t112)) = 0x2;
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0x3FC;
                            if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                t113 = a4;
                                t112 = (FUN_0c037ee8(t113));
                                return t112;
                            }
                            return t112;
                        }
                        t112 = 0x410;
                        if ((*(int *)((a4 + t112))) == 0) {
                            t113 = 0x2CA9;
                            t112 = (FUN_0c0cc3f8(t113, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
                            t112 = 0x410;
                            *(unsigned int *)((a4 + t112)) = 0x1;
                            t112 = 0x224;
                            t113 = a4;
                            t113 = (t113 + 0x30);
                            t112 = (FUN_0c086bda(t113, ((*(float *)((a4 + t112))) * 5.0f)));
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0x3FC;
                            if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                t113 = a4;
                                t112 = (FUN_0c037ee8(t113));
                                return t112;
                            }
                            return t112;
                        }
                        t112 = 0x224;
                        t113 = a4;
                        t113 = (t113 + 0x30);
                        t112 = (FUN_0c086bda(t113, ((*(float *)((a4 + t112))) * 5.0f)));
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0x3FC;
                        if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                            t113 = a4;
                            t112 = (FUN_0c037ee8(t113));
                            return t112;
                        }
                        return t112;
                    }
                    continue;
                }
                t114 = (t114 + 0x1);
                if ((int)t114 >= (int)0x3) {
                    t112 = 0x3E0;
                    if ((int)(*(int *)((a4 + t112))) < 0) {
                        t112 = 0xC;
                        t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0x3FC;
                        if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                            t113 = a4;
                            t112 = (FUN_0c037ee8(t113));
                            return t112;
                        }
                        return t112;
                    }
                    t113 = a4;
                    t112 = (FUN_0c037e44(t113));
                    if (t112 != 0) {
                        t113 = a4;
                        t112 = (FUN_0c0376f4(t113));
                        t112 = 0x238;
                        if ((((*(int *)((a4 + t112))) != 0) && (t112 = 0x3E0, t229 = *(int *)((a4 + t112)), t229 != 0)) || (((t112 = 0x23C, t230 = *(int *)((a4 + t112)), t230 != 0) && (t112 = 0x3E0, t231 = *(int *)((a4 + t112)), t112 = t231, t112 != 1)) || ((t112 = 0x240, t232 = *(int *)((a4 + t112)), t232 != 0) && (t112 = 0x3E0, t233 = *(int *)((a4 + t112)), t112 = t233, t112 != 2)))) {
                            t112 = 0x3F8;
                            *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                            t113 = a4;
                            t112 = (FUN_0c037c66(t113));
                            t112 = 0x3E0;
                            *(unsigned int *)((a4 + t112)) = 0xFFFFFFFF;
                            t112 = 0x21C;
                            if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + t112))) & 0x1)) {
                                t113 = 0x0;
                                for (;;) {
                                    if (((*(int *)((((t113 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t112 = 0x3DC, t239 = *(int *)((a4 + t112)), t239 != t113)) {
                                        t112 = 0x3F4;
                                        u116 = (*(float *)((a4 + t112)));
                                        u116 = (u116 + 4.0f);
                                        t112 = 0x4;
                                        u115 = (*(float *)((((((t113 << 1) + t113) << 2) + (0x370 + a4)) + t112)));
                                        if (u116 > u115) {
                                            break;
                                        }
                                        t113 = (t113 + 0x1);
                                        if ((int)t113 >= (int)0x3) {
                                            t112 = 0x3E0;
                                            if ((int)(*(int *)((a4 + t112))) >= 0) {
                                                t112 = 0x22C;
                                                *(unsigned int *)((a4 + t112)) = 0x0;
                                                t112 = (t112 + 0x4);
                                                *(unsigned int *)((a4 + t112)) = 0x0;
                                                t112 = (t112 + 0x4);
                                                *(unsigned int *)((a4 + t112)) = 0x0;
                                                t112 = 0x3F8;
                                                *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                                t112 = 0xC;
                                                t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                                t112 = 0xC;
                                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                t112 = 0xC;
                                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                                t112 = 0x3FC;
                                                if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                                    t113 = a4;
                                                    t112 = (FUN_0c037ee8(t113));
                                                    return t112;
                                                }
                                                return t112;
                                            }
                                            t112 = 0xC;
                                            t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                            t112 = 0xC;
                                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                            t112 = 0xC;
                                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                            t112 = 0x3FC;
                                            if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                                t113 = a4;
                                                t112 = (FUN_0c037ee8(t113));
                                                return t112;
                                            }
                                            return t112;
                                        }
                                        continue;
                                    }
                                    t113 = (t113 + 0x1);
                                    if ((int)t113 >= (int)0x3) {
                                        t112 = 0x3E0;
                                        if ((int)(*(int *)((a4 + t112))) >= 0) {
                                            t112 = 0x22C;
                                            *(unsigned int *)((a4 + t112)) = 0x0;
                                            t112 = (t112 + 0x4);
                                            *(unsigned int *)((a4 + t112)) = 0x0;
                                            t112 = (t112 + 0x4);
                                            *(unsigned int *)((a4 + t112)) = 0x0;
                                            t112 = 0x3F8;
                                            *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                            t112 = 0xC;
                                            t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                            t112 = 0xC;
                                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                            t112 = 0xC;
                                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                            t112 = 0x3FC;
                                            if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                                t113 = a4;
                                                t112 = (FUN_0c037ee8(t113));
                                                return t112;
                                            }
                                            return t112;
                                        }
                                        t112 = 0xC;
                                        t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                        t112 = 0xC;
                                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                        t112 = 0xC;
                                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                        t112 = 0x3FC;
                                        if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                            t113 = a4;
                                            t112 = (FUN_0c037ee8(t113));
                                            return t112;
                                        }
                                        return t112;
                                    }
                                }
                                t112 = 0x3E0;
                                *(unsigned int *)((a4 + t112)) = t113;
                                t112 = 0x3E0;
                                if ((int)(*(int *)((a4 + t112))) >= 0) {
                                    t112 = 0x22C;
                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                    t112 = (t112 + 0x4);
                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                    t112 = (t112 + 0x4);
                                    *(unsigned int *)((a4 + t112)) = 0x0;
                                    t112 = 0x3F8;
                                    *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                    t112 = 0xC;
                                    t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                    t112 = 0xC;
                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t112 = 0xC;
                                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t112 = 0x3FC;
                                    if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                        t113 = a4;
                                        t112 = (FUN_0c037ee8(t113));
                                        return t112;
                                    }
                                    return t112;
                                }
                                t112 = 0xC;
                                t112 = (((int (*)(int))(FUN_0c0e61d4))(t113));
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0x3FC;
                                if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                    t113 = a4;
                                    t112 = (FUN_0c037ee8(t113));
                                    return t112;
                                }
                                return t112;
                            }
                            t112 = 0x3E0;
                            if ((int)(*(int *)((a4 + t112))) >= 0) {
                                t112 = 0x22C;
                                *(unsigned int *)((a4 + t112)) = 0x0;
                                t112 = (t112 + 0x4);
                                *(unsigned int *)((a4 + t112)) = 0x0;
                                t112 = (t112 + 0x4);
                                *(unsigned int *)((a4 + t112)) = 0x0;
                                t112 = 0x3F8;
                                *(unsigned int *)((a4 + t112)) = ((*(int *)((a4 + t112))) + 0x1);
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0xC;
                                t112 = (((int (*)(void))(FUN_0c0e61d4))());
                                t112 = 0x3FC;
                                if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                    t113 = a4;
                                    t112 = (FUN_0c037ee8(t113));
                                    return t112;
                                }
                                return t112;
                            }
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0xC;
                            t112 = (((int (*)(void))(FUN_0c0e61d4))());
                            t112 = 0x3FC;
                            if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                                t113 = a4;
                                t112 = (FUN_0c037ee8(t113));
                                return t112;
                            }
                            return t112;
                        }
                        t112 = 0x22C;
                        *(unsigned int *)((a4 + t112)) = 0x0;
                        t112 = (t112 + 0x4);
                        *(unsigned int *)((a4 + t112)) = 0x0;
                        t112 = (t112 + 0x4);
                        *(unsigned int *)((a4 + t112)) = 0x0;
                        t112 = 0x3F8;
                        *(unsigned int *)((a4 + t112)) = 0x2;
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0x3FC;
                        if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                            t113 = a4;
                            t112 = (FUN_0c037ee8(t113));
                            return t112;
                        }
                        return t112;
                    }
                    t112 = 0x410;
                    if ((*(int *)((a4 + t112))) == 0) {
                        t113 = 0x2CA9;
                        t112 = (FUN_0c0cc3f8(t113, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
                        t112 = 0x410;
                        *(unsigned int *)((a4 + t112)) = 0x1;
                        t112 = 0x224;
                        t113 = a4;
                        t113 = (t113 + 0x30);
                        t112 = (FUN_0c086bda(t113, ((*(float *)((a4 + t112))) * 5.0f)));
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0xC;
                        t112 = (((int (*)(void))(FUN_0c0e61d4))());
                        t112 = 0x3FC;
                        if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                            t113 = a4;
                            t112 = (FUN_0c037ee8(t113));
                            return t112;
                        }
                        return t112;
                    }
                    t112 = 0x224;
                    t113 = a4;
                    t113 = (t113 + 0x30);
                    t112 = (FUN_0c086bda(t113, ((*(float *)((a4 + t112))) * 5.0f)));
                    t112 = 0xC;
                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                    t112 = 0xC;
                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                    t112 = 0xC;
                    t112 = (((int (*)(void))(FUN_0c0e61d4))());
                    t112 = 0x3FC;
                    if (((*(int *)((a4 + t112))) & 0x1) == 0) {
                        t113 = a4;
                        t112 = (FUN_0c037ee8(t113));
                        return t112;
                    }
                    return t112;
                }
            }
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (((*(float *)(((0x3F4 + a4) + 0x0))) - (*(float *)(((0x4 + (t113 + (0x370 + a4))) + 0x0)))) + 4.0f));
            FUN_0c0376f4(a4);
            *(unsigned int *)((a4 + 0x3E0)) = t114;
        }
        if ((int)(*(int *)((a4 + 0x3E0))) < 0) {
        } else {
            t324 = FUN_0c037e44(a4);
            if (t324 != 0) {
                FUN_0c0376f4(a4);
                if ((((*(int *)((a4 + 0x238))) != 0) && (t328 = *(int *)((a4 + 0x3E0)), t328 != 0)) || (((t329 = *(int *)((a4 + 0x23C)), t329 != 0) && (t330 = *(int *)((a4 + 0x3E0)), t330 != 1)) || ((t331 = *(int *)((a4 + 0x240)), t331 != 0) && (t332 = *(int *)((a4 + 0x3E0)), t332 != 2)))) {
                    *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
                    FUN_0c037c66(a4);
                    *(unsigned int *)((a4 + 0x3E0)) = 0xFFFFFFFF;
                    if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + 0x21C))) & 0x1)) {
                        t337 = 0x21C;
                        t338 = 0x0;
                        for (;;) {
                            if (((*(int *)((((t338 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t337 = 0x3DC, t342 = *(int *)((a4 + t337)), t342 != t338)) {
                                t337 = 0x3F4;
                                u340 = (*(float *)((a4 + t337)));
                                u340 = (u340 + 4.0f);
                                t337 = 0x4;
                                if (u340 > ((*(float *)((((((t338 << 1) + t338) << 2) + (0x370 + a4)) + t337))))) {
                                    break;
                                }
                                t338 = (t338 + 0x1);
                                if ((int)t338 >= (int)0x3) {
                                    t337 = 0x3E0;
                                    if ((int)(*(int *)((a4 + t337))) >= 0) {
                                        t337 = 0x22C;
                                        *(unsigned int *)((a4 + t337)) = 0x0;
                                        t337 = (t337 + 0x4);
                                        *(unsigned int *)((a4 + t337)) = 0x0;
                                        t337 = (t337 + 0x4);
                                        *(unsigned int *)((a4 + t337)) = 0x0;
                                        t337 = 0x3F8;
                                        *(unsigned int *)((a4 + t337)) = ((*(int *)((a4 + t337))) + 0x1);
                                        t337 = 0xC;
                                        t337 = (((int (*)(int))(FUN_0c0e61d4))(t338));
                                        t337 = 0xC;
                                        t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                        t337 = 0xC;
                                        t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                        t337 = 0x3FC;
                                        if (((*(int *)((a4 + t337))) & 0x1) == 0) {
                                            t338 = a4;
                                            t337 = (FUN_0c037ee8(t338));
                                            return t337;
                                        }
                                        return t337;
                                    }
                                    t337 = 0xC;
                                    t337 = (((int (*)(int))(FUN_0c0e61d4))(t338));
                                    t337 = 0xC;
                                    t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t337 = 0xC;
                                    t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t337 = 0x3FC;
                                    if (((*(int *)((a4 + t337))) & 0x1) == 0) {
                                        t338 = a4;
                                        t337 = (FUN_0c037ee8(t338));
                                        return t337;
                                    }
                                    return t337;
                                }
                                continue;
                            }
                            t338 = (t338 + 0x1);
                            if ((int)t338 >= (int)0x3) {
                                t337 = 0x3E0;
                                if ((int)(*(int *)((a4 + t337))) >= 0) {
                                    t337 = 0x22C;
                                    *(unsigned int *)((a4 + t337)) = 0x0;
                                    t337 = (t337 + 0x4);
                                    *(unsigned int *)((a4 + t337)) = 0x0;
                                    t337 = (t337 + 0x4);
                                    *(unsigned int *)((a4 + t337)) = 0x0;
                                    t337 = 0x3F8;
                                    *(unsigned int *)((a4 + t337)) = ((*(int *)((a4 + t337))) + 0x1);
                                    t337 = 0xC;
                                    t337 = (((int (*)(int))(FUN_0c0e61d4))(t338));
                                    t337 = 0xC;
                                    t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t337 = 0xC;
                                    t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                    t337 = 0x3FC;
                                    if (((*(int *)((a4 + t337))) & 0x1) == 0) {
                                        t338 = a4;
                                        t337 = (FUN_0c037ee8(t338));
                                        return t337;
                                    }
                                    return t337;
                                }
                                t337 = 0xC;
                                t337 = (((int (*)(int))(FUN_0c0e61d4))(t338));
                                t337 = 0xC;
                                t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                t337 = 0xC;
                                t337 = (((int (*)(void))(FUN_0c0e61d4))());
                                t337 = 0x3FC;
                                if (((*(int *)((a4 + t337))) & 0x1) == 0) {
                                    t338 = a4;
                                    t337 = (FUN_0c037ee8(t338));
                                    return t337;
                                }
                                return t337;
                            }
                        }
                        *(unsigned int *)((a4 + 0x3E0)) = t338;
                        t376 = t338;
                    }
                    if ((int)(*(int *)((a4 + 0x3E0))) >= 0) {
                        *(unsigned int *)((a4 + 0x22C)) = 0x0;
                        *(unsigned int *)((a4 + 0x230)) = 0x0;
                        *(unsigned int *)((a4 + 0x234)) = 0x0;
                        *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
                    }
                    t388 = t376;
                } else {
                    *(unsigned int *)((a4 + 0x22C)) = 0x0;
                    *(unsigned int *)((a4 + 0x230)) = 0x0;
                    *(unsigned int *)((a4 + 0x234)) = 0x0;
                    *(unsigned int *)((a4 + 0x3F8)) = 0x2;
                }
                t401 = t388;
            } else {
                if ((*(int *)((a4 + 0x410))) == 0) {
                    FUN_0c0cc3f8(0x2CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    *(unsigned int *)((a4 + 0x410)) = 0x1;
                }
                FUN_0c086bda((a4 + 0x30), ((*(float *)((a4 + 0x224))) * 5.0f));
            }
            t409 = t401;
        }
        t418 = t409;
    }
    t422 = ((int (*)(int))(FUN_0c0e61d4))(t418);
    t423 = ((int (*)(void))(FUN_0c0e61d4))();
    t424 = ((int (*)(void))(FUN_0c0e61d4))();
    t427 = 0x3FC;
    if (((*(int *)((a4 + 0x3FC))) & 0x1) == 0) {
        t427 = (FUN_0c037ee8(a4));
    }
    return t427;
}

int FUN_0c02c6ee(int a4, float f4)
{
    int t1;
    int t12;
    int t87;
    int t86;
    int t28;
    int t30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u38;
    float u40;
    int t60;
    int t103;
    float u6;
    int stk[28];

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        t103 = 0x474;
    } else {
        t1 = ((int (*)(int))(FUN_0c0e61d4))(a4);
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFF7FF);
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & 0xFFFFF00F);
        if ((((*(float *)((a4 + 0x390))) + 10.0f) > (*(float *)((a4 + 0x34)))) && (u6 = *(float *)((a4 + 0x4C)), !(u6 > 0.0f))) {
            *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + 10.0f);
            *(float *)((a4 + 0x64)) = 0.0f;
        }
        *(float *)((a4 + 0x4B0)) = 0.0f;
        *(float *)((a4 + 0x4B4)) = 0.0f;
        *(float *)((a4 + 0x4B8)) = 0.0f;
        t12 = *(int *)((a4 + 0x4C8));
        t87 = t12;
        if (t12 == 2) {
        } else {
            t86 = 0;
            if ((*(int *)((a4 + 0x50C))) == 0) {
                FUN_0c0dc510(0x0);
                FUN_0c0dccc0();
                FUN_0c0dcc70((*(float *)((a4 + 0x24C))), (*(float *)((a4 + 0x250))), (*(float *)((a4 + 0x254))));
                FUN_0c0dc890((*(int *)((a4 + 0x52C))));
                *(float *)(((int)stk + 60)) = 0.0f;
                *(float *)(((int)stk + 64)) = 3.0f;
                *(float *)(((int)stk + 68)) = -15.0f;
                FUN_0c0db470((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C));
                *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 48)));
                *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 52)));
                *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 56)));
                FUN_0c0dc4c0(0x1);
                t86 = (1);
            } else {
                t28 = ((int (*)(float))(FUN_0c0e61d4))(10.0f);
                *(volatile int *)((a4 + 0x510));
                t30 = ((int (*)(void))(FUN_0c0e61d4))();
                u31 = *(float *)(((((int)stk + 4) + 0x38) + 0x0));
                u32 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
                u33 = *(float *)(((((int)stk + 4) + 0x38) + 0x4));
                u34 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
                u35 = *(float *)(((((int)stk + 4) + 0x2C) + 0x8));
                u36 = *(float *)(((((int)stk + 4) + 0x38) + 0x8));
                u38 = ((u33 - u32) * (u33 - u32));
                u38 = u38 + (u31 - u34) * (u31 - u34);
                u40 = u38;
                u40 = u40 + (u36 - u35) * (u36 - u35);
                FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x38) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x2C) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x38) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x2C) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x38) + 0x8))) - u35));
                if (_builtin_sqrtf(u40) > 35.0f) {
                    FUN_0c0dc510(0x0);
                    FUN_0c0dccc0();
                    FUN_0c0dcc70((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x4))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x8))));
                    FUN_0c0dc890((*(int *)(((int)stk + 8))));
                    FUN_0c0dc6e0((*(int *)(((int)stk + 4))));
                    *(float *)(((int)stk + 36)) = 0.0f;
                    *(float *)(((int)stk + 40)) = 0.0f;
                    *(float *)(((int)stk + 44)) = 30.0f;
                    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                    *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 32)));
                    FUN_0c0dc4c0(0x1);
                } else {
                    t60 = ((int (*)(void))(FUN_0c0e61d4))();
                }
                FUN_0c0dc510(0x0);
                FUN_0c0dccc0();
                FUN_0c0dc890((*(int *)(((int)stk + 8))));
                FUN_0c0dc6e0((*(int *)(((int)stk + 4))));
                *(float *)(((int)stk + 24)) = ((FUN_0c0da410(((*(int *)0xC23A258) * 0x333))) * 2.5f);
                *(float *)(((int)stk + 28)) = ((FUN_0c0d9e90(((*(int *)0xC23A258) * 0x333))) * 2.5f);
                *(float *)(((int)stk + 32)) = ((FUN_0c0da410(((*(int *)0xC23A258) * 0x222))) * 5.0f);
                FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
                *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
                *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 20)));
                FUN_0c0dc4c0(0x1);
                FUN_0c0dcd10((0x518 + a4), (((int)stk + 4) + 0x20));
                _builtin_sqrtf(u40);
                t86 = ((_builtin_sqrtf(u40) > 35.0f));
            }
            *(unsigned int *)((a4 + 0x514)) = 0x1;
            t87 = 0x514;
        }
        t103 = t87;
    }
    return t103;
}
