/* Straight-line functions with calls and guards (batch gen_abj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float nlLength();
int FUN_0c0ceee4(int a4);

int FUN_0c0ceee4(int a4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_4 = a4;
    v0_0 = (0xC0CF104);
    v0_0 = (0x2);
    v0_1 = (0xC0DCDA0);
    v0_1 = (0xC246FF0);
    v0_2 = (0x0);
    v0_3 = (0x0);
    v0_4 = (v0_4);
    v0_5 = (0x10);
    w0_0 = (0.0f);
    w0_1 = ((*(float *)0xC0CF104));
    L_C0CEF0E:;
    if (((int)(*(int *)((((v0_1 + 0x40) + v0_3) + 0x0))) < (int)v0_0)) goto L_C0CEF3C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((*(int *)(((v0_1 + v0_2) + 0x0))) + 0x30)); }
    *(float *)(((int)stk + 8)) = w0_0;
    w0_3 = ((int (*)(int, int, Stk3))(nlLength))(v0_4, ((int)stk + 4), *(Stk3 *)(((int)stk + 4)));
    w0_2 = (w0_3);
    if ((!(w0_1 > w0_3))) goto L_C0CEF3C;
    v0_0 = (0x1);
    L_C0CEF6A:;
    return v0_0;
    L_C0CEF3C:;
    v0_6 = (unsigned int)(v0_3 + 0x4) < (unsigned int)v0_5;
    v0_2 = ((v0_2 + 0x4));
    v0_3 = ((v0_3 + 0x4));
    if (v0_6) goto L_C0CEF0E;
    v0_1 = (0xC943164);
    v0_2 = (0x0);
    v0_3 = (0xC943168);
    L_C0CEF62:;
    if (((int)v0_2 < (int)(*(int *)((v0_1 + 0x0))))) goto L_C0CEF4C;
    v0_0 = (0x0);
    goto L_C0CEF6A;
    L_C0CEF4C:;
    w0_0 = ((float (*)(int, int))(nlLength))(v0_4, v0_3);
    w0_2 = (w0_0);
    if ((!((*(float *)((v0_3 + 0xC))) > w0_0))) goto L_C0CEF5E;
    v0_0 = (0x2);
    goto L_C0CEF6A;
    L_C0CEF5E:;
    v0_2 = ((v0_2 + 0x1));
    v0_3 = ((v0_3 + 0x10));
    goto L_C0CEF62;
}
