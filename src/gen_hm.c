/* Straight-line functions with calls and guards (batch gen_hm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01fea0(int, int, int, int, int, int, int, int, int);
int FUN_0c01ff28(int, int, int, int);
int FUN_0c02dc30(int);
int FUN_0c035efc(int);
int FUN_0c03e6c6(int, int, int, int, int, int, int);
int FUN_0c042980(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c07e636(int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e15d4(int, int, int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e5fe4(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0cd9c0(int a4);
int FUN_0c09c4f4(int a4);
int FUN_0c06ede8(int a4, int a5, int a6, int a7);
int FUN_0c0201f4(int a4, int a5, int a6, int a7);
int FUN_0c08eabc(int a4, int a5, int a6, int a7);
int FUN_0c0803f4(int a4);

int FUN_0c0cd9c0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    t0 = *(int *)((a4 + 0x34));
    u1 = 0.00999999978f;
    u1 = u1 + 2.44148055e-06f * (float)(FUN_0c0da2e0());
    u2 = *(float *)((a4 + 0x64));
    u3 = *(float *)((a4 + 0x44));
    u4 = *(float *)((a4 + 0x38));
    u5 = *(float *)((a4 + 0x4C));
    u6 = *(float *)((a4 + 0x40));
    u7 = *(float *)(((t0 - 12) + 0x4));
    u8 = ((u6 - u5) * (u6 - u5));
    u8 = u8 + (u4 - u3) * (u4 - u3);
    u3 = (*(float *)((a4 + 0x38)));
    u3 = u3 + 0.000213629566f * (float)((FUN_0c0da2e0()) - 16384);
    u4 = *(float *)((a4 + 0x44));
    u5 = (*(float *)((a4 + 0x40)));
    u5 = u5 + 0.000213629566f * (float)((FUN_0c0da2e0()) - 16384);
    t0 = FUN_0c0d9dc0((u5 - (*(float *)((a4 + 0x4C)))), (u3 - u4));
    u3 = (*(float *)(((a4 + 0x50) + 0x0)));
    u3 = u3 + (u1 * u2) * (FUN_0c0d9e90((short)t0));
    *(float *)(((a4 + 0x50) + 0x0)) = u3;
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0102572199f);
    u3 = (*(float *)(((a4 + 0x58) + 0x0)));
    u3 = u3 + (u1 * u2) * (FUN_0c0da410((short)t0));
    *(float *)(((a4 + 0x58) + 0x0)) = u3;
    FUN_0c0dce80((a4 + 0x50), (a4 + 0x50), 0.979999959f);
    nlAddVector((a4 + 0x44), (a4 + 0x50));
    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x5C)) = (int)((float)(*(short *)((a4 + 0x5C))) + ((float)((-(*(short *)(((0x5C + a4) + 0x0)))) - 16383) * 0.049999997f));
            if ((*(float *)((a4 + 0x4C))) > 230.0f) {
                *(float *)((a4 + 0x4C)) = 230.0f;
            }
            if (3.0f > (*(float *)((a4 + 0x48)))) {
                t0 = FUN_0c0da2e0();
                if ((t0 & 31) != 0) {
                    t0 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
                    FUN_0c0e19d0(t0);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x70)) = *(struct mv3 *)((a4 + 0x44)); }
                    *(unsigned short *)((t0 + 0x9A)) = 0x3B7;
                    *(unsigned short *)((t0 + 0xA0)) = 0x10;
                    u1 = 0.199999988f;
                    u1 = u1 + 1.52592547e-05f * (float)(FUN_0c0da2e0());
                    *(float *)((t0 + 0x90)) = u1;
                }
                FUN_0c0e19f2();
            }
        }
    } else {
        if ((*(int *)((a4 + 0x74))) != 0) {
            if (!(1145.0f > (*(float *)((a4 + 0x44)))) && (u0 = *(float *)((a4 + 0x50)), !(0.0f > u0))) {
                *(float *)((a4 + 0x44)) = 1145.0f;
                *(float *)((a4 + 0x50)) = (-(*(float *)((a4 + 0x50))));
            }
            if (!((*(float *)((a4 + 0x4C))) > 260.0f)) {
                if (10.0f > (*(float *)((a4 + 0x48)))) {
                    *(float *)((a4 + 0x48)) = 10.0f;
                }
            } else {
                if (u7 > (*(float *)((a4 + 0x48)))) {
                    *(float *)((a4 + 0x48)) = u7;
                }
            }
            if (!((*(float *)((a4 + 0x4C))) > 230.0f)) {
                *(unsigned int *)((a4 + 0x30)) = 0x1;
            }
        } else {
            if (u7 > (*(float *)((a4 + 0x48)))) {
                *(float *)((a4 + 0x48)) = u7;
            }
        }
    }
    t0 = FUN_0c0d9dc0((*(float *)((a4 + 0x50))), (*(float *)((a4 + 0x58))));
    *(unsigned short *)(((0x5E + a4) + 0x0)) = (int)((float)(*(short *)(((0x5E + a4) + 0x0))) + ((float)(FUN_0c07e636((*(short *)((a4 + 0x5E))), (0x7FFF + (short)t0))) * 0.099999994f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x44));
    nlRotateAY((*(short *)((a4 + 0x5E))));
    nlRotateAX((*(short *)((a4 + 0x5C))));
    u0 = *(float *)((a4 + 0x68));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x68))));
    FUN_0c0c465c((*(short *)((((*(int *)((a4 + 0x6C))) << 1) + 0xC1E9F14))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x6C));
    *(unsigned int *)((a4 + 0x6C)) = (t0 + 0x1);
    if ((unsigned int)(t0 + 0x1) >= (unsigned int)0x8) {
        *(unsigned int *)((a4 + 0x6C)) = 0x0;
    }
    t0 = 0xC0CDD08;
    if (!(_builtin_sqrtf(u8) > 5.0f)) {
        t1 = *(int *)((a4 + 0x78));
        *(unsigned int *)((a4 + 0x78)) = (t1 - 1);
        if ((t1 - 1) == 0) {
            FUN_0c0e19f2();
        }
        t1 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t1 + 0xC);
        *(float *)((a4 + 0x38)) = (*(float *)(((t1 + 0xC) + 0x0)));
        *(float *)((a4 + 0x3C)) = (*(float *)(((*(int *)((a4 + 0x34))) + 0x4)));
        *(float *)((a4 + 0x40)) = (*(float *)(((*(int *)((a4 + 0x34))) + 0x8)));
        t1 = 0x74;
        if ((*(int *)((a4 + 0x74))) != 0) {
            u0 = (*(float *)(((a4 + 0x38) + 0x0)));
            u0 = u0 + 0.000976592302f * (float)((FUN_0c0da2e0()) - 16384);
            *(float *)(((a4 + 0x38) + 0x0)) = u0;
            t2 = FUN_0c0da2e0();
            u0 = (*(float *)(((a4 + 0x40) + 0x0)));
            u0 = u0 + 0.000976592302f * (float)(t2 - 16384);
            *(float *)(((a4 + 0x40) + 0x0)) = u0;
            t1 = (t2 - 16384);
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c09c4f4(int a4)
{
    int stk[19];
    register int t5;
    register int t34;
    register int t6;
    register int t10;
    register int t15;
    register float u17;
    register float u19;
    register float u28;
    register float u29;
    register float u30;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t48;
    register int t54;
    register float u56;
    register float u57;
    register float u58;
    register float u59;
    register float u69;
    register float u70;
    register float u71;
    register float u73;
    register int t105;
    register int t106;
    register int t107;
    register float u111;
    register float u115;
    register float u116;
    register float u124;
    register float u127;
    register float u128;
    register int t144;
    register int t36;
    register int t37;

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    if ((*(int *)(((*(int *)(((int)stk + 16))) + 0x2BC))) != 0x5A5) {
    } else {
        t5 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t5 - 1);
        t34 = 0xC09C654;
        if ((int)(t5 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x3C)) = 0x1;
            t6 = *(int *)((a4 + 0x4C));
            *(unsigned int *)((a4 + 0x4C)) = (t6 + 0x1);
            if ((unsigned int)(*(int *)(((0x4C + a4) + 0x0))) >= (unsigned int)0x100) {
                *(unsigned int *)((a4 + 0x4C)) = 0x0;
            }
            *(unsigned int *)((((t6 * 0x58) + (a4 + 0x50)) + 0x0)) = 0xC;
            t10 = FUN_0c0da2e0();
            *(unsigned int *)((((t6 * 0x58) + (a4 + 0x50)) + 0x4)) = ((t10 & 0xF) + 0x2A7);
            if ((int)((t10 & 0xF) + 0x2A7) > (int)0x2AA) {
                *(unsigned int *)((((t6 * 0x58) + (a4 + 0x50)) + 0x0)) = 0x0;
            }
            *(unsigned int *)((((t6 * 0x58) + (a4 + 0x50)) + 0x10)) = ((FUN_0c0da2e0()) << 1);
            *(float *)((((t6 * 0x58) + (a4 + 0x50)) + 0xC)) = ((float)((FUN_0c0da2e0()) & 0xFFF) * 0.00024420023f);
            FUN_0c0da2e0();
            t15 = FUN_0c0e5fe4();
            *(unsigned int *)((((t6 * 0x58) + (a4 + 0x50)) + 0x8)) = (0xC200C60 + ((((t15 << 1) + t15) << 2) << 1));
            u17 = *(float *)((((t6 * 0x58) + (a4 + 0x50)) + 0xC));
            u19 = (*(float *)(((0xC200C60 + ((((t15 << 1) + t15) << 2) << 1)) + 0xC)));
            u19 = u19 + u17 * (*(float *)(((0xC200C60 + ((((t15 << 1) + t15) << 2) << 1)) + 0x10)));
            *(float *)((((t6 * 0x58) + (a4 + 0x50)) + 0x14)) = u19;
            FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 16))) + 0x3E4))) + ((((*(int *)(((0xC200C60 + ((((t15 << 1) + t15) << 2) << 1)) + 0x0))) << 2) << 2) << 2)));
            nlRotateAY((*(int *)((((t6 * 0x58) + (a4 + 0x50)) + 0x10))));
            u28 = *(float *)((((t6 * 0x58) + (a4 + 0x50)) + 0xC));
            u29 = *(float *)((((t6 * 0x58) + (a4 + 0x50)) + 0x14));
            u30 = ((*(float *)(((0xC200C60 + ((((t15 << 1) + t15) << 2) << 1)) + 0x4))) * (*(float *)(((0xC200C60 + ((((t15 << 1) + t15) << 2) << 1)) + 0x8))));
            FUN_0c0dcc70((u29 * 0.0f), (u30 * u28), 0.0f);
            nlScale(1.04999995f, 1.39999998f, 1.39999998f);
            t34 = (nlGetMatrix((((t6 * 0x58) + (a4 + 0x50)) + 0x18)));
            t36 = (0xC200C60 + ((((t15 << 1) + t15) << 2) << 1));
            t37 = ((t6 * 0x58) + (a4 + 0x50));
        }
        t42 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t42 - 1);
        if ((int)(t42 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x38)) = 0x1;
            t43 = t34;
            t44 = 0x2;
            t45 = t36;
            t46 = t37;
            for (;;) {
                *(unsigned int *)(((int)stk + 4)) = t44;
                if (t44 == 0) {
                    break;
                }
                t43 = 0x4C;
                t46 = (*(int *)((a4 + t43)));
                t44 = a4;
                t44 = (t44 + 0x50);
                t48 = (t46 * 0x58);
                t46 = (t46 + 0x1);
                *(unsigned int *)((a4 + t43)) = t46;
                t43 = (*(int *)((a4 + t43)));
                t46 = t48;
                t46 = (t46 + t44);
                if ((unsigned int)t43 >= (unsigned int)0x100) {
                    t43 = 0x4C;
                    *(unsigned int *)((a4 + t43)) = 0x0;
                }
                *(unsigned int *)((t46 + 0x4)) = 0x291;
                t43 = (FUN_0c0da2e0());
                t43 = (t43 << 1);
                t44 = 0xFFFFFFFD;
                *(unsigned int *)((t46 + 0x10)) = t43;
                *(unsigned int *)((t46 + 0x0)) = t44;
                t43 = (FUN_0c0da2e0());
                t43 = (t43 & 0xFFF);
                t54 = t43;
                t43 = 0xC;
                *(float *)((t46 + t43)) = ((float)t54 * 0.00024420023f);
                t43 = 0x48;
                t45 = (*(int *)((a4 + t43)));
                t45 = (t45 + 0x1);
                *(unsigned int *)((a4 + t43)) = t45;
                t45 = (t45 - 1);
                t44 = t45;
                t45 = (t45 << 1);
                t45 = (t45 + t44);
                t45 = (t45 << 2);
                t45 = (t45 << 1);
                t43 = 0xC;
                t45 = (t45 + 0xC200C60);
                t44 = 0x3;
                *(unsigned int *)((t46 + 0x8)) = t45;
                u56 = *(float *)((t45 + t43));
                u57 = *(float *)((t46 + t43));
                t43 = 0x10;
                u58 = *(float *)((t45 + t43));
                t43 = 0x14;
                u59 = u56;
                u59 = u59 + u57 * u58;
                *(float *)((t46 + t43)) = u59;
                t43 = 0x48;
                t43 = (*(int *)((a4 + t43)));
                if ((unsigned int)t43 >= (unsigned int)t44) {
                    t43 = 0x48;
                    *(unsigned int *)((a4 + t43)) = 0x0;
                }
                t43 = 0x3E4;
                t43 = (FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 16))) + t43))) + ((((*(int *)((t45 + 0x0))) << 2) << 2) << 2))));
                t43 = (nlRotateAY((*(int *)((t46 + 0x10)))));
                t43 = 0x8;
                u69 = *(float *)((t45 + t43));
                t43 = 0x4;
                u70 = *(float *)((t45 + t43));
                t43 = 0xC;
                u71 = *(float *)((t46 + t43));
                t43 = 0x14;
                u73 = (u70 * u69);
                t43 = (FUN_0c0dcc70(((*(float *)((t46 + t43))) * 0.0f), (u73 * u71), 0.0f));
                t44 = 0xC0DCCF0;
                t43 = (FUN_0c0dccf0());
                t43 = 0x3CE;
                t43 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 20))) + t43)))));
                t43 = 0x3CC;
                t43 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 20))) + t43)))));
                t44 = 0xC0DCCA0;
                t43 = (FUN_0c0dcca0(0xC10C498));
                t43 = (nlRotateAZ((*(int *)((t46 + 0x10)))));
                t44 = 0xC0DCB80;
                t43 = (nlScale(17.6399975f, 17.6399975f, 1.0f));
                t43 = (nlGetMatrix((t46 + 0x18)));
                t44 = (*(int *)(((int)stk + 4)));
                t44 = (t44 - 1);
            }
        }
    }
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t105 = 0xC09C814;
    t106 = 0x0;
    t107 = (a4 + 0x50);
    for (;;) {
        if ((int)(*(int *)((t107 + 0x0))) > 0) {
            t105 = 0xC09C818;
            *(unsigned int *)(((int)stk + 24)) = 0x1;
            u111 = *(float *)((t105 + 0x0));
            t105 = 0x4;
            *(float *)((((int)stk + 4) + t105)) = ((float)(*(int *)((t107 + 0x0))) * u111);
            t105 = (FUN_0c0dbda0((t107 + 0x18)));
            t105 = 0xC09C81C;
            t105 = (FUN_0c0de000((*(float *)((t105 + 0x0)))));
            t105 = 0x4;
            u115 = *(float *)((((int)stk + 4) + t105));
            t105 = 0x4;
            u116 = *(float *)((((int)stk + 4) + t105));
            t105 = 0x4;
            t105 = (FUN_0c0848bc(((*(float *)((((int)stk + 4) + t105))) * 1.0f), (u116 * 0.869999945f), (u115 * 6.86999989f)));
            t105 = (FUN_0c0c47ae((*(int *)((t107 + 0x4)))));
            *(unsigned int *)((t107 + 0x0)) = ((*(int *)((t107 + 0x0))) - 1);
        } else {
            if ((int)(*(int *)((t107 + 0x0))) < 0) {
                t105 = 0xC09C944;
                *(unsigned int *)(((int)stk + 24)) = 0x1;
                u124 = *(float *)((t105 + 0x0));
                t105 = 0x8;
                *(float *)((((int)stk + 4) + t105)) = (-((float)(*(int *)((t107 + 0x0))) * u124));
                t105 = (FUN_0c0dbda0((t107 + 0x18)));
                t105 = (FUN_0c0de000(17.6399975f));
                t105 = 0x8;
                u127 = *(float *)((((int)stk + 4) + t105));
                t105 = 0x8;
                u128 = *(float *)((((int)stk + 4) + t105));
                t105 = 0x8;
                t105 = (FUN_0c0848bc(((*(float *)((((int)stk + 4) + t105))) * 1.0f), (u128 * 0.869999945f), (u127 * 6.86999989f)));
                t105 = (FUN_0c0c47ae((*(int *)((t107 + 0x4)))));
                *(unsigned int *)((t107 + 0x0)) = ((*(int *)((t107 + 0x0))) + 0x1);
            }
        }
        t106 = (*(int *)(((int)stk + 4)));
        t106 = (t106 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t106;
        t107 = (t107 + 0x58);
        if ((int)t106 >= (int)0x100) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t144 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    if ((*(int *)(((int)stk + 24))) == 0) {
        *(unsigned int *)0xC249710 = 0x0;
        return FUN_0c0e19f2();
    }
    return t144;
}

int FUN_0c06ede8(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t12;
    register int t15;
    register int t17;
    register float u19;
    register float u20;
    register int t22;
    register int t43;
    register int t44;
    register int t47;
    register float u52;
    register int t57;
    register float t59;
    register float u62;
    register int t65;
    register int t68;
    register int t70;
    register int t73;
    register float u79;
    register float u85;
    register float u90;
    register int t111;
    register int t114;
    register float u121;
    register float u127;
    register float u133;

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e15d4((*(int *)((a4 + 0x84))), a5, a6, a7);
        FUN_0c0e19f2();
    }
    t12 = *(int *)0xC23ED9C;
    if (t12 == 24) {
        return t12;
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    t15 = ((int (*)(int))((*(int *)((a4 + 0xC4)))))(a4);
    if (t15 == 0) {
    } else {
        FUN_0c0da2e0();
        t17 = FUN_0c0e5f1c();
        if ((*(float *)((a4 + 0x78))) > (float)t17) {
            u19 = *(float *)((a4 + 0x7C));
            u20 = *(float *)((a4 + 0x80));
            FUN_0c0da2e0();
            t22 = FUN_0c0e5f1c();
            if ((u19 + (((u20 - u19) * (float)t22) / 99.0f)) > (*(float *)((a4 + 0x68)))) {
                if ((*(int *)((a4 + 0xC8))) != 0) {
                    FUN_0c0cc3f8(0xB2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                }
                *(float *)((a4 + 0x68)) = (u19 + (((u20 - u19) * (float)t22) / 99.0f));
            }
        }
        *(float *)((a4 + 0x34)) = 0.0f;
        t43 = 0x0;
        t44 = (a4 + 0x38);
        for (;;) {
            *(int *)((int)stk + 4) = (a4 + 0x34);
            *(volatile int *)((a4 + 0x30));
            *(volatile int *)((t44 + 0xC));
            t47 = FUN_0c0e5dc0();
            t43 = (t43 + 0x1);
            u52 = (*(float *)(((a4 + 0x34) + 0x0)));
            u52 = u52 + (FUN_0c0d9e90(((*(int *)((t44 + 0x8))) + t47))) * (*(float *)((t44 + 0x0)));
            *(float *)(((a4 + 0x34) + 0x0)) = u52;
            *(float *)((t44 + 0x0)) = ((*(float *)((t44 + 0x0))) * (*(float *)((t44 + 0x4))));
            t44 = (t44 + 0x10);
            if ((int)t43 >= (int)0x3) {
                break;
            }
        }
        *(volatile int *)((a4 + 0x30));
        *(volatile int *)(((a4 + 0x68) + 0xC));
        t57 = FUN_0c0e5dc0();
        t59 = FUN_0c0d9e90(((*(int *)(((a4 + 0x68) + 0x8))) + t57));
        u62 = *(float *)(((a4 + 0x68) + 0x0));
        *(float *)(((a4 + 0x68) + 0x0)) = ((*(float *)(((a4 + 0x68) + 0x0))) * (*(float *)(((a4 + 0x68) + 0x4))));
        if (_builtin_fabsf((u62 * t59)) > _builtin_fabsf((*(float *)((a4 + 0x34))))) {
            *(float *)((a4 + 0x34)) = (u62 * t59);
        }
        t65 = *(int *)(((int)stk + 8));
        *(float *)((t65 + 0x270)) = ((*(float *)((t65 + 0x270))) + (*(float *)(((0x34 + a4) + 0x0))));
        t68 = *(int *)((a4 + 0x90));
        if (t68 != 0) {
            if (t68 == 1) {
                FUN_0c0da2e0();
                t70 = FUN_0c0e5f1c();
                if (((*(float *)((a4 + 0x8C))) * 1000.0f) > (float)t70) {
                    t73 = FUN_0c0e19aa(0xC06ECE4, 0xB4, (*(int *)((a4 + 0x84))));
                    FUN_0c0e19d0(t73);
                    FUN_0c0da2e0();
                    u79 = (*(float *)((a4 + 0xB4)));
                    u79 = u79 + (*(float *)((a4 + 0xC0))) * ((float)((FUN_0c0e5f1c()) - 500) / 1000.0f);
                    *(float *)((t73 + 0x30)) = u79;
                    FUN_0c0da2e0();
                    u85 = (*(float *)((a4 + 0xA0)));
                    u85 = u85 + ((*(float *)((a4 + 0xAC))) - (*(float *)((a4 + 0xA0)))) * ((float)(FUN_0c0e5f1c()) / 1000.0f);
                    *(float *)((t73 + 0x34)) = u85;
                    FUN_0c0da2e0();
                    u90 = (*(float *)((a4 + 0xB4)));
                    u90 = u90 + (*(float *)((a4 + 0xC0))) * ((float)((FUN_0c0e5f1c()) - 500) / 1000.0f);
                    *(float *)((t73 + 0x38)) = u90;
                    *(float *)((t73 + 0x90)) = (*(float *)((a4 + 0x94)));
                    *(float *)((t73 + 0x94)) = (*(float *)((a4 + 0x98)));
                    FUN_0c0da2e0();
                    *(unsigned int *)(((0x78 + t73) + 0x0)) = ((FUN_0c0e5f1c()) + 0xD66);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB4 + a4)) = *(struct mv3 *)((t73 + 0x30)); }
                } else {
                    *(unsigned int *)((a4 + 0x90)) = 0x0;
                }
            }
        } else {
            FUN_0c0da2e0();
            t111 = FUN_0c0e5f1c();
            if (!(((*(float *)((a4 + 0x88))) * 1000.0f) > (float)t111)) {
            } else {
                t114 = FUN_0c0e19aa(0xC06ECE4, 0xB4, (*(int *)((a4 + 0x84))));
                FUN_0c0e19d0(t114);
                FUN_0c0da2e0();
                u121 = (*(float *)((a4 + 0x9C)));
                u121 = u121 + ((*(float *)((a4 + 0xA8))) - (*(float *)((a4 + 0x9C)))) * ((float)(FUN_0c0e5f1c()) / 1000.0f);
                *(float *)((t114 + 0x30)) = u121;
                FUN_0c0da2e0();
                u127 = (*(float *)((a4 + 0xA0)));
                u127 = u127 + ((*(float *)((a4 + 0xAC))) - (*(float *)((a4 + 0xA0)))) * ((float)(FUN_0c0e5f1c()) / 1000.0f);
                *(float *)((t114 + 0x34)) = u127;
                FUN_0c0da2e0();
                u133 = (*(float *)((a4 + 0xA4)));
                u133 = u133 + ((*(float *)((a4 + 0xB0))) - (*(float *)((a4 + 0xA4)))) * ((float)(FUN_0c0e5f1c()) / 1000.0f);
                *(float *)((t114 + 0x38)) = u133;
                *(float *)((t114 + 0x90)) = (*(float *)((a4 + 0x94)));
                *(float *)((t114 + 0x94)) = (*(float *)((a4 + 0x98)));
                FUN_0c0da2e0();
                *(unsigned int *)(((0x78 + t114) + 0x0)) = ((FUN_0c0e5f1c()) + 0xD66);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB4 + a4)) = *(struct mv3 *)((t114 + 0x30)); }
                *(unsigned int *)((a4 + 0x90)) = 0x1;
            }
        }
    }
    return FUN_0c0e16c0((*(int *)((a4 + 0x84))));
}

int FUN_0c0201f4(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t11;
    register int t12;
    register int t23;
    register int t31;
    register int t38;
    register int t53;
    register int t77;
    register int t107;
    register int t114;
    register int t129;
    register int t135;
    register int t1;
    register int t2;
    register int t3;
    register int t29;
    register int t61;
    register int t62;
    register int t63;
    register int t105;

    if (((*(int *)0xC204998) != 0) && ((t1 = *(int *)0xC23ED50, t1 == 29) && ((t2 = *(int *)((a4 + 0x48C)), t2 == 44) && (t3 = *(int *)((a4 + 0x304)), (int)t3 <= 0)))) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x200);
    }
    t11 = *(int *)0xC23A258;
    if ((*(int *)((a4 + 0x21C))) == t11) {
        return 0x21C;
    }
    *(unsigned int *)((a4 + 0x21C)) = t11;
    t12 = FUN_0c01ff28(a4, a5, a6, a7);
    if (t12 != 0) {
        return t12;
    }
    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)))) == 2) {
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
    }
    t23 = *(short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4));
    if ((unsigned short)t23 != 5) {
        if ((unsigned short)t23 != 4) {
            if ((unsigned short)t23 != 3) {
                if ((unsigned short)t23 == 2) {
                    if (((int)(*(int *)((a4 + 0x4DC))) > 0) && (t29 = *(int *)((a4 + 0x1BC)), t29 == 0)) {
                        FUN_0c042980(a4);
                    } else {
                        t31 = FUN_0c01fea0(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                        if (t31 != 0) {
                            FUN_0c02dc30(a4);
                        } else {
                            FUN_0c03e6c6(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
                        }
                        if ((*(int *)((a4 + 0x47C))) != 0) {
                            t38 = ((int (*)(int))((*(int *)((a4 + 0x47C)))))(a4);
                            if ((int)(*(int *)((a4 + 0x4DC))) > 0) {
                                FUN_0c042980(a4);
                            }
                        }
                    }
                    if ((*(int *)((a4 + 0x474))) != 0) {
                        t53 = ((int (*)(int))((*(int *)((a4 + 0x474)))))(a4);
                    }
                    return ((int (*)(int))(0xC020166))(a4);
                }
                return (unsigned short)t23;
            }
            *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
            if ((((*(int *)((a4 + 0xC8))) & 0x230) != 0) && ((t61 = *(int *)((a4 + 0x304)), (int)t61 <= 0) && (t62 = *(int *)((a4 + 0xBC)), t63 = *(int *)((0xC247030 + (t62 << 2))), t63 != 4))) {
                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
                *(unsigned int *)((a4 + 0x304)) = ((*(int *)((a4 + 0x304))) + 0x1);
            }
            if ((int)(*(int *)((a4 + 0x4DC))) > 0) {
                *(unsigned int *)((a4 + 0x5AC)) = (*(int *)((a4 + 0x20C)));
                *(unsigned int *)((a4 + 0x20C)) = 0x1;
                *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0xC)) = (*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)));
                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x8;
                *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x4;
                return 0x4;
            }
            t77 = FUN_0c035efc(a4);
            if (t77 != 0) {
                if (t77 != 1) {
                    if (t77 != 2) {
                        if (t77 != 4) {
                            if (t77 != 8) {
                            } else {
                                *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x4;
                                *(unsigned int *)((a4 + 0x4DC)) = 0x4;
                            }
                        } else {
                            *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x4;
                            *(unsigned int *)((a4 + 0x4DC)) = 0x3;
                        }
                    } else {
                        *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x4;
                        *(unsigned int *)((a4 + 0x4DC)) = 0x2;
                    }
                } else {
                    *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x4;
                    *(unsigned int *)((a4 + 0x4DC)) = 0x1;
                }
            }
            if (((int)(*(int *)((a4 + 0x4DC))) > 0) && (t105 = *(int *)((a4 + 0x1BC)), t105 == 0)) {
                FUN_0c042980(a4);
            } else {
                t107 = FUN_0c01fea0(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                if (t107 != 0) {
                    FUN_0c02dc30(a4);
                } else {
                    FUN_0c03e6c6(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
                }
                if ((*(int *)((a4 + 0x47C))) != 0) {
                    t114 = ((int (*)(int))((*(int *)((a4 + 0x47C)))))(a4);
                    if ((int)(*(int *)((a4 + 0x4DC))) > 0) {
                        FUN_0c042980(a4);
                    }
                }
            }
            if ((*(int *)((a4 + 0x474))) != 0) {
                t129 = ((int (*)(int))((*(int *)((a4 + 0x474)))))(a4);
            }
            return ((int (*)(int))(0xC020166))(a4);
        }
        t135 = *(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)));
        if (t135 == 8) {
            return t135;
        }
        FUN_0c042980(a4);
        if ((int)(*(int *)((a4 + 0x4DC))) > 0) {
            return ((int (*)(int))(0xC020166))(a4);
        }
        *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0xC)) = (*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)));
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x8;
        return 0xBC;
    }
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    if ((int)(*(int *)((a4 + 0x4DC))) > 0) {
        *(unsigned int *)((a4 + 0x20C)) = (*(int *)((a4 + 0x5AC)));
    }
    *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x2;
    *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8)) = 0x3;
    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = (*(int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0xC)));
    return 0x498;
}

int FUN_0c08eabc(int a4, int a5, int a6, int a7)
{
    int stk[21];
    register float u2;
    register float u67;
    register float u68;
    register int t5;
    register float u12;
    register float u15;
    register float u23;
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float u28;
    register float u29;
    register float u30;
    register float u34;
    register int t43;
    register int t69;
    register int t70;
    register int t71;
    register float u72;
    register float u73;
    register float u74;
    register int t77;
    register float u86;
    register float u97;
    register int t109;
    register int t111;
    register int t113;
    register int t58;
    register float u64;
    register int t47;
    register float u53;
    register float u56;
    register float u57;
    register float u19;
    register int t104;
    register float u106;
    register float u107;

    *(unsigned int *)(((int)stk + 20)) = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) - 1);
    u2 = *(float *)((a4 + 0x34));
    u67 = u2;
    u68 = 0.0f;
    if (u2 > 0.0f) {
        if ((int)(*(int *)((a4 + 0x40))) >= 0) {
            u56 = u2;
            u57 = 0.0f;
        } else {
            *(unsigned int *)((a4 + 0x40)) = 0x0;
            t5 = *(int *)((a4 + 0x44));
            *(unsigned int *)((a4 + 0x44)) = (t5 + 0x1);
            if ((unsigned int)(*(int *)((a4 + 0x44))) >= (unsigned int)0x20) {
                *(unsigned int *)((a4 + 0x44)) = 0x0;
            }
            u12 = (*(float *)((a4 + 0x30)));
            u12 = u12 + 0.00488400459f * (float)((FUN_0c0da2e0()) & 0xFFF);
            *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = (u12 + -10.0f);
            u15 = (*(float *)((a4 + 0x38)));
            u15 = u15 + 0.00488400459f * (float)((FUN_0c0da2e0()) & 0xFFF);
            *(float *)(((((int)stk + 4) + 0x14) + 0x8)) = (u15 + -10.0f);
            *(float *)(((((int)stk + 4) + 0x14) + 0x4)) = (((*(float *)((a4 + 0x34))) - ((float)((FUN_0c0da2e0()) & 0xFFF) * 0.0024420023f)) + -10.0f);
            if (((int)(*(int *)0xC23ED50) > (int)0x46) && (u19 = *(float *)(((int)stk + 32)), 83.0f > u19)) {
                *(float *)(((((int)stk + 4) + 0x14) + 0x8)) = 83.0f;
            }
            u23 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
            u24 = *(float *)((a4 + 0x30));
            u25 = *(float *)(((((int)stk + 4) + 0x14) + 0x4));
            u26 = *(float *)((a4 + 0x34));
            u27 = *(float *)(((((int)stk + 4) + 0x14) + 0x8));
            u28 = *(float *)((a4 + 0x38));
            u29 = ((u26 - u25) * (u26 - u25));
            u29 = u29 + (u24 - u23) * (u24 - u23);
            u30 = u29;
            u30 = u30 + (u28 - u27) * (u28 - u27);
            *(float *)((((t5 * 0x54) + (a4 + 0x48)) + 0x44)) = (_builtin_sqrtf(u30) * 0.166666657f);
            *(float *)((((t5 * 0x54) + (a4 + 0x48)) + 0x4C)) = (_builtin_sqrtf(u30) * 0.099999994f);
            *(unsigned int *)(((0x48 + ((t5 * 0x54) + (a4 + 0x48))) + 0x0)) = (((FUN_0c0da2e0()) & 0xF) + 0x2A7);
            FUN_0c0da2e0();
            u34 = 1001.0f;
            u34 = u34 + 0.000732421875f * (float)(FUN_0c0e5dc0());
            *(unsigned int *)((((t5 * 0x54) + (a4 + 0x48)) + 0x50)) = (int)u34;
            *(unsigned int *)((((t5 * 0x54) + (a4 + 0x48)) + 0x40)) = 0x18;
            FUN_0c0a7714((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (u24 - u23), (u26 - u25), (u28 - u27));
            nlPushMatrix(0x0);
            nlUnitMatrix();
            FUN_0c0dcca0((a4 + 0x30));
            nlRotateAY((*(int *)(((int)stk + 12))));
            nlRotateAX((*(int *)(((int)stk + 8))));
            t43 = FUN_0c0da2e0();
            nlRotateAZ((t43 << 1));
            nlGetMatrix(((t5 * 0x54) + (a4 + 0x48)));
            nlPopMatrix(0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 4) + 0x14)); }
            t47 = (a4 + 0x30);
            u53 = (u24 - u23);
        }
        t58 = t47;
        u64 = u53;
        u67 = u56;
        u68 = u57;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t69 = t58;
    t70 = 0x0;
    t71 = (a4 + 0x48);
    u72 = u67;
    u73 = u68;
    u74 = u64;
    for (;;) {
        if ((int)(*(int *)((t71 + 0x40))) > 0) {
            t69 = 0x1;
            *(unsigned int *)(((int)stk + 20)) = t69;
            t70 = (*(int *)((t71 + 0x40)));
            u72 = 0.0416666642f;
            t77 = t70;
            t70 = 0xC0848BC;
            u73 = (float)t77;
            u74 = u73;
            u74 = (u74 * u72);
            u73 = 1.39999998f;
            *(float *)(((int)stk + 16)) = (u74 * u73);
            FUN_0c0848bc((u74 * u73), (u74 * u73), (u74 * 7.0f));
            nlPushMatrix(0x0);
            nlMultiMatrix(t71);
            nlPushMatrix(0x0);
            nlScale((1.0f + 1.0f), (1.0f + 1.0f), (*(float *)((t71 + 0x44))));
            nlRotateAY(0x4000);
            u74 = (*(float *)((t71 + 0x44)));
            u86 = (1.0f + 1.0f);
            if (u74 > (1.0f + 1.0f)) {
                u86 = u74;
            }
            FUN_0c0de000(u86);
            FUN_0c0c465c((*(int *)((t71 + 0x48))));
            nlPopMatrix(0x1);
            nlScale(4.0f, 4.0f, (*(float *)((t71 + 0x4C))));
            nlRotateAY(0x8000);
            u74 = (*(float *)((t71 + 0x4C)));
            u97 = 4.0f;
            if (u74 > 4.0f) {
                u97 = u74;
            }
            FUN_0c0de000(u97);
            FUN_0c0c465c((*(int *)((t71 + 0x50))));
            nlPopMatrix(0x1);
            t70 = (*(int *)((t71 + 0x40)));
            t70 = (t70 - 1);
            *(unsigned int *)((t71 + 0x40)) = t70;
        } else {
            t104 = t69;
            u106 = u72;
            u107 = u73;
        }
        t109 = *(int *)(((int)stk + 4));
        u72 = u106;
        u73 = u107;
        t69 = t104;
        t70 = 0x20;
        *(unsigned int *)(((int)stk + 4)) = (t109 + 0x1);
        t71 = (t71 + 0x54);
        if ((unsigned int)(t109 + 0x1) >= (unsigned int)t70) {
            break;
        }
    }
    t111 = *(int *)(((int)stk + 20));
    t113 = (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12)));
    if (t111 == 0) {
        t113 = (FUN_0c0e19f2());
    }
    return t113;
}

int FUN_0c0803f4(int a4)
{
    int stk[19];
    register int t4;
    register int t5;
    register int t10;
    register float u11;
    register int t27;
    register int t30;
    register int t64;
    register float u65;
    register int t135;
    register int t107;
    register int t108;
    register int t109;
    register float u110;
    register int t118;
    register float u136;
    register float u139;
    register int t100;
    register float u101;
    register float u21;
    register float u15;
    register int t92;
    register float u93;
    register int t61;
    register float u62;
    register float u54;
    register float u84;
    register float u75;
    register int t129;

    t4 = *(int *)(((*(int *)((0xC246FF0 + ((*(int *)((a4 + 0x3BC))) << 2)))) + 0xBC));
    t5 = *(int *)(((*(int *)((0xC246FF0 + ((*(int *)((a4 + 0x3C0))) << 2)))) + 0xBC));
    FUN_0c07e5c8(a4);
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 16) != 0) {
        t10 = *(int *)0xC247D6C;
        if (t10 != 0) {
            if (t10 != 1) {
            } else {
                u11 = *(float *)((a4 + 0x3B0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((0x3A4 + a4)); }
                u15 = u11;
            }
            u21 = u15;
        } else {
            nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
            u21 = 15.0f;
        }
        t100 = 0x1;
        u101 = u21;
    } else {
        t27 = FUN_0c0d9dc0(((*(float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x0))) - (*(float *)((((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268) + 0x0)))), ((*(float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x8))) - (*(float *)((((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268) + 0x8)))));
        if ((*(int *)0xC247074) == 1) {
            *(unsigned int *)(((int)stk + 16)) = (((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268) + 0xC);
            *(unsigned int *)(((int)stk + 4)) = (((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0xC);
            t30 = *(short *)0xC247CBC;
            if (t30 != 68) {
                if (t30 != 78) {
                    if (t30 != 80) {
                        nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
                        *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFE001;
                        *(unsigned int *)((a4 + 0x3E0)) = ((short)t27 + 0x7FFF);
                    } else {
                        nlSubVector3op((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 16))));
                        FUN_0c0a7714((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
                        *(unsigned int *)((a4 + 0x3F4)) = 0x1;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
                        *(unsigned int *)((a4 + 0x3DC)) = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((a4 + 0x3E0)) = ((*(int *)(((int)stk + 12))) + 0xE38);
                    }
                    u54 = 15.0f;
                } else {
                    nlGetAverageVector((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 16))), (0x284 + a4), 0.5f, 0.5f);
                    *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFDC72;
                    *(unsigned int *)((a4 + 0x3E0)) = (short)t27;
                    u54 = 20.0f;
                }
                t61 = 0x1;
                u62 = u54;
            } else {
                *(unsigned int *)((a4 + 0x3F4)) = 0x1;
                nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
                *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFF8E4;
                *(unsigned int *)((a4 + 0x3E0)) = (short)t27;
                t61 = 0x0;
                u62 = 15.0f;
            }
            t92 = t61;
            u93 = u62;
        } else {
            t64 = *(int *)0xC247D6C;
            if (t64 != 0) {
                if (t64 != 1) {
                } else {
                    u65 = *(float *)((a4 + 0x3B0));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((0x3A4 + a4)); }
                    *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFEAAB;
                    *(unsigned int *)(((0x3E0 + a4) + 0x0)) = ((short)(FUN_0c0d9dc0(((*(float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x0))) - (*(float *)((a4 + 0x3A4)))), ((*(float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x8))) - (*(float *)((a4 + 0x3AC)))))) + 0x3FFF);
                    u75 = u65;
                }
                u84 = u75;
            } else {
                nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
                *(unsigned int *)((a4 + 0x3DC)) = 0xFFFFE001;
                *(unsigned int *)((a4 + 0x3E0)) = ((short)t27 + 0x7FFF);
                u84 = 20.0f;
            }
            t92 = 0x1;
            u93 = u84;
        }
        t100 = t92;
        u101 = u93;
    }
    if ((*(int *)((a4 + 0x3F4))) != 0) {
        *(float *)((a4 + 0x29C)) = u101;
        *(unsigned int *)((a4 + 0x3D4)) = (*(int *)((a4 + 0x3DC)));
        *(unsigned int *)((a4 + 0x3D8)) = (*(int *)((a4 + 0x3E0)));
    } else {
        t135 = 0;
        if (t100 != 0) {
            t107 = *(int *)((a4 + 0x3E4));
            t108 = *(int *)((a4 + 0x3E0));
            t109 = *(int *)((a4 + 0x3D8));
            u110 = *(float *)0xC0807B0;
            t118 = (short)((t108 + t107) - t109);
            if (_builtin_fabsf((float)(short)((t108 + t107) - t109)) > u110) {
                *(unsigned int *)((a4 + 0x3E4)) = ((*(int *)((a4 + 0x3E4))) + 0x7FFF);
                t118 = (short)(((*(int *)((a4 + 0x3E0))) + (*(int *)((a4 + 0x3E4)))) - (*(int *)((a4 + 0x3D8))));
            }
            t129 = t118;
            _builtin_fabsf((float)(short)((t108 + t107) - t109));
            t135 = ((_builtin_fabsf((float)(short)((t108 + t107) - t109)) > u110));
        } else {
            t129 = (FUN_0c07e636((*(int *)((a4 + 0x3D8))), (*(int *)((a4 + 0x3E0)))));
            t135 = (1);
        }
        u136 = *(float *)0xC0807B8;
        u139 = (*(float *)((a4 + 0x29C)));
        u139 = u139 + u136 * (u101 - (*(float *)(((0x29C + a4) + 0x0))));
        *(float *)((a4 + 0x29C)) = u139;
        *(unsigned int *)((a4 + 0x3D4)) = (int)((float)(*(int *)((a4 + 0x3D4))) + ((float)((*(int *)(((0x3DC + a4) + 0x0))) - (*(int *)(((0x3D4 + a4) + 0x0)))) * u136));
        *(unsigned int *)((a4 + 0x3D8)) = (int)((float)(*(int *)((a4 + 0x3D8))) + ((float)t129 * u136));
    }
    return (FUN_0c07e2b0(a4));
}
