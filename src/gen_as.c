/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ce8a(int, float);
int FUN_0c01d2c2(int, int);
int FUN_0c01f6fc(int, int, float, float, float);
int FUN_0c02f0e4(int, int);
int FUN_0c040266(int);
int FUN_0c041f2a(int);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c0846a6(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c08476e(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int nlGetMatrix(int);
int FUN_0c0db840(int);
int nlInvertMatrix(int);
int FUN_0c0dbda0(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
float nlLength(int, int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector3op(int, int, int);
int FUN_0c0dd0a0(int, int);
int FUN_0c0de000(float);
int FUN_0c0e07b4(int, float, float, float, float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e2d6c(int, float, float, float, float);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
extern float _builtin_sqrtf(float);
int FUN_0c0414a6(int a4, int a5, int a6);
int FUN_0c07d17c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c08b8e0(int a4, int a5);
int FUN_0c0bb980(int a4);
int FUN_0c0745a0(void);
int FUN_0c067964(int a4, int a5, int a6, int a7);
int FUN_0c01cb94(int a4, int a5);
int FUN_0c02f174(int a4);
int FUN_0c0376f4(int a4);

int FUN_0c0414a6(int a4, int a5, int a6)
{
    int t0;
    int t9;
    int t18;
    int t23;
    int t27;
    int t31;
    int t53;
    int stk[12];

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
    float F2;
    float F3;
    float F4;
    float F11;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C0414A6:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = R6;
    t0 = *(int *)((R4 + 0x4EC));
    R0 = (t0);
    R14 = (R4);
    if ((t0 == 0)) goto L_C041514;
    goto L_C0414BC;
    L_C0414BC:;
    if ((R0 == 1)) goto L_C041524;
    goto L_C0414C0;
    L_C0414C0:;
    if ((R0 != 2)) goto L_C0414C8;
    goto L_C0414C4;
    L_C0414C4:;
    goto L_C04160A;
    L_C04160A:;
    R0 = (0x3B8);
    if (((*(int *)((R14 + 0x3B8))) == 0)) goto L_C04169A;
    goto L_C041612;
    L_C041612:;
    t9 = *(int *)((R14 + R0));
    *(unsigned int *)((R14 + R0)) = (t9 - 1);
    if (((t9 - 1) == 0)) goto L_C041688;
    goto L_C04161C;
    L_C04161C:;
    *(unsigned short *)((R14 + 0x6C)) = ((*(short *)((R14 + 0x6C))) + (*(short *)(((0x23C + R14) + 0x0))));
    *(unsigned short *)((R14 + 0x6E)) = ((*(short *)((R14 + 0x6E))) + (*(short *)(((0x23E + R14) + 0x0))));
    *(unsigned short *)((R14 + 0x70)) = ((*(short *)((R14 + 0x70))) + (*(short *)(((0x240 + R14) + 0x0))));
    goto L_C04169A;
    L_C04169A:;
    t18 = (FUN_0c040266(R14)) == 0;
    if (t18) goto L_C0416B2;
    goto L_C0416A4;
    L_C0416A4:;
    *(unsigned int *)((R14 + 0x4EC)) = ((*(int *)((R14 + 0x4EC))) + 0x1);
    goto L_C0416B2;
    L_C0416B2:;
    R0 = (0x4EC);
    if (((int)(*(int *)((R14 + 0x4EC))) > (int)0x2)) goto L_C0416F6;
    goto L_C0416BC;
    L_C0416BC:;
    t23 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (t23 - 1);
    R0 = (0x3AC);
    if (((int)(t23 - 1) > 0)) goto L_C0416F6;
    goto L_C0416C8;
    L_C0416C8:;
    t27 = ((FUN_0c0da2e0()) & 1) == 0;
    if (t27) goto L_C0416D8;
    goto L_C0416D2;
    L_C0416D2:;
    R4 = (0x1BA9);
    goto L_C0416DA;
    L_C0416DA:;
    FUN_0c0cc3f8(R4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0da2e0();
    t31 = FUN_0c0e5f1c();
    *(unsigned int *)(((0x3AC + R14) + 0x0)) = (t31 + 0x3C);
    R0 = ((t31 + 0x3C));
    goto L_C0416F6;
    L_C0416F6:;
    return R0;
    L_C0416D8:;
    R4 = (0x11BA9);
    goto L_C0416DA;
    L_C041688:;
    *(unsigned short *)((R14 + 0x6C)) = 0x0;
    *(unsigned short *)((R14 + 0x6E)) = (*(short *)((R14 + 0x52C)));
    *(unsigned short *)((R14 + 0x70)) = 0x0;
    R4 = (0x0);
    goto L_C04169A;
    L_C0414C8:;
    if ((R0 != 3)) goto L_C0414D0;
    goto L_C0414CC;
    L_C0414CC:;
    goto L_C0416AE;
    L_C0416AE:;
    FUN_0c041f2a(R14);
    goto L_C0416B2;
    L_C0414D0:;
    goto L_C0416B2;
    L_C041524:;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)0xC247BF4));
    nlRotateAY((*(int *)(((int)stk + 8))));
    FUN_0c0dcca0((*(int *)(((int)stk + 4))));
    FUN_0c0db840((R14 + 0x30));
    nlRotateAY(0x8000);
    FUN_0c0a7c66((((int)stk + 4) + 0x14), ((((int)stk + 4) + 0x14) + 0x4), ((((int)stk + 4) + 0x14) + 0x8));
    R13 = ((((int)stk + 4) + 0x14));
    if ((!(_builtin_fabsf((float)(unsigned short)(*(int *)(((((int)stk + 4) + 0x14) + 0x0)))) > 16384.0f))) goto L_C041590;
    goto L_C041572;
    L_C041572:;
    *(unsigned short *)((R14 + 0x6C)) = ((*(int *)((R13 + 0x0))) - 32768);
    *(unsigned short *)((R14 + 0x6E)) = (0xFFFF8000 - (*(int *)((R13 + 0x4))));
    t53 = *(int *)((R13 + 0x8));
    *(unsigned short *)((R14 + 0x70)) = (0xFFFF8000 - t53);
    R4 = ((0xFFFF8000 - t53));
    goto L_C0415A4;
    L_C0415A4:;
    nlPopMatrix(0x1);
    FUN_0c041f2a(R14);
    if (((*(int *)((R14 + 0x4E0))) == 1)) goto L_C0415BA;
    goto L_C0415B6;
    L_C0415B6:;
    goto L_C0416B2;
    L_C0415BA:;
    *(unsigned int *)((R14 + 0x2D4)) = 0x3;
    *(unsigned int *)((R14 + 0x3B8)) = 0x8;
    *(unsigned short *)((R14 + 0x23C)) = ((((short)(-(*(short *)((R14 + 0x6C)))) >> 1) >> 1) >> 1);
    *(unsigned short *)((R14 + 0x23E)) = ((((short)((*(int *)((R14 + 0x52C))) - (*(short *)((R14 + 0x6E)))) >> 1) >> 1) >> 1);
    *(unsigned short *)((R14 + 0x240)) = ((((short)(-(*(short *)((R14 + 0x70)))) >> 1) >> 1) >> 1);
    *(float *)((R14 + 0x26C)) = 0.0333333313f;
    goto L_C0416A4;
    L_C041590:;
    *(unsigned short *)((R14 + 0x6C)) = (*(int *)((R13 + 0x0)));
    *(unsigned short *)((R14 + 0x6E)) = (*(int *)((R13 + 0x4)));
    *(unsigned short *)((R14 + 0x70)) = (-(*(int *)((R13 + 0x8))));
    goto L_C0415A4;
    L_C041514:;
    *(unsigned int *)((R14 + 0x52C)) = (*(short *)((R14 + 0x6E)));
    *(unsigned int *)((R14 + 0x4EC)) = ((*(int *)((R14 + 0x4EC))) + 0x1);
    goto L_C041524;
}

int FUN_0c07d17c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    int t4;
    int t7;
    int t9;
    int t10;
    int t15;
    int t26;
    int t27;
    int t36;
    int t48;
    int t49;
    int stk[32];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = ((int (*)(int, int, int, int))(_quick_odd_mvn))(a4, a5, a6, a7);
    t4 = FUN_0c0e19aa(0xC07CE44, 0xAC, (*(int *)(((((*(int *)(((int)stk + 16))) << 2) + ((*(int *)(((int)stk + 4))) + 0x30)) + 0x0))));
    FUN_0c0e19d0(t4);
    *(unsigned short *)((t4 + 0x72)) = ((short)(a9 >> 0));
    *(float *)((t4 + 0x74)) = 3.21943283f;
    *(volatile int *)(((int)stk + 8));
    t7 = ((int (*)(void))(_quick_odd_mvn))();
    *(volatile int *)(((int)stk + 12));
    t9 = ((int (*)(void))(_quick_odd_mvn))();
    t10 = ((int (*)(void))(_quick_odd_mvn))();
    nlSubVector3op((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4C), (((int)stk + 4) + 0x40));
    nlAddVector3op((t4 + 0x78), (((int)stk + 4) + 0x4C), (((int)stk + 4) + 0x40));
    nlAddVector((t4 + 0x78), (((int)stk + 4) + 0x34));
    FUN_0c0dce80((t4 + 0x78), (t4 + 0x78), 0.333333313f);
    t15 = ((int (*)(void))(_quick_odd_mvn))();
    FUN_0c0dce80((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x28), 10.7314396f);
    nlAddVector((t4 + 0x78), (((int)stk + 4) + 0x10));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((t4 + 0x78));
    nlRotateV((((int)stk + 4) + 0x58), (((int)stk + 4) + 0x28));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    FUN_0c0db4d0((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x28));
    t26 = FUN_0c0d9dc0((*(float *)(((int)stk + 48))), (*(float *)(((int)stk + 44))));
    t27 = t26;
    if (a10 != 0) {
        t27 = (t26 + 0x8000);
    }
    nlPopMatrix(0x1);
    nlRotateAZ(t27);
    nlGetMatrix((t4 + 0x30));
    nlPopMatrix(0x1);
    *(unsigned int *)((t4 + 0xA4)) = (0x176 + (*(int *)(((int)stk + 4))));
    if (a11 == 0) {
        *(unsigned short *)(((0xA2 + t4) + 0x0)) = ((FUN_0c0da2e0()) & 0x3F);
    } else {
        t36 = 0x8;
        for (;;) {
            t36 = (t36 - 0x1);
            *(unsigned short *)(((0xA2 + t4) + 0x0)) = ((*(short *)(((0xA2 + t4) + 0x0))) + ((FUN_0c0da2e0()) & 0xF));
            if (t36 == 0) {
                break;
            }
        }
        *(unsigned short *)((t4 + 0xA2)) = ((*(short *)((t4 + 0xA2))) + 0x3F);
    }
    *(unsigned short *)((t4 + 0xA2)) = ((*(short *)((t4 + 0xA2))) + 0xF0);
    FUN_0c0dd0a0((t4 + 0x78), (((int)stk + 4) + 0x28));
    *(unsigned short *)((t4 + 0xA8)) = (int)((((*(float *)(((int)stk + 48))) + 1.0f) / (1.0f + 1.0f)) * 240.0f);
    t48 = FUN_0c0da2e0();
    t49 = *(short *)(((0xA8 + t4) + 0x0));
    *(unsigned short *)(((0xA8 + t4) + 0x0)) = (t49 + ((t48 & 0x1F) - 8));
    if ((int)(short)(t49 + ((t48 & 0x1F) - 8)) > (int)0xF0) {
        *(unsigned short *)((t4 + 0xA8)) = 0xF0;
    }
    *(unsigned short *)((t4 + 0xA8)) = ((short)(*(short *)((t4 + 0xA8))) * (short)0xFFFFFFFF);
    return 0xA8;
}

int FUN_0c08b8e0(int a4, int a5)
{
    int t0;
    int t1;
    float t5;
    int t18;
    float u19;
    int t21;
    float u25;
    float u28;
    float u42;
    int stk[31];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    t0 = FUN_0c0da2e0();
    t1 = FUN_0c0e5dc0();
    nlSubVector3op((((int)stk + 8) + 0x38), (*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 16))));
    t5 = FUN_0c0dcea0((((int)stk + 8) + 0x38));
    FUN_0c0a78fc(((int)stk + 8), (((int)stk + 8) + 0x4), (*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 68))), (*(float *)(((int)stk + 72))));
    FUN_0c0dc5a0();
    *(float *)(((int)stk + 28)) = (1.0f / (float)((0xF & t0) + 0x5));
    *(float *)(((int)stk + 24)) = (1.0f / (float)((0xF & t0) + 0x5));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    FUN_0c0dcca0((*(int *)(((int)stk + 16))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    nlRotateAZ((*(int *)(((int)stk + 12))));
    FUN_0c0db840((((int)stk + 8) + 0x2C));
    *(unsigned int *)(((int)stk + 16)) = (((0xF & t0) + 0x5) - 1);
    *(float *)(((int)stk + 36)) = (0.19156526f / (float)t1);
    if ((int)((0xF & t0) + 0x5) > 0) {
        t18 = 0x0;
        u19 = t5;
        for (;;) {
            t21 = FUN_0c0e19aa(0xC08BB20, 0x64, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t21);
            _quick_odd_mvn();
            if ((int)t18 < (int)(*(int *)(((int)stk + 16)))) {
                u25 = *(float *)(((int)stk + 24));
                *(float *)(((int)stk + 4)) = (u19 * u25);
                u28 = (((u19 * u25)) * (float)(((FUN_0c0da2e0()) & 0x7FFF) + 0x2000));
                u19 = (u19 - (u28 * 3.05185094e-05f));
                FUN_0c0dcc70(0.0f, (u28 * 3.05185094e-05f), 0.0f);
                *(float *)(((int)stk + 52)) = (((((u28 * 3.05185094e-05f)) * (float)((FUN_0c0da2e0()) - 16383))) * 6.10370189e-05f);
                *(float *)(((int)stk + 56)) = 0.0f;
                *(float *)(((int)stk + 60)) = (((((u28 * 3.05185094e-05f)) * (float)((FUN_0c0da2e0()) - 16383))) * 6.10370189e-05f);
                FUN_0c0db470((((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x2C));
                nlSubVector3op((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x2C), (t21 + 0x30));
                u42 = (u28 * 3.05185094e-05f);
            } else {
                nlSubVector3op((((int)stk + 8) + 0x20), (*(int *)(((int)stk + 32))), (t21 + 0x30));
                u42 = (FUN_0c0dcea0((((int)stk + 8) + 0x20)));
            }
            FUN_0c0a78fc(((int)stk + 8), (((int)stk + 8) + 0x4), (*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 44))), (*(float *)(((int)stk + 48))));
            t18 = (t18 + 0x1);
            *(unsigned short *)((t21 + 0x48)) = (*(int *)(((int)stk + 8)));
            *(unsigned short *)((t21 + 0x4C)) = (*(int *)(((int)stk + 12)));
            *(unsigned int *)((t21 + 0x58)) = (*(int *)(((int)stk + 20)));
            *(float *)((t21 + 0x44)) = ((*(float *)(((int)stk + 36))) * u42);
            *(unsigned int *)((t21 + 0x60)) = t1;
            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + (*(float *)(((int)stk + 28))));
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + t1);
            if ((int)t18 < (int)((0xF & t0) + 0x5)) continue;
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0bb980(int a4)
{
    int t0;
    int t79;
    float u2;
    float u5;
    float u6;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u16;
    float u40;
    float u45;
    int t56;
    float u65;
    int stk[45];

    t0 = *(int *)((a4 + 0x388));
    t79 = t0;
    if ((t0 & 2) == 0) {
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x5C);
        u2 = *(float *)0xC26085C;
        *(float *)(((((int)stk + 4) + 0x5C) + 0x0)) = ((((*(float *)0xC260850) - u2) / (1.0f + 1.0f)) + u2);
        u5 = *(float *)0xC260860;
        *(float *)(((((int)stk + 4) + 0x5C) + 0x4)) = ((((*(float *)0xC260854) - u5) / (1.0f + 1.0f)) + u5);
        u6 = *(float *)0xC260864;
        *(float *)((((((int)stk + 4) + 0x5C) + 0x8) + 0x0)) = ((((*(float *)0xC260858) - u6) / (1.0f + 1.0f)) + u6);
        u9 = *(float *)(((*(int *)(((int)stk + 16))) + 0x0));
        u10 = *(float *)0xC260844;
        *(float *)(((int)stk + 4)) = (u9 - u10);
        u11 = *(float *)((((((int)stk + 4) + 0x5C) + 0x8) + 0x0));
        u12 = *(float *)0xC26084C;
        u13 = ((u11 - u12) * (u11 - u12));
        u13 = u13 + (u9 - u10) * (u9 - u10);
        u14 = (_builtin_sqrtf(u13) * 0.0799999982f);
        if (0.5f > (_builtin_sqrtf(u13) * 0.0799999982f)) {
            u14 = 0.5f;
        }
        u16 = u14;
        if (u14 > 4.0f) {
            u16 = 4.0f;
        }
        FUN_0c0db840((0x80 + ((int)stk + 4)));
        FUN_0c0a7c66((((int)stk + 4) + 0x50), ((((int)stk + 4) + 0x50) + 0x4), ((((int)stk + 4) + 0x50) + 0x8));
        FUN_0c01f6fc((((int)stk + 4) + 0x74), (((int)stk + 4) + 0x68), (*(float *)(((int)stk + 132))), (*(float *)(((int)stk + 136))), (*(float *)(((int)stk + 140))));
        if ((*(short *)((((((*(int *)0xC23ED50) << 2) << 2) << 1) + 0xC207A8C))) == 0) {
            *(float *)(((((int)stk + 4) + 0x68) + 0x0)) = 0.0f;
            *(float *)(((((int)stk + 4) + 0x68) + 0x4)) = 1.0f;
            *(float *)(((((int)stk + 4) + 0x68) + 0x8)) = 0.0f;
        }
        if (!((*(float *)(((((int)stk + 4) + 0x68) + 0x4))) > 0.449999988f)) {
        } else {
            *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x74) + 0x4);
            *(float *)((((((int)stk + 4) + 0x74) + 0x4) + 0x0)) = (*(float *)((a4 + 0x390)));
            *(float *)(((((int)stk + 4) + 0x74) + 0x0)) = (*(float *)(((int)stk + 132)));
            *(float *)(((((int)stk + 4) + 0x74) + 0x8)) = (*(float *)(((int)stk + 140)));
            FUN_0c0a78fc((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (*(float *)(((((int)stk + 4) + 0x68) + 0x0))), (*(float *)(((((int)stk + 4) + 0x68) + 0x4))), (*(float *)(((((int)stk + 4) + 0x68) + 0x8))));
            nlUnitMatrix();
            u40 = (*(float *)0xC26084C);
            u40 = u40 + 0.5f * (u11 - u12);
            u45 = (*(float *)0xC260844);
            u45 = u45 + 0.5f * (*(float *)(((int)stk + 4)));
            FUN_0c0dcc70(u45, ((*(float *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0.299999982f), u40);
            nlMultiMatrixRevOrder(((*(int *)0xC247CAC) + 0x2AC));
            FUN_0c0de000((*(float *)((a4 + 0x280))));
            nlRotateAX((*(int *)(((int)stk + 8))));
            nlRotateAZ((*(int *)(((int)stk + 12))));
            t56 = FUN_0c0d9dc0((*(float *)(((int)stk + 4))), (u11 - u12));
            nlRotateAY((0x4000 + (short)t56));
            nlScale(((((*(float *)((a4 + 0x274))) * u16)) * 1.0f), ((((*(float *)((a4 + 0x278))) * 1.0f)) * 0.5f), ((((*(float *)((a4 + 0x27C))) * 1.0f)) * 0.5f));
            u65 = u16;
            if (0.5f > u16) {
                u65 = 0.5f;
            }
            FUN_0c0de000(((*(float *)((a4 + 0x280))) * u65));
            FUN_0c0c465c(0x270);
        }
        t79 = (nlPopMatrix(0x1));
    }
    return t79;
}

int FUN_0c0745a0(void)
{
    int t1;
    float t3;
    float u4;
    int t9;
    float u18;
    int t27;
    int t28;
    float u42;
    int t51;
    int t52;
    int t65;
    int t2;
    float u80;
    int stk[27];

    *(unsigned int *)(((int)stk + 12)) = (*(int *)0xC247CAC);
    t1 = *(int *)0xC23A258;
    if (((0x1 & t1) == 0) && (t2 = *(int *)0xC200600, (t2 & 64) == 0)) {
        return t2;
    }
    *(unsigned int *)(((int)stk + 16)) = 0xC0FE408;
    t3 = FUN_0c0da410((t1 * 0x444));
    u4 = 0.0f;
    if (!(1.0f > (t3 * 10.0f))) {
        u4 = 1.0f;
    }
    if (u4 == 0.0f) {
        u80 = (t3 * 10.0f);
    } else {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        *(unsigned int *)(((int)stk + 32)) = 0xC0FE4FC;
        *(unsigned int *)(((int)stk + 4)) = 0xC0FE504;
        *(unsigned int *)(((int)stk + 24)) = 0xC0FE50C;
        *(unsigned int *)(((int)stk + 36)) = 0xC0FE4F8;
        *(unsigned int *)(((int)stk + 8)) = 0xC0FE500;
        *(unsigned int *)(((int)stk + 28)) = 0xC0FE508;
        *(unsigned int *)(((int)stk + 44)) = 0xC0FE4F0;
        *(unsigned int *)(((int)stk + 40)) = 0xC0FE4E8;
        *(unsigned int *)(((int)stk + 60)) = 0xC0FE4E0;
        *(unsigned int *)(((int)stk + 48)) = 0xC0FE4F4;
        *(unsigned int *)(((int)stk + 52)) = 0xC0FE4EC;
        *(unsigned int *)(((int)stk + 56)) = 0xC0FE4E4;
        for (;;) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0((*(int *)(((int)stk + 16))));
            t9 = *(int *)(((int)stk + 12));
            nlRotateAY((*(short *)((t9 + 0x3CE))));
            nlRotateAX((*(short *)((t9 + 0x3CC))));
            nlRotateAZ((*(short *)((t9 + 0x3D0))));
            nlPushMatrix(0x0);
            u18 = *(float *)(((*(int *)(((int)stk + 8))) + 0x0));
            nlScale(u18, u18, 1.0f);
            t27 = (FUN_0c0848bc(((*(float *)(((*(int *)(((int)stk + 60))) + 0x0))) * u4), ((*(float *)(((*(int *)(((int)stk + 40))) + 0x0))) * u4), ((*(float *)(((*(int *)(((int)stk + 44))) + 0x0))) * u4)));
            t28 = 0x0;
            for (;;) {
                if ((int)t28 >= (int)(*(int *)(((*(int *)(((int)stk + 36))) + 0x0)))) {
                    break;
                }
                t27 = (FUN_0c0de000((*(float *)(((*(int *)(((int)stk + 8))) + 0x0)))));
                if (((*(int *)0xC200600) & 0x80) != 0) {
                    t27 = (*(int *)(((int)stk + 28)));
                    t27 = (FUN_0c0c475c(0x291, (*(float *)((t27 + 0x0)))));
                } else {
                    t27 = (FUN_0c0c465c(0x291));
                }
                t28 = (t28 + 0x1);
            }
            nlPopMatrix(0x1);
            u42 = *(float *)(((*(int *)(((int)stk + 4))) + 0x0));
            nlScale(u42, u42, 1.0f);
            t51 = (FUN_0c0848bc(((*(float *)(((*(int *)(((int)stk + 56))) + 0x0))) * u4), ((*(float *)(((*(int *)(((int)stk + 52))) + 0x0))) * u4), ((*(float *)(((*(int *)(((int)stk + 48))) + 0x0))) * u4)));
            t52 = 0x0;
            for (;;) {
                if ((int)t52 >= (int)(*(int *)(((*(int *)(((int)stk + 32))) + 0x0)))) {
                    break;
                }
                t51 = (FUN_0c0de000((*(float *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                if (((*(int *)0xC200600) & 0x80) != 0) {
                    t51 = (*(int *)(((int)stk + 24)));
                    t51 = (FUN_0c0c475c(0x3DA, (*(float *)((t51 + 0x0)))));
                } else {
                    t51 = (FUN_0c0c465c(0x3DA));
                }
                t52 = (t52 + 0x1);
            }
            nlPopMatrix(0x1);
            t65 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 20)) = (t65 + 0x1);
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x18);
            if ((unsigned int)(t65 + 0x1) < (unsigned int)0x4) continue;
            break;
        }
    }
    return FUN_0c0849da(u80);
}

int FUN_0c067964(int a4, int a5, int a6, int a7)
{
    int t1;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t28;
    int t95;
    int t59;
    float u65;
    float u66;
    float u67;
    float u70;
    float u71;
    float u80;
    float u81;
    int t16;
    int t17;
    int t19;
    int t5;
    int t7;
    int t11;
    int t13;
    int t26;
    int t27;
    int t29;
    int t31;
    int t97;
    int t98;
    int t100;
    int t101;
    int t43;
    int t44;
    int t47;
    int t48;
    int t50;
    int t51;
    int t91;
    int t92;
    int t94;
    int t85;
    int t86;
    int t88;
    int t89;
    int t72;

    t1 = *(int *)0xC23ED5C;
    if ((*(int *)((a4 + 0x30))) != 3) {
        if ((t1 & 0x6) != 0) {
            FUN_0c0e19f2(t1, a5, a6, a7);
        } else {
            t5 = 0x6;
            t7 = t1;
        }
        t16 = t5;
        t19 = t7;
    } else {
        if ((t1 & 0x20) == 0) {
            t11 = 0x20;
            t13 = t1;
        } else {
            FUN_0c0e19f2(t1, a5, a6, a7);
        }
        t17 = t11;
        t19 = t13;
    }
    t21 = 0xC0679EC;
    t22 = t16;
    t23 = t17;
    t24 = t19;
    t25 = a5;
    t28 = 0x4;
    for (;;) {
        if ((int)t28 < (int)0x8) {
            t25 = 0xC246FF0;
            t24 = t28;
            t25 = (t25 + 0x40);
            t27 = 0x1;
            t24 = (t24 << 2);
            t25 = (t25 + t24);
            t25 = (*(int *)((t25 + 0x0)));
            t21 = t25;
            t27 = (((int)t28 >= 0) ? (t27 << (t28 & 31)) : ((-(int)t28 & 31) ? ((int)t27 >> (-(int)t28 & 31)) : ((int)t27 >> 31)));
            if ((t21 != 4) && (t31 = (t21 == 4), t21 = t25, t21 != 3)) {
                t21 = 0x68;
                t23 = (*(int *)((a4 + t21)));
                if (((t23 & t27) != 0) && (t22 = 0xC246FF0, t22 = (t22 + 0x40), t24 = (t24 + t22), t43 = *(int *)((t24 + 0x0)), t44 = ((t23 & t27) == 0), t23 = t43, (int)t23 < (int)0x2)) {
                    t23 = (*(int *)((a4 + t21)));
                    t27 = (~t27);
                    t22 = 0xC0845F8;
                    t25 = 0x0;
                    t23 = (t23 & t27);
                    *(unsigned int *)((a4 + t21)) = t23;
                    t24 = t28;
                    t21 = (FUN_0c0845f8(t24, t25));
                } else {
                    t47 = t22;
                    t48 = t23;
                    t50 = t24;
                    t51 = t25;
                }
                t97 = t47;
                t98 = t48;
                t100 = t50;
                t101 = t51;
            } else {
                t26 = 0xC246FF0;
                t26 = (t26 + t24);
                t21 = 0xC8;
                t26 = (*(int *)((t26 + 0x0)));
                t21 = (*(int *)((t26 + t21)));
                t95 = t25;
                if ((t21 & 64) != 0) {
                    t91 = t22;
                    t92 = t23;
                    t94 = t24;
                } else {
                    t21 = 0x68;
                    if (((*(int *)((a4 + t21))) & t27) != 0) {
                        t85 = t22;
                        t86 = t23;
                        t88 = t24;
                        t89 = t25;
                    } else {
                        t24 = 0xC067B98;
                        t25 = 0xB4;
                        t21 = (FUN_0c0e1830(t24, t25));
                        t23 = 0xC0E19D0;
                        t29 = t21;
                        t24 = t21;
                        t21 = (FUN_0c0e19d0(t24));
                        t21 = 0x8C;
                        t23 = 0xC0845E8;
                        *(unsigned int *)((t29 + t21)) = t26;
                        t21 = (t21 + 0x30);
                        t59 = *(int *)((t26 + t21));
                        t21 = (t21 - 52);
                        *(unsigned int *)((t29 + t21)) = t59;
                        t21 = 0x68;
                        *(unsigned int *)((a4 + t21)) = ((*(int *)((a4 + t21))) | t27);
                        t24 = 0x1;
                        t21 = (FUN_0c0845e8(t24));
                        t21 = (FUN_0c08476e(0.5f, 0.5f, 0.5f));
                        t23 = 0xC0845F0;
                        t24 = 0x1;
                        t21 = (FUN_0c0845f0(t24));
                        t21 = (*(int *)0xC23ED50);
                        if (t21 != 21) {
                            if (t21 != 82) {
                            } else {
                                t21 = 0x98;
                                *(unsigned int *)((t29 + t21)) = 0x1;
                                t21 = 0xC067B28;
                                u65 = *(float *)((t21 + 0x0));
                                t21 = 0x90;
                                *(float *)((t29 + t21)) = u65;
                                t21 = 0x48;
                                *(float *)((t29 + t21)) = 1.0f;
                                t21 = 0xC067B2C;
                                u66 = *(float *)((t21 + 0x0));
                                t21 = 0x4C;
                                *(float *)((t29 + t21)) = u66;
                                t21 = 0xC067B30;
                                u67 = *(float *)((t21 + 0x0));
                                t21 = 0x50;
                                *(float *)((t29 + t21)) = u67;
                            }
                        } else {
                            t21 = 0x98;
                            t23 = 0x0;
                            *(unsigned int *)((t29 + t21)) = t23;
                            t21 = (t21 - 8);
                            *(float *)((t29 + t21)) = 40.0f;
                            t21 = 0x48;
                            *(float *)((t29 + t21)) = 0.099999994f;
                            t21 = 0xC067B20;
                            u70 = *(float *)((t21 + 0x0));
                            t21 = 0x4C;
                            *(float *)((t29 + t21)) = u70;
                            t21 = 0xC067B24;
                            u71 = *(float *)((t21 + 0x0));
                            t21 = 0x50;
                            *(float *)((t29 + t21)) = u71;
                            t72 = t23;
                        }
                        t23 = t72;
                        t25 = 0x3;
                        t24 = t28;
                        t21 = (FUN_0c084610(t24, t25));
                        t21 = 0x90;
                        t24 = t28;
                        t21 = (FUN_0c0846be(t24, (*(float *)((t29 + t21)))));
                        t21 = 0xC067B3C;
                        t24 = t28;
                        t21 = (FUN_0c0846de(t24, 0.0f, 1.0f, (*(float *)((t21 + 0x0))), 0.099999994f));
                        t21 = 0x50;
                        u80 = *(float *)((t29 + t21));
                        t21 = 0x4C;
                        u81 = *(float *)((t29 + t21));
                        t21 = 0x48;
                        t24 = t28;
                        t21 = (FUN_0c0846a6(t24, (*(float *)((t29 + t21))), u81, u80));
                        t23 = 0xC0845F8;
                        t25 = 0x1;
                        t24 = t28;
                        t21 = (FUN_0c0845f8(t24, t25));
                    }
                    t91 = t85;
                    t92 = t86;
                    t94 = t88;
                    t95 = t89;
                }
                t97 = t91;
                t98 = t92;
                t100 = t94;
                t101 = t95;
            }
            t22 = t97;
            t28 = (t28 + 0x1);
            t23 = t98;
            t24 = t100;
            t25 = t101;
            continue;
        }
        break;
    }
    return t21;
}

int FUN_0c01cb94(int a4, int a5)
{
    int t0;
    int t2;
    int t91;
    float t4;
    int t81;
    int t80;
    int t47;
    int t51;
    int t86;
    int t54;
    int t62;
    int t63;
    int stk[12];

    t0 = *(int *)((a4 + 0x88));
    t2 = FUN_0c01ce8a((a4 + 0x30), (*(float *)((t0 + 0xC))));
    t91 = 0x0;
    if (t2 != 0) {
        nlPushMatrix(0x0);
        t4 = nlLength((a5 + 0x30), (a5 + 0x3C));
        if (t4 > (*(float *)((a5 + 0x1E4)))) {
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            nlRotateAY((*(short *)((a4 + 0x6E))));
            nlRotateAX((*(short *)((a4 + 0x6C))));
            nlRotateAZ((*(short *)((a4 + 0x70))));
            nlInvertMatrix(0x0);
            FUN_0c0db470((a5 + 0x30), ((int)stk + 4));
            FUN_0c0db470((a5 + 0x3C), (((int)stk + 4) + 0xC));
            t47 = (FUN_0c0e07b4((*(int *)((t0 + 0x90))), (*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24)))));
        } else {
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            nlRotateAY((*(short *)((a4 + 0x6E))));
            nlRotateAX((*(short *)((a4 + 0x6C))));
            nlRotateAZ((*(short *)((a4 + 0x70))));
            nlInvertMatrix(0x0);
            FUN_0c0db470((a5 + 0x30), ((int)stk + 4));
            t47 = (FUN_0c0e2d6c((*(int *)((t0 + 0x90))), (*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)((a5 + 0x1E4)))));
        }
        nlPopMatrix(0x1);
        if ((((*(int *)0xC23A1A8) & 0x101) != 0) && (t51 = *(int *)((a5 + 0x200)), t51 == -1)) {
            *(unsigned int *)((a5 + 0x1BC)) = 0xFFFFFFFF;
            t86 = 0x0;
        } else {
            t81 = 0x0;
            if ((t47 != 0) && (t54 = *(int *)((a5 + 0x200)), t54 != 0)) {
                *(unsigned int *)((a4 + 0x1C0)) = (*(int *)((a5 + 0x200)));
                *(unsigned int *)((a4 + 0x1BC)) = (*(int *)((a5 + 0x1F8)));
                *(unsigned int *)((a4 + 0x1D0)) = (*(int *)((a5 + 0x1FC)));
                *(unsigned int *)((a4 + 0x1C4)) = (*(int *)((a5 + 0xBC)));
                *(unsigned int *)((a4 + 0x208)) = (*(int *)((a5 + 0x1E8)));
                *(unsigned int *)((a4 + 0x1CC)) = (*(int *)((a5 + 0x1F4)));
                if ((((*(int *)0xC23A1A8) & 0x100) != 0) && ((t62 = *(int *)((a5 + 0xBC)), (int)t62 < (int)0x2) && (((int)t62 < (int)0x2) && (t63 = *(int *)0xC23A1A8, (0x100 & t63) != 0)))) {
                    FUN_0c01d2c2(a4, a5);
                }
                *(float *)((a4 + 0x1D4)) = (nlLength((a5 + 0x30), (a5 + 0x3C)));
                FUN_0c0a7714((0x1D8 + a4), (0x1DC + a4), ((*(float *)((a5 + 0x30))) - (*(float *)((a5 + 0x3C)))), ((*(float *)((a5 + 0x34))) - (*(float *)((a5 + 0x40)))), ((*(float *)((a5 + 0x38))) - (*(float *)((a5 + 0x44)))));
                *(unsigned int *)((a5 + 0x1C4)) = (*(int *)((a4 + 0xBC)));
                *(unsigned int *)((a5 + 0x208)) = 0x0;
                *(unsigned int *)((a5 + 0xD8)) = 0x4;
                t80 = *(int *)(((0x1C4 + a5) + 0x0));
                *(unsigned int *)((a5 + 0x1EC)) = ((*(int *)((a5 + 0x1EC))) | (((int)t80 >= 0) ? (0x1 << (t80 & 31)) : ((-(int)t80 & 31) ? ((int)0x1 >> (-(int)t80 & 31)) : ((int)0x1 >> 31))));
                t81 = 0xFFFFFFFF;
            }
            t86 = t81;
        }
        t91 = t86;
    }
    return t91;
}

int FUN_0c02f174(int a4)
{
    int t0;
    int t98;
    int t11;
    int t88;
    int t79;
    int t25;
    int t26;
    int t29;
    int t32;
    float u35;
    float t36;
    int t39;
    int t70;
    float t48;
    float t49;
    int t67;
    int t51;
    int t57;
    int t53;
    int t55;
    int t59;
    int t65;
    int t61;
    int t63;
    int stk[22];

    t0 = *(int *)((a4 + 0x508));
    t98 = 0;
    if ((*(int *)((a4 + 0x28C))) == 0) {
        *(unsigned int *)((a4 + 0x508)) = 0x0;
        *(unsigned int *)((a4 + 0x514)) = 0x0;
        t98 = ((t0 == 0));
    } else {
        t11 = *(int *)(((((*(int *)((a4 + 0x28C))) << 2) + 0xC246FF0) + 0x0));
        t88 = 0;
        if ((*(int *)((t11 + 0x524))) == 0) {
            *(unsigned int *)((a4 + 0x508)) = 0x0;
            *(unsigned int *)((a4 + 0x514)) = 0x0;
            t88 = ((t0 == 0));
        } else {
            t79 = 0;
            if ((*(int *)((a4 + 0x510))) != (*(int *)((t11 + 0x510)))) {
                *(unsigned int *)((a4 + 0x508)) = 0x0;
                *(unsigned int *)((a4 + 0x514)) = 0x0;
                t79 = ((t0 == 0));
            } else {
                t25 = *(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0));
                t26 = 0x0;
                if ((*(int *)((t11 + 0x554))) == 2) {
                    t26 = 0x1;
                }
                t29 = (t11 + 0x30);
                if ((*(int *)((t11 + 0x514))) != 0) {
                    t29 = (0x518 + t11);
                }
                nlSubVector3op((((int)stk + 4) + 0x24), (t25 + 0x30), t29);
                t32 = *(int *)((a4 + 0x4F4));
                u35 = *(float *)((((((*(int *)(((0x528 + a4) + 0x0))) - 1) << 2) + ((*(int *)((0xC1F79BC + (((t32 << 1) + t32) << 2)))) + 0x7C)) + 0x0));
                t36 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
                FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), (u35 / t36));
                *(unsigned int *)((a4 + 0x508)) = 0x1;
                *(unsigned int *)((a4 + 0x514)) = 0x1;
                nlAddVector3op((0x518 + a4), (t25 + 0x30), (((int)stk + 4) + 0x18));
                t39 = FUN_0c02f0e4(a4, t26);
                t70 = 0;
                if (t39 == 0) {
                    FUN_0c0dc5a0();
                    nlRotateAY(0x4000);
                    FUN_0c0db4d0((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
                    nlAddVector((((int)stk + 4) + 0xC), (t25 + 0x30));
                    nlRotateAY(0xFFFF8000);
                    FUN_0c0db4d0((((int)stk + 4) + 0x18), ((int)stk + 4));
                    nlAddVector(((int)stk + 4), (t25 + 0x30));
                    nlPopMatrix(0x1);
                    t48 = nlLength((((int)stk + 4) + 0xC), (a4 + 0x30));
                    t49 = nlLength(((int)stk + 4), (a4 + 0x30));
                    t67 = 0;
                    if (t49 > t48) {
                        _quick_odd_mvn();
                        t51 = FUN_0c02f0e4(a4, t26);
                        t57 = 0;
                        if (t51 == 0) {
                            _quick_odd_mvn();
                            t53 = FUN_0c02f0e4(a4, t26);
                            t55 = 0;
                            if (t53 != 0) {
                                t55 = ((t0 == 1));
                            } else {
                                *(unsigned int *)((a4 + 0x508)) = 0x0;
                                *(unsigned int *)((a4 + 0x514)) = 0x0;
                                t55 = ((t0 == 0));
                            }
                            t57 = (t55);
                        } else {
                            t57 = ((t0 == 1));
                        }
                        t67 = (t57);
                    } else {
                        _quick_odd_mvn();
                        t59 = FUN_0c02f0e4(a4, t26);
                        t65 = 0;
                        if (t59 == 0) {
                            _quick_odd_mvn();
                            t61 = FUN_0c02f0e4(a4, t26);
                            t63 = 0;
                            if (t61 != 0) {
                                t63 = ((t0 == 1));
                            } else {
                                *(unsigned int *)((a4 + 0x508)) = 0x0;
                                *(unsigned int *)((a4 + 0x514)) = 0x0;
                                t63 = ((t0 == 0));
                            }
                            t65 = (t63);
                        } else {
                            t65 = ((t0 == 1));
                        }
                        t67 = (t65);
                    }
                    t70 = (t67);
                } else {
                    t70 = ((t0 == 1));
                }
                t79 = (t70);
            }
            t88 = (t79);
        }
        t98 = (t88);
    }
    return ((t98) ? 1 : 0);
}

int FUN_0c0376f4(int a4)
{
    if ((*(int *)((a4 + 0x400))) != 9) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)(((0x268 + a4) + 0x0))), (*(float *)(((0x268 + a4) + 0x4))), (*(float *)(((0x268 + a4) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x294))));
        nlRotateAY((*(int *)((a4 + 0x290))));
        nlRotateAX((*(int *)((a4 + 0x28C))));
        nlGetMatrix((0x2B0 + a4));
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0xC) + 0x0))), (*(float *)((((0x268 + a4) + 0xC) + 0x4))), (*(float *)((((0x268 + a4) + 0xC) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2A0))));
        nlRotateAY((*(int *)((a4 + 0x29C))));
        nlRotateAX((*(int *)((a4 + 0x298))));
        nlGetMatrix(((0x2B0 + a4) + 0x40));
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0x18) + 0x0))), (*(float *)((((0x268 + a4) + 0x18) + 0x4))), (*(float *)((((0x268 + a4) + 0x18) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2AC))));
        nlRotateAY((*(int *)((a4 + 0x2A8))));
        nlRotateAX((*(int *)((a4 + 0x2A4))));
        nlGetMatrix(((0x2B0 + a4) + 0x80));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)(((0x268 + a4) + 0x0))), (*(float *)(((0x268 + a4) + 0x4))), (*(float *)(((0x268 + a4) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x294))));
        nlRotateAY((*(int *)((a4 + 0x290))));
        nlRotateAX((*(int *)((a4 + 0x28C))));
        nlGetMatrix((0x2B0 + a4));
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0xC) + 0x0))), (*(float *)((((0x268 + a4) + 0xC) + 0x4))), (*(float *)((((0x268 + a4) + 0xC) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2A0))));
        nlRotateAY((*(int *)((a4 + 0x29C))));
        nlRotateAX((*(int *)((a4 + 0x298))));
        nlGetMatrix(((0x2B0 + a4) + 0x40));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((((0x268 + a4) + 0x18) + 0x0))), (*(float *)((((0x268 + a4) + 0x18) + 0x4))), (*(float *)((((0x268 + a4) + 0x18) + 0x8))));
        nlRotateAZ((*(int *)((a4 + 0x2AC))));
        nlRotateAY((*(int *)((a4 + 0x2A8))));
        nlRotateAX((*(int *)((a4 + 0x2A4))));
        nlGetMatrix(((0x2B0 + a4) + 0x80));
        nlPopMatrix(0x1);
    }
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x244)) = (*(float *)((a4 + 0x2E0)));
    *(float *)((a4 + 0x248)) = (*(float *)((a4 + 0x2E4)));
    *(float *)((a4 + 0x24C)) = (*(float *)((a4 + 0x2E8)));
    *(float *)((a4 + 0x250)) = (*(float *)((a4 + 0x320)));
    *(float *)((a4 + 0x254)) = (*(float *)((a4 + 0x324)));
    *(float *)((a4 + 0x258)) = (*(float *)((a4 + 0x328)));
    *(float *)((a4 + 0x25C)) = (*(float *)((a4 + 0x360)));
    *(float *)((a4 + 0x260)) = (*(float *)((a4 + 0x364)));
    *(float *)((a4 + 0x264)) = (*(float *)((a4 + 0x368)));
    return 0x264;
}
