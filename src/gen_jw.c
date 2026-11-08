/* Straight-line functions with calls and guards (batch gen_jw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c07a1d6(int a4, int a5, int a6, int a7);
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o50_float { char p[0x50]; float v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c07a1d6(int a4, int a5, int a6, int a7)
{
    register int t7;

    if (((*(int *)0xC23ED5C) & 22) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((int)((((struct o22C_int *)(a4))->v)) > 0) {
        t7 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t7 - 1);
        if ((int)(t7 - 1) <= 0) {
            (((struct o1EC_uint *)(a4))->v) = 0x0;
            (((struct oD8_uint *)(a4))->v) = 0x0;
        }
    }
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        (((struct oD8_uint *)(a4))->v) = 0x0;
        (((struct o22C_uint *)(a4))->v) = 0x50;
    }
    (((struct o38_float *)(a4))->v) = ((((struct o38_float *)(((((struct o230_int *)(a4))->v))))->v));
    (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    return FUN_0c01cdc2(a4);
}
