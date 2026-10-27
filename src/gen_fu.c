/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c070114(int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e5f1c(void);
void FUN_0c070258(int a4, int a5, int a6);
int kmiGetDisplayData(int a4, int a5, int a6);
int FUN_0c039354(int a4);

void FUN_0c070258(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t28;
    float u40;
    float u43;
    float u45;
    float u48;
    float u50;
    float u53;
    float u55;
    float u62;
    float u66;
    float u72;
    int t88;
    int t36;
    int stk[32];

    if (((*(int *)0xC23ED88) & 0x200) == 0) {
    } else {
        { struct mv14 { int w[14]; }; *(struct mv14 *)((((int)stk + 4) + 0x14)) = *(struct mv14 *)(0xC0FC2E0); }
        t1 = *(int *)((a4 + 0x70));
        t2 = (((int)stk + 4) + 0x14);
        t3 = 0x0;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            if ((*(int *)(((t3 << 2) + 0xC247030))) == 4) {
                *(unsigned int *)((((t4 << 2) + (((int)stk + 4) + 0xC)) + 0x0)) = t3;
                t4 = (t4 + 0x1);
            } else {
                if ((int)(*(int *)((((t3 << 2) + 0xC247030) + 0x0))) >= (int)0x2) {
                    t2 = t5;
                    t2 = (t2 << 2);
                    t2 = (t2 + (((int)stk + 4) + 0x4));
                    *(unsigned int *)((t2 + 0x0)) = t3;
                    t5 = (t5 + 0x1);
                }
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        if ((int)t4 > 0) {
            FUN_0c0da2e0();
            t36 = (*(int *)(((((*(int *)(((((int)stk + 4) + 0xC) + ((FUN_0c0e5f1c()) << 2)))) << 2) + 0xC246FF0) + 0x0)));
        } else {
            t28 = 0x0;
            if ((int)t5 > 0) {
                FUN_0c0da2e0();
                t28 = (*(int *)(((((*(int *)(((((int)stk + 4) + 0x4) + ((FUN_0c0e5f1c()) << 2)))) << 2) + 0xC246FF0) + 0x0)));
            }
            t36 = t28;
        }
        if (t36 == 0) {
        } else {
            u40 = *(float *)((t36 + 0x30));
            u43 = (u40 + -20.0f);
            if ((*(float *)((a4 + 0x58))) > (u40 + -20.0f)) {
                u43 = (*(float *)((a4 + 0x58)));
            }
            u45 = *(float *)((t36 + 0x30));
            u48 = (u45 + 20.0f);
            if ((u45 + 20.0f) > (*(float *)((a4 + 0x64)))) {
                u48 = (*(float *)((a4 + 0x64)));
            }
            u50 = *(float *)((t36 + 0x38));
            u53 = (u50 + -20.0f);
            if ((*(float *)((a4 + 0x60))) > (u50 + -20.0f)) {
                u53 = (*(float *)((a4 + 0x60)));
            }
            u55 = *(float *)((t36 + 0x38));
            *(float *)(((int)stk + 4)) = (u55 + 20.0f);
            if ((u55 + 20.0f) > (*(float *)((a4 + 0x6C)))) {
                *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x6C)));
            }
            FUN_0c0da2e0();
            u62 = u43;
            u62 = u62 + (u48 - u43) * ((float)(FUN_0c0e5f1c()) / 1000.0f);
            *(float *)(((int)stk + 24)) = u62;
            FUN_0c0da2e0();
            u66 = u53;
            u66 = u66 + ((*(float *)(((int)stk + 4))) - u53) * ((float)(FUN_0c0e5f1c()) / 1000.0f);
            *(float *)(((int)stk + 32)) = u66;
            FUN_0c0da2e0();
            u72 = (*(float *)((a4 + 0x5C)));
            u72 = u72 + ((*(float *)((a4 + 0x68))) - (*(float *)((a4 + 0x5C)))) * ((float)(FUN_0c0e5f1c()) / 1000.0f);
            *(float *)(((int)stk + 28)) = u72;
            *(unsigned short *)(((((int)stk + 4) + 0x20) + 0x0)) = (FUN_0c0da2e0());
            *(unsigned short *)(((((int)stk + 4) + 0x22) + 0x0)) = (FUN_0c0da2e0());
            *(unsigned short *)(((((int)stk + 4) + 0x24) + 0x0)) = (FUN_0c0da2e0());
            *(unsigned short *)(((int)stk + 42)) = (*(int *)((t1 + 0x0)));
            FUN_0c0da2e0();
            *(float *)(((int)stk + 56)) = ((float)((FUN_0c0e5f1c()) - 5) / 1000.0f);
            FUN_0c0da2e0();
            *(float *)(((int)stk + 60)) = ((float)((FUN_0c0e5f1c()) - 5) / 1000.0f);
            FUN_0c0da2e0();
            *(float *)(((int)stk + 64)) = ((float)((FUN_0c0e5f1c()) - 5) / 1000.0f);
            *(unsigned int *)(((int)stk + 68)) = (*(int *)((t1 + 0x4)));
            if ((*(int *)0xC23ED9C) != 4) {
                *(unsigned short *)(((int)stk + 76)) = 0x0;
            }
            FUN_0c070114((((int)stk + 4) + 0x14), 0x1);
            t88 = *(int *)((a4 + 0x70));
            *(unsigned int *)((a4 + 0x70)) = (t88 + 0x8);
            if ((*(int *)(((t88 + 0x8) + 0x4))) == 0) {
                *(unsigned int *)((a4 + 0x70)) = (*(int *)((a4 + 0x74)));
            }
        }
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFDFF);
    }
}

int kmiGetDisplayData(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t10;
    int t73;
    int t67;
    int t46;
    int t57;
    int t50;
    int t83;
    int t7;
    int t80;
    int t31;
    int t62;
    int stk[8];

    t0 = *(int *)0xC237514;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = (*(int *)0xC237510);
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t2 = *(int *)0xC23751C;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = (*(int *)0xC237518);
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t2;
    t4 = *(int *)0xC237524;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = (*(int *)0xC237520);
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t4;
    t10 = 0x280;
    if (((*(int *)0xC952318) != 1) && (t7 = *(int *)0xC95231C, (t7 & 16) == 0)) {
        t10 = 0x140;
    }
    if (a5 == 1) {
        *(unsigned int *)0xC9525C4 = ((((*(int *)0xC9525C4) & 0xFFA0FFFF) | (a5 << 22)) | ((((unsigned int)((unsigned int)((unsigned int)((a6 + 0x1F) & 0xFFFFFFE0) >> 2) >> 2) >> 1) & 0x1F) << 16));
        t80 = ((a6 + 0x1F) & 0xFFFFFFE0);
    } else {
        t73 = 0x1E0;
        if ((*(int *)0xC952318) == 1) {
        } else {
            t67 = 0xF0;
            if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t31 = *(int *)0xC95231C, (t31 & 0x2C) == 32) && (0x1 != 0))) {
            } else {
                if (((*(int *)0xC95231C) & 32) != 0) {
                    t46 = 0x1E0;
                    if (((*(int *)0xC95231C) & 0x42) == 66) {
                        t46 = (*(int *)((((*(int *)0xC95232C) << 2) + 0xC9527D4)));
                    }
                    t62 = t46;
                } else {
                    t57 = 0xF0;
                    if (((*(int *)0xC95231C) & 0x62) == 66) {
                        t50 = *(int *)((((*(int *)0xC95232C) << 2) + 0xC9527D4));
                        t57 = (((int)((unsigned int)((int)((unsigned int)t50 + (unsigned int)0x0)) + ((((int)0x0 > (int)t50)) ? 1u : 0u))) >> 1);
                    }
                    t62 = t57;
                }
                t67 = t62;
            }
            t73 = t67;
        }
        t80 = t73;
    }
    *(unsigned int *)0xC952934 = t10;
    *(unsigned int *)0xC952938 = t80;
    t83 = a4;
    if (a4 != 0xFF) {
    } else {
        t83 = (*(int *)0xC952320);
    }
    *(unsigned int *)0xC95293C = ((unsigned int)((unsigned int)(*(int *)((((int)stk + 4) + (t83 << 2)))) >> 2) >> 1);
    *(unsigned int *)0xC95294C = (((*(int *)0xC952934) * (*(int *)0xC952938)) * (*(int *)0xC95293C));
    return 0x60;
}

int FUN_0c039354(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t26;
    int t16;
    int stk[10];

    t1 = *(int *)((a4 + 0xC4));
    t2 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195AFC));
    t3 = (((int)stk + 4) + 0x4);
    for (;;) {
        *(unsigned int *)((t3 + 0x0)) = 0xFFFFFFFF;
        t3 = (t3 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)(((int)stk + 4) + 0x14)) {
            break;
        }
    }
    t4 = 0x1;
    t5 = 0x0;
    for (;;) {
        t8 = *(int *)(((((*(int *)(((0x580 + a4) + 0x0))) << 2) + (0x5D0 + a4)) + 0x0));
        if ((unsigned char)(*(signed char *)((t4 + ((((*(int *)((a4 + 0x580))) * 0x19) + (t2 + (t1 * 0x28A))) + ((t8 << 2) + t8))))) != 0) {
            *(unsigned int *)((((int)stk + 4) + (t5 << 2))) = t4;
            t5 = (t5 + 0x1);
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x5) {
            break;
        }
    }
    t26 = 0x0;
    if ((int)(t5 - 1) < 0) {
    } else {
        if ((int)(t5 - 1) >= (int)0x1) {
            FUN_0c0da2e0();
            t16 = (FUN_0c0e5f1c());
        } else {
            t16 = (t5 - 1);
        }
        *(unsigned int *)(((((*(int *)((a4 + 0x580))) << 2) + (0x5D0 + a4)) + 0x0)) = (*(int *)((((int)stk + 4) + (t16 << 2))));
        t26 = 0x1;
    }
    return t26;
}
