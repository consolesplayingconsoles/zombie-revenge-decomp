/* Straight-line functions with calls and guards (batch gen_yu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0ae970(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_0c0ae970(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[1];

    register int R2;
    register int R9;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_0 = a5;
    v0_0 = a7;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_0 = (0xC0DC4C0);
    v0_0 = (0xC0C465C);
    v0_0 = (0xC0DCC70);
    v0_0 = (0xC0DC510);
    v0_0 = (0xC2022D8);
    L_C0AEA10:;
    v0_1 = *(short *)((v0_0 + 0x12));
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C0AE9F4;
    return v0_2;
    L_C0AE9F4:;
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((v0_0 + 0x0))), (*(float *)((v0_0 + 0x4))), (*(float *)((v0_0 + 0x8))));
    FUN_0c0c465c((unsigned short)(*(short *)((v0_0 + 0x12))));
    nlPopMatrix(0x1);
    v0_0 = ((v0_0 + 0x14));
    goto L_C0AEA10;
}
