/* Straight-line functions with calls and guards (batch gen_abr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0101dc(int, int, int, float);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0c9e86(int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dd050(int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0ca538(int a4, int a5, int a6);

int FUN_0c0ca538(int a4, int a5, int a6)
{
    int stk[24];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register float F4;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_2 = a5;
    v0_0 = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x58) + 0x0)) = v0_2;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder(((*(int *)(((int)stk + 12))) + 0x2EC));
    nlGetMatrix((((int)stk + 4) + 0x18));
    FUN_0c0c9e86(v0_0);
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC1E9CD0); }
    FUN_0c0dbda0((v0_0 + 0x74));
    nlMultiMatrix((((int)stk + 4) + 0x18));
    nlInvertMatrix(0x0);
    FUN_0c0db4d0((((int)stk + 4) + 0xC), 0xC31FD88);
    FUN_0c0dd050(0xC31FD88);
    nlPopMatrix(0x1);
    nlMultiMatrixRevOrder((v0_0 + 0x74));
    nlMultiMatrixRevOrder(0xC1E9CDC);
    nlMultiMatrixRevOrder((0xB4 + v0_0));
    v0_1 = *(int *)(((int)stk + 8));
    v0_2 = (v0_1);
    v0_0 = (v0_0);
    if ((v0_1 == 0)) goto L_C0CA6A2;
    FUN_0c0844dc((*(int *)((v0_0 + 0xC))), (*(int *)((v0_0 + 0x10))), 0x0, 1.0f);
    FUN_0c0844dc((*(int *)((v0_0 + 0xC))), (*(int *)((v0_0 + 0x10))), 0x1, 1.0f);
    *(unsigned int *)(((int)stk + 4)) = (v0_2 + 0x18);
    nlGetMatrix((((int)stk + 4) + 0x18));
    L_C0CA694:;
    v0_0 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_0 + 0x4);
    v0_0 = *(int *)((((v0_0 + 0x4) - 4) + 0x0));
    v0_1 = (v0_0);
    if (!((v0_0 != 0))) goto L_C0CA6A2;
    if (((v0_1 & 0x80000000) == 0)) goto L_C0CA60A;
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 4))) - 4) + 0x50);
    goto L_C0CA694;
    L_C0CA6A2:;
    return (nlPopMatrix(0x1));
    L_C0CA60A:;
    if (((v0_1 & 0x10) == 0)) goto L_C0CA61E;
    v0_0 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_0 + 0x4);
    v0_0 = ((*(int *)((((v0_0 + 0x4) - 4) + 0x0))));
    L_C0CA634:;
    FUN_0c0101dc(((int)stk + 4), (((int)stk + 4) + 0x58), v0_0, F4);
    v0_0 = (0xC0101DC);
    goto L_C0CA694;
    L_C0CA61E:;
    if (((v0_1 & 0x8) == 0)) goto L_C0CA642;
    v0_0 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_0 + 0x4);
    v0_0 = *(int *)((((v0_0 + 0x4) - 4) + 0x0));
    v0_0 = (((v0_0 << 1) + v0_0));
    goto L_C0CA634;
    L_C0CA642:;
    goto L_C0CA642;
}
