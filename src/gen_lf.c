/* Straight-line functions with calls and guards (batch gen_lf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c036994(int, int, int, int, int, int, int, float);
int FUN_0c0e19f2(void);
int FUN_0c036a4c(int a4, int a5, int a6, int a7);
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };


int FUN_0c036a4c(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    v0_6 = *(int *)((((*(int *)((v0_2 + 0x30))) << 2) + 0xC246FF0));
    v0_1 = (v0_6);
    v0_0 = (v0_2);
    if ((v0_6 != 0)) goto L_C036A68;
    FUN_0c0e19f2();
    L_C036A68:;
    v0_3 = *(int *)((v0_0 + 0x3C));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C036A98;
    if ((v0_2 == 1)) goto L_C036AAA;
    L_C036B5A:;
    return v0_2;
    L_C036AAA:;
    *(int *)((int)stk + 12) = (((int)stk + 16) + 0x8);
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x8);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x14);
    FUN_0c036994((*(int *)((v0_0 + 0x30))), ((((struct o48_int *)(v0_0))->v)), (((((struct oA4_int *)(v0_1))->v)) & 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0x14), (((int)stk + 12) + 0x8), (((int)stk + 16) + 0x8), (*(float *)0xC036BAC));
    *(unsigned int *)((((((((struct o4C_int *)(v0_0))->v)) << 2) + (v0_0 + 0x50)) + 0x0)) = ((((struct o48_int *)(v0_0))->v));
    v0_1 = (((struct o4C_int *)(v0_0))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((v0_1 << 1) + v0_1) << 2) + (v0_0 + 0x70))) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
    *(float *)((((((((struct o4C_int *)(v0_0))->v)) << 2) + (0xD0 + v0_0)) + 0x0)) = (*(float *)(((int)stk + 20)));
    v0_1 = *(int *)(((int)stk + 16));
    *(float *)((((((((struct o4C_int *)(v0_0))->v)) << 2) + (0xF0 + v0_0)) + 0x0)) = (float)v0_1;
    *(unsigned int *)((((((((struct o4C_int *)(v0_0))->v)) << 2) + (0x110 + v0_0)) + 0x0)) = (*(int *)(((int)stk + 24)));
    (((struct o48_uint *)(v0_0))->v) = (((((struct o48_int *)(v0_0))->v)) - 0x2000);
    v0_3 = (((struct o4C_int *)(v0_0))->v);
    (((struct o4C_uint *)(v0_0))->v) = (v0_3 + 0x1);
    v0_2 = (0x4C);
    FPUL_ = (v0_1);
    if (((int)(v0_3 + 0x1) < (int)0x8)) goto L_C036B5A;
    *(unsigned int *)((v0_0 + 0x38)) = 0x1;
    *(unsigned int *)((v0_0 + 0x3C)) = 0x0;
    v0_2 = (0x1);
    goto L_C036B5A;
    L_C036A98:;
    (((struct o48_uint *)(v0_0))->v) = 0x10000;
    (((struct o4C_uint *)(v0_0))->v) = 0x0;
    *(unsigned int *)((v0_0 + 0x3C)) = ((*(int *)((v0_0 + 0x3C))) + 0x1);
    goto L_C036AAA;
}
