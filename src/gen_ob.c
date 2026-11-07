/* Straight-line functions with calls and guards (batch gen_ob): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08498e(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c9e86(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db430(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dd050(int);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
extern float _builtin_sqrtf(float);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0c9f70(int a4, int a5);

int FUN_0c0c9f70(int a4, int a5)
{
    int stk[41];
    register int t2;
    register float u10;
    register float u16;
    register float u35;
    register float u38;
    register float u50;
    register float u53;
    register float u54;
    register float u55;
    register float u56;
    register float u58;
    register float u59;
    register int t63;
    register float u65;
    register float u67;
    register float u69;
    register int t71;
    register int t72;
    register float u73;
    register float u75;
    register float u76;
    register float u77;
    register float u78;
    register float u80;
    register float u82;
    register float u86;
    register float u87;
    register float u88;
    register float u89;
    register float u90;
    register float u91;
    register float u93;
    register int t95;
    register float u99;
    register float u102;
    register float u104;
    register float u107;
    register float u108;
    register float u109;
    register float u111;
    register float u112;
    register int t70;

    if ((*(int *)0xC31FD38) == 0) {
    } else {
        t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
        nlPushMatrix(0x0);
        FUN_0c0dc0b0(0x3);
        nlGetMatrix((((int)stk + 4) + 0x60));
        FUN_0c0dc0b0(0x1);
        FUN_0c0dbda0((((int)stk + 4) + 0x60));
        nlMultiMatrix((0x2AC + t2));
        FUN_0c0db430(a5, (((int)stk + 4) + 0x50));
        u10 = *(float *)(((int)stk + 96));
        if (u10 == 0.0f) {
        } else {
            if (!((*(float *)(((int)stk + 92))) > 0.0f)) {
            } else {
                *(float *)(((int)stk + 84)) = ((*(float *)(((int)stk + 84))) / u10);
                *(float *)(((int)stk + 88)) = ((*(float *)(((int)stk + 88))) / (*(float *)(((int)stk + 96))));
                u16 = *(float *)(((int)stk + 84));
                if (!(u16 > -1.0f)) {
                } else {
                    if (!(1.0f > u16)) {
                    } else {
                        if (!((*(float *)(((int)stk + 88))) > -1.0f)) {
                        } else {
                            if (!(1.0f > (*(float *)(((int)stk + 88))))) {
                            } else {
                                FUN_0c0c9e86(a5);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)(0xC1E9CC4); }
                                FUN_0c0dbda0((a5 + 0x34));
                                FUN_0c0db4d0((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x44));
                                FUN_0c0dd050((((int)stk + 4) + 0x44));
                                FUN_0c0dbda0((0x2EC + t2));
                                FUN_0c0db4d0((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x38));
                                FUN_0c0dd050((((int)stk + 4) + 0x38));
                                u35 = ((*(float *)(((int)stk + 76))) * (*(float *)(((int)stk + 64))));
                                u35 = u35 + (*(float *)(((int)stk + 60))) * (*(float *)(((int)stk + 72)));
                                u38 = u35;
                                u38 = u38 + (*(float *)(((int)stk + 68))) * (*(float *)(((int)stk + 80)));
                                if (!(-0.699999988f > u38)) {
                                } else {
                                    *(float *)(((int)stk + 48)) = ((*(float *)((a5 + 0x0))) - (*(float *)((t2 + 0x31C))));
                                    *(float *)(((int)stk + 52)) = ((*(float *)((a5 + 0x4))) - (*(float *)((t2 + 0x320))));
                                    *(float *)(((int)stk + 56)) = ((*(float *)((a5 + 0x8))) - (*(float *)((t2 + 0x324))));
                                    FUN_0c0dd050((((int)stk + 4) + 0x2C));
                                    u50 = ((*(float *)(((int)stk + 52))) * (*(float *)(((int)stk + 64))));
                                    u50 = u50 + (*(float *)(((int)stk + 60))) * (*(float *)(((int)stk + 48)));
                                    u53 = u50;
                                    u53 = u53 + (*(float *)(((int)stk + 68))) * (*(float *)(((int)stk + 56)));
                                    *(float *)(((int)stk + 12)) = u53;
                                    if (!(-0.699999988f > u53)) {
                                    } else {
                                        u54 = *(float *)(((int)stk + 84));
                                        u55 = 320.0f;
                                        u55 = u55 + u54 * 320.0f;
                                        *(float *)(((int)stk + 16)) = u55;
                                        u56 = *(float *)(((int)stk + 88));
                                        u58 = (u56 * u56);
                                        u58 = u58 + u54 * u54;
                                        *(float *)(((int)stk + 20)) = (((-(u56 * 240.0f))) + 240.0f);
                                        u59 = _builtin_sqrtf(u58);
                                        if (_builtin_sqrtf(u58) > 1.0f) {
                                            u59 = 1.0f;
                                        }
                                        t63 = FUN_0c0d9dc0((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 88))));
                                        u65 = ((-0.699999988f - u38) * (-0.699999988f - (*(float *)(((int)stk + 12)))));
                                        u67 = ((FUN_0c0da410((short)t63)) * u59);
                                        *(float *)(((int)stk + 8)) = (u67 * 270.0f);
                                        u69 = ((FUN_0c0d9e90((short)t63)) * u59);
                                        *(float *)(((int)stk + 4)) = (u69 * 270.0f);
                                        t71 = 0x0;
                                        t72 = a4;
                                        u73 = 270.0f;
                                        for (;;) {
                                            if ((int)(*(int *)((t72 + 0x0))) >= 0) {
                                                t70 = 0x4;
                                                u75 = *(float *)((t72 + t70));
                                                t70 = 0x4;
                                                u76 = *(float *)((((int)stk + 4) + t70));
                                                t70 = 0xC;
                                                u77 = *(float *)((((int)stk + 4) + t70));
                                                t70 = 0x14;
                                                u78 = u77;
                                                u78 = u78 + u76 * u75;
                                                *(float *)((((int)stk + 4) + t70)) = u78;
                                                t70 = 0x10;
                                                u80 = *(float *)((((int)stk + 4) + t70));
                                                t70 = 0x18;
                                                *(float *)((((int)stk + 4) + t70)) = (u80 - ((u75 * (*(float *)(((int)stk + 4))))));
                                                t70 = 0xC0CA298;
                                                u82 = *(float *)((t70 + 0x0));
                                                t70 = 0xC0CA29C;
                                                u73 = (*(float *)((t70 + 0x0)));
                                                u73 = (u73 - (((float)t71 * u82)));
                                                t70 = (nlUnitMatrix());
                                                t70 = 0x18;
                                                u86 = *(float *)((((int)stk + 4) + t70));
                                                t70 = 0xC0CA278;
                                                u87 = *(float *)((t70 + 0x0));
                                                t70 = 0xC0CA2A0;
                                                u88 = *(float *)((t70 + 0x0));
                                                t70 = 0xC0CA2A4;
                                                u89 = ((u87 - u86) * u73);
                                                u90 = *(float *)((t70 + 0x0));
                                                t70 = 0x14;
                                                u91 = *(float *)((((int)stk + 4) + t70));
                                                t70 = 0xC0CA2A8;
                                                u93 = ((u91 + u90) * u73);
                                                t70 = (FUN_0c0dcc70((-(u93 * (*(float *)((t70 + 0x0))))), (-(u89 * u88)), u73));
                                                t95 = (short)t63;
                                                if (u59 != 0.0f) {
                                                    t95 = 0x0;
                                                }
                                                t70 = (nlRotateAZ((t95 + (*(int *)((t72 + 0x8))))));
                                                t70 = 0xC0CA2B0;
                                                u99 = *(float *)((t70 + 0x0));
                                                t70 = 0xC;
                                                u73 = (*(float *)((t72 + t70)));
                                                u73 = (u73 * u99);
                                                t70 = (nlScale(u73, u73, 1.0f));
                                                t70 = 0xC0CA2B0;
                                                u102 = *(float *)((t70 + 0x0));
                                                t70 = 0xC;
                                                u73 = (*(float *)((t72 + t70)));
                                                u73 = (u73 * u102);
                                                u104 = u73;
                                                if (1.0f > u73) {
                                                    u104 = 1.0f;
                                                }
                                                t70 = (FUN_0c0de000(u104));
                                                t70 = 0x18;
                                                u107 = *(float *)((t72 + t70));
                                                t70 = 0x14;
                                                u108 = *(float *)((t72 + t70));
                                                t70 = 0x10;
                                                u109 = (u65 * 11.1111097f);
                                                u111 = (u65 * 11.1111097f);
                                                u112 = (u65 * 11.1111097f);
                                                t70 = (FUN_0c08498e(((*(float *)((t72 + t70))) * u112), (u108 * u111), (u107 * u109)));
                                                t70 = (FUN_0c0c465c((*(int *)((t72 + 0x0)))));
                                                t71 = (t71 + 0x1);
                                                t72 = (t72 + 0x1C);
                                                continue;
                                            }
                                            break;
                                        }
                                        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        nlPopMatrix(0x1);
    }
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0((*(int *)0xC247ED8), (*(float *)0xC247EDC), (*(float *)0xC247EE0), (*(float *)0xC247EE4));
    return (FUN_0c0dc0b0(0x1));
}
