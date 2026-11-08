/* Straight-line functions with calls and guards (batch gen_xw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c084e08(int a4, int a5);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct oB8C_int { char p[0xB8C]; int v; };
struct oB90_int { char p[0xB90]; int v; };
struct oB94_int { char p[0xB94]; int v; };
struct oB98_int { char p[0xB98]; int v; };
struct oBA4_int { char p[0xBA4]; int v; };
struct oBA8_int { char p[0xBA8]; int v; };
struct oBAC_int { char p[0xBAC]; int v; };
struct oBB0_int { char p[0xBB0]; int v; };


int FUN_0c084e08(int a4, int a5)
{
    int stk[2];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_1 = FUN_0c0e19aa(0xC084F18, 0x74, (*(int *)0xC23ECE0));
    FUN_0c0e19d0(v0_1);
    (((struct o60_uint *)(v0_1))->v) = v0_0;
    v0_0 = (v0_0);
    v0_2 = (0xC247ED8);
    v0_1 = (v0_1);
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C084E3A;
    (((struct o64_uint *)(v0_1))->v) = v0_0;
    L_C084E3A:;
    (((struct o30_float *)(v0_1))->v) = (float)((((struct oB8C_int *)(v0_2))->v));
    (((struct o34_float *)(v0_1))->v) = (float)((((struct oB90_int *)(v0_2))->v));
    (((struct o38_float *)(v0_1))->v) = (float)((((struct oB94_int *)(v0_2))->v));
    (((struct o3C_float *)(v0_1))->v) = ((((((struct o30_float *)(v0_1))->v)) - (float)((((struct oBA4_int *)(v0_2))->v))) / (float)v0_0);
    (((struct o40_float *)(v0_1))->v) = ((((((struct o34_float *)(v0_1))->v)) - (float)((((struct oBA8_int *)(v0_2))->v))) / (float)v0_0);
    (((struct o44_float *)(v0_1))->v) = ((((((struct o38_float *)(v0_1))->v)) - (float)((((struct oBAC_int *)(v0_2))->v))) / (float)v0_0);
    (((struct o48_uint *)(v0_1))->v) = (unsigned char)((int)((((struct oB98_int *)(v0_2))->v)) >> 8);
    (((struct o50_uint *)(v0_1))->v) = (unsigned char)(*(signed char *)((v0_2 + 0xB98)));
    v0_2 = (((struct oBB0_int *)(v0_2))->v);
    (((struct o4C_float *)(v0_1))->v) = ((float)(((unsigned char)((int)v0_2 >> 8) - ((((struct o48_int *)(v0_1))->v))) + ((((((unsigned char)v0_2 - ((((struct o50_int *)(v0_1))->v))) << 2) << 2) << 2) << 1)) / (float)v0_0);
    return 0x4C;
}
