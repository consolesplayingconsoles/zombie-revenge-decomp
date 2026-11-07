/* Straight-line functions with calls and guards (batch gen_afn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0219ec(void);
int FUN_0c021a48(void);
int FUN_0c021bac(void);
int FUN_0c021c64(void);
int FUN_0c021d00(void);
int FUN_0c021d30(int);
extern int FUN_0c0220dc();
int FUN_0c02219e(int a4);

int FUN_0c02219e(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_3 = *(int *)((v0_1 + 0x30));
    v0_2 = (v0_3);
    v0_0 = (v0_1);
    if ((v0_3 == 0)) goto L_C0221BA;
    if ((v0_2 == 1)) goto L_C0221D4;
    if ((v0_2 == 2)) goto L_C02222E;
    if ((v0_2 == 3)) goto L_C022236;
    L_C02224C:;
    return v0_2;
    L_C022236:;
    v0_1 = FUN_0c021d00();
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C02224C;
    FUN_0c021a48();
    *(unsigned int *)((v0_0 + 0x30)) = 0x1;
    *(unsigned int *)((v0_0 + 0x68)) = 0xFFFFFFFF;
    v0_2 = (0x68);
    goto L_C02224C;
    L_C02222E:;
    FUN_0c021c64();
    *(unsigned int *)((v0_0 + 0x30)) = 0x3;
    goto L_C022236;
    L_C0221D4:;
    if (((*(int *)0xC246494) != 0)) goto L_C02224C;
    v0_2 = *(int *)0xC23ED50;
    v0_1 = (v0_2);
    v0_3 = (0xC23ED50);
    if (((*(int *)((v0_0 + 0x68))) == v0_2)) goto L_C022226;
    v0_4 = *(int *)((v0_0 + 0x50));
    v0_5 = (*(int *)(((((v0_1 << 2) << 1) + v0_4) + 0x4))) != (*(int *)((v0_0 + 0x68)));
    v0_2 = (0x68);
    v0_1 = ((((v0_1 << 2) << 1) + v0_4));
    if (v0_5) goto L_C022202;
    *(unsigned int *)((v0_0 + 0x30)) = 0x2;
    goto L_C02224C;
    L_C022202:;
    *(unsigned int *)((((((*(int *)((v0_0 + 0x6C))) << 2) << 2) << 1) + 0xC246324)) = (*(int *)0xC246310);
    *(unsigned int *)((v0_0 + 0x68)) = (*(int *)((v0_3 + 0x0)));
    *(unsigned int *)(((0x6C + v0_0) + 0x0)) = (FUN_0c021d30(v0_0));
    FUN_0c021bac();
    L_C022226:;
    return ((int (*)(int, int))(FUN_0c0220dc))(v0_0, v0_3);
    L_C0221BA:;
    v0_1 = FUN_0c0219ec();
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    v0_2 = (v0_1);
    goto L_C02224C;
}
