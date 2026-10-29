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
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int FUN_0c0dce80(int, int, float);
int nlSubVector(int, int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
extern int FUN_0c0e19f2();
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
extern int _quick_odd_mvn();
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
    t37 = nlPushMatrix(0x0);
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
                        t39 = (nlRotateAY((*(int *)((t42 + 0x20)))));
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
                    t39 = (nlRotateAY((*(int *)((t42 + 0x20)))));
                    t39 = 0x4;
                    u44 = (*(float *)((t41 + t39)));
                    t39 = 0x24;
                    u97 = *(float *)((t42 + t39));
                    t39 = 0xC;
                    t39 = (FUN_0c0dcc70((*(float *)((t1 + t39))), (u97 * u44), 0.0f));
                    t39 = (FUN_0c0db840((((int)stk + 4) + 0xC)));
                    t39 = (nlUnitMatrix());
                    t39 = (FUN_0c0dcca0((((int)stk + 4) + 0xC)));
                    t39 = 0x3CE;
                    t39 = (nlRotateAY((*(short *)((t2 + t39)))));
                    t39 = 0x3CC;
                    t39 = (nlRotateAX((*(short *)((t2 + t39)))));
                    t39 = (nlRotateAZ((*(int *)(((int)stk + 8)))));
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
                    t39 = (nlScale(u46, u46, 1.0f));
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
                    t39 = (nlUnitMatrix());
                    t39 = (FUN_0c0dcca0((t42 + 0x8)));
                    t39 = 0x3CE;
                    t39 = (nlRotateAY((*(short *)((t2 + t39)))));
                    t39 = 0x3CC;
                    t39 = (nlRotateAX((*(short *)((t2 + t39)))));
                    t39 = (nlRotateAZ((*(int *)(((int)stk + 8)))));
                    t39 = 0x20;
                    u44 = (*(float *)((t1 + t39)));
                    t39 = 0x1C;
                    u148 = (u46 * u44);
                    u44 = (*(float *)((t1 + t39)));
                    t39 = 0x18;
                    u150 = (u46 * u44);
                    u44 = (*(float *)((t1 + t39)));
                    t39 = (FUN_0c0848bc((u46 * u44), u150, u148));
                    t39 = (nlScale(u45, u45, 1.0f));
                    u153 = u45;
                    if (1.0f > u45) {
                        u153 = 1.0f;
                    }
                    t39 = (FUN_0c0de000(u153));
                    t39 = (FUN_0c0c47ae((*(int *)((t1 + 0x28)))));
                    t39 = (nlAddVector((t42 + 0x8), (t42 + 0x14)));
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
    nlPopMatrix(0x1);
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

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F409C);
    FUN_0c0c465c(0x1436);
    FUN_0c0c465c(0x1440);
    FUN_0c0c465c(0x13B0);
    *(unsigned int *)0xC23EAC8 = (FUN_0c0146f0((*(int *)0xC23EAC8), 0xC23EB5B, (((int)stk + 8) + 0x4), 0x0));
    nlPushMatrix(0x0);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F461C);
    FUN_0c0c475c(0x1427, (*(float *)0xC23EB00));
    FUN_0c0c475c(0x1425, (*(float *)0xC23EB00));
    nlPopMatrix(0x1);
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
    nlPopMatrix(0x1);
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
                                nlScale(0.379999995f, 0.379999995f, 0.379999995f);
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
                nlPushMatrix(0x0);
                FUN_0c0dcca0(0xC0F4628);
                FUN_0c0c465c(0x1441);
                nlPopMatrix(0x1);
                nlScale(0.444999993f, 0.444999993f, 0.444999993f);
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
    return (nlPopMatrix(0x1));
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
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)(((*(int *)(((int)stk + 4))) + 0x3E4))));
    FUN_0c0db840((((int)stk + 4) + 0x24));
    nlUnitMatrix();
    FUN_0c0dcca0((((int)stk + 4) + 0x24));
    t44 = *(int *)0xC23A258;
    nlRotateAY(((((t44 << 1) + t44) << 8) << 1));
    FUN_0c0dcca0(0xC200C48);
    FUN_0c0db840((((int)stk + 4) + 0x24));
    nlSubVector((((int)stk + 4) + 0x24), (a4 + 0x4C));
    FUN_0c0dce80((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), 0.129999995f);
    nlAddVector((a4 + 0x4C), (((int)stk + 4) + 0xC));
    nlUnitMatrix();
    FUN_0c0dcca0((a4 + 0x4C));
    FUN_0c0848bc((u5 * 0.839999974f), (u5 * 0.869999945f), (u5 * 1.57999992f));
    t54 = 0x2;
    for (;;) {
        nlPushMatrix(0x0);
        nlRotateAY((*(short *)((t2 + 0x3CE))));
        nlRotateAX((*(short *)((t2 + 0x3CC))));
        t60 = FUN_0c0da2e0();
        nlRotateAZ((t60 << 1));
        nlScale(4.76999998f, 4.76999998f, 1.0f);
        FUN_0c0de000(4.76999998f);
        FUN_0c0c47ae(0x291);
        nlPopMatrix(0x1);
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
        nlPushMatrix(0x0);
        nlRotateAX(t75);
        nlRotateAZ((*(int *)(((int)stk + 12))));
        nlRotateAY((unsigned short)(((*(int *)0xC23A258) * 0x320) + t76));
        FUN_0c0dcca0(0xC200C54);
        nlScale(0.0199999996f, 0.0199999996f, 0.0199999996f);
        FUN_0c0de000(100.0f);
        FUN_0c0c47ae(0x3C9);
        nlPopMatrix(0x1);
        t93 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t93 - 1);
        if ((t93 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12)));
}



