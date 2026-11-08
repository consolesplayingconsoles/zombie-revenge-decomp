/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c022c5e(int);
int FUN_0c02a19a(int);
int FUN_0c032ae6(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c084800(int, int, float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5fe4(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c07a238(int a4, int a5, int a6, int a7);
int FUN_0c088d54(int a4);
int FUN_0c0256fc(int a4, int a5, int a6, int a7);
int FUN_0c084ce4(int a4);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o488_int { char p[0x488]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o544_int { char p[0x544]; int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o564_uint { char p[0x564]; unsigned int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct o5C_short { char p[0x5C]; short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o62_short { char p[0x62]; short v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c07a238(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        t1 = (((struct oA4_int *)(a4))->v);
        (((struct oA4_uint *)(a4))->v) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            FUN_0c0e19f2();
        } else {
            (((struct o94_float *)(a4))->v) = ((float)((((struct oA4_int *)(a4))->v)) / (float)((((struct o9C_int *)(a4))->v)));
        }
    } else {
        (((struct o94_float *)(a4))->v) = ((-((float)((((struct oA0_int *)(a4))->v)) / (float)((((struct o98_int *)(a4))->v)))) + 1.0f);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((((((struct o3CE_short *)(t0))->v)) + ((((struct o62_short *)(a4))->v))));
    nlRotateAX((((((struct o3CC_short *)(t0))->v)) + ((((struct o60_short *)(a4))->v))));
    u0 = (((struct o74_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o74_float *)(a4))->v)));
    FUN_0c0c475c(((((struct o78_int *)(a4))->v)), ((((struct o94_float *)(a4))->v)));
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x48), (a4 + 0x54));
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    (((struct o74_float *)(a4))->v) = (((((struct o74_float *)(a4))->v)) * ((((struct o90_float *)(a4))->v)));
    return 0x74;
}

int FUN_0c088d54(int a4)
{
    int stk[6];
    register float u23;
    register float u27;
    register int t42;
    register int t45;
    register float u43;

    if ((((((struct o60_int *)(a4))->v)) & 31) == 0) {
        (((struct o48_uint *)(a4))->v) = (((FUN_0c0da2e0()) & 0x3) + 0xFB);
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.049999997f);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), ((((struct o3C_float *)(a4))->v)), ((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    nlRotateAY(((((struct o5C_short *)(a4))->v)));
    u23 = (((struct o50_float *)(a4))->v);
    nlScale(u23, u23, u23);
    FUN_0c0de000(((((struct o50_float *)(a4))->v)));
    u27 = (((struct o4C_float *)(a4))->v);
    FUN_0c0848d6(u27, u27, u27);
    FUN_0c0c465c(((((struct o48_int *)(a4))->v)));
    FUN_0c0849da();
    nlPopMatrix(0x1);
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0199999996f);
    if ((int)((((struct o60_int *)(a4))->v)) < (int)0x8) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.799999952f);
    }
    t42 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t42 - 1);
    t45 = 0x34;
    if (((int)(t42 - 1) > 0) && (u43 = (((struct o34_float *)(a4))->v), u43 > 0.0f)) {
    } else {
        t45 = (FUN_0c0e19f2());
    }
    return t45;
}

int FUN_0c0256fc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o4C8_uint *)(a4))->v) = 0x2;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o55C_uint *)(a4))->v) = ((*(int *)((((*(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t0 << 2) + t0) << 2))))))) + ((((((struct o544_int *)(a4))->v)) << 2) << 2)) + 0x4))) * (*(int *)0xC247070));
    if (((((struct o544_int *)(a4))->v)) == 0) {
        FUN_0c032ae6(a4);
        t0 = (((struct o488_int *)(a4))->v);
        (((struct o534_uint *)(a4))->v) = 0x9;
        (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
        (((struct o1EC_uint *)(t0))->v) = ((((struct o1EC_int *)(a4))->v));
        (((struct o200_uint *)(t0))->v) = 0x1;
        (((struct o1E8_uint *)(t0))->v) = 0x1;
        (((struct o1F4_uint *)(t0))->v) = 0x28;
        (((struct o204_uint *)(t0))->v) = 0x0;
        (((struct o1E4_float *)(t0))->v) = 5.0f;
        (((struct o1FC_uint *)(t0))->v) = 0x2;
        (((struct o1F8_uint *)(t0))->v) = 0x3;
        (((struct oD8_uint *)(t0))->v) = 0x0;
        t1 = (((struct oBC_int *)(t0))->v);
        t2 = (((struct o1E8_int *)(t0))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
        FUN_0c022c5e(a4);
        (((struct o564_uint *)(a4))->v) = 0x0;
        (((struct o56C_uint *)(a4))->v) = 0x0;
        (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
        *(volatile int *)0xC23A258;
        t0 = FUN_0c0e5fe4();
        if ((unsigned int)t0 > (unsigned int)((((struct oBC_int *)(a4))->v))) {
            return FUN_0c0cc3f8(0x431A9);
        }
        return t0;
    }
    (((struct o534_uint *)(a4))->v) = 0x0;
    return FUN_0c02a19a(a4);
}

