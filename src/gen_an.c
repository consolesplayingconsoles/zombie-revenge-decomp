/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c40(int);
int FUN_0c010c84(void);
int FUN_0c014fae(int, float);
int FUN_0c01cdc2(void);
int FUN_0c02280e(int);
int FUN_0c022838(int);
int FUN_0c0278d0(int, int);
int FUN_0c02a19a(int);
int FUN_0c02a416(int);
int FUN_0c032394(int);
int FUN_0c03242c(int, float, float);
int FUN_0c0328e4(int);
int FUN_0c034134(int, float);
int FUN_0c0341a6(int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034b36(int, int);
int FUN_0c034b64(int, int);
int FUN_0c034b88(int, int);
int FUN_0c034d0c(int);
int FUN_0c0352b4(int, int, int);
int FUN_0c05b274(int, int, int, int, int, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0853d4(int, float);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a4bb2(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0bfa46(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c3748(void);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0dccf0(void);
int nlAddVector(int, int);
int FUN_0c0de000(float);
int FUN_0c0dfd50(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int _quick_odd_mvn(void);
int FUN_0c05b6fc(int a4, int a5, int a6);
int FUN_0c09d6fe(int a4, int a5, int a6, int a7);
int FUN_0c0c3a3e(int a4);
int FUN_0c027d08(int a4);
int FUN_0c087510(int a4);
int FUN_0c015070(void);
int FUN_0c0316d4(int a4, int a5);
int FUN_0c0635ec(int a4, int a5);


int FUN_0c09d6fe(int a4, int a5, int a6, int a7)
{
    int t169;
    float u5;
    float u10;
    float u6;
    float u7;
    int t12;
    int t13;
    int t14;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    float u29;
    float u30;
    int t31;
    int t32;
    int t45;
    int t58;
    int t85;
    int t86;
    int t87;
    int t89;
    float u94;
    float u110;
    float u111;
    float u132;
    float u135;
    float u151;
    float u153;
    float u157;
    float u160;
    int t2;
    float u9;
    float u82;
    int t51;
    int t52;
    int t53;
    int t54;
    float u55;
    float u56;
    int t88;
    float u90;
    float u91;
    float u92;
    float u93;
    int stk[18];

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    t169 = 0x0;
    if ((a7 == 0) && (t2 = *(int *)((a5 + 0x4)), (t2 & 128) != 0)) {
    } else {
        u5 = *(float *)((a4 + 0x4));
        u10 = u5;
        if (1.0f > u5) {
            u6 = *(float *)((a4 + 0x4));
            u7 = *(float *)(((0x24 + a5) + 0x0));
            *(float *)((a4 + 0x4)) = (u6 + u7);
            u9 = (u6 + u7);
            u10 = u7;
        }
        t12 = *(int *)((a4 + 0xC));
        *(unsigned int *)((a4 + 0xC)) = (t12 - 1);
        if (((int)(t12 - 1) <= 0) && (a7 != 0)) {
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            t13 = *(int *)((a5 + 0x4));
            if ((t13 & 32) != 0) {
                t14 = *(int *)((a4 + 0xC));
                *(unsigned int *)(((int)stk + 4)) = ((-t14) + 0x1);
                if ((int)((-t14) + 0x1) > (int)(*(int *)((a5 + 0x38)))) {
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a5 + 0x38)));
                }
            }
            if ((int)(*(int *)(((int)stk + 4))) > 0) {
                t24 = t13;
                t25 = a4;
                t26 = a5;
                t27 = a6;
                t28 = a7;
                u29 = u9;
                u30 = u10;
                for (;;) {
                    t31 = *(int *)((a4 + 0x10));
                    t32 = *(int *)((a4 + 0x14));
                    if ((*(int *)((((t31 * 0x1C) + t32) + 0x10))) == 0) {
                        t24 = 0xC;
                        *(unsigned int *)((((t31 * 0x1C) + t32) + 0x10)) = (*(int *)((a5 + 0x0)));
                        *(float *)((((t31 * 0x1C) + t32) + t24)) = 0.0f;
                        t25 = 0x0;
                        t24 = (nlPushMatrix(t25));
                        t24 = (nlUnitMatrix());
                        t24 = (FUN_0c0da2e0());
                        t25 = t24;
                        t25 = (t25 << 1);
                        t24 = (nlRotateAZ(t25));
                        t24 = (FUN_0c0da2e0());
                        t25 = t24;
                        t25 = (t25 << 1);
                        t24 = (nlRotateAY(t25));
                        t24 = 0x30;
                        u30 = (*(float *)((a5 + t24)));
                        t26 = ((t31 * 0x1C) + t32);
                        *(float *)0xC249724 = u30;
                        t25 = 0xC249724;
                        t24 = (FUN_0c0db470(t25, t26));
                        t26 = a6;
                        t25 = ((t31 * 0x1C) + t32);
                        t24 = (nlAddVector(t25, t26));
                        t25 = 0x1;
                        t24 = (nlPopMatrix(t25));
                        t45 = *(int *)((a4 + 0x10));
                        *(unsigned int *)((a4 + 0x10)) = (t45 + 0x1);
                        if ((int)(t45 + 0x1) >= (int)(*(int *)((a5 + 0x34)))) {
                            *(unsigned int *)((a4 + 0x10)) = 0x0;
                        }
                    } else {
                        t51 = t25;
                        t52 = t26;
                        t53 = t27;
                        t54 = t28;
                        u55 = u29;
                        u56 = u30;
                    }
                    t58 = *(int *)(((int)stk + 4));
                    u29 = u55;
                    u30 = u56;
                    t25 = t51;
                    t26 = t52;
                    t27 = t53;
                    t28 = t54;
                    *(unsigned int *)(((int)stk + 4)) = (t58 - 1);
                    if ((int)(t58 - 1) <= 0) {
                        break;
                    }
                }
            }
            *(unsigned int *)((a4 + 0xC)) = (int)(*(float *)((a4 + 0x8)));
            *(float *)((a4 + 0x8)) = ((*(float *)((a4 + 0x8))) - (*(float *)(((0x28 + a5) + 0x0))));
            u82 = 0.0f;
        }
        t85 = *(int *)((a4 + 0x14));
        t86 = nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        t87 = t86;
        t89 = t85;
        u94 = u82;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 12))) < (int)(*(int *)((a5 + 0x34)))) {
                if ((*(int *)((t89 + 0x10))) == 0) {
                } else {
                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                    t87 = (*(int *)((a5 + 0x4)));
                    if ((t87 & 16) != 0) {
                        t87 = 0xC09D918;
                        u91 = (*(float *)((t87 + 0x0)));
                        t87 = 0xC;
                        u90 = (*(float *)((t89 + t87)));
                        u90 = (u90 * u91);
                        u94 = (-(FUN_0c0d9e90((int)u90)));
                        u94 = (u94 + 1.0f);
                    } else {
                        t87 = 0xC09D918;
                        u91 = (*(float *)((t87 + 0x0)));
                        t87 = 0xC;
                        u90 = (*(float *)((t89 + t87)));
                        u90 = (u90 * u91);
                        u94 = (FUN_0c0da410((int)u90));
                    }
                    t87 = 0xC;
                    u92 = 1.0f;
                    u91 = (*(float *)((a5 + t87)));
                    u92 = (u92 - u94);
                    t87 = 0x10;
                    u90 = (*(float *)((a4 + 0x0)));
                    u110 = *(float *)((a5 + t87));
                    t87 = 0x4;
                    u111 = u91;
                    u111 = u111 + u110 * u92;
                    u91 = u111;
                    u93 = u91;
                    u93 = (u93 * u90);
                    u91 = (*(float *)((a4 + t87)));
                    u90 = u94;
                    u90 = (u90 * u91);
                    if (((*(int *)0xC23A258) & 0x1) != 0) {
                        u91 = 1.0f;
                    } else {
                        t87 = 0xC09D928;
                        u91 = (*(float *)((t87 + 0x0)));
                    }
                    u90 = (u90 * u91);
                    t87 = 0xC09D92C;
                    u91 = (*(float *)((t87 + 0x0)));
                    t87 = 0x4;
                    u90 = (u90 * u91);
                    *(float *)((((int)stk + 4) + t87)) = u90;
                    t87 = (nlUnitMatrix());
                    t87 = (FUN_0c0dcca0(a6));
                    t87 = (*(int *)((a5 + 0x4)));
                    if ((t87 & 64) != 0) {
                        t87 = 0x4;
                        u91 = (float)(*(int *)((a5 + 0x8)));
                        u90 = u91;
                        u90 = (u90 * u94);
                        u91 = (*(float *)((a4 + t87)));
                        u90 = (u90 * u91);
                        t87 = (nlRotateAZ((int)u90));
                    } else {
                        t87 = 0x4;
                        u91 = (float)(*(int *)((a5 + 0x8)));
                        u90 = u91;
                        u90 = (u90 * u94);
                        u91 = (*(float *)((a4 + t87)));
                        u90 = (u90 * u91);
                        t87 = (nlRotateAY((int)u90));
                    }
                    t87 = 0x8;
                    u90 = (*(float *)((t89 + t87)));
                    u91 = (*(float *)((a6 + t87)));
                    t87 = 0x4;
                    u90 = (u90 - u91);
                    u91 = (*(float *)((a6 + t87)));
                    u132 = (u90 * u92);
                    u90 = (*(float *)((t89 + t87)));
                    u90 = (u90 - u91);
                    u91 = (*(float *)((a6 + 0x0)));
                    u135 = (u90 * u92);
                    u90 = (*(float *)((t89 + 0x0)));
                    u90 = (u90 - u91);
                    t87 = (FUN_0c0dcc70((u90 * u92), u135, u132));
                    t87 = (FUN_0c0dccf0());
                    t87 = 0x3CE;
                    t87 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 16))) + t87)))));
                    t87 = 0x3CC;
                    t87 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 16))) + t87)))));
                    t87 = (nlRotateAZ((*(int *)((t89 + 0x18)))));
                    t87 = (nlScale(u93, u93, u93));
                    t87 = (FUN_0c0de000(u93));
                    t87 = 0x4;
                    u94 = (*(float *)((((int)stk + 4) + t87)));
                    t87 = 0x8;
                    *(unsigned int *)(((int)stk + 4)) = (a5 + 0x14);
                    u91 = (*(float *)(((a5 + 0x14) + t87)));
                    t87 = 0x4;
                    u151 = (u94 * u91);
                    u91 = (*(float *)(((a5 + 0x14) + t87)));
                    u153 = (u94 * u91);
                    u91 = (*(float *)(((a5 + 0x14) + 0x0)));
                    t87 = (FUN_0c0848bc((u94 * u91), u153, u151));
                    t87 = (FUN_0c0c47ae((*(int *)((t89 + 0x10)))));
                    t88 = 0x4;
                    t88 = (t88 + a4);
                    u157 = *(float *)((t88 + 0x0));
                    t88 = 0x20;
                    t88 = (t88 + a5);
                    t87 = 0xC;
                    u91 = (*(float *)((t88 + 0x0)));
                    u90 = (*(float *)((t89 + t87)));
                    u160 = u90;
                    u160 = u160 + u157 * u91;
                    u90 = u160;
                    u91 = u90;
                    *(float *)((t89 + t87)) = u90;
                    if (u91 > 1.0f) {
                        *(unsigned int *)((t89 + 0x10)) = 0x0;
                    }
                }
                t89 = (t89 + 0x1C);
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                continue;
            }
            break;
        }
        nlPopMatrix(0x1);
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        t169 = (*(int *)(((int)stk + 20)));
    }
    return t169;
}

int FUN_0c0c3a3e(int a4)
{
    int t30;
    int t40;
    int t51;
    int t54;
    int t55;
    int t57;
    int t73;
    int t102;
    int t106;
    int t113;
    int t122;
    int t129;
    int t136;
    int t143;
    int t152;
    int t159;
    int t165;
    int t172;
    int t179;
    int t186;
    int t230;
    int t232;
    int t234;
    int t236;
    int t238;
    int t240;
    int t243;
    int t245;
    int t8;
    int t16;
    int t17;
    int t28;
    int t29;
    int t31;
    int stk[7];

    if ((int)(*(int *)(((*(int *)0xC262390) + 0x40))) < (int)0x206B) {
        t8 = (*(int *)0xC191314);
    } else {
        t8 = ((*(int *)(((*(int *)0xC260CB8) + 0x0))) - 1584);
    }
    if (((*(int *)0xC2497B0) & 240) != 0) {
        *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x1);
    } else {
        *(unsigned int *)((a4 + 0x98)) = 0x0;
    }
    if ((((*(int *)0xC2497B8) & 0x40) == 0) && ((t16 = *(int *)((a4 + 0x98)), (int)t16 <= (int)0x28) || (t17 = *(int *)0xC2497B0, (t17 & 0x40) == 0))) {
        if ((((*(int *)0xC2497B8) & 0x80) == 0) && ((t28 = *(int *)((a4 + 0x98)), (int)t28 <= (int)0x28) || (t29 = *(int *)0xC2497B0, (t29 & 0x80) == 0))) {
        } else {
            t30 = *(int *)((a4 + 0x78));
            *(unsigned int *)((a4 + 0x78)) = (t30 + 0x1);
            if (((int)(t30 + 0x1) > (int)0x206B) && (t31 = *(int *)((((((0xFFFFDFF8 + (t30 + 0x1)) << 2) << 2) + t8) + 0x4)), t31 == -1)) {
                *(unsigned int *)((a4 + 0x78)) = ((*(int *)((a4 + 0x78))) - 1);
            }
            *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = (*(int *)((a4 + 0x78)));
        }
    } else {
        t40 = *(int *)((a4 + 0x78));
        *(unsigned int *)((a4 + 0x78)) = (t40 - 1);
        if ((int)(t40 - 1) < (int)0x2008) {
            *(unsigned int *)((a4 + 0x78)) = ((*(int *)((a4 + 0x78))) + 0x1);
        }
        *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = (*(int *)((a4 + 0x78)));
    }
    t51 = *(int *)0xC2497B8;
    if ((t51 & 4) != 0) {
        t54 = *(int *)0xC262390;
        t55 = *(int *)((t54 + 0x3C));
        *(unsigned int *)((t54 + 0x3C)) = (t55 + 0x1);
        if ((*(int *)((((t55 + 0x1) << 2) + 0xC209C5C))) == 0) {
            t57 = *(int *)0xC262390;
            *(unsigned int *)((t57 + 0x3C)) = ((*(int *)((t57 + 0x3C))) - 1);
        }
        FUN_0c0bfa90();
        FUN_0c0c45d0();
        FUN_0c0bfa46((*(int *)((((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2) + 0xC209C5C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
        *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = 0x2008;
        *(unsigned int *)((a4 + 0x78)) = 0x2008;
    } else {
        if ((t51 & 2) != 0) {
            if ((int)(*(int *)(((*(int *)0xC262390) + 0x3C))) > 0) {
                t73 = *(int *)0xC262390;
                *(unsigned int *)((t73 + 0x3C)) = ((*(int *)((t73 + 0x3C))) - 1);
            }
            FUN_0c0bfa90();
            FUN_0c0c45d0();
            FUN_0c0bfa46((*(int *)((((*(int *)(((*(int *)0xC262390) + 0x3C))) << 2) + 0xC209C5C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            *(unsigned int *)(((*(int *)0xC262390) + 0x40)) = 0x2008;
            *(unsigned int *)((a4 + 0x78)) = 0x2008;
        }
    }
    t102 = *(int *)0xC2497B0;
    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
        if ((t102 & 0x100000) != 0) {
            t106 = *(int *)0xC262390;
            *(float *)((t106 + 0x4C)) = ((*(float *)((t106 + 0x4C))) - 0.099999994f);
        }
        if ((0x200000 & (*(int *)0xC2497B0)) == 0) {
        } else {
            t113 = *(int *)0xC262390;
            *(float *)((t113 + 0x4C)) = ((*(float *)((t113 + 0x4C))) + 0.099999994f);
        }
    } else {
        if (((*(int *)0xC2497B0) & 0x40000) != 0) {
            if ((t102 & 0x100000) != 0) {
                t122 = *(int *)0xC262390;
                *(float *)((t122 + 0x54)) = ((*(float *)((t122 + 0x54))) + 0.049999997f);
            }
            if ((0x200000 & (*(int *)0xC2497B0)) != 0) {
                t129 = *(int *)0xC262390;
                *(float *)((t129 + 0x54)) = ((*(float *)((t129 + 0x54))) - 0.049999997f);
            }
            if ((0x800000 & (*(int *)0xC2497B0)) != 0) {
                t136 = *(int *)0xC262390;
                *(float *)((t136 + 0x50)) = ((*(float *)((t136 + 0x50))) + 0.049999997f);
            }
            if ((0x400000 & (*(int *)0xC2497B0)) != 0) {
                t143 = *(int *)0xC262390;
                *(float *)((t143 + 0x50)) = ((*(float *)((t143 + 0x50))) - 0.049999997f);
            }
        } else {
            if (((*(int *)0xC2497B0) & 0x20000) != 0) {
                if ((0x800000 & (*(int *)0xC2497B0)) != 0) {
                    t152 = *(int *)0xC262390;
                    *(unsigned int *)((t152 + 0x58)) = ((*(int *)((t152 + 0x58))) - 0x100);
                }
                if ((0x400000 & (*(int *)0xC2497B0)) != 0) {
                    t159 = *(int *)0xC262390;
                    *(unsigned int *)((t159 + 0x58)) = ((*(int *)((t159 + 0x58))) + 0x100);
                }
            } else {
                if ((t102 & 0x100000) != 0) {
                    t165 = *(int *)0xC262390;
                    *(float *)((t165 + 0x48)) = ((*(float *)((t165 + 0x48))) - 1.0f);
                }
                if ((0x200000 & (*(int *)0xC2497B0)) != 0) {
                    t172 = *(int *)0xC262390;
                    *(float *)((t172 + 0x48)) = ((*(float *)((t172 + 0x48))) + 1.0f);
                }
                if ((0x400000 & (*(int *)0xC2497B0)) != 0) {
                    t179 = *(int *)0xC262390;
                    *(float *)((t179 + 0x44)) = ((*(float *)((t179 + 0x44))) - 1.0f);
                }
                if ((0x800000 & (*(int *)0xC2497B0)) != 0) {
                    t186 = *(int *)0xC262390;
                    *(float *)((t186 + 0x44)) = ((*(float *)((t186 + 0x44))) + 1.0f);
                }
            }
        }
    }
    if (((*(int *)0xC2497B8) & 0x80000) != 0) {
        FUN_0c0c3748();
    }
    t230 = *(int *)0xC262390;
    *(unsigned int *)((t230 + 0x4)) = (*(int *)((t230 + 0x40)));
    t232 = *(int *)0xC262390;
    *(float *)((t232 + 0x8)) = (*(float *)((t232 + 0x44)));
    t234 = *(int *)0xC262390;
    *(float *)((t234 + 0xC)) = (*(float *)((t234 + 0x48)));
    t236 = *(int *)0xC262390;
    *(float *)((t236 + 0x10)) = (*(float *)((t236 + 0x4C)));
    t238 = *(int *)0xC262390;
    *(unsigned int *)((t238 + 0x2C)) = (*(int *)((t238 + 0x58)));
    t240 = *(int *)0xC262390;
    *(unsigned int *)((t240 + 0x38)) = (*(int *)((t240 + 0x5C)));
    *(float *)(((*(int *)0xC262390) + 0x30)) = 1.0f;
    t243 = *(int *)0xC262390;
    *(float *)((t243 + 0x14)) = (*(float *)((t243 + 0x50)));
    t245 = *(int *)0xC262390;
    *(float *)((t245 + 0x18)) = (*(float *)((t245 + 0x54)));
    return FUN_0c0dfd50(((*(int *)0xC262390) + 0x4));
}

int FUN_0c027d08(int a4)
{
    int t0;
    int t4;
    int t11;
    int t13;
    int t19;
    int t23;
    int t31;
    int t34;
    int t37;
    int t38;
    int t42;
    int t50;
    int t53;
    int t60;
    int t61;
    int t66;
    int t73;
    int t75;
    int t78;
    int stk[5];

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x534)) = 0x0;
        return FUN_0c02a19a(a4);
    }
    t4 = *(int *)((a4 + 0x3A0));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                if (t4 == 3) {
                    t11 = FUN_0c0352b4(a4, 0x80, 0x1);
                    if (t11 == 0) {
                        return FUN_0c02a19a(a4);
                    }
                    FUN_0c0328e4(a4);
                    t13 = FUN_0c03242c(a4, 0.0799999982f, 30.0f);
                    if (t13 == 0) {
                        FUN_0c0cc3f8(0x82CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                    t19 = FUN_0c032394(a4);
                    if ((int)t19 >= 0) {
                        t23 = *(int *)((a4 + 0x488));
                        if ((*(int *)((t23 + 0xD8))) != 0) {
                            if ((*(int *)((t23 + 0xD8))) != 2) {
                                FUN_0c0909fc(t23);
                            } else {
                                FUN_0c090f70(t23);
                            }
                            return FUN_0c02a19a(a4);
                        }
                        t31 = ((int (*)(int))(_quick_odd_mvn))(t23);
                        *(volatile int *)((a4 + 0xBC));
                        *(volatile int *)((a4 + 0x1E8));
                        t34 = ((int (*)(int))(_quick_odd_mvn))(a4);
                        FUN_0c01cdc2();
                        if ((*(int *)((a4 + 0x3A0))) == 4) {
                            return FUN_0c02280e(a4);
                        }
                        return FUN_0c022838(a4);
                    }
                    *(unsigned int *)((a4 + 0x534)) = 0x0;
                    return FUN_0c02a19a(a4);
                }
                if (t4 == 4) {
                    t37 = FUN_0c0352b4(a4, 0x80, 0x1);
                    if (t37 != 0) {
                        t38 = FUN_0c032394(a4);
                        if ((int)t38 < 0) {
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            return FUN_0c02a19a(a4);
                        }
                        t42 = *(int *)((a4 + 0x488));
                        if ((*(int *)((t42 + 0xD8))) != 0) {
                            if ((*(int *)((t42 + 0xD8))) == 2) {
                                FUN_0c090f70(t42);
                            } else {
                                FUN_0c0909fc(t42);
                            }
                            return FUN_0c02a19a(a4);
                        }
                        t50 = ((int (*)(int))(_quick_odd_mvn))(t42);
                        *(volatile int *)((a4 + 0xBC));
                        *(volatile int *)((a4 + 0x1E8));
                        t53 = ((int (*)(int))(_quick_odd_mvn))(a4);
                        FUN_0c01cdc2();
                        if ((*(int *)((a4 + 0x3A0))) == 4) {
                            return FUN_0c02280e(a4);
                        }
                        return FUN_0c022838(a4);
                    }
                    return FUN_0c02a19a(a4);
                }
                if ((*(int *)((a4 + 0x3A0))) == 4) {
                    return FUN_0c02280e(a4);
                }
                return FUN_0c022838(a4);
            }
            if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
                return FUN_0c02a19a(a4);
            }
            FUN_0c0278d0(a4, 0x1);
            t60 = *(int *)((a4 + 0x3B0));
            *(unsigned int *)((a4 + 0x3B0)) = (t60 + 0x1);
            if ((int)(t60 + 0x1) <= (int)0x3C) {
            } else {
                t61 = *(int *)((a4 + 0x488));
                *(unsigned int *)((a4 + 0x534)) = 0x9;
                *(unsigned int *)((t61 + 0xBC)) = (*(int *)((a4 + 0xBC)));
                *(unsigned int *)((t61 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
                *(unsigned int *)((t61 + 0x200)) = 0x1;
                *(unsigned int *)((t61 + 0x1E8)) = 0x1;
                *(unsigned int *)((t61 + 0x1F4)) = 0x50;
                *(unsigned int *)((t61 + 0x204)) = 0x0;
                *(float *)((t61 + 0x1E4)) = 5.0f;
                *(unsigned int *)((t61 + 0x1FC)) = 0x2;
                *(unsigned int *)((t61 + 0x1F8)) = 0x5;
                *(unsigned int *)((t61 + 0xD8)) = 0x0;
                *(volatile int *)((t61 + 0xBC));
                *(volatile int *)((t61 + 0x1E8));
                t66 = ((int (*)(int, int))(_quick_odd_mvn))(t61, 0x1);
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
            if ((*(int *)((a4 + 0x3A0))) == 4) {
                return FUN_0c02280e(a4);
            }
            return FUN_0c022838(a4);
        }
        t73 = *(int *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3B0)) = (t73 + 0x1);
        if ((int)(t73 + 0x1) <= (int)0x3C) {
            if ((*(int *)((a4 + 0x3A0))) == 4) {
                return FUN_0c02280e(a4);
            }
            return FUN_0c022838(a4);
        }
        t75 = FUN_0c034d0c(a4);
        if (t75 == 0) {
            return FUN_0c02a19a(a4);
        }
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        if ((*(int *)((a4 + 0x3A0))) == 4) {
            return FUN_0c02280e(a4);
        }
        return FUN_0c022838(a4);
    }
    t78 = FUN_0c0278d0(a4, 0x0);
    if (t78 == 0) {
    } else {
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
    }
    if ((*(int *)((a4 + 0x3A0))) == 4) {
        return FUN_0c02280e(a4);
    }
    return FUN_0c022838(a4);
}


int FUN_0c015070(void)
{
    float u16;
    int t24;
    int t26;
    int t31;
    int t32;
    int t41;
    int t42;
    int t52;
    int t71;
    int t73;
    int t84;
    int t88;
    int t89;
    int t92;
    int t177;
    int t176;
    int t25;
    int t47;
    int stk[15];

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    FUN_0c0c465c(0x1469);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4634);
    FUN_0c0c465c(0x13B8);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4658);
    FUN_0c0c465c(0x13BB);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F464C);
    FUN_0c014fae(0xC23EB48, 0.319999993f);
    u16 = 2.64999986f;
    u16 = u16 + 0.319999993f * (float)(*(int *)0xC23EAC4);
    FUN_0c0dcc70(u16, -0.289999992f, 0.0f);
    FUN_0c0c465c(0x13B9);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4640);
    *(unsigned int *)0xC23EAEC = 0x1;
    *(unsigned int *)(((int)stk + 4)) = 0x5A;
    *(unsigned int *)(((int)stk + 12)) = 0x3;
    *(unsigned int *)0xC23EAD4 = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t24 = 0xC23EAD4;
    t26 = 0xC0DCCA0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 12)))) {
            break;
        }
        nlPushMatrix(0x0);
        t26 = (*(int *)(((int)stk + 4)));
        t26 = (t26 << 2);
        t26 = (t26 + 0xC0F4A9C);
        t25 = 0xF;
        t31 = 0xC0F4A9C;
        for (;;) {
            if (t25 == 0) {
                break;
            }
            t32 = *(int *)((t26 + 0x0));
            t26 = (t26 + 0x4);
            FUN_0c0c465c(t32);
            FUN_0c0dcc70(0.319999993f, 0.0f, 0.0f);
            t31 = (*(int *)(((int)stk + 4)));
            t25 = (t25 - 1);
            t31 = (t31 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t31;
        }
        nlPopMatrix(0x1);
        FUN_0c0dcc70(0.0f, -0.381999999f, 0.0f);
        t24 = (*(int *)(((int)stk + 8)));
        t24 = (t24 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = t24;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t41 = *(int *)0xC23EACC;
    t42 = *(int *)0xC23EAD0;
    if ((*(int *)0xC23EACC) != 15) {
        FUN_0c0dcc70(((float)t41 * 0.319999993f), (0.0599999987f - ((float)t42 * 0.381999999f)), -17.7999992f);
        t47 = 0x13B9;
    } else {
        FUN_0c0dcc70(0.0f, (0.0599999987f - ((float)t42 * 0.381999999f)), -17.7999992f);
        t47 = 0x13BA;
    }
    FUN_0c0c465c(t47);
    nlPopMatrix(0x1);
    FUN_0c010c84();
    t52 = *(int *)0xC2498F4;
    if ((0xF0F0 & t52) != 0) {
        if ((0xC0C0 & t52) != 0) {
            if ((t52 & 0x8080) != 0) {
                *(unsigned int *)0xC23EACC = ((*(int *)0xC23EACC) + 0x1);
            } else {
                *(unsigned int *)0xC23EACC = ((*(int *)0xC23EACC) - 1);
            }
        } else {
            if ((t52 & 0x2020) != 0) {
                *(unsigned int *)0xC23EAD0 = ((*(int *)0xC23EAD0) + 0x1);
            } else {
                *(unsigned int *)0xC23EAD0 = ((*(int *)0xC23EAD0) - 1);
            }
        }
        t71 = *(int *)0xC23EACC;
        *(unsigned int *)0xC23EACC = (t71 & 0xF);
        t73 = 0x3;
        if ((t71 & 0xF) == 15) {
        } else {
            t73 = (*(int *)(((int)stk + 12)));
        }
        if ((int)(*(int *)0xC23EAD0) < 0) {
            *(unsigned int *)0xC23EAD0 = (t73 - 1);
        } else {
            if ((int)(*(int *)0xC23EAD0) >= (int)t73) {
                *(unsigned int *)0xC23EAD0 = 0x0;
            }
        }
    } else {
        t84 = *(int *)0xC23EAC4;
        if ((0x4 & t52) != 0) {
            t88 = *(int *)0xC23EACC;
            t89 = *(int *)0xC23EAD0;
            if (t88 != 15) {
                t92 = ((((t89 << 2) << 2) - t89) + t88);
                if ((*(int *)0xC23EAEC) != 0) {
                    t92 = (((((t89 << 2) << 2) - t89) + t88) + 0x5A);
                }
                *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = t92;
                if ((int)(*(int *)0xC23EAC4) >= (int)0x5) {
                    *(unsigned int *)0xC23EACC = 0xF;
                    *(unsigned int *)0xC23EAD0 = 0x2;
                } else {
                    *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) + 0x1);
                }
            } else {
                if (t89 != 0) {
                    if (t89 != 1) {
                        FUN_0c010c40(0x9);
                        *(unsigned int *)0xC23EAEC = 0x9;
                    } else {
                        *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                        if ((int)(*(int *)0xC23EAC4) <= 0) {
                        } else {
                            *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) - 1);
                        }
                    }
                } else {
                    *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                    if ((int)(*(int *)0xC23EAC4) < (int)0x5) {
                        *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) + 0x1);
                    }
                }
            }
        } else {
            if ((0x2 & t52) != 0) {
                *(unsigned char *)(((t84 + 0xC23EB48) + 0x0)) = 0x16;
                if ((int)(*(int *)0xC23EAC4) > 0) {
                    *(unsigned int *)0xC23EAC4 = ((*(int *)0xC23EAC4) - 1);
                }
            } else {
                if ((t52 & 0x8) != 0) {
                    FUN_0c010c40(0x9);
                    *(unsigned int *)0xC23EAEC = 0x9;
                }
            }
        }
    }
    t177 = 0xC52314C;
    if ((*(int *)0xC52314C) != 0) {
        t176 = FUN_0c010c40(0x9);
        *(unsigned int *)0xC23EAEC = 0x2;
        t177 = t176;
    }
    return t177;
}

int FUN_0c0316d4(int a4, int a5)
{
    int t19;
    int t21;
    int t27;
    int t51;
    int t55;
    int t65;
    int t71;
    int t84;
    int t118;
    float u122;
    int t125;
    int t128;
    int t129;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C0316D4:;
    *(unsigned int *)(((int)stk + 16)) = R4;
    *(unsigned int *)(((int)stk + 12)) = R5;
    if (((R5 & 0x80000000) == 0)) goto L_C0316EA;
    goto L_C0316E6;
    L_C0316E6:;
    goto L_C0319C2;
    L_C0319C2:;
    return 0x1;
    L_C0316EA:;
    if (((*(int *)(((*(int *)(((int)stk + 16))) + 0x508))) == 0)) goto L_C0316F8;
    goto L_C0316F4;
    L_C0316F4:;
    goto L_C0319B8;
    L_C0319B8:;
    return 0x0;
    L_C0316F8:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x510))) >= 0)) goto L_C031706;
    goto L_C031702;
    L_C031702:;
    goto L_C0319B8;
    L_C031706:;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x510))) << 2) + 0xC246FF0)));
    if (((*(int *)((0x49C + (*(int *)(((int)stk + 16)))))) == 1)) goto L_C03172C;
    goto L_C03171E;
    L_C03171E:;
    if (((*(int *)(((*(int *)(((int)stk + 16))) + 0x4C4))) != 0)) goto L_C03172C;
    goto L_C031728;
    L_C031728:;
    goto L_C0319B8;
    L_C03172C:;
    if ((((*(int *)(((int)stk + 12))) & 0x40000000) == 0)) goto L_C031758;
    goto L_C031734;
    L_C031734:;
    t19 = *(int *)(((*(int *)(((int)stk + 16))) + 0xBC));
    t21 = (FUN_0c0853d4(((((((t19 << 1) + t19) << 2) << 2) << 2) + 0xC23F268), 1.0f)) != 0;
    if (t21) goto L_C031758;
    goto L_C031754;
    L_C031754:;
    goto L_C0319B8;
    L_C031758:;
    if ((((*(int *)(((int)stk + 12))) & 28) == 0)) goto L_C03176E;
    goto L_C03175E;
    L_C03175E:;
    t27 = (FUN_0c034b88((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))))) != 0;
    if (t27) goto L_C03176E;
    goto L_C03176A;
    L_C03176A:;
    goto L_C0319B8;
    L_C03176E:;
    if ((((*(int *)(((int)stk + 12))) & 32) == 0)) goto L_C031788;
    goto L_C031774;
    L_C031774:;
    if (((*(int *)((0xC247030 + ((*(int *)((0x510 + (*(int *)(((int)stk + 16)))))) << 2)))) != 5)) goto L_C031788;
    goto L_C031784;
    L_C031784:;
    goto L_C0319B8;
    L_C031788:;
    if ((((*(int *)(((int)stk + 12))) & 0x20000000) == 0)) goto L_C03179E;
    goto L_C031790;
    L_C031790:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x304))) > 0)) goto L_C03179E;
    goto L_C03179A;
    L_C03179A:;
    goto L_C0319B8;
    L_C03179E:;
    if ((((*(int *)(((int)stk + 12))) & 192) == 0)) goto L_C0317E0;
    goto L_C0317A4;
    L_C0317A4:;
    if (((((int)(*(int *)(((int)stk + 12))) >> 6) & 1) == 0)) goto L_C0317B8;
    goto L_C0317AE;
    L_C0317AE:;
    if (((*(int *)((0xD8 + (*(int *)(((int)stk + 16)))))) == 1)) goto L_C0317D4;
    goto L_C0317B8;
    L_C0317B8:;
    if (((((int)(*(int *)(((int)stk + 12))) >> 6) & 2) != 0)) goto L_C0317C6;
    goto L_C0317C2;
    L_C0317C2:;
    goto L_C0319B8;
    L_C0317C6:;
    if (((*(int *)((0xD8 + (*(int *)(((int)stk + 16)))))) == 2)) goto L_C0317D4;
    goto L_C0317D0;
    L_C0317D0:;
    goto L_C0319B8;
    L_C0317D4:;
    t51 = *(int *)(((int)stk + 16));
    *(unsigned int *)((t51 + 0x510)) = (*(int *)((t51 + 0xE4)));
    goto L_C0317E0;
    L_C0317E0:;
    goto L_C031814;
    L_C031814:;
    if ((((*(int *)(((int)stk + 12))) & 0x300) == 0)) goto L_C031844;
    goto L_C03181C;
    L_C03181C:;
    t55 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((0x54C + t55) + 0x0)) = (FUN_0c0341a6(t55, (*(int *)(((int)stk + 8)))));
    R8 = ((0x54C + t55));
    if (((int)(((int)(*(int *)(((int)stk + 12))) >> 8) & 0x3) <= (int)(*(int *)(((0x54C + (*(int *)(((int)stk + 16)))) + 0x0))))) goto L_C031844;
    goto L_C031840;
    L_C031840:;
    goto L_C0319B8;
    L_C031844:;
    if ((((*(int *)(((int)stk + 12))) & 0x3C00) == 0)) goto L_C03186C;
    goto L_C03184C;
    L_C03184C:;
    t65 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((0x548 + t65) + 0x0)) = (FUN_0c034b1c(t65, (*(int *)(((int)stk + 8)))));
    t71 = (FUN_0c034b64((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))))) != 0;
    R8 = ((0x548 + t65));
    if (t71) goto L_C03186C;
    goto L_C031868;
    L_C031868:;
    goto L_C0319B8;
    L_C03186C:;
    if ((((*(int *)(((int)stk + 12))) & 0x3F0000) == 0)) goto L_C03188C;
    goto L_C031874;
    L_C031874:;
    if (((int)((short)((unsigned int)(*(int *)(((int)stk + 12))) >> 16) & 0x3F) <= (int)(*(int *)(((0x374 + (*(int *)(((int)stk + 8)))) + 0x0))))) goto L_C03188C;
    goto L_C031888;
    L_C031888:;
    goto L_C0319B8;
    L_C03188C:;
    if ((((*(int *)(((int)stk + 12))) & 0xC000) == 0)) goto L_C0318A4;
    goto L_C031894;
    L_C031894:;
    t84 = (FUN_0c034b36((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))))) != 0;
    if (t84) goto L_C0318A4;
    goto L_C0318A0;
    L_C0318A0:;
    goto L_C0319B8;
    L_C0318A4:;
    if ((((*(int *)(((int)stk + 12))) & 0xC000000) == 0)) goto L_C0318E2;
    goto L_C0318AC;
    L_C0318AC:;
    if (((*(int *)((0x4CC + (*(int *)(((int)stk + 16)))))) == 1)) goto L_C0318BA;
    goto L_C0318B6;
    L_C0318B6:;
    goto L_C0319B8;
    L_C0318BA:;
    if (((((int)(*(int *)(((int)stk + 12))) >> 26) & 1) == 0)) goto L_C0318CE;
    goto L_C0318C4;
    L_C0318C4:;
    if ((((*(int *)((0x2A0 + (*(int *)(((int)stk + 16)))))) & 1) != 0)) goto L_C0319B8;
    goto L_C0318CE;
    L_C0318CE:;
    if (((((int)(*(int *)(((int)stk + 12))) >> 26) & 2) == 0)) goto L_C0318E2;
    goto L_C0318D8;
    L_C0318D8:;
    if ((((*(int *)((0x2A0 + (*(int *)(((int)stk + 16)))))) & 1) == 0)) goto L_C0319B8;
    goto L_C0318E2;
    L_C0318E2:;
    if ((((*(int *)(((int)stk + 12))) & 0x10000000) == 0)) goto L_C03198C;
    goto L_C0318EA;
    L_C0318EA:;
    if ((((*(int *)(((*(int *)(((int)stk + 8))) + 0x20C))) & 0x7F5) == 0)) goto L_C0319B8;
    goto L_C0318F6;
    L_C0318F6:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x328))) > 0)) goto L_C0319B8;
    goto L_C031900;
    L_C031900:;
    T_ = (((3.0f > _builtin_fabsf(((*(float *)(((*(int *)(((int)stk + 8))) + 0x34))) - (*(float *)(((*(int *)(((int)stk + 16))) + 0x34))))))));
    goto L_C031950;
    L_C031950:;
    if ((!T_)) goto L_C0319B8;
    goto L_C031952;
    L_C031952:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x54C))) <= 0)) goto L_C0319B8;
    goto L_C03195C;
    L_C03195C:;
    t118 = *(int *)((0x4F4 + (*(int *)(((int)stk + 16)))));
    u122 = *(float *)(((((*(int *)(((0x54C + (*(int *)(((int)stk + 16)))) + 0x0))) - 1) << 2) + ((*(int *)((0xC1F79BC + (((t118 << 1) + t118) << 2)))) + 0x7C)));
    *(float *)(((int)stk + 4)) = u122;
    t125 = (FUN_0c034134((*(int *)(((int)stk + 16))), u122)) == 0;
    if (t125) goto L_C0319B8;
    goto L_C03198C;
    L_C03198C:;
    if ((((*(int *)(((int)stk + 12))) & 0x3C00000) == 0)) goto L_C0319C2;
    goto L_C031994;
    L_C031994:;
    t128 = *(int *)(((int)stk + 12));
    t129 = FUN_0c0da2e0();
    R0 = (t129);
    R8 = ((((int)t128 >> 22) & 0xF));
    if (((int)t129 < 0)) goto L_C0319AA;
    goto L_C0319A6;
    L_C0319A6:;
    R0 = ((R0 & 0xF));
    goto L_C0319B4;
    L_C0319B4:;
    if (((int)R8 < (int)R0)) goto L_C0319C2;
    goto L_C0319B8;
    L_C0319AA:;
    R0 = (((~(((~R0) + 0x1) & 0xF)) + 0x1));
    goto L_C0319B4;
}

