/* Straight-line functions with calls and guards (batch gen_ff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0e19f2(void);
int FUN_0c05fbfe(int a4, int a5, int a6);
struct o1C4_int { char p[0x1C4]; int v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c05fbfe(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t68;
    int t30;
    int t33;
    int t34;
    int t71;
    int t43;
    int t78;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t0 = (((struct oBC_int *)(a4))->v);
    t1 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    t68 = a4;
    t78 = a5;
    if (((((struct oD8_int *)(a4))->v)) == 0) {
    } else {
        FUN_0c05a98a(a4, a5, a6);
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            if ((int)((((struct oC0_int *)((*(int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0)))))->v)) < (int)0x29) {
                FUN_0c0cc3f8(0x32DA9, 0x29, 0x0, 0x0);
                FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x11);
            } else {
                FUN_0c0cc3f8((*(int *)(((((((struct o1F8_int *)(a4))->v)) << 2) + 0xC1FFC58))), 0x29, 0x0, 0x0);
            }
            FUN_0c054c8a(a4);
            FUN_0c0909fc(a4);
        } else {
            if (((((struct oD8_int *)(a4))->v)) == 4) {
                FUN_0c0cc3f8(0x82DA9, 0x29, 0x0, 0x0);
                FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x12);
            } else {
                if (((((struct oD8_int *)(a4))->v)) == 2) {
                    t30 = *(int *)((0xC246FF0 + (((((struct oBC_int *)(a4))->v)) << 2)));
                    t33 = (((struct o6E_short *)(t30))->v);
                    t34 = (((struct o6E_short *)((*(int *)((0xC246FF0 + (((((struct o1C4_int *)(a4))->v)) << 2))))))->v);
                    if ((*(float *)0xC05FE04) > _builtin_fabsf((float)(short)(t34 - t33))) {
                        if ((int)((((struct oC0_int *)(t30))->v)) < (int)0x29) {
                            FUN_0c0cc3f8(0x32DA9, 0x29, (t34 - t33), (short)(t34 - t33));
                            t43 = 0x13;
                        } else {
                            FUN_0c0cc3f8((*(int *)(((((((struct o1F8_int *)(a4))->v)) << 2) + 0xC1FFC58))), 0x29, (t34 - t33), (short)(t34 - t33));
                            t43 = 0x14;
                        }
                        FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), t43);
                        FUN_0c0909fc(a4);
                    } else {
                        FUN_0c090f70(a4);
                    }
                } else {
                    t68 = 0xC246FF0;
                    t78 = 0x29;
                }
            }
        }
        (((struct oD8_uint *)(a4))->v) = 0x0;
    }
    t71 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t71 - 1);
    if ((int)(t71 - 1) < 0) {
        FUN_0c0e19f2();
    } else {
    }
    return FUN_0c01cdc2(a4, t78);
}
