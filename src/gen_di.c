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
    static const short dst[13] = {0x238, 0x23C, 0x234, 0x24C, 0x250, 0x254, 0x258, 0x25C, 0x260, 0x264, 0x268, 0x26C, 0x270};
    static const short src[13] = {0x30, 0x2C, 0x28, 0x18, 0x1C, 0x20, 0x00, 0x04, 0x08, 0x0C, 0x10, 0x14, 0x24};
    static const short fld[3][3] = {{0x258, 0x25C, 0x260}, {0x264, 0x268, 0x26C}, {0x250, 0x254, 0x270}};
    static const int mod[3] = {0x20000, 0x4000000, 0x40000};
    static const unsigned char up[3] = {0x10, 0x80, 0x4};
    static const unsigned char dn[3] = {0x20, 0x40, 0x2};
    int g;
    int k;
    int i;
    int t245;
    int t298;
    int t307;
    float *f;

    if (*(int *)(a4 + 0x21C) == 0) {
        for (i = 0; i < 13; i++) {
            *(int *)(a4 + dst[i]) = *(int *)(0xC247EF4 + src[i]);
        }
        return 0x270;
    }
    if ((*(int *)0xC2497B8 & 0x400) != 0) {
        *(int *)(a4 + 0x24C) ^= 1;
    }
    g = *(int *)0xC2497B0;
    for (k = 0; k < 3 && (g & mod[k]) == 0; k++) {
    }
    if (k < 3) {
        for (i = 0; i < 3; i++) {
            f = (float *)(a4 + fld[k][i]);
            if ((g & up[i]) != 0) {
                *f = *f + 0.00499999989f;
                if (*f > 1.0f) {
                    *f = 1.0f;
                }
            } else if ((g & dn[i]) != 0) {
                *f = *f - 0.00499999989f;
                if (0.0f > *f) {
                    *f = 0.0f;
                }
            }
        }
    } else {
        if ((g & 0x10) != 0) {
            *(int *)(a4 + 0x238) += 0x100;
        } else if ((g & 0x20) != 0) {
            *(int *)(a4 + 0x238) -= 0x100;
        }
        if ((g & 0x40) != 0) {
            *(int *)(a4 + 0x23C) += 0x100;
        } else if ((g & 0x80) != 0) {
            *(int *)(a4 + 0x23C) -= 0x100;
        }
        f = (float *)(a4 + 0x234);
        if ((g & 0x4) != 0) {
            *f = *f + 0.00499999989f;
            if (*f > 1.0f) {
                *f = 1.0f;
            }
        } else if ((g & 0x2) != 0) {
            *f = *f - 0.00499999989f;
            if (0.0f > *f) {
                *f = 0.0f;
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
    int f;
    int v;
    int x;
    int b;
    float c;

    *(int *)(a4 + 0x4E0) = 0;
    t0 = *(int *)(a4 + 0x4DC);
    *(int *)(a4 + 0x4E4) = *(int *)((*(int *)(a4 + 0x4E0) << 3) + *(int *)((t0 - 76) * 12 + 0xC1F518C) + 4);
    *(int *)(a4 + 0x4E8) = 0;
    *(int *)(a4 + 0x4EC) = 0;
    *(int *)(a4 + 0x20C) = 0x40000000;
    *(int *)(a4 + 0x210) = 0x9E;
    *(int *)(a4 + 0x1B0) = -1;
    *(int *)(a4 + 0x1BC) = 0;
    *(int *)(a4 + 0x4FC) = 0;
    *(int *)(a4 + 0x2F0) = 0;
    *(int *)((*(int *)(a4 + 0xBC) << 2) + 0xC247030) = 3;
    FUN_0c041dd0(a4);
    t6 = *(int *)(a4 + 0x4DC) - 77;
    if ((unsigned int)t6 >= 0x48) {
        return;
    }
    switch (t6) {
    case 0: f = 0xC041E1E; goto call;
    case 1: f = 0xC041E90; goto call;
    case 2: f = 0xC041EE8; goto call;
    case 3: f = 0xC041F04; goto call;
    case 8: case 18: case 21: case 22: case 23: f = 0xC03F68A; goto call;
    case 16: case 17: case 39: f = 0xC03F5B0;
call:
        ((int (*)(int, int, int, int, float))f)(a4, 0xC23EDB0, 0xC23EDB4, 4, 0.0f);
        return;
    case 4:
        *(int *)(a4 + 0x1EC) = -1;
        *(int *)(a4 + 0x5B8) = 0;
        return;
    case 10:
        *(int *)(a4 + 0x1EC) = -1;
        *(int *)0xC247D04 = 7;
        *(int *)0xC247CD0 = 0xC102ADC;
        return;
    case 15: case 56: v = 0x12F; x = 1; goto cam;
    case 32: v = 0xC3; x = 1; goto cam;
    case 40: v = 0xC9; x = 0; goto cam;
    case 50: v = 0xB4; x = 0;
cam:
        *(int *)0xC23EDB0 = 1;
        *(int *)0xC23EDB4 = 1;
        FUN_0c021266();
        if (x) {
            FUN_0c0213ac();
        }
        *(int *)0xC247D04 = 6;
        *(char *)0xC247CB8 = *(signed char *)(a4 + 0xBC);
        *(short *)0xC247CBE = v;
        return;
    case 24:
        *(int *)(a4 + 0x1EC) = -1;
        return;
    case 25:
        *(int *)(a4 + 0xA4) = 0x400;
        return;
    case 27:
        if (*(int *)0xC2462F4 > 1) {
            return;
        }
        v = 0xEAAB; b = 0; c = 20.0f; x = 0x78; goto shot;
    case 29: v = 0x31C7; b = -32768; c = 70.0f; x = 0x5A; goto shot;
    case 57: v = 0xEAAB; b = -32768; c = 60.0f; x = 0x78;
shot:
        *(int *)0xC247D04 = 4;
        *(short *)0xC247CC8 = v;
        *(short *)0xC247CCA = *(short *)(a4 + 0x6E) + b;
        *(char *)0xC247CB8 = *(signed char *)(a4 + 0xBC);
        *(float *)0xC247CC0 = c;
        *(short *)0xC247CBE = x;
        return;
    case 41: case 43: case 44: case 63:
        *(float *)(a4 + 0x458) = 0.0f;
        *(short *)(a4 + 0x454) = 1;
        return;
    case 51: case 52:
        x = *(int *)(a4 + 0xBC);
        *(int *)0xC23ED88 |= (x >= 0) ? (1 << (x & 31)) : ((-x & 31) ? (1 >> (-x & 31)) : (1 >> 31));
        return;
    case 54:
        *(int *)0xC23EDB0 = 1;
        *(int *)0xC23EDB4 = 1;
        *(int *)0xC247D04 = 5;
        *(char *)0xC247CB8 = *(signed char *)(a4 + 0xBC);
        *(short *)0xC247CBE = 0xF0;
        *(float *)0xC247CC0 = 10.0f;
        *(short *)0xC247CC8 = 0;
        *(short *)0xC247CCA = *(short *)(a4 + 0x6E) + 0x7000;
        *(short *)0xC247CBC = 1;
        *(float *)0xC247CC4 = 50.0f;
        *(short *)0xC247CCC = 0xF556;
        *(short *)0xC247CCE = *(short *)(a4 + 0x6E) - 28672;
        return;
    case 5: case 6: case 7: case 9: case 11: case 12: case 13: case 14: case 26: case 28: case 30: case 31: case 33:
    case 34: case 35: case 36: case 37: case 38: case 42: case 45: case 46: case 47: case 48: case 49: case 53: case 55:
    case 58: case 59: case 60: case 61: case 62: case 64: case 65: case 66: case 67: case 68: case 69:
        return;
    default:
        FUN_0c0ccd5a(0, 0x2D0, *(int *)(a4 + 0xBC));
        return;
    }
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
