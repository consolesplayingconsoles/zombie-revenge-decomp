/* Straight-line functions with calls and guards (batch gen_qw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c05d95c(int a4, int a5, int a6);

int FUN_0c05d95c(int a4, int a5, int a6)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_4 = (0x344);
    v0_1 = ((*(int *)((((*(int *)((v0_0 + 0x34C))) << 2) + 0xC2475D4))));
    v0_2 = (v0_3);
    v0_3 = (v0_0);
    if (((*(int *)((v0_0 + 0x344))) != 0)) goto L_C05D984;
    L_C05DB70:;
    return v0_4;
    L_C05D984:;
    v0_4 = (0x21C);
    if (((int)(*(int *)((v0_1 + 0x21C))) > 0)) goto L_C05D990;
    *(unsigned int *)((v0_1 + v0_4)) = 0x0;
    goto L_C05DB70;
    L_C05D990:;
    v0_0 = FUN_0c0e19aa(0xC05DB80, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(v0_0);
    *(unsigned int *)((v0_1 + 0x21C)) = ((*(int *)((v0_1 + 0x21C))) - 1);
    *(unsigned int *)((v0_0 + 0xBC)) = (*(int *)((v0_3 + 0xBC)));
    *(unsigned int *)(((0x200 + v0_0) + 0x0)) = (unsigned char)(*(signed char *)((v0_2 + 0x2)));
    FUN_0c0cc3f8(0x432A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc054((*(int *)((v0_3 + 0xBC))), 0xB);
    *(unsigned int *)((v0_0 + 0x1EC)) = (*(int *)((v0_3 + 0x1EC)));
    *(unsigned int *)(((0x1E8 + v0_0) + 0x0)) = (unsigned char)(*(signed char *)((v0_2 + 0x3)));
    *(unsigned int *)(((0x1F4 + v0_0) + 0x0)) = (unsigned char)(*(signed char *)((v0_2 + 0x4)));
    *(unsigned int *)(((0x204 + v0_0) + 0x0)) = (unsigned char)(*(signed char *)((v0_2 + 0x5)));
    *(float *)((v0_0 + 0x1E4)) = ((*(float *)((v0_2 + 0xC))) * 0.199999988f);
    *(unsigned int *)(((0x1FC + v0_0) + 0x0)) = (unsigned char)(*(signed char *)((v0_2 + 0x1)));
    *(unsigned int *)((v0_0 + 0x1F8)) = (unsigned char)(*(signed char *)((v0_2 + 0x0)));
    *(unsigned int *)(((0x22C + v0_0) + 0x0)) = ((unsigned short)(*(short *)((v0_2 + 0x8))) << 1);
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0F9C14); }
    FUN_0c0dbda0(((((*(int *)((v0_3 + 0xBC))) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0x8);
    FUN_0c0a79fa((((int)stk + 4) + 0x10), ((((int)stk + 4) + 0x10) + 0x4), ((((int)stk + 4) + 0x10) + 0x8));
    v0_1 = *(int *)((v0_3 + 0x340));
    FUN_0c0db470(((((v0_1 << 1) + v0_1) << 2) + 0xC1FEFBC), (v0_0 + 0x30));
    nlUnitMatrix();
    nlRotateAY((*(int *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0))));
    nlRotateAX((*(int *)(((((int)stk + 4) + 0x10) + 0x0))));
    nlRotateAZ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    FUN_0c0db470((((int)stk + 4) + 0x4), (v0_0 + 0x48));
    v0_1 = (((((int)stk + 4) + 0x10) + 0x4));
    v0_2 = ((((int)stk + 4) + 0x10));
    v0_4 = (v0_0);
    v0_0 = ((((int)stk + 4) + 0x10));
    v0_3 = (((((int)stk + 4) + 0x10) + 0x4));
    FUN_0c0a7714(v0_0, v0_3, (*(float *)((v0_4 + 0x48))), (*(float *)((v0_4 + 0x4C))), (*(float *)((v0_4 + 0x50))));
    *(unsigned short *)((v0_4 + 0x6E)) = (*(int *)((v0_1 + 0x0)));
    *(unsigned short *)((v0_4 + 0x6C)) = (*(int *)((v0_2 + 0x0)));
    nlPopMatrix(0x1);
    *(unsigned int *)((v0_4 + 0x220)) = 0x9E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x3C)) = *(struct mv3 *)((v0_4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + v0_4)) = *(struct mv3 *)((v0_4 + 0x30)); }
    *(unsigned int *)((v0_4 + 0x248)) = 0x1;
    v0_4 = (0x248);
    goto L_C05DB70;
}
