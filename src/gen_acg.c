/* Straight-line functions with calls and guards (batch gen_acg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0d7114(int, int);
int FUN_0c0d6e5a(int a4);
struct o6C_int { char p[0x6C]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };


int FUN_0c0d6e5a(int a4)
{
    int stk[29];

    register int R1;
    register int R2;
    register int R3;
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
    register float w0_0;
    register float w0_1;
    v0_4 = a4;
    *(unsigned int *)(((int)stk + 4)) = ((((struct o6C_int *)(v0_4))->v));
    v0_0 = (v0_4);
    v0_4 = (0xC2475D4);
    if (((*(int *)0xC247994) != 0)) goto L_C0D6E82;
    v0_5 = (0xFFFFFFFF);
    L_C0D6F9A:;
    return v0_5;
    L_C0D6E82:;
    v0_1 = ((((int)stk + 4) + 0x3C));
    v0_2 = ((((int)stk + 4) + 0x8));
    v0_5 = (0x0);
    v0_6 = (0xC);
    v0_3 = (0x0);
    L_C0D6E90:;
    if (((int)(*(int *)((((v0_5 << 2) + (v0_4 + 0x30)) + 0x0))) < (int)0xB)) goto L_C0D6F08;
    if (((int)(*(int *)((((v0_5 << 2) + (v0_4 + 0x60)) + 0x0))) >= (int)0x16)) goto L_C0D6F08;
    v0_7 = *(int *)((((v0_5 << 2) + v0_4) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    w0_0 = FUN_0c0d7114((((((struct o6C_int *)(v0_0))->v)) + 0x30), (v0_7 + 0x30));
    w0_1 = (w0_0);
    if ((w0_0 != 0.0f)) goto L_C0D6F08;
    *(volatile int *)(((v0_4 + 0x60) + (v0_5 << 2)));
    *(unsigned int *)((v0_1 + (v0_3 << 2))) = v0_5;
    *(float *)((v0_2 + (v0_3 << 2))) = (*(float *)(((((((v0_5 << 2) << 2) << 2) + (0xC0 + v0_4)) + ((*(int *)(((0xBC + (*(int *)(((int)stk + 4)))) + 0x0))) << 2)) + 0x0)));
    v0_3 = ((v0_3 + 0x1));
    L_C0D6F08:;
    v0_7 = (int)(v0_5 + 0x1) < (int)v0_6;
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C0D6E90;
    *(unsigned int *)((v0_1 + (v0_3 << 2))) = 0xFFFFFFFF;
    *(float *)((v0_2 + (v0_3 << 2))) = 999.998962f;
    v0_4 = (0xFFFFFFFF);
    v0_3 = (v0_3);
    FPUL_ = (0x4479FFEF);
    L_C0D6F4C:;
    v0_6 = (int)(*(int *)((v0_1 + ((v0_4 + 0x1) << 2)))) >= 0;
    v0_5 = (((v0_4 + 0x1) << 2));
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_C0D6F3C;
    if ((((((struct o74_int *)(v0_0))->v)) != 2)) goto L_C0D6F92;
    if (((*(int *)(((((int)stk + 4) + 0x3C) + (v0_3 << 2)))) == -1)) goto L_C0D6F92;
    v0_2 = ((0x0 + v0_1));
    v0_6 = (0x0);
    if (((int)v0_4 <= 0)) goto L_C0D6F92;
    L_C0D6F7C:;
    v0_5 = (0x78);
    if (((*(int *)((v0_2 + 0x0))) != ((((struct o78_int *)(v0_0))->v)))) goto L_C0D6F8A;
    v0_5 = ((*(int *)((v0_0 + v0_5))));
    goto L_C0D6F9A;
    L_C0D6F8A:;
    v0_5 = (int)(v0_6 + 0x1) < (int)v0_4;
    v0_2 = ((v0_2 + 0x4));
    v0_6 = ((v0_6 + 0x1));
    if (v0_5) goto L_C0D6F7C;
    L_C0D6F92:;
    v0_5 = ((*(int *)((v0_1 + (v0_3 << 2)))));
    goto L_C0D6F9A;
    L_C0D6F3C:;
    if (((*(float *)((v0_2 + v0_5))) > (*(float *)((v0_2 + (v0_3 << 2)))))) goto L_C0D6F4C;
    v0_3 = (v0_4);
    goto L_C0D6F4C;
}
