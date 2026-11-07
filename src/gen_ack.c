/* Straight-line functions with calls and guards (batch gen_ack): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0885d4(int a4, int a5);

int FUN_0c0885d4(int a4, int a5)
{
    int stk[3];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
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
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_0 + 0x40)));
    v0_2 = (0x0);
    v0_3 = (v0_3);
    v0_4 = (v0_0);
    v0_5 = (0xC0DA2E0);
    v0_5 = (0xFFFFE000);
    v0_6 = (0xFFFFE400);
    w0_0 = ((1.0f + 1.0f));
    w0_1 = (1.0f);
    w0_2 = (4.57777642e-05f);
    w0_3 = (0.5f);
    L_C08860E:;
    v0_7 = FUN_0c0e1830(0xC088D54, 0x64);
    FUN_0c0e19d0(v0_7);
    v0_8 = *(int *)((v0_3 + 0xBC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_7 + 0x30)) = *(struct mv3 *)(((((((v0_8 << 1) + v0_8) << 2) << 2) << 2) + 0xC23F268)); }
    w0_4 = w0_0;
    w0_4 = w0_4 + 7.62962736e-05f * (float)(FUN_0c0da2e0());
    *(float *)((v0_7 + 0x50)) = w0_4;
    *(unsigned int *)(((0x48 + v0_7) + 0x0)) = (((*(int *)((v0_4 + 0x3C))) & 0x3) + 0xFB);
    *(unsigned short *)(((0x5C + v0_7) + 0x0)) = (FUN_0c0da2e0());
    *(float *)((v0_7 + 0x4C)) = w0_1;
    *(unsigned int *)((v0_7 + 0x60)) = 0xA;
    w0_4 = w0_3;
    w0_4 = w0_4 + w0_2 * (float)(FUN_0c0da2e0());
    *(float *)((v0_7 + 0x44)) = ((*(float *)((v0_4 + 0x34))) * w0_4);
    FUN_0c0dc5a0();
    v0_8 = (*(short *)((v0_3 + 0x6E)));
    *(int *)((int)stk + 4) = v0_8;
    v0_9 = FUN_0c0da2e0();
    nlRotateAY(((((v0_9 & 0x3FFF) + v0_8) + v0_2) + v0_5));
    v0_8 = (*(short *)((v0_3 + 0x6C)));
    *(int *)((int)stk + 4) = v0_8;
    v0_9 = FUN_0c0da2e0();
    nlRotateAX((((v0_9 & 0x1FFF) + v0_8) + v0_6));
    nlRotateAZ((*(short *)((v0_3 + 0x70))));
    FUN_0c0db470((v0_7 + 0x3C), (v0_7 + 0x3C));
    nlPopMatrix(0x1);
    v0_8 = *(int *)((v0_4 + 0x3C));
    *(unsigned int *)((v0_4 + 0x3C)) = (v0_8 - 1);
    v0_7 = (v0_7);
    if (((int)(v0_8 - 1) > 0)) goto L_C0886E6;
    FUN_0c0e19f2(v0_0, v0_1);
    L_C0886E6:;
    v0_7 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_7 - 1);
    v0_2 = ((v0_2 + 0x7FFF));
    if (((v0_7 - 1) != 0)) goto L_C08860E;
    *(float *)((v0_4 + 0x34)) = ((*(float *)((v0_4 + 0x34))) * 0.98999995f);
    return 0x34;
}
