/* Straight-line functions with calls and guards (batch gen_afj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c086638(int, int, int);
extern int FUN_0c0866c4();
int FUN_0c085638(int a4, int a5, int a6, int a7);

int FUN_0c085638(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register float u0;
    register int t1;
    register int t2;
    register int t4;
    register int t8;
    register int t11;

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register float F3;
    register float F4;
    register float F15;
    register int T_;
    R4 = a4;
    u0 = *(float *)((R4 + 0x284));
    t1 = *(int *)((R4 + 0x3D4));
    t2 = *(int *)((R4 + 0x3D8));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((R4 + 0x3DC)));
    *(unsigned int *)((R4 + 0x2E4)) = 0x0;
    *(unsigned int *)((R4 + 0x2E8)) = 0x0;
    *(unsigned int *)((R4 + 0x2B4)) = 0x1;
    *(unsigned int *)((R4 + 0x2B8)) = 0x1;
    *(unsigned int *)((R4 + 0x2BC)) = 0x0;
    *(unsigned int *)((R4 + 0x2C0)) = 0x0;
    *(unsigned int *)((R4 + 0x2C4)) = 0x0;
    *(unsigned int *)((R4 + 0x2C8)) = 0x0;
    *(unsigned int *)((R4 + 0x2D4)) = 0x0;
    *(unsigned int *)((R4 + 0x2DC)) = 0x0;
    *(unsigned int *)((R4 + 0x2D8)) = 0x0;
    *(unsigned int *)((R4 + 0x2E0)) = 0x0;
    t4 = *(int *)((R4 + 0x2BC));
    *(unsigned int *)((R4 + 0x2AC)) = (((int)0x1 << (int)(unsigned char)(*(signed char *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x15)))) - 1);
    *(unsigned int *)((R4 + 0x2B0)) = 0x0;
    *(unsigned int *)((R4 + 0x2CC)) = 0x0;
    *(unsigned int *)((R4 + 0x2D0)) = 0x0;
    *(unsigned int *)((R4 + 0x2A4)) = 0x0;
    *(unsigned int *)((R4 + 0x2A8)) = 0x0;
    t8 = ((int (*)(int, int, int, int, float))(FUN_0c0866c4))((*(int *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x18))), t2, 0x0, a7, u0);
    t11 = ((int (*)(int, int, int, float))(FUN_0c0866c4))(((*(int *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x18))) + 0x6C), (*(int *)(((int)stk + 4))), 0x0, u0);
    FUN_0c086638(t2, t1, 0x0);
    *(float *)((R4 + 0x3E8)) = (*(float *)((t1 + 0x64)));
    *(unsigned int *)((R4 + 0x2F8)) = 0x0;
    *(unsigned int *)((R4 + 0x2FC)) = 0x0;
    return 0x2FC;
}
