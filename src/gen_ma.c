/* Straight-line functions with calls and guards (batch gen_ma): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c034fbc(int, int, int, int);
int FUN_0c035ad6(int, int);
int FUN_0c038c50(int a4);

int FUN_0c038c50(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_0 = R14;
    *(int *)((int)stk + 8) = v0_0;
    v0_2 = (*(int *)((v0_1 + 0x2F0))) == 0;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_0 = (0x2F0);
    R14 = (v0_1);
    if (v0_2) goto L_C038CDA;
    v0_1 = *(int *)((R14 + 0x500));
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (v0_1);
    if ((v0_1 == 1)) goto L_C038CDA;
    v0_0 = (*(int *)((R14 + 0x50C))) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_0) goto L_C038C7A;
    FUN_0c034fbc(R14, 0x200, 0x1, 0x0);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C038C7A:;
    v0_0 = (*(int *)((R14 + 0x524))) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_0) goto L_C038C9A;
    v0_0 = FUN_0c035ad6(R14, (*(int *)((R14 + 0x510))));
    v0_1 = (int)v0_0 >= (int)(*(int *)(((0x528 + R14) + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (v0_0);
    if (v0_1) goto L_C038CAA;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_C038CDA:;
    *(volatile int *)((int)stk + 4);
    return v0_0;
    L_C038CAA:;
    v0_0 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((v0_0 << 2) + v0_0) << 2) + 0xC1F8E44))) + 0x0)));
    *(unsigned int *)((R14 + 0x2CC)) = 0x1;
    *(unsigned int *)((R14 + 0x5AC)) = 0x1;
    *(unsigned int *)((R14 + 0x5B0)) = 0x0;
    *(unsigned int *)((R14 + 0x500)) = 0x1;
    *(unsigned int *)((R14 + 0x4F8)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (0x4F8);
    goto L_C038CDA;
    L_C038C9A:;
    v0_0 = *(int *)((R14 + 0x3AC));
    *(unsigned int *)((R14 + 0x3AC)) = (v0_0 + 0x1);
    v0_1 = (int)(v0_0 + 0x1) <= (int)(*(int *)((R14 + 0x3B0)));
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (0x3B0);
    if (v0_1) goto L_C038CDA;
    goto L_C038CAA;
}
