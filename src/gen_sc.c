/* Straight-line functions with calls and guards (batch gen_sc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c061030(int a4, int a5, int a6, int a7);

int FUN_0c061030(int a4, int a5, int a6, int a7)
{
    int stk[14];

    register int R1;
    register int R2;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_1 + 0x230)));
    v0_4 = *(int *)((v0_1 + 0x22C));
    *(unsigned int *)((v0_1 + 0x22C)) = (v0_4 - 1);
    v0_0 = (v0_1);
    if (((int)(v0_4 - 1) >= 0)) goto L_C061058;
    FUN_0c0e19f2(v0_1, v0_2, v0_3, a7);
    L_C061058:;
    *(volatile int *)((v0_0 + 0x22C));
    v0_2 = FUN_0c0e5f1c(v0_1);
    v0_1 = (v0_2);
    if (!((v0_2 == 0))) goto L_C061204;
    v0_2 = FUN_0c0e19aa(0xC060F76, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(v0_2);
    *(unsigned int *)((v0_2 + 0xBC)) = (*(int *)((v0_0 + 0xBC)));
    *(unsigned int *)((v0_2 + 0x200)) = (*(int *)((v0_0 + 0x200)));
    *(unsigned int *)((v0_2 + 0x1EC)) = (*(int *)((v0_0 + 0x1EC)));
    *(unsigned int *)((v0_2 + 0x1E8)) = (*(int *)((v0_0 + 0x1E8)));
    *(unsigned int *)((v0_2 + 0x1F4)) = (*(int *)((v0_0 + 0x1F4)));
    *(unsigned int *)((v0_2 + 0x204)) = (*(int *)((v0_0 + 0x204)));
    *(float *)((v0_2 + 0x1E4)) = (*(float *)((v0_0 + 0x1E4)));
    *(unsigned int *)((v0_2 + 0x1FC)) = (*(int *)((v0_0 + 0x1FC)));
    *(unsigned int *)((v0_2 + 0x1F8)) = (*(int *)((v0_0 + 0x1F8)));
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 4))) + 0x3E4))) + 0x100));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x28) + 0x4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x28) + 0x8) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (-(*(float *)((v0_0 + 0x250))));
    *(float *)(((int)stk + 28)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 16)));
    nlPopMatrix(0x1);
    *(float *)((v0_2 + 0x48)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x0))));
    *(float *)((v0_2 + 0x4C)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x4))));
    *(float *)((v0_2 + 0x50)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x8))));
    v0_1 = *(int *)((v0_0 + 0xBC));
    v0_3 = *(int *)((v0_0 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x30)) = *(struct mv3 *)((((((((v0_1 << 1) + v0_1) << 2) << 2) << 2) + 0xC23F268) + (((v0_3 << 1) + v0_3) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x3C)) = *(struct mv3 *)((v0_2 + 0x30)); }
    *(unsigned int *)((v0_2 + 0x220)) = (*(int *)((v0_0 + 0x220)));
    v0_1 = (0x22C);
    v0_2 = (v0_2);
    v0_3 = ((*(int *)((v0_0 + 0x22C))));
    *(unsigned int *)((v0_2 + v0_1)) = v0_3;
    *(float *)((v0_2 + (v0_1 + 0x20))) = (*(float *)((v0_0 + (v0_1 + 0x20))));
    *(float *)((v0_2 + ((v0_1 + 0x20) + 0x4))) = (*(float *)((v0_0 + ((v0_1 + 0x20) + 0x4))));
    *(float *)((v0_2 + (((v0_1 + 0x20) + 0x4) + 0x4))) = (*(float *)((v0_0 + (((v0_1 + 0x20) + 0x4) + 0x4))));
    v0_1 = ((((v0_1 + 0x20) + 0x4) + 0x4));
    goto L_C061204;
    L_C061204:;
    return v0_1;
}
