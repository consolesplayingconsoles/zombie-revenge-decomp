/* Straight-line functions with calls and guards (batch gen_kf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01843e(int, int, int, int);
int FUN_0c0e19f2(int);
int FUN_0c019762(int a4, int a5, int a6, int a7);

int FUN_0c019762(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_3 = a4;
    v0_4 = *(int *)0xC23EE54;
    v0_0 = ((FUN_0c01843e(v0_3, a5, a6, a7)));
    v0_1 = (v0_3);
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C0197E8;
    v0_4 = *(int *)((v0_1 + 0x30));
    v0_0 = (v0_4);
    if ((v0_4 == 0)) goto L_C019788;
    if ((v0_0 == 1)) goto L_C019796;
    if ((v0_0 == 2)) goto L_C0197DE;
    L_C0197E8:;
    return v0_0;
    L_C0197DE:;
    return FUN_0c0e19f2(v0_3);
    L_C019796:;
    w0_1 = *(float *)0xC01982C;
    w0_2 = *(float *)((v0_2 + 0x34));
    v0_0 = (0xC019830);
    w0_0 = ((w0_2 + w0_1));
    if ((!((*(float *)0xC019830) > (w0_2 + w0_1)))) goto L_C0197E8;
    w0_1 = *(float *)((v0_2 + 0x40));
    *(float *)((v0_2 + 0x40)) = (w0_1 * 0.995999992f);
    v0_0 = (0xC019838);
    w0_1 = ((w0_1 * 0.995999992f));
    w0_1 = (0.995999992f);
    FPUL_ = (0x3F7EF9DB);
    if ((!((*(float *)0xC019838) > w0_0))) goto L_C0197E8;
    *(float *)((v0_2 + 0x34)) = (*(float *)0xC01983C);
    *(float *)((v0_2 + 0x40)) = 0.0f;
    *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x10000);
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) + 0x1);
    v0_0 = (0x40);
    goto L_C0197E8;
    L_C019788:;
    *(float *)((v0_2 + 0x40)) = (*(float *)0xC019828);
    *(unsigned int *)((v0_1 + 0x30)) = ((*(int *)((v0_1 + 0x30))) + 0x1);
    goto L_C019796;
}
