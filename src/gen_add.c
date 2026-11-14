/* Straight-line functions with calls and guards (batch gen_add): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4CC_uint { char p[0x4CC]; unsigned int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o534_int { char p[0x534]; int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5B8_int { char p[0x5B8]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int ADXB_DecodeHeader(int, int, int, int, int, int, int, int, int, int, int, int);
int ADXB_GetFormat(int);
int FUN_0c0353e4(int);
int FUN_0c035402(int);
int FUN_0c0355f8(int);
int FUN_0c038e34(int);
int FUN_0c04313c(int);
int FUN_0c053ac4(int);
int FUN_0c084218(int);
int FUN_0c0a5cc6(int);
int FUN_0c0a5dfa(void);
int FUN_0c0a5fdc(void);
int FUN_0c0c497c(int, float);
int FUN_0c0c49b0(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dab20(int, int, int);
int FUN_0c0dabd0(int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c220360(Stk63);
int SJ_SplitChunk(int, int, int, int);
int buDeleteFile(int, int);
int memset(int, int, int);
int pdGetPeripheral(int);
int syChainInit(void);
int syG2SysInit(void);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int vmsio_init(void);
int kmiInitPAL(void);
int FUN_0c0dac80(int a4, int a5);
int FUN_0c074112(int a4, int a5, int a6, int a7);
int FUN_0c0a6356(void);
int vmsfs_init(int a4, int a5, int a6);
int FUN_0c03a68e(int a4);
int FUN_0c031d18(int a4);
int adxsjd_decode_prep(int a4, int a5, int a6, int a7);
int FUN_0c0b9da0(int a4);
int FUN_0c0cec76(int a4, int a5);
int DECtoBCD(int a4);
int syHwInit2(void);

int kmiInitPAL(void)
{
    int stk[131];
    register int t64;
    register int t66;
    register int t70;
    register int t75;
    register int t77;
    register int t92;
    register int t99;
    register int t100;
    register int t101;
    register int t1;
    register int t12;
    register int t21;
    register int t33;
    register int t36;
    register int t39;
    register int t72;
    register int t83;
    register int t102;

    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x8)) = 0x35F;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x0)) = 0x8D;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x4)) = 0x34B;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x18)) = 0x3F;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC9522FC)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x14)) = 0x270;
    } else {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x14)) = 0x138;
    }
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x42) == 66) {
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t12 = (((struct o20_int *)0xC9522FC)->v), (t12 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x134;
        }
        if ((((((struct o20_int *)0xC9522FC)->v)) & 32) != 0) {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x134;
        } else {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x136;
        }
    } else {
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC9522FC)->v), (t21 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x134;
        }
        if ((((((struct o20_int *)0xC9522FC)->v)) & 32) != 0) {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x134;
        } else {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x136;
        }
    }
    (((struct o78_uint *)((((int)stk + 252) + 0x14)))->v) = 0x15;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t33 = (((struct o20_int *)0xC9522FC)->v), (t33 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x20)) = 0x16A;
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x24)) = 0x1F;
        t36 = 0x5;
    } else {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x20)) = 0x31F;
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x24)) = 0xF;
        t36 = 0x3;
    }
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x1C)) = t36;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t39 = (((struct o20_int *)0xC9522FC)->v), (t39 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x30)) = 0x1;
    } else {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x30)) = 0x0;
    }
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x34)) = 0x0;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x3C)) = 0x0;
    (((struct o40_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
        } else {
            (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2;
        }
    } else {
        if ((((((struct o20_int *)0xC9522FC)->v)) & 44) != 0) {
            if (0x1 != 0) {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
            } else {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2;
            }
        } else {
            if (0x0 != 0) {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
            } else {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2;
            }
        }
    }
    if (((((struct o0_int *)0xC9522FC)->v)) == 6) {
        (((struct o70_uint *)((((int)stk + 252) + 0x14)))->v) = 0x16;
    } else {
        (((struct o70_uint *)((((int)stk + 252) + 0x14)))->v) = 0x3F;
    }
    if ((((((struct o20_int *)0xC9522FC)->v)) & 16) != 0) {
        (((struct o6C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x1;
    }
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x28)) = 0x0;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x2C)) = 0x1;
    (((struct o48_uint *)((((int)stk + 252) + 0x14)))->v) = 0x1;
    (((struct o4C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o50_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o54_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o58_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o5C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o68_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o60_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o64_uint *)((((int)stk + 252) + 0x14)))->v) = 0xF0;
    (((struct oF8_uint *)((((int)stk + 252) + 0x14)))->v) = 0xAE;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x42) == 66) {
        t64 = (((struct o4_int *)0xC237834)->v);
        *(unsigned int *)((((int)stk + 252) + 0x0)) = ((((struct o0_int *)0xC237834)->v));
        *(unsigned int *)((((int)stk + 252) + 0x4)) = t64;
        t66 = (((struct oC_int *)0xC237834)->v);
        *(unsigned int *)((((int)stk + 252) + 0x8)) = ((((struct o8_int *)0xC237834)->v));
        *(unsigned int *)((((int)stk + 252) + 0xC)) = t66;
        *(unsigned int *)((((int)stk + 252) + 0x10)) = ((((struct o10_int *)0xC237834)->v));
        (((struct oF4_uint *)((((int)stk + 252) + 0x14)))->v) = (*(int *)((((int)stk + 252) + (((((struct o30_int *)0xC9522FC)->v)) << 2))));
        t70 = (((struct oF4_int *)((((int)stk + 252) + 0x14)))->v);
        t75 = t70;
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t72 = (((struct o20_int *)0xC9522FC)->v), (t72 & 44) != 0) && (0x1 != 0))) {
            t75 = (t70 - 1);
        }
        (((struct oF0_uint *)((((int)stk + 252) + 0x14)))->v) = t75;
        t77 = *(int *)(((((((struct o30_int *)0xC9522FC)->v)) << 2) + 0xC9527D4));
        (((struct o8_uint *)0xC952614)->v) = (((int)((unsigned int)((int)((unsigned int)t77 + (unsigned int)0x0)) + ((((int)0x0 > (int)t77)) ? 1u : 0u))) >> 1);
    } else {
        if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t83 = (((struct o20_int *)0xC9522FC)->v), (t83 & 44) != 0) && (0x1 != 0))) {
            (((struct oF0_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2D;
        } else {
            (((struct oF0_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2E;
        }
        (((struct oF4_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2E;
        (((struct o8_uint *)0xC952614)->v) = 0xF0;
    }
    t92 = *(int *)(((((int)stk + 252) + 0x14) + 0xC));
    (((struct o0_uint *)0xC952614)->v) = ((((int)((unsigned int)((int)((unsigned int)t92 + (unsigned int)0x0)) + ((((int)0x0 > (int)t92)) ? 1u : 0u))) >> 1) + ((((struct o8_int *)0xC952614)->v)));
    (((struct o4_uint *)0xC952614)->v) = (*(int *)(((((int)stk + 252) + 0x14) + 0xC)));
    t99 = (((int)stk + 252) + 0x14);
    t100 = ((((int)stk + 252) + 0x14) + 252);
    t101 = ((int)stk + 0);
    for (;;) { t102 = *(int *)t99; t99 = (t99 + 4); if ((unsigned int)t100 < (unsigned int)t99) break; *(unsigned int *)t101 = t102; t101 = (t101 + 4); }
    return (FUN_0c220360(*(Stk63 *)((int)stk + 0)));
}

int FUN_0c0dac80(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_7 = a5;
    v0_0 = (0xC943FA8);
    v0_1 = (0x0);
    v0_2 = (0xC9441C0);
    R13 = (0x3);
    v0_3 = (v0_7);
    v0_4 = (0x8);
    v0_5 = (v0_6);
    L_C0DAF10:;
    v0_7 = *(signed char *)((v0_5 + 0x0));
    v0_6 = (v0_7);
    if (((signed char)v0_7 == 0)) goto L_C0DAF1C;
    if (((signed char)v0_6 == 37)) goto L_C0DACBA;
    L_C0DAEC4:;
    *(unsigned char *)((v0_0 + v0_1)) = v0_6;
    v0_1 = ((v0_1 + 0x1));
    L_C0DAF0E:;
    v0_5 = ((v0_5 + 0x1));
    goto L_C0DAF10;
    L_C0DACBA:;
    v0_7 = *(signed char *)(((v0_5 + 0x1) + 0x0));
    v0_8 = ((signed char)v0_7);
    v0_6 = (v0_7);
    v0_5 = ((v0_5 + 0x1));
    if (((signed char)v0_7 != 45)) goto L_C0DACD0;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x80));
    L_C0DAD08:;
    *(unsigned char *)((v0_2 + 0x3)) = v0_8;
    goto L_C0DACBA;
    L_C0DACD0:;
    if ((v0_8 != 43)) goto L_C0DACE0;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x40));
    goto L_C0DAD08;
    L_C0DACE0:;
    if (((signed char)v0_6 == 32)) goto L_C0DACBA;
    v0_8 = ((signed char)v0_6);
    if (((signed char)v0_6 != 35)) goto L_C0DAD00;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x20));
    goto L_C0DAD08;
    L_C0DAD00:;
    if ((v0_8 != 48)) goto L_C0DAD10;
    v0_8 = (((*(signed char *)((v0_2 + 0x3))) | 0x10));
    goto L_C0DAD08;
    L_C0DAD10:;
    v0_7 = ((signed char)v0_6);
    if (((signed char)v0_6 == 100)) goto L_C0DAD40;
    if ((v0_7 == 120)) goto L_C0DAD40;
    if ((v0_7 == 88)) goto L_C0DAD40;
    if ((v0_7 == 115)) goto L_C0DAD40;
    if ((v0_7 == 102)) goto L_C0DAD40;
    if ((v0_7 == 112)) goto L_C0DAD40;
    if ((v0_7 == 99)) goto L_C0DAD40;
    if ((v0_7 != 0)) goto L_C0DACBA;
    L_C0DAD40:;
    v0_8 = ((signed char)v0_6);
    if (((signed char)v0_6 != 88)) goto L_C0DAD4A;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 + 0x4);
    v0_7 = ((v0_1 + v0_0));
    v0_8 = (0x1);
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0DAE60;
    v0_3 = ((v0_3 + 0x8));
    L_C0DAE62:;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 - 4);
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0DAE80;
    v0_6 = ((v0_3 - 8));
    L_C0DAE82:;
    v0_8 = ((FUN_0c0dab20((*(int *)((v0_6 + 0x0))), v0_7, v0_8)));
    L_C0DAE86:;
    v0_1 = ((v0_1 + v0_8));
    goto L_C0DAF0E;
    L_C0DAE80:;
    v0_6 = ((*(int *)(((int)stk + 0))));
    goto L_C0DAE82;
    L_C0DAE60:;
    v0_3 = ((*(int *)(((int)stk + 4))));
    goto L_C0DAE62;
    L_C0DAD4A:;
    if ((v0_8 != 99)) goto L_C0DAD52;
    v0_7 = ((v0_3 + 0x4));
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0DAEA0;
    v0_3 = ((v0_3 + 0x8));
    L_C0DAEA2:;
    v0_6 = ((v0_3 - 4));
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0DAEC0;
    v0_6 = ((v0_3 - 8));
    L_C0DAEC2:;
    v0_6 = ((*(int *)((v0_6 + 0x0))));
    goto L_C0DAEC4;
    L_C0DAEC0:;
    v0_6 = (v0_6);
    goto L_C0DAEC2;
    L_C0DAEA0:;
    v0_3 = (v0_7);
    goto L_C0DAEA2;
    L_C0DAD52:;
    if ((v0_8 == 100)) goto L_C0DAD80;
    if ((v0_8 != 102)) goto L_C0DAD5E;
    goto L_C0DAF0E;
    L_C0DAD5E:;
    if ((v0_8 == 112)) goto L_C0DADD0;
    if ((v0_8 != 115)) goto L_C0DAD6A;
    v0_7 = ((v0_3 + 0x4));
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0DAEE0;
    v0_3 = ((v0_3 + 0x8));
    L_C0DAEE2:;
    v0_6 = ((v0_3 - 4));
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0DAEF0;
    v0_6 = ((v0_3 - 8));
    L_C0DAEF0:;
    v0_6 = ((*(int *)((v0_6 + 0x0))));
    L_C0DAF08:;
    if (((*(signed char *)((v0_6 + 0x0))) != 0)) goto L_C0DAF00;
    goto L_C0DAF0E;
    L_C0DAF00:;
    *(unsigned char *)((v0_0 + v0_1)) = (*(signed char *)((v0_6 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_6 = ((v0_6 + 0x1));
    goto L_C0DAF08;
    L_C0DAEE0:;
    v0_3 = (v0_7);
    goto L_C0DAEE2;
    L_C0DAD6A:;
    if ((v0_8 == 120)) goto L_C0DADDE;
    goto L_C0DAF0E;
    L_C0DADDE:;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 + 0x4);
    v0_7 = ((v0_1 + v0_0));
    v0_8 = (0x0);
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0DAE00;
    v0_3 = ((v0_3 + 0x8));
    L_C0DAE02:;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 - 4);
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0DAE20;
    v0_6 = ((v0_3 - 8));
    L_C0DAE22:;
    v0_8 = ((FUN_0c0dab20((*(int *)((v0_6 + 0x0))), v0_7, v0_8)));
    goto L_C0DAE86;
    L_C0DAE20:;
    v0_6 = ((*(int *)(((int)stk + 4))));
    goto L_C0DAE22;
    L_C0DAE00:;
    v0_3 = ((*(int *)(((int)stk + 0))));
    goto L_C0DAE02;
    L_C0DADD0:;
    *(unsigned char *)((v0_2 + 0x3)) = ((*(signed char *)((v0_2 + 0x3))) | 0x2);
    *(unsigned char *)((v0_2 + 0x3)) = ((*(signed char *)((v0_2 + 0x3))) | 0x8);
    *(unsigned int *)((v0_2 + 0xC)) = v0_4;
    goto L_C0DADDE;
    L_C0DAD80:;
    *(unsigned int *)(((int)stk + 0)) = (v0_3 + 0x4);
    v0_7 = ((v0_1 + v0_0));
    if ((((v0_3 + 0x4) & R13) == 0)) goto L_C0DADA0;
    v0_3 = ((v0_3 + 0x8));
    L_C0DADA2:;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 - 4);
    if ((((v0_3 - 4) & R13) == 0)) goto L_C0DADC0;
    v0_6 = ((v0_3 - 8));
    L_C0DADC2:;
    v0_8 = ((FUN_0c0dabd0((*(int *)((v0_6 + 0x0))), v0_7)));
    goto L_C0DAE86;
    L_C0DADC0:;
    v0_6 = ((*(int *)(((int)stk + 4))));
    goto L_C0DADC2;
    L_C0DADA0:;
    v0_3 = ((*(int *)(((int)stk + 0))));
    goto L_C0DADA2;
    L_C0DAF1C:;
    *(unsigned char *)((v0_0 + v0_1)) = 0x0;
    return v0_1;
}



int vmsfs_init(int a4, int a5, int a6)
{
    register int t0;
    register int t5;
    int t6;
    register int t19;
    register int t4;

    *(unsigned int *)0xC956764 = 0xC956750;
    t0 = 0xC9571A8;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC9571C8) {
            break;
        }
    }
    memset(0xC956750, 0x0, 0x14);
    memset(0xC956768, 0x0, 0xA40);
    vmsfs_setdevicetype(0x0);
    (((struct o8_uint *)0xC95B668)->v) = 0x0;
    t5 = 0x0;
    t6 = 0x1;
    for (;;) {
        t5 = (t5 + 0x1);
        if ((a5 & t6) != 0) {
            t4 = ((((struct o8_int *)0xC95B668)->v));
            t4 = (t4 + 0x1);
            (((struct o8_uint *)0xC95B668)->v) = t4;
        }
        t6 = (t6 << 1);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    if (a6 != 0) {
        vmsfs_init_work_normal(a4, a5, a6);
        *(unsigned int *)(((*(int *)0xC956764) + 0x8)) = 0x0;
    } else {
        vmsfs_init_work_new(a4);
        *(unsigned int *)(((*(int *)0xC956764) + 0x8)) = 0x1;
    }
    (((struct o0_uint *)0xC95B668)->v) = 0x8;
    (((struct o4_uint *)0xC95B668)->v) = 0x0;
    vmsfs_setretry(0xA);
    t19 = (((struct o0_int *)0xC95B668)->v);
    memset(0xC95B428, 0x0, (((((t19 << 2) << 1) + t19) << 2) << 1));
    vmsio_init();
    return 0x0;
}

int FUN_0c03a68e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        if (((((struct o5B8_int *)(a4))->v)) != 0) {
            t0 = 0x2C4;
            t1 = ((((struct o5B8_int *)(a4))->v));
        } else {
            FUN_0c053ac4(a4);
            FUN_0c035402(a4);
            t2 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((((struct o2A0_int *)(a4))->v)) & 0x1) << 1) + (0x11E + (*(int *)((0xC1F8E4C + (((t2 << 2) + t2) << 2)))))) + 0x0)));
            t0 = 0x5B8;
            t1 = ((((struct o2C4_int *)(a4))->v));
        }
        *(unsigned int *)((a4 + t0)) = t1;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o20C_uint *)(a4))->v) = 0x4000;
        (((struct o4C4_uint *)(a4))->v) = 0x4;
        (((struct o4C8_uint *)(a4))->v) = 0x0;
        (((struct o4CC_uint *)(a4))->v) = 0x1;
        t0 = FUN_0c04313c(a4);
        if ((int)t0 >= 0) {
            (((struct o1B0_uint *)(a4))->v) = 0xFFFFFFFF;
            (((struct o3AC_uint *)(a4))->v) = 0xFFFFFFFF;
            (((struct o3B0_uint *)(a4))->v) = 0x0;
            t0 = 0x3B0;
        } else {
            (((struct o3AC_uint *)(a4))->v) = 0x1;
            t0 = 0x3AC;
        }
        return t0;
    }
    FUN_0c053ac4(a4);
    FUN_0c035402(a4);
    return FUN_0c038e34(a4);
}

int FUN_0c031d18(int a4)
{
    int t0;

    if (((((((struct o534_int *)(a4))->v)) & 2) != 0) && (t0 = (((struct oCC_int *)(a4))->v), (int)t0 >= 0)) {
        (((struct oD0_uint *)((*(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v) = 0xFFFFFFFF;
    }
    t0 = (((struct o2F4_int *)(a4))->v);
    if ((t0 & 0xFFF0) != 0) {
        if ((t0 & 0xFFF0) != 0x100) {
            if ((t0 & 0xFFF0) != 0x200) {
                FUN_0c0355f8(a4);
                (((struct o4C4_uint *)(a4))->v) = 0x0;
                (((struct o4CC_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
                FUN_0c0353e4(a4);
                FUN_0c035402(a4);
                (((struct o4C4_uint *)(a4))->v) = 0x4;
                (((struct o4CC_uint *)(a4))->v) = 0x1;
            }
        } else {
            (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
            (((struct o4C4_uint *)(a4))->v) = 0x0;
            (((struct o4CC_uint *)(a4))->v) = 0x0;
        }
    } else {
        FUN_0c0353e4(a4);
        FUN_0c035402(a4);
        if ((int)((((struct o2A0_int *)(a4))->v)) <= (int)0x1) {
            (((struct o2D4_uint *)(a4))->v) = 0x3;
        }
        (((struct o4C4_uint *)(a4))->v) = 0x0;
        (((struct o4CC_uint *)(a4))->v) = 0x0;
    }
    (((struct o534_uint *)(a4))->v) = 0x0;
    (((struct o1EC_uint *)(a4))->v) = 0xFFC;
    (((struct o1B0_uint *)(a4))->v) = 0x0;
    (((struct o55C_uint *)(a4))->v) = 0x0;
    (((struct oD8_uint *)(a4))->v) = 0x0;
    (((struct o1BC_uint *)(a4))->v) = 0x0;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    t0 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        (((struct o4D0_uint *)(a4))->v) = 0x1;
        t0 = 0x4D0;
    }
    return t0;
}

int adxsjd_decode_prep(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t12;
    register int t13;
    register int t15;
    register int t24;
    register int t27;
    register int t35;
    int t8;

    t0 = *(int *)((a4 + 0x8));
    t2 = *(int *)((a4 + 0x4));
    t4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, 0x1000, (((int)stk + 0) + 0xC), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t5 = *(int *)(((int)stk + 16));
    if ((int)t5 >= (int)0x10) {
        t7 = ADXB_DecodeHeader(t2, (*(int *)(((int)stk + 12))), t5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        if ((t7 != 0) && (t8 = *(int *)(((int)stk + 16)), (int)t7 <= (int)t8)) {
            t9 = ADXB_GetFormat(t2);
            if (t9 == 4) {
                *(unsigned char *)((a4 + 0x3)) = 0x1;
            }
            t12 = ADXB_GetFormat(t2);
            if (t12 == 2) {
                t13 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 0)) = t13;
                t15 = 0x40;
                if ((int)t13 < (int)0x40) {
                    t15 = (*(int *)(((int)stk + 0)));
                }
                FUN_0c0e631c((a4 + 0x50), (*(int *)(((int)stk + 12))), t15);
            }
            SJ_SplitChunk((((int)stk + 0) + 0xC), t7, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
            t24 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t27 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 0) + 0x4), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t35 = 0x2;
        } else {
            t35 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
    } else {
        t35 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    }
    return t35;
}


int FUN_0c0cec76(int a4, int a5)
{
    register int t0;

    for (;;) {
        t0 = buDeleteFile(a4, a5);
        if (t0 == 0) {
            break;
        }
    }
    return t0;
}

int DECtoBCD(int a4)
{
    return (((((int)((unsigned int)a4 / (unsigned int)0xA)) << 2) << 2) + ((int)((unsigned int)a4 % (unsigned int)0xA)));
}

