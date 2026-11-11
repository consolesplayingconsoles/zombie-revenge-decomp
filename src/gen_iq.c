/* Straight-line functions with calls and guards (batch gen_iq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c075f30(int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
extern int FUN_0c0b145c();
int FUN_0c0b1542(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int _divls(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
float FUN_0c0a3f40(int a4, int a5, int a6, int a7);
int FUN_0c0b1b60(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0a3190(int a4, int a5, int a6, int a7);
int FUN_0c0b1904(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0b1c88(int);
int FUN_0c0a350c(int a4, int a5, int a6, int a7);
int FUN_0c0760c4(int a4, int a5, int a6, int a7);
struct o284_float { char p[0x284]; float v; };
struct o290_int { char p[0x290]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_short { char p[0x34]; short v; };
struct o36_short { char p[0x36]; short v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o454_short { char p[0x454]; short v; };
struct o458_float { char p[0x458]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o46_short { char p[0x46]; short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_short { char p[0x48]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o56_short { char p[0x56]; short v; };
struct o58_int { char p[0x58]; int v; };
struct o58_short { char p[0x58]; short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o74_short { char p[0x74]; short v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };


float FUN_0c0a3f40(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t2;
    register int t3;
    register float u23;
    register float u41;
    register int t4;

    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t3 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t3 - 1);
    if (((int)(t3 - 1) > 0) && (t4 = (((struct o2EC_int *)(t1))->v), (t4 & 15) == 0)) {
    } else {
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((((((struct oBC_int *)(t1))->v)) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)) + 0x80));
    FUN_0c0db470(0xC10D090, (((int)stk + 4) + 0xC));
    FUN_0c0dbda0((0x2AC + t2));
    FUN_0c0dcca0((((int)stk + 4) + 0xC));
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY(((((struct o3CE_short *)(t2))->v)));
    nlRotateAX(((((struct o3CC_short *)(t2))->v)));
    nlRotateAZ(0x7FFF);
    u23 = (((struct o50_float *)(a4))->v);
    nlScale(u23, ((((struct o54_float *)(a4))->v)), u23);
    FUN_0c0de000((((((struct o50_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v))));
    FUN_0c0dcca0(0xC10D09C);
    FUN_0c0848d6(((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)), ((((struct o48_float *)(a4))->v)));
    FUN_0c0c465c(0x297);
    FUN_0c0849da();
    nlPopMatrix(0x1);
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
    u41 = ((((struct o54_float *)(a4))->v));
    u41 = u41 + (1.0f + 1.0f) * ((((struct o4C_float *)(a4))->v));
    (((struct o54_float *)(a4))->v) = u41;
    return (1.0f + 1.0f);
}


int FUN_0c0a3190(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t2 = (((struct o58_short *)(a4))->v);
    (((struct o58_ushort *)(a4))->v) = (t2 + 0x1);
    if (((int)(short)(t2 + 0x1) <= (int)((((struct o5A_short *)(a4))->v))) && (t0 = *(int *)((a4 + 0x30)), t1 = (((struct o2EC_int *)(t0))->v), (t1 & 15) == 0)) {
    } else {
        FUN_0c0e19f2();
    }
    t0 = (((struct o54_short *)(a4))->v);
    (((struct o54_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o56_short *)(a4))->v))) {
        t0 = (((struct o4C_int *)(a4))->v);
        (((struct o4C_uint *)(a4))->v) = (t0 + 0x2);
        if ((int)(*(short *)(((t0 + 0x2) + 0x0))) < 0) {
            (((struct o4C_uint *)(a4))->v) = ((((struct o50_int *)(a4))->v));
        }
    }
    nlPushMatrix(0x0);
    nlMultiMatrix(((((((((struct oBC_int *)((*(int *)((a4 + 0x30)))))->v)) << 8) + 0xC25F840) + ((((((((struct o34_short *)(a4))->v)) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    if (((((struct o36_short *)(a4))->v)) != 0) {
        t0 = (((struct o34_short *)(a4))->v);
        if (t0 != 1) {
            if (t0 != 0) {
            } else {
                FUN_0c0dcc70(-0.25f, -1.67799997f, 0.0429999977f);
                nlRotateAX(0xFFFFC000);
            }
        } else {
            FUN_0c0dcc70(0.25f, -1.67799997f, 0.0429999977f);
            nlRotateAX(0xFFFFC000);
        }
    }
    FUN_0c0dcca0((a4 + 0x38));
    nlRotateAZ(((((struct o48_short *)(a4))->v)));
    nlRotateAY(((((struct o46_short *)(a4))->v)));
    nlRotateAX(((((struct o44_short *)(a4))->v)));
    FUN_0c0c465c((*(short *)((((((struct o4C_int *)(a4))->v)) + 0x0))));
    return nlPopMatrix(0x1);
}



int FUN_0c0a350c(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t6;
    register int t16;
    register int t17;
    register int t19;
    register int t41;

    if ((*(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC247030) + 0x0))) != 0) {
        t6 = *(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        if ((((((struct o290_int *)(t6))->v)) & 0x40000000) != 0) {
            FUN_0c0e19f2();
        }
        t16 = *(int *)((0xC247030 + (((((struct oBC_int *)(t6))->v)) << 2)));
        if (t16 != 8) {
            t17 = (((struct oA0_int *)(a4))->v);
            (((struct oA0_uint *)(a4))->v) = (t17 + 0x1);
            t19 = *(short *)((((t17 + 0x1) << 1) + ((((struct o8C_int *)(a4))->v))));
            (((struct o78_uint *)(a4))->v) = t19;
            if ((int)t19 < 0) {
                (((struct oA0_uint *)(a4))->v) = 0x0;
                (((struct o78_uint *)(a4))->v) = (*(short *)(((((((struct oA0_int *)(a4))->v)) << 1) + ((((struct o8C_int *)(a4))->v)))));
            }
            nlPushMatrix(0x0);
            nlMultiMatrix(((((((((struct o7C_int *)(a4))->v)) << 2) << 2) << 2) + ((((struct o3E4_int *)(t6))->v))));
            FUN_0c0dcca0((a4 + 0x30));
            FUN_0c0848d6(((((struct o45C_float *)(t6))->v)), ((((struct o4_float *)((0x45C + t6)))->v)), ((((struct o8_float *)((0x45C + t6)))->v)));
            FUN_0c0de000(_builtin_fabsf(((((struct o284_float *)(t6))->v))));
            t41 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(t6))->v)) << 2) + 0xC195F48)))))(((((struct o78_int *)(a4))->v)), ((((struct o458_float *)(t6))->v)));
            FUN_0c0849da();
            return nlPopMatrix(0x1);
        }
        return t16;
    }
    return FUN_0c0e19f2();
}





