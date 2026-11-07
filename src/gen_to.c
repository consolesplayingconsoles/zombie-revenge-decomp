/* Straight-line functions with calls and guards (batch gen_to): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c040266(int);
int FUN_0c041f2a(int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0402b8(int a4);

int FUN_0c0402b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    FUN_0c041f2a(a4);
                    t1 = *(int *)((a4 + 0x2CC));
                    t2 = t1;
                    if (t1 == 1) {
                        *(float *)((a4 + 0x26C)) = 0.0333333313f;
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t2 = 0x4EC;
                    }
                    return t2;
                }
                if (t0 == 4) {
                    t1 = FUN_0c040266(a4);
                    t2 = t1;
                    if (t1 != 0) {
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t2 = 0x4EC;
                    }
                    return t2;
                }
                if (t0 == 5) {
                    return FUN_0c041f2a(a4);
                }
                return t0;
            }
            *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) - ((((FUN_0c0da410(((*(short *)((a4 + 0x6E))) + 0x8000))) * 1.32089996f) / 27.0f)));
            *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) - ((((FUN_0c0d9e90(((*(short *)((a4 + 0x6E))) + 0x8000))) * 1.32089996f) / 27.0f)));
            FUN_0c041f2a(a4);
            t0 = *(int *)((a4 + 0x2CC));
            t1 = t0;
            if (t0 == 1) {
                *(unsigned int *)((a4 + 0x4EC)) = 0x0;
                t1 = 0x4EC;
            }
            return t1;
        }
        *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) + ((((FUN_0c0da410((*(short *)((a4 + 0x6E))))) * 2.9053998f) / 32.0f)));
        *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) + ((((FUN_0c0d9e90((*(short *)((a4 + 0x6E))))) * 2.9053998f) / 32.0f)));
        FUN_0c041f2a(a4);
        t0 = *(int *)((a4 + 0x2CC));
        t1 = t0;
        if (t0 == 1) {
            *(unsigned int *)((a4 + 0x4EC)) = 0x0;
            t1 = 0x4EC;
        }
        return t1;
    }
    FUN_0c041f2a(a4);
    t0 = *(int *)((a4 + 0x2CC));
    t1 = t0;
    if (t0 != 1) {
    } else {
        t0 = *(int *)((a4 + 0x2C4));
        if (t0 != 0x241) {
            t2 = t0;
            if (t0 != 0x243) {
            } else {
                *(unsigned int *)((a4 + 0x4EC)) = 0x2;
                t2 = 0x4EC;
            }
            t0 = t2;
        } else {
            t2 = 0x3;
            if ((int)(*(int *)((a4 + 0x4E0))) < (int)0x4) {
                t2 = 0x1;
            }
            *(unsigned int *)((a4 + 0x4EC)) = t2;
            t0 = 0x4EC;
        }
        t1 = t0;
    }
    return t1;
}
