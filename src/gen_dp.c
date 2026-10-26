/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Pause(int, int, int, int, int, int, int);
int FUN_0c010264(void);
int FUN_0c010a30(void);
int FUN_0c0154a4(void);
int FUN_0c016200(int);
int FUN_0c01641c(void);
int FUN_0c01d636(int, int, int);
int FUN_0c01d8de(int, int, int, int, int, int);
int FUN_0c01d9c2(int);
int FUN_0c02a19a(int);
int FUN_0c03227c(int);
int FUN_0c034238(int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0b5d54(void);
int FUN_0c0b8624(void);
int FUN_0c0bfa90(void);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0ce708(void);
int FUN_0c0cea9c(void);
int FUN_0c0d8f50(int);
float FUN_0c0da410(int);
int FUN_0c0daf60(int, int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int);
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int nlInitMatrix(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
void FUN_0c01029e(int a4, int a5);
int FUN_0c07b70e(int a4);
int FUN_0c024ae0(int a4);

void FUN_0c01029e(int a4, int a5)
{
    int t26;
    int t31;
    int t38;
    int t46;
    int t78;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R5 = a5;
    L_C01029E:;
    *(unsigned int *)0xC23A180 = 0x1;
    *(unsigned int *)0xC23A198 = 0xFFFFFFFF;
    *(unsigned int *)0xC23AAAC = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0xC23EDE0;
    *(unsigned int *)(((int)stk + 12)) = 0xC23EDE4;
    R10 = (0x1);
    R11 = (0x0);
    R12 = (0xC23AAAC);
    R13 = (0xC23A198);
    R14 = (0xC0DB0E0);
    R8 = (0xC0DB0A0);
    R9 = (0xC23A260);
    goto L_C0102C2;
    L_C0102C2:;
    nlInitMatrix(0xC23A268, 0x20);
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dc0b0(0x1);
    *(unsigned int *)0xC23A258 = ((*(int *)0xC23A258) + 0x1);
    FUN_0c0d8f50(0xFF000000);
    FUN_0c010264();
    if (((int)(*(int *)((R13 + 0x0))) >= 0)) goto L_C0102FA;
    goto L_C0102F6;
    L_C0102F6:;
    goto L_C0104AC;
    L_C0104AC:;
    if (((*(int *)((R9 + 0x0))) == 0)) goto L_C01051A;
    goto L_C0104B2;
    L_C0104B2:;
    if (((int)(*(int *)0xC23A25C) <= 0)) goto L_C01051A;
    goto L_C0104BA;
    L_C0104BA:;
    _builtin_set_imask(0xF);
    FUN_0c0cea9c();
    FUN_0c0bfa90();
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
    FUN_0c0c45d0();
    FUN_0c0ce708();
    FUN_0c0cc6dc();
    *(unsigned int *)0xC23ED50 = 0x9;
    *(unsigned int *)0xC23A180 = R10;
    t26 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = R11;
    *(unsigned int *)((t26 + 0x0)) = R11;
    *(unsigned int *)0xC23A190 = R11;
    *(unsigned int *)0xC23A18C = R11;
    *(unsigned int *)0xC23A184 = R11;
    _builtin_set_imask(0x0);
    if (((*(int *)((R9 + 0x0))) != 2)) goto L_C010518;
    goto L_C010514;
    L_C010514:;
    FUN_0c010a30();
    goto L_C010518;
    L_C010518:;
    *(unsigned int *)((R9 + 0x0)) = R11;
    goto L_C01051A;
    L_C01051A:;
    t31 = *(int *)0xC23A180;
    R0 = (t31);
    if ((t31 == 1)) goto L_C01052E;
    goto L_C010522;
    L_C010522:;
    if ((R0 == 2)) goto L_C010538;
    goto L_C010526;
    L_C010526:;
    if ((R0 == 3)) goto L_C010538;
    goto L_C01052A;
    L_C01052A:;
    goto L_C0102C2;
    L_C010538:;
    FUN_0c01641c();
    goto L_C0102C2;
    L_C01052E:;
    FUN_0c0b8624();
    goto L_C0102C2;
    L_C0102FA:;
    t38 = *(int *)((R12 + 0x0));
    *(unsigned int *)((R12 + 0x0)) = (t38 + 0x1);
    if (((int)(t38 + 0x1) <= (int)0x5)) goto L_C010366;
    goto L_C010308;
    L_C010308:;
    *(unsigned int *)0xC23A264 = (*(int *)((R13 + 0x0)));
    goto L_C01030E;
    L_C01030E:;
    FUN_0c010264();
    *(unsigned int *)((R12 + 0x0)) = ((*(int *)((R12 + 0x0))) + 0x1);
    if (((*(int *)((R13 + 0x0))) != 17)) goto L_C010332;
    goto L_C01031E;
    L_C01031E:;
    t46 = (FUN_0c016200(R4)) == 0;
    if (t46) goto L_C010332;
    goto L_C010328;
    L_C010328:;
    FUN_0c0154a4();
    *(unsigned int *)((R13 + 0x0)) = 0xFFFFFFFF;
    goto L_C010332;
    L_C010332:;
    if (((*(int *)((R13 + 0x0))) != (*(int *)0xC23A264))) goto L_C010344;
    goto L_C01033C;
    L_C01033C:;
    if (((*(int *)0xC23A260) == 0)) goto L_C01030E;
    goto L_C010344;
    L_C010344:;
    if (((int)(*(int *)0xC23AAAC) < (int)0xF)) goto L_C01030E;
    goto L_C01034E;
    L_C01034E:;
    *(unsigned int *)((R12 + 0x0)) = R11;
    ADXT_Pause((*(int *)0xC5158E4), 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8));
    FUN_0c0cc3f8(0xFF10A0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    goto L_C0104AC;
    L_C010366:;
    FUN_0c0daf60(0x10, 0x10);
    if (((int)(*(int *)((R13 + 0x0))) < (int)0x10)) goto L_C0103C8;
    goto L_C010376;
    L_C010376:;
    FUN_0c0db0a0(0x7, 0xE);
    nlPrintf(0xC0F402C);
    FUN_0c0db0a0(0xA, 0x10);
    nlPrintf(0xC0F4048);
    if ((((*(int *)0xC23EB38) & 2) == 0)) goto L_C01039E;
    goto L_C010398;
    L_C010398:;
    *(unsigned int *)(((int)stk + 8)) = 0xC0F4054;
    goto L_C0103A2;
    L_C0103A2:;
    nlPrintf(*(int *)((int)stk + 8));
    nlPrintf(0xC0F405C);
    if ((((*(int *)0xC23EB38) & R10) == 0)) goto L_C0103BC;
    goto L_C0103B6;
    L_C0103B6:;
    *(unsigned int *)(((int)stk + 8)) = 0xC0F4064;
    goto L_C0103C0;
    L_C0103C0:;
    nlPrintf(*(int *)((int)stk + 8));
    goto L_C01048C;
    L_C01048C:;
    FUN_0c0daf60(0x8, 0x8);
    FUN_0c0b5d54();
    ADXT_Pause((*(int *)0xC5158E4), 0x1, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8));
    FUN_0c0cc3f8(0x10A0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    goto L_C0104AC;
    L_C0103BC:;
    *(unsigned int *)(((int)stk + 8)) = 0xC0F4068;
    goto L_C0103C0;
    L_C01039E:;
    *(unsigned int *)(((int)stk + 8)) = 0xC0F4058;
    goto L_C0103A2;
    L_C0103C8:;
    FUN_0c0db0a0(0xF, 0xE);
    t78 = *(int *)((R13 + 0x0));
    *(unsigned int *)((R13 + 0x0)) = (t78 & R10);
    if (((t78 & R10) == 0)) goto L_C01047C;
    goto L_C0103D8;
    L_C0103D8:;
    *(unsigned int *)(((int)stk + 8)) = 0xC0F406C;
    goto L_C010480;
    L_C010480:;
    nlPrintf(*(int *)((int)stk + 8));
    nlPrintf(0xC0F4074);
    goto L_C01048C;
    L_C01047C:;
    *(unsigned int *)(((int)stk + 8)) = 0xC0F4070;
    goto L_C010480;
}

int FUN_0c07b70e(int a4)
{
    int t14;
    int t15;
    int t16;
    float u19;
    int t40;
    float u59;
    float u63;
    float u67;
    int t68;
    int t71;
    int t101;
    int t102;
    float u105;
    int t109;
    int t133;
    int t137;
    int t141;
    int t7;
    int stk[7];

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        if ((*(int *)((a4 + 0x238))) != 0) {
            FUN_0c01d9c2(a4);
        } else {
            t7 = a4;
        }
        FUN_0c0e19f2(t7);
    }
    t14 = *(int *)((a4 + 0x220));
    if (t14 != 0) {
        if (t14 != 1) {
            if (t14 == 2) {
                t15 = *(int *)((a4 + 0x22C));
                t16 = *(int *)(((0x234 + a4) + 0x0));
                *(unsigned int *)((a4 + 0x22C)) = (t15 + t16);
                u19 = (*(float *)((a4 + 0x64)));
                u19 = u19 + (1.0f + 1.0f) * (FUN_0c0da410((t15 + t16)));
                *(float *)((a4 + 0x34)) = u19;
                if ((*(int *)((a4 + 0x238))) != 0) {
                    FUN_0c01d8de(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                }
                if (((*(int *)0xC23ED88) & (*(int *)((a4 + 0x21C)))) != 0) {
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x228)));
                    if ((*(int *)((a4 + 0x238))) != 0) {
                        *(unsigned int *)((a4 + 0x238)) = ((*(int *)((a4 + 0x238))) ^ 0x1);
                        FUN_0c01d9c2(a4);
                    }
                    t40 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((((t40 << 1) + t40) << 2) + (*(int *)(((int)stk + 4))))); }
                    *(unsigned int *)((a4 + 0x230)) = 0x3C;
                    *(unsigned int *)((a4 + 0x220)) = 0x1;
                }
            }
        } else {
            u59 = (*(float *)((a4 + 0x30)));
            u59 = u59 + 0.099999994f * ((*(float *)(((0x60 + a4) + 0x0))) - (*(float *)(((0x30 + a4) + 0x0))));
            *(float *)((a4 + 0x30)) = u59;
            u63 = (*(float *)((a4 + 0x34)));
            u63 = u63 + 0.099999994f * ((*(float *)(((0x64 + a4) + 0x0))) - (*(float *)(((0x34 + a4) + 0x0))));
            *(float *)((a4 + 0x34)) = u63;
            u67 = (*(float *)((a4 + 0x38)));
            u67 = u67 + 0.099999994f * ((*(float *)(((0x68 + a4) + 0x0))) - (*(float *)(((0x38 + a4) + 0x0))));
            *(float *)((a4 + 0x38)) = u67;
            t68 = *(int *)((a4 + 0x230));
            *(unsigned int *)((a4 + 0x230)) = (t68 - 1);
            if ((int)(t68 - 1) <= 0) {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & (~(*(int *)((a4 + 0x21C)))));
                t71 = *(int *)((a4 + 0x238));
                *(unsigned int *)((a4 + 0x238)) = (t71 ^ 0x1);
                if ((t71 ^ 0x1) != 0) {
                    FUN_0c01d636(a4, 0xC19723C, 0x0);
                }
                *(unsigned int *)((a4 + 0x22C)) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((a4 + 0x60)); }
                *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
            }
        }
    } else {
        t101 = *(int *)((a4 + 0x22C));
        t102 = *(int *)(((0x234 + a4) + 0x0));
        *(unsigned int *)((a4 + 0x22C)) = (t101 + t102);
        u105 = (*(float *)((a4 + 0x64)));
        u105 = u105 + 16.0f * (FUN_0c0da410((t101 + t102)));
        *(float *)((a4 + 0x34)) = u105;
        if (((*(int *)0xC23ED88) & (*(int *)((a4 + 0x21C)))) == 0) {
        } else {
            t109 = *(int *)((a4 + 0xBC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((((t109 << 1) + t109) << 2) + (*(int *)((a4 + 0x228))))); }
            *(unsigned int *)((a4 + 0x230)) = 0x3C;
            *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007D8));
    t133 = *(int *)((a4 + 0x1D8));
    *(unsigned int *)((a4 + 0x1D8)) = (t133 + 0x200);
    nlRotateAY((t133 + 0x200));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DA));
    t137 = *(int *)((a4 + 0x1DC));
    *(unsigned int *)((a4 + 0x1DC)) = (t137 - 0x480);
    nlRotateAY((t137 - 0x480));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DC));
    t141 = *(int *)((a4 + 0x1E0));
    *(unsigned int *)((a4 + 0x1E0)) = (t141 + 0x400);
    nlRotateAY((t141 + 0x400));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DE));
    return nlPopMatrix(0x1);
}

int FUN_0c024ae0(int a4)
{
    int t0;
    int t11;
    int t102;
    float u37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u43;
    float u44;
    float u45;
    float u46;
    float u70;
    float u71;
    float u72;
    float u73;
    float u74;
    int t82;
    float u86;
    float u81;
    int t103;
    int t90;
    float u61;
    int t30;
    int stk[25];

    t0 = FUN_0c03227c(a4);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x4C8)) = 0x2;
        FUN_0c02a19a(a4);
    }
    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x4E0))) << 2)))) != 4) {
        *(unsigned int *)((a4 + 0x4F8)) = 0x5;
        t103 = 0x4F8;
    } else {
        t11 = *(int *)(((((*(int *)((a4 + 0x4E0))) << 2) + 0xC246FF0) + 0x0));
        t102 = 0;
        if ((*(int *)((t11 + 0x4D0))) != 0) {
            *(unsigned int *)((a4 + 0x4F8)) = 0x5;
            t90 = 0x4F8;
            t102 = (0);
        } else {
            if ((*(int *)((a4 + 0x4E4))) == 0) {
                *(unsigned int *)(((int)stk + 20)) = (unsigned short)(FUN_0c034238(a4, t11));
                *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (((*(float *)((a4 + 0x30))) + (*(float *)((t11 + 0x30)))) * 0.5f);
                *(float *)(((((int)stk + 4) + 0x2C) + 0x4)) = 0.0f;
                *(float *)(((((int)stk + 4) + 0x2C) + 0x8)) = (((*(float *)((a4 + 0x38))) + (*(float *)((t11 + 0x38)))) * 0.5f);
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x4))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x8))));
                if ((((int)(*(int *)(((int)stk + 20))) >> 15) & 1) == 0) {
                    t30 = ((*(int *)((a4 + 0x52C))) - 16384);
                } else {
                    t30 = ((*(int *)((a4 + 0x52C))) + 0x4000);
                }
                nlRotateAY(t30);
                *(float *)(((int)stk + 36)) = 0.0f;
                *(float *)(((int)stk + 40)) = 0.0f;
                *(float *)(((int)stk + 44)) = -4.0f;
                FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
                *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
                *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 32)));
                u61 = 0.5f;
            } else {
                u37 = *(float *)((a4 + 0x30));
                u38 = *(float *)((a4 + 0x518));
                u39 = *(float *)((a4 + 0x38));
                u40 = *(float *)((a4 + 0x520));
                u41 = ((u40 - u39) * (u40 - u39));
                u41 = u41 + (u38 - u37) * (u38 - u37);
                u42 = *(float *)((t11 + 0x30));
                u43 = *(float *)((a4 + 0x518));
                u44 = *(float *)((t11 + 0x38));
                u45 = *(float *)((a4 + 0x520));
                u46 = ((u45 - u44) * (u45 - u44));
                u46 = u46 + (u43 - u42) * (u43 - u42);
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)((a4 + 0x518))), (*(float *)((a4 + 0x51C))), (*(float *)((a4 + 0x520))));
                nlRotateAY((*(int *)((a4 + 0x52C))));
                *(float *)(((int)stk + 48)) = 0.0f;
                *(float *)(((int)stk + 52)) = 0.0f;
                *(float *)(((int)stk + 56)) = ((_builtin_sqrtf(u41) + _builtin_sqrtf(u46)) * 0.5f);
                FUN_0c0db470((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20));
                *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 36)));
                *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 40)));
                *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 44)));
                u61 = ((_builtin_sqrtf(u41) + _builtin_sqrtf(u46)) * 0.5f);
            }
            nlPopMatrix(0x1);
            FUN_0c0a68ec((((int)stk + 4) + 0x8), ((*(float *)(((int)stk + 8))) - (*(float *)((a4 + 0x30)))), ((*(float *)(((int)stk + 4))) - (*(float *)((a4 + 0x38)))));
            u70 = *(float *)(((int)stk + 4));
            u71 = *(float *)((a4 + 0x30));
            u72 = *(float *)(((int)stk + 8));
            u73 = *(float *)((a4 + 0x38));
            u74 = ((u70 - u73) * (u70 - u73));
            u74 = u74 + (u72 - u71) * (u72 - u71);
            t82 = 0xC024D78;
            u86 = _builtin_sqrtf(u74);
            if (_builtin_sqrtf(u74) > 0.299999982f) {
                *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x38);
                FUN_0c0a6800((*(int *)(((int)stk + 12))), (((int)stk + 4) + 0x38), 0.0f, 0.0f, (_builtin_sqrtf(u74) * 0.049999997f));
                *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0x0))));
                u81 = *(float *)(((((int)stk + 4) + 0x40) + 0x0));
                *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + u81);
                t82 = 0x50;
                u86 = u81;
            }
            t90 = t82;
            _builtin_sqrtf(u74);
            t102 = ((_builtin_sqrtf(u74) > 0.299999982f));
        }
        t103 = t90;
    }
    return t103;
}
