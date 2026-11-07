/* Straight-line functions with calls and guards (batch gen_ud): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0418d4(int a4);

int FUN_0c0418d4(int a4)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;
    register int t11;
    register int t37;
    register int t13;
    register int t31;
    register int t14;
    register int t15;
    register int t20;
    register float t59;
    register int t64;
    register int t80;
    register int t68;
    register int t43;
    int t3;
    register int t25;

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t8 = t0;
                if (t0 == 3) {
                    *(unsigned int *)((a4 + 0x4E4)) = ((*(int *)((a4 + 0x4E4))) - 1);
                    t5 = 0x4E4;
                    if ((((*(int *)((a4 + 0x2EC))) & 12) == 0) && (t3 = *(int *)((a4 + 0x4E4)), (int)t3 >= 0)) {
                    } else {
                        t5 = (FUN_0c03f4bc(a4));
                    }
                    t8 = t5;
                }
                t43 = t8;
            } else {
                t11 = *(int *)((a4 + 0x4E4));
                *(unsigned int *)((a4 + 0x4E4)) = (t11 - 1);
                t37 = 0x4E4;
                if ((int)(t11 - 1) < 0) {
                    t13 = *(int *)((a4 + 0x2EC));
                    t31 = t13;
                    if ((t13 & 12) != 0) {
                        t14 = *(int *)((a4 + 0x4DC));
                        t15 = *(int *)((a4 + 0x4E0));
                        *(unsigned int *)((a4 + 0x4E0)) = (t15 + 0x1);
                        if ((int)(*(short *)((((((t15 + 0x1) << 2) << 1) + (*(int *)((((((t14 - 76) << 1) + (t14 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                            t20 = *(int *)((a4 + 0x4F0));
                            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t20 << 2) + t20) << 2) + 0xC1F8E44))) + 0x0)));
                            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                            *(unsigned int *)((a4 + 0x2D4)) = 0x4;
                            *(unsigned int *)((a4 + 0x4E4)) = 0x1E;
                            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                            t25 = 0x4EC;
                        } else {
                            t25 = (FUN_0c041dd0(a4));
                        }
                        t31 = t25;
                    }
                    t37 = t31;
                }
                t43 = t37;
            }
            t68 = t43;
        } else {
            *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.0749999955f);
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
            *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) + ((-((FUN_0c0d9e90((*(short *)((a4 + 0x6E))))) * 0.166666657f))));
            *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) + ((-((FUN_0c0da410((*(short *)((a4 + 0x6E))))) * 0.166666657f))));
            t59 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
            t64 = 0x34;
            if (t59 > (*(float *)((a4 + 0x34)))) {
                *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                *(float *)((a4 + 0x34)) = t59;
                *(float *)((a4 + 0x4C)) = 0.0f;
                t64 = (FUN_0c041dd0(a4));
            }
            t68 = t64;
        }
        t80 = t68;
    } else {
        FUN_0c041f2a(a4);
        *(float *)((a4 + 0x26C)) = 0.0f;
        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        t80 = 0x4EC;
    }
    return t80;
}
