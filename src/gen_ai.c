/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14C_float { char p[0x14C]; float v; };
struct o154_float { char p[0x154]; float v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o42_short { char p[0x42]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_short { char p[0x46]; short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o49C_int { char p[0x49C]; int v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o510_int { char p[0x510]; int v; };
struct o510_uint { char p[0x510]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o550_float { char p[0x550]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_float { char p[0x68]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o90_uchar { char p[0x90]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct o9C_ushort { char p[0x9C]; unsigned short v; };
struct o9E_ushort { char p[0x9E]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_float { char p[0xA8]; float v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oB0_uint { char p[0xB0]; unsigned int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c010b04(int, float, float, float, float);
int FUN_0c010c0c(void);
int FUN_0c010c14(void);
int FUN_0c010c40(int);
int FUN_0c010cb6(void);
int FUN_0c010e92(void);
int FUN_0c010f0a(void);
int FUN_0c011114(void);
int FUN_0c0112b0(int);
int FUN_0c014fae(int, float);
int FUN_0c015018(int);
extern int FUN_0c015436();
int FUN_0c0154a4(void);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0159a2(int, int);
int FUN_0c02a416(int);
int FUN_0c032394(int);
int FUN_0c036efc(int, int, int, int);
int FUN_0c049b80(int);
int FUN_0c051a48(int);
int FUN_0c055090(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c086c1e(int, int, int, Stk4, float);
int FUN_0c08e46e(int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c8d06(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cec9a(int);
int FUN_0c0d1942(int, int, int, int, int);
int FUN_0c0d3f0c(int);
int FUN_0c0d6592(int, int);
int FUN_0c0d6a64(void);
float FUN_0c0d7178(int, int);
int FUN_0c0d9ca0(float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da300(void);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0dd050(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e27be(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e631c(int, int, int);
int buFindExecFile(int, int);
int buGetDiskFree(int, int);
int buStat(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c012e36(void);
float FUN_0c08da10(int a4, int a5, int a6, int a7);
int FUN_0c0d637e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c06e384(int a4, int a5, int a6, int a7);
void FUN_0c032d90(int a4);
int FUN_0c06867a(int a4, int a5, int a6, int a7);
int FUN_0c0d41c6(void);
int FUN_0c0975d0(int a4, int a5, int a6, int a7);
int FUN_0c03261c(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c08a220(int a4, int a5);
int FUN_0c016d74(void);
int FUN_0c04f7cc(void);

int FUN_0c012e36(void)
{
    int stk[14];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t13;
    register int t35;
    register int t37;
    int t38;
    register int t63;
    register int t85;
    register int t93;
    register int t96;
    register int t102;
    register int t120;
    register int t127;
    register int t157;
    register int t183;
    register int t186;
    register int t188;
    register int t189;
    register int t195;
    register int t200;
    register int t237;
    register int t274;
    register int t304;
    register int t306;
    int t307;
    register int t332;
    register int t354;
    register int t362;
    register int t365;
    register int t371;
    register int t389;
    register int t396;
    register int t426;
    register int t452;
    register int t455;
    register int t457;
    register int t458;
    register int t464;
    register int t469;
    register int t506;
    register int t543;
    register int t587;
    register int t589;
    int t590;
    register int t615;
    register int t637;
    register int t645;
    register int t648;
    register int t654;
    register int t672;
    register int t679;
    register int t709;
    register int t735;
    register int t738;
    register int t740;
    register int t741;
    register int t747;
    register int t752;
    register int t789;
    register int t826;
    register int t856;
    register int t858;
    int t859;
    register int t884;
    register int t906;
    register int t914;
    register int t917;
    register int t923;
    register int t941;
    register int t948;
    register int t978;
    register int t1004;
    register int t1007;
    register int t1009;
    register int t1010;
    register int t1016;
    register int t1021;
    register int t1058;
    register int t1095;
    register int t1137;
    register int t1139;
    int t1140;
    register int t1165;
    register int t1187;
    register int t1195;
    register int t1198;
    register int t1204;
    register int t1222;
    register int t1229;
    register int t1259;
    register int t1285;
    register int t1288;
    register int t1290;
    register int t1291;
    register int t1297;
    register int t1302;
    register int t1339;
    register int t1376;
    register int t1406;
    register int t1408;
    int t1409;
    register int t1434;
    register int t1456;
    register int t1464;
    register int t1467;
    register int t1473;
    register int t1491;
    register int t1498;
    register int t1528;
    register int t1554;
    register int t1557;
    register int t1559;
    register int t1560;
    register int t1566;
    register int t1571;
    register int t1608;
    register int t1645;
    register int t1686;
    register int t1688;
    int t1689;
    register int t1714;
    register int t1736;
    register int t1744;
    register int t1747;
    register int t1753;
    register int t1771;
    register int t1778;
    register int t1808;
    register int t1834;
    register int t1837;
    register int t1839;
    register int t1840;
    register int t1846;
    register int t1851;
    register int t1888;
    register int t1925;
    register int t1955;
    register int t1957;
    int t1958;
    register int t1983;
    register int t2005;
    register int t2013;
    register int t2016;
    register int t2022;
    register int t2040;
    register int t2047;
    register int t2077;
    register int t2103;
    register int t2106;
    register int t2108;
    register int t2109;
    register int t2115;
    register int t2120;
    register int t2157;
    register int t2194;
    register int t2235;
    register int t2236;
    register int t2254;
    register int t2256;
    int t2257;
    register int t2282;
    register int t2304;
    register int t2312;
    register int t2315;
    register int t2321;
    register int t2339;
    register int t2346;
    register int t2376;
    register int t2402;
    register int t2405;
    register int t2407;
    register int t2408;
    register int t2414;
    register int t2419;
    register int t2456;
    register int t2493;
    register int t2523;
    register int t2525;
    int t2526;
    register int t2551;
    register int t2573;
    register int t2581;
    register int t2584;
    register int t2590;
    register int t2608;
    register int t2615;
    register int t2645;
    register int t2671;
    register int t2674;
    register int t2676;
    register int t2677;
    register int t2683;
    register int t2688;
    register int t2725;
    register int t2762;
    register int t2821;
    register int t2822;
    register int t2823;
    int t2824;
    register int t2869;
    register int t2881;
    register int t2890;
    register int t2898;
    register int t2901;
    register int t2904;
    register int t2928;
    register int t2937;
    register int t2954;
    register int t2967;
    register int t2969;
    register int t2971;
    register int t2973;
    register int t2974;
    register int t2980;
    register int t2985;
    register int t2988;
    register int t3003;
    register int t184;
    register int t185;
    register int t187;
    register int t453;
    register int t454;
    register int t456;
    register int t736;
    register int t737;
    register int t739;
    register int t1005;
    register int t1006;
    register int t1008;
    register int t1286;
    register int t1287;
    register int t1289;
    register int t1555;
    register int t1556;
    register int t1558;
    register int t1835;
    register int t1836;
    register int t1838;
    register int t2104;
    register int t2105;
    register int t2107;
    register int t2403;
    register int t2404;
    register int t2406;
    register int t2672;
    register int t2673;
    register int t2675;
    register int t2968;
    register int t2970;
    register int t2972;

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F40C0);
    t3 = 0x0;
    t4 = 0xC0F42C0;
    for (;;) {
        if ((unsigned int)t3 >= (unsigned int)0x5) {
            break;
        }
        t5 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        FUN_0c0c465c(t5);
        t3 = (t3 + 0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.0f, -5.0f);
    FUN_0c0c465c(0x145F);
    FUN_0c0c465c(0x1460);
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 4)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 0)) = 0xFFFFFFFF;
    t12 = *(int *)0xC1EF574;
    if ((int)(t12 + 0x1) < (int)0x3) {
        t13 = (t12 + 0x1);
        for (;;) {
            if ((*(signed char *)((0xC1EF2DC + t13))) != 0) {
                break;
            }
            t13 = (t13 + 0x1);
            if ((int)t13 >= (int)0x3) {
                t13 = (*(int *)0xC1EF574);
                t13 = (t13 - 1);
                if ((int)t13 >= 0) {
                    for (;;) {
                        if ((*(signed char *)((0xC1EF2DC + t13))) != 0) {
                            break;
                        }
                        t13 = (t13 - 1);
                        if ((int)t13 < 0) {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0xC0F4328;
                            FUN_0c0dcca0(t13);
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (*(int *)((t13 + 0xC0F4288)));
                            FUN_0c0c465c(t13);
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x1463;
                            FUN_0c0c465c(t13);
                            if ((int)((((struct o0_int *)0xC23EAEC)->v)) < (int)0x5) {
                                t13 = 0xC0F4334;
                                FUN_0c0dcca0(t13);
                                t13 = (*(int *)0xC1EF574);
                                t13 = (t13 << 2);
                                t13 = (*(int *)((t13 + 0xC0F4298)));
                                FUN_0c0c465c(t13);
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t35 = (((struct o0_int *)0xC23EAEC)->v);
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                t37 = *(int *)0xC23EB38;
                                t38 = *(int *)0xC2498F4;
                                if ((unsigned int)t35 >= (unsigned int)0xD) {
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                switch ((t35 << 1)) {
                                    case 0:
                                    {
                                        if ((0xC0C0 & t38) != 0) {
                                            if ((t38 & 0x8080) != 0) {
                                                if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                                }
                                            } else {
                                                if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                                }
                                            }
                                        } else {
                                            if ((0xC & t38) != 0) {
                                                (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                            } else {
                                                if ((t38 & 0x2) != 0) {
                                                    FUN_0c0154a4();
                                                    t13 = 0x5;
                                                    FUN_0c010c40(t13);
                                                }
                                            }
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 2:
                                    {
                                        t13 = 0x0;
                                        nlPushMatrix(t13);
                                        t13 = 0x146A;
                                        FUN_0c0c465c(t13);
                                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                        t13 = 0x1;
                                        nlPopMatrix(t13);
                                        t63 = *(int *)(((int)stk + 0));
                                        if (t63 != 0) {
                                            if (!(t63 != 1)) {
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                            }
                                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                            }
                                            t13 = 0x1;
                                            return (nlPopMatrix(t13));
                                        }
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                        t13 = (*(int *)0xC1EF574);
                                        t13 = (t13 << 2);
                                        t13 = (t13 + (((int)stk + 0) + 0x8));
                                        t13 = (*(int *)((t13 + 0x0)));
                                        FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                                        t13 = 0xC23EB48;
                                        FUN_0c015018(t13);
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 4:
                                    {
                                        (((struct o34_uint *)0xC23EAEC)->v) = t37;
                                        t13 = (FUN_0c011114());
                                        if (t13 == 0) {
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                        } else {
                                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                            FUN_0c0cec9a(t13);
                                            (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 6:
                                    {
                                        t85 = buStat(t13);
                                        if (t85 == 0) {
                                            (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        }
                                        if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 8:
                                    {
                                        t93 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t37);
                                        if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                            t96 = buFindExecFile(t13, 0xC23EB4E);
                                            (((struct o38_uint *)0xC23EAEC)->v) = t96;
                                            if (t96 == 0) {
                                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                            } else {
                                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                                t102 = buGetDiskFree(t13, 0x0);
                                                (((struct o38_uint *)0xC23EAEC)->v) = t102;
                                                if ((int)t102 >= (int)0x6E) {
                                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                                } else {
                                                    (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                                    (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                                }
                                            }
                                        } else {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                                        }
                                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 10:
                                    {
                                        FUN_0c010f0a();
                                        if ((*(int *)0xC2498F4) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 12:
                                    {
                                        FUN_0c0159a2(t13, 0xC23EB4E);
                                        if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                            t120 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 14:
                                    {
                                        t13 = 0x0;
                                        nlPushMatrix(t13);
                                        t13 = 0x146B;
                                        FUN_0c0c465c(t13);
                                        FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                        t13 = 0x1;
                                        nlPopMatrix(t13);
                                        t127 = *(int *)(((int)stk + 0));
                                        if (t127 != 0) {
                                            if (!(t127 != 1)) {
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                            }
                                        } else {
                                            t13 = 0xC23EB4E;
                                            FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                                        }
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 16:
                                    {
                                        t13 = 0xC23EB48;
                                        FUN_0c015018(t13);
                                        t13 = 0x10;
                                        FUN_0c010c40(t13);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 18:
                                    {
                                        t13 = 0x0;
                                        nlPushMatrix(t13);
                                        t13 = 0x146C;
                                        FUN_0c0c465c(t13);
                                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                        t13 = 0x1;
                                        nlPopMatrix(t13);
                                        t157 = *(int *)(((int)stk + 0));
                                        if (t157 != 0) {
                                            if (!(t157 != 1)) {
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                            }
                                        } else {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                                        }
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 20:
                                    {
                                        t13 = (*(int *)0xC1EF574);
                                        FUN_0c0112b0(t13);
                                        t13 = ((((struct o20_int *)0xC23EAEC)->v));
                                        t13 = (t13 + 0xD880);
                                        t183 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                        t13 = 0x0;
                                        t186 = t185;
                                        t188 = t187;
                                        t189 = 0xC0C465C;
                                        for (;;) {
                                            if ((int)t13 >= (int)0x6) {
                                                break;
                                            }
                                            t183 = 0xC23EB48;
                                            t188 = (*(signed char *)((t13 + t183)));
                                            t186 = ((((struct o20_int *)0xC23EAEC)->v));
                                            t188 = (unsigned char)t188;
                                            t184 = 0xC0E5DC0;
                                            t186 = (t186 + t13);
                                            t186 = (t186 + 0xD8B0);
                                            t183 = 0xF;
                                            t183 = ((int)((int)t188 / (int)t183));
                                            t184 = 0xC0E5F1C;
                                            t189 = t183;
                                            t183 = 0xF;
                                            t183 = ((int)((int)t188 % (int)t183));
                                            t189 = (t189 << 2);
                                            t188 = t183;
                                            t189 = (t189 << 1);
                                            t184 = t189;
                                            t189 = (t189 << 2);
                                            t189 = (t189 << 2);
                                            t189 = (t189 - t184);
                                            t189 = (t189 + 0xC0F4664);
                                            t188 = (t188 + t189);
                                            t189 = 0x8;
                                            t195 = 0xC23EB0C;
                                            for (;;) {
                                                if (t189 == 0) {
                                                    break;
                                                }
                                                t195 = (*(signed char *)((t188 + 0x0)));
                                                t189 = (t189 - 1);
                                                t188 = (t188 + 0xF);
                                                *(unsigned char *)((t186 + 0x0)) = t195;
                                                t186 = (t186 + 0x6);
                                            }
                                            t13 = (t13 + 0x1);
                                        }
                                        FUN_0c010c0c();
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    case 22:
                                    {
                                        if ((int)t13 < 0) {
                                            (((struct o34_uint *)0xC23EAEC)->v) = t37;
                                            t200 = (((struct o30_int *)0xC23EAEC)->v);
                                            if (t200 != 3) {
                                                if (t200 != 10) {
                                                    t13 = 0xC0F42E0;
                                                } else {
                                                    t13 = 0xC0F4304;
                                                }
                                            } else {
                                                t13 = 0xC0F4340;
                                            }
                                        } else {
                                            t237 = (((struct o30_int *)0xC23EAEC)->v);
                                            if (t237 != 3) {
                                                if (t237 != 10) {
                                                    t13 = 0xC0F42E0;
                                                } else {
                                                    t13 = 0xC0F4304;
                                                }
                                            } else {
                                                t13 = 0xC0F4340;
                                            }
                                        }
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010c14();
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                                        if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                            t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                                            FUN_0c0e2a4c(t13);
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    default:
                                    {
                                        t274 = (((struct o38_int *)0xC23EAEC)->v);
                                        if (t274 != 0xFFFFFF09) {
                                            if (t274 != 0xFFFFFF04) {
                                                t13 = 0xC0F42EC;
                                                FUN_0c0dcca0(t13);
                                                FUN_0c010e92();
                                            } else {
                                                t13 = 0xC1EEFC0;
                                                t13 = (*(int *)((t13 + 0x0)));
                                                FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                                t13 = 0xC0F42F8;
                                                FUN_0c0dcca0(t13);
                                                t13 = 0x1402;
                                                FUN_0c0c465c(t13);
                                                if (((*(int *)0xC2498F4) & 8) != 0) {
                                                    FUN_0c0154a4();
                                                    t13 = 0x5;
                                                    FUN_0c010c40(t13);
                                                }
                                            }
                                        } else {
                                            FUN_0c010f0a();
                                        }
                                        if ((*(int *)0xC2498F4) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                }
                            }
                            t13 = 0xC0F4310;
                            FUN_0c0dcca0(t13);
                            t13 = 0xC23EB48;
                            FUN_0c014fae(t13, 0.239999995f);
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t304 = (((struct o0_int *)0xC23EAEC)->v);
                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                            t306 = *(int *)0xC23EB38;
                            t307 = *(int *)0xC2498F4;
                            if ((unsigned int)t304 >= (unsigned int)0xD) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            switch ((t304 << 1)) {
                                case 0:
                                {
                                    if ((0xC0C0 & t307) != 0) {
                                        if ((t307 & 0x8080) != 0) {
                                            if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                            }
                                        } else {
                                            if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                            }
                                        }
                                    } else {
                                        if ((0xC & t307) != 0) {
                                            (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        } else {
                                            if ((t307 & 0x2) != 0) {
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                            }
                                        }
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 2:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146A;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t332 = *(int *)(((int)stk + 0));
                                    if (t332 != 0) {
                                        if (!(t332 != 1)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                    t13 = (*(int *)0xC1EF574);
                                    t13 = (t13 << 2);
                                    t13 = (t13 + (((int)stk + 0) + 0x8));
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 4:
                                {
                                    (((struct o34_uint *)0xC23EAEC)->v) = t306;
                                    t13 = (FUN_0c011114());
                                    if (t13 == 0) {
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    } else {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        FUN_0c0cec9a(t13);
                                        (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 6:
                                {
                                    t354 = buStat(t13);
                                    if (t354 == 0) {
                                        (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    }
                                    if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 8:
                                {
                                    t362 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t306);
                                    if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        t365 = buFindExecFile(t13, 0xC23EB4E);
                                        (((struct o38_uint *)0xC23EAEC)->v) = t365;
                                        if (t365 == 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        } else {
                                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                            t371 = buGetDiskFree(t13, 0x0);
                                            (((struct o38_uint *)0xC23EAEC)->v) = t371;
                                            if ((int)t371 >= (int)0x6E) {
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                            } else {
                                                (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                            }
                                        }
                                    } else {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                                    }
                                    if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 10:
                                {
                                    FUN_0c010f0a();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 12:
                                {
                                    FUN_0c0159a2(t13, 0xC23EB4E);
                                    if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        t389 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 14:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146B;
                                    FUN_0c0c465c(t13);
                                    FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                    *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t396 = *(int *)(((int)stk + 0));
                                    if (t396 != 0) {
                                        if (!(t396 != 1)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                    } else {
                                        t13 = 0xC23EB4E;
                                        FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                                    }
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 16:
                                {
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    t13 = 0x10;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 18:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146C;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t426 = *(int *)(((int)stk + 0));
                                    if (t426 != 0) {
                                        if (!(t426 != 1)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                    } else {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                                    }
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 20:
                                {
                                    t13 = (*(int *)0xC1EF574);
                                    FUN_0c0112b0(t13);
                                    t13 = ((((struct o20_int *)0xC23EAEC)->v));
                                    t13 = (t13 + 0xD880);
                                    t452 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                    t13 = 0x0;
                                    t455 = t454;
                                    t457 = t456;
                                    t458 = 0xC0C465C;
                                    for (;;) {
                                        if ((int)t13 >= (int)0x6) {
                                            break;
                                        }
                                        t452 = 0xC23EB48;
                                        t457 = (*(signed char *)((t13 + t452)));
                                        t455 = ((((struct o20_int *)0xC23EAEC)->v));
                                        t457 = (unsigned char)t457;
                                        t453 = 0xC0E5DC0;
                                        t455 = (t455 + t13);
                                        t455 = (t455 + 0xD8B0);
                                        t452 = 0xF;
                                        t452 = ((int)((int)t457 / (int)t452));
                                        t453 = 0xC0E5F1C;
                                        t458 = t452;
                                        t452 = 0xF;
                                        t452 = ((int)((int)t457 % (int)t452));
                                        t458 = (t458 << 2);
                                        t457 = t452;
                                        t458 = (t458 << 1);
                                        t453 = t458;
                                        t458 = (t458 << 2);
                                        t458 = (t458 << 2);
                                        t458 = (t458 - t453);
                                        t458 = (t458 + 0xC0F4664);
                                        t457 = (t457 + t458);
                                        t458 = 0x8;
                                        t464 = 0xC23EB0C;
                                        for (;;) {
                                            if (t458 == 0) {
                                                break;
                                            }
                                            t464 = (*(signed char *)((t457 + 0x0)));
                                            t458 = (t458 - 1);
                                            t457 = (t457 + 0xF);
                                            *(unsigned char *)((t455 + 0x0)) = t464;
                                            t455 = (t455 + 0x6);
                                        }
                                        t13 = (t13 + 0x1);
                                    }
                                    FUN_0c010c0c();
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 22:
                                {
                                    if ((int)t13 < 0) {
                                        (((struct o34_uint *)0xC23EAEC)->v) = t306;
                                        t469 = (((struct o30_int *)0xC23EAEC)->v);
                                        if (t469 != 3) {
                                            if (t469 != 10) {
                                                t13 = 0xC0F42E0;
                                            } else {
                                                t13 = 0xC0F4304;
                                            }
                                        } else {
                                            t13 = 0xC0F4340;
                                        }
                                    } else {
                                        t506 = (((struct o30_int *)0xC23EAEC)->v);
                                        if (t506 != 3) {
                                            if (t506 != 10) {
                                                t13 = 0xC0F42E0;
                                            } else {
                                                t13 = 0xC0F4304;
                                            }
                                        } else {
                                            t13 = 0xC0F4340;
                                        }
                                    }
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                                    if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                        t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                                        FUN_0c0e2a4c(t13);
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                default:
                                {
                                    t543 = (((struct o38_int *)0xC23EAEC)->v);
                                    if (t543 != 0xFFFFFF09) {
                                        if (t543 != 0xFFFFFF04) {
                                            t13 = 0xC0F42EC;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010e92();
                                        } else {
                                            t13 = 0xC1EEFC0;
                                            t13 = (*(int *)((t13 + 0x0)));
                                            FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                            t13 = 0xC0F42F8;
                                            FUN_0c0dcca0(t13);
                                            t13 = 0x1402;
                                            FUN_0c0c465c(t13);
                                            if (((*(int *)0xC2498F4) & 8) != 0) {
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                            }
                                        }
                                    } else {
                                        FUN_0c010f0a();
                                    }
                                    if ((*(int *)0xC2498F4) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                            }
                        }
                    }
                    *(unsigned int *)(((int)stk + 4)) = t13;
                    if ((((((struct oC_int *)0xC52314C)->v)) & 0x20) != 0) {
                        t13 = 0x1470;
                        FUN_0c0c465c(t13);
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0xC0F4328;
                        FUN_0c0dcca0(t13);
                        t13 = (*(int *)0xC1EF574);
                        t13 = (t13 << 2);
                        t13 = (*(int *)((t13 + 0xC0F4288)));
                        FUN_0c0c465c(t13);
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x1463;
                        FUN_0c0c465c(t13);
                        if ((int)((((struct o0_int *)0xC23EAEC)->v)) < (int)0x5) {
                            t13 = 0xC0F4334;
                            FUN_0c0dcca0(t13);
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (*(int *)((t13 + 0xC0F4298)));
                            FUN_0c0c465c(t13);
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t587 = (((struct o0_int *)0xC23EAEC)->v);
                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                            t589 = *(int *)0xC23EB38;
                            t590 = *(int *)0xC2498F4;
                            if ((unsigned int)t587 >= (unsigned int)0xD) {
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            switch ((t587 << 1)) {
                                case 0:
                                {
                                    if ((0xC0C0 & t590) != 0) {
                                        if ((t590 & 0x8080) != 0) {
                                            if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                            }
                                        } else {
                                            if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                                *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                            }
                                        }
                                    } else {
                                        if ((0xC & t590) != 0) {
                                            (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        } else {
                                            if ((t590 & 0x2) != 0) {
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                            }
                                        }
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 2:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146A;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t615 = *(int *)(((int)stk + 0));
                                    if (t615 != 0) {
                                        if (!(t615 != 1)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        if (((*(int *)0xC2498F4) & 2) != 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                        t13 = 0x1;
                                        return (nlPopMatrix(t13));
                                    }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                    t13 = (*(int *)0xC1EF574);
                                    t13 = (t13 << 2);
                                    t13 = (t13 + (((int)stk + 0) + 0x8));
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 4:
                                {
                                    (((struct o34_uint *)0xC23EAEC)->v) = t589;
                                    t13 = (FUN_0c011114());
                                    if (t13 == 0) {
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    } else {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        FUN_0c0cec9a(t13);
                                        (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 6:
                                {
                                    t637 = buStat(t13);
                                    if (t637 == 0) {
                                        (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    }
                                    if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 8:
                                {
                                    t645 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t589);
                                    if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        t648 = buFindExecFile(t13, 0xC23EB4E);
                                        (((struct o38_uint *)0xC23EAEC)->v) = t648;
                                        if (t648 == 0) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                        } else {
                                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                            t654 = buGetDiskFree(t13, 0x0);
                                            (((struct o38_uint *)0xC23EAEC)->v) = t654;
                                            if ((int)t654 >= (int)0x6E) {
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                            } else {
                                                (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                                (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                            }
                                        }
                                    } else {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                                    }
                                    if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 10:
                                {
                                    FUN_0c010f0a();
                                    if ((*(int *)0xC2498F4) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 12:
                                {
                                    FUN_0c0159a2(t13, 0xC23EB4E);
                                    if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        t672 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 14:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146B;
                                    FUN_0c0c465c(t13);
                                    FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                    *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t679 = *(int *)(((int)stk + 0));
                                    if (t679 != 0) {
                                        if (!(t679 != 1)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                    } else {
                                        t13 = 0xC23EB4E;
                                        FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                                    }
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 16:
                                {
                                    t13 = 0xC23EB48;
                                    FUN_0c015018(t13);
                                    t13 = 0x10;
                                    FUN_0c010c40(t13);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 18:
                                {
                                    t13 = 0x0;
                                    nlPushMatrix(t13);
                                    t13 = 0x146C;
                                    FUN_0c0c465c(t13);
                                    *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                    t13 = 0x1;
                                    nlPopMatrix(t13);
                                    t709 = *(int *)(((int)stk + 0));
                                    if (t709 != 0) {
                                        if (!(t709 != 1)) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                        }
                                    } else {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                                    }
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 20:
                                {
                                    t13 = (*(int *)0xC1EF574);
                                    FUN_0c0112b0(t13);
                                    t13 = ((((struct o20_int *)0xC23EAEC)->v));
                                    t13 = (t13 + 0xD880);
                                    t735 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                    t13 = 0x0;
                                    t738 = t737;
                                    t740 = t739;
                                    t741 = 0xC0C465C;
                                    for (;;) {
                                        if ((int)t13 >= (int)0x6) {
                                            break;
                                        }
                                        t735 = 0xC23EB48;
                                        t740 = (*(signed char *)((t13 + t735)));
                                        t738 = ((((struct o20_int *)0xC23EAEC)->v));
                                        t740 = (unsigned char)t740;
                                        t736 = 0xC0E5DC0;
                                        t738 = (t738 + t13);
                                        t738 = (t738 + 0xD8B0);
                                        t735 = 0xF;
                                        t735 = ((int)((int)t740 / (int)t735));
                                        t736 = 0xC0E5F1C;
                                        t741 = t735;
                                        t735 = 0xF;
                                        t735 = ((int)((int)t740 % (int)t735));
                                        t741 = (t741 << 2);
                                        t740 = t735;
                                        t741 = (t741 << 1);
                                        t736 = t741;
                                        t741 = (t741 << 2);
                                        t741 = (t741 << 2);
                                        t741 = (t741 - t736);
                                        t741 = (t741 + 0xC0F4664);
                                        t740 = (t740 + t741);
                                        t741 = 0x8;
                                        t747 = 0xC23EB0C;
                                        for (;;) {
                                            if (t741 == 0) {
                                                break;
                                            }
                                            t747 = (*(signed char *)((t740 + 0x0)));
                                            t741 = (t741 - 1);
                                            t740 = (t740 + 0xF);
                                            *(unsigned char *)((t738 + 0x0)) = t747;
                                            t738 = (t738 + 0x6);
                                        }
                                        t13 = (t13 + 0x1);
                                    }
                                    FUN_0c010c0c();
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                case 22:
                                {
                                    if ((int)t13 < 0) {
                                        (((struct o34_uint *)0xC23EAEC)->v) = t589;
                                        t752 = (((struct o30_int *)0xC23EAEC)->v);
                                        if (t752 != 3) {
                                            if (t752 != 10) {
                                                t13 = 0xC0F42E0;
                                            } else {
                                                t13 = 0xC0F4304;
                                            }
                                        } else {
                                            t13 = 0xC0F4340;
                                        }
                                    } else {
                                        t789 = (((struct o30_int *)0xC23EAEC)->v);
                                        if (t789 != 3) {
                                            if (t789 != 10) {
                                                t13 = 0xC0F42E0;
                                            } else {
                                                t13 = 0xC0F4304;
                                            }
                                        } else {
                                            t13 = 0xC0F4340;
                                        }
                                    }
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010c14();
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                                    if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                        t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                                        FUN_0c0e2a4c(t13);
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                default:
                                {
                                    t826 = (((struct o38_int *)0xC23EAEC)->v);
                                    if (t826 != 0xFFFFFF09) {
                                        if (t826 != 0xFFFFFF04) {
                                            t13 = 0xC0F42EC;
                                            FUN_0c0dcca0(t13);
                                            FUN_0c010e92();
                                        } else {
                                            t13 = 0xC1EEFC0;
                                            t13 = (*(int *)((t13 + 0x0)));
                                            FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                            t13 = 0xC0F42F8;
                                            FUN_0c0dcca0(t13);
                                            t13 = 0x1402;
                                            FUN_0c0c465c(t13);
                                            if (((*(int *)0xC2498F4) & 8) != 0) {
                                                FUN_0c0154a4();
                                                t13 = 0x5;
                                                FUN_0c010c40(t13);
                                            }
                                        }
                                    } else {
                                        FUN_0c010f0a();
                                    }
                                    if ((*(int *)0xC2498F4) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                            }
                        }
                        t13 = 0xC0F4310;
                        FUN_0c0dcca0(t13);
                        t13 = 0xC23EB48;
                        FUN_0c014fae(t13, 0.239999995f);
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t856 = (((struct o0_int *)0xC23EAEC)->v);
                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                        t858 = *(int *)0xC23EB38;
                        t859 = *(int *)0xC2498F4;
                        if ((unsigned int)t856 >= (unsigned int)0xD) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        switch ((t856 << 1)) {
                            case 0:
                            {
                                if ((0xC0C0 & t859) != 0) {
                                    if ((t859 & 0x8080) != 0) {
                                        if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                        }
                                    } else {
                                        if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                        }
                                    }
                                } else {
                                    if ((0xC & t859) != 0) {
                                        (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    } else {
                                        if ((t859 & 0x2) != 0) {
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                        }
                                    }
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 2:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146A;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t884 = *(int *)(((int)stk + 0));
                                if (t884 != 0) {
                                    if (!(t884 != 1)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                t13 = (*(int *)0xC1EF574);
                                t13 = (t13 << 2);
                                t13 = (t13 + (((int)stk + 0) + 0x8));
                                t13 = (*(int *)((t13 + 0x0)));
                                FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 4:
                            {
                                (((struct o34_uint *)0xC23EAEC)->v) = t858;
                                t13 = (FUN_0c011114());
                                if (t13 == 0) {
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                } else {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    FUN_0c0cec9a(t13);
                                    (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 6:
                            {
                                t906 = buStat(t13);
                                if (t906 == 0) {
                                    (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                }
                                if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 8:
                            {
                                t914 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t858);
                                if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    t917 = buFindExecFile(t13, 0xC23EB4E);
                                    (((struct o38_uint *)0xC23EAEC)->v) = t917;
                                    if (t917 == 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    } else {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        t923 = buGetDiskFree(t13, 0x0);
                                        (((struct o38_uint *)0xC23EAEC)->v) = t923;
                                        if ((int)t923 >= (int)0x6E) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                        } else {
                                            (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                        }
                                    }
                                } else {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                                }
                                if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 10:
                            {
                                FUN_0c010f0a();
                                if ((*(int *)0xC2498F4) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 12:
                            {
                                FUN_0c0159a2(t13, 0xC23EB4E);
                                if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    t941 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 14:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146B;
                                FUN_0c0c465c(t13);
                                FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t948 = *(int *)(((int)stk + 0));
                                if (t948 != 0) {
                                    if (!(t948 != 1)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                } else {
                                    t13 = 0xC23EB4E;
                                    FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                                }
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 16:
                            {
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                t13 = 0x10;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 18:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146C;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t978 = *(int *)(((int)stk + 0));
                                if (t978 != 0) {
                                    if (!(t978 != 1)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                } else {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                                }
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 20:
                            {
                                t13 = (*(int *)0xC1EF574);
                                FUN_0c0112b0(t13);
                                t13 = ((((struct o20_int *)0xC23EAEC)->v));
                                t13 = (t13 + 0xD880);
                                t1004 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                t13 = 0x0;
                                t1007 = t1006;
                                t1009 = t1008;
                                t1010 = 0xC0C465C;
                                for (;;) {
                                    if ((int)t13 >= (int)0x6) {
                                        break;
                                    }
                                    t1004 = 0xC23EB48;
                                    t1009 = (*(signed char *)((t13 + t1004)));
                                    t1007 = ((((struct o20_int *)0xC23EAEC)->v));
                                    t1009 = (unsigned char)t1009;
                                    t1005 = 0xC0E5DC0;
                                    t1007 = (t1007 + t13);
                                    t1007 = (t1007 + 0xD8B0);
                                    t1004 = 0xF;
                                    t1004 = ((int)((int)t1009 / (int)t1004));
                                    t1005 = 0xC0E5F1C;
                                    t1010 = t1004;
                                    t1004 = 0xF;
                                    t1004 = ((int)((int)t1009 % (int)t1004));
                                    t1010 = (t1010 << 2);
                                    t1009 = t1004;
                                    t1010 = (t1010 << 1);
                                    t1005 = t1010;
                                    t1010 = (t1010 << 2);
                                    t1010 = (t1010 << 2);
                                    t1010 = (t1010 - t1005);
                                    t1010 = (t1010 + 0xC0F4664);
                                    t1009 = (t1009 + t1010);
                                    t1010 = 0x8;
                                    t1016 = 0xC23EB0C;
                                    for (;;) {
                                        if (t1010 == 0) {
                                            break;
                                        }
                                        t1016 = (*(signed char *)((t1009 + 0x0)));
                                        t1010 = (t1010 - 1);
                                        t1009 = (t1009 + 0xF);
                                        *(unsigned char *)((t1007 + 0x0)) = t1016;
                                        t1007 = (t1007 + 0x6);
                                    }
                                    t13 = (t13 + 0x1);
                                }
                                FUN_0c010c0c();
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 22:
                            {
                                if ((int)t13 < 0) {
                                    (((struct o34_uint *)0xC23EAEC)->v) = t858;
                                    t1021 = (((struct o30_int *)0xC23EAEC)->v);
                                    if (t1021 != 3) {
                                        if (t1021 != 10) {
                                            t13 = 0xC0F42E0;
                                        } else {
                                            t13 = 0xC0F4304;
                                        }
                                    } else {
                                        t13 = 0xC0F4340;
                                    }
                                } else {
                                    t1058 = (((struct o30_int *)0xC23EAEC)->v);
                                    if (t1058 != 3) {
                                        if (t1058 != 10) {
                                            t13 = 0xC0F42E0;
                                        } else {
                                            t13 = 0xC0F4304;
                                        }
                                    } else {
                                        t13 = 0xC0F4340;
                                    }
                                }
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                                if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                    t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                                    FUN_0c0e2a4c(t13);
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            default:
                            {
                                t1095 = (((struct o38_int *)0xC23EAEC)->v);
                                if (t1095 != 0xFFFFFF09) {
                                    if (t1095 != 0xFFFFFF04) {
                                        t13 = 0xC0F42EC;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010e92();
                                    } else {
                                        t13 = 0xC1EEFC0;
                                        t13 = (*(int *)((t13 + 0x0)));
                                        FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                        t13 = 0xC0F42F8;
                                        FUN_0c0dcca0(t13);
                                        t13 = 0x1402;
                                        FUN_0c0c465c(t13);
                                        if (((*(int *)0xC2498F4) & 8) != 0) {
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                        }
                                    }
                                } else {
                                    FUN_0c010f0a();
                                }
                                if ((*(int *)0xC2498F4) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                        }
                    }
                    t13 = 0x0;
                    nlPushMatrix(t13);
                    t13 = 0xC0F4328;
                    FUN_0c0dcca0(t13);
                    t13 = (*(int *)0xC1EF574);
                    t13 = (t13 << 2);
                    t13 = (*(int *)((t13 + 0xC0F4288)));
                    FUN_0c0c465c(t13);
                    t13 = 0x1;
                    nlPopMatrix(t13);
                    t13 = 0x0;
                    nlPushMatrix(t13);
                    t13 = 0x1463;
                    FUN_0c0c465c(t13);
                    if ((int)((((struct o0_int *)0xC23EAEC)->v)) < (int)0x5) {
                        t13 = 0xC0F4334;
                        FUN_0c0dcca0(t13);
                        t13 = (*(int *)0xC1EF574);
                        t13 = (t13 << 2);
                        t13 = (*(int *)((t13 + 0xC0F4298)));
                        FUN_0c0c465c(t13);
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t1137 = (((struct o0_int *)0xC23EAEC)->v);
                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                        t1139 = *(int *)0xC23EB38;
                        t1140 = *(int *)0xC2498F4;
                        if ((unsigned int)t1137 >= (unsigned int)0xD) {
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        switch ((t1137 << 1)) {
                            case 0:
                            {
                                if ((0xC0C0 & t1140) != 0) {
                                    if ((t1140 & 0x8080) != 0) {
                                        if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                        }
                                    } else {
                                        if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                        }
                                    }
                                } else {
                                    if ((0xC & t1140) != 0) {
                                        (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    } else {
                                        if ((t1140 & 0x2) != 0) {
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                        }
                                    }
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 2:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146A;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t1165 = *(int *)(((int)stk + 0));
                                if (t1165 != 0) {
                                    if (!(t1165 != 1)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    if (((*(int *)0xC2498F4) & 2) != 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                    t13 = 0x1;
                                    return (nlPopMatrix(t13));
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                                t13 = (*(int *)0xC1EF574);
                                t13 = (t13 << 2);
                                t13 = (t13 + (((int)stk + 0) + 0x8));
                                t13 = (*(int *)((t13 + 0x0)));
                                FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 4:
                            {
                                (((struct o34_uint *)0xC23EAEC)->v) = t1139;
                                t13 = (FUN_0c011114());
                                if (t13 == 0) {
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                } else {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    FUN_0c0cec9a(t13);
                                    (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 6:
                            {
                                t1187 = buStat(t13);
                                if (t1187 == 0) {
                                    (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                }
                                if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 8:
                            {
                                t1195 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1139);
                                if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    t1198 = buFindExecFile(t13, 0xC23EB4E);
                                    (((struct o38_uint *)0xC23EAEC)->v) = t1198;
                                    if (t1198 == 0) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                    } else {
                                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                        t1204 = buGetDiskFree(t13, 0x0);
                                        (((struct o38_uint *)0xC23EAEC)->v) = t1204;
                                        if ((int)t1204 >= (int)0x6E) {
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                        } else {
                                            (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                            (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                        }
                                    }
                                } else {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                                }
                                if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 10:
                            {
                                FUN_0c010f0a();
                                if ((*(int *)0xC2498F4) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 12:
                            {
                                FUN_0c0159a2(t13, 0xC23EB4E);
                                if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    t1222 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 14:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146B;
                                FUN_0c0c465c(t13);
                                FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t1229 = *(int *)(((int)stk + 0));
                                if (t1229 != 0) {
                                    if (!(t1229 != 1)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                } else {
                                    t13 = 0xC23EB4E;
                                    FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                                }
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 16:
                            {
                                t13 = 0xC23EB48;
                                FUN_0c015018(t13);
                                t13 = 0x10;
                                FUN_0c010c40(t13);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 18:
                            {
                                t13 = 0x0;
                                nlPushMatrix(t13);
                                t13 = 0x146C;
                                FUN_0c0c465c(t13);
                                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                                t13 = 0x1;
                                nlPopMatrix(t13);
                                t1259 = *(int *)(((int)stk + 0));
                                if (t1259 != 0) {
                                    if (!(t1259 != 1)) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                    }
                                } else {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                                }
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 20:
                            {
                                t13 = (*(int *)0xC1EF574);
                                FUN_0c0112b0(t13);
                                t13 = ((((struct o20_int *)0xC23EAEC)->v));
                                t13 = (t13 + 0xD880);
                                t1285 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                                t13 = 0x0;
                                t1288 = t1287;
                                t1290 = t1289;
                                t1291 = 0xC0C465C;
                                for (;;) {
                                    if ((int)t13 >= (int)0x6) {
                                        break;
                                    }
                                    t1285 = 0xC23EB48;
                                    t1290 = (*(signed char *)((t13 + t1285)));
                                    t1288 = ((((struct o20_int *)0xC23EAEC)->v));
                                    t1290 = (unsigned char)t1290;
                                    t1286 = 0xC0E5DC0;
                                    t1288 = (t1288 + t13);
                                    t1288 = (t1288 + 0xD8B0);
                                    t1285 = 0xF;
                                    t1285 = ((int)((int)t1290 / (int)t1285));
                                    t1286 = 0xC0E5F1C;
                                    t1291 = t1285;
                                    t1285 = 0xF;
                                    t1285 = ((int)((int)t1290 % (int)t1285));
                                    t1291 = (t1291 << 2);
                                    t1290 = t1285;
                                    t1291 = (t1291 << 1);
                                    t1286 = t1291;
                                    t1291 = (t1291 << 2);
                                    t1291 = (t1291 << 2);
                                    t1291 = (t1291 - t1286);
                                    t1291 = (t1291 + 0xC0F4664);
                                    t1290 = (t1290 + t1291);
                                    t1291 = 0x8;
                                    t1297 = 0xC23EB0C;
                                    for (;;) {
                                        if (t1291 == 0) {
                                            break;
                                        }
                                        t1297 = (*(signed char *)((t1290 + 0x0)));
                                        t1291 = (t1291 - 1);
                                        t1290 = (t1290 + 0xF);
                                        *(unsigned char *)((t1288 + 0x0)) = t1297;
                                        t1288 = (t1288 + 0x6);
                                    }
                                    t13 = (t13 + 0x1);
                                }
                                FUN_0c010c0c();
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            case 22:
                            {
                                if ((int)t13 < 0) {
                                    (((struct o34_uint *)0xC23EAEC)->v) = t1139;
                                    t1302 = (((struct o30_int *)0xC23EAEC)->v);
                                    if (t1302 != 3) {
                                        if (t1302 != 10) {
                                            t13 = 0xC0F42E0;
                                        } else {
                                            t13 = 0xC0F4304;
                                        }
                                    } else {
                                        t13 = 0xC0F4340;
                                    }
                                } else {
                                    t1339 = (((struct o30_int *)0xC23EAEC)->v);
                                    if (t1339 != 3) {
                                        if (t1339 != 10) {
                                            t13 = 0xC0F42E0;
                                        } else {
                                            t13 = 0xC0F4304;
                                        }
                                    } else {
                                        t13 = 0xC0F4340;
                                    }
                                }
                                FUN_0c0dcca0(t13);
                                FUN_0c010c14();
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                                if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                    t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                                    FUN_0c0e2a4c(t13);
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            default:
                            {
                                t1376 = (((struct o38_int *)0xC23EAEC)->v);
                                if (t1376 != 0xFFFFFF09) {
                                    if (t1376 != 0xFFFFFF04) {
                                        t13 = 0xC0F42EC;
                                        FUN_0c0dcca0(t13);
                                        FUN_0c010e92();
                                    } else {
                                        t13 = 0xC1EEFC0;
                                        t13 = (*(int *)((t13 + 0x0)));
                                        FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                        t13 = 0xC0F42F8;
                                        FUN_0c0dcca0(t13);
                                        t13 = 0x1402;
                                        FUN_0c0c465c(t13);
                                        if (((*(int *)0xC2498F4) & 8) != 0) {
                                            FUN_0c0154a4();
                                            t13 = 0x5;
                                            FUN_0c010c40(t13);
                                        }
                                    }
                                } else {
                                    FUN_0c010f0a();
                                }
                                if ((*(int *)0xC2498F4) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                        }
                    }
                    t13 = 0xC0F4310;
                    FUN_0c0dcca0(t13);
                    t13 = 0xC23EB48;
                    FUN_0c014fae(t13, 0.239999995f);
                    t13 = 0x1;
                    nlPopMatrix(t13);
                    t1406 = (((struct o0_int *)0xC23EAEC)->v);
                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                    t1408 = *(int *)0xC23EB38;
                    t1409 = *(int *)0xC2498F4;
                    if ((unsigned int)t1406 >= (unsigned int)0xD) {
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    switch ((t1406 << 1)) {
                        case 0:
                        {
                            if ((0xC0C0 & t1409) != 0) {
                                if ((t1409 & 0x8080) != 0) {
                                    if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                    }
                                } else {
                                    if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                    }
                                }
                            } else {
                                if ((0xC & t1409) != 0) {
                                    (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                } else {
                                    if ((t1409 & 0x2) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    }
                                }
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 2:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146A;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1434 = *(int *)(((int)stk + 0));
                            if (t1434 != 0) {
                                if (!(t1434 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (t13 + (((int)stk + 0) + 0x8));
                            t13 = (*(int *)((t13 + 0x0)));
                            FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 4:
                        {
                            (((struct o34_uint *)0xC23EAEC)->v) = t1408;
                            t13 = (FUN_0c011114());
                            if (t13 == 0) {
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                            } else {
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                FUN_0c0cec9a(t13);
                                (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 6:
                        {
                            t1456 = buStat(t13);
                            if (t1456 == 0) {
                                (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            }
                            if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 8:
                        {
                            t1464 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1408);
                            if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                t1467 = buFindExecFile(t13, 0xC23EB4E);
                                (((struct o38_uint *)0xC23EAEC)->v) = t1467;
                                if (t1467 == 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                } else {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    t1473 = buGetDiskFree(t13, 0x0);
                                    (((struct o38_uint *)0xC23EAEC)->v) = t1473;
                                    if ((int)t1473 >= (int)0x6E) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                    } else {
                                        (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                    }
                                }
                            } else {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 10:
                        {
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 12:
                        {
                            FUN_0c0159a2(t13, 0xC23EB4E);
                            if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                t1491 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 14:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146B;
                            FUN_0c0c465c(t13);
                            FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1498 = *(int *)(((int)stk + 0));
                            if (t1498 != 0) {
                                if (!(t1498 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                            } else {
                                t13 = 0xC23EB4E;
                                FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 16:
                        {
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            t13 = 0x10;
                            FUN_0c010c40(t13);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 18:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146C;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1528 = *(int *)(((int)stk + 0));
                            if (t1528 != 0) {
                                if (!(t1528 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                            } else {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 20:
                        {
                            t13 = (*(int *)0xC1EF574);
                            FUN_0c0112b0(t13);
                            t13 = ((((struct o20_int *)0xC23EAEC)->v));
                            t13 = (t13 + 0xD880);
                            t1554 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                            t13 = 0x0;
                            t1557 = t1556;
                            t1559 = t1558;
                            t1560 = 0xC0C465C;
                            for (;;) {
                                if ((int)t13 >= (int)0x6) {
                                    break;
                                }
                                t1554 = 0xC23EB48;
                                t1559 = (*(signed char *)((t13 + t1554)));
                                t1557 = ((((struct o20_int *)0xC23EAEC)->v));
                                t1559 = (unsigned char)t1559;
                                t1555 = 0xC0E5DC0;
                                t1557 = (t1557 + t13);
                                t1557 = (t1557 + 0xD8B0);
                                t1554 = 0xF;
                                t1554 = ((int)((int)t1559 / (int)t1554));
                                t1555 = 0xC0E5F1C;
                                t1560 = t1554;
                                t1554 = 0xF;
                                t1554 = ((int)((int)t1559 % (int)t1554));
                                t1560 = (t1560 << 2);
                                t1559 = t1554;
                                t1560 = (t1560 << 1);
                                t1555 = t1560;
                                t1560 = (t1560 << 2);
                                t1560 = (t1560 << 2);
                                t1560 = (t1560 - t1555);
                                t1560 = (t1560 + 0xC0F4664);
                                t1559 = (t1559 + t1560);
                                t1560 = 0x8;
                                t1566 = 0xC23EB0C;
                                for (;;) {
                                    if (t1560 == 0) {
                                        break;
                                    }
                                    t1566 = (*(signed char *)((t1559 + 0x0)));
                                    t1560 = (t1560 - 1);
                                    t1559 = (t1559 + 0xF);
                                    *(unsigned char *)((t1557 + 0x0)) = t1566;
                                    t1557 = (t1557 + 0x6);
                                }
                                t13 = (t13 + 0x1);
                            }
                            FUN_0c010c0c();
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 22:
                        {
                            if ((int)t13 < 0) {
                                (((struct o34_uint *)0xC23EAEC)->v) = t1408;
                                t1571 = (((struct o30_int *)0xC23EAEC)->v);
                                if (t1571 != 3) {
                                    if (t1571 != 10) {
                                        t13 = 0xC0F42E0;
                                    } else {
                                        t13 = 0xC0F4304;
                                    }
                                } else {
                                    t13 = 0xC0F4340;
                                }
                            } else {
                                t1608 = (((struct o30_int *)0xC23EAEC)->v);
                                if (t1608 != 3) {
                                    if (t1608 != 10) {
                                        t13 = 0xC0F42E0;
                                    } else {
                                        t13 = 0xC0F4304;
                                    }
                                } else {
                                    t13 = 0xC0F4340;
                                }
                            }
                            FUN_0c0dcca0(t13);
                            FUN_0c010c14();
                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                            FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                            if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                                FUN_0c0e2a4c(t13);
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        default:
                        {
                            t1645 = (((struct o38_int *)0xC23EAEC)->v);
                            if (t1645 != 0xFFFFFF09) {
                                if (t1645 != 0xFFFFFF04) {
                                    t13 = 0xC0F42EC;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010e92();
                                } else {
                                    t13 = 0xC1EEFC0;
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                    t13 = 0xC0F42F8;
                                    FUN_0c0dcca0(t13);
                                    t13 = 0x1402;
                                    FUN_0c0c465c(t13);
                                    if (((*(int *)0xC2498F4) & 8) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    }
                                }
                            } else {
                                FUN_0c010f0a();
                            }
                            if ((*(int *)0xC2498F4) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                    }
                }
                t13 = 0x0;
                nlPushMatrix(t13);
                t13 = 0xC0F4328;
                FUN_0c0dcca0(t13);
                t13 = (*(int *)0xC1EF574);
                t13 = (t13 << 2);
                t13 = (*(int *)((t13 + 0xC0F4288)));
                FUN_0c0c465c(t13);
                t13 = 0x1;
                nlPopMatrix(t13);
                t13 = 0x0;
                nlPushMatrix(t13);
                t13 = 0x1463;
                FUN_0c0c465c(t13);
                if ((int)((((struct o0_int *)0xC23EAEC)->v)) < (int)0x5) {
                    t13 = 0xC0F4334;
                    FUN_0c0dcca0(t13);
                    t13 = (*(int *)0xC1EF574);
                    t13 = (t13 << 2);
                    t13 = (*(int *)((t13 + 0xC0F4298)));
                    FUN_0c0c465c(t13);
                    t13 = 0x1;
                    nlPopMatrix(t13);
                    t1686 = (((struct o0_int *)0xC23EAEC)->v);
                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                    t1688 = *(int *)0xC23EB38;
                    t1689 = *(int *)0xC2498F4;
                    if ((unsigned int)t1686 >= (unsigned int)0xD) {
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    switch ((t1686 << 1)) {
                        case 0:
                        {
                            if ((0xC0C0 & t1689) != 0) {
                                if ((t1689 & 0x8080) != 0) {
                                    if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                    }
                                } else {
                                    if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                    }
                                }
                            } else {
                                if ((0xC & t1689) != 0) {
                                    (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                } else {
                                    if ((t1689 & 0x2) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    }
                                }
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 2:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146A;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1714 = *(int *)(((int)stk + 0));
                            if (t1714 != 0) {
                                if (!(t1714 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t13 = 0x1;
                                return (nlPopMatrix(t13));
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                            t13 = (*(int *)0xC1EF574);
                            t13 = (t13 << 2);
                            t13 = (t13 + (((int)stk + 0) + 0x8));
                            t13 = (*(int *)((t13 + 0x0)));
                            FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 4:
                        {
                            (((struct o34_uint *)0xC23EAEC)->v) = t1688;
                            t13 = (FUN_0c011114());
                            if (t13 == 0) {
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                            } else {
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                FUN_0c0cec9a(t13);
                                (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 6:
                        {
                            t1736 = buStat(t13);
                            if (t1736 == 0) {
                                (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            }
                            if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 8:
                        {
                            t1744 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1688);
                            if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                t1747 = buFindExecFile(t13, 0xC23EB4E);
                                (((struct o38_uint *)0xC23EAEC)->v) = t1747;
                                if (t1747 == 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                } else {
                                    t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                    t1753 = buGetDiskFree(t13, 0x0);
                                    (((struct o38_uint *)0xC23EAEC)->v) = t1753;
                                    if ((int)t1753 >= (int)0x6E) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                    } else {
                                        (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                    }
                                }
                            } else {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 10:
                        {
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 12:
                        {
                            FUN_0c0159a2(t13, 0xC23EB4E);
                            if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                t1771 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 14:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146B;
                            FUN_0c0c465c(t13);
                            FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1778 = *(int *)(((int)stk + 0));
                            if (t1778 != 0) {
                                if (!(t1778 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                            } else {
                                t13 = 0xC23EB4E;
                                FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 16:
                        {
                            t13 = 0xC23EB48;
                            FUN_0c015018(t13);
                            t13 = 0x10;
                            FUN_0c010c40(t13);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 18:
                        {
                            t13 = 0x0;
                            nlPushMatrix(t13);
                            t13 = 0x146C;
                            FUN_0c0c465c(t13);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t13 = 0x1;
                            nlPopMatrix(t13);
                            t1808 = *(int *)(((int)stk + 0));
                            if (t1808 != 0) {
                                if (!(t1808 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                            } else {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 20:
                        {
                            t13 = (*(int *)0xC1EF574);
                            FUN_0c0112b0(t13);
                            t13 = ((((struct o20_int *)0xC23EAEC)->v));
                            t13 = (t13 + 0xD880);
                            t1834 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                            t13 = 0x0;
                            t1837 = t1836;
                            t1839 = t1838;
                            t1840 = 0xC0C465C;
                            for (;;) {
                                if ((int)t13 >= (int)0x6) {
                                    break;
                                }
                                t1834 = 0xC23EB48;
                                t1839 = (*(signed char *)((t13 + t1834)));
                                t1837 = ((((struct o20_int *)0xC23EAEC)->v));
                                t1839 = (unsigned char)t1839;
                                t1835 = 0xC0E5DC0;
                                t1837 = (t1837 + t13);
                                t1837 = (t1837 + 0xD8B0);
                                t1834 = 0xF;
                                t1834 = ((int)((int)t1839 / (int)t1834));
                                t1835 = 0xC0E5F1C;
                                t1840 = t1834;
                                t1834 = 0xF;
                                t1834 = ((int)((int)t1839 % (int)t1834));
                                t1840 = (t1840 << 2);
                                t1839 = t1834;
                                t1840 = (t1840 << 1);
                                t1835 = t1840;
                                t1840 = (t1840 << 2);
                                t1840 = (t1840 << 2);
                                t1840 = (t1840 - t1835);
                                t1840 = (t1840 + 0xC0F4664);
                                t1839 = (t1839 + t1840);
                                t1840 = 0x8;
                                t1846 = 0xC23EB0C;
                                for (;;) {
                                    if (t1840 == 0) {
                                        break;
                                    }
                                    t1846 = (*(signed char *)((t1839 + 0x0)));
                                    t1840 = (t1840 - 1);
                                    t1839 = (t1839 + 0xF);
                                    *(unsigned char *)((t1837 + 0x0)) = t1846;
                                    t1837 = (t1837 + 0x6);
                                }
                                t13 = (t13 + 0x1);
                            }
                            FUN_0c010c0c();
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        case 22:
                        {
                            if ((int)t13 < 0) {
                                (((struct o34_uint *)0xC23EAEC)->v) = t1688;
                                t1851 = (((struct o30_int *)0xC23EAEC)->v);
                                if (t1851 != 3) {
                                    if (t1851 != 10) {
                                        t13 = 0xC0F42E0;
                                    } else {
                                        t13 = 0xC0F4304;
                                    }
                                } else {
                                    t13 = 0xC0F4340;
                                }
                            } else {
                                t1888 = (((struct o30_int *)0xC23EAEC)->v);
                                if (t1888 != 3) {
                                    if (t1888 != 10) {
                                        t13 = 0xC0F42E0;
                                    } else {
                                        t13 = 0xC0F4304;
                                    }
                                } else {
                                    t13 = 0xC0F4340;
                                }
                            }
                            FUN_0c0dcca0(t13);
                            FUN_0c010c14();
                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                            FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                            if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                                FUN_0c0e2a4c(t13);
                                FUN_0c0154a4();
                                t13 = 0x5;
                                FUN_0c010c40(t13);
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        default:
                        {
                            t1925 = (((struct o38_int *)0xC23EAEC)->v);
                            if (t1925 != 0xFFFFFF09) {
                                if (t1925 != 0xFFFFFF04) {
                                    t13 = 0xC0F42EC;
                                    FUN_0c0dcca0(t13);
                                    FUN_0c010e92();
                                } else {
                                    t13 = 0xC1EEFC0;
                                    t13 = (*(int *)((t13 + 0x0)));
                                    FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                    t13 = 0xC0F42F8;
                                    FUN_0c0dcca0(t13);
                                    t13 = 0x1402;
                                    FUN_0c0c465c(t13);
                                    if (((*(int *)0xC2498F4) & 8) != 0) {
                                        FUN_0c0154a4();
                                        t13 = 0x5;
                                        FUN_0c010c40(t13);
                                    }
                                }
                            } else {
                                FUN_0c010f0a();
                            }
                            if ((*(int *)0xC2498F4) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                    }
                }
                t13 = 0xC0F4310;
                FUN_0c0dcca0(t13);
                t13 = 0xC23EB48;
                FUN_0c014fae(t13, 0.239999995f);
                t13 = 0x1;
                nlPopMatrix(t13);
                t1955 = (((struct o0_int *)0xC23EAEC)->v);
                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                t1957 = *(int *)0xC23EB38;
                t1958 = *(int *)0xC2498F4;
                if ((unsigned int)t1955 >= (unsigned int)0xD) {
                    t13 = 0x1;
                    return (nlPopMatrix(t13));
                }
                switch ((t1955 << 1)) {
                    case 0:
                    {
                        if ((0xC0C0 & t1958) != 0) {
                            if ((t1958 & 0x8080) != 0) {
                                if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                }
                            } else {
                                if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                }
                            }
                        } else {
                            if ((0xC & t1958) != 0) {
                                (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            } else {
                                if ((t1958 & 0x2) != 0) {
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                }
                            }
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 2:
                    {
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x146A;
                        FUN_0c0c465c(t13);
                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t1983 = *(int *)(((int)stk + 0));
                        if (t1983 != 0) {
                            if (!(t1983 != 1)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t13 = 0x1;
                            return (nlPopMatrix(t13));
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                        t13 = (*(int *)0xC1EF574);
                        t13 = (t13 << 2);
                        t13 = (t13 + (((int)stk + 0) + 0x8));
                        t13 = (*(int *)((t13 + 0x0)));
                        FUN_0c0cc3f8(t13, 0x0, 0x0, 0x0);
                        t13 = 0xC23EB48;
                        FUN_0c015018(t13);
                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 4:
                    {
                        (((struct o34_uint *)0xC23EAEC)->v) = t1957;
                        t13 = (FUN_0c011114());
                        if (t13 == 0) {
                            t13 = 0x5;
                            FUN_0c010c40(t13);
                        } else {
                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                            FUN_0c0cec9a(t13);
                            (((struct o0_uint *)0xC52314C)->v) = 0x0;
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 6:
                    {
                        t2005 = buStat(t13);
                        if (t2005 == 0) {
                            (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        }
                        if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 8:
                    {
                        t2013 = ((int (*)(int, int, int))(FUN_0c015436))(t13, 0x0, t1957);
                        if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                            t2016 = buFindExecFile(t13, 0xC23EB4E);
                            (((struct o38_uint *)0xC23EAEC)->v) = t2016;
                            if (t2016 == 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            } else {
                                t13 = ((((struct o34_int *)0xC23EAEC)->v));
                                t2022 = buGetDiskFree(t13, 0x0);
                                (((struct o38_uint *)0xC23EAEC)->v) = t2022;
                                if ((int)t2022 >= (int)0x6E) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                } else {
                                    (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                }
                            }
                        } else {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                        }
                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 10:
                    {
                        FUN_0c010f0a();
                        if ((*(int *)0xC2498F4) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 12:
                    {
                        FUN_0c0159a2(t13, 0xC23EB4E);
                        if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                            t13 = ((((struct o34_int *)0xC23EAEC)->v));
                            t2040 = ((int (*)(int, int))(FUN_0c015436))(t13, 0x0);
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 14:
                    {
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x146B;
                        FUN_0c0c465c(t13);
                        FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t2047 = *(int *)(((int)stk + 0));
                        if (t2047 != 0) {
                            if (!(t2047 != 1)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                        } else {
                            t13 = 0xC23EB4E;
                            FUN_0c0e631c(t13, 0xC1EF454, 0xD);
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                        }
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 16:
                    {
                        t13 = 0xC23EB48;
                        FUN_0c015018(t13);
                        t13 = 0x10;
                        FUN_0c010c40(t13);
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 18:
                    {
                        t13 = 0x0;
                        nlPushMatrix(t13);
                        t13 = 0x146C;
                        FUN_0c0c465c(t13);
                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                        t13 = 0x1;
                        nlPopMatrix(t13);
                        t2077 = *(int *)(((int)stk + 0));
                        if (t2077 != 0) {
                            if (!(t2077 != 1)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                        } else {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                        }
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 20:
                    {
                        t13 = (*(int *)0xC1EF574);
                        FUN_0c0112b0(t13);
                        t13 = ((((struct o20_int *)0xC23EAEC)->v));
                        t13 = (t13 + 0xD880);
                        t2103 = FUN_0c0e631c(t13, 0xC23EB48, 0x6);
                        t13 = 0x0;
                        t2106 = t2105;
                        t2108 = t2107;
                        t2109 = 0xC0C465C;
                        for (;;) {
                            if ((int)t13 >= (int)0x6) {
                                break;
                            }
                            t2103 = 0xC23EB48;
                            t2108 = (*(signed char *)((t13 + t2103)));
                            t2106 = ((((struct o20_int *)0xC23EAEC)->v));
                            t2108 = (unsigned char)t2108;
                            t2104 = 0xC0E5DC0;
                            t2106 = (t2106 + t13);
                            t2106 = (t2106 + 0xD8B0);
                            t2103 = 0xF;
                            t2103 = ((int)((int)t2108 / (int)t2103));
                            t2104 = 0xC0E5F1C;
                            t2109 = t2103;
                            t2103 = 0xF;
                            t2103 = ((int)((int)t2108 % (int)t2103));
                            t2109 = (t2109 << 2);
                            t2108 = t2103;
                            t2109 = (t2109 << 1);
                            t2104 = t2109;
                            t2109 = (t2109 << 2);
                            t2109 = (t2109 << 2);
                            t2109 = (t2109 - t2104);
                            t2109 = (t2109 + 0xC0F4664);
                            t2108 = (t2108 + t2109);
                            t2109 = 0x8;
                            t2115 = 0xC23EB0C;
                            for (;;) {
                                if (t2109 == 0) {
                                    break;
                                }
                                t2115 = (*(signed char *)((t2108 + 0x0)));
                                t2109 = (t2109 - 1);
                                t2108 = (t2108 + 0xF);
                                *(unsigned char *)((t2106 + 0x0)) = t2115;
                                t2106 = (t2106 + 0x6);
                            }
                            t13 = (t13 + 0x1);
                        }
                        FUN_0c010c0c();
                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    case 22:
                    {
                        if ((int)t13 < 0) {
                            (((struct o34_uint *)0xC23EAEC)->v) = t1957;
                            t2120 = (((struct o30_int *)0xC23EAEC)->v);
                            if (t2120 != 3) {
                                if (t2120 != 10) {
                                    t13 = 0xC0F42E0;
                                } else {
                                    t13 = 0xC0F4304;
                                }
                            } else {
                                t13 = 0xC0F4340;
                            }
                        } else {
                            t2157 = (((struct o30_int *)0xC23EAEC)->v);
                            if (t2157 != 3) {
                                if (t2157 != 10) {
                                    t13 = 0xC0F42E0;
                                } else {
                                    t13 = 0xC0F4304;
                                }
                            } else {
                                t13 = 0xC0F4340;
                            }
                        }
                        FUN_0c0dcca0(t13);
                        FUN_0c010c14();
                        t13 = ((((struct o34_int *)0xC23EAEC)->v));
                        FUN_0c0156ea(t13, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                        if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                            t13 = ((((struct o1C_int *)0xC23EAEC)->v));
                            FUN_0c0e2a4c(t13);
                            FUN_0c0154a4();
                            t13 = 0x5;
                            FUN_0c010c40(t13);
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                    default:
                    {
                        t2194 = (((struct o38_int *)0xC23EAEC)->v);
                        if (t2194 != 0xFFFFFF09) {
                            if (t2194 != 0xFFFFFF04) {
                                t13 = 0xC0F42EC;
                                FUN_0c0dcca0(t13);
                                FUN_0c010e92();
                            } else {
                                t13 = 0xC1EEFC0;
                                t13 = (*(int *)((t13 + 0x0)));
                                FUN_0c010b04(t13, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                t13 = 0xC0F42F8;
                                FUN_0c0dcca0(t13);
                                t13 = 0x1402;
                                FUN_0c0c465c(t13);
                                if (((*(int *)0xC2498F4) & 8) != 0) {
                                    FUN_0c0154a4();
                                    t13 = 0x5;
                                    FUN_0c010c40(t13);
                                }
                            }
                        } else {
                            FUN_0c010f0a();
                        }
                        if ((*(int *)0xC2498F4) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        t13 = 0x1;
                        return (nlPopMatrix(t13));
                    }
                }
            }
        }
        *(unsigned int *)(((int)stk + 0)) = t13;
        if ((((((struct oC_int *)0xC52314C)->v)) & 0x20) != 0) {
            FUN_0c0c465c(0x1471);
        }
    }
    t2235 = *(int *)0xC1EF574;
    if ((int)(t2235 - 1) >= 0) {
        t2236 = (t2235 - 1);
        for (;;) {
            if ((*(signed char *)((0xC1EF2DC + t2236))) != 0) {
                break;
            }
            t2236 = (t2236 - 1);
            if ((int)t2236 < 0) {
                t2236 = 0x0;
                nlPushMatrix(t2236);
                t2236 = 0xC0F4328;
                FUN_0c0dcca0(t2236);
                t2236 = (*(int *)0xC1EF574);
                t2236 = (t2236 << 2);
                t2236 = (*(int *)((t2236 + 0xC0F4288)));
                FUN_0c0c465c(t2236);
                t2236 = 0x1;
                nlPopMatrix(t2236);
                t2236 = 0x0;
                nlPushMatrix(t2236);
                t2236 = 0x1463;
                FUN_0c0c465c(t2236);
                if ((int)((((struct o0_int *)0xC23EAEC)->v)) < (int)0x5) {
                    t2236 = 0xC0F4334;
                    FUN_0c0dcca0(t2236);
                    t2236 = (*(int *)0xC1EF574);
                    t2236 = (t2236 << 2);
                    t2236 = (*(int *)((t2236 + 0xC0F4298)));
                    FUN_0c0c465c(t2236);
                    t2236 = 0x1;
                    nlPopMatrix(t2236);
                    t2254 = (((struct o0_int *)0xC23EAEC)->v);
                    t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                    t2256 = *(int *)0xC23EB38;
                    t2257 = *(int *)0xC2498F4;
                    if ((unsigned int)t2254 >= (unsigned int)0xD) {
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    switch ((t2254 << 1)) {
                        case 0:
                        {
                            if ((0xC0C0 & t2257) != 0) {
                                if ((t2257 & 0x8080) != 0) {
                                    if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                    }
                                } else {
                                    if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                        *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                    }
                                }
                            } else {
                                if ((0xC & t2257) != 0) {
                                    (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                } else {
                                    if ((t2257 & 0x2) != 0) {
                                        FUN_0c0154a4();
                                        t2236 = 0x5;
                                        FUN_0c010c40(t2236);
                                    }
                                }
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 2:
                        {
                            t2236 = 0x0;
                            nlPushMatrix(t2236);
                            t2236 = 0x146A;
                            FUN_0c0c465c(t2236);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t2236 = 0x1;
                            nlPopMatrix(t2236);
                            t2282 = *(int *)(((int)stk + 0));
                            if (t2282 != 0) {
                                if (!(t2282 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                if (((*(int *)0xC2498F4) & 2) != 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                                t2236 = 0x1;
                                return (nlPopMatrix(t2236));
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                            t2236 = (*(int *)0xC1EF574);
                            t2236 = (t2236 << 2);
                            t2236 = (t2236 + (((int)stk + 0) + 0x8));
                            t2236 = (*(int *)((t2236 + 0x0)));
                            FUN_0c0cc3f8(t2236, 0x0, 0x0, 0x0);
                            t2236 = 0xC23EB48;
                            FUN_0c015018(t2236);
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 4:
                        {
                            (((struct o34_uint *)0xC23EAEC)->v) = t2256;
                            t2236 = (FUN_0c011114());
                            if (t2236 == 0) {
                                t2236 = 0x5;
                                FUN_0c010c40(t2236);
                            } else {
                                t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                                FUN_0c0cec9a(t2236);
                                (((struct o0_uint *)0xC52314C)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 6:
                        {
                            t2304 = buStat(t2236);
                            if (t2304 == 0) {
                                (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            }
                            if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 8:
                        {
                            t2312 = ((int (*)(int, int, int))(FUN_0c015436))(t2236, 0x0, t2256);
                            if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                                t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                                t2315 = buFindExecFile(t2236, 0xC23EB4E);
                                (((struct o38_uint *)0xC23EAEC)->v) = t2315;
                                if (t2315 == 0) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                                } else {
                                    t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                                    t2321 = buGetDiskFree(t2236, 0x0);
                                    (((struct o38_uint *)0xC23EAEC)->v) = t2321;
                                    if ((int)t2321 >= (int)0x6E) {
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                    } else {
                                        (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                        (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                    }
                                }
                            } else {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 10:
                        {
                            FUN_0c010f0a();
                            if ((*(int *)0xC2498F4) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 12:
                        {
                            FUN_0c0159a2(t2236, 0xC23EB4E);
                            if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                                t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                                t2339 = ((int (*)(int, int))(FUN_0c015436))(t2236, 0x0);
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 14:
                        {
                            t2236 = 0x0;
                            nlPushMatrix(t2236);
                            t2236 = 0x146B;
                            FUN_0c0c465c(t2236);
                            FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t2236 = 0x1;
                            nlPopMatrix(t2236);
                            t2346 = *(int *)(((int)stk + 0));
                            if (t2346 != 0) {
                                if (!(t2346 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                            } else {
                                t2236 = 0xC23EB4E;
                                FUN_0c0e631c(t2236, 0xC1EF454, 0xD);
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 16:
                        {
                            t2236 = 0xC23EB48;
                            FUN_0c015018(t2236);
                            t2236 = 0x10;
                            FUN_0c010c40(t2236);
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 18:
                        {
                            t2236 = 0x0;
                            nlPushMatrix(t2236);
                            t2236 = 0x146C;
                            FUN_0c0c465c(t2236);
                            *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                            t2236 = 0x1;
                            nlPopMatrix(t2236);
                            t2376 = *(int *)(((int)stk + 0));
                            if (t2376 != 0) {
                                if (!(t2376 != 1)) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                                }
                            } else {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 20:
                        {
                            t2236 = (*(int *)0xC1EF574);
                            FUN_0c0112b0(t2236);
                            t2236 = ((((struct o20_int *)0xC23EAEC)->v));
                            t2236 = (t2236 + 0xD880);
                            t2402 = FUN_0c0e631c(t2236, 0xC23EB48, 0x6);
                            t2236 = 0x0;
                            t2405 = t2404;
                            t2407 = t2406;
                            t2408 = 0xC0C465C;
                            for (;;) {
                                if ((int)t2236 >= (int)0x6) {
                                    break;
                                }
                                t2402 = 0xC23EB48;
                                t2407 = (*(signed char *)((t2236 + t2402)));
                                t2405 = ((((struct o20_int *)0xC23EAEC)->v));
                                t2407 = (unsigned char)t2407;
                                t2403 = 0xC0E5DC0;
                                t2405 = (t2405 + t2236);
                                t2405 = (t2405 + 0xD8B0);
                                t2402 = 0xF;
                                t2402 = ((int)((int)t2407 / (int)t2402));
                                t2403 = 0xC0E5F1C;
                                t2408 = t2402;
                                t2402 = 0xF;
                                t2402 = ((int)((int)t2407 % (int)t2402));
                                t2408 = (t2408 << 2);
                                t2407 = t2402;
                                t2408 = (t2408 << 1);
                                t2403 = t2408;
                                t2408 = (t2408 << 2);
                                t2408 = (t2408 << 2);
                                t2408 = (t2408 - t2403);
                                t2408 = (t2408 + 0xC0F4664);
                                t2407 = (t2407 + t2408);
                                t2408 = 0x8;
                                t2414 = 0xC23EB0C;
                                for (;;) {
                                    if (t2408 == 0) {
                                        break;
                                    }
                                    t2414 = (*(signed char *)((t2407 + 0x0)));
                                    t2408 = (t2408 - 1);
                                    t2407 = (t2407 + 0xF);
                                    *(unsigned char *)((t2405 + 0x0)) = t2414;
                                    t2405 = (t2405 + 0x6);
                                }
                                t2236 = (t2236 + 0x1);
                            }
                            FUN_0c010c0c();
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        case 22:
                        {
                            if ((int)t2236 < 0) {
                                (((struct o34_uint *)0xC23EAEC)->v) = t2256;
                                t2419 = (((struct o30_int *)0xC23EAEC)->v);
                                if (t2419 != 3) {
                                    if (t2419 != 10) {
                                        t2236 = 0xC0F42E0;
                                    } else {
                                        t2236 = 0xC0F4304;
                                    }
                                } else {
                                    t2236 = 0xC0F4340;
                                }
                            } else {
                                t2456 = (((struct o30_int *)0xC23EAEC)->v);
                                if (t2456 != 3) {
                                    if (t2456 != 10) {
                                        t2236 = 0xC0F42E0;
                                    } else {
                                        t2236 = 0xC0F4304;
                                    }
                                } else {
                                    t2236 = 0xC0F4340;
                                }
                            }
                            FUN_0c0dcca0(t2236);
                            FUN_0c010c14();
                            t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                            FUN_0c0156ea(t2236, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                            if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                                t2236 = ((((struct o1C_int *)0xC23EAEC)->v));
                                FUN_0c0e2a4c(t2236);
                                FUN_0c0154a4();
                                t2236 = 0x5;
                                FUN_0c010c40(t2236);
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        default:
                        {
                            t2493 = (((struct o38_int *)0xC23EAEC)->v);
                            if (t2493 != 0xFFFFFF09) {
                                if (t2493 != 0xFFFFFF04) {
                                    t2236 = 0xC0F42EC;
                                    FUN_0c0dcca0(t2236);
                                    FUN_0c010e92();
                                } else {
                                    t2236 = 0xC1EEFC0;
                                    t2236 = (*(int *)((t2236 + 0x0)));
                                    FUN_0c010b04(t2236, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                    t2236 = 0xC0F42F8;
                                    FUN_0c0dcca0(t2236);
                                    t2236 = 0x1402;
                                    FUN_0c0c465c(t2236);
                                    if (((*(int *)0xC2498F4) & 8) != 0) {
                                        FUN_0c0154a4();
                                        t2236 = 0x5;
                                        FUN_0c010c40(t2236);
                                    }
                                }
                            } else {
                                FUN_0c010f0a();
                            }
                            if ((*(int *)0xC2498F4) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                    }
                }
                t2236 = 0xC0F4310;
                FUN_0c0dcca0(t2236);
                t2236 = 0xC23EB48;
                FUN_0c014fae(t2236, 0.239999995f);
                t2236 = 0x1;
                nlPopMatrix(t2236);
                t2523 = (((struct o0_int *)0xC23EAEC)->v);
                t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                t2525 = *(int *)0xC23EB38;
                t2526 = *(int *)0xC2498F4;
                if ((unsigned int)t2523 >= (unsigned int)0xD) {
                    t2236 = 0x1;
                    return (nlPopMatrix(t2236));
                }
                switch ((t2523 << 1)) {
                    case 0:
                    {
                        if ((0xC0C0 & t2526) != 0) {
                            if ((t2526 & 0x8080) != 0) {
                                if (!((int)(*(int *)(((int)stk + 0))) < 0)) {
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                                }
                            } else {
                                if (!((int)(*(int *)(((int)stk + 4))) < 0)) {
                                    *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                                }
                            }
                        } else {
                            if ((0xC & t2526) != 0) {
                                (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            } else {
                                if ((t2526 & 0x2) != 0) {
                                    FUN_0c0154a4();
                                    t2236 = 0x5;
                                    FUN_0c010c40(t2236);
                                }
                            }
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 2:
                    {
                        t2236 = 0x0;
                        nlPushMatrix(t2236);
                        t2236 = 0x146A;
                        FUN_0c0c465c(t2236);
                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                        t2236 = 0x1;
                        nlPopMatrix(t2236);
                        t2551 = *(int *)(((int)stk + 0));
                        if (t2551 != 0) {
                            if (!(t2551 != 1)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            if (((*(int *)0xC2498F4) & 2) != 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                            t2236 = 0x1;
                            return (nlPopMatrix(t2236));
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                        t2236 = (*(int *)0xC1EF574);
                        t2236 = (t2236 << 2);
                        t2236 = (t2236 + (((int)stk + 0) + 0x8));
                        t2236 = (*(int *)((t2236 + 0x0)));
                        FUN_0c0cc3f8(t2236, 0x0, 0x0, 0x0);
                        t2236 = 0xC23EB48;
                        FUN_0c015018(t2236);
                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 4:
                    {
                        (((struct o34_uint *)0xC23EAEC)->v) = t2525;
                        t2236 = (FUN_0c011114());
                        if (t2236 == 0) {
                            t2236 = 0x5;
                            FUN_0c010c40(t2236);
                        } else {
                            t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                            FUN_0c0cec9a(t2236);
                            (((struct o0_uint *)0xC52314C)->v) = 0x0;
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 6:
                    {
                        t2573 = buStat(t2236);
                        if (t2573 == 0) {
                            (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                            (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        }
                        if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 8:
                    {
                        t2581 = ((int (*)(int, int, int))(FUN_0c015436))(t2236, 0x0, t2525);
                        if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                            t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                            t2584 = buFindExecFile(t2236, 0xC23EB4E);
                            (((struct o38_uint *)0xC23EAEC)->v) = t2584;
                            if (t2584 == 0) {
                                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                            } else {
                                t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                                t2590 = buGetDiskFree(t2236, 0x0);
                                (((struct o38_uint *)0xC23EAEC)->v) = t2590;
                                if ((int)t2590 >= (int)0x6E) {
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                                } else {
                                    (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                                    (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                                }
                            }
                        } else {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                        }
                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 10:
                    {
                        FUN_0c010f0a();
                        if ((*(int *)0xC2498F4) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 12:
                    {
                        FUN_0c0159a2(t2236, 0xC23EB4E);
                        if (!(((((struct o30_int *)0xC23EAEC)->v)) != 9)) {
                            t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                            t2608 = ((int (*)(int, int))(FUN_0c015436))(t2236, 0x0);
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 14:
                    {
                        t2236 = 0x0;
                        nlPushMatrix(t2236);
                        t2236 = 0x146B;
                        FUN_0c0c465c(t2236);
                        FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                        t2236 = 0x1;
                        nlPopMatrix(t2236);
                        t2615 = *(int *)(((int)stk + 0));
                        if (t2615 != 0) {
                            if (!(t2615 != 1)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                        } else {
                            t2236 = 0xC23EB4E;
                            FUN_0c0e631c(t2236, 0xC1EF454, 0xD);
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                        }
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 16:
                    {
                        t2236 = 0xC23EB48;
                        FUN_0c015018(t2236);
                        t2236 = 0x10;
                        FUN_0c010c40(t2236);
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 18:
                    {
                        t2236 = 0x0;
                        nlPushMatrix(t2236);
                        t2236 = 0x146C;
                        FUN_0c0c465c(t2236);
                        *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                        t2236 = 0x1;
                        nlPopMatrix(t2236);
                        t2645 = *(int *)(((int)stk + 0));
                        if (t2645 != 0) {
                            if (!(t2645 != 1)) {
                                (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                            }
                        } else {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                        }
                        if (((*(int *)0xC2498F4) & 2) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        if (!(((((struct o0_int *)0xC52314C)->v)) == 0)) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 20:
                    {
                        t2236 = (*(int *)0xC1EF574);
                        FUN_0c0112b0(t2236);
                        t2236 = ((((struct o20_int *)0xC23EAEC)->v));
                        t2236 = (t2236 + 0xD880);
                        t2671 = FUN_0c0e631c(t2236, 0xC23EB48, 0x6);
                        t2236 = 0x0;
                        t2674 = t2673;
                        t2676 = t2675;
                        t2677 = 0xC0C465C;
                        for (;;) {
                            if ((int)t2236 >= (int)0x6) {
                                break;
                            }
                            t2671 = 0xC23EB48;
                            t2676 = (*(signed char *)((t2236 + t2671)));
                            t2674 = ((((struct o20_int *)0xC23EAEC)->v));
                            t2676 = (unsigned char)t2676;
                            t2672 = 0xC0E5DC0;
                            t2674 = (t2674 + t2236);
                            t2674 = (t2674 + 0xD8B0);
                            t2671 = 0xF;
                            t2671 = ((int)((int)t2676 / (int)t2671));
                            t2672 = 0xC0E5F1C;
                            t2677 = t2671;
                            t2671 = 0xF;
                            t2671 = ((int)((int)t2676 % (int)t2671));
                            t2677 = (t2677 << 2);
                            t2676 = t2671;
                            t2677 = (t2677 << 1);
                            t2672 = t2677;
                            t2677 = (t2677 << 2);
                            t2677 = (t2677 << 2);
                            t2677 = (t2677 - t2672);
                            t2677 = (t2677 + 0xC0F4664);
                            t2676 = (t2676 + t2677);
                            t2677 = 0x8;
                            t2683 = 0xC23EB0C;
                            for (;;) {
                                if (t2677 == 0) {
                                    break;
                                }
                                t2683 = (*(signed char *)((t2676 + 0x0)));
                                t2677 = (t2677 - 1);
                                t2676 = (t2676 + 0xF);
                                *(unsigned char *)((t2674 + 0x0)) = t2683;
                                t2674 = (t2674 + 0x6);
                            }
                            t2236 = (t2236 + 0x1);
                        }
                        FUN_0c010c0c();
                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    case 22:
                    {
                        if ((int)t2236 < 0) {
                            (((struct o34_uint *)0xC23EAEC)->v) = t2525;
                            t2688 = (((struct o30_int *)0xC23EAEC)->v);
                            if (t2688 != 3) {
                                if (t2688 != 10) {
                                    t2236 = 0xC0F42E0;
                                } else {
                                    t2236 = 0xC0F4304;
                                }
                            } else {
                                t2236 = 0xC0F4340;
                            }
                        } else {
                            t2725 = (((struct o30_int *)0xC23EAEC)->v);
                            if (t2725 != 3) {
                                if (t2725 != 10) {
                                    t2236 = 0xC0F42E0;
                                } else {
                                    t2236 = 0xC0F4304;
                                }
                            } else {
                                t2236 = 0xC0F4340;
                            }
                        }
                        FUN_0c0dcca0(t2236);
                        FUN_0c010c14();
                        t2236 = ((((struct o34_int *)0xC23EAEC)->v));
                        FUN_0c0156ea(t2236, ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                        if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                            t2236 = ((((struct o1C_int *)0xC23EAEC)->v));
                            FUN_0c0e2a4c(t2236);
                            FUN_0c0154a4();
                            t2236 = 0x5;
                            FUN_0c010c40(t2236);
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                    default:
                    {
                        t2762 = (((struct o38_int *)0xC23EAEC)->v);
                        if (t2762 != 0xFFFFFF09) {
                            if (t2762 != 0xFFFFFF04) {
                                t2236 = 0xC0F42EC;
                                FUN_0c0dcca0(t2236);
                                FUN_0c010e92();
                            } else {
                                t2236 = 0xC1EEFC0;
                                t2236 = (*(int *)((t2236 + 0x0)));
                                FUN_0c010b04(t2236, ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                                t2236 = 0xC0F42F8;
                                FUN_0c0dcca0(t2236);
                                t2236 = 0x1402;
                                FUN_0c0c465c(t2236);
                                if (((*(int *)0xC2498F4) & 8) != 0) {
                                    FUN_0c0154a4();
                                    t2236 = 0x5;
                                    FUN_0c010c40(t2236);
                                }
                            }
                        } else {
                            FUN_0c010f0a();
                        }
                        if ((*(int *)0xC2498F4) != 0) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                        }
                        t2236 = 0x1;
                        return (nlPopMatrix(t2236));
                    }
                }
            }
        }
        *(unsigned int *)(((int)stk + 4)) = t2236;
        if ((((((struct oC_int *)0xC52314C)->v)) & 0x20) != 0) {
            FUN_0c0c465c(0x1470);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F4328);
    FUN_0c0c465c((*(int *)((((*(int *)0xC1EF574) << 2) + 0xC0F4288))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0c465c(0x1463);
    if ((int)((((struct o0_int *)0xC23EAEC)->v)) < (int)0x5) {
        FUN_0c0dcca0(0xC0F4334);
        FUN_0c0c465c((*(int *)((((*(int *)0xC1EF574) << 2) + 0xC0F4298))));
    } else {
        FUN_0c0dcca0(0xC0F4310);
        FUN_0c014fae(0xC23EB48, 0.239999995f);
    }
    nlPopMatrix(0x1);
    t2821 = (((struct o0_int *)0xC23EAEC)->v);
    t2822 = (((struct o34_int *)0xC23EAEC)->v);
    t2823 = *(int *)0xC23EB38;
    t2824 = *(int *)0xC2498F4;
    if ((unsigned int)t2821 >= (unsigned int)0xD) {
    } else {
        switch ((t2821 << 1)) {
            case 0:
            {
                if ((0xC0C0 & t2824) != 0) {
                    if ((t2824 & 0x8080) != 0) {
                        if ((int)(*(int *)(((int)stk + 0))) < 0) {
                        } else {
                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 0)));
                        }
                    } else {
                        if ((int)(*(int *)(((int)stk + 4))) < 0) {
                        } else {
                            *(unsigned int *)0xC1EF574 = (*(int *)(((int)stk + 4)));
                        }
                    }
                } else {
                    if ((0xC & t2824) != 0) {
                        (((struct o8_uint *)0xC23EAEC)->v) = 0x0;
                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                    } else {
                        if ((t2824 & 0x2) != 0) {
                            FUN_0c0154a4();
                            FUN_0c010c40(0x5);
                        }
                    }
                }
            }
                break;
            case 2:
            {
                nlPushMatrix(0x0);
                FUN_0c0c465c(0x146A);
                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                nlPopMatrix(0x1);
                t2869 = *(int *)(((int)stk + 0));
                if (t2869 != 0) {
                    if (t2869 != 1) {
                    } else {
                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                    }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC0F434C); }
                    FUN_0c0cc3f8((*(int *)(((((*(int *)0xC1EF574) << 2) + (((int)stk + 0) + 0x8)) + 0x0))), 0x0, 0x0, 0x0);
                    FUN_0c015018(0xC23EB48);
                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                }
                if (((*(int *)0xC2498F4) & 2) != 0) {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                }
            }
                break;
            case 4:
            {
                (((struct o34_uint *)0xC23EAEC)->v) = t2823;
                t2881 = FUN_0c011114();
                if (t2881 == 0) {
                    FUN_0c010c40(0x5);
                } else {
                    FUN_0c0cec9a(((((struct o34_int *)0xC23EAEC)->v)));
                    (((struct o0_uint *)0xC52314C)->v) = 0x0;
                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                }
            }
                break;
            case 6:
            {
                t2890 = buStat(t2822);
                if (t2890 == 0) {
                    (((struct o30_uint *)0xC23EAEC)->v) = 0x0;
                    (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                }
                if (((((struct o0_int *)0xC52314C)->v)) != 0) {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                }
            }
                break;
            case 8:
            {
                t2898 = ((int (*)(int, int, int))(FUN_0c015436))(t2822, 0x0, t2823);
                if ((int)((((struct o38_int *)0xC23EAEC)->v)) < 0) {
                    t2901 = buFindExecFile(((((struct o34_int *)0xC23EAEC)->v)), 0xC23EB4E);
                    (((struct o38_uint *)0xC23EAEC)->v) = t2901;
                    if (t2901 == 0) {
                        (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
                    } else {
                        t2904 = buGetDiskFree(((((struct o34_int *)0xC23EAEC)->v)), 0x0);
                        (((struct o38_uint *)0xC23EAEC)->v) = t2904;
                        if ((int)t2904 >= (int)0x6E) {
                            (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                        } else {
                            (((struct o38_uint *)0xC23EAEC)->v) = 0xFFFFFF04;
                            (((struct o0_uint *)0xC23EAEC)->v) = 0xC;
                        }
                    }
                } else {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x7;
                }
                if (((((struct o0_int *)0xC52314C)->v)) == 0) {
                } else {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                }
            }
                break;
            case 10:
            {
                FUN_0c010f0a();
                if ((*(int *)0xC2498F4) != 0) {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                }
            }
                break;
            case 12:
            {
                FUN_0c0159a2(t2822, 0xC23EB4E);
                if (((((struct o30_int *)0xC23EAEC)->v)) != 9) {
                } else {
                    t2928 = ((int (*)(int, int))(FUN_0c015436))(((((struct o34_int *)0xC23EAEC)->v)), 0x0);
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x8;
                }
            }
                break;
            case 14:
            {
                nlPushMatrix(0x0);
                FUN_0c0c465c(0x146B);
                FUN_0c0dcc70(0.0f, -0.649999976f, 0.0f);
                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                nlPopMatrix(0x1);
                t2937 = *(int *)(((int)stk + 0));
                if (t2937 != 0) {
                    if (t2937 != 1) {
                    } else {
                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                    }
                } else {
                    FUN_0c0e631c(0xC23EB4E, 0xC1EF454, 0xD);
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x6;
                }
                if (((*(int *)0xC2498F4) & 2) != 0) {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                }
                if (((((struct o0_int *)0xC52314C)->v)) == 0) {
                } else {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                }
            }
                break;
            case 16:
            {
                FUN_0c015018(0xC23EB48);
                FUN_0c010c40(0x10);
            }
                break;
            case 18:
            {
                nlPushMatrix(0x0);
                FUN_0c0c465c(0x146C);
                *(unsigned int *)(((int)stk + 0)) = (FUN_0c010cb6());
                nlPopMatrix(0x1);
                t2954 = *(int *)(((int)stk + 0));
                if (t2954 != 0) {
                    if (t2954 != 1) {
                    } else {
                        (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                    }
                } else {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0xA;
                }
                if (((*(int *)0xC2498F4) & 2) != 0) {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                }
                if (((((struct o0_int *)0xC52314C)->v)) == 0) {
                } else {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x2;
                }
            }
                break;
            case 20:
            {
                FUN_0c0112b0((*(int *)0xC1EF574));
                t2967 = (FUN_0c0e631c((((((struct o20_int *)0xC23EAEC)->v)) + 0xD880), 0xC23EB48, 0x6));
                t2969 = 0x0;
                t2971 = t2970;
                t2973 = t2972;
                t2974 = 0xC0C465C;
                for (;;) {
                    if ((int)t2969 >= (int)0x6) {
                        break;
                    }
                    t2967 = 0xC23EB48;
                    t2973 = (*(signed char *)((t2969 + t2967)));
                    t2971 = ((((struct o20_int *)0xC23EAEC)->v));
                    t2973 = (unsigned char)t2973;
                    t2968 = 0xC0E5DC0;
                    t2971 = (t2971 + t2969);
                    t2971 = (t2971 + 0xD8B0);
                    t2967 = 0xF;
                    t2967 = ((int)((int)t2973 / (int)t2967));
                    t2968 = 0xC0E5F1C;
                    t2974 = t2967;
                    t2967 = 0xF;
                    t2967 = ((int)((int)t2973 % (int)t2967));
                    t2974 = (t2974 << 2);
                    t2973 = t2967;
                    t2974 = (t2974 << 1);
                    t2968 = t2974;
                    t2974 = (t2974 << 2);
                    t2974 = (t2974 << 2);
                    t2974 = (t2974 - t2968);
                    t2974 = (t2974 + 0xC0F4664);
                    t2973 = (t2973 + t2974);
                    t2974 = 0x8;
                    t2980 = 0xC23EB0C;
                    for (;;) {
                        if (t2974 == 0) {
                            break;
                        }
                        t2980 = (*(signed char *)((t2973 + 0x0)));
                        t2974 = (t2974 - 1);
                        t2973 = (t2973 + 0xF);
                        *(unsigned char *)((t2971 + 0x0)) = t2980;
                        t2971 = (t2971 + 0x6);
                    }
                    t2969 = (t2969 + 0x1);
                }
                FUN_0c010c0c();
                (((struct o0_uint *)0xC23EAEC)->v) = (((((struct o0_int *)0xC23EAEC)->v)) + 0x1);
            }
                break;
            case 22:
            {
                if ((int)t2822 < 0) {
                    (((struct o34_uint *)0xC23EAEC)->v) = t2823;
                }
                t2985 = (((struct o30_int *)0xC23EAEC)->v);
                t2988 = 0xC0F4340;
                if (t2985 != 3) {
                    t2988 = 0xC0F4304;
                    if (t2985 != 10) {
                        t2988 = 0xC0F42E0;
                    }
                }
                FUN_0c0dcca0(t2988);
                FUN_0c010c14();
                FUN_0c0156ea(((((struct o34_int *)0xC23EAEC)->v)), ((((struct o20_int *)0xC23EAEC)->v)), 0xDC00, 0x0);
                if (((((struct o30_int *)0xC23EAEC)->v)) == 9) {
                    FUN_0c0e2a4c(((((struct o1C_int *)0xC23EAEC)->v)));
                    FUN_0c0154a4();
                    FUN_0c010c40(0x5);
                }
            }
                break;
            default:
            {
                t3003 = (((struct o38_int *)0xC23EAEC)->v);
                if (t3003 != 0xFFFFFF09) {
                    if (t3003 != 0xFFFFFF04) {
                        FUN_0c0dcca0(0xC0F42EC);
                        FUN_0c010e92();
                    } else {
                        FUN_0c010b04((*(int *)0xC1EEFC0), ((((struct oC_float *)0xC013530)->v)), ((((struct o8_float *)0xC013530)->v)), ((((struct o4_float *)0xC013530)->v)), ((((struct o0_float *)0xC013530)->v)));
                        FUN_0c0dcca0(0xC0F42F8);
                        FUN_0c0c465c(0x1402);
                        if (((*(int *)0xC2498F4) & 8) != 0) {
                            FUN_0c0154a4();
                            FUN_0c010c40(0x5);
                        }
                    }
                } else {
                    FUN_0c010f0a();
                }
                if ((*(int *)0xC2498F4) != 0) {
                    (((struct o0_uint *)0xC23EAEC)->v) = 0x0;
                }
            }
                break;
        }
    }
    return (nlPopMatrix(0x1));
}

float FUN_0c08da10(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    int R12;
    register float F0;
    register float F3;
    register float F5;
    register float F6;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_2 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    v0_8 = (((struct o70_int *)(v0_2))->v);
    v0_7 = (v0_8);
    v0_1 = (0xC248DC0);
    v0_0 = (0xC0DA2E0);
    R12 = (0x1);
    v0_0 = (v0_2);
    v0_6 = (0x244);
    v0_9 = (0xC0DCE80);
    w0_0 = (0.00999999978f);
    w0_1 = (1.0f);
    if ((v0_8 == 0)) goto L_C08DA64;
    if ((v0_7 == 1)) goto L_C08DB08;
    if ((v0_7 != 2)) goto L_C08DA50;
    FUN_0c0685a4(v0_2, v0_3, v0_4, v0_5);
    L_C08DDD8:;
    if ((((((struct o70_int *)(v0_0))->v)) != 4)) goto L_C08DE28;
    w0_0 = (((struct o68_float *)(v0_0))->v);
    (((struct o68_float *)(v0_0))->v) = (w0_0 * 0.979999959f);
    v0_7 = (0x68);
    w0_1 = (0.0f);
    FPUL_ = (0x3F7AE147);
    if ((!((w0_0 * 0.979999959f) > 0.0f))) goto L_C08DE98;
    L_C08DE4A:;
    nlPushMatrix(0x0);
    w0_0 = (((struct o68_float *)(v0_0))->v);
    FUN_0c0dcca0((v0_0 + 0x34));
    nlRotateAZ(((((struct o6C_int *)(v0_0))->v)));
    nlScale(w0_0, w0_0, w0_0);
    FUN_0c0de000(w0_0);
    FUN_0c0848d6(((((struct o40_float *)(v0_0))->v)), ((((struct o44_float *)(v0_0))->v)), ((((struct o48_float *)(v0_0))->v)));
    FUN_0c0c465c(((((struct o74_int *)(v0_0))->v)));
    FUN_0c0849da();
    v0_7 = ((nlPopMatrix(0x1)));
    L_C08DE98:;
    return F0;
    L_C08DE28:;
    w0_1 = *(float *)0xC08DF04;
    w0_3 = (((struct o64_float *)(v0_0))->v);
    v0_7 = (0x68);
    w0_2 = ((w0_3 * w0_1));
    if ((!((w0_3 * w0_1) > ((((struct o68_float *)(v0_0))->v))))) goto L_C08DE4A;
    w0_1 = (*(float *)((v0_0 + v0_7)));
    w0_1 = w0_1 + w0_0 * ((w0_2 - (*(float *)(((v0_7 + v0_0) + 0x0)))));
    *(float *)((v0_0 + v0_7)) = w0_1;
    goto L_C08DE4A;
    L_C08DA50:;
    if ((v0_7 != 3)) goto L_C08DA58;
    v0_1 = (((struct o78_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(v0_1 - 1) <= 0)) goto L_C08DBE0;
    goto L_C08DDD8;
    L_C08DBE0:;
    v0_1 = FUN_0c0e1830(0xC08DEB4, v0_6);
    FUN_0c0e19d0(v0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x30)) = *(struct mv3 *)((v0_0 + 0x34)); }
    (((struct o34_float *)(v0_1))->v) = (((((struct o34_float *)(v0_1))->v)) + 3.0f);
    (((struct o238_uint *)(v0_1))->v) = (((FUN_0c0da2e0()) << 2) << 2);
    (((struct o228_float *)(v0_1))->v) = ((((struct o64_float *)(v0_0))->v));
    w0_2 = 450.0f;
    w0_2 = w0_2 + 60.0f * ((((struct o64_float *)(v0_0))->v));
    (((struct o240_uint *)(v0_1))->v) = (int)w0_2;
    (((struct o230_uint *)(v0_1))->v) = R12;
    (((struct oBC_uint *)(v0_1))->v) = 0x14;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x3C)) = *(struct mv3 *)((v0_1 + 0x30)); }
    (((struct o40_float *)(v0_1))->v) = (((((struct o40_float *)(v0_1))->v)) - 10.0f);
    (((struct o1F8_uint *)(v0_1))->v) = 0x4;
    (((struct o1F4_uint *)(v0_1))->v) = 0xA;
    (((struct o1E4_float *)(v0_1))->v) = (((((struct o64_float *)(v0_0))->v)) * w0_1);
    v0_7 = (v0_1);
    FPUL_ = (0x41200000);
    if ((((((struct o78_int *)(v0_0))->v)) == 0)) goto L_C08DC80;
    w0_1 = (4.0f);
    L_C08DC84:;
    (((struct o22C_float *)(v0_7))->v) = w0_1;
    (((struct o70_uint *)(v0_0))->v) = 0x4;
    (((struct o78_uint *)(v0_0))->v) = 0x0;
    FUN_0c08e46e(0x258);
    goto L_C08DDD8;
    L_C08DC80:;
    w0_1 = ((1.0f + 1.0f));
    goto L_C08DC84;
    L_C08DA58:;
    if ((v0_7 != 4)) goto L_C08DA60;
    if (!(((((((struct o78_int *)(v0_0))->v)) & R12) != 0))) goto L_C08DDC2;
    if ((R12 != 0)) goto L_C08DCB0;
    goto L_C08DDC2;
    L_C08DDC2:;
    v0_1 = (((struct o78_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_0))->v) = (v0_1 + 0x1);
    if (((v0_1 + 0x1) != 30)) goto L_C08DDD8;
    FUN_0c0e19f2();
    goto L_C08DDD8;
    L_C08DCB0:;
    v0_7 = ((*(int *)((v0_1 + 0x0))));
    L_C08DDBA:;
    if ((v0_7 == 0)) goto L_C08DDC2;
    v0_8 = (((struct o78_int *)(v0_0))->v);
    w0_4 = nlLength((v0_0 + 0x34), (v0_7 + 0x34));
    F0 = (w0_4);
    w0_3 = ((float)v0_8);
    w0_2 = (w0_4);
    if ((w0_4 > (float)v0_8)) goto L_C08DDB6;
    (((struct o70_uint *)(v0_7))->v) = 0x3;
    (((struct o78_uint *)(v0_7))->v) = (int)w0_3;
    v0_2 = (v0_7);
    w0_2 = ((w0_2 * 0.125f));
    FPUL_ = ((int)w0_3);
    if ((v0_7 != (*(int *)((v0_1 + 0x0))))) goto L_C08DD30;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_2 + 0x30)));
    L_C08DD36:;
    if ((w0_1 > w0_2)) goto L_C08DDB8;
    nlSubVector3op((((int)stk + 0) + 0x10), (v0_7 + 0x34), (v0_0 + 0x34));
    FUN_0c0dd050((((int)stk + 0) + 0x10));
    L_C08DD52:;
    v0_9 = FUN_0c0e1830(0xC08DEB4, v0_6);
    FUN_0c0e19d0(v0_9);
    FUN_0c0dce80((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (w0_2 * 2.5f));
    nlAddVector3op((v0_9 + 0x30), (v0_0 + 0x34), (((int)stk + 0) + 0x4));
    (((struct o234_uint *)(v0_9))->v) = (int)w0_2;
    v0_8 = FUN_0c0da2e0();
    w0_3 = 0.599999964f;
    w0_3 = w0_3 + 1.22074025e-05f * (float)v0_8;
    (((struct o228_float *)(v0_9))->v) = (((((struct o64_float *)(v0_0))->v)) * w0_3);
    (((struct o240_uint *)(v0_9))->v) = 0x3C;
    v0_9 = !(w0_1 > (w0_2 - w0_1));
    F0 = (1.22074025e-05f);
    w0_2 = ((w0_2 - w0_1));
    FPUL_ = (v0_8);
    if (v0_9) goto L_C08DD52;
    L_C08DDB8:;
    v0_7 = ((*(int *)((v0_7 + 0x30))));
    goto L_C08DDBA;
    L_C08DD30:;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x30)) = (*(int *)((v0_2 + 0x30)));
    goto L_C08DD36;
    L_C08DDB6:;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    goto L_C08DDB8;
    L_C08DA60:;
    goto L_C08DDD8;
    L_C08DB08:;
    nlAddVector((v0_0 + 0x34), (v0_0 + 0x4C));
    FUN_0c0dce80((v0_0 + 0x4C), (v0_0 + 0x4C), 0.979999959f);
    w0_1 = FUN_0c0dcea0((v0_0 + 0x4C));
    F0 = (w0_1);
    if ((!(w0_1 > 9.99999997e-07f))) goto L_C08DB36;
    goto L_C08DDD8;
    L_C08DB36:;
    (((struct o70_uint *)(v0_0))->v) = 0x2;
    v0_2 = (((struct o78_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_0))->v) = (v0_2 - 1);
    if (((v0_2 - 1) != 0)) goto L_C08DB4C;
    goto L_C08DDD8;
    L_C08DB4C:;
    v0_7 = ((*(int *)((v0_1 + 0x0))));
    w0_2 = (2.44148055e-07f);
    w0_1 = (0.00799999945f);
    L_C08DB9A:;
    if ((v0_7 != 0)) goto L_C08DB58;
    goto L_C08DDD8;
    L_C08DB58:;
    if ((v0_0 == v0_7)) goto L_C08DB98;
    w0_3 = nlLength((v0_7 + 0x34), (v0_0 + 0x34));
    F0 = (w0_3);
    if ((w0_3 > ((((((struct o64_float *)(v0_0))->v)) + ((((struct o64_float *)(v0_7))->v))) * 10.0f))) goto L_C08DB98;
    (((struct o70_uint *)(v0_0))->v) = R12;
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_2 * (float)(FUN_0c0da2e0());
    FUN_0c0dce80((v0_0 + 0x4C), (v0_0 + 0x58), w0_1);
    goto L_C08DDD8;
    L_C08DB98:;
    v0_7 = ((*(int *)((v0_7 + 0x30))));
    goto L_C08DB9A;
    L_C08DA64:;
    (((struct o70_uint *)(v0_0))->v) = 0x2;
    v0_2 = (*(int *)((v0_1 + 0x0)));
    v0_1 = (0xC0DCE40);
    v0_7 = v0_2;
    w0_2 = (3.05185068e-07f);
    w0_1 = (0.0f);
    L_C08DAD6:;
    if ((v0_7 != 0)) goto L_C08DA76;
    goto L_C08DDD8;
    L_C08DA76:;
    if ((v0_7 == v0_0)) goto L_C08DAD4;
    w0_3 = nlLength((v0_7 + 0x34), (v0_0 + 0x34));
    F0 = (w0_3);
    if ((w0_3 > ((((((struct o64_float *)(v0_0))->v)) + ((((struct o64_float *)(v0_7))->v))) * 10.0f))) goto L_C08DAD4;
    (((struct o70_uint *)(v0_0))->v) = R12;
    nlSubVector3op((v0_0 + 0x58), (v0_7 + 0x34), (v0_0 + 0x34));
    (((struct o5C_float *)(v0_0))->v) = w0_1;
    FUN_0c0dd050((v0_0 + 0x58));
    w0_1 = w0_0;
    w0_1 = w0_1 + w0_2 * (float)(FUN_0c0da2e0());
    nlScaleUnitVector((v0_0 + 0x4C), (v0_0 + 0x58), w0_1);
    goto L_C08DDD8;
    L_C08DAD4:;
    v0_7 = ((*(int *)((v0_7 + 0x30))));
    goto L_C08DAD6;
}

int FUN_0c0d637e(int a4, int a5, int a6, int a7, float f4)
{
    int stk[11];
    register int t11;
    register float t14;
    register float u16;
    register float u20;
    register float u21;
    register int t31;
    register int t33;
    register int t34;
    register int t35;
    register float t36;
    register float u39;
    register float u40;
    register int t44;
    register int t62;

    (((struct o74_uint *)(a4))->v) = a5;
    if (a5 == 2) {
        (((struct o78_uint *)(a4))->v) = ((((struct oF4_int *)(a4))->v));
    } else {
        if (a5 == 3) {
            (((struct o78_uint *)(a4))->v) = ((((struct o11C_int *)(a4))->v));
        } else {
            (((struct o78_uint *)(a4))->v) = 0xFFFFFFFF;
        }
    }
    if (a5 != 4) {
    } else {
        if ((*(int *)((a4 + 0x30))) != 8) {
            t11 = (((struct o6C_int *)(a4))->v);
            *(int *)((int)stk + 0) = (0x14C + a4);
            FUN_0c0d1942(a4, a5, a6, a7, (0x14C + a4));
            t14 = nlLength((((((struct o6C_int *)(a4))->v)) + 0x30), (0x14C + a4));
            u16 = *(float *)0xC0D65F4;
            u20 = u16;
            u20 = u20 + u16 * (((-(*(float *)((((((*(int *)((a4 + 0x8))) << 2) << 2) << 1) + 0xC943530)))) + 1.0f));
            u21 = u20;
            if (!(t14 > u20)) {
                u21 = t14;
            }
            FUN_0c0a68ec((((int)stk + 4) + 0xC), (((((struct o30_float *)(t11))->v)) - ((((struct o14C_float *)(a4))->v))), (((((struct o38_float *)(t11))->v)) - ((((struct o154_float *)(a4))->v))));
            FUN_0c0a6800((*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x1C), 0.0f, 0.0f, (-u21));
            nlAddVector((0x14C + a4), (((int)stk + 4) + 0x1C));
        } else {
            t31 = (((struct o6C_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 12)) = ((((struct o70_int *)(a4))->v));
            t33 = (((struct oC0_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 8)) = 0x8;
            t34 = 0x0;
            t35 = (t33 - 16384);
            for (;;) {
                t36 = FUN_0c0d7178((t31 + 0x30), t35);
                if ((t36 - 40.0f) > 22.0f) {
                    u39 = 22.0f;
                    u39 = u39 + (FUN_0c0da300()) * (((t36 - 40.0f) + -22.0f));
                    u40 = u39;
                    if (u39 > 35.0f) {
                        u40 = 35.0f;
                    }
                    FUN_0c0a6800(t35, (((int)stk + 4) + 0x1C), 0.0f, 0.0f, (-u40));
                    nlAddVector((((int)stk + 4) + 0x1C), (t31 + 0x30));
                    t44 = *(int *)(((int)stk + 12));
                    FUN_0c0a68ec(((int)stk + 4), ((*(float *)(((int)stk + 32))) - ((((struct o30_float *)(t44))->v))), ((*(float *)(((int)stk + 40))) - ((((struct o38_float *)(t44))->v))));
                    if ((int)(*(int *)(((int)stk + 4))) > (int)t34) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)((((int)stk + 4) + 0x1C)); }
                        t34 = (*(int *)(((int)stk + 4)));
                    }
                }
                t62 = *(int *)(((int)stk + 8));
                t35 = (t35 + 0x1000);
                *(unsigned int *)(((int)stk + 8)) = (t62 - 1);
                if ((t62 - 1) == 0) {
                    break;
                }
            }
            if ((int)t34 > (int)0x11C7) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x14C + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x10)); }
            } else {
                *(int *)((int)stk + 0) = (0x14C + a4);
                FUN_0c0d1942(0x0, 0x0, 0x0, 0x0, (0x14C + a4));
            }
        }
    }
    return (FUN_0c0d6592(a4, a5));
}

int FUN_0c06e384(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t9;
    register int t19;
    register int t25;
    register int t37;
    register int t43;
    register int t57;
    register int t77;
    register int t30;
    register int t7;
    register int t8;
    register int t10;
    register float u11;
    register int t42;

    t0 = (((struct o44_short *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t30 = t0;
            if (t0 == 2) {
                t30 = (FUN_0c0e19f2());
            }
        } else {
            nlPushMatrix(0x0);
            FUN_0c0dbda0((a4 + 0x50));
            t9 = 0x0;
            for (;;) {
                if ((int)t9 >= (int)((((struct o46_short *)(a4))->v))) {
                    break;
                }
                t10 = t9;
                t10 = (t10 << 1);
                t8 = ((((struct o4C_int *)(a4))->v));
                t10 = (t10 + t9);
                t10 = (t10 << 2);
                t8 = (t8 + t10);
                u11 = ((((struct o4_float *)(t8))->v));
                FUN_0c0db470((((((struct o48_int *)(a4))->v)) + t10), t8);
                t19 = FUN_0c0c8d06((((((struct o4C_int *)(a4))->v)) + t10));
                t9 = (t9 + 0x1);
                if ((int)t19 < 0) {
                    t7 = ((((struct o4C_int *)(a4))->v));
                    t7 = (t7 + t10);
                    (((struct o4_float *)(t7))->v) = u11;
                }
            }
            t25 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct oA4_int *)(a4))->v))))(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            nlGetMatrix((a4 + 0x50));
            FUN_0c0c47ae(((((struct o42_short *)(a4))->v)));
            t30 = (nlPopMatrix(0x1));
        }
        t77 = t30;
    } else {
        t37 = (((struct o46_short *)(a4))->v);
        (((struct o4C_uint *)(a4))->v) = (FUN_0c0e27be((((t37 << 1) + t37) << 2)));
        nlPushMatrix(0x0);
        FUN_0c0dbda0((a4 + 0x50));
        t43 = 0x0;
        for (;;) {
            if ((int)t43 >= (int)((((struct o46_short *)(a4))->v))) {
                break;
            }
            t42 = t43;
            t42 = (t42 << 1);
            t42 = (t42 + t43);
            t42 = (t42 << 2);
            FUN_0c0db470((((((struct o48_int *)(a4))->v)) + t42), (((((struct o4C_int *)(a4))->v)) + t42));
            t43 = (t43 + 0x1);
        }
        nlPopMatrix(0x1);
        (((struct o90_uchar *)(a4))->v) = (*(signed char *)(((a4 + 0x3C) + 0x0)));
        *(unsigned char *)(((0x90 + a4) + 0x1)) = (*(signed char *)(((a4 + 0x3C) + 0x1)));
        *(unsigned char *)(((0x90 + a4) + 0x2)) = (*(signed char *)(((a4 + 0x3C) + 0x2)));
        *(unsigned char *)(((0x90 + a4) + 0x3)) = (*(signed char *)(((a4 + 0x3C) + 0x3)));
        *(unsigned char *)(((0x90 + a4) + 0x4)) = (*(signed char *)(((a4 + 0x3C) + 0x4)));
        *(unsigned char *)(((0x90 + a4) + 0x5)) = (*(signed char *)(((a4 + 0x3C) + 0x5)));
        if (((((struct o46_short *)(a4))->v)) == 2) {
            t57 = (((struct o48_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 0)) = t57;
            nlSubVector3op((((int)stk + 0) + 0x4), (t57 + 0xC), t57);
            (((struct oA8_float *)(a4))->v) = (FUN_0c0dcea0((((int)stk + 0) + 0x4)));
            (((struct oAC_uint *)(a4))->v) = (-(FUN_0c0d9ca0(((*(float *)(((int)stk + 8))) / ((((struct oA8_float *)(a4))->v))))));
            (((struct oB0_uint *)(a4))->v) = (FUN_0c0d9dc0((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 12)))));
        }
        (((struct o9C_ushort *)(a4))->v) = ((int)((int)(FUN_0c0da2e0()) % (int)0x80));
        (((struct o9E_ushort *)(a4))->v) = ((int)((int)(FUN_0c0da2e0()) % (int)0x80));
        (((struct oA0_ushort *)(a4))->v) = ((int)((int)(FUN_0c0da2e0()) % (int)0x80));
        (((struct o44_ushort *)(a4))->v) = (((((struct o44_short *)(a4))->v)) + 0x1);
        t77 = 0x44;
    }
    return t77;
}

void FUN_0c032d90(int a4)
{
    int stk[8];
    register int t1;
    register int t4;
    register int t6;
    register int t33;

    if ((*(int *)0xC246A38) != 0) {
    } else {
        t1 = FUN_0c0e1830(0xC032BE0, 0x5EC);
        FUN_0c0e19d0(t1);
        *(unsigned int *)0xC246A38 = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        (((struct o510_uint *)(t1))->v) = ((((struct o510_int *)(a4))->v));
        t4 = 0xC246498;
        for (;;) {
            *(float *)((t4 + 0x0)) = 0.0f;
            (((struct o4_float *)(t4))->v) = 0.0f;
            (((struct o8_float *)(t4))->v) = 0.0f;
            t4 = (t4 + 0xC);
            if ((unsigned int)t4 >= (unsigned int)0xC246A38) {
                break;
            }
        }
        t6 = *(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0));
        FUN_0c0a7714((((int)stk + 0) + 0x4), ((int)stk + 0), (((((struct o30_float *)(t1))->v)) - ((((struct o30_float *)(t6))->v))), (((((struct o34_float *)(t1))->v)) - ((((struct o34_float *)(t6))->v))), (((((struct o38_float *)(t1))->v)) - ((((struct o38_float *)(t6))->v))));
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(int *)(((int)stk + 0))));
        if (((*(int *)0xC23A258) & 1) == 0) {
            *(float *)(((int)stk + 20)) = 0.5f;
            *(float *)(((int)stk + 24)) = 0.5f;
            *(float *)(((int)stk + 28)) = 1.0f;
            FUN_0c0db470((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
            (((struct o4B0_float *)(t1))->v) = (*(float *)(((int)stk + 8)));
            (((struct o4B4_float *)(t1))->v) = (*(float *)(((int)stk + 12)));
            (((struct o4B8_float *)(t1))->v) = (*(float *)(((int)stk + 16)));
        } else {
            *(float *)(((int)stk + 20)) = (*(float *)0xC032FEC);
            *(float *)(((int)stk + 24)) = 0.5f;
            *(float *)(((int)stk + 28)) = 1.0f;
            FUN_0c0db470((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
            (((struct o4B0_float *)(t1))->v) = (*(float *)(((int)stk + 8)));
            (((struct o4B4_float *)(t1))->v) = (*(float *)(((int)stk + 12)));
            (((struct o4B8_float *)(t1))->v) = (*(float *)(((int)stk + 16)));
        }
        nlPopMatrix(0x1);
        nlAddVector((t1 + 0x48), (0x4B0 + t1));
        nlAddVector((t1 + 0x30), (t1 + 0x48));
        t33 = (((struct o4EC_int *)(t1))->v);
        (((struct o4EC_uint *)(t1))->v) = (t33 + 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((t33 + 0x1) - 1) << 1) + ((t33 + 0x1) - 1)) << 2) + 0xC246498)) = *(struct mv3 *)((t1 + 0x30)); }
    }
}

int FUN_0c06867a(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t9;
    register float u30;
    register float u34;
    register int t35;
    register int t53;
    register int t69;

    t0 = (((struct o80_int *)(a4))->v);
    switch (t0) {
    case 0:
        (((struct oA0_uint *)(a4))->v) = 0x5A;
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t69 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t69 - 1);
        if ((int)(t69 - 1) > 0) {
        } else {
            (((struct oA0_uint *)(a4))->v) = 0xA;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    case 1:
        t53 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t53 - 1);
        if ((int)(t53 - 1) > 0) {
        } else {
            (((struct oA0_uint *)(a4))->v) = 0xA;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
        break;
    case 2:
        *(int *)((int)stk + 0) = (a4 + 0x30);
        u30 = ((((struct o30_float *)(a4))->v));
        u30 = u30 + 0.00999999978f * ((float)(((FUN_0c0da2e0()) & 0x1F) - 15));
        (((struct o30_float *)(a4))->v) = u30;
        *(int *)((int)stk + 0) = (a4 + 0x38);
        u34 = ((((struct o38_float *)(a4))->v));
        u34 = u34 + 0.00999999978f * ((float)(((FUN_0c0da2e0()) & 0x1F) - 15));
        (((struct o38_float *)(a4))->v) = u34;
        t35 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t35 - 1);
        if ((int)(t35 - 1) <= 0) {
            (((struct oA0_uint *)(a4))->v) = 0x32;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)((a4 + 0x30)); }
            *(float *)(((int)stk + 16)) = 16.0f;
            FUN_0c086c1e(((int)stk + 4), 0x4, 0x96, *(Stk4 *)(((int)stk + 4)), 1.0f);
        }
        break;
    case 3:
        (((struct o60_ushort *)(a4))->v) = (((((struct o60_short *)(a4))->v)) - 0x100);
        (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + 0x100);
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        t9 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t9 - 1);
        if ((int)(t9 - 1) <= 0) {
            FUN_0c0e19f2();
        }
        break;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o64_short *)(a4))->v)));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0d41c6(void)
{
    int stk[1];
    register int t0;
    register int t26;
    register int t28;
    register int t31;
    register int t33;
    register int t37;
    register int t29;
    register int t34;

    { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC943564) = *(struct mv4 *)(0xC249880); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC943554) = *(struct mv4 *)(0xC249880); }
    t0 = 0x0;
    for (;;) {
        FUN_0c0d3f0c(t0);
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x0;
        if ((*(int *)0xC943400) != 2) {
            if ((*(int *)0xC943400) == 0) {
                if (t0 == (0x1 - (*(int *)0xC23A1BC))) {
                    *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
                }
            }
        } else {
            *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x0)) = 0x1;
        }
        *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0x8)) = t0;
        if ((*(int *)(((t0 << 2) + 0xC23EDC0))) == 4) {
            *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x0;
        } else {
            if ((*(int *)(((t0 << 2) + 0xC23EDC0))) == 0) {
                *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x1;
            } else {
                *(unsigned int *)((((t0 * 0x1D4) + 0xC9436B4) + 0xC)) = 0x2;
            }
        }
        (((struct o40_uint *)(((t0 * 0x1D4) + 0xC9436B4)))->v) = 0x1;
        (((struct o54_uint *)(((t0 * 0x1D4) + 0xC9436B4)))->v) = 0x10000;
        (((struct o6C_uint *)(((t0 * 0x1D4) + 0xC9436B4)))->v) = (*(int *)((((t0 << 2) + 0xC246FF0) + 0x0)));
        (((struct o70_uint *)(((t0 * 0x1D4) + 0xC9436B4)))->v) = (*(int *)(((((0x1 - t0) << 2) + 0xC246FF0) + 0x0)));
        *(unsigned int *)(((int)stk + 0)) = (0xC943574 + ((((t0 << 2) + t0) << 2) << 2));
        t26 = (0xC2497E0 + ((((t0 << 2) + t0) << 2) << 2));
        t28 = (0xC943614 + ((((t0 << 2) + t0) << 2) << 2));
        for (;;) { t29 = *(int *)t26; t26 = (t26 + 4); if ((unsigned int)(((0xC2497E0 + ((((t0 << 2) + t0) << 2) << 2)) + 80)) < (unsigned int)t26) break; *(unsigned int *)t28 = t29; t28 = (t28 + 4); }
        t31 = (0xC2497E0 + ((((t0 << 2) + t0) << 2) << 2));
        t33 = (*(int *)(((int)stk + 0)));
        for (;;) { t34 = *(int *)t31; t31 = (t31 + 4); if ((unsigned int)(((0xC2497E0 + ((((t0 << 2) + t0) << 2) << 2)) + 80)) < (unsigned int)t31) break; *(unsigned int *)t33 = t34; t33 = (t33 + 4); }
        t37 = ((t0 * 0x1D4) + 0xC9436B4);
        t0 = (t0 + 0x1);
        (((struct o68_uint *)(t37))->v) = ((int)((int)(FUN_0c0da2e0()) % (int)0x1E));
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return FUN_0c0d6a64();
}

int FUN_0c0975d0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((int)a6 > 0) {
        t1 = 0xC0976E4;
        t2 = a4;
        t3 = a5;
        t4 = a6;
        t5 = a7;
        t6 = 0x0;
        t7 = a5;
        for (;;) {
            if (((*(int *)((t7 + 0x0))) == 0) && (t0 = a7, (int)a4 < (int)t0)) {
                t1 = (FUN_0c0da2e0());
                t8 = t1;
                t1 = 0x9;
                t1 = ((int)((int)t8 % (int)t1));
                t1 = (t1 + 0x2A7);
                t0 = 0x14;
                *(unsigned int *)((t7 + 0x4)) = t1;
                *(unsigned int *)((t7 + 0x0)) = t0;
                t1 = (FUN_0c0da2e0());
                t1 = (unsigned char)t1;
                t8 = t1;
                t1 = 0x8;
                u1 = (float)t8;
                u1 = (u1 / 512.0f);
                u1 = (u1 + 0.5f);
                *(float *)((t7 + t1)) = u1;
                t2 = 0x0;
                t1 = (nlPushMatrix(t2));
                t1 = (FUN_0c0da2e0());
                t2 = t1;
                t2 = (t2 << 1);
                t1 = (nlRotateAY(t2));
                t0 = 0xC0DC950;
                t2 = 0xBFFF;
                t1 = (nlRotateAZ(t2));
                t2 = t7;
                t2 = (t2 + 0x10);
                t1 = (nlGetMatrix(t2));
                t2 = 0x1;
                t1 = (nlPopMatrix(t2));
            } else {
                t8 = t2;
                t9 = t3;
                t10 = t4;
                t11 = t5;
                u2 = u0;
                u3 = u1;
            }
            u0 = u2;
            u1 = u3;
            t0 = (*(int *)((t7 + 0x0)));
            t2 = t8;
            t3 = t9;
            t4 = t10;
            t5 = t11;
            if (t0 != 0) {
                t1 = 0x8;
                u0 = 0.0f;
                u1 = (*(float *)((t7 + t1)));
                if (u1 != u0) {
                    t0 = (*(int *)((t7 + 0x0)));
                    u1 = (float)t0;
                    u2 = u1;
                    u2 = (u2 / 20.0f);
                    t2 = 0x0;
                    t1 = (nlPushMatrix(t2));
                    t0 = 0xC200AEC;
                    t1 = (FUN_0c0848bc((((((struct o0_float *)0xC200AE8)->v)) * u2), ((*(float *)((t0 + 0x0))) * u2), (((((struct o8_float *)0xC200AE8)->v)) * u2)));
                    t0 = 0xC0DBDA0;
                    t2 = t7;
                    t2 = (t2 + 0x10);
                    t1 = (FUN_0c0dbda0(t2));
                    t2 = (*(int *)((t7 + 0x4)));
                    t1 = (FUN_0c0c47ae(t2));
                    t2 = 0x1;
                    t1 = (nlPopMatrix(t2));
                } else {
                    t8 = t2;
                    t9 = t3;
                    t10 = t4;
                    t11 = t5;
                    u2 = u0;
                    u3 = u1;
                }
                u0 = u2;
                u1 = u3;
                t0 = (*(int *)((t7 + 0x0)));
                t2 = t8;
                t3 = t9;
                t4 = t10;
                t5 = t11;
                t0 = (t0 - 1);
                *(unsigned int *)((t7 + 0x0)) = t0;
            }
            t6 = (t6 + 0x1);
            t7 = (t7 + 0x50);
            if ((int)t6 >= (int)a6) {
                break;
            }
        }
        t0 = t1;
    } else {
        t0 = 0xC0976E4;
    }
    return t0;
}

int FUN_0c03261c(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];
    register int t4;
    register int t5;
    register int t9;
    register int t6;
    int t7;
    register int t8;

    *(float *)(((int)stk + 8)) = f4;
    *(float *)(((int)stk + 4)) = f5;
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c0cc3f8((*(int *)(((((((struct o1F8_int *)(a4))->v)) << 2) + 0xC1FFB70))), a5, a6, a7);
        return 0x0;
    }
    t4 = FUN_0c032394(a4);
    if ((int)t4 >= 0) {
        t5 = FUN_0c02a416(a4);
        if ((t5 == 0) && ((t6 = (((struct o49C_int *)(a4))->v), t6 != 3) && (t7 = (((struct o510_int *)(a4))->v), t8 = *(int *)((0xC247030 + (t7 << 2))), t8 == 4))) {
            t9 = (((struct o510_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x2C)) = *(struct mv3 *)(((((((t9 << 1) + t9) << 2) << 2) << 2) + 0xC23F274)); }
            *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 8)));
            *(float *)(((int)stk + 60)) = (1.0f + 1.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)((a4 + 0x30)); }
            *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 4)));
            *(float *)(((int)stk + 40)) = 1.0f;
            FUN_0c036efc((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), ((int)stk + 0));
            nlAddVector((0x4B0 + a4), (((int)stk + 0) + 0xC));
            (((struct o550_float *)(a4))->v) = (*(float *)(((int)stk + 0)));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c08a220(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t23;
    register int t11;
    register int t14;
    register int t19;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(int *)0xC23ED84;
    t23 = t0;
    if (t0 == 1) {
        nlPushMatrix(0x0);
        FUN_0c0db470((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 1.0f);
        FUN_0c0dbda0(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2EC));
        FUN_0c0db470((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x8));
        nlPopMatrix(0x1);
        t11 = *(int *)0xC23ECF0;
        if ((*(int *)(((int)stk + 0))) == 0) {
            t19 = FUN_0c0e19aa(0xC08C3EC, 0xA4, t11);
            FUN_0c0e19d0(t19);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t19 + 0x70)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
            t14 = *(int *)0xC23A1A4;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t19 + 0x7C)) = *(struct mv3 *)(((((t14 << 1) + t14) << 2) + 0xC10A96C)); }
            (((struct o9A_ushort *)(t19))->v) = 0x344;
            (((struct oA2_ushort *)(t19))->v) = 0x1;
            (((struct oA0_ushort *)(t19))->v) = 0x9;
        } else {
            t19 = FUN_0c0e19aa(0xC08C33C, 0xA4, t11);
            FUN_0c0e19d0(t19);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t19 + 0x70)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
            (((struct o9A_ushort *)(t19))->v) = 0x245;
            (((struct oA0_ushort *)(t19))->v) = 0x14;
        }
        (((struct o90_float *)(t19))->v) = 1.0f;
        (((struct o94_float *)(t19))->v) = 1.0f;
        t23 = 0x94;
    }
    return t23;
}

int FUN_0c016d74(void)
{
    register int t4;
    register int t5;
    register int t7;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t6;

    t4 = 0xC23EE14;
    t5 = 0x0;
    for (;;) {
        t7 = *(int *)((t4 + 0x4));
        if (t7 != 0) {
            t0 = 0x48;
            t2 = (*(int *)((t7 + t0)));
            if (t2 != 0) {
                t3 = 0xC23ECF0;
                t0 = (FUN_0c0e19aa((*(int *)((t7 + t0))), 0xB4, (*(int *)((t3 + 0x0)))));
                t3 = 0xC0E19D0;
                t6 = t0;
                t0 = (FUN_0c0e19d0(t0));
                t2 = t7;
                t3 = 0xC0E61D4;
                t1 = t6;
                t2 = (t2 + 0x2C);
                t1 = (t1 + 0x30);
                t0 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                t2 = (*(int *)((t7 + 0x38)));
                t0 = 0x60;
                *(unsigned short *)((t6 + t0)) = t2;
                t0 = 0x62;
                t3 = (*(int *)((t7 + 0x3C)));
                *(unsigned short *)((t6 + t0)) = t3;
                t0 = 0x40;
                t2 = (*(int *)((t7 + t0)));
                t0 = 0x78;
                *(unsigned int *)((t6 + t0)) = t2;
                t0 = 0x44;
                t3 = (*(short *)((t7 + t0)));
                t0 = (t0 + 0x3C);
                *(unsigned int *)((t6 + t0)) = t3;
                t0 = 0x46;
                t2 = (*(short *)((t7 + t0)));
                t0 = (t0 + 0x3E);
                *(unsigned int *)((t6 + t0)) = t2;
                t0 = (t0 + 0x4);
                *(unsigned int *)((t6 + t0)) = t5;
            }
            t4 = (t4 + 0x8);
        }
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    return t0;
}

int FUN_0c04f7cc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0xC247030));
        t2 = t3;
        if (t3 == 4) {
            t3 = 0xC246FF0;
            t3 = (t3 + t0);
            t3 = (*(int *)((t3 + 0x0)));
            FUN_0c049b80(t3);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)((0x24C + t3)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x3C)) = *(struct mv3 *)((0x24C + t3)); }
            (((struct o1B0_uint *)(t3))->v) = 0x0;
            (((struct oA4_uint *)(t3))->v) = 0xA7F;
            FUN_0c051a48(t3);
            *(unsigned int *)((t3 + 0x0)) = 0xC04A118;
            t2 = (FUN_0c055090(t3));
        }
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    return t2;
}
