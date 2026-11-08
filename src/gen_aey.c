/* Straight-line functions with calls and guards (batch gen_aey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e2e8(int);
int FUN_0c01e32e(int, int);
int FUN_0c01e720(int);
int FUN_0c01e656(int a4, int a5);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o84_int { char p[0x84]; int v; };
struct oB0_uint { char p[0xB0]; unsigned int v; };


int FUN_0c01e656(int a4, int a5)
{
    int stk[2];

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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = (v0_3);
    if (((int)(*(int *)((((((struct o84_int *)(v0_3))->v)) + 0x8))) >= (int)0xC)) goto L_C01E68E;
    w0_0 = *(float *)0xC01E754;
    v0_2 = (0x48);
    w0_1 = ((*(float *)0xC01E758));
    w0_2 = (w0_0);
    if ((!(_builtin_fabsf(((((struct o48_float *)(v0_1))->v))) > w0_0))) goto L_C01E682;
    *(float *)((v0_1 + v0_2)) = w0_1;
    L_C01E682:;
    v0_2 = (0x50);
    if ((!(_builtin_fabsf(((((struct o50_float *)(v0_1))->v))) > w0_2))) goto L_C01E68E;
    *(float *)((v0_1 + v0_2)) = w0_1;
    L_C01E68E:;
    w0_0 = *(float *)0xC01E760;
    w0_1 = (((struct o48_float *)(v0_1))->v);
    w0_2 = (((struct o30_float *)(v0_1))->v);
    w0_3 = *(float *)0xC23FE68;
    w0_4 = (((struct o50_float *)(v0_1))->v);
    w0_5 = (((struct o38_float *)(v0_1))->v);
    w0_6 = *(float *)0xC23FE70;
    v0_2 = (0x0);
    v0_3 = ((int)(((w0_2 + w0_1) - w0_3) * w0_0));
    v0_4 = ((int)(((w0_5 + w0_4) - w0_6) * w0_0));
    FPUL_ = ((int)(((w0_5 + w0_4) - w0_6) * w0_0));
    if (((int)(int)(((w0_2 + w0_1) - w0_3) * w0_0) >= (int)0x40)) goto L_C01E6D4;
    if (((int)v0_4 >= (int)0x20)) goto L_C01E6D4;
    if (((int)v0_3 < 0)) goto L_C01E6D4;
    if (!(((int)v0_4 >= 0))) goto L_C01E6D4;
    v0_3 = (0x1);
    if (((v0_0 & 0x1) == 0)) goto L_C01E6FE;
    v0_3 = (v0_3);
    v0_0 = ((v0_0 & 0xFFFFFFFE));
    goto L_C01E700;
    L_C01E6D4:;
    FUN_0c01e720(v0_1);
    (((struct o34_float *)(v0_1))->v) = (((((struct o34_float *)(v0_1))->v)) + ((((struct o58_float *)(v0_1))->v)));
    *(unsigned int *)0xC245FA0 = v0_2;
    v0_2 = (0x0);
    L_C01E714:;
    return v0_2;
    L_C01E700:;
    (((struct oB0_uint *)(v0_1))->v) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c01e32e(v0_1, v0_0));
    if ((v0_3 == 0)) goto L_C01E712;
    FUN_0c01e2e8(v0_1);
    L_C01E712:;
    v0_2 = ((*(int *)(((int)stk + 4))));
    goto L_C01E714;
    L_C01E6FE:;
    v0_3 = (v0_2);
    goto L_C01E700;
}
