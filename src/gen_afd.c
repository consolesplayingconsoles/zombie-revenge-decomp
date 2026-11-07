/* Straight-line functions with calls and guards (batch gen_afd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0e5f1c(void);
int FUN_0c04313c(int a4);

int FUN_0c04313c(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_0 = (0x2);
    v0_1 = (0xC246304);
    if ((((*(int *)0xC246304) & 0x2) != 0)) goto L_C0431F2;
    v0_3 = (0x1);
    if ((((*(int *)0xC246310) & 0x1) == 0)) goto L_C0431F2;
    v0_2 = (0xC246FF0);
    if (((int)(*(int *)0xC247074) <= (int)v0_3)) goto L_C0431F2;
    FUN_0c0da2e0();
    v0_3 = (int)(FUN_0c0e5f1c()) > (int)0x23;
    if (v0_3) goto L_C0431F2;
    v0_3 = (0x4);
    v0_5 = (0xFFFFFFFF);
    v0_4 = (0xC);
    L_C0431BC:;
    if (((int)v0_3 < (int)v0_4)) goto L_C0431A8;
    if (((int)v0_5 < 0)) goto L_C0431F2;
    v0_3 = (0x30);
    v0_4 = (0x40);
    L_C0431C8:;
    v0_6 = *(int *)(((v0_2 + v0_3) + 0x0));
    v0_5 = (v0_6);
    if (((*(int *)((v0_6 + 0xC0))) != 8)) goto L_C0431EC;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | v0_0);
    *(unsigned int *)((v0_5 + 0x4E0)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x498)));
    v0_0 = ((*(int *)((v0_5 + 0x498))));
    L_C0431F4:;
    return v0_0;
    L_C0431EC:;
    v0_5 = (unsigned int)(v0_3 + 0x4) < (unsigned int)v0_4;
    v0_3 = ((v0_3 + 0x4));
    if (v0_5) goto L_C0431C8;
    L_C0431F2:;
    v0_0 = (0xFFFFFFFF);
    goto L_C0431F4;
    L_C0431A8:;
    if (((*(int *)(((v0_2 + 0x40) + (v0_3 << 2)))) != 4)) goto L_C0431BA;
    v0_5 = (v0_3);
    L_C0431BA:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0431BC;
}
