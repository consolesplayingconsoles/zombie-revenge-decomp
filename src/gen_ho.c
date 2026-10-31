/* Straight-line functions with calls and guards (batch gen_ho): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c052268(int);
int FUN_0c0553b6(int, int, int);
int FUN_0c05561a(int, int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c08a3d4(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c08c610(int, int);
int FUN_0c08c7c0(float, float);
int FUN_0c0955c0(int);
int FUN_0c0a5222(int, int, int, int, float);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c473c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c64aa(void);
int FUN_0c0cc3f8(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e16c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e6248(void);
int FUN_0c20f29a(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int syChainAddHandler(int, int, int, int);
int FUN_0c058478(int a4, int a5, int a6, int a7);
int FUN_0c20f2c4(void);
int FUN_0c08c7f8(int a4, int a5, int a6, int a7);
int FUN_0c05235c(int a4);
int FUN_0c0abb34(void);
int FUN_0c0b6da4(int a4);
int FUN_0c0a53da(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c058478(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        FUN_0c0e19f2(a4, a5, a6, a7);
                    }
                } else {
                    t0 = *(int *)((a4 + 0x98));
                    *(unsigned int *)((a4 + 0x98)) = (t0 + 0x200);
                    *(unsigned short *)((a4 + 0x60)) = (int)((-((FUN_0c0da410((t0 + 0x200))) * 16384.0f)) + 27648.0f);
                    if ((int)(unsigned short)(*(short *)((a4 + 0x60))) < (int)0x6D00) {
                    } else {
                        *(unsigned int *)(((a4 + 0x68) + 0x0)) = 0x2000;
                        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 5.0f);
                        t0 = 0x34;
                        t1 = 0x0;
                        t2 = 0xC247AF4;
                        t3 = 0xC247AF4;
                        t4 = 0xC247AF4;
                        for (;;) {
                            if ((int)t1 >= (int)0x3) {
                                break;
                            }
                            t0 = (FUN_0c0a6800((*(int *)(((a4 + 0x68) + 0x0))), (a4 + 0x48), 0.0f, 1.0f, (-1.0f)));
                            t0 = 0xC247AF4;
                            *(unsigned int *)(((a4 + 0x68) + 0x0)) = ((*(int *)(((a4 + 0x68) + 0x0))) + 0x6000);
                            if ((int)(unsigned short)(*(short *)(((t1 << 1) + t0))) >= (int)0x16) {
                                t0 = (FUN_0c0553b6((unsigned short)(*(short *)((t4 + 0x0))), 0x3, (a4 + 0x30)));
                                t0 = 0x30;
                                t0 = (t0 + a4);
                                t5 = t0;
                                t0 = (FUN_0c0da2e0());
                                t0 = (t0 & 0x3);
                                t6 = t0;
                                t0 = 0x38;
                                t0 = (t0 + a4);
                                *(float *)((t5 + 0x0)) = ((*(float *)((t5 + 0x0))) + (float)t6);
                                t5 = t0;
                                t0 = (FUN_0c0da2e0());
                                t0 = (t0 & 0x3);
                                *(float *)((t5 + 0x0)) = ((*(float *)((t5 + 0x0))) + (float)t0);
                                t0 = (FUN_0c0553b6((unsigned short)(*(short *)((t4 + 0x0))), 0x3, (a4 + 0x30)));
                                t0 = 0x30;
                                t0 = (t0 + a4);
                                t5 = t0;
                                t0 = (FUN_0c0da2e0());
                                t0 = (t0 & 0x3);
                                t6 = t0;
                                t0 = 0x38;
                                t0 = (t0 + a4);
                                *(float *)((t5 + 0x0)) = ((*(float *)((t5 + 0x0))) + (float)t6);
                                t5 = t0;
                                t0 = (FUN_0c0da2e0());
                                t0 = (t0 & 0x3);
                                *(float *)((t5 + 0x0)) = ((*(float *)((t5 + 0x0))) + (float)t0);
                                t0 = (FUN_0c0553b6((unsigned short)(*(short *)((t4 + 0x0))), 0x3, (a4 + 0x30)));
                            } else {
                                t0 = (FUN_0c05561a(0x0, (unsigned short)(*(short *)((t2 + 0x0))), (a4 + 0x30), (a4 + 0x48)));
                            }
                            *(unsigned short *)((t3 + 0x0)) = 0x0;
                            t2 = (t2 + 0x2);
                            t4 = (t4 + 0x2);
                            t1 = (t1 + 0x1);
                            t3 = (t3 + 0x2);
                        }
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    }
                }
            } else {
                *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + -0.0599999987f);
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
                u0 = FUN_0c01f1b8((a4 + 0x30), (a4 + 0x3C));
                if (!(u0 > ((*(float *)((a4 + 0x34))) + -5.0f))) {
                } else {
                    *(float *)((a4 + 0x58)) = 0.699999988f;
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                }
            }
        } else {
            *(unsigned int *)0xC2475B0 = ((*(int *)0xC2475B0) & 0xFFFFFFEF);
            *(volatile int *)0xC247030;
            t0 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0xC205CB8 + ((((t0 << 1) + t0) << 2) << 1))); }
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 40.0f);
            *(float *)((a4 + 0x54)) = 1.0f;
            *(float *)((a4 + 0x58)) = 1.0f;
            *(float *)((a4 + 0x5C)) = 1.0f;
            *(unsigned short *)((a4 + 0x60)) = 0x2800;
            *(unsigned int *)((a4 + 0x98)) = 0x4000;
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAX((*(short *)((a4 + 0x60))));
        FUN_0c0dcc70(0.0f, (1.0f + 1.0f), 0.0f);
        nlScale((*(float *)((a4 + 0x54))), (*(float *)((a4 + 0x58))), (*(float *)((a4 + 0x5C))));
        FUN_0c0de000((1.0f + 1.0f));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        return nlPopMatrix(0x1);
    }
    t0 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
    t1 = 0xA0;
    if ((int)(t0 - 1) > 0) {
    } else {
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t1 = 0x80;
    }
    return t1;
}

int FUN_0c20f2c4(void)
{
    int stk[18];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 8) + 0x18) + 0x4);
    v0_0 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 24)) = 0xC94D98C;
    *(unsigned int *)(((int)stk + 8)) = 0xC94D98E;
    *(unsigned int *)(((int)stk + 12)) = 0xC94D98F;
    *(unsigned int *)(((int)stk + 20)) = v0_0;
    _builtin_set_imask(0xF);
    v0_3 = ((((int)stk + 8) + 0x18));
    v0_2 = (0xC2393C8);
    v0_1 = (0xC222164);
    v0_0 = (0xC2393C4);
    v0_4 = (0xC94D98F);
    v0_5 = (0xC94D980);
    if (((*(int *)0xC2393C8) != 0)) goto L_C20F322;
    *(unsigned int *)((v0_2 + 0x0)) = (syChainAddHandler(0x900, 0xC20F28C, 0x50, (*(int *)((v0_0 + 0x0)))));
    L_C20F322:;
    v0_2 = (0xC2393CC);
    if (((*(int *)0xC2393CC) != 0)) goto L_C20F338;
    *(unsigned int *)((v0_2 + 0x0)) = (syChainAddHandler(0xA40, 0xC20F272, 0x10, (*(int *)((v0_0 + 0x0)))));
    L_C20F338:;
    v0_6 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (0xC2218C2);
    v0_1 = (v0_6);
    if ((v0_6 == 0)) goto L_C20F3BA;
    v0_2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x1C)))))(v0_4, R5, R6, R7);
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C20F3BA;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_4;
    *(unsigned short *)((v0_1 + 0x50)) = 0x4;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_1;
    v0_2 = gdFsWaitCompleteReq(v0_1);
    v0_1 = (((int (*)(int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x20)))))(v0_3)) == 0;
    v0_3 = (v0_2);
    v0_6 = (0x4);
    if (v0_1) goto L_C20F3BA;
    if ((v0_3 == 0)) goto L_C20F39A;
    if (!((v0_3 == -29))) goto L_C20F57A;
    if (((*(int *)(((int)stk + 32))) == 6)) goto L_C20F396;
    goto L_C20F57A;
    L_C20F57A:;
    v0_4 = (v0_3);
    L_C20F5A6:;
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 20))) & 0xF) << 2) << 2) >> 4));
    return v0_4;
    L_C20F396:;
    R5 = (0xFFFFFFE9);
    L_C20F592:;
    v0_4 = (R5);
    goto L_C20F5A6;
    L_C20F39A:;
    if (!(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) == 0x80))) goto L_C20F590;
    v0_1 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C20F3EC;
    goto L_C20F3BA;
    L_C20F590:;
    R5 = (0xFFFFFFFB);
    goto L_C20F592;
    L_C20F3BA:;
    R5 = (0xFFFFFFFE);
    goto L_C20F592;
    L_C20F3EC:;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x2C)) = 0x0;
    v0_3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x4C)))))(v0_5, R5, R6, R7);
    v0_1 = (0x0);
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C20F448;
    *(unsigned int *)((v0_2 + 0x3C)) = v0_4;
    *(unsigned short *)((v0_2 + 0x50)) = v0_6;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x1C)) = v0_2;
    v0_2 = gdFsWaitCompleteReq(v0_2);
    v0_4 = (v0_2);
    if ((v0_2 != 0)) goto L_C20F448;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 24))) + 0x0))) - 48) << 16));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) - 48) << 8));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | ((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))) - 48));
    L_C20F448:;
    v0_2 = (gdFsReadWG((*(int *)0xC236694), 0x1, ((*(int *)((v0_0 + 0x0))) + 0x40))) == 0;
    if (!(v0_2)) goto L_C20F582;
    v0_2 = (gdFsCheckMedia(((*(int *)((v0_0 + 0x0))) + 0x40))) != 0;
    if (v0_2) goto L_C20F46C;
    goto L_C20F590;
    L_C20F582:;
    R5 = (0xFFFFFFFC);
    goto L_C20F592;
    L_C20F46C:;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 4) = (0x4 + v0_2);
    *(unsigned int *)(((0x4 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x8C)));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x4)) = ((*(int *)((v0_2 + 0x4))) + 0x96);
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 4) = (0x8 + v0_2);
    *(unsigned int *)(((0x8 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x84)));
    *(unsigned int *)0xC94D9B8 = 0xC94D9A0;
    *(unsigned short *)0xC94D9A0 = (*(signed char *)0x8C0080FC);
    v0_3 = (0x96);
    v0_2 = (0xC94D9B8);
    v0_4 = (0x8C0080F0);
    if (((*(short *)(((*(int *)0xC94D9B8) + 0x0))) != 1)) goto L_C20F4E0;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x2)) = (*(signed char *)((v0_4 + 0xD)));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_1;
    v0_5 = v0_4;
    v0_4 = (v0_1);
    R5 = v0_5;
    R6 = (((*(int *)((v0_2 + 0x0))) + 0x8));
    L_C20F4CA:;
    if (((*(signed char *)((R5 + 0x0))) == 32)) goto L_C20F4DE;
    *(unsigned char *)((R6 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    v0_5 = (int)(v0_4 + 0x1) < (int)0xC;
    v0_4 = ((v0_4 + 0x1));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    if (v0_5) goto L_C20F4CA;
    L_C20F4DE:;
    *(unsigned char *)((R6 + 0x0)) = v0_1;
    L_C20F4E0:;
    v0_4 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x9E));
    v0_5 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0xA6));
    *(unsigned int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x8)) = v0_1;
    v0_4 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), (v0_4 + v0_3), (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), v0_5);
    v0_3 = (v0_4);
    if ((v0_4 == -12)) goto L_C20F57A;
    if ((v0_3 != 0)) goto L_C20F582;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) == 0)) goto L_C20F590;
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_3 = (v0_4);
    if (((*(short *)((v0_4 + 0x0))) != 1)) goto L_C20F59C;
    v0_3 = (gdFsGetDirInfoG((v0_3 + 0x8), (((int)stk + 8) + 0x14))) != 0;
    if (v0_3) goto L_C20F582;
    v0_3 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_3;
    v0_2 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), v0_3, (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), 0x1);
    v0_3 = (v0_2);
    if ((v0_2 != -12)) goto L_C20F57E;
    goto L_C20F57A;
    L_C20F57E:;
    if ((v0_3 == 0)) goto L_C20F586;
    goto L_C20F582;
    L_C20F586:;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) != 0)) goto L_C20F596;
    goto L_C20F590;
    L_C20F596:;
    FUN_0c20f29a((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))));
    L_C20F59C:;
    *(unsigned short *)(((*(int *)((v0_0 + 0x0))) + 0x38)) = 0x1;
    v0_4 = (v0_1);
    goto L_C20F5A6;
}

int FUN_0c08c7f8(int a4, int a5, int a6, int a7)
{
    int stk[26];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F5;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_6 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 20)) = 0xC246FF0;
    FUN_0c0685a4(v0_6, v0_0, v0_1, a7);
    v0_2 = *(int *)0xC23A258;
    *(unsigned int *)(((int)stk + 16)) = (v0_2 & 0x1);
    *(unsigned int *)(((int)stk + 8)) = ((((v0_2 & 0x1) + 0x1) & 0x1) << 2);
    v0_0 = (v0_6);
    v0_1 = (0x0);
    v0_2 = (((v0_2 & 0x1) << 2));
    w0_0 = (0.139999986f);
    w0_1 = (4.0f);
    L_C08C838:;
    v0_3 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (v0_3 + 0x4);
    v0_3 = *(int *)((((v0_3 + 0x4) - 4) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = (v0_1 << 2);
    v0_6 = (v0_3);
    if (!(((*(int *)(((v0_1 << 2) + 0xC247030))) == 4))) goto L_C08CAD2;
    v0_4 = ((((((((v0_1 << 1) + v0_1) << 2) << 2) << 2) + 0xC23F268) + 0x54));
    v0_3 = ((((((((v0_1 << 1) + v0_1) << 2) << 2) << 2) + 0xC23F268) + 0x6C));
    v0_5 = (((((((v0_1 << 1) + v0_1) << 2) << 2) << 2) + 0xC23F268));
    if (((*(float *)((v0_6 + 0x34))) > w0_0)) goto L_C08C87A;
    goto L_C08CAD2;
    L_C08CAD2:;
    v0_3 = (int)(v0_1 + 0x1) >= (int)0xC;
    v0_1 = ((v0_1 + 0x1));
    if (v0_3) goto L_C08CADE;
    goto L_C08C838;
    L_C08CADE:;
    return FUN_0c0e16c0((*(int *)((v0_0 + 0x30))));
    L_C08C87A:;
    *(unsigned int *)(((int)stk + 4)) = (((v0_1 << 1) + v0_1) << 2);
    if ((((*(int *)0xC23A258) & 0xF) != v0_1)) goto L_C08C8B0;
    FUN_0c08a3d4(v0_0, v0_4, ((v0_0 + 0x34) + (*(int *)(((int)stk + 4)))), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c08a3d4(v0_0, v0_3, ((0xC4 + v0_0) + (*(int *)(((int)stk + 4)))), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    L_C08C8B0:;
    w0_2 = *(float *)((v0_5 + 0x0));
    w0_3 = *(float *)(((0x8 + v0_5) + 0x0));
    w0_3 = ((w0_3 - (*(float *)(((0x8 + ((((v0_1 << 1) + v0_1) << 2) + (0x154 + v0_0))) + 0x0)))) * (w0_3 - (*(float *)(((0x8 + ((((v0_1 << 1) + v0_1) << 2) + (0x154 + v0_0))) + 0x0)))));
    w0_3 = w0_3 + (w0_2 - (*(float *)((((((v0_1 << 1) + v0_1) << 2) + (0x154 + v0_0)) + 0x0)))) * (w0_2 - (*(float *)((((((v0_1 << 1) + v0_1) << 2) + (0x154 + v0_0)) + 0x0))));
    *(float *)((v0_2 + ((0x2A4 + v0_0) + ((v0_1 << 2) << 1)))) = _builtin_sqrtf(w0_3);
    w0_3 = *(float *)((v0_4 + 0x0));
    w0_2 = *(float *)(((0x8 + v0_4) + 0x0));
    w0_2 = ((w0_2 - (*(float *)(((0x8 + ((((v0_1 << 1) + v0_1) << 2) + (v0_0 + 0x34))) + 0x0)))) * (w0_2 - (*(float *)(((0x8 + ((((v0_1 << 1) + v0_1) << 2) + (v0_0 + 0x34))) + 0x0)))));
    w0_2 = w0_2 + (w0_3 - (*(float *)((((((v0_1 << 1) + v0_1) << 2) + (v0_0 + 0x34)) + 0x0)))) * (w0_3 - (*(float *)((((((v0_1 << 1) + v0_1) << 2) + (v0_0 + 0x34)) + 0x0))));
    v0_7 = (((0x1E4 + v0_0) + ((v0_1 << 2) << 1)));
    v0_6 = (((v0_1 << 2) << 1));
    w0_2 = (_builtin_sqrtf(w0_2));
    *(float *)((v0_2 + v0_7)) = w0_2;
    w0_2 = *(float *)((v0_3 + 0x0));
    w0_3 = *(float *)(((0x8 + v0_3) + 0x0));
    w0_4 = ((w0_3 - (*(float *)(((0x8 + ((((v0_1 << 1) + v0_1) << 2) + (0xC4 + v0_0))) + 0x0)))) * (w0_3 - (*(float *)(((0x8 + ((((v0_1 << 1) + v0_1) << 2) + (0xC4 + v0_0))) + 0x0)))));
    w0_4 = w0_4 + (w0_2 - (*(float *)((((((v0_1 << 1) + v0_1) << 2) + (0xC4 + v0_0)) + 0x0)))) * (w0_2 - (*(float *)((((((v0_1 << 1) + v0_1) << 2) + (0xC4 + v0_0)) + 0x0))));
    *(float *)((v0_2 + ((0x244 + v0_0) + v0_6))) = _builtin_sqrtf(w0_4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x154 + v0_0) + (*(int *)(((int)stk + 4))))) = *(struct mv3 *)(v0_5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((v0_0 + 0x34) + (*(int *)(((int)stk + 4))))) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xC4 + v0_0) + (*(int *)(((int)stk + 4))))) = *(struct mv3 *)(v0_3); }
    w0_2 = (w0_3);
    if (((*(int *)(((int)stk + 16))) == 0)) goto L_C08CAD2;
    if (((int)(*(int *)((((0x364 + v0_0) + (*(int *)(((int)stk + 12)))) + 0x0))) >= (int)0x3)) goto L_C08CAD2;
    if (((*(float *)((v0_5 + 0x4))) > w0_1)) goto L_C08CA8A;
    *(unsigned int *)(((int)stk + 4)) = ((0x2A4 + v0_0) + v0_6);
    v0_7 = (FUN_0c08c7c0((*(float *)(((((0x2A4 + v0_0) + v0_6) + v0_2) + 0x0))), (*(float *)((((0x2A4 + v0_0) + v0_6) + (*(int *)(((int)stk + 8)))))))) == 0;
    if (v0_7) goto L_C08CA8A;
    FUN_0c08c610(v0_5, v0_1);
    L_C08CA8A:;
    if (((*(float *)((v0_4 + 0x4))) > w0_1)) goto L_C08CAAE;
    v0_5 = (FUN_0c08c7c0((*(float *)((v0_2 + ((0x1E4 + v0_0) + v0_6)))), (*(float *)((((0x1E4 + v0_0) + v0_6) + (*(int *)(((int)stk + 8)))))))) == 0;
    if (v0_5) goto L_C08CAAE;
    FUN_0c08c610(v0_4, v0_1);
    L_C08CAAE:;
    if (((*(float *)((v0_3 + 0x4))) > w0_1)) goto L_C08CAD2;
    v0_4 = (FUN_0c08c7c0((*(float *)((v0_2 + ((0x244 + v0_0) + v0_6)))), (*(float *)((((0x244 + v0_0) + v0_6) + (*(int *)(((int)stk + 8)))))))) == 0;
    if (v0_4) goto L_C08CAD2;
    FUN_0c08c610(v0_3, v0_1);
    goto L_C08CAD2;
}

int FUN_0c05235c(int a4)
{
    int stk[14];
    int t28;

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F0;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register float F12;
    register float F13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_6 = a4;
    v0_4 = *(int *)((v0_6 + 0x38));
    *(unsigned int *)(((int)stk + 4)) = 0x4;
    v0_7 = (0xC052440);
    v0_0 = (0xC2475B0);
    v0_1 = (v0_6);
    v0_2 = (0xC0F8864);
    v0_3 = ((v0_6 + 0x3C));
    w0_0 = (((-((float)v0_4 * 32.0f)) + 16.0f));
    w0_1 = (32.0f);
    if (((*(int *)0xC23EDB0) == 0)) goto L_C0523A6;
    L_C052640:;
    return v0_7;
    L_C0523A6:;
    w0_2 = 0.35471347f;
    w0_2 = w0_2 + 0.849426925f * (*(float *)0xC2475B8);
    *(float *)((v0_1 + 0x80)) = w0_2;
    nlPushMatrix(0x0);
    L_C0523BE:;
    *(float *)((v0_1 + 0x7C)) = ((w0_0 + w0_1) * 0.00265445886f);
    v0_8 = *(short *)((v0_3 + 0x0));
    v0_7 = (v0_8);
    v0_4 = (0x1000);
    v0_6 = (0x2);
    v0_5 = (0x2000);
    w0_2 = (0.00265445886f);
    if ((v0_8 == 0)) goto L_C05245C;
    if ((v0_7 == 1)) goto L_C05249C;
    if (!((v0_7 != 2))) goto L_C0524E8;
    if ((v0_7 != 3)) goto L_C0523EC;
    if (((int)(*(short *)((v0_3 + 0x4))) <= 0)) goto L_C0525A8;
    *(unsigned short *)((v0_3 + 0x4)) = ((*(short *)((v0_3 + 0x4))) - 0x199);
    goto L_C0525A8;
    L_C0524E8:;
    if ((((*(short *)((v0_2 + 0x0))) & (*(int *)((v0_0 + 0x0)))) != 0)) goto L_C05250E;
    if (((*(short *)((v0_2 + 0x0))) != 8)) goto L_C052504;
    *(unsigned short *)((v0_3 + 0x0)) = 0x3;
    *(unsigned short *)((v0_3 + 0x2)) = 0x5A;
    L_C05250E:;
    t28 = *(int *)0xC23ED88;
    v0_6 = (t28);
    v0_7 = (0xC23ED88);
    if ((((*(int *)((v0_2 + 0x4))) & t28) == 0)) goto L_C052524;
    if ((((*(int *)0xC23A258) & 3) != 0)) goto L_C052524;
    L_C052622:;
    w0_0 = ((w0_0 + w0_1));
    L_C052624:;
    v0_4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_4 - 1);
    v0_2 = ((v0_2 + 0x10));
    v0_3 = ((v0_3 + 0x10));
    if (((v0_4 - 1) == 0)) goto L_C052636;
    goto L_C0523BE;
    L_C052636:;
    v0_2 = nlPopMatrix(0x1);
    *(unsigned int *)((v0_1 + 0x34)) = (*(int *)((v0_0 + 0x0)));
    v0_7 = (v0_2);
    goto L_C052640;
    L_C052524:;
    if (((v0_6 & (*(int *)((v0_2 + 0x4)))) != 0)) goto L_C052530;
    if (!(((*(short *)((v0_3 + 0x0))) == 2))) goto L_C052530;
    v0_6 = ((int (*)(int, int, int, float, float, float))((*(int *)((v0_2 + 0xC)))))(v0_3, v0_7, R6, w0_2, F5, F6);
    goto L_C052556;
    L_C052530:;
    FUN_0c052268(v0_3);
    L_C052556:;
    nlUnitMatrix();
    FUN_0c0dcca0((v0_1 + 0x7C));
    nlRotateAY((*(short *)((v0_3 + 0x6))));
    nlRotateAZ(v0_4);
    nlRotateAX(v0_5);
    w0_2 = *(float *)((v0_3 + 0xC));
    nlScale(w0_2, w0_2, w0_2);
    FUN_0c0de000((*(float *)((v0_3 + 0xC))));
    FUN_0c0c473c((*(short *)((v0_2 + 0x2))));
    goto L_C052622;
    L_C052504:;
    *(unsigned short *)((v0_3 + 0x0)) = 0x0;
    *(unsigned int *)((v0_1 + 0x38)) = ((*(int *)((v0_1 + 0x38))) - 1);
    goto L_C05250E;
    L_C0525A8:;
    v0_6 = *(short *)((v0_3 + 0x2));
    *(unsigned short *)((v0_3 + 0x2)) = (v0_6 - 1);
    if (((int)(short)(v0_6 - 1) >= 0)) goto L_C0525BE;
    *(unsigned short *)((v0_3 + 0x0)) = 0x0;
    *(unsigned int *)((v0_1 + 0x38)) = ((*(int *)((v0_1 + 0x38))) - 1);
    L_C0525BE:;
    w0_2 = *(float *)((v0_2 + 0x8));
    w0_3 = w0_2;
    w0_3 = w0_3 + (*(float *)0xC0526A4) * (w0_2 * (FUN_0c0d9e90((*(short *)((v0_3 + 0x4))))));
    *(float *)((v0_3 + 0xC)) = w0_3;
    *(unsigned short *)((v0_3 + 0x6)) = ((*(short *)((v0_3 + 0x6))) + 0x1234);
    nlUnitMatrix();
    FUN_0c0dcca0((v0_1 + 0x7C));
    nlRotateAY((*(short *)((v0_3 + 0x6))));
    nlRotateAZ(v0_4);
    nlRotateAX(v0_5);
    w0_2 = *(float *)((v0_3 + 0xC));
    nlScale(w0_2, w0_2, w0_2);
    FUN_0c0de000((*(float *)((v0_3 + 0xC))));
    FUN_0c0c465c((*(short *)((v0_2 + 0x2))));
    goto L_C052622;
    L_C0523EC:;
    goto L_C052624;
    L_C05249C:;
    w0_3 = *(float *)((v0_2 + 0x8));
    w0_4 = w0_3;
    w0_4 = w0_4 + 10.0f * (w0_3 * (FUN_0c0d9e90((*(short *)((v0_3 + 0x4))))));
    *(float *)((v0_3 + 0xC)) = w0_4;
    *(unsigned short *)((v0_3 + 0x6)) = ((*(short *)((v0_3 + 0x6))) + v0_4);
    if (((*(short *)((v0_3 + 0x2))) != 0)) goto L_C0524E2;
    v0_7 = *(short *)((v0_3 + 0x4));
    *(unsigned short *)((v0_3 + 0x4)) = (v0_7 + 0x199);
    if (((int)(short)(v0_7 + 0x199) < (int)0x3FFF)) goto L_C0524E8;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    *(float *)((v0_3 + 0xC)) = (*(float *)((v0_2 + 0x8)));
    goto L_C0524E8;
    L_C0524E2:;
    *(unsigned short *)((v0_3 + 0x2)) = ((*(short *)((v0_3 + 0x2))) - 1);
    goto L_C0524E8;
    L_C05245C:;
    if ((((*(short *)((v0_2 + 0x0))) & (*(int *)((v0_0 + 0x0)))) != 0)) goto L_C052468;
    goto L_C052624;
    L_C052468:;
    if ((((*(short *)((v0_2 + 0x0))) & (*(int *)((v0_1 + 0x34)))) == 0)) goto L_C05247C;
    *(unsigned short *)((v0_3 + 0x0)) = v0_6;
    *(float *)((v0_3 + 0xC)) = (*(float *)((v0_2 + 0x8)));
    L_C052494:;
    *(unsigned int *)((v0_1 + 0x38)) = ((*(int *)((v0_1 + 0x38))) + 0x1);
    goto L_C052624;
    L_C05247C:;
    *(unsigned short *)((v0_3 + 0x0)) = 0x1;
    *(unsigned short *)((v0_3 + 0x2)) = 0x3C;
    v0_6 = (0x3C);
    if (((*(short *)((v0_2 + 0x0))) != 1)) goto L_C052494;
    FUN_0c0c64aa();
    goto L_C052494;
}

int FUN_0c0abb34(void)
{
    int stk[12];
    register int t2;
    register int t17;
    register int t22;
    register int t23;
    register int t24;
    register int t26;
    register float u31;
    register int t36;

    *(unsigned int *)(((int)stk + 28)) = (*(int *)0xC10E46C);
    t2 = FUN_0c0e19aa(0xC0B35E4, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x4)) = 0xC0A8D2C;
    *(unsigned int *)((t2 + 0xBC)) = (*(signed char *)0xC10E458);
    *(unsigned int *)(((0xC0 + t2) + 0x0)) = (*(signed char *)0xC10E459);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(0xC10E460); }
    *(float *)(((0x468 + t2) + 0x8)) = 1.0f;
    *(float *)(((0x468 + t2) + 0x4)) = 1.0f;
    *(float *)(((0x468 + t2) + 0x0)) = 1.0f;
    *(float *)(((0x45C + t2) + 0x8)) = 1.0f;
    *(float *)(((0x45C + t2) + 0x4)) = 1.0f;
    *(float *)(((0x45C + t2) + 0x0)) = 1.0f;
    *(float *)((t2 + 0x284)) = 1.0f;
    *(float *)((t2 + 0x27C)) = 1.0f;
    *(float *)((t2 + 0x278)) = 1.0f;
    *(float *)((t2 + 0x274)) = 1.0f;
    *(unsigned int *)(((((*(int *)((t2 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t2;
    *(unsigned int *)(((((*(int *)((t2 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
    FUN_0c0855ba(t2);
    FUN_0c085638(t2);
    FUN_0c0ba6e8(t2);
    FUN_0c0ba776(t2);
    FUN_0c0bb0f4(t2);
    FUN_0c0955c0(t2);
    FUN_0c0b359e(t2, (*(int *)(((int)stk + 28))));
    t17 = FUN_0c0e19aa(0xC0ABC14, 0x40, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t17);
    *(unsigned int *)((t17 + 0x30)) = t2;
    *(unsigned int *)((t17 + 0x38)) = 0x25A;
    *(float *)((t17 + 0x3C)) = 1.0f;
    *(int *)((int)stk + 44) = (t2);
    *(int *)((int)stk + 40) = (t17);
    *(float *)(((int)stk + 16)) = 1.0f;
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0xE;
    t22 = 0xC10E470;
    for (;;) {
        t23 = FUN_0c0da2e0();
        t24 = FUN_0c0da2e0();
        t26 = FUN_0c0e19aa(0xC0ABE80, 0x5C, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t26);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t26 + 0x34)) = *(struct mv3 *)(t22); }
        FUN_0c0e6248();
        *(unsigned int *)(((0x54 + t26) + 0x0)) = (unsigned short)(*(short *)((t22 + 0x12)));
        u31 = 2.5f;
        u31 = u31 + 4.99999987e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t26 + 0x48)) = u31;
        nlUnitMatrix();
        nlRotateAY((((t23 & 0x1FFF) - 4096) << 1));
        nlRotateAX(((((t24 & 0x1FFF) - 4096) << 1) - 3640));
        FUN_0c0db470((t26 + 0x40), (t26 + 0x40));
        t36 = *(int *)(((int)stk + 4));
        t22 = (t22 + 0x14);
        *(unsigned int *)(((int)stk + 4)) = (t36 - 1);
        if ((t36 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return FUN_0c0cc3f8(0xD28A9);
}

int FUN_0c0b6da4(int a4)
{
    int stk[16];
    register int t0;
    register int t1;
    register float u2;
    register float u9;
    register int t10;
    register int t11;
    register int t12;
    int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t54;
    register int t84;
    register float u85;
    register float u89;
    register int t90;
    register float u93;
    register float u95;
    register int t96;
    register int t97;
    register float u98;
    register int t99;
    register int t100;
    register int t106;
    register int t107;
    register int t109;
    register int t110;
    register int t112;
    register int t113;
    register int t114;
    register int t115;
    register int t125;
    register int t132;
    register int t127;
    register int t129;
    register int t128;
    register int t26;
    register int t27;
    register int t19;
    register int t20;
    register int t14;
    register int t15;

    t0 = *(int *)((a4 + 0x308));
    t1 = *(int *)((a4 + 0x314));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
            } else {
                u2 = *(float *)((a4 + 0x254));
                *(float *)((a4 + 0x254)) = (u2 + 0.049999997f);
                if (!(1.0f > (u2 + 0.049999997f))) {
                    *(unsigned int *)((a4 + 0x314)) = 0x0;
                }
            }
        } else {
            u9 = *(float *)((a4 + 0x254));
            *(float *)((a4 + 0x254)) = (u9 - 0.049999997f);
            if (!((u9 - 0.049999997f) > 0.0f)) {
                t10 = *(int *)((a4 + 0x314));
                *(unsigned int *)((a4 + 0x314)) = (t10 + 0x1);
                t11 = *(int *)((a4 + 0x30C));
                t12 = *(int *)((a4 + 0x310));
                *(unsigned int *)((a4 + 0x228)) = (t12 + t11);
                t14 = (t12 + t11);
                t15 = (t10 + 0x1);
            }
            t19 = t14;
            t20 = t15;
        }
        t26 = t19;
        t27 = t20;
    }
    t32 = t26;
    t33 = t27;
    t34 = 0x0;
    t35 = (0x324 + a4);
    t36 = (0x318 + a4);
    t37 = (0x318 + a4);
    for (;;) {
        t38 = *(int *)(((0x318 + a4) + (t34 << 2)));
        if (t38 != 0) {
            if (t38 != 1) {
                if (t38 != 2) {
                    if (t38 != 3) {
                    } else {
                        t33 = (*(int *)0xC23A258);
                        if ((t33 & 0x1) != 0) {
                            t54 = *(int *)((t35 + 0x0));
                            *(unsigned int *)((t35 + 0x0)) = (t54 - 1);
                            if ((int)(t54 - 1) <= 0) {
                                *(unsigned int *)((t37 + 0x0)) = 0x0;
                            }
                        }
                    }
                } else {
                    t33 = t34;
                    t33 = (t33 << 2);
                    t32 = (*(int *)0xC24989C);
                    if (((*(int *)((t33 + 0xC11220C))) & t32) == 0) {
                        *(unsigned int *)((t36 + 0x0)) = 0x3;
                    }
                }
            } else {
                t33 = (*(int *)0xC23A258);
                if ((t33 & 0x1) != 0) {
                    t33 = 0x324;
                    t33 = (t33 + a4);
                    t32 = (*(int *)((((t34 << 2) + t33) + 0x0)));
                    t32 = (t32 + 0x1);
                    *(unsigned int *)((((t34 << 2) + t33) + 0x0)) = t32;
                    if ((int)t32 >= (int)0x2) {
                        t33 = 0x318;
                        t32 = t34;
                        t32 = (t32 << 2);
                        t33 = (t33 + a4);
                        t32 = (t32 + t33);
                        *(unsigned int *)((t32 + 0x0)) = 0x2;
                    }
                }
            }
        } else {
            t33 = t34;
            t33 = (t33 << 2);
            t32 = (*(int *)0xC24989C);
            if (((*(int *)((t33 + 0xC11220C))) & t32) != 0) {
                t33 = 0x318;
                t33 = (t33 + a4);
                *(unsigned int *)((((t34 << 2) + t33) + 0x0)) = 0x1;
            }
        }
        t34 = (t34 + 0x1);
        t35 = (t35 + 0x4);
        t37 = (t37 + 0x4);
        t36 = (t36 + 0x4);
        if ((int)t34 >= (int)0x3) {
            break;
        }
    }
    t84 = ((int (*)(int, float))(FUN_0c0c0340))((0x2D0 + a4), 0.049999997f);
    u85 = *(float *)0xC112230;
    *(float *)((a4 + 0x270)) = (u85 / 1024.0f);
    *(float *)((a4 + 0x274)) = ((*(float *)0xC112234) / 128.0f);
    *(float *)((a4 + 0x268)) = (*(float *)0xC11222C);
    *(unsigned int *)(((int)stk + 4)) = 0xC112218;
    *(unsigned int *)(((int)stk + 8)) = 0xC112228;
    *(unsigned int *)(((int)stk + 12)) = 0xC112228;
    for (;;) {
        u89 = *(float *)(((*(int *)(((int)stk + 12))) + 0x0));
        t90 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t90 + 0x4);
        *(unsigned int *)((a4 + 0x294)) = (*(int *)((((t90 + 0x4) - 4) + 0x0)));
        u93 = (u85 / 1024.0f);
        if (((*(int *)((a4 + 0x294))) & 16) == 0) {
            u93 = (-(u85 / 1024.0f));
        }
        *(unsigned int *)((a4 + 0x260)) = 0x2074;
        u95 = u89;
        u95 = u95 + 256.0f * u93;
        *(float *)((a4 + 0x264)) = u95;
        t96 = ((int (*)(int))(FUN_0c0c0340))((0x260 + a4));
        *(unsigned int *)((a4 + 0x260)) = 0x2075;
        t97 = 0x3;
        for (;;) {
            u98 = u89;
            u98 = u98 + 64.0f * ((float)t97 * u93);
            *(float *)((a4 + 0x264)) = u98;
            t99 = ((int (*)(int))(FUN_0c0c0340))((0x260 + a4));
            t100 = (t97 == 0);
            t97 = (t97 - 1);
            if (t100) {
                break;
            }
        }
        if ((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)(*(int *)(((int)stk + 8)))) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x324))) + 0x2077);
    t106 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x30));
    t107 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x68));
    *(unsigned int *)((a4 + 0xD8)) = ((*(int *)((a4 + 0x328))) + 0x2077);
    t109 = ((int (*)(int))(FUN_0c0c0340))((0xD8 + a4));
    t110 = ((int (*)(int))(FUN_0c0c0340))(((0xD8 + a4) + 0x38));
    *(unsigned int *)((a4 + 0x180)) = (0x2077 + (*(int *)((a4 + 0x32C))));
    t112 = ((int (*)(int))(FUN_0c0c0340))((0x180 + a4));
    t113 = ((int (*)(int))(FUN_0c0c0340))(((0x180 + a4) + 0x38));
    t114 = ((int (*)(int))(FUN_0c0c0340))((0x228 + a4));
    t115 = *(short *)((t0 + 0x4));
    if ((unsigned short)t115 != 0) {
        if ((unsigned short)t115 != 1) {
        } else {
            *(unsigned int *)(((*(int *)0xC246FF0) + 0xEC)) = 0x0;
        }
    } else {
        *(float *)0xC247094 = 100.0f;
        *(float *)0xC247098 = 100.0f;
    }
    t125 = *(int *)((a4 + 0x330));
    *(unsigned int *)((a4 + 0x330)) = (t125 + 0x1);
    t132 = 0x330;
    if ((int)(t125 + 0x1) > (int)(unsigned short)(*(short *)((t0 + 0x0)))) {
        *(unsigned int *)((a4 + 0x330)) = 0x0;
        *(unsigned int *)((a4 + 0x308)) = (t0 + 0x6);
        t127 = *(short *)(((t0 + 0x6) + 0x2));
        t129 = t127;
        if (t127 != 0) {
            *(unsigned int *)((a4 + 0x314)) = 0x1;
            t128 = *(short *)(((t0 + 0x6) + 0x2));
            *(unsigned int *)(((0x310 + a4) + 0x0)) = (unsigned short)t128;
            t129 = (unsigned short)t128;
        }
        t132 = t129;
    }
    return t132;
}

int FUN_0c0a53da(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[15];
    register int t13;
    register int t14;
    register int t15;
    register int t170;
    register int t38;
    register float u39;
    register int t49;
    register float u50;
    register int t92;
    register float u95;
    register int t60;
    register float u61;
    register float u69;
    register int t70;
    register float u119;
    register int t183;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t108;
    register float u111;
    register int t100;
    register float u103;
    register int t84;
    register float u87;
    register float u79;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC10D144); }
    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) == 0) {
        t183 = (FUN_0c0e19f2(0xC246FF0, a5, a6, a7));
    } else {
        t13 = *(int *)((a4 + 0x88));
        t14 = *(int *)(((t13 << 2) + 0xC247030));
        t15 = *(int *)(((0xC246FF0 + (t13 << 2)) + 0x0));
        t170 = t14;
        if (t14 == 8) {
        } else {
            if ((((*(int *)((t15 + 0x4D0))) != 0) && (((t24 = *(int *)((a4 + 0x80)), (int)t24 > 0) || ((t25 = *(int *)((a4 + 0x80)), t25 == 0) && (t26 = *(int *)((a4 + 0x78)), t26 == 1))) && (t27 = *(int *)((t15 + 0x4DC)), t27 == 0))) || ((t28 = *(int *)((t15 + 0x304)), (int)t28 <= 0) && (t29 = *(int *)((t15 + 0x4DC)), t29 == 0))) {
                *(unsigned int *)((a4 + 0x80)) = 0xFFFFFFEC;
            }
            if ((int)(*(int *)((a4 + 0x80))) > 0) {
                t38 = *(int *)(((0x80 + a4) + 0x0));
                u39 = *(float *)((a4 + 0x90));
                *(float *)((a4 + 0x90)) = (u39 + (-9.97859955f / (float)t38));
                if (-9.97859955f > (u39 + (-9.97859955f / (float)t38))) {
                    *(float *)((a4 + 0x90)) = -9.97859955f;
                }
                if ((*(float *)((a4 + 0x90))) == -9.97859955f) {
                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                    *(unsigned int *)((a4 + 0x78)) = 0x1;
                }
                t108 = (t13 << 2);
                u111 = f4;
            } else {
                if ((int)(*(int *)((a4 + 0x80))) < 0) {
                    t49 = *(int *)(((0x80 + a4) + 0x0));
                    u50 = *(float *)((a4 + 0x90));
                    *(float *)((a4 + 0x90)) = (u50 + (-9.97859955f / (float)t49));
                    if ((u50 + (-9.97859955f / (float)t49)) > 0.0f) {
                        *(float *)((a4 + 0x90)) = 0.0f;
                    }
                    if ((*(float *)((a4 + 0x90))) == 0.0f) {
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                        *(unsigned int *)((a4 + 0x78)) = 0x0;
                    }
                    t100 = (t13 << 2);
                    u103 = f4;
                } else {
                    t92 = (t13 << 2);
                    u95 = f4;
                    if ((*(int *)((a4 + 0x78))) != 1) {
                        if ((int)(*(int *)((a4 + 0x84))) > 0) {
                            t60 = *(int *)(((0x84 + a4) + 0x0));
                            u61 = *(float *)((a4 + 0x90));
                            *(float *)((a4 + 0x90)) = (u61 + (-6.98501921f / (float)t60));
                            if (-6.98501921f > (u61 + (-6.98501921f / (float)t60))) {
                                *(float *)((a4 + 0x90)) = -6.98501921f;
                            }
                            if ((*(float *)((a4 + 0x90))) == -6.98501921f) {
                                *(unsigned int *)((a4 + 0x84)) = 0xFFFFFFC4;
                                *(unsigned int *)((a4 + 0x78)) = 0x1;
                            }
                            t84 = (t13 << 2);
                            u87 = -6.98501921f;
                        } else {
                            if ((int)(*(int *)((a4 + 0x84))) < 0) {
                                u69 = *(float *)((a4 + 0x90));
                                t70 = *(int *)(((0x84 + a4) + 0x0));
                                *(float *)((a4 + 0x90)) = (u69 + (-6.98501921f / (float)t70));
                                if ((u69 + (-6.98501921f / (float)t70)) > 0.0f) {
                                    *(float *)((a4 + 0x90)) = 0.0f;
                                }
                                if ((*(float *)((a4 + 0x90))) == 0.0f) {
                                    *(unsigned int *)((a4 + 0x84)) = 0x3C;
                                    *(unsigned int *)((a4 + 0x78)) = 0x0;
                                }
                                u79 = (-6.98501921f / (float)t70);
                            } else {
                                *(unsigned int *)((a4 + 0x84)) = 0x3C;
                                u79 = -6.98501921f;
                            }
                            t84 = 0x3C;
                            u87 = u79;
                        }
                        t92 = t84;
                        u95 = u87;
                    }
                    t100 = t92;
                    u103 = u95;
                }
                t108 = t100;
                u111 = u103;
            }
            FUN_0c0a5222(a4, t108, a6, a7, u111);
            nlPushMatrix(0x0);
            FUN_0c0dbda0(((*(int *)((t15 + 0x3E4))) + 0x40));
            nlPushMatrix(0x0);
            u119 = *(float *)((a4 + 0x90));
            FUN_0c0dcc70(((*(float *)0xC10D10C) + (((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * u119) / -9.97859955f)), ((*(float *)0xC10D110) + (((*(float *)(((((int)stk + 4) + 0x4) + 0x4))) * u119) / -9.97859955f)), ((*(float *)0xC10D114) + (((*(float *)(((((int)stk + 4) + 0x4) + 0x8))) * u119) / -9.97859955f)));
            nlRotateAX((int)((*(float *)((a4 + 0x90))) * 182.044434f));
            FUN_0c0de000(((*(float *)((t15 + 0x284))) * 1.0f));
            FUN_0c0c47ae(0x744);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            *(unsigned int *)(((int)stk + 4)) = 0xC10D118;
            FUN_0c0dcc70((*(float *)0xC10D118), (*(float *)0xC10D11C), (*(float *)0xC10D120));
            *(unsigned int *)(((int)stk + 4)) = 0xC10D136;
            nlRotateAZ((*(short *)0xC10D13A));
            nlRotateAY(((*(short *)(((0x62 + a4) + 0x0))) + (*(short *)(((*(int *)(((int)stk + 4))) + 0x2)))));
            nlRotateAX(((*(short *)(((*(int *)(((int)stk + 4))) + 0x0))) + (*(short *)((a4 + 0x60)))));
            FUN_0c0de000(((*(float *)((t15 + 0x284))) * 1.0f));
            FUN_0c0c47ae(0x747);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            FUN_0c0dcc70((*(float *)0xC10D124), (*(float *)0xC10D128), (*(float *)0xC10D12C));
            nlRotateAZ((*(short *)0xC10D140));
            nlRotateAY(((*(short *)(((0x62 + a4) + 0x0))) + (*(short *)0xC10D13E)));
            nlRotateAX(((*(short *)0xC10D13C) + (*(short *)((a4 + 0x60)))));
            FUN_0c0de000(((*(float *)((t15 + 0x284))) * 1.0f));
            FUN_0c0c47ae(0x748);
            nlPopMatrix(0x1);
            t170 = (nlPopMatrix(0x1));
        }
        t183 = t170;
    }
    return t183;
}
