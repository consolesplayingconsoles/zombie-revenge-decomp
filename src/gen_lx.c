/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016dfe(int a4, int a5);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o46_short { char p[0x46]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c016dfe(int a4, int a5)
{
    int stk[1];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
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
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = (0xC23EE14);
    v0_3 = (0x0);
    L_C016E94:;
    if (((int)v0_3 < (int)0x8)) goto L_C016E20;
    return 0x0;
    L_C016E20:;
    v0_5 = *(int *)((v0_2 + 0x4));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C016E90;
    if (((int)((((struct o46_short *)(v0_4))->v)) <= 0)) goto L_C016E90;
    if ((((((struct o44_short *)(v0_4))->v)) != (*(int *)0xC23ED50))) goto L_C016E90;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C016E90;
    v0_5 = (((struct o6E_short *)(v0_0))->v);
    v0_6 = *(int *)((v0_4 + 0xC));
    FPUL_ = ((short)(v0_5 - v0_6));
    if ((!((*(float *)0xC016EE8) > _builtin_fabsf((float)(short)(v0_5 - v0_6))))) goto L_C016E90;
    if ((!(((((struct o10_float *)(v0_4))->v)) > _builtin_fabsf((((((struct o30_float *)(v0_0))->v)) - (*(float *)((v0_4 + 0x0)))))))) goto L_C016E90;
    if ((!(((((struct o14_float *)(v0_4))->v)) > _builtin_fabsf((((((struct o38_float *)(v0_0))->v)) - ((((struct o8_float *)(v0_4))->v))))))) goto L_C016E90;
    *(unsigned int *)0xC23ED54 = ((((struct o46_short *)(v0_4))->v));
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    return v0_4;
    L_C016E90:;
    v0_2 = ((v0_2 + 0x8));
    v0_3 = ((v0_3 + 0x1));
    goto L_C016E94;
}
