/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01843e(int, int, int, int);
int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c039354(int);
int FUN_0c0c710e(int, int, int, float, float);
int FUN_0c0c73e6(int, float, float);
int FUN_0c0cc3f8(int);
int FUN_0c0e19f2(void);
int _modls(int);
int _quick_odd_mvn(int, int, float);
int FUN_0c01906a(int a4, int a5, int a6, int a7);
int FUN_0c039804(int a4);
int FUN_0c0ba09c(int a4, int a5, int a6);
int FUN_0c0a8f48(int a4, int a5);
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o230_int { char p[0x230]; int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o238_int { char p[0x238]; int v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o5CC_int { char p[0x5CC]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };


int FUN_0c01906a(int a4, int a5, int a6, int a7)
{
    int t0;
    float u5;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    float u14;
    int t16;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;

    t0 = *(int *)0xC23EE54;
    FUN_0c01843e(a4, a5, a6, a7);
    if (((((struct o21C_int *)(a4))->v)) == 0) {
        if (((*(int *)0xC23ED5C) & 0x80000) != 0) {
            (((struct o21C_uint *)(a4))->v) = 0x1;
            u5 = (((struct o38_float *)(t0))->v);
            if (((((struct o238_int *)(a4))->v)) != (int)((float)(int)u5 / 200.0f)) {
                (((struct o238_uint *)(a4))->v) = (int)((float)(int)u5 / 200.0f);
                t7 = (((struct oAC_int *)(t0))->v);
                t9 = 0x10;
                t10 = (((((0xF & (t7 + (int)((float)(int)u5 / 200.0f))) << 2) << 2) << 1) + 0xC23EE58);
                t11 = (((((0xF & (t7 + (int)((float)(int)u5 / 200.0f))) << 2) << 2) << 1) + ((((struct o22C_int *)(a4))->v)));
                for (;;) {
                    t12 = *(short *)((t11 + 0x0));
                    t11 = (t11 + 0x2);
                    t9 = (t9 - 1);
                    *(unsigned short *)((t10 + 0x0)) = t12;
                    t10 = (t10 + 0x2);
                    if (t9 == 0) {
                        break;
                    }
                }
                t13 = (((struct o230_int *)(a4))->v);
                (((struct o230_uint *)(a4))->v) = (t13 - 1);
                if ((int)(t13 - 1) <= 0) {
                    return FUN_0c0e19f2();
                }
                return 0x230;
            }
            return 0x238;
        }
        return 0x21C;
    }
    u14 = (((struct o38_float *)(t0))->v);
    if (((((struct o238_int *)(a4))->v)) != (int)((float)(int)u14 / 200.0f)) {
        (((struct o238_uint *)(a4))->v) = (int)((float)(int)u14 / 200.0f);
        t16 = (((struct oAC_int *)(t0))->v);
        t18 = 0x10;
        t19 = (((((0xF & (t16 + (int)((float)(int)u14 / 200.0f))) << 2) << 2) << 1) + 0xC23EE58);
        t20 = (((((0xF & (t16 + (int)((float)(int)u14 / 200.0f))) << 2) << 2) << 1) + ((((struct o22C_int *)(a4))->v)));
        for (;;) {
            t21 = *(short *)((t20 + 0x0));
            t20 = (t20 + 0x2);
            t18 = (t18 - 1);
            *(unsigned short *)((t19 + 0x0)) = t21;
            t19 = (t19 + 0x2);
            if (t18 == 0) {
                break;
            }
        }
        t22 = (((struct o230_int *)(a4))->v);
        (((struct o230_uint *)(a4))->v) = (t22 - 1);
        if ((int)(t22 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0x230;
    }
    return 0x238;
}

int FUN_0c039804(int a4)
{
    int t1;
    int t2;
    int t5;
    int t10;
    int t12;
    int t8;

    t1 = (((struct oC4_int *)(a4))->v);
    t2 = *(int *)(((((((struct oC0_int *)(a4))->v)) << 2) + 0xC195AFC));
    if (((((struct o5CC_int *)(a4))->v)) != 0) {
        t5 = (((struct oC8_int *)(a4))->v);
        if ((t5 & 64) == 0) {
            (((struct o580_uint *)(a4))->v) = 0x0;
            t10 = 0x580;
            t12 = 0x0;
            if ((*(int *)((((((((struct o580_int *)(a4))->v)) << 2) + (0x5D0 + a4)) + 0x0))) == 0) {
                t8 = FUN_0c039354(a4);
                t10 = (FUN_0c039354(a4));
                t12 = t8;
            }
            if (t12 != 0) {
                FUN_0c038732(a4, 0x1, 0x1, 0x1, 0xA, (((t1 * 0x28A) + t2) + 0x1EA), 0x0);
                FUN_0c039288(a4, 0x1, 0x0);
                return FUN_0c0cc3f8(0x12CA9);
            }
            return t10;
        }
        return t5;
    }
    return 0x5CC;
}


