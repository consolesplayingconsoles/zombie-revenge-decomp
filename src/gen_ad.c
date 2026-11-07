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
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cec9a(int, int, int, int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int buStat(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int ntInfExit(void);
int ntInfGetLoginId(int, int);
int ntInfInit(int, int);
int FUN_0c0134a0(void);

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

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t3 = 0xC0F4368;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)0x4) {
            break;
        }
        t5 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        FUN_0c0c465c(t5);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(-4.19999981f, -0.319999993f, 10.0f);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t10 = *(int *)0xC23EAE0;
    *(unsigned int *)(((int)stk + 4)) = (t10 + 0x1);
    t11 = 0xC013590;
    t12 = (t10 + 0x1);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x4) {
            break;
        }
        t11 = (*(int *)(((int)stk + 4)));
        t11 = (t11 << 1);
        u20 = 0.5f;
        if ((int)(*(short *)((0xC1EF2F0 + t11))) >= 0) {
            u20 = 1.0f;
        }
        t11 = (FUN_0c0110cc((*(int *)(((int)stk + 4))), 0x3, u20));
        t11 = 0xC01366C;
        t11 = (FUN_0c0dcc70(0.0f, (*(float *)((t11 + 0x0))), 0.0f));
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        t12 = (*(int *)(((int)stk + 4)));
        t12 = (t12 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t12;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, (-((float)(*(int *)0xC23EADC) * 0.789999962f)), 0.0f);
    FUN_0c0c465c(0x13E8);
    nlPopMatrix(0x1);
    FUN_0c0c475c(0x13F1, (*(float *)0xC23EB04));
    FUN_0c0c475c(0x13F0, (*(float *)0xC23EB04));
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
        *(unsigned int *)(((int)stk + 8)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
    }
    t47 = *(int *)0xC23EADC;
    t48 = *(int *)0xC23EAE0;
    *(unsigned int *)(((int)stk + 12)) = (t47 + t48);
    if (((t47 + t48) == 0) && ((t49 = *(int *)(((int)stk + 8)), t49 == 0) && (t50 = *(short *)0xC1EF416, t50 == 0x100))) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0(0xC0F43C0);
        FUN_0c0c465c(0x13F9);
        FUN_0c0c465c(0x1402);
        nlPopMatrix(0x1);
    } else {
        FUN_0c0c465c(0x13EE);
        t57 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 4)) = (t57 << 1);
        if ((int)(*(short *)((((t57 << 1) + 0xC1EF2F0) + 0x0))) < 0) {
        } else {
            nlPushMatrix(0x0);
            FUN_0c0dcca0(0xC0F4390);
            t62 = *(int *)(((int)stk + 12));
            FUN_0c014fae((((t62 << 1) + (t62 << 2)) + 0xC23EC3B), 0.239999995f);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlPushMatrix(0x0);
            FUN_0c0dcca0(0xC0F439C);
            FUN_0c0c465c((*(int *)((((*(short *)((0xC1EF2F0 + (*(int *)(((int)stk + 4)))))) << 2) + 0xC0F4288))));
            nlPopMatrix(0x1);
            if ((int)(*(short *)(((*(int *)(((int)stk + 4))) + 0xC1EF416))) > 0) {
                FUN_0c0dcc70(-3.54999995f, -2.56999993f, 10.0f);
                FUN_0c0110c6((*(short *)(((*(int *)(((int)stk + 4))) + 0xC1EF31A))), 0x3);
                FUN_0c0dcc70(0.0f, -0.319999993f, 0.0f);
                FUN_0c0110c6((*(short *)(((*(int *)(((int)stk + 4))) + 0xC1EF344))), 0x3);
                FUN_0c0dcc70(2.79999995f, 0.639999986f, 0.0f);
                FUN_0c0110c6((*(short *)(((*(int *)(((int)stk + 4))) + 0xC1EF36E))), 0x3);
                FUN_0c0dcc70(0.0f, -0.319999993f, 0.0f);
                FUN_0c0110c6((*(short *)(((*(int *)(((int)stk + 4))) + 0xC1EF398))), 0x3);
                FUN_0c0dcc70(0.0f, -0.319999993f, 0.0f);
                FUN_0c0110c6((*(short *)(((*(int *)(((int)stk + 4))) + 0xC1EF3C2))), 0x3);
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
    t116 = *(int *)0xC23EAEC;
    t117 = *(int *)0xC23EB1C;
    if (t116 != 0) {
        if (t116 != 1) {
            if (t116 != 2) {
                if (t116 != 3) {
                    if (t116 == 4) {
                        *(unsigned int *)0xC52314C = 0x0;
                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                    } else {
                        if (t116 == 5) {
                            FUN_0c010c84();
                            if (((*(int *)0xC2498F4) & 0x3030) != 0) {
                                if (((*(int *)0xC2498F4) & 0x2020) != 0) {
                                    if ((int)(*(int *)0xC23EADC) < (int)0x4) {
                                        *(unsigned int *)0xC23EADC = ((*(int *)0xC23EADC) + 0x1);
                                    } else {
                                        if ((int)(*(int *)0xC23EAE0) < (int)0x10) {
                                            *(unsigned int *)0xC23EAE0 = ((*(int *)0xC23EAE0) + 0x1);
                                        }
                                    }
                                } else {
                                    if ((int)(*(int *)0xC23EADC) <= (int)0x1) {
                                        if ((int)(*(int *)0xC23EAE0) > 0) {
                                            *(unsigned int *)0xC23EAE0 = ((*(int *)0xC23EAE0) - 1);
                                        } else {
                                            if ((int)(*(int *)0xC23EADC) > 0) {
                                                *(unsigned int *)0xC23EADC = ((*(int *)0xC23EADC) - 1);
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)0xC23EADC = ((*(int *)0xC23EADC) - 1);
                                    }
                                }
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                FUN_0c0154a4();
                                FUN_0c010c40(0x5);
                            }
                            if (((*(short *)0xC1EF416) == 0x100) && (t180 = *(int *)(((int)stk + 8)), t180 != 0)) {
                                t181 = FUN_0c010db0();
                                if (t181 != 0) {
                                    if (t181 != 1) {
                                    } else {
                                        FUN_0c0154a4();
                                        FUN_0c010c40(0x5);
                                    }
                                } else {
                                    if ((*(int *)0xC23EADC) != 0) {
                                        FUN_0c015436((*(int *)0xC23EB20), 0x0);
                                        *(unsigned int *)0xC23EAC0 = 0x0;
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    } else {
                                        FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                        *(unsigned int *)0xC23EAFC = 0x0;
                                    }
                                }
                            }
                            if ((*(int *)0xC52314C) != 0) {
                                *(unsigned int *)0xC23EAEC = 0x0;
                            }
                        } else {
                            if (t116 == 6) {
                                FUN_0c0159a2((*(int *)0xC23EB20), 0xC1EF454);
                                if ((*(int *)0xC23EB1C) == 9) {
                                    FUN_0c015436((*(int *)0xC23EB20), (((*(int *)0xC23EADC) + (*(int *)0xC23EAE0)) + 0x5));
                                    ntInfInit(0x0, 0x0);
                                    ntInfGetLoginId(0x0, 0xC23EBEA);
                                    ntInfExit();
                                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
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
                                    FUN_0c0156ea((*(int *)0xC23EB20), 0xC23EB5B, 0xE0, 0x6);
                                    if ((*(int *)0xC23EB1C) == 9) {
                                        *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                                    }
                                } else {
                                    if (t116 == 8) {
                                        *(unsigned int *)0xC23EAEC = 0x0;
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
                    t278 = *(int *)0xC23EB20;
                    t279 = 0x6;
                    t280 = 0x2;
                    if ((*(int *)0xC23EACC) == 0) {
                        t279 = 0x0;
                        t280 = 0x1;
                    }
                    FUN_0c0154c0(t278, t279, t280);
                    if ((*(int *)0xC23EB1C) != 9) {
                    } else {
                        if (((*(int *)0xC23EB14) != 0) && (t287 = *(int *)0xC23EB24, (int)t287 >= 0)) {
                            FUN_0c0111ba((*(int *)0xC23EACC));
                            if ((*(int *)0xC23EACC) == 0) {
                                t294 = *(int *)0xC23EACC;
                                t297 = 0xFF;
                                if ((*(signed char *)0xC23EBB3) != 0) {
                                    t297 = 0x100;
                                }
                                *(unsigned short *)((((t294 << 1) + 0xC1EF416) + 0x0)) = t297;
                            }
                            FUN_0c0e2a4c((*(int *)0xC23EB14), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                        }
                        if ((int)(*(int *)0xC23EACC) <= 0) {
                            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                        } else {
                            *(unsigned int *)0xC23EACC = ((*(int *)0xC23EACC) - 1);
                            *(unsigned int *)0xC23EAEC = 0x2;
                        }
                    }
                }
            } else {
                nlPushMatrix(0x0);
                FUN_0c0dcca0(0xC0F43A8);
                nlScale(0.899999976f, 0.899999976f, 0.899999976f);
                FUN_0c010f3a();
                nlPopMatrix(0x1);
                t333 = *(int *)0xC23EB20;
                t335 = 0x0;
                if ((*(int *)0xC23EACC) == 0) {
                } else {
                    t335 = ((*(int *)0xC23EACC) + 0x5);
                }
                FUN_0c015436(t333, t335);
                if ((*(int *)0xC23EB24) == 0) {
                    *(unsigned short *)((((*(int *)0xC23EACC) << 1) + 0xC1EF416)) = (*(short *)0xC23EB28);
                } else {
                    *(unsigned short *)(((0xC1EF416 + ((*(int *)0xC23EACC) << 1)) + 0x0)) = (*(int *)0xC23EB24);
                }
                if ((int)(*(int *)0xC23EB24) >= 0) {
                    *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
                } else {
                    if ((int)(*(int *)0xC23EACC) > 0) {
                        *(unsigned int *)0xC23EACC = ((*(int *)0xC23EACC) - 1);
                    } else {
                        *(unsigned int *)0xC23EAEC = 0x4;
                    }
                }
            }
        } else {
            t370 = buStat((*(int *)0xC23EB20));
            if (t370 != 0) {
            } else {
                *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
            }
        }
    } else {
        *(unsigned int *)0xC23EB20 = (*(int *)0xC23EB38);
        *(unsigned int *)0xC23EACC = 0x14;
        t383 = 0xC1EF2F0;
        for (;;) {
            if ((unsigned int)t383 >= (unsigned int)0xC1EF31A) {
                break;
            }
            *(unsigned short *)((t383 + 0x0)) = 0xFFFFFFFF;
            t383 = (t383 + 0x2);
        }
        if ((int)(*(int *)0xC23EB20) >= 0) {
            FUN_0c0cec9a((*(int *)0xC23EB20), 0xFFFFFFFF, 0xC1EF31A, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            *(unsigned int *)0xC23EAEC = ((*(int *)0xC23EAEC) + 0x1);
        } else {
            *(unsigned int *)0xC23EAEC = 0x4;
        }
    }
    return nlPopMatrix(0x1);
}
