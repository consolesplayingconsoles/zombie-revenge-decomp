/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c01db0e(int, int);
int FUN_0c023300(int, int, int, int);
int FUN_0c02a19a(int);
int FUN_0c02bc00(int);
int FUN_0c02bc0e(int);
int FUN_0c02bc1c(int);
int FUN_0c034238(int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034b36(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c0392e8(int, int);
int FUN_0c045e54(int, int, int);
float FUN_0c0467c2(int, float, float);
int FUN_0c07ed4c(int);
int FUN_0c07ede6(void);
int FUN_0c082ce0(int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c08e9e0(int);
int FUN_0c09d278(int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c4684(int);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cddba(int);
int FUN_0c0cddda(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e6248(void);
int FUN_0c22ee60(void);
int FUN_0c22eeb2(int, int, int);
extern float _builtin_sqrtf(float);
int kmSetCheapShadowMode(void);
int thunk_kmSetCheapShadowMode(void);
int kmytex_FBDeQueueEntry(int, int, int);
int nlAddVector(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c090f70(int a4);
int FUN_0c0c90d6(int a4, int a5, int a6, float f4, float f5);
int FUN_0c063ff8(int a4, int a5);
void FUN_0c0a9084(int a4);
int FUN_0c22e6f2(int a4, int a5, int a6, int a7);
int FUN_0c037504(int a4);
int FUN_0c051e92(int);
int FUN_0c07ee7c(int a4, int a5);
int FUN_0c0465fa(int a4);
int FUN_0c0be578(int a4, int a5);
int FUN_0c0ce136(int a4);
int FUN_0c06dc1a(int a4);
int FUN_0c02bc2a(int a4, int a5, int a6);
int FUN_0c03eab4(int a4, int a5, int a6, int a7);
int FUN_0c048c1e(int a4, int a5, int a6, int a7, float f4);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o248_int { char p[0x248]; int v; };
struct o248_short { char p[0x248]; short v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o250_float { char p[0x250]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o29C_float { char p[0x29C]; float v; };
struct o2AC_int { char p[0x2AC]; int v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o338_int { char p[0x338]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o340_int { char p[0x340]; int v; };
struct o370_int { char p[0x370]; int v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3BC_int { char p[0x3BC]; int v; };
struct o3C0_int { char p[0x3C0]; int v; };
struct o3CC_int { char p[0x3CC]; int v; };
struct o3CC_uint { char p[0x3CC]; unsigned int v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3D0_int { char p[0x3D0]; int v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_uint { char p[0x3D8]; unsigned int v; };
struct o3E4_uint { char p[0x3E4]; unsigned int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o454_ushort { char p[0x454]; unsigned short v; };
struct o458_float { char p[0x458]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o468_float { char p[0x468]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o488_int { char p[0x488]; int v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4DC_int { char p[0x4DC]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o500_int { char p[0x500]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5B8_uint { char p[0x5B8]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o5C8_uint { char p[0x5C8]; unsigned int v; };
struct o5CC_uint { char p[0x5CC]; unsigned int v; };
struct o5D4_int { char p[0x5D4]; int v; };
struct o5D4_uint { char p[0x5D4]; unsigned int v; };
struct o5E8_uint { char p[0x5E8]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC4_uint { char p[0xC4]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c090f70(int a4)
{
    int t0;
    int t1;
    int t10;
    int t16;
    int t18;
    int t27;
    int t31;
    int t37;
    int t40;
    int t43;
    int t46;
    int t14;
    int stk[22];

    t0 = (((struct o1C4_int *)(a4))->v);
    t1 = *(int *)0xC247CAC;
    *(unsigned int *)(((int)stk + 16)) = ((0xC23F268 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + 0xC);
    nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x3C), (a4 + 0x30));
    FUN_0c0a7714((((int)stk + 4) + 0x8), ((int)stk + 4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
    nlPushMatrix(0x0);
    t10 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = (short)(((((struct o3CE_short *)(t1))->v)) - (*(int *)(((int)stk + 4))));
    if ((int)(*(int *)(((int)stk + 8))) >= (int)0x3FFF) {
        t14 = (((((struct o3CE_short *)(t1))->v)) + 0x3FFF);
    } else {
        t14 = (((((struct o3CE_short *)(t1))->v)) - 16383);
    }
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    t16 = (t10 - 16383);
    for (;;) {
        t18 = FUN_0c0e19aa(0xC0915FC, 0x64, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t18);
        (((struct o48_ushort *)(t18))->v) = t16;
        (((struct o4A_ushort *)(t18))->v) = t14;
        (((struct o50_float *)(t18))->v) = 0.0399999991f;
        (((struct o5C_uint *)(t18))->v) = 0x3C9;
        (((struct o58_float *)(t18))->v) = 1.0f;
        (((struct o60_uint *)(t18))->v) = 0x14;
        nlUnitMatrix();
        FUN_0c0dcca0((*(int *)(((int)stk + 16))));
        nlRotateAY((*(int *)(((int)stk + 4))));
        nlRotateAX(t16);
        FUN_0c0db470(0xC10ABF8, (t18 + 0x30));
        t27 = *(int *)(((int)stk + 8));
        t16 = (t16 + 0xFA4);
        *(unsigned int *)(((int)stk + 8)) = (t27 - 1);
        if ((t27 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x28;
    for (;;) {
        t31 = FUN_0c0e19aa(0xC0916E8, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t31);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t31 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        (((struct o54_float *)(t31))->v) = 1.0f;
        (((struct o58_float *)(t31))->v) = 0.599999964f;
        (((struct o60_uint *)(t31))->v) = 0x295;
        (((struct o64_uint *)(t31))->v) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        (((struct o44_float *)(t31))->v) = ((float)(((FUN_0c0da2e0()) & 0x1F) + 0x10) * 0.049999997f);
        nlUnitMatrix();
        t37 = FUN_0c0da2e0();
        nlRotateAY((0xFFFFC000 + ((t37 & 0x7FFF) + (*(int *)(((int)stk + 4))))));
        t40 = FUN_0c0da2e0();
        nlRotateAX((0xFFFFF000 + ((*(int *)(((int)stk + 12))) - (t40 & 0xFFF))));
        t43 = FUN_0c0da2e0();
        nlRotateAZ((0x37FF + (t43 & 0xFFF)));
        FUN_0c0db470((t31 + 0x3C), (t31 + 0x3C));
        t46 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t46 - 1);
        if ((t46 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return (FUN_0c0cc3f8(0xE2DA9, 0x0, 0x0, 0x0));
}

int FUN_0c0c90d6(int a4, int a5, int a6, float f4, float f5)
{
    int t8;
    int t13;
    int t15;
    int t16;
    int t26;
    int t27;
    int t28;
    int t29;
    float u53;
    float u59;
    float u65;
    int t0;
    int t1;
    int stk[26];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x30);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x30) + 0x4);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x30) + 0x8);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x24);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x24) + 0x8);
    for (;;) {
        if ((int)(*(short *)(((*(int *)((a4 + 0x0))) + 0x0))) >= 0) {
            t0 = (nlPushMatrix(0x0));
            t1 = (*(int *)((a4 + 0x0)));
            t0 = (*(short *)((t1 + 0x2)));
            (((struct o20_ushort *)(((int)stk + 4)))->v) = t0;
            t0 = (FUN_0c0dcca0((t1 + 0x4)));
            t8 = *(int *)(((int)stk + 12));
            t13 = *(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0));
            t15 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + 0x0));
            *(unsigned int *)((t8 + 0x0)) = ((*(int *)((t8 + 0x0))) + 0x4);
            t16 = *(int *)(((int)stk + 16));
            *(unsigned int *)((t16 + 0x0)) = ((*(int *)((t16 + 0x0))) + 0x4);
            *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = (((int)t13 >> 4) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x0)) = (((int)t13 >> 14) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((((t13 << 2) << 2) << 2) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (((int)t15 >> 4) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x0)) = (((int)t15 >> 14) & 0xFFC0);
            *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x0)) = ((((t15 << 2) << 2) << 2) & 0xFFC0);
            t26 = 0x0;
            t27 = 0x0;
            t28 = (*(int *)(((int)stk + 4)));
            t29 = (*(int *)(((int)stk + 8)));
            for (;;) {
                t1 = t27;
                t1 = (t1 << 2);
                t0 = t1;
                if ((int)(*(int *)(((((int)stk + 4) + 0x30) + t0))) < (int)(*(int *)(((((int)stk + 4) + 0x24) + t0)))) {
                    t0 = t1;
                    if ((int)((*(int *)(((((int)stk + 4) + 0x24) + t0))) - (*(int *)(((((int)stk + 4) + 0x30) + t0)))) > (int)0x8000) {
                        *(unsigned int *)((t29 + 0x0)) = ((*(int *)((t29 + 0x0))) + 0x10000);
                    }
                } else {
                    t0 = t26;
                    if ((int)((*(int *)(((((int)stk + 4) + 0x30) + t0))) - (*(int *)(((((int)stk + 4) + 0x24) + t0)))) > (int)0x8000) {
                        *(unsigned int *)((t28 + 0x0)) = ((*(int *)((t28 + 0x0))) + 0x10000);
                    }
                }
                t27 = (t27 + 0x1);
                t28 = (t28 + 0x4);
                t26 = (t26 + 0x4);
                t29 = (t29 + 0x4);
                if ((int)t27 >= (int)0x3) {
                    break;
                }
            }
            t1 = (*(int *)(((int)stk + 20)));
            t1 = (*(int *)((t1 + 0x0)));
            u53 = (float)t1;
            u53 = u53 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) - t1);
            t0 = (nlRotateAZ((int)u53));
            t1 = (*(int *)(((int)stk + 8)));
            t1 = (*(int *)((t1 + 0x0)));
            u59 = (float)t1;
            u59 = u59 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) - t1);
            t0 = (nlRotateAY((int)u59));
            t1 = (*(int *)(((int)stk + 28)));
            t1 = (*(int *)((t1 + 0x0)));
            u65 = (float)t1;
            u65 = u65 + f4 * (float)((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) - t1);
            t0 = (nlRotateAX((int)u65));
            if ((*(short *)(((*(int *)((a4 + 0x0))) + 0x0))) != 0) {
                t0 = (FUN_0c0de000(f5));
                t0 = (FUN_0c0c465c((*(short *)(((*(int *)((a4 + 0x0))) + 0x0)))));
            }
            t0 = 0x20;
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x10);
            t1 = (*(short *)((((int)stk + 4) + t0)));
            t1 = (unsigned short)t1;
            if ((0x1 & t1) != 0) {
                t0 = (FUN_0c0c90d6(a4, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), f4, f5));
            }
            t0 = (nlPopMatrix(0x1));
            if ((t1 & 0x2) == 0) continue;
            break;
        }
        break;
    }
    return t0;
}


void FUN_0c0a9084(int a4)
{
    int t0;
    int t30;
    int t35;
    int t45;
    int t70;
    int t31;
    int t38;

    t0 = (((struct o3CC_int *)(a4))->v);
    if (((((struct o1BC_int *)(a4))->v)) == 0) {
        FUN_0c085704(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        if ((((((struct o20C_int *)(a4))->v)) & 0x20000000) != 0) {
            FUN_0c01db0e(a4, ((((struct oA4_int *)(a4))->v)));
        } else {
            nlAddVector((a4 + 0x30), (a4 + 0x48));
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
        }
        nlAddVector((a4 + 0x54), (a4 + 0x60));
        nlAddVector((a4 + 0x30), (a4 + 0x54));
    }
    FUN_0c0bbbf4(a4);
    if (((((struct o338_int *)(a4))->v)) != 0) {
        nlPushMatrix(0x0);
        nlMultiMatrix((((((((struct oBC_int *)(a4))->v)) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
        FUN_0c0c465c((*(short *)((((((((struct oC0_int *)(a4))->v)) >> 1) << 1) + 0xC10D20C))));
        nlPopMatrix(0x1);
    }
    t30 = *(signed char *)((t0 + 0x5));
    if (((unsigned char)t30 != 0) && (t31 = (((struct o2B4_int *)(a4))->v), (unsigned char)t30 == t31)) {
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        t38 = 0x1;
    } else {
        t35 = 0x0;
        if ((((((struct o2EC_int *)(a4))->v)) & 12) != 0) {
            t35 = 0x1;
        }
        t38 = t35;
    }
    if (t38 != 0) {
        if (((((struct o3AC_int *)(a4))->v)) == 0) {
            t45 = *(signed char *)((t0 + 0x0));
            if ((unsigned char)t45 != 3) {
                if ((unsigned char)t45 != 0) {
                    if ((unsigned char)t45 != 1) {
                        if ((unsigned char)t45 != 2) {
                        } else {
                            (((struct o1BC_uint *)(a4))->v) = 0x1;
                        }
                    }
                } else {
                    (((struct o3CC_uint *)(a4))->v) = (t0 + 0xC);
                    (((struct o2C4_uint *)(a4))->v) = (*(short *)(((t0 + 0xC) + 0x2)));
                    (((struct o2E8_uint *)(a4))->v) = (unsigned char)(*(signed char *)(((t0 + 0xC) + 0x6)));
                    (((struct o2D4_uint *)(a4))->v) = (unsigned char)(*(signed char *)(((t0 + 0xC) + 0x1)));
                    (((struct o3AC_uint *)(a4))->v) = ((unsigned char)(*(signed char *)(((t0 + 0xC) + 0x4))) - 1);
                    if ((unsigned char)(*(signed char *)(((t0 + 0xC) + 0x7))) != 0xFF) {
                        (((struct o6E_ushort *)(a4))->v) = ((unsigned char)(*(signed char *)(((t0 + 0xC) + 0x7))) << 8);
                    }
                    if ((*(int *)(((t0 + 0xC) + 0x8))) != 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((*(int *)(((t0 + 0xC) + 0x8)))); }
                    }
                }
            } else {
                t70 = (((struct o3D0_int *)(a4))->v);
                (((struct o3CC_uint *)(a4))->v) = ((t70 - 12) + 0xC);
                (((struct o2C4_uint *)(a4))->v) = (*(short *)((((t70 - 12) + 0xC) + 0x2)));
                (((struct o2E8_uint *)(a4))->v) = (unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x6)));
                (((struct o2D4_uint *)(a4))->v) = (unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x1)));
                (((struct o3AC_uint *)(a4))->v) = ((unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x4))) - 1);
                if ((unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x7))) != 0xFF) {
                    (((struct o6E_ushort *)(a4))->v) = ((unsigned char)(*(signed char *)((((t70 - 12) + 0xC) + 0x7))) << 8);
                }
                if ((*(int *)((((t70 - 12) + 0xC) + 0x8))) != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((*(int *)((((t70 - 12) + 0xC) + 0x8)))); }
                }
            }
        } else {
            (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 1);
        }
    }
}


int FUN_0c037504(int a4)
{
    int t0;
    float u5;
    float u6;
    int t17;
    int t18;
    int t20;
    int t13;

    t0 = FUN_0c0e1830(0xC03746A, 0x5EC);
    FUN_0c0e19d0(t0);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct oC0_uint *)(t0))->v) = ((((struct oC0_int *)(a4))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0e6248();
    (((struct o20C_uint *)(t0))->v) = 0x40000000;
    u5 = (((struct o284_float *)(a4))->v);
    (((struct o284_float *)(t0))->v) = u5;
    (((struct o27C_float *)(t0))->v) = u5;
    (((struct o278_float *)(t0))->v) = u5;
    (((struct o274_float *)(t0))->v) = u5;
    u6 = (((struct o45C_float *)(a4))->v);
    (((struct o8_float *)((0x468 + t0)))->v) = u6;
    (((struct o4_float *)((0x468 + t0)))->v) = u6;
    (((struct o468_float *)(t0))->v) = u6;
    (((struct o8_float *)((0x45C + t0)))->v) = u6;
    (((struct o4_float *)((0x45C + t0)))->v) = u6;
    (((struct o45C_float *)(t0))->v) = u6;
    (((struct oC4_uint *)(t0))->v) = ((((struct oC4_int *)(a4))->v));
    (((struct o5C8_uint *)(t0))->v) = 0x1;
    (((struct o5CC_uint *)(t0))->v) = 0x1;
    FUN_0c0855ba(t0);
    FUN_0c085638(t0);
    if (((((struct o5A0_int *)(a4))->v)) == 1) {
        (((struct o2C4_uint *)(t0))->v) = 0x4F0;
        t13 = 0x4EF;
    } else {
        (((struct o2C4_uint *)(t0))->v) = 0x4EE;
        t13 = 0x4ED;
    }
    (((struct o5B8_uint *)(t0))->v) = t13;
    (((struct o2CC_uint *)(t0))->v) = 0x1;
    FUN_0c0ba6e8(t0);
    FUN_0c0ba776(t0);
    t17 = 0x0;
    for (;;) {
        t18 = *(int *)((((0x5D0 + a4) + t17) + 0x0));
        t20 = ((0x5D0 + t0) + t17);
        t17 = (t17 + 0x4);
        *(unsigned int *)((t20 + 0x0)) = t18;
        if ((unsigned int)t17 >= (unsigned int)0x18) {
            break;
        }
    }
    (((struct o5D4_uint *)(t0))->v) = (((((struct o5D4_int *)(t0))->v)) + 0x2);
    (((struct o5E8_uint *)(t0))->v) = 0x1;
    FUN_0c039288(t0, 0x1, 0x0);
    FUN_0c039288(t0, 0x0, 0x1);
    FUN_0c039288(t0, 0x9, 0x1);
    FUN_0c039288(t0, 0x2, 0x1);
    FUN_0c039288(t0, 0x3, 0x2);
    FUN_0c039288(t0, 0x4, 0x2);
    FUN_0c039288(t0, 0x5, 0x2);
    FUN_0c039288(t0, 0x6, 0x3);
    FUN_0c039288(t0, 0x7, 0x3);
    FUN_0c039288(t0, 0x8, 0x3);
    FUN_0c0392e8(t0, 0x2);
    FUN_0c0392e8(t0, 0x9);
    FUN_0c0392e8(t0, 0xA);
    FUN_0c0392e8(t0, 0xB);
    FUN_0c0392e8(t0, 0xC);
    FUN_0c0392e8(t0, 0xD);
    FUN_0c0392e8(t0, 0xE);
    return FUN_0c0392e8(t0, 0xF);
}


int FUN_0c07ee7c(int a4, int a5)
{
    int t1;
    int t4;
    int t6;
    int t44;
    int t45;
    int t99;
    int t100;
    int t101;
    int t102;
    int t155;
    int t2;
    int t3;
    int t7;
    int t8;
    int t144;
    int t81;
    int t90;
    int t173;
    int t160;

    t1 = (((struct o0_int *)0xC247CA4)->v);
    if ((((((struct o0_int *)0xC247CFC)->v)) != 12) && (t2 = (((struct o0_int *)0xC23ED50)->v), t3 = (((struct o4_int *)0xC247CA4)->v), t2 != t3)) {
        t4 = *(int *)((t1 + 0x4));
        t6 = *(short *)((t1 + 0x0));
        (((struct oC_uint *)0xC247D64)->v) = (*(int *)((t1 + 0xC)));
        if ((t4 != 0) && (t7 = (((struct o0_int *)0xC23ED50)->v), t8 = (((struct o4_int *)0xC247CA4)->v), (int)t7 > (int)t8)) {
            (((struct o0_uint *)0xC247D64)->v) = t6;
            (((struct o0_uint *)0xC247CFC)->v) = 0xC;
            FUN_0c082ce0(t4);
        } else {
            if (((((struct o0_int *)0xC247CFC)->v)) == 11) {
                (((struct o3F4_uint *)(a4))->v) = 0xA;
                (((struct o29C_float *)(a4))->v) = 50.0f;
                (((struct o3E4_uint *)(a4))->v) = 0x0;
                if (t6 != 5) {
                    (((struct o3D4_uint *)(a4))->v) = 0x0;
                    (((struct o3D8_uint *)(a4))->v) = (((((struct o370_int *)(a4))->v)) + 0x7FFF);
                }
            } else {
                (((struct o3F4_uint *)(a4))->v) = ((*(short *)((((((struct o0_int *)0xC247CA4)->v)) + 0x2))) & 0x1);
            }
            (((struct o0_uint *)0xC247CFC)->v) = t6;
        }
        (((struct o4_uint *)0xC247CA4)->v) = ((((struct o0_int *)0xC23ED50)->v));
    }
    t44 = (((struct o0_int *)0xC247CFC)->v);
    t45 = (((struct o0_int *)0xC247CA4)->v);
    if (t44 != 9) {
        if ((t44 != 2) && ((t44 != 3) && (t44 != 13))) {
            if (t44 != 8) {
                if (t44 != 5) {
                    t144 = t44;
                    if (t44 == 6) {
                        t144 = *(short *)((t45 + 0x2));
                        if (((t144 & 0x6) != 0) && (t81 = (((struct oC_int *)0xC23ED50)->v), (t81 & 0xA00) == 0xA00)) {
                            (((struct o0_uint *)0xC247CFC)->v) = 0x7;
                        }
                    }
                } else {
                    t144 = *(short *)((t45 + 0x2));
                    if (((t144 & 0x6) != 0) && (t90 = (((struct oC_int *)0xC23ED50)->v), (t90 & 0xC00) == 0xC00)) {
                        (((struct o0_uint *)0xC247CFC)->v) = 0x4;
                        (((struct oC_uint *)0xC247D64)->v) = (((((struct oC_int *)0xC247D64)->v)) + 0x20);
                    }
                }
            } else {
                t99 = (((struct o3BC_int *)(a4))->v);
                t100 = *(int *)((0xC247030 + (t99 << 2)));
                t101 = (((struct o3C0_int *)(a4))->v);
                t102 = *(int *)(((0xC247030 + (t101 << 2)) + 0x0));
                if (t100 == 4) {
                    if (t102 == 4) {
                        if ((((((struct o20C_int *)((*(int *)((((t99 << 2) + 0xC246FF0) + 0x0)))))->v)) & 0x40000) != 0) {
                            t144 = (((struct o20C_int *)((*(int *)((((t101 << 2) + 0xC246FF0) + 0x0)))))->v);
                            if ((t144 & 0x80000) == 0) {
                                (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
                            }
                        } else {
                            (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
                            t144 = 0x20C;
                        }
                    } else {
                        (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
                        t144 = t102;
                    }
                } else {
                    (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
                    t144 = t100;
                }
            }
            return t144;
        }
        return FUN_0c07ede6();
    }
    FUN_0c07ede6();
    t155 = *(int *)((((((((struct o3B4_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
    if (((((struct o8_int *)0xC247D64)->v)) == 0) {
        if ((((((struct o340_int *)(t155))->v)) != 5) && ((t160 = (((struct o340_int *)(t155))->v), t160 != 16) && (t173 = (((struct o340_int *)(t155))->v), t173 != 7))) {
            (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
        } else {
            t173 = FUN_0c07ed4c(a4);
            if (t173 == 0) {
                (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
            }
        }
    } else {
        (((struct o0_uint *)0xC247CFC)->v) = ((((struct oC_int *)0xC247CFC)->v));
        t173 = 0x3B4;
    }
    return t173;
}

int FUN_0c0465fa(int a4)
{
    int t22;
    int t32;
    int t36;
    int t42;
    int t50;
    int t106;
    int t118;
    int t122;
    int t125;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;

    if ((((((struct o4B8_float *)(a4))->v)) > 0.0f) && ((t1 = (((struct o4D0_int *)(a4))->v), t1 == 0) && ((t2 = (((struct o500_int *)(a4))->v), t2 != 0) && ((t3 = (((struct o500_int *)(a4))->v), t3 != 1) && ((t4 = (((struct o4C8_int *)(a4))->v), t4 != 3) && (t5 = (((struct o4DC_int *)(a4))->v), t5 == 0)))))) {
        t22 = (((struct o6C_short *)(a4))->v);
        (((struct o6C_ushort *)(a4))->v) = (t22 + 0x80);
        if ((int)(short)(t22 + 0x80) > (int)0x1400) {
            (((struct o6C_ushort *)(a4))->v) = 0x1400;
        }
    } else {
        if ((0.0f > ((((struct o4B8_float *)(a4))->v))) && ((t25 = (((struct o4D0_int *)(a4))->v), t25 == 0) && ((t26 = (((struct o500_int *)(a4))->v), t26 != 0) && ((t27 = (((struct o500_int *)(a4))->v), t27 != 1) && ((t28 = (((struct o4C8_int *)(a4))->v), t28 != 3) && (t29 = (((struct o4DC_int *)(a4))->v), t29 == 0)))))) {
            t32 = (((struct o6C_short *)(a4))->v);
            (((struct o6C_ushort *)(a4))->v) = (t32 - 0x80);
            if ((int)(short)(t32 - 0x80) < (int)0xFFFFF400) {
                (((struct o6C_ushort *)(a4))->v) = 0xFFFFF400;
            }
        } else {
            t36 = 0x100;
            if (((((struct o4C8_int *)(a4))->v)) != 2) {
                (((struct o248_uint *)(a4))->v) = 0x0;
                t36 = 0x40;
            }
            if ((int)((((struct o6C_short *)(a4))->v)) < (int)((((struct o248_int *)(a4))->v))) {
                t42 = (((struct o6C_short *)(a4))->v);
                (((struct o6C_ushort *)(a4))->v) = (t42 + t36);
                if ((int)(short)(t42 + t36) <= (int)((((struct o248_int *)(a4))->v))) {
                } else {
                    (((struct o6C_ushort *)(a4))->v) = ((((struct o248_short *)(a4))->v));
                }
            } else {
                if ((int)((((struct o6C_short *)(a4))->v)) > (int)((((struct o248_int *)(a4))->v))) {
                    t50 = (((struct o6C_short *)(a4))->v);
                    (((struct o6C_ushort *)(a4))->v) = (t50 - t36);
                    if ((int)(short)(t50 - t36) < (int)((((struct o248_int *)(a4))->v))) {
                        (((struct o6C_ushort *)(a4))->v) = ((((struct o248_short *)(a4))->v));
                    }
                } else {
                    (((struct o6C_ushort *)(a4))->v) = ((((struct o248_short *)(a4))->v));
                }
            }
        }
    }
    if ((((((struct o4B0_float *)(a4))->v)) > 0.0f) && ((t81 = (((struct o4D0_int *)(a4))->v), t81 == 0) && ((t82 = (((struct o500_int *)(a4))->v), t82 != 0) && ((t83 = (((struct o500_int *)(a4))->v), t83 != 1) && ((t84 = (((struct o4C8_int *)(a4))->v), t84 != 3) && (t85 = (((struct o4DC_int *)(a4))->v), t85 == 0)))))) {
        t106 = (((struct o70_short *)(a4))->v);
        (((struct o70_ushort *)(a4))->v) = (t106 + 0x80);
        if ((int)(short)(t106 + 0x80) > (int)0x1800) {
            (((struct o70_ushort *)(a4))->v) = 0x1800;
        }
    } else {
        if ((0.0f > ((((struct o4B0_float *)(a4))->v))) && ((t109 = (((struct o4D0_int *)(a4))->v), t109 == 0) && ((t110 = (((struct o500_int *)(a4))->v), t110 != 0) && ((t111 = (((struct o500_int *)(a4))->v), t111 != 1) && ((t112 = (((struct o4C8_int *)(a4))->v), t112 != 3) && (t113 = (((struct o4DC_int *)(a4))->v), t113 == 0)))))) {
            t118 = (((struct o70_short *)(a4))->v);
            (((struct o70_ushort *)(a4))->v) = (t118 - 0x80);
            if ((int)(short)(t118 - 0x80) < (int)0xFFFFE800) {
                (((struct o70_ushort *)(a4))->v) = 0xFFFFE800;
            }
        } else {
            if ((int)((((struct o70_short *)(a4))->v)) > 0) {
                t122 = (((struct o70_short *)(a4))->v);
                (((struct o70_ushort *)(a4))->v) = (t122 - 0x100);
                if ((int)(short)(t122 - 0x100) >= 0) {
                } else {
                    (((struct o70_ushort *)(a4))->v) = 0x0;
                }
            } else {
                if ((int)((((struct o70_short *)(a4))->v)) < 0) {
                    t125 = (((struct o70_short *)(a4))->v);
                    (((struct o70_ushort *)(a4))->v) = (t125 + 0x100);
                    if ((int)(short)(t125 + 0x100) > 0) {
                        (((struct o70_ushort *)(a4))->v) = 0x0;
                    }
                }
            }
        }
    }
    return 0x70;
}


int FUN_0c0ce136(int a4)
{
    int t0;
    int t1;
    int t2;
    float u29;
    int t58;
    int t87;
    int t61;
    int t62;
    int t26;
    int t83;

    t0 = (((struct o2C_int *)0xC5229FC)->v);
    t1 = (((struct o0_int *)0xC5229BC)->v);
    t2 = t1;
    if ((int)t1 > (int)t0) {
        t2 = t0;
    }
    if (((((struct o98_int *)(a4))->v)) != 0) {
        if (((((struct o0_int *)0xC23EDE0)->v)) == 0) {
            FUN_0c0c7354(0xC1E9F28, 100.0f, 200.0f);
            if (((((struct o0_int *)0xC5229FC)->v)) == 1) {
                FUN_0c0c7354((*(int *)0xC1EFA04), 40.0f, 240.0f);
            } else {
                if (((((struct oC_int *)0xC5229BC)->v)) == 2) {
                    FUN_0c0c7354((*(int *)0xC1EFA04), 40.0f, 240.0f);
                }
            }
        }
        if (((*(int *)0xC204998) == 0) && (t26 = (((struct o4_int *)0xC23EDE0)->v), t26 == 0)) {
            FUN_0c0c7354(0xC1E9F34, ((((struct o0_float *)0xC0CE2E0)->v)), 200.0f);
            u29 = (((struct o4_float *)0xC0CE2E0)->v);
            if (((((struct o0_int *)0xC5229FC)->v)) == 1) {
                FUN_0c0c7354((*(int *)0xC1EFA04), u29, 240.0f);
            } else {
                if (((((struct oC_int *)0xC5229BC)->v)) == 2) {
                    FUN_0c0c7354((*(int *)0xC1EFA04), u29, 240.0f);
                }
            }
        }
    }
    t58 = (((struct o0_int *)0xC5229FC)->v);
    t87 = t58;
    if (t58 != 1) {
        if ((int)((((struct o80_int *)(a4))->v)) >= (int)t2) {
            t61 = FUN_0c0cddda(0x0);
            if (t61 != 1) {
                t62 = FUN_0c0cddba(0x0);
                if ((int)((((struct o88_int *)(a4))->v)) < (int)t62) {
                    (((struct o90_uint *)(a4))->v) = 0x5A;
                }
            }
        } else {
            (((struct o90_uint *)(a4))->v) = 0x5A;
        }
        (((struct o80_uint *)(a4))->v) = t2;
        (((struct o88_uint *)(a4))->v) = (FUN_0c0cddba(0x0));
        if ((int)((((struct o90_int *)(a4))->v)) > 0) {
            (((struct o90_uint *)(a4))->v) = (((((struct o90_int *)(a4))->v)) - 1);
        }
        if ((((((struct o90_int *)(a4))->v)) == 0) && (t83 = (((struct o0_int *)0xC23EDE0)->v), t83 != 0)) {
            *(volatile int *)0xC23EDE4;
        }
        t87 = 0x90;
    }
    return t87;
}




int FUN_0c048c1e(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    int t17;
    int t8;
    int t40;
    int t49;
    int stk[8];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F676C); }
    t0 = (((struct o488_int *)(a4))->v);
    t1 = (((struct o3A0_int *)(a4))->v);
    if (t1 != 0) {
        t17 = t1;
        if (t1 != 1) {
        } else {
            (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
            (((struct o458_float *)(a4))->v) = ((float)((((struct o3AC_int *)(a4))->v)) / (float)((((struct o3B0_int *)(a4))->v)));
            t8 = 0x458;
            if (!(1.0f > ((((struct o458_float *)(a4))->v)))) {
                (((struct o458_float *)(a4))->v) = 1.0f;
                (((struct o454_ushort *)(a4))->v) = 0x0;
                (((struct o1B0_uint *)(a4))->v) = 0x0;
                *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030)) = 0x4;
                (((struct o4D4_uint *)(a4))->v) = 0x0;
                t8 = (FUN_0c02a19a(a4));
            }
            t17 = t8;
        }
        t49 = t17;
    } else {
        (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 1);
        (((struct o458_float *)(a4))->v) = ((float)((((struct o3AC_int *)(a4))->v)) / (float)((((struct o3B0_int *)(a4))->v)));
        t40 = 0x458;
        if (((((struct o458_float *)(a4))->v)) > 0.0f) {
        } else {
            (((struct o458_float *)(a4))->v) = 0.0f;
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
            if ((*(int *)((t0 + 0x0))) != 0) {
                FUN_0c045e54(a4, a5, a6);
            } else {
                FUN_0c023300(a4, a5, a6, a7);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x518 + a4)); }
            (((struct o34_float *)(a4))->v) = (FUN_0c0467c2(a4, 0.0f, ((((struct o250_float *)(a4))->v))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)(((int)stk + 4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)(((int)stk + 4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x4B0 + a4)) = *(struct mv3 *)(((int)stk + 4)); }
            FUN_0c034fbc(a4, 0x400, 0x0, 0x1);
            *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030)) = 0x3;
            t40 = 0xC247030;
        }
        t49 = t40;
    }
    return t49;
}


int FUN_0c03eab4(int a4, int a5, int a6, int a7)
{
    int t10;
    int t18;
    int t33;
    int t75;
    int t111;
    int t115;
    int t2;
    int t132;
    int t94;
    int stk[5];

    if (((*(int *)0xC23ED50) == (*(int *)((a4 + 0x30)))) && (t2 = *(int *)((a4 + 0x34)), (unsigned int)t2 <= (unsigned int)0x8)) {
    } else {
        FUN_0c0cc3f8(0x428A9, a5, a6, a7);
        FUN_0c0e19f2();
    }
    t10 = *(int *)((a4 + 0x38));
    if (t10 != 0) {
        if (t10 != 1) {
            if (t10 != 2) {
                if (t10 != 3) {
                    if (t10 != 4) {
                        t94 = t10;
                        if (t10 == 5) {
                            t18 = (((struct o40_int *)(a4))->v);
                            (((struct o40_uint *)(a4))->v) = (t18 - 1);
                            if ((int)(t18 - 1) <= 0) {
                                *(unsigned int *)0xC2462FC = ((*(int *)0xC2462FC) | (*(int *)((a4 + 0x34))));
                                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) << 1);
                                (((struct o40_uint *)(a4))->v) = 0xA;
                            }
                            t94 = 0x40;
                        }
                    } else {
                        t33 = (((struct o40_int *)(a4))->v);
                        (((struct o40_uint *)(a4))->v) = (t33 - 1);
                        t94 = 0x40;
                        if ((int)(t33 - 1) <= 0) {
                            (((struct o40_uint *)(a4))->v) = 0x0;
                            t94 = FUN_0c0cc3f8(0x62CA9, 0xC246074, 0x0, 0x0);
                            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
                        }
                    }
                } else {
                    FUN_0c08e9e0(0xC8);
                    FUN_0c0cc3f8(0x328A9, 0x0, 0x0, 0x0);
                    (((struct o40_uint *)(a4))->v) = 0x50;
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
                    t94 = 0x40;
                }
            } else {
                t94 = 0x44;
                if ((int)(*(int *)((((((((((struct o44_int *)(a4))->v)) << 2) << 2) << 1) + 0xC246074) + 0xC))) >= (int)0x2) {
                    *(unsigned int *)((a4 + 0x38)) = 0x3;
                    t94 = 0x3;
                }
            }
        } else {
            (((struct o44_uint *)(a4))->v) = 0xFFFFFFFF;
            t75 = 0x0;
            for (;;) {
                if ((*(int *)((((((t75 << 2) << 2) << 1) + 0xC246074) + 0x0))) == (*(int *)((a4 + 0x30)))) {
                    break;
                }
                t75 = (t75 + 0x1);
                if ((int)t75 >= (int)0x4) {
                    if (((((struct o44_int *)(a4))->v)) == -1) {
                        (((struct o44_uint *)(a4))->v) = 0x0;
                        return 0x44;
                    }
                    if ((int)(*(int *)((((((((((struct o44_int *)(a4))->v)) << 2) << 2) << 1) + 0xC246074) + 0xC))) >= (int)0x2) {
                        *(unsigned int *)((a4 + 0x38)) = 0x3;
                        return 0x3;
                    }
                    return 0x44;
                }
            }
            (((struct o44_uint *)(a4))->v) = t75;
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            if (((((struct o44_int *)(a4))->v)) == -1) {
                (((struct o44_uint *)(a4))->v) = 0x0;
                t94 = 0x44;
            } else {
                t94 = 0x44;
                if ((int)(*(int *)((((((((((struct o44_int *)(a4))->v)) << 2) << 2) << 1) + 0xC246074) + 0xC))) >= (int)0x2) {
                    *(unsigned int *)((a4 + 0x38)) = 0x3;
                    t94 = 0x3;
                }
            }
        }
        t132 = t94;
    } else {
        t132 = *(int *)((0xC247030 + ((*(int *)((a4 + 0x3C))) << 2)));
        if (t132 == 5) {
            *(unsigned int *)((a4 + 0x38)) = 0x1;
        } else {
            t111 = *(int *)(((((*(int *)((a4 + 0x3C))) << 2) + 0xC246FF0) + 0x0));
            t132 = 0x2BC;
            if (((((struct o2BC_int *)(t111))->v)) == 0xF3) {
                t115 = (((struct o2B4_int *)(t111))->v);
                t132 = t115;
                if (t115 == 19) {
                    t132 = 0x2AC;
                    if (((((struct o2AC_int *)(t111))->v)) != 0) {
                    } else {
                        *(unsigned int *)((a4 + 0x38)) = 0x3;
                        t132 = 0x3;
                    }
                }
            }
        }
    }
    return t132;
}


