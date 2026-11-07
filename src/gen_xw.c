/* Straight-line functions with calls and guards (batch gen_xw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c084e08(int a4, int a5);

int FUN_0c084e08(int a4, int a5)
{
    int stk[2];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_1 = FUN_0c0e19aa(0xC084F18, 0x74, (*(int *)0xC23ECE0));
    FUN_0c0e19d0(v0_1);
    *(unsigned int *)((v0_1 + 0x60)) = v0_0;
    v0_0 = (v0_0);
    v0_2 = (0xC247ED8);
    v0_1 = (v0_1);
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C084E3A;
    *(unsigned int *)((v0_1 + 0x64)) = v0_0;
    L_C084E3A:;
    *(float *)((v0_1 + 0x30)) = (float)(*(int *)((v0_2 + 0xB8C)));
    *(float *)((v0_1 + 0x34)) = (float)(*(int *)((v0_2 + 0xB90)));
    *(float *)((v0_1 + 0x38)) = (float)(*(int *)((v0_2 + 0xB94)));
    *(float *)((v0_1 + 0x3C)) = (((*(float *)((v0_1 + 0x30))) - (float)(*(int *)((v0_2 + 0xBA4)))) / (float)v0_0);
    *(float *)((v0_1 + 0x40)) = (((*(float *)((v0_1 + 0x34))) - (float)(*(int *)((v0_2 + 0xBA8)))) / (float)v0_0);
    *(float *)((v0_1 + 0x44)) = (((*(float *)((v0_1 + 0x38))) - (float)(*(int *)((v0_2 + 0xBAC)))) / (float)v0_0);
    *(unsigned int *)((v0_1 + 0x48)) = (unsigned char)((int)(*(int *)((v0_2 + 0xB98))) >> 8);
    *(unsigned int *)((v0_1 + 0x50)) = (unsigned char)(*(signed char *)((v0_2 + 0xB98)));
    v0_2 = *(int *)((v0_2 + 0xBB0));
    *(float *)((v0_1 + 0x4C)) = ((float)(((unsigned char)((int)v0_2 >> 8) - (*(int *)((v0_1 + 0x48)))) + ((((((unsigned char)v0_2 - (*(int *)((v0_1 + 0x50)))) << 2) << 2) << 2) << 1)) / (float)v0_0);
    return 0x4C;
}
