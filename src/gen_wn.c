/* Straight-line functions with calls and guards (batch gen_wn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int kmGetCurrentScanline(int a4);

int kmGetCurrentScanline(int a4)
{
    int stk[3];
    int t2;

    register int R0;
    register int R1;
    register int R3;
    int R7;
    register int R9;
    register int R12;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    if ((((*(int *)0xC952300) & 2) == 0)) goto L_C20D5B6;
    t2 = kmiReadRegister(0x10C);
    v0_2 = (t2);
    v0_0 = ((0x3FF & t2));
    L_C20D5B8:;
    v0_1 = (((*(int *)0xC952358) + (*(int *)0xC952350)));
    R7 = (0x1);
    w0_0 = (1.0f);
    w0_1 = (1.0f);
    if ((((*(int *)0xC95231C) & 0x1) != 1)) goto L_C20D620;
    if ((R7 == 0)) goto L_C20D620;
    v0_3 = (0x1E0);
    L_C20D652:;
    *(unsigned int *)(((int)stk + 8)) = ((unsigned int)(*(int *)0xC9525EC) >> 16);
    if ((((*(int *)0xC95231C) & R7) == 1)) goto L_C20D678;
    if ((((*(int *)0xC95231C) & 44) == 0)) goto L_C20D678;
    if ((R7 == 0)) goto L_C20D678;
    if (((v0_2 & 0x40000) == 0)) goto L_C20D678;
    v0_0 = ((v0_0 + 0x1));
    L_C20D678:;
    v0_2 = (int)(int)((float)(v0_0 - v0_1) * w0_0) > (int)v0_3;
    v0_3 = (int)((float)(v0_0 - v0_1) * w0_0);
    v0_0 = ((int)((float)(v0_0 - v0_1) * w0_0));
    FPUL_ = v0_3;
    if (v0_2) goto L_C20D6C0;
    v0_1 = ((*(int *)(((int)stk + 4))));
    L_C20D6C6:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    return 0x0;
    L_C20D6C0:;
    v0_1 = ((*(int *)(((int)stk + 4))));
    v0_0 = ((v0_0 - (*(int *)(((int)stk + 8)))));
    goto L_C20D6C6;
    L_C20D620:;
    if ((((*(int *)0xC95231C) & R7) == 1)) goto L_C20D650;
    if ((((*(int *)0xC95231C) & 44) == 0)) goto L_C20D650;
    if ((R7 == 0)) goto L_C20D650;
    if ((((*(int *)0xC95231C) & 32) == 0)) goto L_C20D646;
    v0_3 = (0x1E0);
    v0_1 = ((v0_1 + v0_1));
    w0_0 = (w0_1);
    goto L_C20D652;
    L_C20D646:;
    v0_3 = (0xF0);
    v0_1 = ((v0_1 + v0_1));
    w0_0 = (0.5f);
    goto L_C20D652;
    L_C20D650:;
    v0_3 = (0xF0);
    goto L_C20D652;
    L_C20D5B6:;
    v0_0 = (0x0);
    goto L_C20D5B8;
}
