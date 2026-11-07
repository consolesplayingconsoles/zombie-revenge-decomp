/* Straight-line functions with calls and guards (batch gen_afg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdGetDevice(int);
int kdGetDeviceInfo(int);
int trigger(void);

int trigger(void)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)(((*(int *)0xC98E18C) + 0xFB0)));
    R10 = (0x80);
    v0_0 = (0xC954328);
    v0_1 = (0xC954324);
    v0_2 = (0x0);
    v0_3 = (0x4);
    v0_4 = (0x1);
    L_C2237A2:;
    if (((int)v0_2 < (int)v0_3)) goto L_C22371E;
    v0_0 = (0x0);
    L_C2237A8:;
    return v0_0;
    L_C22371E:;
    if (((((int)v0_4 << (int)v0_2) & (unsigned char)(*(signed char *)(((int)stk + 4)))) == 0)) goto L_C2237A0;
    *(unsigned int *)(((int)stk + 8)) = (0xC237B84 + v0_2);
    v0_6 = kdGetDevice((unsigned char)(*(signed char *)(((0xC237B84 + v0_2) + 0x0))));
    v0_5 = kdGetDeviceInfo((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(unsigned char *)((v0_1 + v0_2)) = (*(signed char *)((v0_0 + v0_2)));
    v0_6 = (v0_6);
    if ((((*(int *)((v0_5 + 0x0))) & R10) == 0)) goto L_C2237A0;
    if (((*(signed char *)((v0_6 + 0x2))) != 0)) goto L_C2237A0;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x4))) != 8)) goto L_C2237A0;
    v0_5 = *(signed char *)(((*(int *)((v0_6 + 0x8))) + 0x8));
    *(unsigned char *)((v0_0 + v0_2)) = (v0_5 & 0x4);
    v0_6 = (((*(signed char *)((v0_1 + v0_2))) ^ (v0_5 & 0x4)));
    if (((unsigned char)(v0_5 & 0x4) != 0)) goto L_C2237A0;
    if (((unsigned char)v0_6 == 0)) goto L_C2237A0;
    v0_0 = ((v0_2 + 0x1));
    goto L_C2237A8;
    L_C2237A0:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C2237A2;
}
