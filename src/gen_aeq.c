/* Straight-line functions with calls and guards (batch gen_aeq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0b719e(int);
int FUN_0c0b736e(int a4, int a5);

int FUN_0c0b736e(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    v0_1 = a4;
    v0_2 = a5;
    R1004 = 0xC24FAB4;
    v0_6 = (int)0x9 <= (int)v0_2;
    v0_0 = (v0_2);
    v0_3 = (0xC24FB2C);
    v0_2 = (0xC24FB14);
    v0_4 = (0x9);
    v0_5 = (0xC24FAB4);
    if (v0_6) goto L_C0B73A0;
    L_C0B738C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 - 12)) = *(struct mv3 *)(v0_2); }
    v0_6 = (int)(v0_4 - 1) > (int)v0_0;
    v0_3 = ((v0_3 - 12));
    v0_2 = ((v0_2 - 12));
    v0_4 = ((v0_4 - 1));
    if (v0_6) goto L_C0B738C;
    L_C0B73A0:;
    v0_4 = (0xC24FB2C);
    v0_2 = ((((0x1 & (v0_1 + 0x1)) << 2) + 0xC24FB2C));
    if (((*(short *)(((((0x1 & (v0_1 + 0x1)) << 2) + 0xC24FB2C) + 0x0))) == 0)) goto L_C0B73E4;
    if (((int)(unsigned short)(*(short *)((v0_2 + 0x2))) < (int)v0_0)) goto L_C0B73E4;
    v0_3 = *(short *)((v0_2 + 0x2));
    *(unsigned short *)((v0_2 + 0x2)) = (v0_3 + 0x1);
    if (((int)(unsigned short)(v0_3 + 0x1) <= (int)0x9)) goto L_C0B73E4;
    *(unsigned short *)(((((0x1 & (v0_1 + 0x1)) << 2) + v0_4) + 0x2)) = 0x0;
    *(unsigned short *)(((((0x1 & (v0_1 + 0x1)) << 2) + v0_4) + 0x0)) = 0x0;
    L_C0B73E4:;
    R1004 = (v0_1 << 2);
    *(unsigned int *)((((((v0_0 << 1) + v0_0) << 2) + v0_5) + 0x0)) = (*(int *)(((v0_1 << 2) + 0xC247584)));
    *(unsigned short *)((((((v0_0 << 1) + v0_0) << 2) + v0_5) + 0xA)) = (*(int *)(((R1004) + 0xC23EDC0)));
    v0_3 = (((((v0_0 << 1) + v0_0) << 2) + v0_5));
    v0_2 = (((((v0_1 << 2) << 2) << 1) + 0xC247544));
    w0_0 = ((*(float *)0xC0B74CC));
    if (((int)(*(int *)((((((v0_1 << 2) << 2) << 1) + 0xC247544) + 0x0))) <= 0)) goto L_C0B742C;
    v0_5 = *(int *)((v0_2 + 0x0));
    w0_1 = ((((float)(*(int *)((v0_2 + 0x4))) / (float)v0_5) * w0_0));
    FPUL_ = (v0_5);
    L_C0B742E:;
    *(float *)((v0_3 + 0x4)) = w0_1;
    v0_5 = (0x4);
    if ((!(w0_1 > w0_0))) goto L_C0B7438;
    *(float *)((v0_3 + v0_5)) = w0_0;
    L_C0B7438:;
    *(unsigned short *)((v0_3 + 0x8)) = (FUN_0c0b719e(v0_1));
    v0_1 = R1004;
    *(unsigned short *)(((v0_1 + v0_4) + 0x0)) = 0x1;
    *(unsigned short *)(((v0_1 + v0_4) + 0x2)) = v0_0;
    return v0_0;
    L_C0B742C:;
    w0_1 = (0.0f);
    goto L_C0B742E;
}
