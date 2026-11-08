/* Straight-line functions with calls and guards (batch gen_aeb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0bf908(int);
int FUN_0c0bfa90(void);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0d80c0(int);
int FUN_0c0daf60(int, int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0bf940(void);

int FUN_0c0bf940(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register int R11;
    register int R12;
    register float F9;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = (0xC260CB8);
    if (((*(int *)0xC260CB8) == 0)) goto L_C0BF952;
    return FUN_0c0bfa90();
    L_C0BF952:;
    v0_4 = *(int *)0xC23A180;
    v0_1 = (v0_4);
    v0_2 = (((*(int *)0xC23ED50) << 2));
    v0_3 = (0xC23ED50);
    if ((v0_4 == 2)) goto L_C0BF968;
    if ((v0_1 == 1)) goto L_C0BF9B0;
    *(unsigned int *)((v0_0 + 0x0)) = (*(int *)((v0_2 + 0xC1915F8)));
    v0_1 = (0xC1915F8);
    L_C0BFA0E:;
    if (((*(int *)((v0_0 + 0x0))) == 0)) goto L_C0BFA40;
    FUN_0c0d80c0(0x2008);
    if (((int)(*(int *)(((*(int *)((v0_0 + 0x0))) + 0x8))) < 0)) goto L_C0BFA32;
    FUN_0c0cbe74(0x2, (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x8))), (*(int *)0xC4BFE28));
    L_C0BFA32:;
    FUN_0c0bf908((*(int *)((v0_0 + 0x0))));
    return FUN_0c0d80c0(0x0);
    L_C0BFA40:;
    return v0_1;
    L_C0BF9B0:;
    *(unsigned int *)((v0_0 + 0x0)) = (*(int *)((v0_2 + 0xC1915BC)));
    v0_1 = (0xC1915BC);
    goto L_C0BFA0E;
    L_C0BF968:;
    v0_4 = *(short *)(((*(int *)0xC23ECFC) + 0x6));
    v0_1 = (v0_4);
    if (((v0_4 & 8) == 0)) goto L_C0BFA0E;
    *(unsigned int *)((v0_0 + 0x0)) = (*(int *)((v0_2 + 0xC191410)));
    if (((*(int *)((v0_3 + 0x0))) == 8)) goto L_C0BF98A;
    if (((*(int *)((v0_3 + 0x0))) == 19)) goto L_C0BF98A;
    v0_2 = *(int *)((v0_3 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 != 29)) goto L_C0BFA0E;
    L_C0BF98A:;
    FUN_0c0daf60(0x10, 0x10);
    FUN_0c0db0a0(0xE, 0xD);
    nlPrintf(0xC1A479C);
    v0_1 = ((FUN_0c0daf60(0x8, 0x8)));
    goto L_C0BFA0E;
}
