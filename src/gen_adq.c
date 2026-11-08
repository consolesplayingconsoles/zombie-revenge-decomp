/* Straight-line functions with calls and guards (batch gen_adq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a19a(int);
int FUN_0c03227c(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c028fd6(int a4, int a5, int a6, int a7, float f4, float f5);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct oAC_int { char p[0xAC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c028fd6(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[5];

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
    register float w0_0;
    v0_4 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_0 = a7;
    w0_0 = f4;
    w0_0 = f5;
    v0_3 = (v0_4);
    if ((((((struct o2BC_int *)(v0_4))->v)) != 0x88)) goto L_C029054;
    if ((((((struct o50C_int *)(v0_3))->v)) == 0)) goto L_C029054;
    v0_5 = (0x510);
    v0_4 = (0xC246FF0);
    if (((*(int *)((((((((struct o510_int *)(v0_3))->v)) << 2) + 0xC247030) + 0x0))) == 0)) goto L_C029054;
    v0_1 = *(int *)(((((*(int *)((v0_3 + v0_5))) << 2) + v0_4) + 0x0));
    FUN_0c0a68ec(((int)stk + 4), (((((struct o30_float *)(v0_3))->v)) - ((((struct o30_float *)(v0_1))->v))), (((((struct o38_float *)(v0_3))->v)) - ((((struct o38_float *)(v0_1))->v))));
    v0_5 = *(int *)(((int)stk + 4));
    v0_6 = (((struct o6E_short *)(v0_3))->v);
    v0_4 = ((v0_6 - (v0_5 + 0xF00)));
    v0_1 = ((v0_5 + 0xF00));
    v0_2 = ((short)(v0_6 - (v0_5 + 0xF00)));
    FPUL_ = ((short)(v0_6 - (v0_5 + 0xF00)));
    if ((!(16384.0f > _builtin_fabsf((float)(short)(v0_6 - (v0_5 + 0xF00)))))) goto L_C029054;
    FUN_0c0546fe(v0_3, ((*(int *)(((int)stk + 4))) + 0xF00), 0x80, 0x1);
    L_C029054:;
    if ((((((struct o2BC_int *)(v0_3))->v)) != 0x85)) goto L_C0290BA;
    v0_4 = (0xC0CC3F8);
    if ((((((struct oAC_int *)(v0_3))->v)) != 16)) goto L_C0290A6;
    (((struct o2C4_uint *)(v0_3))->v) = 0x87;
    (((struct o2CC_uint *)(v0_3))->v) = 0x1;
    (((struct o20C_uint *)(v0_3))->v) = 0x200;
    (((struct o210_uint *)(v0_3))->v) = 0x7;
    (((struct o4C4_uint *)(v0_3))->v) = 0x1;
    (((struct o4C8_uint *)(v0_3))->v) = 0x4;
    (((struct o4D0_uint *)(v0_3))->v) = 0x1;
    (((struct o534_uint *)(v0_3))->v) = 0x0;
    (((struct oD8_uint *)(v0_3))->v) = 0x0;
    v0_5 = ((FUN_0c0cc3f8(0xF2BA9, v0_1, v0_2, v0_0)));
    L_C0290CA:;
    return v0_5;
    L_C0290A6:;
    if ((((((struct oD8_int *)(v0_3))->v)) == 0)) goto L_C0290BA;
    FUN_0c0cc3f8(0xF2BA9, v0_1, v0_2, v0_0);
    FUN_0c0cc3f8(0x42DA9, 0x0, 0x0, 0x0);
    L_C0290BA:;
    v0_4 = FUN_0c03227c(v0_3);
    v0_5 = (v0_4);
    if ((v0_4 != 0)) goto L_C0290CA;
    v0_5 = ((FUN_0c02a19a(v0_3)));
    goto L_C0290CA;
}
