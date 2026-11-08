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
struct o220_int { char p[0x220]; int v; };
struct o224_int { char p[0x224]; int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o228_int { char p[0x228]; int v; };
struct o228_uint { char p[0x228]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o240_int { char p[0x240]; int v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_int { char p[0x25C]; int v; };
struct o25C_uint { char p[0x25C]; unsigned int v; };
struct o260_int { char p[0x260]; int v; };
struct o260_uint { char p[0x260]; unsigned int v; };
struct o26C_float { char p[0x26C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct oA8_int { char p[0xA8]; int v; };
struct oBC_int { char p[0xBC]; int v; };


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

    t0 = (((struct o228_int *)(a4))->v);
    if (t0 != 11) {
        if (t0 == 3) {
            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0599999987f);
            (((struct o54_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
            (((struct o58_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o68_float *)(a4))->v));
            (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x600);
            (((struct o6C_ushort *)(a4))->v) = (((((struct o6C_short *)(a4))->v)) + 0x300);
            FUN_0c01e7e8(a4, 0xA5C, 0xFFFFFFFF);
            if (((((struct oA8_int *)(a4))->v)) != 0) {
                FUN_0c056588(a4);
                (((struct o54_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                (((struct o58_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
                (((struct o5C_float *)(a4))->v) = ((((struct o68_float *)(a4))->v));
            }
            t20 = FUN_0c01f18e(a4);
            if (t20 != 0) {
                (((struct o228_uint *)(a4))->v) = 0xB;
                (((struct o34_float *)(a4))->v) = ((FUN_0c01f172(a4)) + ((((struct o258_float *)(a4))->v)));
                (((struct o6C_ushort *)(a4))->v) = 0x0;
            } else {
                if (-100.0f > ((((struct o34_float *)(a4))->v))) {
                    t25 = ((int (*)(void))(FUN_0c0e19f2))();
                }
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
                (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            }
        } else {
            if (t0 == 4) {
                t40 = (((struct o25C_int *)(a4))->v);
                if (t40 != 0) {
                    if (t40 != 1) {
                        if (t40 != 2) {
                        } else {
                            (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + -0.0599999987f);
                        }
                    } else {
                        t45 = (((struct o260_int *)(a4))->v);
                        (((struct o260_uint *)(a4))->v) = (t45 - 1);
                        if ((int)(t45 - 1) <= 0) {
                            (((struct o25C_uint *)(a4))->v) = (((((struct o25C_int *)(a4))->v)) + 0x1);
                        }
                    }
                } else {
                    u54 = (((struct o64_float *)(a4))->v);
                    (((struct o64_float *)(a4))->v) = (u54 + -0.0599999987f);
                    if (!((u54 + -0.0599999987f) > 0.0f)) {
                        (((struct o60_float *)(a4))->v) = 0.0f;
                        (((struct o64_float *)(a4))->v) = 0.0f;
                        (((struct o68_float *)(a4))->v) = 0.0f;
                        (((struct o260_uint *)(a4))->v) = 0x1E;
                        (((struct o25C_uint *)(a4))->v) = (((((struct o25C_int *)(a4))->v)) + 0x1);
                        FUN_0c08b088((a4 + 0x30), 0x46);
                    }
                }
                (((struct o54_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                (((struct o58_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
                (((struct o5C_float *)(a4))->v) = ((((struct o68_float *)(a4))->v));
                (((struct o6C_ushort *)(a4))->v) = (((((struct o6C_short *)(a4))->v)) + 0x800);
                FUN_0c01e7e8(a4, 0xA5C, 0xFFFFFFFF);
                if (((((struct oA8_int *)(a4))->v)) != 0) {
                    FUN_0c056588(a4);
                    (((struct o54_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                    (((struct o58_float *)(a4))->v) = ((((struct o64_float *)(a4))->v));
                    (((struct o5C_float *)(a4))->v) = ((((struct o68_float *)(a4))->v));
                }
                t84 = FUN_0c01f18e(a4);
                if (t84 != 0) {
                    (((struct o228_uint *)(a4))->v) = 0xB;
                    (((struct o34_float *)(a4))->v) = ((FUN_0c01f172(a4)) + ((((struct o258_float *)(a4))->v)));
                    (((struct o25C_uint *)(a4))->v) = 0x0;
                    (((struct o260_uint *)(a4))->v) = 0x0;
                    (((struct o6C_ushort *)(a4))->v) = 0x0;
                } else {
                    if (-100.0f > ((((struct o34_float *)(a4))->v))) {
                        t89 = ((int (*)(void))(FUN_0c0e19f2))();
                    }
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                    FUN_0c0c5de8(a4);
                }
            }
        }
    } else {
        if ((((*(int *)0xC23ED5C) & 0x40000) == 0) && ((t116 = *(int *)0xC23ED5C, (t116 & 32) == 0) || (t117 = (((struct o230_int *)(a4))->v), t117 == 0))) {
            t118 = (((struct o224_int *)(a4))->v);
            (((struct o224_uint *)(a4))->v) = (t118 - 1);
            if ((int)(t118 - 1) <= (int)0xFFFFFFC4) {
                t119 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(0xC23ED5C, a5, a6, a7);
            }
        } else {
            t126 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(0xC23ED5C, a5, a6, a7);
        }
        t132 = FUN_0c01f172(a4);
        if (t132 > -990.0f) {
            (((struct o34_float *)(a4))->v) = (t132 + 0.5f);
        }
        FUN_0c0c5de8(a4);
        t138 = (((struct o25C_int *)(a4))->v);
        (((struct o25C_uint *)(a4))->v) = (t138 + 0x1);
        if ((*(int *)((((((t138 + 0x1) - 1) & 0x1) << 2) + 0xC247030))) != 4) {
        } else {
            t140 = *(int *)(((0xC246FF0 + ((((t138 + 0x1) - 1) & 0x1) << 2)) + 0x0));
            u141 = (((struct o30_float *)(a4))->v);
            u142 = (((struct o30_float *)(t140))->v);
            u248 = _builtin_fabsf((u142 - u141));
            if (!(4.0f > _builtin_fabsf((u142 - u141)))) {
            } else {
                u143 = (((struct o38_float *)(t140))->v);
                u144 = (((struct o38_float *)(a4))->v);
                u235 = _builtin_fabsf((u143 - u144));
                if (!(4.0f > _builtin_fabsf((u143 - u144)))) {
                } else {
                    u145 = (((struct o34_float *)(t140))->v);
                    u146 = (((struct o34_float *)(a4))->v);
                    if (!((1.0f + 1.0f) > _builtin_fabsf((u145 - u146)))) {
                        u222 = _builtin_fabsf((u145 - u146));
                    } else {
                        t148 = (((struct o220_int *)(a4))->v);
                        t203 = 0xC246FF0;
                        if ((unsigned int)t148 >= (unsigned int)0x13) {
                            t204 = (((t138 + 0x1) - 1) & 0x1);
                            _builtin_fabsf((u145 - u146));
                        } else {
                            switch ((t148 << 1)) {
                                case 0:
                                {
                                    *(unsigned int *)0xC1FF894 = 0xE10;
                                    t151 = *(int *)((0xC1FF7E8 + (((((struct o220_int *)(a4))->v)) << 2)));
                                    FUN_0c0c6b48(((((struct oBC_int *)(t140))->v)), t151);
                                    t154 = (((struct oBC_int *)(t140))->v);
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
                                    t160 = *(int *)((0xC1FF7E8 + (((((struct o220_int *)(a4))->v)) << 2)));
                                    FUN_0c0c6b48(((((struct oBC_int *)(t140))->v)), t160);
                                    t163 = (((struct oBC_int *)(t140))->v);
                                    *(unsigned int *)((0xC247584 + (t163 << 2))) = ((*(int *)((0xC247584 + (t163 << 2)))) + t160);
                                    *(unsigned int *)0xC1FF89C = 0x1;
                                }
                                    break;
                                case 4:
                                {
                                    *(unsigned int *)0xC1FF890 = 0x4B0;
                                    t166 = *(int *)((0xC1FF7E8 + (((((struct o220_int *)(a4))->v)) << 2)));
                                    FUN_0c0c6b48(((((struct oBC_int *)(t140))->v)), t166);
                                    t169 = (((struct oBC_int *)(t140))->v);
                                    *(unsigned int *)((0xC247584 + (t169 << 2))) = ((*(int *)((0xC247584 + (t169 << 2)))) + t166);
                                    *(unsigned int *)0xC1FF898 = 0x1;
                                }
                                    break;
                                case 6:
                                {
                                    *(float *)(((((((struct oBC_int *)(t140))->v)) << 2) + 0xC24758C)) = (float)(*(int *)0xC2475B4);
                                    t174 = *(int *)((0xC1FF7E8 + (((((struct o220_int *)(a4))->v)) << 2)));
                                    FUN_0c0c6b48(((((struct oBC_int *)(t140))->v)), t174);
                                    t177 = (((struct oBC_int *)(t140))->v);
                                    *(unsigned int *)((0xC247584 + (t177 << 2))) = ((*(int *)((0xC247584 + (t177 << 2)))) + t174);
                                }
                                    break;
                                default:
                                {
                                    t180 = *(int *)((0xC1FF7E8 + (((((struct o220_int *)(a4))->v)) << 2)));
                                    FUN_0c0c6b48(((((struct oBC_int *)(t140))->v)), t180);
                                    t183 = (((struct oBC_int *)(t140))->v);
                                    *(unsigned int *)((0xC247584 + (t183 << 2))) = ((*(int *)((0xC247584 + (t183 << 2)))) + t180);
                                    t185 = (((struct o220_int *)(a4))->v);
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
                        (((struct o26C_float *)(a4))->v) = 1.0f;
                        (((struct o254_float *)(a4))->v) = 0.199999988f;
                        FUN_0c08ad98((a4 + 0x30));
                        (((struct o260_uint *)(a4))->v) = 0x0;
                        *(unsigned int *)((a4 + 0x0)) = 0xC058D46;
                    }
                    u235 = u222;
                }
                u248 = u235;
            }
        }
    }
    if (((int)((((struct o224_int *)(a4))->v)) < 0) && (t282 = *(int *)0xC23A258, (t282 & 1) != 0)) {
        return t282;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    t294 = (((struct o220_int *)(a4))->v);
    if ((t294 != 13) && (t294 != 2)) {
    } else {
        t295 = (((struct o240_int *)(a4))->v);
        nlObjPutCheapEnvMap((*(int *)(((((t295 << 1) + t295) << 2) + 0xC2623A0))));
    }
    nlScale(0.849999964f, 0.849999964f, 0.849999964f);
    FUN_0c0c465c(((((struct o240_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}
