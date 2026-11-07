/* Straight-line functions with calls and guards (batch gen_aea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c053dcc(int, int);
int FUN_0c08696c(int);
int FUN_0c04ddb0(int a4, int a5);

int FUN_0c04ddb0(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    v0_0 = (v0_1);
    if ((((*(int *)((v0_2 + 0x0))) & 0x400) == 0)) goto L_C04DE98;
    if (((int)(*(int *)(((0x29C + v0_0) + 0x0))) < (int)0x5)) goto L_C04DE98;
    v0_1 = (0x394);
    if (((*(int *)((v0_0 + 0x394))) != 0)) goto L_C04DE9A;
    v0_1 = (0xC1FE3D0);
    if (((*(int *)((((*(int *)((v0_0 + 0x340))) << 2) + 0xC1FE3D0))) == 0)) goto L_C04DE9A;
    *(unsigned int *)((v0_0 + 0x20C)) = 0x8;
    *(unsigned int *)((v0_0 + 0x210)) = 0x86;
    v0_2 = (0x1);
    v0_1 = ((*(int *)((((*(int *)((v0_0 + 0x340))) << 2) + 0xC1FE3D0))));
    if (((int)(*(int *)((v0_0 + 0x32C))) <= (int)0x1)) goto L_C04DE20;
    v0_3 = *(int *)((v0_0 + 0xC0));
    *(unsigned int *)(((0x2C4 + v0_0) + 0x0)) = (unsigned short)(*(short *)(((v0_1 + (((((v0_3 >> 1) << 2) + (v0_3 >> 1)) << 1) << 1)) + 0xE)));
    L_C04DE6C:;
    *(unsigned int *)((v0_0 + 0x2CC)) = v0_2;
    *(unsigned int *)((v0_0 + 0x2D4)) = v0_2;
    *(unsigned int *)((v0_0 + 0x3AC)) = 0x0;
    *(unsigned int *)((v0_0 + 0x3B0)) = 0x0;
    *(unsigned int *)((v0_0 + 0x394)) = v0_2;
    *(unsigned int *)((v0_0 + 0x378)) = 0x0;
    FUN_0c053dcc(v0_0, 0x1);
    FUN_0c08696c(v0_0);
    v0_1 = (v0_2);
    L_C04DE9A:;
    return v0_1;
    L_C04DE20:;
    if (((*(int *)((v0_0 + 0x330))) != 0)) goto L_C04DE4A;
    v0_3 = *(int *)((v0_0 + 0xC0));
    *(unsigned int *)((v0_0 + 0x2C4)) = (unsigned short)(*(short *)((v0_1 + ((((((v0_3 >> 1) << 2) + (v0_3 >> 1)) << 1) + (*(int *)(((0xC4 + v0_0) + 0x0)))) << 1))));
    goto L_C04DE6C;
    L_C04DE4A:;
    v0_3 = *(int *)((v0_0 + 0xC0));
    *(unsigned int *)(((0x2C4 + v0_0) + 0x0)) = (unsigned short)(*(short *)(((v0_1 + ((((((v0_3 >> 1) << 2) + (v0_3 >> 1)) << 1) + (*(int *)((v0_0 + 0xC4)))) << 1)) + 0x6)));
    goto L_C04DE6C;
    L_C04DE98:;
    v0_1 = (0x0);
    goto L_C04DE9A;
}
