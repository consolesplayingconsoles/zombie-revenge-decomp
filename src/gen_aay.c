/* Straight-line functions with calls and guards (batch gen_aay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int);
int FUN_0c04b496(int a4, int a5);

int FUN_0c04b496(int a4, int a5)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = R14;
    *(int *)((int)stk + 8) = v0_2;
    v0_3 = (*(int *)((v0_0 + 0x394))) != 0;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    R14 = (v0_0);
    if (v0_3) goto L_C04B526;
    v0_4 = ((*(int *)((v0_1 + 0x0))) & 2) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (0x1);
    v0_2 = (0xC23ED88);
    v0_3 = (0x100);
    if (v0_4) goto L_C04B4E0;
    *(unsigned int *)((R14 + 0x20C)) = v0_3;
    *(unsigned int *)((R14 + 0x210)) = 0x60;
    *(unsigned int *)((R14 + 0x2C4)) = 0x43A;
    *(unsigned int *)((R14 + 0x2CC)) = v0_0;
    *(unsigned int *)((R14 + 0x394)) = v0_0;
    *(unsigned int *)((R14 + 0x2D4)) = 0x3;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) | 0x10000);
    FUN_0c0cc3f8(0xA20A9, v0_1, v0_2, v0_3, *(int *)((int)stk + 4));
    v0_1 = (0x18);
    L_C04B516:;
    FUN_0c0cc054((*(int *)((R14 + 0xBC))), v0_1);
    *(volatile int *)((int)stk + 4);
    return 0x1;
    L_C04B4E0:;
    v0_4 = ((*(int *)((v0_1 + 0x0))) & 0x200) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_4) goto L_C04B526;
    *(unsigned int *)((R14 + 0x20C)) = v0_3;
    *(unsigned int *)((R14 + 0x210)) = 0x64;
    *(unsigned int *)((R14 + 0x2C4)) = 0x440;
    *(unsigned int *)((R14 + 0x2CC)) = v0_0;
    *(unsigned int *)((R14 + 0x394)) = v0_0;
    *(unsigned int *)((R14 + 0x2D4)) = 0x3;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) | 0x10000);
    FUN_0c0cc3f8(0xA20A9, v0_1, v0_2, v0_3, *(int *)((int)stk + 4));
    v0_1 = (0x19);
    goto L_C04B516;
    L_C04B526:;
    *(volatile int *)((int)stk + 4);
    return 0x0;
}
