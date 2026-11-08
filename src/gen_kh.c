/* Straight-line functions with calls and guards (batch gen_kh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0845f8(int, int);
int FUN_0c084622(int, float, float, float);
int FUN_0c0846a6(int, float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c086b70(void);
int FUN_0c08b678(int, float, float);
int FUN_0c08b87a(int);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0b1606(void);
int FUN_0c0b16cc(void);
int FUN_0c0b17dc(void);
int FUN_0c0b18e0(void);
int FUN_0c0b19fc(void);
int FUN_0c0b1b3c(void);
int FUN_0c0b1c64(void);
int FUN_0c0b1d80(void);
int FUN_0c0b1ec8(void);
int FUN_0c0b1fb4(void);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c067b98(int a4);
int FUN_0c08cee8(int a4);
int FUN_0c0afb10(int a4);
int FUN_0c088bc8(int a4);
int FUN_0c0b1330(int a4);
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o234_float { char p[0x234]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_short { char p[0x5C]; short v; };
struct o5C_ushort { char p[0x5C]; unsigned short v; };
struct o5E_short { char p[0x5E]; short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o98_int { char p[0x98]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };



int FUN_0c067b98(int a4)
{
    register int t0;
    int t1;
    register float u0;
    register float u1;

    if (((int)(*(int *)(((((((struct o88_int *)(a4))->v)) << 2) + 0xC247030))) >= (int)0x2) && ((t0 = *(int *)0xC23ED5C, (t0 & 6) == 0) && (t1 = (((struct o80_int *)(a4))->v), t1 == 0))) {
    } else {
        FUN_0c0845f8(((((struct o88_int *)(a4))->v)), 0x0);
        FUN_0c0e19f2();
    }
    t0 = (((struct o8C_int *)(a4))->v);
    FUN_0c084622(((((struct o88_int *)(a4))->v)), ((((struct o22C_float *)(t0))->v)), ((((struct o230_float *)(t0))->v)), ((((struct o234_float *)(t0))->v)));
    if ((int)((((struct o304_int *)(t0))->v)) <= 0) {
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x78) {
            (((struct o80_uint *)(a4))->v) = 0x1;
        }
        u0 = ((-((float)((((struct oA0_int *)(a4))->v)) * 0.0199999996f)) + 1.0f);
        return FUN_0c0846a6(((((struct o88_int *)(a4))->v)), ((((struct o48_float *)(a4))->v)), (((((struct o4C_float *)(a4))->v)) * u0), ((((struct o50_float *)(a4))->v)));
    }
    if (((((struct o98_int *)(a4))->v)) != 0) {
        (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + 0x400);
        u0 = ((((struct o0_float *)0xC067D7C)->v));
        u0 = u0 + ((((struct o4_float *)0xC067D7C)->v)) * ((FUN_0c0da410(((((struct o64_short *)(a4))->v)))) + 1.0f);
        (((struct o50_float *)(a4))->v) = u0;
        (((struct o4C_float *)(a4))->v) = (((((struct oC_float *)0xC067D7C)->v)) - (u0 * ((((struct o8_float *)0xC067D7C)->v))));
        u1 = ((((struct o10_float *)0xC067D7C)->v));
        u1 = u1 + ((((struct o14_float *)0xC067D7C)->v)) * u0;
        (((struct o48_float *)(a4))->v) = u1;
        return FUN_0c0846a6(((((struct o88_int *)(a4))->v)), ((((struct o48_float *)(a4))->v)), ((((struct o4C_float *)(a4))->v)), ((((struct o50_float *)(a4))->v)));
    }
    return 0x98;
}



int FUN_0c088bc8(int a4)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t5;
    register float u6;
    register float u27;
    register float u31;
    register int t46;
    register int t49;
    float u47;

    t0 = (((struct o5E_short *)(a4))->v);
    t1 = (((struct o5C_short *)(a4))->v);
    (((struct o5C_ushort *)(a4))->v) = (t1 + t0);
    t5 = (((struct o60_int *)(a4))->v);
    u6 = ((((struct o50_float *)(a4))->v));
    u6 = u6 + (FUN_0c0da410((short)(t1 + t0))) * ((((struct o58_float *)(a4))->v));
    if ((t5 & 31) == 0) {
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
    u27 = (((struct o50_float *)(a4))->v);
    nlScale(u27, u6, u27);
    FUN_0c0de000((u6 + ((((struct o50_float *)(a4))->v))));
    u31 = (((struct o4C_float *)(a4))->v);
    FUN_0c0848d6(u31, u31, u31);
    FUN_0c0c465c(((((struct o48_int *)(a4))->v)));
    FUN_0c0849da();
    nlPopMatrix(0x1);
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0199999996f);
    if ((int)((((struct o60_int *)(a4))->v)) < (int)0x8) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.799999952f);
    }
    t46 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t46 - 1);
    t49 = 0x34;
    if (((int)(t46 - 1) > 0) && (u47 = (((struct o34_float *)(a4))->v), u47 > 0.0f)) {
    } else {
        t49 = (FUN_0c0e19f2());
    }
    return t49;
}


int FUN_0c08cee8(int a4)
{
    int stk[26];
    register int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;

    t0 = *(int *)0xC23ED5C;
    t1 = *(int *)0xC23EE00;
    if (((t0 & 6) == 0) && (t1 != 0)) {
    } else {
        t2 = t0;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if (((*(int *)(((0xC247030 + t4) + 0x0))) != 0) && (t2 = 0x38C, t6 = *(int *)(((0xC246FF0 + t3) + 0x0)), t7 = *(int *)((t6 + t2)), t7 != 0)) {
                *(unsigned int *)((t6 + t2)) = 0x0;
            }
            t2 = (FUN_0c086b70());
            t4 = (t4 + 0x4);
            t3 = (t3 + 0x4);
            if ((unsigned int)t4 >= (unsigned int)0x30) {
                break;
            }
        }
        FUN_0c0e19f2();
    }
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x3C);
    *(float *)(((((int)stk + 4) + 0x3C) + 0x0)) = 0.0f;
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x3C) + 0x4);
    *(float *)((((((int)stk + 4) + 0x3C) + 0x4) + 0x0)) = -10.0f;
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x3C) + 0x8);
    *(float *)((((((int)stk + 4) + 0x3C) + 0x8) + 0x0)) = -70.0f;
    FUN_0c0dc5a0();
    nlRotateAZ((*(short *)((t1 + 0x64))));
    nlRotateAY((*(short *)((t1 + 0x62))));
    nlRotateAX((*(short *)((t1 + 0x60))));
    *(float *)(((int)stk + 28)) = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(float *)(((int)stk + 32)) = (*(float *)(((*(int *)(((int)stk + 4))) + 0x0)));
    *(float *)(((int)stk + 36)) = (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x30);
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x30) + 0x4);
    *(float *)((((((int)stk + 4) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x30) + 0x8);
    *(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 40)) = ((*(float *)((t1 + 0x30))) + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(float *)(((int)stk + 44)) = ((*(float *)((t1 + 0x34))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(float *)(((int)stk + 48)) = ((*(float *)((t1 + 0x38))) + (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
    FUN_0c08b678((((int)stk + 4) + 0x24), 80.0f, 3.0f);
    return (FUN_0c08b87a((((int)stk + 4) + 0x24)));
}

