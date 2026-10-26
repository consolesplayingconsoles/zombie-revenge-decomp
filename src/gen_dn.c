/* Straight-line functions with calls and guards (batch gen_dn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c40(int);
int FUN_0c0162ee(int);
int FUN_0c01c214(int, int);
int FUN_0c01f8a0(int, int, int);
int FUN_0c034134(int, float);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c0430c0(int, float);
int FUN_0c043338(int);
int FUN_0c043394(int);
int FUN_0c0434f2(int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c3d78(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c4ff0(int, int);
int FUN_0c0d68dc(int, int);
int FUN_0c0d7f60(int, int, int);
int FUN_0c0d8730(int, int);
int FUN_0c0d8800(int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e63ac(int, int, int);
int nlAddVector(int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSetPaletteData(int, int, int);
int nlSetTextureParameter(int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c07e670(int a4);
void FUN_0c0c3fb8(int a4, int a5, int a6, int a7);
void FUN_0c0d6604(int a4, int a5, int a6, float f4);
int FUN_0c01197c(void);
int FUN_0c0c0bda(int a4);
int FUN_0c0438ac(int a4);

int FUN_0c07e670(int a4)
{
    float u13;
    float u14;
    float u15;
    float u19;
    float u27;
    float u28;
    float u30;
    float u37;
    float u38;
    float u45;
    float u52;
    float u78;
    float u82;
    float u83;
    float u85;
    float u94;
    float u95;
    float u102;
    float u110;
    int t141;
    float u59;
    float u115;
    int stk[33];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
    FUN_0c0dc5a0();
    nlSubVector3op((((int)stk + 4) + 0x48), (0x260 + a4), (0x284 + a4));
    FUN_0c0a7714((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (*(float *)(((int)stk + 76))), (*(float *)(((int)stk + 80))), (*(float *)(((int)stk + 84))));
    nlRotateAX((-(*(int *)(((int)stk + 12)))));
    nlRotateAY((-(*(int *)(((int)stk + 16)))));
    FUN_0c0dcc80((0x260 + a4));
    FUN_0c0db470((0x338 + a4), (((int)stk + 4) + 0x3C));
    FUN_0c0db470(0xC247D24, (((int)stk + 4) + 0x30));
    u13 = *(float *)(((int)stk + 72));
    u14 = *(float *)0xC247D0C;
    u15 = *(float *)(((int)stk + 64));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 68))) / ((*(float *)0xC247D10) * u13));
    u19 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 52))) / ((*(float *)0xC247D0C) * u19));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 56))) / ((*(float *)0xC247D10) * u19));
    nlInvertMatrix(0x0);
    FUN_0c0db4d0(0xC1013D0, (((int)stk + 4) + 0x24));
    FUN_0c0db4d0(0xC1013DC, (((int)stk + 4) + 0x18));
    if (!(1.0f > _builtin_fabsf((u15 / (u14 * u13))))) {
        u27 = *(float *)0xC247D0C;
        u28 = *(float *)(((int)stk + 72));
        u30 = (u27 * u28);
        if (!(0.0f > (*(float *)(((int)stk + 64))))) {
            u30 = (-(u27 * u28));
        }
        FUN_0c0dce80((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x24), (u30 + (*(float *)(((int)stk + 64)))));
        nlAddVector((0x284 + a4), (((int)stk + 4) + 0x24));
        nlAddVector((0x260 + a4), (((int)stk + 4) + 0x24));
    } else {
        if ((*(int *)0xC247D20) != 0) {
            u37 = *(float *)(((int)stk + 64));
            u38 = *(float *)(((int)stk + 52));
            *(float *)(((int)stk + 4)) = u38;
            if (u37 > u38) {
                u45 = 0.0f;
                if ((1.0f + 1.0f) > ((u15 / (u14 * u13)) - (*(float *)(((int)stk + 24))))) {
                    u45 = (u37 - ((((*(float *)(((int)stk + 72))) * (u37 - u38))) * (1.0f / (u13 + u19))));
                }
                u59 = u45;
            } else {
                u52 = 0.0f;
                if ((1.0f + 1.0f) > ((*(float *)(((int)stk + 24))) - (u15 / (u14 * u13)))) {
                    *(float *)(((int)stk + 4)) = u38;
                    u52 = (u38 - ((((*(float *)(((int)stk + 60))) * (u38 - u37))) * (1.0f / (u13 + u19))));
                }
                u59 = u52;
            }
            FUN_0c0dce80((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x24), u59);
            nlAddVector((0x284 + a4), (((int)stk + 4) + 0x24));
            nlAddVector((0x260 + a4), (((int)stk + 4) + 0x24));
        } else {
            _builtin_fabsf((u15 / (u14 * u13)));
        }
    }
    u78 = *(float *)(((int)stk + 8));
    if (!(1.0f > _builtin_fabsf(u78))) {
        u82 = *(float *)0xC247D10;
        u83 = *(float *)(((int)stk + 72));
        u85 = (u82 * u83);
        if (0.0f > (*(float *)(((int)stk + 68)))) {
            u85 = (-(u82 * u83));
        }
        FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (u85 - (*(float *)(((int)stk + 68)))));
        nlAddVector((0x284 + a4), (((int)stk + 4) + 0x18));
        nlAddVector((0x260 + a4), (((int)stk + 4) + 0x18));
    } else {
        if ((*(int *)0xC247D20) != 0) {
            u94 = *(float *)(((int)stk + 68));
            u95 = *(float *)(((int)stk + 56));
            if (u94 > u95) {
                u102 = 0.0f;
                if ((1.0f + 1.0f) > ((*(float *)(((int)stk + 8))) - (*(float *)(((int)stk + 20))))) {
                    u102 = (u94 - ((((*(float *)(((int)stk + 72))) * (u94 - u95))) * (1.0f / (u13 + u19))));
                }
                u115 = u102;
            } else {
                u110 = 0.0f;
                if ((1.0f + 1.0f) > ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))))) {
                    u110 = (u95 - ((((*(float *)(((int)stk + 60))) * (u95 - u94))) * (1.0f / (u13 + u19))));
                }
                u115 = u110;
            }
            FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), u115);
            nlAddVector((0x284 + a4), (((int)stk + 4) + 0x18));
            nlAddVector((0x260 + a4), (((int)stk + 4) + 0x18));
        } else {
            _builtin_fabsf(u78);
        }
    }
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x284 + a4)); }
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    t141 = 0xD8;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        nlSubVector3op((((int)stk + 4) + 0x48), (0xBC + a4), (a4 + 0x60));
        nlSubVector((0x284 + a4), (((int)stk + 4) + 0x48));
        t141 = (nlSubVector((0x260 + a4), (((int)stk + 4) + 0x48)));
    }
    return t141;
}

void FUN_0c0c3fb8(int a4, int a5, int a6, int a7)
{
    int t7;
    int t20;
    int t23;
    int t24;
    int t34;
    int t45;
    int t46;
    int t48;
    int t62;
    int t75;
    int t79;
    int t81;
    int t86;
    int t87;
    int t94;
    int t105;
    int t107;
    int stk[17];

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
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0C3FB8:;
    *(unsigned int *)(((int)stk + 24)) = R5;
    *(unsigned int *)(((int)stk + 28)) = R6;
    *(unsigned int *)(((int)stk + 20)) = R7;
    *(unsigned int *)(((int)stk + 32)) = 0x1;
    if (((int)(*(int *)((R4 + 0x0))) >= 0)) goto L_C0C3FDE;
    goto L_C0C3FDA;
    L_C0C3FDA:;
    goto L_C0C427C;
    L_C0C427C:;
    return;
    L_C0C3FDE:;
    if (((*(int *)((R4 + 0x18))) != 0)) goto L_C0C3FE8;
    goto L_C0C3FE4;
    L_C0C3FE4:;
    goto L_C0C427C;
    L_C0C3FE8:;
    R10 = (0x0);
    R8 = ((R4 + 0x18));
    R9 = (0xC943D78);
    goto L_C0C3FF0;
    L_C0C3FF0:;
    t7 = *(int *)((R8 + 0x20));
    *(unsigned int *)(((int)stk + 8)) = t7;
    R14 = (R8);
    R4 = (t7);
    R8 = ((R8 + 0x50));
    if (((int)t7 < 0)) goto L_C0C4002;
    goto L_C0C3FFC;
    L_C0C3FFC:;
    R4 = ((R4 + (*(int *)0xC948270)));
    goto L_C0C4002;
    L_C0C4002:;
    R13 = (((R4 << 2) << 1));
    if (((*(int *)((((*(int *)((R9 + 0x0))) + ((R4 << 2) << 1)) + 0x0))) != 0)) goto L_C0C4024;
    goto L_C0C4012;
    L_C0C4012:;
    *(unsigned int *)(((0x4 + ((*(int *)((R9 + 0x0))) + R13)) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
    goto L_C0C4024;
    L_C0C4024:;
    t20 = *(int *)((R9 + 0x0));
    *(unsigned int *)(((t20 + R13) + 0x0)) = ((*(int *)(((t20 + R13) + 0x0))) + 0x1);
    t23 = *(int *)((((*(int *)((R9 + 0x0))) + R13) + 0x4));
    t24 = *(int *)0xC947AA8;
    *(unsigned int *)(((int)stk + 16)) = ((t23 * 0x3C) + t24);
    R13 = (t23);
    if (((*(int *)((((t23 * 0x3C) + t24) + 0x2C))) != 0)) goto L_C0C4102;
    goto L_C0C4048;
    L_C0C4048:;
    if (((int)(*(int *)(((int)stk + 8))) < 0)) goto L_C0C40E8;
    goto L_C0C404E;
    L_C0C404E:;
    *(unsigned int *)(((int)stk + 12)) = ((((*(int *)(((int)stk + 8))) << 2) << 2) + (*(int *)(((int)stk + 24))));
    t34 = *(short *)((((*(int *)(((int)stk + 8))) << 1) + (*(int *)(((int)stk + 28)))));
    R0 = (((((unsigned short)t34 << 2) << 2) << 1));
    R12 = (((((unsigned short)t34 << 2) << 2) << 1));
    if (((int)((((unsigned short)t34 << 2) << 2) << 1) < 0)) goto L_C0C4076;
    goto L_C0C4072;
    L_C0C4072:;
    R0 = ((R0 & 0x1F));
    goto L_C0C4080;
    L_C0C4080:;
    if ((R0 == 0)) goto L_C0C409A;
    goto L_C0C4084;
    L_C0C4084:;
    R3 = (R12);
    if (((int)R12 >= 0)) goto L_C0C408C;
    goto L_C0C408A;
    L_C0C408A:;
    R3 = ((R3 + 0x1F));
    goto L_C0C408C;
    L_C0C408C:;
    R12 = (((((((int)R3 >> 5) + 0x1) << 2) << 2) << 1));
    goto L_C0C409A;
    L_C0C409A:;
    t45 = *(int *)(((*(int *)(((int)stk + 12))) + 0x8));
    t46 = *(int *)0xC4BFE28;
    t48 = (FUN_0c0e63ac((t46 + t45), 0xC1E5158, 0x10)) != 0;
    R11 = ((t46 + t45));
    if (t48) goto L_C0C40D0;
    goto L_C0C40B2;
    L_C0C40B2:;
    FUN_0c01c214(R11, R12);
    FUN_0c0c4ff0((R11 + 0x10), (*(int *)0xC26239C));
    R4 = (((*(int *)0xC26239C) + 0xC));
    R6 = ((*(int *)0xC26239C));
    goto L_C0C40DA;
    L_C0C40DA:;
    FUN_0c0d7f60((*(int *)(((int)stk + 12))), R13, (R6 + 0x1C));
    goto L_C0C40F4;
    L_C0C40F4:;
    FUN_0c0c3d78();
    nlCreateTextureParam(R13);
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x38)) = R13;
    goto L_C0C4102;
    L_C0C4102:;
    t62 = *(int *)(((int)stk + 16));
    *(unsigned int *)((t62 + 0x2C)) = ((*(int *)((t62 + 0x2C))) + 0x1);
    if (((int)(*(int *)(((int)stk + 8))) >= 0)) goto L_C0C411E;
    goto L_C0C4110;
    L_C0C4110:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) | 0x1);
    *(unsigned int *)((R14 + 0x4)) = ((*(int *)((R14 + 0x4))) | 0x400000);
    goto L_C0C411E;
    L_C0C411E:;
    R5 = (R13);
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_C0C413C;
    goto L_C0C4126;
    L_C0C4126:;
    *(unsigned int *)((R14 + 0x0)) = (((*(int *)((R14 + 0x0))) & 0xFFFCFFFF) | (((*(int *)0xC20CC5C) << 16) | 0x8C0000));
    *(unsigned int *)(((int)stk + 32)) = R10;
    goto L_C0C413C;
    L_C0C413C:;
    nlSetTextureParameter(R14, R5);
    t75 = *(int *)0xC94C688;
    R4 = ((0x7 & ((unsigned int)(*(int *)((R14 + 0xC))) >> 27)));
    R5 = (t75);
    if ((t75 != 0)) goto L_C0C4158;
    goto L_C0C4154;
    L_C0C4154:;
    goto L_C0C426C;
    L_C0C426C:;
    t79 = *(int *)((R14 + 0x4C));
    t81 = (*(int *)(((R8 + t79) + 0x0))) == 0;
    R0 = (0x4C);
    R8 = ((R8 + t79));
    if (t81) goto L_C0C427C;
    goto L_C0C4278;
    L_C0C4278:;
    goto L_C0C3FF0;
    L_C0C4158:;
    if ((R4 == 5)) goto L_C0C416C;
    goto L_C0C4160;
    L_C0C4160:;
    if ((R4 == 6)) goto L_C0C416C;
    goto L_C0C4168;
    L_C0C4168:;
    goto L_C0C426C;
    L_C0C416C:;
    t86 = *(int *)(((int)stk + 20));
    t87 = *(int *)((R14 + 0x3C));
    R4 = ((t87 + t86));
    if (((*(signed char *)(((t87 + t86) + 0xC20A130))) == 0)) goto L_C0C417C;
    goto L_C0C417A;
    L_C0C417A:;
    R4 = (R10);
    goto L_C0C417C;
    L_C0C417C:;
    if (((int)R4 >= (int)(*(short *)0xC990E84))) goto L_C0C426C;
    goto L_C0C4184;
    L_C0C4184:;
    t94 = *(int *)0xC990E98;
    R11 = (((((R4 << 1) + R4) << 2) + R5));
    R13 = ((t94 + ((R4 << 2) << 1)));
    if (((*(short *)(((t94 + ((R4 << 2) << 1)) + 0x4))) == 0)) goto L_C0C41AE;
    goto L_C0C41A4;
    L_C0C41A4:;
    *(unsigned short *)((R13 + 0x4)) = ((*(short *)((R13 + 0x4))) + 0x1);
    R12 = ((*(short *)((R13 + 0x0))));
    goto L_C0C425E;
    L_C0C425E:;
    *(unsigned int *)((R14 + 0xC)) = (((*(int *)((R14 + 0xC))) & 0xF81FFFFF) | (R12 << 21));
    goto L_C0C426C;
    L_C0C41AE:;
    *(unsigned char *)((R13 + 0x2)) = (*(signed char *)((R11 + 0x2)));
    *(unsigned char *)((R13 + 0x3)) = ((int)((*(int *)((R11 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((R13 + 0x4)) = 0x1;
    *(unsigned short *)((R13 + 0x6)) = R4;
    t105 = *(int *)((R11 + 0x8));
    *(unsigned int *)(((int)stk + 8)) = t105;
    t107 = FUN_0c0d8730((*(short *)((R11 + 0x2))), t105);
    R12 = (t107);
    if (((int)t107 < 0)) goto L_C0C425C;
    goto L_C0C41DA;
    L_C0C41DA:;
    *(unsigned short *)((R13 + 0x0)) = R12;
    FUN_0c0d8800(R12, (*(int *)(((int)stk + 8))));
    nlSetPaletteData(((R12 << 2) << 2), (*(int *)((R11 + 0x4))), (*(int *)(((int)stk + 8))));
    goto L_C0C425E;
    L_C0C425C:;
    R12 = (R10);
    goto L_C0C425E;
    L_C0C40D0:;
    FUN_0c01c214(R11, R12);
    R6 = (R11);
    goto L_C0C40DA;
    L_C0C4076:;
    R0 = (((~(((~R0) + 0x1) & 0x1F)) + 0x1));
    goto L_C0C4080;
    L_C0C40E8:;
    FUN_0c0d7f60(0xC1E5148, R13, (*(int *)0xC1E5150));
    goto L_C0C40F4;
}

void FUN_0c0d6604(int a4, int a5, int a6, float f4)
{
    int t5;
    int t6;
    int t15;
    int t36;
    int t39;
    int t46;
    float u58;
    int t63;
    int t67;
    int t71;
    int t75;
    int t79;
    int t86;
    int t90;
    int t100;
    int t107;
    int t111;
    int t115;
    int t119;
    int t133;
    int t137;
    int t141;
    int t145;
    int t149;
    int t153;
    int t160;
    int t168;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R13;
    float F1;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    L_C0D6604:;
    *(unsigned int *)(((int)stk + 20)) = R4;
    *(unsigned int *)(((int)stk + 16)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R6;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = F4;
    *(unsigned int *)(((int)stk + 4)) = (0x170 + (*(int *)(((int)stk + 20))));
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C0D6626;
    goto L_C0D6622;
    L_C0D6622:;
    goto L_C0D68D4;
    L_C0D68D4:;
    return;
    L_C0D6626:;
    t5 = *(int *)(((*(int *)(((int)stk + 20))) + 0xC));
    t6 = *(int *)(((((*(int *)(((int)stk + 12))) << 2) + (0xC20CB64 + (t5 * 0x34))) + 0x0));
    R0 = (t6);
    R2 = ((0xC20CB64 + (t5 * 0x34)));
    R3 = (0x34);
    if ((t6 != 0)) goto L_C0D6644;
    goto L_C0D6640;
    L_C0D6640:;
    goto L_C0D688E;
    L_C0D688E:;
    return;
    L_C0D6644:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x2C))) & 2) == 0)) goto L_C0D6650;
    goto L_C0D664C;
    L_C0D664C:;
    *(unsigned int *)(((int)stk + 12)) = 0x3;
    R2 = (0x3);
    goto L_C0D6650;
    L_C0D6650:;
    t15 = *(int *)(((int)stk + 12));
    R0 = ((t15 - 1));
    if (((unsigned int)(t15 - 1) < (unsigned int)0xC)) goto L_C0D665E;
    goto L_C0D665A;
    L_C0D665A:;
    goto L_C0D6896;
    L_C0D6896:;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x4)) = (*(int *)(((int)stk + 12)));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x8)) = (*(float *)(((int)stk + 8)));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0xC)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x10)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x14)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x1C)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x20)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x6C))) + 0x32C)));
    FUN_0c0d68dc((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 4))));
    R0 = (0x1);
    goto L_C0D68D4;
    L_C0D665E:;
    t36 = (R0 << 1);
    R0 = ((R0 << 1));
    switch (t36) { case 0: goto L_C0D669A; case 2: goto L_C0D66CC; case 4: goto L_C0D6740; case 6: goto L_C0D6740; case 8: goto L_C0D6740; case 10: goto L_C0D6760; case 12: goto L_C0D6760; case 14: goto L_C0D6760; case 16: goto L_C0D67D0; case 18: goto L_C0D6688; case 20: goto L_C0D6700; case 22: goto L_C0D6844; }
    L_C0D6844:;
    t39 = *(int *)(((*(int *)(((int)stk + 20))) + 0x1C));
    R0 = (t39);
    if (((t39 & 16) == 0)) goto L_C0D688E;
    goto L_C0D684C;
    L_C0D684C:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x4000000) == 0)) goto L_C0D688E;
    goto L_C0D6856;
    L_C0D6856:;
    t46 = *(int *)(((*(int *)(((int)stk + 16))) + 0x1C));
    R0 = (t46);
    if (((t46 & 128) != 0)) goto L_C0D688E;
    goto L_C0D685E;
    L_C0D685E:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x2000000) != 0)) goto L_C0D6896;
    goto L_C0D6868;
    L_C0D6868:;
    u58 = *(float *)0xC0D6930;
    R0 = (0xC0D6930);
    F1 = (u58);
    if ((!((float)(*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x8))) << 2) + 0xC247594))) > ((float)(*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x8))) << 2) + 0xC24759C))) * u58)))) goto L_C0D6896;
    goto L_C0D688E;
    L_C0D67D0:;
    t63 = *(int *)(((*(int *)(((int)stk + 20))) + 0x1C));
    R0 = (t63);
    if (((t63 & 16) == 0)) goto L_C0D688E;
    goto L_C0D67D8;
    L_C0D67D8:;
    t67 = *(int *)(((*(int *)(((int)stk + 20))) + 0x2C));
    R0 = (t67);
    if (((t67 & 16) != 0)) goto L_C0D688E;
    goto L_C0D67E0;
    L_C0D67E0:;
    t71 = *(int *)(((*(int *)(((int)stk + 16))) + 0x20));
    R0 = (t71);
    if (((t71 & 64) != 0)) goto L_C0D688E;
    goto L_C0D67E8;
    L_C0D67E8:;
    t75 = *(int *)(((*(int *)(((int)stk + 16))) + 0x1C));
    R0 = (t75);
    if (((t75 & 128) != 0)) goto L_C0D688E;
    goto L_C0D67F0;
    L_C0D67F0:;
    t79 = *(int *)(((*(int *)(((int)stk + 20))) + 0x20));
    R0 = (t79);
    if (((t79 & 128) != 0)) goto L_C0D688E;
    goto L_C0D67F8;
    L_C0D67F8:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x2000000) != 0)) goto L_C0D6896;
    goto L_C0D6802;
    L_C0D6802:;
    t86 = *(int *)(((*(int *)(((int)stk + 20))) + 0xC));
    R0 = (t86);
    if ((t86 == 2)) goto L_C0D6820;
    goto L_C0D680A;
    L_C0D680A:;
    t90 = *(int *)(((*(int *)(((int)stk + 16))) + 0x1C));
    R0 = (t90);
    if (((t90 & 128) != 0)) goto L_C0D6896;
    goto L_C0D6812;
    L_C0D6812:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x4000) != 0)) goto L_C0D6896;
    goto L_C0D681C;
    L_C0D681C:;
    goto L_C0D688E;
    L_C0D6820:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x10000) != 0)) goto L_C0D6896;
    goto L_C0D682A;
    L_C0D682A:;
    goto L_C0D688E;
    L_C0D6760:;
    t100 = *(int *)(((*(int *)(((int)stk + 20))) + 0x1C));
    R0 = (t100);
    if (((t100 & 16) != 0)) goto L_C0D676C;
    goto L_C0D6768;
    L_C0D6768:;
    goto L_C0D688E;
    L_C0D676C:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x2000000) == 0)) goto L_C0D677A;
    goto L_C0D6776;
    L_C0D6776:;
    goto L_C0D688E;
    L_C0D677A:;
    t107 = *(int *)(((*(int *)(((int)stk + 16))) + 0x1C));
    R0 = (t107);
    if (((t107 & 128) == 0)) goto L_C0D6786;
    goto L_C0D6782;
    L_C0D6782:;
    goto L_C0D688E;
    L_C0D6786:;
    t111 = *(int *)(((*(int *)(((int)stk + 20))) + 0x2C));
    R0 = (t111);
    if (((t111 & 16) == 0)) goto L_C0D6792;
    goto L_C0D678E;
    L_C0D678E:;
    goto L_C0D688E;
    L_C0D6792:;
    t115 = *(int *)(((*(int *)(((int)stk + 20))) + 0x24));
    R0 = (t115);
    if (((t115 & 64) != 0)) goto L_C0D679E;
    goto L_C0D679A;
    L_C0D679A:;
    goto L_C0D688E;
    L_C0D679E:;
    t119 = *(int *)(((*(int *)(((int)stk + 20))) + 0xC));
    R0 = (t119);
    if ((t119 == 1)) goto L_C0D67B4;
    goto L_C0D67A6;
    L_C0D67A6:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x400) != 0)) goto L_C0D67C2;
    goto L_C0D67B0;
    L_C0D67B0:;
    goto L_C0D688E;
    L_C0D67C2:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x400000) == 0)) goto L_C0D6896;
    goto L_C0D67CC;
    L_C0D67CC:;
    goto L_C0D688E;
    L_C0D67B4:;
    R0 = (0x90);
    if (((*(float *)(((*(int *)(((int)stk + 20))) + 0x90))) > 15.0f)) goto L_C0D688E;
    goto L_C0D67C2;
    L_C0D6740:;
    t133 = *(int *)(((*(int *)(((int)stk + 16))) + 0x1C));
    R0 = (t133);
    if (((t133 & 64) != 0)) goto L_C0D674C;
    goto L_C0D6748;
    L_C0D6748:;
    goto L_C0D6896;
    L_C0D674C:;
    goto L_C0D688E;
    L_C0D6700:;
    t137 = *(int *)(((*(int *)(((int)stk + 20))) + 0x1C));
    R0 = (t137);
    if (((t137 & 16) != 0)) goto L_C0D670C;
    goto L_C0D6708;
    L_C0D6708:;
    goto L_C0D688E;
    L_C0D670C:;
    t141 = *(int *)(((*(int *)(((int)stk + 16))) + 0x20));
    R0 = (t141);
    if (((t141 & 64) == 0)) goto L_C0D6718;
    goto L_C0D6714;
    L_C0D6714:;
    goto L_C0D688E;
    L_C0D6718:;
    t145 = *(int *)(((*(int *)(((int)stk + 20))) + 0x20));
    R0 = (t145);
    if (((t145 & 128) == 0)) goto L_C0D6724;
    goto L_C0D6720;
    L_C0D6720:;
    goto L_C0D688E;
    L_C0D6724:;
    t149 = *(int *)(((*(int *)(((int)stk + 20))) + 0x2C));
    R0 = (t149);
    if (((t149 & 1) != 0)) goto L_C0D6730;
    goto L_C0D672C;
    L_C0D672C:;
    goto L_C0D688E;
    L_C0D6730:;
    t153 = *(int *)(((*(int *)(((int)stk + 20))) + 0x2C));
    R0 = (t153);
    if (((t153 & 8) != 0)) goto L_C0D673C;
    goto L_C0D6738;
    L_C0D6738:;
    goto L_C0D6896;
    L_C0D673C:;
    goto L_C0D688E;
    L_C0D66CC:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x2000000) == 0)) goto L_C0D66DA;
    goto L_C0D66D6;
    L_C0D66D6:;
    goto L_C0D6896;
    L_C0D66DA:;
    t160 = *(int *)(((*(int *)(((int)stk + 20))) + 0x2C));
    R0 = ((t160 & 0x8));
    if (((t160 & 0x8) != 8)) goto L_C0D66E8;
    goto L_C0D66E4;
    L_C0D66E4:;
    goto L_C0D688E;
    L_C0D66E8:;
    R0 = (0x32C);
    if (((int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x6C))) + 0x32C))) >= (int)0x2)) goto L_C0D66FC;
    goto L_C0D66F8;
    L_C0D66F8:;
    goto L_C0D6896;
    L_C0D66FC:;
    goto L_C0D688E;
    L_C0D669A:;
    t168 = FUN_0c0da2e0();
    R0 = (t168);
    if (((int)t168 < 0)) goto L_C0D66A8;
    goto L_C0D66A4;
    L_C0D66A4:;
    R0 = ((R0 & 0x3));
    goto L_C0D66B2;
    L_C0D66B2:;
    if ((R0 != 0)) goto L_C0D66BA;
    goto L_C0D66B6;
    L_C0D66B6:;
    goto L_C0D6896;
    L_C0D66BA:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x8000000) == 0)) goto L_C0D66C8;
    goto L_C0D66C4;
    L_C0D66C4:;
    goto L_C0D6896;
    L_C0D66C8:;
    goto L_C0D688E;
    L_C0D66A8:;
    R0 = (((~(((~R0) + 0x1) & 0x3)) + 0x1));
    goto L_C0D66B2;
    L_C0D6688:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0x24))) & 0x800) == 0)) goto L_C0D6696;
    goto L_C0D6692;
    L_C0D6692:;
    goto L_C0D6896;
    L_C0D6696:;
    goto L_C0D688E;
}

int FUN_0c01197c(void)
{
    int t8;
    int t9;
    int t14;
    int t15;
    float u16;
    int t18;
    int t53;
    int t55;
    int t60;
    int t64;
    int t65;
    int t69;
    int t70;
    int t83;
    int t86;
    int t87;
    int t1;
    int t29;
    float u30;
    int t41;
    float u42;
    int t77;
    int t74;

    for (;;) {
        if ((*(signed char *)((0xC1EF2D4 + (*(int *)0xC1EF560)))) != 0) {
            break;
        }
        t1 = (*(int *)0xC1EF560);
        t1 = (t1 + 0x1);
        *(unsigned int *)0xC1EF560 = t1;
        if ((int)t1 > (int)0x3) {
            *(unsigned int *)0xC1EF560 = (0x0);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F409C);
    t8 = 0xC0F41D0;
    for (;;) {
        t9 = *(int *)((t8 + 0x0));
        t8 = (t8 + 0x4);
        FUN_0c0c465c(t9);
        if ((unsigned int)t8 >= (unsigned int)0xC0F41E0) {
            break;
        }
    }
    FUN_0c0c465c((*(int *)((((*(int *)0xC1EF560) << 2) + 0xC0F41E0))));
    t14 = *(int *)0xC23EADC;
    t15 = *(int *)0xC23EADC;
    *(unsigned int *)0xC23EADC = (t15 + 0x1);
    u16 = (float)(t14 & 0x1F);
    if ((t15 & 32) != 0) {
        u16 = (31.0f - (float)(t14 & 0x1F));
    }
    t18 = 0x0;
    for (;;) {
        if ((*(signed char *)((0xC1EF2D4 + t18))) != 0) {
            if ((*(signed char *)((t18 + 0xC1EF2D8))) != 0) {
                FUN_0c0c465c(0x130A);
                if (t18 == (*(int *)0xC1EF560)) {
                    FUN_0c0c465c((*(int *)((0xC0F41C0 + (t18 << 2)))));
                    t29 = 0x1308;
                    u30 = (u16 / 31.0f);
                } else {
                    t29 = (*(int *)((0xC0F41C0 + (t18 << 2))));
                    u30 = 0.75f;
                }
                FUN_0c0c475c(t29, u30);
            } else {
                FUN_0c0c465c(0x1306);
                if (t18 == (*(int *)0xC1EF560)) {
                    FUN_0c0c475c((*(int *)((((t18 << 2) + 0xC0F41C0) + 0x0))), 0.75f);
                    t41 = 0x1309;
                    u42 = (u16 / 31.0f);
                } else {
                    t41 = (*(int *)((((t18 << 2) + 0xC0F41C0) + 0x0)));
                    u42 = 0.5f;
                }
                FUN_0c0c475c(t41, u42);
            }
        } else {
            FUN_0c0c475c(0x1305, 0.5f);
            FUN_0c0c465c(0x1306);
        }
        FUN_0c0dcc70(1.75f, 0.0f, 0.0f);
        t18 = (t18 + 0x1);
        if ((int)t18 >= (int)0x4) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t53 = *(short *)0xC2497C8;
    if (((unsigned short)t53 & 0xC0C0) != 0) {
        *(unsigned int *)0xC23EADC = 0x14;
        t55 = *(short *)0xC2497C8;
        if (((unsigned short)t55 & 0x8080) != 0) {
            t60 = 0x0;
            if ((int)(*(int *)0xC1EF560) < (int)0x3) {
                t60 = ((*(int *)0xC1EF560) + 0x1);
            }
            *(unsigned int *)0xC1EF560 = t60;
            t77 = (unsigned short)t55;
        } else {
            if ((int)(*(int *)0xC1EF560) > 0) {
                *(unsigned int *)0xC1EF560 = ((*(int *)0xC1EF560) - 1);
                t64 = 0xC23EADC;
                for (;;) {
                    t65 = *(int *)0xC1EF560;
                    if ((*(signed char *)((0xC1EF2D4 + t65))) != 0) {
                        break;
                    }
                    t64 = (*(int *)0xC1EF560);
                    t64 = (t64 - 1);
                    *(unsigned int *)0xC1EF560 = t64;
                    if ((int)t64 < 0) {
                        *(unsigned int *)0xC1EF560 = 0x3;
                    }
                }
                t74 = t65;
            } else {
                *(unsigned int *)0xC1EF560 = 0x3;
                t69 = 0xC23EADC;
                for (;;) {
                    t70 = *(int *)0xC1EF560;
                    if ((*(signed char *)((0xC1EF2D4 + t70))) != 0) {
                        break;
                    }
                    t69 = (*(int *)0xC1EF560);
                    t69 = (t69 - 1);
                    *(unsigned int *)0xC1EF560 = t69;
                    if ((int)t69 < 0) {
                        *(unsigned int *)0xC1EF560 = 0x3;
                    }
                }
                t74 = t70;
            }
            t77 = t74;
        }
        return t77;
    }
    if (((unsigned short)t53 & 8) != 0) {
        *(unsigned int *)0xC5229BC = 0x9;
        FUN_0c0162ee(0xC1EF500);
        t83 = *(int *)0xC522D6C;
        *(unsigned int *)0xC23ED6C = (t83 - 1);
        if ((int)(t83 - 1) < 0) {
            *(unsigned int *)0xC23ED6C = 0x0;
        }
        return FUN_0c010c40(0x1);
    }
    t86 = *(short *)0xC2497C8;
    if (((unsigned short)t86 & 4) != 0) {
        t87 = *(int *)0xC1EF560;
        *(unsigned char *)(((0xC1EF2D8 + t87) + 0x0)) = ((*(signed char *)((t87 + 0xC1EF2D8))) ^ 0x1);
        *(unsigned int *)(((*(int *)((((*(int *)0xC1EF560) << 2) + 0xC1EF500))) + 0x0)) = (*(signed char *)(((*(int *)0xC1EF560) + 0xC1EF2D8)));
        return 0xC1EF2D8;
    }
    if (((unsigned short)t86 & 2) != 0) {
        return FUN_0c010c40(0x2);
    }
    return (unsigned short)t86;
}

int FUN_0c0c0bda(int a4)
{
    int t0;
    int t156;
    int t7;
    int t44;
    int t82;
    int t97;
    int t167;
    float u21;
    float u32;
    float u59;
    float u70;

    t0 = *(int *)((a4 + 0x21C));
    if (t0 != 0) {
        t156 = t0;
        if (t0 != 1) {
        } else {
            if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                t7 = *(int *)0xC2497B0;
                if ((t7 & 0x100000) != 0) {
                    *(unsigned int *)((a4 + 0x240)) = ((*(int *)((a4 + 0x240))) + 0x1);
                } else {
                    if ((t7 & 0x200000) != 0) {
                        *(unsigned int *)((a4 + 0x240)) = ((*(int *)((a4 + 0x240))) - 1);
                    }
                }
                if (((*(int *)0xC2497B0) & 0x400000) != 0) {
                    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                        u21 = ((*(float *)0xC248A74) - 0.099999994f);
                    } else {
                        u21 = ((*(float *)0xC248A74) - 0.00999999978f);
                    }
                    *(float *)0xC248A74 = u21;
                }
                if (((*(int *)0xC2497B0) & 0x800000) != 0) {
                    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                        u32 = ((*(float *)0xC248A74) + 0.099999994f);
                    } else {
                        u32 = ((*(float *)0xC248A74) + 0.00999999978f);
                    }
                    *(float *)0xC248A74 = u32;
                }
            }
            t44 = *(int *)0xC2497B0;
            if ((0x40000 & t44) != 0) {
                if ((t44 & 0x100000) != 0) {
                    *(unsigned int *)((a4 + 0x244)) = ((*(int *)((a4 + 0x244))) + 0x1);
                } else {
                    if ((t44 & 0x200000) != 0) {
                        *(unsigned int *)((a4 + 0x244)) = ((*(int *)((a4 + 0x244))) - 1);
                    }
                }
                if (((*(int *)0xC2497B0) & 0x400000) != 0) {
                    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                        u59 = ((*(float *)0xC248A78) - 0.099999994f);
                    } else {
                        u59 = ((*(float *)0xC248A78) - 0.00999999978f);
                    }
                    *(float *)0xC248A78 = u59;
                }
                if (((*(int *)0xC2497B0) & 0x800000) != 0) {
                    if ((0x4000000 & (*(int *)0xC2497B0)) != 0) {
                        u70 = ((*(float *)0xC248A78) + 0.099999994f);
                    } else {
                        u70 = ((*(float *)0xC248A78) + 0.00999999978f);
                    }
                    *(float *)0xC248A78 = u70;
                }
            }
            t82 = *(int *)0xC2497B0;
            if ((0x20000 & t82) != 0) {
                if ((t82 & 0x100000) != 0) {
                    *(unsigned int *)((a4 + 0x248)) = ((*(int *)((a4 + 0x248))) + 0x1);
                } else {
                    if ((t82 & 0x200000) != 0) {
                        *(unsigned int *)((a4 + 0x248)) = ((*(int *)((a4 + 0x248))) - 1);
                    }
                }
            }
            t97 = *(int *)0xC2497B0;
            if ((0x4060000 & t97) == 0) {
                if ((0x400000 & t97) != 0) {
                    *(unsigned int *)((a4 + 0x238)) = ((*(int *)((a4 + 0x238))) + 0x1);
                } else {
                    if ((0x800000 & t97) != 0) {
                        *(unsigned int *)((a4 + 0x238)) = ((*(int *)((a4 + 0x238))) - 1);
                    } else {
                        if ((0x100000 & t97) != 0) {
                            *(unsigned int *)((a4 + 0x23C)) = ((*(int *)((a4 + 0x23C))) + 0x1);
                        } else {
                            if ((t97 & 0x200000) != 0) {
                                *(unsigned int *)((a4 + 0x23C)) = ((*(int *)((a4 + 0x23C))) - 1);
                            }
                        }
                    }
                }
            }
            FUN_0c0db0a0(0x32, 0x1B);
            nlPrintf(0xC1E39D4);
            FUN_0c0db0a0(0x32, 0x20);
            nlPrintf(0xC1E39E0, ((*(int *)((a4 + 0x238)))));
            FUN_0c0db0a0(0x32, 0x21);
            nlPrintf(0xC1E39E8, ((*(int *)((a4 + 0x23C)))));
            FUN_0c0db0a0(0x32, 0x22);
            nlPrintf(0xC1E39F0, ((*(int *)((a4 + 0x240)))));
            FUN_0c0db0a0(0x32, 0x23);
            nlPrintf(0xC1E39F8, ((*(int *)((a4 + 0x244)))));
            FUN_0c0db0a0(0x32, 0x24);
            nlPrintf(0xC1E3A00, ((*(int *)((a4 + 0x248)))));
            FUN_0c0db0a0(0x32, 0x25);
            nlPrintf(0xC1E3A08, (*(float *)0xC248A74));
            FUN_0c0db0a0(0x32, 0x26);
            nlPrintf(0xC1E3A14, (*(float *)0xC248A78));
            t156 = (FUN_0c084570((*(int *)((a4 + 0x238))), (*(int *)((a4 + 0x23C))), (*(int *)((a4 + 0x240))), (*(int *)((a4 + 0x244))), ((*(int *)((a4 + 0x248))))));
        }
        t167 = t156;
    } else {
        *(unsigned int *)((a4 + 0x238)) = (unsigned char)((int)(*(int *)0xC248A70) >> 8);
        *(unsigned int *)((a4 + 0x23C)) = (unsigned char)(*(signed char *)0xC248A70);
        *(unsigned int *)((a4 + 0x240)) = (*(int *)0xC248A64);
        *(unsigned int *)((a4 + 0x244)) = (*(int *)0xC248A68);
        *(unsigned int *)((a4 + 0x248)) = (*(int *)0xC248A6C);
        t167 = 0x248;
    }
    return t167;
}

int FUN_0c0438ac(int a4)
{
    int t1;
    int t3;
    int t6;
    int t7;
    int t12;
    int t15;
    int t22;
    int t23;
    int t32;
    int t34;
    int t35;

    t1 = *(int *)(((((*(int *)((a4 + 0x4E0))) << 2) << 2) + 0xC2460F4));
    *(unsigned int *)((a4 + 0x50C)) = 0x1;
    *(unsigned int *)((a4 + 0x510)) = (*(int *)((t1 + 0xBC)));
    t3 = *(int *)((a4 + 0x4C8));
    if (t3 == 0) {
        return t3;
    }
    if (t3 != 1) {
        if (t3 != 2) {
            if (t3 == 3) {
                t6 = FUN_0c0430c0(a4, 10.0f);
                if (t6 != 0) {
                    if ((t6 != 1) && (t6 != 2)) {
                        if (t6 != 3) {
                            return t6;
                        }
                        t7 = FUN_0c034134(a4, 30.0f);
                        if (t7 != 0) {
                            return FUN_0c0434f2(a4);
                        }
                        return (FUN_0c0350a4(a4, 0x300, 0x1, 0x0));
                    }
                    *(unsigned int *)0xC246310 = ((*(int *)0xC246310) | 0x2);
                    *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFFB);
                    return ((int (*)(int))(0xC0434B6))(a4);
                }
                return FUN_0c043338(a4);
            }
            if (t3 == 4) {
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    t12 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t12 + 0x1);
                    if ((int)(t12 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                        return 0x3B0;
                    }
                    return FUN_0c043338(a4);
                }
                return 0x2EC;
            }
            if (t3 == 5) {
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    return ((int (*)(int))(0xC04345A))(a4);
                }
                return 0x2EC;
            }
            if (t3 == 6) {
                t15 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t15 + 0x1);
                if ((int)(t15 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
                    return ((int (*)(int))(0xC043498))(a4);
                }
                return 0x3B0;
            }
            if (t3 == 7) {
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    return FUN_0c043338(a4);
                }
                return 0x2EC;
            }
            if (t3 == 8) {
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    *(unsigned int *)0xC246310 = (((*(int *)0xC246310) & 0xFFFFFFFD) | 0x4);
                    return FUN_0c043338(a4);
                }
                return 0x2EC;
            }
            if (t3 == 9) {
                return t3;
            }
            if (t3 == 10) {
                FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    return ((int (*)(int))(0xC043356))(a4);
                }
                return 0x2EC;
            }
            return t3;
        }
        t22 = FUN_0c0430c0(a4, 10.0f);
        if (t22 != 0) {
            if ((t22 != 1) && (t22 != 2)) {
                if (t22 != 3) {
                    return t22;
                }
                t23 = FUN_0c034134(a4, 30.0f);
                if (t23 != 0) {
                    return (FUN_0c0350a4(a4, 0x200, 0x1, 0x0));
                }
                return FUN_0c043394(a4);
            }
            *(unsigned int *)0xC246310 = ((*(int *)0xC246310) | 0x2);
            *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFFB);
            return ((int (*)(int))(0xC0434B6))(a4);
        }
        return FUN_0c043338(a4);
    }
    if ((0x4 & (*(int *)0xC246310)) != 0) {
        *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFFB);
    }
    t32 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t32 + 0x1);
    if ((int)(t32 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
        return 0x3B0;
    }
    t34 = FUN_0c0430c0(a4, 10.0f);
    if (t34 != 0) {
        if ((t34 != 1) && (t34 != 2)) {
            if (t34 != 3) {
                return t34;
            }
            t35 = FUN_0c034134(a4, 30.0f);
            if (t35 != 0) {
                return ((int (*)(int))(0xC043356))(a4);
            }
            return FUN_0c043394(a4);
        }
        *(unsigned int *)0xC246310 = ((*(int *)0xC246310) | 0x2);
        *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFFB);
        return ((int (*)(int))(0xC0434B6))(a4);
    }
    return FUN_0c043338(a4);
}
