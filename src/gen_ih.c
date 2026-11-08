/* Straight-line functions with calls and guards (batch gen_ih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSTM_GetStat(int);
int ADXT_Stop(void);
int FUN_0c010c40(int);
int FUN_0c01d8de(int);
int FUN_0c02a19a(int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c038bd6(int, int);
int FUN_0c038ce0(int, int);
int FUN_0c039e96(int);
int FUN_0c03a66c(int, int, int, int);
int FUN_0c03a68e(int);
int FUN_0c03a834(int, int);
int FUN_0c03afe8(int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c048610(int);
int FUN_0c0555ca(int, int, int, int);
int FUN_0c05561a(int, int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c079de4(int);
int FUN_0c08545a(int, int, float, float, float);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7ed4(int, int, int, int);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c4684(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c4784(int, float);
int FUN_0c0c60d0(int, int, int);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(int);
int FUN_0c22a06c(int);
int FUN_0c22a512(int);
int adxt_RcvrReplay(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int thunk_kmSetCheapShadowMode(void);
int FUN_0c079f10(int a4);
int FUN_0c08e7d4(int a4, int a5, int a6, int a7);
int FUN_0c07928a(void);
int FUN_0c06ab92(int a4, int a5, int a6, int a7);
float FUN_0c06d49c(int a4, int a5, int a6, int a7);
int FUN_0c0708b0(int a4, int a5, int a6);
int FUN_0c03ae58(int a4, int a5);
int FUN_0c03b9d4(int a4, int a5, int a6, int a7);
int FUN_0c012ca8(void);
int FUN_0c05a2dc(int a4, int a5, int a6, float f4);
int FUN_0c0829ec(void);
int FUN_0c064fac(int a4, int a5, int a6, int a7);
int FUN_0c03b0e2(int a4, int a5);
int FUN_0c0b2262(int a4);
int FUN_0c22b13a(int a4);
int FUN_0c0487fc(int a4, float f4, float f5, float f6);
int FUN_0c06d9fc(int a4);
struct o10_float { char p[0x10]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o2544_int { char p[0x2544]; int v; };
struct o2544_uint { char p[0x2544]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_short { char p[0x40]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o500_int { char p[0x500]; int v; };
struct o500_uint { char p[0x500]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o54C_int { char p[0x54C]; int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o584_int { char p[0x584]; int v; };
struct o584_uint { char p[0x584]; unsigned int v; };
struct o5A0_uint { char p[0x5A0]; unsigned int v; };
struct o5A4_int { char p[0x5A4]; int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5A8_uint { char p[0x5A8]; unsigned int v; };
struct o5B4_int { char p[0x5B4]; int v; };
struct o5B8_uint { char p[0x5B8]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_short { char p[0x8C]; short v; };
struct o8E_short { char p[0x8E]; short v; };
struct o8E_ushort { char p[0x8E]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_short { char p[0x98]; short v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o98_ushort { char p[0x98]; unsigned short v; };
struct o9A_short { char p[0x9A]; short v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct o9C_short { char p[0x9C]; short v; };
struct o9E_short { char p[0x9E]; short v; };
struct o9E_ushort { char p[0x9E]; unsigned short v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_short { char p[0xA0]; short v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oE8_short { char p[0xE8]; short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };



int FUN_0c079f10(int a4)
{
    int stk[5];
    register int t10;
    register int t11;
    register int t20;
    register int t30;
    register float u33;
    register int t41;
    register int t69;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((*(int *)0xC23ED9C) != 24) && (t2 = *(int *)((((((struct o0_int *)0xC23ECF8)->v)) + 0x38)), t3 = (((struct o4_int *)0xC23ECF8)->v), t4 = *(short *)((t3 + 0x2)), t5 = *(int *)((0xC2078A4 + (t4 << 2))), (int)t2 < (int)(t5 - 3))) {
    } else {
        (((struct o34_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o80_uint *)(a4))->v) = 0x4;
    }
    t10 = (((struct o80_int *)(a4))->v);
    t11 = *(int *)0xC23ED9C;
    switch (t10) {
    case 0:
        (((struct o98_uint *)(a4))->v) = 0x59;
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        break;
    case 1:
        t69 = (((struct o98_int *)(a4))->v);
        (((struct o98_uint *)(a4))->v) = (t69 - 1);
        if ((int)(t69 - 1) > 0) {
        } else {
            (((struct o98_uint *)(a4))->v) = 0xA32;
            (((struct o90_float *)(a4))->v) = (20.0f / (float)((((struct o98_int *)(a4))->v)));
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    case 2:
        if (t11 != 25) {
            t30 = (((struct oA0_int *)(a4))->v);
            (((struct oA0_uint *)(a4))->v) = (t30 + 0x6800);
            u33 = ((((struct o58_float *)(a4))->v));
            u33 = u33 + 0.0799999982f * (FUN_0c0da410((t30 + 0x6800)));
            (((struct o34_float *)(a4))->v) = u33;
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + ((((struct o90_float *)(a4))->v)));
            if ((*(int *)0xC23ED9C) == 8) {
                (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) >> 1);
                (((struct o90_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / (float)((((struct o98_int *)(a4))->v)));
                (((struct o34_float *)(a4))->v) = 0.0f;
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
            } else {
                t41 = (((struct o98_int *)(a4))->v);
                (((struct o98_uint *)(a4))->v) = (t41 - 1);
                if ((int)(t41 - 1) <= 0) {
                    (((struct o80_uint *)(a4))->v) = 0x6;
                    (((struct o34_float *)(a4))->v) = 0.0f;
                }
            }
        }
        break;
    case 3:
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - ((((struct o90_float *)(a4))->v)));
        t20 = (((struct o98_int *)(a4))->v);
        (((struct o98_uint *)(a4))->v) = (t20 - 1);
        if ((int)(t20 - 1) <= 0) {
            (((struct o80_uint *)(a4))->v) = 0x6;
        }
        break;
    case 4:
        if (t11 == 7) {
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o80_uint *)(a4))->v) = 0x0;
        }
        break;
    }
    (((struct o38_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (((((struct o38_float *)(a4))->v)) != ((((struct o44_float *)(a4))->v))) {
        (((struct o44_float *)(a4))->v) = ((((struct o38_float *)(a4))->v));
        FUN_0c01d8de(a4);
    }
    return FUN_0c079de4(a4);
}

int FUN_0c08e7d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY(((((struct o8A_short *)(a4))->v)));
    nlRotateAX(((((struct o88_short *)(a4))->v)));
    nlRotateAZ(((((struct o8C_short *)(a4))->v)));
    if (((((struct oA0_short *)(a4))->v)) != 0) {
        u0 = (((struct o90_float *)(a4))->v);
        nlScale(u0, u0, u0);
        FUN_0c0de000(((((struct o90_float *)(a4))->v)));
        u0 = ((((float)((((struct oA0_short *)(a4))->v)) * 0.099999994f) / (float)((((struct o98_short *)(a4))->v))) + 0.899999976f);
    } else {
        u1 = (((struct o90_float *)(a4))->v);
        t0 = (((struct o98_short *)(a4))->v);
        t1 = (((struct o8E_short *)(a4))->v);
        u2 = ((((float)((short)t0 - (short)t1) * 0.199999988f) / (float)(short)t0) + 1.0f);
        nlScale((u1 * u2), ((u1 * (float)(short)t1) / (float)(short)t0), (u1 * u2));
        u3 = (u1 * u2);
        if (((u1 * (float)(short)t1) / (float)(short)t0) > (u1 * u2)) {
            u3 = ((u1 * (float)(short)t1) / (float)(short)t0);
        }
        FUN_0c0de000(u3);
        u0 = (((float)((((struct o8E_short *)(a4))->v)) * 0.899999976f) / (float)((((struct o98_short *)(a4))->v)));
    }
    FUN_0c0c475c(((((struct o9A_short *)(a4))->v)), u0);
    nlPopMatrix(0x1);
    t0 = (((struct o9E_short *)(a4))->v);
    (((struct o9E_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) >= (int)((((struct o9C_short *)(a4))->v))) {
        (((struct o9E_ushort *)(a4))->v) = 0x0;
        if (((((struct oA0_short *)(a4))->v)) != 0) {
            (((struct o9A_ushort *)(a4))->v) = (((((struct o9A_short *)(a4))->v)) + 0x2);
            t0 = (((struct oA0_short *)(a4))->v);
            (((struct oA0_ushort *)(a4))->v) = (t0 - 2);
            if ((int)(short)(t0 - 2) <= 0) {
                (((struct o98_ushort *)(a4))->v) = ((((struct o8E_short *)(a4))->v));
            }
        }
    }
    t0 = (((struct o8E_short *)(a4))->v);
    (((struct o8E_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return ((int (*)(void))(FUN_0c0e19f2))();
    }
    return 0x8E;
}

int FUN_0c07928a(void)
{
    int stk[16];
    register int t1;
    register int t4;
    register int t5;
    register int t6;
    register int t11;
    register int t13;
    register int t19;
    register int t31;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t41;
    register int t43;
    register int t46;
    register int t48;
    register int t49;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    t1 = FUN_0c0e19aa(0xC079424, 0x4A50, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    FUN_0c0dc5a0();
    R1012 = (0x2548 + t1);
    R1004 = (0x3B80 + t1);
    R1020 = (0x469C + t1);
    R1016 = 0x1;
    R1008 = 0xC100A5C;
    R1028 = 0x3;
    t4 = (0x2190 + t1);
    t5 = (t1 + 0x3C);
    t6 = (0x1674 + t1);
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0((R1008));
        t11 = *(int *)(((R1008) + 0xC));
        nlRotateAY(t11);
        R1024 = 0x5A;
        t13 = 0xC1004BC;
        for (;;) {
            if (((unsigned short)(*(short *)((t13 + 0xE))) & (R1016)) != 0) {
                FUN_0c0db470(t13, (R1012));
                *(unsigned short *)(((R1004) + 0x2)) = t11;
                t19 = R1020;
                R1020 = (t19 + 0x2);
                *(unsigned short *)((((t19 + 0x2) - 0x2) + 0x0)) = (*(short *)((t13 + 0xC)));
                R1012 = ((R1012) + 0xC);
                R1004 = ((R1004) + 0x6);
                (((struct o2544_uint *)(t1))->v) = (((((struct o2544_int *)(t1))->v)) + 0x1);
            } else {
                FUN_0c0db470(t13, t5);
                *(unsigned short *)((t6 + 0x2)) = t11;
                t5 = (t5 + 0xC);
                t6 = (t6 + 0x6);
                *(unsigned short *)((t4 + 0x0)) = (*(short *)((t13 + 0xC)));
                t4 = (t4 + 0x2);
                *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + 0x1);
            }
            t31 = R1024;
            t13 = (t13 + 0x10);
            R1024 = (t31 - 1);
            if ((t31 - 1) == 0) {
                break;
            }
        }
        R1016 = ((R1016) << 1);
        R1008 = ((R1008) + 0x10);
        t34 = R1028;
        R1028 = (t34 - 1);
        if ((t34 - 1) == 0) {
            break;
        }
    }
    R1012 = 0x6;
    t35 = t4;
    t36 = 0xC100CBC;
    t37 = t5;
    t38 = t6;
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0(t36);
        t41 = *(int *)((t36 + 0xC));
        R1004 = t41;
        nlRotateAY(t41);
        R1008 = 0x22;
        t43 = 0xC100A9C;
        for (;;) {
            FUN_0c0db470(t43, t37);
            t37 = (t37 + 0xC);
            *(unsigned short *)((t38 + 0x2)) = (R1004);
            t38 = (t38 + 0x6);
            t46 = *(int *)((t43 + 0xC));
            t43 = (t43 + 0x10);
            *(unsigned short *)((t35 + 0x0)) = t46;
            t35 = (t35 + 0x2);
            *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + 0x1);
            t48 = R1008;
            R1008 = (t48 - 1);
            if ((t48 - 1) == 0) {
                break;
            }
        }
        t49 = R1012;
        t36 = (t36 + 0x10);
        R1012 = (t49 - 1);
        if ((t49 - 1) == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c06ab92(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t8;
    register int t11;
    register int t14;
    register int t15;
    register int t35;
    int t16;

    if (0.0f > ((((struct oA0_float *)(a4))->v))) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
        t35 = FUN_0c0cc3f8(0x921A9, a5, a6, a7);
        *(unsigned int *)((a4 + 0x0)) = 0xC06AB84;
    } else {
        if ((((((struct o0_int *)0xC247030)->v)) != 4) && (t35 = (((struct o4_int *)0xC247030)->v), t35 != 4)) {
        } else {
            FUN_0c0c60d0(0xC0FB124, 0xC0FB118, 0xC);
            *(unsigned int *)((a4 + 0x30)) = 0x20A3;
            (((struct o34_float *)(a4))->v) = 192.0f;
            (((struct o38_float *)(a4))->v) = 415.0f;
            (((struct o40_float *)(a4))->v) = 4.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o64_uint *)(a4))->v) = 0x9;
            t8 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x30));
            if (((*(int *)0xC23A258) & 1) != 0) {
                *(unsigned int *)((a4 + 0x30)) = 0x20A2;
                (((struct o34_float *)(a4))->v) = 200.0f;
                (((struct o40_float *)(a4))->v) = ((((((struct oA0_float *)(a4))->v)) * 7.75f) / 6.0f);
                t11 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x30));
            }
            *(unsigned int *)((a4 + 0x30)) = 0x20A4;
            (((struct o34_float *)(a4))->v) = 160.0f;
            (((struct o38_float *)(a4))->v) = 383.0f;
            (((struct o40_float *)(a4))->v) = 0.699999988f;
            (((struct o44_float *)(a4))->v) = 0.699999988f;
            t14 = ((int (*)(int, float))(FUN_0c0c0340))((a4 + 0x30), 0.699999988f);
            t15 = *(int *)0xC23A258;
            t35 = t15;
            if (((t15 & 128) == 0) && (t16 = *(int *)0xC23A258, (0x1 & t16) != 0)) {
                if ((*(int *)0xC23A1A0) == 0) {
                    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(*(short *)(((((unsigned int)(t16 & 0x100) >> 8) << 1) + 0xC0FB130)));
                } else {
                    *(unsigned int *)((a4 + 0x30)) = (unsigned short)(*(short *)(((((unsigned int)(t16 & 0x100) >> 8) << 1) + 0xC0FB134)));
                }
                (((struct o34_float *)(a4))->v) = 320.0f;
                (((struct o38_float *)(a4))->v) = 304.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o64_uint *)(a4))->v) = 0xA;
                t35 = (((int (*)(int))(FUN_0c0c0340))((a4 + 0x30)));
            }
        }
    }
    return t35;
}

float FUN_0c06d49c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)0xC23ED9C;
    if (((int)t0 < (int)0xC) || ((int)t0 > (int)0xE)) {
        if ((int)t0 <= (int)0x9) {
            FUN_0c0685a4(t0, a5, a6, a7);
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
        nlRotateAZ((((((struct o64_short *)(a4))->v)) + ((((struct o70_int *)(a4))->v))));
        nlRotateAY((((((struct o62_short *)(a4))->v)) + ((((struct o6C_int *)(a4))->v))));
        nlRotateAX((((((struct o60_short *)(a4))->v)) + ((((struct o68_int *)(a4))->v))));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
        nlPopMatrix(0x1);
        u2 = (((((struct o94_float *)(a4))->v)) * ((((struct o48_float *)(a4))->v)));
        u2 = u2 + (float)(((((struct o60_short *)(a4))->v)) + ((((struct o68_int *)(a4))->v))) * ((((struct o90_float *)(a4))->v));
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u2);
        (((struct o68_uint *)(a4))->v) = (int)((float)((((struct o68_int *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        t0 = (((struct o64_short *)(a4))->v);
        t1 = (((struct o70_int *)(a4))->v);
        u2 = (((((struct o94_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v)));
        u2 = u2 + (float)(t0 + t1) * ((((struct o90_float *)(a4))->v));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u2);
        (((struct o70_uint *)(a4))->v) = (int)((float)((((struct o70_int *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o6C_uint *)(a4))->v) = (((((struct o6C_int *)(a4))->v)) + (int)((((struct o4C_float *)(a4))->v)));
        t2 = (((struct o62_short *)(a4))->v);
        t3 = (((struct o6C_int *)(a4))->v);
        if ((((int)(t2 + t3) > (int)0xE38) && (u0 = (((struct o4C_float *)(a4))->v), u0 > 0.0f)) || (((int)(t2 + t3) < (int)0xFFFFF1C8) && (u1 = (((struct o4C_float *)(a4))->v), 0.0f > u1))) {
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * (-1.0f));
        }
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * 0.994999945f);
        u0 = (float)(t0 + t1);
    }
    return u0;
}

int FUN_0c0708b0(int a4, int a5, int a6)
{
    int stk[23];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_7 = a4;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 20)) = 0xC247038;
    *(unsigned int *)(((int)stk + 12)) = 0xE;
    v0_4 = (0xC23A1A8);
    v0_2 = (0xC246FF0);
    v0_3 = (0x0);
    v0_0 = (v0_7);
    v0_1 = (0x0);
    v0_5 = (0xC246FF8);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0)) goto L_C0708EC;
    L_C070A28:;
    return v0_4;
    L_C0708EC:;
    v0_4 = (0xC070948);
    v0_7 = (0xC08545A);
    w0_1 = (120.0f);
    w0_2 = (0.0f);
    w0_0 = (1.0f);
    L_C0708F6:;
    v0_7 = *(int *)(((int)stk + 20));
    v0_8 = *(int *)((v0_5 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (v0_7 + 0x4);
    v0_6 = (v0_8);
    v0_7 = ((*(int *)((((v0_7 + 0x4) - 4) + 0x0))));
    v0_5 = ((v0_5 + 0x4));
    if ((v0_8 == 0)) goto L_C070928;
    v0_4 = (v0_7);
    if ((v0_7 != 4)) goto L_C070928;
    v0_1 = FUN_0c08545a((v0_6 + 0x30), (((int)stk + 4) + 0x20), w0_0, w0_2, w0_1);
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C070926;
    v0_1 = (v0_3);
    L_C070932:;
    if ((v0_1 != 0)) goto L_C07094C;
    *(unsigned int *)((v0_0 + 0x30)) = v0_3;
    goto L_C070A28;
    L_C07094C:;
    v0_3 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_3 + 0x1);
    if (((int)(v0_3 + 0x1) < (int)0x12C)) goto L_C070A28;
    v0_3 = *(int *)0xC23A258;
    *(unsigned int *)(((int)stk + 16)) = (((unsigned int)((unsigned int)v0_3 >> 2) >> 2) & 0x3);
    v0_4 = ((((unsigned int)((unsigned int)v0_3 >> 2) >> 2) & 0x3));
    if (((((unsigned int)((unsigned int)v0_3 >> 2) >> 2) & 0x3) == 0)) goto L_C070A28;
    *(unsigned int *)(((int)stk + 12)) = 0x2;
    w0_0 = (((struct o4_float *)0xC070A6C)->v);
    w0_1 = ((((struct o0_float *)0xC070A6C)->v));
    w0_1 = w0_1 + w0_0 * (FUN_0c0da410(((((*(int *)0xC23A258) << 8) << 2) << 2)));
    (((struct o34_float *)(v0_0))->v) = w0_1;
    v0_5 = v0_2;
    v0_4 = (v0_2 + 0x40);
    v0_2 = (0xC0DC6E0);
    v0_3 = (0x3AC);
    v0_7 = v0_5;
    v0_5 = v0_4;
    w0_0 = (w0_0);
    w0_0 = (((((struct oC_float *)0xC070A6C)->v)));
    L_C070998:;
    v0_2 = *(int *)((v0_5 + 0x0));
    v0_4 = (v0_2);
    v0_6 = ((*(int *)((v0_7 + 0x0))));
    v0_7 = ((v0_7 + 0x4));
    v0_5 = ((v0_5 + 0x4));
    if ((v0_2 != 4)) goto L_C070A1E;
    nlSubVector3op((((int)stk + 4) + 0x14), (v0_1 + 0x30), (v0_6 + 0x30));
    nlScaleUnitVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), ((float)(*(int *)(((int)stk + 16))) * w0_0));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 32))));
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + w0_0);
    nlAddVector((((int)stk + 4) + 0x14), (v0_6 + 0x30));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((((int)stk + 4) + 0x14));
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    FUN_0c0c4784(v0_3, ((((struct o34_float *)(v0_0))->v)));
    v0_4 = ((nlPopMatrix(0x1)));
    L_C070A1E:;
    v0_2 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_2 - 1);
    if (((v0_2 - 1) != 0)) goto L_C070998;
    goto L_C070A28;
    L_C070926:;
    v0_1 = (v0_6);
    L_C070928:;
    v0_6 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_6 - 1);
    if (((v0_6 - 1) != 0)) goto L_C0708F6;
    goto L_C070932;
}

int FUN_0c03ae58(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c038ce0(a4, a5);
    if ((int)((((struct o57C_int *)(a4))->v)) < (int)0x3) {
        (((struct o57C_uint *)(a4))->v) = 0x3;
    }
    if ((int)((((struct o584_int *)(a4))->v)) < (int)0x2) {
        t0 = (((struct o4F0_int *)(a4))->v);
        t1 = (((struct o584_int *)(a4))->v);
        t2 = (((struct o5A4_int *)(a4))->v);
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o57C_int *)(a4))->v)) << 1) + ((((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0x84) + ((((t1 << 1) + t1) << 2) << 2)) + (((t2 << 1) + t2) << 2)))));
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            t0 = (((struct o4F0_int *)(a4))->v);
            t1 = (((struct o584_int *)(a4))->v);
            t2 = (((struct o5A4_int *)(a4))->v);
            (((struct o5B8_uint *)(a4))->v) = (unsigned short)(*(short *)((((((t2 << 1) + t2) << 2) + (((((t1 << 1) + t1) << 2) << 2) + ((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10))) + 0x84))) + 0xA)));
        }
    } else {
        t0 = (((struct o4F0_int *)(a4))->v);
        t1 = (((struct o584_int *)(a4))->v);
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o57C_int *)(a4))->v)) << 1) + (((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0xE4) + ((((t1 - 2) << 1) + (t1 - 2)) << 2)))));
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            t0 = (((struct o4F0_int *)(a4))->v);
            t1 = (((struct o584_int *)(a4))->v);
            (((struct o5B8_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((t1 - 2) << 1) + (t1 - 2)) << 2) + ((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10))) + 0xE4)) + 0xA)));
        }
    }
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x800;
    (((struct o210_uint *)(a4))->v) = 0xB;
    (((struct o4C4_uint *)(a4))->v) = 0x3;
    (((struct o4C8_uint *)(a4))->v) = 0x7;
    (((struct o3B8_uint *)(a4))->v) = 0x0;
    t0 = (((struct o578_int *)(a4))->v);
    if (t0 == 6) {
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            t1 = (((struct oC8_int *)(a4))->v);
            if ((t1 & 4) != 0) {
                return FUN_0c039e96(a4);
            }
            return t1;
        }
        return 0x304;
    }
    return t0;
}

int FUN_0c03b9d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)((((struct oD0_int *)(a4))->v)) >= 0) {
        return 0xD0;
    }
    if (((((struct oB4_float *)(a4))->v)) > ((((struct o34_float *)(a4))->v))) {
        (((struct o34_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.00999999978f);
    }
    t0 = (((struct o2F4_int *)(a4))->v);
    if ((t0 & 0xFFF0) != 0) {
        if ((t0 & 0xFFF0) != 0x100) {
            if ((t0 & 0xFFF0) != 0x200) {
                if ((t0 & 0xFFF0) != 0x300) {
                    if ((t0 & 0xFFF0) != 0x400) {
                        t1 = (t0 & 0xFFF0);
                        if ((t0 & 0xFFF0) == 0x500) {
                            (((struct o2CC_uint *)(a4))->v) = 0x1;
                            (((struct o20C_uint *)(a4))->v) = 0x800;
                            (((struct o210_uint *)(a4))->v) = 0x43;
                            t1 = 0x210;
                        }
                        return t1;
                    }
                    if ((((((struct oC8_int *)(a4))->v)) & 0x230) != 0) {
                        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
                        (((struct o57C_uint *)(a4))->v) = 0x2;
                        (((struct o5A8_uint *)(a4))->v) = 0x0;
                        (((struct o5A4_uint *)(a4))->v) = 0x0;
                        (((struct o5A0_uint *)(a4))->v) = 0x0;
                        (((struct o580_uint *)(a4))->v) = 0x0;
                        return FUN_0c03afe8(a4, 0x0);
                    }
                    (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
                    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
                        t0 = (((struct o4F0_int *)(a4))->v);
                        (((struct o560_uint *)(a4))->v) = (unsigned short)((((struct o3C_short *)((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0)))))->v));
                    }
                    return FUN_0c03a834(a4, 0x8000);
                }
                (((struct o20C_uint *)(a4))->v) = 0x200;
                (((struct o210_uint *)(a4))->v) = 0x7;
                (((struct o4C4_uint *)(a4))->v) = 0x1;
                (((struct o4C8_uint *)(a4))->v) = 0x4;
                return 0x4C8;
            }
            (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
            if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
                t0 = (((struct o4F0_int *)(a4))->v);
                (((struct o560_uint *)(a4))->v) = (unsigned short)((((struct o40_short *)((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0)))))->v));
            }
            return FUN_0c03a68e(a4);
        }
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            t0 = (((struct o4F0_int *)(a4))->v);
            (((struct o560_uint *)(a4))->v) = (unsigned short)((((struct o38_short *)((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0)))))->v));
        }
        return FUN_0c03a66c(a4, 0x8000, 0x1, a7);
    }
    (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t0 = (((struct o4F0_int *)(a4))->v);
        (((struct o560_uint *)(a4))->v) = (unsigned short)((((struct o38_short *)((*(int *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x4))) + 0x0)))))->v));
    }
    return FUN_0c03a66c(a4, 0x8000, 0x1, a7);
}

int FUN_0c012ca8(void)
{
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register float u13;
    register int t15;
    register int t29;
    int t30;
    register int t31;

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    t2 = 0x0;
    t3 = 0xC0F4274;
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        FUN_0c0c465c(t4);
        t2 = (t2 + 0x1);
        if ((unsigned int)t2 >= (unsigned int)0x5) {
            break;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.399999976f, 0.0f);
    FUN_0c0c465c(0x145B);
    FUN_0c0c465c(0x145C);
    nlPopMatrix(0x1);
    t11 = *(int *)0xC523158;
    u13 = (float)(t11 & 0x1F);
    if (((*(int *)0xC523158) & 32) != 0) {
        u13 = (31.0f - (float)(t11 & 0x1F));
    }
    t15 = 0x0;
    for (;;) {
        if (t15 == (*(int *)0xC1EF570)) {
            FUN_0c0c465c((*(int *)((((t15 << 2) + 0xC0F426C) + 0x0))));
            FUN_0c0c465c(0x145A);
            FUN_0c0c475c(0x1459, (u13 / 31.0f));
        } else {
            FUN_0c0c475c((*(int *)((((t15 << 2) + 0xC0F426C) + 0x0))), 0.5f);
            FUN_0c0c465c(0x1457);
        }
        FUN_0c0dcc70(0.0f, (-1.0f), 0.0f);
        t15 = (t15 + 0x1);
        if ((int)t15 >= (int)0x2) {
            break;
        }
    }
    t29 = nlPopMatrix(0x1);
    t30 = *(int *)0xC2498F4;
    t31 = *(int *)0xC1EF570;
    if ((0x3030 & t30) != 0) {
        if ((t30 & 0x2020) != 0) {
            if (t31 == 0) {
                *(unsigned int *)0xC1EF570 = 0x1;
            }
        } else {
            if (t31 != 0) {
                *(unsigned int *)0xC1EF570 = 0x0;
            }
        }
        return 0x2020;
    }
    if ((0xC & t30) != 0) {
        return FUN_0c010c40((t31 + 0x9));
    }
    if ((t30 & 0x2) != 0) {
        *(unsigned int *)0xC23A260 = 0x3;
    }
    return t29;
}


int FUN_0c0829ec(void)
{
    int stk[15];
    register int t1;
    int t6;
    register float u35;
    register float u46;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((((struct o3F4_int *)(t1))->v)) != 1) {
        (((struct o3F4_uint *)(t1))->v) = 0x0;
    }
    (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = 0.0f;
    (((struct o4_float *)((((int)stk + 4) + 0x10)))->v) = 0.0f;
    (((struct o10_float *)(((int)stk + 4)))->v) = 0.0f;
    t6 = *(int *)0xC249838;
    if (((0x400 & t6) == 0) && ((0x200 & t6) == 0)) {
        if (((*(int *)0xC249838) & 0x10) != 0) {
            (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = (-1.0f);
        }
        if (((*(int *)0xC249838) & 0x20) != 0) {
            (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = 1.0f;
        }
        if (((*(int *)0xC249838) & 0x40) != 0) {
            (((struct o3CE_ushort *)(t1))->v) = (((((struct o3CE_short *)(t1))->v)) + 0x100);
        }
        if (((*(int *)0xC249838) & 0x80) != 0) {
            (((struct o3CE_ushort *)(t1))->v) = (((((struct o3CE_short *)(t1))->v)) - 0x100);
        }
    }
    if (((*(int *)0xC249838) & 0x400) != 0) {
        if (((*(int *)0xC249838) & 0x10) != 0) {
            if (((*(int *)0xC249838) & 0x2) != 0) {
                u35 = (((((struct o258_float *)(t1))->v)) + 5.0f);
            } else {
                u35 = (((((struct o258_float *)(t1))->v)) + 1.0f);
            }
            (((struct o258_float *)(t1))->v) = u35;
        }
        if (((*(int *)0xC249838) & 0x20) != 0) {
            if (((*(int *)0xC249838) & 0x2) != 0) {
                u46 = (((((struct o258_float *)(t1))->v)) - 5.0f);
            } else {
                u46 = (((((struct o258_float *)(t1))->v)) - 1.0f);
            }
            (((struct o258_float *)(t1))->v) = u46;
        }
        if (((*(int *)0xC249838) & 0x40) != 0) {
            (((struct o10_float *)(((int)stk + 4)))->v) = (-1.0f);
        }
        if (((*(int *)0xC249838) & 0x80) != 0) {
            (((struct o10_float *)(((int)stk + 4)))->v) = 1.0f;
        }
    }
    if (((*(int *)0xC249838) & 0x200) != 0) {
        if ((0x10 & (*(int *)0xC249838)) != 0) {
            (((struct o3CC_ushort *)(t1))->v) = (((((struct o3CC_short *)(t1))->v)) + 0x100);
        }
        if ((0x20 & (*(int *)0xC249838)) != 0) {
            (((struct o3CC_ushort *)(t1))->v) = (((((struct o3CC_short *)(t1))->v)) - 0x100);
        }
        if ((0x40 & (*(int *)0xC249838)) != 0) {
            (((struct o3CE_ushort *)(t1))->v) = (((((struct o3CE_short *)(t1))->v)) + 0x100);
        }
        if ((0x80 & (*(int *)0xC249838)) != 0) {
            (((struct o3CE_ushort *)(t1))->v) = (((((struct o3CE_short *)(t1))->v)) - 0x100);
        }
    }
    if ((0x2 & (*(int *)0xC249838)) != 0) {
        (((struct o10_float *)(((int)stk + 4)))->v) = (((((struct o10_float *)(((int)stk + 4)))->v)) * 5.0f);
        (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = (((((struct o8_float *)((((int)stk + 4) + 0x10)))->v)) * 5.0f);
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    FUN_0c0a6688((((int)stk + 4) + 0x10), (0x3CC + t1), (((int)stk + 4) + 0x4));
    (((struct o254_float *)(t1))->v) = (((((struct o254_float *)(t1))->v)) + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))));
    (((struct o25C_float *)(t1))->v) = (((((struct o25C_float *)(t1))->v)) + ((((struct oC_float *)(((int)stk + 4)))->v)));
    return 0x25C;
}

int FUN_0c064fac(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t46;
    register int t4;
    register int t15;
    register int t24;
    register int t32;
    register int t36;

    t0 = *(int *)((a4 + 0x30));
    t1 = FUN_0c0685a4(a4, a5, a6, a7);
    t2 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t2 - 1);
    t46 = t1;
    if ((int)(t2 - 1) >= 0) {
    } else {
        t4 = FUN_0c0e19aa(0xC064876, 0x16D4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t4);
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((((struct o3E4_int *)(t0))->v)));
        FUN_0c0dcca0(0xC0F9FB8);
        FUN_0c0db840((t4 + 0x30));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x3C)) = *(struct mv3 *)((t4 + 0x30)); }
        nlUnitMatrix();
        (((struct o6E_ushort *)(t4))->v) = ((((struct o6E_short *)(t0))->v));
        (((struct o6C_ushort *)(t4))->v) = ((((*(int *)((a4 + 0x38))) << 8) << 2) - 2048);
        nlPopMatrix(0x1);
        t15 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t15 + 0x1);
        if ((int)(t15 + 0x1) >= (int)0x4) {
            FUN_0c0e19f2();
        }
        FUN_0c0cc3f8(0x52BA9, 0x0, 0x0, 0x0);
        FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0);
        t24 = *(int *)((a4 + 0x34));
        (((struct oBC_uint *)(t4))->v) = ((((struct oBC_int *)(t0))->v));
        (((struct o200_uint *)(t4))->v) = (unsigned char)(*(signed char *)((t24 + 0x2)));
        if ((int)((((struct oE8_short *)(t0))->v)) < (int)0x4) {
            t32 = 0x0;
            if ((*(signed char *)((t24 + 0x4))) != 0) {
                t32 = ((((struct o1EC_int *)(t0))->v));
            }
            t36 = t32;
        } else {
            t36 = ((int)0x1 << (int)((((struct oBC_int *)(t0))->v)));
        }
        (((struct o1EC_uint *)(t4))->v) = t36;
        (((struct o1E8_uint *)(t4))->v) = (unsigned char)(*(signed char *)((t24 + 0x3)));
        (((struct o1F4_uint *)(t4))->v) = (unsigned char)(*(signed char *)((t24 + 0x4)));
        (((struct o204_uint *)(t4))->v) = (unsigned char)(*(signed char *)((t24 + 0x5)));
        (((struct o1E4_float *)(t4))->v) = 1.0f;
        (((struct o1FC_uint *)(t4))->v) = (unsigned char)(*(signed char *)((t24 + 0x1)));
        (((struct o1F8_uint *)(t4))->v) = (unsigned char)(*(signed char *)((t24 + 0x0)));
        (((struct o22C_uint *)(t4))->v) = (unsigned short)(*(short *)((t24 + 0x8)));
        (((struct o24C_float *)(t4))->v) = ((((struct oC_float *)(t24))->v));
        *(unsigned int *)((a4 + 0x3C)) = 0x8;
        t46 = 0x24C;
    }
    return t46;
}

int FUN_0c03b0e2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if ((int)((((struct o57C_int *)(a4))->v)) > (int)0x2) {
        (((struct o57C_uint *)(a4))->v) = 0x2;
    }
    if (((((((struct o20C_int *)(a4))->v)) == 4) && ((t0 = (((struct o500_int *)(a4))->v), (int)t0 < (int)0x6) || (t1 = (((struct o500_int *)(a4))->v), (int)t1 > (int)0xD))) || ((t2 = (((struct o2F0_int *)(a4))->v), t2 != 0) && ((t3 = (((struct o500_int *)(a4))->v), t3 != 1) && ((t4 = (((struct o57C_int *)(a4))->v), t4 == 0) && (t5 = (((struct o304_int *)(a4))->v), (int)t5 > 0))))) {
        FUN_0c038bd6(a4, a5);
        if (((((struct o584_int *)(a4))->v)) == 1) {
            (((struct o584_uint *)(a4))->v) = 0x0;
        }
    } else {
        FUN_0c038ce0(a4, a5);
    }
    if ((int)((((struct o584_int *)(a4))->v)) < (int)0x2) {
        t0 = (((struct o4F0_int *)(a4))->v);
        t1 = (((struct o584_int *)(a4))->v);
        t2 = (((struct o5A4_int *)(a4))->v);
        *(unsigned int *)((((((((struct o5B4_int *)(a4))->v)) << 2) + (0x2C4 + a4)) + 0x0)) = (unsigned short)(*(short *)(((((((struct o57C_int *)(a4))->v)) << 1) + ((((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0x84) + ((((t1 << 1) + t1) << 2) << 2)) + (((t2 << 1) + t2) << 2)))));
    } else {
        t0 = (((struct o4F0_int *)(a4))->v);
        t1 = (((struct o584_int *)(a4))->v);
        *(unsigned int *)((((((((struct o5B4_int *)(a4))->v)) << 2) + (0x2C4 + a4)) + 0x0)) = (unsigned short)(*(short *)(((((((struct o57C_int *)(a4))->v)) << 1) + (((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0xE4) + ((((t1 - 2) << 1) + (t1 - 2)) << 2)))));
    }
    *(unsigned int *)((((((((struct o5B4_int *)(a4))->v)) << 2) + (0x2CC + a4)) + 0x0)) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x200;
    (((struct o210_uint *)(a4))->v) = 0x7;
    (((struct o4C4_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x4;
    t0 = (((struct o578_int *)(a4))->v);
    if (t0 == 6) {
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            if ((0x4 & ((((struct oC8_int *)(a4))->v))) != 0) {
                return FUN_0c039e96(a4);
            }
            return 0xC8;
        }
        return 0x304;
    }
    return t0;
}



int FUN_0c0487fc(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register float u21;
    register float u22;
    register float u17;
    register float u18;
    register float u14;
    register float u11;
    register int t35;
    register int t37;
    register int t45;
    register int t40;
    register int t54;

    *(volatile int *)((a4 + 0x48C));
    *(unsigned int *)(((int)stk + 32)) = 0x200;
    u21 = 0.0f;
    u22 = (-0.0599999987f);
    if (((((struct o500_int *)(a4))->v)) == 2) {
    } else {
        u17 = 0.0f;
        u18 = 0.0599999987f;
        if (((((struct o500_int *)(a4))->v)) == 3) {
        } else {
            u14 = (-0.0599999987f);
            if (((((struct o500_int *)(a4))->v)) == 4) {
            } else {
                u11 = 0.0f;
                if (((((struct o500_int *)(a4))->v)) == 5) {
                    u11 = 0.0599999987f;
                }
                u14 = u11;
            }
            u17 = u14;
            u18 = 0.0f;
        }
        u21 = u17;
        u22 = u18;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    *(float *)(((int)stk + 48)) = u21;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = u22;
    FUN_0c0db470((((int)stk + 12) + 0x24), (((int)stk + 12) + 0x18));
    (((struct o4B0_float *)(a4))->v) = (*(float *)(((int)stk + 36)));
    (((struct o10_float *)(((int)stk + 12)))->v) = (*(float *)(((int)stk + 40)));
    (((struct o4B8_float *)(a4))->v) = (*(float *)(((int)stk + 44)));
    nlPopMatrix(0x1);
    t35 = FUN_0c0350a4(a4, (*(int *)(((int)stk + 32))), 0x1, 0x0);
    if (t35 != 0) {
        t37 = *(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0));
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
        FUN_0c03442c(a4, t37, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
        if (((int)((((struct o54C_int *)(a4))->v)) > 0) && (t40 = *(int *)(((int)stk + 12)), t40 == 0)) {
            t45 = (((struct o3AC_int *)(a4))->v);
            (((struct o3AC_uint *)(a4))->v) = (t45 + 0x1);
            if ((int)(t45 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
            } else {
                (((struct o500_uint *)(a4))->v) = 0x0;
                FUN_0c02a19a(a4);
            }
        } else {
            if ((((((struct o500_int *)(a4))->v)) != 2) && (t54 = *(int *)(((int)stk + 12)), t54 == 0)) {
                FUN_0c048610(a4);
            }
        }
    } else {
        (((struct o500_uint *)(a4))->v) = 0x0;
        FUN_0c02a19a(a4);
    }
    return (FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048A1C)));
}



