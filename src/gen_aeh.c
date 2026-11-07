/* Straight-line functions with calls and guards (batch gen_aeh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c02b648(int a4);

int FUN_0c02b648(int a4)
{
    int stk[1];

    register int R2;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = (FUN_0c02a416(v0_0)) == 0;
    v0_0 = (v0_0);
    if (v0_1) goto L_C02B660;
    *(unsigned int *)((v0_0 + 0x538)) = 0xA;
    L_C02B716:;
    v0_1 = (0x4F8);
    v0_2 = (0x0);
    L_C02B71A:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_2;
    L_C02B71C:;
    return v0_1;
    L_C02B660:;
    v0_2 = FUN_0c02a35a(v0_0);
    v0_1 = (v0_2);
    v0_3 = (0x2);
    if ((v0_2 == 0)) goto L_C02B67C;
    if ((v0_1 == 1)) goto L_C02B6F4;
    if ((v0_1 == 2)) goto L_C02B6FE;
    if ((v0_1 == 3)) goto L_C02B708;
    *(unsigned int *)((v0_0 + 0x538)) = v0_3;
    goto L_C02B716;
    L_C02B708:;
    *(unsigned int *)((v0_0 + 0x538)) = v0_3;
    v0_1 = (0x4F8);
    v0_2 = (0xC);
    goto L_C02B71A;
    L_C02B6FE:;
    *(unsigned int *)((v0_0 + 0x538)) = v0_3;
    v0_1 = (0x4F8);
    v0_2 = (0x6);
    goto L_C02B71A;
    L_C02B6F4:;
    *(unsigned int *)((v0_0 + 0x538)) = v0_3;
    *(unsigned int *)((v0_0 + 0x4F8)) = v0_3;
    v0_1 = (0x4F8);
    goto L_C02B71C;
    L_C02B67C:;
    v0_1 = (FUN_0c035b26(v0_0)) == 0;
    if (v0_1) goto L_C02B6B4;
    v0_1 = (FUN_0c035ce4(v0_0)) == 0;
    if (v0_1) goto L_C02B6B4;
    *(unsigned int *)((v0_0 + 0x4F8)) = 0x4;
    v0_1 = (0x4F8);
    goto L_C02B71C;
    L_C02B6B4:;
    v0_2 = *(int *)((v0_0 + 0x538));
    v0_1 = (v0_2);
    if ((v0_2 == 8)) goto L_C02B6E4;
    if ((v0_1 == 6)) goto L_C02B6E4;
    if ((v0_1 == 7)) goto L_C02B6E4;
    if ((v0_1 == 4)) goto L_C02B6E4;
    if ((v0_1 == 5)) goto L_C02B6E4;
    if ((v0_1 == 10)) goto L_C02B6E4;
    if ((v0_1 == 1)) goto L_C02B716;
    if ((v0_1 == 2)) goto L_C02B716;
    if ((v0_1 == 3)) goto L_C02B716;
    if ((v0_1 == 9)) goto L_C02B716;
    goto L_C02B716;
    L_C02B6E4:;
    *(unsigned int *)((v0_0 + 0x524)) = 0x0;
    FUN_0c0236ce(v0_0);
    goto L_C02B716;
}
