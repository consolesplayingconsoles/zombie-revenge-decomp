/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0849da(void);
int FUN_0c0a68ec(int, Stk3, float, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int nlAddVector(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c06a9b2(int a4, int a5, int a6, int a7);
int FUN_0c091fd4(int a4, int a5, int a6, int a7);

int FUN_0c06a9b2(int a4, int a5, int a6, int a7)
{
    int t12;
    int t18;
    int t56;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    float F6;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C06A9B2:;
    FUN_0c0685a4(R4, R5, R6, R7);
    R1 = (0x8);
    R11 = (0x9C);
    R12 = (0x0);
    R13 = (0x1);
    R14 = (R4);
    R4 = (0x0);
    R5 = (0x0);
    R6 = (0xC246FF0);
    R9 = (0x0);
    goto L_C06A9D6;
    L_C06A9D6:;
    if (((*(int *)((R4 + (R6 + 0x40)))) != 4)) goto L_C06A9F4;
    goto L_C06A9E2;
    L_C06A9E2:;
    t12 = *(int *)(((R6 + R5) + 0x0));
    R7 = (t12);
    if (((*(int *)((t12 + 0x210))) != R11)) goto L_C06A9F4;
    goto L_C06A9F0;
    L_C06A9F0:;
    R9 = (R13);
    goto L_C06A9FC;
    L_C06A9FC:;
    if ((R9 == 0)) goto L_C06AA4E;
    goto L_C06AA00;
    L_C06AA00:;
    t18 = *(int *)((R7 + 0xBC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0FB10C); }
    FUN_0c0a68ec((0x98 + R14), *(Stk3 *)(((int)stk + 4)), ((*(float *)(((((((((t18 << 1) + t18) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x8))) - (*(float *)((((int)stk + 4) + 0x8)))), ((*(float *)(((((((((t18 << 1) + t18) << 2) << 2) << 2) + 0xC23F268) + 0x3C) + 0x4))) - (*(float *)((((int)stk + 4) + 0x4)))));
    R0 = (0x9C);
    if (((*(int *)((R14 + 0x9C))) != 0)) goto L_C06AACC;
    goto L_C06AA42;
    L_C06AA42:;
    *(unsigned int *)((R14 + R0)) = R13;
    FUN_0c0cc3f8(0x821A9, R5, R6, R7, F4, F5, F6);
    goto L_C06AACC;
    L_C06AACC:;
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)0xC247BF4));
    FUN_0c0dcc70((*(float *)((R14 + 0x30))), (*(float *)((R14 + 0x34))), (*(float *)((R14 + 0x38))));
    nlRotateAZ((*(short *)((R14 + 0x64))));
    nlRotateAY((*(short *)((R14 + 0x62))));
    nlRotateAX(((*(int *)((R14 + 0x98))) - 6144));
    FUN_0c0c465c((*(int *)((R14 + 0x78))));
    return (nlPopMatrix(0x1));
    L_C06AA4E:;
    R0 = (0x9C);
    if (((*(int *)((R14 + 0x9C))) == 0)) goto L_C06AA5E;
    goto L_C06AA56;
    L_C06AA56:;
    *(unsigned int *)((R14 + R0)) = R12;
    FUN_0c0cc3f8(0x921A9, R5, R6, R7, F4, F5, F6);
    goto L_C06AA5E;
    L_C06AA5E:;
    R0 = (0x98);
    R4 = (0x100);
    if (((int)(*(int *)((R14 + 0x98))) <= (int)0x80)) goto L_C06AAB8;
    goto L_C06AA6C;
    L_C06AA6C:;
    *(unsigned int *)((R14 + R0)) = ((*(int *)((R14 + R0))) - R4);
    goto L_C06AACC;
    L_C06AAB8:;
    if (((int)(*(int *)(((0x98 + R14) + 0x0))) >= (int)0xFFFFFF80)) goto L_C06AACC;
    goto L_C06AAC4;
    L_C06AAC4:;
    *(unsigned int *)((R14 + 0x98)) = ((*(int *)((R14 + 0x98))) + R4);
    goto L_C06AACC;
    L_C06A9F4:;
    t56 = (unsigned int)(R4 + 0x4) < (unsigned int)R1;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x4));
    if (t56) goto L_C06A9D6;
    goto L_C06A9FC;
}

int FUN_0c091fd4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    float u21;
    int t40;
    float u45;
    float u52;
    float u54;

    t0 = *(int *)((a4 + 0x68));
    t1 = *(int *)0xC247CAC;
    *(unsigned int *)((a4 + 0x68)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) * 0.983999968f);
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) * 0.983999968f);
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * 0.983999968f);
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) + 0.399999976f);
    if ((int)(*(int *)((a4 + 0x68))) < (int)0x18) {
        *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) - 0.0299999993f);
    }
    nlAddVector((a4 + 0x34), (a4 + 0x40));
    if ((int)(*(int *)((a4 + 0x68))) < (int)0x10) {
        u21 = *(float *)((a4 + 0x64));
        *(float *)((a4 + 0x64)) = (u21 + 0.0349999964f);
        *(float *)(((0x38 + a4) + 0x0)) = ((*(float *)(((0x38 + a4) + 0x0))) + (u21 + 0.0349999964f));
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))), (*(float *)((a4 + 0x3C))));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    t40 = 0xFFFFFE00;
    if ((*(int *)((a4 + 0x30))) != 0) {
        t40 = 0x200;
    }
    nlRotateAZ((((*(int *)((a4 + 0x68))) * t40) + (*(int *)((a4 + 0x58)))));
    u45 = *(float *)((a4 + 0x54));
    nlScale(u45, u45, u45);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    u52 = (*(float *)0xC0921A4);
    u52 = u52 + (*(float *)0xC0921A8) * (float)((-(*(int *)((a4 + 0x68)))) + 0x20);
    u54 = u52;
    if (!(2.14748365e+09f > u52)) {
        u54 = (u52 - (2.14748365e+09f + 2.14748365e+09f));
    }
    FUN_0c0c465c((int)u54);
    nlPopMatrix(0x1);
    return FUN_0c0849da();
}
