/* Straight-line functions with calls and guards (batch gen_zp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01f8a0(int, int, int);
int FUN_0c0a6bf8(int, int, int, float);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dd050(int);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c08085c(int a4);
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o250_int { char p[0x250]; int v; };
struct o250_uint { char p[0x250]; unsigned int v; };
struct o260_float { char p[0x260]; float v; };
struct o264_float { char p[0x264]; float v; };
struct o268_float { char p[0x268]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o29C_float { char p[0x29C]; float v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3D8_int { char p[0x3D8]; int v; };
struct o3E0_uint { char p[0x3E0]; unsigned int v; };
struct o3E8_int { char p[0x3E8]; int v; };
struct o3E8_uint { char p[0x3E8]; unsigned int v; };
struct o3F8_int { char p[0x3F8]; int v; };
struct o3F8_uint { char p[0x3F8]; unsigned int v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_float { char p[0xC4]; float v; };
struct oD8_int { char p[0xD8]; int v; };


int FUN_0c08085c(int a4)
{
    int stk[24];
    register int t2;
    register float t76;
    register float u86;
    register float u87;
    register float u88;
    register float u89;
    register float u93;
    register float u95;
    register float t129;
    register float t141;
    register int t153;
    register float u84;
    register float u133;

    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x38)) = *(struct mv3 *)((0x284 + a4)); }
    nlSubVector3op((((int)stk + 4) + 0x50), (0x260 + a4), (0x284 + a4));
    t2 = *(int *)0xC247CA4;
    nlScaleUnitVector((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x50), (((((struct o18_float *)(t2))->v)) + ((((struct o24_float *)(t2))->v))));
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x200) != 0) {
        nlUnitMatrix();
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x50));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x50));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if (((((struct oD8_int *)(a4))->v)) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), ((((struct o18_float *)((*(int *)0xC247CA4)))->v)));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x400) != 0) {
        nlUnitMatrix();
        nlRotateAY(0xFFFFC001);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if (((((struct oD8_int *)(a4))->v)) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), ((((struct o18_float *)((*(int *)0xC247CA4)))->v)));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x800) != 0) {
        nlUnitMatrix();
        nlRotateAY(0x3FFF);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if (((((struct oD8_int *)(a4))->v)) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), ((((struct o18_float *)((*(int *)0xC247CA4)))->v)));
        }
    }
    nlSubVector3op((((int)stk + 4) + 0x44), (0x284 + a4), (((int)stk + 4) + 0x38));
    nlAddVector((0x260 + a4), (((int)stk + 4) + 0x44));
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x1000) == 0) {
    } else {
        (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) & 0xFFFFFFFD);
        if (((((struct o3F8_int *)(a4))->v)) != 0) {
            (((struct o3F8_uint *)(a4))->v) = (((((struct o3F8_int *)(a4))->v)) - 1);
        } else {
            (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) & 0xFFFFFFFB);
        }
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x50));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if (((((struct oD8_int *)(a4))->v)) == 0) {
        } else {
            t76 = nlLength((0xBC + a4), (0x278 + a4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x2C)) = *(struct mv3 *)((0xC8 + a4)); }
            if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 3) {
                u84 = ((((struct o20_float *)((*(int *)0xC247CA4)))->v));
            } else {
                u84 = ((((struct o29C_float *)(a4))->v));
            }
            if (!(t76 > u84)) {
                u86 = (((struct o278_float *)(a4))->v);
                u87 = (((struct oBC_float *)(a4))->v);
                u88 = (((struct o280_float *)(a4))->v);
                u89 = (((struct oC4_float *)(a4))->v);
                (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x2);
                (((struct o29C_float *)(a4))->v) = u84;
                (((struct o260_float *)(a4))->v) = ((((struct oBC_float *)(a4))->v));
                u93 = ((u87 - u86) * (u87 - u86));
                u95 = ((u89 - u88) * (u89 - u88));
                (((struct o264_float *)(a4))->v) = (((((struct o27C_float *)(a4))->v)) + _builtin_sqrtf(((((u84 * u84)) - u93) - u95)));
                (((struct o268_float *)(a4))->v) = ((((struct oC4_float *)(a4))->v));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
                FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                if (((((struct oD8_int *)(a4))->v)) != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0xBC + a4)); }
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0xBC + a4)); }
            }
            if (!((*(float *)(((int)stk + 52))) > -0.099999994f)) {
            } else {
                if ((((((struct o250_int *)(a4))->v)) & 4) != 0) {
                } else {
                    (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x4);
                    if (((((struct o3F8_int *)(a4))->v)) != 0) {
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        nlSubVector3op((((int)stk + 4) + 0x14), (0x254 + a4), (0x278 + a4));
                        FUN_0c0dd050((((int)stk + 4) + 0x14));
                        if ((*(int *)0xC247CFC) != 4) {
                        } else {
                            *(float *)0xC2009A8 = ((((struct o29C_float *)(a4))->v));
                            FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (((((struct o29C_float *)(a4))->v)) * 0.5f));
                            nlAddVector3op((a4 + 0x6C), (0x278 + a4), (((int)stk + 4) + 0x8));
                            nlUnitMatrix();
                            FUN_0c0dcca0((a4 + 0x6C));
                            nlPushMatrix(0x0);
                            nlRotateAY((((((struct o3CE_short *)(a4))->v)) + 0x3FFF));
                            FUN_0c0db470(0xC2009A0, (a4 + 0x60));
                            FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                            if (((((struct oD8_int *)(a4))->v)) != 0) {
                                t129 = nlLength((a4 + 0x6C), (0xBC + a4));
                                *(unsigned int *)(((int)stk + 8)) = 0x1;
                                u133 = t129;
                            }
                            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                            nlRotateAY((((((struct o3CE_short *)(a4))->v)) + 0xBFFF));
                            FUN_0c0db470(0xC2009A0, (a4 + 0x60));
                            FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                            if (((((struct oD8_int *)(a4))->v)) != 0) {
                                t141 = nlLength((a4 + 0x6C), (0xBC + a4));
                                if (t141 > u133) {
                                    *(unsigned int *)(((int)stk + 8)) = 0x2;
                                }
                            }
                            nlPopMatrix(0x1);
                        }
                        *(unsigned int *)(((int)stk + 4)) = 0x38E3;
                        t153 = *(int *)(((int)stk + 8));
                        if (t153 != 1) {
                            if (t153 != 2) {
                                nlOuterProduct((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20));
                                if (0.0f > (*(float *)(((int)stk + 40)))) {
                                    (((struct o3E8_uint *)(a4))->v) = 0xFFFFC71D;
                                } else {
                                    (((struct o3E8_uint *)(a4))->v) = (*(int *)(((int)stk + 4)));
                                }
                            } else {
                                (((struct o3E8_uint *)(a4))->v) = 0xFFFFC71D;
                            }
                        } else {
                            (((struct o3E8_uint *)(a4))->v) = (*(int *)(((int)stk + 4)));
                        }
                    }
                    (((struct o3E0_uint *)(a4))->v) = (((((struct o3D8_int *)(a4))->v)) + ((((struct o3E8_int *)(a4))->v)));
                    (((struct o3F8_uint *)(a4))->v) = 0x78;
                }
            }
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x2000) != 0) {
        nlUnitMatrix();
        nlRotateAY(0xFFFFC001);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x260 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if (((((struct oD8_int *)(a4))->v)) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), ((((struct o1C_float *)((*(int *)0xC247CA4)))->v)));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x4000) != 0) {
        nlUnitMatrix();
        nlRotateAY(0x3FFF);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x260 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if (((((struct oD8_int *)(a4))->v)) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), ((((struct o1C_float *)((*(int *)0xC247CA4)))->v)));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x8000) != 0) {
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), 0xC1027BC);
        nlAddVector3op((a4 + 0x60), (0x260 + a4), 0xC1027BC);
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if (((((struct oD8_int *)(a4))->v)) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), ((((struct o1C_float *)((*(int *)0xC247CA4)))->v)));
        }
    }
    return (nlPopMatrix(0x1));
}
