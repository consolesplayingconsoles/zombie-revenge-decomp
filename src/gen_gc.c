/* Straight-line functions with calls and guards (batch gen_gc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016a86(void);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c084bf6(int, int);
int FUN_0c0a9894(void);
int FUN_0c0ae738(int, int);
int FUN_0c0aea24(int, float);
int FUN_0c0aeabc(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0da410(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0ae314(int a4, float f4);
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };


int FUN_0c0ae314(int a4, float f4)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t12;
    register int t13;
    register int t26;
    register int t51;
    register int t52;
    register int t80;
    register int t84;
    register int t85;
    register int t118;
    register int t132;
    register int t170;
    register int t174;
    register int t175;
    register int t211;
    register int t285;
    register int t275;
    register int t242;
    register int t243;
    register float u249;
    register float u250;
    register float t260;
    register float t262;
    register int t267;
    int t106;
    register int t107;
    int t130;
    register int t131;
    int t212;
    register int t213;
    register float u244;
    register float u245;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);

    t0 = (((struct o84_int *)(a4))->v);
    R1008 = (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0);
    t1 = (((struct o80_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                t2 = FUN_0c016a86();
                if (t2 != 0) {
                    (((struct oA0_uint *)(a4))->v) = 0x1E;
                    (((struct o80_uint *)(a4))->v) = 0x4;
                } else {
                    t3 = (((struct oA0_int *)(a4))->v);
                    (((struct oA0_uint *)(a4))->v) = (t3 - 1);
                    if ((int)(t3 - 1) <= 0) {
                        (((struct oA0_uint *)(a4))->v) = 0xB4;
                        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                    }
                }
            } else {
                if (t1 == 3) {
                    t12 = (((struct oA0_int *)(a4))->v);
                    (((struct oA0_uint *)(a4))->v) = (t12 - 1);
                    if ((int)(t12 - 1) > 0) {
                        t13 = FUN_0c016a86();
                        if (t13 != 0) {
                            FUN_0c084bf6(0xA, 0x0);
                            (((struct oA0_uint *)(a4))->v) = 0xA;
                            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                        }
                    } else {
                        FUN_0c084bf6(0xA, 0x0);
                        (((struct oA0_uint *)(a4))->v) = 0xA;
                        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                    }
                } else {
                    if (t1 == 4) {
                        t26 = (((struct oA0_int *)(a4))->v);
                        (((struct oA0_uint *)(a4))->v) = (t26 - 1);
                        if ((int)(t26 - 1) <= 0) {
                            *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
                            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                        }
                    }
                }
            }
        } else {
            t51 = (((struct oA0_int *)(a4))->v);
            (((struct oA0_uint *)(a4))->v) = (t51 - 1);
            if ((int)(t51 - 1) >= 0) {
                t52 = FUN_0c0a9894();
                if (t52 != 0) {
                    if ((((int)0x1 << (int)((((struct o78_int *)(a4))->v))) & ((((struct o98_int *)(a4))->v))) != 0) {
                    } else {
                        (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
                        FUN_0c0ae738(((((struct o9C_int *)(a4))->v)), ((((struct o78_int *)(a4))->v)));
                        *(unsigned short *)((((((((struct o9C_int *)(a4))->v)) & 0x3) << 1) + 0xC247AF4)) = (*(short *)(((((((((struct o78_int *)(a4))->v)) << 2) << 1) + 0xC202450) + 0x0)));
                        t80 = FUN_0c0a9894();
                        if (t80 != 0) {
                            FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0);
                        }
                        t84 = (((struct o9C_int *)(a4))->v);
                        (((struct o9C_uint *)(a4))->v) = (t84 + 0x1);
                        if ((int)(t84 + 0x1) >= (int)0x3) {
                            (((struct oA0_uint *)(a4))->v) = 0x3C;
                            (((struct o80_uint *)(a4))->v) = 0x2;
                            (((struct o78_uint *)(a4))->v) = 0x8;
                        } else {
                            for (;;) {
                                t85 = (((struct o78_int *)(a4))->v);
                                (((struct o78_uint *)(a4))->v) = (t85 + 0x1);
                                if ((int)(t85 + 0x1) >= (int)0x8) {
                                    (((struct o78_uint *)(a4))->v) = 0x0;
                                }
                                if ((((int)0x1 << (int)((((struct o78_int *)(a4))->v))) & ((((struct o98_int *)(a4))->v))) == 0) {
                                    break;
                                }
                            }
                            FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)(((((((((struct o78_int *)(a4))->v)) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0);
                        }
                    }
                } else {
                    if (((int)(*(int *)(((((((((struct o84_int *)(a4))->v)) << 1) << 2) + 0xC249880) + 0x4))) < (int)0xFFFFFFC0) && (t106 = R1008, t107 = *(int *)((t106 + 0x28)), (unsigned int)t107 <= (unsigned int)0x1)) {
                        for (;;) {
                            t118 = (((struct o78_int *)(a4))->v);
                            (((struct o78_uint *)(a4))->v) = (t118 - 1);
                            if ((int)(t118 - 1) < 0) {
                                (((struct o78_uint *)(a4))->v) = 0x7;
                            }
                            FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)(((((((((struct o78_int *)(a4))->v)) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0);
                            if ((((int)0x1 << (int)((((struct o78_int *)(a4))->v))) & ((((struct o98_int *)(a4))->v))) == 0) {
                                break;
                            }
                        }
                    } else {
                        if (((int)(*(int *)(((((((((struct o84_int *)(a4))->v)) << 1) << 2) + 0xC249880) + 0x4))) > (int)0x40) && (t130 = R1008, t131 = *(int *)((t130 + 0x28)), (unsigned int)t131 <= (unsigned int)0x1)) {
                            for (;;) {
                                t132 = (((struct o78_int *)(a4))->v);
                                (((struct o78_uint *)(a4))->v) = (t132 + 0x1);
                                if ((int)(t132 + 0x1) >= (int)0x8) {
                                    (((struct o78_uint *)(a4))->v) = 0x0;
                                }
                                FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)(((((((((struct o78_int *)(a4))->v)) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0);
                                if ((((int)0x1 << (int)((((struct o78_int *)(a4))->v))) & ((((struct o98_int *)(a4))->v))) == 0) {
                                    break;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((((int)0x1 << (int)((((struct o78_int *)(a4))->v))) & ((((struct o98_int *)(a4))->v))) != 0) {
                } else {
                    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
                    FUN_0c0ae738(((((struct o9C_int *)(a4))->v)), ((((struct o78_int *)(a4))->v)));
                    *(unsigned short *)((((((((struct o9C_int *)(a4))->v)) & 0x3) << 1) + 0xC247AF4)) = (*(short *)(((((((((struct o78_int *)(a4))->v)) << 2) << 1) + 0xC202450) + 0x0)));
                    t170 = FUN_0c0a9894();
                    if (t170 != 0) {
                        FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0);
                    }
                    t174 = (((struct o9C_int *)(a4))->v);
                    (((struct o9C_uint *)(a4))->v) = (t174 + 0x1);
                    if ((int)(t174 + 0x1) >= (int)0x3) {
                        (((struct oA0_uint *)(a4))->v) = 0x3C;
                        (((struct o80_uint *)(a4))->v) = 0x2;
                        (((struct o78_uint *)(a4))->v) = 0x8;
                    } else {
                        for (;;) {
                            t175 = (((struct o78_int *)(a4))->v);
                            (((struct o78_uint *)(a4))->v) = (t175 + 0x1);
                            if ((int)(t175 + 0x1) >= (int)0x8) {
                                (((struct o78_uint *)(a4))->v) = 0x0;
                            }
                            if ((((int)0x1 << (int)((((struct o78_int *)(a4))->v))) & ((((struct o98_int *)(a4))->v))) == 0) {
                                break;
                            }
                        }
                        FUN_0c0cc3f8((*(int *)((((unsigned short)(*(short *)(((((((((struct o78_int *)(a4))->v)) << 2) << 1) + 0xC202450) + 0x0))) << 2) + 0xC1FE958))), 0x0, 0x0, 0x0);
                    }
                }
            }
        }
    } else {
        FUN_0c0aea24(a4, f4);
        t211 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t211 - 1);
        if (((int)(t211 - 1) > 0) && (t212 = R1008, t213 = *(int *)((t212 + 0x0)), (t213 & 0x602) == 0)) {
        } else {
            (((struct o34_float *)(a4))->v) = 0.0299999993f;
            (((struct o38_float *)(a4))->v) = -0.199999988f;
            (((struct o74_float *)(a4))->v) = 0.099999994f;
            (((struct oA0_uint *)(a4))->v) = 0x384;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
    }
    t285 = 0x80;
    if ((int)((((struct o80_int *)(a4))->v)) > 0) {
        if (((((struct o80_int *)(a4))->v)) == 1) {
            FUN_0c0aeabc(a4);
        }
        t275 = 0x80;
        if ((int)((((struct o80_int *)(a4))->v)) < (int)0x3) {
            (((struct o7C_uint *)(a4))->v) = 0xC6;
            t242 = 0xC0AE708;
            t243 = 0x0;
            for (;;) {
                if ((int)t243 >= (int)0x3) {
                    break;
                }
                t242 = 0x9C;
                if ((int)t243 < (int)(*(int *)((a4 + t242)))) {
                    u245 = 1.0f;
                } else {
                    t242 = 0xC0AE710;
                    u245 = (*(float *)((t242 + 0x0)));
                }
                t242 = 0xC0AE714;
                u249 = *(float *)((t242 + 0x0));
                t242 = 0x30;
                u250 = -0.109999999f;
                u250 = u250 + u249 * (float)t243;
                *(float *)((a4 + t242)) = u250;
                t242 = (nlPushMatrix(0x0));
                t242 = (nlUnitMatrix());
                t242 = (FUN_0c0dcca0((a4 + 0x30)));
                t242 = 0x74;
                u244 = (*(float *)((a4 + t242)));
                t242 = (nlScale(u244, u244, u244));
                t242 = 0x74;
                t242 = (FUN_0c0de000((*(float *)((a4 + t242)))));
                t242 = 0x9C;
                if (t243 == (*(int *)((a4 + t242)))) {
                    t242 = 0xA4;
                    t260 = FUN_0c0da410((*(int *)((a4 + t242))));
                    t242 = 0xA4;
                    *(float *)(((int)stk + 4)) = t260;
                    t262 = FUN_0c0da410((*(int *)((a4 + t242))));
                    t242 = (FUN_0c0848d6(1.0f, t262, t260));
                    t242 = 0xA4;
                    *(unsigned int *)((a4 + t242)) = ((*(int *)((a4 + t242))) + 0x800);
                }
                t242 = 0x7C;
                t267 = *(int *)((a4 + t242));
                *(unsigned int *)((a4 + t242)) = (t267 + 0x1);
                t242 = (FUN_0c0c475c(((t267 + 0x1) - 1), u245));
                t242 = 0x9C;
                if (t243 == (*(int *)((a4 + t242)))) {
                    t242 = (FUN_0c0849da());
                }
                t242 = (nlPopMatrix(0x1));
                t243 = (t243 + 0x1);
            }
            t275 = t242;
        }
        t285 = t275;
    }
    return t285;
}
