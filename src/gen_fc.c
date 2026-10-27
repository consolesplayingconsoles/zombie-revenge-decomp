/* Straight-line functions with calls and guards (batch gen_fc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c077f30(int, int, int, int, int, int, int);
int FUN_0c088ec4(int, int);
extern int FUN_0c0be6ee();
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c078018(int a4);
int FUN_0c08deb4(int a4);

int FUN_0c078018(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x3D4));
    t1 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x684 + a4) + t1)) = *(struct mv3 *)(((0x5C4 + a4) + t1)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x804 + a4) + t1)) = *(struct mv3 *)(((0x744 + a4) + t1)); }
        t1 = (t1 + 0xC);
        if ((unsigned int)t1 >= (unsigned int)0xC0) {
            break;
        }
    }
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ((-(*(short *)((a4 + 0x70)))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlPushMatrix(0x0);
    FUN_0c0c47ae((*(int *)((a4 + 0x28C))));
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0x0, 0xC2006C0, (t0 + 0x6), 0xC0FFE20, 0xC0FFE40, 0xC0FFF00);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0x1, 0xC2006CC, ((t0 + 0x6) + 0x6), 0xC0FFE22, 0xC0FFE4C, 0xC0FFF06);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0x3, 0xC2006E4, (((t0 + 0x6) + 0x6) + 0x18), 0xC0FFE26, 0xC0FFE64, 0xC0FFF12);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0x4, 0xC2006F0, ((((t0 + 0x6) + 0x6) + 0x18) + 0x6), 0xC0FFE28, 0xC0FFE70, 0xC0FFF18);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0x6, 0xC200708, (((((t0 + 0x6) + 0x6) + 0x18) + 0x6) - 24), 0xC0FFE2C, 0xC0FFE88, 0xC0FFF24);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0x7, 0xC200714, ((((((t0 + 0x6) + 0x6) + 0x18) + 0x6) - 24) + 0x6), 0xC0FFE2E, 0xC0FFE94, 0xC0FFF2A);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0x9, 0xC20072C, (((((((t0 + 0x6) + 0x6) + 0x18) + 0x6) - 24) + 0x6) + 0x1E), 0xC0FFE32, 0xC0FFEAC, 0xC0FFF36);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0xA, 0xC200738, ((((((((t0 + 0x6) + 0x6) + 0x18) + 0x6) - 24) + 0x6) + 0x1E) + 0x12), 0xC0FFE34, 0xC0FFEB8, 0xC0FFF3C);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0xB, 0xC200744, (((((((((t0 + 0x6) + 0x6) + 0x18) + 0x6) - 24) + 0x6) + 0x1E) + 0x12) + 0x6), 0xC0FFE36, 0xC0FFEC4, 0xC0FFF42);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0xD, 0xC20075C, ((((((((((t0 + 0x6) + 0x6) + 0x18) + 0x6) - 24) + 0x6) + 0x1E) + 0x12) + 0x6) - 24), 0xC0FFE3A, 0xC0FFEDC, 0xC0FFF4E);
    nlPushMatrix(0x0);
    FUN_0c077f30(a4, 0xE, 0xC200768, (((((((((((t0 + 0x6) + 0x6) + 0x18) + 0x6) - 24) + 0x6) + 0x1E) + 0x12) + 0x6) - 24) + 0x6), 0xC0FFE3C, 0xC0FFEE8, 0xC0FFF54);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}

int FUN_0c08deb4(int a4)
{
    int t1;
    int t2;
    int t30;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    float t45;
    int t46;
    int t47;
    float t48;
    int t55;
    float u67;
    int t60;
    int t83;
    int t84;
    float u88;
    float u89;
    float u90;
    int t100;
    int t102;
    int t105;
    int t103;
    int t104;
    int t110;
    int t29;
    int t14;
    int t15;
    int t23;
    float u80;
    int stk[24];

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t2 = *(int *)((a4 + 0x238));
    if ((*(int *)((a4 + 0x234))) != 0) {
        *(unsigned int *)((a4 + 0x234)) = ((*(int *)((a4 + 0x234))) - 1);
        t110 = 0x234;
    } else {
        if ((*(int *)((a4 + 0xD8))) != 0) {
            if (((*(int *)((a4 + 0xD8))) == 1) && (t14 = *(int *)((a4 + 0x1C4)), t15 = *(int *)((0xC247030 + (t14 << 2))), t15 == 4)) {
                FUN_0c088ec4((*(int *)((((*(int *)((a4 + 0x1C4))) << 2) + 0xC246FF0))), 0x78);
            } else {
                t23 = a4;
            }
            FUN_0c0e19f2(t23);
        } else {
            t29 = a4;
        }
        t30 = *(int *)((a4 + 0x240));
        *(unsigned int *)((a4 + 0x240)) = (t30 - 1);
        if ((int)(t30 - 1) <= 0) {
            FUN_0c0e19f2(t29);
        }
        t38 = 0x4;
        t39 = 0xC10A984;
        t40 = ((int)stk + 4);
        for (;;) {
            t41 = t39;
            t39 = (t39 + 0xC);
            t42 = t40;
            t40 = (t40 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t42) = *(struct mv3 *)(t41); }
            t38 = (t38 - 0x1);
            if (t38 == 0) {
                break;
            }
        }
        t43 = FUN_0c0da2e0();
        t44 = *(int *)(((0x21C + a4) + 0x0));
        *(unsigned int *)(((0x21C + a4) + 0x0)) = (t44 + ((t43 & 0xFFF) + 0x200));
        t45 = FUN_0c0da410((t44 + ((t43 & 0xFFF) + 0x200)));
        t46 = FUN_0c0da2e0();
        t47 = *(int *)(((0x220 + a4) + 0x0));
        *(unsigned int *)(((0x220 + a4) + 0x0)) = (t47 + ((unsigned char)t46 + 0x100));
        t48 = FUN_0c0da410((t47 + ((unsigned char)t46 + 0x100)));
        *(float *)((((int)stk + 4) + 0x0)) = ((*(float *)((((int)stk + 4) + 0x0))) + (t48 * (1.0f + 1.0f)));
        *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) + (t48 * (1.0f + 1.0f)));
        *(float *)((((int)stk + 4) + 0x4)) = ((*(float *)((((int)stk + 4) + 0x4))) * (((t45 * 0.199999988f) + 0.799999952f)));
        *(float *)(((((int)stk + 4) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x4))) * ((0.799999952f - (t45 * 0.199999988f))));
        t55 = ((int (*)(int, int, float))(FUN_0c0be6ee))(((short)((unsigned int)t2 >> 16) + 0x1B8), ((int)stk + 4), (t48 * (1.0f + 1.0f)));
        if ((int)(*(int *)((a4 + 0x240))) <= (int)0xA) {
            *(float *)((a4 + 0x228)) = ((*(float *)((a4 + 0x228))) * 0.799999952f);
            u80 = 1.0f;
        } else {
            u67 = 1.0f;
            if ((int)(*(int *)((a4 + 0x21C))) < (int)0x3FFF) {
                t60 = *(int *)((a4 + 0x21C));
                *(unsigned int *)((a4 + 0x21C)) = (t60 + 0x666);
                u67 = ((*(float *)((a4 + 0x22C))) * (FUN_0c0da410((t60 + 0x666))));
            }
            if ((*(int *)((a4 + 0x230))) != 0) {
                FUN_0c01cdc2(a4);
            }
            u80 = u67;
        }
        t83 = FUN_0c0da2e0();
        t84 = *(int *)(((0x224 + a4) + 0x0));
        *(unsigned int *)(((0x224 + a4) + 0x0)) = (t84 + ((t83 & 0x1FF) + 0x400));
        u88 = (*(float *)0xC08E17C);
        u88 = u88 + (*(float *)0xC08E180) * (FUN_0c0da410((t84 + ((t83 & 0x1FF) + 0x400))));
        u89 = *(float *)((a4 + 0x228));
        u90 = (u89 * u88);
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        nlScale((u89 * u88), (u80 * u90), (u89 * u88));
        FUN_0c0de000(((u89 * u88) + (u80 * u90)));
        FUN_0c0c465c(((short)((unsigned int)t2 >> 16) + 0x1B8));
        t100 = ((int (*)(int, int))(FUN_0c0be6ee))(((short)((unsigned int)t2 >> 16) + 0x1B8), 0xC10A984);
        nlPopMatrix(0x1);
        t102 = *(int *)0xC23A258;
        t105 = t102;
        if ((t102 & 1) != 0) {
            t103 = FUN_0c0da2e0();
            t104 = *(int *)(((0x238 + a4) + 0x0));
            *(unsigned int *)(((0x238 + a4) + 0x0)) = (((t103 + t104) + 0x8000) & 0x1FFFFF);
            t105 = (((t103 + t104) + 0x8000) & 0x1FFFFF);
        }
        t110 = t105;
    }
    return t110;
}
