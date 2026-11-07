/* Straight-line functions with calls and guards (batch gen_adw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c04fe58(int a4, int a5);

int FUN_0c04fe58(int a4, int a5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = *(int *)0xC23ED50;
    v0_1 = (v0_3);
    if ((v0_3 == 53)) goto L_C04FE66;
    L_C04FF60:;
    return v0_1;
    L_C04FE66:;
    v0_1 = (0x394);
    if (((*(int *)((v0_0 + 0x394))) != 0)) goto L_C04FF60;
    if ((((*(int *)((v0_2 + 0x0))) & 0x602) == 0)) goto L_C04FF60;
    v0_2 = (0xC246FF0);
    v0_3 = (0x9B);
    if (((*(int *)((0xC247030 + ((((*(int *)((v0_0 + 0xBC))) + 0x1) & 0x1) << 2)))) != 4)) goto L_C04FEB2;
    v0_4 = *(int *)(((*(int *)(((((0x1 & ((*(int *)((v0_0 + 0xBC))) + 0x1)) << 2) + v0_2) + 0x0))) + 0x210));
    v0_1 = (0x210);
    v0_2 = (v0_4);
    if ((v0_4 == v0_3)) goto L_C04FF60;
    if ((v0_2 == 0x9C)) goto L_C04FF60;
    L_C04FEB2:;
    v0_4 = *(short *)((v0_0 + 0x6E));
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    v0_5 = *(int *)0xC1FE824;
    *(unsigned int *)(((int)stk + 8)) = (short)(v0_4 - v0_5);
    v0_1 = (0xC04FF90);
    v0_2 = (0xC1FE818);
    FPUL_ = ((short)(v0_4 - v0_5));
    if ((!(6144.0f > _builtin_fabsf((float)(short)(v0_4 - v0_5))))) goto L_C04FF60;
    w0_0 = *(float *)((v0_2 + 0x0));
    w0_1 = *(float *)((v0_0 + 0x30));
    v0_4 = !((*(float *)((v0_2 + 0x10))) > _builtin_fabsf((w0_1 - w0_0)));
    v0_1 = (0x10);
    w0_0 = (_builtin_fabsf((w0_1 - w0_0)));
    if (v0_4) goto L_C04FF60;
    w0_0 = *(float *)((v0_2 + 0x8));
    w0_1 = *(float *)((v0_0 + 0x38));
    v0_4 = !((*(float *)((v0_2 + 0x14))) > _builtin_fabsf((w0_1 - w0_0)));
    v0_1 = (0x14);
    w0_0 = (_builtin_fabsf((w0_1 - w0_0)));
    if (v0_4) goto L_C04FF60;
    *(unsigned int *)((v0_0 + 0x20C)) = 0x100;
    *(unsigned int *)((v0_0 + 0x210)) = v0_3;
    *(unsigned int *)((v0_0 + 0x2C4)) = 0x16B;
    *(unsigned int *)((v0_0 + 0x2CC)) = 0x1;
    *(unsigned int *)((v0_0 + 0xA4)) = ((*(int *)((v0_0 + 0xA4))) & 0xFFFFFFFD);
    *(unsigned int *)((v0_0 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((v0_0 + 0x394)) = 0x1;
    *(unsigned short *)((v0_0 + 0x6E)) = (*(int *)((v0_2 + 0xC)));
    *(unsigned int *)((v0_0 + 0x3B4)) = (*(int *)((v0_2 + 0x24)));
    *(float *)((v0_0 + 0x258)) = (((*(float *)((v0_2 + 0x18))) - (*(float *)((v0_0 + 0x30)))) / (float)(*(int *)((v0_0 + 0x3B4))));
    w0_0 = *(float *)((v0_0 + 0x38));
    w0_1 = *(float *)((v0_2 + 0x20));
    v0_2 = *(int *)((v0_0 + 0x3B4));
    *(float *)((v0_0 + 0x260)) = ((w0_1 - w0_0) / (float)v0_2);
    v0_1 = (0x260);
    w0_0 = (((w0_1 - w0_0) / (float)v0_2));
    FPUL_ = (v0_2);
    goto L_C04FF60;
}
