/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c02286c(int, int, float, float);
extern int FUN_0c02a19a();
int FUN_0c03217c(int, int, int);
int FUN_0c03227c(int);
int FUN_0c032394(int);
int FUN_0c032590(int, float, float);
int FUN_0c032aa6(int);
int FUN_0c033530(int, int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c036d86(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037acc(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a79fa(int, int, int);
extern int FUN_0c0be6ee();
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c02704c(int a4, int a5, int a6, int a7);
int FUN_0c09d360(int a4, int a5, int a6, int a7);
int FUN_0c088fcc(int a4);
struct o10_float { char p[0x10]; float v; };
struct o120_int { char p[0x120]; int v; };
struct o124_int { char p[0x124]; int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o128_int { char p[0x128]; int v; };
struct o128_uint { char p[0x128]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o380_uint { char p[0x380]; unsigned int v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3D0_short { char p[0x3D0]; short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o0_float { float v; };





int FUN_0c09d360(int a4, int a5, int a6, int a7)
{
    int t18;
    int t25;
    int t31;
    int t34;
    float u37;
    float u40;
    float u43;
    int t44;
    int t54;
    int t55;
    float u56;
    float u78;
    int t88;
    float u52;
    int stk[18];
    int R1004;
    int R1008;
    int R1012;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 20);

    R1012 = (*(int *)((a4 + 0x30)));
    R1004 = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    R1020 = 0x1;
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((*(int *)0xC249720) == 0) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dbda0((((((struct o3E4_int *)((R1012)))->v)) + 0x200));
        FUN_0c0dcca0(0xC10C51C);
        FUN_0c0dccf0();
        nlRotateAY(((((struct o3CE_short *)((R1004)))->v)));
        nlRotateAX(((((struct o3D0_short *)((R1004)))->v)));
        nlScale(2.98999977f, 2.98999977f, 1.0f);
        if (0x0 != 0) {
            t18 = 0x0;
            for (;;) {
                FUN_0c0de000(2.98999977f);
                FUN_0c0c47ae(0x295);
                t18 = (t18 + 0x1);
                if ((int)t18 >= 0) {
                    break;
                }
            }
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        R1008 = 0x3;
        for (;;) {
            t25 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t25 + 0x1);
            if ((unsigned int)(*(int *)((a4 + 0x38))) >= (unsigned int)0x190) {
                *(unsigned int *)((a4 + 0x38)) = 0x0;
            }
            FUN_0c0dbda0((((((struct o3E4_int *)((R1012)))->v)) + 0x1C0));
            t31 = FUN_0c0da2e0();
            nlRotateAY((t31 << 1));
            nlGetMatrix((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))) = *(struct mv3 *)(0xC10C510); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0xC)) = *(struct mv3 *)(0xC10C4EC); }
            (((struct o58_float *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))))->v) = 5.079f;
            (((struct o5C_uint *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))))->v) = 0x8;
            t34 = FUN_0c0da2e0();
            u37 = (*(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x0)));
            u37 = u37 + ((float)(t34 & 0xFFF) * 0.00024420023f) * ((((struct o0_float *)0xC10C4EC)->v));
            *(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x0)) = u37;
            u40 = ((((struct o4_float *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))))->v));
            u40 = u40 + ((float)(t34 & 0xFFF) * 0.00024420023f) * ((((struct o4_float *)0xC10C4EC)->v));
            (((struct o4_float *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))))->v) = u40;
            u43 = ((((struct o8_float *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))))->v));
            u43 = u43 + ((float)(t34 & 0xFFF) * 0.00024420023f) * ((((struct o8_float *)0xC10C4EC)->v));
            (((struct o8_float *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))))->v) = u43;
            t44 = R1008;
            R1008 = (t44 - 1);
            if ((t44 - 1) != 0) continue;
            break;
        }
        nlPopMatrix(0x1);
        u52 = 0.00024420023f;
    }
    nlPushMatrix(0x0);
    t54 = 0x0;
    t55 = (a4 + 0x3C);
    u56 = u52;
    for (;;) {
        if ((int)((((struct o5C_int *)(t55))->v)) > 0) {
            (((struct o58_float *)(t55))->v) = (((((struct o58_float *)(t55))->v)) + -0.153999999f);
            R1020 = 0x0;
            u56 = (float)((((struct o5C_int *)(t55))->v));
            u56 = (u56 * 0.125f);
            (((struct oC_float *)(t55))->v) = (((((struct oC_float *)(t55))->v)) * ((((struct oC_float *)0xC10C4EC)->v)));
            (((struct o10_float *)(t55))->v) = (((((struct o10_float *)(t55))->v)) * ((((struct o10_float *)0xC10C4EC)->v)));
            (((struct o14_float *)(t55))->v) = (((((struct o14_float *)(t55))->v)) * ((((struct o14_float *)0xC10C4EC)->v)));
            nlAddVector((t55 + 0xC), 0xC10C504);
            nlAddVector(t55, (t55 + 0xC));
            FUN_0c0dbda0((t55 + 0x18));
            FUN_0c0dcca0(t55);
            FUN_0c0dccf0();
            nlRotateAY(((((struct o3CE_short *)((R1004)))->v)));
            nlRotateAX(((((struct o3CC_short *)((R1004)))->v)));
            nlRotateAZ((t54 * 0x3723));
            u78 = (((struct o58_float *)(t55))->v);
            *(float *)(((int)stk + 16)) = u78;
            nlScale(u78, u78, 1.0f);
            FUN_0c0de000(((((struct o58_float *)(t55))->v)));
            FUN_0c0848bc((u56 * 0.309999973f), (u56 * 0.319999993f), (u56 * 1.0f));
            FUN_0c0c47ae(0x295);
            (((struct o5C_uint *)(t55))->v) = (((((struct o5C_int *)(t55))->v)) - 1);
        }
        t54 = (t54 + 0x1);
        t55 = (t55 + 0x60);
        if ((unsigned int)t54 >= (unsigned int)0x190) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t88 = FUN_0c0849da();
    if ((R1020) != 0) {
        return FUN_0c0e19f2();
    }
    return t88;
}

int FUN_0c088fcc(int a4)
{
    int t1;
    int t2;
    int t8;
    int t9;
    int t10;
    float u11;
    int t12;
    int t13;
    int t14;
    int t16;
    float u17;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    float t28;
    int t29;
    int t30;
    int t31;
    float t32;
    int t33;
    int t35;
    int t37;
    float u39;
    int t40;
    float u42;
    int t44;
    int t46;
    float u54;
    float u55;
    float t57;
    float u58;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t97;
    int t4;
    int t119;
    float u71;
    float u73;
    float u64;
    int stk[40];

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t2 = (((struct o120_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 28)) = ((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268);
    *(unsigned int *)(((int)stk + 40)) = ((a4 + 0x58) + 0x28);
    *(unsigned int *)(((int)stk + 48)) = ((0x80 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 36)) = ((0xA8 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 32)) = (0xF8 + a4);
    *(unsigned int *)(((int)stk + 12)) = ((0xF8 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 44)) = 0xA;
    if ((((((struct o128_int *)(a4))->v)) == 0) && (t4 = (((struct o120_int *)(a4))->v), t119 = *(int *)((0xC247030 + (t4 << 2))), t119 == 8)) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0de3c0(0x4, 0x1);
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 12) + 0x34);
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x34) + 0x18);
        t8 = (a4 + 0x58);
        for (;;) {
            *(unsigned int *)(((int)stk + 52)) = (((int)stk + 12) + 0x34);
            t8 = (t8 - 4);
            *(unsigned int *)(((int)stk + 60)) = 0xC10A984;
            t9 = *(int *)(((int)stk + 32));
            t10 = *(int *)((t8 + 0x0));
            *(unsigned int *)(((int)stk + 32)) = (t9 - 4);
            u11 = *(float *)(((t9 - 4) + 0x0));
            *(float *)(((int)stk + 8)) = u11;
            t12 = *(int *)(((int)stk + 36));
            *(unsigned int *)(((int)stk + 36)) = (t12 - 4);
            *(int *)((int)stk + 4) = (t12 - 4);
            t13 = FUN_0c0da2e0();
            t14 = *(int *)(((t12 - 4) + 0x0));
            *(unsigned int *)(((t12 - 4) + 0x0)) = (t14 + ((t13 & 0x1FF) + 0x400));
            t16 = *(int *)(((int)stk + 12));
            u17 = 0.899999976f;
            u17 = u17 + 0.099999994f * (FUN_0c0da410((t14 + ((t13 & 0x1FF) + 0x400))));
            *(unsigned int *)(((int)stk + 12)) = (t16 - 4);
            *(unsigned int *)(((int)stk + 24)) = ((short)((unsigned int)(*(int *)(((t16 - 4) + 0x0))) >> 16) + 0x1B8);
            *(unsigned int *)(((int)stk + 56)) = 0x4;
            *(int *)((int)stk + 8) = (t16 - 4);
            t20 = (*(int *)(((t16 - 4) + 0x0)));
            *(int *)((int)stk + 4) = t20;
            *(unsigned int *)(((t16 - 4) + 0x0)) = ((((FUN_0c0da2e0()) + t20) + 0x4000) & 0x1FFFFF);
            for (;;) {
                t22 = *(int *)(((int)stk + 52));
                *(unsigned int *)(((int)stk + 52)) = (t22 + 0xC);
                t23 = *(int *)(((int)stk + 60));
                *(unsigned int *)(((int)stk + 60)) = (t23 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((t22 + 0xC) - 12)) = *(struct mv3 *)(((t23 + 0xC) - 12)); }
                t24 = *(int *)(((int)stk + 56));
                *(unsigned int *)(((int)stk + 56)) = (t24 - 1);
                if ((t24 - 1) == 0) {
                    break;
                }
            }
            t25 = *(int *)(((int)stk + 40));
            *(unsigned int *)(((int)stk + 40)) = (t25 - 4);
            *(int *)((int)stk + 8) = (t25 - 4);
            t26 = FUN_0c0da2e0();
            t27 = *(int *)(((t25 - 4) + 0x0));
            *(unsigned int *)(((t25 - 4) + 0x0)) = (t27 + ((t26 & 0xFFF) + 0x200));
            t28 = FUN_0c0da410((t27 + ((t26 & 0xFFF) + 0x200)));
            t29 = *(int *)(((int)stk + 48));
            *(unsigned int *)(((int)stk + 48)) = (t29 - 4);
            *(int *)((int)stk + 8) = (t29 - 4);
            t30 = FUN_0c0da2e0();
            t31 = *(int *)(((t29 - 4) + 0x0));
            *(unsigned int *)(((t29 - 4) + 0x0)) = (t31 + ((unsigned char)t30 + 0x100));
            t32 = FUN_0c0da410((t31 + ((unsigned char)t30 + 0x100)));
            t33 = *(int *)(((int)stk + 16));
            *(float *)((t33 + 0x0)) = ((*(float *)((t33 + 0x0))) + (t32 * 1.0f));
            t35 = *(int *)(((int)stk + 20));
            *(float *)((t35 + 0x0)) = ((*(float *)((t35 + 0x0))) + (t32 * 1.0f));
            t37 = *(int *)(((int)stk + 16));
            u39 = ((t28 * 0.099999994f) + 0.899999976f);
            (((struct o4_float *)(t37))->v) = (((((struct o4_float *)(t37))->v)) * u39);
            t40 = *(int *)(((int)stk + 20));
            u42 = (0.899999976f - (t28 * 0.099999994f));
            (((struct o4_float *)(t40))->v) = (((((struct o4_float *)(t40))->v)) * u42);
            t44 = ((int (*)(int, int, float))(FUN_0c0be6ee))((*(int *)(((int)stk + 24))), (((int)stk + 12) + 0x34), (t32 * 1.0f));
            FUN_0c0dbda0((0x2AC + t1));
            t46 = *(int *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 28)) = (t46 + 0xC);
            FUN_0c0dcca0(((t46 + 0xC) - 12));
            nlRotateAY(((((struct o3CE_short *)(t1))->v)));
            nlRotateAX(((((struct o3CC_short *)(t1))->v)));
            if ((int)t10 < (int)0x2AAA) {
                u54 = (u11 * u17);
                u55 = ((FUN_0c0da410((t10 << 1))) * 1.79999995f);
                *(unsigned int *)((t8 + 0x0)) = (t10 + 0x111);
                u71 = (u54 * u55);
                u73 = (u11 * u17);
            } else {
                if ((int)((((struct o124_int *)(a4))->v)) < (int)0xA) {
                    t57 = FUN_0c0da410(t10);
                    u58 = (u11 * u17);
                    *(unsigned int *)((t8 + 0x0)) = (t10 - 0x666);
                    u64 = (u58 * t57);
                } else {
                    *(unsigned int *)((t8 + 0x0)) = 0x3FFF;
                    u64 = (u11 * u17);
                }
                u71 = (u11 * u17);
                u73 = u64;
            }
            nlScale(u73, u71, u73);
            FUN_0c0de000((u73 + (1.0f + 1.0f)));
            FUN_0c0c475c((*(int *)(((int)stk + 24))), 0.98999995f);
            t79 = *(int *)(((int)stk + 44));
            *(unsigned int *)(((int)stk + 44)) = (t79 - 1);
            if ((t79 - 1) != 0) continue;
            break;
        }
        t80 = 0x1B8;
        t81 = 0x20;
        for (;;) {
            t82 = t80;
            t80 = (t80 + 0x1);
            t83 = ((int (*)(int, int))(FUN_0c0be6ee))(t82, 0xC10A984);
            t81 = (t81 - 0x1);
            if (t81 == 0) {
                break;
            }
        }
        FUN_0c0de3c0(0x4, 0x5);
        nlPopMatrix(0x1);
        if ((*(int *)(((((((struct o120_int *)(a4))->v)) << 2) + 0xC247030))) == 0) {
            FUN_0c0e19f2();
        }
        if (((((struct o128_int *)(a4))->v)) != 0) {
            t97 = (((struct o124_int *)(a4))->v);
            (((struct o124_uint *)(a4))->v) = (t97 - 1);
            t119 = 0x124;
            if ((int)(t97 - 1) <= 0) {
                (((struct o380_uint *)((*(int *)(((((((struct o120_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v) = 0x0;
                t119 = (FUN_0c0e19f2());
            }
        } else {
            t119 = 0x304;
            if ((int)((((struct o304_int *)((*(int *)(((((((struct o120_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v)) <= 0) {
                (((struct o128_uint *)(a4))->v) = 0x1;
                (((struct o124_uint *)(a4))->v) = 0x3C;
                t119 = 0x124;
            }
        }
    }
    return t119;
}


