/* Straight-line functions with calls and guards (batch gen_adi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0349ea(int, int, int);
int FUN_0c042b60(int, int, int, int, float, float);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0350a4(int a4, int a5, int a6, int a7);
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4D8_int { char p[0x4D8]; int v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_int { char p[0x514]; int v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c0350a4(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_1 = a5;
    v0_3 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    *(unsigned int *)(((int)stk + 24)) = v0_3;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    v0_1 = (v0_2);
    if ((((((struct o508_int *)(v0_2))->v)) != 0)) goto L_C0350F2;
    if ((((((struct o50C_int *)(v0_1))->v)) == 0)) goto L_C035100;
    v0_3 = (0x510);
    v0_2 = (0xC246FF0);
    if (((*(int *)((((((((struct o510_int *)(v0_1))->v)) << 2) + 0xC247030) + 0x0))) != 0)) goto L_C0350E2;
    (((struct o50C_uint *)(v0_1))->v) = 0x0;
    L_C035100:;
    v0_3 = (0x0);
    L_C0351B0:;
    return v0_3;
    L_C0350E2:;
    v0_2 = *(int *)(((((*(int *)((v0_1 + v0_3))) << 2) + v0_2) + 0x0));
    v0_3 = ((v0_2 + 0x30));
    v0_2 = (v0_2);
    L_C035104:;
    v0_4 = (FUN_0c0349ea(v0_1, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4))) == 0;
    v0_2 = (0x8000);
    if (v0_4) goto L_C035150;
    FUN_0c0a68ec(((int)stk + 4), (((((struct o30_float *)(v0_1))->v)) - (*(float *)((v0_3 + 0x0)))), (((((struct o38_float *)(v0_1))->v)) - ((((struct o8_float *)(v0_3))->v))));
    L_C035170:;
    if (((*(int *)(((int)stk + 16))) == 0)) goto L_C0351A2;
    v0_3 = (0x4D8);
    if (((int)((((struct o4D8_int *)(v0_1))->v)) <= (int)v0_2)) goto L_C035192;
    v0_0 = *(int *)((v0_1 + v0_3));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((((int)((unsigned int)((int)((unsigned int)v0_0 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_0)) ? 1u : 0u))) >> 1) + v0_2));
    L_C0351A2:;
    FUN_0c0546fe(v0_1, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))));
    v0_3 = (0x1);
    goto L_C0351B0;
    L_C035192:;
    v0_0 = *(int *)((v0_1 + v0_3));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (((int)((unsigned int)((int)((unsigned int)v0_0 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_0)) ? 1u : 0u))) >> 1));
    goto L_C0351A2;
    L_C035150:;
    FUN_0c042b60(v0_1, (((int)stk + 4) + 0x18), (*(int *)(((int)stk + 8))), v0_0, F4, F5);
    FUN_0c0a68ec(((int)stk + 4), (*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 36))));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + v0_2);
    goto L_C035170;
    L_C0350F2:;
    if ((((((struct o514_int *)(v0_1))->v)) == 0)) goto L_C035100;
    v0_3 = ((0x518 + v0_1));
    goto L_C035104;
}
