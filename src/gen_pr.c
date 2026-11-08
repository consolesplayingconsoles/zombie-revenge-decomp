/* Straight-line functions with calls and guards (batch gen_pr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d636(int, int, int);
int FUN_0c01d8de(int, int, int, int, int, int);
int FUN_0c01d9c2(int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c07b70e(int a4);
struct o1D8_int { char p[0x1D8]; int v; };
struct o1D8_uint { char p[0x1D8]; unsigned int v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o1E0_int { char p[0x1E0]; int v; };
struct o1E0_uint { char p[0x1E0]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o228_int { char p[0x228]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_int { char p[0x234]; int v; };
struct o238_int { char p[0x238]; int v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c07b70e(int a4)
{
    int stk[2];
    register int t14;
    register int t15;
    register int t16;
    register float u20;
    register int t41;
    register float u62;
    register float u67;
    register float u72;
    register int t73;
    register int t76;
    register int t106;
    register int t107;
    register float u110;
    register int t114;
    register int t139;
    register int t143;
    register int t147;
    register int t7;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        if (((((struct o238_int *)(a4))->v)) != 0) {
            FUN_0c01d9c2(a4);
        } else {
            t7 = a4;
        }
        FUN_0c0e19f2(t7);
    }
    t14 = (((struct o220_int *)(a4))->v);
    if (t14 != 0) {
        if (t14 != 1) {
            if (t14 == 2) {
                t15 = (((struct o22C_int *)(a4))->v);
                t16 = (((struct o234_int *)(a4))->v);
                (((struct o22C_uint *)(a4))->v) = (t15 + t16);
                u20 = ((((struct o64_float *)(a4))->v));
                u20 = u20 + ((1.0f + 1.0f)) * (FUN_0c0da410((t15 + t16)));
                (((struct o34_float *)(a4))->v) = u20;
                if (((((struct o238_int *)(a4))->v)) != 0) {
                    FUN_0c01d8de(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                }
                if (((*(int *)0xC23ED88) & ((((struct o21C_int *)(a4))->v))) != 0) {
                    *(unsigned int *)(((int)stk + 4)) = ((((struct o228_int *)(a4))->v));
                    if (((((struct o238_int *)(a4))->v)) != 0) {
                        (((struct o238_uint *)(a4))->v) = (((((struct o238_int *)(a4))->v)) ^ 0x1);
                        FUN_0c01d9c2(a4);
                    }
                    t41 = (((struct oBC_int *)(a4))->v);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((((t41 << 1) + t41) << 2) + (*(int *)(((int)stk + 4))))); }
                    (((struct o230_uint *)(a4))->v) = 0x3C;
                    (((struct o220_uint *)(a4))->v) = 0x1;
                }
            }
        } else {
            u62 = ((((struct o30_float *)(a4))->v));
            u62 = u62 + 0.099999994f * ((((((struct o60_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))));
            (((struct o30_float *)(a4))->v) = u62;
            u67 = ((((struct o34_float *)(a4))->v));
            u67 = u67 + 0.099999994f * ((((((struct o64_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))));
            (((struct o34_float *)(a4))->v) = u67;
            u72 = ((((struct o38_float *)(a4))->v));
            u72 = u72 + 0.099999994f * ((((((struct o68_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
            (((struct o38_float *)(a4))->v) = u72;
            t73 = (((struct o230_int *)(a4))->v);
            (((struct o230_uint *)(a4))->v) = (t73 - 1);
            if ((int)(t73 - 1) <= 0) {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & (~((((struct o21C_int *)(a4))->v))));
                t76 = (((struct o238_int *)(a4))->v);
                (((struct o238_uint *)(a4))->v) = (t76 ^ 0x1);
                if ((t76 ^ 0x1) != 0) {
                    FUN_0c01d636(a4, 0xC19723C, 0x0);
                }
                (((struct o22C_uint *)(a4))->v) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((a4 + 0x60)); }
                (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + 0x1);
            }
        }
    } else {
        t106 = (((struct o22C_int *)(a4))->v);
        t107 = (((struct o234_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t106 + t107);
        u110 = ((((struct o64_float *)(a4))->v));
        u110 = u110 + 16.0f * (FUN_0c0da410((t106 + t107)));
        (((struct o34_float *)(a4))->v) = u110;
        if (((*(int *)0xC23ED88) & ((((struct o21C_int *)(a4))->v))) == 0) {
        } else {
            t114 = (((struct oBC_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((((t114 << 1) + t114) << 2) + ((((struct o228_int *)(a4))->v)))); }
            (((struct o230_uint *)(a4))->v) = 0x3C;
            (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007D8));
    t139 = (((struct o1D8_int *)(a4))->v);
    (((struct o1D8_uint *)(a4))->v) = (t139 + 0x200);
    nlRotateAY((t139 + 0x200));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DA));
    t143 = (((struct o1DC_int *)(a4))->v);
    (((struct o1DC_uint *)(a4))->v) = (t143 - 0x480);
    nlRotateAY((t143 - 0x480));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DC));
    t147 = (((struct o1E0_int *)(a4))->v);
    (((struct o1E0_uint *)(a4))->v) = (t147 + 0x400);
    nlRotateAY((t147 + 0x400));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DE));
    return nlPopMatrix(0x1);
}
