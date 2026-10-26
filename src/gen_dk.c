/* Straight-line functions with calls and guards (batch gen_dk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c039354(int);
int FUN_0c0498ce(void);
int FUN_0c054ccc(int);
int FUN_0c054d8e(void);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084104(void);
int FUN_0c084218(void);
int FUN_0c0844dc(int, int, float);
int FUN_0c08455e(float);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0bfa90(void);
int FUN_0c0c4290(int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0d8c40();
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c06546c(float f4);
int FUN_0c0398b8(int a4);
int FUN_0c0987a4(int a4, int a5, int a6, int a7);

int FUN_0c06546c(float f4)
{
    int t0;
    int t46;
    int t1;
    int t2;
    int t35;
    int t40;
    int t53;
    int t54;
    int t70;
    int t103;
    int t109;
    int t143;
    int t152;
    int t184;
    int t200;
    int t208;
    int t41;
    int t36;
    int t31;
    int t27;
    int t23;
    int t19;
    int t15;
    int t11;
    int t7;
    int t4;

    t0 = *(int *)0xC23A190;
    if (t0 != 0) {
        if (t0 != 1) {
            t46 = t0;
            if (t0 == 2) {
                t1 = *(int *)0xC247BC8;
                if (t1 != 0) {
                    if (t1 != 1) {
                        if (t1 != 2) {
                            if (t1 != 3) {
                                if (t1 != 4) {
                                    if (t1 != 5) {
                                        if (t1 != 6) {
                                            if (t1 != 7) {
                                                if (t1 != 8) {
                                                    if (t1 != 9) {
                                                        t2 = t1;
                                                        if (t1 != 10) {
                                                        } else {
                                                            *(unsigned int *)0xC23A180 = 0x15;
                                                            *(unsigned int *)0xC23A190 = 0x0;
                                                            t2 = 0x15;
                                                        }
                                                        t4 = t2;
                                                    } else {
                                                        *(unsigned int *)0xC23A180 = 0x14;
                                                        *(unsigned int *)0xC23A190 = 0x0;
                                                        t4 = t1;
                                                    }
                                                    t7 = t4;
                                                } else {
                                                    *(unsigned int *)0xC23A180 = 0x13;
                                                    *(unsigned int *)0xC23A190 = 0x0;
                                                    t7 = t1;
                                                }
                                                t11 = t7;
                                            } else {
                                                *(unsigned int *)0xC23A180 = 0x12;
                                                *(unsigned int *)0xC23A190 = 0x0;
                                                t11 = 0x12;
                                            }
                                            t15 = t11;
                                        } else {
                                            *(unsigned int *)0xC23A180 = 0x11;
                                            *(unsigned int *)0xC23A190 = 0x0;
                                            t15 = t1;
                                        }
                                        t19 = t15;
                                    } else {
                                        *(unsigned int *)0xC23A180 = 0xC;
                                        *(unsigned int *)0xC23A190 = 0x0;
                                        t19 = 0xC;
                                    }
                                    t23 = t19;
                                } else {
                                    *(unsigned int *)0xC23A180 = 0xB;
                                    *(unsigned int *)0xC23A190 = 0x0;
                                    t23 = t1;
                                }
                                t27 = t23;
                            } else {
                                *(unsigned int *)0xC23A180 = 0xA;
                                *(unsigned int *)0xC23A190 = 0x0;
                                t27 = 0xA;
                            }
                            t31 = t27;
                        } else {
                            *(unsigned int *)0xC23A180 = 0x8;
                            *(unsigned int *)0xC23A190 = 0x0;
                            t31 = t1;
                        }
                        t36 = t31;
                    } else {
                        t35 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x201000, 0x200010, f4);
                        *(unsigned int *)0xC23A180 = 0x4;
                        *(unsigned int *)0xC23A190 = 0x0;
                        t36 = t35;
                    }
                    t41 = t36;
                } else {
                    t40 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x0, 0x0, f4);
                    *(unsigned int *)0xC23A180 = 0x1;
                    *(unsigned int *)0xC23A190 = 0x0;
                    *(unsigned int *)0xC23A18C = 0x0;
                    t41 = t40;
                }
                t46 = t41;
            }
            return t46;
        }
        FUN_0c084218();
        t53 = ((int (*)(int, int, int))(FUN_0c0d8c40))(0x0, 0x2020, 0x2020);
        t54 = 0x0;
        for (;;) {
            if ((*(int *)((0xC1FFDB0 + (t54 << 2)))) == 0) {
                break;
            }
            FUN_0c0db0a0((*(int *)0xC247BB4), ((t54 << 1) + (*(int *)0xC247BB8)));
            nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t54 << 2))))));
            t54 = (t54 + 0x1);
        }
        FUN_0c0db0a0((*(int *)0xC247BBC), (((*(int *)0xC247BC8) << 1) + (*(int *)0xC247BC0)));
        nlPrintf(0xC0F9FD4);
        if (((*(int *)0xC2497E0) & 32) != 0) {
            *(unsigned int *)0xC247BD0 = 0x0;
            t70 = *(int *)0xC247BC8;
            *(unsigned int *)0xC247BC8 = (t70 + 0x1);
            if ((int)(t70 + 0x1) > (int)(*(int *)0xC247BC4)) {
                *(unsigned int *)0xC247BC8 = 0x0;
            }
            FUN_0c0db0a0((*(int *)0xC247BBC), (((*(int *)0xC247BC8) << 1) + (*(int *)0xC247BC0)));
            nlPrintf(0xC0F9FD8);
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlUnitMatrix();
            FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658B4));
            nlRotateAX(0x4000);
            nlRotateAY((-((*(int *)0xC247BD8) * 0x444)));
            FUN_0c0c465c(0x9C);
            nlUnitMatrix();
            FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658C8));
            nlRotateAX(0x4000);
            nlRotateAY((-((*(int *)0xC247BDC) * 0x444)));
            FUN_0c0c465c(0x9E);
            nlUnitMatrix();
            FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658CC));
            nlRotateAY((-((*(int *)0xC247BDC) * 0x444)));
            FUN_0c0c465c(0xD0F);
            nlPopMatrix(0x1);
            *(unsigned int *)0xC247BD8 = ((*(int *)0xC247BD8) + 0x1);
            t103 = FUN_0c0e5f1c();
            if (t103 == 0) {
                *(unsigned int *)0xC247BDC = ((*(int *)0xC247BDC) + 0x1);
            }
            return t103;
        }
        if (((*(int *)0xC2497E0) & 16) != 0) {
            *(unsigned int *)0xC247BD0 = 0x0;
            t109 = *(int *)0xC247BC8;
            *(unsigned int *)0xC247BC8 = (t109 - 1);
            if ((int)(t109 - 1) < 0) {
                *(unsigned int *)0xC247BC8 = (*(int *)0xC247BC4);
            }
            FUN_0c0db0a0((*(int *)0xC247BBC), (((*(int *)0xC247BC8) << 1) + (*(int *)0xC247BC0)));
            nlPrintf(0xC0F9FD8);
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlUnitMatrix();
            FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658B4));
            nlRotateAX(0x4000);
            nlRotateAY((-((*(int *)0xC247BD8) * 0x444)));
            FUN_0c0c465c(0x9C);
            nlUnitMatrix();
            FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658C8));
            nlRotateAX(0x4000);
            nlRotateAY((-((*(int *)0xC247BDC) * 0x444)));
            FUN_0c0c465c(0x9E);
            nlUnitMatrix();
            FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658CC));
            nlRotateAY((-((*(int *)0xC247BDC) * 0x444)));
            FUN_0c0c465c(0xD0F);
            nlPopMatrix(0x1);
            *(unsigned int *)0xC247BD8 = ((*(int *)0xC247BD8) + 0x1);
            t143 = FUN_0c0e5f1c();
            if (t143 == 0) {
                *(unsigned int *)0xC247BDC = ((*(int *)0xC247BDC) + 0x1);
            }
            return t143;
        }
        if (((*(int *)0xC2497E0) & 0x606) != 0) {
            FUN_0c0db0a0((*(int *)0xC247BBC), (((*(int *)0xC247BC8) << 1) + (*(int *)0xC247BC0)));
            t152 = nlPrintf(0xC0F9FD4);
            *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
            return t152;
        }
        FUN_0c0db0a0((*(int *)0xC247BBC), (((*(int *)0xC247BC8) << 1) + (*(int *)0xC247BC0)));
        nlPrintf(0xC0F9FD8);
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658B4));
        nlRotateAX(0x4000);
        nlRotateAY((-((*(int *)0xC247BD8) * 0x444)));
        FUN_0c0c465c(0x9C);
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658C8));
        nlRotateAX(0x4000);
        nlRotateAY((-((*(int *)0xC247BDC) * 0x444)));
        FUN_0c0c465c(0x9E);
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0658CC));
        nlRotateAY((-((*(int *)0xC247BDC) * 0x444)));
        FUN_0c0c465c(0xD0F);
        nlPopMatrix(0x1);
        *(unsigned int *)0xC247BD8 = ((*(int *)0xC247BD8) + 0x1);
        t184 = FUN_0c0e5f1c();
        if (t184 == 0) {
            *(unsigned int *)0xC247BDC = ((*(int *)0xC247BDC) + 0x1);
        }
        return t184;
    }
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c054ccc(0x0);
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0(0x2000, 1.33333325f, 9.99999975e-05f, 300.0f);
    FUN_0c0dc0b0(0x1);
    FUN_0c0844dc(0xDD00, 0x9C00, 0.699999988f);
    FUN_0c08455e(0.599999964f);
    *(unsigned int *)0xC23ED50 = 0x1;
    FUN_0c0bfa90();
    FUN_0c0c45d0();
    FUN_0c0c4290(0x0);
    *(unsigned int *)0xC247BB4 = 0x8;
    *(unsigned int *)0xC247BB8 = 0x10;
    *(unsigned int *)0xC247BBC = 0x5;
    *(unsigned int *)0xC247BC0 = 0x10;
    *(unsigned int *)0xC247BC8 = 0x0;
    *(unsigned int *)0xC247BD8 = 0x0;
    *(unsigned int *)0xC247BDC = 0x0;
    t200 = 0x0;
    for (;;) {
        if ((*(int *)((0xC1FFDB0 + (t200 << 2)))) == 0) {
            break;
        }
        FUN_0c0db0a0((*(int *)0xC247BB4), ((t200 << 1) + (*(int *)0xC247BB8)));
        nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t200 << 2))))));
        t200 = (t200 + 0x1);
    }
    *(unsigned int *)0xC247BC4 = (t200 - 1);
    t208 = FUN_0c084104();
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t208;
}

int FUN_0c0398b8(int a4)
{
    int t11;
    int t44;
    int t66;
    int t68;
    int t69;
    int t77;
    int t79;
    int t103;
    int t104;
    int t106;
    int t119;
    int t120;
    int t121;
    int t122;
    int stk[23];

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
    int T_;
    R4 = a4;
    L_C0398B8:;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    R0 = (0x5CC);
    R11 = (((*(int *)((((*(int *)((R4 + 0xC0))) << 2) + 0xC195AFC))) + ((*(int *)((R4 + 0xC4))) * 0x28A)));
    R12 = (0x0);
    R13 = ((((int)stk + 16) + 0x14));
    R14 = (R4);
    R9 = (0x1);
    if (((*(int *)((R4 + 0x5CC))) != 0)) goto L_C0398F8;
    goto L_C0398F4;
    L_C0398F4:;
    goto L_C039C56;
    L_C039C56:;
    return R0;
    L_C0398F8:;
    t11 = *(int *)((R14 + 0xC8));
    R0 = (t11);
    if (((t11 & 64) == 0)) goto L_C039904;
    goto L_C039900;
    L_C039900:;
    goto L_C039C56;
    L_C039904:;
    R0 = (0x57C);
    if (((*(int *)((R14 + 0x57C))) != 0)) goto L_C039910;
    goto L_C03990C;
    L_C03990C:;
    goto L_C039C56;
    L_C039910:;
    R4 = (R13);
    R5 = ((R13 + 0x18));
    R8 = (R13);
    goto L_C03991E;
    L_C03991E:;
    if (((unsigned int)R4 < (unsigned int)R5)) goto L_C03991A;
    goto L_C039922;
    L_C039922:;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((0x5D0 + R14) + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((0x5D0 + R14) + 0xC)));
    *(unsigned int *)((R14 + 0x580)) = R12;
    R0 = (0x580);
    R4 = ((0x5D0 + R14));
    if (((*(int *)(((((*(int *)((R14 + 0x580))) << 2) + (0x5D0 + R14)) + 0x0))) != 0)) goto L_C039952;
    goto L_C039942;
    L_C039942:;
    *(unsigned int *)(((((*(int *)((R14 + R0))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    goto L_C039952;
    L_C039952:;
    *(unsigned int *)((R14 + 0x580)) = R9;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    R10 = (0x2);
    if (((int)(*(int *)((R14 + 0x57C))) < (int)0x2)) goto L_C039974;
    goto L_C039970;
    L_C039970:;
    FUN_0c039354(R14);
    goto L_C039974;
    L_C039974:;
    R5 = (0x3);
    if (((*(int *)((R14 + 0x5D8))) == 0)) goto L_C0399A4;
    goto L_C03997E;
    L_C03997E:;
    *(unsigned int *)((R14 + 0x580)) = R10;
    *(unsigned int *)((R14 + 0x580)) = R5;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C0399A0;
    goto L_C03999C;
    L_C03999C:;
    goto L_C039AA4;
    L_C039AA4:;
    FUN_0c039354(R14);
    goto L_C039AA8;
    L_C039AA8:;
    *(unsigned int *)((R14 + 0x580)) = R9;
    t44 = *(int *)((R14 + 0x580));
    R0 = ((t44 << 2));
    if (((*(int *)((R13 + (t44 << 2)))) == 0)) goto L_C039B18;
    goto L_C039AB6;
    L_C039AB6:;
    R4 = (R12);
    R7 = (0x6);
    goto L_C039B14;
    L_C039B14:;
    if (((int)R4 < (int)R7)) goto L_C039AC8;
    goto L_C039B18;
    L_C039B18:;
    if (((*(int *)((R8 + 0x0))) == 0)) goto L_C039B26;
    goto L_C039B1E;
    L_C039B1E:;
    R0 = ((FUN_0c039288(R14, 0x1, 0x0)));
    goto L_C039B26;
    L_C039B26:;
    if (((*(int *)((R13 + 0x4))) == 0)) goto L_C039B44;
    goto L_C039B2C;
    L_C039B2C:;
    FUN_0c039288(R14, 0x0, 0x1);
    FUN_0c039288(R14, 0x9, 0x1);
    R0 = ((FUN_0c039288(R14, 0x2, 0x1)));
    goto L_C039B44;
    L_C039B44:;
    if (((*(int *)((R13 + 0x8))) == 0)) goto L_C039BA8;
    goto L_C039B4A;
    L_C039B4A:;
    FUN_0c039288(R14, 0x3, 0x2);
    FUN_0c039288(R14, 0x4, 0x2);
    FUN_0c039288(R14, 0x5, 0x2);
    t66 = *(int *)(((int)stk + 28));
    t68 = *(short *)(((((((t66 << 2) + t66) << 1) + (0x226 + R11)) + ((*(int *)((R14 + 0x5D8))) << 1)) + 0x0));
    t69 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (t69 + 0x1);
    R0 = ((FUN_0c038732(R14, 0x3, 0x4, 0x5, 0xA, ((((t68 << 1) + t68) << 2) + (0x1F0 + R11)), ((t69 + 0x1) - 1))));
    goto L_C039BA8;
    L_C039BA8:;
    if (((*(int *)((R13 + 0xC))) == 0)) goto L_C039C0A;
    goto L_C039BAE;
    L_C039BAE:;
    FUN_0c039288(R14, 0x6, 0x3);
    FUN_0c039288(R14, 0x7, 0x3);
    FUN_0c039288(R14, 0x8, 0x3);
    t77 = *(int *)(((int)stk + 32));
    t79 = *(short *)((((((((t77 << 2) + t77) << 1) + (0x226 + R11)) + ((*(int *)((R14 + 0x5DC))) << 1)) + 0x32) + 0x0));
    R0 = ((FUN_0c038732(R14, 0x6, 0x7, 0x8, 0xA, (((((t79 << 1) + t79) << 2) + (0x1F0 + R11)) + 0x6), ((*(int *)(((int)stk + 16)))))));
    goto L_C039C0A;
    L_C039C0A:;
    *(volatile int *)(((R13 + 0x10) + 0x0));
    *(volatile int *)(((R13 + 0x14) + 0x0));
    R4 = ((R13 + 0x10));
    R5 = ((R13 + 0x14));
    T_ = ((((*(int *)((R8 + 0x0))) == 0)));
    goto L_C039C34;
    L_C039C34:;
    if ((!T_)) goto L_C039C4E;
    goto L_C039C36;
    L_C039C36:;
    if (((*(int *)(((int)stk + 44))) != 0)) goto L_C039C4E;
    goto L_C039C3C;
    L_C039C3C:;
    if (((*(int *)(((int)stk + 48))) != 0)) goto L_C039C4E;
    goto L_C039C42;
    L_C039C42:;
    if (((*(int *)((R4 + 0x0))) != 0)) goto L_C039C4E;
    goto L_C039C48;
    L_C039C48:;
    if (((*(int *)((R5 + 0x0))) == 0)) goto L_C039C56;
    goto L_C039C4E;
    L_C039C4E:;
    R0 = ((FUN_0c0cc3f8(0x12CA9, R5, R6, R7, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28))));
    goto L_C039C56;
    L_C039AC8:;
    t103 = *(int *)(((((*(int *)(((0x580 + R14) + 0x0))) << 2) + (0x5D0 + R14)) + 0x0));
    t104 = *(signed char *)((R4 + ((((*(int *)((R14 + 0x580))) * 0x1E) + (0x96 + R11)) + ((t103 << 1) + (t103 << 2)))));
    t106 = (int)(*(int *)(((0x5D0 + R14) + (R4 << 2)))) >= (int)(unsigned char)t104;
    R0 = ((R4 << 2));
    R10 = ((R4 << 2));
    R4 = ((R4 + 0x1));
    R5 = ((unsigned char)t104);
    R6 = ((0x5D0 + R14));
    if (t106) goto L_C039B14;
    goto L_C039B06;
    L_C039B06:;
    *(unsigned int *)((((0x5D0 + R14) + R10) + 0x0)) = R5;
    *(unsigned int *)((R13 + R10)) = R9;
    R0 = (R10);
    goto L_C039B14;
    L_C0399A0:;
    goto L_C039AA8;
    L_C0399A4:;
    if (((*(int *)((R14 + 0x5DC))) == 0)) goto L_C0399E4;
    goto L_C0399AC;
    L_C0399AC:;
    *(unsigned int *)((R14 + 0x580)) = R5;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039AA8;
    goto L_C0399C8;
    L_C0399C8:;
    goto L_C039AA4;
    L_C0399E4:;
    *(unsigned int *)(((int)stk + 20)) = (((0x96 + R11) + 0x1E) + 0x6);
    t119 = *(signed char *)(((((0x96 + R11) + 0x1E) + 0x6) + 0x2));
    *(unsigned int *)(((int)stk + 24)) = (((0x96 + R11) + 0x1E) + 0xC);
    t120 = *(signed char *)(((((0x96 + R11) + 0x1E) + 0xC) + 0x2));
    t121 = *(signed char *)(((((0x96 + R11) + 0x1E) + 0x12) + 0x2));
    t122 = *(signed char *)(((((0x96 + R11) + 0x1E) + 0x18) + 0x2));
    R4 = (((((unsigned char)t119 + (unsigned char)t120) + (unsigned char)t121) + (unsigned char)t122));
    R6 = (((((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x3))) + (unsigned char)(*(signed char *)(((((0x96 + R11) + 0x1E) + 0xC) + 0x3)))) + (unsigned char)(*(signed char *)(((((0x96 + R11) + 0x1E) + 0x12) + 0x3)))) + (unsigned char)(*(signed char *)(((((0x96 + R11) + 0x1E) + 0x18) + 0x3)))));
    if ((((((unsigned char)t119 + (unsigned char)t120) + (unsigned char)t121) + (unsigned char)t122) == 0)) goto L_C039A54;
    goto L_C039A34;
    L_C039A34:;
    *(unsigned int *)((R14 + 0x580)) = R10;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039AA8;
    goto L_C039A50;
    L_C039A50:;
    goto L_C039AA4;
    L_C039A54:;
    if ((R6 == 0)) goto L_C039A78;
    goto L_C039A58;
    L_C039A58:;
    *(unsigned int *)((R14 + 0x580)) = R5;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039AA8;
    goto L_C039A74;
    L_C039A74:;
    goto L_C039AA4;
    L_C039A78:;
    FUN_0c0da2e0();
    if ((R12 == 0)) goto L_C039A86;
    goto L_C039A82;
    L_C039A82:;
    R1 = (0x2);
    goto L_C039A88;
    L_C039A88:;
    *(unsigned int *)((R14 + 0x580)) = R1;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039AA8;
    goto L_C039AA4;
    L_C039A86:;
    R1 = (0x3);
    goto L_C039A88;
    L_C03991A:;
    *(unsigned int *)((R4 + 0x0)) = R12;
    R4 = ((R4 + 0x4));
    goto L_C03991E;
}

int FUN_0c0987a4(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t5;
    int t10;
    int t20;
    int t26;
    int t29;
    int t30;
    int t31;
    int t38;
    float u43;
    int t68;
    int t69;
    int t71;
    int t72;
    float u73;
    float u74;
    float u75;
    float u80;
    float u82;
    float u83;
    float u85;
    float u86;
    float u87;
    float u88;
    float u89;
    float u92;
    float u93;
    float u104;
    float u126;
    int t129;
    int t131;
    int t133;
    int t57;
    float u64;
    float u66;
    float u67;
    int t45;
    float u52;
    float u54;
    float u55;
    int t70;
    int t116;
    float u119;
    float u120;
    int t139;
    int stk[17];

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x30));
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 == 0) {
        t5 = *(int *)((a4 + 0x34));
        if (t5 == 0) {
            t45 = t5;
        } else {
            *(volatile int *)((a4 + 0x30));
            t10 = FUN_0c0e5f1c();
            *(unsigned int *)(((int)stk + 12)) = t10;
            *(unsigned int *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x0)) = 0x14;
            *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x4)) = (((float)(unsigned char)(FUN_0c0da2e0()) / 512.0f) + 0.5f);
            *(unsigned int *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x14)) = (FUN_0c0da2e0());
            *(unsigned int *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x8)) = ((*(int *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x8))) + 0x1);
            *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x18)) = (*(float *)(((*(int *)((a4 + 0x38))) + 0x0)));
            *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x1C)) = (*(float *)(((*(int *)((a4 + 0x38))) + 0x4)));
            *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x20)) = (*(float *)(((*(int *)((a4 + 0x38))) + 0x8)));
            t20 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t20 + 0xC);
            *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x24)) = (*(float *)(((t20 + 0xC) + 0x0)));
            *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x28)) = (*(float *)(((*(int *)((a4 + 0x38))) + 0x4)));
            *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x2C)) = (*(float *)(((*(int *)((a4 + 0x38))) + 0x8)));
            t26 = *(int *)((a4 + 0x34));
            *(unsigned int *)((a4 + 0x34)) = (t26 - 1);
            if ((int)(t26 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x30)) = 0x3C;
            }
            t29 = *(int *)(((int)stk + 12));
            t30 = 0x0;
            t31 = ((((t29 << 1) + (t29 << 2)) * 0x1C) + (0xB4 + a4));
            for (;;) {
                *(unsigned int *)((t31 + 0x18)) = 0x28;
                *(float *)((t31 + 0x0)) = (*(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x24)));
                *(float *)((t31 + 0x4)) = (*(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x28)));
                *(float *)((t31 + 0x8)) = (*(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x2C)));
                *(float *)((t31 + 0xC)) = ((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f) + -0.25f);
                *(float *)((t31 + 0x10)) = ((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f) + -0.25f);
                t30 = (t30 + 0x1);
                *(float *)((t31 + 0x14)) = ((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f) + -0.25f);
                t31 = (t31 + 0x1C);
                if ((int)t30 >= (int)0x6) {
                    break;
                }
            }
            t38 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((((((t38 << 1) + t38) << 2) << 1) + (a4 + 0x3C)) + 0x0)) = 0x14;
            *(unsigned int *)(((((((t38 << 1) + t38) << 2) << 1) + (a4 + 0x3C)) + 0x10)) = ((-((FUN_0c0da2e0()) & 0x4000)) + 0xE000);
            *(float *)(((((((t38 << 1) + t38) << 2) << 1) + (a4 + 0x3C)) + 0x14)) = (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f) + 0.5f);
            *(float *)(((((((t38 << 1) + t38) << 2) << 1) + (a4 + 0x3C)) + 0x4)) = (*(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x24)));
            *(float *)(((((((t38 << 1) + t38) << 2) << 1) + (a4 + 0x3C)) + 0x8)) = (*(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x28)));
            u43 = *(float *)(((((((t10 << 1) + t10) << 2) << 2) + (0x3FC + a4)) + 0x2C));
            *(float *)(((((((t38 << 1) + t38) << 2) << 1) + (a4 + 0x3C)) + 0xC)) = u43;
            u52 = -0.25f;
            u54 = 255.0f;
            u55 = u43;
        }
        t57 = t45;
        u64 = u52;
        u66 = u54;
        u67 = u55;
    }
    t68 = 0xC098A80;
    t69 = t57;
    t71 = 0x0;
    t72 = (0x3FC + a4);
    u73 = u66;
    u74 = u67;
    u75 = u64;
    for (;;) {
        if ((*(int *)((t72 + 0x0))) != 0) {
            t68 = 0x4;
            u73 = 0.0f;
            u74 = (*(float *)((t72 + t68)));
            if (u74 != u73) {
                t68 = 0x24;
                u74 = (*(float *)((t72 + t68)));
                t68 = 0x18;
                u80 = *(float *)((t72 + t68));
                t68 = 0x28;
                u82 = (u80 - u74);
                u74 = (*(float *)((t72 + t68)));
                t68 = 0x1C;
                u83 = *(float *)((t72 + t68));
                t68 = 0x2C;
                u85 = (u83 - u74);
                u74 = (*(float *)((t72 + t68)));
                t68 = 0x20;
                u86 = *(float *)((t72 + t68));
                t68 = 0xC;
                u87 = (u86 - u74);
                u74 = u85;
                u74 = (u74 * u85);
                u88 = u74;
                u88 = u88 + u82 * u82;
                u74 = u88;
                u89 = u74;
                u89 = u89 + u87 * u87;
                u74 = u89;
                u74 = _builtin_sqrtf(u74);
                *(float *)((((int)stk + 4) + t68)) = u74;
                t68 = (FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), u82, u85, u87));
                t70 = 0xC0DC510;
                t68 = (nlPushMatrix(0x0));
                t68 = 0x20;
                u92 = *(float *)((t72 + t68));
                t68 = 0x1C;
                u93 = *(float *)((t72 + t68));
                t68 = 0x18;
                t68 = (FUN_0c0dcc70((*(float *)((t72 + t68))), u93, u92));
                t68 = (nlRotateAY((*(int *)(((int)stk + 8)))));
                t68 = (nlRotateAX((*(int *)(((int)stk + 4)))));
                t70 = 0xC0DC950;
                t68 = (nlRotateAZ((*(int *)((t72 + 0x14)))));
                t68 = 0xC;
                u75 = (*(float *)((((int)stk + 4) + t68)));
                u75 = (u75 * 0.166666657f);
                t68 = (nlScale(4.0f, 4.0f, u75));
                u104 = 4.0f;
                if (u75 > 4.0f) {
                    u104 = u75;
                }
                t70 = 0xC0DE000;
                t68 = (FUN_0c0de000(u104));
                t68 = (nlRotateAY(0x3FFF));
                t70 = 0xC200AEC;
                u74 = (float)(*(int *)((t72 + 0x0)));
                t69 = 0xC200AE8;
                u75 = u74;
                u75 = (u75 / 20.0f);
                t68 = (FUN_0c0848bc(((*(float *)((t69 + 0x0))) * u75), ((*(float *)((t70 + 0x0))) * u75), ((*(float *)0xC200AF0) * u75)));
                t70 = 0xC0C465C;
                t68 = (FUN_0c0c465c(0x2B0));
                t68 = (nlPopMatrix(0x1));
            } else {
                t116 = t69;
                u119 = u73;
                u120 = u74;
            }
            u73 = u119;
            u74 = u120;
            t69 = t116;
            t70 = (*(int *)((t72 + 0x0)));
            t70 = (t70 - 1);
            *(unsigned int *)((t72 + 0x0)) = t70;
        }
        t71 = (t71 + 0x1);
        t72 = (t72 + 0x30);
        if ((int)t71 >= (int)0x5) {
            break;
        }
    }
    FUN_0c096094((0xB4 + a4), 0x1E);
    u126 = *(float *)0xC098BE0;
    FUN_0c084800(u126, u126, 1.0f);
    FUN_0c095fa0((a4 + 0x3C), 0x5);
    t129 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    if ((int)(*(int *)((a4 + 0x34))) <= 0) {
        t131 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t131 - 1);
        t133 = t129;
        if ((int)(t131 - 1) <= 0) {
            t133 = (FUN_0c0e19f2());
        }
        t139 = t133;
    } else {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        t139 = t129;
    }
    return t139;
}
