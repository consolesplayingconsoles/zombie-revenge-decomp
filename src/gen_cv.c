/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a6688(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int FUN_0c0824c0(int a4, int a5, float f4, float f5, float f6);

int FUN_0c0824c0(int a4, int a5, float f4, float f5, float f6)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_0 = a4;
    v0_1 = a5;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    v0_3 = (v0_2);
    if (((*(int *)((v0_2 + 0x3F4))) != 1)) goto L_C08252E;
    *(unsigned int *)((v0_3 + 0x3F4)) = 0x0;
    *(unsigned short *)((v0_3 + 0x438)) = (*(int *)(((v0_0 + 0x18) + 0x0)));
    *(unsigned short *)((v0_3 + 0x43A)) = (*(int *)((((v0_0 + 0x18) + 0x4) + 0x0)));
    *(unsigned int *)((v0_3 + 0x430)) = (*(int *)(((((v0_0 + 0x18) + 0x4) + 0x4) + 0x0)));
    *(unsigned int *)((v0_3 + 0x434)) = (*(int *)((((((v0_0 + 0x18) + 0x4) + 0x4) + 0x4) + 0x0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + v0_3)) = *(struct mv3 *)(v0_0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x344 + v0_3)) = *(struct mv3 *)((v0_0 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x350 + v0_3)) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x35C + v0_3)) = *(struct mv3 *)((v0_1 + 0xC)); }
    L_C08252E:;
    *(unsigned short *)((v0_3 + 0x438)) = ((*(short *)((v0_3 + 0x438))) + (*(int *)(((0x430 + v0_3) + 0x0))));
    *(unsigned short *)((v0_3 + 0x43A)) = ((*(short *)((v0_3 + 0x43A))) + (*(int *)(((0x434 + v0_3) + 0x0))));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
    FUN_0c0a6688((0x338 + v0_3), (0x438 + v0_3), (((int)stk + 4) + 0x8));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    nlAddVector3op((0x254 + v0_3), 0xC247DA0, (((int)stk + 4) + 0x8));
    nlAddVector((0x338 + v0_3), (0x344 + v0_3));
    FUN_0c0a6688((0x350 + v0_3), (0x438 + v0_3), (*(int *)(((int)stk + 4))));
    nlAddVector3op((0x278 + v0_3), 0xC247DA0, (*(int *)(((int)stk + 8))));
    nlAddVector((0x350 + v0_3), (0x35C + v0_3));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x18);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x14);
    FUN_0c0a7714((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x18), ((*(float *)((v0_3 + 0x254))) - (*(float *)((v0_3 + 0x278)))), ((*(float *)((v0_3 + 0x258))) - (*(float *)((v0_3 + 0x27C)))), ((*(float *)((v0_3 + 0x25C))) - (*(float *)((v0_3 + 0x280)))));
    *(unsigned short *)((v0_3 + 0x3CC)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    *(unsigned short *)((v0_3 + 0x3CE)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    return 0x3CE;
}
