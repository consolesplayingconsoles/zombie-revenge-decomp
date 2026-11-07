/* Straight-line functions with calls and guards (batch gen_acq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c090a1c(int, int);
int FUN_0c090f70(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e19f2(int);
int FUN_0c064740(int a4, int a5, int a6);

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
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) | ((int)0x1 << (int)(*(int *)(((0x1C4 + a4) + 0x0)))));
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFBE4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c054c8a(a4);
            FUN_0c090a1c(a4, t1);
        } else {
            if ((*(int *)((a4 + 0xD8))) == 4) {
                FUN_0c0cc3f8(0x82DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            } else {
                t33 = 0;
                if ((*(int *)((a4 + 0xD8))) == 2) {
                    t20 = *(short *)(((*(int *)((a4 + 0x1C))) + 0x6E));
                    t21 = *(short *)(((*(int *)((((*(int *)((a4 + 0x1C4))) << 2) + 0xC246FF0))) + 0x6E));
                    if (16384.0f > _builtin_fabsf((float)(short)(t21 - t20))) {
                        FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFBE4))), (short)(t21 - t20), (t21 - t20), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
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
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t48 = a4;
    }
    if ((*(int *)((a4 + 0x1EC))) != -1) {
        if ((int)(*(int *)((a4 + 0x22C))) > 0) {
            t53 = *(int *)((a4 + 0x22C));
            *(unsigned int *)((a4 + 0x22C)) = (t53 - 1);
            if ((int)(t53 - 1) <= 0) {
                FUN_0c0e19f2(t48);
            }
        }
    } else {
        FUN_0c0e19f2(t48);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((t1 + 0x30)); }
    return FUN_0c01cdc2(a4);
}
