/* Straight-line functions with calls and guards (batch gen_ie): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c010c40(int);
int FUN_0c0162ee(int);
int FUN_0c0236ce(int);
int FUN_0c02a220(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c034e2c(int);
int FUN_0c034fbc(int, int, int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848d6(int, int, int, int, float, float, float);
int FUN_0c0849da(void);
int FUN_0c08f5d0(int, int);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c0340(int);
int FUN_0c0c0504(int);
int FUN_0c0c465c(int);
int FUN_0c0c46cc(int);
int FUN_0c0c473c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int nlAddVector(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c05ff8c(int a4, int a5, int a6, int a7);
float FUN_0c08fcdc(int a4, int a5, int a6, float f4);
void FUN_0c05e518(int a4, int a5);
float FUN_0c08f844(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0789f4(int a4, int a5, int a6, int a7);
int FUN_0c08ae04(int a4);
void FUN_0c02e13c(int a4);
int FUN_0c0a6e8c(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0117c6(void);
int FUN_0c059f6c(int a4, int a5, int a6, int a7);
int FUN_0c07dd98(int a4, int a5, int a6, int a7);
void FUN_0c0a369c(int a4, int a5, int a6, int a7);
int FUN_0c0c5b90(int a4, int a5, int a6, int a7);

int FUN_0c05ff8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(int *)((a4 + 0x244));
    t1 = *(int *)0xC247CAC;
    *(unsigned int *)((a4 + 0x244)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)(*(int *)((a4 + 0x248)))) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0272199996f);
    t0 = *(int *)((a4 + 0x248));
    t2 = 0x3CDEFC7A;
    t3 = ((((((t0 - 1) - 1) << 1) + ((t0 - 1) - 1)) << 2) + (0x25C + a4));
    t4 = ((((((t0 - 1) << 1) + (t0 - 1)) << 2) + (0x25C + a4)) + 0xC);
    for (;;) {
        if ((unsigned int)t4 <= (unsigned int)((0x25C + a4) + 0x24)) {
            break;
        }
        t4 = (t4 - 12);
        t2 = t4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t3); }
        t3 = (t3 - 12);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x274 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x268 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + a4)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0848d6(t3, t4, (t0 - 1), (0x25C + a4), (*(float *)((a4 + 0x24C))), (*(float *)((a4 + 0x250))), (*(float *)((a4 + 0x254))));
    t0 = (*(int *)((a4 + 0x244)));
    for (;;) {
        if ((int)t0 >= (int)(*(int *)((a4 + 0x248)))) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (0x25C + a4)));
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        u0 = 4.0f;
        u0 = (u0 - ((float)t0 / (1.0f + 1.0f)));
        nlScale(u0, u0, u0);
        FUN_0c0de000(u0);
        t2 = FUN_0c0da2e0();
        t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x3);
        }
        FUN_0c0c465c(((*(int *)(((0x220 + a4) + 0x0))) + t3));
        nlPopMatrix(0x1);
        t0 = (t0 + 0x1);
    }
    return FUN_0c0849da();
}

float FUN_0c08fcdc(int a4, int a5, int a6, float f4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register int R13;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_2 = a4;
    v0_1 = a5;
    v0_0 = a6;
    w0_0 = f4;
    v0_3 = R13;
    *(int *)((int)stk + 16) = v0_3;
    v0_5 = R12;
    *(int *)((int)stk + 12) = v0_5;
    v0_6 = R11;
    *(int *)((int)stk + 8) = v0_6;
    v0_4 = (*(short *)((((((*(int *)((v0_2 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 0;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    R12 = (0xC0E19F2);
    R13 = (0xC246074);
    v0_3 = (v0_2);
    if (v0_4) goto L_C08FD02;
    v0_4 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FD02:;
    v0_4 = (unsigned short)(*(short *)((((((*(int *)((v0_3 + 0x34))) << 2) << 2) + (0x80 + R13)) + 0x4))) == 2;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_4) goto L_C08FD30;
    v0_5 = *(int *)((((((*(int *)((v0_3 + 0x34))) << 2) << 2) + (0x80 + R13)) + 0xC));
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_4 = (v0_5);
    if ((v0_5 != 3)) goto L_C08FD2C;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FE96:;
    *(volatile int *)((int)stk + 4);
    *(volatile int *)((int)stk + 8);
    *(volatile int *)((int)stk + 12);
    return F0;
    L_C08FD2C:;
    v0_2 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FD30:;
    v0_4 = *(int *)((((*(int *)((v0_3 + 0x30))) << 2) + 0xC247030));
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_2 = (v0_4);
    if (((int)v0_4 < (int)0x2)) goto L_C08FD44;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)v0_2 < (int)0x5)) goto L_C08FD48;
    L_C08FD44:;
    v0_4 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FD48:;
    v0_4 = *(int *)((((*(int *)((v0_3 + 0x30))) << 2) + 0xC246FF0));
    v0_5 = (*(int *)((v0_4 + 0xD8))) != 0;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R13 = (v0_4);
    if (v0_5) goto L_C08FD60;
    v0_4 = (*(int *)((R13 + 0x4D0))) == 0;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_4) goto L_C08FD64;
    L_C08FD60:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FD64:;
    v0_5 = *(int *)((v0_3 + 0x4C));
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_4 = (v0_5);
    R11 = (0xC034FBC);
    v0_2 = (0x0);
    v0_1 = (0x1B);
    w0_0 = (0.0f);
    if ((v0_5 == 0)) goto L_C08FD88;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((v0_4 == 1)) goto L_C08FDA0;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((v0_4 == 2)) goto L_C08FDB4;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((v0_4 == 3)) goto L_C08FDF8;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((v0_4 == 4)) goto L_C08FE16;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FE7C:;
    nlAddVector((R13 + 0x48), (v0_3 + 0x38));
    v0_3 = (int)(*(int *)((v0_3 + 0x4C))) <= (int)0x5;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_4 = (0x4C);
    if (v0_3) goto L_C08FE96;
    v0_0 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_4 = (v0_0);
    goto L_C08FE96;
    L_C08FE16:;
    v0_4 = *(int *)((v0_3 + 0x48));
    *(unsigned int *)((v0_3 + 0x48)) = (v0_4 + 0x1);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)(v0_4 + 0x1) <= (int)0x9)) goto L_C08FE3A;
    *(float *)((v0_3 + 0x40)) = w0_0;
    *(float *)((v0_3 + 0x3C)) = w0_0;
    *(float *)((v0_3 + 0x38)) = w0_0;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FE30:;
    *(unsigned int *)((v0_3 + 0x4C)) = ((*(int *)((v0_3 + 0x4C))) + 0x1);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C08FE7C;
    L_C08FE3A:;
    FUN_0c034fbc(R13, 0x40, 0x1);
    *(float *)((v0_3 + 0x44)) = ((*(float *)((v0_3 + 0x44))) + -0.166666657f);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C08FE50:;
    *(float *)((v0_3 + 0x40)) = ((*(float *)((v0_3 + 0x44))) * (FUN_0c0d9e90(((*(short *)((R13 + 0x6E))) + 0x8000))));
    *(float *)((v0_3 + 0x38)) = ((*(float *)((v0_3 + 0x44))) * (FUN_0c0da410(((*(short *)((R13 + 0x6E))) + 0x8000))));
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C08FE7C;
    L_C08FDF8:;
    v0_4 = *(int *)((v0_3 + 0x48));
    *(unsigned int *)((v0_3 + 0x48)) = (v0_4 + 0x1);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (!(((int)(v0_4 + 0x1) <= (int)v0_1))) goto L_C08FE04;
    FUN_0c034fbc(R13, 0x40, 0x1);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C08FE50;
    L_C08FE04:;
    *(unsigned int *)((v0_3 + 0x48)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C08FE30;
    L_C08FDB4:;
    v0_4 = *(int *)((v0_3 + 0x48));
    *(unsigned int *)((v0_3 + 0x48)) = (v0_4 + 0x1);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)(v0_4 + 0x1) > (int)v0_1)) goto L_C08FE04;
    FUN_0c034fbc(R13, 0x40, 0x1);
    *(float *)((v0_3 + 0x44)) = ((*(float *)((v0_3 + 0x44))) + 0.0555555522f);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C08FE50;
    L_C08FDA0:;
    v0_4 = *(int *)((v0_3 + 0x48));
    *(unsigned int *)((v0_3 + 0x48)) = (v0_4 + 0x1);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)(v0_4 + 0x1) <= (int)0x26)) goto L_C08FE7C;
    *(float *)((v0_3 + 0x44)) = w0_0;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C08FE04;
    L_C08FD88:;
    *(float *)((v0_3 + 0x38)) = w0_0;
    *(float *)((v0_3 + 0x3C)) = w0_0;
    *(float *)((v0_3 + 0x40)) = w0_0;
    *(unsigned int *)((v0_3 + 0x48)) = v0_2;
    *(unsigned int *)((v0_3 + 0x4C)) = ((*(int *)((v0_3 + 0x4C))) + 0x1);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C08FDA0;
}

void FUN_0c05e518(int a4, int a5)
{
    int stk[10];
    register int t1;
    register int t6;
    register int t25;

    t1 = *(int *)((((*(int *)((a4 + 0x34C))) << 2) + 0xC2475D4));
    if ((*(int *)((a4 + 0x344))) == 0) {
    } else {
        if ((int)(*(int *)((t1 + 0x21C))) <= 0) {
            *(unsigned int *)((t1 + 0x21C)) = 0x0;
        } else {
            t6 = FUN_0c0e19aa(0xC05E6DC, 0x2BC, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t6);
            *(unsigned int *)((t1 + 0x21C)) = ((*(int *)((t1 + 0x21C))) - 1);
            *(unsigned int *)((t6 + 0xBC)) = (*(int *)((a4 + 0xBC)));
            *(unsigned int *)(((0x200 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
            FUN_0c0cc3f8(0x52BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xC);
            *(unsigned int *)((t6 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
            *(unsigned int *)(((0x1E8 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
            *(unsigned int *)(((0x1F4 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
            *(unsigned int *)(((0x204 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
            *(float *)((t6 + 0x1E4)) = 1.0f;
            *(unsigned int *)(((0x1FC + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
            *(unsigned int *)((t6 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
            *(unsigned int *)((t6 + 0x22C)) = 0x46;
            *(float *)((t6 + 0x24C)) = (*(float *)((a5 + 0xC)));
            nlPushMatrix(0x0);
            FUN_0c0dbda0(((((*(int *)((a4 + 0xBC))) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
            t25 = *(int *)((a4 + 0x340));
            FUN_0c0db470(((((t25 << 1) + t25) << 2) + 0xC1FEFBC), (t6 + 0x30));
            nlPopMatrix(0x1);
            *(unsigned short *)((t6 + 0x6E)) = (*(short *)((a4 + 0x6E)));
            *(unsigned int *)((t6 + 0x220)) = 0x125C;
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0x0;
            *(unsigned int *)((((int)stk + 4) + 0x4)) = (*(short *)((t6 + 0x6E)));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = 0x0;
            FUN_0c0a6780(((int)stk + 4), (t6 + 0x54), 0.0f, 0.0f, -0.399999976f);
            *(unsigned short *)((t6 + 0x6C)) = (*(int *)((((int)stk + 4) + 0x0)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x3C)) = *(struct mv3 *)((t6 + 0x30)); }
        }
    }
}

float FUN_0c08f844(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_2 = a5;
    w0_0 = f4;
    v0_0 = (0xC0E19F2);
    v0_1 = (0xC246074);
    v0_0 = (v0_3);
    if (((*(short *)((((((*(int *)((v0_3 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 0)) goto L_C08F86A;
    v0_4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(v0_3, v0_2, a6, a7);
    L_C08F86A:;
    if (((unsigned short)(*(short *)((((((*(int *)((v0_0 + 0x34))) << 2) << 2) + (0x80 + v0_1)) + 0x4))) == 2)) goto L_C08F898;
    v0_1 = *(int *)((((((*(int *)((v0_0 + 0x34))) << 2) << 2) + (0x80 + v0_1)) + 0xC));
    v0_4 = (v0_1);
    if (!((v0_1 != 3))) goto L_C08F9FC;
    v0_1 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    goto L_C08F898;
    L_C08F9FC:;
    return F0;
    L_C08F898:;
    v0_1 = *(int *)((((*(int *)((v0_0 + 0x30))) << 2) + 0xC247030));
    v0_3 = (v0_1);
    if (((int)v0_1 < (int)0x2)) goto L_C08F8AC;
    if (((int)v0_3 < (int)0x5)) goto L_C08F8B0;
    L_C08F8AC:;
    v0_1 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    L_C08F8B0:;
    v0_4 = *(int *)((((*(int *)((v0_0 + 0x30))) << 2) + 0xC246FF0));
    v0_1 = (v0_4);
    if (((*(int *)((v0_4 + 0x4D0))) != 0)) goto L_C08F8CA;
    if ((((*(int *)((v0_1 + 0x20C))) & 0x80000) == 0)) goto L_C08F8CE;
    L_C08F8CA:;
    v0_4 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    L_C08F8CE:;
    if (((int)(*(int *)((v0_1 + 0x304))) > 0)) goto L_C08F8DA;
    v0_2 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    L_C08F8DA:;
    v0_2 = *(int *)((v0_0 + 0x6C));
    *(unsigned int *)((v0_0 + 0x6C)) = (v0_2 - 1);
    v0_4 = (0x6C);
    if (((int)(v0_2 - 1) <= 0)) goto L_C08F8EA;
    goto L_C08F9FC;
    L_C08F8EA:;
    if (((*(int *)((v0_0 + 0x38))) != 0)) goto L_C08F968;
    v0_2 = *(int *)((v0_0 + 0x60));
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_3 = *(int *)(((v0_0 + 0x64) + 0x0));
    w0_0 = (*(float *)((v0_0 + 0x48)));
    w0_0 = w0_0 + (float)((v0_2 << 1) + 0x1) * (*(float *)((v0_0 + 0x3C)));
    *(float *)(((v0_0 + 0x54) + 0x0)) = w0_0;
    w0_0 = (*(float *)((v0_0 + 0x4C)));
    w0_0 = w0_0 + (float)((v0_2 << 1) + 0x1) * (*(float *)((v0_0 + 0x44)));
    *(float *)((v0_0 + 0x5C)) = w0_0;
    w0_0 = ((*(float *)((v0_0 + 0x40))) * (float)(((v0_3 - v0_2) << 1) - 1));
    w0_1 = (float)(((((v0_3 - v0_2) - 1) * (v0_3 - v0_2)) << 1) + 0x1);
    F0 = ((float)((v0_2 << 1) + 0x1));
    w0_0 = ((w0_0 * w0_1));
    L_C08F988:;
    *(float *)((v0_0 + 0x58)) = w0_0;
    *(float *)((v0_0 + 0x58)) = ((*(float *)((v0_0 + 0x58))) - (*(float *)0xC08FACC));
    *(float *)((v0_1 + 0x48)) = ((*(float *)((v0_1 + 0x48))) + (*(float *)(((v0_0 + 0x54) + 0x0))));
    *(float *)((v0_1 + 0x4C)) = ((*(float *)((v0_1 + 0x4C))) + (*(float *)(((0x58 + v0_0) + 0x0))));
    *(float *)((v0_1 + 0x50)) = ((*(float *)((v0_1 + 0x50))) + (*(float *)(((0x5C + v0_0) + 0x0))));
    v0_2 = *(int *)((v0_0 + 0x60));
    *(unsigned int *)((v0_0 + 0x60)) = (v0_2 + 0x1);
    v0_3 = *(int *)(((((*(int *)((v0_0 + 0x38))) << 2) + (v0_0 + 0x64)) + 0x0));
    v0_4 = (v0_3);
    if (((v0_2 + 0x1) != v0_3)) goto L_C08F9FC;
    v0_2 = *(int *)((v0_0 + 0x38));
    *(unsigned int *)((v0_0 + 0x38)) = (v0_2 + 0x1);
    if (((v0_2 + 0x1) != 2)) goto L_C08F9F6;
    FUN_0c08f5d0((v0_1 + 0x30), ((*(short *)((v0_1 + 0x6E))) + 0x8000));
    v0_1 = ((int (*)(void))(FUN_0c0e19f2))();
    L_C08F9F6:;
    *(unsigned int *)((v0_0 + 0x60)) = 0x0;
    v0_4 = (0x60);
    goto L_C08F9FC;
    L_C08F968:;
    v0_2 = *(int *)((v0_0 + 0x60));
    w0_0 = (float)(((((v0_2 + 0x1) * v0_2) << 1) + ((v0_2 + 0x1) * v0_2)) + 0x1);
    w0_0 = ((-((*(float *)((v0_0 + 0x50))) * w0_0)));
    goto L_C08F988;
}

int FUN_0c0789f4(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t3;
    register float u56;
    register float u57;
    register float u66;
    register float u68;

    t0 = *(int *)0xC23ED9C;
    if (((int)t0 >= (int)0x5) && ((int)t0 <= (int)0x9)) {
        return 0x9;
    }
    FUN_0c0685a4(t0, a5, a6, a7);
    t2 = *(int *)((a4 + 0x80));
    t3 = *(int *)0xC23ED88;
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
            } else {
                if ((t3 & (*(int *)((a4 + 0x9C)))) != 0) {
                    *(float *)((a4 + 0x58)) = -0.299999982f;
                    *(float *)((a4 + 0x90)) = 10000.0f;
                    *(float *)((a4 + 0x94)) = -10000.0f;
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                }
            }
        } else {
            if ((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x40)))) {
                *(float *)((a4 + 0x4C)) = 0.0199999996f;
                *(float *)((a4 + 0x58)) = -0.0299999993f;
                *(float *)((a4 + 0x90)) = 0.049999997f;
                *(float *)((a4 + 0x94)) = -0.049999997f;
                FUN_0c0cc3f8(0x428A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    } else {
        if ((t3 & (*(int *)((a4 + 0x98)))) != 0) {
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 1.0f);
            *(float *)((a4 + 0x4C)) = 0.25f;
            *(float *)((a4 + 0x58)) = 0.0299999993f;
            *(float *)((a4 + 0x90)) = 0.399999976f;
            *(float *)((a4 + 0x94)) = 0.149999991f;
            FUN_0c0cc3f8(0x328A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    if ((*(int *)((a4 + 0x80))) != 0) {
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + (*(float *)(((0x58 + a4) + 0x0))));
        u56 = *(float *)((a4 + 0x34));
        u57 = *(float *)(((0x4C + a4) + 0x0));
        *(float *)((a4 + 0x34)) = (u56 + u57);
        if (0.0f > (u56 + u57)) {
            *(float *)((a4 + 0x34)) = 0.0f;
            FUN_0c0cc3f8(0xB2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x40000);
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & (~((*(int *)((a4 + 0x98))) | (*(int *)((a4 + 0x9C))))));
            *(unsigned int *)((a4 + 0x80)) = 0x0;
        } else {
            u66 = *(float *)((a4 + 0x4C));
            if (((*(float *)((a4 + 0x90))) > u66) && (u68 = *(float *)((a4 + 0x94)), u66 > u68)) {
            } else {
                *(float *)((a4 + 0x58)) = ((*(float *)((a4 + 0x58))) * (-1.0f));
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    FUN_0c0c46cc((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

int FUN_0c08ae04(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((*(int *)0xC23A258) & 1) != 0) {
        t1 = FUN_0c0e19aa(0xC08AFC6, 0xA4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t1);
        u0 = (*(float *)((a4 + 0x70)));
        u0 = u0 + 0.000183111057f * (float)((FUN_0c0da2e0()) - 16384);
        *(float *)((t1 + 0x70)) = u0;
        *(float *)((t1 + 0x74)) = (*(float *)((a4 + 0x74)));
        u0 = (*(float *)((a4 + 0x78)));
        u0 = u0 + 0.000183111057f * (float)((FUN_0c0da2e0()) - 16384);
        *(float *)((t1 + 0x78)) = u0;
        *(unsigned short *)((t1 + 0x9A)) = 0x291;
        *(unsigned short *)((t1 + 0xA2)) = 0x1;
        u0 = 0.0599999987f;
        u0 = u0 + 1.83111047e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t1 + 0x94)) = u0;
        u0 = 0.25f;
        u0 = u0 + 7.62962736e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t1 + 0x90)) = u0;
        *(unsigned short *)((t1 + 0x9E)) = 0x3C;
    }
    nlPushMatrix(0x0);
    u0 = FUN_0c0d9e90((*(short *)((a4 + 0x88))));
    u1 = *(float *)((a4 + 0x90));
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    t0 = *(short *)((a4 + 0x8C));
    *(unsigned short *)((a4 + 0x8C)) = (t0 + 0x71C);
    nlRotateAZ((short)(t0 + 0x71C));
    nlScale((u1 * u0), (u1 * u0), (u1 * u0));
    FUN_0c0de000((u1 * u0));
    FUN_0c0c473c((*(short *)((a4 + 0x9A))));
    nlPopMatrix(0x1);
    if ((int)(*(short *)((a4 + 0x88))) < (int)0x3FFF) {
        *(unsigned short *)((a4 + 0x88)) = ((*(short *)((a4 + 0x88))) + 0x6D);
    }
    *(float *)((a4 + 0x74)) = ((*(float *)((a4 + 0x74))) + 0.549999952f);
    t0 = *(short *)((a4 + 0x8E));
    *(unsigned short *)((a4 + 0x8E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x8E;
}

void FUN_0c02e13c(int a4)
{
    register int t0;

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t0 = *(int *)((a4 + 0x4F8));
        if ((t0 != 6) && (t0 != 7)) {
            t0 = *(int *)((a4 + 0x4F8));
            if ((t0 != 8) && (t0 != 9)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            }
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        }
        return;
    }
    t0 = *(int *)((a4 + 0x4F8));
    if ((unsigned int)t0 >= (unsigned int)0xE) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            return;
        }
        case 2:
        {
            t0 = FUN_0c02a416(a4);
            if (t0 != 0) {
                *(unsigned int *)((a4 + 0x538)) = 0x0;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                t0 = FUN_0c03593a(a4);
                if (t0 != 0) {
                    t0 = FUN_0c02a35a(a4);
                    if (t0 != 0) {
                        if (t0 != 1) {
                            if (t0 != 2) {
                                if (t0 != 3) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                } else {
                                    *(unsigned int *)((a4 + 0x524)) = 0x0;
                                    t0 = FUN_0c0236ce(a4);
                                    if (t0 != 0) {
                                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    }
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x6;
                            }
                        } else {
                            t0 = FUN_0c035b26(a4);
                            if (t0 != 0) {
                                t0 = FUN_0c035ce4(a4);
                                if (t0 != 0) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                                } else {
                                    t0 = *(int *)((a4 + 0x538));
                                    if (t0 != 8) {
                                        if (t0 == 4) {
                                            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                        } else {
                                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                        }
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    }
                                }
                            } else {
                                t0 = *(int *)((a4 + 0x538));
                                if (t0 != 8) {
                                    if (t0 == 4) {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                            }
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x538)) = 0x1;
                    if ((*(int *)((a4 + 0x54C))) == 0) {
                        t0 = FUN_0c034e2c(a4);
                        if (t0 != 0) {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                        } else {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    }
                }
            }
            return;
        }
        case 4:
        {
            return;
        }
        case 6:
        {
            FUN_0c02a416(a4);
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            return;
        }
        case 8:
        {
            return;
        }
        case 10:
        {
            FUN_0c02a220(a4);
    return;
        }
        case 12:
        {
            return;
        }
        case 14:
        {
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            return;
        }
        case 16:
        {
            return;
        }
        case 18:
        {
            *(unsigned int *)((a4 + 0x4F8)) = 0xC;
            return;
        }
        case 20:
        {
            return;
        }
        case 22:
        {
            FUN_0c02a416(a4);
            *(unsigned int *)((a4 + 0x4F8)) = 0x6;
            return;
        }
        case 24:
        {
            return;
        }
        default:
        {
            FUN_0c02a416(a4);
            *(unsigned int *)((a4 + 0x4F8)) = 0x6;
            return;
        }
    }
}


int FUN_0c0117c6(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F409C);
    t0 = 0xC0F41A4;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        FUN_0c0c465c(t1);
        if ((unsigned int)t0 >= (unsigned int)0xC0F41B4) {
            break;
        }
    }
    FUN_0c0c465c((*(int *)((((*(int *)0xC1EF55C) << 2) + 0xC0F41B4))));
    t0 = *(int *)0xC523158;
    u0 = (float)(t0 & 0x3F);
    if (((*(int *)0xC523158) & 64) != 0) {
        u0 = (63.0f - (float)(t0 & 0x3F));
    }
    t0 = 0x0;
    for (;;) {
        if (t0 == (*(int *)0xC1EF55C)) {
            FUN_0c0c465c((*(int *)((((t0 << 2) + 0xC0F4198) + 0x0))));
            FUN_0c0c465c(0x13B5);
            FUN_0c0c475c(0x13B4, (u0 / 63.0f));
        } else {
            FUN_0c0c475c((*(int *)((((t0 << 2) + 0xC0F4198) + 0x0))), 0.5f);
            FUN_0c0c465c(0x13B1);
        }
        FUN_0c0dcc70(2.0999999f, 0.0f, 0.0f);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t0 = *(short *)0xC2497C8;
    t1 = *(int *)0xC1EF55C;
    if (((unsigned short)t0 & 0xC0C0) != 0) {
        t2 = *(short *)0xC2497C8;
        if (((unsigned short)t2 & 0x8080) != 0) {
            if ((int)t1 < (int)0x2) {
                *(unsigned int *)0xC1EF55C = ((*(int *)0xC1EF55C) + 0x1);
            }
            t3 = (unsigned short)t2;
        } else {
            t4 = (unsigned short)t2;
            if ((int)t1 > 0) {
                t1 = *(int *)0xC1EF55C;
                *(unsigned int *)0xC1EF55C = (t1 - 1);
                t4 = (t1 - 1);
            }
            t3 = t4;
        }
        return t3;
    }
    if (((unsigned short)t0 & 12) != 0) {
        if (((((*(signed char *)0xC1EF2D4) | (*(signed char *)0xC1EF2D5)) | (*(signed char *)0xC1EF2D6)) | (*(signed char *)0xC1EF2D7)) == 0) {
            FUN_0c0162ee(0xC1EF500);
            FUN_0c010c40(0x1);
        } else {
            FUN_0c010c40(0x7);
        }
        t0 = ((int (*)(void))((*(int *)((((*(int *)0xC1EF55C) << 2) + 0xC209A40)))))();
        return FUN_0c0c0504((*(int *)0xC1EF55C));
    }
    t0 = *(short *)0xC2497C8;
    if (((unsigned short)t0 & 0x2) != 0) {
        *(unsigned int *)0xC23A260 = 0x3;
    }
    return (unsigned short)t0;
}

int FUN_0c059f6c(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register float u4;
    register float u8;
    register float u12;
    register float u24;
    register float u38;
    register float u66;
    register int t96;
    register int t102;
    register int t104;
    register int t57;
    register int t58;

    FUN_0c0685a4(a4, a5, a6, a7);
    u4 = (*(float *)((a4 + 0x30)));
    u4 = u4 + (*(float *)(((0x90 + a4) + 0x0))) * (*(float *)(((0x48 + a4) + 0x0)));
    *(float *)((a4 + 0x30)) = u4;
    u8 = (*(float *)((a4 + 0x34)));
    u8 = u8 + (*(float *)(((0x90 + a4) + 0x0))) * (*(float *)(((0x4C + a4) + 0x0)));
    *(float *)((a4 + 0x34)) = u8;
    u12 = (*(float *)((a4 + 0x38)));
    u12 = u12 + (*(float *)(((0x90 + a4) + 0x0))) * (*(float *)(((0x50 + a4) + 0x0)));
    *(float *)((a4 + 0x38)) = u12;
    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + (*(int *)(((0x9C + a4) + 0x0))));
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0599999987f);
    if ((*(float *)((a4 + 0x38))) > (float)(*(int *)((a4 + 0xAC)))) {
        if (!(((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x58)))) > (*(float *)((a4 + 0x94))))) {
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x94))) - (*(float *)((a4 + 0x58))));
            u24 = (*(float *)((a4 + 0x4C)));
            u24 *= -0.599999964f;
            *(float *)((a4 + 0x4C)) = u24;
        }
    } else {
        if (!(((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x58)))) > (float)(*(int *)((a4 + 0xA8))))) {
            *(float *)((a4 + 0x34)) = ((float)(*(int *)((a4 + 0xA8))) - (*(float *)((a4 + 0x58))));
            u38 = (*(float *)((a4 + 0x4C)));
            u38 *= -0.599999964f;
            *(float *)((a4 + 0x4C)) = u38;
        }
    }
    if (((*(int *)((a4 + 0x80))) != 0) && (t57 = *(int *)((a4 + 0x84)), t58 = *(int *)((a4 + 0xA0)), ((t58 + t57) & 1) == 0)) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a4 + 0x54))), (*(float *)((a4 + 0x58))), (*(float *)((a4 + 0x5C))));
        nlRotateAY((*(int *)((a4 + 0x6C))));
        u66 = *(float *)((a4 + 0x74));
        nlScale(u66, u66, u66);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAZ((*(short *)((a4 + 0x64))));
        nlRotateAY((*(short *)((a4 + 0x62))));
        nlRotateAX((*(short *)((a4 + 0x60))));
        *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x48)));
        *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x4C)));
        *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x50)));
        nlRotateAxe(((int)stk + 4), (*(int *)((a4 + 0x98))));
        FUN_0c0de000((*(float *)((a4 + 0x74))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        nlPopMatrix(0x1);
    }
    t96 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t96 - 1);
    if ((int)(t96 - 1) <= 0) {
        *(unsigned int *)((a4 + 0xA0)) = (*(int *)((a4 + 0xA4)));
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    }
    t102 = *(int *)((a4 + 0x80));
    t104 = t102;
    if (t102 == 2) {
        t104 = (FUN_0c0e19f2());
    }
    return t104;
}

int FUN_0c07dd98(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t3 = *(int *)((a4 + 0x88));
    t4 = *(int *)(((0xC246FF0 + (t3 << 2)) + 0x0));
    if ((((*(int *)0xC23ED5C) & 0x200) == 0) && ((t0 = *(int *)((t4 + 0x290)), (t0 & 0x40000000) == 0) && (t1 = *(int *)(((t3 << 2) + 0xC247030)), t1 != 5))) {
    } else {
        t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))((t3 << 2), a5, a6, a7);
    }
    if (((*(int *)0xC23ED88) & 0x100) != 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFEFF);
        *(unsigned int *)((t4 + 0x290)) = ((*(int *)((t4 + 0x290))) | 0x2);
        t0 = ((int (*)(int))(FUN_0c0e19f2))(0xC23ED88);
    }
    t0 = *(int *)((0xC247030 + ((*(int *)((a4 + 0x88))) << 2)));
    if (t0 == 8) {
        return t0;
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)((t4 + 0x3E4))));
    u0 = *(float *)((a4 + 0x74));
    nlScale(u0, u0, u0);
    FUN_0c0dcca0(0xC1011E0);
    nlRotateAZ((*(short *)0xC1011F0));
    nlRotateAY((*(short *)0xC1011EE));
    nlRotateAX((*(short *)0xC1011EC));
    if (((*(int *)((t4 + 0x2BC))) == 0x328) && (t2 = *(int *)((t4 + 0x2B4)), (int)t2 > (int)0x8)) {
        t0 = *(int *)((a4 + 0xA8));
        *(unsigned int *)((a4 + 0xA8)) = (t0 + 0x800);
        *(unsigned int *)(((a4 + 0x68) + 0x0)) = (int)((FUN_0c0da410((t0 + 0x800))) * 1024.0f);
        t0 = *(int *)((a4 + 0xAC));
        *(unsigned int *)((a4 + 0xAC)) = (t0 + 0x800);
        *(unsigned int *)((a4 + 0x70)) = (int)((FUN_0c0d9e90((t0 + 0x800))) * 2048.0f);
        nlRotateAZ((*(int *)(((a4 + 0x68) + 0x0))));
        nlRotateAX((*(int *)((a4 + 0x70))));
    }
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

void FUN_0c0a369c(int a4, int a5, int a6, int a7)
{
    register int t12;

    if (((*(int *)0xC23A1A8) & 0x10000001) == 0x10000001) {
        return;
    }
    if ((*(short *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        FUN_0c0e19f2(0xC246074, a5, a6, a7);
    return;
    }
    if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x4))) == 1) {
        return;
    }
    t12 = *(int *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x0));
    if (((*(int *)((t12 + 0x290))) & 0x40000000) != 0) {
        FUN_0c0e19f2(0xC246074, a5, a6, a7);
    }
    if ((*(int *)((0xC247030 + ((*(int *)((t12 + 0xBC))) << 2)))) == 8) {
        return;
    }
    if ((int)(*(int *)((a4 + 0x80))) > 0) {
        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x100);
        if ((int)(*(short *)((a4 + 0x62))) > (int)0x1800) {
            *(unsigned int *)((a4 + 0x80)) = 0xFFFFFFFF;
        }
    } else {
        if ((int)(*(int *)((a4 + 0x80))) < 0) {
            *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) - 0x100);
            if ((int)(*(short *)((a4 + 0x62))) < (int)0xFFFFE800) {
                *(unsigned int *)((a4 + 0x80)) = 0x1;
            }
        }
    }
    if ((int)(*(int *)((a4 + 0x84))) > 0) {
        *(unsigned short *)((a4 + 0x60)) = ((*(short *)((a4 + 0x60))) + 0x100);
        if ((int)(*(short *)((a4 + 0x60))) > (int)0x800) {
            *(unsigned int *)((a4 + 0x84)) = 0xFFFFFFFF;
        }
    } else {
        if ((int)(*(int *)((a4 + 0x84))) < 0) {
            *(unsigned short *)((a4 + 0x60)) = ((*(short *)((a4 + 0x60))) - 0x100);
            if ((int)(*(short *)((a4 + 0x60))) < (int)0xFFFFF800) {
                *(unsigned int *)((a4 + 0x84)) = 0x1;
            }
        }
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dbda0((((((*(int *)((a4 + 0x7C))) << 2) << 2) << 2) + (*(int *)((t12 + 0x3E4)))));
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    FUN_0c0c47ae((*(int *)((a4 + 0x78))));
    nlPopMatrix(0x1);
}

int FUN_0c0c5b90(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t4;
    register int t10;
    register int t11;
    register int t14;
    register int t21;
    register int t102;
    register int t31;
    register int t63;
    register int t54;
    register int t57;
    register int t66;
    register int t72;
    register int t79;
    register int t88;
    register int t96;
    register int t122;
    register int t125;
    register int t1;
    register int t9;
    register int t103;
    register int t104;
    register int t85;
    register int t76;
    register int t69;
    register int t60;
    register int t107;
    register int t108;
    register int t115;
    register int t116;
    register int t117;

    if ((((*(int *)0xC23A1A8) & 0x101) == 0) && (t1 = *(int *)0xC247D04, t1 != 10)) {
        t9 = a4;
    } else {
        *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = 0x0;
        *(unsigned char *)(((unsigned char)(*(signed char *)((a4 + 0x75))) + 0xC31FC7E)) = 0x0;
        t4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    t10 = *(signed char *)((a4 + 0x74));
    if ((unsigned char)t10 != 0) {
        if ((unsigned char)t10 == 1) {
            t11 = *(short *)((a4 + 0x7C));
            *(unsigned short *)((a4 + 0x7C)) = (t11 - 1);
            t14 = 0x7C;
            if ((int)(short)((t11 - 1) + 0x1) <= 0) {
                *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = 0x0;
                t14 = (((int (*)(int))(FUN_0c0e19f2))(t9));
            }
            if ((*(int *)((a4 + 0x30))) != 0) {
                return FUN_0c0c0340((a4 + 0x30));
            }
            return t14;
        }
        return (unsigned char)t10;
    }
    t21 = *(short *)((a4 + 0x7A));
    *(unsigned short *)((a4 + 0x7A)) = (t21 - 1);
    if ((int)(short)(t21 - 1) > 0) {
        return 0x7A;
    }
    *(unsigned char *)((a4 + 0x74)) = ((*(signed char *)((a4 + 0x74))) + 0x1);
    t102 = t9;
    if ((*(short *)((a4 + 0x78))) != 0) {
        t31 = *(short *)((a4 + 0x78));
        if ((unsigned short)t31 != 1) {
            if ((unsigned short)t31 != 2) {
                if ((unsigned short)t31 != 3) {
                    t63 = 0xC2475A4;
                    if ((unsigned short)t31 != 4) {
                    } else {
                        if ((*(int *)0xC247070) == 2) {
                            t54 = 0x0;
                            if ((*(int *)0xC2475A4) == 1) {
                                t54 = 0x1;
                            }
                            t60 = t54;
                        } else {
                            t57 = 0x1;
                            if ((*(int *)0xC2475A4) == 1) {
                                t57 = 0x0;
                            }
                            t60 = t57;
                        }
                        t63 = t60;
                    }
                    t69 = t63;
                } else {
                    t66 = 0x1;
                    if ((*(int *)0xC2475A4) == 1) {
                        t66 = 0x0;
                    }
                    t69 = t66;
                }
                t76 = t69;
            } else {
                t72 = 0x0;
                if ((int)(*(int *)0xC247034) >= (int)0x2) {
                    t72 = 0x1;
                }
                t76 = t72;
            }
            t85 = t76;
        } else {
            t79 = 0x0;
            if ((int)(*(int *)0xC247030) < (int)0x2) {
                t79 = 0x1;
            }
            t85 = t79;
        }
        *(unsigned char *)((a4 + 0x75)) = ((((*(int *)(((t85 << 2) + 0xC23EDC0))) >> 1) << 1) + 0x1);
        t88 = *(signed char *)((a4 + 0x75));
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(*(short *)(((((unsigned int)(unsigned char)t88 >> 1) << 1) + (*(int *)((a4 + 0x68))))));
        t96 = ((unsigned int)(unsigned char)t88 >> 1);
        if ((*(int *)((a4 + 0x70))) != 0) {
            *(unsigned int *)((a4 + 0x6C)) = (*(int *)(((((unsigned int)(unsigned char)t88 >> 1) << 2) + (*(int *)((a4 + 0x70))))));
            t96 = (((unsigned int)(unsigned char)t88 >> 1) << 2);
        }
        t102 = t96;
        t103 = 0xC246FF0;
        t104 = 0x2;
    }
    if (((*(int *)((a4 + 0x6C))) != 0) && ((t107 = *(int *)0xC23A1A0, t107 != 3) || (t108 = *(signed char *)((a4 + 0x75)), (unsigned char)t108 != 3))) {
        FUN_0c0cc3f8((*(int *)((a4 + 0x6C))), t103, t104, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    } else {
        t115 = t102;
        t116 = t103;
        t117 = t104;
    }
    *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = (*(signed char *)(((0x76 + a4) + 0x0)));
    *(unsigned char *)(((unsigned char)(*(signed char *)((a4 + 0x75))) + 0xC31FC7E)) = (*(signed char *)((a4 + 0x77)));
    t122 = *(short *)((a4 + 0x7C));
    *(unsigned short *)((a4 + 0x7C)) = (t122 - 1);
    t125 = 0x7C;
    if ((int)(short)((t122 - 1) + 0x1) <= 0) {
        *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = 0x0;
        t125 = (((int (*)(int, int, int))(FUN_0c0e19f2))(t115, t116, t117));
    }
    if ((*(int *)((a4 + 0x30))) != 0) {
        return FUN_0c0c0340((a4 + 0x30));
    }
    return t125;
}
