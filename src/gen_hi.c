/* Straight-line functions with calls and guards (batch gen_hi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c01d9c2(int);
int FUN_0c086bda(int, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(int);
int mwPlySetLpFlg(int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c06c2ec(int a4);

int FUN_0c06c2ec(int a4)
{
    int stk[19];
    register int t0;
    register int t222;
    register int t24;
    register int t25;
    register int t58;
    register int t141;
    register int t170;
    register int t7;
    register int t17;
    register int t215;
    register int t160;
    register int t153;
    register int t146;
    register float u187;
    register float u188;

    t0 = *(int *)0xC23ED9C;
    t222 = 0xE;
    if (((int)t0 < (int)0xC) || ((int)t0 > (int)0xE)) {
        if (((int)t0 <= (int)0x9) && (t7 = *(int *)0xC23ED5C, (t7 & 6) != 0)) {
            if ((*(int *)((a4 + 0x220))) == 0) {
                mwPlySetLpFlg(a4);
                FUN_0c01d9c2(a4);
            } else {
                t17 = t0;
            }
            FUN_0c0e19f2(t17);
        }
        t24 = *(int *)((a4 + 0x220));
        if (t24 != 0) {
            if (t24 == 1) {
                t25 = *(int *)((a4 + 0x228));
                *(unsigned int *)(((int)stk + 4)) = (t25 + 0x8);
                if ((int)(*(short *)(((t25 + 0x8) + 0x0))) < 0) {
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 8);
                    *(unsigned int *)((a4 + 0x220)) = 0x3;
                    FUN_0c0cc3f8(0x2CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                } else {
                    *(unsigned int *)((a4 + 0x228)) = (*(int *)(((int)stk + 4)));
                }
                *(unsigned int *)((a4 + 0x21C)) = (*(short *)(((*(int *)(((int)stk + 4))) + 0x0)));
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x2))));
                *(float *)(((int)stk + 20)) = 0.0f;
                *(float *)(((int)stk + 24)) = -5.93999958f;
                *(float *)(((int)stk + 28)) = 0.0f;
                FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
                *(float *)(((a4 + 0x60) + 0x0)) = (*(float *)(((int)stk + 8)));
                *(float *)(((a4 + 0x64) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)(((a4 + 0x68) + 0x0)) = (*(float *)(((int)stk + 16)));
                nlAddVector((a4 + 0x60), 0xC0FB338);
                nlPopMatrix(0x1);
                *(unsigned short *)((a4 + 0x6C)) = 0x0;
                nlPushMatrix(0x0);
                FUN_0c0dcca0((a4 + 0x30));
                FUN_0c0dcc70(0.0f, 0.0f, (-(*(float *)((a4 + 0x44)))));
                nlRotateAY((*(short *)((a4 + 0x6E))));
                FUN_0c0dcc80((a4 + 0x60));
                FUN_0c0c465c((*(int *)((a4 + 0x21C))));
                t160 = (nlPopMatrix(0x1));
            } else {
                if (t24 == 2) {
                    t58 = *(int *)((a4 + 0x228));
                    *(unsigned int *)(((int)stk + 4)) = (t58 + 0x8);
                    if ((int)(*(short *)(((t58 + 0x8) + 0x0))) < 0) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 8);
                        *(unsigned int *)((a4 + 0x220)) = 0x3;
                        FUN_0c0cc3f8(0x2CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    } else {
                        *(unsigned int *)((a4 + 0x228)) = (*(int *)(((int)stk + 4)));
                    }
                    *(unsigned int *)((a4 + 0x21C)) = (*(short *)(((*(int *)(((int)stk + 4))) + 0x0)));
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x4))));
                    *(float *)(((int)stk + 20)) = 0.0f;
                    *(float *)(((int)stk + 24)) = -5.57999992f;
                    *(float *)(((int)stk + 28)) = 0.0f;
                    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
                    *(float *)(((a4 + 0x60) + 0x0)) = (*(float *)(((int)stk + 8)));
                    *(float *)(((a4 + 0x64) + 0x0)) = (*(float *)(((int)stk + 12)));
                    *(float *)(((a4 + 0x68) + 0x0)) = (*(float *)(((int)stk + 16)));
                    nlAddVector((a4 + 0x60), 0xC0FB344);
                    nlPopMatrix(0x1);
                    *(unsigned short *)(((0x6C + a4) + 0x0)) = (-((*(short *)(((*(int *)(((int)stk + 4))) + 0x6))) << 1));
                    nlPushMatrix(0x0);
                    FUN_0c0dcca0((a4 + 0x30));
                    FUN_0c0dcc70(0.0f, 0.0f, (-(*(float *)((a4 + 0x44)))));
                    nlRotateAY((*(short *)((a4 + 0x6E))));
                    nlRotateAX((*(short *)((a4 + 0x6C))));
                    FUN_0c0dcc80((a4 + 0x60));
                    FUN_0c0c465c((*(int *)((a4 + 0x21C))));
                    t153 = (nlPopMatrix(0x1));
                } else {
                    if (t24 == 3) {
                        nlPushMatrix(0x0);
                        nlUnitMatrix();
                        FUN_0c0dcca0((a4 + 0x30));
                        FUN_0c0dcc70(0.0f, 0.0f, (-(*(float *)((a4 + 0x44)))));
                        nlRotateAY((*(short *)((a4 + 0x6E))));
                        nlRotateAX((*(short *)((a4 + 0x6C))));
                        FUN_0c0dcc80((a4 + 0x60));
                        *(float *)(((int)stk + 20)) = 4.0f;
                        *(float *)(((int)stk + 24)) = (1.0f + 1.0f);
                        *(float *)(((int)stk + 28)) = 0.0f;
                        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
                        *(float *)(((a4 + 0x54) + 0x0)) = (*(float *)(((int)stk + 8)));
                        *(float *)(((a4 + 0x58) + 0x0)) = (*(float *)(((int)stk + 12)));
                        *(float *)(((a4 + 0x5C) + 0x0)) = (*(float *)(((int)stk + 16)));
                        FUN_0c086bda((a4 + 0x54), 1.0f);
                        *(float *)(((int)stk + 20)) = -4.0f;
                        *(float *)(((int)stk + 24)) = (1.0f + 1.0f);
                        *(float *)(((int)stk + 28)) = 0.0f;
                        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
                        *(float *)(((a4 + 0x54) + 0x0)) = (*(float *)(((int)stk + 8)));
                        *(float *)(((a4 + 0x58) + 0x0)) = (*(float *)(((int)stk + 12)));
                        *(float *)(((a4 + 0x5C) + 0x0)) = (*(float *)(((int)stk + 16)));
                        FUN_0c086bda((a4 + 0x54), 1.0f);
                        nlPopMatrix(0x1);
                        *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
                        nlPushMatrix(0x0);
                        FUN_0c0dcca0((a4 + 0x30));
                        FUN_0c0dcc70(0.0f, 0.0f, (-(*(float *)((a4 + 0x44)))));
                        nlRotateAY((*(short *)((a4 + 0x6E))));
                        nlRotateAX((*(short *)((a4 + 0x6C))));
                        FUN_0c0dcc80((a4 + 0x60));
                        FUN_0c0c465c((*(int *)((a4 + 0x21C))));
                        t146 = (nlPopMatrix(0x1));
                    } else {
                        t141 = t24;
                        if (t24 == 4) {
                            nlPushMatrix(0x0);
                            FUN_0c0dcca0((a4 + 0x30));
                            FUN_0c0dcc70(0.0f, 0.0f, (-(*(float *)((a4 + 0x44)))));
                            nlRotateAY((*(short *)((a4 + 0x6E))));
                            nlRotateAX((*(short *)((a4 + 0x6C))));
                            FUN_0c0dcc80((a4 + 0x60));
                            FUN_0c0c465c((*(int *)((a4 + 0x21C))));
                            t141 = (nlPopMatrix(0x1));
                        }
                        t146 = t141;
                    }
                    t153 = t146;
                }
                t160 = t153;
            }
            t215 = t160;
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0xC0FB240;
            if ((*(int *)((a4 + 0x1BC))) != 0) {
                FUN_0c0cc3f8(0x42DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
                    t170 = *(int *)((a4 + 0x1C4));
                    *(unsigned int *)(((t170 << 2) + 0xC247584)) = ((*(int *)(((t170 << 2) + 0xC247584))) + 0x1F4);
                }
                *(unsigned int *)((a4 + 0x1BC)) = 0x0;
                *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                *(unsigned int *)((a4 + 0x228)) = (*(int *)(((int)stk + 4)));
                if ((int)(short)((*(short *)((a4 + 0x6E))) - (*(int *)((a4 + 0x1DC)))) < (int)0x4000) {
                    *(unsigned int *)((a4 + 0x220)) = 0x1;
                    u187 = (FUN_0c0da410((*(short *)(((*(int *)(((int)stk + 4))) + 0x2)))));
                    u188 = 5.93999958f;
                } else {
                    *(unsigned int *)((a4 + 0x220)) = 0x2;
                    u187 = (FUN_0c0da410((*(short *)(((*(int *)(((int)stk + 4))) + 0x4)))));
                    u188 = 5.57999992f;
                }
                *(float *)((a4 + 0x44)) = (u187 * u188);
                mwPlySetLpFlg(a4);
                FUN_0c01d9c2(a4);
            } else {
                FUN_0c01cdf2(a4);
            }
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x2))));
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 24)) = -5.93999958f;
            *(float *)(((int)stk + 28)) = 0.0f;
            FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
            *(float *)(((a4 + 0x60) + 0x0)) = (*(float *)(((int)stk + 8)));
            *(float *)(((a4 + 0x64) + 0x0)) = (*(float *)(((int)stk + 12)));
            *(float *)(((a4 + 0x68) + 0x0)) = (*(float *)(((int)stk + 16)));
            nlAddVector((a4 + 0x60), 0xC0FB338);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            FUN_0c0dcca0((a4 + 0x30));
            nlRotateAY((*(short *)((a4 + 0x6E))));
            FUN_0c0dcc70(0.0f, (-(*(float *)((a4 + 0x64)))), 0.0f);
            FUN_0c0c465c((*(int *)((a4 + 0x21C))));
            t215 = (nlPopMatrix(0x1));
        }
        t222 = t215;
    }
    return t222;
}
