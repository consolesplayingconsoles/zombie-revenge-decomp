/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c40(int);
int FUN_0c010c84(void);
int FUN_0c010db0(void);
int FUN_0c010eec(void);
int FUN_0c010f3a(void);
int FUN_0c0110c6(int, int);
int FUN_0c0110cc(int, int, float);
int FUN_0c0111ba(int);
int FUN_0c014fae(int, float);
int FUN_0c015436(int, int);
int FUN_0c0154a4(void);
int FUN_0c0154c0(int, int, int);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0159a2(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cec9a(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e2a4c(int);
int buStat(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int ntInfExit(void);
int ntInfGetLoginId(int, int);
int ntInfInit(int, int);
int FUN_0c0134a0(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c0134a0(void)
{
    int stk[16];
    register int t3;
    register int t5;
    register int t10;
    register int t11;
    register int t12;
    register float u20;
    register int t38;
    register int t47;
    register int t48;
    register int t57;
    register int t62;
    register int t116;
    register int t117;
    register int t181;
    register int t274;
    register int t278;
    register int t279;
    register int t280;
    register int t294;
    register int t297;
    register int t333;
    register int t335;
    register int t370;
    register int t383;
    register int t49;
    int t50;
    int t180;
    int t287;
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    R1004 = 0x0;
    t3 = 0xC0F4368;
    for (;;) {
        if ((unsigned int)(R1004) >= (unsigned int)0x4) {
            break;
        }
        t5 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        FUN_0c0c465c(t5);
        R1004 = ((R1004) + 0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(-4.19999981f, -0.319999993f, 10.0f);
    R1008 = 0x0;
    t10 = (((struct o20_int *)0xC23EAC0)->v);
    R1004 = (t10 + 0x1);
    t11 = 0xC013590;
    t12 = (t10 + 0x1);
    for (;;) {
        if ((int)(R1008) >= (int)0x4) {
            break;
        }
        t11 = (R1004);
        t11 = (t11 << 1);
        u20 = 0.5f;
        if ((int)(*(short *)((0xC1EF2F0 + t11))) >= 0) {
            u20 = 1.0f;
        }
        t11 = (FUN_0c0110cc((R1004), 0x3, u20));
        t11 = 0xC01366C;
        t11 = (FUN_0c0dcc70(0.0f, (*(float *)((t11 + 0x0))), 0.0f));
        R1008 = ((R1008) + 0x1);
        t12 = (R1004);
        t12 = (t12 + 0x1);
        R1004 = t12;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, (-((float)((((struct o1C_int *)0xC23EAC0)->v)) * 0.789999962f)), 0.0f);
    FUN_0c0c465c(0x13E8);
    nlPopMatrix(0x1);
    FUN_0c0c475c(0x13F1, ((((struct o0_float *)0xC23EB04)->v)));
    FUN_0c0c475c(0x13F0, ((((struct o0_float *)0xC23EB04)->v)));
    t38 = 0x1;
    for (;;) {
        if ((int)(*(short *)((0xC1EF2F0 + (t38 << 1)))) >= 0) {
            t38 = (t38 + 0x1);
            if ((int)t38 >= (int)0x15) {
                break;
            }
            continue;
        }
        break;
    }
    if ((int)t38 < (int)0x15) {
        R1008 = 0x1;
    } else {
        R1008 = 0x0;
    }
    t47 = (((struct o1C_int *)0xC23EAC0)->v);
    t48 = (((struct o20_int *)0xC23EAC0)->v);
    R1012 = (t47 + t48);
    if (((t47 + t48) == 0) && ((t49 = R1008, t49 == 0) && (t50 = *(short *)0xC1EF416, t50 == 0x100))) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0(0xC0F43C0);
        FUN_0c0c465c(0x13F9);
        FUN_0c0c465c(0x1402);
        nlPopMatrix(0x1);
    } else {
        FUN_0c0c465c(0x13EE);
        t57 = R1012;
        R1004 = (t57 << 1);
        if ((int)(*(short *)((((t57 << 1) + 0xC1EF2F0) + 0x0))) < 0) {
        } else {
            nlPushMatrix(0x0);
            FUN_0c0dcca0(0xC0F4390);
            t62 = R1012;
            FUN_0c014fae((((t62 << 1) + (t62 << 2)) + 0xC23EC3B), 0.239999995f);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlPushMatrix(0x0);
            FUN_0c0dcca0(0xC0F439C);
            FUN_0c0c465c((*(int *)((((*(short *)((0xC1EF2F0 + (R1004)))) << 2) + 0xC0F4288))));
            nlPopMatrix(0x1);
            if ((int)(*(short *)(((R1004) + 0xC1EF416))) > 0) {
                FUN_0c0dcc70(-3.54999995f, -2.56999993f, 10.0f);
                FUN_0c0110c6((*(short *)(((R1004) + 0xC1EF31A))), 0x3);
                FUN_0c0dcc70(0.0f, -0.319999993f, 0.0f);
                FUN_0c0110c6((*(short *)(((R1004) + 0xC1EF344))), 0x3);
                FUN_0c0dcc70(2.79999995f, 0.639999986f, 0.0f);
                FUN_0c0110c6((*(short *)(((R1004) + 0xC1EF36E))), 0x3);
                FUN_0c0dcc70(0.0f, -0.319999993f, 0.0f);
                FUN_0c0110c6((*(short *)(((R1004) + 0xC1EF398))), 0x3);
                FUN_0c0dcc70(0.0f, -0.319999993f, 0.0f);
                FUN_0c0110c6((*(short *)(((R1004) + 0xC1EF3C2))), 0x3);
            } else {
                FUN_0c0dcca0(0xC0F43F0);
                FUN_0c010eec();
                FUN_0c0dcca0(0xC0F43FC);
                FUN_0c010eec();
                FUN_0c0dcca0(0xC0F4408);
                FUN_0c010eec();
                FUN_0c0dcca0(0xC0F4414);
                FUN_0c010eec();
                FUN_0c0dcca0(0xC0F4414);
                FUN_0c010eec();
            }
            nlPopMatrix(0x1);
        }
    }
    t116 = (((struct o2C_int *)0xC23EAC0)->v);
    t117 = (((struct o18_int *)0xC23EB04)->v);
    if (t116 != 0) {
        if (t116 != 1) {
            if (t116 != 2) {
                if (t116 != 3) {
                    if (t116 == 4) {
                        *(unsigned int *)0xC52314C = 0x0;
                        (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
                    } else {
                        if (t116 == 5) {
                            FUN_0c010c84();
                            if (((*(int *)0xC2498F4) & 0x3030) != 0) {
                                if (((*(int *)0xC2498F4) & 0x2020) != 0) {
                                    if ((int)((((struct o1C_int *)0xC23EAC0)->v)) < (int)0x4) {
                                        (((struct o1C_uint *)0xC23EAC0)->v) = (((((struct o1C_int *)0xC23EAC0)->v)) + 0x1);
                                    } else {
                                        if ((int)((((struct o20_int *)0xC23EAC0)->v)) < (int)0x10) {
                                            (((struct o20_uint *)0xC23EAC0)->v) = (((((struct o20_int *)0xC23EAC0)->v)) + 0x1);
                                        }
                                    }
                                } else {
                                    if ((int)((((struct o1C_int *)0xC23EAC0)->v)) <= (int)0x1) {
                                        if ((int)((((struct o20_int *)0xC23EAC0)->v)) > 0) {
                                            (((struct o20_uint *)0xC23EAC0)->v) = (((((struct o20_int *)0xC23EAC0)->v)) - 1);
                                        } else {
                                            if ((int)((((struct o1C_int *)0xC23EAC0)->v)) > 0) {
                                                (((struct o1C_uint *)0xC23EAC0)->v) = (((((struct o1C_int *)0xC23EAC0)->v)) - 1);
                                            }
                                        }
                                    } else {
                                        (((struct o1C_uint *)0xC23EAC0)->v) = (((((struct o1C_int *)0xC23EAC0)->v)) - 1);
                                    }
                                }
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                FUN_0c0154a4();
                                FUN_0c010c40(0x5);
                            }
                            if (((*(short *)0xC1EF416) == 0x100) && (t180 = R1008, t180 != 0)) {
                                t181 = FUN_0c010db0();
                                if (t181 != 0) {
                                    if (t181 != 1) {
                                    } else {
                                        FUN_0c0154a4();
                                        FUN_0c010c40(0x5);
                                    }
                                } else {
                                    if (((((struct o1C_int *)0xC23EAC0)->v)) != 0) {
                                        FUN_0c015436(((((struct o1C_int *)0xC23EB04)->v)), 0x0);
                                        (((struct o0_uint *)0xC23EAC0)->v) = 0x0;
                                        (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
                                    } else {
                                        FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0);
                                        (((struct o3C_uint *)0xC23EAC0)->v) = 0x0;
                                    }
                                }
                            }
                            if ((*(int *)0xC52314C) != 0) {
                                (((struct o2C_uint *)0xC23EAC0)->v) = 0x0;
                            }
                        } else {
                            if (t116 == 6) {
                                FUN_0c0159a2(((((struct o1C_int *)0xC23EB04)->v)), 0xC1EF454);
                                if (((((struct o18_int *)0xC23EB04)->v)) == 9) {
                                    FUN_0c015436(((((struct o1C_int *)0xC23EB04)->v)), ((((((struct o1C_int *)0xC23EAC0)->v)) + ((((struct o20_int *)0xC23EAC0)->v))) + 0x5));
                                    ntInfInit(0x0, 0x0);
                                    ntInfGetLoginId(0x0, 0xC23EBEA);
                                    ntInfExit();
                                    (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
                                }
                            } else {
                                if (t116 == 7) {
                                    if (t117 != 2) {
                                        if (t117 != 3) {
                                            FUN_0c0dcca0(0xC0F43D8);
                                        }
                                    } else {
                                        FUN_0c0dcca0(0xC0F43E4);
                                    }
                                    FUN_0c0156ea(((((struct o1C_int *)0xC23EB04)->v)), 0xC23EB5B, 0xE0, 0x6);
                                    if (((((struct o18_int *)0xC23EB04)->v)) == 9) {
                                        (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
                                    }
                                } else {
                                    if (t116 == 8) {
                                        (((struct o2C_uint *)0xC23EAC0)->v) = 0x0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t274 = 0xC0F4384;
                    if (t117 == 10) {
                        t274 = 0xC0F43B4;
                    }
                    FUN_0c0dcca0(t274);
                    t278 = (((struct o1C_int *)0xC23EB04)->v);
                    t279 = 0x6;
                    t280 = 0x2;
                    if (((((struct oC_int *)0xC23EAC0)->v)) == 0) {
                        t279 = 0x0;
                        t280 = 0x1;
                    }
                    FUN_0c0154c0(t278, t279, t280);
                    if (((((struct o18_int *)0xC23EB04)->v)) != 9) {
                    } else {
                        if ((((((struct o10_int *)0xC23EB04)->v)) != 0) && (t287 = (((struct o20_int *)0xC23EB04)->v), (int)t287 >= 0)) {
                            FUN_0c0111ba(((((struct oC_int *)0xC23EAC0)->v)));
                            if (((((struct oC_int *)0xC23EAC0)->v)) == 0) {
                                t294 = (((struct oC_int *)0xC23EAC0)->v);
                                t297 = 0xFF;
                                if ((*(signed char *)0xC23EBB3) != 0) {
                                    t297 = 0x100;
                                }
                                *(unsigned short *)((((t294 << 1) + 0xC1EF416) + 0x0)) = t297;
                            }
                            FUN_0c0e2a4c(((((struct o10_int *)0xC23EB04)->v)));
                        }
                        if ((int)((((struct oC_int *)0xC23EAC0)->v)) <= 0) {
                            (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
                        } else {
                            (((struct oC_uint *)0xC23EAC0)->v) = (((((struct oC_int *)0xC23EAC0)->v)) - 1);
                            (((struct o2C_uint *)0xC23EAC0)->v) = 0x2;
                        }
                    }
                }
            } else {
                nlPushMatrix(0x0);
                FUN_0c0dcca0(0xC0F43A8);
                nlScale(0.899999976f, 0.899999976f, 0.899999976f);
                FUN_0c010f3a();
                nlPopMatrix(0x1);
                t333 = (((struct o1C_int *)0xC23EB04)->v);
                t335 = 0x0;
                if (((((struct oC_int *)0xC23EAC0)->v)) == 0) {
                } else {
                    t335 = (((((struct oC_int *)0xC23EAC0)->v)) + 0x5);
                }
                FUN_0c015436(t333, t335);
                if (((((struct o20_int *)0xC23EB04)->v)) == 0) {
                    *(unsigned short *)(((((((struct oC_int *)0xC23EAC0)->v)) << 1) + 0xC1EF416)) = ((((struct o24_short *)0xC23EB04)->v));
                } else {
                    *(unsigned short *)(((0xC1EF416 + (((((struct oC_int *)0xC23EAC0)->v)) << 1)) + 0x0)) = ((((struct o20_int *)0xC23EB04)->v));
                }
                if ((int)((((struct o20_int *)0xC23EB04)->v)) >= 0) {
                    (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
                } else {
                    if ((int)((((struct oC_int *)0xC23EAC0)->v)) > 0) {
                        (((struct oC_uint *)0xC23EAC0)->v) = (((((struct oC_int *)0xC23EAC0)->v)) - 1);
                    } else {
                        (((struct o2C_uint *)0xC23EAC0)->v) = 0x4;
                    }
                }
            }
        } else {
            t370 = buStat(((((struct o1C_int *)0xC23EB04)->v)));
            if (t370 != 0) {
            } else {
                (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
            }
        }
    } else {
        (((struct o1C_uint *)0xC23EB04)->v) = ((((struct o34_int *)0xC23EB04)->v));
        (((struct oC_uint *)0xC23EAC0)->v) = 0x14;
        t383 = 0xC1EF2F0;
        for (;;) {
            if ((unsigned int)t383 >= (unsigned int)0xC1EF31A) {
                break;
            }
            *(unsigned short *)((t383 + 0x0)) = 0xFFFFFFFF;
            t383 = (t383 + 0x2);
        }
        if ((int)((((struct o1C_int *)0xC23EB04)->v)) >= 0) {
            FUN_0c0cec9a(((((struct o1C_int *)0xC23EB04)->v)));
            (((struct o2C_uint *)0xC23EAC0)->v) = (((((struct o2C_int *)0xC23EAC0)->v)) + 0x1);
        } else {
            (((struct o2C_uint *)0xC23EAC0)->v) = 0x4;
        }
    }
    return nlPopMatrix(0x1);
}
