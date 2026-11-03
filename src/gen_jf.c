/* Straight-line functions with calls and guards (batch gen_jf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01843e(void);
int FUN_0c01937a(void);
int FUN_0c01993e(int, int, int, int);
int FUN_0c019a36(void);
int FUN_0c01a874(void);
int FUN_0c01a89c(int);
int FUN_0c01cdc2(int);
int FUN_0c021124(void);
int FUN_0c021c8e(void);
int FUN_0c022838(int);
int FUN_0c02286c(int, int, int, int, float, float);
int FUN_0c0277c4(int, float);
extern int FUN_0c02a19a();
int FUN_0c03145c(int);
int FUN_0c033c8c(int, int, int, Stk3, float);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0352b4(int, int, int);
int FUN_0c038ce0(int, int);
int FUN_0c038ed4(int, float);
int FUN_0c038f9c(int);
int FUN_0c03a112(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c042b60(int, int, int, int, float, float);
int FUN_0c046170(int, float);
int FUN_0c046294(int, int, int, Stk3);
int FUN_0c046968(int);
int FUN_0c0493d8(int);
int FUN_0c0494e0(int);
int FUN_0c04996a(void);
int FUN_0c049b80(int);
int FUN_0c04f898(void);
int FUN_0c04fd64(void);
int FUN_0c051a48(int);
int FUN_0c054c8a(int);
int FUN_0c054fb0(int);
int FUN_0c0562ee(int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c06993c(void);
int FUN_0c07e1e8(void);
int FUN_0c081e0c(int);
int FUN_0c082f04(int, int, float);
int FUN_0c084104(void);
int FUN_0c084b1a(int, int);
int FUN_0c084e08(int, int);
int FUN_0c085050(int, int, int);
int FUN_0c0852bc(int);
int FUN_0c085704(int);
int FUN_0c088ec4(int, int);
int FUN_0c0909fc(int);
int FUN_0c090bf0(int);
int FUN_0c096d6c(void);
int FUN_0c0a8d80(int, int, int);
int FUN_0c0ad26e(void);
int FUN_0c0b39ba(void);
int FUN_0c0bb292(int, int, int, int, int, int, int, int, int);
int FUN_0c0bbbf4(int);
int FUN_0c0bdb70(int, int, int);
int FUN_0c0bdec2(int);
int FUN_0c0bf940(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c2126(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0c22be(int);
int FUN_0c0c4290(int);
int FUN_0c0c4364(int, int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c4464(int, int, int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c4684(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c99a0(int, int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc752(int);
int FUN_0c0cc7d8(int);
int FUN_0c0cc88c(int);
int FUN_0c0d41a8(void);
int FUN_0c0d8c40(int, int, int, float);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e14c4(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e262a(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e5fe4(void);
int FUN_0c0e6248(int);
int FUN_0c22cd00(void);
int FUN_0c22cd18(int, int);
int FUN_0c22cfdc(void);
int FUN_0c22cff4(int, int);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c06bbc0(int a4, int a5, int a6, int a7);
int FUN_0c09b730(int a4);
int FUN_0c0b4114(int a4, float f4);
int FUN_0c01bcfc(void);
int FUN_0c0638d0(int a4, int a5, int a6, int a7);
int FUN_0c0798b4(void);
int FUN_0c093314(int a4, int a5);
int FUN_0c22d386(int a4, int a5, int a6, int a7);
int FUN_0c076a00(void);
int FUN_0c0a306c(int a4, int a5, float f4);
int FUN_0c0c10bc(int a4, int a5);
int FUN_0c031630(int a4);
int FUN_0c083910(int a4);
int FUN_0c0b594c(void);
int FUN_0c0c2484(int a4, int a5, int a6, int a7);
int FUN_0c01b788(int a4);
int FUN_0c04b280(int a4);
int FUN_0c063f78(int a4, int a5, int a6);
int FUN_0c22cef6(int a4, int a5, int a6);
int FUN_0c042a5a(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c07abf4(int a4);
int FUN_0c0ad08e(int a4, int a5, int a6);
int FUN_0c048070(int a4);
int FUN_0c04f558(int a4);
int FUN_0c04f74c(int a4);
int FUN_0c071378(int a4, int a5, int a6, int a7);
int FUN_0c075c80(int a4, int a5, int a6, int a7);
int FUN_0c03a77a(int a4, int a5);
int FUN_0c05c148(int a4, int a5, int a6);
int FUN_0c0a2a6c(int a4);
int FUN_0c0bf038(int a4);
int FUN_0c060f76(int a4, int a5, int a6);
int FUN_0c07e0f0(int a4, int a5, int a6, int a7);
int FUN_0c0befc0(int a4);
int FUN_0c01bb20(void);
float FUN_0c02c480(int a4, int a5);
int FUN_0c049624(int a4);
int FUN_0c0822a0(int a4, int a5);
int FUN_0c087ef2(int a4, int a5, int a6, int a7);
int FUN_0c0931ec(int a4, int a5, int a6, int a7);
int FUN_0c0bf104(int a4);
int FUN_0c018918(int a4);
int FUN_0c01aa6c(void);
int FUN_0c01c0ce(int a4, int a5, int a6, int a7);
int FUN_0c02d3f8(int a4, int a5, int a6, int a7);
int FUN_0c048baa(int a4);
int FUN_0c041e1e(int a4);
int FUN_0c05e952(int a4, int a5, int a6, int a7);
int FUN_0c07ac72(void);
int FUN_0c0184e0(int a4);
int FUN_0c028e8c(int a4);
int FUN_0c02db08(int a4);
int FUN_0c0421ee(int a4);

int FUN_0c06bbc0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = *(int *)((a4 + 0x54));
    FUN_0c0685a4(a4, a5, a6, a7);
    *(volatile int *)0xC23A258;
    *(unsigned int *)(((0x4C + a4) + 0x0)) = (FUN_0c0e5fe4());
    *(volatile int *)((a4 + 0x48));
    *(volatile int *)((a4 + 0x4C));
    t6 = FUN_0c0e5f1c();
    t7 = 0x0;
    if (((int)t6 >= 0) && ((int)t6 <= (int)0x5)) {
        t7 = t6;
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)0xC247BF4));
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x3E))));
    FUN_0c0c465c((unsigned short)(*(short *)(((t7 << 1) + t0))));
    return nlPopMatrix(0x1);
}

int FUN_0c09b730(int a4)
{
    register int t1;
    register int t6;
    register int t8;
    register int t9;
    register int t11;

    t1 = FUN_0c0e19aa(0xC09B4F4, 0x118, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x34)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x44)) = ((int)0x2 << (int)(*(int *)((a4 + 0x2E8))));
    FUN_0c096d6c();
    t6 = 0x0;
    for (;;) {
        *(unsigned int *)((((t1 + 0x48) + t6) + 0x0)) = ((FUN_0c0da2e0()) & 0xF);
        t8 = FUN_0c0da2e0();
        t9 = 0xFFFFFFFF;
        if ((t8 & 0x1) != 0) {
            t9 = 0x1;
        }
        t11 = ((0xB0 + t1) + t6);
        t6 = (t6 + 0x4);
        *(float *)((t11 + 0x0)) = (float)t9;
        if ((unsigned int)t6 >= (unsigned int)0x68) {
            break;
        }
    }
    return t8;
}

int FUN_0c0b4114(int a4, float f4)
{
    int stk[3];
    register int t0;
    register int t12;
    register int t13;
    register int t15;
    register int t10;
    register int t11;
    register int t16;
    register int t17;

    t0 = *(int *)((a4 + 0x50));
    *(unsigned int *)((a4 + 0x50)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x4);
        *(unsigned int *)((a4 + 0x50)) = 0x50;
        *(unsigned int *)((a4 + 0x54)) = 0x0;
        *(unsigned int *)((a4 + 0x58)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        FUN_0c0d8c40(0xF0F0F0, 0xF0F0F0, 0xF0F0F0, f4);
        return FUN_0c0b39ba();
    }
    if ((*(int *)((a4 + 0x50))) == 0x96) {
        t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0cc3f8))(0x928A9, 0x0, t10, t11, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        return FUN_0c085050(0x78, 0x1, 0x0);
    }
    t13 = *(int *)((a4 + 0x50));
    if (t13 == 50) {
        *(unsigned int *)0xC23EDB0 = 0x0;
        return t13;
    }
    t15 = *(int *)0xC23A258;
    if ((t15 & 127) == 0) {
        return ((int (*)(int, int, int, int))(FUN_0c0cc3f8))(0x129A9, 0x0, t16, t17);
    }
    return t15;
}

int FUN_0c01bcfc(void)
{
    register int t31;

    if ((*(int *)0xC23ED50) == 11) {
        FUN_0c0cc6dc();
    }
    FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
    FUN_0c0c4364((*(int *)0xC23ED50), 0x0);
    FUN_0c0cc88c((*(int *)0xC23ED50));
    if ((*(int *)0xC23EDE0) == 5) {
        FUN_0c0c4464((*(int *)0xC23ED50), (*(int *)0xC23EDC0), (*(int *)0xC23EDD0));
    }
    if ((*(int *)0xC23EDE4) == 5) {
        FUN_0c0c4464((*(int *)0xC23ED50), (*(int *)0xC23EDC4), (*(int *)0xC23EDD4));
    }
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    FUN_0c0852bc((*(int *)0xC23ED50));
    FUN_0c0cc752((*(int *)0xC23ED50));
    t31 = FUN_0c04f898();
    *(unsigned int *)0xC23ED9C = 0x14;
    return t31;
}

int FUN_0c0638d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0));
    t1 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        t1 = a4;
    }
    t2 = t1;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0909fc(a4);
        } else {
            t3 = t1;
        }
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & (~(*(int *)(((0x1C4 + a4) + 0x0)))));
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        t2 = t3;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((t0 + 0x30)); }
    FUN_0c0e6248(t2);
    return FUN_0c01cdc2(a4);
}

int FUN_0c0798b4(void)
{
    register int t1;
    register float u3;
    register float u4;
    register int t5;
    register int t6;
    register int t7;
    register float u9;

    t1 = FUN_0c0e19aa(0xC07993A, 0xFA8, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    u3 = *(float *)0xC0799CC;
    u4 = *(float *)0xC0799D0;
    t5 = 0x34;
    t6 = (0xAC8 + t1);
    t7 = (0xD38 + t1);
    for (;;) {
        u9 = u4;
        u9 = u9 + u3 * (float)(FUN_0c0da2e0());
        *(float *)((t6 + 0x4)) = u9;
        *(float *)((t7 + 0x0)) = (float)(((FUN_0c0da2e0()) & 0x1FFF) - 4096);
        t5 = (t5 - 0x1);
        t6 = (t6 + 0xC);
        *(float *)((t7 + 0x8)) = (float)(((FUN_0c0da2e0()) & 0x1FFF) - 4096);
        t7 = (t7 + 0xC);
        if (t5 == 0) {
            break;
        }
    }
    return 0x8;
}

int FUN_0c093314(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = *(short *)((a5 + 0x6));
    t2 = FUN_0c0e19aa(0xC09339A, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x80)) = (unsigned char)(*(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B944) + 0x0)));
    *(unsigned int *)(((0xA0 + t2) + 0x0)) = (unsigned char)(*(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B944) + 0x1)));
    *(unsigned int *)(((0xA4 + t2) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x4)));
    *(unsigned int *)((t2 + 0x8C)) = (*(int *)((((((unsigned short)t0 << 2) << 1) + 0xC10B944) + 0x4)));
    *(unsigned int *)(((0x7C + t2) + 0x0)) = (unsigned short)(*(short *)((((((unsigned short)t0 << 2) << 1) + 0xC10B944) + 0x2)));
    *(unsigned int *)((t2 + 0x88)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t2 + 0xAC)) = (*(int *)(((((*(int *)(((0x80 + t2) + 0x0))) << 2) + (0x404 + a4)) + 0x0)));
    return 0xAC;
}

int FUN_0c22d386(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c22cfdc();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x20));
        t2 = *(int *)((a4 + 0x14));
        t3 = *(int *)((a4 + 0x24));
        t4 = *(int *)((a4 + 0x10));
        t5 = ((t1 - t2) + t3);
        if ((int)t4 < (int)((t1 - t2) + t3)) {
            t5 = t4;
        }
        t1 = a6;
        if ((int)t5 < (int)a6) {
            t1 = t5;
        }
        t2 = t1;
    } else {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0x20));
            t3 = *(int *)((a4 + 0x18));
            t4 = *(int *)((a4 + 0x24));
            t5 = *(int *)((a4 + 0xC));
            t6 = ((t1 - t3) + t4);
            if ((int)t5 < (int)((t1 - t3) + t4)) {
                t6 = t5;
            }
            t1 = a6;
            if ((int)t6 < (int)a6) {
                t1 = t6;
            }
            t3 = t1;
        } else {
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
            t3 = 0x0;
        }
        t2 = t3;
    }
    *(unsigned int *)((a7 + 0x0)) = t2;
    FUN_0c22cff4(a4, t0);
    return (((t2 == a6)) ? 1 : 0);
}

int FUN_0c076a00(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0762DA, 0x2740, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    FUN_0c0c99a0(0x3F2, 0x293);
    FUN_0c0cbafc(0x293, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x291, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x2A7, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x2A8, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x2A9, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E9, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3EA, 0x2, 0xFC000000, 0x84000000);
    return (FUN_0c0cbafc(0x3EB, 0x2, 0xFC000000, 0x84000000));
}

int FUN_0c0a306c(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)0xC23A180;
    t1 = t0;
    if (t0 == 2) {
        t0 = FUN_0c0e19aa(0xC0A30F0, 0x78, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t0);
        if ((*(int *)((a4 + 0xBC))) != 0) {
            u0 = (*(float *)0xC0A3178);
        } else {
            u0 = (*(float *)0xC0A317C);
        }
        *(float *)((t0 + 0x34)) = u0;
        *(float *)((t0 + 0x38)) = (*(float *)0xC0A3180);
        *(float *)((t0 + 0x3C)) = (*(float *)0xC0A3184);
        *(float *)((t0 + 0x50)) = 1.0f;
        *(float *)((t0 + 0x54)) = 1.0f;
        *(float *)((t0 + 0x40)) = 1.0f;
        *(float *)((t0 + 0x44)) = 1.0f;
        *(float *)((t0 + 0x5C)) = 1.0f;
        *(unsigned int *)((t0 + 0x64)) = 0xA;
        *(unsigned int *)((t0 + 0x60)) = 0xFFFFFFFF;
        t2 = *(short *)((a5 + 0x6));
        *(unsigned int *)(((0x74 + t0) + 0x0)) = (unsigned short)t2;
        t1 = (unsigned short)t2;
    }
    return t1;
}

int FUN_0c0c10bc(int a4, int a5)
{
    int stk[38];
    register float u4;
    register float u5;
    register float u6;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register float u14;
    register float u16;
    register float u17;
    register float u18;

    *(unsigned int *)(((int)stk + 68)) = a4;
    *(unsigned int *)(((int)stk + 72)) = a5;
    nlGetMatrix((((int)stk + 68) + 0x8));
    FUN_0c0db0a0((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 72))));
    u4 = *(float *)(((int)stk + 84));
    *(float *)(((int)stk + 64)) = u4;
    u5 = *(float *)(((int)stk + 80));
    *(float *)(((int)stk + 60)) = u5;
    u6 = *(float *)(((int)stk + 76));
    *(float *)(((int)stk + 56)) = u6;
    *(int *)((int)stk + 52) = 0xC1E3A30;
    nlPrintf(0xC1E3A30, u6, u5, u4);
    u8 = *(float *)(((int)stk + 100));
    *(float *)(((int)stk + 48)) = u8;
    u9 = *(float *)(((int)stk + 96));
    *(float *)(((int)stk + 44)) = u9;
    u10 = *(float *)(((int)stk + 92));
    *(float *)(((int)stk + 40)) = u10;
    *(int *)((int)stk + 36) = 0xC1E3A30;
    nlPrintf(0xC1E3A30, u10, u9, u8);
    u12 = *(float *)(((int)stk + 116));
    *(float *)(((int)stk + 32)) = u12;
    u13 = *(float *)(((int)stk + 112));
    *(float *)(((int)stk + 28)) = u13;
    u14 = *(float *)(((int)stk + 108));
    *(float *)(((int)stk + 24)) = u14;
    *(int *)((int)stk + 20) = 0xC1E3A30;
    nlPrintf(0xC1E3A30, u14, u13, u12);
    u16 = *(float *)(((int)stk + 132));
    *(float *)(((int)stk + 16)) = u16;
    u17 = *(float *)(((int)stk + 128));
    *(float *)(((int)stk + 12)) = u17;
    u18 = *(float *)(((int)stk + 124));
    *(float *)(((int)stk + 8)) = u18;
    *(int *)((int)stk + 4) = 0xC1E3A30;
    return (nlPrintf(0xC1E3A30, u18, u17, u16));
}

int FUN_0c031630(int a4)
{
    register int t7;

    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC0314D8;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x30)); }
    }
    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(0x2BC));
        t7 = *(int *)((a4 + 0x488));
        FUN_0c03145c(a4);
        *(unsigned int *)((t7 + 0x22C)) = 0x3;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x3C)) = *(struct mv3 *)((t7 + 0x30)); }
        *(unsigned int *)((t7 + 0x248)) = 0x0;
        *(unsigned int *)((a4 + 0x478)) = 0xC03149A;
    }
    *(unsigned int *)((a4 + 0x4F4)) = 0x16;
    return 0x4F4;
}

int FUN_0c083910(int a4)
{
    int stk[7];
    register int t1;

    t1 = *(int *)((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0));
    FUN_0c082f04(a4, 0x3, (*(float *)((t1 + 0x22C))));
    FUN_0c082f04(a4, 0x4, (*(float *)((t1 + 0x230))));
    FUN_0c082f04(a4, 0x5, (*(float *)((t1 + 0x234))));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t1));
    nlRotateAY(0x9C71);
    nlRotateAX(0xFFFFF1C8);
    FUN_0c0db470(0xC1028EC, ((int)stk + 4));
    nlPopMatrix(0x1);
    FUN_0c082f04(a4, 0x0, (*(float *)(((int)stk + 4))));
    FUN_0c082f04(a4, 0x1, (*(float *)(((int)stk + 8))));
    return (FUN_0c082f04(a4, 0x2, (*(float *)(((int)stk + 12)))));
}

int FUN_0c0b594c(void)
{
    int stk[3];
    register int t17;

    FUN_0c0bfa90();
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0c45d0();
    FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    FUN_0c0c4290((*(int *)0xC23ED50));
    FUN_0c084104();
    FUN_0c07e1e8();
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0(0x2E39, (*(float *)0xC0B5A7C), (*(float *)0xC0B5A78), (*(float *)0xC0B5A74));
    FUN_0c0dc0b0(0x1);
    *(unsigned int *)0xC23ECF0 = (FUN_0c0e14c4(0x0));
    *(unsigned int *)0xC23ECE4 = (FUN_0c0e14c4(0xC0B59F2));
    t17 = FUN_0c0e14c4(0xC0B59F6);
    *(unsigned int *)0xC23ECE0 = t17;
    *(unsigned int *)0xC23ED5C = 0x0;
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t17;
}

int FUN_0c0c2484(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t7;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        t2 = t0;
        if (t0 != 1) {
        } else {
            t2 = (FUN_0c0c2126(a4, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t7 = t2;
    } else {
        FUN_0c0c22be(a4);
        t7 = (FUN_0c0c2126(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
    }
    return t7;
}

int FUN_0c01b788(int a4)
{
    FUN_0c0cc6dc();
    FUN_0c0c43dc((*(int *)0xC23ED58), 0x1);
    FUN_0c0c4364((*(int *)0xC23ED50), 0x1);
    FUN_0c0cc88c((*(int *)0xC23ED50));
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    FUN_0c0852bc((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ED9C = 0x4;
    FUN_0c01a874();
    FUN_0c016d74();
    FUN_0c084b1a((*(int *)0xC23ED8C), 0x0);
    FUN_0c0cc7d8((*(int *)0xC23ED50));
    FUN_0c019a36();
    FUN_0c01a89c((a4 + 0x34));
    *(volatile int *)((a4 + 0x34));
    *(unsigned int *)0xC23EDA4 = (FUN_0c0e5dc0());
    return FUN_0c04996a();
}

int FUN_0c04b280(int a4)
{
    register int t0;
    register int t3;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        if (((*(int *)((a4 + 0x39C))) & 0x200) != 0) {
            t3 = FUN_0c0562ee(a4, 0x0);
            if (t3 != 0) {
                *(unsigned int *)((a4 + 0x20C)) = 0x200000;
                *(unsigned int *)((a4 + 0x210)) = 0x38;
                return 0x210;
            }
            return FUN_0c049b80(a4);
        }
        return FUN_0c049b80(a4);
    }
    return t0;
}

int FUN_0c063f78(int a4, int a5, int a6)
{
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    }
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c01cdc2(a4);
    if (!((*(float *)((a4 + 0x34))) > 0.0f)) {
        *(unsigned int *)((a4 + 0x1EC)) = ((int)0x1 << (int)(*(int *)((a4 + 0xBC))));
        *(unsigned int *)((a4 + 0x1F4)) = (int)((float)(*(int *)((a4 + 0x1F4))) * 0.75f);
        *(unsigned int *)((a4 + 0x22C)) = 0x1E;
        *(unsigned int *)((a4 + 0x0)) = 0xC063EF6;
        return FUN_0c0cc3f8(0x1331A9);
    }
    return 0x34;
}

int FUN_0c22cef6(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = FUN_0c22cd00();
    if (a5 == 0) {
        if ((*(int *)((a4 + 0x1C))) == 0) {
        } else {
            t2 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
        }
    } else {
        if (a5 == 1) {
            t2 = *(int *)((a4 + 0x10));
            t3 = *(int *)((a6 + 0x4));
            t4 = (t2 - t3);
            if ((int)(t2 - t3) <= 0) {
                t4 = 0x0;
            }
            *(unsigned int *)((a4 + 0x10)) = t4;
            t2 = *(int *)((a6 + 0x4));
            t3 = *(int *)((a4 + 0xC));
            t5 = *(int *)((a4 + 0x18));
            t6 = (t3 + t2);
            if ((int)t5 < (int)(t3 + t2)) {
                t6 = t5;
            }
            *(unsigned int *)((a4 + 0xC)) = t6;
            if ((t4 != ((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x14))))) && (t0 = *(int *)((a4 + 0x1C)), t0 != 0)) {
                t0 = ((int (*)(int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, (t3 + t2));
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t0 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
            }
        }
    }
    return FUN_0c22cd18(a4, t1);
}

int FUN_0c042a5a(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[12];
    register float u1;
    register float u4;
    register float u6;
    register float u8;
    register float u12;

    FUN_0c042b60(a4, (((int)stk + 4) + 0x18), 0xFFFFFFFF, a7, f4, f5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)((a4 + 0x30)); }
    u1 = *(float *)0xC042B4C;
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + u1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
    u4 = *(float *)0xC042B50;
    u6 = (*(float *)(((int)stk + 4)));
    u6 = u6 + u4 * (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 4)) = u6;
    u8 = u1;
    u8 = u8 + u4 * (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u8);
    u12 = (*(float *)(((int)stk + 12)));
    u12 = u12 + u4 * (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 12)) = u12;
    return (FUN_0c033c8c((((int)stk + 4) + 0xC), ((int)stk + 4), 0x3, *(Stk3 *)(((int)stk + 4)), (*(float *)0xC042B54)));
}

int FUN_0c07abf4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x98));
            t1 = *(short *)((a4 + 0x62));
            if ((short)((int)(t0 - t1) >> 4) == 0) {
                *(unsigned short *)((a4 + 0x62)) = (*(short *)((a4 + 0x98)));
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            } else {
                *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + ((int)(t0 - t1) >> 4));
            }
        }
    } else {
        t0 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
        if ((int)(t0 - 1) >= 0) {
        } else {
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

int FUN_0c0ad08e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a5;
    t1 = a6;
    if ((*(int *)0xC23ED58) == 53) {
        if ((*(int *)0xC2475A4) == 1) {
            *(unsigned char *)0xC10F1BC = ((*(int *)0xC23EDC0) + 0x1);
            t2 = 0xC10F1C4;
            if ((*(int *)0xC23EDE4) == 5) {
                *(unsigned char *)0xC10F1C4 = ((*(int *)0xC23EDC4) + 0x1);
                t2 = 0xC10F1CC;
            }
            t3 = t2;
        } else {
            *(unsigned char *)0xC10F1BC = ((*(int *)0xC23EDC4) + 0x1);
            t2 = 0xC10F1C4;
            if ((*(int *)0xC23EDE0) == 5) {
                *(unsigned char *)0xC10F1C4 = ((*(int *)0xC23EDC0) + 0x1);
                t2 = 0xC10F1CC;
            }
            t3 = t2;
        }
        *(unsigned char *)((t3 + 0x0)) = 0xFFFFFFFF;
        t0 = 0xC23EDC0;
        t1 = 0xC23EDE0;
    }
    FUN_0c0a8d80(0xC10F1BC, t0, t1);
    FUN_0c0ad26e();
    t0 = FUN_0c0e19aa(0xC0A8C94, 0xC4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23EE54 = t0;
    *(float *)((t0 + 0x44)) = (*(float *)0xC0AD178);
    return FUN_0c06993c();
}

int FUN_0c048070(int a4)
{
    int stk[6];
    register int t1;

    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    t1 = *(int *)((a4 + 0x3A0));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F6744); }
            FUN_0c046294(a4, ((int)stk + 4), 0x1, *(Stk3 *)(((int)stk + 4)));
            FUN_0c046170(a4, (*(float *)0xC048174));
            if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                *(unsigned int *)((a4 + 0x534)) = 0x0;
                *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                FUN_0c02a19a(a4);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x2C4)) = 0x5A1;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
    }
    return (FUN_0c022838(a4));
}

int FUN_0c04f558(int a4)
{
    if (((*(int *)0xC23ED5C) & 128) != 0) {
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x340 + a4) + 0x0))) << 1) + ((((*(int *)((a4 + 0xC0))) >> 1) * 0x2C) + 0xC1FE210))));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x324)) = 0x0;
        *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
        FUN_0c051a48(a4);
        *(unsigned int *)((a4 + 0x0)) = 0xC04F7C8;
        FUN_0c054fb0(a4);
    }
    FUN_0c085704(a4);
    return FUN_0c0bbbf4(a4);
}

int FUN_0c04f74c(int a4)
{
    if (((*(int *)0xC23ED5C) & 128) != 0) {
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x340 + a4) + 0x0))) << 1) + ((((*(int *)((a4 + 0xC0))) >> 1) * 0x2C) + 0xC1FE210))));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x324)) = 0x0;
        *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
        FUN_0c051a48(a4);
        *(unsigned int *)((a4 + 0x0)) = 0xC04F7C8;
        FUN_0c054fb0(a4);
    }
    FUN_0c085704(a4);
    return FUN_0c0bbbf4(a4);
}

int FUN_0c071378(int a4, int a5, int a6, int a7)
{
    register float u0;

    FUN_0c0685a4(a4, a5, a6, a7);
    if ((*(int *)((a4 + 0x80))) == 0) {
        u0 = *(float *)((a4 + 0x90));
        *(float *)((a4 + 0x90)) = (u0 + 0.0166666657f);
        if (!(1.0f > (u0 + 0.0166666657f))) {
            *(unsigned int *)((a4 + 0x80)) = 0x1;
        }
        u0 = *(float *)((a4 + 0x90));
        nlGetAverageVector(0xC0FC390, 0xC0FC39C, (a4 + 0x30), ((-u0) + 1.0f), u0);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(0x7FFF);
    FUN_0c0c465c(0xDB0);
    return nlPopMatrix(0x1);
}

int FUN_0c075c80(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    t0 = *(short *)((a4 + 0x60));
    *(unsigned short *)((a4 + 0x60)) = (t0 + 0x1400);
    nlRotateAX((short)(t0 + 0x1400));
    t0 = *(short *)((a4 + 0x64));
    *(unsigned short *)((a4 + 0x64)) = (t0 + 0x1000);
    nlRotateAZ((short)(t0 + 0x1000));
    FUN_0c0c465c(0xF3B);
    return nlPopMatrix(0x1);
}

int FUN_0c03a77a(int a4, int a5)
{
    register int t0;
    register int t1;

    FUN_0c038ce0(a4, a5);
    FUN_0c038ed4(a4, (1.0f + 1.0f));
    t0 = *(int *)((a4 + 0x4F0));
    t1 = *(int *)((a4 + 0x5A0));
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((t1 << 1) + (t1 << 2)) + ((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E4C))) + 0xFC)) + 0x2)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x1000;
    *(unsigned int *)((a4 + 0x210)) = 0x8;
    *(unsigned int *)((a4 + 0x4C4)) = 0x2;
    *(unsigned int *)((a4 + 0x4C8)) = 0x5;
    FUN_0c038f9c(a4);
    t0 = *(int *)((a4 + 0xC8));
    if ((t0 & 4) != 0) {
        return FUN_0c03a112(a4);
    }
    return t0;
}

int FUN_0c05c148(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c090bf0(a4);
        }
        t3 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        t3 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t3 - 1);
        if ((int)(t3 - 1) <= 0) {
            t3 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, t0, t1, t2);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    return FUN_0c01cdc2(a4);
}

int FUN_0c0a2a6c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c0e19aa(0xC0A2B18, 0x1E4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x4)) = 0xC0A2A14;
    *(unsigned int *)((t0 + 0x30)) = a4;
    nlPushMatrix(0x0);
    t1 = 0xC10CF00;
    t2 = (t0 + 0x34);
    t0 = 0xC10CF54;
    t3 = 0x6;
    for (;;) {
        t4 = *(short *)((t0 + 0x0));
        t0 = (t0 + 0x2);
        nlUnitMatrix();
        t5 = t1;
        t1 = (t1 + 0xC);
        FUN_0c0dcca0(t5);
        *(unsigned short *)((t2 + 0xA)) = t3;
        t5 = t2;
        t2 = (t2 + 0x10);
        FUN_0c0bdb70(t4, (*(short *)((t0 + 0x0))), t5);
        t3 = (t3 - 0x1);
        if (t3 == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0bf038(int a4)
{
    register int t19;

    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder(0xC260B78);
    nlRotateAX((-(*(short *)0xC19608E)));
    nlRotateAY((-(*(short *)0xC196090)));
    nlRotateAZ((-(*(short *)0xC196092)));
    FUN_0c0dcc80(0xC1960A0);
    FUN_0c0bdec2(((*(int *)0xC260A34) + 0x80));
    FUN_0c0dbda0(0xC260B38);
    FUN_0c0de000((*(float *)((a4 + 0x280))));
    t19 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((a4 + 0x454))) << 2) + 0xC195F38)))))((*(short *)(((*(int *)0xC260A34) + 0x88))), (*(float *)((a4 + 0x458))));
    return nlPopMatrix(0x1);
}

int FUN_0c060f76(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        t3 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        if (!((*(float *)((a4 + 0x24C))) > 0.0f)) {
            t3 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, t0, t1, t2);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    *(float *)((a4 + 0x1E4)) = ((*(float *)((a4 + 0x1E4))) * (*(float *)(((0x254 + a4) + 0x0))));
    *(float *)((a4 + 0x24C)) = ((*(float *)((a4 + 0x24C))) - (*(float *)(((0x250 + a4) + 0x0))));
    return FUN_0c01cdc2(a4);
}

int FUN_0c07e0f0(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t2;
    register int t6;
    register int t8;
    register int t9;
    register int t7;
    register int t20;
    register int t15;

    t0 = *(int *)0xC23ED5C;
    t2 = t0;
    if ((t0 & 4) != 0) {
        t2 = (FUN_0c0e19f2(a4, a5, a6, a7));
    }
    t6 = t2;
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)((((t8 << 2) + 0xC247030) + 0x0));
        if (((int)t9 >= (int)0x3) && ((int)t9 <= (int)0x7)) {
            t7 = (*(int *)((a4 + 0x30)));
            if ((t7 & ((int)0x1 << (int)t8)) == 0) {
                t6 = (FUN_0c0bb292(t8, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16)));
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) | ((int)0x1 << (int)t8));
            } else {
                t15 = t7;
            }
            t20 = t15;
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) & (~((int)0x1 << (int)t8)));
            t20 = t7;
        }
        t7 = t20;
        t8 = (t8 + 0x1);
        if ((int)t8 >= (int)0xC) {
            break;
        }
    }
    return t6;
}

int FUN_0c0befc0(int a4)
{
    register int t19;

    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder(0xC260B78);
    nlRotateAX((-(*(short *)0xC196088)));
    nlRotateAY((-(*(short *)0xC19608A)));
    nlRotateAZ((-(*(short *)0xC19608C)));
    FUN_0c0dcc80(0xC196094);
    FUN_0c0bdec2(((*(int *)0xC260A34) + 0x70));
    FUN_0c0dbda0(0xC260B38);
    FUN_0c0de000((*(float *)((a4 + 0x280))));
    t19 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((a4 + 0x454))) << 2) + 0xC195F38)))))((*(short *)(((*(int *)0xC260A34) + 0x78))), (*(float *)((a4 + 0x458))));
    return nlPopMatrix(0x1);
}

int FUN_0c01bb20(void)
{
    int stk[3];

    FUN_0c0cc6dc();
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bfa90();
        FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
    FUN_0c0c4364((*(int *)0xC23ED50), 0x1);
    FUN_0c0cc88c((*(int *)0xC23ED50));
    FUN_0c0852bc((*(int *)0xC23ED50));
    FUN_0c01937a();
    FUN_0c084b1a(0xA, 0x0);
    *(unsigned int *)0xC23A18C = 0x0;
    FUN_0c0cc752((*(int *)0xC23ED50));
    *(unsigned int *)0xC23EDB0 = 0xFFFFFFFF;
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0xFFFFFF7F);
    *(unsigned int *)0xC23ED9C = 0x11;
    return 0x11;
}

float FUN_0c02c480(int a4, int a5)
{
    register float u8;
    register float u23;
    register int t18;

    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC02C340;
    }
    *(unsigned int *)((a4 + 0x4F0)) = 0x25;
    if (!(((float)(*(int *)((a4 + 0x308))) * (*(float *)0xC02C588)) > (float)(*(int *)((a4 + 0x304))))) {
        *(unsigned int *)((a4 + 0x4F4)) = 0x26;
    } else {
        u8 = *(float *)0xC02C58C;
        if (!(((float)(*(int *)((a4 + 0x308))) * u8) > (float)(*(int *)((a4 + 0x304))))) {
            if ((*(int *)((a4 + 0x4F4))) != 39) {
                *(unsigned int *)((a4 + 0x4FC)) = 0x1;
            }
            t18 = 0x27;
        } else {
            if ((*(int *)((a4 + 0x4F4))) != 40) {
                *(unsigned int *)((a4 + 0x4FC)) = 0x1;
            }
            t18 = 0x28;
        }
        *(unsigned int *)((a4 + 0x4F4)) = t18;
        u23 = u8;
    }
    return u23;
}

int FUN_0c049624(int a4)
{
    int t0;
    register int t1;

    if (((*(int *)(((*(int *)((a4 + 0x488))) + 0x0))) != 0) && (t0 = *(int *)((a4 + 0x4D0)), t0 != 0)) {
        FUN_0c046968(a4);
    }
    *(unsigned int *)((a4 + 0x4F0)) = 0x31;
    FUN_0c0494e0(a4);
    if (!((float)(*(int *)((a4 + 0x304))) > ((float)(*(int *)((a4 + 0x308))) * (*(float *)0xC0496CC)))) {
        t0 = *(int *)((a4 + 0x4F8));
        if (((t0 != 4) && (t0 != 5)) || (t1 = *(int *)((a4 + 0x544)), t1 != 3)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        *(unsigned int *)((a4 + 0x4DC)) = 0x44;
        *(unsigned int *)((a4 + 0x474)) = 0xC0495C4;
    }
    return FUN_0c0493d8(a4);
}

int FUN_0c0822a0(int a4, int a5)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((*(int *)((t1 + 0x3F4))) == 1) {
        *(unsigned int *)((t1 + 0x3F4)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + t1)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x404 + t1)) = *(struct mv3 *)((a4 + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x278 + t1)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x410 + t1)) = *(struct mv3 *)((a5 + 0xC)); }
    } else {
        nlAddVector((0x254 + t1), (0x404 + t1));
        nlAddVector((0x278 + t1), (0x410 + t1));
    }
    return FUN_0c081e0c(t1);
}

int FUN_0c087ef2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(int *)((a4 + 0x34));
    if ((*(int *)((((*(int *)((t0 + 0xBC))) << 2) + 0xC247030))) == 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)((t0 + 0x3E4))));
    FUN_0c0dcca0((a4 + 0x40));
    nlRotateAY((*(short *)((a4 + 0x4E))));
    nlRotateAX((*(short *)((a4 + 0x4C))));
    u0 = *(float *)((a4 + 0x54));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x54))));
    t0 = ((int (*)(int, float))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x58))));
    return nlPopMatrix(0x1);
}

int FUN_0c0931ec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a4 + 0x88));
    t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
    if ((*(int *)((((t0 << 2) + 0xC247030) + 0x0))) == 0) {
        FUN_0c0e19f2(((t0 << 2) + 0xC247030), 0xC246FF0, a6, a7);
    }
    t0 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t0 + 0x1);
    t2 = 0xA0;
    if ((((t0 + 0x1) - 1) & (*(int *)((a4 + 0xA0)))) == 0) {
        t0 = *(int *)((a4 + 0x9C));
        t3 = *(int *)((a4 + 0x8C));
        *(unsigned int *)(((((*(int *)(((0x80 + a4) + 0x0))) << 2) + (0x404 + t1)) + 0x0)) = (*(short *)((((t0 << 1) + t3) + 0x0)));
        *(unsigned int *)((a4 + 0x9C)) = ((*(int *)((a4 + 0x9C))) + 0x1);
        if ((int)(*(short *)(((((t0 << 1) + t3) + 0x2) + 0x0))) < 0) {
            *(unsigned int *)((a4 + 0x9C)) = 0x0;
        }
        t2 = 0x9C;
    }
    return t2;
}

int FUN_0c0bf104(int a4)
{
    int stk[20];
    register int t17;

    nlGetMatrix((((int)stk + 4) + 0x4));
    FUN_0c0dc5a0();
    *(unsigned int *)(((int)stk + 4)) = 0xC196094;
    FUN_0c0dcc80(0xC196094);
    nlMultiMatrix(0xC260B78);
    nlMultiMatrix((((int)stk + 4) + 0x4));
    FUN_0c0bdec2(((*(int *)0xC260A34) + 0x70));
    FUN_0c0dbda0(0xC260B38);
    FUN_0c0dcca0((*(int *)(((int)stk + 4))));
    FUN_0c0de000((*(float *)((a4 + 0x280))));
    t17 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((a4 + 0x454))) << 2) + 0xC195F38)))))((*(short *)(((*(int *)0xC260A34) + 0x78))), (*(float *)((a4 + 0x458))));
    return (nlPopMatrix(0x1));
}

int FUN_0c018918(int a4)
{
    register float t2;

    t2 = nlLength((a4 + 0x30), (0x254 + (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)))));
    if (!(t2 > (*(float *)((a4 + 0x1E4))))) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAZ((*(short *)((a4 + 0x70))));
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        FUN_0c0c465c((*(int *)((a4 + 0x224))));
        nlPopMatrix(0x1);
        return FUN_0c01843e();
    }
    return 0x1E4;
}

int FUN_0c01aa6c(void)
{
    register int t8;

    *(unsigned int *)0xC23ED9C = 0x1;
    *(unsigned int *)0xC23EDA0 = 0x0;
    *(unsigned int *)0xC23ED64 = 0x0;
    *(unsigned int *)0xC23ED5C = 0x0;
    *(unsigned int *)0xC23A194 = 0x0;
    *(unsigned int *)0xC23ECE0 = (FUN_0c0e14c4(0xC01AC04));
    *(unsigned int *)0xC23ECE4 = (FUN_0c0e14c4(0xC01AC32));
    *(unsigned int *)0xC23ECEC = (FUN_0c0e14c4(0xC01AC36));
    *(unsigned int *)0xC23ECF0 = (FUN_0c0e14c4(0xC01AC44));
    *(unsigned int *)0xC23ECF4 = (FUN_0c0e14c4(0xC01AC48));
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    t8 = 0xC23A1A8;
    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
        t8 = (FUN_0c0d41a8());
    }
    if ((*(int *)0xC204998) != 0) {
        *(unsigned int *)0xC1FF890 = 0x0;
    }
    return t8;
}

int FUN_0c01c0ce(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c01993e(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x50));
    *(unsigned int *)((a4 + 0x50)) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        FUN_0c04fd64();
        FUN_0c021124();
        FUN_0c021c8e();
        *(unsigned int *)0xC23ED9C = 0x19;
        *(unsigned int *)0xC23F220 = 0x0;
        *(unsigned int *)0xC23F21C = 0x2;
        *(unsigned int *)0xC23F24C = 0x50;
        *(unsigned int *)0xC23F248 = 0x50;
        *(unsigned int *)0xC23EDB0 = 0x0;
        *(unsigned int *)0xC247D04 = 0x9;
        *(unsigned char *)0xC247CBB = (*(signed char *)0xC247D08);
        *(unsigned short *)0xC247CBC = 0x2;
        return FUN_0c084e08(0xA, 0x1);
    }
    return 0x50;
}

int FUN_0c02d3f8(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC02D32E;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        FUN_0c02286c(a4, 0x28, a6, a7, (*(float *)0xC02D514), (*(float *)0xC02D510));
    }
    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(0x2BC));
        *(unsigned int *)((a4 + 0x478)) = 0xC02D3D8;
    }
    if ((*(int *)((a4 + 0x4C8))) != 3) {
        *(unsigned int *)((a4 + 0x508)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x508)) = 0x1;
    }
    *(unsigned int *)((a4 + 0x4F4)) = 0x14;
    return 0x4F4;
}

int FUN_0c048baa(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if ((*(int *)((a4 + 0x2BC))) != (*(int *)((a4 + 0x2C4)))) {
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    }
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x3A0)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0xF;
    *(unsigned int *)((a4 + 0x3AC)) = 0xF;
    *(unsigned short *)((a4 + 0x454)) = 0x1;
    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x2F0)) = 0x0;
    *(unsigned int *)((a4 + 0x5B4)) = 0x0;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    *(unsigned int *)((a4 + 0x4D0)) = 0x0;
    *(unsigned int *)((a4 + 0x4C4)) = 0x0;
    *(unsigned int *)((a4 + 0x4CC)) = 0x0;
    *(unsigned int *)((a4 + 0x4C8)) = 0x3;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c041e1e(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)((((((t0 << 2) + t0) << 2) + 0xC1F8E3C) + 0x10))) + 0x12A)));
    t0 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x5B8)) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10))) + 0x12C)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x4E4)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x20C)) = 0x20000000;
    t0 = *(int *)((a4 + 0x2C4));
    return FUN_0c088ec4(a4, ((unsigned char)(*(signed char *)((((((t0 << 2) << 2) << 1) + 0xC1AAE7C) + 0x14))) * ((int)0x1 << (int)(unsigned char)(*(signed char *)((((((t0 << 2) << 2) << 1) + 0xC1AAE7C) + 0x15))))));
}

int FUN_0c05e952(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - 0.0562499985f);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    nlScale(3.0f, 3.0f, 3.0f);
    FUN_0c0de000(3.0f);
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
    return nlPopMatrix(0x1);
}

int FUN_0c07ac72(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t8;

    t0 = 0x0;
    t1 = 0x3C;
    t2 = 0xC100D5C;
    for (;;) {
        t4 = FUN_0c0e19aa(0xC07ABF4, 0xB4, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)(t2); }
        *(unsigned short *)(((0x62 + t4) + 0x0)) = (*(short *)((t2 + 0xC)));
        t0 = (t0 + 0x1);
        *(unsigned int *)(((0x78 + t4) + 0x0)) = (*(short *)((t2 + 0x12)));
        t8 = *(short *)((t2 + 0xE));
        t2 = (t2 + 0x18);
        *(unsigned int *)(((0x98 + t4) + 0x0)) = t8;
        *(unsigned int *)((t4 + 0xA0)) = t1;
        t1 = (t1 + 0x14);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return 0xA0;
}

int FUN_0c0184e0(int a4)
{
    register float u11;

    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAZ((*(short *)((a4 + 0x64))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    u11 = *(float *)((a4 + 0x74));
    nlScale(u11, u11, u11);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0df4c0((*(int *)((a4 + 0x80))));
    FUN_0c0c4684((*(int *)((a4 + 0x78))));
    FUN_0c0df4c0(0x2);
    nlPopMatrix(0x1);
    return FUN_0c01843e();
}

int FUN_0c028e8c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)((a4 + 0x514))) != 0) {
        FUN_0c0277c4(a4, (*(float *)0xC028F98));
        t3 = FUN_0c0352b4(a4, 0x80, 0x1);
        if (t3 != 0) {
            t3 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t3 + 0x1);
            if ((int)(t3 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
            } else {
                t3 = ((int (*)(int))(FUN_0c02a19a))(a4);
            }
        } else {
            t3 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t3 + 0x1);
            if ((int)(t3 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
                t3 = ((int (*)(int))(FUN_0c02a19a))(a4);
            }
        }
    } else {
        t3 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t3 + 0x1);
        if ((int)(t3 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
            t3 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, t0, t1, t2);
        }
    }
    return FUN_0c022838(a4);
}

int FUN_0c02db08(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC02DA90;
        *(unsigned int *)((a4 + 0x478)) = 0xC02DAC6;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
    }
    t0 = *(int *)((a4 + 0x4D4));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = ((int (*)(int))((*(int *)((a4 + 0x478)))))(a4);
            *(unsigned int *)((a4 + 0x474)) = 0x0;
            *(unsigned int *)((a4 + 0x478)) = 0x0;
            *(unsigned int *)((a4 + 0x4F0)) = 0x2;
            *(unsigned int *)((a4 + 0x4F4)) = 0x1;
            *(unsigned int *)((a4 + 0x5CC)) = (*(int *)0xC246300);
            t1 = 0x5CC;
        }
        t0 = t1;
    } else {
        *(unsigned int *)((a4 + 0x510)) = 0x2;
        *(unsigned int *)((a4 + 0x50C)) = 0x1;
        *(unsigned int *)((a4 + 0x4F4)) = 0x1C;
        t0 = 0x4F4;
    }
    return t0;
}

int FUN_0c0421ee(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a4 + 0x4E4));
    *(unsigned int *)((a4 + 0x4E4)) = (t0 - 1);
    t1 = 0x4E4;
    if ((int)(t0 - 1) < 0) {
        t0 = *(int *)((a4 + 0x2EC));
        t2 = t0;
        if ((t0 & 12) != 0) {
            t0 = *(int *)((a4 + 0x4DC));
            t3 = *(int *)((a4 + 0x4E0));
            *(unsigned int *)((a4 + 0x4E0)) = (t3 + 0x1);
            if ((int)(*(short *)((((((t3 + 0x1) << 2) << 1) + (*(int *)((((((t0 - 76) << 1) + (t0 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x200);
                FUN_0c03f4bc(a4);
            } else {
                FUN_0c041dd0(a4);
            }
            t0 = *(int *)((a4 + 0x4E0));
            if (t0 == 1) {
                *(unsigned int *)0xC23EDB0 = 0x0;
                *(unsigned int *)0xC23EDB4 = 0x0;
            }
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}
