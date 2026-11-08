/* Straight-line functions with calls and guards (batch gen_gg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[7]; } Stk7;
int FUN_0c01c46a(int, int);
int FUN_0c01c86c(int, int);
int FUN_0c01cb94(int, int);
int FUN_0c036256(int);
int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c0392e8(int, int);
int FUN_0c039302(int);
int FUN_0c039354(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5dc0(void);
int FUN_0c0e5fe4(void);
int kdGetDevice(int);
int kdSetBlockWrite(Stk4);
int kdSetGetLastError(Stk4);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int vmsfb_sleep(void);
int vmsio_ismount(int);
int FUN_0c039e96(int a4);
int FUN_0c0194e8(int a4, int a5, int a6, int a7);
int FUN_0c09bb20(int a4, int a5, int a6, int a7);
int kmiFBgetfreemem(int a4, int a5, int a6, int a7);
int FUN_0c0a7064(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c03e388(int a4, float f4);
void FUN_0c01c274(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int FUN_0c0c8e40(int a4, int a5, int a6, int a7, float f4);
int vmsio_block_write(int a4, int a5, int a6);
struct o20_float { char p[0x20]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o32_short { char p[0x32]; short v; };
struct o34_float { char p[0x34]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5CC_int { char p[0x5CC]; int v; };
struct o5D4_int { char p[0x5D4]; int v; };
struct o5D4_uint { char p[0x5D4]; unsigned int v; };
struct o5D8_int { char p[0x5D8]; int v; };
struct o5DC_int { char p[0x5DC]; int v; };
struct o5E8_int { char p[0x5E8]; int v; };
struct o5E8_uint { char p[0x5E8]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };


int FUN_0c039e96(int a4)
{
    int t1;
    int t2;
    int t96;
    int t5;
    int t86;
    int t8;
    int t9;
    int t10;
    int t19;
    int t22;
    int t23;
    int t24;
    int t26;
    int t44;
    int t62;
    int t64;
    int t65;
    int t75;
    int t77;
    int t79;
    int stk[23];

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t1 = (((struct oC4_int *)(a4))->v);
    t2 = *(int *)(((((((struct oC0_int *)(a4))->v)) << 2) + 0xC195AFC));
    t96 = 0x5CC;
    if (((((struct o5CC_int *)(a4))->v)) == 0) {
    } else {
        t5 = (((struct oC8_int *)(a4))->v);
        t86 = t5;
        if ((t5 & 64) != 0) {
        } else {
            *(unsigned int *)(((int)stk + 32)) = (*(int *)(((0x5D0 + a4) + 0x8)));
            *(unsigned int *)(((int)stk + 28)) = (*(int *)(((0x5D0 + a4) + 0xC)));
            *(unsigned int *)(((int)stk + 24)) = (((int)stk + 16) + 0x14);
            t8 = (((int)stk + 16) + 0x14);
            for (;;) {
                if ((unsigned int)t8 >= (unsigned int)((((int)stk + 16) + 0x14) + 0x18)) {
                    break;
                }
                *(unsigned int *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x4);
            }
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 16) + 0x14) + 0x4);
            t9 = 0x0;
            for (;;) {
                (((struct o580_uint *)(a4))->v) = t9;
                for (;;) {
                    t10 = FUN_0c039354(a4);
                    if (t10 == 0) {
                        break;
                    }
                    *(unsigned int *)((((t9 << 2) + (((int)stk + 16) + 0x14)) + 0x0)) = 0x1;
                }
                if ((((((struct o5E8_int *)(a4))->v)) == 0) && (t9 == 1)) {
                    (((struct o5D4_uint *)(a4))->v) = (((((struct o5D4_int *)(a4))->v)) + 0x2);
                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x1;
                    (((struct o5E8_uint *)(a4))->v) = 0x1;
                }
                if ((*(int *)(((((int)stk + 16) + 0x14) + (((((struct o580_int *)(a4))->v)) << 2)))) != 0) {
                    t19 = 0x0;
                    for (;;) {
                        t22 = *(int *)((((((((struct o580_int *)(a4))->v)) << 2) + (0x5D0 + a4)) + 0x0));
                        t23 = *(signed char *)((t19 + (((((((struct o580_int *)(a4))->v)) * 0x1E) + (0x96 + (t2 + (t1 * 0x28A)))) + ((t22 << 1) + (t22 << 2)))));
                        t24 = *(int *)(((0x5D0 + a4) + (t19 << 2)));
                        t26 = (t19 << 2);
                        t19 = (t19 + 0x1);
                        if ((int)t24 < (int)(unsigned char)t23) {
                            *(unsigned int *)((((0x5D0 + a4) + t26) + 0x0)) = (unsigned char)t23;
                            *(unsigned int *)(((((int)stk + 16) + 0x14) + t26)) = 0x1;
                        }
                        if ((int)t19 >= (int)0x6) {
                            break;
                        }
                    }
                }
                t9 = (t9 + 0x1);
                if ((int)t9 >= (int)0x4) {
                    break;
                }
            }
            if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) != 0) {
                FUN_0c039288(a4, 0x1, 0x0);
                t44 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t44 + 0x1);
                *(int *)((int)stk + 12) = ((t44 + 0x1) - 1);
                *(int *)((int)stk + 8) = (0x1EA + (t2 + (t1 * 0x28A)));
                *(int *)((int)stk + 4) = 0xA;
                FUN_0c038732(a4, 0x1, 0x1, 0x1, 0xA, (0x1EA + (t2 + (t1 * 0x28A))), ((t44 + 0x1) - 1));
            }
            FUN_0c0392e8(a4, 0x1);
            FUN_0c039302(a4);
            FUN_0c0392e8(a4, 0x0);
            FUN_0c0392e8(a4, 0x2);
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0x8))) != 0) {
                FUN_0c039288(a4, 0x3, 0x2);
                FUN_0c039288(a4, 0x4, 0x2);
                FUN_0c039288(a4, 0x5, 0x2);
                t62 = *(int *)(((int)stk + 32));
                t64 = *(short *)(((((((t62 << 2) + t62) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + (((((struct o5D8_int *)(a4))->v)) << 1)) + 0x0));
                t65 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t65 + 0x1);
                *(int *)((int)stk + 12) = ((t65 + 0x1) - 1);
                *(int *)((int)stk + 8) = ((((t64 << 1) + t64) << 2) + (0x1F0 + (t2 + (t1 * 0x28A))));
                *(int *)((int)stk + 4) = 0xA;
                FUN_0c038732(a4, 0x3, 0x4, 0x5, 0xA, ((((t64 << 1) + t64) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))), ((t65 + 0x1) - 1));
            }
            FUN_0c0392e8(a4, 0x3);
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0xC))) != 0) {
                FUN_0c039288(a4, 0x6, 0x3);
                FUN_0c039288(a4, 0x7, 0x3);
                FUN_0c039288(a4, 0x8, 0x3);
                t75 = *(int *)(((int)stk + 28));
                t77 = (((struct o32_short *)((((((t75 << 2) + t75) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + (((((struct o5DC_int *)(a4))->v)) << 1))))->v);
                t79 = (*(int *)(((int)stk + 16)));
                *(int *)((int)stk + 12) = t79;
                *(int *)((int)stk + 8) = (((((t77 << 1) + t77) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))) + 0x6);
                *(int *)((int)stk + 4) = 0xA;
                FUN_0c038732(a4, 0x6, 0x7, 0x8, 0xA, (((((t77 << 1) + t77) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))) + 0x6), t79);
            }
            FUN_0c0392e8(a4, 0x6);
            t86 = (FUN_0c0cc3f8(0x22CA9, 0x0, 0x0, 0x0));
        }
        t96 = t86;
    }
    return t96;
}

int FUN_0c0194e8(int a4, int a5, int a6, int a7)
{
    int t1;
    float u11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    float u45;
    int t66;
    float u46;
    float u47;
    int t74;
    int t6;
    int t7;
    int t19;
    float u61;
    int stk[38];

    *(unsigned int *)(((int)stk + 8)) = a4;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x44)) = *(struct mv8 *)(0xC0F5294); }
    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((*(int *)0xC23ED5C) & 4) != 0) {
        *(unsigned int *)0xC23EE54 = 0x0;
        FUN_0c0e19f2();
    } else {
        t6 = 0xC0F5294;
        t7 = 0xC23ED5C;
    }
    u11 = (((struct o34_float *)((*(int *)(((int)stk + 8)))))->v);
    t12 = 0x34;
    t13 = t6;
    t14 = t7;
    t15 = (int)((float)(int)u11 / 137.049988f);
    t16 = ((int)((float)(int)u11 / 137.049988f) - 2);
    t17 = 0x0;
    t18 = a7;
    for (;;) {
        if ((int)t16 > (int)((int)((float)(int)u11 / 137.049988f) + 0x2)) {
            break;
        }
        t19 = 0x1A;
        t18 = t16;
        t18 = (t18 + 0x10);
        t13 = 0xC23EE58;
        t18 = (t18 & 0xF);
        t14 = 0xC23F058;
        t18 = (t18 << 2);
        t15 = 0x0;
        t19 = (t17 * t19);
        t18 = (t18 << 2);
        t18 = (t18 << 1);
        t18 = (t18 + t13);
        t19 = (t19 + t14);
        for (;;) {
            t12 = t15;
            t15 = (t15 + 0x2);
            t14 = (*(short *)((t18 + t12)));
            *(unsigned short *)((t19 + t12)) = t14;
            if ((unsigned int)t15 >= (unsigned int)0x8) {
                break;
            }
        }
        t17 = (t17 + 0x1);
        t16 = (t16 + 0x1);
    }
    *(unsigned int *)(((int)stk + 16)) = 0xFFFFFFFE;
    *(unsigned int *)(((int)stk + 24)) = ((int)((float)(int)u11 / 137.049988f) - 2);
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 4) + 0x64);
    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 4) + 0x44);
    for (;;) {
        *(unsigned int *)(((int)stk + 20)) = (0xC23F058 + ((*(int *)(((int)stk + 28))) * 0x1A));
        t24 = *(int *)(((int)stk + 32));
        *(float *)(((int)stk + 44)) = ((float)(*(int *)(((int)stk + 16))) * 137.049988f);
        t25 = *(int *)(((int)stk + 24));
        t26 = 0x0;
        t27 = t24;
        t28 = t24;
        for (;;) {
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlRotateAX((-((((struct o3CC_short *)(t1))->v))));
            nlRotateAY((-((((struct o3CE_short *)(t1))->v))));
            FUN_0c0dcc70(0.0f, (-((((struct o258_float *)(t1))->v))), 0.0f);
            *(float *)(((int)stk + 60)) = (*(float *)((t28 + 0x0)));
            *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 44)));
            *(float *)(((int)stk + 68)) = ((((struct o4_float *)(t28))->v));
            FUN_0c0db470((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C));
            (((struct o8_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 48)));
            (((struct o20_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 52)));
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 56)));
            nlPopMatrix(0x1);
            u45 = *(float *)(((int)stk + 4));
            *(float *)(((int)stk + 4)) = (u45 - 274.099976f);
            t66 = 0;
            if (!((u45 - 274.099976f) > 0.0f)) {
                u46 = *(float *)(((int)stk + 4));
                u47 = *(float *)(((int)stk + 12));
                if (!((_builtin_fabsf(u47) + u46) > 0.0f)) {
                    nlPushMatrix(0x0);
                    FUN_0c0dcc70((*(float *)((t27 + 0x0))), (((float)t25 * 137.049988f) - ((((struct o34_float *)((*(int *)(((int)stk + 8)))))->v))), ((((struct o4_float *)(t27))->v)));
                    nlRotateAY(t26);
                    FUN_0c0c465c((*(short *)(((*(int *)(((int)stk + 20))) + 0x0))));
                    nlPopMatrix(0x1);
                } else {
                    u61 = (_builtin_fabsf(u47) + u46);
                }
                t66 = (((_builtin_fabsf(u47) + u46) > 0.0f));
            } else {
                t66 = (1);
            }
            t28 = (t28 + 0x8);
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x2);
            t26 = (t26 + 0x4000);
            t27 = (t27 + 0x8);
            if ((unsigned int)t28 >= (unsigned int)(*(int *)(((int)stk + 40)))) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
        if ((int)(*(int *)(((int)stk + 16))) <= (int)0x2) continue;
        break;
    }
    nlPushMatrix(0x0);
    t74 = *(int *)(((int)stk + 8));
    FUN_0c0c465c(((((struct o5C_int *)(t74))->v)));
    nlPopMatrix(0x1);
    (((struct o34_float *)(t74))->v) = (((((struct o34_float *)(t74))->v)) + ((((struct o40_float *)(t74))->v)));
    return 0x34;
}






int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t10;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    int t24;
    int t25;
    int t26;
    float u27;
    float u29;
    float u30;
    float u32;
    int t33;
    int t35;
    int t36;
    float u37;
    float u40;
    float u41;
    float u43;
    int t11;
    float u12;
    float u13;
    int stk[13];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    t0 = *(short *)((a7 + 0x0));
    R1020 = (a7 + 0x2);
    t1 = *(short *)(((a7 + 0x2) + 0x0));
    t2 = *(short *)((a9 + 0x0));
    R1024 = (a9 + 0x2);
    t3 = *(short *)(((a9 + 0x2) + 0x0));
    R1004 = 0x0;
    R1012 = 0x1;
    R1008 = 0x0;
    R1016 = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t7 = 0x0;
    t8 = a6;
    t9 = a4;
    t10 = a8;
    u14 = (float)(t1 << 16);
    u15 = (float)((((short)(a11 >> 0)) << 2) << 2);
    u16 = 65536.0f;
    u17 = f5;
    u18 = f6;
    u19 = (float)(t0 << 16);
    u20 = (float)(t2 << 16);
    u21 = (float)(t3 << 16);
    for (;;) {
        if ((int)(R1004) < (int)(R1016)) {
            t24 = *(short *)((t9 + 0x0));
            if (((short)((unsigned char)((int)t24 >> 8) | ((t24 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t9 = (t9 + 0x2);
            u15 = (float)(((short)((unsigned char)((int)t24 >> 8) | ((t24 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            u18 = u15;
            t25 = 0x0;
            for (;;) {
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u14);
                t26 = *(signed char *)((t9 + 0x0));
                t9 = (t9 + 0x1);
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238BC0;
                u27 = u15;
                u27 = u27 + u12 * u19;
                u15 = u27;
                u16 = (*(float *)((((unsigned char)t26 << 2) + t7)));
                t11 = ((unsigned char)t26 << 2);
                u12 = u18;
                u17 = u19;
                u29 = u15;
                u29 = u29 + u12 * u16;
                u15 = u29;
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238FC0;
                u13 = u15;
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u17);
                u14 = u13;
                u30 = u15;
                u30 = u30 + u12 * u13;
                u15 = u30;
                u12 = u18;
                *(unsigned short *)((t8 + 0x0)) = ((unsigned int)(int)u13 >> 16);
                t8 = (t8 + 0x2);
                u16 = (*(float *)((t11 + t7)));
                u32 = u15;
                u32 = u32 + u12 * u16;
                u15 = u32;
                u16 = u15;
                u19 = u15;
                t25 = (t25 + 0x2);
                *(unsigned short *)((t8 + 0x0)) = (short)((unsigned int)(int)u16 >> 16);
                t8 = (t8 + 0x2);
                if ((int)t25 >= (int)0x20) {
                    break;
                }
            }
            t33 = *(short *)((t9 + 0x0));
            t11 = t33;
            t11 = ((int)t11 >> 8);
            t11 = (unsigned char)t11;
            t11 = (t11 | ((t33 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)t11) != 0) {
                t7 = (R1012);
                return t7;
            }
            t9 = (t9 + 0x2);
            u15 = (float)(((short)t11 & 0x1FFF) + 0x1);
            u18 = u15;
            t35 = 0x0;
            for (;;) {
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u21);
                t36 = *(signed char *)((t9 + 0x0));
                t9 = (t9 + 0x1);
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238BC0;
                u37 = u15;
                u37 = u37 + u12 * u20;
                u15 = u37;
                u16 = (*(float *)((((unsigned char)t36 << 2) + t7)));
                t11 = ((unsigned char)t36 << 2);
                u12 = u18;
                u17 = u20;
                u40 = u15;
                u40 = u40 + u12 * u16;
                u15 = u40;
                u12 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0xC238FC0;
                u13 = u15;
                u15 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u15 = (u15 * u17);
                u21 = u13;
                u41 = u15;
                u41 = u41 + u12 * u13;
                u15 = u41;
                u12 = u18;
                *(unsigned short *)((t10 + 0x0)) = ((unsigned int)(int)u13 >> 16);
                t10 = (t10 + 0x2);
                u16 = (*(float *)((t11 + t7)));
                u43 = u15;
                u43 = u43 + u12 * u16;
                u15 = u43;
                u16 = u15;
                u20 = u15;
                t35 = (t35 + 0x2);
                *(unsigned short *)((t10 + 0x0)) = (short)((unsigned int)(int)u16 >> 16);
                t10 = (t10 + 0x2);
                if ((int)t35 >= (int)0x20) {
                    break;
                }
            }
            R1004 = ((R1004) + 0x1);
            R1012 = ((R1012) + 0x2);
            R1008 = ((R1008) + 0x2);
            continue;
        }
        t7 = a5;
        *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u19 >> 16);
        *(unsigned short *)(((R1020) + 0x0)) = ((unsigned int)(int)u14 >> 16);
        *(unsigned short *)((a9 + 0x0)) = (short)((unsigned int)(int)u20 >> 16);
        *(unsigned short *)(((R1024) + 0x0)) = ((unsigned int)(int)u21 >> 16);
        return t7;
    }
    return (R1008);
}


int vmsio_block_write(int a4, int a5, int a6)
{
    int t2;
    int t14;
    int t29;
    int t31;
    int t34;
    int t36;
    int t37;
    int t40;
    int t42;
    int t47;
    int t52;
    int t60;
    int t67;
    int t70;
    int t72;
    int t73;
    int t76;
    int t78;
    int stk[20];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    *(unsigned int *)(((int)stk + 24)) = R4;
    *(unsigned int *)(((int)stk + 16)) = R6;
    *(unsigned int *)(((int)stk + 36)) = (((*(int *)(((int)stk + 24))) * 0x148) + 0xC956768);
    t2 = vmsio_ismount((*(int *)(((int)stk + 24))));
    R0 = (t2);
    R10 = (0xC223A0A);
    R11 = (0xC223CB6);
    R13 = (0xC232022);
    R8 = (R5);
    T_ = (((t2 == 0)));
    if ((t2 != 0)) goto L_C2323CC;
    vmsfb_sleep();
    L_C23252E:;
    R0 = (0xFFFFFF01);
    L_C232530:;
    return R0;
    L_C2323CC:;
    R14 = ((*(int *)(((int)stk + 24))));
    t14 = *(int *)(((R14 << 2) + 0xC2382DC));
    kdGetDevice(t14);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x1C))) + 0x48)));
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    R14 = (t14);
    R4 = (0x0);
    R9 = (0x0);
    L_C23246C:;
    if (((int)(*(int *)(((int)stk + 44))) < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x1C))) + 0x40))))) goto L_C2323F0;
    L_C23247A:;
    t29 = (((int (*)(int, int, int, int))(R11))(R14, R5, R6, R7)) != 0;
    if (t29) goto L_C2324C2;
    *(int *)((int)stk + 12) = (R8);
    t31 = kdSetGetLastError(*(Stk4 *)((int)stk + 12));
    R12 = (t31);
    if (((int)t31 >= 0)) goto L_C2324A0;
    t34 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C23247A;
    L_C2324A0:;
    t36 = (((int (*)(int, int, int, int))(R10))(R14, R12, R6, R7)) != 0;
    if (t36) goto L_C2324B2;
    t37 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C2324A0;
    L_C2324B2:;
    *(unsigned int *)(((int)stk + 20)) = (kdGetDevice(R14));
    t40 = (((int (*)(int))(R11))(R14)) == 0;
    if (t40) goto L_C2324E0;
    L_C2324C2:;
    R0 = (0xFFFFFF30);
    goto L_C232530;
    L_C2324E0:;
    t42 = *(int *)0xC239F58;
    *(unsigned int *)(((int)stk + 16)) = t42;
    if ((t42 == 0)) goto L_C232500;
    t47 = (((int (*)(int, int, int, int))((*(int *)(((int)stk + 16)))))((*(int *)(((int)stk + 24))), R8, (((int)stk + 16) + 0xC), (((int)stk + 16) + 0x10))) != 0;
    if (t47) goto L_C23250C;
    L_C232500:;
    *(unsigned char *)(((int)stk + 28)) = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x4)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0xC)));
    L_C23250C:;
    t52 = *(signed char *)(((int)stk + 28));
    R0 = ((unsigned char)t52);
    if (((unsigned char)t52 == 7)) goto L_C232524;
    if ((R0 == 0xFC)) goto L_C23247A;
    if ((R0 == 0xFB)) goto L_C232528;
    goto L_C23252E;
    L_C232528:;
    R0 = (0xFFFFFF40);
    goto L_C232530;
    L_C232524:;
    R0 = (0x0);
    goto L_C232530;
    L_C2323F0:;
    t60 = (((int (*)(int, int, int, int))(R11))(R14, R5, R6, R7)) != 0;
    if (t60) goto L_C2324C2;
    *(volatile int *)(((int)stk + 16));
    *(int *)((int)stk + 12) = ((FUN_0c0e5dc0()));
    *(int *)((int)stk + 8) = ((*(int *)(((int)stk + 20))));
    *(int *)((int)stk + 4) = (R8);
    t67 = kdSetBlockWrite(*(Stk4 *)((int)stk + 4));
    R12 = (t67);
    if (((int)t67 >= 0)) goto L_C232426;
    t70 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C2323F0;
    L_C232426:;
    t72 = (((int (*)(int, int, int, int))(R10))(R14, R12, R6, R7)) != 0;
    if (t72) goto L_C232438;
    t73 = ((int (*)(int, int, int, int))(R13))(R4, R5, R6, R7);
    goto L_C232426;
    L_C232438:;
    *(unsigned int *)(((int)stk + 40)) = (kdGetDevice(R14));
    t76 = (((int (*)(int))(R11))(R14)) != 0;
    if (t76) goto L_C2324C2;
    t78 = *(signed char *)(((*(int *)(((int)stk + 40))) + 0x4));
    R0 = ((unsigned char)t78);
    if (((unsigned char)t78 == 7)) goto L_C23245C;
    if ((R0 == 0xFC)) goto L_C2323F0;
    goto L_C23252E;
    L_C23245C:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + (*(int *)(((int)stk + 16))));
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
    R9 = ((R9 + 0x1));
    goto L_C23246C;
}
