/* Straight-line functions with calls and guards (batch gen_it): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXT_Stop(void);
int FUN_0c01cdc2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01d636(int, int, int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c02c4f6(int);
int FUN_0c03217c(int, int, int);
int FUN_0c0321d4(int, int);
int FUN_0c038ce0(int, int);
int FUN_0c046134(int);
int FUN_0c046968(int);
int FUN_0c049b80(int);
int FUN_0c053dcc(int, int);
int FUN_0c061fb8(int);
int FUN_0c062034(int);
int FUN_0c068d54(int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c084622(int, float, float, float);
int FUN_0c084658(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c084730(int, int);
int FUN_0c08476e(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c085704(int);
int FUN_0c08fea2(int);
int FUN_0c090110(int);
int FUN_0c0903dc(int);
int FUN_0c0b145c(int, float);
int FUN_0c0b32a8(int);
int FUN_0c0b4b62(int);
int FUN_0c0b4b98(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
int FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0de9c0(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e262a(int);
extern int FUN_0c0e5f1c();
int FUN_0c0e6248(void);
int FUN_0c22cd5e(int, int);
int FUN_0c22cfdc(void);
int FUN_0c22cff4(int, int);
int adxt_start_sj(int, int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c068a90(void);
int FUN_0c049308(int a4);
int FUN_0c0618dc(int a4, int a5, int a6, int a7);
int FUN_0c067654(void);
int FUN_0c02ea20(int a4, int a5, int a6, int a7);
int FUN_0c03b40c(int a4, int a5);
int FUN_0c0786a0(int a4, int a5, int a6, int a7);
void FUN_0c07b640(void);
int FUN_0c22d2b8(int a4, int a5, int a6);
int FUN_0c0172a0(int a4, int a5, int a6, int a7);
int FUN_0c0b07a8(int a4, int a5, int a6, int a7);
int FUN_0c213640(int a4, int a5, int a6);
int FUN_0c04f9dc(int a4);
int FUN_0c05e41c(int a4, int a5, int a6, int a7);
int FUN_0c0b1eec(int a4, int a5, int a6, int a7);
int FUN_0c02c55a(int a4, float f4, float f5);
int FUN_0c05c200(int a4, int a5);
int FUN_0c0aba56(int a4, float f4);
int FUN_0c04e236(int a4);
void FUN_0c05f930(int a4, int a5);
int FUN_0c0759be(int a4);
int FUN_0c0b4c50(int a4, int a5, int a6, int a7);

int FUN_0c068a90(void)
{
    int stk[11];
    register float u0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t17;
    register int t15;
    register int t1;

    u0 = *(float *)0xC068BA4;
    t2 = 0x0;
    t3 = 0xC0FA3F0;
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = ((t2 << 1) + t2);
        t4 = 0x0;
        for (;;) {
            t6 = FUN_0c0e19aa(0xC068B62, 0x24C, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t6);
            *(unsigned int *)((t6 + 0x22C)) = 0x0;
            *(unsigned int *)((t6 + 0x230)) = 0x3;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)(t3); }
            FUN_0c0e6248();
            *(unsigned int *)(((0x21C + t6) + 0x0)) = (unsigned short)(*(short *)((t3 + 0x12)));
            *(unsigned int *)((t6 + 0x78)) = 0xC1B6844;
            *(unsigned int *)((t6 + 0x74)) = 0x15;
            *(unsigned int *)((t6 + 0xC0)) = t4;
            *(unsigned int *)((t6 + 0xBC)) = (((*(int *)(((int)stk + 4))) + t4) + 0x10);
            FUN_0c01ce40(t6, 0xC1BC6F4, u0);
            if ((int)t4 > 0) {
                *(unsigned int *)((t6 + 0x228)) = t1;
            }
            t1 = t6;
            t3 = (t3 + 0x14);
            t17 = t4;
            if (t4 == 2) {
                t15 = t2;
                if (t2 == 1) {
                    t15 = (FUN_0c068d54(t6));
                }
                t17 = t15;
            }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x3) {
                break;
            }
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x3) {
            break;
        }
    }
    return t17;
}

int FUN_0c049308(int a4)
{
    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC049276;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        *(unsigned int *)((a4 + 0x558)) = 0xC;
        *(unsigned int *)(((0x4D4 + a4) + 0x0)) = (FUN_0c046134(a4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        *(float *)((a4 + 0x24C)) = (*(float *)0xC049424);
        *(float *)((a4 + 0x250)) = (*(float *)0xC049428);
        *(float *)((a4 + 0x254)) = 0.0f;
    }
    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(0x8));
        *(unsigned int *)((a4 + 0x478)) = 0xC0492CE;
        FUN_0c046968(a4);
    }
    if ((int)(*(int *)((a4 + 0x558))) >= 0) {
        if (!(((float)(*(int *)((a4 + 0x308))) * (*(float *)0xC049438)) > (float)(*(int *)((a4 + 0x304))))) {
            *(unsigned int *)((a4 + 0x4F0)) = 0x2E;
        } else {
            *(unsigned int *)((a4 + 0x558)) = 0x0;
        }
    } else {
        if ((float)(*(int *)((a4 + 0x304))) > ((float)(*(int *)((a4 + 0x308))) * (*(float *)0xC04943C))) {
            *(unsigned int *)((a4 + 0x4F0)) = 0x2F;
        } else {
            *(unsigned int *)((a4 + 0x4F0)) = 0x30;
        }
    }
    *(unsigned int *)((a4 + 0x4F4)) = 0x32;
    return 0x4F4;
}

int FUN_0c0618dc(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t14;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        if ((*(int *)((a4 + 0xD8))) == 1) {
            if ((*(int *)((a4 + 0x244))) == 1) {
                FUN_0c062034(a4);
            } else {
                FUN_0c061fb8(a4);
            }
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t14 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t14 - 1);
        if ((int)(t14 - 1) <= 0) {
            FUN_0c0e19f2(a4, a5, a6, a7);
        }
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (-(*(float *)((a4 + 0x50))));
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    nlAddVector((a4 + 0x30), (((int)stk + 4) + 0x18));
    return (FUN_0c01cdc2(a4));
}

int FUN_0c067654(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC067784, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)(0xC1FFE0C); }
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)(*(short *)0xC1FFE1E);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)(0xC1FFE20); }
    FUN_0c0e6248();
    FUN_0c0de9c0();
    FUN_0c0845e8(0x1);
    FUN_0c08476e(0.5f, 0.5f, 0.5f);
    FUN_0c0845f0(0x1);
    FUN_0c084610(0x0, 0x4);
    FUN_0c084658(0x0, 0.0f, (-1.0f), 0.0f);
    FUN_0c0846be(0x0, 60.0f);
    FUN_0c0846de(0x0, 0.0f, 0.849999964f, 0.73999995f, 0.619999945f);
    FUN_0c084730(0x0, 0x1800);
    FUN_0c0845f8(0x0, 0x1);
    return FUN_0c084622(0x0, (*(float *)((t1 + 0x54))), (*(float *)((t1 + 0x58))), (*(float *)((t1 + 0x5C))));
}

int FUN_0c02ea20(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t6;

    if ((int)(*(int *)((a4 + 0x544))) >= 0) {
        t1 = *(int *)((a4 + 0x4F0));
        t6 = *(int *)((((*(int *)(((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t1 << 2) + t1) << 2))))))) + (((*(int *)((a4 + 0x544))) << 2) << 2)) + 0x0));
        *(unsigned int *)((a4 + 0x4C8)) = 0x2;
        if (t6 == (*(int *)0xC1F31B4)) {
            FUN_0c0321d4(a4, 0x8);
        } else {
            if (t6 == (*(int *)0xC1F31C4)) {
                FUN_0c0321d4(a4, 0x9);
                FUN_0c08fea2(a4);
            } else {
                if (t6 == (*(int *)0xC1F31D4)) {
                    FUN_0c0321d4(a4, 0xA);
                    FUN_0c090110(a4);
                } else {
                    if (t6 == (*(int *)0xC1F31E4)) {
                        FUN_0c0321d4(a4, 0xB);
                        FUN_0c0903dc(a4);
                    } else {
                        FUN_0c03217c(a4, (*(int *)((a4 + 0x54C))), (*(int *)((a4 + 0x544))));
                    }
                }
            }
        }
        *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
        return 0x4F8;
    }
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    return FUN_0c02a19a(a4, a5, a6, a7);
}


int FUN_0c0786a0(int a4, int a5, int a6, int a7)
{
    register int t9;

    if ((int)(*(int *)0xC23ED50) > (int)0x4F) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t9 = *(short *)(((*(int *)0xC23ECFC) + 0x0));
    if (t9 == 2) {
        nlAddVector((a4 + 0x30), (a4 + 0x48));
        if (0.0f > (*(float *)((a4 + 0x34)))) {
            *(float *)((a4 + 0x34)) = 0.0f;
            *(float *)((a4 + 0x48)) = 0.0f;
            *(float *)((a4 + 0x4C)) = 0.0f;
            *(float *)((a4 + 0x50)) = 0.0f;
            *(unsigned int *)(((a4 + 0x68) + 0x0)) = 0x0;
            *(unsigned int *)((a4 + 0x6C)) = 0x0;
            *(unsigned int *)((a4 + 0x70)) = 0x0;
        } else {
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.099999994f);
            *(unsigned short *)((a4 + 0x60)) = ((*(short *)((a4 + 0x60))) + (*(int *)(((a4 + 0x68) + 0x0))));
            *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + (*(int *)(((0x6C + a4) + 0x0))));
            *(unsigned short *)((a4 + 0x64)) = ((*(short *)((a4 + 0x64))) + (*(int *)(((0x70 + a4) + 0x0))));
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAZ((*(short *)((a4 + 0x64))));
        nlRotateAY((*(short *)((a4 + 0x62))));
        nlRotateAX((*(short *)((a4 + 0x60))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        return nlPopMatrix(0x1);
    }
    return t9;
}

void FUN_0c07b640(void)
{
    register int t0;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC07B70E, 0x24C, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0xBC)) = t0;
        *(unsigned int *)((t2 + 0x21C)) = 0x8;
        *(unsigned int *)(((0x234 + t2) + 0x0)) = ((FUN_0c0da2e0()) & 0x3FF);
        if ((int)(*(int *)0xC23ED50) >= (int)0x5F) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((0xC2008B8 + (((t0 << 1) + t0) << 2))); }
            *(unsigned int *)((t2 + 0x228)) = 0xC200870;
            *(unsigned int *)((t2 + 0x220)) = 0x2;
            *(unsigned int *)((t2 + 0x238)) = 0x1;
            FUN_0c01d636(t2, 0xC19723C, 0x0);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((0xC200870 + (((t0 << 1) + t0) << 2))); }
            *(unsigned int *)((t2 + 0x228)) = 0xC2008B8;
            *(unsigned int *)((t2 + 0x238)) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x60)) = *(struct mv3 *)((t2 + 0x30)); }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
}

int FUN_0c22d2b8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c22cfdc();
    if (a5 == 0) {
        *(volatile int *)((a4 + 0x14));
        *(volatile int *)((a4 + 0x20));
        *(volatile int *)((a6 + 0x4));
        t1 = ((int (*)(void))(FUN_0c0e5f1c))();
        *(volatile int *)((a6 + 0x0));
        *(volatile int *)((a4 + 0x1C));
        t2 = ((int (*)(int))(FUN_0c0e5f1c))(t1);
        if (a4 == t2) {
            *(unsigned int *)((a4 + 0x14)) = a4;
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
        } else {
            if ((*(int *)((a4 + 0x28))) == 0) {
            } else {
                t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    } else {
        if (a5 == 1) {
            *(volatile int *)((a4 + 0x18));
            *(volatile int *)((a4 + 0x20));
            *(volatile int *)((a6 + 0x4));
            t1 = ((int (*)(void))(FUN_0c0e5f1c))();
            *(volatile int *)((a6 + 0x0));
            *(volatile int *)((a4 + 0x1C));
            t2 = ((int (*)(int))(FUN_0c0e5f1c))(t1);
            if (a4 == t2) {
                *(unsigned int *)((a4 + 0x18)) = a4;
                *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                if ((*(int *)((a4 + 0x28))) != 0) {
                    t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    }
    return FUN_0c22cff4(a4, t0);
}

int FUN_0c0172a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((*(int *)0xC23ED50) == (*(int *)((a4 + 0x80)))) {
        t2 = *(int *)((a4 + 0x98));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                } else {
                    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - 0.625f);
                    t2 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t2 - 1);
                    if ((int)(t2 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                    }
                }
            } else {
                if ((((*(int *)0xC23ED5C) & 16) != 0) && (t0 = *(int *)0xC23ED54, t1 = *(int *)((a4 + 0x84)), t0 == t1)) {
                    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
                    *(unsigned int *)((a4 + 0xA0)) = 0x14;
                }
            }
            nlPushMatrix(0x0);
            nlMultiMatrix((*(int *)0xC247BF4));
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            FUN_0c0c465c((*(int *)((a4 + 0x78))));
            return nlPopMatrix(0x1);
        }
        t0 = *(int *)((a4 + 0x9C));
        *(unsigned int *)((a4 + 0x9C)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x3) {
            *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
            return 0x98;
        }
        return 0x9C;
    }
    return 0x80;
}


int FUN_0c213640(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    ADXT_Stop();
    t0 = *(int *)((a5 + 0x4));
    if (((int)a6 < (int)((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8))) && ((int)a6 >= 0)) {
        ADXCRS_Lock(t0);
        t0 = *(int *)((a5 + (((a6 + 0x1) << 1) << 2)));
        t1 = FUN_0c22cd5e((((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8)) + a5), 0x40000000);
        if (t1 == 0) {
            ADXCRS_Unlock();
            ADXERR_CallErrFunc(0xC236CE8);
        } else {
            adxt_start_sj(a4, t1);
            *(unsigned char *)((a4 + 0x2)) = 0x2;
        }
        return ADXCRS_Unlock();
    }
    return 0xFF00;
}

int FUN_0c04f9dc(int a4)
{
    register int t0;

    t0 = *(int *)0xC23ECFC;
    if ((*(int *)(((((short)(*(short *)((t0 + 0x2))) * (short)0x1C) + 0xC206228) + 0x0))) == 0) {
        if ((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC2475A4))) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((short)(*(short *)((t0 + 0x2))) * (short)0x1C) + 0xC206228) + 0x4)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((short)(*(short *)((t0 + 0x2))) * (short)0x1C) + 0xC206228) + 0x10)); }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        *(unsigned int *)((a4 + 0xAC)) = 0x0;
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        *(unsigned int *)((a4 + 0x1C0)) = 0x0;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x324)) = 0x0;
        *(unsigned int *)((a4 + 0x328)) = 0x0;
        *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
        FUN_0c0b32a8(a4);
    } else {
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x394)) = 0x0;
        *(unsigned int *)((a4 + 0xAC)) = 0x0;
        if (((*(int *)((a4 + 0x20C))) & 128) != 0) {
            FUN_0c049b80(a4);
        } else {
            *(unsigned int *)((a4 + 0x210)) = (*(int *)((a4 + 0x3B8)));
        }
        *(unsigned int *)((a4 + 0x0)) = 0xC04A118;
    }
    FUN_0c085704(a4);
    return FUN_0c0bbbf4(a4);
}

int FUN_0c05e41c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x3C))), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))));
    nlRotateAY((*(short *)((a4 + 0x4A))));
    nlRotateAX((*(short *)((a4 + 0x48))));
    nlRotateAY(0x4000);
    t0 = *(int *)(((0x50 + a4) + 0x0));
    t1 = *(short *)((a4 + 0x4C));
    *(unsigned short *)((a4 + 0x4C)) = (t1 + t0);
    nlRotateAX((short)(t1 + t0));
    *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x200);
    u0 = *(float *)((a4 + 0x38));
    nlScale((*(float *)((a4 + 0x34))), u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x34))));
    FUN_0c0de3c0(0x1, 0x1);
    FUN_0c0c475c((*(int *)((a4 + 0x30))), 0.199999988f);
    nlScale(1.0f, 0.799999952f, 0.799999952f);
    FUN_0c0de000((*(float *)((a4 + 0x34))));
    FUN_0c0c475c((*(int *)((a4 + 0x30))), 0.199999988f);
    FUN_0c0de3c0(0x4, 0x5);
    return nlPopMatrix(0x1);
}


int FUN_0c02c55a(int a4, float f4, float f5)
{
    register int t3;
    register float u15;
    register int t28;
    register float u18;

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        t28 = 0x474;
    } else {
        if ((int)(*(int *)0xC23EDA4) >= (int)0xA) {
            t3 = FUN_0c02c4f6(a4);
            if (t3 != 0) {
                *(unsigned int *)((a4 + 0x4D0)) = 0x0;
                *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                *(unsigned int *)((a4 + 0x564)) = 0x0;
                *(unsigned int *)((a4 + 0x56C)) = 0x0;
            }
        }
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFF7F7);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        if ((*(int *)((a4 + 0x4C8))) != 2) {
            u15 = *(float *)0xC02C654;
            if ((((*(float *)((a4 + 0x390))) + u15) > (*(float *)((a4 + 0x34)))) && (u18 = *(float *)((a4 + 0x4C)), !(u18 > 0.0f))) {
                *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + u15);
                *(float *)((a4 + 0x64)) = 0.0f;
            }
        }
        *(float *)((a4 + 0x4B0)) = 0.0f;
        *(float *)((a4 + 0x4B4)) = 0.0f;
        *(float *)((a4 + 0x4B8)) = 0.0f;
        t28 = 0x4B8;
    }
    return t28;
}

int FUN_0c05c200(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05C2F8, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t1 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t1 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t0 + 0x1EC)) = t1;
    *(unsigned int *)(((0x1E8 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t0 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t0 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t0) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    t1 = *(int *)((a4 + 0xBC));
    t2 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    *(unsigned int *)((t0 + 0xD0)) = (*(int *)((a4 + 0x350)));
    return 0xD0;
}

int FUN_0c0aba56(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    *(unsigned int *)0xC247CF8 = 0x0;
    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)0xC24FA38;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if (t1 == 0x21C) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            } else {
                u0 = *(float *)((a4 + 0x3C));
                *(float *)((a4 + 0x3C)) = (u0 + 0.099999994f);
                if (!(66.877533f > (u0 + 0.099999994f))) {
                    *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) - 66.877533f);
                }
            }
        }
        t0 = *(int *)0xC247CAC;
        FUN_0c0dbda0((0x2AC + t0));
        FUN_0c0dcc80((a4 + 0x38));
        return nlGetMatrix((0x2AC + t0));
    }
    if (t1 == 0xB4) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    }
    return FUN_0c0dbda0(((*(int *)0xC247CAC) + 0x2AC));
}

int FUN_0c04e236(int a4)
{
    register int t0;
    register int t1;

    if (((int)(*(int *)((a4 + 0x29C))) > (int)0x2) && (t0 = *(int *)((a4 + 0x394)), (int)t0 >= 0)) {
        t0 = *(int *)(((((*(int *)((a4 + 0xC0))) >> 1) << 2) + 0xC1FE200));
        *(unsigned int *)((a4 + 0x20C)) = 0x4;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        if ((int)(*(int *)((a4 + 0x394))) >= 0) {
            *(unsigned int *)((a4 + 0x394)) = 0x0;
        }
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((t0 + ((((*(int *)((a4 + 0x32C))) * 0x16) + (*(int *)(((0x340 + a4) + 0x0)))) << 1))));
        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        return FUN_0c053dcc(a4, 0x1);
    }
    t0 = *(int *)((a4 + 0x2EC));
    t1 = t0;
    if ((t0 & 12) != 0) {
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
        *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) & 0xFFFFFFEF);
        *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) | 0x1);
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
        if ((int)(*(int *)((a4 + 0x394))) >= 0) {
            *(unsigned int *)((a4 + 0x394)) = 0x0;
        }
        t1 = 0x394;
    }
    return t1;
}

void FUN_0c05f930(int a4, int a5)
{
    register int t1;
    register int t13;
    register int t14;

    t1 = FUN_0c0e19aa(0xC05FBFE, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    *(unsigned int *)((t1 + 0x1EC)) = (~((int)0x1 << (int)(*(int *)((a4 + 0x1C4)))));
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    *(unsigned int *)((t1 + 0x220)) = 0x9C;
    t13 = *(int *)((a4 + 0xBC));
    t14 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + (((t14 << 1) + t14) << 2))); }
}

int FUN_0c0759be(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t0 = *(int *)((a4 + 0x6C));
                *(unsigned int *)((a4 + 0x6C)) = (t0 + 0x80);
                if ((int)(t0 + 0x80) > 0) {
                    *(unsigned int *)((a4 + 0x6C)) = 0x0;
                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                }
            }
        } else {
            t0 = *(int *)((a4 + 0x6C));
            *(unsigned int *)((a4 + 0x6C)) = (t0 - 0x200);
            if ((int)(t0 - 0x200) <= (int)0xFFFFD000) {
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((*(short *)((a4 + 0x62))) + (*(int *)((a4 + 0x6C)))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

int FUN_0c0b4c50(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t5;
    register int t6;
    register int t12;
    register int t14;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - (*(float *)(((0x94 + a4) + 0x0))));
        if (!((*(float *)((a4 + 0x90))) > 0.399999976f)) {
            FUN_0c0cc3f8(0x928A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t5 = *(int *)((a4 + 0xA0));
            if (t5 != 0) {
                if (t5 != 1) {
                    t6 = FUN_0c0da2e0();
                    if ((int)(t6 & 0x1F) < (int)0x14) {
                        return FUN_0c0b4b62(a4);
                    }
                    return FUN_0c0b4b98(a4);
                }
                FUN_0c0b4b98(a4);
                *(unsigned int *)((a4 + 0x80)) = 0x1;
                return 0x80;
            }
            FUN_0c0b4b62(a4);
            *(unsigned int *)((a4 + 0x80)) = 0x1;
            return 0x80;
        }
        return FUN_0c0844dc((*(int *)0xC247F20), (*(int *)0xC247F24), 0x0, (*(float *)((a4 + 0x90))));
    }
    t12 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t12 - 1);
    t14 = 0x98;
    if ((int)(t12 - 1) <= 0) {
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t14 = 0x80;
    }
    return t14;
}

int FUN_0c0b07a8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register float u11;
    register int t12;
    register float u13;
    register float u16;
    register float u24;

    t0 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t0 + 0x39);
    if ((int)(t0 + 0x39) >= (int)0x3FFF) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c0da410((*(int *)((a4 + 0x48))));
    *(float *)((a4 + 0x50)) = (FUN_0c0d9e90((*(int *)((a4 + 0x48)))));
    u11 = *(float *)0xC0B08A8;
    t12 = *(int *)((a4 + 0x48));
    u13 = (((-(float)(t12 * t12)) + u11) / u11);
    u13 = -u13;
    u16 = (*(float *)0xC0B08AC);
    u16 = u16 + (*(float *)0xC0B08B0) * (u13 + 1.0f);
    *(unsigned short *)((a4 + 0x42)) = (int)u16;
    FUN_0c0db470(0xC23F4A8, (a4 + 0x34));
    FUN_0c0dce80((a4 + 0x34), (a4 + 0x34), (u13 + 1.0f));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY((*(short *)((a4 + 0x42))));
    nlRotateAZ(0x1555);
    u24 = *(float *)((a4 + 0x50));
    nlScale(u24, u24, u24);
    FUN_0c0de000((*(float *)((a4 + 0x50))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    FUN_0c0c475c((*(short *)((a4 + 0x46))), (*(float *)((a4 + 0x54))));
    return nlPopMatrix(0x1);
}

int FUN_0c03b40c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c038ce0(a4, a5);
    if ((*(int *)((a4 + 0x580))) != 1) {
        if ((int)(*(int *)((a4 + 0x54C))) < (int)0x1) {
            t0 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10))) + 0x136)));
            *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
            t0 = 0x28;
        } else {
            t1 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t1 << 2) + t1) << 2)) + 0x10))) + 0x134)));
            *(unsigned int *)((a4 + 0x3AC)) = 0x1E;
            t0 = 0x14;
        }
        t1 = t0;
    } else {
        if ((int)(*(int *)((a4 + 0x54C))) < (int)0x1) {
            t0 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10))) + 0x13A)));
            *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
            t0 = 0x28;
        } else {
            t2 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t2 << 2) + t2) << 2)) + 0x10))) + 0x138)));
            *(unsigned int *)((a4 + 0x3AC)) = 0x1E;
            t0 = 0x14;
        }
        t1 = t0;
    }
    *(unsigned int *)((a4 + 0x3B0)) = t1;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x200;
    *(unsigned int *)((a4 + 0x210)) = 0x7;
    *(unsigned int *)((a4 + 0x4C4)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0xA;
    *(unsigned int *)((a4 + 0x55C)) = 0x63;
    return 0x55C;
}

int FUN_0c0b1eec(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    if ((int)(*(int *)((a4 + 0x58))) < (int)0x3C) {
                        *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) - 0.0166666657f);
                        *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) - 0.0166666657f);
                    }
                    t0 = *(int *)((a4 + 0x58));
                    *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
                    if ((int)(t0 - 1) <= 0) {
                        FUN_0c0e19f2(0x3C, a5, a6, a7);
                    }
                }
            } else {
                *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) + 0.0166666657f);
                t0 = *(int *)((a4 + 0x58));
                *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    *(unsigned int *)((a4 + 0x58)) = 0x12C;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
            }
        } else {
            *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + 0.0166666657f);
            t0 = *(int *)((a4 + 0x58));
            *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x58)) = 0x3C;
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x58)) = 0x3C;
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + 0.0166666657f);
        t0 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x58)) = 0x3C;
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
    }
    FUN_0c0b145c((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x78))));
    return FUN_0c0b145c(((*(int *)((a4 + 0x60))) + 0x1), (*(float *)((a4 + 0x7C))));
}

