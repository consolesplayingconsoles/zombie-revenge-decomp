/* Straight-line functions with calls and guards (batch gen_op): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o224_float { char p[0x224]; float v; };
struct o23C_float { char p[0x23C]; float v; };
struct o240_float { char p[0x240]; float v; };
struct o240_int { char p[0x240]; int v; };
struct o254_float { char p[0x254]; float v; };
struct o260_int { char p[0x260]; int v; };
struct o260_uint { char p[0x260]; unsigned int v; };
struct o26C_float { char p[0x26C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
int FUN_0c01ac14(void);
int FUN_0c01ac8c(void);
int FUN_0c01ac9a(void);
int FUN_0c07e38c(void);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0ac46a(int);
int FUN_0c0b400e(void);
int FUN_0c0b4328(void);
int FUN_0c0b68aa(void);
int FUN_0c0b6934(void);
int FUN_0c0b6bea(void);
int FUN_0c0b8304(int, int, int, float, float, float, float, float);
int FUN_0c0c0340(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlObjPutCheapEnvMap(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0b8018(int a4, int a5, int a6, int a7);
int FUN_0c058d46(int a4, int a5, int a6, int a7);
int FUN_0c0ac050(int a4);
int FUN_0c0c003e(int a4, int a5, int a6, int a7);
int FUN_0c01ac04(void);
int FUN_0c0b689c(void);
int FUN_0c0b39a8(void);
int FUN_0c01ac32(void);

int FUN_0c0b8018(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u39;

    t0 = (((struct o220_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            (((struct o23C_float *)(a4))->v) = (((((struct o23C_float *)(a4))->v)) - 0.0111111104f);
            if (!(((((struct o23C_float *)(a4))->v)) > 0.0f)) {
                FUN_0c0e19f2();
            }
        }
    } else {
        if (1.0f > ((((struct o23C_float *)(a4))->v))) {
            (((struct o23C_float *)(a4))->v) = (((((struct o23C_float *)(a4))->v)) + 0.0166666657f);
        }
        if (1.0f > ((((struct o224_float *)(a4))->v))) {
            (((struct o224_float *)(a4))->v) = (((((struct o224_float *)(a4))->v)) + 0.0199999996f);
        }
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        u39 = (((((struct o60_float *)(a4))->v)) * ((((struct o0_float *)0xC0B8184)->v)));
        u39 = u39 + ((((struct o4_float *)0xC0B8184)->v)) * ((((((struct o30_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v))));
        (((struct o60_float *)(a4))->v) = u39;
        (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
        FUN_0c0a68ec((0x1DC + a4), (((((struct o30_float *)(a4))->v)) - ((((struct o3C_float *)(a4))->v))), ((((struct o8_float *)0xC0B8184)->v)));
        if (((((struct o240_float *)(a4))->v)) > ((((struct o30_float *)(a4))->v))) {
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o30_float *)(a4))->v) = ((((struct o240_float *)(a4))->v));
        }
        if (((*(int *)0xC23ED5C) & 0x800) != 0) {
            (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + 0x1);
        }
    }
    return FUN_0c0b8304((-((((struct o1DC_int *)(a4))->v))), 0x6, (0x228 + a4), ((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)), ((((struct o224_float *)(a4))->v)), ((((struct o23C_float *)(a4))->v)));
}

int FUN_0c058d46(int a4, int a5, int a6, int a7)
{
    int t0;
    register float u0;

    t0 = (((struct o260_int *)(a4))->v);
    (((struct o260_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)t0 > (int)0x37) {
        FUN_0c0e19f2();
    }
    if ((int)((((struct o260_int *)(a4))->v)) < (int)0x1E) {
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.699999988f);
        t0 = 0x254;
        u0 = (((((struct o254_float *)(a4))->v)) + 0.0799999982f);
    } else {
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.099999994f);
        t0 = 0x26C;
        u0 = (((((struct o26C_float *)(a4))->v)) - 0.0299999993f);
    }
    *(float *)((a4 + t0)) = u0;
    (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x600);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    t0 = (((struct o220_int *)(a4))->v);
    if ((t0 != 13) && (t0 != 2)) {
    } else {
        t0 = (((struct o240_int *)(a4))->v);
        nlObjPutCheapEnvMap((*(int *)(((((t0 << 1) + t0) << 2) + 0xC2623A0))));
    }
    u0 = (((struct o254_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o254_float *)(a4))->v)));
    FUN_0c0c475c(((((struct o240_int *)(a4))->v)), ((((struct o26C_float *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c0ac050(int a4)
{
    register int t0;
    register int t8;
    int t9;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (((((struct o30_int *)0xC24FA34)->v)) != 0) {
            nlPushMatrix(((((struct o0_int *)0xC24FA34)->v)));
            t8 = (((struct o30_int *)0xC24FA34)->v);
            if (((int)((((struct o4_int *)0xC24FA34)->v)) >= (int)0x2FD) && (t9 = (((struct o4_int *)0xC24FA34)->v), (int)t9 <= (int)0x3BB)) {
                *(unsigned int *)((((t8 + 0x58) + 0x1B0) + 0x20)) = 0xC0AC848;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((t8 + 0x58) + 0x1B0)) = *(struct mv3 *)(0xC23F28C); }
            } else {
                *(unsigned int *)((((t8 + 0x58) + 0x1B0) + 0x20)) = 0xC0651AC;
            }
            FUN_0c0db470(0xC10E718, (((((struct o30_int *)0xC24FA34)->v)) + 0x58));
            return nlPopMatrix(0x1);
        }
        return t0;
    }
    if (((((struct o4_int *)0xC24FA34)->v)) == 0x1C4) {
        *(unsigned int *)((a4 + 0x30)) = 0x1;
        return FUN_0c0ac46a(0x0);
    }
    return t0;
}

int FUN_0c0c003e(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (((((struct o9C_int *)(a4))->v)) == 0) {
        t0 = (((struct o90_int *)(a4))->v);
        (((struct o90_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct o90_uint *)(a4))->v) = 0x78;
            (((struct o9C_uint *)(a4))->v) = 0x1;
            return FUN_0c0cc3f8(0x106, a5, a6, a7);
        }
        return 0x90;
    }
    t0 = (((struct o90_int *)(a4))->v);
    (((struct o90_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    return FUN_0c0c0340((a4 + 0x30));
}

int FUN_0c01ac04(void)
{
    FUN_0c01ac14();
    FUN_0c07e38c();
    return FUN_0c01ac8c();
}

int FUN_0c0b689c(void)
{
    FUN_0c0b68aa();
    FUN_0c0b6934();
    return FUN_0c0b6bea();
}

int FUN_0c0b39a8(void)
{
    FUN_0c0b400e();
    return FUN_0c0b4328();
}

int FUN_0c01ac32(void)
{
    return FUN_0c01ac9a();
}
