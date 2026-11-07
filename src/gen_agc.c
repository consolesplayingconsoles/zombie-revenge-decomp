/* Straight-line functions with calls and guards (batch gen_agc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c04c306(int);
int FUN_0c054c8a(int);
int FUN_0c05824e(int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0909fc(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0e19f2();
int FUN_0c05c4ca(int a4, int a5, int a6);

int FUN_0c05c4ca(int a4, int a5, int a6)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_0 = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x3C)) = *(struct mv3 *)((v0_1 + 0x30)); }
    v0_2 = *(int *)((v0_1 + 0xBC));
    v0_3 = *(int *)((v0_1 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x30)) = *(struct mv3 *)((((((((v0_2 << 1) + v0_2) << 2) << 2) << 2) + 0xC23F268) + (((v0_3 << 1) + v0_3) << 2))); }
    v0_2 = (v0_1);
    if (((*(int *)((v0_1 + 0xD8))) == 0)) goto L_C05C55E;
    FUN_0c05a98a(v0_2, v0_0, a6);
    if (((*(int *)((v0_2 + 0xD8))) != 1)) goto L_C05C55E;
    FUN_0c0cc3f8(0x230A9, v0_0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc054((*(int *)((v0_2 + 0xBC))), 0x7);
    FUN_0c054c8a(v0_2);
    FUN_0c0909fc(v0_2);
    FUN_0c04c306((*(int *)((((*(int *)((v0_2 + 0xBC))) << 2) + 0xC246FF0))));
    FUN_0c05824e((*(int *)((v0_2 + 0xBC))), (*(int *)((v0_2 + 0x1C4))));
    v0_3 = ((int (*)(void))(FUN_0c0e19f2))();
    L_C05C55E:;
    v0_3 = *(int *)((v0_2 + 0x22C));
    *(unsigned int *)((v0_2 + 0x22C)) = (v0_3 - 1);
    if (((int)(v0_3 - 1) < 0)) goto L_C05C576;
    if ((((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x20C))) & 0x1A00) == 0)) goto L_C05C57C;
    L_C05C576:;
    v0_1 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_1, v0_0);
    L_C05C57C:;
    return FUN_0c01cdc2(v0_2, v0_0);
}
