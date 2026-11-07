/* Straight-line functions with calls and guards (batch gen_aez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0546fe(int, int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c034fbc(int a4, int a5, int a6, int a7);
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4D8_int { char p[0x4D8]; int v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_int { char p[0x514]; int v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c034fbc(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R11;
    register int R12;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    v0_1 = (v0_0);
    if ((((((struct o508_int *)(v0_0))->v)) != 0)) goto L_C035008;
    if ((((((struct o50C_int *)(v0_1))->v)) == 0)) goto L_C035016;
    v0_2 = (0x510);
    v0_0 = (0xC246FF0);
    if (((*(int *)((((((((struct o510_int *)(v0_1))->v)) << 2) + 0xC247030) + 0x0))) != 0)) goto L_C034FF8;
    (((struct o50C_uint *)(v0_1))->v) = 0x0;
    L_C035016:;
    v0_2 = (0x0);
    L_C03509A:;
    return v0_2;
    L_C034FF8:;
    v0_0 = (((*(int *)(((((*(int *)((v0_1 + v0_2))) << 2) + v0_0) + 0x0))) + 0x30));
    L_C035040:;
    FUN_0c0a68ec(((int)stk + 4), (((((struct o30_float *)(v0_1))->v)) - (*(float *)((v0_0 + 0x0)))), (((((struct o38_float *)(v0_1))->v)) - ((((struct o8_float *)(v0_0))->v))));
    if (((*(int *)(((int)stk + 16))) == 0)) goto L_C03508C;
    v0_2 = (0x4D8);
    v0_0 = (0x8000);
    if (((int)((((struct o4D8_int *)(v0_1))->v)) <= (int)0x8000)) goto L_C03507C;
    v0_2 = *(int *)((v0_1 + v0_2));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((((int)((unsigned int)((int)((unsigned int)v0_2 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_2)) ? 1u : 0u))) >> 1) + v0_0));
    L_C03508C:;
    FUN_0c0546fe(v0_1, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))));
    v0_2 = (0x1);
    goto L_C03509A;
    L_C03507C:;
    v0_0 = *(int *)((v0_1 + v0_2));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (((int)((unsigned int)((int)((unsigned int)v0_0 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_0)) ? 1u : 0u))) >> 1));
    goto L_C03508C;
    L_C035008:;
    if ((((((struct o514_int *)(v0_1))->v)) == 0)) goto L_C035016;
    v0_0 = ((0x518 + v0_1));
    goto L_C035040;
}
