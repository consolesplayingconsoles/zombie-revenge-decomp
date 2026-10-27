/* Straight-line functions with calls and guards (batch gen_fj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c01d276(int, int, int, int, Stk3);
int FUN_0c0a6356(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cdfd8(void);
int FUN_0c0ceee4(int);
int FUN_0c0cef82(int, int, int, int, int);
int FUN_0c0cf11c(int, int, Stk3);
int FUN_0c0d9900(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c213d02(void);
int pdExecPeripheralServer(void);
void FUN_0c092320(int a4);
int FUN_0c0ced7c(void);
void FUN_0c0cf09e(int a4, int a5, int a6, int a7, int a8);
void FUN_0c0c4f66(void);
int FUN_0c0cf2ac(int a4, int a5);
void FUN_0c08b87a(int a4);
int FUN_0c07e034(int a4);

void FUN_0c092320(int a4)
{
    int t0;
    int t5;
    int t6;

    t0 = FUN_0c0e1830(0xC0923C4, 0x2EC);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x30)) = a4;
    *(unsigned int *)((t0 + 0x34)) = (*(int *)((((*(int *)((a4 + 0x34C))) << 2) + 0xC2475D4)));
    t5 = (t0 + 0x4C);
    t6 = 0x14;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t5) = *(struct mv3 *)((a4 + 0x30)); }
        t6 = (t6 - 0x1);
        t5 = (t5 + 0x20);
        if (t6 == 0) {
            break;
        }
    }
}

int FUN_0c0ced7c(void)
{
    int t9;
    int stk[2];

    *(unsigned int *)0xC523158 = ((*(int *)0xC523158) + 0x1);
    if ((*(int *)0xC31FDA0) != 0) {
        FUN_0c213d02();
    }
    pdExecPeripheralServer();
    t9 = FUN_0c0d9900();
    if (((int)t9 >= (int)0x4268) && ((int)t9 <= (int)0x88B8)) {
    } else {
        FUN_0c0a6356(t9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    }
    if ((*(int *)0xC23A180) != 0) {
        FUN_0c0cdfd8();
    }
    return 0x0;
}

void FUN_0c0cf09e(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = 0x0;
    for (;;) {
        FUN_0c0cef82((*(int *)(((int)stk + 8))), a5, a6, a7, (((int)stk + 8) + 0x4));
        t3 = FUN_0c0ceee4((((int)stk + 8) + 0x4));
        if (t3 != 0) {
            t0 = (t0 + 0x1);
            if (((int)t0 >= (int)0x8) && (t3 != 1)) {
                break;
            }
            continue;
        }
        break;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)((((int)stk + 8) + 0x4)); }
}

void FUN_0c0c4f66(void)
{
    int t3;
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    int t0;
    int t1;

    t3 = 0xC1E80EC;
    t4 = 0x0;
    t5 = 0xC31EC18;
    for (;;) {
        t8 = (*(int *)((t3 + 0x4)));
        t9 = (*(int *)((t3 + 0x0)));
        for (;;) {
            t10 = (t8 == 0);
            t8 = (t8 - 1);
            if (t10) {
                break;
            }
            t1 = t9;
            t0 = t5;
            t9 = (t9 + 0xC);
            t5 = (t5 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        }
        t4 = (t4 + 0x1);
        t3 = (t3 + 0x8);
        if ((int)t4 >= (int)0x5F) {
            break;
        }
    }
}

int FUN_0c0cf2ac(int a4, int a5)
{
    int stk[5];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((*(int *)(((a5 << 2) + 0xC246FF0))) + 0x30)); }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (*(float *)0xC0CF34C));
    return (FUN_0c0cf11c(a4, ((int)stk + 4), *(Stk3 *)(((int)stk + 4))));
}

void FUN_0c08b87a(int a4)
{
    int t2;
    int t0;

    t2 = 0xC248CBC;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) != 0) {
            t0 = t2;
            t0 = (t0 + 0x8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)((a4)); }
        }
        t2 = (t2 + 0x14);
        if ((unsigned int)t2 >= (unsigned int)0xC248DAC) {
            break;
        }
    }
}

int FUN_0c07e034(int a4)
{
    int stk[5];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC101218); }
    return (FUN_0c01d276(a4, 0xD, 0x1, ((int)stk + 4), *(Stk3 *)(((int)stk + 4))));
}
