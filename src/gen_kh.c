/* Straight-line functions with calls and guards (batch gen_kh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0845f8(int, int);
int FUN_0c084622(int, float, float, float);
int FUN_0c0846a6(int, float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c086b70(void);
int FUN_0c08b678(int, float, float);
int FUN_0c08b87a(int);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0b1606(void);
int FUN_0c0b16cc(void);
int FUN_0c0b17dc(void);
int FUN_0c0b18e0(void);
int FUN_0c0b19fc(void);
int FUN_0c0b1b3c(void);
int FUN_0c0b1c64(void);
int FUN_0c0b1d80(void);
int FUN_0c0b1ec8(void);
int FUN_0c0b1fb4(void);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c067b98(int a4);
int FUN_0c08cee8(int a4);
int FUN_0c0afb10(int a4);
int FUN_0c088bc8(int a4);
int FUN_0c0b1330(int a4);

int FUN_0c067b98(int a4)
{
    register int t0;
    int t1;
    register float u0;
    register float u1;

    if (((int)(*(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC247030))) >= (int)0x2) && ((t0 = *(int *)0xC23ED5C, (t0 & 6) == 0) && (t1 = *(int *)((a4 + 0x80)), t1 == 0))) {
    } else {
        FUN_0c0845f8((*(int *)((a4 + 0x88))), 0x0);
        FUN_0c0e19f2();
    }
    t0 = *(int *)((a4 + 0x8C));
    FUN_0c084622((*(int *)((a4 + 0x88))), (*(float *)((t0 + 0x22C))), (*(float *)((t0 + 0x230))), (*(float *)((t0 + 0x234))));
    if ((int)(*(int *)((t0 + 0x304))) <= 0) {
        t0 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x78) {
            *(unsigned int *)((a4 + 0x80)) = 0x1;
        }
        u0 = ((-((float)(*(int *)((a4 + 0xA0))) * 0.0199999996f)) + 1.0f);
        return FUN_0c0846a6((*(int *)((a4 + 0x88))), (*(float *)((a4 + 0x48))), ((*(float *)((a4 + 0x4C))) * u0), (*(float *)((a4 + 0x50))));
    }
    if ((*(int *)((a4 + 0x98))) != 0) {
        *(unsigned short *)((a4 + 0x64)) = ((*(short *)((a4 + 0x64))) + 0x400);
        u0 = (*(float *)0xC067D7C);
        u0 = u0 + (*(float *)0xC067D80) * ((FUN_0c0da410((*(short *)((a4 + 0x64))))) + 1.0f);
        *(float *)((a4 + 0x50)) = u0;
        *(float *)((a4 + 0x4C)) = ((*(float *)0xC067D88) - (u0 * (*(float *)0xC067D84)));
        u1 = (*(float *)0xC067D8C);
        u1 = u1 + (*(float *)0xC067D90) * u0;
        *(float *)((a4 + 0x48)) = u1;
        return FUN_0c0846a6((*(int *)((a4 + 0x88))), (*(float *)((a4 + 0x48))), (*(float *)((a4 + 0x4C))), (*(float *)((a4 + 0x50))));
    }
    return 0x98;
}

int FUN_0c08cee8(int a4)
{
    int stk[26];
    register int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;

    t0 = *(int *)0xC23ED5C;
    t1 = *(int *)0xC23EE00;
    if (((t0 & 6) == 0) && (t1 != 0)) {
    } else {
        t2 = t0;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if (((*(int *)(((0xC247030 + t4) + 0x0))) != 0) && (t2 = 0x38C, t6 = *(int *)(((0xC246FF0 + t3) + 0x0)), t7 = *(int *)((t6 + t2)), t7 != 0)) {
                *(unsigned int *)((t6 + t2)) = 0x0;
            }
            t2 = (FUN_0c086b70());
            t4 = (t4 + 0x4);
            t3 = (t3 + 0x4);
            if ((unsigned int)t4 >= (unsigned int)0x30) {
                break;
            }
        }
        FUN_0c0e19f2();
    }
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x3C);
    *(float *)(((((int)stk + 4) + 0x3C) + 0x0)) = 0.0f;
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x3C) + 0x4);
    *(float *)((((((int)stk + 4) + 0x3C) + 0x4) + 0x0)) = -10.0f;
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x3C) + 0x8);
    *(float *)((((((int)stk + 4) + 0x3C) + 0x8) + 0x0)) = -70.0f;
    FUN_0c0dc5a0();
    nlRotateAZ((*(short *)((t1 + 0x64))));
    nlRotateAY((*(short *)((t1 + 0x62))));
    nlRotateAX((*(short *)((t1 + 0x60))));
    *(float *)(((int)stk + 28)) = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(float *)(((int)stk + 32)) = (*(float *)(((*(int *)(((int)stk + 4))) + 0x0)));
    *(float *)(((int)stk + 36)) = (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x30);
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x30) + 0x4);
    *(float *)((((((int)stk + 4) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x30) + 0x8);
    *(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 40)) = ((*(float *)((t1 + 0x30))) + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(float *)(((int)stk + 44)) = ((*(float *)((t1 + 0x34))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(float *)(((int)stk + 48)) = ((*(float *)((t1 + 0x38))) + (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
    FUN_0c08b678((((int)stk + 4) + 0x24), 80.0f, 3.0f);
    return (FUN_0c08b87a((((int)stk + 4) + 0x24)));
}

int FUN_0c0afb10(int a4)
{
    int stk[15];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register int t6;
    register int t10;
    register int t12;
    register float u16;
    register float u18;
    register float u21;
    register float u23;
    register int t26;
    register int t27;
    register int t28;
    register int t29;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    nlPushMatrix(0x0);
    u1 = *(float *)0xC0AFC54;
    u2 = *(float *)0xC0AFC58;
    u3 = *(float *)0xC0AFC5C;
    u4 = *(float *)0xC0AFC60;
    for (;;) {
        t6 = FUN_0c0e19aa(0xC0AFCA4, 0x58, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t6);
        nlUnitMatrix();
        FUN_0c0dcca0(0xC110504);
        t10 = FUN_0c0da2e0();
        nlRotateAY(((t10 & 0x7FFF) - 16384));
        t12 = FUN_0c0da2e0();
        nlRotateAX(((t12 & 0xFFF) - 2048));
        u16 = (*(float *)0xC0AFC8C);
        u16 = u16 + u1 * (float)(FUN_0c0da2e0());
        *(float *)((t6 + 0x38)) = u16;
        u18 = u3;
        u18 = u18 + u4 * (float)(FUN_0c0da2e0());
        *(float *)((t6 + 0x44)) = u18;
        u21 = u3;
        u21 = u21 + (*(float *)0xC0AFC90) * (float)(FUN_0c0da2e0());
        *(float *)((t6 + 0x48)) = u21;
        u23 = u2;
        u23 = u23 + u4 * (float)(FUN_0c0da2e0());
        *(float *)((t6 + 0x50)) = u23;
        *(unsigned int *)((t6 + 0x54)) = 0x78;
        FUN_0c0db470((t6 + 0x30), (t6 + 0x30));
        FUN_0c0db4d0((t6 + 0x3C), (t6 + 0x3C));
        t26 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t26 - 1);
        if ((t26 - 1) == 0) {
            break;
        }
    }
    t27 = nlPopMatrix(0x1);
    t28 = *(int *)(((int)stk + 8));
    t29 = *(int *)((t28 + 0x34));
    *(unsigned int *)((t28 + 0x34)) = (t29 - 1);
    if ((int)(t29 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t27;
}

int FUN_0c088bc8(int a4)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t5;
    register float u6;
    register float u27;
    register float u31;
    register int t46;
    register int t49;
    float u47;

    t0 = *(short *)(((0x5E + a4) + 0x0));
    t1 = *(short *)((a4 + 0x5C));
    *(unsigned short *)((a4 + 0x5C)) = (t1 + t0);
    t5 = *(int *)((a4 + 0x60));
    u6 = (*(float *)((a4 + 0x50)));
    u6 = u6 + (FUN_0c0da410((short)(t1 + t0))) * (*(float *)((a4 + 0x58)));
    if ((t5 & 31) == 0) {
        *(unsigned int *)(((0x48 + a4) + 0x0)) = (((FUN_0c0da2e0()) & 0x3) + 0xFB);
    }
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 0.049999997f);
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((a4 + 0x3C))), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    u27 = *(float *)((a4 + 0x50));
    nlScale(u27, u6, u27);
    FUN_0c0de000((u6 + (*(float *)((a4 + 0x50)))));
    u31 = *(float *)((a4 + 0x4C));
    FUN_0c0848d6(u31, u31, u31);
    FUN_0c0c465c((*(int *)((a4 + 0x48))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0199999996f);
    if ((int)(*(int *)((a4 + 0x60))) < (int)0x8) {
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) * 0.799999952f);
    }
    t46 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t46 - 1);
    t49 = 0x34;
    if (((int)(t46 - 1) > 0) && (u47 = *(float *)((a4 + 0x34)), u47 > 0.0f)) {
    } else {
        t49 = (FUN_0c0e19f2());
    }
    return t49;
}

int FUN_0c0b1330(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        return t0;
                                    }
                                    t0 = *(int *)((a4 + 0xA0));
                                    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                                    if ((int)(t0 - 1) <= 0) {
                                        FUN_0c0b1ec8();
                                        FUN_0c0b1fb4();
                                        return FUN_0c0e19f2();
                                    }
                                    return 0xA0;
                                }
                                t0 = *(int *)((a4 + 0xA0));
                                *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                                t1 = 0xA0;
                                if ((int)(t0 - 1) <= 0) {
                                    FUN_0c0b1d80();
                                    *(unsigned int *)((a4 + 0xA0)) = 0x26C;
                                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                                    t1 = 0x80;
                                }
                                return t1;
                            }
                            t0 = *(int *)((a4 + 0xA0));
                            *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                            t1 = 0xA0;
                            if ((int)(t0 - 1) <= 0) {
                                FUN_0c0b1c64();
                                *(unsigned int *)((a4 + 0xA0)) = 0x17C;
                                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                                t1 = 0x80;
                            }
                            return t1;
                        }
                        t0 = *(int *)((a4 + 0xA0));
                        *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                        t1 = 0xA0;
                        if ((int)(t0 - 1) <= 0) {
                            FUN_0c0b1b3c();
                            *(unsigned int *)((a4 + 0xA0)) = 0xF0;
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                            t1 = 0x80;
                        }
                        return t1;
                    }
                    t0 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                    t1 = 0xA0;
                    if ((int)(t0 - 1) <= 0) {
                        FUN_0c0b19fc();
                        *(unsigned int *)((a4 + 0xA0)) = 0x244;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        t1 = 0x80;
                    }
                    return t1;
                }
                t0 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                t1 = 0xA0;
                if ((int)(t0 - 1) <= 0) {
                    FUN_0c0b18e0();
                    *(unsigned int *)((a4 + 0xA0)) = 0x262;
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    t1 = 0x80;
                }
                return t1;
            }
            t0 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
            t1 = 0xA0;
            if ((int)(t0 - 1) <= 0) {
                FUN_0c0b17dc();
                *(unsigned int *)((a4 + 0xA0)) = 0x258;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                t1 = 0x80;
            }
            return t1;
        }
        t0 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
        t1 = 0xA0;
        if ((int)(t0 - 1) <= 0) {
            FUN_0c0b16cc();
            *(unsigned int *)((a4 + 0xA0)) = 0x26C;
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            t1 = 0x80;
        }
        return t1;
    }
    FUN_0c0b1606();
    *(unsigned int *)((a4 + 0xA0)) = 0x12C;
    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    t0 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
    t1 = 0xA0;
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0b16cc();
        *(unsigned int *)((a4 + 0xA0)) = 0x26C;
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t1 = 0x80;
    }
    return t1;
}
