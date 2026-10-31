/* Straight-line functions with calls and guards (batch gen_hk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c098e1c(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c098f08(int a4, int a5, int a6, int a7);

int FUN_0c098f08(int a4, int a5, int a6, int a7)
{
    int stk[19];
    register int t0;
    register int t13;
    register int t18;
    register int t19;
    register float u24;
    register int t25;
    register int t27;
    register int t28;
    register float u29;
    register int t35;
    register int t37;
    register int t39;
    register int t45;
    register float u50;
    register float u53;
    register float u56;
    register int t60;
    register int t61;
    register int t66;
    register int t67;
    register int t73;
    register int t74;
    register int t79;
    register int t80;
    register int t86;
    register int t87;
    register int t92;
    register int t93;
    register int t98;
    register int t99;
    register int t105;
    register int t106;
    register int t111;
    register int t112;
    register int t133;
    register int t142;
    register int t135;
    register int t137;
    register int t161;
    register int t147;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((*(int *)((((*(int *)((a4 + 0x34))) << 2) + 0xC247030))) == 0) {
        t161 = (FUN_0c0e19f2());
    } else {
        if (((*(int *)((t0 + 0x2EC))) & 15) != 0) {
            *(unsigned int *)((a4 + 0x38)) = 0x1;
        }
        if ((*(int *)((a4 + 0x38))) != 0) {
            t147 = (FUN_0c0e19f2());
        } else {
            if ((int)(*(int *)((a4 + 0x3C))) < (int)0xE) {
            } else {
                t13 = *(int *)((a4 + 0x3C));
                nlPushMatrix(0x0);
                FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
                t18 = (a4 + 0x48);
                t19 = 0x0;
                for (;;) {
                    if ((int)t19 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t18, 0x0);
                    t18 = (t18 + 0xC);
                    t19 = (t19 + 0x1);
                }
                FUN_0c0db840((((int)stk + 4) + 0x4));
                *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 8)));
                *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = (*(float *)(((int)stk + 12)));
                u24 = *(float *)(((int)stk + 16));
                *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u24;
                t25 = ((~(((~(t13 - 14)) + 0x1) & 0x1F)) + 0x1);
                if ((int)(t13 - 14) >= 0) {
                    t25 = ((t13 - 14) & 0x1F);
                }
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t27 = 0xC09900C;
                t28 = ((((t25 << 2) + t25) * 0x1C) + (0x660 + a4));
                u29 = u24;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)0x5) {
                        break;
                    }
                    t27 = 0x10;
                    *(unsigned int *)((t28 + 0x18)) = 0x28;
                    u29 = (*(float *)((((int)stk + 4) + t27)));
                    t27 = 0x14;
                    *(float *)((t28 + 0x0)) = u29;
                    u29 = (*(float *)((((int)stk + 4) + t27)));
                    t27 = 0x4;
                    *(float *)((t28 + t27)) = u29;
                    t27 = 0x18;
                    u29 = (*(float *)((((int)stk + 4) + t27)));
                    t27 = 0x8;
                    *(float *)((t28 + t27)) = u29;
                    t27 = (FUN_0c0da2e0());
                    t27 = (t27 & 0x7FFF);
                    t35 = t27;
                    t27 = 0xC;
                    u29 = (float)t35;
                    u29 = (u29 * 0.5f);
                    u29 = (u29 / 32767.0f);
                    u29 = (u29 + -0.25f);
                    *(float *)((t28 + t27)) = u29;
                    t27 = (FUN_0c0da2e0());
                    t27 = (t27 & 0x7FFF);
                    t37 = t27;
                    t27 = 0x10;
                    u29 = (float)t37;
                    u29 = (u29 * 0.5f);
                    u29 = (u29 / 32767.0f);
                    u29 = (u29 + -0.25f);
                    *(float *)((t28 + t27)) = u29;
                    t27 = (FUN_0c0da2e0());
                    t27 = (t27 & 0x7FFF);
                    t39 = t27;
                    t27 = 0x14;
                    u29 = (float)t39;
                    u29 = (u29 * 0.5f);
                    u29 = (u29 / 32767.0f);
                    u29 = (u29 + -0.25f);
                    *(float *)((t28 + t27)) = u29;
                    t28 = (t28 + 0x1C);
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                }
                FUN_0c0db840((((int)stk + 4) + 0x4));
                *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 8)));
                *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 16)));
                t45 = FUN_0c0e5f1c();
                *(unsigned int *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0x0)) = 0x14;
                *(unsigned int *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0x10)) = ((-((FUN_0c0da2e0()) & 0x4000)) + 0xE000);
                *(float *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0x14)) = (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f) + 0.5f);
                u50 = (*(float *)(((int)stk + 20)));
                u50 = u50 + 4.0f * ((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f);
                *(float *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0x4)) = (u50 + -2.0f);
                u53 = (*(float *)(((int)stk + 24)));
                u53 = u53 + 4.0f * ((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f);
                *(float *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0x8)) = (u53 + -2.0f);
                u56 = (*(float *)(((int)stk + 28)));
                u56 = u56 + 4.0f * ((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f);
                *(float *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0xC)) = (u56 + -2.0f);
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0xC0));
                t60 = 0x0;
                t61 = (a4 + 0x6C);
                for (;;) {
                    if ((int)t60 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t61, 0x1);
                    t61 = (t61 + 0xC);
                    t60 = (t60 + 0x1);
                }
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x100));
                t66 = 0x0;
                t67 = ((a4 + 0x48) + 0x48);
                for (;;) {
                    if ((int)t66 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t67, 0x2);
                    t67 = (t67 + 0xC);
                    t66 = (t66 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), (0x1B0 + a4), 0x3, 0xA);
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x180));
                t73 = 0x0;
                t74 = ((a4 + 0x48) + 0x6C);
                for (;;) {
                    if ((int)t73 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t74, 0x3);
                    t74 = (t74 + 0xC);
                    t73 = (t73 + 0x1);
                }
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x1C0));
                t79 = 0x0;
                t80 = ((a4 + 0x48) + 0x90);
                for (;;) {
                    if ((int)t79 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t80, 0x4);
                    t80 = (t80 + 0xC);
                    t79 = (t79 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), ((0x1B0 + a4) + 0xF0), 0x3, 0xA);
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x240));
                t86 = ((a4 + 0x48) + 0x144);
                t87 = 0x0;
                for (;;) {
                    if ((int)t87 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t86, 0x9);
                    t86 = (t86 + 0xC);
                    t87 = (t87 + 0x1);
                }
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x280));
                t92 = 0x0;
                t93 = ((a4 + 0x48) + 0xB4);
                for (;;) {
                    if ((int)t92 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t93, 0x5);
                    t93 = (t93 + 0xC);
                    t92 = (t92 + 0x1);
                }
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x2C0));
                t98 = 0x0;
                t99 = ((a4 + 0x48) + 0xD8);
                for (;;) {
                    if ((int)t98 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t99, 0x6);
                    t99 = (t99 + 0xC);
                    t98 = (t98 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), ((0x1B0 + a4) + 0x1E0), 0x3, 0xA);
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x340));
                t105 = 0x0;
                t106 = ((a4 + 0x48) + 0xFC);
                for (;;) {
                    if ((int)t105 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t106, 0x7);
                    t106 = (t106 + 0xC);
                    t105 = (t105 + 0x1);
                }
                FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x380));
                t111 = 0x0;
                t112 = ((a4 + 0x48) + 0x120);
                for (;;) {
                    if ((int)t111 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t112, 0x8);
                    t112 = (t112 + 0xC);
                    t111 = (t111 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), ((0x1B0 + a4) + 0x2D0), 0x3, 0xA);
                nlPopMatrix(0x1);
            }
            FUN_0c096094((0x660 + a4), 0xA0);
            FUN_0c084800(0.899999976f, 0.899999976f, 1.0f);
            FUN_0c095fa0((0x570 + a4), 0xA);
            FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            t133 = *(int *)((a4 + 0x40));
            *(unsigned int *)((a4 + 0x40)) = (t133 - 1);
            t142 = 0x40;
            if ((int)(t133 - 1) < 0) {
                *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x44)));
                t135 = *(int *)((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = (t135 + 0x1);
                t137 = 0x40;
                if ((int)(t135 + 0x1) > (int)0xC8) {
                    t137 = (FUN_0c0e19f2());
                }
                t142 = t137;
            }
            t147 = t142;
        }
        t161 = t147;
    }
    return t161;
}
