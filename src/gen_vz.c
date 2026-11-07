/* Straight-line functions with calls and guards (batch gen_vz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0555ca(int, int, int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
void FUN_0c036256(int a4);

void FUN_0c036256(int a4)
{
    int stk[10];
    int t0;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_2 = a4;
    t0 = *(int *)0xC23A1A8;
    v0_0 = (v0_2);
    v0_2 = (t0);
    if (((0x100 & t0) == 0)) goto L_C03627A;
    L_C03637C:;
    return;
    L_C03627A:;
    v0_1 = *(int *)0xC23A180;
    v0_3 = (v0_1);
    if ((v0_1 == 2)) goto L_C036286;
    goto L_C03637C;
    L_C036286:;
    v0_3 = (0x5C4);
    v0_1 = ((*(int *)((v0_0 + 0x5C4))));
    if (((v0_2 & 0x1) != 0)) goto L_C0362A2;
    v0_3 = (0x308);
    w0_0 = ((float)(*(int *)((v0_0 + 0x304))));
    FPUL_ = ((*(int *)((v0_0 + 0x308))));
    L_C0362B4:;
    w0_0 = ((w0_0 / (float)FPUL_));
    if (((*(int *)((v0_1 + 0x4))) == 0)) goto L_C03637C;
    if ((w0_0 > (*(float *)((v0_1 + 0x0))))) goto L_C03637C;
    v0_2 = (0xFFFF8000);
    if (((*(int *)((v0_0 + 0x48C))) != 46)) goto L_C036300;
    v0_3 = (0x6E);
    v0_3 = ((*(short *)((v0_0 + 0x6E))));
    L_C036304:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)((v0_0 + 0x30)); }
    *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + (*(float *)0xC036448));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (*(float *)0xC03644C);
    v0_4 = (0xFFFFE000);
    v0_5 = (0x1000);
    v0_3 = ((v0_3 + v0_2));
    v0_2 = (0xC0DC6E0);
    v0_2 = (0xC0555CA);
    L_C03633C:;
    FUN_0c0dc5a0();
    nlRotateAY(v0_3);
    nlRotateAX(v0_4);
    FUN_0c0db4d0((((int)stk + 4) + 0xC), ((int)stk + 4));
    nlPopMatrix(0x1);
    FUN_0c0555ca(v0_0, (*(int *)((v0_1 + 0x4))), (((int)stk + 4) + 0x18), ((int)stk + 4));
    v0_2 = (*(int *)(((v0_1 + 0x8) + 0x4))) == 0;
    v0_3 = ((v0_3 + v0_5));
    v0_1 = ((v0_1 + 0x8));
    if (v0_2) goto L_C036378;
    if ((!(w0_0 > (*(float *)((v0_1 + 0x0)))))) goto L_C03633C;
    L_C036378:;
    *(unsigned int *)((v0_0 + 0x5C4)) = v0_1;
    v0_3 = (0x5C4);
    goto L_C03637C;
    L_C036300:;
    v0_3 = (0x1E0);
    v0_3 = ((*(int *)((v0_0 + 0x1E0))));
    goto L_C036304;
    L_C0362A2:;
    v0_3 = *(int *)0xC9433B0;
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C03637C;
    w0_0 = ((float)(*(int *)0xC9433AC));
    FPUL_ = (v0_2);
    goto L_C0362B4;
}
