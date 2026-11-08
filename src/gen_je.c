/* Straight-line functions with calls and guards (batch gen_je): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c0685a4(int);
int FUN_0c075bae(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c06b29c(int a4, int a5, int a6, int a7);
struct o220_int { char p[0x220]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c06b29c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t22;
    register int t4;

    t0 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    } else {
        t4 = a4;
    }
    FUN_0c0685a4(t4);
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        (((struct oD8_uint *)(a4))->v) = 0x0;
        FUN_0c0cc3f8(0xD21A9, 0x0, 0x0, 0x0);
        FUN_0c075bae((a4 + 0x30));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) - 6.0f);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t22 = *(int *)0xC23ED9C;
    if (t22 == 4) {
        return FUN_0c01cdc2(a4);
    }
    return t22;
}
