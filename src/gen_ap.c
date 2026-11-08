/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010f3a(void);
int FUN_0c0141d4(int, int);
int FUN_0c014fae(int, float);
int FUN_0c01536e(int, int, int, int);
int FUN_0c015436(int, int);
int FUN_0c0154a4(void);
int FUN_0c0154c0(int, int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c051a48(int);
int FUN_0c053d60(int, int);
int FUN_0c0553b6(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c08b2d0(int, int);
int FUN_0c08b454(int, int);
int FUN_0c08bd50(int, int);
int FUN_0c0a77fe(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cead0(int);
int FUN_0c0cebc4(int, int, int, int, int);
int FUN_0c0cec76(int, int);
int FUN_0c0cec9a(int);
int FUN_0c0d7f60(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlSetTextureParameter(int, int);
int nlCreateTextureParam(int);
int FUN_0c0d85c0(int);
int FUN_0c0d8730(int, int);
int FUN_0c0d8800(int, int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int nlSetPaletteData(int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlScaleUnitVector(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector3op(int, int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e20e6(int, int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int _quick_odd_mvn(int, int, int, int, float, float);
int FUN_0c0e631c(int, int, int, int);
int FUN_0c0eca30(void);
int buDefragDisk(int, int);
int buGetLastError(int);
int buStat(int);
int FUN_0c0156ea(int a4, int a5, int a6, int a7);
int FUN_0c068da8(int a4, int a5, int a6, int a7);
void FUN_0c07f5dc(int a4);
int FUN_0c0129b6(int a4, int a5, int a6, int a7, float f4);
int FUN_0c01430e(int a4, int a5, int a6);
int FUN_0c04c62c(int a4, int a5);
void FUN_0c06d6e4(int a4, int a5, int a6, int a7);
int FUN_0c0a1e7e(int a4, int a5, int a6, int a7);
int FUN_0c0deaa0(int a4, int a5, int a6, int a7);
int FUN_0c07f340(int a4);
int FUN_0c01132c(int a4);
struct o14_float { char p[0x14]; float v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1CC_int { char p[0x1CC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o250_int { char p[0x250]; int v; };
struct o278_float { char p[0x278]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o29C_float { char p[0x29C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o300_uint { char p[0x300]; unsigned int v; };
struct o304_int { char p[0x304]; int v; };
struct o330_int { char p[0x330]; int v; };
struct o338_float { char p[0x338]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o340_float { char p[0x340]; float v; };
struct o368_float { char p[0x368]; float v; };
struct o374_uint { char p[0x374]; unsigned int v; };
struct o378_int { char p[0x378]; int v; };
struct o394_int { char p[0x394]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_int { char p[0x3D8]; int v; };
struct o3D8_uint { char p[0x3D8]; unsigned int v; };
struct o3DC_int { char p[0x3DC]; int v; };
struct o3DC_uint { char p[0x3DC]; unsigned int v; };
struct o3E0_int { char p[0x3E0]; int v; };
struct o3E0_uint { char p[0x3E0]; unsigned int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3E4_uint { char p[0x3E4]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c0156ea(int a4, int a5, int a6, int a7)
{
    int t9;
    int t22;
    int t31;
    int t35;
    int t39;
    int t54;
    int t61;
    int t72;
    int t83;
    int t102;
    int stk[38];

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
    float F4;
    float F5;
    float F6;
    int T_;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0156EA:;
    R1008 = R5;
    R1012 = R6;
    R10 = (0x1);
    R11 = (R7);
    R13 = (R4);
    if (((*(int *)0xC23EABC) == 6)) goto L_C015716;
    goto L_C01570E;
    L_C01570E:;
    if (((*(int *)0xC23ED50) == 1)) goto L_C015758;
    goto L_C015716;
    L_C015716:;
    R9 = (0x0);
    goto L_C01575A;
    L_C01575A:;
    R1020 = (FUN_0c0cead0(R13));
    R1016 = (R11 * 0xD);
    t9 = (((struct o4_int *)0xC23EB18)->v);
    R0 = (t9);
    R12 = (0xC23EB14);
    R14 = (0xC23EB1C);
    R4 = (0xC23A25C);
    R8 = (0xC0E2A4C);
    if ((t9 == 0)) goto L_C0157B4;
    goto L_C015778;
    L_C015778:;
    if ((R0 == 1)) goto L_C0157E2;
    goto L_C01577C;
    L_C01577C:;
    if ((R0 == 2)) goto L_C015824;
    goto L_C015780;
    L_C015780:;
    if ((R0 != 3)) goto L_C015788;
    goto L_C015784;
    L_C015784:;
    goto L_C0158CC;
    L_C0158CC:;
    *(unsigned int *)((R4 + 0x0)) = R10;
    if ((R9 == 0)) goto L_C0158EC;
    goto L_C0158D2;
    L_C0158D2:;
    t22 = (*(int *)0xC2498F4) != 0;
    R0 = ((FUN_0c0c465c(0x13ED)));
    if (t22) goto L_C0158EC;
    goto L_C0158E2;
    L_C0158E2:;
    R0 = (0x50);
    if (((*(int *)(((R1020) + 0x50))) != 0)) goto L_C01598E;
    goto L_C0158EC;
    L_C0158EC:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    goto L_C01598E;
    L_C01598E:;
    return R0;
    L_C015788:;
    if ((R0 != 4)) goto L_C015790;
    goto L_C01578C;
    L_C01578C:;
    goto L_C015924;
    L_C015924:;
    *(unsigned int *)((R4 + 0x0)) = R10;
    *(unsigned int *)((R14 + 0x0)) = 0x9;
    goto L_C01598E;
    L_C015790:;
    if ((R0 != 5)) goto L_C015798;
    goto L_C015794;
    L_C015794:;
    goto L_C01592C;
    L_C01592C:;
    t31 = buStat(R13);
    R0 = (t31);
    if ((t31 != 0)) goto L_C01598E;
    goto L_C015936;
    L_C015936:;
    *(unsigned int *)((R14 + 0x0)) = 0x0;
    goto L_C01598E;
    L_C015798:;
    if ((R0 != 6)) goto L_C0157A0;
    goto L_C01579C;
    L_C01579C:;
    goto L_C01593C;
    L_C01593C:;
    t35 = buStat(R13);
    R0 = (t35);
    if ((t35 != 0)) goto L_C01598E;
    goto L_C015946;
    L_C015946:;
    t39 = FUN_0c0e2a4c((*(int *)((R12 + 0x0))));
    *(unsigned int *)((R12 + 0x0)) = (R1008);
    (((struct o0_uint *)0xC23EB18)->v) = (R1012);
    *(unsigned int *)((R14 + 0x0)) = R10;
    R0 = (t39);
    goto L_C01598E;
    L_C0157A0:;
    if ((R0 != 9)) goto L_C0157A8;
    goto L_C0157A4;
    L_C0157A4:;
    goto L_C01598E;
    L_C0157A8:;
    if ((R0 != 10)) goto L_C0157B0;
    goto L_C0157AC;
    L_C0157AC:;
    goto L_C015958;
    L_C015958:;
    *(unsigned int *)((R4 + 0x0)) = R10;
    if ((R9 == 0)) goto L_C01598A;
    goto L_C01595E;
    L_C01595E:;
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o8_float *)0xC015A10)->v)), ((((struct o4_float *)0xC015A10)->v)), ((((struct o0_float *)0xC015A10)->v)));
    FUN_0c0c465c(0x13FE);
    t54 = (*(int *)0xC2498F4) == 0;
    R0 = ((nlPopMatrix(0x1)));
    if (t54) goto L_C01598E;
    goto L_C01598A;
    L_C01598A:;
    *(unsigned int *)((R14 + 0x0)) = 0x4;
    goto L_C01598E;
    L_C0157B0:;
    goto L_C01598E;
    L_C015824:;
    if ((R9 == 0)) goto L_C015838;
    goto L_C015828;
    L_C015828:;
    if ((((*(int *)0xC523158) & 24) == 0)) goto L_C015838;
    goto L_C015830;
    L_C015830:;
    FUN_0c0c465c(0x13FA);
    goto L_C015838;
    L_C015838:;
    (((struct oC_uint *)0xC23EB18)->v) = (buGetLastError(R13));
    t61 = buStat(R13);
    R0 = (t61);
    R10 = (0xC23EB24);
    if ((t61 != 0)) goto L_C01589A;
    goto L_C01584C;
    L_C01584C:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    if ((R11 == 0)) goto L_C01585A;
    goto L_C015856;
    L_C015856:;
    R0 = ((FUN_0c0e2a4c((*(int *)((R12 + 0x0))))));
    goto L_C01585A;
    L_C01585A:;
    if (((*(int *)((R10 + 0x0))) != 0)) goto L_C015864;
    goto L_C015860;
    L_C015860:;
    goto L_C01598E;
    L_C015864:;
    t72 = *(int *)((R10 + 0x0));
    R0 = (t72);
    if ((t72 == 0xFFFFFF04)) goto L_C015876;
    goto L_C01586C;
    L_C01586C:;
    if ((R0 == 0xFFFFFF06)) goto L_C015876;
    goto L_C015872;
    L_C015872:;
    goto L_C015894;
    L_C015894:;
    *(unsigned int *)((R14 + 0x0)) = 0xA;
    goto L_C01598E;
    L_C015876:;
    if (((int)(*(int *)((R10 + 0x0))) < 0)) goto L_C0158C6;
    goto L_C01587C;
    L_C01587C:;
    FUN_0c0cec9a(R13);
    R0 = ((FUN_0c0cec76(R13, ((R1016) + 0xC1EF454))));
    R3 = (0x5);
    goto L_C015890;
    L_C015890:;
    *(unsigned int *)((R14 + 0x0)) = R3;
    goto L_C01598E;
    L_C0158C6:;
    *(unsigned int *)((R14 + 0x0)) = 0xA;
    goto L_C01598E;
    L_C01589A:;
    t83 = *(int *)((R10 + 0x0));
    R4 = (t83);
    if ((t83 != 0)) goto L_C0158A4;
    goto L_C0158A0;
    L_C0158A0:;
    goto L_C01598E;
    L_C0158A4:;
    R0 = (R4);
    if ((R4 == 0xFFFFFF04)) goto L_C01598E;
    goto L_C0158AE;
    L_C0158AE:;
    if ((R0 == 0xFFFFFF06)) goto L_C01598E;
    goto L_C0158B4;
    L_C0158B4:;
    if ((R0 == 0xFFFFFF09)) goto L_C01598E;
    goto L_C0158BA;
    L_C0158BA:;
    if ((R0 == -1)) goto L_C01598E;
    goto L_C0158BE;
    L_C0158BE:;
    if ((R11 == 0)) goto L_C0158C6;
    goto L_C0158C2;
    L_C0158C2:;
    R0 = ((FUN_0c0e2a4c((*(int *)((R12 + 0x0))))));
    goto L_C0158C6;
    L_C0157E2:;
    R0 = ((FUN_0c0cebc4(R13, ((R1016) + 0xC1EF454), (*(int *)((R12 + 0x0))), ((((struct o0_int *)0xC23EB18)->v)), (R11))));
    goto L_C0158EC;
    L_C0157B4:;
    *(unsigned int *)((R4 + 0x0)) = 0x0;
    if ((R11 != 0)) goto L_C0157D2;
    goto L_C0157BC;
    L_C0157BC:;
    t102 = FUN_0c0e262a(0x80);
    *(unsigned int *)((R12 + 0x0)) = t102;
    R0 = ((buDefragDisk(R13, t102)));
    R3 = (0x6);
    goto L_C015890;
    L_C0157D2:;
    R0 = ((FUN_0c01536e((((int)stk + 8) + 0x10), (R1008), (R1012), R11)));
    goto L_C0158EC;
    L_C015758:;
    R9 = (R10);
    goto L_C01575A;
}



int FUN_0c0129b6(int a4, int a5, int a6, int a7, float f4)
{
    int t8;
    float u10;
    int t16;
    int t25;
    int t84;
    int t69;
    int t70;
    int t71;
    int t72;
    int t94;
    int t13;

    if ((int)a4 < (int)0x4) {
        if ((int)a4 < (int)0x3) {
            nlPushMatrix(0x0);
            FUN_0c0dcc70(-1.22609997f, 0.0f, 1.49379992f);
            nlRotateAY((*(int *)0xC1EF56C));
            FUN_0c0dcc70(1.22609997f, 0.0f, -1.49379992f);
            FUN_0c0c465c((*(int *)(((a4 << 2) + 0xC0F41F0))));
            t13 = (nlPopMatrix(0x1));
        } else {
            t8 = *(int *)0xC523158;
            u10 = (float)(t8 & 0x3F);
            if (((*(int *)0xC523158) & 64) != 0) {
                u10 = (63.0f - (float)(t8 & 0x3F));
            }
            t13 = (FUN_0c0c475c(0x12E7, (((u10 * 0.75f) / 63.0f) + 0.25f)));
        }
        t94 = t13;
    } else {
        FUN_0c0c465c(0x12F4);
        t16 = (((struct o0_int *)0xC23EAD4)->v);
        if ((0xC & t16) != 0) {
            FUN_0c0c465c(0x12E0);
        } else {
            FUN_0c0c475c(0x12E0, 0.5f);
        }
        if ((0x3 & t16) != 0) {
            FUN_0c0c465c(0x12E1);
        } else {
            FUN_0c0c475c(0x12E1, 0.5f);
        }
        t25 = t16;
        if ((a5 & 0x2) == 0) {
            t25 = ((t16 >> 1) >> 1);
        }
        if ((0x2 & t25) != 0) {
            FUN_0c0c465c(0x12D4);
        } else {
            FUN_0c0c475c(0x12D4, 0.5f);
        }
        if ((t25 & 0x1) != 0) {
            FUN_0c0c465c(0x12D5);
        } else {
            FUN_0c0c475c(0x12D5, 0.5f);
        }
        nlPushMatrix(0x0);
        if ((a5 & 0x2) != 0) {
            FUN_0c0dcc70(0.429999977f, 0.0f, 0.0f);
        }
        FUN_0c0c475c((*(int *)(((a6 << 2) + 0xC0F4238))), f4);
        t84 = (nlPopMatrix(0x1));
        if ((int)a4 > (int)0x5) {
            nlPushMatrix(0x0);
            FUN_0c0dcc70(0.0f, -0.269999981f, 0.0f);
            if ((a5 & 1) != 0) {
                FUN_0c0dcc70(0.429999977f, 0.0f, 0.0f);
            }
            FUN_0c0c475c((*(int *)(((a6 << 2) + 0xC0F4238))), f4);
            nlPopMatrix(0x1);
            if ((int)a4 > (int)0x6) {
                nlPushMatrix(0x0);
                FUN_0c0dcca0(0xC0F4248);
                nlScale(0.899999976f, 0.799999952f, 1.0f);
                FUN_0c0dcc70(0.0f, (-((float)(a4 - 7) * 0.299999982f)), 0.0f);
                FUN_0c0c475c((*(int *)(((a6 << 2) + 0xC0F4240))), f4);
                nlPopMatrix(0x1);
            }
            nlPushMatrix(0x0);
            FUN_0c0c475c(0x12FC, ((((struct o2C_float *)0xC23EAD4)->v)));
            FUN_0c0c475c(0x12FB, ((((struct o2C_float *)0xC23EAD4)->v)));
            FUN_0c0dcca0(0xC0F4254);
            nlScale(0.799999952f, 0.899999976f, 1.0f);
            t69 = 0xC012CA0;
            t70 = (a6 << 2);
            t71 = 0x4;
            t72 = ((((a5 << 2) + a5) << 2) + a7);
            for (;;) {
                if (t71 == 0) {
                    break;
                }
                t70 = (t72 * 0x16);
                t70 = (t70 + ((((struct o3C_int *)0xC23EAD4)->v)));
                t69 = (*(short *)((t70 + 0xE)));
                if ((int)t69 >= 0) {
                    t69 = (FUN_0c014fae((t70 + 0x10), 0.229999989f));
                }
                t69 = (FUN_0c0dcc70(0.0f, -0.254999995f, 0.0f));
                t71 = (t71 - 1);
                t72 = (t72 + 0x1);
            }
            t84 = (nlPopMatrix(0x1));
        }
        t94 = t84;
    }
    return t94;
}


int FUN_0c04c62c(int a4, int a5)
{
    int t51;
    int t106;
    int t126;
    int t134;
    int t135;
    int t142;
    int t160;
    int t168;
    int t177;
    int t184;

    if (((((struct o394_int *)(a4))->v)) != 0) {
        return 0x394;
    }
    if (((*(int *)((a5 + 0x8))) & 0x200) == 0) {
        return 0x394;
    }
    if ((unsigned int)(*(int *)((a5 + 0x10))) <= (unsigned int)0x5) {
        return 0x5;
    }
    t51 = (((struct o2F4_int *)(a4))->v);
    if ((t51 & 2) == 0) {
        return t51;
    }
    if ((int)((((struct o330_int *)(a4))->v)) > (int)0x1) {
        return 0x330;
    }
    if (((((struct oD8_int *)(a4))->v)) == 0) {
        return 0xD8;
    }
    if ((int)((((struct oE4_int *)(a4))->v)) >= (int)0xC) {
        return 0xE4;
    }
    t106 = *(int *)((0xC246FD8 + (((((struct oBC_int *)(a4))->v)) << 2)));
    if (t106 != 1) {
        return t106;
    }
    if (((((struct o20C_int *)(a4))->v)) != 0x80) {
        return 0x20C;
    }
    t126 = *(int *)((0xC247030 + (((((struct oE4_int *)(a4))->v)) << 2)));
    if (t126 != 4) {
        return t126;
    }
    t134 = *(int *)((((((((struct oE4_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
    t135 = (((struct oC8_int *)(t134))->v);
    if ((0x15 & t135) == 0) {
        return 0xC8;
    }
    if ((0x1 & t135) != 0) {
        return 0xC8;
    }
    t142 = (((struct o20C_int *)(t134))->v);
    if ((0x7F5 & t142) == 0) {
        return 0x20C;
    }
    if ((0x23B848 & t142) != 0) {
        return 0x20C;
    }
    if ((int)(((((struct o304_int *)(t134))->v)) - ((((struct o1CC_int *)(t134))->v))) <= 0) {
        return 0x304;
    }
    if (!(4.89999962f > _builtin_fabsf((((((struct o34_float *)(t134))->v)) - ((((struct o34_float *)(a4))->v)))))) {
        return 0xC04C7A4;
    }
    if ((*(float *)(((((((struct oBC_int *)(t134))->v)) << 2) + ((((((((struct oBC_int *)(a4))->v)) << 2) << 2) << 2) + 0xC247084)))) > 22.0f) {
        return 0xC04C7A8;
    }
    if (!(_builtin_fabsf((float)(short)(((((struct o6E_short *)(a4))->v)) - ((((struct o6E_short *)(t134))->v)))) > 12288.0f)) {
        return 0xC04C7AC;
    }
    FUN_0c051a48(a4);
    if ((int)((((struct oC0_int *)(t134))->v)) >= (int)0x29) {
        (((struct o300_uint *)(a4))->v) = (((((struct oC0_int *)(t134))->v)) - 40);
    } else {
        t160 = (((struct oC0_int *)(t134))->v);
        if ((t160 != 35) && (t160 != 36)) {
            (((struct o300_uint *)(a4))->v) = 0x0;
        } else {
            (((struct o300_uint *)(a4))->v) = 0x5;
        }
    }
    if ((int)(*(int *)((a4 + 0x8))) > (int)(*(int *)((t134 + 0x8)))) {
        FUN_0c0e20e6(a4, t134);
        t168 = *(int *)((a4 + 0x8));
        *(unsigned int *)((a4 + 0x8)) = (*(int *)((t134 + 0x8)));
        *(unsigned int *)((t134 + 0x8)) = t168;
        (((struct o20C_uint *)(a4))->v) = 0x40000;
        (((struct o210_uint *)(a4))->v) = 0x3B;
    } else {
        (((struct o20C_uint *)(a4))->v) = 0x40000;
        (((struct o210_uint *)(a4))->v) = 0x3C;
    }
    (((struct oCC_uint *)(a4))->v) = ((((struct oBC_int *)(t134))->v));
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct oC0_int *)(a4))->v)) << 1) + 0xC0F832A)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o2D4_uint *)(a4))->v) = 0x0;
    t177 = (((struct oBC_int *)(t134))->v);
    (((struct o1EC_uint *)(a4))->v) = (~(((int)t177 >= 0) ? (0x1 << (t177 & 31)) : ((-(int)t177 & 31) ? ((int)0x1 >> (-(int)t177 & 31)) : ((int)0x1 >> 31))));
    (((struct o374_uint *)(a4))->v) = 0x0;
    FUN_0c053d60(a4, 0x0);
    (((struct o20C_uint *)(t134))->v) = 0x80000;
    (((struct o210_uint *)(t134))->v) = 0x42;
    (((struct oD0_uint *)(t134))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o2C4_uint *)(t134))->v) = (unsigned short)(*(short *)(((((((struct oC0_int *)(t134))->v)) << 1) + (*(int *)((0xC1FE390 + (((((struct oC0_int *)(a4))->v)) << 2)))))));
    (((struct o2D4_uint *)(t134))->v) = 0x0;
    (((struct o2CC_uint *)(t134))->v) = 0x1;
    t184 = (((struct oBC_int *)(a4))->v);
    (((struct o1B0_uint *)(t134))->v) = (~(((int)t184 >= 0) ? (0x1 << (t184 & 31)) : ((-(int)t184 & 31) ? ((int)0x1 >> (-(int)t184 & 31)) : ((int)0x1 >> 31))));
    (((struct o6E_ushort *)(t134))->v) = (((((struct o6E_short *)(t134))->v)) + 0x8000);
    (((struct o374_uint *)(t134))->v) = 0x0;
    (((struct o3AC_uint *)(a4))->v) = 0x1E;
    FUN_0c08b2d0((t134 + 0x30), ((((struct o6E_short *)(t134))->v)));
    FUN_0c08bd50(a4, t134);
    return FUN_0c08b454(a4, t134);
}

void FUN_0c06d6e4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t9;
    int t18;
    int t46;
    int t87;
    int t88;
    int t89;
    int stk[17];

    t0 = (((struct o14_int *)0xC23ED88)->v);
    if (((int)t0 < (int)0xC) || ((int)t0 > (int)0xE)) {
        if ((int)t0 <= (int)0x9) {
            FUN_0c0685a4(t0, a5, a6, a7);
        }
        t6 = (((struct o80_int *)(a4))->v);
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 == 2) {
                    t9 = (((struct o8C_int *)(a4))->v);
                    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
                    if (!(((((struct o34_float *)(a4))->v)) > (((((struct o4_float *)(t9))->v)) + 7.56999969f))) {
                        (((struct o34_float *)(a4))->v) = (((((struct o4_float *)(t9))->v)) + 7.56999969f);
                        if ((int)(*(int *)(((t9 + 0x8) + 0x0))) < 0) {
                            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                        } else {
                            (((struct o78_uint *)(a4))->v) = (*(int *)(((t9 + 0x8) + 0x0)));
                            (((struct o8C_uint *)(a4))->v) = (t9 + 0x8);
                            t18 = (((struct o70_int *)(a4))->v);
                            (((struct o70_uint *)(a4))->v) = (int)((float)t18 - ((float)t18 * 0.5f));
                        }
                    } else {
                        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.099999994f);
                    }
                }
                nlPushMatrix(0x0);
                FUN_0c0dcca0((a4 + 0x30));
            } else {
                if ((((((struct o0_int *)0xC23ED88)->v)) & 0x400) != 0) {
                    (((struct o8C_uint *)(a4))->v) = 0xC0FB550;
                    (((struct o98_uint *)(a4))->v) = 0x0;
                    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                } else {
                    t46 = (((struct o88_int *)(a4))->v);
                    *(unsigned int *)(((int)stk + 4)) = (((((((t46 << 1) + t46) << 2) << 2) << 2) + 0xC23F268) + 0x24);
                    nlSubVector3op((((int)stk + 4) + 0x4), (((((((t46 << 1) + t46) << 2) << 2) << 2) + 0xC23F268) + 0x24), (((((((t46 << 1) + t46) << 2) << 2) << 2) + 0xC23F268) + 0x18));
                    nlScaleUnitVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 1.0f);
                    nlAddVector((((int)stk + 4) + 0x1C), (*(int *)(((int)stk + 4))));
                    *(unsigned int *)(((int)stk + 4)) = (((((((t46 << 1) + t46) << 2) << 2) << 2) + 0xC23F268) + 0x3C);
                    nlSubVector3op((((int)stk + 4) + 0x4), (((((((t46 << 1) + t46) << 2) << 2) << 2) + 0xC23F268) + 0x3C), (((((((t46 << 1) + t46) << 2) << 2) << 2) + 0xC23F268) + 0x30));
                    nlScaleUnitVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 1.0f);
                    nlAddVector((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))));
                    nlGetAverageVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), (a4 + 0x30), 0.5f, 0.5f);
                    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 1.29999995f);
                    *(unsigned int *)(((int)stk + 4)) = (a4 + 0x68);
                    FUN_0c0a77fe(((*(int *)(((int)stk + 4))) + 0x4), ((a4 + 0x68) + 0x8), ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 32)))), ((*(float *)(((int)stk + 24))) - (*(float *)(((int)stk + 36)))), ((*(float *)(((int)stk + 28))) - (*(float *)(((int)stk + 40)))));
                    (((struct o0_uint *)0xC23ED88)->v) = (((((struct o0_int *)0xC23ED88)->v)) | 0x400);
                }
                nlPushMatrix(0x0);
                FUN_0c0dcca0((a4 + 0x30));
            }
            nlRotateAY(((((struct o6C_int *)(a4))->v)));
            nlRotateAZ(((((struct o70_int *)(a4))->v)));
            FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
            nlPopMatrix(0x1);
        } else {
            t87 = t6;
            t88 = 0x4;
            t89 = a7;
            for (;;) {
                if ((int)(*(int *)((((t88 << 2) + 0xC247030) + 0x0))) >= (int)0x3) {
                    t89 = t88;
                    t89 = (t89 << 2);
                    t87 = 0x4DC;
                    t89 = (t89 + 0xC246FF0);
                    t89 = (*(int *)((t89 + 0x0)));
                    t87 = (*(int *)((t89 + t87)));
                    if (t87 == 98) {
                        break;
                    }
                    t88 = (t88 + 0x1);
                    if ((int)t88 >= (int)0xC) {
                        return;
                    }
                    continue;
                }
                t88 = (t88 + 0x1);
                if ((int)t88 >= (int)0xC) {
                    return;
                }
            }
            (((struct o88_uint *)(a4))->v) = t88;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
    }
}


int FUN_0c0deaa0(int a4, int a5, int a6, int a7)
{
    int t9;
    int t14;
    int t15;
    int t23;
    int t26;
    int t27;
    int t32;
    int t33;
    int t51;
    int t57;
    int t62;
    int t72;
    int t73;
    int t83;
    int t85;
    int t94;
    int t95;
    int stk[15];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0DEAA0:;
    *(unsigned int *)(((int)stk + 20)) = R5;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)((R7 + 0x0)) = 0x0;
    R8 = (R7);
    R9 = (0x0);
    if ((R6 != 0)) goto L_C0DEAF0;
    goto L_C0DEAC4;
    L_C0DEAC4:;
    if (((int)(*(int *)((R4 + 0x0))) < 0)) goto L_C0DEAD0;
    goto L_C0DEACA;
    L_C0DEACA:;
    if (((*(int *)((R4 + 0x18))) != 0)) goto L_C0DEAE0;
    goto L_C0DEAD0;
    L_C0DEAD0:;
    R0 = (0x0);
    goto L_C0DED2E;
    L_C0DED2E:;
    return R0;
    L_C0DEAE0:;
    R12 = ((R4 + 0x18));
    goto L_C0DEAF2;
    L_C0DEAF2:;
    t9 = *(int *)((R12 + 0x20));
    *(unsigned int *)(((int)stk + 8)) = t9;
    t14 = R12;
    R11 = (0x1);
    R12 = ((R12 + 0x50));
    R13 = (t9);
    R14 = t14;
    if (((int)t9 < 0)) goto L_C0DEB7A;
    goto L_C0DEB00;
    L_C0DEB00:;
    t15 = *(int *)0xC948270;
    R0 = (0xC943D78);
    R10 = ((((R13 + t15) << 2) << 1));
    if (((*(int *)((((*(int *)0xC943D78) + (((R13 + t15) << 2) << 1)) + 0x0))) != 0)) goto L_C0DEB2A;
    goto L_C0DEB18;
    L_C0DEB18:;
    *(unsigned int *)(((0x4 + ((*(int *)((R0 + 0x0))) + R10)) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
    goto L_C0DEB2A;
    L_C0DEB2A:;
    t23 = *(int *)0xC943D78;
    *(unsigned int *)(((t23 + R10) + 0x0)) = ((*(int *)(((t23 + R10) + 0x0))) + 0x1);
    t26 = *(int *)((((*(int *)0xC943D78) + R10) + 0x4));
    t27 = *(int *)0xC947AA8;
    R10 = (((t26 * 0x3C) + t27));
    R13 = (t26);
    if (((*(int *)((((t26 * 0x3C) + t27) + 0x2C))) != 0)) goto L_C0DEB74;
    goto L_C0DEB4E;
    L_C0DEB4E:;
    t32 = *(int *)(((int)stk + 8));
    t33 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 12)) = (((t32 << 2) << 2) + t33);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) | (FUN_0c0d7f60((((t32 << 2) << 2) + t33), R13, (*(int *)(((((t32 << 2) << 2) + t33) + 0x8))))));
    nlCreateTextureParam(R13);
    *(unsigned int *)((R10 + 0x38)) = R13;
    *(unsigned int *)(((int)stk + 12)) = R11;
    goto L_C0DEB74;
    L_C0DEB74:;
    *(unsigned int *)((R10 + 0x2C)) = ((*(int *)((R10 + 0x2C))) + 0x1);
    goto L_C0DEB7A;
    L_C0DEB7A:;
    if (((int)(*(int *)(((int)stk + 8))) >= 0)) goto L_C0DEB8E;
    goto L_C0DEB80;
    L_C0DEB80:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) | R11);
    *(unsigned int *)((R14 + 0x4)) = ((*(int *)((R14 + 0x4))) | 0x400000);
    goto L_C0DEB8E;
    L_C0DEB8E:;
    *(unsigned int *)((R14 + 0x0)) = (((*(int *)((R14 + 0x0))) & 0xFFFCFFFF) | (((*(int *)0xC20CC5C) << 16) | 0x8C0000));
    if (((int)R13 < 0)) goto L_C0DEBC0;
    goto L_C0DEBA6;
    L_C0DEBA6:;
    nlSetTextureParameter(R14, R13);
    goto L_C0DEBC6;
    L_C0DEBC6:;
    R4 = (0x7);
    if (((*(int *)0xC20CC50) != 0)) goto L_C0DEC90;
    goto L_C0DEBD0;
    L_C0DEBD0:;
    t51 = *(int *)0xC94C688;
    R4 = ((R4 & ((unsigned int)(*(int *)((R14 + 0xC))) >> 27)));
    R5 = (t51);
    if ((t51 == 0)) goto L_C0DECB4;
    goto L_C0DEBE0;
    L_C0DEBE0:;
    if ((R4 == 5)) goto L_C0DEBEC;
    goto L_C0DEBE6;
    L_C0DEBE6:;
    if ((R4 != 6)) goto L_C0DECB4;
    goto L_C0DEBEC;
    L_C0DEBEC:;
    t57 = *(int *)((R14 + 0x3C));
    R4 = (t57);
    R6 = (0xC990E80);
    if (((int)t57 >= (int)(*(short *)0xC990E84))) goto L_C0DECB4;
    goto L_C0DEBF6;
    L_C0DEBF6:;
    t62 = *(int *)((R6 + 0x18));
    R10 = (((((R4 << 1) + R4) << 2) + R5));
    R13 = ((t62 + ((R4 << 2) << 1)));
    if (((*(short *)(((t62 + ((R4 << 2) << 1)) + 0x4))) == 0)) goto L_C0DEC20;
    goto L_C0DEC12;
    L_C0DEC12:;
    *(unsigned short *)((R13 + 0x4)) = ((*(short *)((R13 + 0x4))) + 0x1);
    R11 = ((*(short *)((R13 + 0x0))));
    goto L_C0DEC72;
    L_C0DEC72:;
    *(unsigned int *)((R14 + 0xC)) = (((*(int *)((R14 + 0xC))) & 0xF81FFFFF) | (R11 << 21));
    goto L_C0DECB4;
    L_C0DECB4:;
    FUN_0c0eca30();
    t72 = *(int *)((R14 + 0x4C));
    t73 = *(int *)(((R12 + t72) + 0x0));
    R12 = ((R12 + t72));
    R4 = (t73);
    if ((t73 != 0)) goto L_C0DED20;
    goto L_C0DECC6;
    L_C0DECC6:;
    *(unsigned int *)((R8 + 0x0)) = R9;
    goto L_C0DED2C;
    L_C0DED2C:;
    R0 = ((*(int *)(((int)stk + 16))));
    goto L_C0DED2E;
    L_C0DED20:;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C0DED2A;
    goto L_C0DED26;
    L_C0DED26:;
    goto L_C0DEAF2;
    L_C0DED2A:;
    *(unsigned int *)((R8 + 0x0)) = R12;
    goto L_C0DED2C;
    L_C0DEC20:;
    *(unsigned char *)((R13 + 0x2)) = (*(signed char *)((R10 + 0x2)));
    *(unsigned char *)((R13 + 0x3)) = ((int)((*(int *)((R10 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((R13 + 0x4)) = R11;
    *(unsigned short *)((R13 + 0x6)) = R4;
    t83 = *(int *)((R10 + 0x8));
    *(unsigned int *)(((int)stk + 8)) = t83;
    t85 = FUN_0c0d8730((*(short *)((R10 + 0x2))), t83);
    R11 = (t85);
    if (((int)t85 < 0)) goto L_C0DEC70;
    goto L_C0DEC4A;
    L_C0DEC4A:;
    *(unsigned short *)((R13 + 0x0)) = R11;
    FUN_0c0d8800(R11, (*(int *)(((int)stk + 8))));
    nlSetPaletteData(((R11 << 2) << 2), (*(int *)((R10 + 0x4))), (*(int *)(((int)stk + 8))));
    goto L_C0DEC72;
    L_C0DEC70:;
    R11 = (R9);
    goto L_C0DEC72;
    L_C0DEC90:;
    t94 = *(int *)((R14 + 0xC));
    t95 = (R4 & ((unsigned int)t94 >> 27)) == 5;
    R4 = ((R4 & ((unsigned int)t94 >> 27)));
    if (t95) goto L_C0DECA4;
    goto L_C0DEC9E;
    L_C0DEC9E:;
    if ((R4 != 6)) goto L_C0DECB4;
    goto L_C0DECA4;
    L_C0DECA4:;
    *(unsigned int *)((R14 + 0xC)) = (((*(int *)((R14 + 0xC))) & 0xF81FFFFF) | ((*(int *)((R14 + 0x3C))) << 21));
    goto L_C0DECB4;
    L_C0DEBC0:;
    FUN_0c0d85c0(R14);
    goto L_C0DEBC6;
    L_C0DEAF0:;
    R12 = (R6);
    goto L_C0DEAF2;
}

int FUN_0c07f340(int a4)
{
    int t0;
    float u11;
    int t17;
    int t24;
    float u25;
    float u29;
    int t33;
    int t34;
    int t35;
    float u75;
    int t80;
    float u83;
    float u92;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F12;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_C07F340:;
    t0 = FUN_0c07e5c8(R4);
    (((struct o0_uint *)0xC247D00)->v) = ((((struct o1C_int *)0xC247D00)->v));
    R0 = (t0);
    R11 = (0xC247CA4);
    R12 = (0x4);
    R13 = (0xC247D1C);
    R14 = (R4);
    R4 = (t0);
    F14 = (0.5f);
    if ((t0 == 0)) goto L_C07F374;
    goto L_C07F36C;
    L_C07F36C:;
    if ((R0 == 1)) goto L_C07F44E;
    goto L_C07F370;
    L_C07F370:;
    goto L_C07F5CC;
    L_C07F5CC:;
    return R0;
    L_C07F44E:;
    u11 = (((struct o40_float *)(R13))->v);
    _quick_odd_mvn(R4, R5, R6, R7, F4, F5);
    F15 = (u11);
    if (((((((struct o250_int *)(R14))->v)) & R12) != 0)) goto L_C07F474;
    goto L_C07F468;
    L_C07F468:;
    (((struct o3E0_uint *)(R14))->v) = (((((struct o378_int *)(R14))->v)) + 0x3FFF);
    goto L_C07F474;
    L_C07F474:;
    t17 = *(int *)((R11 + 0x0));
    R0 = (0x20);
    R4 = (t17);
    if ((!(((((struct o20_float *)(t17))->v)) > F15))) goto L_C07F482;
    goto L_C07F47E;
    L_C07F47E:;
    F15 = ((*(float *)((R4 + R0))));
    goto L_C07F48C;
    L_C07F48C:;
    t24 = *(short *)((R4 + 0x14));
    u25 = (((struct o20_float *)(R4))->v);
    u29 = (float)(short)t24;
    u29 = u29 + (float)((*(short *)((R4 + 0x16))) - (short)t24) * ((((((struct o29C_float *)(R14))->v)) - u25) / (((((struct o24_float *)(R4))->v)) - u25));
    (((struct o3DC_uint *)(R14))->v) = (int)u29;
    (((struct o3D4_uint *)(R14))->v) = (int)((float)((((struct o3D4_int *)(R14))->v)) + ((float)(((((struct o3DC_int *)(R14))->v)) - ((((struct o3D4_int *)(R14))->v))) * 0.00999999978f));
    t33 = (((struct o3E4_int *)(R14))->v);
    t34 = (((struct o3E0_int *)(R14))->v);
    t35 = (((struct o3D8_int *)(R14))->v);
    R4 = ((short)((t34 + t33) - t35));
    if ((!(_builtin_fabsf((float)(short)((t34 + t33) - t35)) > 16383.0f))) goto L_C07F524;
    goto L_C07F508;
    L_C07F508:;
    (((struct o3E4_uint *)(R14))->v) = (((((struct o3E4_int *)(R14))->v)) + 0x7FFF);
    R4 = ((short)((((((struct o3E0_int *)(R14))->v)) + ((((struct o3E4_int *)(R14))->v))) - ((((struct o3D8_int *)(R14))->v))));
    goto L_C07F524;
    L_C07F524:;
    R0 = (0x250);
    if (((R12 & ((((struct o250_int *)(R14))->v))) == 0)) goto L_C07F534;
    goto L_C07F52C;
    L_C07F52C:;
    R5 = (0x71C);
    R6 = (0x100);
    goto L_C07F538;
    L_C07F538:;
    if (((int)R4 <= (int)R5)) goto L_C07F578;
    goto L_C07F53C;
    L_C07F53C:;
    (((struct o3D8_uint *)(R14))->v) = (((((struct o3D8_int *)(R14))->v)) + R6);
    goto L_C07F58E;
    L_C07F58E:;
    R0 = (0x29C);
    if ((!(_builtin_fabsf((((((struct o29C_float *)(R14))->v)) - F15)) > F14))) goto L_C07F5B8;
    goto L_C07F59A;
    L_C07F59A:;
    if ((!((*(float *)((R14 + R0))) > F15))) goto L_C07F5AC;
    goto L_C07F5A0;
    L_C07F5A0:;
    F2 = (((*(float *)((R14 + R0))) - 0.299999982f));
    goto L_C07F5B6;
    L_C07F5B6:;
    *(float *)((R14 + R0)) = F2;
    goto L_C07F5B8;
    L_C07F5B8:;
    return FUN_0c07e2b0(R14);
    L_C07F5AC:;
    F2 = (((*(float *)((R14 + R0))) + 0.799999952f));
    goto L_C07F5B6;
    L_C07F578:;
    if (((int)R4 >= (int)(-R5))) goto L_C07F586;
    goto L_C07F57E;
    L_C07F57E:;
    R0 = (0x3D8);
    R2 = ((((((struct o3D8_int *)(R14))->v)) - R6));
    goto L_C07F58C;
    L_C07F58C:;
    *(unsigned int *)((R14 + R0)) = R2;
    goto L_C07F58E;
    L_C07F586:;
    R2 = (((*(int *)((R14 + R0))) & 0xFFFFFFFB));
    goto L_C07F58C;
    L_C07F534:;
    R5 = (0x1C71);
    R6 = (0x80);
    goto L_C07F538;
    L_C07F482:;
    R0 = (0x24);
    if ((!(F15 > ((((struct o24_float *)(R4))->v))))) goto L_C07F48C;
    goto L_C07F48A;
    L_C07F48A:;
    F15 = ((*(float *)((R4 + R0))));
    goto L_C07F48C;
    L_C07F374:;
    if (((*(int *)((R13 + 0x0))) != 0)) goto L_C07F420;
    goto L_C07F37A;
    L_C07F37A:;
    u75 = (((struct o20_float *)((*(int *)((R11 + 0x0)))))->v);
    _quick_odd_mvn(R4, R5, R6, R7, F4, F5);
    F15 = (u75);
    if ((!(((((struct o368_float *)(R14))->v)) > 0.099999994f))) goto L_C07F3AE;
    goto L_C07F39A;
    L_C07F39A:;
    t80 = *(int *)((R11 + 0x0));
    u83 = F15;
    u83 = u83 + 0.333333313f * (((((struct o24_float *)(t80))->v)) - ((((struct o20_float *)(t80))->v)));
    F15 = (u83);
    goto L_C07F3AE;
    L_C07F3AE:;
    if (((((((struct o250_int *)(R14))->v)) & R12) != 0)) goto L_C07F474;
    goto L_C07F3B6;
    L_C07F3B6:;
    (((struct o3E0_uint *)(R14))->v) = (short)(FUN_0c0d9dc0((((((struct o278_float *)(R14))->v)) - ((((struct o338_float *)(R14))->v))), (((((struct o280_float *)(R14))->v)) - ((((struct o340_float *)(R14))->v)))));
    goto L_C07F474;
    L_C07F420:;
    u92 = (((struct o14_float *)(R13))->v);
    nlGetAverageVector((0x338 + R14), (R13 + 0x34), (0x284 + R14), F14, F14);
    F15 = (u92);
    if (((((((struct o250_int *)(R14))->v)) & R12) != 0)) goto L_C07F474;
    goto L_C07F440;
    L_C07F440:;
    (((struct o3E0_uint *)(R14))->v) = (((((struct o44_int *)(R13))->v)) + 0x3FFF);
    goto L_C07F474;
}

int FUN_0c01132c(int a4)
{
    int t0;
    float u23;
    int t28;
    int t31;
    int t37;
    int t38;
    int t39;
    int t45;
    int t48;
    int t51;
    int t73;
    int t78;
    float u83;
    int t91;
    int t94;
    int t98;
    int t104;
    int t106;
    int stk[12];

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
    float F4;
    float F5;
    float F6;
    float F14;
    float F15;
    int T_;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    R4 = a4;
    L_C01132C:;
    R1004 = R4;
    t0 = (((struct o0_int *)0xC23ECBC)->v);
    R0 = (t0);
    R10 = (0xC23ECC0);
    R11 = (0xC23ECBC);
    R12 = (0xFFFFFFFF);
    R13 = (0x0);
    R14 = (0xC23ECC4);
    R4 = (((((struct o8_int *)0xC23ECBC)->v)));
    R6 = (0x14);
    R8 = (0x1);
    R9 = (0x16);
    F14 = (1.0f);
    if ((t0 == 0)) goto L_C011386;
    goto L_C01135E;
    L_C01135E:;
    if ((R0 == 1)) goto L_C0113EC;
    goto L_C011362;
    L_C011362:;
    if ((R0 == 2)) goto L_C011420;
    goto L_C011366;
    L_C011366:;
    if ((R0 == 3)) goto L_C011432;
    goto L_C01136A;
    L_C01136A:;
    if ((R0 != 4)) goto L_C011372;
    goto L_C01136E;
    L_C01136E:;
    goto L_C011476;
    L_C011476:;
    nlPushMatrix(0x0);
    if ((((((struct o8_int *)0xC23EB14)->v)) != 10)) goto L_C01148A;
    goto L_C011484;
    L_C011484:;
    R4 = (0xC0F418C);
    goto L_C01148C;
    L_C01148C:;
    FUN_0c0dcca0(R4);
    u23 = (((struct o24_float *)0xC01160C)->v);
    nlScale(u23, u23, F14);
    FUN_0c0154c0((*(int *)((R14 + 0x0))), 0x6, 0x2);
    nlPopMatrix(0x1);
    t28 = (((struct o8_int *)0xC23EB14)->v);
    R0 = (t28);
    if ((t28 != 9)) goto L_C0115A8;
    goto L_C0114B8;
    L_C0114B8:;
    t31 = (((struct o0_int *)0xC23EB14)->v);
    R13 = (0xC23EB14);
    R4 = (t31);
    if ((t31 == 0)) goto L_C01159E;
    goto L_C0114C0;
    L_C0114C0:;
    if (((int)((((struct o10_int *)0xC23EB14)->v)) < 0)) goto L_C01159E;
    goto L_C0114C8;
    L_C0114C8:;
    t37 = *(int *)((R14 + 0x0));
    t38 = *(int *)((R10 + 0x0));
    t39 = R1004;
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0xA)) = (*(signed char *)((R4 + 0xF)));
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0x8)) = (*(signed char *)(((*(int *)((R13 + 0x0))) + 0x10)));
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0xC)) = (*(signed char *)(((*(int *)((R13 + 0x0))) + 0x11)));
    t45 = *(int *)((R13 + 0x0));
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0x0)) = (((*(signed char *)((t45 + 0x12))) << 8) | (unsigned char)(*(signed char *)((t45 + 0x13))));
    t48 = *(int *)((R13 + 0x0));
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0x2)) = (((*(signed char *)((t48 + 0x14))) << 8) | (unsigned char)(*(signed char *)(((0x15 + t48) + 0x0))));
    t51 = *(int *)((R13 + 0x0));
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0x4)) = (((*(signed char *)((t51 + 0x16))) << 8) | (unsigned char)(*(signed char *)(((0x17 + t51) + 0x0))));
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0x6)) = (unsigned char)(*(signed char *)(((*(int *)((R13 + 0x0))) + 0x18)));
    *(unsigned short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0xE)) = (*(signed char *)(((*(int *)((R13 + 0x0))) + 0x7C)));
    FUN_0c0e631c((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0x10), ((*(int *)((R13 + 0x0))) + 0x7F), 0x6, R7);
    R14 = (((((((t37 << 2) + t37) << 2) + t38) * R9) + t39));
    if (((*(short *)((((((((t37 << 2) + t37) << 2) + t38) * R9) + t39) + 0x0))) != 0)) goto L_C011554;
    goto L_C011552;
    L_C011552:;
    *(unsigned short *)((R14 + 0x0)) = R8;
    goto L_C011554;
    L_C011554:;
    if (((*(short *)((R14 + 0x4))) != 0)) goto L_C011560;
    goto L_C01155A;
    L_C01155A:;
    *(unsigned short *)((R14 + 0x4)) = R8;
    goto L_C011560;
    L_C011560:;
    if (((*(short *)((R14 + 0x2))) != 0)) goto L_C01156C;
    goto L_C011566;
    L_C011566:;
    *(unsigned short *)((R14 + 0x2)) = R8;
    goto L_C01156C;
    L_C01156C:;
    R0 = ((FUN_0c0e2a4c((*(int *)((R13 + 0x0))))));
    goto L_C01159E;
    L_C01159E:;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) + 0x1);
    goto L_C0115A8;
    L_C0115A8:;
    return R0;
    L_C01148A:;
    R4 = (0xC0F4180);
    goto L_C01148C;
    L_C011372:;
    if ((R0 != 5)) goto L_C01137A;
    goto L_C011376;
    L_C011376:;
    goto L_C011576;
    L_C011576:;
    t73 = *(int *)((R10 + 0x0));
    *(unsigned int *)((R10 + 0x0)) = (t73 + 0x1);
    if (((int)(t73 + 0x1) >= (int)R6)) goto L_C011588;
    goto L_C011582;
    L_C011582:;
    *(unsigned int *)((R11 + 0x0)) = 0x3;
    goto L_C0115A8;
    L_C011588:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t78 = (int)(*(int *)((R14 + 0x0))) >= (int)0x4;
    R0 = ((FUN_0c0154a4()));
    if (t78) goto L_C01159E;
    goto L_C01159A;
    L_C01159A:;
    *(unsigned int *)((R11 + 0x0)) = R8;
    goto L_C0115A8;
    L_C01137A:;
    if ((R0 != 6)) goto L_C011382;
    goto L_C01137E;
    L_C01137E:;
    goto L_C0115A6;
    L_C0115A6:;
    *(unsigned int *)((R11 + 0x0)) = R12;
    goto L_C0115A8;
    L_C011382:;
    goto L_C0115A8;
    L_C011432:;
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4174);
    u83 = (((struct o0_float *)0xC01160C)->v);
    nlScale(u83, u83, F14);
    FUN_0c010f3a();
    nlPopMatrix(0x1);
    t91 = (int)((((struct o10_int *)0xC23EB14)->v)) >= 0;
    R0 = ((FUN_0c015436((*(int *)((R14 + 0x0))), ((*(int *)((R10 + 0x0))) + 0x6))));
    if (t91) goto L_C011470;
    goto L_C01146A;
    L_C01146A:;
    *(unsigned int *)((R11 + 0x0)) = 0x5;
    R0 = (0x5);
    goto L_C0115A8;
    L_C011470:;
    *(unsigned int *)0xC23EAC0 = R13;
    goto L_C01159E;
    L_C011420:;
    t94 = buStat(R4);
    R0 = (t94);
    if ((t94 == 0)) goto L_C01142E;
    goto L_C01142A;
    L_C01142A:;
    goto L_C0115A8;
    L_C01142E:;
    goto L_C01159E;
    L_C0113EC:;
    t98 = *(int *)(((FUN_0c0cead0(R4)) + 0x50));
    R0 = (t98);
    R4 = (0xC23EB20);
    if ((t98 != 1)) goto L_C01140C;
    goto L_C0113FE;
    L_C0113FE:;
    *(unsigned int *)((R4 + 0x0)) = (*(int *)((R14 + 0x0)));
    t104 = FUN_0c0cec9a((*(int *)((R14 + 0x0))));
    *(unsigned int *)((R10 + 0x0)) = R13;
    R0 = (t104);
    goto L_C01159E;
    L_C01140C:;
    *(unsigned int *)((R4 + 0x0)) = R12;
    t106 = *(int *)((R14 + 0x0));
    *(unsigned int *)((R14 + 0x0)) = (t106 + 0x1);
    if (((int)(t106 + 0x1) >= (int)0x4)) goto L_C01146A;
    goto L_C01141C;
    L_C01141C:;
    goto L_C0115A8;
    L_C011386:;
    R10 = (0x50);
    R4 = (R13);
    goto L_C0113AA;
    L_C0113AA:;
    if (((int)R4 < (int)R10)) goto L_C01138C;
    goto L_C0113AE;
    L_C0113AE:;
    *(unsigned int *)((R14 + 0x0)) = R13;
    goto L_C01159E;
    L_C01138C:;
    R5 = (R4);
    R7 = (R13);
    goto L_C0113A4;
    L_C0113A4:;
    if (((int)R7 < (int)R6)) goto L_C011392;
    goto L_C0113A8;
    L_C0113A8:;
    R4 = ((R4 + 0x14));
    goto L_C0113AA;
    L_C011392:;
    *(unsigned short *)((((R5 * R9) + (R1004)) + 0xE)) = R12;
    R0 = (R12);
    R5 = ((R5 + 0x1));
    R7 = ((R7 + 0x1));
    goto L_C0113A4;
}
