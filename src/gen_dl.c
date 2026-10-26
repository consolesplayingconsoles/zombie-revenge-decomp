/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
extern int FUN_0c0cc3f8();
int FUN_0c0cf6e4(int, int, float, float, float, float, float);
float FUN_0c0da410(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e5f1c(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int strlen(int);
int FUN_0c0d22d0(int a4);

int FUN_0c0d22d0(int a4)
{
    int t0;
    int t1;
    float u4;
    int t10;
    int t16;
    int t17;
    float u18;
    int t51;
    int t21;
    float t23;
    int t25;
    float u26;
    int t29;
    float u30;
    int t40;
    int t41;
    float u44;
    int t49;
    int t79;
    int t64;
    int t150;
    int t93;
    int t103;
    int t141;
    int t125;
    int t122;
    int t124;
    int t56;
    float u62;
    int t33;
    int t34;
    int t84;
    float u89;
    int t112;
    float u119;
    float u110;
    int t133;
    int stk[24];

    t0 = *(int *)0xC23A1BC;
    *(unsigned int *)(((int)stk + 12)) = (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0);
    t1 = strlen(0xC20C488);
    u4 = (float)t1;
    if ((int)t1 < 0) {
        u4 = ((float)t1 + 4.2949673e+09f);
    }
    *(unsigned int *)(((int)stk + 4)) = (int)((-((u4 * 18.0f) / (1.0f + 1.0f))) + 320.0f);
    FUN_0c0cf6e4(0x1, 0xC20C488, (float)(int)((-((u4 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 34.0f, 1.0f, 1.0f, 1.0f);
    t10 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
    if ((*(int *)((((t0 << 2) + (a4 + 0x3C)) + 0x0))) != 0) {
        *(unsigned int *)((((t0 << 2) + (a4 + 0x3C)) + 0x0)) = ((*(int *)((((t0 << 2) + (a4 + 0x3C)) + 0x0))) - 1);
    }
    t16 = *(int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0));
    t17 = *(int *)((((a4 + 0x44) + (t0 << 2)) + 0x0));
    *(float *)(((int)stk + 8)) = ((float)t16 / (float)t17);
    *(unsigned int *)(((int)stk + 4)) = (((((t16 == 0)) ? 1 : 0) ^ 0x1) + 0x1);
    u18 = 16384.0f;
    u18 = u18 + 16384.0f * ((float)t16 / (float)t17);
    *(unsigned int *)(((int)stk + 12)) = (int)u18;
    *(float *)(((int)stk + 16)) = (1.0f - (*(float *)(((int)stk + 8))));
    t51 = 0xC;
    if ((int)(*(int *)(((int)stk + 4))) > 0) {
        t21 = 0x0;
        for (;;) {
            t23 = FUN_0c0da410((*(int *)(((int)stk + 12))));
            if (t21 == 0) {
                t25 = *(int *)((a4 + 0x68));
                u26 = (((-t23) + 1.0f) * (float)(*(int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0))));
                *(float *)(((int)stk + 20)) = (*(float *)(((int)stk + 16)));
                t33 = t25;
                t34 = (int)(u26 * 480.0f);
            } else {
                t29 = *(int *)((a4 + 0x6C));
                u30 = ((((-t23) + 1.0f) + (-1.0f)) * (float)(*(int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0))));
                *(float *)(((int)stk + 20)) = (*(float *)(((int)stk + 8)));
                t33 = t29;
                t34 = (int)(u30 * 480.0f);
            }
            t40 = *(int *)(((t33 << 2) + 0xC20BEFC));
            t41 = strlen(t40);
            u44 = (float)t41;
            if ((int)t41 < 0) {
                u44 = ((float)t41 + 4.2949673e+09f);
            }
            t49 = FUN_0c0cf6e4(0x0, t40, (float)(int)(((-((((u44 * 18.0f) / (1.0f + 1.0f))) * 1.0f)) + (float)t34) + 320.0f), 224.0f, 1.0f, 1.0f, (*(float *)(((int)stk + 20))));
            t21 = (t21 + 0x1);
            if ((int)t21 >= (int)(*(int *)(((int)stk + 4)))) {
                break;
            }
        }
        t51 = t49;
    } else {
        t56 = t16;
        u62 = 16384.0f;
    }
    t79 = t51;
    if ((*(int *)((a4 + 0x38))) == 0) {
        { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 4) + 0x14)) = *(struct mv6 *)(0xC1EA0C8); }
        t64 = *(int *)0xC23A258;
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (((int)stk + 4) + 0x14)));
        nlScale(0.199999988f, 0.199999988f, 0.199999988f);
        FUN_0c0de000(0.199999988f);
        FUN_0c0c465c(((t64 & 0x7) + 0x33));
        nlUnitMatrix();
        nlRotateAZ(0x7FFF);
        *(float *)((((((t0 << 1) + t0) << 2) + (((int)stk + 4) + 0x14)) + 0x4)) = (-(*(float *)((((((t0 << 1) + t0) << 2) + (((int)stk + 4) + 0x14)) + 0x4))));
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (((int)stk + 4) + 0x14)));
        nlScale(0.199999988f, 0.199999988f, 0.199999988f);
        FUN_0c0de000(0.199999988f);
        FUN_0c0c465c(((t64 & 0x7) + 0x33));
        t79 = (nlPopMatrix(0x1));
    } else {
        t84 = t56;
        u89 = u62;
    }
    t150 = t79;
    if ((*(int *)((a4 + 0x38))) != 0) {
    } else {
        if ((0x4040 & t10) != 0) {
            *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x68)));
            t93 = *(int *)((a4 + 0x68));
            *(unsigned int *)((a4 + 0x68)) = (t93 - 1);
            if ((int)(t93 - 1) < 0) {
                *(unsigned int *)((a4 + 0x68)) = 0x6;
            }
            *(unsigned int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0)) = (*(int *)((((a4 + 0x44) + (t0 << 2)) + 0x0)));
            *(unsigned int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0)) = 0xFFFFFFFF;
            t112 = (((int (*)(int, float))(FUN_0c0cc3f8))(0x29A9, u89));
        } else {
            t103 = t79;
            if ((0x8080 & t10) != 0) {
                *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x68)));
                *(unsigned int *)((a4 + 0x68)) = ((*(int *)((a4 + 0x68))) + 0x1);
                *(unsigned int *)(((0x68 + a4) + 0x0)) = (FUN_0c0e5f1c(t84));
                *(unsigned int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0)) = (*(int *)((((a4 + 0x44) + (t0 << 2)) + 0x0)));
                *(unsigned int *)((((a4 + 0x4C) + (t0 << 2)) + 0x0)) = 0x1;
                t103 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0x29A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
            } else {
                u110 = u89;
            }
            t112 = t103;
            u119 = u110;
        }
        t141 = t112;
        if ((*(int *)((((a4 + 0x3C) + (t0 << 2)) + 0x0))) == 0) {
            if ((0x2 & t10) != 0) {
                *(unsigned int *)((a4 + 0x34)) = 0x0;
                t133 = t112;
            } else {
                t125 = t112;
                if ((t10 & 0x604) != 0) {
                    t122 = *(int *)((a4 + 0x68));
                    *(unsigned int *)0xC94342C = t122;
                    *(unsigned int *)0xC23ED54 = (*(int *)(((t122 * 0x2C) + 0xC20BF54)));
                    t124 = ((int (*)(int, float))(FUN_0c0cc3f8))(0x828A9, u119);
                    *(unsigned int *)((a4 + 0x34)) = 0x2;
                    t125 = t124;
                }
                t133 = t125;
            }
            t141 = t133;
        }
        t150 = t141;
    }
    return t150;
}
