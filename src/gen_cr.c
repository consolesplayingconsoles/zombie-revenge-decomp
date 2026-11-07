/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02374e(int, int, int, int);
int FUN_0c02a19a(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c02eeea(int);
int FUN_0c02f04a(int);
int FUN_0c02f4b8(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c035b26(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c046cc0(int);
int FUN_0c04e9da(int);
int FUN_0c050f1c(int, int);
int FUN_0c05105c(int, int, int, int);
int FUN_0c053ac4(int);
int FUN_0c053e5a(int, int);
int FUN_0c0556ce(int, int, int);
int FUN_0c056380(int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c08a220(int, int);
int FUN_0c08d90a(int, float);
int FUN_0c09134c(int, int, int, int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b771e(void);
int FUN_0c0b7af6(int);
int FUN_0c0b7f08(int, int);
int FUN_0c0b83f0(int);
int FUN_0c0bb1a8(int, int);
int FUN_0c0c4784(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cae8e(int);
float FUN_0c0d7114(int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
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
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector3op(int, int, int);
int FUN_0c0dd0a0(int, int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
extern int FUN_0c0e5f1c();
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c0a0dfa(int a4, int a5, int a6, int a7);
int FUN_0c0b81ac(int a4, int a5, int a6, int a7);
int FUN_0c04720a(int a4, int a5, int a6, int a7);
int kmiGetPackOBPParam(int a4, int a5, int a6, int a7, int a8, int a9);
int vmsfs_init_work_normal(int a4, int a5, int a6);
int FUN_0c0d6e5a(int a4, int a5, int a6, int a7);
int FUN_0c0366b4(int a4);
int FUN_0c04b344(int a4, int a5);
int FUN_0c05518c(int a4, int a5, int a6);
int FUN_0c09084c(int a4, int a5, int a6);
int FUN_0c096428(int a4, int a5, int a6, int a7, int a8);
int FUN_0c017718(int a4, int a5, float f4);
int FUN_0c030988(int a4);
int FUN_0c04c98e(int a4, int a5);
int FUN_0c05026e(int a4);
int FUN_0c053804(int a4);
int FUN_0c0b6bea(void);
int FUN_0c0e5c10(void);

int FUN_0c0a0dfa(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    float u11;
    int t3;
    int stk[6];

    t0 = *(int *)((a4 + 0x30));
    if (((*(int *)((((*(int *)((t0 + 0xBC))) << 2) + 0xC247030))) != 0) && (t3 = *(int *)0xC23ED5C, (t3 & 6) == 0)) {
    } else {
        *(unsigned int *)0xC20110C = 0x0;
        t4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    u11 = 1.0f;
    if (((*(int *)0xC23A258) & 1) != 0) {
        u11 = 0.399999976f;
    }
    FUN_0c0848bc((u11 * 0.0f), (u11 * 1.5f), (u11 * 4.8499999f));
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x140));
    FUN_0c0dcca0(0xC10CD88);
    nlRotateAX(0x0);
    nlRotateAY(0x3940);
    nlScale(0.199999988f, 0.199999988f, 0.199999988f);
    FUN_0c0cae8e(0x3C8);
    FUN_0c0cacde(0x3C8, 0.0f, (*(float *)((a4 + 0x44))));
    FUN_0c0de000(0.199999988f);
    FUN_0c0c47ae(0x3C8);
    FUN_0c0cacde(0x3C8, 0.0f, (-(*(float *)((a4 + 0x44)))));
    FUN_0c0cae8e(0x3C8);
    nlPopMatrix(0x1);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + -0.0299999993f);
    if (-0.50999999f > (*(float *)((a4 + 0x44)))) {
        *(unsigned int *)0xC20110C = 0x0;
        return ((int (*)(void))(FUN_0c0e19f2))();
    }
    return 0x44;
}


int FUN_0c04720a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t5;
    int t29;
    int t30;
    int t45;
    int t26;
    int t24;
    int t42;
    int stk[12];

    t0 = *(int *)((a4 + 0x3A4));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 == 2) {
                t2 = (FUN_0c02374e(a4, 0x2, a6, a7));
            }
            t26 = t2;
        } else {
            t5 = FUN_0c046cc0(a4);
            if (t5 == 0) {
                t24 = (FUN_0c02a19a(a4));
            } else {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY((*(short *)((a4 + 0x6E))));
                *(float *)(((int)stk + 20)) = 0.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                *(float *)(((int)stk + 28)) = (*(float *)0xC0473D4);
                FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
                *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
                *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
                nlPopMatrix(0x1);
                FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                if ((int)(*(int *)((a4 + 0x54C))) <= (int)0x1) {
                    *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
                }
                t24 = (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
            }
            t26 = t24;
        }
        t45 = t26;
    } else {
        t29 = FUN_0c046cc0(a4);
        if (t29 != 0) {
            t30 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((((t30 << 2) + t30) << 2) + 0xC1F8E44))) + 0x6)));
            if ((*(int *)((a4 + 0x2C4))) != (*(int *)((a4 + 0x2BC)))) {
                *(unsigned int *)((a4 + 0x2D4)) = 0x4;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            }
            FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f);
            *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
            t42 = 0x3A4;
        } else {
            t42 = (FUN_0c02a19a(a4));
        }
        t45 = t42;
    }
    return t45;
}





int FUN_0c04b344(int a4, int a5)
{
    int t1;
    float u13;
    int t26;
    int t29;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C04B344:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    t1 = *(int *)((0xC247604 + ((*(int *)((R4 + 0x34C))) << 2)));
    R0 = (t1);
    R14 = (R4);
    R4 = (0xC2475D4);
    if ((t1 == 1)) goto L_C04B36A;
    goto L_C04B366;
    L_C04B366:;
    goto L_C04B488;
    L_C04B488:;
    return R0;
    L_C04B36A:;
    R13 = ((*(int *)(((((*(int *)((R14 + 0x34C))) << 2) + R4) + 0x0))));
    if ((((*(int *)((R14 + 0x2EC))) & 3) == 0)) goto L_C04B39E;
    goto L_C04B37E;
    L_C04B37E:;
    *(unsigned int *)((R13 + 0x21C)) = ((*(int *)((R13 + 0x21C))) - 1);
    u13 = 1.0f;
    u13 = u13 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
    FUN_0c08d90a((R14 + 0x30), u13);
    goto L_C04B39E;
    L_C04B39E:;
    R12 = (0x1);
    if ((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) & 0x202) == 0)) goto L_C04B3AE;
    goto L_C04B3AA;
    L_C04B3AA:;
    *(unsigned int *)((R14 + 0x3AC)) = R12;
    goto L_C04B3AE;
    L_C04B3AE:;
    if ((((*(int *)((R14 + 0x2EC))) & 12) == 0)) goto L_C04B474;
    goto L_C04B3B6;
    L_C04B3B6:;
    R11 = (0x0);
    if (((int)(*(int *)((R13 + 0x21C))) <= 0)) goto L_C04B3D6;
    goto L_C04B3C0;
    L_C04B3C0:;
    if (((*(int *)((R14 + 0x3AC))) != 0)) goto L_C04B46E;
    goto L_C04B3C8;
    L_C04B3C8:;
    t26 = *(int *)((R14 + 0x3B0));
    *(unsigned int *)((R14 + 0x3B0)) = (t26 + 0x1);
    if (((int)(t26 + 0x1) <= (int)0x1)) goto L_C04B46E;
    goto L_C04B3D6;
    L_C04B3D6:;
    t29 = (FUN_0c056380(R14, 0x0)) == 0;
    if (t29) goto L_C04B424;
    goto L_C04B3E2;
    L_C04B3E2:;
    *(unsigned int *)((R14 + 0x20C)) = 0x200000;
    *(unsigned int *)((R14 + 0x210)) = 0x38;
    R0 = (0x210);
    goto L_C04B488;
    L_C04B424:;
    *(unsigned int *)((R14 + 0x3AC)) = R11;
    *(unsigned int *)((R14 + 0x3B0)) = R11;
    *(unsigned int *)((R14 + 0x20C)) = R12;
    *(unsigned int *)((R14 + 0x210)) = R11;
    *(unsigned int *)(((0x2C4 + R14) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + R14) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((R14 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x2D4)) = 0x2;
    R0 = (0x394);
    if (((int)(*(int *)((R14 + 0x394))) <= 0)) goto L_C04B488;
    goto L_C04B46A;
    L_C04B46A:;
    *(unsigned int *)((R14 + R0)) = R11;
    goto L_C04B488;
    L_C04B46E:;
    *(unsigned int *)((R14 + 0x3AC)) = R11;
    R0 = (0x3AC);
    goto L_C04B488;
    L_C04B474:;
    return FUN_0c053e5a(R14, 0x1);
}





int FUN_0c030988(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t7;
    int t8;
    int t11;
    int t12;
    int t13;
    int t54;
    int t10;
    int t40;
    int t81;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        return 0x4F8;
    }
    t1 = FUN_0c02f04a(a4);
    if (t1 == 0) {
        *(unsigned int *)((a4 + 0x524)) = 0x0;
        t2 = FUN_0c02eeea(a4);
        if (t2 == 0) {
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
        }
        return 0x4F8;
    }
    t4 = FUN_0c02a35a(a4);
    if ((t4 != 0) && (t4 != 1)) {
        if (t4 != 2) {
            if (t4 != 3) {
                *(unsigned int *)((a4 + 0x538)) = 0x2;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x538)) = 0x2;
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
        } else {
            *(unsigned int *)((a4 + 0x538)) = 0x2;
            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
        }
        return 0x4F8;
    }
    t7 = FUN_0c035b26(a4);
    if (t7 != 0) {
        t8 = FUN_0c02f4b8(a4, 0x0);
        if (t8 != 0) {
            if ((t4 != 0) && (t10 = *(int *)((a4 + 0x3B8)), (t10 & 2) == 0)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                return 0x4F8;
            }
            *(unsigned int *)((a4 + 0x508)) = 0x0;
            *(unsigned int *)((a4 + 0x554)) = 0x2;
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            t11 = *(int *)((a4 + 0x4F0));
            t12 = *(int *)(((((t11 << 2) + t11) << 2) + 0xC1F8E3C));
            return ((int (*)(int))(t12))(a4);
        }
        t13 = *(int *)((a4 + 0x538));
        if ((t13 != 8) && ((t13 != 6) && (t13 != 7))) {
            if ((*(int *)((a4 + 0x538))) == 4) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            }
        } else {
            if ((*(int *)((a4 + 0x28C))) != 0) {
                if (((int)(*(int *)(((*(int *)((((*(int *)((a4 + 0x28C))) << 2) + 0xC246FF0))) + 0x310))) > 0) && (t40 = *(int *)((a4 + 0x3B8)), (t40 & 2) == 0)) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                } else {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                }
            } else {
                if (((*(int *)((a4 + 0x3B8))) & 0x2) == 0) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                } else {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                }
            }
        }
        return 0x4F8;
    }
    t54 = *(int *)((a4 + 0x538));
    if ((t54 != 8) && ((t54 != 6) && (t54 != 7))) {
        if ((*(int *)((a4 + 0x538))) == 4) {
            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        }
    } else {
        if ((*(int *)((a4 + 0x28C))) != 0) {
            if (((int)(*(int *)(((*(int *)((((*(int *)((a4 + 0x28C))) << 2) + 0xC246FF0))) + 0x310))) > 0) && (t81 = *(int *)((a4 + 0x3B8)), (t81 & 2) == 0)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
        } else {
            if (((*(int *)((a4 + 0x3B8))) & 0x2) == 0) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
        }
    }
    return 0x4F8;
}

int FUN_0c04c98e(int a4, int a5)
{
    int t3;

    FUN_0c053ac4(a4);
    *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) & 0xFFFFFBFF);
    *(unsigned int *)((a4 + 0x2D4)) = 0x0;
    *(unsigned int *)((a4 + 0xCC)) = 0x0;
    *(unsigned int *)((a5 + 0xD0)) = 0xFFFFFFFF;
    if (((*(int *)((a4 + 0x2EC))) & 0x100) != 0) {
        t3 = *(int *)(((0x2A0 + a4) + 0x0));
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(short *)(((0xC0F85D8 + (t3 << 1)) + 0x0))));
        if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + 0.00999999978f);
        }
        if ((int)(*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247594))) > 0) {
            *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
            return FUN_0c04e9da(a4);
        }
        return FUN_0c050f1c(a4, (0xC0F85D8 + (t3 << 1)));
    }
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + ((*(short *)(((0xC0F85D8 + ((*(int *)(((0x2A0 + a4) + 0x0))) << 1)) + 0x0))) - 32768));
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x210)) = 0x0;
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x340 + a4) + 0x0))) << 1) + ((((*(int *)((a4 + 0xC0))) >> 1) * 0x2C) + 0xC1FE210))));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x394)) = 0x0;
    if ((*(int *)0xC23EDAC) == 1) {
        *(unsigned int *)((a4 + 0x1EC)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x1EC)) = 0xF;
    }
    if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + 0.00999999978f);
    }
    return 0x34;
}


int FUN_0c053804(int a4)
{
    int t1;
    int t46;
    int stk[15];

    t1 = *(int *)0xC247CAC;
    t46 = 0xAC;
    if ((int)(*(int *)((a4 + 0xAC))) > (int)0x2) {
    } else {
        *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = 0.0f;
        *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = ((float)(*(int *)((a4 + 0xAC))) * 6.0f);
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x4);
        FUN_0c0a7714((((int)stk + 4) + 0x10), ((((int)stk + 4) + 0x10) + 0x4), ((*(float *)((a4 + 0x54))) - (*(float *)((a4 + 0x48)))), ((*(float *)((a4 + 0x58))) - (*(float *)((a4 + 0x4C)))), ((*(float *)((a4 + 0x5C))) - (*(float *)((a4 + 0x50)))));
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = 0x0;
        FUN_0c0a6610((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), (a4 + 0x30));
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((*(float *)((a4 + 0x30))) + (*(float *)((a4 + 0x48)))), (((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x4C)))) + 23.0f), ((*(float *)((a4 + 0x38))) + (*(float *)((a4 + 0x50)))));
        nlRotateAY((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
        nlRotateAX((*(int *)(((((int)stk + 4) + 0x10) + 0x0))));
        nlRotateAZ(0xFFFFC000);
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0de000(1.5f);
        FUN_0c0c4784((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a4 + 0x48))), ((*(float *)((a4 + 0x4C))) + 28.0f), (*(float *)((a4 + 0x50))));
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        nlScale(1.5f, 1.5f, 1.5f);
        FUN_0c0de000(1.5f);
        FUN_0c0c4784((*(int *)((a4 + 0x7C))), (*(float *)((a4 + 0x90))));
        t46 = (nlPopMatrix(0x1));
    }
    return t46;
}

int FUN_0c0b6bea(void)
{
    int t0;
    int t4;
    int t20;
    int t27;
    int t22;

    t0 = FUN_0c0e1830(0xC0B6DA4, 0x334);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x308)) = (*(int *)(((*(int *)0xC24FAB0) + 0x0)));
    t4 = 0x0;
    for (;;) {
        FUN_0c0e631c(((t0 + 0x30) + t4), 0xC11204C, 0x38);
        FUN_0c0e631c(((0xD8 + t0) + t4), 0xC112084, 0x38);
        FUN_0c0e631c(((0x180 + t0) + t4), 0xC1120BC, 0x38);
        t4 = (t4 + 0x38);
        if ((unsigned int)t4 >= (unsigned int)0xA8) {
            break;
        }
    }
    FUN_0c0e631c((0x228 + t0), 0xC1120F4, 0x38);
    FUN_0c0e631c((0x2D0 + t0), 0xC11212C, 0x38);
    FUN_0c0e631c((0x260 + t0), 0xC112164, 0x38);
    FUN_0c0e631c((0x298 + t0), 0xC112164, 0x38);
    *(unsigned int *)((t0 + 0x68)) = 0x207A;
    *(unsigned int *)((t0 + 0x110)) = 0x207B;
    *(unsigned int *)((t0 + 0x1B8)) = 0x207C;
    *(float *)((t0 + 0x70)) = ((*(float *)((t0 + 0x70))) + 25.0f);
    *(float *)((t0 + 0x118)) = ((*(float *)((t0 + 0x118))) + 25.0f);
    *(float *)((t0 + 0x1C0)) = ((*(float *)((t0 + 0x1C0))) + 25.0f);
    *(unsigned int *)((t0 + 0xA0)) = 0x2080;
    *(unsigned int *)((t0 + 0x148)) = 0x2080;
    *(unsigned int *)((t0 + 0x1F0)) = 0x2080;
    *(float *)((t0 + 0xA8)) = ((*(float *)((t0 + 0xA8))) - 25.0f);
    *(float *)((t0 + 0x150)) = ((*(float *)((t0 + 0x150))) - 25.0f);
    *(float *)((t0 + 0x1F8)) = ((*(float *)((t0 + 0x1F8))) - 25.0f);
    *(unsigned int *)((t0 + 0xC8)) = 0x7FFF;
    *(unsigned int *)((t0 + 0x170)) = 0x7FFF;
    *(unsigned int *)((t0 + 0x218)) = 0x7FFF;
    t20 = *(short *)(((*(int *)(((*(int *)0xC24FAB0) + 0x0))) + 0x2));
    *(unsigned int *)(((0x228 + t0) + 0x0)) = (unsigned short)t20;
    t27 = (unsigned short)t20;
    if ((*(int *)0xC23A1A0) != 0) {
        t22 = *(short *)0xC11204A;
        *(unsigned int *)((t0 + 0x30C)) = t22;
        *(float *)((t0 + 0x238)) = ((*(float *)((t0 + 0x238))) * 1.0999999f);
        *(float *)((t0 + 0x23C)) = ((*(float *)((t0 + 0x23C))) * 1.0999999f);
        *(unsigned int *)((t0 + 0x228)) = ((*(int *)((t0 + 0x228))) + t22);
        *(unsigned int *)((t0 + 0x2D0)) = ((*(int *)((t0 + 0x2D0))) + t22);
        t27 = 0x2D0;
    }
    return t27;
}


int FUN_0c0d6e5a(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t26;
    int t9;
    int t27;
    int t28;
    float u30;
    int t43;
    int t44;
    float u5;
    float u6;
    int t8;
    int t20;
    int t42;
    int stk[37];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x6C)));
    if ((*(int *)0xC247994) != 0) {
        t2 = a4;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            t26 = t2;
            if (((int)(*(int *)((((t4 << 2) + 0xC247604) + 0x0))) >= (int)0xB) && (t8 = *(int *)((((t4 << 2) + 0xC247634) + 0x0)), (int)t8 < (int)0x16)) {
                t9 = *(int *)((((t4 << 2) + 0xC2475D4) + 0x0));
                *(unsigned int *)(((int)stk + 8)) = t9;
                t2 = (*(int *)((a4 + 0x6C)));
                t2 = (t2 + 0x30);
                u5 = (FUN_0c0d7114(t2, (t9 + 0x30)));
                u6 = 0.0f;
                if (u5 == u6) {
                    t2 = t3;
                    *(volatile int *)((0xC247634 + (t4 << 2)));
                    t2 = (t2 << 2);
                    *(unsigned int *)(((((int)stk + 4) + 0x3C) + t2)) = t4;
                    t3 = (t3 + 0x1);
                    u6 = (*(float *)(((((((t4 << 2) << 2) << 2) + 0xC247694) + ((*(int *)(((0xBC + (*(int *)(((int)stk + 4)))) + 0x0))) << 2)) + 0x0)));
                    *(float *)(((((int)stk + 4) + 0x8) + t2)) = u6;
                    t20 = t2;
                }
                t26 = t20;
            }
            t4 = (t4 + 0x1);
            t2 = t26;
            if ((int)t4 >= (int)0xC) {
                break;
            }
        }
        *(unsigned int *)(((((int)stk + 4) + 0x3C) + (t3 << 2))) = 0xFFFFFFFF;
        *(float *)(((((int)stk + 4) + 0x8) + (t3 << 2))) = 999.998962f;
        t27 = 0xFFFFFFFF;
        t28 = t3;
        u30 = 999.998962f;
        for (;;) {
            t27 = (t27 + 0x1);
            if ((int)(*(int *)(((((int)stk + 4) + 0x3C) + (t27 << 2)))) < 0) {
                break;
            }
            u30 = (*(float *)(((((int)stk + 4) + 0x8) + (t27 << 2))));
            if (!(u30 > ((*(float *)(((((int)stk + 4) + 0x8) + (t28 << 2))))))) {
                t28 = t27;
            }
        }
        if (((*(int *)((a4 + 0x74))) == 2) && ((t42 = *(int *)(((((int)stk + 4) + 0x3C) + (t28 << 2))), t42 != -1) && ((int)t27 > 0))) {
            t43 = (0x0 + (((int)stk + 4) + 0x3C));
            t44 = 0x0;
            for (;;) {
                if ((*(int *)((t43 + 0x0))) == (*(int *)((a4 + 0x78)))) {
                    break;
                }
                t44 = (t44 + 0x1);
                t43 = (t43 + 0x4);
                if ((int)t44 >= (int)t27) {
                    return *(volatile int *)(((((int)stk + 4) + 0x3C) + (t28 << 2)));
                }
            }
            return *(volatile int *)((a4 + 0x78));
        } else {
            return *(volatile int *)(((((int)stk + 4) + 0x3C) + (t28 << 2)));
        }
    }
    return 0xFFFFFFFF;
}

int FUN_0c05518c(int a4, int a5, int a6)
{
    int t0;
    int t52;
    int t3;
    int t8;
    int t35;

    t0 = FUN_0c0556ce(a5, 0x1, 0x0);
    t52 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t3 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
        if (a6 == 0) {
            *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x5;
            FUN_0c0bb1a8(a4, 0x1);
            *(unsigned int *)((a4 + 0x354)) = a5;
            *(unsigned int *)((a4 + 0x358)) = t0;
            *(unsigned int *)((t3 + 0x21C)) = (unsigned short)(*(short *)((((*(int *)((a4 + 0xBC))) * 0xE) + 0xC247998)));
        } else {
            t8 = *(int *)((t3 + 0x22C));
            if ((t8 & 0x1C) != 4) {
                if ((t8 & 0x1C) != 8) {
                    if ((t8 & 0x1C) != 16) {
                    } else {
                        *(unsigned int *)((a4 + 0x344)) = a5;
                        *(unsigned int *)((a4 + 0x34C)) = t0;
                        *(unsigned int *)((a4 + 0x330)) = 0x4;
                        *(unsigned int *)((a4 + 0x340)) = a5;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x348)) = a5;
                    *(unsigned int *)((a4 + 0x350)) = t0;
                    if ((*(int *)((a4 + 0x330))) == 1) {
                        *(unsigned int *)((a4 + 0x330)) = 0x3;
                    } else {
                        *(unsigned int *)((a4 + 0x330)) = 0x2;
                    }
                    *(unsigned int *)((a4 + 0x340)) = a5;
                }
            } else {
                *(unsigned int *)((a4 + 0x344)) = a5;
                *(unsigned int *)((a4 + 0x34C)) = t0;
                *(unsigned int *)((a4 + 0x354)) = a5;
                *(unsigned int *)((a4 + 0x358)) = t0;
                *(unsigned int *)((t3 + 0x21C)) = (unsigned short)(*(short *)((((*(int *)((a4 + 0xBC))) * 0xE) + 0xC247998)));
                if ((*(int *)((a4 + 0x330))) == 2) {
                    *(unsigned int *)((a4 + 0x330)) = 0x3;
                } else {
                    *(unsigned int *)((a4 + 0x330)) = 0x1;
                    *(unsigned int *)((a4 + 0x340)) = a5;
                }
            }
            *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t3) + 0x0))));
            *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | (((int)a5 >= 0) ? (0x1 << (a5 & 31)) : ((-(int)a5 & 31) ? ((int)0x1 >> (-(int)a5 & 31)) : ((int)0x1 >> 31))));
            if ((*(int *)((((a5 << 2) + 0xC1FF6D8) + 0x0))) != 0) {
                t35 = ((int (*)(int, int))((*(int *)((((a5 << 2) + 0xC1FF6D8) + 0x0)))))(a4, (t0 << 2));
            }
        }
        *(unsigned int *)((t3 + 0x23C)) = (*(int *)((a4 + 0xBC)));
        t52 = t0;
    }
    return t52;
}

int FUN_0c05026e(int a4)
{
    int t0;
    int t1;
    int t2;
    float u3;
    int t8;
    int t81;
    int t85;
    int t86;
    int t19;
    int t34;
    int t23;
    int t25;
    int t40;
    int t75;
    int t79;
    int t56;
    int t58;
    int t43;
    int t28;
    int t69;
    int t73;
    int t63;
    int t67;

    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)0xC23ED9C;
    if ((t1 != 4) && (t1 != 7)) {
        return t1;
    }
    t2 = *(int *)((a4 + 0x1CC));
    u3 = *(float *)((((t0 << 2) + 0xC24758C) + 0x0));
    *(float *)((((t0 << 2) + 0xC24758C) + 0x0)) = (u3 + (float)(int)((float)t2 * 3.0f));
    t8 = ((t0 << 2) + 0xC24758C);
    if ((u3 + (float)(int)((float)t2 * 3.0f)) > (float)(*(int *)((0xC24759C + (t0 << 2))))) {
        *(float *)(((0xC24758C + (t0 << 2)) + 0x0)) = (float)(*(int *)((0xC24759C + (t0 << 2))));
        t8 = (t0 << 2);
    }
    t81 = (t0 << 2);
    t85 = t0;
    t86 = 0xC24759C;
    if (((*(int *)0xC23A1A8) & 0x4000) == 0) {
        if ((*(int *)0xC204998) != 0) {
            t19 = *(int *)0xC2049AC;
            t34 = t19;
            if (t19 == 0) {
                if ((int)(*(int *)0xC1FF894) >= 0) {
                    t23 = *(int *)((a4 + 0xBC));
                    *(unsigned int *)((0xC247594 + (t23 << 2))) = ((*(int *)((0xC247594 + (t23 << 2)))) - ((int)(*(int *)((a4 + 0x1CC))) >> 4));
                    t28 = (t23 << 2);
                } else {
                    t25 = *(int *)((a4 + 0xBC));
                    *(unsigned int *)((0xC247594 + (t25 << 2))) = ((*(int *)((0xC247594 + (t25 << 2)))) - (*(int *)(((0x1CC + a4) + 0x0))));
                    t28 = (t25 << 2);
                }
                t34 = t28;
            }
            t43 = t34;
        } else {
            t40 = *(int *)((a4 + 0xBC));
            *(unsigned int *)((0xC247594 + (t40 << 2))) = ((*(int *)((0xC247594 + (t40 << 2)))) - (*(int *)(((0x1CC + a4) + 0x0))));
            t43 = (t40 << 2);
        }
        t75 = t43;
        t79 = t0;
        if ((int)(*(int *)((((t0 << 2) + 0xC247594) + 0x0))) <= 0) {
            if (((*(int *)0xC23A1A8) & 0x100) == 0) {
                if ((int)(*(int *)(((0x1C4 + a4) + 0x0))) < (int)0x2) {
                    *(unsigned int *)((((t0 << 2) + 0xC247594) + 0x0)) = 0x1;
                    t56 = *(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)));
                    t58 = t56;
                    if (t56 == 5) {
                        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
                        t58 = 0xBC;
                    }
                    t63 = t58;
                    t67 = 0xC246FF0;
                } else {
                    *(unsigned int *)((((t0 << 2) + 0xC247594) + 0x0)) = 0x0;
                    t63 = 0x2;
                    t67 = t0;
                }
                t69 = t63;
                t73 = t67;
            } else {
                *(unsigned int *)((((t0 << 2) + 0xC247594) + 0x0)) = 0x0;
                t69 = t43;
                t73 = t0;
            }
            t75 = t69;
            t79 = t73;
        }
        t81 = t75;
        t85 = t79;
        t86 = ((t0 << 2) + 0xC247594);
    }
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        return FUN_0c05105c(a4, t85, t86, t8);
    }
    return t81;
}

