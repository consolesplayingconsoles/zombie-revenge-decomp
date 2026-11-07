/* Straight-line functions with calls and guards (batch gen_agb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c0c4464();
int FUN_0c0a8adc(int a4, int a5, int a6, int a7);

int FUN_0c0a8adc(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x8) + 0xC);
    v0_0 = (v0_2);
    v0_1 = ((((int)stk + 4) + 0x8));
    v0_2 = (0x0);
    v0_3 = (((((int)stk + 4) + 0x8) + 0xC));
    v0_4 = (0x3);
    L_C0A8AF8:;
    v0_5 = (v0_4 - 0x1) != 0;
    *(unsigned int *)(((v0_3 - 0x4) + 0x0)) = v0_2;
    v0_3 = ((v0_3 - 0x4));
    v0_4 = ((v0_4 - 0x1));
    if (v0_5) goto L_C0A8AF8;
    v0_3 = *(int *)0xC23EDE0;
    v0_2 = (0xC0C4464);
    v0_2 = (v0_3);
    if ((v0_3 == 4)) goto L_C0A8B14;
    if ((v0_2 != 5)) goto L_C0A8B2E;
    L_C0A8B14:;
    v0_2 = *(int *)0xC23EDD0;
    *(unsigned int *)(((int)stk + 4)) = 0xC23EDC0;
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c0c4464))(v0_0, (*(int *)0xC23EDC0), v0_2, a7);
    *(unsigned int *)((v0_1 + (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) >> 1) << 2))) = 0x1;
    L_C0A8B2E:;
    v0_3 = *(int *)0xC23EDE4;
    v0_2 = (v0_3);
    if ((v0_3 == 4)) goto L_C0A8B42;
    v0_3 = (v0_2);
    if ((v0_2 != 5)) goto L_C0A8B5C;
    L_C0A8B42:;
    v0_2 = *(int *)0xC23EDD4;
    *(unsigned int *)(((int)stk + 4)) = 0xC23EDC4;
    v0_2 = ((int (*)(int, int, int))(FUN_0c0c4464))(v0_0, (*(int *)0xC23EDC4), v0_2);
    v0_2 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    *(unsigned int *)((v0_1 + ((v0_2 >> 1) << 2))) = 0x1;
    v0_3 = (((v0_2 >> 1) << 2));
    L_C0A8B5C:;
    v0_2 = ((*(int *)(((int)stk + 8))));
    v0_1 = (0x2);
    L_C0A8B60:;
    v0_4 = (*(int *)(((v0_2 - 4) + 0x0))) != 0;
    v0_2 = ((v0_2 - 4));
    if (v0_4) goto L_C0A8B72;
    v0_3 = ((((int (*)(int, int, int))(FUN_0c0c4464))(v0_0, (v0_1 << 1), 0x0)));
    L_C0A8B72:;
    v0_4 = v0_1 != 0;
    v0_1 = ((v0_1 - 1));
    if (v0_4) goto L_C0A8B60;
    return v0_3;
}
