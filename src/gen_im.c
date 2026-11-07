/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[11]; } Stk11;
int FUN_0c015436(int, int);
int FUN_0c0154a4(void);
int FUN_0c015d04(int);
int FUN_0c016200(void);
int FUN_0c016296(void);
int FUN_0c01cdc2(int);
int FUN_0c01cdf2(int);
int FUN_0c0353e4(int);
int FUN_0c035402(int);
int FUN_0c039e96(int);
int FUN_0c03a112(int);
int FUN_0c049b80(int);
int FUN_0c04e9da(int);
int FUN_0c050f1c(int, int, int, int);
int FUN_0c053ac4(int);
int FUN_0c054c8a(int);
int FUN_0c054fb0(int);
int FUN_0c056098(int, int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c069448(int);
int FUN_0c06b430(int);
int FUN_0c06bc74(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c084b0a(float, float, float);
int FUN_0c086b96(int);
int FUN_0c090bf0(int);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
extern int FUN_0c0b145c();
int FUN_0c0b1542(int, float);
int FUN_0c0be548(int, float, float);
int FUN_0c0c0340(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ce88e(void);
float FUN_0c0d9e90(int);
extern int FUN_0c0da2e0();
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5dc0(void);
int mwPlySetLpFlg(int);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector(int, int);
int nlUnitMatrix(void);
int FUN_0c0b1da4(int a4, int a5, int a6, int a7);
int FUN_0c0c6894(int a4, int a5, int a6, int a7);
int FUN_0c064520(int a4, int a5, int a6, int a7);
int FUN_0c0952d0(int a4);
int FUN_0c06bde0(int a4);
int FUN_0c0b1a20(int a4, int a5, int a6, int a7, float f4);
int FUN_0c061708(int a4, int a5);
int FUN_0c07bb4c(int a4, int a5, int a6, int a7);
int FUN_0c0b78ea(int a4);
int FUN_0c04cf44(int a4);
int FUN_0c05c3b4(int a4, int a5);
int FUN_0c06782a(int a4);
int FUN_0c0af312(void);
int FUN_0c0b9de0(void);
int FUN_0c02c340(int a4);
int FUN_0c07c004(int a4);
int FUN_0c05ea18(int a4, int a5);
int FUN_0c0ab3a8(int a4);
int FUN_0c0697b4(int a4, int a5, int a6, int a7);
int FUN_0c03a998(int a4);
int FUN_0c069480(int a4);
int FUN_0c093490(int a4, int a5);
int FUN_0c04f414(int a4, int a5, int a6);


int FUN_0c0c6894(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = (v0_1);
    v0_1 = (0xC247030);
    if (((*(int *)0xC247030) == 4)) goto L_C0C68AC;
    v0_3 = *(int *)((v0_1 + 0x4));
    v0_2 = (v0_3);
    if ((v0_3 == 4)) goto L_C0C68AC;
    L_C0C69B0:;
    return v0_2;
    L_C0C68AC:;
    v0_3 = *(short *)((v0_0 + 0x68));
    v0_2 = ((unsigned short)v0_3);
    if (((unsigned short)v0_3 == 0)) goto L_C0C68CA;
    if ((v0_2 == 1)) goto L_C0C68E0;
    if ((v0_2 == 2)) goto L_C0C690C;
    if ((v0_2 == 3)) goto L_C0C6932;
    if (!((v0_2 == 4))) goto L_C0C6990;
    *(float *)((v0_0 + 0x40)) = ((*(float *)((v0_0 + 0x40))) + 0.399999976f);
    *(float *)((v0_0 + 0x44)) = ((*(float *)((v0_0 + 0x44))) - 0.449999988f);
    w0_0 = *(float *)((v0_0 + 0x44));
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    if ((w0_0 > 0.0f)) goto L_C0C6990;
    FUN_0c0e19f2(v0_1, a5, a6, a7);
    goto L_C0C6990;
    L_C0C6990:;
    v0_2 = (0x68);
    v0_1 = (0x1);
    if (((int)(unsigned short)(*(short *)((v0_0 + 0x68))) < (int)0x1)) goto L_C0C69B0;
    if (((v0_1 & (*(int *)0xC23A258)) == 0)) goto L_C0C69B0;
    return FUN_0c0c0340((v0_0 + 0x30), F4);
    L_C0C6932:;
    *(float *)((v0_0 + 0x40)) = ((*(float *)((v0_0 + 0x40))) - 0.179999992f);
    w0_0 = *(float *)((v0_0 + 0x44));
    *(float *)((v0_0 + 0x44)) = (w0_0 + 0.299999982f);
    v0_1 = *(short *)((v0_0 + 0x6A));
    *(unsigned short *)((v0_0 + 0x6A)) = (v0_1 - 1);
    w0_1 = ((w0_0 + 0.299999982f));
    if (((int)(unsigned short)(v0_1 - 1) > 0)) goto L_C0C6990;
    L_C0C695C:;
    *(unsigned short *)((v0_0 + 0x68)) = ((*(short *)((v0_0 + 0x68))) + 0x1);
    goto L_C0C6990;
    L_C0C690C:;
    if (((int)(*(int *)(((*(int *)((v0_0 + 0x70))) + 0x0))) < (int)(unsigned short)(*(short *)((v0_0 + 0x6E))))) goto L_C0C6990;
    *(unsigned short *)((v0_0 + 0x6A)) = ((*(short *)((v0_0 + 0x6A))) + 0x1);
    if (((int)(unsigned short)(*(short *)((v0_0 + 0x6A))) <= (int)0x3)) goto L_C0C6990;
    goto L_C0C695C;
    L_C0C68E0:;
    *(float *)((v0_0 + 0x44)) = ((*(float *)((v0_0 + 0x44))) + 0.149999991f);
    w0_0 = *(float *)0xC0C6A54;
    v0_2 = (0x44);
    F4 = (w0_0);
    if ((w0_0 > (*(float *)((v0_0 + 0x44))))) goto L_C0C6990;
    *(float *)((v0_0 + v0_2)) = F4;
    *(unsigned short *)((v0_0 + 0x68)) = ((*(short *)((v0_0 + 0x68))) + 0x1);
    *(unsigned short *)((v0_0 + 0x6A)) = 0x0;
    goto L_C0C6990;
    L_C0C68CA:;
    v0_1 = *(short *)((v0_0 + 0x6A));
    *(unsigned short *)((v0_0 + 0x6A)) = (v0_1 - 1);
    if (((int)(unsigned short)(v0_1 - 1) > 0)) goto L_C0C6990;
    *(float *)((v0_0 + 0x44)) = 0.0f;
    goto L_C0C695C;
}

int FUN_0c064520(int a4, int a5, int a6, int a7)
{
    register int t7;
    register float u24;
    register float u25;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        *(unsigned int *)((a4 + 0x22C)) = 0x5;
        *(unsigned int *)((a4 + 0x0)) = 0xC064482;
    } else {
        t7 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t7 - 1);
        if ((int)(t7 - 1) <= 0) {
            FUN_0c0e19f2(a4, a5, a6, a7);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    u24 = *(float *)0xC064698;
    u25 = *(float *)((a4 + 0x1E4));
    if ((*(int *)((a4 + 0xD8))) == 0) {
        FUN_0c01cdc2(a4);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlScale((u25 / u24), (u25 / u24), (u25 / u24));
    FUN_0c0de000((u25 / u24));
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    return nlPopMatrix(0x1);
}

int FUN_0c0952d0(int a4)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t4;
    register int t5;

    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    t3 = *(short *)((a4 + 0x56));
    t4 = *(int *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x56)) = (t3 + 0x1);
    if ((int)(short)(t3 + 0x1) >= (int)0x3) {
        *(unsigned short *)((a4 + 0x56)) = 0x0;
        t5 = *(short *)((a4 + 0x5A));
        *(unsigned short *)((a4 + 0x5A)) = (t5 + 0x1);
        if ((int)(short)(t5 + 0x1) >= (int)(unsigned char)(*(signed char *)((t1 + 0x38)))) {
            *(unsigned short *)((a4 + 0x5A)) = 0x0;
        }
    }
    *(unsigned short *)((a4 + 0x62)) = (*(short *)((((*(short *)((a4 + 0x5A))) << 1) + (*(int *)((t1 + 0xC))))));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t4));
    nlRotateAY((*(short *)((t4 + 0x228))));
    nlRotateAX((*(short *)((t4 + 0x226))));
    nlRotateAZ((*(short *)((t4 + 0x22A))));
    nlGetAverageVector((t1 + 0x44), (t1 + 0x50), (((int)stk + 4) + 0xC), 0.5f, 0.5f);
    FUN_0c0db470((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    nlSubVector((((int)stk + 4) + 0xC), ((*(int *)(((int)stk + 12))) + 0x254));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    *(unsigned short *)((a4 + 0x3C)) = ((*(int *)(((int)stk + 4))) - (*(short *)((t4 + 0x226))));
    *(unsigned short *)((a4 + 0x3E)) = ((*(int *)(((int)stk + 8))) - (*(short *)((t4 + 0x228))));
    if ((int)(*(short *)((a4 + 0x3C))) > (int)0xAAA) {
        *(unsigned short *)((a4 + 0x3C)) = 0xAAA;
    } else {
        if ((int)(*(short *)((a4 + 0x3C))) < (int)0xFFFFF556) {
            *(unsigned short *)((a4 + 0x3C)) = 0xFFFFF556;
        }
    }
    if ((int)(*(short *)((a4 + 0x3E))) > (int)0x1555) {
        *(unsigned short *)((a4 + 0x3E)) = 0x1555;
    } else {
        if ((int)(*(short *)((a4 + 0x3E))) < (int)0xFFFFEAAB) {
            *(unsigned short *)((a4 + 0x3E)) = 0xFFFFEAAB;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c06bde0(int a4)
{
    int stk[5];
    register int t6;
    register int t18;
    register int t27;
    register int t38;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c06b430(a4);
    }
    t6 = *(int *)0xC23ED9C;
    if (((int)t6 >= (int)0x17) && ((int)t6 <= (int)0x18)) {
        mwPlySetLpFlg(a4);
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x0;
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
        *(unsigned int *)((a4 + 0x0)) = 0xC06BD34;
    }
    if ((*(int *)((a4 + 0x1BC))) != 0) {
        if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
            t18 = *(int *)((a4 + 0x1C4));
            *(unsigned int *)(((t18 << 2) + 0xC247584)) = ((*(int *)(((t18 << 2) + 0xC247584))) + 0x7D0);
        }
        FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        t27 = FUN_0c0e19aa(0xC05EB64, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t27);
        *(unsigned int *)((t27 + 0xBC)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t27 + 0x200)) = 0xF;
        *(unsigned int *)((t27 + 0x1EC)) = 0x0;
        *(unsigned int *)((t27 + 0x1F4)) = 0x3C;
        *(unsigned int *)((t27 + 0x204)) = 0x3E8;
        *(float *)((t27 + 0x1E4)) = 10.0f;
        *(unsigned int *)((t27 + 0x1F8)) = 0x19;
        *(unsigned int *)((t27 + 0x22C)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t27 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t27 + 0x3C)) = *(struct mv3 *)((t27 + 0x30)); }
        FUN_0c06b430(a4);
    }
    FUN_0c06bc74(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t38 = *(int *)((a4 + 0xBC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((t38 << 1) + t38) << 2) << 2) << 2) + 0xC23F268)) = *(struct mv3 *)((a4 + 0x30)); }
    return FUN_0c01cdf2(a4);
}


int FUN_0c061708(int a4, int a5)
{
    int stk[9];
    register int t1;
    register int t10;
    register int t24;
    register int t25;
    register int t14;

    t1 = FUN_0c0e19aa(0xC061822, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)(*(int *)((a4 + 0xBC))));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    t24 = *(int *)((a4 + 0xBC));
    t25 = *(int *)((t1 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t25 << 1) + t25) << 2))); }
    *(unsigned short *)((t1 + 0x6E)) = (*(short *)((a4 + 0x6E)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)((t1 + 0x220)) = 0x4F;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = 0x0;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = (*(short *)((t1 + 0x6E)));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = 0x0;
    FUN_0c0a6780(((int)stk + 4), (t1 + 0x48), 0.0f, 0.0f, (-1.0f));
    *(unsigned short *)((t1 + 0x6C)) = (*(int *)((((int)stk + 4) + 0x0)));
    return 0x6C;
}

int FUN_0c07bb4c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(int *)0xC23EE54;
    FUN_0c0685a4(a4, a5, a6, a7);
    if (t0 != 0) {
        *(float *)((a4 + 0x54)) = ((*(float *)((t0 + 0x40))) * 0.00999999978f);
    }
    t1 = 0x0;
    for (;;) {
        nlPushMatrix(0x0);
        nlRotateAY(t1);
        FUN_0c0dcc70(0.0f, -7.0f, 24.0f);
        u0 = *(float *)(((0x40 + t0) + 0x0));
        t2 = *(short *)((a4 + 0x44));
        *(unsigned short *)((a4 + 0x44)) = (t2 + (int)(u0 * 512.0f));
        nlRotateAX((short)(t2 + (int)(u0 * 512.0f)));
        FUN_0c0c465c((*(short *)((a4 + 0x4C))));
        nlPopMatrix(0x1);
        t1 = (t1 + 0x4000);
        if ((int)t1 >= (int)0x10000) {
            break;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0c475c((*(short *)((a4 + 0x4A))), 0.299999982f);
    nlRotateAY(0x3FFF);
    FUN_0c0c475c((*(short *)((a4 + 0x4A))), 0.299999982f);
    nlRotateAY(0x3FFF);
    FUN_0c0c475c((*(short *)((a4 + 0x4A))), 0.299999982f);
    nlRotateAY(0x3FFF);
    FUN_0c0c475c((*(short *)((a4 + 0x4A))), 0.299999982f);
    nlPopMatrix(0x1);
    u0 = *(float *)(((0x54 + a4) + 0x0));
    u1 = *(float *)((a4 + 0x50));
    *(float *)((a4 + 0x50)) = (u1 + u0);
    if ((-1.0f) > (u1 + u0)) {
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 1.0f);
    } else {
        if ((*(float *)((a4 + 0x50))) > 0.0f) {
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - 1.0f);
        }
    }
    return FUN_0c0be548((a4 + 0x30), 0.0f, (*(float *)((a4 + 0x50))));
}

int FUN_0c0b78ea(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                    } else {
                        t0 = *(int *)((a4 + 0xA0));
                        *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                        if ((int)(t0 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        }
                    }
                } else {
                    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.00374999968f);
                    t0 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                    if ((int)(t0 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0xA0)) = 0x3C;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    }
                }
            } else {
                t0 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    *(unsigned int *)((a4 + 0xA0)) = 0xF0;
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                }
            }
        } else {
            *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.00333333295f);
            t0 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                *(unsigned int *)((a4 + 0xA0)) = 0x1E0;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            }
        }
    } else {
        *(float *)((a4 + 0x90)) = 0.0f;
        *(unsigned int *)((a4 + 0xA0)) = 0x1E;
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.00333333295f);
        t0 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            *(unsigned int *)((a4 + 0xA0)) = 0x1E0;
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    u0 = *(float *)((a4 + 0x90));
    return FUN_0c084b0a(u0, u0, u0);
}

int FUN_0c04cf44(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) == 0) {
        return t0;
    }
    FUN_0c053ac4(a4);
    if (((*(int *)((a4 + 0x2EC))) & 0x100) != 0) {
        t0 = *(int *)(((0x2A0 + a4) + 0x0));
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(short *)(((0xC0F85D8 + (t0 << 1)) + 0x0))));
        *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) & 0xFFFFFBFF);
        *(unsigned int *)((a4 + 0x2D4)) = 0x0;
        if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + 0.00999999978f);
        }
        if ((int)(*(int *)((0xC247594 + ((*(int *)((a4 + 0xBC))) << 2)))) > 0) {
            *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
            return FUN_0c04e9da(a4);
        }
        return FUN_0c050f1c(a4, 0x0, (0xC0F85D8 + (t0 << 1)), 0xC247594);
    }
    if ((int)(*(int *)((0xC247594 + ((*(int *)((a4 + 0xBC))) << 2)))) <= 0) {
        *(unsigned int *)((0xC247594 + ((*(int *)((a4 + 0xBC))) << 2))) = 0x1;
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)))) == 5) {
            *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
        }
    }
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + ((*(short *)(((0xC0F85D8 + ((*(int *)(((0x2A0 + a4) + 0x0))) << 1)) + 0x0))) - 32768));
    if ((*(int *)0xC23EDAC) == 1) {
        *(unsigned int *)((a4 + 0x1EC)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x1EC)) = 0xF;
    }
    if ((*(float *)((a4 + 0xB4))) > (*(float *)((a4 + 0x34)))) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0xB4))) + 0.00999999978f);
    }
    return FUN_0c049b80(a4);
}

int FUN_0c05c3b4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05C4CA, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t1 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t1 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t0 + 0x1EC)) = t1;
    *(unsigned int *)(((0x1E8 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t0 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t0 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t0) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    t1 = *(int *)((a4 + 0xBC));
    t2 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    *(unsigned int *)((t0 + 0xD0)) = (*(int *)((a4 + 0x350)));
    return 0xD0;
}

int FUN_0c06782a(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t30;
    register int t19;
    register int t20;
    register int t27;
    register int t24;
    register int t4;

    t0 = *(int *)0xC23ED5C;
    if ((t0 & 0x10020) != 0) {
        t1 = t0;
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)((((t2 << 2) + 0xC247030) + 0x0));
            if (((t3 == 4) || (t3 == 3)) && (t4 = *(int *)((a4 + 0x68)), t1 = t4, (((int)0x1 << (int)t2) & t1) != 0)) {
                *(unsigned short *)(((*(int *)((((t2 << 2) + 0xC246FF0) + 0x0))) + 0x454)) = 0x0;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0xC) {
                break;
            }
        }
        return FUN_0c0e19f2(a4, 0xC246FF0, t2, 0xC);
    }
    t9 = t0;
    t10 = 0x10020;
    t11 = 0x0;
    for (;;) {
        t12 = *(int *)(((0xC247030 + (t11 << 2)) + 0x0));
        t30 = t12;
        if ((t12 == 4) || (t12 == 3)) {
            t10 = 0xC246FF0;
            t19 = *(int *)((((t11 << 2) + t10) + 0x0));
            t20 = *(short *)((t19 + 0x454));
            t27 = (unsigned short)t20;
            if ((unsigned short)t20 != 2) {
                t9 = (*(int *)((t19 + 0x328)));
                t24 = 0x328;
                if ((int)t9 <= 0) {
                    t9 = (*(int *)((a4 + 0x68)));
                    t9 = (t9 | ((int)0x1 << (int)t11));
                    *(unsigned int *)((a4 + 0x68)) = t9;
                    *(unsigned short *)((t19 + 0x454)) = 0x2;
                    t24 = 0x454;
                }
                t27 = t24;
            }
            t30 = t27;
        }
        t11 = (t11 + 0x1);
        if ((int)t11 >= (int)0xC) {
            break;
        }
    }
    return t30;
}

int FUN_0c0af312(void)
{
    int stk[15];
    register int t2;
    register int t4;
    register float u8;
    register float u10;
    register float u12;
    register float u14;
    register float u16;
    register int t19;
    register int t23;

    *(unsigned int *)(((int)stk + 4)) = 0x1E;
    FUN_0c086b96(0xC10FDA8);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0xC10FD9C;
    t2 = 0x0;
    for (;;) {
        t4 = FUN_0c0e19aa(0xC0AF484, 0x64, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        u8 = 0.299999982f;
        u8 = u8 + 1.83111042e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t4 + 0x40)) = u8;
        u10 = 0.5f;
        u10 = u10 + 4.57777642e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t4 + 0x54)) = u10;
        u12 = 0.299999982f;
        u12 = u12 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t4 + 0x48)) = u12;
        u14 = 0.299999982f;
        u14 = u14 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t4 + 0x4C)) = u14;
        u16 = 0.299999982f;
        u16 = u16 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t4 + 0x50)) = u16;
        nlUnitMatrix();
        nlRotateAZ(t2);
        t19 = FUN_0c0da2e0();
        nlRotateAX(((t19 & 0x1FFF) + 0x38E));
        FUN_0c0db4d0((t4 + 0x3C), (t4 + 0x3C));
        t23 = *(int *)(((int)stk + 4));
        t2 = (t2 + ((unsigned char)(FUN_0c0da2e0()) + 0x888));
        *(unsigned int *)(((int)stk + 4)) = (t23 - 1);
        if ((t23 - 1) == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0b9de0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    FUN_0c0ce88e();
    t2 = FUN_0c016200();
    if (t2 == 0) {
        *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    } else {
        for (;;) {
            FUN_0c015d04(t2);
            if ((*(int *)0xC23EB34) == 9) {
                break;
            }
        }
        t2 = 0x0;
        if ((unsigned int)0xC1EF2E0 < (unsigned int)0xC1EF2EF) {
            t3 = 0xC1EF2E0;
            t4 = 0x0;
            for (;;) {
                t5 = *(signed char *)((t3 + 0x0));
                t3 = (t3 + 0x1);
                t4 = (t4 + t5);
                if ((unsigned int)t3 >= (unsigned int)0xC1EF2EF) {
                    break;
                }
            }
            t2 = t4;
        }
        FUN_0c015436((*(int *)0xC23EB38), 0x0);
        if (((int)t2 > 0) && ((t0 = *(int *)0xC204998, t0 == 1) && (t1 = *(int *)0xC23EB24, (int)t1 >= 0))) {
            *(unsigned int *)0xC23A180 = 0x2;
            *(unsigned int *)0xC23ED50 = 0x1;
            *(unsigned int *)0xC23A184 = 0x1;
            *(unsigned int *)0xC23ED44 = 0x1;
            *(unsigned int *)0xC23ED48 = 0x0;
            *(unsigned int *)0xC23A190 = 0x0;
            *(unsigned int *)0xC23EABC = 0xF;
        } else {
            *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
        }
        FUN_0c0154a4();
    }
    return FUN_0c016296();
}



int FUN_0c05ea18(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((((*(int *)((a4 + 0x350))) << 2) + 0xC2475D4));
    t1 = 0x348;
    if ((*(int *)((a4 + 0x348))) != 0) {
        t2 = *(int *)((t0 + 0x21C));
        *(unsigned int *)((t0 + 0x21C)) = (t2 - 1);
        t0 = 0x21C;
        if ((int)t2 > 0) {
            t2 = FUN_0c0e19aa(0xC05EB64, 0x2BC, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t2);
            *(unsigned int *)((t2 + 0xBC)) = (*(int *)((a4 + 0xBC)));
            *(unsigned int *)(((0x200 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
            t3 = 0x0;
            if ((*(signed char *)((a5 + 0x4))) != 0) {
                t3 = (*(int *)((a4 + 0x1EC)));
            }
            *(unsigned int *)((t2 + 0x1EC)) = t3;
            *(unsigned int *)(((0x1E8 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
            *(unsigned int *)(((0x1F4 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
            *(unsigned int *)(((0x204 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
            *(float *)((t2 + 0x1E4)) = (*(float *)((a5 + 0xC)));
            *(unsigned int *)(((0x1FC + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
            *(unsigned int *)((t2 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
            *(unsigned int *)((t2 + 0x22C)) = 0x46;
            t3 = *(int *)((a4 + 0xBC));
            t4 = *(int *)((t2 + 0x1E8));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + (((t4 << 1) + t4) << 2))); }
            *(unsigned short *)((t2 + 0x6E)) = (*(short *)((a4 + 0x6E)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x3C)) = *(struct mv3 *)((t2 + 0x30)); }
            *(unsigned int *)((t2 + 0x220)) = 0x1263;
            FUN_0c0a6800((*(short *)((t2 + 0x6E))), (t2 + 0x60), 0.0f, 0.0f, (-1.0f));
            *(float *)((t2 + 0x64)) = 1.0f;
            t0 = 0x64;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0ab3a8(int a4)
{
    int stk[4];
    register float t3;
    register float u4;
    register int t5;
    register float u12;

    if ((*(int *)((a4 + 0x30))) != 0) {
        
        u12 = 0.0f;
    } else {
        t3 = FUN_0c0d9e90((*(int *)((a4 + 0x38))));
        u4 = *(float *)0xC0AB518;
        t5 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t5 + 0x111);
        if ((int)(t5 + 0x111) >= (int)0x3FFF) {
            *(unsigned int *)((a4 + 0x38)) = 0x3FFF;
        }
        u12 = (t3 * u4);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)0xC10E1F8), ((*(float *)0xC10E1FC) - u12), (*(float *)0xC10E200));
    FUN_0c0c465c(0xD77);
    FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
    FUN_0c0dcc70((*(float *)0xC10E204), ((*(float *)0xC10E208) + u12), (*(float *)0xC10E20C));
    nlRotateAZ(0x7FFF);
    FUN_0c0c465c(0xD77);
    return nlPopMatrix(0x1);
}

int FUN_0c0697b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        *(unsigned int *)0xC247C38 = 0x0;
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c0848bc(1.0f, (*(float *)0xC0698F0), (*(float *)0xC0698EC));
    u0 = *(float *)0xC0698F8;
    u1 = *(float *)0xC0698FC;
    u2 = *(float *)0xC069904;
    t1 = 0xC069904;
    t2 = 0x0;
    t3 = (a4 + 0x34);
    for (;;) {
        if ((*(int *)((t3 + 0x18))) != 0) {
            t1 = 0x10;
            *(float *)((t3 + t1)) = ((*(float *)((t3 + t1))) + u1);
            t1 = (nlAddVector(t3, (t3 + 0xC)));
            t1 = (nlPushMatrix(0x0));
            t1 = (FUN_0c0dcca0(t3));
            t1 = 0x3CE;
            t1 = (nlRotateAY((*(short *)((t0 + t1)))));
            t1 = 0x3CC;
            t1 = (nlRotateAX((*(short *)((t0 + t1)))));
            t1 = 0xC06991C;
            u3 = *(float *)((t1 + 0x0));
            t1 = 0x10;
            t1 = (nlRotateAZ((int)(-((*(float *)((t3 + t1))) * u3))));
            t1 = 0x14;
            t1 = (nlScale(((*(float *)((t3 + t1))) * u2), u0, 1.0f));
            t1 = (nlRotateAZ((t2 * 0x3769)));
            t1 = 0x14;
            u3 = *(float *)((t3 + t1));
            u4 = (u3 * u2);
            if (1.0f > (u3 * u2)) {
                u4 = 1.0f;
            }
            t1 = (FUN_0c0de000(u4));
            t1 = (FUN_0c0c465c(0x292));
            t1 = (nlPopMatrix(0x1));
            *(unsigned int *)((t3 + 0x18)) = ((*(int *)((t3 + 0x18))) - 1);
        }
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x1C);
        if ((int)t2 >= (int)0x480) {
            break;
        }
    }
    return FUN_0c0849da();
}

int FUN_0c03a998(int a4)
{
    register int t2;
    register int t7;
    register int t26;
    register int t31;
    register int t17;
    int t18;

    FUN_0c0353e4(a4);
    FUN_0c035402(a4);
    t2 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((((*(int *)(((0x2A0 + a4) + 0x0))) & 0x1) << 1) + (0x130 + (*(int *)((((((t2 << 2) + t2) << 2) + 0xC1F8E3C) + 0x10))))) + 0x0)));
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t7 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)((a4 + 0x5B8)) = (unsigned short)(*(short *)((((((*(int *)(((0x2A0 + a4) + 0x0))) & 0x1) << 1) + (0x11E + (*(int *)((((((t7 << 2) + t7) << 2) + 0xC1F8E3C) + 0x10))))) + 0x0)));
    }
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x800;
    *(unsigned int *)((a4 + 0x210)) = 0xB;
    *(unsigned int *)((a4 + 0x4C4)) = 0x4;
    *(unsigned int *)((a4 + 0x4C8)) = 0x6;
    *(unsigned int *)((a4 + 0x4CC)) = 0x1;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    if (((*(int *)((a4 + 0x578))) == 6) && ((t17 = *(int *)((a4 + 0x304)), (int)t17 <= 0) && (t18 = *(int *)((a4 + 0xC8)), (0x4 & t18) != 0))) {
        FUN_0c039e96(a4);
    }
    t26 = *(int *)((a4 + 0x578));
    if (t26 == 9) {
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            t31 = *(int *)((a4 + 0xC8));
            if ((t31 & 4) != 0) {
                return FUN_0c03a112(a4);
            }
            return t31;
        }
        return 0x304;
    }
    return t26;
}

int FUN_0c069480(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t0 - 0x100);
    *(unsigned int *)((a4 + 0x9C)) = (int)((FUN_0c0da410((t0 - 0x100))) * 640.0f);
    if ((*(int *)((a4 + 0x80))) == 0) {
        *(unsigned int *)((a4 + 0xA0)) = ((*(int *)((a4 + 0xA0))) - (*(int *)(((0x9C + a4) + 0x0))));
        if ((int)(*(int *)((a4 + 0xA0))) <= 0) {
            *(unsigned int *)((a4 + 0xA0)) = (-(*(int *)((a4 + 0xA0))));
            *(unsigned int *)((a4 + 0x80)) = 0x1;
        }
    } else {
        *(unsigned int *)((a4 + 0xA0)) = ((*(int *)((a4 + 0xA0))) + (*(int *)(((0x9C + a4) + 0x0))));
    }
    if ((int)(*(int *)((a4 + 0x9C))) <= (int)0x8) {
        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) - (*(int *)(((0xA0 + a4) + 0x0))));
        *(unsigned int *)((a4 + 0x0)) = 0xC069448;
        return FUN_0c069448(a4);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY(((*(short *)((a4 + 0x62))) - (*(int *)((a4 + 0xA0)))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return nlPopMatrix(0x1);
}

int FUN_0c093490(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t1 = *(short *)((a5 + 0x6));
    t2 = *(int *)((a4 + 0xC4));
    t3 = *(int *)((((((unsigned short)t1 << 2) << 1) + 0xC10B954) + 0x4));
    t4 = *(signed char *)((((((unsigned short)t1 << 2) << 1) + 0xC10B954) + 0x1));
    if ((*(int *)(((0xC0 + a4) + 0x0))) == (unsigned char)t4) {
        t5 = *(short *)((((t2 << 1) + t3) + 0x0));
        if (t5 != -1) {
            t6 = FUN_0c0e19aa(0xC093524, 0xB4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t6);
            *(unsigned int *)((t6 + 0x80)) = (unsigned char)(*(signed char *)((((((unsigned short)t1 << 2) << 1) + 0xC10B954) + 0x0)));
            *(unsigned int *)(((0xA0 + t6) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x2)));
            *(unsigned int *)(((0xA4 + t6) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x4)));
            *(unsigned int *)((t6 + 0x8C)) = ((t2 << 1) + t3);
            *(unsigned int *)((t6 + 0x88)) = (*(int *)((a4 + 0xBC)));
            t1 = *(int *)((((*(int *)((t6 + 0x88))) << 2) + 0xC246FF0));
            t2 = 0xC246FF0;
            if (t1 != 0) {
                t3 = 0xA0;
                if ((int)(*(int *)((t6 + 0xA0))) <= (int)(*(int *)((t1 + 0x2B4)))) {
                    t7 = *(int *)((t6 + 0x88));
                    t8 = *(int *)((t6 + 0x80));
                    if (((*(short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x4))) == 0) && (t0 = *(short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x6)), t0 == 0)) {
                        *(unsigned short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x4)) = (*(int *)(((0x404 + t1) + ((*(int *)((t6 + 0x80))) << 2))));
                    }
                    *(unsigned short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x6))) + 0x1);
                    *(unsigned int *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x0)) = (*(int *)((t6 + 0x8)));
                    *(unsigned int *)(((((*(int *)((t6 + 0x80))) << 2) + (0x404 + t1)) + 0x0)) = (*(short *)(((*(int *)((t6 + 0x8C))) + 0x0)));
                    *(unsigned int *)((t6 + 0x0)) = 0xC0935CC;
                    t3 = 0x8C;
                }
                t2 = t3;
            }
            return t2;
        }
        return t5;
    }
    return (unsigned char)t4;
}

int FUN_0c04f414(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x3B0));
    *(unsigned int *)((a4 + 0x3B0)) = (t0 - 1);
    if ((int)(t0 - 1) >= 0) {
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
    }
    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        if ((*(int *)((0xC247030 + ((((*(int *)((a4 + 0xBC))) + 0x1) & 0x1) << 2)))) == 4) {
            t1 = *(int *)((0xC246FF0 + ((((*(int *)((a4 + 0xBC))) + 0x1) & 0x1) << 2)));
            *(unsigned int *)((t1 + 0x1B0)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x24C + t1)) = *(struct mv3 *)((a4 + 0x60)); }
            *(unsigned short *)((t1 + 0x6E)) = (*(short *)((a4 + 0x6E)));
            FUN_0c056098(t1, a5, a6);
        }
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x20C)) = 0x40000000;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x324)) = 0x0;
        *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x24C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((0x24C + a4)); }
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x80);
        *(unsigned int *)((a4 + 0x0)) = 0xC04F7C8;
        return FUN_0c054fb0(a4);
    }
    return t0;
}

int FUN_0c0b1da4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                        } else {
                            if ((int)(*(int *)((a4 + 0x58))) < (int)0x3C) {
                                *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) - 0.0166666657f);
                            }
                            t0 = *(int *)((a4 + 0x58));
                            *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
                            if ((int)(t0 - 1) <= 0) {
                                FUN_0c0e19f2(0x3C, a5, a6, a7);
                            }
                        }
                    } else {
                        *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) + 0.0166666657f);
                        t0 = *(int *)((a4 + 0x58));
                        *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
                        if ((int)(t0 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x58)) = 0xAA;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                        }
                    }
                } else {
                    t0 = *(int *)((a4 + 0x58));
                    *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
                    if ((int)(t0 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x58)) = 0x3C;
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    }
                }
            } else {
                if ((int)(*(int *)((a4 + 0x58))) < (int)0x1E) {
                    *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) - 0.0333333313f);
                }
                t0 = *(int *)((a4 + 0x58));
                *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    *(unsigned int *)((a4 + 0x58)) = 0x1E;
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
            }
        } else {
            *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + 0.0166666657f);
            t0 = *(int *)((a4 + 0x58));
            *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
            if ((int)(t0 - 1) > 0) {
            } else {
                *(unsigned int *)((a4 + 0x58)) = 0xAA;
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x58)) = 0x3C;
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + 0.0166666657f);
        t0 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
        if ((int)(t0 - 1) > 0) {
        } else {
            *(unsigned int *)((a4 + 0x58)) = 0xAA;
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
    }
    FUN_0c0b145c((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x78))));
    FUN_0c0b1542((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x78))));
    FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x1), (*(float *)((a4 + 0x78))));
    FUN_0c0b145c(((*(int *)((a4 + 0x60))) + 0x2), (*(float *)((a4 + 0x7C))));
    return FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x2), (*(float *)((a4 + 0x7C))));
}

int FUN_0c02c340(int a4)
{
    int stk[30];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F12;
    register float F13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_5 = a4;
    *(volatile int *)((v0_5 + 0x304));
    *(volatile int *)((v0_5 + 0x308));
    v0_0 = FUN_0c0e5dc0();
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 4) + 0x2C)) = *(struct mv11 *)(0xC0F5534); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 4)) = *(struct mv11 *)(0xC0F5560); }
    v0_3 = (v0_0);
    v0_4 = ((((int)stk + 4) + 0x2C));
    v0_0 = (0x0);
    v0_1 = (v0_5);
    if (((int)(*(int *)((v0_5 + 0x304))) > 0)) goto L_C02C392;
    v0_2 = (0x474);
    L_C02C43C:;
    *(unsigned int *)((v0_1 + v0_2)) = v0_0;
    L_C02C43E:;
    return v0_2;
    L_C02C392:;
    v0_6 = *(int *)((v0_1 + 0x4F8));
    v0_2 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 12)) goto L_C02C43E;
    v0_2 = (v0_5);
    if ((v0_5 == 13)) goto L_C02C43E;
    v0_2 = (0x20C);
    if ((((*(int *)((v0_1 + 0x20C))) & 0x80000) != 0)) goto L_C02C43E;
    v0_5 = *(int *)((v0_1 + 0x4C8));
    v0_2 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C43E;
    v0_5 = *(int *)((v0_1 + 0x4C8));
    v0_2 = (v0_5);
    if ((v0_5 == 2)) goto L_C02C43E;
    v0_6 = *(int *)((v0_1 + 0x560));
    v0_2 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 8)) goto L_C02C43E;
    v0_2 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C43E;
    v0_2 = !((float)(*(int *)((v0_1 + 0x310))) > ((*(float *)((v0_4 + (v0_3 << 2)))) + (float)((((int (*)(Stk11))(FUN_0c0da2e0))(*(Stk11 *)(((int)stk + 4)))) & 0x3)));
    if (v0_2) goto L_C02C40A;
    *(unsigned int *)((v0_1 + 0x4D0)) = v0_0;
    *(unsigned int *)((v0_1 + 0x4F8)) = 0xC;
    *(unsigned int *)((v0_1 + 0x568)) = (*(int *)((v0_1 + 0x310)));
    v0_2 = (0x310);
    goto L_C02C43C;
    L_C02C40A:;
    v0_5 = *(int *)((v0_1 + 0x564));
    w0_0 = *(float *)((v0_4 + (v0_3 << 2)));
    v0_3 = ((int (*)(void))(FUN_0c0da2e0))();
    v0_2 = ((v0_3 & 0x3));
    if ((!((float)v0_5 > (w0_0 + (float)(v0_3 & 0x3))))) goto L_C02C43E;
    *(unsigned int *)((v0_1 + 0x4D0)) = v0_0;
    *(unsigned int *)((v0_1 + 0x4F8)) = 0xC;
    *(unsigned int *)((v0_1 + 0x564)) = v0_0;
    v0_2 = (0x56C);
    goto L_C02C43C;
}

int FUN_0c07c004(int a4)
{
    int stk[15];
    register int t5;
    register int t6;
    register float u11;
    register int t15;
    register float u23;
    register float t25;
    register int t30;
    register int t31;
    register int t33;

    if (((*(int *)0xC23ED88) & 16) != 0) {
        *(unsigned int *)((a4 + 0x30)) = 0x80;
    }
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x18;
    FUN_0c0dcca0(0xC100DC0);
    t5 = ((a4 + 0x34) + 0x60);
    for (;;) {
        t5 = (t5 - 4);
        t6 = *(int *)((t5 + 0x0));
        nlPushMatrix(0x0);
        u11 = 10.6999998f;
        if ((int)t6 <= (int)0x3FFF) {
            u11 = (10.6999998f * (FUN_0c0da410(t6)));
        }
        FUN_0c0dcc70(0.0f, 0.0f, u11);
        FUN_0c0de000(1.0f);
        t15 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c0849da))(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
        FUN_0c0c465c(0x1220);
        FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC20093C));
        FUN_0c0de000(3.0f);
        nlScale(3.0f, 3.0f, 1.0f);
        u23 = 0.299999982f;
        if (((*(int *)0xC23A258) & 1) != 0) {
            u23 = (1.0f + 1.0f);
        }
        *(float *)(((int)stk + 4)) = u23;
        t25 = FUN_0c0da410(t6);
        FUN_0c0848bc((u23 * ((-t25) + 1.0f)), (u23 * ((-t25) + 1.0f)), (u23 * ((-t25) + 1.0f)));
        FUN_0c0c465c(0x295);
        nlPopMatrix(0x1);
        nlRotateAY(0xAAA);
        t30 = *(int *)((a4 + 0x30));
        t31 = (t6 - t30);
        if ((int)(t6 - t30) <= 0) {
            t31 = 0x0;
        }
        *(unsigned int *)((t5 + 0x0)) = t31;
        t33 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t33 - 1);
        if ((t33 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return ((int (*)(void))(FUN_0c0849da))();
}

int FUN_0c0b1a20(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            u0 = 0.0166666657f;
            if (t0 != 2) {
            } else {
                if ((int)(*(int *)((a4 + 0x58))) < (int)0x1E) {
                    *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) - 0.0333333313f);
                    *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) - 0.0333333313f);
                } else {
                    if (1.0f > (*(float *)((a4 + 0x7C)))) {
                        *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) + 0.0166666657f);
                    } else {
                        *(float *)((a4 + 0x7C)) = 1.0f;
                    }
                }
                t0 = *(int *)((a4 + 0x58));
                *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    FUN_0c0e19f2(a4, a5, a6, a7);
                } else {
                    u1 = 0.0166666657f;
                }
                u0 = u1;
            }
            u1 = u0;
        } else {
            *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + 0.0166666657f);
            t0 = *(int *)((a4 + 0x58));
            *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x58)) = 0x190;
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            }
            u1 = 0.0166666657f;
        }
        u0 = u1;
    } else {
        *(unsigned int *)((a4 + 0x58)) = 0x3C;
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + 0.0166666657f);
        t0 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x58)) = 0x190;
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
        u0 = 0.0166666657f;
    }
    t0 = ((int (*)(int, float, float))(FUN_0c0b145c))((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x78))), u0);
    FUN_0c0b1542((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x78))));
    FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x1), (*(float *)((a4 + 0x78))));
    FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x2), (*(float *)((a4 + 0x78))));
    t0 = ((int (*)(int, float))(FUN_0c0b145c))(((*(int *)((a4 + 0x60))) + 0x3), (*(float *)((a4 + 0x7C))));
    FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x3), (*(float *)((a4 + 0x7C))));
    FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x4), (*(float *)((a4 + 0x7C))));
    FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x5), (*(float *)((a4 + 0x7C))));
    return FUN_0c0b1542(((*(int *)((a4 + 0x60))) + 0x6), (*(float *)((a4 + 0x7C))));
}

