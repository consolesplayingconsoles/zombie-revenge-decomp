/* Straight-line functions with calls and guards (batch gen_jd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
int FUN_0c022e60(int, int, int, int, float);
int FUN_0c02a19a(int);
int FUN_0c034314(int, int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0845e8(int);
int FUN_0c0845f8(int, int);
int FUN_0c084658(int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a9084(void);
int FUN_0c0c465c(int);
float FUN_0c0d9e90(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c08acc8(int a4);
int FUN_0c0241e4(int a4, int a5, int a6, int a7, float f4);
int FUN_0c067784(int a4);
int FUN_0c0a92fc(int a4);
int FUN_0c0acf44(int a4);
struct o30_float { char p[0x30]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_short { char p[0x50]; short v; };
struct o500_int { char p[0x500]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o528_int { char p[0x528]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_short { char p[0x58]; short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };


int FUN_0c08acc8(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    u0 = (((struct o48_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o48_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o54_int *)(a4))->v)));
    nlPopMatrix(0x1);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t0 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x58;
}

int FUN_0c0241e4(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;
    register int t44;
    register int t1;
    register int t2;
    register int t13;
    register int t20;
    int t14;

    t0 = FUN_0c022e60(a4, a5, a6, a7, f4);
    t44 = t0;
    if (t0 == 0) {
        t1 = FUN_0c034fbc(a4, 0x400, 0x1, 0x0);
        if (t1 != 0) {
            t2 = (((struct o3AC_int *)(a4))->v);
            (((struct o3AC_uint *)(a4))->v) = (t2 + 0x1);
            if ((int)(t2 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
                FUN_0c02a19a(a4);
            }
            if ((int)((((struct o54C_int *)(a4))->v)) >= (int)((((struct o528_int *)(a4))->v))) {
                t13 = FUN_0c034314(a4, (*(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0))), ((int)stk + 4));
                if ((t13 != 0) && (t14 = (((struct o3AC_int *)(a4))->v), (int)t14 > (int)0x3C)) {
                    FUN_0c02a19a(a4);
                }
            }
            t20 = (((struct o500_int *)(a4))->v);
            t44 = t20;
            if (t20 == 3) {
                t44 = 0x54C;
                if (((((struct o54C_int *)(a4))->v)) == 0) {
                    t44 = 0x3AC;
                    if ((int)((((struct o3AC_int *)(a4))->v)) > (int)0x3C) {
                        t44 = (FUN_0c02a19a(a4));
                    }
                }
            }
        } else {
            t44 = (FUN_0c02a19a(a4));
        }
    }
    return t44;
}

int FUN_0c067784(int a4)
{
    int stk[4];

    if (((*(int *)0xC23ED5C) & 32) != 0) {
        FUN_0c0845f8(0x0, 0x0);
        FUN_0c0845e8(0x0);
        FUN_0c0e19f2();
    }
    (((struct o30_float *)(a4))->v) = ((FUN_0c0d9e90(((((struct o98_int *)(a4))->v)))) * (*(float *)0xC0678A8));
    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + 0x300);
    FUN_0c084658(0x0, ((((struct o30_float *)(a4))->v)), (*(float *)0xC0678AC), 0.0f);
    FUN_0c0a68ec(((int)stk + 4), ((((struct o30_float *)(a4))->v)), (*(float *)0xC0678B4));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o3C_float *)(a4))->v)), ((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)));
    nlRotateAZ((*(int *)(((int)stk + 4))));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0a92fc(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x1C));
    if (((((struct oC0_int *)(a4))->v)) == 51) {
        t1 = (((struct oBC_int *)(t0))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + 0x24)); }
    } else {
        t1 = (((struct oBC_int *)(t0))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + 0x3C)); }
    }
    FUN_0c0e6248(a4);
    return FUN_0c0a9084();
}

int FUN_0c0acf44(int a4)
{
    register int t15;
    register int t16;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY(((((struct o4E_short *)(a4))->v)));
    nlRotateAX(((((struct o4C_short *)(a4))->v)));
    nlRotateAZ(((((struct o50_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o58_short *)(a4))->v)));
    nlPopMatrix(0x1);
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x40), (a4 + 0x40), (*(float *)0xC0AD064));
    nlAddVector((a4 + 0x34), (a4 + 0x40));
    t15 = FUN_0c010128((a4 + 0x4C), (a4 + 0x52));
    t16 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t16 + 0x1);
    if ((t16 + 0x1) == 0xB4) {
        return FUN_0c0e19f2();
    }
    return t15;
}
