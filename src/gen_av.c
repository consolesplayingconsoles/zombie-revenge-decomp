/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[7]; } Stk7;
int FUN_0c036256(int);
int FUN_0c03e388(int a4, int a5, float f4);
struct o1CC_int { char p[0x1CC]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o304_uint { char p[0x304]; unsigned int v; };
struct o308_int { char p[0x308]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o56C_int { char p[0x56C]; int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o5CC_uint { char p[0x5CC]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };


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
    if (((((struct o57C_int *)(a4))->v)) == 4) {
        u189 = (float)((((struct o304_int *)(a4))->v));
    } else {
        t49 = (((struct o578_int *)(a4))->v);
        if ((t49 != 0) && ((t49 != 1) && ((t49 != 2) && (t49 != 3)))) {
            if ((t49 != 4) && ((t49 != 5) && (t49 != 6))) {
                if (t49 != 7) {
                    u128 = f4;
                    if ((t49 == 8) || (t49 == 9)) {
                        if ((int)((((struct o310_int *)(a4))->v)) > (int)0x6) {
                            t116 = 0x18;
                            u119 = (float)((((struct o1CC_int *)(a4))->v));
                        } else {
                            t116 = (((((struct o310_int *)(a4))->v)) << 2);
                            u119 = (float)((((struct o1CC_int *)(a4))->v));
                        }
                        u128 = (u119 * (*(float *)((((int)stk + 4) + t116))));
                    }
                    u145 = u128;
                } else {
                    if ((int)((((struct o310_int *)(a4))->v)) > (int)0x6) {
                        t133 = 0x18;
                        u136 = (float)((((struct o1CC_int *)(a4))->v));
                    } else {
                        t133 = (((((struct o310_int *)(a4))->v)) << 2);
                        u136 = (float)((((struct o1CC_int *)(a4))->v));
                    }
                    u145 = (u136 * (*(float *)(((((int)stk + 4) + 0x1C) + t133))));
                }
                u163 = u145;
            } else {
                if ((int)((((struct o310_int *)(a4))->v)) > (int)0x6) {
                    t151 = 0x18;
                    u154 = (float)((((struct o1CC_int *)(a4))->v));
                } else {
                    t151 = (((((struct o310_int *)(a4))->v)) << 2);
                    u154 = (float)((((struct o1CC_int *)(a4))->v));
                }
                u163 = (u154 * (*(float *)(((((int)stk + 4) + 0x38) + t151))));
            }
            u181 = u163;
        } else {
            if ((int)((((struct o310_int *)(a4))->v)) > (int)0x6) {
                t169 = 0x18;
                u172 = (float)((((struct o1CC_int *)(a4))->v));
            } else {
                t169 = (((((struct o310_int *)(a4))->v)) << 2);
                u172 = (float)((((struct o1CC_int *)(a4))->v));
            }
            u181 = (u172 * (*(float *)(((((int)stk + 4) + 0x54) + t169))));
        }
        u189 = u181;
    }
    u192 = u189;
    if ((0.0f > u189) && !(u189 > 1.0f)) {
        u192 = 1.0f;
    }
    if (((((struct oC0_int *)(a4))->v)) == 45) {
        if (((((struct o578_int *)(a4))->v)) == 3) {
            if ((0x40 & ((((struct o20C_int *)(a4))->v))) == 0) {
                (((struct o304_uint *)(a4))->v) = (int)((float)((((struct o304_int *)(a4))->v)) + u192);
                if ((int)((((struct o304_int *)(a4))->v)) > (int)((((struct o308_int *)(a4))->v))) {
                    (((struct o304_uint *)(a4))->v) = ((((struct o308_int *)(a4))->v));
                }
            }
        } else {
            if ((0x40 & ((((struct o20C_int *)(a4))->v))) == 0) {
                (((struct o304_uint *)(a4))->v) = (int)((float)((((struct o304_int *)(a4))->v)) - u192);
            }
        }
    } else {
        if ((0x40 & ((((struct o20C_int *)(a4))->v))) == 0) {
            (((struct o304_uint *)(a4))->v) = (int)((float)((((struct o304_int *)(a4))->v)) - u192);
        }
    }
    (((struct o56C_uint *)(a4))->v) = (int)((float)((((struct o56C_int *)(a4))->v)) + u192);
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030)) = 0x5;
        (((struct o304_uint *)(a4))->v) = 0x0;
        (((struct o5CC_uint *)(a4))->v) = (*(int *)0xC246300);
    }
    return (FUN_0c036256(a4));
}
