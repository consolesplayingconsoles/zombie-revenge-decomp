/* Straight-line functions with calls and guards (batch gen_wg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
int FUN_0c034fbc(int, int, int, int);
int FUN_0c03f4bc(int);
int FUN_0c0412b8(int);
int FUN_0c0a4c02(int, int, Stk2);
int FUN_0c0a4c2a(int, int, Stk2);
int FUN_0c041370(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c041370(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[3];

    register int R1;
    register int R3;
    register int R8;
    register int R9;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_1 = a5;
    v0_1 = a6;
    v0_1 = a7;
    w0_0 = f4;
    w0_0 = f10;
    w0_0 = f11;
    v0_2 = *(int *)((v0_0 + 0x4EC));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C0413D0;
    if ((v0_1 == 1)) goto L_C04140A;
    if ((v0_1 == 2)) goto L_C041432;
    if ((v0_1 == 3)) goto L_C041446;
    if ((v0_1 == 4)) goto L_C041480;
    L_C04149E:;
    return v0_1;
    L_C041480:;
    v0_2 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_2 - 1);
    v0_1 = (0x3AC);
    if (((int)(v0_2 - 1) >= 0)) goto L_C04149E;
    *(unsigned int *)((v0_0 + 0x474)) = 0xC02CC94;
    *(unsigned int *)((v0_0 + 0x1B0)) = 0xFFFFFFFF;
    v0_1 = ((FUN_0c03f4bc(v0_0)));
    goto L_C04149E;
    L_C041446:;
    v0_2 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_2 - 1);
    v0_1 = (0x3AC);
    if (((int)(v0_2 - 1) >= 0)) goto L_C04149E;
    { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)(0xC0F57A4); }
    FUN_0c0a4c2a(v0_0, ((int)stk + 4), *(Stk2 *)(((int)stk + 4)));
    *(unsigned int *)((v0_0 + 0x3AC)) = 0x3C;
    *(unsigned int *)((v0_0 + 0x308)) = 0x64;
    *(unsigned int *)((v0_0 + 0x304)) = (*(int *)((v0_0 + 0x308)));
    L_C041476:;
    *(unsigned int *)((v0_0 + 0x4EC)) = ((*(int *)((v0_0 + 0x4EC))) + 0x1);
    v0_1 = (0x4EC);
    goto L_C04149E;
    L_C041432:;
    v0_2 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_2 - 1);
    v0_1 = (0x3AC);
    if (((int)(v0_2 - 1) >= 0)) goto L_C04149E;
    v0_1 = (0x3AC);
    v0_2 = (0x3C);
    L_C041442:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_2;
    goto L_C041476;
    L_C04140A:;
    { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)(0xC0F579C); }
    FUN_0c0a4c02(v0_0, ((int)stk + 4), *(Stk2 *)(((int)stk + 4)));
    *(unsigned int *)((v0_0 + 0x3AC)) = 0x1E;
    *(unsigned int *)((v0_0 + 0x4EC)) = ((*(int *)((v0_0 + 0x4EC))) + 0x1);
    v0_1 = ((FUN_0c0412b8(v0_0)));
    goto L_C04149E;
    L_C0413D0:;
    v0_1 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + v0_0)) = *(struct mv3 *)((0xC205CB8 + ((((v0_1 << 1) + v0_1) << 2) << 1))); }
    *(unsigned int *)((v0_0 + 0x514)) = 0x1;
    *(unsigned int *)((v0_0 + 0x508)) = 0x1;
    FUN_0c034fbc(v0_0, 0x200, 0x0, 0x0);
    v0_1 = (0x508);
    v0_2 = (0x0);
    goto L_C041442;
}
