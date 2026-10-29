/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[6]; } Stk6;
typedef struct { int w[14]; } Stk14;
int ADXF_GetPtinfoSize(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXT_EntryErrFunc(int, int);
int FUN_0c0101dc(int, int, int);
int FUN_0c010a30(void);
int FUN_0c01cdc2(int);
float FUN_0c01f1b8(int, int);
int FUN_0c02a416(int);
int FUN_0c0321d4(int, int);
int FUN_0c03227c(int);
int FUN_0c033b04(int);
int FUN_0c049c0a(int);
int FUN_0c05a98a(int);
int FUN_0c063098(int);
int FUN_0c082220(void);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c08a220(int, int);
int FUN_0c08d75c(int, int, int);
int FUN_0c090bf0(int);
int FUN_0c09134c(int, int, int, int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0a7ed4(int, int, int, int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c0340(int, Stk14, float);
int FUN_0c0c475c(int, float);
int FUN_0c0c9e86(int);
int FUN_0c0cbbf4(Stk6);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d3f0c(int);
int FUN_0c0d6a64(void);
int FUN_0c0d6e1a(float);
int FUN_0c0da2e0(void);
float FUN_0c0da300(void);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0dd050(int);
int FUN_0c0dd0a0(int, int);
int FUN_0c0de000(float);
int FUN_0c0e1138(int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int FUN_0c0e6118(void);
int FUN_0c0e6248(void);
int FUN_0c210416(void);
int FUN_0c213470(void);
extern float _builtin_sqrtf(float);
int gdFsInit(void);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0ae7b0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c033530(int a4, int a5, int a6, int a7);
void FUN_0c037acc(int a4, float f4);
int FUN_0c029302(int a4);
int FUN_0c0ca538(int a4, int a5, int a6);
int FUN_0c0e1310(int a4, int a5, float f4, float f5, float f6);
int FUN_0c09084c(int a4, int a5, int a6);
int FUN_0c017718(int a4, int a5, float f4);
int FUN_0c0b7734(void);
int FUN_0c0cbc28(void);
void FUN_0c06e56e(int a4, int a5);
int FUN_0c0911b8(int a4, int a5);
int FUN_0c090c68(int a4);
int FUN_0c0d41c6(void);
int FUN_0c03242c(int a4, float f4, float f5);
int FUN_0c063160(int a4, int a5, int a6, int a7);
int FUN_0c0d6254(int a4, int a5, int a6);
void FUN_0c0b4404(int a4);
float FUN_0c0cef82(int a4, int a5, int a6, int a7, int a8);
void FUN_0c05f9ee(int a4, int a5);

int FUN_0c0ae7b0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t37;
    float u96;
    int stk[18];

    { struct mv14 { int w[14]; }; *(struct mv14 *)(((int)stk + 4)) = *(struct mv14 *)(0xC10F8E0); }
    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                if ((*(int *)0xC23A1A0) == 0) {
                    *(unsigned int *)(((int)stk + 4)) = 0x2072;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0x2076;
                }
                if ((((unsigned int)(*(int *)0xC23A258) >> 2) & 1) != 0) {
                    FUN_0c0c0340(((int)stk + 4), *(Stk14 *)(((int)stk + 4)), f4);
                }
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.00016666665f);
                *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x100);
                if ((*(float *)0xC0AE9B0) > (*(float *)((a4 + 0x90)))) {
                    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.00999999978f);
                }
            }
        } else {
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - ((float)(*(int *)(((0x88 + a4) + 0x0))) * 0.00166666647f));
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.00016666665f);
            t37 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t37 - 1);
            if ((int)(t37 - 1) <= 0) {
                if ((*(int *)((a4 + 0x88))) != 0) {
                    FUN_0c0e19f2(a4, a5, a6, a7);
                } else {
                    *(float *)((a4 + 0x34)) = 0.0f;
                    *(float *)((a4 + 0x74)) = (*(float *)0xC0AE99C);
                    *(unsigned int *)((a4 + 0x78)) = 0xA6;
                    *(float *)((a4 + 0x90)) = (*(float *)0xC0AE9A0);
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                }
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x100);
        if ((*(int *)(((*(int *)0xC24FA6C) + 0x80))) != 3) {
        } else {
            *(unsigned int *)((a4 + 0xA0)) = 0x3C;
            *(unsigned int *)((a4 + 0x88)) = ((*(int *)((a4 + 0x88))) - 1);
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX(0x1000);
    nlRotateAY((*(short *)((a4 + 0x62))));
    u96 = *(float *)((a4 + 0x74));
    nlScale(u96, u96, u96);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
    return (nlPopMatrix(0x1));
}

int FUN_0c033530(int a4, int a5, int a6, int a7)
{
    int t0;
    float u8;
    float u11;
    int t20;
    float u21;
    float u22;
    float u25;
    float u26;
    int stk[21];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c0e1830(0xC0333F0, 0x41C);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x1DC)) = ((*(int *)(((int)stk + 4))) - 32768);
    *(unsigned int *)((t0 + 0x1CC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t0 + 0x414)) = 0x0;
    *(float *)((t0 + 0x3EC)) = 0.0272199996f;
    *(unsigned int *)((t0 + 0x400)) = 0x874;
    *(unsigned int *)((t0 + 0x3E8)) = ((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 12))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
    *(float *)((t0 + 0x3F0)) = 1.5f;
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = 0.0f;
    if ((*(int *)((t0 + 0x1CC))) != 0) {
        u8 = *(float *)((t0 + 0x3F0));
        FUN_0c0da2e0();
        u11 = 0.699999988f;
        u11 = u11 + 0.099999994f * (float)(FUN_0c0e5f1c());
        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((0.659999967f / (u8 / (1.0f + 1.0f))) * u11);
    } else {
        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = 0.0f;
    }
    t20 = *(int *)((t0 + 0x1CC));
    u21 = *(float *)0xC033730;
    u22 = *(float *)((t0 + 0x3F0));
    FUN_0c0da2e0();
    u25 = 0.699999988f;
    u25 = u25 + 0.099999994f * (float)(FUN_0c0e5f1c());
    u26 = (((float)t20 * u21) / (u22 / (1.0f + 1.0f)));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x8)) = (u26 * u25);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = ((*(int *)((t0 + 0x3E8))) + 0x8000);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), (0x220 + t0));
    *(unsigned short *)((t0 + 0x6E)) = (*(short *)((t0 + 0x3E8)));
    FUN_0c0da2e0();
    *(unsigned int *)(((0x22C + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 1536);
    *(unsigned int *)((t0 + 0x230)) = 0x0;
    FUN_0c0da2e0();
    *(unsigned int *)(((0x234 + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 768);
    *(unsigned int *)((t0 + 0x410)) = 0x0;
    *(unsigned int *)0xC246A3C = ((*(int *)0xC246A3C) + 0x1);
    return 0x410;
}

void FUN_0c037acc(int a4, float f4)
{
    int t1;
    int t4;
    int t7;
    int t10;
    int t15;
    int t24;
    int t33;
    int stk[11];

    if ((int)(*(int *)((a4 + 0x3DC))) >= 0) {
        t1 = *(int *)((a4 + 0x3DC));
        *(float *)((a4 + 0x268)) = ((*(float *)(((0x244 + a4) + 0x0))) - (*(float *)((((((t1 << 1) + t1) << 2) + (0x244 + a4)) + 0x0))));
        t4 = *(int *)((a4 + 0x3DC));
        *(float *)((a4 + 0x26C)) = ((*(float *)(((0x244 + a4) + 0x4))) - (*(float *)((((((t4 << 1) + t4) << 2) + (0x244 + a4)) + 0x4))));
        t7 = *(int *)((a4 + 0x3DC));
        *(float *)((a4 + 0x270)) = ((*(float *)(((0x244 + a4) + 0x8))) - (*(float *)((((((t7 << 1) + t7) << 2) + (0x244 + a4)) + 0x8))));
        t10 = *(int *)((a4 + 0x3DC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((t10 << 1) + t10) << 2) + (0x370 + a4))); }
    } else {
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 4)) = 0.0f;
        t15 = 0x0;
        if ((*(int *)((a4 + 0x238))) != 0) {
            nlAddVector((((int)stk + 4) + 0xC), (0x244 + a4));
            nlAddVector(((int)stk + 4), (0x370 + a4));
            t15 = 0x1;
        }
        t24 = t15;
        if ((*(int *)((a4 + 0x23C))) != 0) {
            nlAddVector((((int)stk + 4) + 0xC), ((0x244 + a4) + 0xC));
            nlAddVector(((int)stk + 4), ((0x370 + a4) + 0xC));
            t24 = (t15 + 0x1);
        }
        t33 = t24;
        if ((*(int *)((a4 + 0x240))) != 0) {
            nlAddVector((((int)stk + 4) + 0xC), ((0x244 + a4) + 0x18));
            nlAddVector(((int)stk + 4), ((0x370 + a4) + 0x18));
            t33 = (t24 + 0x1);
        }
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) / (float)t33);
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) / (float)t33);
        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) / (float)t33);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / (float)t33);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / (float)t33);
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) / (float)t33);
        *(float *)((a4 + 0x268)) = ((*(float *)((a4 + 0x244))) - (*(float *)(((int)stk + 16))));
        *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x244))) - (*(float *)(((int)stk + 20))));
        *(float *)((a4 + 0x270)) = ((*(float *)((a4 + 0x244))) - (*(float *)(((int)stk + 24))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((int)stk + 4)); }
    }
}

int FUN_0c029302(int a4)
{
    int t0;
    int t3;
    int t8;
    int t5;
    int t6;
    int t15;
    int t61;
    int t42;
    int t11;

    t0 = *(int *)((a4 + 0x3A4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t3 = 0x0;
                if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
                    t3 = 0x1;
                }
                t11 = t3;
            } else {
                t8 = 0x1;
                if (t0 == 3) {
                    t5 = FUN_0c03227c(a4);
                    t6 = 0x1;
                    if (t5 == 0) {
                        t6 = 0x0;
                    }
                    t8 = t6;
                }
                t11 = t8;
            }
            t42 = t11;
        } else {
            t15 = ((int (*)(int))(0xC0339A0))(a4);
            if ((t15 != 0) && (t15 != 1)) {
                if (t15 != 2) {
                    if (t15 != 3) {
                    } else {
                        *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0x390)));
                        *(unsigned int *)((a4 + 0x3A4)) = 0x3;
                        FUN_0c0321d4(a4, 0x13);
                    }
                } else {
                    *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0x390)));
                    *(unsigned int *)((a4 + 0x3A4)) = 0x3;
                    FUN_0c0321d4(a4, 0x12);
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)((a4 + 0x60)); }
                *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
                nlAddVector((a4 + 0x48), (0x4B0 + a4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
                *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - -0.5f);
                *(float *)((a4 + 0x4B0)) = 0.0f;
                *(float *)((a4 + 0x4B4)) = 0.0f;
                *(float *)((a4 + 0x4B8)) = 0.0f;
                if (!((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390))))) {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x573;
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
                }
            }
            t42 = 0x1;
        }
        t61 = t42;
    } else {
        if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
            *(unsigned int *)((a4 + 0x2C4)) = 0x572;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            FUN_0c033b04(a4);
            nlAddVector((a4 + 0x48), (0x4B0 + a4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
            *(float *)((a4 + 0x4B0)) = 0.0f;
            *(float *)((a4 + 0x4B4)) = 0.0f;
            *(float *)((a4 + 0x4B8)) = 0.0f;
            *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
        }
        t61 = 0x1;
    }
    return t61;
}

int FUN_0c0ca538(int a4, int a5, int a6)
{
    int t17;
    int t25;
    int t28;
    int t29;
    int t32;
    int t34;
    int t35;
    int t26;
    int t38;
    int stk[28];

    *(unsigned int *)(((((int)stk + 4) + 0x58) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder(((*(int *)(((int)stk + 12))) + 0x2EC));
    nlGetMatrix((((int)stk + 4) + 0x18));
    FUN_0c0c9e86(a6);
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC1E9CD0); }
    FUN_0c0dbda0((a6 + 0x74));
    nlMultiMatrix((((int)stk + 4) + 0x18));
    nlInvertMatrix(0x0);
    FUN_0c0db4d0((((int)stk + 4) + 0xC), 0xC31FD88);
    FUN_0c0dd050(0xC31FD88);
    nlPopMatrix(0x1);
    nlMultiMatrixRevOrder((a6 + 0x74));
    nlMultiMatrixRevOrder(0xC1E9CDC);
    nlMultiMatrixRevOrder((0xB4 + a6));
    t17 = *(int *)(((int)stk + 8));
    if (t17 != 0) {
        FUN_0c0844dc((*(int *)((a6 + 0xC))), (*(int *)((a6 + 0x10))), 0x0, 1.0f);
        FUN_0c0844dc((*(int *)((a6 + 0xC))), (*(int *)((a6 + 0x10))), 0x1, 1.0f);
        *(unsigned int *)(((int)stk + 4)) = (t17 + 0x18);
        t25 = (nlGetMatrix((((int)stk + 4) + 0x18)));
        for (;;) {
            t28 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t28 + 0x4);
            t29 = *(int *)((((t28 + 0x4) - 4) + 0x0));
            if (t29 == 0) {
                t25 = (nlPopMatrix(0x1));
                return t25;
            }
            if ((t29 & 0x80000000) != 0) {
                t26 = (*(int *)(((int)stk + 4)));
                t26 = (t26 - 4);
                *(unsigned int *)(((int)stk + 4)) = (t26 + 0x50);
            } else {
                if ((t29 & 0x10) != 0) {
                    t32 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t32 + 0x4);
                    t38 = (*(int *)((((t32 + 0x4) - 4) + 0x0)));
                } else {
                    if ((t29 & 0x8) == 0) {
                        break;
                    }
                    t34 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t34 + 0x4);
                    t35 = *(int *)((((t34 + 0x4) - 4) + 0x0));
                    t38 = ((t35 << 1) + t35);
                }
                t25 = (FUN_0c0101dc(((int)stk + 4), (((int)stk + 4) + 0x58), t38));
            }
        }
        for (;;) {
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0e1310(int a4, int a5, float f4, float f5, float f6)
{
    float u0;
    float u12;
    float u13;
    float u18;
    float u19;
    float u21;
    float u22;
    float u23;
    float u28;
    float u29;
    float u31;
    float u32;
    float u33;
    float u38;
    float u39;
    float u41;
    float u42;
    float u43;
    float u48;
    float u49;
    float u51;
    float u52;
    float u53;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F9;
    float F10;
    float F11;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    u0 = *(float *)((R5 + 0x4));
    R6 = (R5);
    R7 = (0xC94C6C0);
    F3 = (0.0f);
    F7 = (u0);
    F9 = ((*(float *)((R5 + 0x0))));
    if ((u0 > 0.0f)) goto L_C0E1336;
    if (((*(int *)0xC20D140) != 0)) goto L_C0E132E;
    L_C0E145A:;
    if ((R4 != 0)) goto L_C0E146C;
    *(unsigned int *)((R7 + 0x0)) = 0x0;
    *(unsigned int *)0xC94C6E4 = 0x0;
    return 0x0;
    L_C0E146C:;
    return FUN_0c0e1138(R4, R5, R6, F4, F5, F6, F7, F8, F9, F10, F11);
    L_C0E132E:;
    if ((F7 != F3)) goto L_C0E1336;
    goto L_C0E145A;
    L_C0E1336:;
    u12 = *(float *)((R6 + 0x8));
    u13 = *(float *)((R6 + 0xC));
    F10 = (u13);
    F11 = (u12);
    F8 = (((((-(F4 * F9)) - (F6 * u12)) - u13) / F7));
    if ((!(((((-(F4 * F9)) - (F6 * u12)) - u13) / F7) > F5))) goto L_C0E1358;
    goto L_C0E145A;
    L_C0E1358:;
    u18 = *(float *)((R6 + 0x1C));
    *(float *)(((int)stk + 12)) = u18;
    u19 = *(float *)((R6 + 0x14));
    *(float *)(((int)stk + 8)) = u19;
    u21 = *(float *)(((int)stk + 12));
    u22 = *(float *)((R6 + 0x28));
    u23 = (((u18 - F6) * ((*(float *)((R6 + 0x20))) - u19)) - ((u19 - F4) * (u22 - u21)));
    R0 = (0x28);
    F0 = ((u22 - u21));
    F1 = (u21);
    if ((0.0f > (F7 * u23))) goto L_C0E145A;
    u28 = *(float *)((R6 + R0));
    *(float *)(((int)stk + 4)) = u28;
    u29 = *(float *)((R6 + 0x20));
    *(float *)(((int)stk + 32)) = u29;
    u31 = *(float *)((R6 + 0x34));
    u32 = *(float *)(((int)stk + 4));
    u33 = (((u28 - F6) * ((*(float *)((R6 + 0x2C))) - u29)) - ((u29 - F4) * (u31 - u32)));
    R0 = (0x34);
    F0 = ((u31 - u32));
    F1 = (u32);
    if ((0.0f > (F7 * u33))) goto L_C0E145A;
    u38 = *(float *)((R6 + R0));
    *(float *)(((int)stk + 20)) = u38;
    u39 = *(float *)((R6 + 0x2C));
    *(float *)(((int)stk + 16)) = u39;
    u41 = *(float *)(((int)stk + 20));
    u42 = *(float *)((R6 + 0x40));
    u43 = (((u38 - F6) * ((*(float *)((R6 + 0x38))) - u39)) - ((u39 - F4) * (u42 - u41)));
    R0 = (0x40);
    F0 = ((u42 - u41));
    F1 = (u41);
    if ((0.0f > (F7 * u43))) goto L_C0E145A;
    u48 = *(float *)((R6 + R0));
    *(float *)(((int)stk + 24)) = u48;
    u49 = *(float *)((R6 + 0x38));
    *(float *)(((int)stk + 28)) = u49;
    u51 = *(float *)(((int)stk + 24));
    u52 = *(float *)((R6 + 0x1C));
    u53 = (((u48 - F6) * ((*(float *)((R6 + 0x14))) - u49)) - ((u49 - F4) * (u52 - u51)));
    F0 = ((u52 - u51));
    F1 = (u51);
    if ((0.0f > (F7 * u53))) goto L_C0E145A;
    *(unsigned int *)((R7 + 0x0)) = (*(int *)((R6 + 0x44)));
    *(float *)(((int)stk + 36)) = (F5 - F8);
    *(float *)0xC94C6E0 = ((F5 - F8) * (F5 - F8));
    *(float *)0xC94C6C4 = F4;
    *(float *)0xC94C6C8 = F8;
    *(float *)0xC94C6CC = F6;
    *(float *)0xC94C6D0 = F9;
    *(float *)0xC94C6D4 = F7;
    *(float *)0xC94C6D8 = F11;
    *(float *)0xC94C6DC = F10;
    *(unsigned int *)0xC94C6E4 = R5;
    return (*(int *)((R7 + 0x0)));
}

int FUN_0c09084c(int a4, int a5, int a6)
{
    int t12;
    int t14;
    float u18;
    int t20;
    int t23;
    int t26;
    int stk[22];

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x30), (a4 + 0x3C));
    FUN_0c0dce80((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x10), 0.349999994f);
    FUN_0c09134c((a4 + 0x30), (((int)stk + 4) + 0x10), 0x8, 0x2);
    FUN_0c08a220((a4 + 0x30), 0x0);
    nlSubVector3op((((int)stk + 4) + 0x1C), ((*(int *)(((int)stk + 12))) + 0x30), ((*(int *)(((int)stk + 16))) + 0x3C));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 40))));
    nlPushMatrix(0x0);
    t12 = 0x50;
    for (;;) {
        t14 = FUN_0c0e19aa(0xC0917EC, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t14);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t14 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        *(float *)((t14 + 0x54)) = 0.699999988f;
        *(float *)((t14 + 0x58)) = 0.699999988f;
        *(unsigned int *)((t14 + 0x60)) = 0x293;
        *(unsigned int *)(((0x64 + t14) + 0x0)) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        u18 = 0.799999952f;
        u18 = u18 + 4.882961e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t14 + 0x44)) = u18;
        nlUnitMatrix();
        t20 = FUN_0c0da2e0();
        nlRotateAY((((t20 & 0x3FFF) + (*(int *)(((int)stk + 8)))) - 8192));
        t23 = FUN_0c0da2e0();
        nlRotateAX((((*(int *)(((int)stk + 4))) - (t23 & 0xFFF)) - 4096));
        t26 = FUN_0c0da2e0();
        nlRotateAZ(((t26 & 0x1FFF) - 4096));
        FUN_0c0db470((t14 + 0x3C), (t14 + 0x3C));
        t12 = (t12 - 0x1);
        if (t12 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c017718(int a4, int a5, float f4)
{
    int t0;
    int t1;
    float t19;
    float u22;
    int stk[13];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 4));
    t1 = FUN_0c0e18ce(0xC0175BC, 0xB4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128)); }
    *(float *)((t1 + 0x30)) = ((*(float *)((t1 + 0x30))) + (*(float *)(((0x30 + a4) + 0x0))));
    *(float *)((t1 + 0x34)) = ((*(float *)((t1 + 0x34))) + ((*(float *)(((0x34 + a4) + 0x0))) + (*(float *)(((((int)stk + 4) + 0x4) + 0x0)))));
    *(float *)((t1 + 0x38)) = ((*(float *)((t1 + 0x38))) + (*(float *)(((0x38 + a4) + 0x0))));
    FUN_0c0e6248();
    *(unsigned short *)((t1 + 0x60)) = ((*(short *)((t1 + 0x60))) + (*(short *)(((0x6C + a4) + 0x0))));
    *(unsigned short *)((t1 + 0x62)) = ((*(short *)((t1 + 0x62))) + (*(short *)(((0x6E + a4) + 0x0))));
    *(unsigned short *)((t1 + 0x64)) = ((*(short *)((t1 + 0x64))) + (*(short *)(((0x70 + a4) + 0x0))));
    *(unsigned int *)((t1 + 0x78)) = (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128) + 0x14)));
    *(unsigned int *)((t1 + 0x80)) = 0x0;
    *(unsigned int *)((t1 + 0xA0)) = 0x3C;
    *(unsigned int *)((t1 + 0xA4)) = 0x1E;
    *(unsigned int *)((t1 + 0x84)) = (*(int *)(((int)stk + 4)));
    *(float *)((t1 + 0x90)) = (*(float *)((a4 + 0x23C)));
    t19 = FUN_0c0dcea0((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128));
    *(float *)((t1 + 0x48)) = (((*(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128) + 0x0))) * 1.0f) / t19);
    *(float *)((t1 + 0x4C)) = (((*(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128) + 0x4))) * 1.0f) / t19);
    u22 = *(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC0F5128) + 0x8));
    *(float *)((t1 + 0x50)) = ((u22 * 1.0f) / t19);
    *(float *)(((int)stk + 24)) = (-((u22 * 1.0f) / t19));
    *(float *)(((int)stk + 28)) = (*(float *)((t1 + 0x4C)));
    *(float *)(((int)stk + 32)) = (*(float *)((t1 + 0x48)));
    FUN_0c0dd0a0((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((t1 + 0x54) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((t1 + 0x58) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((t1 + 0x5C) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(unsigned int *)(((t1 + 0x68) + 0x0)) = 0x0;
    *(unsigned int *)((t1 + 0x6C)) = 0x888;
    return 0x6C;
}

int FUN_0c0b7734(void)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t6;
    int t17;

    t0 = 0x0;
    t1 = 0xC20461C;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC0B35E4, 0x474, (*(int *)0xC23ECEC));
        FUN_0c0e19d0(t3);
        *(float *)(((0x468 + t3) + 0x8)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x4)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x0)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x8)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x4)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x0)) = 1.0f;
        *(float *)((t3 + 0x284)) = 1.0f;
        *(float *)((t3 + 0x27C)) = 1.0f;
        *(float *)((t3 + 0x278)) = 1.0f;
        *(float *)((t3 + 0x274)) = 1.0f;
        *(unsigned int *)((t3 + 0x32C)) = 0x0;
        *(unsigned int *)((t3 + 0x388)) = 0x1;
        *(float *)((t3 + 0x390)) = 65.0099945f;
        t5 = *(int *)((t1 + 0x14));
        t6 = 0x0;
        if (t0 != 0) {
            t6 = 0x4;
        }
        *(unsigned int *)((t3 + 0xBC)) = t6;
        *(unsigned int *)(((0xC0 + t3) + 0x0)) = (*(signed char *)((t1 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)((t1 + 0x8)); }
        *(unsigned int *)(((((*(int *)((t3 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
        *(unsigned int *)(((((*(int *)((t3 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t3;
        FUN_0c0855ba(t3);
        FUN_0c0bb0f4(t3);
        FUN_0c0ba6e8(t3);
        FUN_0c0ba776(t3);
        FUN_0c085638(t3);
        FUN_0c0b359e(t3, t5);
        t17 = FUN_0c049c0a(t3);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x18);
        if ((int)t0 < (int)0x2) continue;
        break;
    }
    return t17;
}

int FUN_0c0cbc28(void)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t10;
    int t31;
    int t32;
    int t33;
    int t34;
    int stk[15];

    t0 = 0xC521CB8;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC521CC0) {
            break;
        }
    }
    t1 = 0x8;
    for (;;) {
        t2 = gdFsInit();
        if (t2 != 0) {
            t1 = (t1 - 1);
            if ((int)t1 <= 0) {
                break;
            }
            continue;
        }
        FUN_0c210416();
        FUN_0c213470();
        ADXT_EntryErrFunc(0xC0CEDF4, 0x0);
        { struct mv6 { int w[6]; }; *(struct mv6 *)(((int)stk + 4)) = *(struct mv6 *)(0xC1E9D88); }
        FUN_0c0cbbf4(*(Stk6 *)(((int)stk + 4)));
        t8 = *(int *)(((((*(int *)0xC1EF578) << 2) + ((int)stk + 4)) + 0x0));
        *(unsigned int *)0xC20A6F8 = t8;
        t1 = 0xC20A6E4;
        t9 = t8;
        t10 = 0xC521CC0;
        for (;;) {
            if ((int)(*(short *)((t1 + 0x0))) < 0) {
                break;
            }
            t9 = (*(short *)((t1 + 0x0)));
            if (t9 == 2) {
                *(unsigned int *)0xC522920 = t10;
            }
            t9 = (*(short *)((t1 + 0x2)));
            t9 = (ADXF_LoadPartition((*(short *)((t1 + 0x0))), (*(int *)((t1 + 0x4))), t10, t9));
            t9 = (ADXF_GetPtinfoSize((*(short *)((t1 + 0x0)))));
            t1 = (t1 + 0x8);
            t10 = (t10 + t9);
        }
        *(unsigned int *)0xC31FDA0 = 0x1;
        *(unsigned char *)0xC522918 = 0x0;
        *(unsigned int *)0xC4BFE28 = 0xC31FDC0;
        return t9;
    }
    if (t2 != 0) {
        FUN_0c010a30();
    }
    FUN_0c210416();
    FUN_0c213470();
    ADXT_EntryErrFunc(0xC0CEDF4, 0x0);
    { struct mv6 { int w[6]; }; *(struct mv6 *)(((int)stk + 4)) = *(struct mv6 *)(0xC1E9D88); }
    FUN_0c0cbbf4(*(Stk6 *)(((int)stk + 4)));
    t31 = *(int *)(((((*(int *)0xC1EF578) << 2) + ((int)stk + 4)) + 0x0));
    *(unsigned int *)0xC20A6F8 = t31;
    t32 = t31;
    t33 = 0xC521CC0;
    t34 = 0xC20A6E4;
    for (;;) {
        if ((int)(*(short *)((t34 + 0x0))) < 0) {
            break;
        }
        t32 = (*(short *)((t34 + 0x0)));
        if (t32 == 2) {
            *(unsigned int *)0xC522920 = t33;
        }
        t32 = (*(short *)((t34 + 0x2)));
        t32 = (ADXF_LoadPartition((*(short *)((t34 + 0x0))), (*(int *)((t34 + 0x4))), t33, t32));
        t32 = (ADXF_GetPtinfoSize((*(short *)((t34 + 0x0)))));
        t34 = (t34 + 0x8);
        t33 = (t33 + t32);
    }
    *(unsigned int *)0xC31FDA0 = 0x1;
    *(unsigned char *)0xC522918 = 0x0;
    *(unsigned int *)0xC4BFE28 = 0xC31FDC0;
    return t32;
}

void FUN_0c06e56e(int a4, int a5)
{
    int t0;
    int t1;
    int t4;
    int t13;
    int t17;
    int t39;

    if ((int)a5 <= 0) {
    } else {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t4 = FUN_0c0e19aa(0xC06E384, 0xC4, (*(int *)(((*(int *)0xC247C60) + 0x30))));
            FUN_0c0e19d0(t4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)(t1); }
            *(unsigned short *)((t4 + 0x3C)) = 0x0;
            *(unsigned short *)((t4 + 0x3E)) = (*(int *)((t1 + 0xC)));
            *(unsigned short *)((t4 + 0x40)) = 0x0;
            FUN_0c0dc5a0();
            FUN_0c0dcca0(t1);
            nlRotateAY((*(int *)((t1 + 0xC))));
            nlGetMatrix((t4 + 0x50));
            nlPopMatrix(0x1);
            t13 = *(int *)((t1 + 0x10));
            *(unsigned short *)((t4 + 0x42)) = (*(short *)(((((t13 << 2) << 1) + 0xC0FB75C) + 0x0)));
            *(unsigned short *)(((0x46 + t4) + 0x0)) = (*(short *)(((((t13 << 2) << 1) + 0xC0FB75C) + 0x2)));
            *(unsigned int *)((t4 + 0x48)) = (*(int *)(((((t13 << 2) << 1) + 0xC0FB75C) + 0x4)));
            t17 = *(short *)((t4 + 0x46));
            if (t17 != 1) {
                if (t17 != 2) {
                } else {
                    if ((*(int *)((t1 + 0x14))) != 0) {
                        *(unsigned int *)((t4 + 0xA4)) = 0xC06E2CA;
                    } else {
                        *(unsigned int *)((t4 + 0xA4)) = 0xC06E0C4;
                    }
                }
            } else {
                if ((*(int *)((t1 + 0x14))) != 0) {
                    *(unsigned int *)((t4 + 0xA4)) = 0xC06E23C;
                } else {
                    *(unsigned int *)((t4 + 0xA4)) = 0xC06DF78;
                }
            }
            if ((*(int *)((t1 + 0x14))) != 0) {
                *(unsigned int *)((t4 + 0xB4)) = (*(int *)((t1 + 0x14)));
                t39 = *(int *)((t4 + 0xB4));
                *(unsigned int *)((t4 + 0xB4)) = (t39 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)(((t39 + 0xC) - 12)); }
            }
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x18);
            if ((int)t0 < (int)a5) continue;
            break;
        }
    }
}

int FUN_0c0911b8(int a4, int a5)
{
    int t1;
    float u11;
    float u16;
    int t25;
    int t30;
    int t39;
    int stk[9];

    *(unsigned int *)(((int)stk + 12)) = a4;
    t1 = FUN_0c0e19aa(0xC091AC8, 0x68, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a5 + 0x0)))), (-(*(float *)((a5 + 0x4)))), (-(*(float *)((a5 + 0x8)))));
    *(unsigned short *)((t1 + 0x48)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((t1 + 0x4C)) = (*(int *)(((int)stk + 8)));
    *(unsigned short *)(((0x4A + t1) + 0x0)) = ((FUN_0c0da2e0()) << 1);
    u11 = 0.199999988f;
    u11 = u11 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
    *(float *)((t1 + 0x54)) = u11;
    *(float *)((t1 + 0x58)) = ((*(float *)((t1 + 0x54))) * 1.5f);
    *(unsigned int *)(((0x60 + t1) + 0x0)) = ((FUN_0c0da2e0()) & 0x1F);
    *(float *)((t1 + 0x30)) = ((float)(FUN_0c0da2e0()) * 9.15555211e-06f);
    *(unsigned int *)((t1 + 0x64)) = 0x14;
    u16 = 0.299999982f;
    u16 = u16 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
    FUN_0c0dce80((t1 + 0x3C), a5, u16);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((*(int *)(((int)stk + 12))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    t25 = FUN_0c0da2e0();
    nlRotateAY((t25 << 1));
    FUN_0c0db470((t1 + 0x30), (t1 + 0x30));
    nlPopMatrix(0x1);
    t30 = FUN_0c0e19aa(0xC091BE4, 0x68, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t30);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a5 + 0x0)))), (-(*(float *)((a5 + 0x4)))), (-(*(float *)((a5 + 0x8)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t30 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    *(unsigned short *)((t30 + 0x48)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((t30 + 0x4C)) = (*(int *)(((int)stk + 8)));
    t39 = FUN_0c0da2e0();
    *(unsigned short *)(((0x4A + t30) + 0x0)) = (t39 << 1);
    return (t39 << 1);
}

int FUN_0c090c68(int a4)
{
    int t0;
    int t8;
    float u13;
    float u15;
    int t17;
    int t20;
    int t24;
    int stk[20];

    t0 = *(int *)((a4 + 0x1C4));
    *(unsigned int *)(((int)stk + 12)) = ((0xC23F268 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + 0xC);
    *(unsigned int *)(((int)stk + 16)) = 0x8;
    nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x30), (a4 + 0x3C));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
    nlPushMatrix(0x0);
    for (;;) {
        t8 = FUN_0c0e19aa(0xC0918FC, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        *(unsigned int *)((t8 + 0x60)) = 0x38E;
        *(unsigned int *)(((0x64 + t8) + 0x0)) = (((FUN_0c0da2e0()) & 0xF) + 0x14);
        u13 = 1.5f;
        u13 = u13 + 4.57777642e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t8 + 0x54)) = u13;
        u15 = 1.0f;
        u15 = u15 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t8 + 0x44)) = u15;
        nlUnitMatrix();
        t17 = FUN_0c0da2e0();
        nlRotateAY((((t17 & 0x7FFF) + (*(int *)(((int)stk + 8)))) - 16384));
        t20 = FUN_0c0da2e0();
        nlRotateAX((((*(int *)(((int)stk + 4))) - (t20 & 0xFFF)) - 4096));
        FUN_0c0db470((t8 + 0x3C), (t8 + 0x3C));
        t24 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t24 - 1);
        if ((t24 - 1) == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0d41c6(void)
{
    int t0;
    int t31;
    int stk[10];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC943564) = *(struct mv4 *)(0xC249880); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC943554) = *(struct mv4 *)(0xC249880); }
    t0 = 0x0;
    for (;;) {
        FUN_0c0d3f0c(t0);
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x0;
        if ((*(int *)0xC943400) != 2) {
            if ((*(int *)0xC943400) == 0) {
                if (t0 == (0x1 - (*(int *)0xC23A1BC))) {
                    *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
                }
            }
        } else {
            *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
        }
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x8)) = t0;
        if ((*(int *)(((t0 << 2) + 0xC23EDC0))) == 4) {
            *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x0;
        } else {
            if ((*(int *)(((t0 << 2) + 0xC23EDC0))) == 0) {
                *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x1;
            } else {
                *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x2;
            }
        }
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x40)) = 0x1;
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x54)) = 0x10000;
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x6C)) = (*(int *)((((t0 << 2) + 0xC246FF0) + 0x0)));
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x70)) = (*(int *)(((((0x1 - t0) << 2) + 0xC246FF0) + 0x0)));
        *(unsigned int *)(((int)stk + 4)) = (0xC943574 + ((((t0 << 2) + t0) << 2) << 2));
        FUN_0c0e6118();
        *(volatile int *)(((int)stk + 4));
        FUN_0c0e6118();
        FUN_0c0da2e0();
        t31 = ((t0 * 0x1D4) + 0xC9436B4);
        t0 = (t0 + 0x1);
        *(unsigned int *)(((0x68 + t31) + 0x0)) = (FUN_0c0e5f1c());
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return FUN_0c0d6a64();
}

int FUN_0c03242c(int a4, float f4, float f5)
{
    int t37;
    int t2;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    int t35;
    int t32;
    int t34;
    int t33;
    int stk[25];

    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 16)) = f5;
    t37 = 0x0;
    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
        t2 = *(int *)((a4 + 0x510));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x40)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F274)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x34)) = *(struct mv3 *)((a4 + 0x30)); }
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x40) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x34) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x40) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x34) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x40) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x34) + 0x8)))));
        u10 = *(float *)(((((int)stk + 4) + 0x40) + 0x0));
        u11 = *(float *)(((((int)stk + 4) + 0x40) + 0x4));
        u12 = *(float *)(((((int)stk + 4) + 0x34) + 0x4));
        u13 = *(float *)(((((int)stk + 4) + 0x34) + 0x0));
        u14 = *(float *)(((((int)stk + 4) + 0x40) + 0x8));
        u15 = *(float *)(((((int)stk + 4) + 0x34) + 0x8));
        u16 = ((u12 - u11) * (u12 - u11));
        u16 = u16 + (u13 - u10) * (u13 - u10);
        u17 = u16;
        u17 = u17 + (u15 - u14) * (u15 - u14);
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(int *)(((int)stk + 8))));
        nlRotateAX((*(int *)(((int)stk + 4))));
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 12)));
        FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
        *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 20)));
        *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 24)));
        *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 28)));
        nlPopMatrix(0x1);
        nlAddVector((0x4B0 + a4), (((int)stk + 4) + 0x28));
        t35 = 0x0;
        if (_builtin_sqrtf(u17) > (*(float *)(((int)stk + 16)))) {
            t32 = FUN_0c02a416(a4);
            t34 = 0x0;
            if ((t32 == 0) && (t33 = *(int *)((a4 + 0x49C)), t33 != 3)) {
                t34 = 0x1;
            }
            t35 = t34;
        }
        t37 = t35;
        _builtin_sqrtf(u17);
    }
    return t37;
}

int FUN_0c063160(int a4, int a5, int a6, int a7)
{
    int t8;
    int stk[6];

    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)))) != 4) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if (((*(int *)((a4 + 0xD8))) != 0) && (t8 = *(int *)((a4 + 0xD8)), t8 == 1)) {
        FUN_0c05a98a(a4);
        FUN_0c090bf0(a4);
        *(unsigned int *)((a4 + 0x220)) = 0x344;
        *(float *)((a4 + 0x1E4)) = (*(float *)((a4 + 0x24C)));
        *(unsigned int *)((a4 + 0x23C)) = 0x0;
        FUN_0c08d75c((a4 + 0x30), 0x0, 0x0);
        FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
    }
    if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x258))) + 5.0f))) {
        *(unsigned int *)((a4 + 0x220)) = 0x344;
        *(float *)((a4 + 0x1E4)) = (*(float *)((a4 + 0x24C)));
        *(unsigned int *)((a4 + 0x23C)) = 0x0;
        FUN_0c08d75c((a4 + 0x30), 0x0, 0x0);
        FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
    }
    *(float *)((a4 + 0x2B0)) = 0.0f;
    *(float *)((a4 + 0x2B4)) = 0.0f;
    *(float *)((a4 + 0x2B8)) = 0.0f;
    *(float *)((a4 + 0x2B4)) = ((*(float *)((a4 + 0x2B4))) + -0.0272199996f);
    *(unsigned int *)(((int)stk + 12)) = (0x25C + a4);
    nlAddVector(((*(int *)(((int)stk + 12))) + 0x48), ((0x25C + a4) + 0x54));
    nlAddVector((a4 + 0x30), ((0x25C + a4) + 0x48));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x3C))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x40))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x44))) - (*(float *)((a4 + 0x38)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(unsigned short *)((a4 + 0x6C)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((int)stk + 8)));
    FUN_0c063098(a4);
    return (FUN_0c01cdc2(a4));
}

int FUN_0c0d6254(int a4, int a5, int a6)
{
    int t0;
    int t9;
    int t7;
    int t5;
    int t3;
    int t62;
    int t12;
    float t39;
    int t47;
    int t48;
    int t51;
    int t52;
    int t1;
    int t37;
    int t30;
    int t23;
    int t16;
    int t55;
    float u59;
    int t60;
    int stk[5];

    t0 = *(int *)((a4 + 0x6C));
    t9 = (0xA4 + a4);
    if (a5 != 0) {
        t7 = (0xCC + a4);
        if (a5 != 1) {
            t5 = (0xF4 + a4);
            if (a5 != 2) {
                t3 = (0x11C + a4);
                if (a5 != 3) {
                    if (a5 != 4) {
                    } else {
                        t1 = (0x144 + a4);
                    }
                    t3 = t1;
                }
                t5 = t3;
            }
            t7 = t5;
        }
        t9 = t7;
    }
    *(unsigned int *)((t9 + 0x0)) = a6;
    t62 = a6;
    if (a6 != -1) {
        if (a5 != 0) {
            if (a5 != 1) {
                if (a5 != 2) {
                    if (a5 != 3) {
                        t12 = a5;
                        if (a5 != 4) {
                        } else {
                            *(unsigned int *)((t9 + 0x4)) = 0x0;
                            t12 = (t9 + 0x8);
                        }
                        t16 = t12;
                    } else {
                        *(unsigned int *)((t9 + 0x4)) = a6;
                        t16 = ((*(int *)((t9 + 0x4))) + 0x30);
                    }
                    t23 = t16;
                } else {
                    *(unsigned int *)((t9 + 0x4)) = (*(int *)(((a6 << 2) + 0xC2475D4)));
                    t23 = ((*(int *)((t9 + 0x4))) + 0x30);
                }
                t30 = t23;
            } else {
                *(unsigned int *)((t9 + 0x4)) = (*(int *)(((a6 << 2) + 0xC246FF0)));
                t30 = ((*(int *)((t9 + 0x4))) + 0x30);
            }
            t37 = t30;
        } else {
            *(unsigned int *)((t9 + 0x4)) = (*(int *)((a4 + 0x70)));
            t37 = ((*(int *)((t9 + 0x4))) + 0x30);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x8)) = *(struct mv3 *)(t37); }
        t39 = nlLength((t0 + 0x30), t37);
        *(float *)((t9 + 0x14)) = t39;
        *(unsigned int *)((t9 + 0x18)) = (FUN_0c0d6e1a(t39));
        FUN_0c0a68ec(((int)stk + 4), ((*(float *)((t0 + 0x30))) - (*(float *)((t9 + 0x8)))), ((*(float *)((t0 + 0x38))) - (*(float *)((t9 + 0x10)))));
        *(unsigned int *)((t9 + 0x1C)) = (*(int *)(((int)stk + 4)));
        t47 = *(short *)((t0 + 0x6E));
        t48 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t9 + 0x20)) = (int)_builtin_fabsf((float)(short)(t48 - t47));
        if ((*(int *)((t9 + 0x4))) != 0) {
            t51 = *(short *)((t0 + 0x6E));
            t52 = *(short *)(((*(int *)((t9 + 0x4))) + 0x6E));
            *(unsigned int *)((t9 + 0x24)) = (int)_builtin_fabsf((float)(short)(t52 - t51));
            t55 = (int)_builtin_fabsf((float)(short)(t52 - t51));
            u59 = _builtin_fabsf((float)(short)(t52 - t51));
            t60 = (int)_builtin_fabsf((float)(short)(t52 - t51));
        } else {
            *(unsigned int *)((t9 + 0x24)) = ((*(int *)((t9 + 0x20))) + 0x8000);
            t55 = 0x8000;
            u59 = _builtin_fabsf((float)(short)(t48 - t47));
            t60 = (int)_builtin_fabsf((float)(short)(t48 - t47));
        }
        t62 = 0x6E;
    }
    return t62;
}

void FUN_0c0b4404(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x24C));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                    } else {
                        FUN_0c082220();
                        *(unsigned int *)((a4 + 0x3D4)) = (*(short *)((a4 + 0x3CC)));
                        *(unsigned int *)((a4 + 0x3D8)) = (*(short *)((a4 + 0x3CE)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0x254 + a4)); }
                    }
                } else {
                    *(float *)((a4 + 0x268)) = ((*(float *)((a4 + 0x268))) + 0.0199999996f);
                }
            } else {
                *(unsigned int *)((a4 + 0x420)) = 0x12C;
                *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
            }
        } else {
            FUN_0c0a7ed4(0xC203CDC, (*(int *)((a4 + 0x420))), (0x260 + a4), (0x3D4 + a4));
            *(unsigned int *)((a4 + 0x420)) = ((*(int *)((a4 + 0x420))) + 0x444);
            if ((int)(*(int *)((a4 + 0x420))) > (int)0x140000) {
                *(float *)((a4 + 0x260)) = 180.0f;
                *(float *)((a4 + 0x264)) = 1.0999999f;
                *(float *)((a4 + 0x268)) = 97.0f;
                *(unsigned int *)((a4 + 0x3D4)) = 0x18E3;
                *(unsigned int *)((a4 + 0x3D8)) = 0xFFFFB05C;
                *(unsigned int *)((a4 + 0x420)) = 0x1E;
                *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x420)) = 0x10000;
        *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) + 0x1);
    }
}

float FUN_0c0cef82(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    float u4;
    int t5;
    float u10;
    int t11;
    float u15;
    int t17;
    float u22;
    float u23;
    float u26;
    float u28;
    float u30;
    float t34;
    int stk[31];

    stk[22] = a8;
    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)(((int)stk + 4)) = t0;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x4);
    u4 = (float)t0;
    u4 = u4 + (FUN_0c0da300()) * (float)((*(short *)(((a4 + 0x4) + 0x0))) - (*(short *)(((int)stk + 4))));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = u4;
    t5 = *(short *)((a4 + 0x2));
    *(unsigned short *)(((int)stk + 4)) = t5;
    u10 = (float)t5;
    u10 = u10 + (FUN_0c0da300()) * (float)((*(short *)(((*(int *)(((int)stk + 12))) + 0x2))) - (*(short *)(((int)stk + 4))));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = u10;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x8);
    t11 = *(short *)(((a4 + 0x8) + 0x0));
    *(unsigned short *)(((int)stk + 8)) = t11;
    *(unsigned int *)(((int)stk + 4)) = (a4 + 0xC);
    u15 = (float)t11;
    u15 = u15 + (FUN_0c0da300()) * (float)((*(short *)(((a4 + 0xC) + 0x0))) - (*(short *)(((int)stk + 8))));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = u15;
    t17 = *(short *)(((*(int *)(((int)stk + 12))) + 0x2));
    *(unsigned short *)(((int)stk + 8)) = t17;
    u22 = (float)t17;
    u22 = u22 + (FUN_0c0da300()) * (float)((*(short *)(((*(int *)(((int)stk + 4))) + 0x2))) - (*(short *)(((int)stk + 8))));
    *(float *)(((((int)stk + 4) + 0x24) + 0x4)) = u22;
    u23 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
    u26 = u23;
    u26 = u26 + (FUN_0c0da300()) * ((*(float *)(((((int)stk + 4) + 0x24) + 0x0))) - u23);
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = u26;
    u28 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
    u30 = u28;
    u30 = u30 + (FUN_0c0da300()) * ((*(float *)(((((int)stk + 4) + 0x24) + 0x4))) - u28);
    *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = u30;
    *(float *)(((int)stk + 28)) = (*(float *)(((((int)stk + 4) + 0x2C) + 0x0)));
    *(float *)(((int)stk + 32)) = (*(float *)0xC0CF114);
    *(float *)(((int)stk + 36)) = (*(float *)(((((int)stk + 4) + 0x2C) + 0x4)));
    t34 = FUN_0c01f1b8((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((int)stk + 32)) = t34;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 4) + 0x54) + 0x0)))) = *(struct mv3 *)((((int)stk + 4) + 0x18)); }
    return t34;
}

void FUN_0c05f9ee(int a4, int a5)
{
    int t1;
    int t8;
    int t11;
    int t19;
    int t20;

    t1 = FUN_0c0e19aa(0xC05FBFE, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t8 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t8 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t8;
    t11 = *(int *)(((0x1C4 + a4) + 0x0));
    *(unsigned int *)((t1 + 0x1EC)) = ((*(int *)((t1 + 0x1EC))) | (((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    *(unsigned int *)((t1 + 0x220)) = 0x9C;
    t19 = *(int *)((a4 + 0xBC));
    t20 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t19 << 1) + t19) << 2) << 2) << 2) + 0xC23F268) + (((t20 << 1) + t20) << 2))); }
}
