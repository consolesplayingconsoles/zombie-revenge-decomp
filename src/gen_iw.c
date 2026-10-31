/* Straight-line functions with calls and guards (batch gen_iw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c473c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c4784(int, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0919fc(int a4);
int FUN_0c0696a4(int a4, int a5, int a6, int a7);
int FUN_0c0917ec(int a4);
int FUN_0c08afc6(int a4);
int FUN_0c089494(int a4);
int FUN_0c08f440(int a4);
int FUN_0c0af484(int a4);
int FUN_0c08e3a8(int a4);
int FUN_0c0abe80(int a4);

int FUN_0c0919fc(int a4)
{
    int stk[5];
    register int t1;
    register int t11;
    register float u13;
    register int t21;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0848bc((*(float *)0xC091B28), (*(float *)0xC091B24), 1.0f);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    t11 = FUN_0c0da2e0();
    nlRotateAZ((t11 << 1));
    u13 = *(float *)((a4 + 0x54));
    nlScale(u13, u13, u13);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    FUN_0c0c465c((*(int *)((a4 + 0x60))));
    nlPopMatrix(0x1);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t21 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t21 - 1);
    if ((int)(t21 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC091B68));
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0399999991f);
    return 0x54;
}

int FUN_0c0696a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)0xC247CAC;
    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0xA4));
    *(unsigned int *)((a4 + 0xA4)) = (t1 + 0x1);
    if ((t1 & 0x1) == 0) {
        *(unsigned int *)((a4 + 0x78)) = ((*(int *)((a4 + 0xA0))) + 0x24F);
        t1 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t1 + 0x1);
        if ((int)(t1 + 0x1) > (int)0xA) {
            FUN_0c0e19f2();
        }
    }
    if ((int)(*(int *)((a4 + 0xA4))) > (int)0x28) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.0299999993f);
    }
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 0.049999997f);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    nlRotateAZ(0x4000);
    u0 = *(float *)((a4 + 0x74));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c475c((*(int *)((a4 + 0x78))), 0.5f);
    return nlPopMatrix(0x1);
}

int FUN_0c0917ec(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)((a4 + 0x54));
    nlScale(u0, u0, (u0 + 1.0f));
    FUN_0c0de000(((*(float *)((a4 + 0x54))) + 1.0f));
    FUN_0c0c475c((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x58))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0399999991f);
    *(float *)((a4 + 0x58)) = ((*(float *)((a4 + 0x58))) * 0.899999976f);
    return 0x58;
}

int FUN_0c08afc6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    u0 = *(float *)0xC08B0E0;
    u1 = *(float *)((a4 + 0x90));
    t1 = FUN_0c0da2e0();
    t2 = *(short *)(((0x88 + a4) + 0x0));
    *(unsigned short *)(((0x88 + a4) + 0x0)) = (t2 + (t1 & 0x1FF));
    u2 = (u1 * u0);
    u2 = u2 + (FUN_0c0d9e90((short)(t2 + (t1 & 0x1FF)))) * (u1 * u0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    nlScale(u2, u2, u2);
    FUN_0c0de000(u2);
    FUN_0c0c473c((*(short *)((a4 + 0x9A))));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x74)) = ((*(float *)((a4 + 0x74))) + (*(float *)(((0x94 + a4) + 0x0))));
    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) * 0.997999966f);
    t0 = *(short *)((a4 + 0x8E));
    *(unsigned short *)((a4 + 0x8E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x8E;
}

int FUN_0c089494(int a4)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0x44))) == 0) {
        t0 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = *(int *)((a4 + 0x30));
            *(unsigned int *)((a4 + 0x44)) = 0x1;
            *(float *)((a4 + 0x34)) = (*(float *)(((t0 + 0x22C) + 0x0)));
            *(float *)((a4 + 0x38)) = ((*(float *)(((*(int *)((a4 + 0x30))) + 0x34))) + 1.0f);
            *(float *)((a4 + 0x3C)) = (*(float *)(((t0 + 0x22C) + 0x8)));
            *(unsigned short *)(((0x4A + a4) + 0x0)) = ((*(short *)(((*(int *)((a4 + 0x30))) + 0x6E))) + 0x7FFF);
            nlPushMatrix(0x0);
            FUN_0c0dcca0((a4 + 0x34));
            nlRotateAY((*(short *)((a4 + 0x4A))));
            u0 = *(float *)((a4 + 0x40));
            nlScale(u0, u0, u0);
            FUN_0c0de000((*(float *)((a4 + 0x40))));
            FUN_0c0c465c((*(int *)((a4 + 0x50))));
            nlPopMatrix(0x1);
            t0 = *(int *)((a4 + 0x54));
            *(unsigned int *)((a4 + 0x54)) = (t0 + 0x1);
            if ((int)(t0 + 0x1) > (int)0x2) {
                *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x1);
                t0 = *(int *)((a4 + 0x5C));
                *(unsigned int *)((a4 + 0x5C)) = (t0 - 1);
                if ((int)(t0 - 1) < 0) {
                    return FUN_0c0e19f2();
                }
                return 0x5C;
            }
            return 0x54;
        }
        return 0x58;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY((*(short *)((a4 + 0x4A))));
    u0 = *(float *)((a4 + 0x40));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x40))));
    FUN_0c0c465c((*(int *)((a4 + 0x50))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)0x2) {
        *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x1);
        t0 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (t0 - 1);
        if ((int)(t0 - 1) < 0) {
            return FUN_0c0e19f2();
        }
        return 0x5C;
    }
    return 0x54;
}

int FUN_0c08f440(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)((a4 + 0x90));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x90))));
    FUN_0c0c4784((*(short *)((a4 + 0x9A))), (*(float *)((a4 + 0x94))));
    nlPopMatrix(0x1);
    *(unsigned short *)((a4 + 0x9A)) = ((*(short *)((a4 + 0x9A))) + 0x1);
    t0 = *(short *)((a4 + 0xA0));
    *(unsigned short *)((a4 + 0xA0)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    t0 = *(short *)((a4 + 0x9E));
    *(unsigned short *)((a4 + 0x9E)) = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) >= (int)(*(short *)((a4 + 0x9C)))) {
        *(float *)((a4 + 0x94)) = ((*(float *)((a4 + 0x94))) - (*(float *)(((0x84 + a4) + 0x0))));
        u0 = ((*(float *)((a4 + 0x90))) - (*(float *)(((0x80 + a4) + 0x0))));
    } else {
        u0 = ((*(float *)((a4 + 0x90))) + (*(float *)(((0x7C + a4) + 0x0))));
    }
    *(float *)((a4 + 0x90)) = u0;
    return 0x90;
}

int FUN_0c0af484(int a4)
{
    int stk[9];
    register float u10;
    register int t26;

    nlPushMatrix(0x0);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((a4 + 0x3C))), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))));
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    u10 = *(float *)((a4 + 0x54));
    nlScale((u10 * 0.399999976f), u10, u10);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    FUN_0c0848d6((*(float *)((a4 + 0x48))), (*(float *)((a4 + 0x4C))), (*(float *)((a4 + 0x50))));
    FUN_0c0c465c(0x297);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.0277222153f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t26 = 0x34;
    if (25.0f > (*(float *)((a4 + 0x34)))) {
        t26 = (FUN_0c0e19f2());
    }
    return t26;
}

int FUN_0c08e3a8(int a4)
{
    int stk[9];
    register int t1;
    register float t3;
    register float u4;
    register int t16;
    register float t17;
    register int t23;
    register int t24;
    register int t26;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t3 = FUN_0c0d9e90((*(int *)((a4 + 0x4C))));
    u4 = *(float *)((a4 + 0x40));
    nlGetAverageVector((*(int *)((a4 + 0x3C))), (a4 + 0x30), ((int)stk + 4), (1.0f - t3), t3);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(((int)stk + 4));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    nlScale((u4 * t3), (u4 * t3), (u4 * t3));
    FUN_0c0de000((u4 * t3));
    if ((int)(*(int *)((a4 + 0x50))) <= (int)0x3FFF) {
        t16 = *(int *)((a4 + 0x50));
        *(unsigned int *)((a4 + 0x50)) = (t16 + 0x100);
        t17 = FUN_0c0da410((t16 + 0x100));
        FUN_0c0c475c(0x291, t17);
    } else {
        FUN_0c0c465c(0x291);
    }
    nlPopMatrix(0x1);
    t23 = *(short *)(((0x4A + a4) + 0x0));
    t24 = *(int *)((a4 + 0x4C));
    *(unsigned int *)((a4 + 0x4C)) = (t24 + t23);
    t26 = 0x4C;
    if ((int)(t24 + t23) >= (int)0x3FFF) {
        t26 = (FUN_0c0e19f2());
    }
    return t26;
}

int FUN_0c0abe80(int a4)
{
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAX((*(short *)((a4 + 0x4C))));
    nlRotateAY((*(short *)((a4 + 0x4E))));
    nlRotateAZ((*(short *)((a4 + 0x50))));
    FUN_0c0c465c((*(int *)((a4 + 0x54))));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) - 0.149999991f);
    FUN_0c0dce80((a4 + 0x40), (a4 + 0x40), (*(float *)0xC0ABFCC));
    nlAddVector((a4 + 0x34), (a4 + 0x40));
    *(unsigned short *)(((0x4E + a4) + 0x0)) = ((*(short *)(((0x4E + a4) + 0x0))) + ((FUN_0c0da2e0()) & 0xFFF));
    *(unsigned short *)(((0x4C + a4) + 0x0)) = ((*(short *)(((0x4C + a4) + 0x0))) + ((FUN_0c0da2e0()) & 0xFFF));
    *(unsigned short *)(((0x50 + a4) + 0x0)) = ((*(short *)(((0x50 + a4) + 0x0))) + ((FUN_0c0da2e0()) & 0xFFF));
    if ((*(float *)0xC0ABFDC) > (*(float *)((a4 + 0x38)))) {
        return FUN_0c0e19f2();
    }
    return 0x38;
}
