/* Straight-line functions with calls and guards (batch gen_acq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c090a1c(int, int);
int FUN_0c090f70(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0e19f2(void);
int FUN_0c064740(int a4, int a5, int a6);
struct o1C4_int { char p[0x1C4]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c064740(int a4, int a5, int a6)
{
    int stk[5];
    register int t1;
    register int t33;
    register int t20;
    register int t21;
    register int t53;
    register int t48;

    t1 = *(int *)((a4 + 0x1C));
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) | ((int)0x1 << (int)((((struct o1C4_int *)(a4))->v))));
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c0cc3f8((*(int *)(((((((struct o1F8_int *)(a4))->v)) << 2) + 0xC1FFBE4))), 0x0, 0x0, 0x0);
            FUN_0c054c8a(a4);
            FUN_0c090a1c(a4, t1);
        } else {
            if (((((struct oD8_int *)(a4))->v)) == 4) {
                FUN_0c0cc3f8(0x82DA9, 0x0, 0x0, 0x0);
            } else {
                t33 = 0;
                if (((((struct oD8_int *)(a4))->v)) == 2) {
                    t20 = (((struct o6E_short *)((*(int *)((a4 + 0x1C)))))->v);
                    t21 = (((struct o6E_short *)((*(int *)(((((((struct o1C4_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v);
                    if (16384.0f > _builtin_fabsf((float)(short)(t21 - t20))) {
                        FUN_0c0cc3f8((*(int *)(((((((struct o1F8_int *)(a4))->v)) << 2) + 0xC1FFBE4))), (short)(t21 - t20), (t21 - t20), 0x0);
                        FUN_0c090a1c(a4, t1);
                    } else {
                        FUN_0c090f70(a4);
                    }
                    t33 = ((16384.0f > _builtin_fabsf((float)(short)(t21 - t20))));
                } else {
                    t33 = (0);
                }
            }
        }
        (((struct oD8_uint *)(a4))->v) = 0x0;
    } else {
        t48 = a4;
    }
    if (((((struct o1EC_int *)(a4))->v)) != -1) {
        if ((int)((((struct o22C_int *)(a4))->v)) > 0) {
            t53 = (((struct o22C_int *)(a4))->v);
            (((struct o22C_uint *)(a4))->v) = (t53 - 1);
            if ((int)(t53 - 1) <= 0) {
                FUN_0c0e19f2();
            }
        }
    } else {
        FUN_0c0e19f2();
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((t1 + 0x30)); }
    return FUN_0c01cdc2(a4);
}
