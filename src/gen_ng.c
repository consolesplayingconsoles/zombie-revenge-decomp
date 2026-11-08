/* Straight-line functions with calls and guards (batch gen_ng): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0a9bb8(void);

int FUN_0c0a9bb8(void)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1004 = 0xC23EDD0;
    v0_0 = (0x0);
    v0_1 = (0xC);
    v0_2 = (0x0);
    v0_3 = (0xC10D4BC);
    v0_4 = (0x1);
    v0_5 = (0xFFFFF8E4);
    w0_0 = (1.0f);
    L_C0A9BDE:;
    R1008 = (*(int *)((v0_3 + 0x14)));
    v0_9 = FUN_0c0e1830(0xC0B35E4, 0x474);
    FUN_0c0e19d0(v0_9);
    *(unsigned int *)(((0xC0 + v0_9) + 0x0)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned int *)((v0_9 + 0xBC)) = (*(signed char *)((v0_3 + 0x0)));
    *(float *)(((0x468 + v0_9) + 0x8)) = w0_0;
    *(float *)(((0x468 + v0_9) + 0x4)) = w0_0;
    *(float *)(((0x468 + v0_9) + 0x0)) = w0_0;
    *(float *)(((0x45C + v0_9) + 0x8)) = w0_0;
    *(float *)(((0x45C + v0_9) + 0x4)) = w0_0;
    *(float *)(((0x45C + v0_9) + 0x0)) = w0_0;
    *(float *)((v0_9 + 0x284)) = w0_0;
    *(float *)((v0_9 + 0x27C)) = w0_0;
    *(float *)((v0_9 + 0x278)) = w0_0;
    *(float *)((v0_9 + 0x274)) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_9 + 0x30)) = *(struct mv3 *)((v0_3 + 0x8)); }
    v0_6 = (v0_9);
    v0_7 = (v0_0);
    v0_8 = ((R1004));
    v0_9 = (((*(int *)((v0_9 + 0xC0))) & 0xFFFFFFFE));
    L_C0A9C46:;
    if (((*(int *)((v0_7 + 0xC23EDE0))) != 4)) goto L_C0A9C5E;
    if (((*(int *)((v0_7 + 0xC23EDC0))) != v0_9)) goto L_C0A9C5E;
    *(unsigned int *)((v0_6 + 0xC4)) = (*(int *)((v0_8 + 0x0)));
    L_C0A9C66:;
    FUN_0c0855ba(v0_6);
    FUN_0c0ba6e8(v0_6);
    FUN_0c0ba776(v0_6);
    FUN_0c085638(v0_6);
    FUN_0c0b359e(v0_6, (R1008));
    *(unsigned int *)((v0_2 + 0xC246FF0)) = v0_6;
    *(unsigned short *)((v0_6 + 0x6C)) = v0_5;
    *(unsigned int *)((v0_6 + 0x2E8)) = v0_4;
    v0_6 = (unsigned int)(v0_2 + 0x4) < (unsigned int)v0_1;
    v0_2 = ((v0_2 + 0x4));
    v0_3 = ((v0_3 + 0x18));
    if (v0_6) goto L_C0A9BDE;
    return (FUN_0c0e1830(0xC0A9CB8, 0x30));
    L_C0A9C5E:;
    v0_10 = (unsigned int)(v0_7 + 0x4) < (unsigned int)v0_1;
    v0_7 = ((v0_7 + 0x4));
    v0_8 = ((v0_8 + 0x4));
    if (v0_10) goto L_C0A9C46;
    goto L_C0A9C66;
}
