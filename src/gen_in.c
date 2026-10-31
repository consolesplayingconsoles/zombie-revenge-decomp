/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c022c5e(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c032ae6(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c084800(int, int, float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5fe4(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c07a238(int a4, int a5, int a6, int a7);
int FUN_0c088d54(int a4);
int FUN_0c0256fc(int a4, int a5, int a6, int a7);
int FUN_0c084ce4(int a4);

int FUN_0c07a238(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        t1 = *(int *)((a4 + 0xA4));
        *(unsigned int *)((a4 + 0xA4)) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            FUN_0c0e19f2();
        } else {
            *(float *)((a4 + 0x94)) = ((float)(*(int *)((a4 + 0xA4))) / (float)(*(int *)((a4 + 0x9C))));
        }
    } else {
        *(float *)((a4 + 0x94)) = ((-((float)(*(int *)((a4 + 0xA0))) / (float)(*(int *)((a4 + 0x98))))) + 1.0f);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((*(short *)((t0 + 0x3CE))) + (*(short *)((a4 + 0x62)))));
    nlRotateAX(((*(short *)((t0 + 0x3CC))) + (*(short *)((a4 + 0x60)))));
    u0 = *(float *)((a4 + 0x74));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x94))));
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x48), (a4 + 0x54));
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    *(float *)((a4 + 0x74)) = ((*(float *)((a4 + 0x74))) * (*(float *)(((0x90 + a4) + 0x0))));
    return 0x74;
}

int FUN_0c088d54(int a4)
{
    int stk[6];
    register float u23;
    register float u27;
    register int t42;
    register int t45;
    register float u43;

    if (((*(int *)((a4 + 0x60))) & 31) == 0) {
        *(unsigned int *)(((0x48 + a4) + 0x0)) = (((FUN_0c0da2e0()) & 0x3) + 0xFB);
    }
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 0.049999997f);
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((a4 + 0x3C))), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    nlRotateAY((*(short *)((a4 + 0x5C))));
    u23 = *(float *)((a4 + 0x50));
    nlScale(u23, u23, u23);
    FUN_0c0de000((*(float *)((a4 + 0x50))));
    u27 = *(float *)((a4 + 0x4C));
    FUN_0c0848d6(u27, u27, u27);
    FUN_0c0c465c((*(int *)((a4 + 0x48))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0199999996f);
    if ((int)(*(int *)((a4 + 0x60))) < (int)0x8) {
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) * 0.799999952f);
    }
    t42 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t42 - 1);
    t45 = 0x34;
    if (((int)(t42 - 1) > 0) && (u43 = *(float *)((a4 + 0x34)), u43 > 0.0f)) {
    } else {
        t45 = (FUN_0c0e19f2());
    }
    return t45;
}

int FUN_0c0256fc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    t0 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x55C)) = ((*(int *)((((*(int *)(((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t0 << 2) + t0) << 2))))))) + (((*(int *)((a4 + 0x544))) << 2) << 2)) + 0x4))) * (*(int *)0xC247070));
    if ((*(int *)((a4 + 0x544))) == 0) {
        FUN_0c032ae6(a4);
        t0 = *(int *)((a4 + 0x488));
        *(unsigned int *)((a4 + 0x534)) = 0x9;
        *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t0 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
        *(unsigned int *)((t0 + 0x200)) = 0x1;
        *(unsigned int *)((t0 + 0x1E8)) = 0x1;
        *(unsigned int *)((t0 + 0x1F4)) = 0x28;
        *(unsigned int *)((t0 + 0x204)) = 0x0;
        *(float *)((t0 + 0x1E4)) = 5.0f;
        *(unsigned int *)((t0 + 0x1FC)) = 0x2;
        *(unsigned int *)((t0 + 0x1F8)) = 0x3;
        *(unsigned int *)((t0 + 0xD8)) = 0x0;
        t1 = *(int *)((t0 + 0xBC));
        t2 = *(int *)((t0 + 0x1E8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
        FUN_0c022c5e(a4);
        *(unsigned int *)((a4 + 0x564)) = 0x0;
        *(unsigned int *)((a4 + 0x56C)) = 0x0;
        *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
        *(volatile int *)0xC23A258;
        t0 = FUN_0c0e5fe4();
        if ((unsigned int)t0 > (unsigned int)(*(int *)(((0xBC + a4) + 0x0)))) {
            return FUN_0c0cc3f8(0x431A9);
        }
        return t0;
    }
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    return FUN_0c02a19a(a4, a5, a6, a7);
}

int FUN_0c084ce4(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    if ((*(int *)((a4 + 0x58))) == 0) {
        t0 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (t0 - 1);
        if ((int)(t0 - 1) < 0) {
            *(unsigned int *)((a4 + 0x58)) = 0x1;
            u0 = *(float *)(((0x70 + a4) + 0x0));
            u1 = *(float *)((a4 + 0x6C));
            *(float *)((a4 + 0x6C)) = (u1 - u0);
            if (0.0f > (u1 - u0)) {
                *(float *)((a4 + 0x6C)) = 0.0f;
            }
            u0 = *(float *)((a4 + 0x6C));
            *(float *)0xC247EF0 = u0;
            *(float *)0xC247EEC = u0;
            *(float *)0xC247EE8 = u0;
            u0 = *(float *)((a4 + 0x6C));
            FUN_0c084800(0xC247EE8, 0xC247ED8, u0, u0, u0);
            u0 = *(float *)(((0x4C + a4) + 0x0));
            t0 = *(int *)((a4 + 0x48));
            *(unsigned int *)((a4 + 0x48)) = (t0 - (int)u0);
            if ((int)(t0 - (int)u0) < (int)0x80) {
                *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) - 1);
                *(unsigned int *)((a4 + 0x48)) = 0xFF;
            }
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - (*(float *)(((0x3C + a4) + 0x0))));
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - (*(float *)(((0x40 + a4) + 0x0))));
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - (*(float *)(((0x44 + a4) + 0x0))));
            if (0.0f > (*(float *)((a4 + 0x30)))) {
                *(float *)((a4 + 0x30)) = 0.0f;
            }
            if (0.0f > (*(float *)((a4 + 0x34)))) {
                *(float *)((a4 + 0x34)) = 0.0f;
            }
            if (0.0f > (*(float *)((a4 + 0x38)))) {
                *(float *)((a4 + 0x38)) = 0.0f;
            }
            FUN_0c084570((*(int *)((a4 + 0x48))), (*(int *)((a4 + 0x50))), (int)(*(float *)((a4 + 0x30))), (int)(*(float *)((a4 + 0x34))), (int)(*(float *)((a4 + 0x38))));
            t0 = *(int *)((a4 + 0x60));
            *(unsigned int *)((a4 + 0x60)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                return FUN_0c0e19f2();
            }
            return 0x60;
        }
        return 0x5C;
    }
    u0 = *(float *)(((0x70 + a4) + 0x0));
    u1 = *(float *)((a4 + 0x6C));
    *(float *)((a4 + 0x6C)) = (u1 - u0);
    if (0.0f > (u1 - u0)) {
        *(float *)((a4 + 0x6C)) = 0.0f;
    }
    u0 = *(float *)((a4 + 0x6C));
    *(float *)0xC247EF0 = u0;
    *(float *)0xC247EEC = u0;
    *(float *)0xC247EE8 = u0;
    u0 = *(float *)((a4 + 0x6C));
    FUN_0c084800(0xC247EE8, 0xC247ED8, u0, u0, u0);
    u0 = *(float *)(((0x4C + a4) + 0x0));
    t0 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t0 - (int)u0);
    if ((int)(t0 - (int)u0) < (int)0x80) {
        *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) - 1);
        *(unsigned int *)((a4 + 0x48)) = 0xFF;
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - (*(float *)(((0x3C + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - (*(float *)(((0x40 + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - (*(float *)(((0x44 + a4) + 0x0))));
    if (0.0f > (*(float *)((a4 + 0x30)))) {
        *(float *)((a4 + 0x30)) = 0.0f;
    }
    if (0.0f > (*(float *)((a4 + 0x34)))) {
        *(float *)((a4 + 0x34)) = 0.0f;
    }
    if (0.0f > (*(float *)((a4 + 0x38)))) {
        *(float *)((a4 + 0x38)) = 0.0f;
    }
    FUN_0c084570((*(int *)((a4 + 0x48))), (*(int *)((a4 + 0x50))), (int)(*(float *)((a4 + 0x30))), (int)(*(float *)((a4 + 0x34))), (int)(*(float *)((a4 + 0x38))));
    t0 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return 0x60;
}
