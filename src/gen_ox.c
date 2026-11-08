/* Straight-line functions with calls and guards (batch gen_ox): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0911b8(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
extern int FUN_0c0e19f2();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c05bcd0(int a4, int a5, int a6, int a7);
struct o21C_int { char p[0x21C]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o238_float { char p[0x238]; float v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c05bcd0(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t3;
    register int t18;
    register int t24;
    register int t25;
    register float u55;
    register int t110;
    register float u67;
    register float u71;
    register int t73;
    register float u75;
    register float u76;
    register float u77;
    register float t78;
    register int t90;
    register int t96;
    register float u100;
    register float u101;

    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
            t3 = (((struct oBC_int *)(a4))->v);
            *(unsigned int *)(((((t3 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t3 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c054c8a(a4);
        }
        if (((((struct o21C_int *)(a4))->v)) != 0) {
            (((struct oD8_uint *)(a4))->v) = 0x0;
        } else {
            t18 = ((int (*)(void))(FUN_0c0e19f2))();
        }
    } else {
        t24 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t24 - 1);
        if ((int)(t24 - 1) <= 0) {
            t25 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
    }
    if (((((struct o23C_int *)(a4))->v)) == 0) {
        (((struct o23C_uint *)(a4))->v) = 0x1;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    u55 = (((struct o24C_float *)(a4))->v);
    nlScale(u55, u55, ((((struct o238_float *)(a4))->v)));
    FUN_0c0de000(((((struct o250_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t110 = 0x21C;
    if (((((struct o21C_int *)(a4))->v)) == 0) {
    } else {
        FUN_0c0911b8((a4 + 0x30), (a4 + 0x48));
        u67 = ((((struct o254_float *)(a4))->v));
        u67 = u67 + 0.399999976f * (((-((((struct o254_float *)(a4))->v))) + 1.0f));
        (((struct o254_float *)(a4))->v) = u67;
        u71 = ((((struct o258_float *)(a4))->v));
        u71 = u71 + 0.399999976f * (((-((((struct o258_float *)(a4))->v))) + 9102.0f));
        (((struct o258_float *)(a4))->v) = u71;
        nlPushMatrix(0x0);
        t73 = (((struct o70_short *)(a4))->v);
        (((struct o70_ushort *)(a4))->v) = (t73 + 0x1888);
        *(unsigned int *)(((int)stk + 16)) = (short)(t73 + 0x1888);
        u75 = (((struct o254_float *)(a4))->v);
        u76 = (u75 * 1.0f);
        u77 = (u75 * 1.0f);
        t78 = FUN_0c0da410((int)((((struct o258_float *)(a4))->v)));
        *(unsigned int *)(((int)stk + 12)) = 0x8;
        FUN_0c0dcca0((a4 + 0x30));
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (-((((struct o48_float *)(a4))->v))), (-((((struct o4C_float *)(a4))->v))), (-((((struct o50_float *)(a4))->v))));
        nlRotateAY((*(int *)(((int)stk + 8))));
        nlRotateAX((*(int *)(((int)stk + 4))));
        nlPushMatrix(0x0);
        for (;;) {
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
            t90 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t90 + 0x1FFF);
            nlRotateAZ((t90 + 0x1FFF));
            nlRotateAY(0xAAA);
            nlScale((u76 * 0.0199999996f), (u76 * 0.0199999996f), (u77 * 0.049999997f));
            FUN_0c0de000((u77 * 0.049999997f));
            FUN_0c0c465c(0x3C9);
            t96 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 12)) = (t96 - 1);
            if ((t96 - 1) == 0) {
                break;
            }
        }
        nlPopMatrix(0x1);
        nlRotateAX(0x3FFF);
        nlScale((u75 * 1.0f), (t78 * 2.5f), (u75 * 1.0f));
        u100 = (u75 * 1.0f);
        u101 = (t78 * 2.5f);
        FUN_0c0de000((u100 + u101));
        FUN_0c0c465c((0x410 + ((*(int *)0xC23A258) & 0xF)));
        nlRotateAY(0x3FFF);
        FUN_0c0de000((u100 + u101));
        FUN_0c0c465c((0x410 + ((*(int *)0xC23A258) & 0xF)));
        t110 = (nlPopMatrix(0x1));
    }
    return t110;
}
