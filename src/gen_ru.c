/* Straight-line functions with calls and guards (batch gen_ru): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c08a3d4();
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
void FUN_0c08a5e4(int a4, int a5);

void FUN_0c08a5e4(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register float F0;
    register float F2;
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
    register float w0_0;
    v0_6 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 4)) = (0xC23F268 + (((((v0_0 << 1) + v0_0) << 2) << 2) << 2));
    v0_7 = (0x4);
    v0_1 = ((((v0_0 << 1) + v0_0) << 2));
    v0_5 = (v0_0);
    v0_2 = (((0xC23F268 + (((((v0_0 << 1) + v0_0) << 2) << 2) << 2)) + 0x54));
    v0_3 = (v0_6);
    v0_4 = (((0xC23F268 + (((((v0_0 << 1) + v0_0) << 2) << 2) << 2)) + 0x6C));
    w0_0 = (3.0f);
    if (((*(float *)((((0xC23F268 + (((((v0_0 << 1) + v0_0) << 2) << 2) << 2)) + 0x54) + 0x4))) > 3.0f)) goto L_C08A6B2;
    v0_6 = *(int *)0xC23A258;
    v0_7 = (v0_6);
    if (((v0_6 & 3) != 0)) goto L_C08A64E;
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c08a3d4))(v0_3, v0_2, ((v0_3 + 0x34) + v0_1), R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    v0_7 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c08a3d4))(v0_3, v0_4, ((0xC4 + v0_3) + v0_1), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
    L_C08A64E:;
    v0_6 = (((v0_5 << 2) << 1));
    if (((*(int *)((((0x304 + v0_3) + ((v0_5 << 2) << 1)) + 0x0))) != 0)) goto L_C08A6B2;
    v0_7 = FUN_0c0e19aa(0xC08AB5A, 0x6C, (*(int *)((v0_3 + 0x30))));
    FUN_0c0e19d0(v0_7);
    *(unsigned int *)((v0_7 + 0x4)) = 0xC08A59C;
    *(unsigned int *)((v0_7 + 0x30)) = v0_5;
    *(unsigned int *)((v0_7 + 0x38)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((v0_7 + 0x3C)) = v0_2;
    w0_0 = w0_0;
    w0_0 = w0_0 + 9.99999975e-06f * (float)(FUN_0c0da2e0());
    *(float *)((v0_7 + 0x4C)) = w0_0;
    *(unsigned int *)(((0x58 + v0_7) + 0x0)) = ((FUN_0c0da2e0()) & 0x3);
    *(unsigned int *)((v0_7 + 0x64)) = 0x2;
    *(float *)((v0_7 + 0x50)) = 1.0f;
    *(unsigned int *)(((v0_6 + (0x304 + v0_3)) + 0x0)) = 0x1;
    v0_7 = (0x50);
    L_C08A6B2:;
    v0_6 = ((v0_5 << 2));
    if (((*(int *)((((0x364 + v0_3) + (v0_5 << 2)) + 0x0))) != 0)) goto L_C08A7A2;
    v0_7 = (0x4);
    w0_0 = (4.0f);
    if ((4.0f > (*(float *)((v0_2 + 0x4))))) goto L_C08A6DA;
    if ((w0_0 > (*(float *)((((v0_3 + 0x34) + v0_1) + v0_7))))) goto L_C08A6F8;
    L_C08A6DA:;
    v0_7 = (0x4);
    if (((*(float *)((v0_2 + 0x4))) > 4.0f)) goto L_C08A7A2;
    v0_7 = (0x4);
    if ((!((*(float *)((((v0_3 + 0x34) + v0_1) + 0x4))) > 4.0f))) goto L_C08A7A2;
    L_C08A6F8:;
    v0_7 = FUN_0c0e19aa(0xC08AC50, 0x6C, (*(int *)((v0_3 + 0x30))));
    FUN_0c0e19d0(v0_7);
    *(unsigned int *)((v0_7 + 0x4)) = 0xC08A5B4;
    *(unsigned int *)((v0_7 + 0x30)) = v0_5;
    *(float *)((v0_7 + 0x40)) = (*(float *)((v0_2 + 0x0)));
    *(float *)((v0_7 + 0x44)) = 2.5f;
    v0_5 = (v0_7);
    *(float *)((v0_5 + 0x48)) = (*(float *)((v0_2 + 0x8)));
    *(unsigned int *)((v0_5 + 0x64)) = 0x2;
    *(unsigned int *)((v0_5 + 0x58)) = 0x3B7;
    *(unsigned int *)((v0_5 + 0x60)) = 0x10;
    *(float *)((v0_5 + 0x50)) = 0.699999988f;
    *(unsigned int *)(((v0_6 + (0x364 + v0_3)) + 0x0)) = 0x1;
    if ((!((*(float *)((v0_2 + 0x4))) > 4.0f))) goto L_C08A79A;
    v0_6 = (0x1FA9);
    L_C08A79C:;
    v0_7 = ((FUN_0c0cc3f8(v0_6, v0_0, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
    L_C08A7A2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((v0_3 + 0x34) + v0_1)) = *(struct mv3 *)(v0_2); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xC4 + v0_3) + v0_1)) = *(struct mv3 *)(v0_4); }
    return;
    L_C08A79A:;
    v0_6 = (0x11FA9);
    goto L_C08A79C;
}
