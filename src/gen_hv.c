/* Straight-line functions with calls and guards (batch gen_hv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016ac0(void);
int FUN_0c01993e(int);
int FUN_0c01a874(void);
int FUN_0c0211a0(void);
int FUN_0c04fb24(void);
int FUN_0c0500ee(void);
int FUN_0c057fd4(int, int);
int FUN_0c084bf6(int, int);
int FUN_0c087aa0(int, int, int);
int FUN_0c0a59f8(int);
int FUN_0c0a5a7a(int);
int FUN_0c0bd65c(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _divls(void);
int __init_target_cc_f(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c01b49a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c089778(int a4);
int FUN_0c087834(int a4);
struct o34_float { char p[0x34]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_short { char p[0x50]; short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o52_short { char p[0x52]; short v; };
struct o54_float { char p[0x54]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o56_short { char p[0x56]; short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o88_ushort { char p[0x88]; unsigned short v; };
struct o8A_ushort { char p[0x8A]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };




int FUN_0c089778(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX((((((struct o3CC_short *)(t0))->v)) + 0x1FFF));
    nlScale(0.699999988f, 0.699999988f, 0.699999988f);
    FUN_0c0de000(0.699999988f);
    t1 = (((struct o68_int *)(a4))->v);
    (((struct o68_uint *)(a4))->v) = (t1 + 0x1);
    FUN_0c0c465c((((t1 + 0x1) - 1) + 0xD8));
    nlPopMatrix(0x1);
    if (((((struct o68_int *)(a4))->v)) == 3) {
        t1 = (((struct o3CE_short *)(t0))->v);
        nlPushMatrix(0x0);
        t2 = 0xC10AAD4;
        t3 = (t1 + 0x7FFF);
        for (;;) {
            t1 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)((a4 + 0x30)); }
            (((struct o88_ushort *)(t1))->v) = 0xFFFFE71D;
            (((struct o8A_ushort *)(t1))->v) = t3;
            t4 = t2;
            t5 = (0x4 + t2);
            t2 = (t2 + 0x8);
            u0 = 20.0f;
            u0 = u0 + 0.0078125f * (float)(unsigned char)(FUN_0c0da2e0());
            (((struct o90_float *)(t1))->v) = u0;
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + (*(float *)((t4 + 0x0))));
            (((struct o78_float *)(t1))->v) = (((((struct o78_float *)(t1))->v)) + (*(float *)((t5 + 0x0))));
            (((struct o9A_ushort *)(t1))->v) = 0xCA;
            (((struct oA2_ushort *)(t1))->v) = 0x1;
            (((struct oA0_ushort *)(t1))->v) = 0xE;
            t3 = (t3 + 0x3333);
            if ((unsigned int)t2 >= (unsigned int)0xC10AAFC) {
                break;
            }
        }
        nlPopMatrix(0x1);
    }
    if (((((struct o68_int *)(a4))->v)) == 5) {
        t1 = FUN_0c0e1830(0xC08C1AA, 0xA4);
        FUN_0c0e19d0(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)((a4 + 0x30)); }
        (((struct o8A_ushort *)(t1))->v) = ((((struct o3CE_short *)(t0))->v));
        (((struct o88_ushort *)(t1))->v) = ((((struct o3CC_short *)(t0))->v));
        (((struct o90_float *)(t1))->v) = 10.0f;
        (((struct o9A_ushort *)(t1))->v) = 0x328;
        (((struct oA0_ushort *)(t1))->v) = 0x15;
    }
    if (((((struct o68_int *)(a4))->v)) == 10) {
        t1 = FUN_0c0e1830(0xC08C1AA, 0xA4);
        FUN_0c0e19d0(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)((a4 + 0x30)); }
        (((struct o8A_ushort *)(t1))->v) = ((((struct o3CE_short *)(t0))->v));
        (((struct o88_ushort *)(t1))->v) = ((((struct o3CC_short *)(t0))->v));
        (((struct o90_float *)(t1))->v) = 10.0f;
        (((struct o9A_ushort *)(t1))->v) = 0x312;
        (((struct oA0_ushort *)(t1))->v) = 0x16;
    }
    t0 = (((struct o64_int *)(a4))->v);
    (((struct o64_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return 0x64;
}

int FUN_0c087834(int a4)
{
    int stk[13];
    register int t6;
    register int t7;
    register float u9;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u61;
    register float u22;
    int t23;
    register int t24;
    register float u25;
    register float u26;
    register int t28;
    register float u30;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u35;
    register int t76;
    register int t103;
    register float u50;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o54_short *)(a4))->v)));
    nlRotateAX(((((struct o52_short *)(a4))->v)));
    t6 = (((struct o50_short *)(a4))->v);
    t7 = (((struct o56_short *)(a4))->v);
    (((struct o56_ushort *)(a4))->v) = (t7 + t6);
    nlRotateAZ((short)(t7 + t6));
    u9 = (((struct o48_float *)(a4))->v);
    nlScale(u9, u9, u9);
    FUN_0c0de000(((((struct o48_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o60_int *)(a4))->v)));
    nlPopMatrix(0x1);
    if (((((struct o58_int *)(a4))->v)) == 0) {
    } else {
        FUN_0c0db470((a4 + 0x30), ((int)stk + 4));
        u18 = *(float *)(((int)stk + 12));
        if (!(u18 > -10.0f)) {
        } else {
            u19 = (((struct o0_float *)0xC247D0C)->v);
            u20 = (((struct o4_float *)0xC247D0C)->v);
            u21 = *(float *)(((int)stk + 4));
            u61 = _builtin_fabsf(u21);
            if (_builtin_fabsf(u21) > (u19 * u18)) {
            } else {
                u22 = *(float *)(((int)stk + 8));
                if (_builtin_fabsf(u22) > (u20 * u18)) {
                    u50 = _builtin_fabsf(u22);
                } else {
                    t23 = FUN_0c0da2e0();
                    t24 = FUN_0c0da2e0();
                    u25 = *(float *)(((int)stk + 4));
                    u26 = *(float *)(((int)stk + 8));
                    t28 = FUN_0c0e19aa(0xC087F9C, 0x6C, (*(int *)0xC23ECF4));
                    FUN_0c0e19d0(t28);
                    u30 = ((-((float)(t24 & 0x1FF) * 1.90734863e-06f)) + -0.00129999989f);
                    u31 = (u25 / (u19 * u18));
                    *(unsigned int *)((t28 + 0x3C)) = 0xC087E98;
                    *(unsigned int *)((t28 + 0x38)) = 0xC0C465C;
                    u32 = (u30 * u31);
                    (((struct o40_float *)(t28))->v) = (-(u32 * 0.849426925f));
                    u33 = ((-((float)(t24 & 0x1FF) * 1.90734863e-06f)) + -0.00129999989f);
                    u34 = (u26 / (u20 * u18));
                    u35 = (u33 * u34);
                    (((struct o44_float *)(t28))->v) = (-(u35 * 0.637070239f));
                    (((struct o48_float *)(t28))->v) = ((-((float)(t24 & 0x1FF) * 1.90734863e-06f)) + -0.00129999989f);
                    (((struct o4C_ushort *)(t28))->v) = 0x3FFF;
                    (((struct o4E_ushort *)(t28))->v) = 0x7FFF;
                    (((struct o58_float *)(t28))->v) = 1.0f;
                    (((struct o54_float *)(t28))->v) = ((((struct o8_float *)((((((0x7 & t23) << 1) + (0x7 & t23)) << 2) + 0xC10A9D4)))->v));
                    (((struct o60_uint *)(t28))->v) = (unsigned short)(*(short *)(((((((0x7 & t23) << 1) + (0x7 & t23)) << 2) + 0xC10A9D4) + 0x0)));
                    (((struct o5C_uint *)(t28))->v) = (unsigned short)(*(short *)(((((((0x7 & t23) << 1) + (0x7 & t23)) << 2) + 0xC10A9D4) + 0x2)));
                    (((struct o64_uint *)(t28))->v) = 0x1;
                    if ((*(int *)0xC23ED84) == 0) {
                        *(unsigned int *)((t28 + 0x0)) = 0xC0E19F2;
                    }
                    FUN_0c0e19f2();
                }
                u61 = u50;
            }
        }
        t76 = (((struct o5C_int *)(a4))->v);
        (((struct o5C_uint *)(a4))->v) = (t76 + 0x1);
        if (((t76 + 0x1) & 0xF) == 0) {
            FUN_0c087aa0((a4 + 0x30), (a4 + 0x3C), (((((struct o54_short *)(a4))->v)) + 0x7FFF));
        }
    }
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC087A94));
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t103 = 0x34;
    if (0.0f > ((((struct o34_float *)(a4))->v))) {
        t103 = (FUN_0c0e19f2());
    }
    return t103;
}
