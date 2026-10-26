/* Straight-line functions with calls and guards (batch gen_bw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01f8a0(int, int, int);
int FUN_0c0a6bf8(int, int, int, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c0e52ec(int, int, int);
int FUN_0c0e56f4(int);
int FUN_0c0e61d4(void);
int mwRnaErrCallFunc(int);
int FUN_0c23363e(int a4, int a5, int a6);
int FUN_0c081074(int a4);
int FUN_0c01d0be(int a4);
int FUN_0c01d10c(int a4);
int FUN_0c0999cc(int a4);
int FUN_0c233930(int a4, int a5, int a6);
int FUN_0c23397a(int a4, int a5, int a6);

int FUN_0c23363e(int a4, int a5, int a6)
{
    int t1;

    *(unsigned int *)(((((signed char)a5 << 2) + (a4 + 0x34)) + 0x0)) = a6;
    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (0x10 | (-a6));
    }
    if ((*(int *)((a4 + 0xC))) == 0) {
        FUN_0c0e4f8c((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), (signed char)a5, t1);
    } else {
        FUN_0c0e52ec((*(short *)((a4 + 0x2))), (signed char)a5, t1);
    }
    return 0x0;
}

int FUN_0c081074(int a4)
{
    int t0;
    int t1;

    t0 = ((int (*)(int))(FUN_0c0e61d4))(a4);
    t1 = ((int (*)(void))(FUN_0c0e61d4))();
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    if ((*(int *)((a4 + 0xD8))) != 0) {
        return FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), 0.0f);
    }
    return 0xD8;
}

int FUN_0c01d0be(int a4)
{
    int t0;

    t0 = FUN_0c0e1830(0xC01CF44, 0x80);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x350)));
    *(volatile int *)((a4 + 0x340));
    return (FUN_0c0e61d4());
}

int FUN_0c01d10c(int a4)
{
    int t0;

    t0 = FUN_0c0e18ce(0xC01D01C, 0x80);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34C)));
    *(volatile int *)((a4 + 0x340));
    return (FUN_0c0e61d4());
}

int FUN_0c0999cc(int a4)
{
    int t1;
    int t4;

    t1 = FUN_0c0e19aa(0xC099548, 0x2A8C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x34)) = (*(int *)((a4 + 0xBC)));
    t4 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x44)) = (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)));
    *(float *)((t1 + 0x4C)) = (*(float *)((a4 + 0x390)));
    return (FUN_0c0e61d4());
}

int FUN_0c233930(int a4, int a5, int a6)
{
    int t3;
    int stk[5];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t3 = FUN_0c0e56f4((*(int *)(((((*(signed char *)(((int)stk + 4))) << 2) + ((*(int *)(((int)stk + 8))) + 0x20)) + 0x0))));
    if (t3 == 0x100) {
        *(unsigned int *)((a6 + 0x0)) = 0x1;
    } else {
        if (t3 == 0x101) {
            *(unsigned int *)((a6 + 0x0)) = 0x2;
        } else {
            mwRnaErrCallFunc(0xC238894);
            *(unsigned int *)((a6 + 0x0)) = 0x0;
        }
    }
    return 0x0;
}

int FUN_0c23397a(int a4, int a5, int a6)
{
    int t3;
    int stk[5];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t3 = FUN_0c0e56f4((*(int *)(((((*(signed char *)(((int)stk + 4))) << 2) + ((*(int *)(((int)stk + 8))) + 0x28)) + 0x0))));
    if (t3 == 0x100) {
        *(unsigned int *)((a6 + 0x0)) = 0x1;
    } else {
        if (t3 == 0x101) {
            *(unsigned int *)((a6 + 0x0)) = 0x2;
        } else {
            mwRnaErrCallFunc(0xC238894);
            *(unsigned int *)((a6 + 0x0)) = 0x0;
        }
    }
    return 0x0;
}
