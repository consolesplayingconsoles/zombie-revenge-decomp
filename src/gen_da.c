/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c09eec4(int a4, int a5, int a6);

int FUN_0c09eec4(int a4, int a5, int a6)
{
    int stk[2];
    int t3;

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F4;
    register float F5;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_3 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    t3 = *(int *)(((((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC10C7A8) + 0x14));
    FUN_0c0dbda0(((*(int *)((v0_1 + 0x3E4))) + ((((*(int *)(((((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC10C7A8) + 0x0))) << 2) << 2) << 2)));
    v0_1 = (0xC0DCC70);
    v0_2 = ((0x40 & t3));
    v0_1 = (t3);
    v0_3 = ((((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC10C7A8));
    w0_0 = (0.0f);
    w0_1 = (((float)v0_0 * 1.32999992f));
    if (((0x20 & t3) == 0)) goto L_C09EF56;
    FUN_0c0dcc70(w0_0, ((*(float *)((v0_3 + 0x8))) * (*(float *)((v0_3 + 0x4)))), w0_0);
    w0_0 = (32768.0f);
    if ((v0_2 == 0)) goto L_C09EF38;
    w0_0 = (((w0_1 / (*(float *)((v0_3 + 0x8)))) * w0_0));
    L_C09EF4A:;
    nlRotateAZ((int)w0_0);
    L_C09EF98:;
    return nlRotateAY(0x4000);
    L_C09EF38:;
    w0_0 = ((((-((w0_1 / (*(float *)((v0_3 + 0x8)))) * w0_0))) + w0_0));
    goto L_C09EF4A;
    L_C09EF56:;
    F4 = (w0_0);
    if ((v0_2 == 0)) goto L_C09EF6E;
    F5 = ((((*(float *)((v0_3 + 0x8))) - w0_1) * (*(float *)((v0_3 + 0x4)))));
    w0_0 = (w0_0);
    L_C09EF78:;
    FUN_0c0dcc70(F4, F5, w0_0);
    if (((v0_1 & 0x10) == 0)) goto L_C09EF98;
    return nlRotateAY(0xC000);
    L_C09EF6E:;
    F5 = ((w0_1 * (*(float *)((v0_3 + 0x4)))));
    w0_0 = (w0_0);
    goto L_C09EF78;
}
