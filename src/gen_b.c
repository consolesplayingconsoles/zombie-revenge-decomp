/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a19a(int);
int FUN_0c030848(int, int, int);
int FUN_0c03227c(int);
int FUN_0c03442c(int, int, int, int);
int FUN_0c034506(int, int, int, int, int, int);
float FUN_0c082e20(float);
int FUN_0c0855ba(int);
int FUN_0c08696c(int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7984(int, int, float, float, float);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c465c(int);
int FUN_0c0c6ac6(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int FUN_0c0db840(int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e2b0e(int);
int FUN_0c0e5980(int, int);
int _divls(void);
int _modls(void);
int FUN_0c0e5fe4(int);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c0f29d8(int, int, int);
int FUN_0c0f31b8(int, int);
int FUN_0c22b6c8(int);
int FUN_0c22bd70(int);
int FUN_0c233a38(int);
int FUN_0c233a46(void);
int FUN_0c233a4a(void);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int mwRnaErrCallFunc(int);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int search_dir(int, int, int);
int vmsfs_c_progress(int);
int vmsfs_unmount(int);
int vmsio_block_write(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c030882(int a4);
int FUN_0c034fbc(int a4, int a5, int a6, int a7);
int FUN_0c0499ec(int a4, int a5);
int FUN_0c054fb0(int a4, int a5, int a6);
int FUN_0c0b6508(int a4, int a5, int a6, float f4);
int FUN_0c0cae8e(int a4);
int FUN_0c0e2a4c(int a4);
int FUN_0c039034(int a4);
int FUN_0c046a20(int);
int FUN_0c06bc74(int a4);
void FUN_0c082e44(int a4, int a5, float f4, float f5);
int FUN_0c093a08(int a4, int a5, int a6);
int FUN_0c0c6b48(int a4, int a5);
int FUN_0c0e5b30(void);
int vmsfs_write_retry(int a4, int a5, int a6);
int FUN_0c22c602(int a4, int a5, int a6, int a7);
int FUN_0c0111ba(int a4);
int FUN_0c03457c(int a4, int a5);
int FUN_0c0a79fa(int a4, int a5, int a6);
int FUN_0c0a7c66(int a4, int a5, int a6);
int FUN_0c0a7d3c(int a4, int a5, int a6);
void FUN_0c0c98ce(int a4, int a5);
int FUN_0c0f2b70(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int vmsfs_fgetinfo(int a4, int a5, int a6);
int FUN_0c033028(int a4);
int FUN_0c034c26(int a4);
int FUN_0c04bc68(int a4, int a5);
struct o10_float { char p[0x10]; float v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o228_int { char p[0x228]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o288_float { char p[0x288]; float v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct o28C_float { char p[0x28C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3A8_uint { char p[0x3A8]; unsigned int v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o588_int { char p[0x588]; int v; };
struct o58C_int { char p[0x58C]; int v; };
struct o590_int { char p[0x590]; int v; };
struct o594_int { char p[0x594]; int v; };
struct o598_int { char p[0x598]; int v; };
struct o5A0_uint { char p[0x5A0]; unsigned int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5A8_uint { char p[0x5A8]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_uint { char p[0xC4]; unsigned int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };






int FUN_0c0b6508(int a4, int a5, int a6, float f4)
{
    float u3;
    float u7;
    float u11;
    float u15;
    int stk[7];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    if (a6 != 0) {
        (((struct o284_float *)(a4))->v) = ((((struct o30_float *)(a5))->v));
        (((struct o288_float *)(a4))->v) = ((((struct o34_float *)(a5))->v));
        (((struct o28C_float *)(a4))->v) = ((((struct o38_float *)(a5))->v));
    } else {
        u3 = *(float *)0xC0B65FC;
        u7 = ((((struct o284_float *)(a4))->v));
        u7 = u7 + u3 * (((((struct o30_float *)(a5))->v)) - ((((struct o254_float *)(a4))->v)));
        (((struct o284_float *)(a4))->v) = u7;
        u11 = ((((struct o288_float *)(a4))->v));
        u11 = u11 + u3 * ((((((struct o34_float *)(a5))->v)) - ((((struct o258_float *)(a4))->v))) + 17.0f);
        (((struct o288_float *)(a4))->v) = u11;
        u15 = ((((struct o28C_float *)(a4))->v));
        u15 = u15 + u3 * (((((struct o38_float *)(a5))->v)) - ((((struct o25C_float *)(a4))->v)));
        (((struct o28C_float *)(a4))->v) = u15;
    }
    R1004 = (((int)stk + 4) + 0xC);
    R1008 = (((int)stk + 4) + 0x8);
    FUN_0c0a7714((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((((struct o254_float *)(a4))->v)) - ((((struct o284_float *)(a4))->v))), (((((struct o258_float *)(a4))->v)) - ((((struct o288_float *)(a4))->v))), (((((struct o25C_float *)(a4))->v)) - ((((struct o28C_float *)(a4))->v))));
    (((struct o3CC_ushort *)(a4))->v) = (*(int *)(((R1008) + 0x0)));
    (((struct o3CE_ushort *)(a4))->v) = (*(int *)(((R1004) + 0x0)));
    return 0x3CE;
}

int FUN_0c0cae8e(int a4)
{
    int t0;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        return ((int (*)(int))(0xC0CADEA))(t0);
    }
    return 0xC2623A0;
}

int FUN_0c0e2a4c(int a4)
{
    int t6;
    int t8;
    int t5;

    if ((int)(*(int *)(((a4 - 12) + 0x0))) <= 0) {
        FUN_0c0db0a0(0xF, 0x14);
        nlPrintf(0xC1EAAE8);
        for (;;) {
        }
    }
    if (((*(int *)(((a4 - 12) + 0x0))) & 0x40000000) == 0) {
        t6 = a4;
        for (;;) {
            t8 = *(int *)(((t6 - 4) + 0x0));
            if ((int)(*(int *)(((t6 - 12) + 0x0))) <= 0) {
                break;
            }
            t5 = (FUN_0c0e2b0e(t6));
            t6 = t8;
            if (t6 != a4) {
                *(unsigned int *)(((t6 - 12) + 0x0)) = ((*(int *)(((t6 - 12) + 0x0))) & 0xBFFFFFFF);
                continue;
            }
            return t5;
        }
        FUN_0c0db0a0(0x14, 0x14);
        nlPrintf(0xC1EAB08);
        for (;;) {
        }
    }
    *(unsigned int *)(((a4 - 12) + 0x0)) = ((*(int *)(((a4 - 12) + 0x0))) & 0xBFFFFFFF);
    *(unsigned int *)(((*(int *)(((a4 - 8) + 0x0))) + 0xFFFFFFFC)) = (*(int *)(((a4 - 4) + 0x0)));
    *(unsigned int *)(((*(int *)(((a4 - 4) + 0x0))) + 0xFFFFFFF8)) = (*(int *)(((a4 - 8) + 0x0)));
    return FUN_0c0e2b0e(a4);
}

int FUN_0c039034(int a4)
{
    int t5;
    int t7;
    int t1;
    int t2;
    int stk[10];

    t5 = 0x0;
    if (((int)((((struct o1C4_int *)(a4))->v)) < (int)0x10) && (t1 = (((struct o1C4_int *)(a4))->v), t2 = *(int *)((0xC247030 + (t1 << 2))), t2 == 4)) {
        t5 = 0x1;
    }
    if (t5 != 0) {
        t7 = *(int *)((((((((struct o1C4_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        FUN_0c034506(a4, t7, (0x588 + a4), (0x58C + a4), (0x590 + a4), ((int)stk + 20));
        FUN_0c03442c(a4, t7, (0x594 + a4), (0x598 + a4));
        (((struct o5A0_uint *)(a4))->v) = ((((struct o594_int *)(a4))->v));
        (((struct o5A4_uint *)(a4))->v) = ((((struct o598_int *)(a4))->v));
    } else {
        FUN_0c034506(a4, a4, (0x588 + a4), (0x58C + a4), (0x590 + a4), ((int)stk + 20));
        (((struct o5A0_uint *)(a4))->v) = ((((struct o588_int *)(a4))->v));
        (((struct o5A4_uint *)(a4))->v) = ((((struct o58C_int *)(a4))->v));
    }
    (((struct o5A8_uint *)(a4))->v) = ((((struct o590_int *)(a4))->v));
    return 0x5A8;
}



void FUN_0c082e44(int a4, int a5, float f4, float f5)
{
    int t0;
    int t2;
    int t3;
    int t6;
    int t15;
    float u37;
    float t17;
    float t18;
    float u19;
    float u26;
    float u23;
    float u11;

    t0 = *(signed char *)((a5 + 0x0));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t3 = *(int *)(((t0 << 2) + 0xC1027E0));
    *(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x10)) = (*(float *)(((t2 + t3) + 0x0)));
    *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x8)) = (*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x4)));
    t6 = *(int *)((a5 + 0x4));
    *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x4)) = t6;
    if (t6 != 0) {
        u11 = (*(float *)(((*(int *)((a5 + 0x4))) + 0x0)));
    } else {
        u11 = (*(float *)((a5 + 0x8)));
    }
    if ((unsigned char)(*(signed char *)((a5 + 0x1))) == 4) {
        *(float *)(((t2 + t3) + 0x0)) = u11;
    } else {
        t15 = *(signed char *)((a5 + 0x0));
        u37 = u11;
        if ((t15 != 6) && ((t15 != 7) && (t15 != 8))) {
        } else {
            t17 = FUN_0c082e20((*(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x10))));
            t18 = FUN_0c082e20(u11);
            u19 = *(float *)0xC083058;
            u26 = (t18 - u19);
            if ((t18 - t17) > (*(float *)0xC083070)) {
            } else {
                u23 = t18;
                if ((*(float *)0xC08305C) > (t18 - t17)) {
                    u23 = (t18 + u19);
                }
                u26 = u23;
            }
            *(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x10)) = t17;
            u37 = u26;
        }
        *(float *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0xC)) = u37;
    }
    *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned short *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x14)) = (*(short *)((a5 + 0x2)));
    *(unsigned short *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247DB8) + 0x16)) = 0x0;
}




int vmsfs_write_retry(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t6;
    int t11;
    int t12;
    int t20;
    int t7;

    t1 = (*(int *)0xC95432C);
    for (;;) {
        t2 = vmsio_block_write(a4, a5, a6);
        if (t2 != 0) {
            if (((*(int *)0xC237C0C) != 0) && (t2 == 0xFFFFFF30)) {
                return 0xFFFFFF01;
            }
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x34))) + 0x1);
            t6 = (t1 == 0);
            t1 = (t1 - 1);
            if (t6 && (t7 = *(int *)0xC95432C, t7 != -1)) {
                break;
            }
            continue;
        }
        break;
    }
    t11 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x30));
    t12 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = (t11 + 0x1);
    vmsfs_c_progress(a4);
    t20 = 0x0;
    if (t2 != 0) {
        t20 = 0xFFFFFF01;
        if (t2 != 0xFFFFFF01) {
            t20 = 0xFFFFFF40;
            if (t2 != 0xFFFFFF40) {
                t20 = 0xFFFF0000;
            }
        }
    }
    return t20;
}


int FUN_0c0111ba(int a4)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)0xC23EB14;
    t1 = t0;
    if (a4 == 0) {
        t1 = (t0 + 0x1);
    }
    FUN_0c0e631c(0xC23EB5B, t1, 0xE0);
    t4 = 0x0;
    for (;;) {
        if ((*(signed char *)0xC23EBD7) != (*(signed char *)((0xC1EF450 + t4)))) {
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x3) {
                break;
            }
            continue;
        }
        break;
    }
    FUN_0c0e631c((((a4 << 1) + (a4 << 2)) + 0xC23EC3B), 0xC23EBDA, 0x6);
    *(unsigned short *)(((a4 << 1) + 0xC1EF2F0)) = t4;
    *(unsigned short *)(((a4 << 1) + 0xC1EF31A)) = (*(signed char *)0xC23EB6A);
    *(unsigned short *)(((0xC1EF344 + (a4 << 1)) + 0x0)) = (((*(signed char *)0xC23EB6D) << 8) | (unsigned char)(*(signed char *)0xC23EB6E));
    *(unsigned short *)(((a4 << 1) + 0xC1EF36E)) = (unsigned char)(*(signed char *)0xC23EB73);
    *(unsigned short *)(((0xC1EF398 + (a4 << 1)) + 0x0)) = (*(signed char *)0xC23EB6C);
    *(unsigned short *)(((0xC1EF3C2 + (a4 << 1)) + 0x0)) = (((*(signed char *)0xC23EB6F) << 8) | (unsigned char)(*(signed char *)0xC23EB70));
    return 0x14;
}

int FUN_0c03457c(int a4, int a5)
{
    int t23;
    int stk[15];

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((-(*(short *)((a4 + 0x70)))));
    nlRotateAX((-(*(short *)((a4 + 0x6C)))));
    nlRotateAY((-(*(short *)((a4 + 0x6E)))));
    *(float *)(((int)stk + 36)) = ((-(*(float *)((a5 + 0x0)))) + (*(float *)((a4 + 0x30))));
    *(float *)(((int)stk + 40)) = ((-(*(float *)((a5 + 0x4)))) + (*(float *)((a4 + 0x34))));
    *(float *)(((int)stk + 44)) = ((-(*(float *)((a5 + 0x8)))) + (*(float *)((a4 + 0x38))));
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    FUN_0c0a7714((((int)stk + 4) + 0x10), ((int)stk + 4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 8))));
    t23 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)t23;
    return (unsigned short)t23;
}

int FUN_0c0a79fa(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float t5;
    float t6;
    float u7;
    int t9;
    int t14;
    int t26;
    int t29;
    int t20;
    int stk[27];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = a4;
    R1012 = a5;
    R1008 = a6;
    nlGetMatrix((((int)stk + 4) + 0xC));
    t1 = R1012;
    t4 = FUN_0c0d9dc0((*(float *)(((int)stk + 48))), (*(float *)(((int)stk + 56))));
    *(unsigned int *)((t1 + 0x0)) = (short)t4;
    t5 = FUN_0c0da410((short)t4);
    t6 = FUN_0c0d9e90((short)t4);
    u7 = *(float *)(((int)stk + 52));
    if ((((short)t4 + 0x2000) & 0x4000) == 0) {
        t9 = FUN_0c0d9dc0((-(u7 * t6)), (*(float *)(((int)stk + 56))));
        t20 = ((short)t9 + 0x8000);
        if (!(0.0f > t6)) {
            t20 = (short)t9;
        }
    } else {
        t14 = FUN_0c0d9dc0((-(u7 * t5)), (*(float *)(((int)stk + 48))));
        t20 = (short)t14;
        if (0.0f > t5) {
            t20 = ((short)t14 + 0x8000);
        }
    }
    *(unsigned int *)(((R1004) + 0x0)) = (short)t20;
    t26 = R1008;
    t29 = FUN_0c0d9dc0((((*(float *)(((int)stk + 40))) * t5) - ((*(float *)(((int)stk + 32))) * t6)), (((*(float *)(((int)stk + 16))) * t6) - ((*(float *)(((int)stk + 24))) * t5)));
    *(unsigned int *)((t26 + 0x0)) = (short)t29;
    return (short)t29;
}

int FUN_0c0a7c66(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float t5;
    float t6;
    float u7;
    int t9;
    int t14;
    int t26;
    int t29;
    int t20;
    int stk[27];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1008 = a4;
    R1004 = a5;
    R1012 = a6;
    nlGetMatrix((((int)stk + 4) + 0xC));
    t1 = R1012;
    t4 = FUN_0c0d9dc0((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((t1 + 0x0)) = (short)t4;
    t5 = FUN_0c0da410((short)t4);
    t6 = FUN_0c0d9e90((short)t4);
    u7 = *(float *)(((int)stk + 24));
    if ((((short)t4 + 0x2000) & 0x4000) == 0) {
        t9 = FUN_0c0d9dc0((-(u7 * t6)), (*(float *)(((int)stk + 16))));
        t20 = ((short)t9 + 0x8000);
        if (!(0.0f > t6)) {
            t20 = (short)t9;
        }
    } else {
        t14 = FUN_0c0d9dc0((-(u7 * t5)), (*(float *)(((int)stk + 20))));
        t20 = (short)t14;
        if (0.0f > t5) {
            t20 = ((short)t14 + 0x8000);
        }
    }
    *(unsigned int *)(((R1004) + 0x0)) = (short)t20;
    t26 = R1008;
    t29 = FUN_0c0d9dc0((((*(float *)(((int)stk + 48))) * t5) - ((*(float *)(((int)stk + 52))) * t6)), (((*(float *)(((int)stk + 36))) * t6) - ((*(float *)(((int)stk + 32))) * t5)));
    *(unsigned int *)((t26 + 0x0)) = (short)t29;
    return (short)t29;
}

int FUN_0c0a7d3c(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float t5;
    float t6;
    float u7;
    int t9;
    int t14;
    int t26;
    int t29;
    int t20;
    int stk[27];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    R1008 = a5;
    R1004 = a6;
    nlGetMatrix((((int)stk + 4) + 0xC));
    t1 = R1012;
    t4 = FUN_0c0d9dc0((*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 36))));
    *(unsigned int *)((t1 + 0x0)) = (short)t4;
    t5 = FUN_0c0da410((short)t4);
    t6 = FUN_0c0d9e90((short)t4);
    u7 = *(float *)(((int)stk + 32));
    if ((((short)t4 + 0x2000) & 0x4000) == 0) {
        t9 = FUN_0c0d9dc0((-(u7 * t6)), (*(float *)(((int)stk + 36))));
        t20 = ((short)t9 + 0x8000);
        if (!(0.0f > t6)) {
            t20 = (short)t9;
        }
    } else {
        t14 = FUN_0c0d9dc0((-(u7 * t5)), (*(float *)(((int)stk + 40))));
        t20 = (short)t14;
        if (0.0f > t5) {
            t20 = ((short)t14 + 0x8000);
        }
    }
    *(unsigned int *)(((R1004) + 0x0)) = (short)t20;
    t26 = R1008;
    t29 = FUN_0c0d9dc0((((*(float *)(((int)stk + 20))) * t5) - ((*(float *)(((int)stk + 24))) * t6)), (((*(float *)(((int)stk + 56))) * t6) - ((*(float *)(((int)stk + 52))) * t5)));
    *(unsigned int *)((t26 + 0x0)) = (short)t29;
    return (short)t29;
}









void FUN_0c0c98ce(int a4, int a5)
{
    int t3;
    int t5;
    int t19;
    int t24;
    int t28;
    int t29;
    int t0;
    int t2;
    int t33;

    if (a5 != 0) {
        t3 = (a5 + 0x18);
        for (;;) {
            t5 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t5 == 0) {
                return;
            }
            if ((t5 & 0x80000000) != 0) {
                t2 = (*(int *)(((a4 + 0x18) + 0x4)));
                t0 = 0xE7FFFFFF;
                t2 = (t2 & t0);
                *(unsigned int *)(((t3 - 4) + 0x4)) = (((*(int *)(((t3 - 4) + 0x4))) & 0x18000000) | t2);
                t0 = 0x40;
                *(unsigned int *)(((t3 - 4) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))));
                *(unsigned int *)(((t3 - 4) + 0xC)) = (*(int *)(((a4 + 0x18) + 0xC)));
                t2 = (*(int *)(((a4 + 0x18) + 0x20)));
                *(unsigned int *)(((t3 - 4) + 0x20)) = t2;
                *(unsigned int *)(((t3 - 4) + 0x2C)) = (*(int *)(((a4 + 0x18) + 0x2C)));
                t2 = (*(int *)(((a4 + 0x18) + 0x30)));
                *(unsigned int *)(((t3 - 4) + 0x30)) = t2;
                *(unsigned int *)(((t3 - 4) + 0x34)) = (*(int *)(((a4 + 0x18) + 0x34)));
                t2 = (*(int *)(((a4 + 0x18) + 0x38)));
                *(unsigned int *)(((t3 - 4) + 0x38)) = t2;
                *(unsigned int *)(((t3 - 4) + 0x3C)) = (*(int *)(((a4 + 0x18) + 0x3C)));
                t2 = (*(int *)(((a4 + 0x18) + t0)));
                *(unsigned int *)(((t3 - 4) + t0)) = t2;
                t0 = 0x44;
                *(unsigned int *)(((t3 - 4) + t0)) = (*(int *)(((a4 + 0x18) + t0)));
                t0 = 0x48;
                t2 = (*(int *)(((a4 + 0x18) + t0)));
                t19 = (t3 - 4);
                t3 = (t3 - 4);
                *(unsigned int *)((t19 + t0)) = t2;
                t0 = 0x28;
                *(float *)((t19 + t0)) = ((*(float *)(((a4 + 0x18) + t0))));
                t3 = (t3 + 0x50);
            } else {
                t0 = 0x10;
                if ((t5 & t0) != 0) {
                    t0 = (*(int *)((t3 + 0x0)));
                    t3 = (t3 + 0x4);
                    t24 = t3;
                    for (;;) {
                        if (((*(int *)((t24 + 0x0))) & 0x1) == 0) {
                            t24 = (t24 + 0x8);
                        } else {
                            t24 = (t24 + 0x20);
                        }
                        t0 = (t0 - 0x1);
                        if (t0 == 0) {
                            break;
                        }
                    }
                    t33 = t24;
                } else {
                    t0 = 0x8;
                    if ((t5 & t0) == 0) {
                        break;
                    }
                    t0 = (*(int *)((t3 + 0x0)));
                    t3 = (t3 + 0x4);
                    t28 = t0;
                    t0 = (t0 << 1);
                    t0 = (t0 + t28);
                    t29 = t3;
                    for (;;) {
                        t2 = (*(int *)((t29 + 0x0)));
                        if ((t2 & 0x1) == 0) {
                            t29 = (t29 + 0x8);
                        } else {
                            t29 = (t29 + 0x20);
                        }
                        t0 = (t0 - 0x1);
                        if (t0 == 0) {
                            break;
                        }
                    }
                    t33 = t29;
                }
                t3 = t33;
            }
        }
        for (;;) {
        }
    }
}


int FUN_0c033028(int a4)
{
    int t17;
    int t19;
    int t20;
    int stk[14];

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    (((struct o10_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct oC_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o8_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    FUN_0c0a7984(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))));
    t17 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)t17;
    *(unsigned int *)(((int)stk + 8)) = (unsigned short)(*(int *)(((int)stk + 8)));
    if ((((int)(unsigned short)t17 <= (int)0xFC00) && ((int)(unsigned short)t17 >= (int)0x400)) || ((t19 = *(int *)(((int)stk + 8)), (int)t19 <= (int)0xFC00) && (t20 = *(int *)(((int)stk + 8)), (int)t20 >= (int)0x400))) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0499ec(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC049C5C, 0x474, (*(int *)0xC23ECEC));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = a4;
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        (((struct oC8_uint *)(t1))->v) = 0x1;
    } else {
        (((struct oC8_uint *)(t1))->v) = 0x4;
    }
    (((struct o288_uint *)(t1))->v) = a5;
    (((struct oC0_uint *)(t1))->v) = (*(int *)(((a4 << 2) + 0xC23EDC0)));
    (((struct oC4_uint *)(t1))->v) = (*(int *)(((a4 << 2) + 0xC23EDD0)));
    (((struct o274_float *)(t1))->v) = 1.0f;
    (((struct o278_float *)(t1))->v) = 1.0f;
    (((struct o27C_float *)(t1))->v) = 1.0f;
    (((struct o284_float *)(t1))->v) = 1.0f;
    *(unsigned int *)((t1 + 0x4)) = 0xC049AAA;
    if ((int)a4 < (int)0x2) {
        (((struct o3A8_uint *)(t1))->v) = (a4 << 1);
    }
    *(unsigned int *)(((a4 << 2) + 0xC246FF0)) = t1;
    *(unsigned int *)((0xC2475A4 + (a4 << 2))) = 0x1;
    *(unsigned int *)((0xC2475A4 + (((a4 + 0x1) & 0x1) << 2))) = 0x0;
    FUN_0c0855ba(t1);
    FUN_0c0bb0f4(t1);
    FUN_0c0ba6e8(t1);
    FUN_0c0ba776(t1);
    return ((int (*)(int))(0xC0CBAF4))(t1);
}

