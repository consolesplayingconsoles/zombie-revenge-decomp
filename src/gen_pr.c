/* Straight-line functions with calls and guards (batch gen_pr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d636(int, int, int);
int FUN_0c01d8de(int, int, int, int, int, int);
int FUN_0c01d9c2(int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c07b70e(int a4);

int FUN_0c07b70e(int a4)
{
    int stk[2];
    register int t14;
    register int t15;
    register int t16;
    register float u20;
    register int t41;
    register float u62;
    register float u67;
    register float u72;
    register int t73;
    register int t76;
    register int t106;
    register int t107;
    register float u110;
    register int t114;
    register int t139;
    register int t143;
    register int t147;
    register int t7;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        if ((*(int *)((a4 + 0x238))) != 0) {
            FUN_0c01d9c2(a4);
        } else {
            t7 = a4;
        }
        FUN_0c0e19f2(t7);
    }
    t14 = *(int *)((a4 + 0x220));
    if (t14 != 0) {
        if (t14 != 1) {
            if (t14 == 2) {
                t15 = *(int *)((a4 + 0x22C));
                t16 = *(int *)(((0x234 + a4) + 0x0));
                *(unsigned int *)((a4 + 0x22C)) = (t15 + t16);
                u20 = (*(float *)((a4 + 0x64)));
                u20 = u20 + ((1.0f + 1.0f)) * (FUN_0c0da410((t15 + t16)));
                *(float *)((a4 + 0x34)) = u20;
                if ((*(int *)((a4 + 0x238))) != 0) {
                    FUN_0c01d8de(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                }
                if (((*(int *)0xC23ED88) & (*(int *)((a4 + 0x21C)))) != 0) {
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x228)));
                    if ((*(int *)((a4 + 0x238))) != 0) {
                        *(unsigned int *)((a4 + 0x238)) = ((*(int *)((a4 + 0x238))) ^ 0x1);
                        FUN_0c01d9c2(a4);
                    }
                    t41 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((((t41 << 1) + t41) << 2) + (*(int *)(((int)stk + 4))))); }
                    *(unsigned int *)((a4 + 0x230)) = 0x3C;
                    *(unsigned int *)((a4 + 0x220)) = 0x1;
                }
            }
        } else {
            u62 = (*(float *)((a4 + 0x30)));
            u62 = u62 + 0.099999994f * (((*(float *)(((0x60 + a4) + 0x0))) - (*(float *)(((0x30 + a4) + 0x0)))));
            *(float *)((a4 + 0x30)) = u62;
            u67 = (*(float *)((a4 + 0x34)));
            u67 = u67 + 0.099999994f * (((*(float *)(((0x64 + a4) + 0x0))) - (*(float *)(((0x34 + a4) + 0x0)))));
            *(float *)((a4 + 0x34)) = u67;
            u72 = (*(float *)((a4 + 0x38)));
            u72 = u72 + 0.099999994f * (((*(float *)(((0x68 + a4) + 0x0))) - (*(float *)(((0x38 + a4) + 0x0)))));
            *(float *)((a4 + 0x38)) = u72;
            t73 = *(int *)((a4 + 0x230));
            *(unsigned int *)((a4 + 0x230)) = (t73 - 1);
            if ((int)(t73 - 1) <= 0) {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & (~(*(int *)((a4 + 0x21C)))));
                t76 = *(int *)((a4 + 0x238));
                *(unsigned int *)((a4 + 0x238)) = (t76 ^ 0x1);
                if ((t76 ^ 0x1) != 0) {
                    FUN_0c01d636(a4, 0xC19723C, 0x0);
                }
                *(unsigned int *)((a4 + 0x22C)) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((a4 + 0x60)); }
                *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
            }
        }
    } else {
        t106 = *(int *)((a4 + 0x22C));
        t107 = *(int *)(((0x234 + a4) + 0x0));
        *(unsigned int *)((a4 + 0x22C)) = (t106 + t107);
        u110 = (*(float *)((a4 + 0x64)));
        u110 = u110 + 16.0f * (FUN_0c0da410((t106 + t107)));
        *(float *)((a4 + 0x34)) = u110;
        if (((*(int *)0xC23ED88) & (*(int *)((a4 + 0x21C)))) == 0) {
        } else {
            t114 = *(int *)((a4 + 0xBC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((((t114 << 1) + t114) << 2) + (*(int *)((a4 + 0x228))))); }
            *(unsigned int *)((a4 + 0x230)) = 0x3C;
            *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007D8));
    t139 = *(int *)((a4 + 0x1D8));
    *(unsigned int *)((a4 + 0x1D8)) = (t139 + 0x200);
    nlRotateAY((t139 + 0x200));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DA));
    t143 = *(int *)((a4 + 0x1DC));
    *(unsigned int *)((a4 + 0x1DC)) = (t143 - 0x480);
    nlRotateAY((t143 - 0x480));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DC));
    t147 = *(int *)((a4 + 0x1E0));
    *(unsigned int *)((a4 + 0x1E0)) = (t147 + 0x400);
    nlRotateAY((t147 + 0x400));
    FUN_0c0c465c((unsigned short)(*(short *)0xC2007DE));
    return nlPopMatrix(0x1);
}
