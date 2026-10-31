/* Straight-line functions with calls and guards (batch gen_id): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int FUN_0c0a4234(int a4);
int FUN_0c059b98(int a4, int a5, int a6, int a7);
int FUN_0c0889f4(int a4);

int FUN_0c0a4234(int a4)
{
    int stk[12];
    register int t1;
    register float u6;
    register float u21;
    register float u22;
    register float u25;
    register float u26;
    register int t28;
    register float u31;
    register int t51;
    register int t53;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    u6 = 1.0f;
    if ((int)(*(int *)((a4 + 0x50))) < (int)0x14) {
        u6 = ((float)(*(int *)((a4 + 0x50))) * 0.049999997f);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0db470((a4 + 0x3C), (((int)stk + 4) + 0x8));
    FUN_0c0a78fc((((int)stk + 4) + 0x4), ((int)stk + 4), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    u21 = *(float *)((a4 + 0x58));
    u22 = *(float *)((a4 + 0x48));
    u25 = (((-(FUN_0c0da410(((*(int *)(((int)stk + 4))) & 0x7FFF)))) + 1.0f) * 6.0f);
    u25 = -u25;
    u26 = (u22 * u21);
    nlScale((u26 * (u25 + 7.0f)), (u22 * u21), (u22 * u21));
    t28 = *(int *)0xC23A258;
    u31 = (float)t28;
    if ((int)t28 < 0) {
        u31 = ((float)t28 + 4.2949673e+09f);
    }
    nlRotateAZ(((int)(u31 * (*(float *)((a4 + 0x54)))) & 0xFFFF));
    FUN_0c0de000((*(float *)((a4 + 0x48))));
    FUN_0c0848bc(u6, u6, u6);
    FUN_0c0c465c(((*(int *)((a4 + 0x4C))) + 0x260));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    if (((*(float *)((a4 + 0x48))) * 0.5f) > (*(float *)((a4 + 0x34)))) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x48))) * 0.5f);
    }
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + 0.0389999971f);
    t51 = *(int *)((a4 + 0x50));
    *(unsigned int *)((a4 + 0x50)) = (t51 - 1);
    t53 = 0x50;
    if ((int)(t51 - 1) <= 0) {
        t53 = (FUN_0c0e19f2());
    }
    return t53;
}

int FUN_0c059b98(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register float u4;
    register float u8;
    register float u12;
    register float u22;
    register int t33;
    register float u40;
    register int t76;
    register int t83;
    register int t85;
    register int t30;
    register int t31;

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
    if (!(((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x58)))) > (*(float *)((a4 + 0x94))))) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x94))) - (*(float *)((a4 + 0x58))));
        u22 = (*(float *)((a4 + 0x4C)));
        u22 *= -0.599999964f;
        *(float *)((a4 + 0x4C)) = u22;
    }
    if (((*(int *)((a4 + 0x80))) != 0) && (t30 = *(int *)((a4 + 0x84)), t31 = *(int *)((a4 + 0xA0)), ((t31 + t30) & 1) == 0)) {
    } else {
        nlPushMatrix(0x0);
        t33 = *(int *)((a4 + 0x8C));
        FUN_0c0dcc70((*(float *)((a4 + 0x54))), (*(float *)((a4 + 0x58))), (*(float *)((a4 + 0x5C))));
        nlRotateAY((*(int *)((a4 + 0x6C))));
        u40 = *(float *)((a4 + 0x74));
        nlScale(u40, u40, u40);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAZ((*(short *)((a4 + 0x64))));
        nlRotateAY((*(short *)((a4 + 0x62))));
        nlRotateAX((*(short *)((a4 + 0x60))));
        *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x48)));
        *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x4C)));
        *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x50)));
        nlRotateAxe(((int)stk + 4), (*(int *)((a4 + 0x98))));
        FUN_0c0de000((*(float *)((a4 + 0x74))));
        FUN_0c084800((*(float *)((t33 + 0x0))), (*(float *)((t33 + 0x4))), (*(float *)((t33 + 0x8))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        nlPopMatrix(0x1);
    }
    t76 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t76 - 1);
    if ((int)(t76 - 1) <= 0) {
        *(unsigned int *)((a4 + 0xA0)) = (*(int *)((a4 + 0xA4)));
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    }
    t83 = *(int *)((a4 + 0x80));
    t85 = t83;
    if (t83 == 2) {
        t85 = (FUN_0c0e19f2());
    }
    return t85;
}

int FUN_0c0889f4(int a4)
{
    int stk[8];
    register int t1;
    register int t9;
    register int t10;
    register float u12;
    register float u15;
    register int t29;
    register float u31;
    register float u37;
    register int t52;
    register int t55;
    register float u53;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((*(int *)((a4 + 0x60))) & 31) != 0) {
        *(unsigned int *)(((0x48 + a4) + 0x0)) = (((FUN_0c0da2e0()) & 0x3) + 0xFB);
    }
    t9 = *(short *)(((0x5E + a4) + 0x0));
    t10 = *(short *)((a4 + 0x5C));
    *(unsigned short *)((a4 + 0x5C)) = (t10 + t9);
    u12 = 0.699999988f;
    u12 = u12 + 0.299999982f * (FUN_0c0da410((short)(t10 + t9)));
    u15 = (*(float *)((a4 + 0x50)));
    u15 = u15 + u12 * (*(float *)((a4 + 0x58)));
    *(float *)((a4 + 0x54)) = u15;
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 0.049999997f);
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    FUN_0c0db4d0((a4 + 0x3C), ((int)stk + 4));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    t29 = FUN_0c0d9dc0((*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 4))));
    nlRotateAZ((short)t29);
    u31 = *(float *)((a4 + 0x50));
    nlScale(u31, (*(float *)((a4 + 0x54))), u31);
    FUN_0c0de000(((*(float *)((a4 + 0x54))) + (*(float *)((a4 + 0x50)))));
    u37 = *(float *)((a4 + 0x4C));
    FUN_0c0848d6(u37, u37, u37);
    FUN_0c0c465c((*(int *)((a4 + 0x48))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0199999996f);
    if ((int)(*(int *)((a4 + 0x60))) < (int)0x8) {
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) * 0.799999952f);
    }
    t52 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t52 - 1);
    t55 = 0x34;
    if (((int)(t52 - 1) > 0) && (u53 = *(float *)((a4 + 0x34)), u53 > 0.0f)) {
    } else {
        t55 = (FUN_0c0e19f2());
    }
    return t55;
}
