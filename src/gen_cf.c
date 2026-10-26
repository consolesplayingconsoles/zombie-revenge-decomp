/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c04c306(int);
int FUN_0c054c8a(int);
int FUN_0c05824e(int, int);
int FUN_0c05a98a(int);
int FUN_0c0909fc(int);
int FUN_0c0c6ac6(int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern int FUN_0c0e61d4();
int FUN_0c0e6248(void);
int FUN_0c0c6df6(int a4);
float FUN_0c0685b6(void);
int FUN_0c05c4ca(int a4);

int FUN_0c0c6df6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t7;
    int t8;
    int t9;
    float u10;

    t0 = *(int *)((a4 + 0xDC));
    t1 = *(int *)((a4 + 0xE4));
    t2 = FUN_0c0e1830(0xC0C6EF4, 0x110);
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x30)) = a4;
    FUN_0c0e61d4();
    *(float *)((t2 + 0x70)) = ((*(float *)((t2 + 0x70))) + (1.0f + 1.0f));
    *(unsigned int *)((t2 + 0xCC)) = t0;
    *(unsigned int *)((t2 + 0xC8)) = t1;
    *(float *)((t2 + 0xF8)) = 1.0f;
    *(float *)((t2 + 0xFC)) = 1.0f;
    *(float *)((t2 + 0x54)) = 1.0f;
    *(float *)((t2 + 0x58)) = 1.0f;
    *(float *)((t2 + 0x44)) = (1.0f + 1.0f);
    *(float *)((t2 + 0x48)) = (1.0f + 1.0f);
    *(float *)((t2 + 0x60)) = 1.0f;
    *(unsigned int *)((t2 + 0x68)) = 0x300A;
    *(unsigned int *)((t2 + 0x64)) = 0xFFFFFFFF;
    *(unsigned int *)((t2 + 0x10C)) = 0x5A;
    t6 = (0xF8 + t2);
    t7 = ((0xA0 + t2) + 0x28);
    t8 = 0xA;
    t9 = 0x800;
    u10 = 20.0f;
    for (;;) {
        *(float *)(((t6 - 0x4) + 0x0)) = u10;
        t6 = (t6 - 0x4);
        u10 = (u10 + 5.0f);
        t8 = (t8 - 0x1);
        *(unsigned int *)(((t7 - 0x4) + 0x0)) = t9;
        t7 = (t7 - 0x4);
        t9 = (t9 + 0x100);
        if (t8 == 0) {
            break;
        }
    }
    return FUN_0c0c6ac6(t0, 0xC1E9828, (0x100 + t2));
}

float FUN_0c0685b6(void)
{
    float u1;
    float u2;
    float u3;
    int t4;
    int t5;
    int t7;
    float u14;
    int stk[15];

    FUN_0c0e61d4();
    u1 = *(float *)0xC0686E4;
    u2 = *(float *)0xC0686E8;
    u3 = *(float *)0xC0686EC;
    t4 = 0xA;
    t5 = 0xC0FA2D8;
    for (;;) {
        t7 = FUN_0c0e19aa(0xC06867A, 0xB4, (*(int *)0xC23ECE4));
        FUN_0c0e61d4();
        FUN_0c0e6248();
        *(unsigned int *)(((0x78 + t7) + 0x0)) = (unsigned short)(*(short *)((t5 + 0x12)));
        *(unsigned int *)((t7 + 0x80)) = 0x0;
        *(float *)((t7 + 0x48)) = (((*(float *)((t7 + 0x30))) - (*(float *)((((int)stk + 4) + 0x0)))) * u3);
        t4 = (t4 - 0x1);
        u14 = u2;
        u14 = u14 + u1 * (float)((FUN_0c0da2e0()) & 0x7);
        *(float *)((t7 + 0x4C)) = u14;
        *(float *)((t7 + 0x50)) = (((*(float *)((t7 + 0x38))) - (*(float *)((((int)stk + 4) + 0x8)))) * u3);
        t5 = (t5 + 0x14);
        if (t4 == 0) {
            break;
        }
    }
    return u1;
}

int FUN_0c05c4ca(int a4)
{
    int t0;
    int t3;
    int t24;
    int t25;
    int t26;
    int stk[3];

    t0 = ((int (*)(int))(FUN_0c0e61d4))(a4);
    *(volatile int *)((a4 + 0xBC));
    *(volatile int *)((a4 + 0x1E8));
    t3 = ((int (*)(void))(FUN_0c0e61d4))();
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8(0x230A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x7);
            FUN_0c054c8a(a4);
            FUN_0c0909fc(a4);
            FUN_0c04c306((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0))));
            FUN_0c05824e((*(int *)((a4 + 0xBC))), (*(int *)((a4 + 0x1C4))));
            FUN_0c0e19f2();
        }
    }
    t24 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t24 - 1);
    if (((int)(t24 - 1) >= 0) && (t25 = *(int *)((a4 + 0x1C)), t26 = *(int *)((t25 + 0x20C)), (t26 & 0x1A00) == 0)) {
    } else {
        FUN_0c0e19f2();
    }
    return FUN_0c01cdc2(a4);
}
