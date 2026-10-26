/* Straight-line functions with calls and guards (batch gen_bv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01c230(void);
int FUN_0c01d3c6(void);
int FUN_0c036efc(int, int, int, int);
int FUN_0c0498ce(void);
int FUN_0c054d8e(void);
int FUN_0c06993c(void);
int FUN_0c07e1e8(void);
int FUN_0c082260(void);
int FUN_0c084104(void);
int FUN_0c084218(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0852bc(int);
int FUN_0c0a8d80(int);
int FUN_0c0bf940(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c4290(int);
int FUN_0c0c452c(int);
int FUN_0c0c45d0(void);
int FUN_0c0df280(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
int _quick_odd_mvn(int, int, int);
int memset(int, int, int);
int FUN_0c042ad8(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0a94e2(void);
int FUN_0c07e38c(void);
int FUN_0c0b0b4a(void);
int FUN_0c0acb5c(void);

int FUN_0c042ad8(int a4, int a5, int a6, float f4, float f5)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 8)) = a4;
    _quick_odd_mvn(a4, a5, a6);
    *(float *)(((int)stk + 36)) = f4;
    *(float *)(((int)stk + 40)) = f5;
    FUN_0c036efc((((int)stk + 4) + 0x14), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), ((int)stk + 4));
    *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (*(float *)(((int)stk + 12))));
    *(float *)((a6 + 0x4)) = ((*(float *)((a6 + 0x4))) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    *(float *)((a6 + 0x8)) = ((*(float *)((a6 + 0x8))) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
    return 0x8;
}

int FUN_0c0a94e2(void)
{
    int t18;
    int stk[3];

    FUN_0c0bfa90();
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0c45d0();
    FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    FUN_0c0c4290((*(int *)0xC23ED50));
    if ((*(int *)0xC204998) != 0) {
        FUN_0c0c452c((*(int *)0xC23ED50));
        *(unsigned int *)0xC1FF894 = 0x0;
    }
    FUN_0c07e1e8();
    FUN_0c01d3c6();
    FUN_0c0498ce();
    FUN_0c084104();
    t18 = FUN_0c0852bc((*(int *)0xC23ED50));
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t18;
}

int FUN_0c07e38c(void)
{
    int t1;
    int t5;
    int t6;
    int t7;

    FUN_0c07e1e8();
    t1 = FUN_0c0e1830(0xC07E458, 0x440);
    FUN_0c0e19d0(t1);
    memset(0xC247D1C, 0x0, 0x48);
    *(unsigned int *)0xC247CAC = t1;
    *(unsigned int *)0xC247CB0 = t1;
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        t5 = *(int *)0xC23ED50;
        *(unsigned int *)0xC247CA4 = (((((t5 << 2) + t5) << 2) << 1) + 0xC1016E0);
        t7 = 0xC23ED50;
    } else {
        t6 = FUN_0c082260();
        *(unsigned int *)0xC247CA4 = t6;
        t7 = t6;
    }
    *(unsigned int *)0xC247CFC = (*(short *)(((*(int *)0xC247CA4) + 0x0)));
    return t7;
}

int FUN_0c0b0b4a(void)
{
    int stk[2];

    FUN_0c0bfa90();
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0c45d0();
    FUN_0c07e1e8();
    FUN_0c084104();
    FUN_0c084218(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c01c230();
    FUN_0c01d3c6();
    *(unsigned int *)0xC247CF8 = 0x0;
    *(unsigned int *)0xC247D04 = 0x0;
    *(unsigned int *)0xC23ED5C = 0x0;
    *(unsigned int *)0xC23ED88 = 0x0;
    *(unsigned int *)0xC23A25C = 0xFFFFFFFF;
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return 0xC23A25C;
}

int FUN_0c0acb5c(void)
{
    int t2;
    int t7;
    int t9;

    FUN_0c0a8d80(0xC10EEEC);
    t2 = FUN_0c0e19aa(0xC0ACBEE, 0x3C, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    *(float *)((t2 + 0x38)) = (*(float *)0xC0ACC6C);
    FUN_0c06993c();
    t7 = FUN_0c0e19aa(0xC0ACC9C, 0x30, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t7);
    t9 = *(short *)0xC10EE74;
    return FUN_0c0df280((*(int *)(((((t9 << 1) + t9) << 2) + 0xC2623A0))), 0x1);
}
