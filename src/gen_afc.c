/* Straight-line functions with calls and guards (batch gen_afc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c02a416(int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c03374c(int a4);

int FUN_0c03374c(int a4)
{
    int stk[7];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_2 = *(int *)((v0_1 + 0x488));
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    if (((*(int *)((v0_2 + 0xD8))) == 0)) goto L_C0337CA;
    *(unsigned int *)((v0_1 + 0x510)) = (*(int *)((v0_0 + 0x1C4)));
    *(unsigned int *)((v0_1 + 0xE4)) = (*(int *)((v0_0 + 0x1C4)));
    v0_2 = *(int *)((((*(int *)((v0_1 + 0x510))) << 2) + 0xC246FF0));
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
    FUN_0c03442c(v0_1, v0_2, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
    v0_2 = (v0_2);
    if (((*(int *)((v0_0 + 0xD8))) == 2)) goto L_C0337C0;
    FUN_0c0909fc(v0_0);
    v0_0 = (FUN_0c034b1c(v0_1, v0_2)) != 0;
    if (v0_0) goto L_C033806;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C033806;
    v0_0 = (0x2);
    L_C033812:;
    return v0_0;
    L_C033806:;
    v0_0 = (0x1);
    goto L_C033812;
    L_C0337C0:;
    FUN_0c090f70(v0_0);
    goto L_C033806;
    L_C0337CA:;
    w0_1 = *(float *)((v0_1 + 0x34));
    w0_0 = (w0_1);
    if ((w0_1 > ((*(float *)((v0_1 + 0x390))) + 12.0f))) goto L_C0337E8;
    w0_1 = *(float *)((v0_1 + 0x64));
    w0_0 = (w0_1);
    if ((-0.0272199996f > w0_1)) goto L_C033806;
    L_C0337E8:;
    if ((!((*(float *)((v0_1 + 0x34))) > (*(float *)((v0_1 + 0x390)))))) goto L_C033806;
    v0_2 = (FUN_0c02a416(v0_1)) != 0;
    if (v0_2) goto L_C033806;
    if (((*(int *)((v0_1 + 0x49C))) != 3)) goto L_C03380A;
    goto L_C033806;
    L_C03380A:;
    FUN_0c01cdc2(v0_0, R5);
    v0_0 = (0x0);
    goto L_C033812;
}
