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
