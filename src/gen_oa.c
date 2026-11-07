/* Straight-line functions with calls and guards (batch gen_oa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0498ce(void);
int FUN_0c054ccc(int);
int FUN_0c054d8e(void);
int FUN_0c084104(void);
int FUN_0c084218(void);
int FUN_0c0844dc(int, int, float);
int FUN_0c08455e(float);
int FUN_0c0bfa90(void);
int FUN_0c0c4290(int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
extern int FUN_0c0d8c40();
int FUN_0c0db0a0(int, int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0e5f1c(void);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c06546c(float f4);

int FUN_0c06546c(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC23A190;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 == 2) {
                t0 = *(int *)0xC247BC8;
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            if (t0 != 3) {
                                if (t0 != 4) {
                                    if (t0 != 5) {
                                        if (t0 != 6) {
                                            if (t0 != 7) {
                                                if (t0 != 8) {
                                                    if (t0 != 9) {
                                                        t2 = t0;
                                                        if (t0 != 10) {
                                                        } else {
                                                            *(unsigned int *)0xC23A180 = 0x15;
                                                            *(unsigned int *)0xC23A190 = 0x0;
                                                            t2 = 0x15;
                                                        }
                                                        t3 = t2;
                                                    } else {
                                                        *(unsigned int *)0xC23A180 = 0x14;
                                                        *(unsigned int *)0xC23A190 = 0x0;
                                                        t3 = t0;
                                                    }
                                                    t2 = t3;
                                                } else {
                                                    *(unsigned int *)0xC23A180 = 0x13;
                                                    *(unsigned int *)0xC23A190 = 0x0;
                                                    t2 = t0;
                                                }
                                                t3 = t2;
                                            } else {
                                                *(unsigned int *)0xC23A180 = 0x12;
                                                *(unsigned int *)0xC23A190 = 0x0;
                                                t3 = 0x12;
                                            }
                                            t2 = t3;
                                        } else {
                                            *(unsigned int *)0xC23A180 = 0x11;
                                            *(unsigned int *)0xC23A190 = 0x0;
                                            t2 = t0;
                                        }
                                        t3 = t2;
                                    } else {
                                        *(unsigned int *)0xC23A180 = 0xC;
                                        *(unsigned int *)0xC23A190 = 0x0;
                                        t3 = 0xC;
                                    }
                                    t2 = t3;
                                } else {
                                    *(unsigned int *)0xC23A180 = 0xB;
                                    *(unsigned int *)0xC23A190 = 0x0;
                                    t2 = t0;
                                }
                                t3 = t2;
                            } else {
                                *(unsigned int *)0xC23A180 = 0xA;
                                *(unsigned int *)0xC23A190 = 0x0;
                                t3 = 0xA;
                            }
                            t2 = t3;
                        } else {
                            *(unsigned int *)0xC23A180 = 0x8;
                            *(unsigned int *)0xC23A190 = 0x0;
                            t2 = t0;
                        }
                        t0 = t2;
                    } else {
                        t2 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x201000, 0x200010, f4);
                        *(unsigned int *)0xC23A180 = 0x4;
                        *(unsigned int *)0xC23A190 = 0x0;
                        t0 = t2;
                    }
                    t2 = t0;
                } else {
                    t0 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x0, 0x0, f4);
                    *(unsigned int *)0xC23A180 = 0x1;
                    *(unsigned int *)0xC23A190 = 0x0;
                    *(unsigned int *)0xC23A18C = 0x0;
                    t2 = t0;
                }
                t1 = t2;
            }
            return t1;
        }
        FUN_0c084218();
        t0 = ((int (*)(int, int, int))(FUN_0c0d8c40))(0x0, 0x2020, 0x2020);
        t0 = 0x0;
        for (;;) {
            if ((*(int *)((0xC1FFDB0 + (t0 << 2)))) == 0) {
                break;
            }
            FUN_0c0db0a0((*(int *)0xC247BB4), ((t0 << 1) + (*(int *)0xC247BB8)));
            nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t0 << 2))))));
            t0 = (t0 + 0x1);
        }
        FUN_0c0db0a0((*(int *)0xC247BBC), (((*(int *)0xC247BC8) << 1) + (*(int *)0xC247BC0)));
        nlPrintf(0xC0F9FD4);
        if (((*(int *)0xC2497E0) & 32) != 0) {
            *(unsigned int *)0xC247BD0 = 0x0;
            t0 = *(int *)0xC247BC8;
            *(unsigned int *)0xC247BC8 = (t0 + 0x1);
            if ((int)(t0 + 0x1) > (int)(*(int *)0xC247BC4)) {
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
            t0 = FUN_0c0e5f1c();
            if (t0 == 0) {
                *(unsigned int *)0xC247BDC = ((*(int *)0xC247BDC) + 0x1);
            }
            return t0;
        }
        if (((*(int *)0xC2497E0) & 16) != 0) {
            *(unsigned int *)0xC247BD0 = 0x0;
            t0 = *(int *)0xC247BC8;
            *(unsigned int *)0xC247BC8 = (t0 - 1);
            if ((int)(t0 - 1) < 0) {
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
            t0 = FUN_0c0e5f1c();
            if (t0 == 0) {
                *(unsigned int *)0xC247BDC = ((*(int *)0xC247BDC) + 0x1);
            }
            return t0;
        }
        if (((*(int *)0xC2497E0) & 0x606) != 0) {
            FUN_0c0db0a0((*(int *)0xC247BBC), (((*(int *)0xC247BC8) << 1) + (*(int *)0xC247BC0)));
            t0 = nlPrintf(0xC0F9FD4);
            *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
            return t0;
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
        t0 = FUN_0c0e5f1c();
        if (t0 == 0) {
            *(unsigned int *)0xC247BDC = ((*(int *)0xC247BDC) + 0x1);
        }
        return t0;
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
    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC1FFDB0 + (t0 << 2)))) == 0) {
            break;
        }
        FUN_0c0db0a0((*(int *)0xC247BB4), ((t0 << 1) + (*(int *)0xC247BB8)));
        nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t0 << 2))))));
        t0 = (t0 + 0x1);
    }
    *(unsigned int *)0xC247BC4 = (t0 - 1);
    t0 = FUN_0c084104();
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t0;
}
