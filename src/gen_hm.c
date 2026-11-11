/* Straight-line functions with calls and guards (batch gen_hm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01fea0(int);
int FUN_0c01ff28(int, int, int, int);
int FUN_0c02dc30(int);
int FUN_0c035efc(int);
int FUN_0c03e6c6(int, int, int, int);
int FUN_0c042980(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c07e636(int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e15d4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _divls(void);
int _modls(void);
int FUN_0c0e5fe4(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0cd9c0(int a4);
int FUN_0c09c4f4(int a4);
int FUN_0c06ede8(int a4, int a5, int a6, int a7);
int FUN_0c0201f4(int a4, int a5, int a6, int a7);
int FUN_0c08eabc(int a4, int a5, int a6, int a7);
int FUN_0c0803f4(int a4);
struct o1B0_int { char p[0x1B0]; int v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o29C_float { char p[0x29C]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o3A4_float { char p[0x3A4]; float v; };
struct o3AC_float { char p[0x3AC]; float v; };
struct o3B0_float { char p[0x3B0]; float v; };
struct o3BC_int { char p[0x3BC]; int v; };
struct o3C0_int { char p[0x3C0]; int v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_int { char p[0x3D8]; int v; };
struct o3D8_uint { char p[0x3D8]; unsigned int v; };
struct o3DC_int { char p[0x3DC]; int v; };
struct o3DC_uint { char p[0x3DC]; unsigned int v; };
struct o3E0_int { char p[0x3E0]; int v; };
struct o3E0_uint { char p[0x3E0]; unsigned int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3E4_uint { char p[0x3E4]; unsigned int v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o474_int { char p[0x474]; int v; };
struct o47C_int { char p[0x47C]; int v; };
struct o48C_int { char p[0x48C]; int v; };
struct o498_int { char p[0x498]; int v; };
struct o4DC_int { char p[0x4DC]; int v; };
struct o5AC_int { char p[0x5AC]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct o0_int { int v; };
struct oC_int { char p[0xC]; int v; };






int FUN_0c0201f4(int a4, int a5, int a6, int a7)
{
    int t;
    int s;
    int p;

    if ((*(int *)0xC204998 != 0) && ((((struct o0_int *)0xC23ED50)->v) == 29) && ((((struct o48C_int *)(a4))->v) == 44) && ((int)((((struct o304_int *)(a4))->v)) <= 0)) {
        (((struct oC_int *)0xC23ED50)->v) = (((struct oC_int *)0xC23ED50)->v) | 0x200;
    }
    t = *(int *)0xC23A258;
    if ((((struct o21C_int *)(a4))->v) == t) {
        return 0x21C;
    }
    (((struct o21C_int *)(a4))->v) = t;
    t = FUN_0c01ff28(a4, a5, a6, a7);
    if (t != 0) {
        return t;
    }
    if (*(int *)(0xC247030 + ((((struct oBC_int *)(a4))->v) << 2)) == 2) {
        *(int *)(((((struct oBC_int *)(a4))->v) << 2) + 0xC247030) = 0x4;
    }
    p = ((((struct o498_int *)(a4))->v) << 4) + 0xC2460F4;
    s = (unsigned short)(*(short *)(p + 0x4));
    switch (s) {
    case 5:
        (((struct o1B0_int *)(a4))->v) = 0x0;
        if ((int)((((struct o4DC_int *)(a4))->v)) > 0) {
            (((struct o20C_int *)(a4))->v) = (((struct o5AC_int *)(a4))->v);
        }
        *(unsigned short *)(p + 0x4) = 0x2;
        *(int *)(p + 0x8) = 0x3;
        *(int *)(((((struct oBC_int *)(a4))->v) << 2) + 0xC247030) = *(int *)(p + 0xC);
        return 0x498;
    case 4:
        t = *(int *)(0xC247030 + ((((struct oBC_int *)(a4))->v) << 2));
        if (t == 8) {
            return t;
        }
        FUN_0c042980(a4);
        if ((int)((((struct o4DC_int *)(a4))->v)) > 0) {
            return ((int (*)(int))(0xC020166))(a4);
        }
        p = ((((struct o498_int *)(a4))->v) << 4) + 0xC2460F4;      /* FUN_0c042980 ran since p was read */
        *(int *)(p + 0xC) = *(int *)(((((struct oBC_int *)(a4))->v) << 2) + 0xC247030);
        *(int *)(((((struct oBC_int *)(a4))->v) << 2) + 0xC247030) = 0x8;
        return 0xBC;
    case 3:
        (((struct o1B0_int *)(a4))->v) = 0xFFFFFFFF;
        if ((((((struct oC8_int *)(a4))->v) & 0x230) != 0) && ((int)((((struct o304_int *)(a4))->v)) <= 0) && (*(int *)(0xC247030 + ((((struct oBC_int *)(a4))->v) << 2)) != 4)) {
            *(int *)(((((struct oBC_int *)(a4))->v) << 2) + 0xC247030) = 0x4;
            (((struct o304_int *)(a4))->v) = (((struct o304_int *)(a4))->v) + 0x1;
        }
        if ((int)((((struct o4DC_int *)(a4))->v)) > 0) {
            (((struct o5AC_int *)(a4))->v) = (((struct o20C_int *)(a4))->v);
            (((struct o20C_int *)(a4))->v) = 0x1;
            *(int *)(p + 0xC) = *(int *)(((((struct oBC_int *)(a4))->v) << 2) + 0xC247030);
            *(int *)(((((struct oBC_int *)(a4))->v) << 2) + 0xC247030) = 0x8;
            *(unsigned short *)(p + 0x4) = 0x4;
            return 0x4;
        }
        t = FUN_0c035efc(a4);
        p = ((((struct o498_int *)(a4))->v) << 4) + 0xC2460F4;      /* the callee ran since p was read */
        switch (t) {
        case 1:
            *(unsigned short *)(p + 0x4) = 0x4;
            (((struct o4DC_int *)(a4))->v) = 0x1;
            break;
        case 2:
            *(unsigned short *)(p + 0x4) = 0x4;
            (((struct o4DC_int *)(a4))->v) = 0x2;
            break;
        case 4:
            *(unsigned short *)(p + 0x4) = 0x4;
            (((struct o4DC_int *)(a4))->v) = 0x3;
            break;
        case 8:
            *(unsigned short *)(p + 0x4) = 0x4;
            (((struct o4DC_int *)(a4))->v) = 0x4;
            break;
        }
        break;
    case 2:
        break;
    default:
        return s;
    }
    if (((int)((((struct o4DC_int *)(a4))->v)) > 0) && ((((struct o1BC_int *)(a4))->v) == 0)) {
        FUN_0c042980(a4);
    } else {
        if (FUN_0c01fea0(a4) != 0) {
            FUN_0c02dc30(a4);
        } else {
            FUN_0c03e6c6(a4, 0x0, 0x0, 0x0);
        }
        if ((((struct o47C_int *)(a4))->v) != 0) {
            ((int (*)(int))((((struct o47C_int *)(a4))->v)))(a4);
            if ((int)((((struct o4DC_int *)(a4))->v)) > 0) {
                FUN_0c042980(a4);
            }
        }
    }
    if ((((struct o474_int *)(a4))->v) != 0) {
        ((int (*)(int))((((struct o474_int *)(a4))->v)))(a4);
    }
    return ((int (*)(int))(0xC020166))(a4);
}


int FUN_0c0803f4(int a4)
{
    int stk[19];
    register int t4;
    register int t5;
    register int t10;
    register float u11;
    register int t27;
    register int t30;
    register int t64;
    register float u65;
    register int t135;
    register int t107;
    register int t108;
    register int t109;
    register float u110;
    register int t118;
    register float u136;
    register float u139;
    register int t100;
    register float u101;
    register float u21;
    register float u15;
    register int t92;
    register float u93;
    register int t61;
    register float u62;
    register float u54;
    register float u84;
    register float u75;
    register int t129;
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    t4 = (((struct oBC_int *)((*(int *)((0xC246FF0 + (((((struct o3BC_int *)(a4))->v)) << 2))))))->v);
    t5 = (((struct oBC_int *)((*(int *)((0xC246FF0 + (((((struct o3C0_int *)(a4))->v)) << 2))))))->v);
    FUN_0c07e5c8(a4);
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 16) != 0) {
        t10 = *(int *)0xC247D6C;
        if (t10 != 0) {
            if (t10 != 1) {
            } else {
                u11 = (((struct o3B0_float *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((0x3A4 + a4)); }
                u15 = u11;
            }
            u21 = u15;
        } else {
            nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
            u21 = 15.0f;
        }
        t100 = 0x1;
        u101 = u21;
    } else {
        t27 = FUN_0c0d9dc0(((*(float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x0))) - (*(float *)((((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268) + 0x0)))), (((((struct o8_float *)(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268)))->v)) - ((((struct o8_float *)(((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268)))->v))));
        if ((*(int *)0xC247074) == 1) {
            *(unsigned int *)(((int)stk + 16)) = (((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268) + 0xC);
            R1004 = (((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0xC);
            t30 = *(short *)0xC247CBC;
            if (t30 != 68) {
                if (t30 != 78) {
                    if (t30 != 80) {
                        nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
                        (((struct o3DC_uint *)(a4))->v) = 0xFFFFE001;
                        (((struct o3E0_uint *)(a4))->v) = ((short)t27 + 0x7FFF);
                    } else {
                        nlSubVector3op((((int)stk + 4) + 0x10), (R1004), (*(int *)(((int)stk + 16))));
                        FUN_0c0a7714((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
                        (((struct o3F4_uint *)(a4))->v) = 0x1;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((R1004)); }
                        (((struct o3DC_uint *)(a4))->v) = (*(int *)(((int)stk + 8)));
                        (((struct o3E0_uint *)(a4))->v) = ((*(int *)(((int)stk + 12))) + 0xE38);
                    }
                    u54 = 15.0f;
                } else {
                    nlGetAverageVector((R1004), (*(int *)(((int)stk + 16))), (0x284 + a4), 0.5f, 0.5f);
                    (((struct o3DC_uint *)(a4))->v) = 0xFFFFDC72;
                    (((struct o3E0_uint *)(a4))->v) = (short)t27;
                    u54 = 20.0f;
                }
                t61 = 0x1;
                u62 = u54;
            } else {
                (((struct o3F4_uint *)(a4))->v) = 0x1;
                nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
                (((struct o3DC_uint *)(a4))->v) = 0xFFFFF8E4;
                (((struct o3E0_uint *)(a4))->v) = (short)t27;
                t61 = 0x0;
                u62 = 15.0f;
            }
            t92 = t61;
            u93 = u62;
        } else {
            t64 = *(int *)0xC247D6C;
            if (t64 != 0) {
                if (t64 != 1) {
                } else {
                    u65 = (((struct o3B0_float *)(a4))->v);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((0x3A4 + a4)); }
                    (((struct o3DC_uint *)(a4))->v) = 0xFFFFEAAB;
                    (((struct o3E0_uint *)(a4))->v) = ((short)(FUN_0c0d9dc0(((*(float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + 0x0))) - ((((struct o3A4_float *)(a4))->v))), (((((struct o8_float *)(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268)))->v)) - ((((struct o3AC_float *)(a4))->v))))) + 0x3FFF);
                    u75 = u65;
                }
                u84 = u75;
            } else {
                nlGetAverageVector(((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268), ((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268), (0x284 + a4), 0.5f, 0.5f);
                (((struct o3DC_uint *)(a4))->v) = 0xFFFFE001;
                (((struct o3E0_uint *)(a4))->v) = ((short)t27 + 0x7FFF);
                u84 = 20.0f;
            }
            t92 = 0x1;
            u93 = u84;
        }
        t100 = t92;
        u101 = u93;
    }
    if (((((struct o3F4_int *)(a4))->v)) != 0) {
        (((struct o29C_float *)(a4))->v) = u101;
        (((struct o3D4_uint *)(a4))->v) = ((((struct o3DC_int *)(a4))->v));
        (((struct o3D8_uint *)(a4))->v) = ((((struct o3E0_int *)(a4))->v));
    } else {
        t135 = 0;
        if (t100 != 0) {
            t107 = (((struct o3E4_int *)(a4))->v);
            t108 = (((struct o3E0_int *)(a4))->v);
            t109 = (((struct o3D8_int *)(a4))->v);
            u110 = *(float *)0xC0807B0;
            t118 = (short)((t108 + t107) - t109);
            if (_builtin_fabsf((float)(short)((t108 + t107) - t109)) > u110) {
                (((struct o3E4_uint *)(a4))->v) = (((((struct o3E4_int *)(a4))->v)) + 0x7FFF);
                t118 = (short)((((((struct o3E0_int *)(a4))->v)) + ((((struct o3E4_int *)(a4))->v))) - ((((struct o3D8_int *)(a4))->v)));
            }
            t129 = t118;
            _builtin_fabsf((float)(short)((t108 + t107) - t109));
            t135 = ((_builtin_fabsf((float)(short)((t108 + t107) - t109)) > u110));
        } else {
            t129 = (FUN_0c07e636(((((struct o3D8_int *)(a4))->v)), ((((struct o3E0_int *)(a4))->v))));
            t135 = (1);
        }
        u136 = *(float *)0xC0807B8;
        u139 = ((((struct o29C_float *)(a4))->v));
        u139 = u139 + u136 * (u101 - ((((struct o29C_float *)(a4))->v)));
        (((struct o29C_float *)(a4))->v) = u139;
        (((struct o3D4_uint *)(a4))->v) = (int)((float)((((struct o3D4_int *)(a4))->v)) + ((float)(((((struct o3DC_int *)(a4))->v)) - ((((struct o3D4_int *)(a4))->v))) * u136));
        (((struct o3D8_uint *)(a4))->v) = (int)((float)((((struct o3D8_int *)(a4))->v)) + ((float)t129 * u136));
    }
    return (FUN_0c07e2b0(a4));
}
