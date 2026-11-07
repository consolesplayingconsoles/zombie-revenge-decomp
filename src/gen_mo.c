/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c084800(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0961f8(int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c097720(int, int, int, int);
int FUN_0c0a155c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e5f1c(void);
int FUN_0c0e5fe4(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0a163c(int a4, int a5, int a6, int a7);

int FUN_0c0a163c(int a4, int a5, int a6, int a7)
{
    int stk[22];
    register int t0;
    register int t17;
    register int t20;
    register int t21;
    register int t23;
    register int t30;
    register int t33;
    register float u37;
    register int t38;
    register int t41;
    int t43;
    register float u44;
    register int t55;
    register int t57;
    register int t59;
    register int t61;
    register int t63;
    register int t65;
    register int t68;
    register int t73;
    register int t76;
    register int t78;
    register int t80;
    register float u83;
    register int t84;
    register float u87;
    register int t88;
    register float u91;
    register int t123;
    register int t124;
    register int t126;
    register int t132;
    register int t133;
    register int t135;
    register int t147;
    register int t148;
    register int t150;
    register int t156;
    register int t157;
    register int t159;
    register int t171;
    register int t172;
    register int t174;
    register int t180;
    register int t181;
    register int t183;
    register int t189;
    register int t190;
    register int t192;
    register int t204;
    register int t205;
    register int t207;
    register int t214;
    register int t215;
    register int t216;
    register float u256;
    register int t266;
    register int t267;
    register int t276;
    register int t269;
    register int t271;
    int t2;
    register int t294;
    register int t281;
    register int t22;
    register int t42;
    register int t125;
    register int t134;
    register int t149;
    register int t158;
    register int t173;
    register int t182;
    register int t191;
    register int t206;
    register float u260;
    register float u261;
    register float u262;

    t0 = *(int *)((a4 + 0x30));
    if ((((*(int *)((t0 + 0xC8))) & 0x1) == 0) && (t2 = *(int *)((t0 + 0x2EC)), (t2 & 15) != 0)) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    if ((*(int *)((((*(int *)((t0 + 0xBC))) << 2) + 0xC247030))) == 0) {
        *(unsigned int *)((t0 + 0x384)) = 0x0;
        t294 = (((int (*)(int, int, int, int))(FUN_0c0e19f2))(0x1, a5, a6, a7));
    } else {
        if (((*(int *)0xC23ED5C) & 6) != 0) {
            *(unsigned int *)((t0 + 0x384)) = 0x0;
            t281 = (((int (*)(int, int, int, int))(FUN_0c0e19f2))(0x1, a5, a6, a7));
        } else {
            if ((*(int *)((a4 + 0x34))) != 0) {
            } else {
                if ((int)(*(int *)((a4 + 0x38))) < 0) {
                } else {
                    t17 = *(int *)((a4 + 0x38));
                    nlPushMatrix(0x0);
                    t20 = FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t21 = t20;
                    t23 = (a4 + 0x48);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t21 = 0x44;
                        t21 = (FUN_0c0a155c(t17, t23, 0x0, (*(int *)((a4 + t21))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t22 = (*(int *)(((int)stk + 8)));
                        t23 = (t23 + 0xC);
                        t22 = (t22 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t22;
                    }
                    FUN_0c0da2e0();
                    t30 = *(signed char *)((0xC10CE9A + (FUN_0c0e5fe4())));
                    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + ((((unsigned char)t30 << 2) << 2) << 2)));
                    t33 = *(int *)((a4 + 0x38));
                    if ((int)t33 >= 0) {
                        if ((int)t33 <= (int)0x24) {
                            FUN_0c0db840((((int)stk + 8) + 0x8));
                            *(float *)(((((int)stk + 8) + 0x14) + 0x0)) = (*(float *)(((int)stk + 16)));
                            *(float *)(((((int)stk + 8) + 0x18) + 0x0)) = (*(float *)(((int)stk + 20)));
                            u37 = *(float *)(((int)stk + 24));
                            *(float *)(((((int)stk + 8) + 0x1C) + 0x0)) = u37;
                            t38 = ((~(((~t17) + 0x1) & 0xF)) + 0x1);
                            if ((int)t17 >= 0) {
                                t38 = (t17 & 0xF);
                            }
                            *(unsigned int *)(((int)stk + 8)) = (((t38 << 1) * 0x1C) + (0x368 + a4));
                            *(unsigned int *)(((int)stk + 12)) = 0x0;
                            t41 = 0xC0A179C;
                            t43 = 0x1C;
                            u44 = u37;
                            for (;;) {
                                if ((int)(*(int *)(((int)stk + 12))) >= (int)0x2) {
                                    break;
                                }
                                t43 = (*(int *)(((int)stk + 8)));
                                t41 = 0x14;
                                *(unsigned int *)((t43 + 0x18)) = 0x28;
                                t42 = 0xC;
                                u44 = (*(float *)((((int)stk + 8) + t41)));
                                t41 = 0x18;
                                t43 = (*(int *)(((int)stk + 8)));
                                *(float *)((t43 + 0x0)) = u44;
                                u44 = (*(float *)((((int)stk + 8) + t41)));
                                t41 = 0x4;
                                *(float *)(((*(int *)(((int)stk + 8))) + t41)) = u44;
                                t41 = 0x1C;
                                u44 = (*(float *)((((int)stk + 8) + t41)));
                                t41 = 0x8;
                                *(float *)(((*(int *)(((int)stk + 8))) + t41)) = u44;
                                t42 = (t42 + (*(int *)(((int)stk + 8))));
                                t55 = t42;
                                *(int *)((int)stk + 4) = t55;
                                t41 = (FUN_0c0da2e0());
                                t43 = 0x7FFF;
                                t42 = 0x10;
                                t41 = (t41 & t43);
                                t57 = t41;
                                t41 = t55;
                                u44 = (float)t57;
                                u44 = (u44 * 0.5f);
                                u44 = (u44 / 32767.0f);
                                u44 = (u44 + -0.25f);
                                *(float *)((t41 + 0x0)) = u44;
                                t42 = (t42 + (*(int *)(((int)stk + 8))));
                                t59 = t42;
                                *(int *)((int)stk + 4) = t59;
                                t41 = (FUN_0c0da2e0());
                                t43 = 0x7FFF;
                                t42 = 0x14;
                                t41 = (t41 & t43);
                                t61 = t41;
                                t41 = t59;
                                u44 = (float)t61;
                                u44 = (u44 * 0.5f);
                                u44 = (u44 / 32767.0f);
                                u44 = (u44 + -0.25f);
                                *(float *)((t41 + 0x0)) = u44;
                                t42 = (t42 + (*(int *)(((int)stk + 8))));
                                t63 = t42;
                                *(int *)((int)stk + 4) = t63;
                                t41 = (FUN_0c0da2e0());
                                t43 = 0x7FFF;
                                t41 = (t41 & t43);
                                t65 = t41;
                                t41 = t63;
                                u44 = (float)t65;
                                u44 = (u44 * 0.5f);
                                u44 = (u44 / 32767.0f);
                                u44 = (u44 + -0.25f);
                                *(float *)((t41 + 0x0)) = u44;
                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                                t42 = (*(int *)(((int)stk + 8)));
                                t42 = (t42 + 0x1C);
                                *(unsigned int *)(((int)stk + 8)) = t42;
                            }
                            t68 = *(int *)((a4 + 0x38));
                            if (((int)t68 >= 0) && ((int)t68 <= (int)0x24)) {
                                FUN_0c0db840((((int)stk + 8) + 0x8));
                                *(float *)(((((int)stk + 8) + 0x14) + 0x0)) = (*(float *)(((int)stk + 16)));
                                *(float *)(((((int)stk + 8) + 0x18) + 0x0)) = (*(float *)(((int)stk + 20)));
                                *(float *)(((((int)stk + 8) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 24)));
                                t73 = FUN_0c0e5f1c();
                                *(unsigned int *)(((int)stk + 8)) = (((((t73 << 1) + t73) << 2) << 1) + (0x278 + a4));
                                *(unsigned int *)(((((((t73 << 1) + t73) << 2) << 1) + (0x278 + a4)) + 0x0)) = 0x14;
                                t76 = *(int *)(((int)stk + 8));
                                *(int *)((int)stk + 4) = (0x10 + t76);
                                *(unsigned int *)(((0x10 + t76) + 0x0)) = ((-((FUN_0c0da2e0()) & 0x4000)) + 0xE000);
                                t78 = *(int *)(((int)stk + 8));
                                *(int *)((int)stk + 4) = (0x14 + t78);
                                *(float *)(((0x14 + t78) + 0x0)) = (((float)(unsigned char)(FUN_0c0da2e0()) / 512.0f) + 0.25f);
                                t80 = *(int *)(((int)stk + 8));
                                *(int *)((int)stk + 4) = (0x4 + t80);
                                u83 = (*(float *)(((int)stk + 28)));
                                u83 = u83 + 4.0f * ((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f);
                                *(float *)(((0x4 + t80) + 0x0)) = (u83 + -2.0f);
                                t84 = *(int *)(((int)stk + 8));
                                *(int *)((int)stk + 4) = (0x8 + t84);
                                u87 = (*(float *)(((int)stk + 32)));
                                u87 = u87 + 4.0f * ((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f);
                                *(float *)(((0x8 + t84) + 0x0)) = (u87 + -2.0f);
                                t88 = *(int *)(((int)stk + 8));
                                *(int *)((int)stk + 4) = (0xC + t88);
                                u91 = (*(float *)(((int)stk + 36)));
                                u91 = u91 + 4.0f * ((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f);
                                *(float *)(((0xC + t88) + 0x0)) = (u91 + -2.0f);
                            }
                        }
                    }
                    t123 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0xC0));
                    *(unsigned int *)(((int)stk + 8)) = (a4 + 0x60);
                    t124 = t123;
                    t126 = 0x0;
                    for (;;) {
                        if ((int)t126 >= (int)0x2) {
                            break;
                        }
                        t124 = 0x44;
                        t124 = (FUN_0c0a155c(t17, (*(int *)(((int)stk + 8))), 0x1, (*(int *)((a4 + t124))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t125 = (*(int *)(((int)stk + 8)));
                        t126 = (t126 + 0x1);
                        t125 = (t125 + 0xC);
                        *(unsigned int *)(((int)stk + 8)) = t125;
                    }
                    t132 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x100));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t133 = t132;
                    t135 = (a4 + 0x78);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t133 = 0x44;
                        t133 = (FUN_0c0a155c(t17, t135, 0x2, (*(int *)((a4 + t133))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t134 = (*(int *)(((int)stk + 8)));
                        t135 = (t135 + 0xC);
                        t134 = (t134 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t134;
                    }
                    if ((*(int *)((a4 + 0x44))) != 0) {
                        FUN_0c0975d0(t17, (0x138 + a4), 0x1, 0x24);
                    } else {
                        FUN_0c097720(t17, (0x138 + a4), 0x1, 0x24);
                    }
                    t147 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x180));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t148 = t147;
                    t150 = ((a4 + 0x48) + 0x48);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t148 = 0x44;
                        t148 = (FUN_0c0a155c(t17, t150, 0x3, (*(int *)((a4 + t148))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t149 = (*(int *)(((int)stk + 8)));
                        t150 = (t150 + 0xC);
                        t149 = (t149 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t149;
                    }
                    t156 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x1C0));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t157 = t156;
                    t159 = ((a4 + 0x48) + 0x60);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t157 = 0x44;
                        t157 = (FUN_0c0a155c(t17, t159, 0x4, (*(int *)((a4 + t157))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t158 = (*(int *)(((int)stk + 8)));
                        t159 = (t159 + 0xC);
                        t158 = (t158 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t158;
                    }
                    if ((*(int *)((a4 + 0x44))) != 0) {
                        FUN_0c0975d0(t17, ((0x138 + a4) + 0x50), 0x1, 0x24);
                    } else {
                        FUN_0c097720(t17, ((0x138 + a4) + 0x50), 0x1, 0x24);
                    }
                    t171 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x240));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t172 = t171;
                    t174 = ((a4 + 0x48) + 0xD8);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t172 = 0x44;
                        t172 = (FUN_0c0a155c(t17, t174, 0x9, (*(int *)((a4 + t172))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t173 = (*(int *)(((int)stk + 8)));
                        t174 = (t174 + 0xC);
                        t173 = (t173 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t173;
                    }
                    t180 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x280));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t181 = t180;
                    t183 = ((a4 + 0x48) + 0x78);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t181 = 0x44;
                        t181 = (FUN_0c0a155c(t17, t183, 0x5, (*(int *)((a4 + t181))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t182 = (*(int *)(((int)stk + 8)));
                        t183 = (t183 + 0xC);
                        t182 = (t182 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t182;
                    }
                    t189 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x2C0));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t190 = t189;
                    t192 = ((a4 + 0x48) + 0x90);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t190 = 0x44;
                        t190 = (FUN_0c0a155c(t17, t192, 0x6, (*(int *)((a4 + t190))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t191 = (*(int *)(((int)stk + 8)));
                        t192 = (t192 + 0xC);
                        t191 = (t191 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t191;
                    }
                    if ((*(int *)((a4 + 0x44))) != 0) {
                        FUN_0c0975d0(t17, ((0x138 + a4) + 0xA0), 0x1, 0x24);
                    } else {
                        FUN_0c097720(t17, ((0x138 + a4) + 0xA0), 0x1, 0x24);
                    }
                    t204 = FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x340));
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t205 = t204;
                    t207 = ((a4 + 0x48) + 0xA8);
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
                            break;
                        }
                        t205 = 0x44;
                        t205 = (FUN_0c0a155c(t17, t207, 0x7, (*(int *)((a4 + t205))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t206 = (*(int *)(((int)stk + 8)));
                        t207 = (t207 + 0xC);
                        t206 = (t206 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t206;
                    }
                    t214 = (FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x380)));
                    t215 = ((a4 + 0x48) + 0xC0);
                    t216 = 0x0;
                    for (;;) {
                        if ((int)t216 >= (int)0x2) {
                            break;
                        }
                        t214 = 0x44;
                        t214 = (FUN_0c0a155c(t17, t215, 0x8, (*(int *)((a4 + t214))), *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        t215 = (t215 + 0xC);
                        t216 = (t216 + 0x1);
                    }
                    if ((*(int *)((a4 + 0x44))) != 0) {
                        FUN_0c0975d0(t17, ((0x138 + a4) + 0xF0), 0x1, 0x24);
                    } else {
                        FUN_0c097720(t17, ((0x138 + a4) + 0xF0), 0x1, 0x24);
                    }
                    nlPopMatrix(0x1);
                }
            }
            if ((*(int *)((a4 + 0x44))) != 0) {
                FUN_0c096094((0x368 + a4), 0x20);
            } else {
                FUN_0c0961f8((0x368 + a4), 0x20);
            }
            if ((*(int *)((a4 + 0x44))) != 0) {
                u256 = *(float *)0xC0A1CC0;
                u260 = u256;
                u261 = u256;
                u262 = 1.0f;
            } else {
                u260 = 1.0f;
                u261 = (*(float *)0xC0A1CC4);
                u262 = 0.5f;
            }
            FUN_0c084800(u260, u261, u262);
            FUN_0c095fa0((0x278 + a4), 0xA);
            t266 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
            t267 = *(int *)((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x3C)) = (t267 - 1);
            t276 = t266;
            if ((int)(t267 - 1) < 0) {
                *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
                t269 = *(int *)((a4 + 0x38));
                *(unsigned int *)((a4 + 0x38)) = (t269 + 0x1);
                t271 = 0x40;
                if ((int)(t269 + 0x1) > (int)0x64) {
                    *(unsigned int *)((t0 + 0x384)) = 0x0;
                    t271 = (((int (*)(void))(FUN_0c0e19f2))());
                }
                t276 = t271;
            }
            t281 = t276;
        }
        t294 = t281;
    }
    return t294;
}
