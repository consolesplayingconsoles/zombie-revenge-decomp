/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ce40(int, int, float);
int FUN_0c06e56e(int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e15d4(int, int, int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int FUN_0c06b800(void);
int FUN_0c08ac50(int a4);
int FUN_0c06e6b0(int a4, int a5, int a6, int a7);
int FUN_0c02d32e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c06cc48(void);

int FUN_0c06b800(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC06B888, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC2003B8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)(((0x28C + t1) + 0x0)) = (unsigned short)(*(short *)0xC2003CA);
    FUN_0c0e6248();
    *(unsigned int *)((t1 + 0xBC)) = 0xC;
    FUN_0c01ce40(t1, 0xC1B6794, (*(float *)0xC06B940));
    *(unsigned int *)(((((*(int *)((t1 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
    *(unsigned int *)(((((*(int *)((t1 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t1;
    return 0xBC;
}

int FUN_0c08ac50(int a4)
{
    register int t0;
    register float u0;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x40));
    u0 = *(float *)((a4 + 0x50));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x50))));
    FUN_0c0c465c((*(int *)((a4 + 0x58))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x5C));
    *(unsigned int *)((a4 + 0x5C)) = (t0 + 0x1);
    if ((int)((t0 + 0x1) - 1) >= (int)(*(int *)((a4 + 0x64)))) {
        *(unsigned int *)((a4 + 0x5C)) = 0x0;
        *(unsigned int *)((a4 + 0x58)) = ((*(int *)((a4 + 0x58))) + 0x1);
        t0 = *(int *)((a4 + 0x60));
        *(unsigned int *)((a4 + 0x60)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0x60;
    }
    return 0x64;
}

int FUN_0c06e6b0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e15d4((*(int *)((a4 + 0x30))), a5, a6, a7);
        *(unsigned int *)0xC247C60 = 0x0;
        FUN_0c0e19f2();
    }
    t0 = FUN_0c0e16c0((*(int *)((a4 + 0x30))));
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t1 + 0x1);
    t2 = t0;
    if ((int)(t1 + 0x1) > (int)0x78) {
        FUN_0c0da2e0();
        t0 = FUN_0c0e5f1c();
        t1 = t0;
        if ((int)t0 < (int)0x1) {
            *(unsigned int *)((a4 + 0x38)) = 0x0;
            t0 = *(int *)((a4 + 0x40));
            *(unsigned int *)((a4 + 0x40)) = (t0 + 0x18);
            FUN_0c06e56e(((t0 + 0x18) - 24), 0x1);
            t0 = 0x4;
            if ((*(float *)0xC06E78C) > (*(float *)(((*(int *)((a4 + 0x40))) + 0x4)))) {
                *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x3C)));
                t0 = 0x40;
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c02d32e(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t8;
    register float u15;

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        return 0x474;
    }
    t8 = *(int *)((a4 + 0x4C8));
    if ((t8 == 0) || (t8 == 1)) {
        u15 = *(float *)((a4 + 0x390));
        if (!(u15 > (*(float *)((a4 + 0x34))))) {
            if (u15 > (*(float *)((a4 + 0x40)))) {
                FUN_0c0cc3f8(0x431A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    *(float *)((a4 + 0x4B0)) = 0.0f;
    *(float *)((a4 + 0x4B4)) = 0.0f;
    *(float *)((a4 + 0x4B8)) = 0.0f;
    return 0x4B8;
}

int FUN_0c06cc48(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0xC0FB378;
    for (;;) {
        t2 = FUN_0c0e1830(0xC06CBFC, 0xB4);
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(t1); }
        FUN_0c0e6248();
        *(float *)((t2 + 0x74)) = (*(float *)((t1 + 0x14)));
        *(unsigned int *)(((0x78 + t2) + 0x0)) = (*(short *)((t1 + 0x12)));
        *(unsigned int *)((t2 + 0x88)) = t0;
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x18);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    return 0x88;
}
