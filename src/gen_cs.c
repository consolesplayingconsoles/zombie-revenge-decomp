/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c049c0a(int);
extern int FUN_0c0558f8();
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c4784(int, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e61d4(int, int);
int FUN_0c05664c(int a4, int a5, int a6, int a7);
int FUN_0c08b124(int a4);
int FUN_0c0b7734(void);

int FUN_0c05664c(int a4, int a5, int a6, int a7)
{
    int t20;
    int t23;
    int t24;
    int t63;
    int t59;
    int t68;
    int t78;
    int t86;
    int t111;
    int t120;
    int t129;
    int t132;
    int t130;
    int t1;
    int t146;
    int t138;
    int t121;
    int t112;
    int t104;
    int t97;
    float u77;
    int t91;

    if ((((*(int *)0xC23A1A8) & 0x8000) != 0) && (t1 = *(int *)((a4 + 0x22C)), (t1 & 4) == 0)) {
        t20 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
        t146 = (FUN_0c0e19f2());
    } else {
        t23 = *(int *)((0xC247604 + ((*(int *)((a4 + 0xBC))) << 2)));
        t24 = *(int *)0xC23ED50;
        if (t23 != 7) {
            if (t23 != 8) {
                if (t23 != 9) {
                    if (t23 != 1) {
                        if ((t23 != 2) && ((t23 != 11) && ((t23 != 3) && (t23 != 4)))) {
                            t63 = t23;
                            if (t23 != 10) {
                            } else {
                                t59 = 0x234;
                                if ((*(int *)((a4 + 0x234))) == t24) {
                                    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = (*(int *)((a4 + 0x238)));
                                    *(unsigned int *)((a4 + 0x238)) = 0x0;
                                    t59 = 0x238;
                                }
                                t63 = t59;
                            }
                            t97 = t63;
                        } else {
                            if (((*(int *)0xC23ED5C) & 0x40000) != 0) {
                                t68 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                                FUN_0c0e19f2();
                            }
                            if ((((*(int *)0xC23ED60) & 1) != 0) && (u77 = *(float *)((a4 + 0x34)), 5.0f > u77)) {
                                t78 = ((int (*)(int))(FUN_0c0558f8))(a4);
                                FUN_0c0e19f2();
                            }
                            t86 = *(int *)0xC23ED50;
                            if ((*(int *)((a4 + 0x234))) != t86) {
                                *(unsigned int *)((a4 + 0x238)) = (*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)));
                                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0xA;
                                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.5f);
                                t91 = 0x34;
                            } else {
                                *(unsigned int *)((a4 + 0x234)) = t86;
                                t91 = 0x234;
                            }
                            t97 = t91;
                        }
                        t104 = t97;
                    } else {
                        *(unsigned int *)((a4 + 0x234)) = t24;
                        *(unsigned int *)((a4 + 0x25C)) = 0x0;
                        t104 = 0x25C;
                    }
                    t112 = t104;
                } else {
                    t111 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                    *(unsigned int *)((a4 + 0x0)) = 0xC056B1A;
                    t112 = t111;
                }
                t121 = t112;
            } else {
                t120 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                *(unsigned int *)((a4 + 0x268)) = 0x0;
                *(unsigned int *)((a4 + 0x0)) = 0xC056AE8;
                t121 = 0x268;
            }
            t138 = t121;
        } else {
            t129 = *(int *)((a4 + 0x25C));
            *(unsigned int *)((a4 + 0x25C)) = (t129 - 1);
            t132 = 0x25C;
            if ((int)(t129 - 1) <= 0) {
                t130 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                t132 = (FUN_0c0e19f2());
            }
            t138 = t132;
        }
        t146 = t138;
    }
    return t146;
}

int FUN_0c08b124(int a4)
{
    int t1;
    float t3;
    float t5;
    float u6;
    int t8;
    int t16;
    int t19;
    int t20;
    int t22;
    int t32;
    int t43;
    int t45;
    int t35;
    int stk[38];

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t3 = FUN_0c0da410((*(int *)((a4 + 0x48))));
    t5 = FUN_0c0d9e90((*(int *)((a4 + 0x4C))));
    u6 = 0.5f;
    u6 = u6 + 0.5f * t3;
    *(float *)((a4 + 0x3C)) = (t3 * 10.0f);
    FUN_0c0dc5a0();
    t8 = *(int *)((a4 + 0x50));
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0dc890((*(short *)((t1 + 0x3CE))));
    FUN_0c0dc6e0((*(short *)((t1 + 0x3CC))));
    FUN_0c0dc950((*(int *)((a4 + 0x50))));
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
    for (;;) {
        t16 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t16 + 0xC);
        FUN_0c0db470((a4 + 0x3C), ((t16 + 0xC) - 12));
        FUN_0c0dc950(0x1FFF);
        t19 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t19 - 1);
        if ((t19 - 1) == 0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
    t20 = t8;
    for (;;) {
        FUN_0c0dbda0((0x2AC + t1));
        t22 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t22 + 0xC);
        FUN_0c0dcca0(((t22 + 0xC) - 12));
        FUN_0c0dc890((*(short *)((t1 + 0x3CE))));
        FUN_0c0dc6e0((*(short *)((t1 + 0x3CC))));
        FUN_0c0dc950(t20);
        FUN_0c0dcb80(u6, u6, u6);
        FUN_0c0de000(u6);
        FUN_0c0c4784(0x291, t5);
        t32 = *(int *)(((int)stk + 8));
        t20 = (t20 + 0x1FFF);
        *(unsigned int *)(((int)stk + 8)) = (t32 - 1);
        if ((t32 - 1) == 0) {
            break;
        }
    }
    FUN_0c0dc4c0(0x1);
    if (((*(int *)((a4 + 0x54))) == 0) && (t35 = *(int *)((a4 + 0x58)), (int)t35 <= (int)0x14)) {
        *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) + 0x222);
        *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x2D8);
    }
    *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x71C);
    t43 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (t43 - 1);
    t45 = 0x58;
    if ((int)(t43 - 1) < 0) {
        t45 = (FUN_0c0e19f2());
    }
    return t45;
}

int FUN_0c0b7734(void)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t6;
    int t18;

    t0 = 0x0;
    t1 = 0xC20461C;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC0B35E4, 0x474, (*(int *)0xC23ECEC));
        FUN_0c0e19d0(t3);
        *(float *)(((0x468 + t3) + 0x8)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x4)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x0)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x8)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x4)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x0)) = 1.0f;
        *(float *)((t3 + 0x284)) = 1.0f;
        *(float *)((t3 + 0x27C)) = 1.0f;
        *(float *)((t3 + 0x278)) = 1.0f;
        *(float *)((t3 + 0x274)) = 1.0f;
        *(unsigned int *)((t3 + 0x32C)) = 0x0;
        *(unsigned int *)((t3 + 0x388)) = 0x1;
        *(float *)((t3 + 0x390)) = 65.0099945f;
        t5 = *(int *)((t1 + 0x14));
        t6 = 0x0;
        if (t0 != 0) {
            t6 = 0x4;
        }
        *(unsigned int *)((t3 + 0xBC)) = t6;
        *(unsigned int *)(((0xC0 + t3) + 0x0)) = (*(signed char *)((t1 + 0x1)));
        FUN_0c0e61d4((0x468 + t3), (0x45C + t3));
        *(unsigned int *)(((((*(int *)((t3 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
        *(unsigned int *)(((((*(int *)((t3 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t3;
        FUN_0c0855ba(t3);
        FUN_0c0bb0f4(t3);
        FUN_0c0ba6e8(t3);
        FUN_0c0ba776(t3);
        FUN_0c085638(t3);
        FUN_0c0b359e(t3, t5);
        t18 = FUN_0c049c0a(t3);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x18);
        if ((int)t0 < (int)0x2) continue;
        break;
    }
    return t18;
}
