/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_GetStat(int);
int FUN_0c01c230(void);
int FUN_0c01d3c6(void);
int FUN_0c01fa90(void);
int FUN_0c0398b8(int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c03d588(int, int, int, int);
int FUN_0c046a20(int);
int FUN_0c046aee(int);
int FUN_0c048f1a(int);
int FUN_0c048fec(int);
int FUN_0c0498ce(void);
int FUN_0c054d8e(void);
int FUN_0c07e1e8(void);
int FUN_0c084104(void);
int FUN_0c084218(int);
int FUN_0c0852bc(int);
int FUN_0c088ec4(int, int);
int FUN_0c0a8adc(int);
int FUN_0c0bf940(void);
int FUN_0c0bfa90(void);
int FUN_0c0c0384(void);
int FUN_0c0c4290(int);
int FUN_0c0c45d0(void);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc752(int);
int FUN_0c0cc88c(int);
int FUN_0c0da2e0(void);
int FUN_0c0e14c4(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e2400(void);
int FUN_0c22a32e(int);
int FUN_0c22b6c8(int);
int FUN_0c22b6e0(int);
int FUN_0c22c3b8(int, int, int, int);
int FUN_0c232e00(int);
int adxsjd_decexec_start(int, int, int, int);
int FUN_0c03bffe(int a4);
int FUN_0c03c174(int a4);
int FUN_0c03c256(int a4);
int FUN_0c0b8950(void);
int FUN_0c0b7466(void);
int FUN_0c0ae2c8(void);
int FUN_0c0b37ee(void);
int FUN_0c03e0f2(int a4);
int FUN_0c22c4ca(void);
int FUN_0c01a822(int a4, int a5, int a6, int a7);
int adxsjd_decode_exec(int a4);
int FUN_0c0aa472(void);
int FUN_0c04904a(int a4);
int FUN_0c0b9c94(void);
struct o4C8_int { char p[0x4C8]; int v; };
struct o4FC_int { char p[0x4FC]; int v; };
struct o560_int { char p[0x560]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o304_int { char p[0x304]; int v; };
struct o48C_int { char p[0x48C]; int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o5C0_int { char p[0x5C0]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };




int FUN_0c03bffe(int a4)
{
    static const int snd[2][5] = {{0x32EA9, 0x32EA9, 0x2EA9, 0x2EA9, 0x42EA9}, {0x12EA9, 0x12EA9, 0x22EA9, 0x22EA9, 0x42EA9}};
    int t;

    FUN_0c03bd28(a4, 0x1, 0x0, 0x5, 0x0);
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        if ((((struct o5C0_int *)(a4))->v) != 0) {
            return 0x5C0;
        }
        (((struct o5C0_int *)(a4))->v) = 1;
        return FUN_0c0cc3f8((FUN_0c0da2e0() & 0x1) != 0 ? 0x42EA9 : 0x22EA9, 0x0, 0x0, 0x0);
    }
    t = (((struct o57C_int *)(a4))->v);
    if ((unsigned int)t > 4) {
        return t;
    }
    return FUN_0c0cc3f8(snd[(((struct o48C_int *)(a4))->v) & 0x1][t], 0x0, 0x0, 0x0);
}

int FUN_0c03c174(int a4)
{
    static const int snd[2][5] = {{0x32EA9, 0x32EA9, 0x2EA9, 0x2EA9, 0x42EA9}, {0x12EA9, 0x12EA9, 0x22EA9, 0x22EA9, 0x42EA9}};
    int t;

    FUN_0c03bd28(a4, 0x0, 0x0, 0x5, 0x0);
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        if ((((struct o5C0_int *)(a4))->v) != 0) {
            return 0x5C0;
        }
        (((struct o5C0_int *)(a4))->v) = 1;
        return FUN_0c0cc3f8((FUN_0c0da2e0() & 0x1) != 0 ? 0x42EA9 : 0x22EA9, 0x0, 0x0, 0x0);
    }
    t = (((struct o57C_int *)(a4))->v);
    if ((unsigned int)t > 4) {
        return t;
    }
    return FUN_0c0cc3f8(snd[(((struct o48C_int *)(a4))->v) & 0x1][t], 0x0, 0x0, 0x0);
}

int FUN_0c03c256(int a4)
{
    static const int snd[2][5] = {{0x32EA9, 0x32EA9, 0x2EA9, 0x2EA9, 0x42EA9}, {0x12EA9, 0x12EA9, 0x22EA9, 0x22EA9, 0x42EA9}};
    int t;

    FUN_0c03bd28(a4, 0x1, 0x3, 0x5, 0x0);
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        if ((((struct o5C0_int *)(a4))->v) != 0) {
            return 0x5C0;
        }
        (((struct o5C0_int *)(a4))->v) = 1;
        return FUN_0c0cc3f8((FUN_0c0da2e0() & 0x1) != 0 ? 0x42EA9 : 0x22EA9, 0x0, 0x0, 0x0);
    }
    t = (((struct o57C_int *)(a4))->v);
    if ((unsigned int)t > 4) {
        return t;
    }
    return FUN_0c0cc3f8(snd[(((struct o48C_int *)(a4))->v) & 0x1][t], 0x0, 0x0, 0x0);
}

int FUN_0c0b8950(void)
{
    int t22;
    int t23;
    int t24;

    (((struct oC_uint *)0xC23ED50)->v) = 0x0;
    (((struct o0_uint *)0xC23ED98)->v) = 0x1;
    FUN_0c0bfa90();
    FUN_0c0e2400();
    FUN_0c0c45d0();
    FUN_0c0bf940();
    FUN_0c01d3c6();
    FUN_0c0498ce();
    FUN_0c084104();
    FUN_0c0852bc(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c0c4290(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c0a8adc(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c0cc88c(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c0cc752(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c0cc3f8(0xA8, 0x0, 0x0, 0x0);
    (((struct o14_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct o4_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct o10_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct oC_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    t22 = FUN_0c0e14c4(0xC0B8AFE);
    (((struct o0_uint *)0xC23ECE0)->v) = t22;
    (((struct o28_uint *)0xC23ED98)->v) = 0x4;
    (((struct o2C_uint *)0xC23ED98)->v) = 0x0;
    t23 = 0xC24FB48;
    t24 = 0xC24FB4B;
    for (;;) {
        *(unsigned char *)((t23 + 0x0)) = 0xFFFFFFFF;
        t23 = (t23 + 0x1);
        *(unsigned char *)((t24 + 0x0)) = 0x0;
        t24 = (t24 + 0x1);
        if ((unsigned int)t23 >= (unsigned int)0xC24FB4B) {
            break;
        }
    }
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t22;
}

int FUN_0c0b7466(void)
{
    int t8;

    FUN_0c0bfa90();
    FUN_0c0e2400();
    FUN_0c0c45d0();
    FUN_0c07e1e8();
    FUN_0c084104();
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c01c230();
    t8 = FUN_0c01d3c6();
    *(unsigned int *)0xC247CF8 = 0x0;
    *(unsigned int *)0xC23ED5C = 0x0;
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t8;
}

int FUN_0c0ae2c8(void)
{
    int t0;
    int t5;

    t0 = FUN_0c0e1830(0xC0AE314, 0xB4);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC24FA6C = t0;
    *(unsigned int *)((t0 + 0xA0)) = 0xB4;
    *(float *)((t0 + 0x90)) = (*(float *)0xC0AE3D0);
    *(unsigned int *)((t0 + 0x84)) = ((((*(int *)0xC2475A4) == 0)) ? 1 : 0);
    FUN_0c0cc3f8(0xC3, 0x0, 0x0, 0x0);
    t5 = *(int *)0xC2475B0;
    *(unsigned int *)0xC2475B0 = (t5 | 0x10);
    return (t5 | 0x10);
}

int FUN_0c0b37ee(void)
{
    int t9;

    FUN_0c0bfa90();
    FUN_0c0e2400();
    FUN_0c0c45d0();
    FUN_0c0bf940();
    FUN_0c01d3c6();
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c01c230();
    FUN_0c07e1e8();
    t9 = FUN_0c01fa90();
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t9;
}

int FUN_0c03e0f2(int a4)
{
    int t2;
    int t9;
    int t11;

    FUN_0c088ec4(a4, 0xB4);
    FUN_0c03d588(a4, 0x0, 0x0, 0x0);
    t2 = (((struct o560_int *)(a4))->v);
    if (t2 != 0) {
        if (t2 != 10) {
            if (t2 != 6) {
                t9 = (((struct o4C8_int *)(a4))->v);
                if (t9 != 2) {
                    t11 = (((struct o4C8_int *)(a4))->v);
                    if (t11 != 10) {
                        return FUN_0c0398b8(a4);
                    }
                    return t11;
                }
                return t9;
            }
            return t2;
        }
        return t2;
    }
    return 0x560;
}

int FUN_0c22c4ca(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int stk[7];

    FUN_0c22b6c8(((int)stk + 4));
    t1 = 0xC95F6B0;
    t2 = 0xC95F6B0;
    t3 = 0xC95F6B0;
    t4 = 0xC95F6B0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t4 + 0x0))) == 1) {
            t1 = t3;
            FUN_0c22c3b8(t1, t2, 0x0, 0x0);
        } else {
            t8 = t1;
            t9 = t2;
        }
        t4 = (t4 + 0x9C);
        t1 = t8;
        t2 = t9;
        t3 = (t3 + 0x9C);
        if ((unsigned int)t4 >= (unsigned int)0xC95FB90) {
            break;
        }
    }
    return (FUN_0c22b6e0(((int)stk + 4)));
}

int FUN_0c01a822(int a4, int a5, int a6, int a7)
{
    int t1;
    int t6;
    int t7;
    int stk[3];

    *(unsigned int *)(((int)stk + 4)) = a4;
    if ((*(int *)0xC23ED9C) != 25) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    t6 = *(int *)(((int)stk + 4));
    t7 = (((struct o58_int *)(t6))->v);
    (((struct o58_uint *)(t6))->v) = (t7 - 1);
    if ((int)(t7 - 1) <= 0) {
        FUN_0c0cc3f8(0xC6, 0x0, 0x0, 0x0);
        return ((int (*)(void))(FUN_0c0e19f2))();
    }
    return 0x58;
}

int adxsjd_decode_exec(int a4)
{
    int t0;
    int t1;
    int t6;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXB_GetStat(t0);
    if (t1 == 0) {
        adxsjd_decexec_start(a4, 0x0, 0x0, 0x0);
    }
    FUN_0c232e00(t0);
    t6 = ADXB_GetStat(t0);
    if (t6 == 3) {
        return FUN_0c22a32e(a4);
    }
    return t6;
}

int FUN_0c0aa472(void)
{
    int t3;

    FUN_0c0cc6dc();
    *(unsigned int *)0xC24FA18 = (FUN_0c0e14c4(0xC0AA4F8));
    *(unsigned int *)0xC24FA2C = (FUN_0c0e14c4(0xC0AB24A));
    t3 = FUN_0c0cc3f8(0x15, 0x0, 0x0, 0x0);
    *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
    return t3;
}

int FUN_0c04904a(int a4)
{
    int t0;

    t0 = FUN_0c046aee(a4);
    if (t0 == 0) {
        if (((((struct o4FC_int *)(a4))->v)) != 0) {
            FUN_0c048f1a(a4);
        } else {
            FUN_0c048fec(a4);
        }
    }
    return FUN_0c046a20(a4);
}

int FUN_0c0b9c94(void)
{
    int t4;

    if ((*(int *)0xC23A190) == 0) {
        FUN_0c084104();
        FUN_0c0c0384();
        t4 = (FUN_0c084218(0x0));
    }
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t4;
}
