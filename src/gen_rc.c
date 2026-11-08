/* Straight-line functions with calls and guards (batch gen_rc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e720(int);
int FUN_0c01e79a(int, int);
int FUN_0c0a6928(int, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float);
int FUN_0c01e00e(int a4, int a5, int a6);
struct o20C_int { char p[0x20C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };


int FUN_0c01e00e(int a4, int a5, int a6)
{
    int stk[21];
    register int t1;
    register int t66;
    register int t15;
    register int t60;
    register int t54;
    register int t23;
    register int t28;
    register int t49;
    register float u72;
    register float u73;
    register float u74;
    register float u75;
    register float u76;
    register float u77;
    register float u78;
    register float u79;
    register float u80;
    register float u81;
    register int t93;
    register int t120;
    register int t108;
    register int t103;
    register int t97;

    *(unsigned int *)(((int)stk + 32)) = a5;
    t1 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, ((int)stk + 24), a5);
    if (t1 == 0) {
        FUN_0c01e720(a4);
        t120 = 0x0;
    } else {
        (((struct oAC_uint *)(a4))->v) = (*(int *)(((int)stk + 24)));
        if ((*(int *)(((int)stk + 24))) == 4) {
            t66 = 0x20C;
            if ((((((struct o20C_int *)(a4))->v)) & 0x400000) != 0) {
            } else {
                t15 = *(int *)((t1 + 0x8));
                t60 = 0x20C;
                if ((int)t15 >= (int)0xC) {
                } else {
                    t54 = 0x20C;
                    if ((int)t15 < 0) {
                    } else {
                        t23 = *(int *)((((*(int *)((t1 + 0x8))) << 2) + 0xC246FF0));
                        if ((((((struct o20C_int *)(t23))->v)) & 0x600C0000) == 0) {
                            (((struct o54_float *)(t23))->v) = ((((struct o54_float *)(a4))->v));
                            (((struct o5C_float *)(t23))->v) = ((((struct o5C_float *)(a4))->v));
                            t28 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(t23, ((int)stk + 24), (a5 & 0xFFFFFFFD));
                            if (t28 == 0) {
                                (((struct o30_float *)(t23))->v) = (((((struct o30_float *)(t23))->v)) + ((((struct o54_float *)(t23))->v)));
                                (((struct o34_float *)(t23))->v) = (((((struct o34_float *)(t23))->v)) + ((((struct o58_float *)(t23))->v)));
                                (((struct o38_float *)(t23))->v) = (((((struct o38_float *)(t23))->v)) + ((((struct o5C_float *)(t23))->v)));
                            }
                        }
                        t49 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, ((int)stk + 24), (a5 & 0xFFFFFFFD));
                        if (t49 == 0) {
                            FUN_0c01e720(a4);
                        }
                        t54 = t1;
                    }
                    t60 = t54;
                }
                t66 = t60;
            }
            t108 = t66;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x18)) = *(struct mv3 *)((0x98 + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x24)) = *(struct mv3 *)((a4 + 0x30)); }
            *(float *)(((int)stk + 20)) = 0.149999991f;
            u72 = (((struct o38_float *)(a4))->v);
            u73 = (((struct o5C_float *)(a4))->v);
            *(float *)(((int)stk + 44)) = u73;
            u74 = (u73 * 0.099999994f);
            *(float *)(((int)stk + 16)) = (u72 - u74);
            u75 = (((struct o34_float *)(a4))->v);
            *(float *)(((int)stk + 40)) = u75;
            u76 = (((struct o58_float *)(a4))->v);
            *(float *)(((int)stk + 36)) = u76;
            u77 = (u76 * 0.099999994f);
            *(float *)(((int)stk + 12)) = (u75 - u77);
            u78 = (((struct o30_float *)(a4))->v);
            u79 = (((struct o54_float *)(a4))->v);
            u80 = (u79 * 0.099999994f);
            *(float *)(((int)stk + 8)) = (u78 - u80);
            u81 = *(float *)(((int)stk + 44));
            *(float *)(((int)stk + 4)) = (u72 + u81);
            FUN_0c0a6928((((int)stk + 4) + 0x44), (((int)stk + 4) + 0x48), (((int)stk + 4) + 0x4C), 0x0, (u72 + u81), (u78 - u80), (u75 - u77), (u72 - u74), ((((struct o98_float *)(a4))->v)), ((((struct o9C_float *)(a4))->v)), ((((struct oA0_float *)(a4))->v)), ((((struct o8C_float *)(a4))->v)), ((((struct o90_float *)(a4))->v)), ((((struct o94_float *)(a4))->v)), (u78 + u79), ((*(float *)(((int)stk + 40))) + (*(float *)(((int)stk + 36)))));
            FUN_0c01e79a(a4, (((int)stk + 24) + 0x30));
            t93 = ((int (*)(int, int, int))((*(int *)0xC245F94)))(a4, (((int)stk + 24) + 0x4), (a5 & 0xFFFFFFFD));
            if (t93 != 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 24) + 0x24)); }
                if ((((((struct o98_int *)(t93))->v)) & 112) != 0) {
                    (((struct oAC_uint *)(a4))->v) = (*(int *)(((int)stk + 28)));
                    t97 = t93;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
                    t97 = t1;
                }
                t103 = t97;
            } else {
                FUN_0c01e720(a4);
                t103 = t1;
            }
            t108 = t103;
        }
        t120 = t108;
    }
    return t120;
}
