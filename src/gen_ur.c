/* Straight-line functions with calls and guards (batch gen_ur): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02eaee(int a4);

int FUN_0c02eaee(int a4)
{
    int stk[27];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F10;
    register float F14;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    if (((*(int *)((v0_0 + 0x5DC))) == 0)) goto L_C02EB04;
    L_C02EC3E:;
    v0_5 = (0xFFFFFFFF);
    L_C02EC4A:;
    return v0_5;
    L_C02EB04:;
    v0_1 = (0xC2475D4);
    if (((*(int *)0xC247994) != 0)) goto L_C02EB12;
    goto L_C02EC3E;
    L_C02EB12:;
    v0_5 = (0xC);
    v0_6 = (0xB);
    v0_2 = ((((int)stk + 4) + 0x34));
    v0_7 = (0x0);
    v0_3 = (0x0);
    v0_4 = (((int)stk + 4));
    L_C02EBAA:;
    if (((int)v0_3 < (int)v0_5)) goto L_C02EB60;
    *(unsigned int *)((v0_2 + (v0_7 << 2))) = 0xFFFFFFFF;
    *(float *)((v0_4 + (v0_7 << 2))) = 999.998962f;
    v0_3 = (v0_7);
    v0_1 = (0xFFFFFFFF);
    FPUL_ = (0x4479FFEF);
    L_C02EBD8:;
    v0_6 = (int)(*(int *)((v0_2 + ((v0_1 + 0x1) << 2)))) >= 0;
    v0_5 = (((v0_1 + 0x1) << 2));
    v0_1 = ((v0_1 + 0x1));
    if (v0_6) goto L_C02EBC8;
    v0_1 = (0xC246FF0);
    if (((*(int *)0xC247030) != 4)) goto L_C02EC14;
    if ((!((*(float *)(((((((*(int *)((v0_0 + 0xBC))) << 2) << 2) << 2) + (0x94 + v0_1)) + 0x0))) > (*(float *)((((v0_3 << 2) + ((int)stk + 4)) + 0x0)))))) goto L_C02EC3E;
    L_C02EC14:;
    if (((*(int *)((v0_1 + 0x44))) != 4)) goto L_C02EC42;
    if (((*(float *)(((((((*(int *)((v0_0 + 0xBC))) << 2) << 2) << 2) + (0x94 + v0_1)) + 0x4))) > (*(float *)((((v0_3 << 2) + ((int)stk + 4)) + 0x0))))) goto L_C02EC42;
    goto L_C02EC3E;
    L_C02EC42:;
    v0_5 = ((*(int *)((v0_2 + (v0_3 << 2)))));
    goto L_C02EC4A;
    L_C02EBC8:;
    if (((*(float *)((v0_4 + v0_5))) > (*(float *)((v0_4 + (v0_3 << 2)))))) goto L_C02EBD8;
    v0_3 = (v0_1);
    goto L_C02EBD8;
    L_C02EB60:;
    if (((int)(*(int *)((((v0_3 << 2) + (v0_1 + 0x30)) + 0x0))) < (int)v0_6)) goto L_C02EBA8;
    if (((*(int *)(((v0_1 + 0x60) + (v0_3 << 2)))) != 13)) goto L_C02EBA8;
    *(unsigned int *)((v0_2 + (v0_7 << 2))) = v0_3;
    *(float *)((v0_4 + (v0_7 << 2))) = (*(float *)(((((((v0_3 << 2) << 2) << 2) + (0xC0 + v0_1)) + ((*(int *)(((0xBC + v0_0) + 0x0))) << 2)) + 0x0)));
    v0_7 = ((v0_7 + 0x1));
    L_C02EBA8:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C02EBAA;
}
