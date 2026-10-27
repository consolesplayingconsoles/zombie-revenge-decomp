/* Straight-line functions with calls and guards (batch gen_ff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e19f2(int, int);
int FUN_0c05fbfe(int a4, int a5, int a6);

int FUN_0c05fbfe(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t68;
    int t69;
    int t30;
    int t33;
    int t34;
    int t71;
    int t60;
    int t61;
    int t56;
    int t57;
    int t52;
    int t53;
    int t43;
    int t78;
    int stk[6];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    t68 = a4;
    t69 = a5;
    if ((*(int *)((a4 + 0xD8))) == 0) {
    } else {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            if ((int)(*(int *)(((*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0))) + 0xC0))) < (int)0x29) {
                FUN_0c0cc3f8(0x32DA9, 0x29, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x11);
            } else {
                FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFC58))), 0x29, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
            FUN_0c054c8a(a4);
            FUN_0c0909fc(a4);
        } else {
            if ((*(int *)((a4 + 0xD8))) == 4) {
                FUN_0c0cc3f8(0x82DA9, 0x29, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x12);
            } else {
                if ((*(int *)((a4 + 0xD8))) == 2) {
                    t30 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0xBC))) << 2)));
                    t33 = *(short *)((t30 + 0x6E));
                    t34 = *(short *)(((*(int *)((0xC246FF0 + ((*(int *)((a4 + 0x1C4))) << 2)))) + 0x6E));
                    *(unsigned int *)(((int)stk + 4)) = t33;
                    if ((*(float *)0xC05FE04) > _builtin_fabsf((float)(short)(t34 - t33))) {
                        if ((int)(*(int *)((t30 + 0xC0))) < (int)0x29) {
                            FUN_0c0cc3f8(0x32DA9, 0x29, (t34 - t33), (short)(t34 - t33), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t43 = 0x13;
                        } else {
                            FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFC58))), 0x29, (t34 - t33), (short)(t34 - t33), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t43 = 0x14;
                        }
                        FUN_0c0cc054((*(int *)((a4 + 0xBC))), t43);
                        FUN_0c0909fc(a4);
                    } else {
                        FUN_0c090f70(a4);
                    }
                } else {
                    t52 = 0xC246FF0;
                    t53 = 0x29;
                }
                t56 = t52;
                t57 = t53;
            }
            t60 = t56;
            t61 = t57;
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        t68 = t60;
        t69 = t61;
    }
    t71 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t71 - 1);
    if ((int)(t71 - 1) < 0) {
        FUN_0c0e19f2(t68, t69);
    } else {
        t78 = t69;
    }
    return FUN_0c01cdc2(a4, t78);
}
