/* Straight-line functions with calls and guards (batch gen_di): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01f8a0(int, int, int);
int FUN_0c021266(void);
int FUN_0c0213ac(void);
int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c039354(int);
int FUN_0c041dd0(int);
int FUN_0c049b80(int);
int FUN_0c04e9da(int);
int FUN_0c050d20(int);
extern int FUN_0c050f1c();
int FUN_0c051a48(int);
int FUN_0c053ac4(int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08455e(float);
int FUN_0c0847a2(int);
int FUN_0c0847a8(float, float, float);
int FUN_0c0847ce(float, float, float);
int FUN_0c0847f4(float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c1714(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ccd5a(int, int, int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int nlAddVector(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0c058e(int a4);
int FUN_0c039416(int a4, int a5, int a6, int a7);
void FUN_0c042570(int a4);
int FUN_0c07e94a(int a4);
int FUN_0c04d448(int a4, int a5, int a6, int a7);
int FUN_0c0c1af4(int a4);

int FUN_0c0c058e(int a4)
{
    int t20;
    int t180;
    int t190;
    int t298;
    int t307;
    int t245;

    if ((*(int *)((a4 + 0x21C))) == 0) {
        *(unsigned int *)((a4 + 0x238)) = (*(int *)0xC247F24);
        *(unsigned int *)((a4 + 0x23C)) = (*(int *)0xC247F20);
        *(float *)((a4 + 0x234)) = (*(float *)0xC247F1C);
        *(unsigned int *)((a4 + 0x24C)) = (*(int *)0xC247F0C);
        *(float *)((a4 + 0x250)) = (*(float *)0xC247F10);
        *(float *)((a4 + 0x254)) = (*(float *)0xC247F14);
        *(float *)((a4 + 0x258)) = (*(float *)0xC247EF4);
        *(float *)((a4 + 0x25C)) = (*(float *)0xC247EF8);
        *(float *)((a4 + 0x260)) = (*(float *)0xC247EFC);
        *(float *)((a4 + 0x264)) = (*(float *)0xC247F00);
        *(float *)((a4 + 0x268)) = (*(float *)0xC247F04);
        *(float *)((a4 + 0x26C)) = (*(float *)0xC247F08);
        *(float *)((a4 + 0x270)) = (*(float *)0xC247F18);
        return 0x270;
    }
    if (((*(int *)0xC2497B8) & 0x400) != 0) {
        *(unsigned int *)((a4 + 0x24C)) = ((*(int *)((a4 + 0x24C))) ^ 0x1);
    }
    t20 = *(int *)0xC2497B0;
    if ((0x20000 & t20) != 0) {
        if ((0x10 & t20) != 0) {
            *(float *)((a4 + 0x258)) = ((*(float *)((a4 + 0x258))) + 0.00499999989f);
            if ((*(float *)((a4 + 0x258))) > 1.0f) {
                *(float *)((a4 + 0x258)) = 1.0f;
            }
        } else {
            if ((t20 & 0x20) != 0) {
                *(float *)((a4 + 0x258)) = ((*(float *)((a4 + 0x258))) - 0.00499999989f);
                if (0.0f > (*(float *)((a4 + 0x258)))) {
                    *(float *)((a4 + 0x258)) = 0.0f;
                }
            }
        }
        if ((0x80 & (*(int *)0xC2497B0)) != 0) {
            *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x25C))) + 0.00499999989f);
            if ((*(float *)((a4 + 0x25C))) > 1.0f) {
                *(float *)((a4 + 0x25C)) = 1.0f;
            }
        } else {
            if ((0x40 & (*(int *)0xC2497B0)) != 0) {
                *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x25C))) - 0.00499999989f);
                if (0.0f > (*(float *)((a4 + 0x25C)))) {
                    *(float *)((a4 + 0x25C)) = 0.0f;
                }
            }
        }
        if ((0x4 & (*(int *)0xC2497B0)) != 0) {
            *(float *)((a4 + 0x260)) = ((*(float *)((a4 + 0x260))) + 0.00499999989f);
            if (!((*(float *)((a4 + 0x260))) > 1.0f)) {
            } else {
                *(float *)((a4 + 0x260)) = 1.0f;
            }
        } else {
            if ((0x2 & (*(int *)0xC2497B0)) == 0) {
            } else {
                *(float *)((a4 + 0x260)) = ((*(float *)((a4 + 0x260))) - 0.00499999989f);
                if (!(0.0f > (*(float *)((a4 + 0x260))))) {
                } else {
                    *(float *)((a4 + 0x260)) = 0.0f;
                }
            }
        }
    } else {
        if ((0x4000000 & t20) != 0) {
            if ((0x10 & t20) != 0) {
                *(float *)((a4 + 0x264)) = ((*(float *)((a4 + 0x264))) + 0.00499999989f);
                if ((*(float *)((a4 + 0x264))) > 1.0f) {
                    *(float *)((a4 + 0x264)) = 1.0f;
                }
            } else {
                if ((t20 & 0x20) != 0) {
                    *(float *)((a4 + 0x264)) = ((*(float *)((a4 + 0x264))) - 0.00499999989f);
                    if (0.0f > (*(float *)((a4 + 0x264)))) {
                        *(float *)((a4 + 0x264)) = 0.0f;
                    }
                }
            }
            if ((0x80 & (*(int *)0xC2497B0)) != 0) {
                *(float *)((a4 + 0x268)) = ((*(float *)((a4 + 0x268))) + 0.00499999989f);
                if ((*(float *)((a4 + 0x268))) > 1.0f) {
                    *(float *)((a4 + 0x268)) = 1.0f;
                }
            } else {
                if ((0x40 & (*(int *)0xC2497B0)) != 0) {
                    *(float *)((a4 + 0x268)) = ((*(float *)((a4 + 0x268))) - 0.00499999989f);
                    if (0.0f > (*(float *)((a4 + 0x268)))) {
                        *(float *)((a4 + 0x268)) = 0.0f;
                    }
                }
            }
            if ((0x4 & (*(int *)0xC2497B0)) != 0) {
                *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) + 0.00499999989f);
                if (!((*(float *)((a4 + 0x26C))) > 1.0f)) {
                } else {
                    *(float *)((a4 + 0x26C)) = 1.0f;
                }
            } else {
                if ((0x2 & (*(int *)0xC2497B0)) == 0) {
                } else {
                    *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.00499999989f);
                    if (!(0.0f > (*(float *)((a4 + 0x26C))))) {
                    } else {
                        *(float *)((a4 + 0x26C)) = 0.0f;
                    }
                }
            }
        } else {
            if ((0x40000 & t20) != 0) {
                if ((0x10 & t20) != 0) {
                    *(float *)((a4 + 0x250)) = ((*(float *)((a4 + 0x250))) + 0.00499999989f);
                    if ((*(float *)((a4 + 0x250))) > 1.0f) {
                        *(float *)((a4 + 0x250)) = 1.0f;
                    }
                } else {
                    if ((t20 & 0x20) != 0) {
                        *(float *)((a4 + 0x250)) = ((*(float *)((a4 + 0x250))) - 0.00499999989f);
                        if (0.0f > (*(float *)((a4 + 0x250)))) {
                            *(float *)((a4 + 0x250)) = 0.0f;
                        }
                    }
                }
                if ((0x80 & (*(int *)0xC2497B0)) != 0) {
                    *(float *)((a4 + 0x254)) = ((*(float *)((a4 + 0x254))) + 0.00499999989f);
                    if ((*(float *)((a4 + 0x254))) > 1.0f) {
                        *(float *)((a4 + 0x254)) = 1.0f;
                    }
                } else {
                    if ((0x40 & (*(int *)0xC2497B0)) != 0) {
                        *(float *)((a4 + 0x254)) = ((*(float *)((a4 + 0x254))) - 0.00499999989f);
                        if (0.0f > (*(float *)((a4 + 0x254)))) {
                            *(float *)((a4 + 0x254)) = 0.0f;
                        }
                    }
                }
                if ((0x4 & (*(int *)0xC2497B0)) != 0) {
                    *(float *)((a4 + 0x270)) = ((*(float *)((a4 + 0x270))) + 0.00499999989f);
                    if ((*(float *)((a4 + 0x270))) > 1.0f) {
                        *(float *)((a4 + 0x270)) = 1.0f;
                    }
                } else {
                    if ((0x2 & (*(int *)0xC2497B0)) != 0) {
                        *(float *)((a4 + 0x270)) = ((*(float *)((a4 + 0x270))) - 0.00499999989f);
                        if (0.0f > (*(float *)((a4 + 0x270)))) {
                            *(float *)((a4 + 0x270)) = 0.0f;
                        }
                    }
                }
            } else {
                if ((0x10 & t20) != 0) {
                    *(unsigned int *)((a4 + 0x238)) = ((*(int *)((a4 + 0x238))) + 0x100);
                } else {
                    if ((t20 & 0x20) != 0) {
                        *(unsigned int *)((a4 + 0x238)) = ((*(int *)((a4 + 0x238))) - 0x100);
                    }
                }
                t180 = *(int *)0xC2497B0;
                if ((0x40 & t180) != 0) {
                    *(unsigned int *)((a4 + 0x23C)) = ((*(int *)((a4 + 0x23C))) + 0x100);
                } else {
                    if ((t180 & 0x80) != 0) {
                        *(unsigned int *)((a4 + 0x23C)) = ((*(int *)((a4 + 0x23C))) - 0x100);
                    }
                }
                t190 = *(int *)0xC2497B0;
                if ((0x4 & t190) != 0) {
                    *(float *)((a4 + 0x234)) = ((*(float *)((a4 + 0x234))) + 0.00499999989f);
                    if ((*(float *)((a4 + 0x234))) > 1.0f) {
                        *(float *)((a4 + 0x234)) = 1.0f;
                    }
                } else {
                    if ((t190 & 0x2) != 0) {
                        *(float *)((a4 + 0x234)) = ((*(float *)((a4 + 0x234))) - 0.00499999989f);
                        if (0.0f > (*(float *)((a4 + 0x234)))) {
                            *(float *)((a4 + 0x234)) = 0.0f;
                        }
                    }
                }
            }
        }
    }
    FUN_0c0db0a0(0x1E, 0x1B);
    nlPrintf(0xC1E3904);
    FUN_0c0db0a0(0x1E, 0x20);
    nlPrintf(0xC1E3914, (unsigned short)(*(short *)((a4 + 0x238))));
    FUN_0c0db0a0(0x1E, 0x21);
    nlPrintf(0xC1E391C, (unsigned short)(*(short *)((a4 + 0x23C))));
    FUN_0c0db0a0(0x1E, 0x22);
    nlPrintf(0xC1E3924, (*(float *)((a4 + 0x234))));
    FUN_0c0db0a0(0x1E, 0x23);
    nlPrintf(0xC1E3930, (*(float *)((a4 + 0x270))));
    FUN_0c0db0a0(0x1E, 0x25);
    if ((*(int *)((a4 + 0x24C))) != 0) {
        t245 = 0xC1E394C;
    } else {
        t245 = 0xC1E3950;
    }
    nlPrintf(0xC1E3940, t245);
    FUN_0c0db0a0(0x1E, 0x26);
    nlPrintf(0xC1E3954, (*(float *)((a4 + 0x250))));
    FUN_0c0db0a0(0x1E, 0x27);
    nlPrintf(0xC1E3964, (*(float *)((a4 + 0x254))));
    FUN_0c0db0a0(0x1E, 0x29);
    nlPrintf(0xC1E3974, (*(float *)((a4 + 0x258))));
    FUN_0c0db0a0(0x1E, 0x2A);
    nlPrintf(0xC1E3984, (*(float *)((a4 + 0x25C))));
    FUN_0c0db0a0(0x1E, 0x2B);
    nlPrintf(0xC1E3994, (*(float *)((a4 + 0x260))));
    FUN_0c0db0a0(0x1E, 0x2C);
    nlPrintf(0xC1E39A4, (*(float *)((a4 + 0x264))));
    FUN_0c0db0a0(0x1E, 0x2D);
    nlPrintf(0xC1E39B4, (*(float *)((a4 + 0x268))));
    FUN_0c0db0a0(0x1E, 0x2E);
    nlPrintf(0xC1E39C4, (*(float *)((a4 + 0x26C))));
    FUN_0c0844dc((*(int *)((a4 + 0x238))), (*(int *)((a4 + 0x23C))), 0x0, (*(float *)((a4 + 0x234))));
    FUN_0c0844dc((*(int *)((a4 + 0x238))), (*(int *)((a4 + 0x23C))), 0x1, (*(float *)((a4 + 0x234))));
    FUN_0c08455e((*(float *)((a4 + 0x270))));
    FUN_0c0847a2((*(int *)((a4 + 0x24C))));
    FUN_0c0847f4((*(float *)((a4 + 0x250))), (*(float *)((a4 + 0x254))));
    FUN_0c0847a8((*(float *)((a4 + 0x258))), (*(float *)((a4 + 0x25C))), (*(float *)((a4 + 0x260))));
    FUN_0c0847ce((*(float *)((a4 + 0x264))), (*(float *)((a4 + 0x268))), (*(float *)((a4 + 0x26C))));
    nlPushMatrix(0x0);
    t298 = *(int *)0xC247CAC;
    nlUnitMatrix();
    FUN_0c0dcc70(-20.0f, 0.0f, -40.0f);
    nlRotateAY(((-(*(short *)((t298 + 0x3CE)))) + (*(int *)((a4 + 0x23C)))));
    nlRotateAX(((-(*(short *)((t298 + 0x3CC)))) + (*(int *)((a4 + 0x238)))));
    t307 = *(int *)((a4 + 0x240));
    *(unsigned int *)((a4 + 0x240)) = (t307 + 0x400);
    nlRotateAZ((t307 + 0x400));
    FUN_0c0c465c(0x9E);
    FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC0C0C20));
    nlScale((1.0f + 1.0f), (1.0f + 1.0f), (*(float *)0xC0C0C28));
    FUN_0c0de000((1.0f + 1.0f));
    FUN_0c0c465c(0x9C);
    return nlPopMatrix(0x1);
}

int FUN_0c039416(int a4, int a5, int a6, int a7)
{
    int t11;
    int t32;
    int t54;
    int t56;
    int t66;
    int t68;
    int t90;
    int t91;
    int t93;
    int t100;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int stk[21];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R6 = a6;
    R7 = a7;
    L_C039416:;
    R0 = (0x5CC);
    R11 = (0x0);
    R12 = (((*(int *)((((*(int *)((R4 + 0xC0))) << 2) + 0xC195AFC))) + ((*(int *)((R4 + 0xC4))) * 0x28A)));
    R13 = ((((int)stk + 16) + 0xC));
    R14 = (R4);
    R8 = (0x0);
    if (((*(int *)((R4 + 0x5CC))) != 0)) goto L_C039454;
    goto L_C039450;
    L_C039450:;
    goto L_C0397F0;
    L_C0397F0:;
    return R0;
    L_C039454:;
    t11 = *(int *)((R14 + 0xC8));
    R0 = (t11);
    if (((t11 & 64) == 0)) goto L_C039460;
    goto L_C03945C;
    L_C03945C:;
    goto L_C0397F0;
    L_C039460:;
    R0 = (0x57C);
    if (((*(int *)((R14 + 0x57C))) != 0)) goto L_C03946C;
    goto L_C039468;
    L_C039468:;
    goto L_C0397F0;
    L_C03946C:;
    R4 = (R13);
    R5 = ((R13 + 0x18));
    R9 = (R13);
    goto L_C039494;
    L_C039494:;
    if (((unsigned int)R4 < (unsigned int)R5)) goto L_C039490;
    goto L_C039498;
    L_C039498:;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((0x5D0 + R14) + 0x8)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((0x5D0 + R14) + 0xC)));
    R10 = (0x2);
    R4 = ((0x5D0 + R14));
    if (((int)(*(int *)((R14 + 0x304))) > 0)) goto L_C0394D0;
    goto L_C0394AE;
    L_C0394AE:;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C0394CC;
    goto L_C0394C8;
    L_C0394C8:;
    goto L_C03964E;
    L_C03964E:;
    FUN_0c039354(R14);
    goto L_C039652;
    L_C039652:;
    t32 = *(int *)((R14 + 0x580));
    R0 = ((t32 << 2));
    if (((*(int *)((R13 + (t32 << 2)))) == 0)) goto L_C0396BA;
    goto L_C03965E;
    L_C03965E:;
    R4 = (R11);
    R7 = (0x1);
    goto L_C0396B4;
    L_C0396B4:;
    if (((int)R4 < (int)0x6)) goto L_C039668;
    goto L_C0396BA;
    L_C0396BA:;
    if (((*(int *)((R9 + 0x0))) == 0)) goto L_C0396C8;
    goto L_C0396C0;
    L_C0396C0:;
    R0 = ((FUN_0c039288(R14, 0x1, 0x0)));
    goto L_C0396C8;
    L_C0396C8:;
    if (((*(int *)((R13 + 0x4))) == 0)) goto L_C0396E6;
    goto L_C0396CE;
    L_C0396CE:;
    FUN_0c039288(R14, 0x0, 0x1);
    FUN_0c039288(R14, 0x9, 0x1);
    R0 = ((FUN_0c039288(R14, 0x2, 0x1)));
    goto L_C0396E6;
    L_C0396E6:;
    if (((*(int *)((R13 + 0x8))) == 0)) goto L_C039744;
    goto L_C0396EC;
    L_C0396EC:;
    FUN_0c039288(R14, 0x3, 0x2);
    FUN_0c039288(R14, 0x4, 0x2);
    FUN_0c039288(R14, 0x5, 0x2);
    t54 = *(int *)(((int)stk + 20));
    t56 = *(short *)(((((((t54 << 2) + t54) << 1) + (0x226 + R12)) + ((*(int *)((R14 + 0x5D8))) << 1)) + 0x0));
    R0 = ((FUN_0c038732(R14, 0x3, 0x4, 0x5, 0xA, ((((t56 << 1) + t56) << 2) + (0x1F0 + R12)), (R8))));
    R8 = ((R8 + 0x1));
    goto L_C039744;
    L_C039744:;
    if (((*(int *)((R13 + 0xC))) == 0)) goto L_C0397A4;
    goto L_C03974A;
    L_C03974A:;
    FUN_0c039288(R14, 0x6, 0x3);
    FUN_0c039288(R14, 0x7, 0x3);
    FUN_0c039288(R14, 0x8, 0x3);
    t66 = *(int *)(((int)stk + 24));
    t68 = *(short *)((((((((t66 << 2) + t66) << 1) + (0x226 + R12)) + ((*(int *)((R14 + 0x5DC))) << 1)) + 0x32) + 0x0));
    R0 = ((FUN_0c038732(R14, 0x6, 0x7, 0x8, 0xA, (((((t68 << 1) + t68) << 2) + (0x1F0 + R12)) + 0x6), (R8))));
    goto L_C0397A4;
    L_C0397A4:;
    *(volatile int *)(((R13 + 0x10) + 0x0));
    *(volatile int *)(((R13 + 0x14) + 0x0));
    R4 = ((R13 + 0x10));
    R5 = ((R13 + 0x14));
    if (((*(int *)((R9 + 0x0))) != 0)) goto L_C0397E8;
    goto L_C0397BA;
    L_C0397BA:;
    goto L_C0397D0;
    L_C0397D0:;
    if (((*(int *)(((int)stk + 36))) != 0)) goto L_C0397E8;
    goto L_C0397D6;
    L_C0397D6:;
    if (((*(int *)(((int)stk + 40))) != 0)) goto L_C0397E8;
    goto L_C0397DC;
    L_C0397DC:;
    if (((*(int *)((R4 + 0x0))) != 0)) goto L_C0397E8;
    goto L_C0397E2;
    L_C0397E2:;
    if (((*(int *)((R5 + 0x0))) == 0)) goto L_C0397F0;
    goto L_C0397E8;
    L_C0397E8:;
    R0 = ((FUN_0c0cc3f8(0x12CA9, R5, R6, R7, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28))));
    goto L_C0397F0;
    L_C039668:;
    t90 = *(int *)(((((*(int *)(((0x580 + R14) + 0x0))) << 2) + (0x5D0 + R14)) + 0x0));
    t91 = *(signed char *)((R4 + ((((*(int *)((R14 + 0x580))) * 0x1E) + (0x96 + R12)) + ((t90 << 1) + (t90 << 2)))));
    t93 = (int)(*(int *)(((0x5D0 + R14) + (R4 << 2)))) >= (int)(unsigned char)t91;
    R0 = ((R4 << 2));
    R10 = ((R4 << 2));
    R4 = ((R4 + 0x1));
    R5 = ((unsigned char)t91);
    R6 = ((0x5D0 + R14));
    if (t93) goto L_C0396B4;
    goto L_C0396A6;
    L_C0396A6:;
    *(unsigned int *)((((0x5D0 + R14) + R10) + 0x0)) = R5;
    *(unsigned int *)((R13 + R10)) = R7;
    R0 = (R10);
    goto L_C0396B4;
    L_C0394CC:;
    goto L_C039652;
    L_C0394D0:;
    t100 = *(int *)((R14 + 0x580));
    R0 = (t100);
    if ((t100 == 0)) goto L_C0394F8;
    goto L_C0394D8;
    L_C0394D8:;
    if ((R0 == 1)) goto L_C039520;
    goto L_C0394DC;
    L_C0394DC:;
    if ((R0 == 2)) goto L_C03954A;
    goto L_C0394E0;
    L_C0394E0:;
    if ((R0 == 3)) goto L_C03954A;
    goto L_C0394E4;
    L_C0394E4:;
    if ((R0 != 4)) goto L_C0394EC;
    goto L_C0394E8;
    L_C0394E8:;
    goto L_C039634;
    L_C039634:;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039652;
    goto L_C03964E;
    L_C0394EC:;
    if ((R0 != 5)) goto L_C0394F4;
    goto L_C0394F0;
    L_C0394F0:;
    goto L_C039634;
    L_C0394F4:;
    goto L_C039652;
    L_C03954A:;
    R4 = ((0x5D0 + R14));
    if (((*(int *)(((0x5D0 + R14) + 0x8))) != 0)) goto L_C03955A;
    goto L_C039554;
    L_C039554:;
    if (((*(int *)((R4 + 0xC))) == 0)) goto L_C039588;
    goto L_C03955A;
    L_C03955A:;
    R0 = (0x580);
    if (((*(int *)(((((*(int *)((R14 + 0x580))) << 2) + (0x5D0 + R14)) + 0x0))) == 0)) goto L_C039652;
    goto L_C03956C;
    L_C03956C:;
    *(unsigned int *)(((((*(int *)((R14 + R0))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039652;
    goto L_C039584;
    L_C039584:;
    goto L_C03964E;
    L_C039588:;
    *(unsigned int *)(((int)stk + 16)) = (((0x96 + R12) + 0x1E) + 0x6);
    t125 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0x6) + 0x2));
    t126 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0xC) + 0x2));
    t127 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0x12) + 0x2));
    t128 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0x18) + 0x2));
    t129 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0x6) + 0x3));
    t130 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0xC) + 0x3));
    t131 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0x12) + 0x3));
    t132 = *(signed char *)(((((0x96 + R12) + 0x1E) + 0x18) + 0x3));
    R4 = (((((unsigned char)t125 + (unsigned char)t126) + (unsigned char)t127) + (unsigned char)t128));
    R5 = (((((unsigned char)t129 + (unsigned char)t130) + (unsigned char)t131) + (unsigned char)t132));
    R6 = ((((0x96 + R12) + 0x1E) + 0x12));
    R7 = ((((0x96 + R12) + 0x1E) + 0xC));
    if (((((((unsigned char)t125 + (unsigned char)t126) + (unsigned char)t127) + (unsigned char)t128) + ((((unsigned char)t129 + (unsigned char)t130) + (unsigned char)t131) + (unsigned char)t132)) == 0)) goto L_C03960E;
    goto L_C0395D8;
    L_C0395D8:;
    if ((R4 == 0)) goto L_C0395E4;
    goto L_C0395DC;
    L_C0395DC:;
    if (((*(int *)((R14 + 0x580))) == 2)) goto L_C0395F0;
    goto L_C0395E4;
    L_C0395E4:;
    if ((R5 == 0)) goto L_C039652;
    goto L_C0395E8;
    L_C0395E8:;
    if (((*(int *)((R14 + 0x580))) != 3)) goto L_C039652;
    goto L_C0395F0;
    L_C0395F0:;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039652;
    goto L_C03960A;
    L_C03960A:;
    goto L_C03964E;
    L_C03960E:;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) < (int)R10)) goto L_C039652;
    goto L_C039628;
    L_C039628:;
    goto L_C03964E;
    L_C039520:;
    *(unsigned int *)(((((*(int *)((R14 + 0x580))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    if (((int)(*(int *)((R14 + 0x57C))) >= (int)R10)) goto L_C03953E;
    goto L_C03953A;
    L_C03953A:;
    goto L_C039652;
    L_C03953E:;
    goto L_C03964E;
    L_C0394F8:;
    R0 = (0x580);
    if (((*(int *)(((((*(int *)((R14 + 0x580))) << 2) + (0x5D0 + R14)) + 0x0))) == 0)) goto L_C03950E;
    goto L_C03950A;
    L_C03950A:;
    goto L_C039652;
    L_C03950E:;
    *(unsigned int *)(((((*(int *)((R14 + R0))) << 2) + R13) + 0x0)) = (FUN_0c039354(R14));
    goto L_C039652;
    L_C039490:;
    *(unsigned int *)((R4 + 0x0)) = R11;
    R4 = ((R4 + 0x4));
    goto L_C039494;
}

void FUN_0c042570(int a4)
{
    int t0;
    int t6;
    int t27;

    *(unsigned int *)((a4 + 0x4E0)) = 0x0;
    t0 = *(int *)((a4 + 0x4DC));
    *(unsigned int *)((a4 + 0x4E4)) = (*(int *)((((((*(int *)((a4 + 0x4E0))) << 2) << 1) + (*(int *)((((((t0 - 76) << 1) + (t0 - 76)) << 2) + 0xC1F518C)))) + 0x4)));
    *(unsigned int *)((a4 + 0x4E8)) = 0x0;
    *(unsigned int *)((a4 + 0x4EC)) = 0x0;
    *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
    *(unsigned int *)((a4 + 0x210)) = 0x9E;
    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    *(unsigned int *)((a4 + 0x2F0)) = 0x0;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x3;
    FUN_0c041dd0(a4);
    t6 = *(int *)((a4 + 0x4DC));
    if ((unsigned int)((t6 - 76) - 1) >= (unsigned int)0x48) {
        return;
    }
    switch ((((t6 - 76) - 1) << 1)) {
        case 0:
        {
            ((int (*)(int, int, int, int, float))(0xC041E1E))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 2:
        {
            ((int (*)(int, int, int, int, float))(0xC041E90))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 4:
        {
            ((int (*)(int, int, int, int, float))(0xC041EE8))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 6:
        {
            ((int (*)(int, int, int, int, float))(0xC041F04))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 8:
        {
            *(unsigned int *)((a4 + 0x1EC)) = 0xFFFFFFFF;
            *(unsigned int *)((a4 + 0x5B8)) = 0x0;
            return;
        }
        case 10:
        case 12:
        case 14:
        case 18:
        case 22:
        case 24:
        case 26:
        case 28:
        case 56:
        case 60:
        case 62:
        case 66:
        case 68:
        case 70:
        case 72:
        case 76:
        case 84:
        case 90:
        case 92:
        case 94:
        case 96:
        case 98:
        case 106:
        case 116:
        case 118:
        case 120:
        case 122:
        case 124:
        case 128:
        case 130:
        case 134:
        case 136:
        case 138:
        {
            return;
        }
        case 16:
        {
            ((int (*)(int, int, int, int, float))(0xC03F68A))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 20:
        {
            *(unsigned int *)((a4 + 0x1EC)) = 0xFFFFFFFF;
            *(unsigned int *)0xC247D04 = 0x7;
            *(unsigned int *)0xC247CD0 = 0xC102ADC;
            return;
        }
        case 30:
        {
            *(unsigned int *)0xC23EDB0 = 0x1;
            *(unsigned int *)0xC23EDB4 = 0x1;
            FUN_0c021266();
            FUN_0c0213ac();
            *(unsigned int *)0xC247D04 = 0x6;
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(unsigned short *)0xC247CBE = 0x12F;
            return;
        }
        case 32:
        case 34:
        {
            ((int (*)(int, int, int, int, float))(0xC03F5B0))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 36:
        {
            ((int (*)(int, int, int, int, float))(0xC03F68A))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 38:
        case 40:
        {
            FUN_0c0ccd5a(0x0, 0x2D0, (*(int *)((a4 + 0xBC))));
    return;
        }
        case 42:
        case 44:
        case 46:
        {
            ((int (*)(int, int, int, int, float))(0xC03F68A))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 48:
        {
            *(unsigned int *)((a4 + 0x1EC)) = 0xFFFFFFFF;
            return;
        }
        case 50:
        {
            *(unsigned int *)((a4 + 0xA4)) = 0x400;
            return;
        }
        case 52:
        {
            return;
        }
        case 54:
        {
            if ((int)(*(int *)0xC2462F4) > (int)0x1) {
            } else {
                *(unsigned int *)0xC247D04 = 0x4;
                *(unsigned short *)0xC247CC8 = 0xFFFFEAAB;
                *(unsigned short *)0xC247CCA = (*(short *)((a4 + 0x6E)));
                *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
                *(float *)0xC247CC0 = 20.0f;
                *(unsigned short *)0xC247CBE = 0x78;
            }
            return;
        }
        case 58:
        {
            *(unsigned int *)0xC247D04 = 0x4;
            *(unsigned short *)0xC247CC8 = 0x31C7;
            *(unsigned short *)0xC247CCA = ((*(short *)((a4 + 0x6E))) - 32768);
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(float *)0xC247CC0 = 70.0f;
            *(unsigned short *)0xC247CBE = 0x5A;
            return;
        }
        case 64:
        {
            *(unsigned int *)0xC23EDB0 = 0x1;
            *(unsigned int *)0xC23EDB4 = 0x1;
            FUN_0c021266();
            FUN_0c0213ac();
            *(unsigned int *)0xC247D04 = 0x6;
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(unsigned short *)0xC247CBE = 0xC3;
            return;
        }
        case 74:
        {
            return;
        }
        case 78:
        {
            ((int (*)(int, int, int, int, float))(0xC03F5B0))(a4, 0xC23EDB0, 0xC23EDB4, 0x4, 0.0f);
    return;
        }
        case 80:
        {
            *(unsigned int *)0xC23EDB0 = 0x1;
            *(unsigned int *)0xC23EDB4 = 0x1;
            FUN_0c021266();
            *(unsigned int *)0xC247D04 = 0x6;
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(unsigned short *)0xC247CBE = 0xC9;
            return;
        }
        case 82:
        case 86:
        case 88:
        {
            *(float *)((a4 + 0x458)) = 0.0f;
            *(unsigned short *)((a4 + 0x454)) = 0x1;
            return;
        }
        case 100:
        {
            *(unsigned int *)0xC23EDB0 = 0x1;
            *(unsigned int *)0xC23EDB4 = 0x1;
            FUN_0c021266();
            *(unsigned int *)0xC247D04 = 0x6;
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(unsigned short *)0xC247CBE = 0xB4;
            return;
        }
        case 102:
        case 104:
        {
            t27 = *(int *)((a4 + 0xBC));
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (((int)t27 >= 0) ? (0x1 << (t27 & 31)) : ((-(int)t27 & 31) ? ((int)0x1 >> (-(int)t27 & 31)) : ((int)0x1 >> 31))));
            return;
        }
        case 108:
        {
            *(unsigned int *)0xC23EDB0 = 0x1;
            *(unsigned int *)0xC23EDB4 = 0x1;
            *(unsigned int *)0xC247D04 = 0x5;
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(unsigned short *)0xC247CBE = 0xF0;
            *(float *)0xC247CC0 = 10.0f;
            *(unsigned short *)0xC247CC8 = 0x0;
            *(unsigned short *)0xC247CCA = ((*(short *)((a4 + 0x6E))) + 0x7000);
            *(unsigned short *)0xC247CBC = 0x1;
            *(float *)0xC247CC4 = 50.0f;
            *(unsigned short *)0xC247CCC = 0xFFFFF556;
            *(unsigned short *)0xC247CCE = ((*(short *)((a4 + 0x6E))) - 28672);
            return;
        }
        case 110:
        {
            return;
        }
        case 112:
        {
            *(unsigned int *)0xC23EDB0 = 0x1;
            *(unsigned int *)0xC23EDB4 = 0x1;
            FUN_0c021266();
            FUN_0c0213ac();
            *(unsigned int *)0xC247D04 = 0x6;
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(unsigned short *)0xC247CBE = 0x12F;
            return;
        }
        case 114:
        {
            *(unsigned int *)0xC247D04 = 0x4;
            *(unsigned short *)0xC247CC8 = 0xFFFFEAAB;
            *(unsigned short *)0xC247CCA = ((*(short *)((a4 + 0x6E))) - 32768);
            *(unsigned char *)0xC247CB8 = (*(signed char *)((a4 + 0xBC)));
            *(float *)0xC247CC0 = 60.0f;
            *(unsigned short *)0xC247CBE = 0x78;
            return;
        }
        case 126:
        {
            *(float *)((a4 + 0x458)) = 0.0f;
            *(unsigned short *)((a4 + 0x454)) = 0x1;
            return;
        }
        case 132:
        {
            return;
        }
        default:
        {
            FUN_0c0ccd5a(0x0, 0x2D0, (*(int *)((a4 + 0xBC))));
    return;
        }
    }
}

int FUN_0c07e94a(int a4)
{
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u48;
    float u49;
    float u50;
    float u51;
    float u52;
    float u89;
    float u90;
    float u91;
    float u92;
    float u93;
    float u131;
    float u133;
    float u136;
    float u137;
    float u28;
    float u44;
    int stk[43];

    FUN_0c0dc5a0();
    nlSubVector3op((((int)stk + 4) + 0x20), (0x260 + a4), (0x284 + a4));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 44))));
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    FUN_0c0dcc80((0x260 + a4));
    FUN_0c0db470((0x338 + a4), (((int)stk + 4) + 0x74));
    FUN_0c0db470((0x344 + a4), (((int)stk + 4) + 0x68));
    u13 = *(float *)(((int)stk + 128));
    u14 = *(float *)0xC247D0C;
    u15 = *(float *)(((int)stk + 120));
    u16 = *(float *)(((int)stk + 116));
    u17 = *(float *)(((int)stk + 108));
    u18 = *(float *)0xC247D0C;
    if ((u17 / (u18 * u16)) > (u15 / (u14 * u13))) {
        *(float *)(((((int)stk + 4) + 0x50) + 0x4)) = (u15 / (u14 * u13));
        *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 120)));
        *(float *)(((((int)stk + 4) + 0x50) + 0x8)) = (*(float *)(((int)stk + 128)));
        *(float *)(((((int)stk + 4) + 0x44) + 0x4)) = (u17 / (u18 * u16));
        *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 108)));
        u28 = (*(float *)(((int)stk + 116)));
    } else {
        *(float *)(((((int)stk + 4) + 0x50) + 0x4)) = (u17 / (u18 * u16));
        *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 108)));
        *(float *)(((((int)stk + 4) + 0x50) + 0x8)) = (*(float *)(((int)stk + 116)));
        *(float *)(((((int)stk + 4) + 0x44) + 0x4)) = (u15 / (u14 * u13));
        *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 120)));
        u28 = (*(float *)(((int)stk + 128)));
    }
    *(float *)(((((int)stk + 4) + 0x44) + 0x8)) = u28;
    u30 = *(float *)0xC247D10;
    u31 = *(float *)(((int)stk + 128));
    u32 = *(float *)(((int)stk + 124));
    u33 = *(float *)(((int)stk + 116));
    u34 = *(float *)(((int)stk + 112));
    if ((u34 / (u30 * u33)) > (u32 / (u30 * u31))) {
        *(float *)(((((int)stk + 4) + 0x38) + 0x0)) = (u32 / (u30 * u31));
        *(float *)(((((int)stk + 4) + 0x38) + 0x4)) = (*(float *)(((int)stk + 124)));
        *(float *)(((((int)stk + 4) + 0x38) + 0x8)) = (*(float *)(((int)stk + 128)));
        *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (u34 / (u30 * u33));
        *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = (*(float *)(((int)stk + 112)));
        u44 = (*(float *)(((int)stk + 116)));
    } else {
        *(float *)(((((int)stk + 4) + 0x38) + 0x0)) = (u34 / (u30 * u33));
        *(float *)(((((int)stk + 4) + 0x38) + 0x4)) = (*(float *)(((int)stk + 112)));
        *(float *)(((((int)stk + 4) + 0x38) + 0x8)) = (*(float *)(((int)stk + 116)));
        *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (u32 / (u30 * u31));
        *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = (*(float *)(((int)stk + 124)));
        u44 = (*(float *)(((int)stk + 128)));
    }
    *(float *)(((((int)stk + 4) + 0x2C) + 0x8)) = u44;
    if ((*(int *)0xC247D20) != 0) {
        FUN_0c0db470(0xC247D24, (((int)stk + 4) + 0x5C));
        u48 = *(float *)0xC247D0C;
        u49 = *(float *)(((int)stk + 104));
        u50 = *(float *)(((int)stk + 96));
        u51 = *(float *)0xC247D10;
        u52 = *(float *)(((int)stk + 100));
        if ((*(float *)(((((int)stk + 4) + 0x50) + 0x4))) > (u50 / (u48 * u49))) {
            *(float *)(((((int)stk + 4) + 0x50) + 0x4)) = (u50 / (u48 * u49));
            *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 96)));
            *(float *)(((((int)stk + 4) + 0x50) + 0x8)) = (*(float *)(((int)stk + 104)));
        } else {
            if ((u50 / (u48 * u49)) > (*(float *)(((((int)stk + 4) + 0x44) + 0x4)))) {
                *(float *)(((((int)stk + 4) + 0x44) + 0x4)) = (u50 / (u48 * u49));
                *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 96)));
                *(float *)(((((int)stk + 4) + 0x44) + 0x8)) = (*(float *)(((int)stk + 104)));
            }
        }
        if ((*(float *)(((((int)stk + 4) + 0x38) + 0x0))) > (u52 / (u51 * u49))) {
            *(float *)(((((int)stk + 4) + 0x38) + 0x0)) = (u52 / (u51 * u49));
            *(float *)(((((int)stk + 4) + 0x38) + 0x4)) = (*(float *)(((int)stk + 100)));
            *(float *)(((((int)stk + 4) + 0x38) + 0x8)) = (*(float *)(((int)stk + 104)));
        } else {
            if ((u52 / (u51 * u49)) > (*(float *)(((((int)stk + 4) + 0x2C) + 0x0)))) {
                *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (u52 / (u51 * u49));
                *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = (*(float *)(((int)stk + 100)));
                *(float *)(((((int)stk + 4) + 0x2C) + 0x8)) = (*(float *)(((int)stk + 104)));
            }
        }
    }
    if ((*(int *)0xC247D38) != 0) {
        FUN_0c0db470(0xC247D3C, (((int)stk + 4) + 0x5C));
        u89 = *(float *)0xC247D0C;
        u90 = *(float *)(((int)stk + 104));
        u91 = *(float *)(((int)stk + 96));
        u92 = *(float *)0xC247D10;
        u93 = *(float *)(((int)stk + 100));
        if ((*(float *)(((((int)stk + 4) + 0x50) + 0x4))) > (u91 / (u89 * u90))) {
            *(float *)(((((int)stk + 4) + 0x50) + 0x4)) = (u91 / (u89 * u90));
            *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 96)));
            *(float *)(((((int)stk + 4) + 0x50) + 0x8)) = (*(float *)(((int)stk + 104)));
        } else {
            if ((u91 / (u89 * u90)) > (*(float *)(((((int)stk + 4) + 0x44) + 0x4)))) {
                *(float *)(((((int)stk + 4) + 0x44) + 0x4)) = (u91 / (u89 * u90));
                *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 96)));
                *(float *)(((((int)stk + 4) + 0x44) + 0x8)) = (*(float *)(((int)stk + 104)));
            }
        }
        if ((*(float *)(((((int)stk + 4) + 0x38) + 0x0))) > (u93 / (u92 * u90))) {
            *(float *)(((((int)stk + 4) + 0x38) + 0x0)) = (u93 / (u92 * u90));
            *(float *)(((((int)stk + 4) + 0x38) + 0x4)) = (*(float *)(((int)stk + 100)));
            *(float *)(((((int)stk + 4) + 0x38) + 0x8)) = (*(float *)(((int)stk + 104)));
        } else {
            if ((u93 / (u92 * u90)) > (*(float *)(((((int)stk + 4) + 0x2C) + 0x0)))) {
                *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (u93 / (u92 * u90));
                *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = (*(float *)(((int)stk + 100)));
                *(float *)(((((int)stk + 4) + 0x2C) + 0x8)) = (*(float *)(((int)stk + 104)));
            }
        }
    }
    nlInvertMatrix(0x0);
    FUN_0c0db4d0(0xC1013D0, (((int)stk + 4) + 0x14));
    FUN_0c0db4d0(0xC1013DC, (((int)stk + 4) + 0x8));
    u131 = *(float *)(((((int)stk + 4) + 0x44) + 0x0));
    u133 = *(float *)(((((int)stk + 4) + 0x44) + 0x8));
    FUN_0c0dce80((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), (u131 - ((u133 * (u131 - (*(float *)(((((int)stk + 4) + 0x50) + 0x0))))) / ((*(float *)(((((int)stk + 4) + 0x50) + 0x8))) + u133))));
    u136 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
    u137 = *(float *)(((((int)stk + 4) + 0x2C) + 0x8));
    FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), (u136 - ((u137 * (u136 - (*(float *)(((((int)stk + 4) + 0x38) + 0x4))))) / ((*(float *)(((((int)stk + 4) + 0x38) + 0x8))) + u137))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
    nlAddVector((0x284 + a4), (((int)stk + 4) + 0x14));
    nlAddVector((0x260 + a4), (((int)stk + 4) + 0x14));
    nlAddVector((0x284 + a4), (((int)stk + 4) + 0x8));
    nlAddVector((0x260 + a4), (((int)stk + 4) + 0x8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x284 + a4)); }
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    if ((*(int *)((a4 + 0xD8))) != 0) {
        nlSubVector3op((((int)stk + 4) + 0x20), (0xBC + a4), (a4 + 0x60));
        nlSubVector((0x284 + a4), (((int)stk + 4) + 0x20));
        nlSubVector((0x260 + a4), (((int)stk + 4) + 0x20));
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c04d448(int a4, int a5, int a6, int a7)
{
    int t1;
    int t6;
    int t19;
    int t7;
    int t9;
    int t20;
    int t24;
    float u27;
    int t29;
    int t21;
    int t22;
    int t39;
    int t43;
    int t56;
    int t44;
    int t46;
    int t57;
    int t63;
    float u67;
    int t69;
    int t58;
    int t60;
    int t79;
    int t98;
    int t133;
    int t82;
    int t30;
    int t14;
    float u17;
    int t70;
    int t51;
    float u54;
    int t109;
    int t100;
    int t139;
    int t135;

    if ((*(int *)((a4 + 0xD0))) != -1) {
        t1 = *(int *)((a4 + 0xBC));
        if (((*(int *)0xC23A1A8) & 0x100) == 0) {
            if ((int)(*(int *)((a4 + 0x3AC))) <= 0) {
                t6 = *(int *)(((((t1 << 1) << 2) + 0xC249880) + 0x0));
                t19 = 0;
                if (_builtin_fabsf((float)((((int)t6 > (int)0x32)) ? 1 : 0)) == 0.0f) {
                    t7 = *(int *)((((t1 << 1) << 2) + 0xC249884));
                    t9 = ((((int)t7 > (int)0x32)) ? 1 : 0);
                    if (_builtin_fabsf((float)((((int)t7 > (int)0x32)) ? 1 : 0)) != 0.0f) {
                        *(unsigned int *)((a4 + 0x374)) = ((*(int *)((a4 + 0x374))) + 0x1);
                        *(unsigned int *)((a4 + 0x3AC)) = 0x1;
                        t9 = 0x3AC;
                    }
                    t14 = t9;
                    u17 = _builtin_fabsf((float)((((int)t7 > (int)0x32)) ? 1 : 0));
                    t19 = ((_builtin_fabsf((float)((((int)t7 > (int)0x32)) ? 1 : 0)) == 0.0f));
                } else {
                    *(unsigned int *)((a4 + 0x374)) = ((*(int *)((a4 + 0x374))) + 0x1);
                    *(unsigned int *)((a4 + 0x3AC)) = 0x1;
                    t14 = 0x3AC;
                    u17 = _builtin_fabsf((float)((((int)t6 > (int)0x32)) ? 1 : 0));
                    t19 = (0);
                }
                t30 = t14;
            } else {
                t20 = *(int *)(((((t1 << 1) << 2) + 0xC249880) + 0x0));
                t24 = (((((int)t20 >= (int)0x32)) ? 1 : 0) ^ 0x1);
                u27 = _builtin_fabsf((float)(((((int)t20 >= (int)0x32)) ? 1 : 0) ^ 0x1));
                t29 = 0;
                if (_builtin_fabsf((float)(((((int)t20 >= (int)0x32)) ? 1 : 0) ^ 0x1)) != 0.0f) {
                    t21 = *(int *)((((t1 << 1) << 2) + 0xC249884));
                    t22 = (((((int)t21 >= (int)0x32)) ? 1 : 0) ^ 0x1);
                    if (_builtin_fabsf((float)(((((int)t21 >= (int)0x32)) ? 1 : 0) ^ 0x1)) != 0.0f) {
                        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                        t22 = 0x3AC;
                    }
                    t24 = t22;
                    u27 = _builtin_fabsf((float)(((((int)t21 >= (int)0x32)) ? 1 : 0) ^ 0x1));
                    t29 = ((_builtin_fabsf((float)(((((int)t21 >= (int)0x32)) ? 1 : 0) ^ 0x1)) == 0.0f));
                } else {
                    t29 = (1);
                }
                t30 = t24;
            }
            t39 = t30;
            if ((0x606 & (*(int *)((a5 + 0x0)))) != 0) {
                *(unsigned int *)((a4 + 0x374)) = ((*(int *)((a4 + 0x374))) + 0x1);
                t39 = 0x374;
            }
            t82 = t39;
        } else {
            if ((int)(*(int *)((a4 + 0x3AC))) <= 0) {
                t43 = *(int *)(((((t1 << 1) << 2) + 0xC249880) + 0x0));
                t56 = 0;
                if (_builtin_fabsf((float)((((int)t43 > (int)0x32)) ? 1 : 0)) == 0.0f) {
                    t44 = *(int *)((((t1 << 1) << 2) + 0xC249884));
                    t46 = ((((int)t44 > (int)0x32)) ? 1 : 0);
                    if (_builtin_fabsf((float)((((int)t44 > (int)0x32)) ? 1 : 0)) != 0.0f) {
                        *(unsigned int *)((a4 + 0x374)) = ((*(int *)((a4 + 0x374))) + 0x2);
                        *(unsigned int *)((a4 + 0x3AC)) = 0x1;
                        t46 = 0x3AC;
                    }
                    t51 = t46;
                    u54 = _builtin_fabsf((float)((((int)t44 > (int)0x32)) ? 1 : 0));
                    t56 = ((_builtin_fabsf((float)((((int)t44 > (int)0x32)) ? 1 : 0)) == 0.0f));
                } else {
                    *(unsigned int *)((a4 + 0x374)) = ((*(int *)((a4 + 0x374))) + 0x2);
                    *(unsigned int *)((a4 + 0x3AC)) = 0x1;
                    t51 = 0x3AC;
                    u54 = _builtin_fabsf((float)((((int)t43 > (int)0x32)) ? 1 : 0));
                    t56 = (0);
                }
                t70 = t51;
            } else {
                t57 = *(int *)(((((t1 << 1) << 2) + 0xC249880) + 0x0));
                t63 = (((((int)t57 >= (int)0x10)) ? 1 : 0) ^ 0x1);
                u67 = _builtin_fabsf((float)(((((int)t57 >= (int)0x10)) ? 1 : 0) ^ 0x1));
                t69 = 0;
                if (_builtin_fabsf((float)(((((int)t57 >= (int)0x10)) ? 1 : 0) ^ 0x1)) != 0.0f) {
                    t58 = *(int *)((((t1 << 1) << 2) + 0xC249884));
                    t60 = (((((int)t58 >= (int)0x10)) ? 1 : 0) ^ 0x1);
                    if (_builtin_fabsf((float)(((((int)t58 >= (int)0x10)) ? 1 : 0) ^ 0x1)) != 0.0f) {
                        *(unsigned int *)((a4 + 0x374)) = ((*(int *)((a4 + 0x374))) + 0x2);
                        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                        t60 = 0x3AC;
                    }
                    t63 = t60;
                    u67 = _builtin_fabsf((float)(((((int)t58 >= (int)0x10)) ? 1 : 0) ^ 0x1));
                    t69 = ((_builtin_fabsf((float)(((((int)t58 >= (int)0x10)) ? 1 : 0) ^ 0x1)) == 0.0f));
                } else {
                    t69 = (1);
                }
                t70 = t63;
            }
            t79 = t70;
            if ((0x606 & (*(int *)((a5 + 0x0)))) != 0) {
                *(unsigned int *)((a4 + 0x374)) = ((*(int *)((a4 + 0x374))) + 0x4);
                t79 = 0x374;
            }
            t82 = t79;
        }
        return t82;
    }
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0xD0)) = 0x0;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + 0.00999999978f);
    }
    if ((int)(*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247594))) <= 0) {
        t98 = *(int *)((a4 + 0x2F4));
        if ((t98 & 0xFFF0) != 0x200) {
            if ((t98 & 0xFFF0) == 0x300) {
                *(unsigned int *)((a4 + 0x20C)) = 0x800;
                *(unsigned int *)((a4 + 0x210)) = 0xB;
                return 0x210;
            }
            if ((t98 & 0xFFF0) != 0x100) {
                if ((t98 & 0xFFF0) != 0) {
                    if ((t98 & 0xFFF0) != 0x400) {
                        if ((t98 & 0xFFF0) == 0x500) {
                            *(unsigned int *)((a4 + 0x20C)) = 0x800;
                            *(unsigned int *)((a4 + 0x210)) = 0x43;
                            t100 = 0x210;
                        } else {
                            t100 = (((int (*)(int, int, int, int))(FUN_0c050f1c))(a4, a5, a6, a7));
                        }
                        t109 = t100;
                    } else {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
                        *(unsigned int *)((a4 + 0x20C)) = 0x1000;
                        *(unsigned int *)((a4 + 0x1BC)) = 0x17;
                        t109 = 0x1BC;
                    }
                    return t109;
                }
                *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(short *)(((0xC0F85D8 + ((*(int *)(((0x2A0 + a4) + 0x0))) << 1)) + 0x0))));
                return FUN_0c050d20(a4);
            }
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
            *(unsigned int *)((a4 + 0x2D4)) = 0x0;
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(short *)(((0xC0F85D8 + ((*(int *)(((0x2A0 + a4) + 0x0))) << 1)) + 0x0))));
            return FUN_0c050d20(a4);
        }
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
        FUN_0c053ac4(a4);
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(short *)(((0xC0F85D8 + ((*(int *)(((0x2A0 + a4) + 0x0))) << 1)) + 0x0))));
        return (((int (*)(int))(FUN_0c050f1c))(a4));
    }
    FUN_0c051a48(a4);
    if ((int)(*(int *)((a4 + 0x394))) > 0) {
        *(unsigned int *)((a4 + 0x394)) = 0x0;
    }
    *(unsigned int *)((a4 + 0xD0)) = 0x0;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    t133 = *(int *)((a4 + 0x2F4));
    if ((t133 & 0xFFF0) != 0x100) {
        if ((t133 & 0xFFF0) != 0) {
            if ((t133 & 0xFFF0) != 0x300) {
                if ((t133 & 0xFFF0) != 0x200) {
                    if ((t133 & 0xFFF0) != 0x500) {
                        if ((t133 & 0xFFF0) != 0x400) {
                            t135 = (((int (*)(int))(FUN_0c050f1c))(a4));
                        } else {
                            *(unsigned int *)((a4 + 0x20C)) = 0x1000;
                            *(unsigned int *)((a4 + 0x1BC)) = 0x17;
                            t135 = 0x1BC;
                        }
                        t139 = t135;
                    } else {
                        *(unsigned int *)((a4 + 0x20C)) = 0x800;
                        *(unsigned int *)((a4 + 0x210)) = 0x43;
                        t139 = 0x210;
                    }
                    return t139;
                }
                *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
                FUN_0c053ac4(a4);
                *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(short *)(((0xC0F85D8 + ((*(int *)(((0x2A0 + a4) + 0x0))) << 1)) + 0x0))));
                *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                return FUN_0c04e9da(a4);
            }
            *(unsigned int *)((a4 + 0x20C)) = 0x800;
            *(unsigned int *)((a4 + 0x210)) = 0xB;
            return 0x210;
        }
        if (((*(int *)0xC23A1A8) & 0x100) != 0) {
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
        }
        return FUN_0c049b80(a4);
    }
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
    *(unsigned int *)((a4 + 0x2D4)) = 0x0;
    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
    }
    return FUN_0c049b80(a4);
}

int FUN_0c0c1af4(int a4)
{
    int t15;

    FUN_0c0db0a0(0x1, 0x32);
    nlPrintf(0xC1E3D60);
    FUN_0c0db0a0(0x1, 0x33);
    nlPrintf(0xC1E3D70);
    FUN_0c0db0a0(0x1, 0x34);
    nlPrintf(0xC1E3D80);
    FUN_0c0db0a0(0x1, 0x35);
    nlPrintf(0xC1E3D90);
    FUN_0c0db0a0(0x1, 0x36);
    nlPrintf(0xC1E3D98);
    FUN_0c0db0a0(0x1, ((*(int *)(((((*(int *)((a4 + 0x90))) << 2) + (0x84 + a4)) + 0x0))) + 0x32));
    nlPrintf(0xC1E3DA8);
    t15 = *(int *)(((0x84 + a4) + ((*(int *)((a4 + 0x90))) << 2)));
    if (t15 != 0) {
        if (t15 != 1) {
            if (t15 != 2) {
                return t15;
            }
            FUN_0c0db0a0(0x11, ((*(int *)(((((*(int *)((a4 + 0x90))) << 2) + (0x84 + a4)) + 0x0))) + 0x32));
            nlPrintf(0xC1E3CEC);
            return ((int (*)(int))(0xC0C1A44))(a4);
        }
        FUN_0c0db0a0(0x11, ((*(int *)(((((*(int *)((a4 + 0x90))) << 2) + (0x84 + a4)) + 0x0))) + 0x32));
        nlPrintf(0xC1E3CEC);
        return ((int (*)(int))(0xC0C1910))(a4);
    }
    FUN_0c0db0a0(0x11, ((*(int *)(((((*(int *)((a4 + 0x90))) << 2) + (0x84 + a4)) + 0x0))) + 0x32));
    nlPrintf(0xC1E3CEC);
    return FUN_0c0c1714(a4);
}
