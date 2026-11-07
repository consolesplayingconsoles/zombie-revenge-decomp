/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c01db0e(int, int);
int FUN_0c023300(int, int, int, int);
int FUN_0c02a19a(int, int, int, int, Stk3);
int FUN_0c02bc00(int);
int FUN_0c02bc0e(int);
int FUN_0c02bc1c(int);
int FUN_0c034238(int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034b36(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c0392e8(int, int);
int FUN_0c045e54(int, int, int);
float FUN_0c0467c2(int, float, float);
int FUN_0c07ed4c(int);
int FUN_0c07ede6(void);
int FUN_0c082ce0(int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c08e9e0(int);
int FUN_0c09d278(int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c4684(int);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cddba(int);
int FUN_0c0cddda(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e6248(void);
int FUN_0c22ee60(void);
int FUN_0c22eeb2(int, int, int);
extern float _builtin_sqrtf(float);
int kmSetCheapShadowMode(void);
int thunk_kmSetCheapShadowMode(void);
int kmytex_FBDeQueueEntry(int, int, int);
int nlAddVector(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c090f70(int a4);
int FUN_0c0c90d6(int a4, int a5, int a6, float f4, float f5);
int FUN_0c063ff8(int a4, int a5);
void FUN_0c0a9084(int a4);
int FUN_0c22e6f2(int a4, int a5, int a6, int a7);
int FUN_0c037504(int a4);
int FUN_0c051e92(int a4, int a5, float f4, float f5);
int FUN_0c07ee7c(int a4, int a5);
int FUN_0c0465fa(int a4);
int FUN_0c0be578(int a4, int a5);
int FUN_0c0ce136(int a4);
int FUN_0c06dc1a(int a4);
int FUN_0c02bc2a(int a4, int a5, int a6);
int FUN_0c03eab4(int a4, int a5, int a6, int a7);
int FUN_0c048c1e(int a4, int a5, int a6, int a7, float f4);

int FUN_0c090f70(int a4)
{
    int t0;
    int t1;
    int t10;
    int t16;
    int t18;
    int t27;
    int t31;
    int t37;
    int t40;
    int t43;
    int t46;
    int t14;
    int stk[22];

    t0 = *(int *)((a4 + 0x1C4));
    t1 = *(int *)0xC247CAC;
    *(unsigned int *)(((int)stk + 16)) = ((0xC23F268 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + 0xC);
    nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x3C), (a4 + 0x30));
    FUN_0c0a7714((((int)stk + 4) + 0x8), ((int)stk + 4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
    nlPushMatrix(0x0);
    t10 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = (short)((*(short *)((t1 + 0x3CE))) - (*(int *)(((int)stk + 4))));
    if ((int)(*(int *)(((int)stk + 8))) >= (int)0x3FFF) {
        t14 = ((*(short *)((t1 + 0x3CE))) + 0x3FFF);
    } else {
        t14 = ((*(short *)((t1 + 0x3CE))) - 16383);
    }
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    t16 = (t10 - 16383);
    for (;;) {
        t18 = FUN_0c0e19aa(0xC0915FC, 0x64, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t18);
        *(unsigned short *)((t18 + 0x48)) = t16;
        *(unsigned short *)((t18 + 0x4A)) = t14;
        *(float *)((t18 + 0x50)) = 0.0399999991f;
        *(unsigned int *)((t18 + 0x5C)) = 0x3C9;
        *(float *)((t18 + 0x58)) = 1.0f;
        *(unsigned int *)((t18 + 0x60)) = 0x14;
        nlUnitMatrix();
        FUN_0c0dcca0((*(int *)(((int)stk + 16))));
        nlRotateAY((*(int *)(((int)stk + 4))));
        nlRotateAX(t16);
        FUN_0c0db470(0xC10ABF8, (t18 + 0x30));
        t27 = *(int *)(((int)stk + 8));
        t16 = (t16 + 0xFA4);
        *(unsigned int *)(((int)stk + 8)) = (t27 - 1);
        if ((t27 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x28;
    for (;;) {
        t31 = FUN_0c0e19aa(0xC0916E8, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t31);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t31 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        *(float *)((t31 + 0x54)) = 1.0f;
        *(float *)((t31 + 0x58)) = 0.599999964f;
        *(unsigned int *)((t31 + 0x60)) = 0x295;
        *(unsigned int *)(((0x64 + t31) + 0x0)) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        *(float *)((t31 + 0x44)) = ((float)(((FUN_0c0da2e0()) & 0x1F) + 0x10) * 0.049999997f);
        nlUnitMatrix();
        t37 = FUN_0c0da2e0();
        nlRotateAY((0xFFFFC000 + ((t37 & 0x7FFF) + (*(int *)(((int)stk + 4))))));
        t40 = FUN_0c0da2e0();
        nlRotateAX((0xFFFFF000 + ((*(int *)(((int)stk + 12))) - (t40 & 0xFFF))));
        t43 = FUN_0c0da2e0();
        nlRotateAZ((0x37FF + (t43 & 0xFFF)));
        FUN_0c0db470((t31 + 0x3C), (t31 + 0x3C));
        t46 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t46 - 1);
        if ((t46 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return (FUN_0c0cc3f8(0xE2DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
}

int FUN_0c0c90d6(int a4, int a5, int a6, float f4, float f5)
{
    int t8;
    int t13;
    int t15;
    int t16;
    int t26;
    int t27;
    int t28;
    int t29;
    float u53;
    float u59;
    float u65;
    int t0;
    int t1;
    int stk[26];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x30);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x30) + 0x4);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x30) + 0x8);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x24);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x24) + 0x8);
    for (;;) {
        if ((int)(*(short *)(((*(int *)((a4 + 0x0))) + 0x0))) >= 0) {
            t0 = (nlPushMatrix(0x0));
            t1 = (*(int *)((a4 + 0x0)));
            t0 = (*(short *)((t1 + 0x2)));
            *(unsigned short *)(((((int)stk + 4) + 0x20) + 0x0)) = t0;
            t0 = (FUN_0c0dcca0((t1 + 0x4)));
            t8 = *(int *)(((int)stk + 12));
            t13 = *(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0));
            t15 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0));
            *(unsigned int *)((t8 + 0x0)) = ((*(int *)((t8 + 0x0))) + 0x4);
            t16 = *(int *)(((int)stk + 16));
            *(unsigned int *)((t16 + 0x0)) = ((*(int *)((t16 + 0x0))) + 0x4);
            *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = (((int)t13 >> 4) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x0)) = (((int)t13 >> 14) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((((t13 << 2) << 2) << 2) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (((int)t15 >> 4) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = (((int)t15 >> 14) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x0)) = ((((t15 << 2) << 2) << 2) & 0xFFC0);
            t26 = 0x0;
            t27 = 0x0;
            t28 = (*(int *)(((int)stk + 4)));
            t29 = (*(int *)(((int)stk + 8)));
            for (;;) {
                t1 = t27;
                t1 = (t1 << 2);
                t0 = t1;
                if ((int)(*(int *)(((((int)stk + 4) + 0x30) + t0))) < (int)(*(int *)(((((int)stk + 4) + 0x24) + t0)))) {
                    t0 = t1;
                    if ((int)((*(int *)(((((int)stk + 4) + 0x24) + t0))) - (*(int *)(((((int)stk + 4) + 0x30) + t0)))) > (int)0x8000) {
                        *(unsigned int *)((t29 + 0x0)) = ((*(int *)((t29 + 0x0))) + 0x10000);
                    }
                } else {
                    t0 = t26;
                    if ((int)((*(int *)(((((int)stk + 4) + 0x30) + t0))) - (*(int *)(((((int)stk + 4) + 0x24) + t0)))) > (int)0x8000) {
                        *(unsigned int *)((t28 + 0x0)) = ((*(int *)((t28 + 0x0))) + 0x10000);
                    }
                }
                t27 = (t27 + 0x1);
                t28 = (t28 + 0x4);
                t26 = (t26 + 0x4);
                t29 = (t29 + 0x4);
                if ((int)t27 >= (int)0x3) {
                    break;
                }
            }
            t1 = (*(int *)(((int)stk + 20)));
            t1 = (*(int *)((t1 + 0x0)));
            u53 = (float)t1;
            u53 = u53 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) - t1);
            t0 = (nlRotateAZ((int)u53));
            t1 = (*(int *)(((int)stk + 8)));
            t1 = (*(int *)((t1 + 0x0)));
            u59 = (float)t1;
            u59 = u59 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) - t1);
            t0 = (nlRotateAY((int)u59));
            t1 = (*(int *)(((int)stk + 28)));
            t1 = (*(int *)((t1 + 0x0)));
            u65 = (float)t1;
            u65 = u65 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) - t1);
            t0 = (nlRotateAX((int)u65));
            if ((*(short *)(((*(int *)((a4 + 0x0))) + 0x0))) != 0) {
                t0 = (FUN_0c0de000(f5));
                t0 = (FUN_0c0c465c((*(short *)(((*(int *)((a4 + 0x0))) + 0x0)))));
            }
            t0 = 0x20;
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x10);
            t1 = (*(short *)((((int)stk + 4) + t0)));
            t1 = (unsigned short)t1;
            if ((0x1 & t1) != 0) {
                t0 = (FUN_0c0c90d6(a4, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), f4, f5));
            }
            t0 = (nlPopMatrix(0x1));
            if ((t1 & 0x2) == 0) continue;
            break;
        }
        break;
    }
    return t0;
}


void FUN_0c0a9084(int a4)
{
    int t0;
    int t30;
    int t35;
    int t45;
    int t70;
    int t31;
    int t38;

    t0 = *(int *)((a4 + 0x3CC));
    if ((*(int *)((a4 + 0x1BC))) == 0) {
        FUN_0c085704(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        if (((*(int *)((a4 + 0x20C))) & 0x20000000) != 0) {
            FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))));
        } else {
            nlAddVector((a4 + 0x30), (a4 + 0x48));
            *(float *)((a4 + 0x48)) = 0.0f;
            *(float *)((a4 + 0x4C)) = 0.0f;
            *(float *)((a4 + 0x50)) = 0.0f;
        }
        nlAddVector((a4 + 0x54), (a4 + 0x60));
        nlAddVector((a4 + 0x30), (a4 + 0x54));
    }
    FUN_0c0bbbf4(a4);
    if ((*(int *)((a4 + 0x338))) != 0) {
        nlPushMatrix(0x0);
        nlMultiMatrix(((((*(int *)((a4 + 0xBC))) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
        FUN_0c0c465c((*(short *)(((((*(int *)((a4 + 0xC0))) >> 1) << 1) + 0xC10D20C))));
        nlPopMatrix(0x1);
    }
    t30 = *(signed char *)((t0 + 0x5));
    if (((unsigned char)t30 != 0) && (t31 = *(int *)((a4 + 0x2B4)), (unsigned char)t30 == t31)) {
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        t38 = 0x1;
    } else {
        t35 = 0x0;
        if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
            t35 = 0x1;
        }
        t38 = t35;
    }
    if (t38 != 0) {
        if ((*(int *)((a4 + 0x3AC))) == 0) {
            t45 = *(signed char *)((t0 + 0x0));
            if ((unsigned char)t45 != 3) {
                if ((unsigned char)t45 != 0) {
                    if ((unsigned char)t45 != 1) {
                        if ((unsigned char)t45 != 2) {
                        } else {
                            *(unsigned int *)((a4 + 0x1BC)) = 0x1;
                        }
                    }
                } else {
                    *(unsigned int *)((a4 + 0x3CC)) = (t0 + 0xC);
                    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x2)));
                    *(unsigned int *)(((0x2E8 + a4) + 0x0)) = (unsigned char)(*(signed char *)(((t0 + 0xC) + 0x6)));
                    *(unsigned int *)(((0x2D4 + a4) + 0x0)) = (unsigned char)(*(signed char *)(((t0 + 0xC) + 0x1)));
                    *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((unsigned char)(*(signed char *)(((t0 + 0xC) + 0x4))) - 1);
                    if ((unsigned char)(*(signed char *)(((t0 + 0xC) + 0x7))) != 0xFF) {
                        *(unsigned short *)(((0x6E + a4) + 0x0)) = ((unsigned char)(*(signed char *)(((t0 + 0xC) + 0x7))) << 8);
                    }
                    if ((*(int *)(((t0 + 0xC) + 0x8))) != 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((*(int *)(((t0 + 0xC) + 0x8)))); }
                    }
                }
            } else {
                t70 = *(int *)((a4 + 0x3D0));
                *(unsigned int *)((a4 + 0x3CC)) = ((t70 - 12) + 0xC);
                *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)((((t70 - 12) + 0xC) + 0x2)));
                *(unsigned int *)(((0x2E8 + a4) + 0x0)) = (unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x6)));
                *(unsigned int *)(((0x2D4 + a4) + 0x0)) = (unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x1)));
                *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x4))) - 1);
                if ((unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x7))) != 0xFF) {
                    *(unsigned short *)(((0x6E + a4) + 0x0)) = ((unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x7))) << 8);
                }
                if ((*(int *)((((t70 - 12) + 0xC) + 0x8))) != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((*(int *)((((t70 - 12) + 0xC) + 0x8)))); }
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
        }
    }
}


int FUN_0c037504(int a4)
{
    int t0;
    float u5;
    float u6;
    int t17;
    int t18;
    int t20;
    int t13;

    t0 = FUN_0c0e1830(0xC03746A, 0x5EC);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0xC0)) = (*(int *)((a4 + 0xC0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0e6248();
    *(unsigned int *)((t0 + 0x20C)) = 0x40000000;
    u5 = *(float *)((a4 + 0x284));
    *(float *)((t0 + 0x284)) = u5;
    *(float *)((t0 + 0x27C)) = u5;
    *(float *)((t0 + 0x278)) = u5;
    *(float *)((t0 + 0x274)) = u5;
    u6 = *(float *)((a4 + 0x45C));
    *(float *)(((0x468 + t0) + 0x8)) = u6;
    *(float *)(((0x468 + t0) + 0x4)) = u6;
    *(float *)(((0x468 + t0) + 0x0)) = u6;
    *(float *)(((0x45C + t0) + 0x8)) = u6;
    *(float *)(((0x45C + t0) + 0x4)) = u6;
    *(float *)(((0x45C + t0) + 0x0)) = u6;
    *(unsigned int *)((t0 + 0xC4)) = (*(int *)((a4 + 0xC4)));
    *(unsigned int *)((t0 + 0x5C8)) = 0x1;
    *(unsigned int *)((t0 + 0x5CC)) = 0x1;
    FUN_0c0855ba(t0);
    FUN_0c085638(t0);
    if ((*(int *)((a4 + 0x5A0))) == 1) {
        *(unsigned int *)((t0 + 0x2C4)) = 0x4F0;
        t13 = 0x4EF;
    } else {
        *(unsigned int *)((t0 + 0x2C4)) = 0x4EE;
        t13 = 0x4ED;
    }
    *(unsigned int *)((t0 + 0x5B8)) = t13;
    *(unsigned int *)((t0 + 0x2CC)) = 0x1;
    FUN_0c0ba6e8(t0);
    FUN_0c0ba776(t0);
    t17 = 0x0;
    for (;;) {
        t18 = *(int *)((((0x5D0 + a4) + t17) + 0x0));
        t20 = ((0x5D0 + t0) + t17);
        t17 = (t17 + 0x4);
        *(unsigned int *)((t20 + 0x0)) = t18;
        if ((unsigned int)t17 >= (unsigned int)0x18) {
            break;
        }
    }
    *(unsigned int *)((t0 + 0x5D4)) = ((*(int *)((t0 + 0x5D4))) + 0x2);
    *(unsigned int *)((t0 + 0x5E8)) = 0x1;
    FUN_0c039288(t0, 0x1, 0x0);
    FUN_0c039288(t0, 0x0, 0x1);
    FUN_0c039288(t0, 0x9, 0x1);
    FUN_0c039288(t0, 0x2, 0x1);
    FUN_0c039288(t0, 0x3, 0x2);
    FUN_0c039288(t0, 0x4, 0x2);
    FUN_0c039288(t0, 0x5, 0x2);
    FUN_0c039288(t0, 0x6, 0x3);
    FUN_0c039288(t0, 0x7, 0x3);
    FUN_0c039288(t0, 0x8, 0x3);
    FUN_0c0392e8(t0, 0x2);
    FUN_0c0392e8(t0, 0x9);
    FUN_0c0392e8(t0, 0xA);
    FUN_0c0392e8(t0, 0xB);
    FUN_0c0392e8(t0, 0xC);
    FUN_0c0392e8(t0, 0xD);
    FUN_0c0392e8(t0, 0xE);
    return FUN_0c0392e8(t0, 0xF);
}


int FUN_0c07ee7c(int a4, int a5)
{
    int t1;
    int t4;
    int t6;
    int t44;
    int t45;
    int t85;
    int t80;
    int t89;
    int t99;
    int t100;
    int t101;
    int t102;
    int t116;
    int t155;
    int t163;
    int t2;
    int t3;
    int t7;
    int t8;
    int t144;
    int t95;
    int t81;
    int t90;
    int t137;
    int t129;
    int t122;
    int t173;
    int t160;
    int t161;
    int t168;

    t1 = *(int *)0xC247CA4;
    if (((*(int *)0xC247CFC) != 12) && (t2 = *(int *)0xC23ED50, t3 = *(int *)0xC247CA8, t2 != t3)) {
        t4 = *(int *)((t1 + 0x4));
        t6 = *(short *)((t1 + 0x0));
        *(unsigned int *)0xC247D70 = (*(int *)((t1 + 0xC)));
        if ((t4 != 0) && (t7 = *(int *)0xC23ED50, t8 = *(int *)0xC247CA8, (int)t7 > (int)t8)) {
            *(unsigned int *)0xC247D64 = t6;
            *(unsigned int *)0xC247CFC = 0xC;
            FUN_0c082ce0(t4);
        } else {
            if ((*(int *)0xC247CFC) == 11) {
                *(unsigned int *)((a4 + 0x3F4)) = 0xA;
                *(float *)((a4 + 0x29C)) = 50.0f;
                *(unsigned int *)((a4 + 0x3E4)) = 0x0;
                if (t6 != 5) {
                    *(unsigned int *)((a4 + 0x3D4)) = 0x0;
                    *(unsigned int *)((a4 + 0x3D8)) = ((*(int *)((a4 + 0x370))) + 0x7FFF);
                }
            } else {
                *(unsigned int *)(((0x3F4 + a4) + 0x0)) = ((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x1);
            }
            *(unsigned int *)0xC247CFC = t6;
        }
        *(unsigned int *)0xC247CA8 = (*(int *)0xC23ED50);
    }
    t44 = *(int *)0xC247CFC;
    t45 = *(int *)0xC247CA4;
    if (t44 != 9) {
        if ((t44 != 2) && ((t44 != 3) && (t44 != 13))) {
            if (t44 != 8) {
                if (t44 != 5) {
                    t85 = t44;
                    if (t44 == 6) {
                        t80 = *(short *)((t45 + 0x2));
                        if (((t80 & 0x6) != 0) && (t81 = *(int *)0xC23ED5C, (t81 & 0xA00) == 0xA00)) {
                            *(unsigned int *)0xC247CFC = 0x7;
                        }
                        t85 = t80;
                    }
                    t95 = t85;
                } else {
                    t89 = *(short *)((t45 + 0x2));
                    if (((t89 & 0x6) != 0) && (t90 = *(int *)0xC23ED5C, (t90 & 0xC00) == 0xC00)) {
                        *(unsigned int *)0xC247CFC = 0x4;
                        *(unsigned int *)0xC247D70 = ((*(int *)0xC247D70) + 0x20);
                    }
                    t95 = t89;
                }
                t144 = t95;
            } else {
                t99 = *(int *)((a4 + 0x3BC));
                t100 = *(int *)((0xC247030 + (t99 << 2)));
                t101 = *(int *)((a4 + 0x3C0));
                t102 = *(int *)(((0xC247030 + (t101 << 2)) + 0x0));
                if (t100 == 4) {
                    if (t102 == 4) {
                        if (((*(int *)(((*(int *)((((t99 << 2) + 0xC246FF0) + 0x0))) + 0x20C))) & 0x40000) != 0) {
                            t116 = *(int *)(((*(int *)((((t101 << 2) + 0xC246FF0) + 0x0))) + 0x20C));
                            if ((t116 & 0x80000) == 0) {
                                *(unsigned int *)0xC247CFC = (*(int *)0xC247D08);
                            }
                            t122 = t116;
                        } else {
                            *(unsigned int *)0xC247CFC = (*(int *)0xC247D08);
                            t122 = 0x20C;
                        }
                        t129 = t122;
                    } else {
                        *(unsigned int *)0xC247CFC = (*(int *)0xC247D08);
                        t129 = t102;
                    }
                    t137 = t129;
                } else {
                    *(unsigned int *)0xC247CFC = (*(int *)0xC247D08);
                    t137 = t100;
                }
                t144 = t137;
            }
            return t144;
        }
        return FUN_0c07ede6();
    }
    FUN_0c07ede6();
    t155 = *(int *)(((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0) + 0x0));
    if ((*(int *)0xC247D6C) == 0) {
        if (((*(int *)((t155 + 0x340))) != 5) && ((t160 = *(int *)((t155 + 0x340)), t160 != 16) && (t161 = *(int *)((t155 + 0x340)), t161 != 7))) {
            *(unsigned int *)0xC247CFC = (*(int *)0xC247D08);
            t168 = t161;
        } else {
            t163 = FUN_0c07ed4c(a4);
            if (t163 == 0) {
                *(unsigned int *)0xC247CFC = (*(int *)0xC247D08);
            }
            t168 = t163;
        }
        t173 = t168;
    } else {
        *(unsigned int *)0xC247CFC = (*(int *)0xC247D08);
        t173 = 0x3B4;
    }
    return t173;
}

int FUN_0c0465fa(int a4)
{
    int t22;
    int t32;
    int t36;
    int t42;
    int t50;
    int t106;
    int t118;
    int t122;
    int t125;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;

    if (((*(float *)((a4 + 0x4B8))) > 0.0f) && ((t1 = *(int *)((a4 + 0x4D0)), t1 == 0) && ((t2 = *(int *)((a4 + 0x500)), t2 != 0) && ((t3 = *(int *)((a4 + 0x500)), t3 != 1) && ((t4 = *(int *)((a4 + 0x4C8)), t4 != 3) && (t5 = *(int *)((a4 + 0x4DC)), t5 == 0)))))) {
        t22 = *(short *)((a4 + 0x6C));
        *(unsigned short *)((a4 + 0x6C)) = (t22 + 0x80);
        if ((int)(short)(t22 + 0x80) > (int)0x1400) {
            *(unsigned short *)((a4 + 0x6C)) = 0x1400;
        }
    } else {
        if ((0.0f > (*(float *)((a4 + 0x4B8)))) && ((t25 = *(int *)((a4 + 0x4D0)), t25 == 0) && ((t26 = *(int *)((a4 + 0x500)), t26 != 0) && ((t27 = *(int *)((a4 + 0x500)), t27 != 1) && ((t28 = *(int *)((a4 + 0x4C8)), t28 != 3) && (t29 = *(int *)((a4 + 0x4DC)), t29 == 0)))))) {
            t32 = *(short *)((a4 + 0x6C));
            *(unsigned short *)((a4 + 0x6C)) = (t32 - 0x80);
            if ((int)(short)(t32 - 0x80) < (int)0xFFFFF400) {
                *(unsigned short *)((a4 + 0x6C)) = 0xFFFFF400;
            }
        } else {
            t36 = 0x100;
            if ((*(int *)((a4 + 0x4C8))) != 2) {
                *(unsigned int *)((a4 + 0x248)) = 0x0;
                t36 = 0x40;
            }
            if ((int)(*(short *)((a4 + 0x6C))) < (int)(*(int *)((a4 + 0x248)))) {
                t42 = *(short *)((a4 + 0x6C));
                *(unsigned short *)((a4 + 0x6C)) = (t42 + t36);
                if ((int)(short)(t42 + t36) <= (int)(*(int *)((a4 + 0x248)))) {
                } else {
                    *(unsigned short *)((a4 + 0x6C)) = (*(short *)((a4 + 0x248)));
                }
            } else {
                if ((int)(*(short *)((a4 + 0x6C))) > (int)(*(int *)((a4 + 0x248)))) {
                    t50 = *(short *)((a4 + 0x6C));
                    *(unsigned short *)((a4 + 0x6C)) = (t50 - t36);
                    if ((int)(short)(t50 - t36) < (int)(*(int *)((a4 + 0x248)))) {
                        *(unsigned short *)((a4 + 0x6C)) = (*(short *)((a4 + 0x248)));
                    }
                } else {
                    *(unsigned short *)((a4 + 0x6C)) = (*(short *)((a4 + 0x248)));
                }
            }
        }
    }
    if (((*(float *)((a4 + 0x4B0))) > 0.0f) && ((t81 = *(int *)((a4 + 0x4D0)), t81 == 0) && ((t82 = *(int *)((a4 + 0x500)), t82 != 0) && ((t83 = *(int *)((a4 + 0x500)), t83 != 1) && ((t84 = *(int *)((a4 + 0x4C8)), t84 != 3) && (t85 = *(int *)((a4 + 0x4DC)), t85 == 0)))))) {
        t106 = *(short *)((a4 + 0x70));
        *(unsigned short *)((a4 + 0x70)) = (t106 + 0x80);
        if ((int)(short)(t106 + 0x80) > (int)0x1800) {
            *(unsigned short *)((a4 + 0x70)) = 0x1800;
        }
    } else {
        if ((0.0f > (*(float *)((a4 + 0x4B0)))) && ((t109 = *(int *)((a4 + 0x4D0)), t109 == 0) && ((t110 = *(int *)((a4 + 0x500)), t110 != 0) && ((t111 = *(int *)((a4 + 0x500)), t111 != 1) && ((t112 = *(int *)((a4 + 0x4C8)), t112 != 3) && (t113 = *(int *)((a4 + 0x4DC)), t113 == 0)))))) {
            t118 = *(short *)((a4 + 0x70));
            *(unsigned short *)((a4 + 0x70)) = (t118 - 0x80);
            if ((int)(short)(t118 - 0x80) < (int)0xFFFFE800) {
                *(unsigned short *)((a4 + 0x70)) = 0xFFFFE800;
            }
        } else {
            if ((int)(*(short *)((a4 + 0x70))) > 0) {
                t122 = *(short *)((a4 + 0x70));
                *(unsigned short *)((a4 + 0x70)) = (t122 - 0x100);
                if ((int)(short)(t122 - 0x100) >= 0) {
                } else {
                    *(unsigned short *)((a4 + 0x70)) = 0x0;
                }
            } else {
                if ((int)(*(short *)((a4 + 0x70))) < 0) {
                    t125 = *(short *)((a4 + 0x70));
                    *(unsigned short *)((a4 + 0x70)) = (t125 + 0x100);
                    if ((int)(short)(t125 + 0x100) > 0) {
                        *(unsigned short *)((a4 + 0x70)) = 0x0;
                    }
                }
            }
        }
    }
    return 0x70;
}


int FUN_0c0ce136(int a4)
{
    int t0;
    int t1;
    int t2;
    float u29;
    int t58;
    int t87;
    int t61;
    int t62;
    int t26;
    int t83;

    t0 = *(int *)0xC522A28;
    t1 = *(int *)0xC5229BC;
    t2 = t1;
    if ((int)t1 > (int)t0) {
        t2 = t0;
    }
    if ((*(int *)((a4 + 0x98))) != 0) {
        if ((*(int *)0xC23EDE0) == 0) {
            FUN_0c0c7354(0xC1E9F28, 100.0f, 200.0f);
            if ((*(int *)0xC5229FC) == 1) {
                FUN_0c0c7354((*(int *)0xC1EFA04), 40.0f, 240.0f);
            } else {
                if ((*(int *)0xC5229C8) == 2) {
                    FUN_0c0c7354((*(int *)0xC1EFA04), 40.0f, 240.0f);
                }
            }
        }
        if (((*(int *)0xC204998) == 0) && (t26 = *(int *)0xC23EDE4, t26 == 0)) {
            FUN_0c0c7354(0xC1E9F34, (*(float *)0xC0CE2E0), 200.0f);
            u29 = *(float *)0xC0CE2E4;
            if ((*(int *)0xC5229FC) == 1) {
                FUN_0c0c7354((*(int *)0xC1EFA04), u29, 240.0f);
            } else {
                if ((*(int *)0xC5229C8) == 2) {
                    FUN_0c0c7354((*(int *)0xC1EFA04), u29, 240.0f);
                }
            }
        }
    }
    t58 = *(int *)0xC5229FC;
    t87 = t58;
    if (t58 != 1) {
        if ((int)(*(int *)((a4 + 0x80))) >= (int)t2) {
            t61 = FUN_0c0cddda(0x0);
            if (t61 != 1) {
                t62 = FUN_0c0cddba(0x0);
                if ((int)(*(int *)(((0x88 + a4) + 0x0))) < (int)t62) {
                    *(unsigned int *)((a4 + 0x90)) = 0x5A;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x90)) = 0x5A;
        }
        *(unsigned int *)((a4 + 0x80)) = t2;
        *(unsigned int *)(((0x88 + a4) + 0x0)) = (FUN_0c0cddba(0x0));
        if ((int)(*(int *)((a4 + 0x90))) > 0) {
            *(unsigned int *)((a4 + 0x90)) = ((*(int *)((a4 + 0x90))) - 1);
        }
        if (((*(int *)((a4 + 0x90))) == 0) && (t83 = *(int *)0xC23EDE0, t83 != 0)) {
            *(volatile int *)0xC23EDE4;
        }
        t87 = 0x90;
    }
    return t87;
}




int FUN_0c048c1e(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    int t17;
    int t8;
    int t40;
    int t49;
    int stk[8];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F676C); }
    t0 = *(int *)((a4 + 0x488));
    t1 = *(int *)((a4 + 0x3A0));
    if (t1 != 0) {
        t17 = t1;
        if (t1 != 1) {
        } else {
            *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
            *(float *)((a4 + 0x458)) = ((float)(*(int *)((a4 + 0x3AC))) / (float)(*(int *)((a4 + 0x3B0))));
            t8 = 0x458;
            if (!(1.0f > (*(float *)((a4 + 0x458))))) {
                *(float *)((a4 + 0x458)) = 1.0f;
                *(unsigned short *)((a4 + 0x454)) = 0x0;
                *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x4;
                *(unsigned int *)((a4 + 0x4D4)) = 0x0;
                t8 = (FUN_0c02a19a(a4, a5, a6, a7, *(Stk3 *)(((int)stk + 4))));
            }
            t17 = t8;
        }
        t49 = t17;
    } else {
        *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
        *(float *)((a4 + 0x458)) = ((float)(*(int *)((a4 + 0x3AC))) / (float)(*(int *)((a4 + 0x3B0))));
        t40 = 0x458;
        if ((*(float *)((a4 + 0x458))) > 0.0f) {
        } else {
            *(float *)((a4 + 0x458)) = 0.0f;
            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            if ((*(int *)((t0 + 0x0))) != 0) {
                FUN_0c045e54(a4, a5, a6);
            } else {
                FUN_0c023300(a4, a5, a6, a7);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x518 + a4)); }
            *(float *)((a4 + 0x34)) = (FUN_0c0467c2(a4, 0.0f, (*(float *)((a4 + 0x250)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)(((int)stk + 4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((int)stk + 4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x4B0 + a4)) = *(struct mv3 *)(((int)stk + 4)); }
            FUN_0c034fbc(a4, 0x400, 0x0, 0x1);
            *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x3;
            t40 = 0xC247030;
        }
        t49 = t40;
    }
    return t49;
}


int FUN_0c03eab4(int a4, int a5, int a6, int a7)
{
    int t10;
    int t27;
    int t18;
    int t33;
    int t36;
    int t34;
    int t65;
    int t75;
    int t87;
    int t104;
    int t111;
    int t123;
    int t115;
    int t120;
    int t118;
    int t2;
    int t132;
    int t94;
    int t67;
    int t55;
    int t44;
    int t89;
    int t126;
    int stk[5];

    if (((*(int *)0xC23ED50) == (*(int *)((a4 + 0x30)))) && (t2 = *(int *)((a4 + 0x34)), (unsigned int)t2 <= (unsigned int)0x8)) {
    } else {
        FUN_0c0cc3f8(0x428A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0e19f2();
    }
    t10 = *(int *)((a4 + 0x38));
    if (t10 != 0) {
        if (t10 != 1) {
            if (t10 != 2) {
                if (t10 != 3) {
                    if (t10 != 4) {
                        t27 = t10;
                        if (t10 == 5) {
                            t18 = *(int *)((a4 + 0x40));
                            *(unsigned int *)((a4 + 0x40)) = (t18 - 1);
                            if ((int)(t18 - 1) <= 0) {
                                *(unsigned int *)0xC2462FC = ((*(int *)0xC2462FC) | (*(int *)((a4 + 0x34))));
                                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) << 1);
                                *(unsigned int *)((a4 + 0x40)) = 0xA;
                            }
                            t27 = 0x40;
                        }
                        t44 = t27;
                    } else {
                        t33 = *(int *)((a4 + 0x40));
                        *(unsigned int *)((a4 + 0x40)) = (t33 - 1);
                        t36 = 0x40;
                        if ((int)(t33 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x40)) = 0x0;
                            t34 = FUN_0c0cc3f8(0x62CA9, 0xC246074, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
                            t36 = t34;
                        }
                        t44 = t36;
                    }
                    t55 = t44;
                } else {
                    FUN_0c08e9e0(0xC8);
                    FUN_0c0cc3f8(0x328A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    *(unsigned int *)((a4 + 0x40)) = 0x50;
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
                    t55 = 0x40;
                }
                t67 = t55;
            } else {
                t65 = 0x44;
                if ((int)(*(int *)(((((((*(int *)((a4 + 0x44))) << 2) << 2) << 1) + 0xC246074) + 0xC))) >= (int)0x2) {
                    *(unsigned int *)((a4 + 0x38)) = 0x3;
                    t65 = 0x3;
                }
                t67 = t65;
            }
            t94 = t67;
        } else {
            *(unsigned int *)((a4 + 0x44)) = 0xFFFFFFFF;
            t75 = 0x0;
            for (;;) {
                if ((*(int *)((((((t75 << 2) << 2) << 1) + 0xC246074) + 0x0))) == (*(int *)((a4 + 0x30)))) {
                    break;
                }
                t75 = (t75 + 0x1);
                if ((int)t75 >= (int)0x4) {
                    if ((*(int *)((a4 + 0x44))) == -1) {
                        *(unsigned int *)((a4 + 0x44)) = 0x0;
                        return 0x44;
                    }
                    if ((int)(*(int *)(((((((*(int *)((a4 + 0x44))) << 2) << 2) << 1) + 0xC246074) + 0xC))) >= (int)0x2) {
                        *(unsigned int *)((a4 + 0x38)) = 0x3;
                        return 0x3;
                    }
                    return 0x44;
                }
            }
            *(unsigned int *)((a4 + 0x44)) = t75;
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            if ((*(int *)((a4 + 0x44))) == -1) {
                *(unsigned int *)((a4 + 0x44)) = 0x0;
                t89 = 0x44;
            } else {
                t87 = 0x44;
                if ((int)(*(int *)(((((((*(int *)((a4 + 0x44))) << 2) << 2) << 1) + 0xC246074) + 0xC))) >= (int)0x2) {
                    *(unsigned int *)((a4 + 0x38)) = 0x3;
                    t87 = 0x3;
                }
                t89 = t87;
            }
            t94 = t89;
        }
        t132 = t94;
    } else {
        t104 = *(int *)((0xC247030 + ((*(int *)((a4 + 0x3C))) << 2)));
        if (t104 == 5) {
            *(unsigned int *)((a4 + 0x38)) = 0x1;
            t126 = t104;
        } else {
            t111 = *(int *)(((((*(int *)((a4 + 0x3C))) << 2) + 0xC246FF0) + 0x0));
            t123 = 0x2BC;
            if ((*(int *)((t111 + 0x2BC))) == 0xF3) {
                t115 = *(int *)((t111 + 0x2B4));
                t120 = t115;
                if (t115 == 19) {
                    t118 = 0x2AC;
                    if ((*(int *)((t111 + 0x2AC))) != 0) {
                    } else {
                        *(unsigned int *)((a4 + 0x38)) = 0x3;
                        t118 = 0x3;
                    }
                    t120 = t118;
                }
                t123 = t120;
            }
            t126 = t123;
        }
        t132 = t126;
    }
    return t132;
}


