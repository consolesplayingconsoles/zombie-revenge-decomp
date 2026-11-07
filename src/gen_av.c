/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[7]; } Stk7;
int FUN_0c036256(int, int, Stk7);
int FUN_0c03e388(int a4, int a5, float f4);

int FUN_0c03e388(int a4, int a5, float f4)
{
    int stk[29];
    int t49;
    register float u128;
    register float u192;
    register float u189;
    register float u181;
    register float u163;
    register float u145;
    register int t116;
    register float u119;
    register int t133;
    register float u136;
    register int t151;
    register float u154;
    register int t169;
    register float u172;

    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x54)) = *(struct mv7 *)(0xC0F5660); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x38)) = *(struct mv7 *)(0xC0F567C); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x1C)) = *(struct mv7 *)(0xC0F5698); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)(((int)stk + 4)) = *(struct mv7 *)(0xC0F56B4); }
    if ((*(int *)((a4 + 0x57C))) == 4) {
        u189 = (float)(*(int *)((a4 + 0x304)));
    } else {
        t49 = *(int *)((a4 + 0x578));
        if ((t49 != 0) && ((t49 != 1) && ((t49 != 2) && (t49 != 3)))) {
            if ((t49 != 4) && ((t49 != 5) && (t49 != 6))) {
                if (t49 != 7) {
                    u128 = f4;
                    if ((t49 == 8) || (t49 == 9)) {
                        if ((int)(*(int *)((a4 + 0x310))) > (int)0x6) {
                            t116 = 0x18;
                            u119 = (float)(*(int *)((a4 + 0x1CC)));
                        } else {
                            t116 = ((*(int *)((a4 + 0x310))) << 2);
                            u119 = (float)(*(int *)((a4 + 0x1CC)));
                        }
                        u128 = (u119 * (*(float *)((((int)stk + 4) + t116))));
                    }
                    u145 = u128;
                } else {
                    if ((int)(*(int *)((a4 + 0x310))) > (int)0x6) {
                        t133 = 0x18;
                        u136 = (float)(*(int *)((a4 + 0x1CC)));
                    } else {
                        t133 = ((*(int *)((a4 + 0x310))) << 2);
                        u136 = (float)(*(int *)((a4 + 0x1CC)));
                    }
                    u145 = (u136 * (*(float *)(((((int)stk + 4) + 0x1C) + t133))));
                }
                u163 = u145;
            } else {
                if ((int)(*(int *)((a4 + 0x310))) > (int)0x6) {
                    t151 = 0x18;
                    u154 = (float)(*(int *)((a4 + 0x1CC)));
                } else {
                    t151 = ((*(int *)((a4 + 0x310))) << 2);
                    u154 = (float)(*(int *)((a4 + 0x1CC)));
                }
                u163 = (u154 * (*(float *)(((((int)stk + 4) + 0x38) + t151))));
            }
            u181 = u163;
        } else {
            if ((int)(*(int *)((a4 + 0x310))) > (int)0x6) {
                t169 = 0x18;
                u172 = (float)(*(int *)((a4 + 0x1CC)));
            } else {
                t169 = ((*(int *)((a4 + 0x310))) << 2);
                u172 = (float)(*(int *)((a4 + 0x1CC)));
            }
            u181 = (u172 * (*(float *)(((((int)stk + 4) + 0x54) + t169))));
        }
        u189 = u181;
    }
    u192 = u189;
    if ((0.0f > u189) && !(u189 > 1.0f)) {
        u192 = 1.0f;
    }
    if ((*(int *)((a4 + 0xC0))) == 45) {
        if ((*(int *)((a4 + 0x578))) == 3) {
            if ((0x40 & (*(int *)((a4 + 0x20C)))) == 0) {
                *(unsigned int *)((a4 + 0x304)) = (int)((float)(*(int *)((a4 + 0x304))) + u192);
                if ((int)(*(int *)((a4 + 0x304))) > (int)(*(int *)((a4 + 0x308)))) {
                    *(unsigned int *)((a4 + 0x304)) = (*(int *)((a4 + 0x308)));
                }
            }
        } else {
            if ((0x40 & (*(int *)((a4 + 0x20C)))) == 0) {
                *(unsigned int *)((a4 + 0x304)) = (int)((float)(*(int *)((a4 + 0x304))) - u192);
            }
        }
    } else {
        if ((0x40 & (*(int *)((a4 + 0x20C)))) == 0) {
            *(unsigned int *)((a4 + 0x304)) = (int)((float)(*(int *)((a4 + 0x304))) - u192);
        }
    }
    *(unsigned int *)((a4 + 0x56C)) = (int)((float)(*(int *)((a4 + 0x56C))) + u192);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
        *(unsigned int *)((a4 + 0x304)) = 0x0;
        *(unsigned int *)((a4 + 0x5CC)) = (*(int *)0xC246300);
    }
    return (FUN_0c036256(a4, 0x40, *(Stk7 *)(((int)stk + 4))));
}
