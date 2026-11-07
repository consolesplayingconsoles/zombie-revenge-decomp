/* Straight-line functions with calls and guards (batch gen_adv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e4428(int);
int FUN_0c0e4d2c(int a4);

int FUN_0c0e4d2c(int a4)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    *(unsigned short *)(((((int)stk + 4) + 0xA) + 0x0)) = v0_0;
    v0_0 = *(signed char *)(((int)stk + 14));
    v0_1 = *(signed char *)((0xC94C848 + (unsigned char)((((v0_0 << 1) + v0_0) << 2) << 1)));
    v0_0 = (v0_1);
    if ((v0_1 == 1)) goto L_C0E4D58;
    L_C0E4E3E:;
    return v0_0;
    L_C0E4D58:;
    v0_1 = *(short *)(((int)stk + 14));
    v0_0 = (0xC94C849);
    if (((*(signed char *)(((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + 0xC94C849))) != 0)) goto L_C0E4D74;
    goto L_C0E4E3E;
    L_C0E4D74:;
    v0_0 = *(short *)(((int)stk + 14));
    *(unsigned int *)(((int)stk + 4)) = ((((((v0_0 << 1) + v0_0) << 2) << 2) << 1) + 0xA0800128);
    *(unsigned int *)(((int)stk + 8)) = (((((*(short *)(((int)stk + 14))) << 8) << 2) << 2) + 0x2A1);
    L_C0E4D9A:;
    v0_0 = *(short *)(((int)stk + 14));
    v0_1 = *(int *)(((*(int *)(((unsigned char)((((v0_0 << 1) + v0_0) << 2) << 1) + 0xC94C85C))) + 0x0));
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C0E4D9A;
    v0_1 = *(int *)(((v0_0 | 0xA0000000) + 0x0));
    *(unsigned int *)(((v0_0 | 0xA0000000) + 0x0)) = (v0_1 & 0x7FF);
    v0_1 = ((v0_1 & 0x7FF));
    v0_0 = ((v0_0 | 0xA0000000));
    if ((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) & 0x300) != 0x100)) goto L_C0E4E18;
    L_C0E4DF0:;
    v0_2 = *(short *)(((int)stk + 14));
    v0_2 = *(int *)((((*(int *)(((unsigned char)((((v0_2 << 1) + v0_2) << 2) << 1) + 0xC94C85C))) + 0x4) + 0x0));
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E4DF0;
    *(unsigned int *)(((v0_3 | 0xA0000000) + 0x0)) = ((*(int *)(((v0_3 | 0xA0000000) + 0x0))) & 0x7FF);
    L_C0E4E18:;
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 | 0x8000);
    FUN_0c0e4428((*(int *)(((int)stk + 8))));
    v0_0 = *(short *)(((int)stk + 14));
    *(unsigned char *)(((unsigned char)((((v0_0 << 1) + v0_0) << 2) << 1) + 0xC94C849)) = 0x0;
    v0_0 = (0xC94C849);
    goto L_C0E4E3E;
}
