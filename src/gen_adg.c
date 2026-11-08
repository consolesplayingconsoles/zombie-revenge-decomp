/* Straight-line functions with calls and guards (batch gen_adg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c035402(int);
int FUN_0c041f2a(int);
int FUN_0c053ac4(int);
int FUN_0c03fd20(int a4, int a5, int a6, int a7, float f4);
struct o26C_float { char p[0x26C]; float v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };


int FUN_0c03fd20(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R11;
    register int R12;
    register int R13;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_0 = a7;
    w0_1 = f4;
    v0_2 = (((struct o4EC_int *)(v0_1))->v);
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    w0_0 = (0.0f);
    if ((v0_2 == 0)) goto L_C03FD48;
    if ((v0_0 == 1)) goto L_C03FD7C;
    if ((v0_0 == 2)) goto L_C03FDCC;
    if ((v0_0 == 3)) goto L_C03FDF6;
    if ((v0_0 == 4)) goto L_C03FE18;
    L_C03FE1E:;
    return v0_0;
    L_C03FE18:;
    v0_0 = ((FUN_0c041f2a(v0_1)));
    goto L_C03FE1E;
    L_C03FDF6:;
    v0_2 = (((struct o3AC_int *)(v0_1))->v);
    (((struct o3AC_uint *)(v0_1))->v) = (v0_2 - 1);
    v0_0 = (0x3AC);
    if (((int)(v0_2 - 1) > 0)) goto L_C03FE1E;
    *(unsigned int *)((v0_1 + v0_0)) = 0x0;
    (((struct o4EC_uint *)(v0_1))->v) = (((((struct o4EC_int *)(v0_1))->v)) + 0x1);
    L_C03FE0E:;
    v0_0 = ((FUN_0c041f2a(v0_1)));
    goto L_C03FE1E;
    L_C03FDCC:;
    FUN_0c041f2a(v0_1);
    v0_2 = (((struct o2EC_int *)(v0_1))->v);
    v0_0 = (v0_2);
    if (((v0_2 & 12) == 0)) goto L_C03FE1E;
    FUN_0c053ac4(v0_1);
    FUN_0c035402(v0_1);
    (((struct o3AC_uint *)(v0_1))->v) = 0x14;
    L_C03FDEC:;
    (((struct o4EC_uint *)(v0_1))->v) = (((((struct o4EC_int *)(v0_1))->v)) + 0x1);
    v0_0 = (0x4EC);
    goto L_C03FE1E;
    L_C03FD7C:;
    (((struct o26C_float *)(v0_1))->v) = (((((struct o26C_float *)(v0_1))->v)) - 0.049999997f);
    (((struct o4C_float *)(v0_1))->v) = (((((struct o4C_float *)(v0_1))->v)) + (((((struct o26C_float *)(v0_1))->v)) + 0.5f));
    w0_2 = FUN_0c01f1b8((v0_1 + 0x30), ((int)stk + 4));
    v0_0 = (0x34);
    w0_1 = (w0_2);
    w0_1 = (w0_2);
    if ((!(w0_2 > ((((struct o34_float *)(v0_1))->v))))) goto L_C03FE1E;
    (((struct o2E8_uint *)(v0_1))->v) = 0x0;
    (((struct o4EC_uint *)(v0_1))->v) = (((((struct o4EC_int *)(v0_1))->v)) + 0x1);
    (((struct o34_float *)(v0_1))->v) = w0_1;
    (((struct o4C_float *)(v0_1))->v) = w0_0;
    goto L_C03FE0E;
    L_C03FD48:;
    (((struct o2E8_uint *)(v0_1))->v) = 0x2;
    FUN_0c041f2a(v0_1);
    (((struct o26C_float *)(v0_1))->v) = w0_0;
    goto L_C03FDEC;
}
