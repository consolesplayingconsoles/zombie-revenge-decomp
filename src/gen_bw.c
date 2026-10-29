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
int _quick_odd_mvn(void);
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
