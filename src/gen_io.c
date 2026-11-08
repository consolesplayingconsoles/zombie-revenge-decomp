/* Straight-line functions with calls and guards (batch gen_io): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c08d840(int, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0e19f2(void);
int FUN_0c05f7ec(int a4, int a5, int a6);
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o250_float { char p[0x250]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c05f7ec(int a4, int a5, int a6)
{
    int stk[3];
    register int t13;
    register int t11;

    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c054c8a(a4);
        }
        (((struct oD8_uint *)(a4))->v) = 0x0;
        FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0);
        FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x10);
    } else {
        t11 = a4;
    }
    t13 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t13 - 1);
    if ((int)(t13 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 0.979999959f);
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * 0.979999959f);
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.979999959f);
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.0199999996f);
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    if ((int)((((struct o22C_int *)(a4))->v)) < (int)0x28) {
        if ((int)((((struct o22C_int *)(a4))->v)) < (int)0xC) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 0.969999969f);
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * 0.969999969f);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.969999969f);
        }
        (((struct o250_float *)(a4))->v) = (((((struct o250_float *)(a4))->v)) + 0.0149999997f);
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o250_float *)(a4))->v)));
    }
    if ((((((struct o22C_int *)(a4))->v)) & 7) == 0) {
        FUN_0c08d840((a4 + 0x30), 12.0f);
    }
    return FUN_0c01cdc2(a4);
}
