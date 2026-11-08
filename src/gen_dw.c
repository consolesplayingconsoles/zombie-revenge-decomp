/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0849da(void);
int FUN_0c0a68ec(int, Stk3, float, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
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
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o64_float { char p[0x64]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };


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
    FUN_0c0cc3f8(0x821A9, R5, R6, R7);
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
    FUN_0c0cc3f8(0x921A9, R5, R6, R7);
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

    t0 = (((struct o68_int *)(a4))->v);
    t1 = *(int *)0xC247CAC;
    (((struct o68_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.983999968f);
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.983999968f);
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 0.983999968f);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.399999976f);
    if ((int)((((struct o68_int *)(a4))->v)) < (int)0x18) {
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0299999993f);
    }
    nlAddVector((a4 + 0x34), (a4 + 0x40));
    if ((int)((((struct o68_int *)(a4))->v)) < (int)0x10) {
        u21 = (((struct o64_float *)(a4))->v);
        (((struct o64_float *)(a4))->v) = (u21 + 0.0349999964f);
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + (u21 + 0.0349999964f));
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)), ((((struct o3C_float *)(a4))->v)));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    t40 = 0xFFFFFE00;
    if ((*(int *)((a4 + 0x30))) != 0) {
        t40 = 0x200;
    }
    nlRotateAZ(((((((struct o68_int *)(a4))->v)) * t40) + ((((struct o58_int *)(a4))->v))));
    u45 = (((struct o54_float *)(a4))->v);
    nlScale(u45, u45, u45);
    FUN_0c0de000(((((struct o54_float *)(a4))->v)));
    u52 = (*(float *)0xC0921A4);
    u52 = u52 + (*(float *)0xC0921A8) * (float)((-((((struct o68_int *)(a4))->v))) + 0x20);
    u54 = u52;
    if (!(2.14748365e+09f > u52)) {
        u54 = (u52 - (2.14748365e+09f + 2.14748365e+09f));
    }
    FUN_0c0c465c((int)u54);
    nlPopMatrix(0x1);
    return FUN_0c0849da();
}
