/* Straight-line functions with calls and guards (batch gen_ra): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c040266(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c04045c(int a4);

int FUN_0c04045c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) - (((FUN_0c0da410(((*(short *)((a4 + 0x6E))) + 0x8000))) * 0.571428537f)));
                    *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) - (((FUN_0c0d9e90(((*(short *)((a4 + 0x6E))) + 0x8000))) * 0.571428537f)));
                    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) - 390);
                    if (64.0f > _builtin_fabsf((float)((*(short *)((a4 + 0x6E))) - 16384))) {
                        *(unsigned short *)((a4 + 0x6E)) = 0x4000;
                        *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        FUN_0c041dd0(a4);
                        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
                        return 0x2D4;
                    }
                    t1 = *(int *)((a4 + 0x2EC));
                    if ((t1 & 12) != 0) {
                        return FUN_0c041dd0(a4);
                    }
                    return t1;
                }
                if (t0 == 4) {
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
                if (t0 == 5) {
                    t1 = FUN_0c040266(a4);
                    t2 = t1;
                    if (t1 != 0) {
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t2 = 0x4EC;
                    }
                    return t2;
                }
                if (t0 == 6) {
                    return FUN_0c041f2a(a4);
                }
                return t0;
            }
            if ((*(int *)((a4 + 0x4E0))) == 2) {
                if (!(75.0f > (*(float *)((a4 + 0x38))))) {
                    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + ((-(*(float *)(((0x38 + a4) + 0x0)))) + 75.0f));
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                }
                t0 = *(int *)((a4 + 0x2EC));
                if ((t0 & 12) != 0) {
                    return FUN_0c041dd0(a4);
                }
                return t0;
            }
            return FUN_0c041f2a(a4);
        }
        *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
        u0 = (*(float *)(((a4 + 0x50) + 0x0)));
        u0 = u0 + 0.5f * (FUN_0c0d9e90(((*(short *)((a4 + 0x6E))) + 0x8000)));
        *(float *)(((a4 + 0x50) + 0x0)) = u0;
        u0 = (*(float *)(((a4 + 0x48) + 0x0)));
        u0 = u0 + 0.5f * (FUN_0c0da410(((*(short *)((a4 + 0x6E))) + 0x8000)));
        *(float *)(((a4 + 0x48) + 0x0)) = u0;
        if (110.0f > (*(float *)((a4 + 0x34)))) {
            *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            *(float *)((a4 + 0x34)) = 110.0f;
            *(float *)((a4 + 0x4C)) = 0.0f;
            FUN_0c041dd0(a4);
        }
        if ((*(int *)((a4 + 0x4E0))) == 2) {
            if (!(75.0f > (*(float *)((a4 + 0x38))))) {
                *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + ((-(*(float *)(((0x38 + a4) + 0x0)))) + 75.0f));
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            }
            t0 = *(int *)((a4 + 0x2EC));
            if ((t0 & 12) != 0) {
                return FUN_0c041dd0(a4);
            }
            return t0;
        }
        return FUN_0c041f2a(a4);
    }
    FUN_0c041f2a(a4);
    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
    *(float *)((a4 + 0x26C)) = 0.0333333313f;
    return 0x26C;
}
