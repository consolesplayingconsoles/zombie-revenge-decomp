/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02dc30(int);
int FUN_0c03611c(int);
int FUN_0c03a834(int);
int FUN_0c03aaa2(int);
int FUN_0c03afe8(int);
int FUN_0c03bffe(int);
int FUN_0c03c336(int);
int FUN_0c03c510(int);
int FUN_0c03c592(int, int, int, int);
int FUN_0c03c65c(int);
int FUN_0c03c70c(int);
int FUN_0c03c75c(int);
int FUN_0c03c900(int);
int FUN_0c03c9e0(int);
int FUN_0c03cb3a(int);
int FUN_0c03cc70(int, int);
int FUN_0c03ce1e(int, int, int, int);
int FUN_0c03cfb8(int);
int FUN_0c03d020(int);
int FUN_0c03d038(int);
int FUN_0c03d516(int);
extern int FUN_0c0848d6();
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c09ee68(int);
int FUN_0c0a9894(void);
extern int FUN_0c0a9d50();
int FUN_0c0a9e94(int, int);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e5dc0(void);
int FUN_0c0e5e74(void);
int FUN_0c0e5f1c(int);
int FUN_0c0e5fe4(void);
int nlGetMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0aa5ea(int a4, float f4);
void FUN_0c03d588(int a4, int a5, int a6, int a7);
float FUN_0c0ca9a8(int a4);

int FUN_0c0aa5ea(int a4, float f4)
{
    int t5;
    int t6;
    int t12;
    int t13;
    float u15;
    int t19;
    float u21;
    float u26;
    float u29;
    int t30;
    int t38;
    int t39;
    float u45;
    float u49;
    float u51;
    int t52;
    float u79;
    float u81;
    float u83;
    float u84;
    float u90;
    float u107;
    float u114;
    int t117;
    float u121;
    int t122;
    int t127;
    int t129;
    int t130;
    int t131;
    float u135;
    int t136;
    int t139;
    float u273;
    float u274;
    float u275;
    float u276;
    int t192;
    int t407;
    int t409;
    float u414;
    float u417;
    float u418;
    float u419;
    int t280;
    int t281;
    int t283;
    int t392;
    int t393;
    float u399;
    float u402;
    float u403;
    float u404;
    int t285;
    int t378;
    int t379;
    int t291;
    int t296;
    float u332;
    int t334;
    float u336;
    float u339;
    int t340;
    int t344;
    int t345;
    int t347;
    int t348;
    int t349;
    int t350;
    int t351;
    float u352;
    int t353;
    int t358;
    float u359;
    int t360;
    int t368;
    int t375;
    int t421;
    int t1025;
    int t424;
    int t425;
    int t426;
    int t427;
    float u434;
    float u437;
    float u438;
    float u439;
    float u440;
    float u442;
    int t446;
    float u447;
    float u449;
    int t451;
    int t453;
    float u454;
    float u457;
    float u458;
    float u462;
    float u463;
    int t465;
    int t466;
    int t468;
    float u486;
    float u491;
    int t501;
    int t505;
    int t508;
    int t515;
    int t519;
    int t522;
    float u529;
    float u534;
    int t544;
    int t548;
    int t551;
    int t558;
    int t562;
    int t565;
    float u567;
    float u570;
    float u571;
    float u572;
    float u573;
    float u575;
    int t579;
    float u580;
    float u582;
    int t584;
    int t586;
    float u587;
    float u590;
    float u591;
    float u595;
    float u596;
    int t598;
    int t599;
    int t601;
    float u619;
    float u624;
    int t634;
    int t638;
    int t641;
    int t648;
    int t652;
    int t655;
    float u662;
    float u667;
    int t677;
    int t681;
    int t684;
    int t691;
    int t695;
    int t698;
    float u701;
    float u704;
    float u705;
    float u706;
    float u707;
    float u709;
    int t713;
    float u714;
    float u716;
    int t718;
    int t720;
    float u721;
    float u724;
    float u725;
    float u729;
    float u730;
    int t732;
    int t733;
    int t735;
    float u753;
    float u758;
    int t768;
    int t772;
    int t775;
    int t782;
    int t786;
    int t789;
    float u796;
    float u801;
    int t811;
    int t815;
    int t818;
    int t825;
    int t829;
    int t832;
    float u834;
    float u837;
    float u838;
    float u839;
    float u840;
    float u842;
    int t846;
    float u847;
    float u849;
    int t851;
    int t853;
    float u854;
    float u857;
    float u858;
    float u862;
    float u863;
    int t865;
    int t866;
    int t868;
    float u886;
    float u891;
    int t901;
    int t905;
    int t908;
    int t915;
    int t919;
    int t922;
    float u929;
    float u934;
    int t944;
    int t948;
    int t951;
    int t958;
    int t962;
    int t965;
    int t967;
    float u997;
    float u1000;
    float u1001;
    float u1002;
    float u1003;
    float u1005;
    int t1007;
    float u1009;
    int t1011;
    float u1013;
    float u1016;
    float u1017;
    float u1021;
    float u1022;
    int t1039;
    int t1040;
    int t1041;
    int t1042;
    int t1043;
    int t1044;
    int t1045;
    float u1046;
    float u1047;
    float u1048;
    float u1049;
    int t1050;
    int t1073;
    float u1075;
    int t1078;
    float u1080;
    int t1087;
    int t1092;
    int t1094;
    int t1103;
    float u95;
    int t128;
    float u132;
    float u133;
    float u134;
    int t142;
    int t144;
    float u145;
    float u146;
    float u147;
    float u148;
    int t272;
    int t183;
    int t185;
    float u186;
    float u187;
    float u188;
    float u189;
    int t174;
    int t176;
    float u177;
    float u178;
    float u179;
    float u180;
    int t165;
    int t167;
    float u168;
    float u169;
    float u170;
    float u171;
    int t156;
    int t158;
    float u159;
    float u160;
    float u161;
    float u162;
    int t263;
    float u264;
    float u265;
    float u266;
    float u267;
    int t253;
    float u254;
    float u255;
    float u256;
    float u257;
    int t231;
    float u232;
    float u233;
    float u234;
    float u235;
    int t221;
    float u222;
    float u223;
    float u224;
    float u225;
    int t244;
    float u245;
    float u246;
    float u247;
    float u248;
    int t406;
    float u385;
    float u388;
    float u389;
    float u390;
    int t362;
    int t363;
    float u366;
    int t369;
    int t370;
    int t376;
    int t1026;
    int t1029;
    int t1030;
    float u1032;
    float u1035;
    float u1036;
    float u1037;
    int t423;
    int t467;
    int t470;
    int t474;
    int t475;
    int t600;
    int t603;
    int t607;
    int t608;
    int t734;
    int t737;
    int t741;
    int t742;
    int t867;
    int t870;
    int t874;
    int t875;
    float u968;
    int t1051;
    int t1055;
    int t1057;
    float u1059;
    float u1060;
    float u1061;
    float u1062;
    int stk[43];

    *(unsigned int *)(((int)stk + 16)) = 0xC247ED8;
    if (a4 == 0) {
        *(unsigned int *)0xC24FA50 = 0x0;
        *(unsigned int *)0xC24FA54 = 0x0;
        *(unsigned int *)0xC24FA58 = 0x0;
        *(unsigned int *)0xC24FA5C = 0x0;
        FUN_0c0cbafc(0x294, 0x2, 0x7000, 0x2000);
    }
    *(float *)(((int)stk + 44)) = (float)a4;
    if ((int)a4 <= (int)0xA) {
        t5 = *(int *)(((int)stk + 16));
        *(float *)((t5 + 0x10)) = ((float)a4 / 10.0f);
        *(float *)((t5 + 0x14)) = ((float)a4 / 10.0f);
        *(float *)((t5 + 0x18)) = ((float)a4 / 10.0f);
    } else {
        t6 = *(int *)(((int)stk + 16));
        *(float *)(((t6 + 0x10) + 0x8)) = 1.0f;
        *(float *)(((t6 + 0x10) + 0x4)) = 1.0f;
        *(float *)(((t6 + 0x10) + 0x0)) = 1.0f;
    }
    t12 = FUN_0c0e5dc0();
    t13 = ((int (*)(int))(FUN_0c0e5f1c))(a4);
    u15 = 1.0f;
    if ((int)t13 < (int)0x5A) {
        u15 = ((float)t13 / 90.0f);
    }
    *(float *)(((int)stk + 20)) = (1.0f - u15);
    *(unsigned int *)(((int)stk + 24)) = (((((0x3 & t12) << 1) + (0x3 & t12)) << 2) + 0xC10D980);
    t19 = *(int *)(((((((0x3 & t12) << 1) + (0x3 & t12)) << 2) + 0xC10D980) + 0x8));
    *(unsigned int *)(((int)stk + 8)) = (((((0x3 & ((0x3 & t12) - 1)) << 1) + (0x3 & ((0x3 & t12) - 1))) << 2) + 0xC10D980);
    u21 = ((float)(*(int *)(((((((0x3 & ((0x3 & t12) - 1)) << 1) + (0x3 & ((0x3 & t12) - 1))) << 2) + 0xC10D980) + 0x8))) * (1.0f - u15));
    u21 = u21 + u15 * (float)t19;
    u26 = ((float)(*(int *)(((((((0x3 & ((0x3 & t12) - 1)) << 1) + (0x3 & ((0x3 & t12) - 1))) << 2) + 0xC10D980) + 0x4))) * (*(float *)(((int)stk + 20))));
    u26 = u26 + u15 * (float)(*(int *)(((((((0x3 & t12) << 1) + (0x3 & t12)) << 2) + 0xC10D980) + 0x4)));
    u29 = ((float)(*(int *)(((((((0x3 & ((0x3 & t12) - 1)) << 1) + (0x3 & ((0x3 & t12) - 1))) << 2) + 0xC10D980) + 0x0))) * (*(float *)(((int)stk + 20))));
    u29 = u29 + u15 * (float)(*(int *)(((((((0x3 & t12) << 1) + (0x3 & t12)) << 2) + 0xC10D980) + 0x0)));
    t30 = ((int (*)(int, float, float, float))(FUN_0c0848d6))(t13, (u29 * 0.799999952f), (u26 * 0.799999952f), (u21 * 0.799999952f));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.0f, 6.03999996f);
    *(unsigned int *)(((int)stk + 8)) = ((a4 << 2) << 2);
    nlRotateAZ((-((a4 << 2) << 2)));
    nlScale(30.0f, 30.0f, 30.0f);
    FUN_0c0de000(30.0f);
    FUN_0c0c465c(0x294);
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 64)) = (((0x3 & t12) + 0x1) & 0x3);
    *(unsigned int *)(((int)stk + 24)) = (((0x3 & ((0x3 & t12) - 1)) + 0x1) & 0x3);
    t38 = *(int *)(((int)stk + 64));
    t39 = *(int *)(((int)stk + 24));
    u45 = ((float)(*(int *)((((((t39 << 1) + t39) << 2) + 0xC10D980) + 0x8))) * (*(float *)(((int)stk + 20))));
    u45 = u45 + u15 * (float)(*(int *)((((((t38 << 1) + t38) << 2) + 0xC10D980) + 0x8)));
    u49 = ((float)(*(int *)((((((t39 << 1) + t39) << 2) + 0xC10D980) + 0x4))) * (*(float *)(((int)stk + 20))));
    u49 = u49 + u15 * (float)(*(int *)((((((t38 << 1) + t38) << 2) + 0xC10D980) + 0x4)));
    u51 = ((float)(*(int *)((((((t39 << 1) + t39) << 2) + 0xC10D980) + 0x0))) * (*(float *)(((int)stk + 20))));
    u51 = u51 + u15 * (float)(*(int *)((((((t38 << 1) + t38) << 2) + 0xC10D980) + 0x0)));
    t52 = ((int (*)(float, float, float))(FUN_0c0848d6))((u51 * 1.0f), (u49 * 1.0f), (u45 * 1.0f));
    nlPushMatrix(0x0);
    nlRotateAZ((*(int *)(((int)stk + 8))));
    FUN_0c0dcc70(6.0f, 8.39999962f, 6.01999998f);
    nlRotateAY(0x8000);
    nlScale(12.0f, 12.0f, 12.0f);
    FUN_0c0de000(12.0f);
    FUN_0c0c475c(0x20, 0.699999988f);
    nlPopMatrix(0x1);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.0f, 0.0f);
    nlPopMatrix(0x1);
    if ((int)a4 >= (int)0x96) {
    } else {
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 40)) = 0.0f;
        if ((int)a4 > (int)0x78) {
            *(float *)(((int)stk + 32)) = ((float)(a4 - 120) / 15.0f);
            if (((float)(a4 - 120) / 15.0f) > 1.0f) {
                *(float *)(((int)stk + 32)) = 1.0f;
            }
        }
        if ((int)a4 > (int)0x87) {
            *(float *)(((int)stk + 40)) = ((float)(0xFFFFFF79 + a4) / 15.0f);
            if (((float)(0xFFFFFF79 + a4) / 15.0f) > 1.0f) {
                *(float *)(((int)stk + 40)) = 1.0f;
            }
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70(0.0f, 0.0f, -0.299999982f);
        nlRotateAY(0x8000);
        u79 = 1.0f;
        u79 = u79 + 90.0f * (*(float *)(((int)stk + 40)));
        *(float *)(((int)stk + 28)) = (u79 * 0.129999995f);
        u81 = 1.0f;
        u81 = u81 + 90.0f * (*(float *)(((int)stk + 32)));
        *(float *)(((int)stk + 36)) = (u81 * 0.129999995f);
        nlScale((u81 * 0.129999995f), (u79 * 0.129999995f), 0.129999995f);
        u83 = *(float *)(((int)stk + 28));
        u84 = u83;
        if (0.129999995f > u83) {
            u84 = 0.129999995f;
        }
        if (u84 > (*(float *)(((int)stk + 36)))) {
            u90 = 0.129999995f;
            if (0.129999995f > (*(float *)(((int)stk + 28)))) {
            } else {
                u90 = (*(float *)(((int)stk + 28)));
            }
            u95 = u90;
        } else {
            u95 = (*(float *)(((int)stk + 36)));
        }
        FUN_0c0de000(u95);
        FUN_0c0c465c(0x123A);
        if ((int)a4 < (int)0x78) {
            FUN_0c0dcc70(1.0f, 0.0f, 0.0f);
            FUN_0c0c465c(0x123A);
        }
        nlPopMatrix(0x1);
        u107 = 1.0f;
        if ((int)a4 < (int)0x6E) {
            u107 = ((*(float *)(((int)stk + 44))) / 110.0f);
        }
        if ((1.0f > u107) && ((0xF & a4) == 0)) {
            FUN_0c0cc3f8(0x32A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
        }
        u114 = *(float *)(((int)stk + 32));
        *(float *)(((int)stk + 60)) = (1.0f - u114);
        *(float *)0xC202250 = ((1.0f - u114) * (*(float *)(((*(int *)(((int)stk + 16))) + 0x10))));
        t117 = ((int (*)(int))(FUN_0c0c0340))(0xC202224);
        *(float *)0xC202288 = ((*(float *)(((int)stk + 60))) * (*(float *)(((*(int *)(((int)stk + 16))) + 0x10))));
        *(float *)0xC20226C = ((u107 * 187.0f) / 32.0f);
        u121 = 226.5f;
        u121 = u121 + 93.5f * u107;
        *(float *)0xC202260 = u121;
        t122 = ((int (*)(int))(FUN_0c0c0340))(0xC20225C);
        nlPopMatrix(0x1);
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t127 = 0xC0AAACC;
    t129 = a4;
    t130 = ((((t38 << 1) + t38) << 2) + 0xC10D980);
    t131 = 0xC10D980;
    u135 = f4;
    for (;;) {
        t136 = *(int *)(((int)stk + 8));
        if ((int)t136 < (int)0x3) {
            t128 = (*(int *)(((int)stk + 8)));
            t130 = a4;
            t131 = ((int)stk + 8);
            t139 = t128;
            t128 = (t128 << 2);
            t128 = (t128 + t139);
            t130 = (t130 - t128);
            t131 = (t131 + 0x3C);
            if (t130 == 0x1D1) {
                t129 = 0x82CA9;
                t127 = (FUN_0c0cc3f8(t129, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            } else {
                t142 = t128;
                t144 = t129;
                u145 = u132;
                u146 = u133;
                u147 = u134;
                u148 = u135;
            }
            u132 = u145;
            u133 = u146;
            u134 = u147;
            u135 = u148;
            t128 = t142;
            t129 = t144;
            u273 = u132;
            u274 = u133;
            u275 = u134;
            u276 = u135;
            if ((int)t130 <= (int)0x1D1) {
                t272 = t129;
            } else {
                t130 = (t130 - 0x1D1);
                t127 = 0x4;
                u134 = (float)(*(int *)(((int)stk + 8)));
                *(float *)((((int)stk + 8) + t127)) = u134;
                if ((int)t130 < (int)0x3C) {
                    t127 = 0xC0AAB7C;
                    u132 = (*(float *)((t127 + 0x0)));
                    u134 = (u134 * 0.0f);
                    u135 = 1.0f;
                    t127 = 0xC0AAB80;
                    u133 = (float)t130;
                    u133 = (u133 / u132);
                    u135 = (u135 - u133);
                    u133 = 190.0f;
                    u133 = (u133 - u134);
                    u134 = (*(float *)((t127 + 0x0)));
                    u135 = (u135 * u134);
                    u133 = (u133 - u135);
                    t127 = 0x28;
                    *(float *)((((int)stk + 8) + t127)) = u133;
                    t183 = t128;
                    t185 = t129;
                    u186 = u132;
                    u187 = u133;
                    u188 = u134;
                    u189 = u135;
                } else {
                    if ((int)t130 < (int)0x3E) {
                        u134 = (u134 * 0.0f);
                        u133 = 190.0f;
                        u133 = (u133 - u134);
                        t127 = 0x28;
                        *(float *)((((int)stk + 8) + t127)) = u133;
                        t174 = t128;
                        t176 = t129;
                        u177 = u132;
                        u178 = u133;
                        u179 = u134;
                        u180 = u135;
                    } else {
                        t128 = 0x5C;
                        if ((int)t130 < (int)t128) {
                            t130 = (t130 - 62);
                            t127 = 0x4;
                            *(float *)((((int)stk + 8) + t127)) = u134;
                            t127 = 0x4;
                            u133 = (float)t130;
                            u135 = u133;
                            u135 = (u135 / 30.0f);
                            u133 = (*(float *)((((int)stk + 8) + t127)));
                            t127 = 0x28;
                            u133 = (u133 * 0.0f);
                            u134 = (u134 * u135);
                            u134 = (u134 * 190.0f);
                            u134 = (-u134);
                            u134 = (u134 - u133);
                            u134 = (u134 + 190.0f);
                            *(float *)((((int)stk + 8) + t127)) = u134;
                            u134 = 0.0f;
                            if (u135 == u134) {
                                t129 = 0xA28A9;
                                t127 = (FUN_0c0cc3f8(t129, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                            } else {
                                t156 = t128;
                                t158 = t129;
                                u159 = u132;
                                u160 = u133;
                                u161 = u134;
                                u162 = u135;
                            }
                            t165 = t156;
                            t167 = t158;
                            u168 = u159;
                            u169 = u160;
                            u170 = u161;
                            u171 = u162;
                        } else {
                            u134 = (u134 * 190.0f);
                            u133 = 190.0f;
                            t127 = 0x28;
                            u133 = (u133 - u134);
                            *(float *)((((int)stk + 8) + t127)) = u133;
                            t165 = t128;
                            t167 = t129;
                            u168 = u132;
                            u169 = u133;
                            u170 = u134;
                            u171 = u135;
                        }
                        t174 = t165;
                        t176 = t167;
                        u177 = u168;
                        u178 = u169;
                        u179 = u170;
                        u180 = u171;
                    }
                    t183 = t174;
                    t185 = t176;
                    u186 = u177;
                    u187 = u178;
                    u188 = u179;
                    u189 = u180;
                }
                u132 = u186;
                u133 = u187;
                u134 = u188;
                u135 = u189;
                t128 = t183;
                t129 = t185;
                t127 = 0xC202294;
                t192 = *(int *)((((*(int *)(((int)stk + 8))) << 2) + t127));
                t127 = 0x28;
                *(unsigned int *)((t131 + 0x0)) = t192;
                u134 = (*(float *)((((int)stk + 8) + t127)));
                t127 = 0xC0AAC70;
                u133 = (*(float *)((t127 + 0x0)));
                t127 = 0x4;
                u133 = (u133 - u134);
                *(float *)((t131 + t127)) = u133;
                t127 = 0xC0AAC74;
                u134 = (*(float *)((t127 + 0x0)));
                t127 = 0x8;
                *(float *)((t131 + t127)) = u134;
                t127 = 0xC0AAC78;
                u134 = (*(float *)((t127 + 0x0)));
                t127 = 0xC;
                *(float *)((t131 + t127)) = u134;
                t127 = 0xC0AAC7C;
                u134 = (*(float *)((t127 + 0x0)));
                t127 = 0x10;
                *(float *)((t131 + t127)) = u134;
                t127 = 0xC0AAC80;
                u134 = (*(float *)((t127 + 0x0)));
                t127 = 0x14;
                *(float *)((t131 + t127)) = u134;
                t127 = 0x18;
                *(float *)((t131 + t127)) = 0.0f;
                t127 = 0x1C;
                *(float *)((t131 + t127)) = 0.0f;
                t127 = 0x20;
                *(float *)((t131 + t127)) = 1.0f;
                t127 = 0x24;
                *(float *)((t131 + t127)) = 1.0f;
                t127 = 0x2C;
                *(unsigned int *)((t131 + 0x28)) = 0x0;
                *(unsigned int *)((t131 + 0x34)) = 0xA;
                *(float *)((t131 + t127)) = 1.0f;
                if ((*(int *)0xC24FA5C) != 0) {
                    t128 = 0xC24FA48;
                    t129 = (*(int *)0xC24FA5C);
                    t129 = (t129 - (*(int *)((t128 + 0x0))));
                    t127 = (*(int *)0xC24FA58);
                    t129 = (t129 + a4);
                    t129 = (t129 - 1000);
                    u134 = (float)t129;
                    u135 = u134;
                    if (t127 == (*(int *)(((int)stk + 8)))) {
                        if ((int)t129 < (int)0x3C) {
                            t127 = 0x2C;
                            if ((0x2 & t129) != 0) {
                                u134 = 1.0f;
                            } else {
                                u134 = 0.0f;
                            }
                            *(float *)((t131 + t127)) = u134;
                        }
                        if ((int)t129 < (int)0x1E) {
                            t128 = 0x43A00000;
                            t127 = 0x4;
                            u134 = (*(float *)(((t127 + t131) + 0x0)));
                            u132 = (*(float *)((t131 + t127)));
                            u133 = (*(float *)&(t128));
                            u134 = (-u134);
                            u134 = (u134 + u133);
                            u134 = (u134 * u135);
                            u134 = (u134 / 30.0f);
                            u132 = (u132 + u134);
                            *(float *)((t131 + t127)) = u132;
                        } else {
                            t127 = 0xC0AAC70;
                            u134 = (*(float *)((t127 + 0x0)));
                            t127 = 0x4;
                            *(float *)((t131 + t127)) = u134;
                        }
                        if ((int)t129 > (int)0x64) {
                            t129 = (t129 - 0x64);
                            if ((int)t129 <= (int)0x19) {
                                t127 = 0xC0AAC88;
                                u133 = (*(float *)((t127 + 0x0)));
                                t127 = 0x2C;
                                u132 = 1.0f;
                                u134 = (float)t129;
                                u134 = (u134 / u133);
                                u132 = (u132 - u134);
                                *(float *)((t131 + t127)) = u132;
                                t129 = t131;
                                t127 = (((int (*)(int, float))(FUN_0c0c0340))(t129, u135));
                            } else {
                                t221 = t129;
                                u222 = u132;
                                u223 = u133;
                                u224 = u134;
                                u225 = u135;
                            }
                            t231 = t221;
                            u232 = u222;
                            u233 = u223;
                            u234 = u224;
                            u235 = u225;
                        } else {
                            t129 = t131;
                            t127 = (((int (*)(int, float))(FUN_0c0c0340))(t129, u135));
                        }
                        t253 = t231;
                        u254 = u232;
                        u255 = u233;
                        u256 = u234;
                        u257 = u235;
                    } else {
                        t128 = 0x19;
                        if ((int)t129 < (int)t128) {
                            t127 = 0xC0AAD70;
                            u133 = 1.0f;
                            u134 = (*(float *)((t127 + 0x0)));
                            u135 = (u135 / u134);
                            t127 = 0x2C;
                            u133 = (u133 - u135);
                            *(float *)((t131 + t127)) = u133;
                            u133 = (float)(t129 + t129);
                            t127 = 0x8;
                            u132 = (*(float *)((t131 + t127)));
                            u132 = (u132 + u133);
                            *(float *)((t131 + t127)) = u132;
                            t129 = t131;
                            t127 = (((int (*)(int, float))(FUN_0c0c0340))(t129, u135));
                        } else {
                            t244 = t129;
                            u245 = u132;
                            u246 = u133;
                            u247 = u134;
                            u248 = u135;
                        }
                        t253 = t244;
                        u254 = u245;
                        u255 = u246;
                        u256 = u247;
                        u257 = u248;
                    }
                    t263 = t253;
                    u264 = u254;
                    u265 = u255;
                    u266 = u256;
                    u267 = u257;
                } else {
                    t129 = t131;
                    t127 = (((int (*)(int, float))(FUN_0c0c0340))(t129, u135));
                }
                t272 = t263;
                u273 = u264;
                u274 = u265;
                u275 = u266;
                u276 = u267;
            }
            u132 = u273;
            u133 = u274;
            u134 = u275;
            u135 = u276;
            t128 = (*(int *)(((int)stk + 8)));
            t129 = t272;
            t128 = (t128 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t128;
            continue;
        }
        break;
    }
    t407 = t136;
    t409 = a4;
    u414 = u132;
    u417 = u133;
    u418 = u134;
    u419 = u135;
    if ((int)a4 < (int)0x26C) {
        t406 = t127;
    } else {
        t280 = *(int *)0xC23EDE0;
        t281 = 0x0;
        if (t280 != 5) {
            t281 = 0x1;
        }
        t283 = *(int *)0xC24FA48;
        t392 = t280;
        t393 = t136;
        u399 = u132;
        u402 = u133;
        u403 = u134;
        u404 = u135;
        if ((int)(a4 - t283) < (int)0x26C) {
        } else {
            t285 = *(int *)0xC24FA5C;
            t378 = t285;
            t379 = 0xC24FA5C;
            if (t285 != 0) {
                u385 = u132;
                u388 = u133;
                u389 = u134;
                u390 = u135;
            } else {
                if ((int)(a4 - t283) >= (int)0x3E5) {
                    *(unsigned int *)0xC24FA48 = ((*(int *)0xC24FA48) + 0x1);
                }
                t291 = *(int *)0xC24FA50;
                if ((*(int *)0xC24FA54) != 0) {
                    if ((int)(*(int *)0xC24FA58) > (int)t291) {
                        t296 = *(int *)0xC24FA54;
                        *(unsigned int *)0xC24FA54 = (t296 + 0x1);
                        if ((t296 + 0x1) == 20) {
                            *(unsigned int *)0xC24FA50 = (*(int *)0xC24FA58);
                            *(unsigned int *)0xC24FA54 = 0x0;
                        }
                    } else {
                        *(unsigned int *)0xC24FA54 = ((*(int *)0xC24FA54) - 1);
                    }
                } else {
                    if ((int)(*(int *)((((((t281 << 1) << 2) + 0xC249880) + 0x4) + 0x0))) < (int)0xFFFFFFC0) {
                        if ((int)t291 > 0) {
                            *(unsigned int *)0xC24FA50 = ((*(int *)0xC24FA50) - 1);
                            *(unsigned int *)0xC24FA58 = ((*(int *)0xC24FA58) - 1);
                            *(unsigned int *)0xC24FA54 = 0x14;
                        }
                    } else {
                        if (((int)(*(int *)((((((t281 << 1) << 2) + 0xC249880) + 0x4) + 0x0))) > (int)0x40) && ((int)t291 < (int)0x2)) {
                            *(unsigned int *)0xC24FA58 = ((*(int *)0xC24FA58) + 0x1);
                            *(unsigned int *)0xC24FA54 = 0x1;
                        }
                    }
                }
                *(unsigned int *)0xC2022A0 = 0x2095;
                u332 = ((float)(*(int *)0xC24FA50) * 190.0f);
                u332 = u332 + 6.0f * (FUN_0c0da410((((*(int *)0xC24FA44) << 8) << 1)));
                *(float *)(((int)stk + 4)) = u332;
                *(volatile int *)0xC24FA54;
                t334 = FUN_0c0e5dc0();
                u336 = u332;
                u336 = u336 + 190.0f * (FUN_0c0da410(t334));
                *(float *)0xC2022A4 = (u336 + 170.0f);
                u339 = 200.0f;
                u339 = u339 + 6.0f * (FUN_0c0d9e90((((*(int *)0xC24FA44) << 8) << 1)));
                *(float *)0xC2022A8 = u339;
                *(float *)0xC2022B0 = 0.399999976f;
                *(float *)0xC2022B4 = 0.399999976f;
                t340 = ((int (*)(int, float))(FUN_0c0c0340))(0xC2022A0, 0.399999976f);
                *(float *)0xC2022B0 = 1.0f;
                *(float *)0xC2022B4 = 1.0f;
                *(unsigned int *)0xC2022A0 = (*(short *)((0xC10DB30 + (((((*(int *)0xC24FA44) >> 1) >> 1) & 0x3) << 1))));
                *(unsigned int *)(((int)stk + 24)) = (t281 << 2);
                *(float *)0xC2022A4 = (*(float *)(((t281 << 2) + 0xC10DB54)));
                *(float *)0xC2022A8 = 404.0f;
                *(float *)0xC2022AC = 0.000999999931f;
                t344 = ((int (*)(int))(FUN_0c0c0340))(0xC2022A0);
                *(float *)0xC2022B4 = 0.5f;
                *(float *)0xC2022A8 = 425.0f;
                *(float *)0xC2022AC = 9.99999975e-05f;
                t345 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 8)) = (*(int *)((t345 + 0xC10DB4C)));
                t347 = *(int *)(((int)stk + 24));
                t348 = 0xC2022AC;
                t349 = 0xC10DB54;
                t350 = t345;
                t351 = 0x0;
                u352 = 9.99999975e-05f;
                for (;;) {
                    t353 = *(int *)(((int)stk + 8));
                    if ((*(signed char *)(((t353 + t351) + 0x0))) != 32) {
                        t349 = (*(signed char *)(((t353 + t351) + 0x0)));
                        u352 = (float)t351;
                        t349 = (t349 - 46);
                        t349 = (t349 << 1);
                        t350 = (*(short *)((t349 + 0xC1E87BC)));
                        t349 = 0xC2022A0;
                        *(unsigned int *)((t349 + 0x0)) = t350;
                        t358 = t349;
                        t349 = 0xC0C0340;
                        u359 = (*(float *)(((t347 + 0xC10DB54) + 0x0)));
                        u359 = u359 + 18.0f * u352;
                        t350 = 0xC2022A4;
                        *(float *)((t350 + 0x0)) = (u359 + -81.0f);
                        t360 = ((int (*)(int))(FUN_0c0c0340))(t358);
                    } else {
                        t362 = t348;
                        t363 = t349;
                        u366 = u352;
                    }
                    u352 = u366;
                    t348 = t362;
                    t349 = t363;
                    t350 = 0x9;
                    t351 = (t351 + 0x1);
                    if ((unsigned int)t351 >= (unsigned int)t350) {
                        break;
                    }
                }
                t368 = FUN_0c0a9894();
                t375 = 0xC24FA44;
                if (((t368 != 0) && (t369 = *(int *)0xC24FA60, t369 == 0)) || (t370 = *(int *)0xC24FA44, t370 == 0x4C4)) {
                    *(unsigned int *)0xC24FA5C = (0x3E7 - (a4 - t283));
                    if ((0x3E7 - (a4 - t283)) == 0) {
                        *(unsigned int *)0xC24FA5C = ((*(int *)0xC24FA5C) - 1);
                    }
                    t375 = (FUN_0c0cc3f8(0x42FA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                } else {
                    t376 = 0x4C4;
                }
                t378 = t375;
                t379 = t376;
            }
            t392 = t378;
            t393 = t379;
            u399 = u385;
            u402 = u388;
            u403 = u389;
            u404 = u390;
        }
        t406 = t392;
        t407 = t393;
        t409 = (a4 - t283);
        u414 = u399;
        u417 = u402;
        u418 = u403;
        u419 = u404;
    }
    t421 = *(int *)0xC24FA5C;
    t1025 = t406;
    if ((int)(t409 + t421) <= (int)0x47E) {
        t1026 = t407;
        t1029 = t421;
        t1030 = 0x47E;
        u1032 = u414;
        u1035 = u417;
        u1036 = u418;
        u1037 = u419;
    } else {
        nlPushMatrix(0x0);
        t424 = (0xFFFFFB82 + (t409 + t421));
        t425 = 0xC10D9B0;
        t426 = 0xC10D9B0;
        for (;;) {
            t427 = *(int *)((t426 + 0x0));
            t425 = (t425 + 0x20);
            if ((int)t427 >= 0) {
                if ((int)t424 <= (int)t427) {
                    break;
                }
                t423 = (*(int *)((t426 + 0x0)));
                t426 = (t426 + 0x20);
                t424 = (t424 - t423);
                continue;
            }
            if ((*(float *)((t425 + 0x4))) != (*(float *)((t426 + 0x4)))) {
                t423 = 0x1F;
                if ((t423 & (t409 + t421)) == 0) {
                    t423 = 0xC0CC3F8;
                    t424 = 0x82FA9;
                    FUN_0c0cc3f8(t424, t427, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    u434 = *(float *)((t426 + 0xC));
                    *(float *)(((int)stk + 52)) = u434;
                    u437 = *(float *)((t426 + 0x8));
                    u438 = u434;
                    u438 = u438 + 0.0f * ((*(float *)((t425 + 0xC))) - u434);
                    u439 = *(float *)((t426 + 0x4));
                    u440 = u437;
                    u440 = u440 + 0.0f * ((*(float *)((t425 + 0x8))) - u437);
                    *(float *)(((int)stk + 56)) = u439;
                    u442 = u439;
                    u442 = u442 + 0.0f * ((*(float *)((t425 + 0x4))) - u439);
                    FUN_0c0dcc70(u442, u440, u438);
                    t423 = (*(int *)((t426 + 0x14)));
                    *(unsigned int *)(((int)stk + 8)) = t423;
                    t446 = t423;
                    u447 = (float)t423;
                    t423 = 0xC0DC6E0;
                    u449 = u447;
                    u449 = u449 + 0.0f * (float)((*(int *)((t425 + 0x14))) - t446);
                    t424 = (int)u449;
                    nlRotateAX(t424);
                    t451 = *(int *)((t426 + 0x18));
                    *(unsigned int *)(((int)stk + 8)) = t451;
                    t423 = (*(int *)((t425 + 0x18)));
                    t423 = (t423 - t451);
                    t453 = t423;
                    t423 = 0xC0DC890;
                    u454 = (float)t451;
                    u454 = u454 + 0.0f * (float)t453;
                    t424 = (int)u454;
                    nlRotateAY(t424);
                    u457 = *(float *)((t426 + 0x10));
                    u458 = u457;
                    u458 = u458 + 0.0f * ((*(float *)((t425 + 0x10))) - u457);
                    nlScale(u458, u458, u458);
                    t423 = 0xC0DE000;
                    FUN_0c0de000(u458);
                    u462 = *(float *)((t426 + 0x1C));
                    t424 = 0x1237;
                    u463 = u462;
                    u463 = u463 + 0.0f * ((*(float *)((t425 + 0x1C))) - u462);
                    FUN_0c0c475c(t424, u463);
                    t423 = 0xC0DC4C0;
                    t424 = 0x1;
                    t465 = nlPopMatrix(t424);
                    t424 = 0xC10DB5C;
                    t425 = t424;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t426 = t424;
                    t466 = t465;
                    t468 = 0x0;
                    for (;;) {
                        t424 = (*(int *)((t425 + 0x0)));
                        if (((int)(t409 + t421) >= (int)t424) && (t470 = *(short *)((t425 + 0xE)), t466 = t470, t466 = (t466 + t424), (int)(t409 + t421) < (int)t466)) {
                            t467 = (*(int *)((t426 + 0x0)));
                            t423 = 0xC0A9D50;
                            t468 = (t409 + t421);
                            t468 = (t468 - t467);
                            t424 = t468;
                            t466 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a9d50))(t424, (t426 + 0x4), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                            if (t468 == 0) {
                                *(unsigned int *)0xC24FA4C = 0x3C;
                            }
                        } else {
                            t474 = t467;
                            t475 = t424;
                        }
                        t423 = (*(int *)(((int)stk + 8)));
                        t467 = t474;
                        t424 = t475;
                        t467 = 0x9;
                        t426 = (t426 + 0x14);
                        t423 = (t423 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t423;
                        t425 = (t425 + 0x14);
                        if ((unsigned int)t423 >= (unsigned int)t467) {
                            break;
                        }
                    }
                    t423 = (*(int *)0xC24FA4C);
                    t424 = 0x0;
                    if (t423 != 0) {
                        t423 = (*(int *)0xC24FA4C);
                        t423 = (t423 - 1);
                        *(unsigned int *)0xC24FA4C = t423;
                        nlPushMatrix(t424);
                        t423 = 0xC23A258;
                        *(volatile int *)((t423 + 0x0));
                        FUN_0c0e5fe4();
                        t424 = (FUN_0c0e5e74());
                        u486 = -1.19999993f;
                        u486 = u486 + 0.0199999996f * (FUN_0c0da410(t424));
                        t423 = 0xC23A258;
                        *(float *)(((int)stk + 4)) = u486;
                        *(volatile int *)((t423 + 0x0));
                        FUN_0c0e5fe4();
                        t424 = (FUN_0c0e5e74());
                        u491 = 0.0f;
                        u491 = u491 + 0.0199999996f * (FUN_0c0da410(t424));
                        FUN_0c0dcc70(u491, u486, (1.0f + 1.0f));
                        t423 = 0xC0DC6E0;
                        t424 = 0xFFFFF1C8;
                        nlRotateAX(t424);
                        if ((*(int *)0xC24FA4C) != 0) {
                            t423 = 0xC0E5F1C;
                            t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                            t423 = 0xB66;
                            t424 = (t424 + t423);
                            FUN_0c0c465c(t424);
                            t423 = 0xC0DC4C0;
                            t424 = 0x1;
                            nlPopMatrix(t424);
                            t424 = (t409 + t421);
                            FUN_0c0a9e94(t424, 0xC10DC10);
                            t423 = 0x672;
                            if ((int)(t409 + t421) >= (int)t423) {
                                if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                                    t424 = (*(int *)(((int)stk + 16)));
                                    *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                    *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                    *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                    t424 = (*(int *)0xC24FA58);
                                    t501 = FUN_0c09ee68(t424);
                                    t423 = 0x682;
                                    if ((t409 + t421) == t423) {
                                        t424 = 0xC23A18C;
                                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                        return t501;
                                    }
                                    return t501;
                                }
                                t424 = (*(int *)(((int)stk + 16)));
                                *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                                *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                                *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                                t424 = (*(int *)0xC24FA58);
                                t505 = FUN_0c09ee68(t424);
                                t423 = 0x682;
                                if ((t409 + t421) == t423) {
                                    t424 = 0xC23A18C;
                                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                    return t505;
                                }
                                return t505;
                            }
                            t424 = (*(int *)0xC24FA58);
                            t508 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t508;
                            }
                            return t508;
                        }
                        t424 = 0x0;
                        t423 = 0xB66;
                        t424 = (t424 + t423);
                        FUN_0c0c465c(t424);
                        t424 = 0x1;
                        nlPopMatrix(t424);
                        t424 = (t409 + t421);
                        FUN_0c0a9e94(t424, 0xC10DC10);
                        t423 = 0x672;
                        if ((int)(t409 + t421) >= (int)t423) {
                            if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                                t424 = (*(int *)(((int)stk + 16)));
                                *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                t424 = (*(int *)0xC24FA58);
                                t515 = FUN_0c09ee68(t424);
                                t423 = 0x682;
                                if ((t409 + t421) == t423) {
                                    t424 = 0xC23A18C;
                                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                    return t515;
                                }
                                return t515;
                            }
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t519 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t519;
                            }
                            return t519;
                        }
                        t424 = (*(int *)0xC24FA58);
                        t522 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t522;
                        }
                        return t522;
                    }
                    nlPushMatrix(t424);
                    t423 = 0xC23A258;
                    *(volatile int *)((t423 + 0x0));
                    FUN_0c0e5fe4();
                    t424 = (FUN_0c0e5e74());
                    u529 = -1.19999993f;
                    u529 = u529 + 0.0199999996f * (FUN_0c0da410(t424));
                    t423 = 0xC23A258;
                    *(float *)(((int)stk + 4)) = u529;
                    *(volatile int *)((t423 + 0x0));
                    FUN_0c0e5fe4();
                    t424 = (FUN_0c0e5e74());
                    u534 = 0.0f;
                    u534 = u534 + 0.0199999996f * (FUN_0c0da410(t424));
                    FUN_0c0dcc70(u534, u529, (1.0f + 1.0f));
                    t423 = 0xC0DC6E0;
                    t424 = 0xFFFFF1C8;
                    nlRotateAX(t424);
                    if ((*(int *)0xC24FA4C) != 0) {
                        t423 = 0xC0E5F1C;
                        t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                        t423 = 0xB66;
                        t424 = (t424 + t423);
                        FUN_0c0c465c(t424);
                        t423 = 0xC0DC4C0;
                        t424 = 0x1;
                        nlPopMatrix(t424);
                        t424 = (t409 + t421);
                        FUN_0c0a9e94(t424, 0xC10DC10);
                        t423 = 0x672;
                        if ((int)(t409 + t421) >= (int)t423) {
                            if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                                t424 = (*(int *)(((int)stk + 16)));
                                *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                t424 = (*(int *)0xC24FA58);
                                t544 = FUN_0c09ee68(t424);
                                t423 = 0x682;
                                if ((t409 + t421) == t423) {
                                    t424 = 0xC23A18C;
                                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                    return t544;
                                }
                                return t544;
                            }
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t548 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t548;
                            }
                            return t548;
                        }
                        t424 = (*(int *)0xC24FA58);
                        t551 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t551;
                        }
                        return t551;
                    }
                    t424 = 0x0;
                    t423 = 0xB66;
                    t424 = (t424 + t423);
                    FUN_0c0c465c(t424);
                    t424 = 0x1;
                    nlPopMatrix(t424);
                    t424 = (t409 + t421);
                    FUN_0c0a9e94(t424, 0xC10DC10);
                    t423 = 0x672;
                    if ((int)(t409 + t421) >= (int)t423) {
                        if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t558 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t558;
                            }
                            return t558;
                        }
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t562 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t562;
                        }
                        return t562;
                    }
                    t424 = (*(int *)0xC24FA58);
                    t565 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t565;
                    }
                    return t565;
                }
                u567 = *(float *)((t426 + 0xC));
                *(float *)(((int)stk + 52)) = u567;
                u570 = *(float *)((t426 + 0x8));
                u571 = u567;
                u571 = u571 + 0.0f * ((*(float *)((t425 + 0xC))) - u567);
                u572 = *(float *)((t426 + 0x4));
                u573 = u570;
                u573 = u573 + 0.0f * ((*(float *)((t425 + 0x8))) - u570);
                *(float *)(((int)stk + 56)) = u572;
                u575 = u572;
                u575 = u575 + 0.0f * ((*(float *)((t425 + 0x4))) - u572);
                FUN_0c0dcc70(u575, u573, u571);
                t423 = (*(int *)((t426 + 0x14)));
                *(unsigned int *)(((int)stk + 8)) = t423;
                t579 = t423;
                u580 = (float)t423;
                t423 = 0xC0DC6E0;
                u582 = u580;
                u582 = u582 + 0.0f * (float)((*(int *)((t425 + 0x14))) - t579);
                t424 = (int)u582;
                nlRotateAX(t424);
                t584 = *(int *)((t426 + 0x18));
                *(unsigned int *)(((int)stk + 8)) = t584;
                t423 = (*(int *)((t425 + 0x18)));
                t423 = (t423 - t584);
                t586 = t423;
                t423 = 0xC0DC890;
                u587 = (float)t584;
                u587 = u587 + 0.0f * (float)t586;
                t424 = (int)u587;
                nlRotateAY(t424);
                u590 = *(float *)((t426 + 0x10));
                u591 = u590;
                u591 = u591 + 0.0f * ((*(float *)((t425 + 0x10))) - u590);
                nlScale(u591, u591, u591);
                t423 = 0xC0DE000;
                FUN_0c0de000(u591);
                u595 = *(float *)((t426 + 0x1C));
                t424 = 0x1237;
                u596 = u595;
                u596 = u596 + 0.0f * ((*(float *)((t425 + 0x1C))) - u595);
                FUN_0c0c475c(t424, u596);
                t423 = 0xC0DC4C0;
                t424 = 0x1;
                t598 = nlPopMatrix(t424);
                t424 = 0xC10DB5C;
                t425 = t424;
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t426 = t424;
                t599 = t598;
                t601 = 0x0;
                for (;;) {
                    t424 = (*(int *)((t425 + 0x0)));
                    if (((int)(t409 + t421) >= (int)t424) && (t603 = *(short *)((t425 + 0xE)), t599 = t603, t599 = (t599 + t424), (int)(t409 + t421) < (int)t599)) {
                        t600 = (*(int *)((t426 + 0x0)));
                        t423 = 0xC0A9D50;
                        t601 = (t409 + t421);
                        t601 = (t601 - t600);
                        t424 = t601;
                        t599 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a9d50))(t424, (t426 + 0x4), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        if (t601 == 0) {
                            *(unsigned int *)0xC24FA4C = 0x3C;
                        }
                    } else {
                        t607 = t600;
                        t608 = t424;
                    }
                    t423 = (*(int *)(((int)stk + 8)));
                    t600 = t607;
                    t424 = t608;
                    t600 = 0x9;
                    t426 = (t426 + 0x14);
                    t423 = (t423 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = t423;
                    t425 = (t425 + 0x14);
                    if ((unsigned int)t423 >= (unsigned int)t600) {
                        break;
                    }
                }
                t423 = (*(int *)0xC24FA4C);
                t424 = 0x0;
                if (t423 != 0) {
                    t423 = (*(int *)0xC24FA4C);
                    t423 = (t423 - 1);
                    *(unsigned int *)0xC24FA4C = t423;
                    nlPushMatrix(t424);
                    t423 = 0xC23A258;
                    *(volatile int *)((t423 + 0x0));
                    FUN_0c0e5fe4();
                    t424 = (FUN_0c0e5e74());
                    u619 = -1.19999993f;
                    u619 = u619 + 0.0199999996f * (FUN_0c0da410(t424));
                    t423 = 0xC23A258;
                    *(float *)(((int)stk + 4)) = u619;
                    *(volatile int *)((t423 + 0x0));
                    FUN_0c0e5fe4();
                    t424 = (FUN_0c0e5e74());
                    u624 = 0.0f;
                    u624 = u624 + 0.0199999996f * (FUN_0c0da410(t424));
                    FUN_0c0dcc70(u624, u619, (1.0f + 1.0f));
                    t423 = 0xC0DC6E0;
                    t424 = 0xFFFFF1C8;
                    nlRotateAX(t424);
                    if ((*(int *)0xC24FA4C) != 0) {
                        t423 = 0xC0E5F1C;
                        t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                        t423 = 0xB66;
                        t424 = (t424 + t423);
                        FUN_0c0c465c(t424);
                        t423 = 0xC0DC4C0;
                        t424 = 0x1;
                        nlPopMatrix(t424);
                        t424 = (t409 + t421);
                        FUN_0c0a9e94(t424, 0xC10DC10);
                        t423 = 0x672;
                        if ((int)(t409 + t421) >= (int)t423) {
                            if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                                t424 = (*(int *)(((int)stk + 16)));
                                *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                t424 = (*(int *)0xC24FA58);
                                t634 = FUN_0c09ee68(t424);
                                t423 = 0x682;
                                if ((t409 + t421) == t423) {
                                    t424 = 0xC23A18C;
                                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                    return t634;
                                }
                                return t634;
                            }
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t638 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t638;
                            }
                            return t638;
                        }
                        t424 = (*(int *)0xC24FA58);
                        t641 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t641;
                        }
                        return t641;
                    }
                    t424 = 0x0;
                    t423 = 0xB66;
                    t424 = (t424 + t423);
                    FUN_0c0c465c(t424);
                    t424 = 0x1;
                    nlPopMatrix(t424);
                    t424 = (t409 + t421);
                    FUN_0c0a9e94(t424, 0xC10DC10);
                    t423 = 0x672;
                    if ((int)(t409 + t421) >= (int)t423) {
                        if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t648 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t648;
                            }
                            return t648;
                        }
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t652 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t652;
                        }
                        return t652;
                    }
                    t424 = (*(int *)0xC24FA58);
                    t655 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t655;
                    }
                    return t655;
                }
                nlPushMatrix(t424);
                t423 = 0xC23A258;
                *(volatile int *)((t423 + 0x0));
                FUN_0c0e5fe4();
                t424 = (FUN_0c0e5e74());
                u662 = -1.19999993f;
                u662 = u662 + 0.0199999996f * (FUN_0c0da410(t424));
                t423 = 0xC23A258;
                *(float *)(((int)stk + 4)) = u662;
                *(volatile int *)((t423 + 0x0));
                FUN_0c0e5fe4();
                t424 = (FUN_0c0e5e74());
                u667 = 0.0f;
                u667 = u667 + 0.0199999996f * (FUN_0c0da410(t424));
                FUN_0c0dcc70(u667, u662, (1.0f + 1.0f));
                t423 = 0xC0DC6E0;
                t424 = 0xFFFFF1C8;
                nlRotateAX(t424);
                if ((*(int *)0xC24FA4C) != 0) {
                    t423 = 0xC0E5F1C;
                    t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                    t423 = 0xB66;
                    t424 = (t424 + t423);
                    FUN_0c0c465c(t424);
                    t423 = 0xC0DC4C0;
                    t424 = 0x1;
                    nlPopMatrix(t424);
                    t424 = (t409 + t421);
                    FUN_0c0a9e94(t424, 0xC10DC10);
                    t423 = 0x672;
                    if ((int)(t409 + t421) >= (int)t423) {
                        if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t677 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t677;
                            }
                            return t677;
                        }
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t681 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t681;
                        }
                        return t681;
                    }
                    t424 = (*(int *)0xC24FA58);
                    t684 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t684;
                    }
                    return t684;
                }
                t424 = 0x0;
                t423 = 0xB66;
                t424 = (t424 + t423);
                FUN_0c0c465c(t424);
                t424 = 0x1;
                nlPopMatrix(t424);
                t424 = (t409 + t421);
                FUN_0c0a9e94(t424, 0xC10DC10);
                t423 = 0x672;
                if ((int)(t409 + t421) >= (int)t423) {
                    if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t691 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t691;
                        }
                        return t691;
                    }
                    t424 = (*(int *)(((int)stk + 16)));
                    *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    t424 = (*(int *)0xC24FA58);
                    t695 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t695;
                    }
                    return t695;
                }
                t424 = (*(int *)0xC24FA58);
                t698 = FUN_0c09ee68(t424);
                t423 = 0x682;
                if ((t409 + t421) == t423) {
                    t424 = 0xC23A18C;
                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                    return t698;
                }
                return t698;
            }
            t423 = 0xF;
            if ((t423 & (t409 + t421)) == 0) {
                t423 = 0xC0CC3F8;
                t424 = 0x92FA9;
                FUN_0c0cc3f8(t424, t427, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                u701 = *(float *)((t426 + 0xC));
                *(float *)(((int)stk + 52)) = u701;
                u704 = *(float *)((t426 + 0x8));
                u705 = u701;
                u705 = u705 + 0.0f * ((*(float *)((t425 + 0xC))) - u701);
                u706 = *(float *)((t426 + 0x4));
                u707 = u704;
                u707 = u707 + 0.0f * ((*(float *)((t425 + 0x8))) - u704);
                *(float *)(((int)stk + 56)) = u706;
                u709 = u706;
                u709 = u709 + 0.0f * ((*(float *)((t425 + 0x4))) - u706);
                FUN_0c0dcc70(u709, u707, u705);
                t423 = (*(int *)((t426 + 0x14)));
                *(unsigned int *)(((int)stk + 8)) = t423;
                t713 = t423;
                u714 = (float)t423;
                t423 = 0xC0DC6E0;
                u716 = u714;
                u716 = u716 + 0.0f * (float)((*(int *)((t425 + 0x14))) - t713);
                t424 = (int)u716;
                nlRotateAX(t424);
                t718 = *(int *)((t426 + 0x18));
                *(unsigned int *)(((int)stk + 8)) = t718;
                t423 = (*(int *)((t425 + 0x18)));
                t423 = (t423 - t718);
                t720 = t423;
                t423 = 0xC0DC890;
                u721 = (float)t718;
                u721 = u721 + 0.0f * (float)t720;
                t424 = (int)u721;
                nlRotateAY(t424);
                u724 = *(float *)((t426 + 0x10));
                u725 = u724;
                u725 = u725 + 0.0f * ((*(float *)((t425 + 0x10))) - u724);
                nlScale(u725, u725, u725);
                t423 = 0xC0DE000;
                FUN_0c0de000(u725);
                u729 = *(float *)((t426 + 0x1C));
                t424 = 0x1237;
                u730 = u729;
                u730 = u730 + 0.0f * ((*(float *)((t425 + 0x1C))) - u729);
                FUN_0c0c475c(t424, u730);
                t423 = 0xC0DC4C0;
                t424 = 0x1;
                t732 = nlPopMatrix(t424);
                t424 = 0xC10DB5C;
                t425 = t424;
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t426 = t424;
                t733 = t732;
                t735 = 0x0;
                for (;;) {
                    t424 = (*(int *)((t425 + 0x0)));
                    if (((int)(t409 + t421) >= (int)t424) && (t737 = *(short *)((t425 + 0xE)), t733 = t737, t733 = (t733 + t424), (int)(t409 + t421) < (int)t733)) {
                        t734 = (*(int *)((t426 + 0x0)));
                        t423 = 0xC0A9D50;
                        t735 = (t409 + t421);
                        t735 = (t735 - t734);
                        t424 = t735;
                        t733 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a9d50))(t424, (t426 + 0x4), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                        if (t735 == 0) {
                            *(unsigned int *)0xC24FA4C = 0x3C;
                        }
                    } else {
                        t741 = t734;
                        t742 = t424;
                    }
                    t423 = (*(int *)(((int)stk + 8)));
                    t734 = t741;
                    t424 = t742;
                    t734 = 0x9;
                    t426 = (t426 + 0x14);
                    t423 = (t423 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = t423;
                    t425 = (t425 + 0x14);
                    if ((unsigned int)t423 >= (unsigned int)t734) {
                        break;
                    }
                }
                t423 = (*(int *)0xC24FA4C);
                t424 = 0x0;
                if (t423 != 0) {
                    t423 = (*(int *)0xC24FA4C);
                    t423 = (t423 - 1);
                    *(unsigned int *)0xC24FA4C = t423;
                    nlPushMatrix(t424);
                    t423 = 0xC23A258;
                    *(volatile int *)((t423 + 0x0));
                    FUN_0c0e5fe4();
                    t424 = (FUN_0c0e5e74());
                    u753 = -1.19999993f;
                    u753 = u753 + 0.0199999996f * (FUN_0c0da410(t424));
                    t423 = 0xC23A258;
                    *(float *)(((int)stk + 4)) = u753;
                    *(volatile int *)((t423 + 0x0));
                    FUN_0c0e5fe4();
                    t424 = (FUN_0c0e5e74());
                    u758 = 0.0f;
                    u758 = u758 + 0.0199999996f * (FUN_0c0da410(t424));
                    FUN_0c0dcc70(u758, u753, (1.0f + 1.0f));
                    t423 = 0xC0DC6E0;
                    t424 = 0xFFFFF1C8;
                    nlRotateAX(t424);
                    if ((*(int *)0xC24FA4C) != 0) {
                        t423 = 0xC0E5F1C;
                        t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                        t423 = 0xB66;
                        t424 = (t424 + t423);
                        FUN_0c0c465c(t424);
                        t423 = 0xC0DC4C0;
                        t424 = 0x1;
                        nlPopMatrix(t424);
                        t424 = (t409 + t421);
                        FUN_0c0a9e94(t424, 0xC10DC10);
                        t423 = 0x672;
                        if ((int)(t409 + t421) >= (int)t423) {
                            if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                                t424 = (*(int *)(((int)stk + 16)));
                                *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                                t424 = (*(int *)0xC24FA58);
                                t768 = FUN_0c09ee68(t424);
                                t423 = 0x682;
                                if ((t409 + t421) == t423) {
                                    t424 = 0xC23A18C;
                                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                    return t768;
                                }
                                return t768;
                            }
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t772 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t772;
                            }
                            return t772;
                        }
                        t424 = (*(int *)0xC24FA58);
                        t775 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t775;
                        }
                        return t775;
                    }
                    t424 = 0x0;
                    t423 = 0xB66;
                    t424 = (t424 + t423);
                    FUN_0c0c465c(t424);
                    t424 = 0x1;
                    nlPopMatrix(t424);
                    t424 = (t409 + t421);
                    FUN_0c0a9e94(t424, 0xC10DC10);
                    t423 = 0x672;
                    if ((int)(t409 + t421) >= (int)t423) {
                        if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t782 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t782;
                            }
                            return t782;
                        }
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t786 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t786;
                        }
                        return t786;
                    }
                    t424 = (*(int *)0xC24FA58);
                    t789 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t789;
                    }
                    return t789;
                }
                nlPushMatrix(t424);
                t423 = 0xC23A258;
                *(volatile int *)((t423 + 0x0));
                FUN_0c0e5fe4();
                t424 = (FUN_0c0e5e74());
                u796 = -1.19999993f;
                u796 = u796 + 0.0199999996f * (FUN_0c0da410(t424));
                t423 = 0xC23A258;
                *(float *)(((int)stk + 4)) = u796;
                *(volatile int *)((t423 + 0x0));
                FUN_0c0e5fe4();
                t424 = (FUN_0c0e5e74());
                u801 = 0.0f;
                u801 = u801 + 0.0199999996f * (FUN_0c0da410(t424));
                FUN_0c0dcc70(u801, u796, (1.0f + 1.0f));
                t423 = 0xC0DC6E0;
                t424 = 0xFFFFF1C8;
                nlRotateAX(t424);
                if ((*(int *)0xC24FA4C) != 0) {
                    t423 = 0xC0E5F1C;
                    t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                    t423 = 0xB66;
                    t424 = (t424 + t423);
                    FUN_0c0c465c(t424);
                    t423 = 0xC0DC4C0;
                    t424 = 0x1;
                    nlPopMatrix(t424);
                    t424 = (t409 + t421);
                    FUN_0c0a9e94(t424, 0xC10DC10);
                    t423 = 0x672;
                    if ((int)(t409 + t421) >= (int)t423) {
                        if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t811 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t811;
                            }
                            return t811;
                        }
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t815 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t815;
                        }
                        return t815;
                    }
                    t424 = (*(int *)0xC24FA58);
                    t818 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t818;
                    }
                    return t818;
                }
                t424 = 0x0;
                t423 = 0xB66;
                t424 = (t424 + t423);
                FUN_0c0c465c(t424);
                t424 = 0x1;
                nlPopMatrix(t424);
                t424 = (t409 + t421);
                FUN_0c0a9e94(t424, 0xC10DC10);
                t423 = 0x672;
                if ((int)(t409 + t421) >= (int)t423) {
                    if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t825 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t825;
                        }
                        return t825;
                    }
                    t424 = (*(int *)(((int)stk + 16)));
                    *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    t424 = (*(int *)0xC24FA58);
                    t829 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t829;
                    }
                    return t829;
                }
                t424 = (*(int *)0xC24FA58);
                t832 = FUN_0c09ee68(t424);
                t423 = 0x682;
                if ((t409 + t421) == t423) {
                    t424 = 0xC23A18C;
                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                    return t832;
                }
                return t832;
            }
            u834 = *(float *)((t426 + 0xC));
            *(float *)(((int)stk + 52)) = u834;
            u837 = *(float *)((t426 + 0x8));
            u838 = u834;
            u838 = u838 + 0.0f * ((*(float *)((t425 + 0xC))) - u834);
            u839 = *(float *)((t426 + 0x4));
            u840 = u837;
            u840 = u840 + 0.0f * ((*(float *)((t425 + 0x8))) - u837);
            *(float *)(((int)stk + 56)) = u839;
            u842 = u839;
            u842 = u842 + 0.0f * ((*(float *)((t425 + 0x4))) - u839);
            FUN_0c0dcc70(u842, u840, u838);
            t423 = (*(int *)((t426 + 0x14)));
            *(unsigned int *)(((int)stk + 8)) = t423;
            t846 = t423;
            u847 = (float)t423;
            t423 = 0xC0DC6E0;
            u849 = u847;
            u849 = u849 + 0.0f * (float)((*(int *)((t425 + 0x14))) - t846);
            t424 = (int)u849;
            nlRotateAX(t424);
            t851 = *(int *)((t426 + 0x18));
            *(unsigned int *)(((int)stk + 8)) = t851;
            t423 = (*(int *)((t425 + 0x18)));
            t423 = (t423 - t851);
            t853 = t423;
            t423 = 0xC0DC890;
            u854 = (float)t851;
            u854 = u854 + 0.0f * (float)t853;
            t424 = (int)u854;
            nlRotateAY(t424);
            u857 = *(float *)((t426 + 0x10));
            u858 = u857;
            u858 = u858 + 0.0f * ((*(float *)((t425 + 0x10))) - u857);
            nlScale(u858, u858, u858);
            t423 = 0xC0DE000;
            FUN_0c0de000(u858);
            u862 = *(float *)((t426 + 0x1C));
            t424 = 0x1237;
            u863 = u862;
            u863 = u863 + 0.0f * ((*(float *)((t425 + 0x1C))) - u862);
            FUN_0c0c475c(t424, u863);
            t423 = 0xC0DC4C0;
            t424 = 0x1;
            t865 = nlPopMatrix(t424);
            t424 = 0xC10DB5C;
            t425 = t424;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            t426 = t424;
            t866 = t865;
            t868 = 0x0;
            for (;;) {
                t424 = (*(int *)((t425 + 0x0)));
                if (((int)(t409 + t421) >= (int)t424) && (t870 = *(short *)((t425 + 0xE)), t866 = t870, t866 = (t866 + t424), (int)(t409 + t421) < (int)t866)) {
                    t867 = (*(int *)((t426 + 0x0)));
                    t423 = 0xC0A9D50;
                    t868 = (t409 + t421);
                    t868 = (t868 - t867);
                    t424 = t868;
                    t866 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0a9d50))(t424, (t426 + 0x4), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                    if (t868 == 0) {
                        *(unsigned int *)0xC24FA4C = 0x3C;
                    }
                } else {
                    t874 = t867;
                    t875 = t424;
                }
                t423 = (*(int *)(((int)stk + 8)));
                t867 = t874;
                t424 = t875;
                t867 = 0x9;
                t426 = (t426 + 0x14);
                t423 = (t423 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t423;
                t425 = (t425 + 0x14);
                if ((unsigned int)t423 >= (unsigned int)t867) {
                    break;
                }
            }
            t423 = (*(int *)0xC24FA4C);
            t424 = 0x0;
            if (t423 != 0) {
                t423 = (*(int *)0xC24FA4C);
                t423 = (t423 - 1);
                *(unsigned int *)0xC24FA4C = t423;
                nlPushMatrix(t424);
                t423 = 0xC23A258;
                *(volatile int *)((t423 + 0x0));
                FUN_0c0e5fe4();
                t424 = (FUN_0c0e5e74());
                u886 = -1.19999993f;
                u886 = u886 + 0.0199999996f * (FUN_0c0da410(t424));
                t423 = 0xC23A258;
                *(float *)(((int)stk + 4)) = u886;
                *(volatile int *)((t423 + 0x0));
                FUN_0c0e5fe4();
                t424 = (FUN_0c0e5e74());
                u891 = 0.0f;
                u891 = u891 + 0.0199999996f * (FUN_0c0da410(t424));
                FUN_0c0dcc70(u891, u886, (1.0f + 1.0f));
                t423 = 0xC0DC6E0;
                t424 = 0xFFFFF1C8;
                nlRotateAX(t424);
                if ((*(int *)0xC24FA4C) != 0) {
                    t423 = 0xC0E5F1C;
                    t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                    t423 = 0xB66;
                    t424 = (t424 + t423);
                    FUN_0c0c465c(t424);
                    t423 = 0xC0DC4C0;
                    t424 = 0x1;
                    nlPopMatrix(t424);
                    t424 = (t409 + t421);
                    FUN_0c0a9e94(t424, 0xC10DC10);
                    t423 = 0x672;
                    if ((int)(t409 + t421) >= (int)t423) {
                        if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                            t424 = (*(int *)(((int)stk + 16)));
                            *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                            t424 = (*(int *)0xC24FA58);
                            t901 = FUN_0c09ee68(t424);
                            t423 = 0x682;
                            if ((t409 + t421) == t423) {
                                t424 = 0xC23A18C;
                                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                                return t901;
                            }
                            return t901;
                        }
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t905 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t905;
                        }
                        return t905;
                    }
                    t424 = (*(int *)0xC24FA58);
                    t908 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t908;
                    }
                    return t908;
                }
                t424 = 0x0;
                t423 = 0xB66;
                t424 = (t424 + t423);
                FUN_0c0c465c(t424);
                t424 = 0x1;
                nlPopMatrix(t424);
                t424 = (t409 + t421);
                FUN_0c0a9e94(t424, 0xC10DC10);
                t423 = 0x672;
                if ((int)(t409 + t421) >= (int)t423) {
                    if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t915 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t915;
                        }
                        return t915;
                    }
                    t424 = (*(int *)(((int)stk + 16)));
                    *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    t424 = (*(int *)0xC24FA58);
                    t919 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t919;
                    }
                    return t919;
                }
                t424 = (*(int *)0xC24FA58);
                t922 = FUN_0c09ee68(t424);
                t423 = 0x682;
                if ((t409 + t421) == t423) {
                    t424 = 0xC23A18C;
                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                    return t922;
                }
                return t922;
            }
            nlPushMatrix(t424);
            t423 = 0xC23A258;
            *(volatile int *)((t423 + 0x0));
            FUN_0c0e5fe4();
            t424 = (FUN_0c0e5e74());
            u929 = -1.19999993f;
            u929 = u929 + 0.0199999996f * (FUN_0c0da410(t424));
            t423 = 0xC23A258;
            *(float *)(((int)stk + 4)) = u929;
            *(volatile int *)((t423 + 0x0));
            FUN_0c0e5fe4();
            t424 = (FUN_0c0e5e74());
            u934 = 0.0f;
            u934 = u934 + 0.0199999996f * (FUN_0c0da410(t424));
            FUN_0c0dcc70(u934, u929, (1.0f + 1.0f));
            t423 = 0xC0DC6E0;
            t424 = 0xFFFFF1C8;
            nlRotateAX(t424);
            if ((*(int *)0xC24FA4C) != 0) {
                t423 = 0xC0E5F1C;
                t424 = (((int (*)(void))(FUN_0c0e5f1c))());
                t423 = 0xB66;
                t424 = (t424 + t423);
                FUN_0c0c465c(t424);
                t423 = 0xC0DC4C0;
                t424 = 0x1;
                nlPopMatrix(t424);
                t424 = (t409 + t421);
                FUN_0c0a9e94(t424, 0xC10DC10);
                t423 = 0x672;
                if ((int)(t409 + t421) >= (int)t423) {
                    if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                        t424 = (*(int *)(((int)stk + 16)));
                        *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                        t424 = (*(int *)0xC24FA58);
                        t944 = FUN_0c09ee68(t424);
                        t423 = 0x682;
                        if ((t409 + t421) == t423) {
                            t424 = 0xC23A18C;
                            *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                            return t944;
                        }
                        return t944;
                    }
                    t424 = (*(int *)(((int)stk + 16)));
                    *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                    t424 = (*(int *)0xC24FA58);
                    t948 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t948;
                    }
                    return t948;
                }
                t424 = (*(int *)0xC24FA58);
                t951 = FUN_0c09ee68(t424);
                t423 = 0x682;
                if ((t409 + t421) == t423) {
                    t424 = 0xC23A18C;
                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                    return t951;
                }
                return t951;
            }
            t424 = 0x0;
            t423 = 0xB66;
            t424 = (t424 + t423);
            FUN_0c0c465c(t424);
            t424 = 0x1;
            nlPopMatrix(t424);
            t424 = (t409 + t421);
            FUN_0c0a9e94(t424, 0xC10DC10);
            t423 = 0x672;
            if ((int)(t409 + t421) >= (int)t423) {
                if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
                    t424 = (*(int *)(((int)stk + 16)));
                    *(float *)((t424 + 0x10)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                    *(float *)((t424 + 0x14)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                    *(float *)((t424 + 0x18)) = (1.0f - (float)((int)((0xFFFFF98E + (t409 + t421)) + 0xF) >> 4));
                    t424 = (*(int *)0xC24FA58);
                    t958 = FUN_0c09ee68(t424);
                    t423 = 0x682;
                    if ((t409 + t421) == t423) {
                        t424 = 0xC23A18C;
                        *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                        return t958;
                    }
                    return t958;
                }
                t424 = (*(int *)(((int)stk + 16)));
                *(float *)((t424 + 0x10)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                *(float *)((t424 + 0x14)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                *(float *)((t424 + 0x18)) = (1.0f - (float)((int)(0xFFFFF98E + (t409 + t421)) >> 4));
                t424 = (*(int *)0xC24FA58);
                t962 = FUN_0c09ee68(t424);
                t423 = 0x682;
                if ((t409 + t421) == t423) {
                    t424 = 0xC23A18C;
                    *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                    return t962;
                }
                return t962;
            }
            t424 = (*(int *)0xC24FA58);
            t965 = FUN_0c09ee68(t424);
            t423 = 0x682;
            if ((t409 + t421) == t423) {
                t424 = 0xC23A18C;
                *(unsigned int *)((t424 + 0x0)) = ((*(int *)((t424 + 0x0))) + 0x1);
                return t965;
            }
            return t965;
        }
        t967 = *(int *)((t426 + 0x0));
        if ((int)t967 >= 0) {
            u968 = ((float)t424 / (float)t967);
        } else {
            u968 = 0.0f;
        }
        if ((*(float *)((t425 + 0x4))) != (*(float *)((t426 + 0x4)))) {
            if ((0x1F & (t409 + t421)) == 0) {
                FUN_0c0cc3f8(0x82FA9, t967, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
            }
        } else {
            if ((0xF & (t409 + t421)) == 0) {
                FUN_0c0cc3f8(0x92FA9, t967, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
            }
        }
        u997 = *(float *)((t426 + 0xC));
        *(float *)(((int)stk + 52)) = u997;
        u1000 = *(float *)((t426 + 0x8));
        u1001 = u997;
        u1001 = u1001 + u968 * ((*(float *)((t425 + 0xC))) - u997);
        u1002 = *(float *)((t426 + 0x4));
        u1003 = u1000;
        u1003 = u1003 + u968 * ((*(float *)((t425 + 0x8))) - u1000);
        *(float *)(((int)stk + 56)) = u1002;
        u1005 = u1002;
        u1005 = u1005 + u968 * ((*(float *)((t425 + 0x4))) - u1002);
        FUN_0c0dcc70(u1005, u1003, u1001);
        t1007 = *(int *)((t426 + 0x14));
        *(unsigned int *)(((int)stk + 8)) = t1007;
        u1009 = (float)t1007;
        u1009 = u1009 + u968 * (float)((*(int *)((t425 + 0x14))) - t1007);
        nlRotateAX((int)u1009);
        t1011 = *(int *)((t426 + 0x18));
        *(unsigned int *)(((int)stk + 8)) = t1011;
        u1013 = (float)t1011;
        u1013 = u1013 + u968 * (float)((*(int *)((t425 + 0x18))) - t1011);
        nlRotateAY((int)u1013);
        u1016 = *(float *)((t426 + 0x10));
        u1017 = u1016;
        u1017 = u1017 + u968 * ((*(float *)((t425 + 0x10))) - u1016);
        nlScale(u1017, u1017, u1017);
        FUN_0c0de000(u1017);
        u1021 = *(float *)((t426 + 0x1C));
        u1022 = u1021;
        u1022 = u1022 + u968 * ((*(float *)((t425 + 0x1C))) - u1021);
        FUN_0c0c475c(0x1237, u1022);
        t1025 = (nlPopMatrix(0x1));
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t1039 = t1025;
    t1040 = t1026;
    t1041 = t1029;
    t1042 = t1030;
    t1043 = 0x0;
    t1044 = 0xC10DB5C;
    t1045 = 0xC10DB5C;
    u1046 = u1032;
    u1047 = u1035;
    u1048 = u1036;
    u1049 = u1037;
    for (;;) {
        t1050 = *(int *)((t1044 + 0x0));
        if (((int)(t409 + t421) >= (int)t1050) && (t1051 = *(short *)((t1044 + 0xE)), t1039 = t1051, t1039 = (t1039 + t1050), (int)(t409 + t421) < (int)t1039)) {
            t1042 = (*(int *)((t1045 + 0x0)));
            t1041 = 0xC0A9D50;
            t1043 = (t409 + t421);
            t1043 = (t1043 - t1042);
            t1039 = (((int (*)(int, int, float))(FUN_0c0a9d50))(t1043, (t1045 + 0x4), u1049));
            if (t1043 == 0) {
                *(unsigned int *)0xC24FA4C = 0x3C;
            }
        } else {
            t1055 = t1040;
            t1057 = t1042;
            u1059 = u1046;
            u1060 = u1047;
            u1061 = u1048;
            u1062 = u1049;
        }
        u1046 = u1059;
        u1047 = u1060;
        u1048 = u1061;
        u1049 = u1062;
        t1040 = t1055;
        t1041 = (*(int *)(((int)stk + 8)));
        t1042 = t1057;
        t1042 = 0x9;
        t1045 = (t1045 + 0x14);
        t1041 = (t1041 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = t1041;
        t1044 = (t1044 + 0x14);
        if ((unsigned int)t1041 >= (unsigned int)t1042) {
            break;
        }
    }
    if ((*(int *)0xC24FA4C) != 0) {
        *(unsigned int *)0xC24FA4C = ((*(int *)0xC24FA4C) - 1);
    }
    nlPushMatrix(0x0);
    *(volatile int *)0xC23A258;
    FUN_0c0e5fe4();
    t1073 = FUN_0c0e5e74();
    u1075 = -1.19999993f;
    u1075 = u1075 + 0.0199999996f * (FUN_0c0da410(t1073));
    *(float *)(((int)stk + 4)) = u1075;
    *(volatile int *)0xC23A258;
    FUN_0c0e5fe4();
    t1078 = FUN_0c0e5e74();
    u1080 = 0.0f;
    u1080 = u1080 + 0.0199999996f * (FUN_0c0da410(t1078));
    FUN_0c0dcc70(u1080, u1075, (1.0f + 1.0f));
    nlRotateAX(0xFFFFF1C8);
    t1087 = 0x0;
    if ((*(int *)0xC24FA4C) != 0) {
        t1087 = (((int (*)(void))(FUN_0c0e5f1c))());
    }
    FUN_0c0c465c((t1087 + 0xB66));
    nlPopMatrix(0x1);
    FUN_0c0a9e94((t409 + t421), 0xC10DC10);
    if ((int)(t409 + t421) >= (int)0x672) {
        t1092 = (0xFFFFF98E + (t409 + t421));
        if ((int)(0xFFFFF98E + (t409 + t421)) < 0) {
            t1092 = ((0xFFFFF98E + (t409 + t421)) + 0xF);
        }
        t1094 = *(int *)(((int)stk + 16));
        *(float *)((t1094 + 0x10)) = (1.0f - (float)((int)t1092 >> 4));
        *(float *)((t1094 + 0x14)) = (1.0f - (float)((int)t1092 >> 4));
        *(float *)((t1094 + 0x18)) = (1.0f - (float)((int)t1092 >> 4));
    }
    t1103 = FUN_0c09ee68((*(int *)0xC24FA58));
    if ((t409 + t421) == 0x682) {
        *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
    }
    return t1103;
}

void FUN_0c03d588(int a4, int a5, int a6, int a7)
{
    int t0;
    int t44;
    int t62;
    int t63;
    int t45;
    int t46;

    t0 = *(int *)((a4 + 0x48C));
    if (t0 != 20) {
        if (t0 != 28) {
            if (t0 != 30) {
                if (t0 != 29) {
                    if (t0 != 41) {
                        if ((t0 != 43) && (t0 != 42)) {
                            if (t0 != 44) {
                                if (t0 != 45) {
                                    if (t0 != 46) {
                                        if (t0 != 49) {
                                            if (t0 != 51) {
                                                if (t0 != 52) {
                                                    if ((t0 != 53) && (t0 != 54)) {
                                                        if ((t0 != 47) && (t0 != 48)) {
                                                            if (t0 != 31) {
                                                                FUN_0c03bffe(a4);
                                                            } else {
                                                                FUN_0c03d516(a4);
                                                            }
                                                        } else {
                                                            FUN_0c03d038(a4);
                                                        }
                                                    } else {
                                                        FUN_0c03ce1e(a4, a5, a6, a7);
                                                    }
                                                } else {
                                                    FUN_0c03cc70(a4, a5);
                                                }
                                            } else {
                                                FUN_0c03cb3a(a4);
                                            }
                                        } else {
                                            FUN_0c03c9e0(a4);
                                        }
                                    } else {
                                        FUN_0c03c900(a4);
                                    }
                                } else {
                                    FUN_0c03c75c(a4);
                                }
                            } else {
                                FUN_0c03c70c(a4);
                            }
                        } else {
                            FUN_0c03c65c(a4);
                        }
                    } else {
                        FUN_0c03c592(a4, a5, a6, a7);
                    }
                } else {
                    FUN_0c03cfb8(a4);
                }
            } else {
                FUN_0c03d020(a4);
            }
        } else {
            FUN_0c03c510(a4);
        }
    } else {
        FUN_0c03c336(a4);
    }
    t44 = *(int *)((a4 + 0x560));
    if ((t44 != 2) && ((t44 != 3) && ((t44 != 4) && ((t44 != 6) && ((t44 != 12) && ((t45 = *(int *)((a4 + 0x304)), (int)t45 > 0) && (t46 = *(int *)((a4 + 0x20C)), t46 != 0x200000))))))) {
    } else {
        FUN_0c03611c(a4);
        *(unsigned int *)((a4 + 0x554)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x5A8)) = ((*(int *)((a4 + 0x5A8))) & 0x3);
    *(unsigned int *)((a4 + 0x5A4)) = ((*(int *)((a4 + 0x5A4))) & 0x3);
    *(unsigned int *)(((0x5A0 + a4) + 0x0)) = ((*(int *)((a4 + 0x5A0))) & 0x1);
    *(volatile int *)((a4 + 0x57C));
    *(unsigned int *)(((0x57C + a4) + 0x0)) = (FUN_0c0e5f1c(0x3));
    *(unsigned int *)((a4 + 0x580)) = ((*(int *)((a4 + 0x580))) & a4);
    *(unsigned int *)((a4 + 0x584)) = ((*(int *)((a4 + 0x584))) & a4);
    *(volatile int *)((a4 + 0x578));
    *(unsigned int *)(((0x578 + a4) + 0x0)) = (FUN_0c0e5f1c(a4));
    t62 = *(int *)((a4 + 0x560));
    if ((unsigned int)t62 < (unsigned int)0xE) {
        switch ((t62 << 1)) {
            case 0:
            {
                FUN_0c02dc30(a4);
    return;
            }
            case 2:
            {
                FUN_0c03afe8(a4);
    return;
            }
            case 4:
            {
                *(unsigned int *)((a4 + 0x57C)) = a4;
                FUN_0c03aaa2(a4);
    return;
            }
            case 6:
            {
                *(unsigned int *)((a4 + 0x57C)) = a4;
                FUN_0c03a834(a4);
    return;
            }
            case 8:
            {
                *(unsigned int *)((a4 + 0x57C)) = 0x4;
                FUN_0c03aaa2(a4);
    return;
            }
            case 10:
            {
                ((int (*)(int))(0xC03A998))(a4);
    return;
            }
            case 12:
            {
                ((int (*)(int))(0xC03A77A))(a4);
    return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                ((int (*)(int))(0xC03B40C))(a4);
    return;
            }
            case 18:
            {
                ((int (*)(int))(0xC03B4DA))(a4);
    return;
            }
            case 20:
            {
                *(unsigned int *)((a4 + 0x4C8)) = 0xB;
                return;
            }
            case 22:
            {
                t63 = *(int *)((a4 + 0x48C));
                if ((t63 != 47) && (t63 != 48)) {
                    FUN_0c03afe8(a4);
    return;
                }
                ((int (*)(int))(0xC03B30C))(a4);
    return;
            }
            case 24:
            {
                ((int (*)(int))(0xC03AC0E))(a4);
    return;
            }
            default:
            {
                ((int (*)(int))(0xC03B568))(a4);
    return;
            }
        }
    }
}

float FUN_0c0ca9a8(int a4)
{
    int t0;
    int t18;
    int t36;
    int t40;
    float u43;
    float u44;
    float t46;
    float u47;
    float u49;
    float u51;
    float u54;
    int t60;
    int t67;
    float u69;
    float u70;
    float t72;
    float u73;
    float u75;
    float u77;
    float u80;
    int stk[54];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
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
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    t0 = *(int *)0xC23A258;
    R0 = (0xFFFFFF5C);
    R10 = ((unsigned short)((t0 << 8) << 1));
    F3 = ((float)t0);
    if (((int)t0 >= 0)) goto L_C0CA9E0;
    F3 = ((F3 + 4.2949673e+09f));
    L_C0CA9E0:;
    *(float *)(((int)stk + 4)) = ((F3 * 0.0f) - (float)(int)(F3 * 0.0f));
    R14 = (R4);
    F1 = (((F3 * 0.0f) - (float)(int)(F3 * 0.0f)));
    if (!((R4 != 0))) goto L_C0CAC04;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + ((int)stk + 4))) = *(struct mv3 *)((0x32C + (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))))); }
    nlPushMatrix(0x0);
    nlGetMatrix((((int)stk + 4) + 0x58));
    FUN_0c0dc0b0(0x3);
    nlGetMatrix((((int)stk + 4) + 0x18));
    FUN_0c0dc0b0(0x1);
    nlMultiMatrixRevOrder((((int)stk + 4) + 0x18));
    R4 = ((R14 + 0x18));
    goto L_C0CABF4;
    L_C0CAC04:;
    return F0;
    L_C0CABF4:;
    t18 = *(int *)((R4 + 0x0));
    R4 = ((R4 + 0x4));
    R5 = (t18);
    if ((t18 == 0)) goto L_C0CABFE;
    if (((R5 & 0x80000000) == 0)) goto L_C0CAA90;
    R4 = (((R4 - 4) + 0x50));
    goto L_C0CABF4;
    L_C0CAA90:;
    *(float *)(((int)stk + 8)) = (float)R10;
    R11 = (0xC0D9E90);
    R12 = (0xC0DA410);
    R13 = (0x1);
    R6 = (0x10);
    F12 = (0.5f);
    F13 = (5.55999994f);
    F14 = (0.0489999987f);
    F15 = (0.0249999985f);
    if (((R5 & 0x10) == 0)) goto L_C0CAB3A;
    t36 = (*(int *)((R4 + 0x0)));
    R14 = ((R4 + 0x4));
    R4 = ((R4 + 0x4));
    R8 = t36;
    L_C0CAABA:;
    if ((((*(int *)((R14 + 0x0))) & R13) != 0)) goto L_C0CAAC4;
    R14 = ((R14 + 0x8));
    L_C0CAB32:;
    t40 = (R8 - 0x1) != 0;
    R8 = ((R8 - 0x1));
    if (t40) goto L_C0CAABA;
    L_C0CABC6:;
    R4 = (R14);
    goto L_C0CABF4;
    L_C0CAAC4:;
    u43 = *(float *)((R14 + 0x0));
    *(float *)(((int)stk + 16)) = (u43 * 2784.0f);
    u44 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 12)) = (FUN_0c0da410((int)(u44 + (u43 * 2784.0f))));
    t46 = FUN_0c0d9e90((int)(u44 + (u43 * 2784.0f)));
    u47 = 0.0649999976f;
    u47 = u47 + F14 * t46;
    *(float *)((R14 + 0x10)) = u47;
    u49 = 0.934999943f;
    u49 = u49 + F14 * (*(float *)(((int)stk + 12)));
    *(float *)((R14 + 0xC)) = u49;
    u51 = (u49 * F13);
    u51 = u51 + F15 * (*(float *)((R14 + 0x0)));
    *(float *)((R14 + 0x18)) = (u51 + F12);
    u54 = ((*(float *)((R14 + 0x10))) * F13);
    u54 = u54 + F15 * (*(float *)((R14 + 0x8)));
    *(float *)((R14 + 0x1C)) = ((u54 + (*(float *)(((int)stk + 4)))) + F12);
    *(unsigned int *)(((R14 + 0x1C) + 0x0)) = ((*(int *)(((R14 + 0x1C) + 0x0))) | R13);
    R14 = ((R14 + 0x20));
    goto L_C0CAB32;
    L_C0CAB3A:;
    R6 = (0x8);
    if (((R5 & 0x8) == 0)) goto L_C0CABCA;
    t60 = *(int *)((R4 + 0x0));
    R14 = ((R4 + 0x4));
    R4 = ((R4 + 0x4));
    R8 = (((t60 << 1) + t60));
    L_C0CAB4A:;
    if ((((*(int *)((R14 + 0x0))) & R13) != 0)) goto L_C0CAB54;
    R14 = ((R14 + 0x8));
    L_C0CABC2:;
    t67 = (R8 - 0x1) != 0;
    R8 = ((R8 - 0x1));
    if (t67) goto L_C0CAB4A;
    goto L_C0CABC6;
    L_C0CAB54:;
    u69 = *(float *)((R14 + 0x0));
    *(float *)(((int)stk + 20)) = (u69 * 2784.0f);
    u70 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 24)) = (FUN_0c0da410((int)(u70 + (u69 * 2784.0f))));
    t72 = FUN_0c0d9e90((int)(u70 + (u69 * 2784.0f)));
    u73 = 0.0649999976f;
    u73 = u73 + F14 * t72;
    *(float *)((R14 + 0x10)) = u73;
    u75 = 0.934999943f;
    u75 = u75 + F14 * (*(float *)(((int)stk + 24)));
    *(float *)((R14 + 0xC)) = u75;
    u77 = (u75 * F13);
    u77 = u77 + F15 * (*(float *)((R14 + 0x0)));
    *(float *)((R14 + 0x18)) = (u77 + F12);
    u80 = ((*(float *)((R14 + 0x10))) * F13);
    u80 = u80 + F15 * (*(float *)((R14 + 0x8)));
    *(float *)((R14 + 0x1C)) = ((u80 + (*(float *)(((int)stk + 4)))) + F12);
    *(unsigned int *)(((R14 + 0x1C) + 0x0)) = ((*(int *)(((R14 + 0x1C) + 0x0))) | R13);
    R14 = ((R14 + 0x20));
    goto L_C0CABC2;
    L_C0CABCA:;
    goto L_C0CABCA;
    L_C0CABFE:;
    R0 = ((nlPopMatrix(0x1)));
    goto L_C0CAC04;
}
