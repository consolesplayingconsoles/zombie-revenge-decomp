/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[11]; } Stk11;
int FUN_0c015436(int, int);
int FUN_0c0154a4(void);
int FUN_0c015d04(void);
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
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0ce88e(void);
float FUN_0c0d9e90(int);
extern int FUN_0c0da2e0();
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _divls(void);
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
int FUN_0c0b1da4(int);
int FUN_0c0c6894(int a4, int a5, int a6, int a7);
int FUN_0c064520(int a4, int a5, int a6, int a7);
int FUN_0c0952d0(int a4);
int FUN_0c06bde0(int a4);
int FUN_0c0b1a20(int);
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
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o226_short { char p[0x226]; short v; };
struct o228_short { char p[0x228]; short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o324_uint { char p[0x324]; unsigned int v; };
struct o328_int { char p[0x328]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o340_int { char p[0x340]; int v; };
struct o348_int { char p[0x348]; int v; };
struct o350_int { char p[0x350]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o454_short { char p[0x454]; short v; };
struct o454_ushort { char p[0x454]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4CC_uint { char p[0x4CC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o56_short { char p[0x56]; short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };
struct o578_int { char p[0x578]; int v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5A_ushort { char p[0x5A]; unsigned short v; };
struct o5B8_uint { char p[0x5B8]; unsigned int v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_float { char p[0x64]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o68_short { char p[0x68]; short v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_short { char p[0x6A]; short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_int { char p[0x70]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oE8_short { char p[0xE8]; short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };




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
    v0_3 = (((struct o68_short *)(v0_0))->v);
    v0_2 = ((unsigned short)v0_3);
    if (((unsigned short)v0_3 == 0)) goto L_C0C68CA;
    if ((v0_2 == 1)) goto L_C0C68E0;
    if ((v0_2 == 2)) goto L_C0C690C;
    if ((v0_2 == 3)) goto L_C0C6932;
    if (!((v0_2 == 4))) goto L_C0C6990;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + 0.399999976f);
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) - 0.449999988f);
    w0_0 = (((struct o44_float *)(v0_0))->v);
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    if ((w0_0 > 0.0f)) goto L_C0C6990;
    FUN_0c0e19f2();
    goto L_C0C6990;
    L_C0C6990:;
    v0_2 = (0x68);
    v0_1 = (0x1);
    if (((int)(unsigned short)((((struct o68_short *)(v0_0))->v)) < (int)0x1)) goto L_C0C69B0;
    if (((v0_1 & (*(int *)0xC23A258)) == 0)) goto L_C0C69B0;
    return FUN_0c0c0340((v0_0 + 0x30));
    L_C0C6932:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) - 0.179999992f);
    w0_0 = (((struct o44_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = (w0_0 + 0.299999982f);
    v0_1 = (((struct o6A_short *)(v0_0))->v);
    (((struct o6A_ushort *)(v0_0))->v) = (v0_1 - 1);
    w0_1 = ((w0_0 + 0.299999982f));
    if (((int)(unsigned short)(v0_1 - 1) > 0)) goto L_C0C6990;
    L_C0C695C:;
    (((struct o68_ushort *)(v0_0))->v) = (((((struct o68_short *)(v0_0))->v)) + 0x1);
    goto L_C0C6990;
    L_C0C690C:;
    if (((int)(*(int *)((((((struct o70_int *)(v0_0))->v)) + 0x0))) < (int)(unsigned short)((((struct o6E_short *)(v0_0))->v)))) goto L_C0C6990;
    (((struct o6A_ushort *)(v0_0))->v) = (((((struct o6A_short *)(v0_0))->v)) + 0x1);
    if (((int)(unsigned short)((((struct o6A_short *)(v0_0))->v)) <= (int)0x3)) goto L_C0C6990;
    goto L_C0C695C;
    L_C0C68E0:;
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + 0.149999991f);
    w0_0 = *(float *)0xC0C6A54;
    v0_2 = (0x44);
    F4 = (w0_0);
    if ((w0_0 > ((((struct o44_float *)(v0_0))->v)))) goto L_C0C6990;
    *(float *)((v0_0 + v0_2)) = F4;
    (((struct o68_ushort *)(v0_0))->v) = (((((struct o68_short *)(v0_0))->v)) + 0x1);
    (((struct o6A_ushort *)(v0_0))->v) = 0x0;
    goto L_C0C6990;
    L_C0C68CA:;
    v0_1 = (((struct o6A_short *)(v0_0))->v);
    (((struct o6A_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(unsigned short)(v0_1 - 1) > 0)) goto L_C0C6990;
    (((struct o44_float *)(v0_0))->v) = 0.0f;
    goto L_C0C695C;
}

int FUN_0c064520(int a4, int a5, int a6, int a7)
{
    register int t7;
    register float u24;
    register float u25;

    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        (((struct o22C_uint *)(a4))->v) = 0x5;
        *(unsigned int *)((a4 + 0x0)) = 0xC064482;
    } else {
        t7 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t7 - 1);
        if ((int)(t7 - 1) <= 0) {
            FUN_0c0e19f2();
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    u24 = *(float *)0xC064698;
    u25 = (((struct o1E4_float *)(a4))->v);
    if (((((struct oD8_int *)(a4))->v)) == 0) {
        FUN_0c01cdc2(a4);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    nlScale((u25 / u24), (u25 / u24), (u25 / u24));
    FUN_0c0de000((u25 / u24));
    FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
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
    t3 = (((struct o56_short *)(a4))->v);
    t4 = *(int *)((a4 + 0x1C));
    (((struct o56_ushort *)(a4))->v) = (t3 + 0x1);
    if ((int)(short)(t3 + 0x1) >= (int)0x3) {
        (((struct o56_ushort *)(a4))->v) = 0x0;
        t5 = (((struct o5A_short *)(a4))->v);
        (((struct o5A_ushort *)(a4))->v) = (t5 + 0x1);
        if ((int)(short)(t5 + 0x1) >= (int)(unsigned char)(*(signed char *)((t1 + 0x38)))) {
            (((struct o5A_ushort *)(a4))->v) = 0x0;
        }
    }
    (((struct o62_ushort *)(a4))->v) = (*(short *)(((((((struct o5A_short *)(a4))->v)) << 1) + (*(int *)((t1 + 0xC))))));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t4));
    nlRotateAY(((((struct o228_short *)(t4))->v)));
    nlRotateAX(((((struct o226_short *)(t4))->v)));
    nlRotateAZ(((((struct o22A_short *)(t4))->v)));
    nlGetAverageVector((t1 + 0x44), (t1 + 0x50), (((int)stk + 4) + 0xC), 0.5f, 0.5f);
    FUN_0c0db470((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    nlSubVector((((int)stk + 4) + 0xC), ((*(int *)(((int)stk + 12))) + 0x254));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    (((struct o3C_ushort *)(a4))->v) = ((*(int *)(((int)stk + 4))) - ((((struct o226_short *)(t4))->v)));
    (((struct o3E_ushort *)(a4))->v) = ((*(int *)(((int)stk + 8))) - ((((struct o228_short *)(t4))->v)));
    if ((int)((((struct o3C_short *)(a4))->v)) > (int)0xAAA) {
        (((struct o3C_ushort *)(a4))->v) = 0xAAA;
    } else {
        if ((int)((((struct o3C_short *)(a4))->v)) < (int)0xFFFFF556) {
            (((struct o3C_ushort *)(a4))->v) = 0xFFFFF556;
        }
    }
    if ((int)((((struct o3E_short *)(a4))->v)) > (int)0x1555) {
        (((struct o3E_ushort *)(a4))->v) = 0x1555;
    } else {
        if ((int)((((struct o3E_short *)(a4))->v)) < (int)0xFFFFEAAB) {
            (((struct o3E_ushort *)(a4))->v) = 0xFFFFEAAB;
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
        *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030) + 0x0)) = 0x0;
        *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0)) = 0x0;
        *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0)) = 0x0;
        *(unsigned int *)((a4 + 0x0)) = 0xC06BD34;
    }
    if (((((struct o1BC_int *)(a4))->v)) != 0) {
        if ((int)((((struct o1C4_int *)(a4))->v)) < (int)0x2) {
            t18 = (((struct o1C4_int *)(a4))->v);
            *(unsigned int *)(((t18 << 2) + 0xC247584)) = ((*(int *)(((t18 << 2) + 0xC247584))) + 0x7D0);
        }
        FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0);
        t27 = FUN_0c0e19aa(0xC05EB64, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t27);
        (((struct oBC_uint *)(t27))->v) = ((((struct oBC_int *)(a4))->v));
        (((struct o200_uint *)(t27))->v) = 0xF;
        (((struct o1EC_uint *)(t27))->v) = 0x0;
        (((struct o1F4_uint *)(t27))->v) = 0x3C;
        (((struct o204_uint *)(t27))->v) = 0x3E8;
        (((struct o1E4_float *)(t27))->v) = 10.0f;
        (((struct o1F8_uint *)(t27))->v) = 0x19;
        (((struct o22C_uint *)(t27))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t27 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t27 + 0x3C)) = *(struct mv3 *)((t27 + 0x30)); }
        FUN_0c06b430(a4);
    }
    FUN_0c06bc74(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t38 = (((struct oBC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((t38 << 1) + t38) << 2) << 2) << 2) + 0xC23F268)) = *(struct mv3 *)((a4 + 0x30)); }
    return FUN_0c01cdf2(a4);
}


int FUN_0c061708(int a4, int a5)
{
    int stk[9];
    register int t1;
    register int t24;
    register int t25;
    register int t14;

    t1 = FUN_0c0e19aa(0xC061822, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)((((struct oE8_short *)(a4))->v)) < (int)0x4) {
        t14 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t14 = ((((struct o1EC_int *)(a4))->v));
        }
    } else {
        t14 = ((int)0x1 << (int)((((struct oBC_int *)(a4))->v)));
    }
    (((struct o1EC_uint *)(t1))->v) = t14;
    (((struct o1E8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t1))->v) = (unsigned short)(*(short *)((a5 + 0x8)));
    t24 = (((struct oBC_int *)(a4))->v);
    t25 = (((struct o1E8_int *)(t1))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t25 << 1) + t25) << 2))); }
    (((struct o6E_ushort *)(t1))->v) = ((((struct o6E_short *)(a4))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    (((struct o220_uint *)(t1))->v) = 0x4F;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = 0x0;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = ((((struct o6E_short *)(t1))->v));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = 0x0;
    FUN_0c0a6780(((int)stk + 4), (t1 + 0x48), 0.0f, 0.0f, (-1.0f));
    (((struct o6C_ushort *)(t1))->v) = (*(int *)((((int)stk + 4) + 0x0)));
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
        (((struct o54_float *)(a4))->v) = (((((struct o40_float *)(t0))->v)) * 0.00999999978f);
    }
    t1 = 0x0;
    for (;;) {
        nlPushMatrix(0x0);
        nlRotateAY(t1);
        FUN_0c0dcc70(0.0f, -7.0f, 24.0f);
        u0 = (((struct o40_float *)(t0))->v);
        t2 = (((struct o44_short *)(a4))->v);
        (((struct o44_ushort *)(a4))->v) = (t2 + (int)(u0 * 512.0f));
        nlRotateAX((short)(t2 + (int)(u0 * 512.0f)));
        FUN_0c0c465c(((((struct o4C_short *)(a4))->v)));
        nlPopMatrix(0x1);
        t1 = (t1 + 0x4000);
        if ((int)t1 >= (int)0x10000) {
            break;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0c475c(((((struct o4A_short *)(a4))->v)), 0.299999982f);
    nlRotateAY(0x3FFF);
    FUN_0c0c475c(((((struct o4A_short *)(a4))->v)), 0.299999982f);
    nlRotateAY(0x3FFF);
    FUN_0c0c475c(((((struct o4A_short *)(a4))->v)), 0.299999982f);
    nlRotateAY(0x3FFF);
    FUN_0c0c475c(((((struct o4A_short *)(a4))->v)), 0.299999982f);
    nlPopMatrix(0x1);
    u0 = (((struct o54_float *)(a4))->v);
    u1 = (((struct o50_float *)(a4))->v);
    (((struct o50_float *)(a4))->v) = (u1 + u0);
    if ((-1.0f) > (u1 + u0)) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 1.0f);
    } else {
        if (((((struct o50_float *)(a4))->v)) > 0.0f) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 1.0f);
        }
    }
    return FUN_0c0be548((a4 + 0x30), 0.0f, ((((struct o50_float *)(a4))->v)));
}

int FUN_0c0b78ea(int a4)
{
    register int t0;
    register float u0;

    t0 = (((struct o80_int *)(a4))->v);
    switch (t0) {
    case 0:
        (((struct o90_float *)(a4))->v) = 0.0f;
        (((struct oA0_uint *)(a4))->v) = 0x1E;
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) + 0.00333333295f);
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct oA0_uint *)(a4))->v) = 0x1E0;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    case 1:
        (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) + 0.00333333295f);
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct oA0_uint *)(a4))->v) = 0x1E0;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    case 2:
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct oA0_uint *)(a4))->v) = 0xF0;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    case 3:
        (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) + 0.00374999968f);
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct oA0_uint *)(a4))->v) = 0x3C;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    case 4:
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    }
    u0 = (((struct o90_float *)(a4))->v);
    return FUN_0c084b0a(u0, u0, u0);
}

int FUN_0c04cf44(int a4)
{
    register int t0;

    t0 = (((struct o2EC_int *)(a4))->v);
    if ((t0 & 12) == 0) {
        return t0;
    }
    FUN_0c053ac4(a4);
    if ((((((struct o2EC_int *)(a4))->v)) & 0x100) != 0) {
        t0 = (((struct o2A0_int *)(a4))->v);
        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + (*(short *)(((0xC0F85D8 + (t0 << 1)) + 0x0))));
        (((struct o39C_uint *)(a4))->v) = (((((struct o39C_int *)(a4))->v)) & 0xFFFFFBFF);
        (((struct o2D4_uint *)(a4))->v) = 0x0;
        if (((((struct oB4_float *)(a4))->v)) > ((((struct o34_float *)(a4))->v))) {
            (((struct o34_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.00999999978f);
        }
        if ((int)(*(int *)((0xC247594 + (((((struct oBC_int *)(a4))->v)) << 2)))) > 0) {
            (((struct o3AC_uint *)(a4))->v) = 0x3C;
            return FUN_0c04e9da(a4);
        }
        return FUN_0c050f1c(a4, 0x0, (0xC0F85D8 + (t0 << 1)), 0xC247594);
    }
    if ((int)(*(int *)((0xC247594 + (((((struct oBC_int *)(a4))->v)) << 2)))) <= 0) {
        *(unsigned int *)((0xC247594 + (((((struct oBC_int *)(a4))->v)) << 2))) = 0x1;
        if ((*(int *)((0xC247030 + (((((struct oBC_int *)(a4))->v)) << 2)))) == 5) {
            *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030) + 0x0)) = 0x4;
        }
    }
    (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + ((*(short *)(((0xC0F85D8 + (((((struct o2A0_int *)(a4))->v)) << 1)) + 0x0))) - 32768));
    if ((*(int *)0xC23EDAC) == 1) {
        (((struct o1EC_uint *)(a4))->v) = 0x0;
    } else {
        (((struct o1EC_uint *)(a4))->v) = 0xF;
    }
    if (((((struct oB4_float *)(a4))->v)) > ((((struct o34_float *)(a4))->v))) {
        (((struct o34_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.00999999978f);
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
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t1 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t1 = ((((struct o1EC_int *)(a4))->v));
    }
    (((struct o1EC_uint *)(t0))->v) = t1;
    (((struct o1E8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t0))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t0))->v) = (unsigned short)(*(short *)((a5 + 0x8)));
    t1 = (((struct oBC_int *)(a4))->v);
    t2 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    (((struct oD0_uint *)(t0))->v) = ((((struct o350_int *)(a4))->v));
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
    register int t4;

    t0 = *(int *)0xC23ED5C;
    if ((t0 & 0x10020) != 0) {
        t1 = t0;
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)((((t2 << 2) + 0xC247030) + 0x0));
            if (((t3 == 4) || (t3 == 3)) && (t4 = (((struct o68_int *)(a4))->v), t1 = t4, (((int)0x1 << (int)t2) & t1) != 0)) {
                (((struct o454_ushort *)((*(int *)((((t2 << 2) + 0xC246FF0) + 0x0)))))->v) = 0x0;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0xC) {
                break;
            }
        }
        return FUN_0c0e19f2();
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
            t20 = (((struct o454_short *)(t19))->v);
            t30 = (unsigned short)t20;
            if ((unsigned short)t20 != 2) {
                t9 = ((((struct o328_int *)(t19))->v));
                t30 = 0x328;
                if ((int)t9 <= 0) {
                    t9 = ((((struct o68_int *)(a4))->v));
                    t9 = (t9 | ((int)0x1 << (int)t11));
                    (((struct o68_uint *)(a4))->v) = t9;
                    (((struct o454_ushort *)(t19))->v) = 0x2;
                    t30 = 0x454;
                }
            }
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
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1004 = 0x1E;
    FUN_0c086b96(0xC10FDA8);
    nlPushMatrix(0x0);
    R1008 = 0xC10FD9C;
    t2 = 0x0;
    for (;;) {
        t4 = FUN_0c0e19aa(0xC0AF484, 0x64, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x30)) = *(struct mv3 *)((R1008)); }
        u8 = 0.299999982f;
        u8 = u8 + 1.83111042e-05f * (float)(FUN_0c0da2e0());
        (((struct o40_float *)(t4))->v) = u8;
        u10 = 0.5f;
        u10 = u10 + 4.57777642e-05f * (float)(FUN_0c0da2e0());
        (((struct o54_float *)(t4))->v) = u10;
        u12 = 0.299999982f;
        u12 = u12 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        (((struct o48_float *)(t4))->v) = u12;
        u14 = 0.299999982f;
        u14 = u14 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        (((struct o4C_float *)(t4))->v) = u14;
        u16 = 0.299999982f;
        u16 = u16 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        (((struct o50_float *)(t4))->v) = u16;
        nlUnitMatrix();
        nlRotateAZ(t2);
        t19 = FUN_0c0da2e0();
        nlRotateAX(((t19 & 0x1FFF) + 0x38E));
        FUN_0c0db4d0((t4 + 0x3C), (t4 + 0x3C));
        t23 = R1004;
        t2 = (t2 + ((unsigned char)(FUN_0c0da2e0()) + 0x888));
        R1004 = (t23 - 1);
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
        (((struct o4_uint *)0xC23A180)->v) = (((((struct o4_int *)0xC23A180)->v)) + 0x1);
    } else {
        for (;;) {
            FUN_0c015d04();
            if (((((struct o10_int *)0xC23EB24)->v)) == 9) {
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
        FUN_0c015436(((((struct o14_int *)0xC23EB24)->v)), 0x0);
        if (((int)t2 > 0) && ((t0 = *(int *)0xC204998, t0 == 1) && (t1 = (((struct o0_int *)0xC23EB24)->v), (int)t1 >= 0))) {
            (((struct o0_uint *)0xC23A180)->v) = 0x2;
            (((struct oC_uint *)0xC23ED44)->v) = 0x1;
            (((struct o4_uint *)0xC23A180)->v) = 0x1;
            (((struct o0_uint *)0xC23ED44)->v) = 0x1;
            (((struct o4_uint *)0xC23ED44)->v) = 0x0;
            (((struct o10_uint *)0xC23A180)->v) = 0x0;
            *(unsigned int *)0xC23EABC = 0xF;
        } else {
            (((struct o4_uint *)0xC23A180)->v) = (((((struct o4_int *)0xC23A180)->v)) + 0x1);
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

    t0 = *(int *)(((((((struct o350_int *)(a4))->v)) << 2) + 0xC2475D4));
    t1 = 0x348;
    if (((((struct o348_int *)(a4))->v)) != 0) {
        t2 = (((struct o21C_int *)(t0))->v);
        (((struct o21C_uint *)(t0))->v) = (t2 - 1);
        t0 = 0x21C;
        if ((int)t2 > 0) {
            t2 = FUN_0c0e19aa(0xC05EB64, 0x2BC, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t2);
            (((struct oBC_uint *)(t2))->v) = ((((struct oBC_int *)(a4))->v));
            (((struct o200_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
            t3 = 0x0;
            if ((*(signed char *)((a5 + 0x4))) != 0) {
                t3 = ((((struct o1EC_int *)(a4))->v));
            }
            (((struct o1EC_uint *)(t2))->v) = t3;
            (((struct o1E8_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
            (((struct o1F4_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
            (((struct o204_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
            (((struct o1E4_float *)(t2))->v) = ((((struct oC_float *)(a5))->v));
            (((struct o1FC_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
            (((struct o1F8_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
            (((struct o22C_uint *)(t2))->v) = 0x46;
            t3 = (((struct oBC_int *)(a4))->v);
            t4 = (((struct o1E8_int *)(t2))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + (((t4 << 1) + t4) << 2))); }
            (((struct o6E_ushort *)(t2))->v) = ((((struct o6E_short *)(a4))->v));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x3C)) = *(struct mv3 *)((t2 + 0x30)); }
            (((struct o220_uint *)(t2))->v) = 0x1263;
            FUN_0c0a6800(((((struct o6E_short *)(t2))->v)), (t2 + 0x60), 0.0f, 0.0f, (-1.0f));
            (((struct o64_float *)(t2))->v) = 1.0f;
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
    FUN_0c0dcc70(((((struct o0_float *)0xC10E1F8)->v)), (((((struct o4_float *)0xC10E1F8)->v)) - u12), ((((struct o8_float *)0xC10E1F8)->v)));
    FUN_0c0c465c(0xD77);
    FUN_0c0db800(0x0);
    FUN_0c0dcc70(((((struct oC_float *)0xC10E1F8)->v)), (((((struct o10_float *)0xC10E1F8)->v)) + u12), ((((struct o14_float *)0xC10E1F8)->v)));
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
        FUN_0c0e19f2();
    }
    FUN_0c0848bc(1.0f, ((((struct o4_float *)0xC0698EC)->v)), ((((struct o0_float *)0xC0698EC)->v)));
    u0 = (((struct oC_float *)0xC0698EC)->v);
    u1 = (((struct o10_float *)0xC0698EC)->v);
    u2 = (((struct o18_float *)0xC0698EC)->v);
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
    t2 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((((struct o2A0_int *)(a4))->v)) & 0x1) << 1) + (0x130 + (*(int *)((((((t2 << 2) + t2) << 2) + 0xC1F8E3C) + 0x10))))) + 0x0)));
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t7 = (((struct o4F0_int *)(a4))->v);
        (((struct o5B8_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((((struct o2A0_int *)(a4))->v)) & 0x1) << 1) + (0x11E + (*(int *)((((((t7 << 2) + t7) << 2) + 0xC1F8E3C) + 0x10))))) + 0x0)));
    }
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x800;
    (((struct o210_uint *)(a4))->v) = 0xB;
    (((struct o4C4_uint *)(a4))->v) = 0x4;
    (((struct o4C8_uint *)(a4))->v) = 0x6;
    (((struct o4CC_uint *)(a4))->v) = 0x1;
    (((struct o3B8_uint *)(a4))->v) = 0x0;
    if ((((((struct o578_int *)(a4))->v)) == 6) && ((t17 = (((struct o304_int *)(a4))->v), (int)t17 <= 0) && (t18 = (((struct oC8_int *)(a4))->v), (0x4 & t18) != 0))) {
        FUN_0c039e96(a4);
    }
    t26 = (((struct o578_int *)(a4))->v);
    if (t26 == 9) {
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            t31 = (((struct oC8_int *)(a4))->v);
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

    t0 = (((struct o98_int *)(a4))->v);
    (((struct o98_uint *)(a4))->v) = (t0 - 0x100);
    (((struct o9C_uint *)(a4))->v) = (int)((FUN_0c0da410((t0 - 0x100))) * 640.0f);
    if (((((struct o80_int *)(a4))->v)) == 0) {
        (((struct oA0_uint *)(a4))->v) = (((((struct oA0_int *)(a4))->v)) - ((((struct o9C_int *)(a4))->v)));
        if ((int)((((struct oA0_int *)(a4))->v)) <= 0) {
            (((struct oA0_uint *)(a4))->v) = (-((((struct oA0_int *)(a4))->v)));
            (((struct o80_uint *)(a4))->v) = 0x1;
        }
    } else {
        (((struct oA0_uint *)(a4))->v) = (((((struct oA0_int *)(a4))->v)) + ((((struct o9C_int *)(a4))->v)));
    }
    if ((int)((((struct o9C_int *)(a4))->v)) <= (int)0x8) {
        (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) - ((((struct oA0_int *)(a4))->v)));
        *(unsigned int *)((a4 + 0x0)) = 0xC069448;
        return FUN_0c069448(a4);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY((((((struct o62_short *)(a4))->v)) - ((((struct oA0_int *)(a4))->v))));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
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
    t2 = (((struct oC4_int *)(a4))->v);
    t3 = *(int *)((((((unsigned short)t1 << 2) << 1) + 0xC10B954) + 0x4));
    t4 = *(signed char *)((((((unsigned short)t1 << 2) << 1) + 0xC10B954) + 0x1));
    if (((((struct oC0_int *)(a4))->v)) == (unsigned char)t4) {
        t5 = *(short *)((((t2 << 1) + t3) + 0x0));
        if (t5 != -1) {
            t6 = FUN_0c0e19aa(0xC093524, 0xB4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t6);
            (((struct o80_uint *)(t6))->v) = (unsigned char)(*(signed char *)((((((unsigned short)t1 << 2) << 1) + 0xC10B954) + 0x0)));
            (((struct oA0_uint *)(t6))->v) = (unsigned short)(*(short *)((a5 + 0x2)));
            (((struct oA4_uint *)(t6))->v) = (unsigned short)(*(short *)((a5 + 0x4)));
            (((struct o8C_uint *)(t6))->v) = ((t2 << 1) + t3);
            (((struct o88_uint *)(t6))->v) = ((((struct oBC_int *)(a4))->v));
            t1 = *(int *)(((((((struct o88_int *)(t6))->v)) << 2) + 0xC246FF0));
            t2 = 0xC246FF0;
            if (t1 != 0) {
                t3 = 0xA0;
                if ((int)((((struct oA0_int *)(t6))->v)) <= (int)((((struct o2B4_int *)(t1))->v))) {
                    t7 = (((struct o88_int *)(t6))->v);
                    t8 = (((struct o80_int *)(t6))->v);
                    if (((*(short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x4))) == 0) && (t0 = *(short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x6)), t0 == 0)) {
                        *(unsigned short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x4)) = (*(int *)(((0x404 + t1) + (((((struct o80_int *)(t6))->v)) << 2))));
                    }
                    *(unsigned short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x6))) + 0x1);
                    *(unsigned int *)((((((((t7 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t8 << 2) << 1)) + 0x0)) = (*(int *)((t6 + 0x8)));
                    *(unsigned int *)((((((((struct o80_int *)(t6))->v)) << 2) + (0x404 + t1)) + 0x0)) = (*(short *)((((((struct o8C_int *)(t6))->v)) + 0x0)));
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

    t0 = (((struct o3B0_int *)(a4))->v);
    (((struct o3B0_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) >= 0) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o258_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o260_float *)(a4))->v)));
    }
    t0 = (((struct o2EC_int *)(a4))->v);
    if ((t0 & 12) != 0) {
        if ((*(int *)((0xC247030 + (((((((struct oBC_int *)(a4))->v)) + 0x1) & 0x1) << 2)))) == 4) {
            t1 = *(int *)((0xC246FF0 + (((((((struct oBC_int *)(a4))->v)) + 0x1) & 0x1) << 2)));
            (((struct o1B0_uint *)(t1))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x24C + t1)) = *(struct mv3 *)((a4 + 0x60)); }
            (((struct o6E_ushort *)(t1))->v) = ((((struct o6E_short *)(a4))->v));
            FUN_0c056098(t1, a5, a6);
        }
        (((struct o3B4_uint *)(a4))->v) = 0x0;
        (((struct o3B0_uint *)(a4))->v) = 0x0;
        (((struct o3AC_uint *)(a4))->v) = 0x0;
        (((struct o20C_uint *)(a4))->v) = 0x40000000;
        (((struct o210_uint *)(a4))->v) = 0x0;
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((struct o340_int *)(a4))->v)) << 1) + (0xC1FE210 + ((((((struct oC0_int *)(a4))->v)) >> 1) * 0x2C))) + 0x0)));
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o1B0_uint *)(a4))->v) = 0x0;
        (((struct o324_uint *)(a4))->v) = 0x0;
        (((struct oA4_uint *)(a4))->v) = 0xA7F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x24C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((0x24C + a4)); }
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x80);
        *(unsigned int *)((a4 + 0x0)) = 0xC04F7C8;
        return FUN_0c054fb0(a4);
    }
    return t0;
}





