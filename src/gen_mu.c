/* Straight-line functions with calls and guards (batch gen_mu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e7e8(int, int, int);
float FUN_0c01f172(int);
int FUN_0c01f18e(int);
int FUN_0c056588(int);
int FUN_0c08ad98(int);
int FUN_0c08b088(int, int);
int FUN_0c0a59f8(int);
int FUN_0c0a5a7a(int);
int FUN_0c0bd65c(int);
int FUN_0c0c465c(int);
int FUN_0c0c5de8(int);
int FUN_0c0c6b48(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0dcc70(float, float, float);
extern int FUN_0c0e19f2();
int nlObjPutCheapEnvMap(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c05878c(int a4, int a5, int a6, int a7);

int FUN_0c05878c(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t20;
    register int t25;
    register int t40;
    register int t45;
    register float u54;
    register int t84;
    register int t89;
    register int t118;
    register int t119;
    register int t126;
    register float t132;
    register int t138;
    register int t140;
    register float u141;
    register float u142;
    register float u248;
    register float u143;
    register float u144;
    register float u235;
    register float u145;
    register float u146;
    register int t148;
    register int t203;
    register int t151;
    register int t154;
    register int t160;
    register int t163;
    register int t166;
    register int t169;
    register int t174;
    register int t177;
    register int t180;
    register int t183;
    register int t185;
    register int t186;
    int t294;
    register int t295;
    register int t116;
    register int t117;
    register float u222;
    register int t204;
    register int t195;
    int t282;

    t0 = *(int *)((a4 + 0x228));
    if (t0 != 11) {
        if (t0 == 3) {
            *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) + -0.0599999987f);
            *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
            *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
            *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x600);
            *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + 0x300);
            FUN_0c01e7e8(a4, 0xA5C, 0xFFFFFFFF);
            if ((*(int *)((a4 + 0xA8))) != 0) {
                FUN_0c056588(a4);
                *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
                *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
                *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
            }
            t20 = FUN_0c01f18e(a4);
            if (t20 != 0) {
                *(unsigned int *)((a4 + 0x228)) = 0xB;
                *(float *)((a4 + 0x34)) = ((FUN_0c01f172(a4)) + (*(float *)((a4 + 0x258))));
                *(unsigned short *)((a4 + 0x6C)) = 0x0;
            } else {
                if (-100.0f > (*(float *)((a4 + 0x34)))) {
                    t25 = ((int (*)(void))(FUN_0c0e19f2))();
                }
                *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
            }
        } else {
            if (t0 == 4) {
                t40 = *(int *)((a4 + 0x25C));
                if (t40 != 0) {
                    if (t40 != 1) {
                        if (t40 != 2) {
                        } else {
                            *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) + -0.0599999987f);
                        }
                    } else {
                        t45 = *(int *)((a4 + 0x260));
                        *(unsigned int *)((a4 + 0x260)) = (t45 - 1);
                        if ((int)(t45 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x25C)) = ((*(int *)((a4 + 0x25C))) + 0x1);
                        }
                    }
                } else {
                    u54 = *(float *)((a4 + 0x64));
                    *(float *)((a4 + 0x64)) = (u54 + -0.0599999987f);
                    if (!((u54 + -0.0599999987f) > 0.0f)) {
                        *(float *)((a4 + 0x60)) = 0.0f;
                        *(float *)((a4 + 0x64)) = 0.0f;
                        *(float *)((a4 + 0x68)) = 0.0f;
                        *(unsigned int *)((a4 + 0x260)) = 0x1E;
                        *(unsigned int *)((a4 + 0x25C)) = ((*(int *)((a4 + 0x25C))) + 0x1);
                        FUN_0c08b088((a4 + 0x30), 0x46);
                    }
                }
                *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
                *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
                *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
                *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + 0x800);
                FUN_0c01e7e8(a4, 0xA5C, 0xFFFFFFFF);
                if ((*(int *)((a4 + 0xA8))) != 0) {
                    FUN_0c056588(a4);
                    *(float *)((a4 + 0x54)) = (*(float *)((a4 + 0x60)));
                    *(float *)((a4 + 0x58)) = (*(float *)((a4 + 0x64)));
                    *(float *)((a4 + 0x5C)) = (*(float *)((a4 + 0x68)));
                }
                t84 = FUN_0c01f18e(a4);
                if (t84 != 0) {
                    *(unsigned int *)((a4 + 0x228)) = 0xB;
                    *(float *)((a4 + 0x34)) = ((FUN_0c01f172(a4)) + (*(float *)((a4 + 0x258))));
                    *(unsigned int *)((a4 + 0x25C)) = 0x0;
                    *(unsigned int *)((a4 + 0x260)) = 0x0;
                    *(unsigned short *)((a4 + 0x6C)) = 0x0;
                } else {
                    if (-100.0f > (*(float *)((a4 + 0x34)))) {
                        t89 = ((int (*)(void))(FUN_0c0e19f2))();
                    }
                    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
                    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
                    FUN_0c0c5de8(a4);
                }
            }
        }
    } else {
        if ((((*(int *)0xC23ED5C) & 0x40000) == 0) && ((t116 = *(int *)0xC23ED5C, (t116 & 32) == 0) || (t117 = *(int *)((a4 + 0x230)), t117 == 0))) {
            t118 = *(int *)((a4 + 0x224));
            *(unsigned int *)((a4 + 0x224)) = (t118 - 1);
            if ((int)(t118 - 1) <= (int)0xFFFFFFC4) {
                t119 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(0xC23ED5C, a5, a6, a7);
            }
        } else {
            t126 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(0xC23ED5C, a5, a6, a7);
        }
        t132 = FUN_0c01f172(a4);
        if (t132 > -990.0f) {
            *(float *)((a4 + 0x34)) = (t132 + 0.5f);
        }
        FUN_0c0c5de8(a4);
        t138 = *(int *)((a4 + 0x25C));
        *(unsigned int *)((a4 + 0x25C)) = (t138 + 0x1);
        if ((*(int *)((((((t138 + 0x1) - 1) & 0x1) << 2) + 0xC247030))) != 4) {
        } else {
            t140 = *(int *)(((0xC246FF0 + ((((t138 + 0x1) - 1) & 0x1) << 2)) + 0x0));
            u141 = *(float *)((a4 + 0x30));
            u142 = *(float *)((t140 + 0x30));
            u248 = _builtin_fabsf((u142 - u141));
            if (!(4.0f > _builtin_fabsf((u142 - u141)))) {
            } else {
                u143 = *(float *)((t140 + 0x38));
                u144 = *(float *)((a4 + 0x38));
                u235 = _builtin_fabsf((u143 - u144));
                if (!(4.0f > _builtin_fabsf((u143 - u144)))) {
                } else {
                    u145 = *(float *)((t140 + 0x34));
                    u146 = *(float *)((a4 + 0x34));
                    if (!((1.0f + 1.0f) > _builtin_fabsf((u145 - u146)))) {
                        u222 = _builtin_fabsf((u145 - u146));
                    } else {
                        t148 = *(int *)((a4 + 0x220));
                        t203 = 0xC246FF0;
                        if ((unsigned int)t148 >= (unsigned int)0x13) {
                            t204 = (((t138 + 0x1) - 1) & 0x1);
                            _builtin_fabsf((u145 - u146));
                        } else {
                            switch ((t148 << 1)) {
                                case 0:
                                {
                                    *(unsigned int *)0xC1FF894 = 0xE10;
                                    t151 = *(int *)((0xC1FF7E8 + ((*(int *)((a4 + 0x220))) << 2)));
                                    FUN_0c0c6b48((*(int *)((t140 + 0xBC))), t151);
                                    t154 = *(int *)((t140 + 0xBC));
                                    *(unsigned int *)((0xC247584 + (t154 << 2))) = ((*(int *)((0xC247584 + (t154 << 2)))) + t151);
                                    *(unsigned int *)0xC1FF8A0 = 0x1;
                                }
                                    break;
                                case 2:
                                {
                                    FUN_0c0bd65c(0x1);
                                    FUN_0c0a59f8(0x1);
                                    FUN_0c0a5a7a(0x1);
                                    *(unsigned int *)0xC1FF894 = 0xE10;
                                    t160 = *(int *)((0xC1FF7E8 + ((*(int *)((a4 + 0x220))) << 2)));
                                    FUN_0c0c6b48((*(int *)((t140 + 0xBC))), t160);
                                    t163 = *(int *)((t140 + 0xBC));
                                    *(unsigned int *)((0xC247584 + (t163 << 2))) = ((*(int *)((0xC247584 + (t163 << 2)))) + t160);
                                    *(unsigned int *)0xC1FF89C = 0x1;
                                }
                                    break;
                                case 4:
                                {
                                    *(unsigned int *)0xC1FF890 = 0x4B0;
                                    t166 = *(int *)((0xC1FF7E8 + ((*(int *)((a4 + 0x220))) << 2)));
                                    FUN_0c0c6b48((*(int *)((t140 + 0xBC))), t166);
                                    t169 = *(int *)((t140 + 0xBC));
                                    *(unsigned int *)((0xC247584 + (t169 << 2))) = ((*(int *)((0xC247584 + (t169 << 2)))) + t166);
                                    *(unsigned int *)0xC1FF898 = 0x1;
                                }
                                    break;
                                case 6:
                                {
                                    *(float *)((((*(int *)((t140 + 0xBC))) << 2) + 0xC24758C)) = (float)(*(int *)0xC2475B4);
                                    t174 = *(int *)((0xC1FF7E8 + ((*(int *)((a4 + 0x220))) << 2)));
                                    FUN_0c0c6b48((*(int *)((t140 + 0xBC))), t174);
                                    t177 = *(int *)((t140 + 0xBC));
                                    *(unsigned int *)((0xC247584 + (t177 << 2))) = ((*(int *)((0xC247584 + (t177 << 2)))) + t174);
                                }
                                    break;
                                default:
                                {
                                    t180 = *(int *)((0xC1FF7E8 + ((*(int *)((a4 + 0x220))) << 2)));
                                    FUN_0c0c6b48((*(int *)((t140 + 0xBC))), t180);
                                    t183 = *(int *)((t140 + 0xBC));
                                    *(unsigned int *)((0xC247584 + (t183 << 2))) = ((*(int *)((0xC247584 + (t183 << 2)))) + t180);
                                    t185 = *(int *)((a4 + 0x220));
                                    t186 = *(signed char *)(((0xC1EF2E0 + (t185 - 4)) + 0x0));
                                    if ((int)t186 <= (int)0x9) {
                                        *(unsigned char *)(((0xC1EF2E0 + (t185 - 4)) + 0x0)) = ((*(signed char *)(((0xC1EF2E0 + (t185 - 4)) + 0x0))) + 0x1);
                                    }
                                    t195 = t186;
                                }
                                    break;
                            }
                            t203 = t195;
                        }
                        FUN_0c0cc3f8(0x229A9, t203, t204, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        *(float *)((a4 + 0x26C)) = 1.0f;
                        *(float *)((a4 + 0x254)) = 0.199999988f;
                        FUN_0c08ad98((a4 + 0x30));
                        *(unsigned int *)((a4 + 0x260)) = 0x0;
                        *(unsigned int *)((a4 + 0x0)) = 0xC058D46;
                    }
                    u235 = u222;
                }
                u248 = u235;
            }
        }
    }
    if (((int)(*(int *)((a4 + 0x224))) < 0) && (t282 = *(int *)0xC23A258, (t282 & 1) != 0)) {
        return t282;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    t294 = *(int *)((a4 + 0x220));
    if ((t294 != 13) && (t294 != 2)) {
    } else {
        t295 = *(int *)((a4 + 0x240));
        nlObjPutCheapEnvMap((*(int *)(((((t295 << 1) + t295) << 2) + 0xC2623A0))));
    }
    nlScale(0.849999964f, 0.849999964f, 0.849999964f);
    FUN_0c0c465c((*(int *)((a4 + 0x240))));
    return nlPopMatrix(0x1);
}
