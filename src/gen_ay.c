/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c07e24e(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0e5dc0(void);
int FUN_0c22fa7e(int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int thunk_kmiWriteRegister(int, int);
int FUN_0c03bd28(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int kmiInitializeDevice(void);
int FUN_0c0aee08(int a4, float f4);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o338_float { char p[0x338]; float v; };
struct o33C_float { char p[0x33C]; float v; };
struct o340_float { char p[0x340]; float v; };
struct o344_float { char p[0x344]; float v; };
struct o348_float { char p[0x348]; float v; };
struct o34C_float { char p[0x34C]; float v; };
struct o350_float { char p[0x350]; float v; };
struct o354_float { char p[0x354]; float v; };
struct o358_float { char p[0x358]; float v; };
struct o35C_float { char p[0x35C]; float v; };
struct o360_float { char p[0x360]; float v; };
struct o364_float { char p[0x364]; float v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3FC_int { char p[0x3FC]; int v; };
struct o3FC_uint { char p[0x3FC]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o400_int { char p[0x400]; int v; };
struct o400_uint { char p[0x400]; unsigned int v; };
struct o424_int { char p[0x424]; int v; };
struct o424_uint { char p[0x424]; unsigned int v; };
struct o430_int { char p[0x430]; int v; };
struct o430_uint { char p[0x430]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct oC_float { char p[0xC]; float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };




int kmiInitializeDevice(void)
{
    int t1;
    int t4;
    int t17;
    int t57;
    int t58;
    int t77;
    int t80;
    int t81;
    int t14;
    int t9;
    int t36;
    int t32;
    int t28;
    int t25;
    int stk[8];

    *(unsigned int *)0xC952610 = 0x0;
    *(unsigned int *)(((int)stk + 8)) = (kmiReadRegister(0x0));
    t1 = kmiReadRegister(0x4);
    (((struct o0_uint *)0xC9522FC)->v) = 0x5;
    if ((*(int *)(((int)stk + 8))) != 0x17FD11DB) {
        (((struct o0_uint *)0xC9522FC)->v) = 0x5;
        t14 = 0xDD18957;
    } else {
        if (t1 == 1) {
            (((struct o0_uint *)0xC9522FC)->v) = 0x5;
            t9 = 0xDD18957;
        } else {
            t4 = 0xDD18957;
            if ((unsigned int)t1 >= (unsigned int)0x11) {
                (((struct o0_uint *)0xC9522FC)->v) = 0x6;
                *(unsigned int *)0xC952610 = 0x800408;
                t4 = 0x15D1C951;
            }
            t9 = t4;
        }
        t14 = t9;
    }
    t17 = *(int *)0xA05F689C;
    if (t17 != 0) {
        if (t17 != 1) {
            if (t17 != 2) {
                if ((t17 != 4) && ((t17 != 5) && (t17 != 6))) {
                    if (t17 != 8) {
                        if (t17 != 9) {
                            (((struct o4_uint *)0xC9522FC)->v) = 0x8F;
                        } else {
                            (((struct o4_uint *)0xC9522FC)->v) = 0xF;
                        }
                    } else {
                        (((struct o4_uint *)0xC9522FC)->v) = 0x1F;
                    }
                    t25 = 0x101;
                } else {
                    (((struct o4_uint *)0xC9522FC)->v) = 0x7F;
                    t25 = 0x10101;
                }
                t28 = t25;
            } else {
                (((struct o4_uint *)0xC9522FC)->v) = 0x3;
                t28 = 0x101;
            }
            t32 = t28;
        } else {
            (((struct o4_uint *)0xC9522FC)->v) = 0x1;
            t32 = 0x0;
        }
        t36 = t32;
    } else {
        (((struct o4_uint *)0xC9522FC)->v) = 0x0;
        t36 = 0x0;
    }
    kmiWriteRegister(0xA8, t14);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    if ((((((struct o1C_int *)0xC9522FC)->v)) & 1) != 0) {
        thunk_kmiWriteRegister(0x44, 0x800000);
    } else {
        thunk_kmiWriteRegister(0x44, 0x0);
    }
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t57 = 0x110;
    t58 = 0x92039;
    if (((((struct o0_int *)0xC9522FC)->v)) == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t57 = 0x98;
        t58 = (*(int *)0xC952610);
    }
    kmiWriteRegister(t57, t58);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t36);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    if (((((struct o0_int *)0xC9522FC)->v)) != 6) {
        for (;;) {
        }
    }
    t77 = 0x7DF77;
    if (((((struct o0_int *)0xC9522FC)->v)) == 6) {
        t77 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t77);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t80 = 0x0;
    t81 = 0xA5000000;
    for (;;) {
        FUN_0c22fa7e(t81, ((int)stk + 4), 0x4);
        t80 = (t80 + 0x1);
        t81 = (t81 + 0x4);
        if ((int)t80 >= (int)0x200000) {
            break;
        }
    }
    return 0x1;
}

int FUN_0c0aee08(int a4, float f4)
{
    int t0;
    int t29;
    int t33;
    int t41;
    int stk[6];

    t0 = (((struct o400_int *)(a4))->v);
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 == 3) {
                (((struct o430_uint *)(a4))->v) = (((((struct o430_int *)(a4))->v)) + (*(int *)(((0x434 + a4) + 0x0))));
                (((struct o254_float *)(a4))->v) = (((((struct o350_float *)(a4))->v)) - ((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o338_float *)(a4))->v))));
                (((struct o258_float *)(a4))->v) = (((((struct o354_float *)(a4))->v)) - ((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o33C_float *)(a4))->v))));
                (((struct o25C_float *)(a4))->v) = (((((struct o358_float *)(a4))->v)) - ((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o340_float *)(a4))->v))));
                (((struct o278_float *)(a4))->v) = (((((struct o35C_float *)(a4))->v)) - ((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o344_float *)(a4))->v))));
                (((struct o27C_float *)(a4))->v) = (((((struct o360_float *)(a4))->v)) - ((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o348_float *)(a4))->v))));
                (((struct o280_float *)(a4))->v) = (((((struct o364_float *)(a4))->v)) - ((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o34C_float *)(a4))->v))));
                t29 = (((struct o3FC_int *)(a4))->v);
                (((struct o3FC_uint *)(a4))->v) = (t29 - 1);
                if ((int)(t29 - 1) <= 0) {
                    (((struct o400_uint *)(a4))->v) = 0x4;
                }
                t33 = *(int *)0xC24FA6C;
                if (((((struct o424_int *)(a4))->v)) != ((((struct o78_int *)(t33))->v))) {
                    (((struct o424_uint *)(a4))->v) = ((((struct o78_int *)(t33))->v));
                    (((struct o400_uint *)(a4))->v) = 0x2;
                }
            } else {
                if (t0 == 4) {
                    t41 = *(int *)0xC24FA6C;
                    if (((((struct o424_int *)(a4))->v)) != ((((struct o78_int *)(t41))->v))) {
                        (((struct o424_uint *)(a4))->v) = ((((struct o78_int *)(t41))->v));
                        (((struct o400_uint *)(a4))->v) = 0x2;
                    }
                }
            }
        } else {
            *(volatile int *)((a4 + 0x424));
            (((struct o3FC_uint *)(a4))->v) = 0x1E;
            (((struct o430_uint *)(a4))->v) = 0x4000;
            *(volatile int *)((a4 + 0x3FC));
            *(unsigned int *)(((0x434 + a4) + 0x0)) = (FUN_0c0e5dc0());
            (((struct o338_float *)(a4))->v) = (((*(float *)((a4 + 0x0))) - ((((struct o254_float *)(a4))->v))) * 0.5f);
            (((struct o33C_float *)(a4))->v) = ((((((struct o4_float *)(a4))->v)) - ((((struct o258_float *)(a4))->v))) * 0.5f);
            (((struct o340_float *)(a4))->v) = ((((((struct o8_float *)(a4))->v)) - ((((struct o25C_float *)(a4))->v))) * 0.5f);
            (((struct o344_float *)(a4))->v) = ((((((struct oC_float *)(a4))->v)) - ((((struct o278_float *)(a4))->v))) * 0.5f);
            (((struct o348_float *)(a4))->v) = ((((((struct o10_float *)(a4))->v)) - ((((struct o27C_float *)(a4))->v))) * 0.5f);
            (((struct o34C_float *)(a4))->v) = ((((((struct o14_float *)(a4))->v)) - ((((struct o280_float *)(a4))->v))) * 0.5f);
            (((struct o350_float *)(a4))->v) = (((((struct o254_float *)(a4))->v)) + ((((struct o338_float *)(a4))->v)));
            (((struct o354_float *)(a4))->v) = (((((struct o258_float *)(a4))->v)) + ((((struct o33C_float *)(a4))->v)));
            (((struct o358_float *)(a4))->v) = (((((struct o25C_float *)(a4))->v)) + ((((struct o340_float *)(a4))->v)));
            (((struct o35C_float *)(a4))->v) = (((((struct o278_float *)(a4))->v)) + ((((struct o344_float *)(a4))->v)));
            (((struct o360_float *)(a4))->v) = (((((struct o27C_float *)(a4))->v)) + ((((struct o348_float *)(a4))->v)));
            (((struct o364_float *)(a4))->v) = (((((struct o280_float *)(a4))->v)) + ((((struct o34C_float *)(a4))->v)));
            (((struct o400_uint *)(a4))->v) = 0x3;
        }
    } else {
        if (((((struct o80_int *)((*(int *)0xC24FA6C)))->v)) == 0) {
        } else {
            (((struct o400_uint *)(a4))->v) = 0x2;
            (((struct o424_uint *)(a4))->v) = 0x0;
        }
    }
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o254_float *)(a4))->v)) - ((((struct o278_float *)(a4))->v))), (((((struct o258_float *)(a4))->v)) - ((((struct o27C_float *)(a4))->v))), (((((struct o25C_float *)(a4))->v)) - ((((struct o280_float *)(a4))->v))));
    (((struct o3CC_ushort *)(a4))->v) = (*(int *)(((int)stk + 4)));
    (((struct o3CE_ushort *)(a4))->v) = (*(int *)(((int)stk + 8)));
    return (FUN_0c07e24e());
}
