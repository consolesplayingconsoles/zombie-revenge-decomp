/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
int FUN_0c01cdc2(int);
float FUN_0c01f1b8(int, int);
int FUN_0c02120e(void);
int FUN_0c02286c(int, int, float, float);
int FUN_0c023300(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c03217c(int, int, int);
int FUN_0c03227c(int);
int FUN_0c032394(int);
int FUN_0c032590(int, float, float);
int FUN_0c032aa6(int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c049b80(int);
int FUN_0c049c5c(int, int, int, int, int, int);
int FUN_0c058f7c(void);
int FUN_0c058fa0(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c4784(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int);
int FUN_0c0cee9e(void);
int FUN_0c0cf386(void);
int FUN_0c0cf46c(int);
int FUN_0c0cf4c4(int, int, int, int, int, float, float, float, float, float);
int FUN_0c0d18d8(void);
int FUN_0c0d19b8(int, int);
int FUN_0c0d19d4(void);
int FUN_0c0d1b00(void);
int FUN_0c0d2b30(void);
int FUN_0c0d41c6(void);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int nlGetMatrix(int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dbda0(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0dccf0(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int FUN_0c0dce80(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int strlen(int);
int FUN_0c0ad99c(int a4);
int FUN_0c07993a(int a4);
int FUN_0c0d27a0(int a4);
int FUN_0c02704c(int a4, int a5, int a6, int a7);
int FUN_0c09d360(int a4, int a5, int a6, int a7);
int FUN_0c025088(int a4, int a5, int a6, int a7);

int FUN_0c0ad99c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;
    float u11;
    int t12;
    float t13;
    float u14;
    int t60;
    int t61;
    int t62;
    int t86;
    int t87;
    int t88;
    int t90;
    int t91;
    int t92;
    float u100;
    int t116;
    int t117;
    int t118;
    int t123;
    float t121;
    float t141;
    int t161;
    int t127;
    int stk[16];

    t0 = *(int *)0xC246FFC;
    t1 = (a4 + 0x64);
    t2 = 0x4;
    for (;;) {
        t2 = (t2 - 1);
        *(unsigned int *)((t1 + 0x4)) = ((*(int *)((t1 + 0x4))) + 0x1);
        t1 = (t1 + 0x8);
        if (t2 == 0) {
            break;
        }
    }
    t7 = *(int *)((a4 + 0x30));
    t8 = *(int *)0xC24FA38;
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
                if (t7 != 3) {
                } else {
                    t9 = *(short *)((a4 + 0x60));
                    *(unsigned short *)((a4 + 0x60)) = (t9 + 0x123);
                    u11 = 8192.0f;
                    u11 = u11 + 16383.0f * _builtin_fabsf((FUN_0c0da410((short)(t9 + 0x123))));
                    *(unsigned short *)((a4 + 0x54)) = (int)u11;
                    *(unsigned short *)((a4 + 0x5A)) = (int)u11;
                    t12 = *(short *)((a4 + 0x5E));
                    *(unsigned short *)((a4 + 0x5E)) = (t12 + 0x88);
                    t13 = FUN_0c0d9e90((short)(t12 + 0x88));
                    u14 = -8192.0f;
                    u14 = u14 + 10922.0f * _builtin_fabsf(t13);
                    *(unsigned short *)((a4 + 0x52)) = (int)u14;
                    *(unsigned short *)((a4 + 0x58)) = (int)u14;
                    _builtin_fabsf(t13);
                }
            } else {
                if (t8 == 0x460) {
                    *(unsigned int *)((a4 + 0x30)) = 0x3;
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x5A)) = ((*(short *)((a4 + 0x5A))) + 0x75);
            *(unsigned short *)((a4 + 0x4E)) = (*(short *)((a4 + 0x5A)));
            if ((*(int *)0xC24FA38) == 0x258) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                FUN_0c0cc3f8(0x72EA9);
            }
        }
    } else {
        if (t8 == 0x1CC) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            *(unsigned int *)((a4 + 0x64)) = 0xB60;
            *(unsigned short *)((a4 + 0x4C)) = 0xFFFFEAAB;
            t60 = 0x4;
            t61 = (a4 + 0x64);
            for (;;) {
                t62 = (0x4 + t61);
                t61 = (t61 + 0x8);
                t60 = (t60 - 0x1);
                *(unsigned int *)(((t62) + 0x0)) = (FUN_0c0da2e0());
                if (t60 == 0) {
                    break;
                }
            }
        }
    }
    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC10F474);
    t86 = *(short *)((a4 + 0x54));
    t87 = *(short *)(((0x54 + a4) + 0x0));
    t88 = *(short *)(((0x5A + a4) + 0x0));
    *(unsigned short *)((a4 + 0x54)) = (int)((float)t86 + ((float)(t88 - t87) * 0.049999997f));
    nlRotateAY((short)(int)((float)t86 + ((float)(t88 - t87) * 0.049999997f)));
    t90 = *(short *)((a4 + 0x52));
    t91 = *(short *)(((0x52 + a4) + 0x0));
    t92 = *(short *)(((0x58 + a4) + 0x0));
    *(unsigned short *)((a4 + 0x52)) = (int)((float)t90 + ((float)(t92 - t91) * 0.049999997f));
    nlRotateAX((short)(int)((float)t90 + ((float)(t92 - t91) * 0.049999997f)));
    FUN_0c0db470(0xC10F480, (a4 + 0x40));
    if ((int)(*(int *)((a4 + 0x30))) <= (int)0x1) {
    } else {
        if (((*(int *)0xC23A258) & 31) == 0) {
            *(float *)((a4 + 0x34)) = ((float)(FUN_0c0da2e0()) * 0.00213629566f);
            u100 = -16.0f;
            u100 = u100 + 0.000976592302f * (float)(FUN_0c0da2e0());
            *(float *)((a4 + 0x3C)) = u100;
        }
        nlAddVector3op((((int)stk + 8) + 0x8), 0xC10F48C, (a4 + 0x34));
        nlSubVector3op((((int)stk + 8) + 0x8), (a4 + 0x40), (((int)stk + 8) + 0x8));
        FUN_0c0a7714(((int)stk + 8), (((int)stk + 8) + 0x4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
        *(unsigned short *)((a4 + 0x4C)) = (int)((float)(*(short *)((a4 + 0x4C))) + ((float)((*(int *)(((int)stk + 8))) - (*(short *)(((0x4C + a4) + 0x0)))) * 0.049999997f));
        t116 = *(int *)(((int)stk + 12));
        t117 = *(short *)(((0x4E + a4) + 0x0));
        t118 = *(short *)((a4 + 0x4E));
        *(unsigned short *)((a4 + 0x4E)) = (int)((float)t118 + ((float)(t116 - t117) * 0.049999997f));
        t123 = (t116 - t117);
        if (((*(int *)(((a4 + 0x64) + 0x4))) & 64) != 0) {
            t121 = FUN_0c0da410((((*(int *)(((a4 + 0x64) + 0x4))) << 8) << 2));
            *(unsigned int *)(((a4 + 0x64) + 0x0)) = (int)(_builtin_fabsf(t121) * 3640.0f);
            t123 = (int)(_builtin_fabsf(t121) * 3640.0f);
            t127 = (int)(_builtin_fabsf(t121) * 3640.0f);
        } else {
            t127 = (int)((float)t118 + ((float)(t116 - t117) * 0.049999997f));
        }
        if (((*(int *)((((a4 + 0x64) + 0x8) + 0x4))) & 8) != 0) {
            *(unsigned int *)((((a4 + 0x64) + 0x8) + 0x0)) = (int)((FUN_0c0da410(((((*(int *)((((a4 + 0x64) + 0x8) + 0x4))) << 8) << 2) << 2))) * 3640.0f);
        }
        if (((*(int *)(((((a4 + 0x64) + 0x8) + 0x8) + 0x4))) & 32) != 0) {
            t141 = FUN_0c0da410(((((*(int *)(((((a4 + 0x64) + 0x8) + 0x8) + 0x4))) << 8) << 2) << 2));
            *(unsigned int *)(((((a4 + 0x64) + 0x8) + 0x8) + 0x0)) = (int)(t141 * 3640.0f);
            *(unsigned int *)((((((a4 + 0x64) + 0x8) + 0x8) + 0x8) + 0x0)) = (int)(t141 * 3640.0f);
        }
    }
    nlPopMatrix(0x1);
    t161 = *(int *)((t0 + 0x3D4));
    *(float *)((t0 + 0x3E8)) = 0.0f;
    *(float *)((t0 + 0x30)) = (*(float *)((a4 + 0x40)));
    *(float *)((t0 + 0x34)) = (*(float *)((a4 + 0x44)));
    *(float *)((t0 + 0x38)) = (*(float *)((a4 + 0x48)));
    *(unsigned short *)((t0 + 0x6C)) = ((*(short *)((a4 + 0x4C))) - (*(short *)(((t161 + 0x6) + 0x0))));
    *(unsigned short *)((t0 + 0x6E)) = ((*(short *)(((0x4E + a4) + 0x0))) - (*(short *)(((t161 + 0x6) + 0x2))));
    *(unsigned short *)((t0 + 0x70)) = ((*(short *)(((0x50 + a4) + 0x0))) - (*(short *)(((t161 + 0x6) + 0x4))));
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)((t0 + 0x3E4))));
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1011F4);
    nlRotateAX((*(int *)(((a4 + 0x64) + 0x0))));
    FUN_0c0c465c(0x77F);
    FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
    FUN_0c0dcca0(0xC101200);
    nlRotateAZ((*(short *)0xC101210));
    nlRotateAY(((*(int *)((((a4 + 0x64) + 0x8) + 0x0))) + (*(short *)0xC10120E)));
    nlRotateAX((*(short *)0xC10120C));
    FUN_0c0c465c(0x789);
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}

int FUN_0c07993a(int a4)
{
    int t1;
    int t4;
    int t6;
    int t7;
    int t10;
    float t57;
    int t58;
    int t59;
    int t77;
    int t80;
    int t81;
    int t82;
    int t83;
    float u87;
    float u89;
    float u96;
    int t107;
    int t140;
    int t145;
    int t5;
    int t20;
    int stk[25];

    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x34;
    t1 = *(int *)((a4 + 0x30));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                *(unsigned int *)(((int)stk + 12)) = (a4 + 0x38);
                *(unsigned int *)(((int)stk + 24)) = (0x518 + a4);
                *(unsigned int *)(((int)stk + 4)) = (0x858 + a4);
                *(unsigned int *)(((int)stk + 20)) = (0x990 + a4);
                *(unsigned int *)(((int)stk + 16)) = (0x788 + a4);
                t4 = 0xC079CE8;
                t6 = (0x2A8 + a4);
                t7 = 0xC10017C;
                for (;;) {
                    if ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) != 0) {
                        t10 = *(int *)(((int)stk + 16));
                        *(unsigned int *)((t10 + 0x0)) = ((*(int *)((t10 + 0x0))) - 1);
                        t20 = t5;
                    } else {
                        t4 = (nlAddVector(t6, (*(int *)(((int)stk + 24)))));
                        t4 = (FUN_0c0dce80(t6, t6, 0.979999959f));
                        t4 = (nlAddVector((*(int *)(((int)stk + 12))), t6));
                        t4 = (FUN_0c010128((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 20)))));
                    }
                    t5 = t20;
                    t4 = (FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4)));
                    t4 = (FUN_0c0dcca0((*(int *)(((int)stk + 12)))));
                    t4 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                    t4 = (*(short *)(((*(int *)(((int)stk + 4))) + 0x4)));
                    t4 = (nlRotateAZ(t4));
                    t4 = (*(short *)((t7 + 0xC)));
                    t4 = (FUN_0c0c465c(t4));
                    t6 = (t6 + 0xC);
                    t7 = (t7 + 0x10);
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
                    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0xC);
                    t5 = (*(int *)(((int)stk + 4)));
                    t5 = (t5 + 0x6);
                    *(unsigned int *)(((int)stk + 4)) = t5;
                    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x6);
                    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
                    t5 = (*(int *)(((int)stk + 8)));
                    t5 = (t5 - 1);
                    *(unsigned int *)(((int)stk + 8)) = t5;
                    if (t5 == 0) {
                        break;
                    }
                }
            }
        } else {
            if ((int)(*(int *)((a4 + 0x34))) < (int)0x3FFF) {
                *(unsigned int *)((a4 + 0x34)) = (int)((float)(*(int *)((a4 + 0x34))) + 81.9149933f);
            }
            t57 = FUN_0c0da410((*(int *)((a4 + 0x34))));
            *(unsigned int *)(((int)stk + 4)) = (0xD38 + a4);
            t58 = (0xAC8 + a4);
            t59 = 0xC10017C;
            for (;;) {
                FUN_0c0dce80((((int)stk + 4) + 0x18), (*(int *)(((int)stk + 4))), t57);
                FUN_0c0dce80((((int)stk + 4) + 0x24), t58, t57);
                FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                FUN_0c0dcca0(t59);
                nlRotateAX((int)(*(float *)(((int)stk + 28))));
                nlRotateAZ((int)(*(float *)(((int)stk + 36))));
                FUN_0c0dcca0((((int)stk + 4) + 0x24));
                FUN_0c0c465c((*(short *)((t59 + 0xC))));
                nlScale((t57 + 0.5f), (t57 + 0.5f), (t57 + 0.5f));
                FUN_0c0de000((t57 + 0.5f));
                FUN_0c0c4784((*(short *)((t59 + 0xE))), t57);
                t59 = (t59 + 0x10);
                t58 = (t58 + 0xC);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                t77 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t77 - 1);
                if ((t77 - 1) == 0) {
                    break;
                }
            }
            if (((*(int *)0xC23ED88) & 128) != 0) {
                *(unsigned int *)(((int)stk + 16)) = 0xC10017C;
                *(unsigned int *)(((int)stk + 20)) = (0xAC8 + a4);
                *(unsigned int *)(((int)stk + 4)) = (a4 + 0x38);
                *(unsigned int *)(((int)stk + 12)) = (0x518 + a4);
                *(unsigned int *)(((int)stk + 8)) = (0x990 + a4);
                *(unsigned int *)(((int)stk + 24)) = 0x34;
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                t80 = (0xD38 + a4);
                t81 = (0x858 + a4);
                t82 = (0x2A8 + a4);
                for (;;) {
                    t83 = FUN_0c0da2e0();
                    nlUnitMatrix();
                    FUN_0c0dcca0((*(int *)(((int)stk + 16))));
                    u87 = *(float *)((t80 + 0x0));
                    *(unsigned short *)((t81 + 0x0)) = (int)u87;
                    nlRotateAX((short)(int)u87);
                    u89 = *(float *)((t80 + 0x8));
                    *(unsigned short *)((t81 + 0x4)) = (int)u89;
                    nlRotateAZ((short)(int)u89);
                    FUN_0c0db470((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 4))));
                    *(float *)((t82 + 0x8)) = (-((float)(FUN_0c0da2e0()) * 3.05185063e-06f));
                    FUN_0c0db4d0(t82, t82);
                    u96 = 0.049999997f;
                    u96 = u96 + 0.099999994f * ((float)t83 * 3.05185094e-05f);
                    *(float *)(((*(int *)(((int)stk + 12))) + 0x4)) = (-(u96 * 0.277222186f));
                    t80 = (t80 + 0xC);
                    t82 = (t82 + 0xC);
                    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = (int)(((((float)t83 * 3.05185094e-05f) + -0.5f)) * 288.0f);
                    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x4)) = (int)(((((float)t83 * 3.05185094e-05f) + -0.5f)) * 16.0f);
                    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0xC);
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x6);
                    t81 = (t81 + 0x6);
                    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x10);
                    t107 = *(int *)(((int)stk + 24));
                    *(unsigned int *)(((int)stk + 24)) = (t107 - 1);
                    if ((t107 - 1) != 0) continue;
                    break;
                }
            }
        }
    } else {
        t140 = 0xC10017C;
        for (;;) {
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
            FUN_0c0dcca0(t140);
            FUN_0c0c465c((*(short *)((t140 + 0xC))));
            t145 = *(int *)(((int)stk + 8));
            t140 = (t140 + 0x10);
            *(unsigned int *)(((int)stk + 8)) = (t145 - 1);
            if ((t145 - 1) == 0) {
                break;
            }
        }
        if (((*(int *)0xC23ED88) & 64) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0d27a0(int a4)
{
    int t13;
    int t25;
    int t27;
    int t42;
    int t53;
    int t60;
    float u63;
    int t64;
    float u72;
    float u76;
    int t77;
    float u83;
    int t91;
    int t93;
    int t119;
    int t133;
    float u135;
    int stk[18];

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
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_C0D27A0:;
    *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x800);
    *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x1000);
    *(unsigned int *)0xC23A1A8 = (((*(int *)0xC23A1A8) & 0xFFFFBFFF) & 0xFFFF7FFF);
    *(unsigned int *)0xC9433FC = 0x0;
    *(unsigned int *)((R4 + 0x34)) = 0x78;
    *(unsigned int *)(((0x68 + R4) + 0x0)) = 0xFFFFFFFF;
    FUN_0c0d41c6();
    FUN_0c0d1b00();
    *(unsigned int *)(((int)stk + 8)) = 0xC943514;
    R10 = (0x0);
    R11 = (R4);
    R13 = (0x1);
    R14 = (0x0);
    R8 = (0x0);
    R9 = (0x0);
    F14 = (0.0f);
    F15 = (1.0f);
    goto L_C0D2806;
    L_C0D2806:;
    *(unsigned int *)(((int)stk + 12)) = (R8 << 2);
    t13 = *(int *)(((R8 << 2) + 0xC246FF0));
    *(unsigned int *)(((*(int *)((((*(int *)((t13 + 0x34C))) << 2) + 0xC2475D4))) + 0x21C)) = R14;
    *(unsigned short *)((((R8 * 0xE) + 0xC247998) + 0x0)) = R14;
    *(unsigned short *)((((R8 * 0xE) + 0xC247998) + 0x2)) = R14;
    *(unsigned int *)((t13 + 0x288)) = R13;
    FUN_0c049c5c(t13, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    R12 = (t13);
    R4 = (t13);
    if ((R13 == 0)) goto L_C0D2844;
    goto L_C0D2840;
    L_C0D2840:;
    *(unsigned int *)((R12 + 0x20C)) = R13;
    goto L_C0D2844;
    L_C0D2844:;
    FUN_0c049b80(R4);
    *(unsigned short *)((R12 + 0xE8)) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xC24759C)) = 0x100;
    if (((*(int *)((R11 + 0x50))) == 0)) goto L_C0D286A;
    goto L_C0D2860;
    L_C0D2860:;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xC247594)) = R13;
    goto L_C0D28D0;
    L_C0D28D0:;
    *(float *)((R9 + 0xC24758C)) = F14;
    *(unsigned int *)(((0x32C + R12) + 0x0)) = (int)F14;
    t25 = *(int *)((R9 + 0xC247594));
    *(unsigned int *)(((0x308 + R12) + 0x0)) = t25;
    *(unsigned int *)(((0x304 + R12) + 0x0)) = t25;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x20);
    t27 = (int)(R8 + 0x1) < (int)0x2;
    R10 = ((R10 + 0x4));
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t27) goto L_C0D2806;
    goto L_C0D2900;
    L_C0D2900:;
    FUN_0c0cf46c(0xFFFFFFFF);
    if (((*(int *)0xC522D80) == 0)) goto L_C0D2912;
    goto L_C0D290E;
    L_C0D290E:;
    FUN_0c0d2b30();
    goto L_C0D2912;
    L_C0D2912:;
    FUN_0c02120e();
    R4 = ((*(int *)0xC94350C));
    if (((*(int *)((R11 + 0x50))) != 0)) goto L_C0D292A;
    goto L_C0D2924;
    L_C0D2924:;
    R2 = ((*(int *)0xC94343C));
    goto L_C0D292C;
    L_C0D292C:;
    *(unsigned int *)((R4 + 0x30)) = R2;
    t42 = *(int *)0xC943508;
    *(unsigned int *)((t42 + 0x38)) = R14;
    *(unsigned int *)((t42 + 0x30)) = (*(int *)((R11 + 0x34)));
    R4 = (t42);
    R5 = (0xC943438);
    if (((*(int *)0xC943438) == -1)) goto L_C0D2944;
    goto L_C0D2940;
    L_C0D2940:;
    R2 = ((*(int *)((R5 + 0x0))));
    goto L_C0D2946;
    L_C0D2946:;
    *(unsigned int *)((R4 + 0x34)) = R2;
    R4 = (0xC20C4A4);
    if (((*(int *)((R11 + 0x50))) != 0)) goto L_C0D29AC;
    goto L_C0D2952;
    L_C0D2952:;
    t53 = *(int *)0xC94343C;
    R5 = ((t53 - 1));
    R6 = ((R11 + 0x44));
    if (((*(int *)(((R11 + 0x44) + 0x0))) != (t53 - 1))) goto L_C0D2968;
    goto L_C0D2962;
    L_C0D2962:;
    if (((*(int *)((R6 + 0x4))) == R5)) goto L_C0D2974;
    goto L_C0D2968;
    L_C0D2968:;
    t60 = *(int *)((R4 + 0x0));
    *(unsigned char *)((t60 + 0x6)) = ((*(signed char *)0xC943434) + 0x31);
    R12 = (t60);
    goto L_C0D29AE;
    L_C0D29AE:;
    u63 = *(float *)0xC0D2BBC;
    t64 = strlen(R12);
    F12 = ((1.0f + 1.0f));
    F13 = (u63);
    F14 = (F15);
    F3 = ((float)t64);
    if (((int)t64 >= 0)) goto L_C0D29CE;
    goto L_C0D29C6;
    L_C0D29C6:;
    F3 = ((F3 + 4.2949673e+09f));
    goto L_C0D29CE;
    L_C0D29CE:;
    u72 = ((F3 * (*(float *)0xC0D2BC8)) / F12);
    *(unsigned int *)(((int)stk + 8)) = (int)((-(u72 * F14)) + F13);
    FUN_0c0cf4c4(0x0, 0x2, 0x78, 0xFFFFFFFF, (R12), (float)(int)((-(u72 * F14)) + F13), (*(float *)0xC0D2BCC), F14, F14, F15);
    u76 = *(float *)0xC0D2BD4;
    t77 = strlen(0xC20C4B0);
    F14 = (u76);
    F3 = ((float)t77);
    if (((int)t77 >= 0)) goto L_C0D2A1C;
    goto L_C0D2A14;
    L_C0D2A14:;
    F3 = ((F3 + 4.2949673e+09f));
    goto L_C0D2A1C;
    L_C0D2A1C:;
    u83 = ((F3 * (*(float *)0xC0D2BC8)) / F12);
    *(unsigned int *)(((int)stk + 8)) = (int)((-(u83 * F14)) + F13);
    FUN_0c0cf4c4(0x3C, 0x2, 0x3C, 0x1, 0xC20C4B0, (float)(int)((-(u83 * F14)) + F13), (*(float *)0xC0D2BDC), F14, F14, F15);
    if (((*(int *)0xC943434) != 0)) goto L_C0D2AEA;
    goto L_C0D2A5A;
    L_C0D2A5A:;
    FUN_0c0cf386();
    FUN_0c0cee9e();
    FUN_0c0e6248();
    t91 = *(int *)0xC94342C;
    *(unsigned int *)(((int)stk + 8)) = ((t91 * 0x2C) + 0xC20BF54);
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((t91 * 0x2C) + 0xC20BF54) + 0x18)));
    t93 = *(int *)0xC943164;
    R12 = (t93);
    R8 = (t93);
    R9 = ((((int)stk + 8) + 0xC));
    goto L_C0D2ADA;
    L_C0D2ADA:;
    if (((int)R12 < (int)0x4)) goto L_C0D2A92;
    goto L_C0D2AE0;
    L_C0D2AE0:;
    FUN_0c0d18d8();
    goto L_C0D2B04;
    L_C0D2B04:;
    FUN_0c0d19b8(0x16, 0x0);
    return (FUN_0c0d19b8(0x16, 0x0));
    L_C0D2A92:;
    *(unsigned int *)(((int)stk + 12)) = (R12 + R9);
    goto L_C0D2A98;
    L_C0D2A98:;
    FUN_0c0da2e0();
    *(volatile int *)(((*(int *)(((int)stk + 8))) + 0x1C));
    R10 = (R14);
    R11 = ((FUN_0c0e5f1c()));
    R4 = (R8);
    R5 = ((R8 + R9));
    if (((int)R8 >= (int)R12)) goto L_C0D2AC6;
    goto L_C0D2AB4;
    L_C0D2AB4:;
    if ((R11 != (*(signed char *)((R5 + 0x0))))) goto L_C0D2ABE;
    goto L_C0D2ABA;
    L_C0D2ABA:;
    R10 = (R13);
    goto L_C0D2AC6;
    L_C0D2AC6:;
    if ((R10 != 0)) goto L_C0D2A98;
    goto L_C0D2ACA;
    L_C0D2ACA:;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x0)) = R11;
    FUN_0c0d19b8((*(signed char *)((R11 + (*(int *)(((int)stk + 16)))))), 0x2);
    R12 = ((R12 + 0x1));
    goto L_C0D2ADA;
    L_C0D2ABE:;
    t119 = (int)(R4 + 0x1) < (int)R12;
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    if (t119) goto L_C0D2AB4;
    goto L_C0D2AC6;
    L_C0D2AEA:;
    FUN_0c058f7c();
    FUN_0c058fa0((*(int *)0xC23ED50));
    FUN_0c0cee9e();
    FUN_0c0d19d4();
    goto L_C0D2B04;
    L_C0D2974:;
    R12 = ((*(int *)((R4 + 0x4))));
    goto L_C0D29AE;
    L_C0D29AC:;
    R12 = ((*(int *)((R4 + 0x8))));
    goto L_C0D29AE;
    L_C0D2944:;
    R2 = (0x1734);
    goto L_C0D2946;
    L_C0D292A:;
    R2 = (0x1);
    goto L_C0D292C;
    L_C0D286A:;
    t133 = *(int *)((R10 + 0xC24759C));
    u135 = *(float *)(((*(int *)(((int)stk + 8))) + 0x0));
    R2 = ((0xC247594 + R10));
    F4 = (((float)t133 * u135));
    if ((F15 > ((float)t133 * u135))) goto L_C0D28C8;
    goto L_C0D2882;
    L_C0D2882:;
    F3 = (F4);
    goto L_C0D28CA;
    L_C0D28CA:;
    *(unsigned int *)((R2 + 0x0)) = (int)F3;
    goto L_C0D28D0;
    L_C0D28C8:;
    F3 = (F15);
    goto L_C0D28CA;
}



int FUN_0c025088(int a4, int a5, int a6, int a7)
{
    int t0;
    int t18;
    float t36;
    int t44;
    float t57;
    int t60;
    int t70;
    int t66;
    int t127;
    float u131;
    float u101;
    float u102;
    float u103;
    float u104;
    float u105;
    float u108;
    float u109;
    int t133;
    int t90;
    int t81;
    int t74;
    int stk[15];

    t0 = *(int *)((a4 + 0x3B8));
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c034fbc(a4, 0x400, 0x1, 0x1);
            *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x25C))) - (*(float *)(((0x4B4 + a4) + 0x0))));
            *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x25C + a4) + 0x0))) + 0.5f));
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                *(unsigned int *)((a4 + 0x2B4)) = ((*(int *)((a4 + 0x2B4))) - 1);
            }
            t18 = 0x25C;
            if ((*(float *)((a4 + 0x25C))) > 0.0f) {
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x92;
                *(unsigned int *)((a4 + 0x2D4)) = 0x3;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x4C4)) = 0x2;
                *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) + 0x1);
                t18 = 0x3B8;
            }
            t90 = t18;
        } else {
            if (t0 == 2) {
                FUN_0c034fbc(a4, 0x200, 0x1, 0x1);
                *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x25C))) - (*(float *)(((0x4B4 + a4) + 0x0))));
                *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
                *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x25C + a4) + 0x0))) + 0.5f));
                *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    *(unsigned int *)((a4 + 0x2B4)) = ((*(int *)((a4 + 0x2B4))) - 1);
                }
                t36 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0x18));
                t44 = 0x34;
                if (!((*(float *)((a4 + 0x34))) > (t36 + 10.0f))) {
                    if ((int)(*(int *)((a4 + 0x304))) > 0) {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x93;
                    } else {
                        *(unsigned int *)((a4 + 0x2C4)) = 0x94;
                    }
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x4C4)) = 0x0;
                    *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) + 0x1);
                    t44 = 0x3B8;
                }
                t81 = t44;
            } else {
                if (t0 == 3) {
                    *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x25C))) - (*(float *)(((0x4B4 + a4) + 0x0))));
                    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
                    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x25C + a4) + 0x0))) + 0.5f));
                    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
                    t57 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0x18));
                    t60 = 0x34;
                    if (!((*(float *)((a4 + 0x34))) > t57)) {
                        *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) + 0x1);
                        t60 = 0x3B8;
                    }
                    t74 = t60;
                } else {
                    t70 = t0;
                    if (t0 == 4) {
                        t66 = 0x2EC;
                        if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                            *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                            *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x4;
                            *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
                            *(unsigned int *)((a4 + 0x528)) = 0x1;
                            *(unsigned int *)((a4 + 0x524)) = 0x1;
                            t66 = (FUN_0c02a19a(a4, a5, a6, a7));
                        }
                        t70 = t66;
                    }
                    t74 = t70;
                }
                t81 = t74;
            }
            t90 = t81;
        }
        t133 = t90;
    } else {
        t127 = 0x2EC;
        u131 = 0.5f;
        if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x2C4)) = 0x91;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x4C4)) = 0x2;
            FUN_0c023300(a4);
            *(float *)((a4 + 0x4B4)) = 0.0544399992f;
            u101 = *(float *)((a4 + 0x518));
            u102 = *(float *)((a4 + 0x30));
            u103 = *(float *)((a4 + 0x520));
            u104 = *(float *)((a4 + 0x38));
            u105 = ((u104 - u103) * (u104 - u103));
            u105 = u105 + (u102 - u101) * (u102 - u101);
            *(float *)((a4 + 0x25C)) = _builtin_sqrtf(((((*(float *)((a4 + 0x4B4))) * 35.0f)) * (1.0f + 1.0f)));
            u108 = *(float *)((a4 + 0x4B4));
            u109 = *(float *)((a4 + 0x25C));
            FUN_0c0a7714((((int)stk + 4) + 0x8), ((int)stk + 4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlRotateAY((*(int *)(((int)stk + 4))));
            *(float *)(((int)stk + 28)) = 0.0f;
            *(float *)(((int)stk + 32)) = 0.0f;
            *(float *)(((int)stk + 36)) = ((_builtin_sqrtf(u105) * u108) / (u109 * (1.0f + 1.0f)));
            FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
            *(float *)(((0x258 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
            *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
            *(float *)(((0x260 + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
            nlPopMatrix(0x1);
            *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) + 0x1);
            t127 = 0x3B8;
            u131 = ((_builtin_sqrtf(u105) * u108) / (u109 * (1.0f + 1.0f)));
        }
        t133 = t127;
    }
    return t133;
}
