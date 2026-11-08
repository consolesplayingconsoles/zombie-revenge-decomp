/* Straight-line functions with calls and guards (batch gen_aaa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int FUN_0c034c26(int a4);
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_uint { char p[0x510]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };


int FUN_0c034c26(int a4)
{
    int stk[2];
    int t0;

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R6;
    register int R12;
    register int R13;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_0 = a4;
    t0 = *(int *)0xC23A1A8;
    v0_1 = (0x0);
    R6 = (t0);
    v0_2 = (0x1);
    if (((0x100 & t0) == 0)) goto L_C034C42;
    if (((0x80000 & R6) != 0)) goto L_C034CE8;
    if (((R6 & 0x100000) != 0)) goto L_C034CB0;
    L_C034C42:;
    *(unsigned int *)(((int)stk + 4)) = 0xC247030;
    R6 = (0xC246FF0);
    if (((*(int *)0xC247030) != 4)) goto L_C034CA4;
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x4))) != 4)) goto L_C034CA4;
    *(unsigned int *)(((int)stk + 4)) = R6;
    v0_3 = *(int *)((R6 + 0x0));
    w0_1 = (((struct o30_float *)(v0_0))->v);
    w0_2 = (((struct o30_float *)(v0_3))->v);
    w0_0 = (((struct o38_float *)(v0_3))->v);
    w0_3 = (((struct o38_float *)(v0_0))->v);
    v0_3 = *(int *)(((*(int *)(((int)stk + 4))) + 0x4));
    w0_0 = ((w0_3 - w0_0) * (w0_3 - w0_0));
    w0_0 = w0_0 + ((w0_1 - w0_2)) * ((w0_1 - w0_2));
    w0_1 = (((struct o30_float *)(v0_0))->v);
    w0_2 = (((struct o30_float *)(v0_3))->v);
    w0_3 = (((struct o38_float *)(v0_3))->v);
    w0_4 = (((struct o38_float *)(v0_0))->v);
    w0_3 = ((w0_4 - w0_3) * (w0_4 - w0_3));
    w0_3 = w0_3 + ((w0_1 - w0_2)) * ((w0_1 - w0_2));
    w0_1 = ((w0_1 - w0_2));
    if ((_builtin_sqrtf(w0_0) > _builtin_sqrtf(w0_3))) goto L_C034CE8;
    L_C034CB0:;
    (((struct o510_uint *)(v0_0))->v) = v0_1;
    L_C034CEC:;
    (((struct o50C_uint *)(v0_0))->v) = v0_2;
    (((struct o524_uint *)(v0_0))->v) = v0_1;
    return v0_2;
    L_C034CE8:;
    (((struct o510_uint *)(v0_0))->v) = v0_2;
    goto L_C034CEC;
    L_C034CA4:;
    if ((((((struct o40_int *)(R6))->v)) != 4)) goto L_C034CE0;
    goto L_C034CB0;
    L_C034CE0:;
    if ((((((struct o44_int *)(R6))->v)) != 4)) goto L_C034CFC;
    goto L_C034CE8;
    L_C034CFC:;
    (((struct o50C_uint *)(v0_0))->v) = v0_1;
    (((struct o524_uint *)(v0_0))->v) = v0_1;
    return v0_1;
}
