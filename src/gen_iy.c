/* Straight-line functions with calls and guards (batch gen_iy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c05a98a(int);
int FUN_0c06722e(int);
int FUN_0c0c475c(int, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0b46e0(int a4, int a5, int a6, int a7);
int FUN_0c063d38(int a4, int a5, int a6, int a7);
int FUN_0c06b97c(int, int);
int FUN_0c07b9b4(int a4, int a5, int a6, int a7);
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_int { int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };



int FUN_0c0b46e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct oA4_int *)(a4))->v);
    t1 = *(int *)0xC247CAC;
    (((struct oA4_uint *)(a4))->v) = (t0 + 0x1);
    if ((t0 & 0x1) == 0) {
        (((struct o78_uint *)(a4))->v) = (((((struct oA0_int *)(a4))->v)) + 0xC5F);
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x1F) {
            FUN_0c0e19f2();
        }
    }
    if ((int)((((struct oA4_int *)(a4))->v)) > (int)0x28) {
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.0299999993f);
    }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 0.049999997f);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    u0 = (((struct o74_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o74_float *)(a4))->v)));
    FUN_0c0c475c(((((struct o78_int *)(a4))->v)), (*(float *)0xC0B47DC));
    return nlPopMatrix(0x1);
}

int FUN_0c063d38(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030));
    if ((t0 != 4) && (t0 != 2)) {
        FUN_0c0e19f2();
    }
    t0 = *(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0));
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4);
        (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) & (~(*(int *)(((0x1C4 + a4) + 0x0)))));
        (((struct oD8_uint *)(a4))->v) = 0x0;
        (((struct o22C_uint *)(a4))->v) = 0x3C;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o30_float *)(a4))->v) = (*(float *)((((((struct o230_int *)(a4))->v)) + 0x0)));
    (((struct o34_float *)(a4))->v) = ((((struct o4_float *)(((((struct o230_int *)(a4))->v))))->v));
    (((struct o38_float *)(a4))->v) = ((((struct o8_float *)(((((struct o230_int *)(a4))->v))))->v));
    FUN_0c01cdc2(a4);
    t1 = 0x22C;
    if ((int)((((struct o22C_int *)(a4))->v)) > 0) {
        t2 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t2 - 1);
        t3 = 0x22C;
        if ((int)(t2 - 1) <= 0) {
            (((struct o1EC_uint *)(a4))->v) = ((((struct o1EC_int *)(t0))->v));
            t3 = 0x1EC;
        }
        t1 = t3;
    }
    return t1;
}


int FUN_0c07b9b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0e19f2();
            }
            t1 = t0;
            if ((((((struct o0_int *)0xC23ED5C)->v)) & 0x200) != 0) {
                t0 = (((struct o2C_int *)0xC23ED5C)->v);
                (((struct o2C_uint *)0xC23ED5C)->v) = (t0 | 0x8);
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                t1 = (t0 | 0x8);
            }
            return t1;
        }
        t0 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t0 - 1);
        t1 = 0x58;
        if ((int)(t0 - 1) <= 0) {
            t0 = (((struct o2C_int *)0xC23ED5C)->v);
            (((struct o2C_uint *)0xC23ED5C)->v) = (t0 | 0x4);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            t1 = (t0 | 0x4);
        }
        return t1;
    }
    (((struct o2C_uint *)0xC23ED5C)->v) = 0x1;
    (((struct o58_uint *)(a4))->v) = 0x96;
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return 0x58;
}


