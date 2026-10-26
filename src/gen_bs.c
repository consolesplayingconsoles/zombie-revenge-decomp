/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08a220(int, int);
int FUN_0c09134c(int, int, int, int);
int FUN_0c0c0340(int);
int FUN_0c0db470(int, int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e61d4(int);
int FUN_0c0a30f0(int a4, int a5, int a6, int a7);
int FUN_0c095d14(int a4);

int FUN_0c0a30f0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;
    int t9;
    int t12;

    t0 = *(int *)((a4 + 0x74));
    *(unsigned int *)((a4 + 0x74)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x70))) + 0x203C);
    t7 = *(int *)((a4 + 0x6C));
    *(unsigned int *)((a4 + 0x6C)) = (t7 + 0x1);
    if ((int)(t7 + 0x1) >= (int)0x1) {
        *(unsigned int *)((a4 + 0x6C)) = 0x0;
        if ((*(int *)((a4 + 0x68))) != 0) {
            t9 = *(int *)((a4 + 0x70));
            *(unsigned int *)((a4 + 0x70)) = (t9 - 1);
            if ((t9 - 1) == 0) {
                *(unsigned int *)((a4 + 0x68)) = 0x0;
            }
        } else {
            t12 = *(int *)((a4 + 0x70));
            *(unsigned int *)((a4 + 0x70)) = (t12 + 0x1);
            if ((t12 + 0x1) == 2) {
                *(unsigned int *)((a4 + 0x68)) = 0x1;
            }
        }
    }
    return FUN_0c0c0340((a4 + 0x30));
}

int FUN_0c095d14(int a4)
{
    int stk[9];

    *(volatile int *)((a4 + 0xBC));
    FUN_0c0e61d4(a4);
    FUN_0c0dc5a0();
    FUN_0c0dc890((*(short *)((a4 + 0x6E))));
    FUN_0c0dc6e0((*(short *)((a4 + 0x6C))));
    FUN_0c0db470(0xC10BC94, ((int)stk + 4));
    FUN_0c0dc4c0(0x1);
    FUN_0c09134c((((int)stk + 4) + 0xC), ((int)stk + 4), 0x8, 0x2);
    return (FUN_0c08a220((((int)stk + 4) + 0xC), 0x1));
}
