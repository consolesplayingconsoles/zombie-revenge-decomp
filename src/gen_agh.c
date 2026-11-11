/* Straight-line functions with calls and guards (batch gen_agh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o123C_int { char p[0x123C]; int v; };
struct o123C_uint { char p[0x123C]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o384_uint { char p[0x384]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c095f40(int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0961f8(int, int);
int FUN_0c09635c(int, int, float, float);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c097720(int, int, int, int);
int FUN_0c0a155c(int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c906c(int, int, int, int, float);
int FUN_0c0c92b2(int, int, int, float, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d6254(int, int, int);
int FUN_0c0d6592(int, int);
int FUN_0c0d6e5a(int);
int FUN_0c0d6fae(int);
float FUN_0c0d7114(int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
extern int FUN_0c0e19f2();
int FUN_0c0e5fe4(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
float FUN_0c0d432e(int a4, int a5, int a6, float f4);
int FUN_0c0965c0(int a4, int a5, int a6, int a7);
int FUN_0c0762da(int a4, int a5, int a6, int a7);
int FUN_0c0a163c(int a4, int a5, int a6, int a7);

float FUN_0c0d432e(int a4, int a5, int a6, float f4)
{
    int stk[11];
    int t2;
    int t3;
    register int t4;
    register int t5;
    register float u11;
    register int t15;
    register int t21;
    register int t22;
    register float u194;
    register float u201;
    register float u208;
    register int t234;
    register int t249;
    register int t263;
    register float u267;
    int t0;
    int t1;
    register int t6;
    register int t7;
    register float u8;
    register float u9;
    register float u10;
    register int t29;
    register int t43;
    int t87;
    register int t88;
    register int t89;
    register int t90;
    register int t97;
    register int t98;
    register int t99;
    register int t100;
    int t101;
    register int t102;
    register int t103;
    register int t104;
    register int t105;
    int t109;
    register int t110;
    register int t184;
    register int t244;
    register int t255;
    register int t256;
    register int t257;
    register int t258;
    register int t259;
    register int t260;
    register int t273;
    register int t275;
    register int t276;
    register float u277;
    register int t281;
    int t289;
    register int t312;
    register float u313;
    register float u309;
    int t325;
    register int t326;
    register int t336;
    register int t360;
    register int t361;
    register int t362;
    register int t363;
    register int t364;
    register int t365;
    register int t366;
    int t367;
    register int t371;
    register int t372;
    register int t373;
    int t374;
    register int t378;
    register int t379;
    register int t380;
    register int t381;
    register int t382;
    register int t383;
    register int t384;
    register int t388;
    register int t389;
    register int t390;
    int t391;
    register int t394;
    int t398;
    register int t399;
    int t403;
    register int t404;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    int R1040;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);

    R1032 = 0xC943554;
    R1016 = 0x0;
    t2 = 0xC943554;
    t3 = a4;
    t4 = a5;
    t5 = a6;
    u11 = f4;
    for (;;) {
        if ((int)(R1016) < (int)0x2) {
            t3 = 0xC23A258;
            t1 = 0x1;
            t0 = 0x6C;
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x1D4;
            t15 = (((R1016) + t2) & 0x1);
            t2 = t3;
            t7 = t15;
            t2 = (t2 - 116);
            t1 = (t1 - t15);
            R1012 = t15;
            t4 = (R1032);
            t7 = (t7 * t3);
            t4 = (t4 + t2);
            t7 = (t7 + t4);
            t1 = (t1 * t3);
            t4 = (t4 + t1);
            R1004 = t4;
            t6 = (*(int *)((t7 + t0)));
            t0 = 0x70;
            t2 = (*(int *)((t7 + t0)));
            R1040 = t2;
            t2 = 0xA4;
            R1000 = (t7 + 0x7C);
            t2 = (t2 + t7);
            R1008 = t2;
            t0 = 0x340;
            t5 = 0x0;
            t3 = 0xC20C0B4;
            t4 = t5;
            t21 = *(int *)((t6 + t0));
            t2 = t21;
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((t7 + 0x14)) = t21;
            t2 = (t2 + t3);
            t22 = *(signed char *)((t2 + 0x0));
            t2 = 0xC0D6254;
            *(unsigned int *)((t7 + 0x18)) = t22;
            t3 = t7;
            t0 = (FUN_0c0d6254(t3, t4, t5));
            t0 = 0x20C;
            t3 = 0x5D;
            if (((*(int *)((t6 + t0))) & t3) != 0) {
                t0 = 0xBC;
                t4 = 0x1;
                t2 = 0x494;
                t5 = (*(int *)((t6 + t0)));
                t3 = 0xC246FF0;
                t5 = (t5 << 2);
                t2 = (t2 + t3);
                t5 = (t5 + t2);
                t5 = (*(int *)((t5 + 0x0)));
                t3 = t7;
                t0 = (FUN_0c0d6254(t3, t4, t5));
            } else {
                t29 = t3;
            }
            t0 = 0xF4;
            t3 = t29;
            t2 = (*(int *)((t7 + t0)));
            R1028 = t2;
            t2 = 0xC0D6E5A;
            t3 = t7;
            t0 = (FUN_0c0d6e5a(t3));
            t2 = 0xC0D6254;
            t4 = 0x2;
            R1024 = t0;
            t5 = t0;
            t3 = t7;
            t0 = (FUN_0c0d6254(t3, t4, t5));
            t0 = 0x11C;
            t2 = 0xC0D6FAE;
            R1036 = (*(int *)((t7 + t0)));
            t3 = t7;
            t0 = (FUN_0c0d6fae(t3));
            t2 = 0xC0D6254;
            t4 = 0x3;
            R1020 = t0;
            t5 = t0;
            t3 = t7;
            t0 = (FUN_0c0d6254(t3, t4, t5));
            t4 = 0x4;
            t5 = 0x0;
            t3 = t7;
            t0 = (FUN_0c0d6254(t3, t4, t5));
            t0 = 0x74;
            t2 = 0xC0D6592;
            t4 = (*(int *)((t7 + t0)));
            t3 = t7;
            t0 = (FUN_0c0d6592(t3, t4));
            t0 = 0x20C;
            *(unsigned int *)((t7 + 0x1C)) = 0x0;
            t2 = (*(int *)((t6 + t0)));
            if ((t2 & 0x1) != 0) {
                t1 = (*(int *)((t7 + 0x1C)));
                t1 = (t1 | 0x1);
                *(unsigned int *)((t7 + 0x1C)) = t1;
                t43 = t1;
            }
            t0 = (*(int *)((t6 + t0)));
            t1 = t43;
            if ((t0 & 64) != 0) {
                *(unsigned int *)((t7 + 0x1C)) = ((*(int *)((t7 + 0x1C))) | 0x2);
            }
            t0 = 0x20C;
            t2 = (*(int *)((t6 + t0)));
            if ((t2 & 0x4) != 0) {
                t1 = (*(int *)((t7 + 0x1C)));
                t1 = (t1 | 0x4);
                *(unsigned int *)((t7 + 0x1C)) = t1;
            }
            t2 = (*(int *)((t6 + t0)));
            if ((t2 & 0x8) != 0) {
                t1 = (*(int *)((t7 + 0x1C)));
                t1 = (t1 | 0x8);
                *(unsigned int *)((t7 + 0x1C)) = t1;
            }
            t3 = 0xC23A1A8;
            t2 = (*(int *)((t7 + 0x8)));
            t1 = (*(int *)((t3 + 0x0)));
            if ((((int)0x200000 << (int)t2) & t1) != 0) {
                t0 = (*(int *)((t7 + 0x1C)));
                t0 = (t0 | 0x10);
                *(unsigned int *)((t7 + 0x1C)) = t0;
            }
            t0 = 0x20C;
            t3 = 0x83E00;
            t2 = (*(int *)((t6 + t0)));
            if ((t2 & t3) != 0) {
                t0 = (*(int *)((t7 + 0x1C)));
                t0 = (t0 | 0x40);
                *(unsigned int *)((t7 + 0x1C)) = t0;
            }
            t0 = 0x20C;
            t3 = 0xC000;
            t2 = (*(int *)((t6 + t0)));
            if ((t2 & t3) != 0) {
                t0 = (*(int *)((t7 + 0x1C)));
                t0 = (t0 | 0x80);
                *(unsigned int *)((t7 + 0x1C)) = t0;
            }
            t2 = 0x200000;
            t0 = 0x20C;
            if (((*(int *)((t6 + t0))) & t2) != 0) {
                t1 = (*(int *)((t7 + 0x1C)));
                t1 = (t1 | 0x100);
                *(unsigned int *)((t7 + 0x1C)) = t1;
            }
            t2 = (*(int *)((t6 + t0)));
            t3 = 0xF;
            if ((t2 & 0x10) != 0) {
                t2 = 0x200;
                *(unsigned int *)((t7 + 0x1C)) = ((*(int *)((t7 + 0x1C))) | t2);
            }
            t2 = (*(int *)((t7 + 0x1C)));
            t0 = 0x40;
            if ((t2 & t3) != 0) {
                t2 = 0x400;
                *(unsigned int *)((t7 + 0x1C)) = ((*(int *)((t7 + 0x1C))) | t2);
            }
            t0 = (*(int *)((t7 + t0)));
            if (((t0 == 4) && (t87 = (t0 == 4), t0 = 0x48, t88 = *(int *)((t7 + t0)), t2 = t88, (int)t2 < (int)0x3)) || (t89 = (t0 == 4), t0 = 0x170, t90 = *(int *)((t7 + t0)), t2 = t90, t2 != 0)) {
                t0 = 0x20C;
                t3 = 0x40182;
                t2 = (*(int *)((t6 + t0)));
                if ((t2 & t3) != 0) {
                    t0 = (*(int *)((t7 + 0x1C)));
                    t0 = (t0 | 0x20);
                    *(unsigned int *)((t7 + 0x1C)) = t0;
                }
                t0 = 0x40;
                t0 = (*(int *)((t7 + t0)));
                if (((t0 == 4) && ((t97 = (t0 == 4), t0 = 0x48, t98 = *(int *)((t7 + t0)), t98 == 0) || ((t99 = (t0 == 4), t0 = 0x40, t100 = *(int *)((t7 + t0)), t0 = t100, t0 == 4) && (t101 = (t0 == 4), t0 = 0x210, t102 = *(int *)((t6 + t0)), t102 != 0)))) || ((t103 = (t0 == 4), t0 = 0x198, t104 = *(int *)((t7 + t0)), t0 = t104, t0 != -3) || (t105 = *(int *)((t7 + 0x1C)), t3 = 0x1C1, (t105 & t3) == 0))) {
                    t0 = (*(int *)((t7 + 0x1C)));
                    t0 = (t0 | 0x20);
                    *(unsigned int *)((t7 + 0x1C)) = t0;
                }
                t0 = 0x198;
                t0 = (*(int *)((t7 + t0)));
                if ((t0 == -3) && (t109 = *(int *)((t7 + 0x1C)), t110 = (t0 == -3), t0 = t109, (t0 & 1) != 0)) {
                    t2 = (*(int *)((t7 + 0x1C)));
                    t3 = 0xFFFFFFDF;
                    t2 = (t2 & t3);
                    *(unsigned int *)((t7 + 0x1C)) = t2;
                }
            }
            t0 = 0x210;
            t4 = 0x69;
            t3 = (*(int *)((t6 + t0)));
            if ((((int)t3 >= (int)t4) && ((int)t3 <= (int)0x73)) || ((t1 = 0x27, (int)t3 >= (int)t1) && ((int)t3 <= (int)0x2B))) {
                t0 = (*(int *)((t7 + 0x1C)));
                t0 = (t0 | 0x20);
                *(unsigned int *)((t7 + 0x1C)) = t0;
            }
            t0 = 0x344;
            *(unsigned int *)((t7 + 0x2C)) = 0x0;
            t0 = (*(int *)((t6 + t0)));
            t3 = t0;
            if (t0 != 1) {
                t0 = t3;
                if (t0 == 2) {
                    t2 = (*(int *)((t7 + 0x2C)));
                    t3 = 0x5;
                    t2 = (t2 | t3);
                    *(unsigned int *)((t7 + 0x2C)) = t2;
                }
            } else {
                t2 = (*(int *)((t7 + 0x2C)));
                t3 = 0x5;
                t2 = (t2 | t3);
                *(unsigned int *)((t7 + 0x2C)) = t2;
            }
            t0 = 0x340;
            if ((*(int *)((t6 + t0))) != 0) {
                t2 = (*(int *)((t6 + t0)));
                t3 = 0x20EE00;
                if ((((int)0x1 << (int)t2) & t3) != 0) {
                    t1 = (*(int *)((t7 + 0x2C)));
                    t1 = (t1 | 0x2);
                    *(unsigned int *)((t7 + 0x2C)) = t1;
                } else {
                    *(unsigned int *)((t7 + 0x2C)) = ((*(int *)((t7 + 0x2C))) | 0x4);
                }
            }
            t2 = (*(int *)((t6 + t0)));
            t3 = 0x6;
            if ((int)t2 > (int)0x2) {
                t1 = (*(int *)((t7 + 0x2C)));
                t1 = (t1 | 0x10);
                *(unsigned int *)((t7 + 0x2C)) = t1;
            }
            t0 = (*(int *)((t7 + 0x18)));
            t0 = (t0 & t3);
            if (t0 == 6) {
                *(unsigned int *)((t7 + 0x2C)) = ((*(int *)((t7 + 0x2C))) | 0x8);
            }
            t0 = 0x20C;
            t2 = 0x0;
            *(unsigned int *)((t7 + 0x24)) = t2;
            if (((*(int *)((t6 + t0))) & 0x10) == 0) {
                t2 = (*(int *)(((R1008) + 0x20)));
                if ((int)t2 < (int)0xAAA) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x1);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (R1008);
                t4 = 0x11C7;
                if ((int)(*(int *)((t2 + 0x20))) < (int)t4) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x2);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (R1008);
                t3 = 0x1FFF;
                if ((int)(*(int *)((t2 + 0x20))) < (int)t3) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x4);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (R1008);
                t5 = 0x38E3;
                if ((int)(*(int *)((t2 + 0x20))) < (int)t5) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x8);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (R1008);
                t1 = (*(int *)((t2 + 0x20)));
                if ((int)t1 < (int)0x471C) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x8);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = (R1000);
                if ((int)(*(int *)((t2 + 0x20))) < (int)0xAAA) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x10);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (R1000);
                if ((int)(*(int *)((t2 + 0x20))) < (int)t4) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x20);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = (*(int *)(((R1000) + 0x20)));
                if ((int)t2 < (int)t3) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x40);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = (R1000);
                if ((int)(*(int *)((t2 + 0x20))) < (int)t5) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x80);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = 0x471C;
                t1 = (*(int *)(((R1000) + 0x20)));
                if ((int)t1 < (int)t2) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x100);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t184 = t5;
            }
            t0 = 0xC0D4738;
            t5 = t184;
            t2 = (R1000);
            u11 = (*(float *)((t0 + 0x0)));
            t0 = 0x14;
            u10 = (*(float *)((t2 + t0)));
            if (u11 > u10) {
                t2 = 0x200;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t2);
            }
            t0 = 0xC0D473C;
            t2 = (R1000);
            u194 = *(float *)((t0 + 0x0));
            t0 = 0x14;
            u10 = (*(float *)((t2 + t0)));
            if (u194 > u10) {
                t2 = 0x400;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t2);
            }
            t0 = 0xC0D4740;
            t2 = (R1000);
            u201 = *(float *)((t0 + 0x0));
            t0 = 0x14;
            u10 = (*(float *)((t2 + t0)));
            if (u201 > u10) {
                t3 = 0x800;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
            }
            t0 = 0xC0D47E4;
            t2 = (R1000);
            u208 = *(float *)((t0 + 0x0));
            t0 = 0x14;
            u10 = (*(float *)((t2 + t0)));
            if (u208 > u10) {
                t3 = 0x1000;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
            }
            t2 = (R1000);
            t0 = 0x14;
            u10 = (*(float *)((t2 + t0)));
            if (u11 > u10) {
                t3 = 0x2000;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
            } else {
                t1 = (R1000);
                t0 = 0x14;
                u10 = (*(float *)((t1 + t0)));
                if (u194 > u10) {
                    t3 = 0x4000;
                    *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                } else {
                    t1 = (R1000);
                    t0 = 0x14;
                    u10 = (*(float *)((t1 + t0)));
                    t234 = *(int *)((t7 + 0x24));
                    if (u201 > u10) {
                        t3 = 0x8000;
                    } else {
                        t3 = 0x10000;
                    }
                    *(unsigned int *)((t7 + 0x24)) = (t234 | t3);
                }
            }
            t0 = 0x6C;
            t2 = 0xC0D7114;
            t3 = (*(int *)((t7 + t0)));
            t4 = t6;
            t4 = (t4 + 0x30);
            t3 = (t3 + 0x30);
            u8 = (FUN_0c0d7114(t3, t4));
            u10 = 0.0f;
            if (u8 != u10) {
                t2 = 0x200000;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t2);
                t244 = t2;
            }
            t0 = 0xA0;
            t2 = t244;
            t1 = 0x471C;
            t0 = (*(int *)((t7 + t0)));
            if ((int)t0 < (int)t1) {
                t2 = 0x100;
                t249 = 0x800000;
                if (((*(int *)((t7 + 0x24))) & t2) != 0) {
                    t249 = 0x400000;
                }
                t0 = (*(int *)((t7 + 0x24)));
                t0 = (t0 | t249);
                *(unsigned int *)((t7 + 0x24)) = t0;
            }
            t2 = (*(int *)((t7 + 0x1C)));
            if (((t2 & 0x4) != 0) && ((t255 = *(int *)((t7 + 0x14)), t1 = t255, t0 = 0xC1FE3D0, t1 = (t1 << 2), t256 = *(int *)((t1 + t0)), t257 = ((t2 & 0x4) == 0), t2 = t256, t2 != 0) && (t0 = 0x6C, t258 = *(int *)((t7 + t0)), t259 = ((t2 & 0x4) == 0), t2 = t258, t0 = 0x32C, t260 = *(int *)((t2 + t0)), t1 = t260, (int)t1 < (int)0x2))) {
                t2 = 0xC0DA2E0;
                t0 = (FUN_0c0da2e0());
                t2 = (R1012);
                t1 = 0xC943530;
                t263 = t0;
                t0 = 0xC0D48CC;
                t2 = (t2 << 2);
                u8 = 1.0f;
                t2 = (t2 << 2);
                t2 = (t2 << 1);
                t1 = (t1 + t2);
                t2 = 0xC0E5F1C;
                u10 = (*(float *)((t1 + 0x0)));
                u10 = (-u10);
                u10 = (u10 + u8);
                u9 = u10;
                u10 = u8;
                u8 = (*(float *)((t0 + 0x0)));
                u267 = u10;
                u267 = u267 + u8 * u9;
                u10 = u267;
                t0 = (int)u10;
                t1 = t263;
                t0 = ((int)((int)t1 % (int)t0));
                if (t0 == 0) {
                    t2 = (*(int *)((t7 + 0x24)));
                    t3 = 0x1000000;
                    t2 = (t2 | t3);
                    *(unsigned int *)((t7 + 0x24)) = t2;
                    t275 = t2;
                    t276 = t3;
                } else {
                    t275 = 0xC0E5F1C;
                }
                u277 = u9;
            } else {
                t273 = t1;
                t275 = t2;
            }
            u9 = u277;
            t0 = (*(int *)((t7 + 0x8)));
            t1 = t273;
            t2 = t275;
            t3 = t276;
            t3 = 0xC247594;
            t0 = (-t0);
            t0 = (t0 + 0x1);
            t0 = (t0 << 2);
            t2 = (*(int *)((t3 + t0)));
            if ((int)t2 <= 0) {
                t2 = (*(int *)((t7 + 0x24)));
                t4 = 0x2000000;
                t2 = (t2 | t4);
                *(unsigned int *)((t7 + 0x24)) = t2;
                t281 = t4;
            }
            t0 = (*(int *)((t7 + 0x8)));
            t4 = t281;
            t4 = 0x32;
            t0 = (t0 << 2);
            t2 = (*(int *)((t3 + t0)));
            t0 = 0x74;
            if ((int)t2 > (int)t4) {
                t2 = (*(int *)((t7 + 0x24)));
                t3 = 0x4000000;
                t2 = (t2 | t3);
                *(unsigned int *)((t7 + 0x24)) = t2;
            }
            t3 = (*(int *)((t7 + t0)));
            if (((t3 == 0) || (t0 = t3, t0 == 1)) && (t289 = *(int *)((t7 + 0x24)), t2 = 0x400, (t289 & t2) != 0)) {
                t0 = (*(int *)((t7 + 0xC)));
                if (t0 != 2) {
                    t1 = (*(int *)((t7 + 0x24)));
                    if ((t1 & 0x800000) == 0) {
                    } else {
                        t3 = 0x8000000;
                        *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                    }
                } else {
                    t0 = 0x80;
                    t4 = 0xFFFFC000;
                    t3 = (*(int *)((t7 + t0)));
                    t0 = 0x6E;
                    t3 = (*(short *)((t3 + t0)));
                    t0 = (t0 + 0x2A);
                    t5 = (*(int *)((t7 + t0)));
                    t0 = 0xC0D49E0;
                    u11 = (*(float *)((t0 + 0x0)));
                    t5 = (t5 + t4);
                    t3 = (t3 - t5);
                    t4 = (short)t3;
                    u10 = (float)t4;
                    u10 = _builtin_fabsf(u10);
                    if (u11 > u10) {
                        t3 = 0x8000000;
                        *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                    }
                    t312 = t5;
                    u309 = u11;
                }
                u313 = u309;
            }
            u11 = u313;
            t0 = 0xAC;
            t5 = t312;
            t0 = (*(int *)((t6 + t0)));
            if (t0 == 4) {
                t0 = (R1004);
                t0 = (*(int *)((t0 + 0x1C)));
                t0 = (t0 & 0x40);
                t0 = (t0 | 0x80);
                if (t0 == 0) {
                    t3 = 0x10000000;
                    *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                }
                t0 = 0xAC;
                t0 = (*(int *)((t6 + t0)));
                if ((t0 == 4) && (t325 = R1004, t2 = 0x10000000, t326 = *(int *)((t325 + 0x24)), t1 = t326, (t1 & t2) == 0)) {
                    t2 = 0xC23A1A8;
                    t0 = 0x80000;
                    t1 = (*(int *)((t2 + 0x0)));
                    t0 = ((int)t0 << (int)(R1012));
                    if ((t0 & t1) == 0) {
                        t3 = 0x20000000;
                        *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                    }
                }
            }
            t2 = 0x0;
            *(unsigned int *)((t7 + 0x20)) = t2;
            if ((((*(int *)((t7 + 0x2C))) & 0x10) == 0) && (t0 = 0x10C, t1 = 0x2, t336 = *(int *)((t7 + t0)), t2 = t336, (int)t2 <= (int)t1)) {
                t2 = (*(int *)((t7 + 0x20)));
                t2 = (t2 | 0x1);
                *(unsigned int *)((t7 + 0x20)) = t2;
            }
            t0 = 0x134;
            if ((int)(*(int *)((t7 + t0))) <= (int)0x2) {
                t1 = (*(int *)((t7 + 0x20)));
                t1 = (t1 | 0x2);
                *(unsigned int *)((t7 + 0x20)) = t1;
            }
            t2 = 0x400000;
            t3 = (*(int *)((t7 + 0x24)));
            if (((t2 & t3) != 0) && (t1 = 0x20, (t1 & t3) == 0)) {
                *(unsigned int *)((t7 + 0x20)) = ((*(int *)((t7 + 0x20))) | 0x4);
            }
            t0 = 0x74;
            t3 = (*(int *)((t7 + t0)));
            if ((t3 == 0) || (t0 = t3, t0 == 1)) {
                t0 = (*(int *)((t7 + 0x1C)));
                if (((t0 & 64) == 0) && ((t360 = *(int *)((t7 + 0x2C)), t361 = ((t0 & 64) == 0), t0 = t360, (t0 & 4) == 0) && ((t362 = *(int *)((t7 + 0x24)), t2 = t362, t2 == 0) && ((t363 = R1004, t364 = ((t0 & 64) == 0), t0 = t363, t365 = *(int *)((t0 + 0x1C)), t0 = t365, (t0 & 128) == 0) && ((t366 = *(int *)((t7 + 0x24)), t2 = 0x400000, (t366 & t2) != 0) && (t367 = *(int *)((t7 + 0x24)), t1 = t367, (t1 & 0x400) != 0)))))) {
                    t2 = (*(int *)((t7 + 0x20)));
                    t2 = (t2 | 0x8);
                    *(unsigned int *)((t7 + 0x20)) = t2;
                }
                if ((((*(int *)((t7 + 0x2C))) & 0x4) != 0) && (((t371 = R1004, t0 = t371, t372 = *(int *)((t0 + 0x1C)), t0 = t372, (t0 & 128) == 0) || (t373 = *(int *)((t7 + 0x14)), t0 = t373, t0 == 7)) && (t374 = *(int *)((t7 + 0x24)), t0 = t374, (t0 & 32) != 0))) {
                    *(unsigned int *)((t7 + 0x20)) = ((*(int *)((t7 + 0x20))) | 0x10);
                }
                t1 = (*(int *)((t7 + 0x24)));
                t2 = 0x400000;
                if (((t1 & t2) == 0) && ((t378 = *(int *)((t7 + 0x1C)), t0 = t378, (t0 & 128) == 0) && ((t379 = ((t1 & t2) == 0), t2 = 0x80, t380 = *(int *)((t7 + 0x24)), t3 = t380, (t2 & t3) == 0) || ((t381 = ((t1 & t2) == 0), t1 = 0x40, (t1 & t3) != 0) && (((0x800 & t3) != 0) && (t0 = 0x20C, t382 = R1040, t383 = ((t1 & t2) == 0), t1 = t382, t2 = 0x40182, t384 = *(int *)((t1 + t0)), (t384 & t2) != 0)))))) {
                    t0 = (*(int *)((t7 + 0x20)));
                    t0 = (t0 | 0x20);
                    *(unsigned int *)((t7 + 0x20)) = t0;
                }
                t2 = (R1004);
                if ((((*(int *)((t2 + 0x20))) & 0x10) != 0) || ((t388 = R1004, t0 = t388, t389 = *(int *)((t0 + 0x1C)), t0 = t389, (t0 & 128) == 0) && ((t390 = *(int *)((t7 + 0x24)), t2 = 0x800000, (t390 & t2) != 0) && (t391 = *(int *)((t7 + 0x24)), t1 = t391, (t1 & 0x400) != 0)))) {
                    t0 = (*(int *)((t7 + 0x20)));
                    t0 = (t0 | 0x40);
                    *(unsigned int *)((t7 + 0x20)) = t0;
                }
                t2 = 0x400000;
                if ((((*(int *)((t7 + 0x24))) & t2) != 0) && (t0 = 0x94, t394 = *(int *)((t7 + t0)), t0 = t394, (int)t0 > 0)) {
                    t0 = (*(int *)((t7 + 0x20)));
                    t0 = (t0 | 0x80);
                    *(unsigned int *)((t7 + 0x20)) = t0;
                }
            }
            t0 = 0x74;
            t2 = 0x0;
            *(unsigned int *)((t7 + 0x28)) = t2;
            t0 = (*(int *)((t7 + t0)));
            if ((t0 == 2) && (t398 = R1024, t2 = t398, t399 = R1028, t2 != t399)) {
                t2 = (*(int *)((t7 + 0x28)));
                t2 = (t2 | 0x1);
                *(unsigned int *)((t7 + 0x28)) = t2;
            }
            t0 = 0x74;
            t0 = (*(int *)((t7 + t0)));
            if ((t0 == 3) && (t403 = R1020, t2 = t403, t404 = R1036, t2 != t404)) {
                t2 = (*(int *)((t7 + 0x28)));
                t2 = (t2 | 0x2);
                *(unsigned int *)((t7 + 0x28)) = t2;
            }
            t0 = (R1024);
            if (t0 != -1) {
                *(unsigned int *)((t7 + 0x28)) = ((*(int *)((t7 + 0x28))) | 0x4);
            }
            t0 = (R1020);
            if (t0 != -1) {
                *(unsigned int *)((t7 + 0x28)) = ((*(int *)((t7 + 0x28))) | 0x8);
            }
            t2 = (R1016);
            t2 = (t2 + 0x1);
            R1016 = t2;
            continue;
        }
        break;
    }
    return u8;
}

int FUN_0c0965c0(int a4, int a5, int a6, int a7)
{
    int stk[19];
    register int t1;
    register int t8;
    int t10;
    register int t12;
    int t13;
    register int t15;
    register int t96;
    register int t91;
    register int t86;
    register int t26;
    register int t31;
    register float u33;
    register float u42;
    register float u45;
    register float u46;
    register int t56;
    register int t65;
    register int t67;
    register int t69;
    register int t70;
    register int t75;
    register float u104;
    register float u106;
    register float u107;
    register float u109;
    register float u110;
    register float u111;
    register float u112;
    register float u113;
    register float u116;
    register float u117;
    register float u131;
    register int t137;
    register int t177;
    register int t178;
    register int t183;
    register int t230;
    int t232;
    register int t233;
    register float u236;
    register int t254;
    register int t264;
    register float t268;
    register float u270;
    register float u271;
    register float u273;
    register float u274;
    register float u277;
    register float u279;
    register float u293;
    register int t311;
    register int t320;
    register int t313;
    register int t9;
    register int t11;
    register int t14;
    register float u16;
    register float u17;
    register int t95;
    register int t98;
    register int t90;
    register int t93;
    register int t85;
    register int t88;
    register int t80;
    register int t81;
    register int t83;
    register int t156;
    register int t158;
    register float u159;
    register float u160;
    register float u153;
    register float u154;
    register float u132;
    register int t231;
    register float u234;
    register float u235;
    register int t238;
    int t239;
    register float u300;
    register float u301;

    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 8)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((((((struct o2EC_int *)(t1))->v)) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    t10 = *(int *)((a4 + 0x38));
    if ((int)t10 <= (int)0x12) {
    } else {
        t8 = 0xC096738;
        t12 = t11;
        t13 = 0x0;
        t15 = (a4 + 0x44);
        for (;;) {
            t96 = t10;
            if ((int)(*(int *)((t15 + 0x0))) > 0) {
                t95 = t9;
                t98 = t12;
            } else {
                t9 = (*(int *)((a4 + 0x34)));
                t91 = t10;
                if (t9 != 0) {
                    t90 = t9;
                    t93 = t12;
                } else {
                    t12 = (*(int *)((a4 + 0x38)));
                    t86 = t10;
                    if ((int)t12 <= (int)0x12) {
                        t85 = t9;
                        t88 = t12;
                    } else {
                        t9 = 0x1D;
                        if ((int)t12 >= (int)t9) {
                            t80 = t9;
                            t81 = t10;
                            t83 = t12;
                        } else {
                            *(unsigned int *)((t15 + 0x0)) = 0x14;
                            t8 = (FUN_0c0da2e0());
                            t8 = (unsigned char)t8;
                            t26 = t8;
                            t8 = 0xC09673C;
                            u16 = (*(float *)((t8 + 0x0)));
                            t8 = 0x4;
                            u17 = (float)t26;
                            u17 = (u17 / u16);
                            u17 = (u17 + 0.5f);
                            *(float *)((t15 + t8)) = u17;
                            t8 = (FUN_0c0da2e0());
                            *(unsigned int *)((t15 + 0x14)) = t8;
                            *(unsigned int *)((t15 + 0x8)) = ((*(int *)((t15 + 0x8))) + 0x1);
                            t8 = (FUN_0c0da2e0());
                            t8 = (unsigned char)t8;
                            t31 = t8;
                            t8 = 0xC096740;
                            u16 = (*(float *)((t8 + 0x0)));
                            t8 = 0xC096744;
                            u33 = *(float *)((t8 + 0x0));
                            t8 = 0x18;
                            u17 = (float)t31;
                            u17 = (u17 * u16);
                            u17 = (u17 / u33);
                            *(float *)((((int)stk + 4) + t8)) = u17;
                            t8 = (FUN_0c0da2e0());
                            t14 = t8;
                            *(int *)((int)stk + 0) = (t15 + 0x20);
                            t12 = t1;
                            t8 = (FUN_0c095f40(t12, (0x1 & t13), (t15 + 0x18), (t15 + 0x1C), (t15 + 0x20)));
                            t12 = t14;
                            t8 = 0x18;
                            u17 = (*(float *)((((int)stk + 4) + t8)));
                            t8 = 0x3C;
                            u17 = (u17 * (FUN_0c0d9e90(t12)));
                            *(float *)((((int)stk + 4) + t8)) = u17;
                            t12 = t14;
                            t8 = 0x18;
                            u17 = (*(float *)((((int)stk + 4) + t8)));
                            t8 = 0x40;
                            u17 = (u17 * (FUN_0c0da410(t12)));
                            *(float *)((((int)stk + 4) + t8)) = u17;
                            t8 = 0xC096750;
                            u17 = (*(float *)((t8 + 0x0)));
                            t8 = 0x18;
                            u16 = (*(float *)((((int)stk + 4) + t8)));
                            t8 = 0xC096754;
                            u42 = *(float *)((t8 + 0x0));
                            t8 = 0x44;
                            u16 = (u16 / u17);
                            *(float *)((((int)stk + 4) + t8)) = (u42 - u16);
                            t12 = 0x0;
                            t8 = (nlPushMatrix(t12));
                            t10 = 0xC0DCCC0;
                            t8 = (nlUnitMatrix());
                            t8 = 0x38;
                            u45 = *(float *)((t1 + t8));
                            t8 = 0x34;
                            u46 = *(float *)((t1 + t8));
                            t8 = 0x30;
                            t8 = (FUN_0c0dcc70((*(float *)((t1 + t8))), u46, u45));
                            t8 = 0x6E;
                            t12 = (*(short *)((t1 + t8)));
                            t8 = (nlRotateAY(t12));
                            t10 = 0xC0DCC70;
                            t8 = (FUN_0c0dcc70(0.0f, 4.0f, 0.0f));
                            t12 = ((int)stk + 4);
                            t12 = (t12 + 0x3C);
                            t8 = (FUN_0c0db470(t12, (t15 + 0x24)));
                            t10 = 0xC0DC4C0;
                            t12 = 0x1;
                            t8 = (nlPopMatrix(t12));
                            t8 = (*(int *)((t15 + 0x8)));
                            if ((int)t8 >= 0) {
                                t8 = (t8 & 0x3);
                            } else {
                                t8 = (~t8);
                                t8 = (t8 + 0x1);
                                t8 = (t8 & 0x3);
                                t8 = (~t8);
                                t8 = (t8 + 0x1);
                            }
                            t56 = t8;
                            t8 = (t8 << 2);
                            t8 = (t8 << 1);
                            t14 = t13;
                            t8 = (t8 + t56);
                            t14 = (t14 << 1);
                            t14 = (t14 + t13);
                            t8 = (t8 << 2);
                            t10 = 0x1C;
                            t14 = (t14 + t8);
                            t9 = 0x0;
                            *(unsigned int *)(((int)stk + 4)) = t9;
                            t14 = (t14 * t10);
                            t14 = (t14 + (0x9C4 + a4));
                            for (;;) {
                                t8 = 0x24;
                                *(unsigned int *)((t14 + 0x18)) = 0x28;
                                u17 = (*(float *)((t15 + t8)));
                                *(float *)((t14 + 0x0)) = u17;
                                t8 = 0x28;
                                u17 = (*(float *)((t15 + t8)));
                                t8 = 0x4;
                                *(float *)((t14 + t8)) = u17;
                                t8 = 0x2C;
                                u17 = (*(float *)((t15 + t8)));
                                t8 = 0x8;
                                *(float *)((t14 + t8)) = u17;
                                t8 = (FUN_0c0da2e0());
                                t8 = (t8 & 0x7FFF);
                                t65 = t8;
                                t8 = 0xC;
                                u17 = (float)t65;
                                u17 = (u17 * 0.5f);
                                u17 = (u17 / 32767.0f);
                                u17 = (u17 + -0.25f);
                                *(float *)((t14 + t8)) = u17;
                                t8 = (FUN_0c0da2e0());
                                t8 = (t8 & 0x7FFF);
                                t67 = t8;
                                t8 = 0x10;
                                u17 = (float)t67;
                                u17 = (u17 * 0.5f);
                                u17 = (u17 / 32767.0f);
                                u17 = (u17 + -0.25f);
                                *(float *)((t14 + t8)) = u17;
                                t8 = (FUN_0c0da2e0());
                                t8 = (t8 & 0x7FFF);
                                t10 = 0x3;
                                t69 = t8;
                                t8 = 0x14;
                                u17 = (float)t69;
                                u17 = (u17 * 0.5f);
                                u17 = (u17 / 32767.0f);
                                u17 = (u17 + -0.25f);
                                *(float *)((t14 + t8)) = u17;
                                t70 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t70 + 0x1);
                                t14 = (t14 + 0x1C);
                                if ((int)(t70 + 0x1) >= (int)t10) {
                                    break;
                                }
                            }
                            t14 = t13;
                            t14 = (t14 << 1);
                            t10 = 0x8A4;
                            t14 = (t14 + t13);
                            t14 = (t14 << 2);
                            t10 = (t10 + a4);
                            t14 = (t14 << 1);
                            t14 = (t14 + t10);
                            *(unsigned int *)((t14 + 0x0)) = 0x14;
                            t8 = (FUN_0c0da2e0());
                            t10 = 0x4000;
                            t8 = (t8 & t10);
                            t8 = (-t8);
                            t8 = (t8 + 0xE000);
                            *(unsigned int *)((t14 + 0x10)) = t8;
                            t8 = (FUN_0c0da2e0());
                            t8 = (unsigned char)t8;
                            t75 = t8;
                            t8 = 0xC096918;
                            u16 = (*(float *)((t8 + 0x0)));
                            t8 = 0x14;
                            u17 = (float)t75;
                            u17 = (u17 / u16);
                            u17 = (u17 + 0.5f);
                            *(float *)((t14 + t8)) = u17;
                            t8 = 0x24;
                            u17 = (*(float *)((t15 + t8)));
                            t8 = 0x4;
                            *(float *)((t14 + t8)) = u17;
                            t8 = 0x28;
                            u17 = (*(float *)((t15 + t8)));
                            t8 = 0x8;
                            *(float *)((t14 + t8)) = u17;
                            t8 = 0x2C;
                            u17 = (*(float *)((t15 + t8)));
                            t8 = 0xC;
                            *(float *)((t14 + t8)) = u17;
                        }
                        t85 = t80;
                        t86 = t81;
                        t88 = t83;
                    }
                    t90 = t85;
                    t91 = t86;
                    t93 = t88;
                }
                t95 = t90;
                t96 = t91;
                t98 = t93;
            }
            t9 = t95;
            t10 = t96;
            t12 = t98;
            if ((int)(*(int *)((t15 + 0x0))) <= 0) {
                t156 = t9;
                t158 = t12;
                u159 = u16;
                u160 = u17;
            } else {
                t8 = 0x4;
                u16 = 0.0f;
                u17 = (*(float *)((t15 + t8)));
                if (u17 == u16) {
                    t156 = t9;
                    t158 = t12;
                    u153 = u16;
                    u154 = u17;
                } else {
                    t8 = 0x24;
                    u17 = (*(float *)((t15 + t8)));
                    t8 = 0x18;
                    u104 = *(float *)((t15 + t8));
                    t8 = 0x28;
                    t12 = ((int)stk + 4);
                    u106 = (u104 - u17);
                    u17 = (*(float *)((t15 + t8)));
                    t8 = 0x1C;
                    u107 = *(float *)((t15 + t8));
                    t8 = 0x2C;
                    u109 = (u107 - u17);
                    u17 = (*(float *)((t15 + t8)));
                    t8 = 0x20;
                    u110 = *(float *)((t15 + t8));
                    t8 = 0x28;
                    u111 = (u110 - u17);
                    u17 = u109;
                    u17 = (u17 * u109);
                    u112 = u17;
                    u112 = u112 + u106 * u106;
                    u17 = u112;
                    u113 = u17;
                    u113 = u113 + u111 * u111;
                    u17 = u113;
                    u17 = _builtin_sqrtf(u17);
                    *(float *)((((int)stk + 4) + t8)) = u17;
                    t12 = (t12 + 0x1C);
                    t8 = (FUN_0c0a7714(t12, (((int)stk + 4) + 0x20), u106, u109, u111));
                    t10 = 0xC0DC510;
                    t12 = 0x0;
                    t8 = (nlPushMatrix(t12));
                    t8 = 0x20;
                    u116 = *(float *)((t15 + t8));
                    t8 = 0x1C;
                    u117 = *(float *)((t15 + t8));
                    t8 = 0x18;
                    t8 = (FUN_0c0dcc70((*(float *)((t15 + t8))), u117, u116));
                    t12 = (*(int *)(((int)stk + 36)));
                    t8 = (nlRotateAY(t12));
                    t12 = (*(int *)(((int)stk + 32)));
                    t8 = (nlRotateAX(t12));
                    t10 = 0xC0DC950;
                    t12 = (*(int *)((t15 + 0x14)));
                    t8 = (nlRotateAZ(t12));
                    t8 = 0xC096934;
                    u17 = (*(float *)((t8 + 0x0)));
                    t8 = 0x28;
                    t8 = (nlScale(4.0f, 4.0f, ((*(float *)((((int)stk + 4) + t8))) * u17)));
                    t10 = 0xC0DC890;
                    t12 = 0x3FFF;
                    t8 = (nlRotateAY(t12));
                    t8 = 0xC09693C;
                    u17 = (*(float *)((t8 + 0x0)));
                    t8 = 0x28;
                    u131 = *(float *)((((int)stk + 4) + t8));
                    if (!((u131 * u17) > 4.0f)) {
                        u132 = 4.0f;
                    } else {
                        u132 = (u131 * u17);
                    }
                    t8 = (FUN_0c0de000(u132));
                    t10 = (*(int *)((t15 + 0x0)));
                    t8 = 0xC0969F4;
                    u16 = (*(float *)((t8 + 0x0)));
                    t8 = 0x14;
                    t137 = t10;
                    t10 = 0xC0848BC;
                    u17 = (float)t137;
                    u17 = (u17 / u16);
                    *(float *)((((int)stk + 4) + t8)) = u17;
                    t8 = (FUN_0c0848bc((((((struct o0_float *)0xC200AE8)->v)) * u17), (((((struct o4_float *)0xC200AE8)->v)) * u17), (((((struct o8_float *)0xC200AE8)->v)) * u17)));
                    t12 = 0x2B0;
                    t8 = (FUN_0c0c465c(t12));
                    t10 = 0xC0DC4C0;
                    t12 = 0x1;
                    t8 = (nlPopMatrix(t12));
                    t10 = (*(int *)((t15 + 0x0)));
                    if ((int)t10 > (int)(*(int *)(((int)stk + 48)))) {
                        *(unsigned int *)(((int)stk + 48)) = (*(int *)((t15 + 0x0)));
                        *(unsigned int *)(((int)stk + 8)) = t13;
                    }
                }
                u159 = u153;
                u160 = u154;
            }
            u16 = u159;
            u17 = u160;
            t9 = t156;
            t12 = t158;
            t13 = (t13 + 0x1);
            t10 = 0xC;
            *(unsigned int *)((t15 + 0x0)) = ((*(int *)((t15 + 0x0))) - 1);
            t15 = (t15 + 0x30);
            if ((int)t13 < (int)t10) continue;
            break;
        }
    }
    if ((int)(*(int *)(((int)stk + 8))) >= 0) {
        t177 = *(int *)(((int)stk + 8));
        t178 = (((struct oBC_int *)(t1))->v);
        *(unsigned int *)(((int)stk + 4)) = (((((t177 << 1) + t177) << 2) << 2) + (a4 + 0x44));
        nlGetAverageVector(((*(int *)(((int)stk + 4))) + 0x18), ((((((t177 << 1) + t177) << 2) << 2) + (a4 + 0x44)) + 0x24), (((((((t178 << 1) + t178) << 2) << 2) << 2) + 0xC23F268) + 0x84), 0.199999988f, 0.799999952f);
    } else {
        t183 = (((struct oBC_int *)(t1))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((t183 << 1) + t183) << 2) << 2) << 2) + 0xC23F268) + 0x84)) = *(struct mv3 *)((t1 + 0x30)); }
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((struct o3E4_int *)(t1))->v)));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0xD, 0.5f, (1.0f + 1.0f));
    FUN_0c0dbda0((((((struct o3E4_int *)(t1))->v)) + 0x280));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0xB, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x9, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x7, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0((((((struct o3E4_int *)(t1))->v)) + 0x2C0));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.5f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    FUN_0c0dbda0((((((struct o3E4_int *)(t1))->v)) + 0x340));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0xB, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x9, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x7, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0((((((struct o3E4_int *)(t1))->v)) + 0x380));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.5f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    t230 = (nlPopMatrix(0x1));
    t232 = 0x0;
    t233 = (0x284 + a4);
    u236 = 1.39999998f;
    for (;;) {
        if (((*(int *)((t233 + 0x18))) == 0) && ((t238 = *(int *)((a4 + 0x38)), t231 = 0xE, (int)t238 < (int)t231) && (t239 = *(int *)((a4 + 0x34)), t230 = t239, t230 == 0))) {
            t230 = (FUN_0c0da2e0());
            t230 = (t230 << 1);
            *(unsigned int *)(((int)stk + 8)) = t230;
            t230 = (FUN_0c0da2e0());
            t231 = 0xC0D9E90;
            t230 = (t230 << 1);
            *(unsigned int *)(((int)stk + 4)) = t230;
            *(unsigned int *)((t233 + 0x18)) = 0xE;
            t231 = 0xC0DA410;
            t230 = 0xC;
            *(float *)((t233 + t230)) = ((FUN_0c0d9e90((*(int *)(((int)stk + 8))))) * 4.0f);
            t230 = 0x10;
            *(float *)((t233 + t230)) = ((FUN_0c0da410((*(int *)(((int)stk + 8))))) * 4.0f);
            t230 = 0xC;
            t231 = 0xC0D9E90;
            u235 = (*(float *)((t233 + t230)));
            t230 = 0x14;
            u235 = (u235 * (FUN_0c0da410((*(int *)(((int)stk + 4))))));
            *(float *)((t233 + t230)) = u235;
            t230 = 0xC;
            t231 = (((int)stk + 4) + 0x3C);
            u235 = (*(float *)((t233 + t230)));
            t231 = (t231 + 0x8);
            u235 = (u235 * (FUN_0c0d9e90((*(int *)(((int)stk + 4))))));
            *(float *)((t233 + t230)) = u235;
            t254 = t231;
            *(int *)((int)stk + 0) = t254;
            t230 = (FUN_0c095f40(t1, (0x1 & t232), (((int)stk + 4) + 0x3C), ((((int)stk + 4) + 0x3C) + 0x4), t254));
            t230 = 0x4;
            u235 = ((((struct o3C_float *)(((int)stk + 4)))->v));
            *(float *)((t233 + 0x0)) = u235;
            u234 = (*(float *)(((((int)stk + 4) + 0x3C) + t230)));
            *(float *)((t233 + t230)) = u234;
            t230 = 0x8;
            u235 = (*(float *)(((((int)stk + 4) + 0x3C) + t230)));
            *(float *)((t233 + t230)) = u235;
        }
        t231 = (*(int *)((t233 + 0x18)));
        if (t231 != 0) {
            u235 = (*(float *)((t233 + 0x0)));
            u234 = 0.0f;
            if (u235 != u234) {
                t264 = *(int *)((t233 + 0x18));
                t230 = 0xC096CFC;
                t231 = 0xC0E5DC0;
                *(unsigned int *)(((int)stk + 4)) = t264;
                u234 = (*(float *)((t230 + 0x0)));
                t230 = 0x8;
                u235 = (float)t264;
                u236 = u235;
                u236 = (u236 / u234);
                u235 = 1.0f;
                u235 = (u235 - u236);
                u236 = (u236 * (1.0f + 1.0f));
                *(float *)((((int)stk + 4) + t230)) = u235;
                t230 = 0xE;
                t230 = ((int)((int)(((((*(int *)(((int)stk + 4))) << 8) << 2) << 2) << 2) / (int)t230));
                t268 = FUN_0c0da410(t230);
                t231 = 0xC0DC510;
                t230 = 0x10;
                *(float *)((((int)stk + 4) + t230)) = t268;
                t230 = (nlPushMatrix(0x0));
                t230 = 0x8;
                t231 = 0xC0DCC70;
                u270 = *(float *)((t233 + t230));
                t230 = 0x10;
                u271 = *(float *)((((int)stk + 4) + t230));
                t230 = 0x14;
                u235 = (*(float *)((t233 + t230)));
                t230 = 0x4;
                u273 = *(float *)((t233 + t230));
                t230 = 0x10;
                u274 = u270;
                u274 = u274 + u271 * u235;
                u235 = (*(float *)((t233 + t230)));
                t230 = 0xC;
                u277 = u273;
                u277 = u277 + u271 * u235;
                u235 = (*(float *)((t233 + t230)));
                u279 = (*(float *)((t233 + 0x0)));
                u279 = u279 + u271 * u235;
                t230 = (FUN_0c0dcc70(u279, u277, u274));
                t231 = 0xC0DC890;
                t230 = 0x3CE;
                t230 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 40))) + t230)))));
                t231 = 0xC0DC6E0;
                t230 = 0x3CC;
                t230 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 40))) + t230)))));
                t230 = 0xC096D18;
                t231 = 0xC0DCB80;
                u235 = (*(float *)((t230 + 0x0)));
                t230 = 0xC;
                u236 = (u236 + u235);
                *(float *)((((int)stk + 4) + t230)) = u236;
                t230 = (nlScale(u236, u236, u236));
                t231 = 0xC0DE000;
                t230 = 0xC;
                t230 = (FUN_0c0de000((*(float *)((((int)stk + 4) + t230)))));
                t231 = 0xC200AFC;
                t230 = 0x8;
                u235 = (*(float *)((((int)stk + 4) + t230)));
                u293 = *(float *)((t231 + 0x0));
                t231 = 0xC200AF4;
                t230 = (FUN_0c0848bc(((*(float *)((t231 + 0x0))) * u235), (((((struct o10_float *)0xC200AE8)->v)) * u235), (u293 * u235)));
                t231 = 0xC0C465C;
                t230 = (FUN_0c0c465c(0x291));
                t230 = (nlPopMatrix(0x1));
            } else {
                u300 = u234;
                u301 = u235;
            }
            u234 = u300;
            u235 = u301;
            t231 = (*(int *)((t233 + 0x18)));
            t231 = (t231 - 1);
            *(unsigned int *)((t233 + 0x18)) = t231;
        }
        t232 = (t232 + 0x1);
        t233 = (t233 + 0x1C);
        if ((int)t232 < (int)0x38) continue;
        break;
    }
    FUN_0c096094((0x9C4 + a4), 0x90);
    FUN_0c084800(0.799999952f, 0.799999952f, 1.0f);
    FUN_0c095fa0((0x8A4 + a4), 0xC);
    t320 = FUN_0c0849da();
    t311 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t311 - 1);
    if ((int)(t311 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = ((((struct o40_int *)(a4))->v));
        t313 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t313 + 0x1);
        t320 = 0x40;
        if ((int)(t313 + 0x1) > (int)0x32) {
            t320 = (FUN_0c0e19f2());
        }
    }
    return t320;
}

int FUN_0c0762da(int a4, int a5, int a6, int a7)
{
    int stk[19];
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t12;
    register float u113;
    register float u114;
    register float u35;
    register float u36;
    register float u38;
    register float u40;
    register float u41;
    register float u42;
    register int t71;
    register int t74;
    register int t81;
    register float u83;
    register int t85;
    register float u88;
    register int t94;
    register float u97;
    register int t98;
    register int t100;
    register float u102;
    register int t117;
    register int t118;
    register int t119;
    register int t120;
    register int t121;
    register float u122;
    register float u123;
    register float u131;
    register float u134;
    register float u135;
    register float u138;
    register float u139;
    register float u161;
    register float u164;
    register int t177;
    register int t179;
    register int t180;
    register int t181;
    register float u182;
    register float u189;
    register float u190;
    register int t185;
    register float u186;
    register int t193;
    register int t196;
    register int t214;
    register int t216;
    register int t217;
    register int t218;
    register int t219;
    register float u220;
    register float u221;
    register float u222;
    register float u223;
    register float u229;
    register float u230;
    register float u250;
    register int t268;
    register int t273;
    register float u274;
    register int t276;
    register float u277;
    register int t5;
    register int t7;
    register float u9;
    register float u10;
    register float u11;
    int t14;
    register int t15;
    register int t19;
    register float u20;
    register float u21;
    register int t112;
    register int t107;
    register float u108;
    register float u109;
    register float u72;
    register int t171;
    register float u172;
    register float u173;
    register float u188;
    float u194;
    register float u211;
    register float u212;
    register float u213;
    int t215;
    register float u265;
    register int t256;
    register int t257;
    register int t258;
    register float u259;
    register float u260;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    FUN_0c0685a4(a4, a5, a6, a7);
    t3 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t3 + 0x1);
    *(unsigned int *)(((int)stk + 8)) = ((t3 + 0x1) - 120);
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = 0xC076368;
    t6 = t5;
    t8 = 0xC0FE7AC;
    for (;;) {
        t12 = *(int *)(((int)stk + 12));
        if ((unsigned int)t12 < (unsigned int)0x6) {
            if (((*(int *)(((int)stk + 12))) == 0) && (t14 = *(int *)(((int)stk + 8)), t15 = *(int *)((t8 + 0x24)), t14 == t15)) {
                t6 = 0x532A9;
                t4 = (FUN_0c0cc3f8(t6, 0x0, 0x0, 0x0));
            } else {
                t19 = t6;
                u20 = u9;
                u21 = u10;
            }
            u9 = u20;
            u10 = u21;
            t6 = t19;
            u113 = u9;
            u114 = u10;
            if ((int)(*(int *)(((int)stk + 8))) < (int)(*(int *)((t8 + 0x24)))) {
                t112 = t6;
            } else {
                t6 = (*(int *)(((int)stk + 8)));
                t6 = (t6 - (*(int *)((t8 + 0x24))));
                if ((int)t6 >= (int)0x8) {
                    t107 = t6;
                    u108 = u9;
                    u109 = u10;
                } else {
                    t4 = 0xC0764AC;
                    u9 = (*(float *)((t4 + 0x0)));
                    t4 = 0xC0764B0;
                    u11 = 1.0f;
                    u10 = (float)t6;
                    u10 = (u10 * u9);
                    u11 = (u11 - u10);
                    u10 = (*(float *)((t4 + 0x0)));
                    t4 = 0x34;
                    *(float *)((((int)stk + 4) + t4)) = (u11 * u10);
                    t4 = (FUN_0c0848bc((u11 * u10), (u11 * u10), u11));
                    t6 = 0x0;
                    t4 = (nlPushMatrix(t6));
                    t4 = 0xC;
                    u10 = (*(float *)((t8 + t4)));
                    t4 = 0x10;
                    u35 = ((*(float *)((t8 + 0x0))) - u10);
                    u10 = (*(float *)((t8 + t4)));
                    t4 = 0x4;
                    t6 = ((int)stk + 4);
                    u36 = *(float *)((t8 + t4));
                    t4 = 0x14;
                    u38 = (u36 - u10);
                    u10 = (*(float *)((t8 + t4)));
                    t4 = 0x8;
                    u40 = ((*(float *)((t8 + t4))) - u10);
                    u10 = u38;
                    u10 = (u10 * u38);
                    u41 = u10;
                    u41 = u41 + u35 * u35;
                    u10 = u41;
                    u42 = u10;
                    u42 = u42 + u40 * u40;
                    u10 = u42;
                    u10 = _builtin_sqrtf(u10);
                    u11 = u10;
                    t6 = (t6 + 0x18);
                    t4 = (FUN_0c0a7714(t6, (((int)stk + 4) + 0x1C), u35, u38, u40));
                    t6 = t8;
                    t4 = (FUN_0c0dcca0(t6));
                    t6 = (*(int *)(((int)stk + 32)));
                    t4 = (nlRotateAY(t6));
                    t6 = (*(int *)(((int)stk + 28)));
                    t4 = (nlRotateAX(t6));
                    t4 = 0x18;
                    u10 = (*(float *)((t8 + t4)));
                    t4 = (nlScale(8.0f, 8.0f, (u11 * u10)));
                    t6 = (*(int *)((t8 + 0x1C)));
                    t4 = (nlRotateAY(t6));
                    t4 = 0x18;
                    u10 = (*(float *)((t8 + t4)));
                    u11 = (u11 * u10);
                    u10 = 1.0f;
                    u10 = (u10 + u10);
                    t4 = (FUN_0c0de000((u11 * u10)));
                    t6 = (*(int *)((t8 + 0x20)));
                    t4 = (FUN_0c0c465c(t6));
                    t6 = 0x1;
                    t4 = (nlPopMatrix(t6));
                    t6 = 0x0;
                    t4 = (nlPushMatrix(t6));
                    t6 = t8;
                    t6 = (t6 + 0xC);
                    t4 = (FUN_0c0dcca0(t6));
                    t4 = 0x3CE;
                    t6 = (*(int *)(((int)stk + 4)));
                    t6 = (*(short *)((t6 + t4)));
                    t4 = (nlRotateAY(t6));
                    t4 = 0x3CC;
                    t6 = (*(int *)(((int)stk + 4)));
                    t6 = (*(short *)((t6 + t4)));
                    t4 = (nlRotateAX(t6));
                    t4 = (nlScale(25.0f, 25.0f, 25.0f));
                    t7 = 0x2;
                    for (;;) {
                        if (t7 == 0) {
                            break;
                        }
                        t6 = 0x3176;
                        t4 = (nlRotateAZ(t6));
                        t4 = (FUN_0c0de000(25.0f));
                        t6 = 0x291;
                        t4 = (FUN_0c0c465c(t6));
                        t7 = (t7 - 1);
                    }
                    *(unsigned int *)(((int)stk + 12)) = 0x2;
                    t6 = 0x1;
                    t4 = (nlPopMatrix(t6));
                    t71 = 0x2;
                    for (;;) {
                        *(unsigned int *)(((int)stk + 16)) = t71;
                        if (t71 == 0) {
                            break;
                        }
                        t7 = (*(int *)((a4 + 0x34)));
                        t71 = a4;
                        t74 = (t7 * 0x1C);
                        t7 = (t7 + 0x1);
                        *(unsigned int *)((a4 + 0x34)) = t7;
                        t71 = (t71 + 0x38);
                        t4 = (*(int *)((a4 + 0x34)));
                        t7 = t74;
                        t7 = (t7 + t71);
                        if ((int)t4 >= (int)0x80) {
                            t71 = 0x0;
                            *(unsigned int *)((a4 + 0x34)) = t71;
                        }
                        t4 = (FUN_0c0da2e0());
                        t4 = (t4 & 0x1);
                        t4 = (t4 << 2);
                        u9 = (*(float *)((0xC0FE8A8 + t4)));
                        *(float *)(((int)stk + 0)) = u9;
                        t4 = (FUN_0c0da2e0());
                        t4 = (t4 & 0xFFF);
                        t81 = t4;
                        t4 = 0xC076628;
                        u72 = (*(float *)((t4 + 0x0)));
                        u10 = (float)t81;
                        u83 = u9;
                        u83 = u83 + u72 * u10;
                        u9 = u83;
                        *(unsigned int *)(((int)stk + 20)) = (int)u9;
                        t4 = (FUN_0c0da2e0());
                        t4 = (t4 & 0xFFF);
                        t85 = t4;
                        t4 = 0xC07662C;
                        u11 = (*(float *)((t4 + 0x0)));
                        t4 = 0xC076630;
                        u72 = (*(float *)((t4 + 0x0)));
                        u10 = (float)t85;
                        u88 = u11;
                        u88 = u88 + u72 * u10;
                        u11 = u88;
                        t6 = (*(int *)(((int)stk + 20)));
                        u72 = (FUN_0c0d9e90(t6));
                        u72 = (u72 * u11);
                        t4 = 0xC;
                        *(float *)((t7 + t4)) = u72;
                        t6 = (*(int *)(((int)stk + 20)));
                        u72 = (FUN_0c0da410(t6));
                        u72 = (u72 * u11);
                        t4 = 0x14;
                        *(float *)((t7 + t4)) = u72;
                        t4 = (FUN_0c0da2e0());
                        t4 = (t4 & 0xFFF);
                        t71 = t8;
                        t94 = t4;
                        t4 = 0xC07663C;
                        u9 = (*(float *)((t4 + 0x0)));
                        t4 = 0xC076640;
                        u72 = (*(float *)((t4 + 0x0)));
                        t4 = 0x10;
                        u10 = (float)t94;
                        t71 = (t71 + 0xC);
                        u97 = u9;
                        u97 = u97 + u72 * u10;
                        u9 = u97;
                        *(float *)((t7 + t4)) = u9;
                        t4 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(t71); }
                        t4 = 0x4;
                        t4 = (t4 + t7);
                        t98 = t4;
                        *(int *)((int)stk + 0) = t98;
                        t4 = (FUN_0c0da2e0());
                        t4 = (t4 & 0xFFF);
                        u9 = 1.0f;
                        t100 = t4;
                        t4 = 0xC076648;
                        u72 = (*(float *)((t4 + 0x0)));
                        u9 = (-u9);
                        u10 = (float)t100;
                        u102 = u9;
                        u102 = u102 + u72 * u10;
                        u9 = u102;
                        u10 = (*(float *)((t98 + 0x0)));
                        u10 = (u10 + u9);
                        *(float *)((t98 + 0x0)) = u10;
                        *(unsigned int *)((t7 + 0x18)) = 0x20;
                        t71 = (*(int *)(((int)stk + 16)));
                        t71 = (t71 - 1);
                    }
                }
                t112 = t107;
                u113 = u108;
                u114 = u109;
            }
            u9 = u113;
            u10 = u114;
            t6 = t112;
            t8 = (t8 + 0x28);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
            continue;
        }
        break;
    }
    t117 = 0xC076658;
    t118 = t12;
    t119 = t6;
    t120 = 0x0;
    t121 = (a4 + 0x38);
    u122 = u9;
    u123 = u10;
    for (;;) {
        if ((*(int *)((t121 + 0x18))) == 0) {
            t171 = t119;
            u172 = u122;
            u173 = u123;
        } else {
            t119 = t121;
            t117 = (nlAddVector(t119, (t121 + 0xC)));
            t117 = 0x10;
            u122 = (*(float *)((t121 + t117)));
            u123 = -0.0139999995f;
            u122 = (u122 + u123);
            *(float *)((t121 + t117)) = u122;
            t117 = 0xC;
            u122 = (*(float *)((t121 + t117)));
            u122 = (u122 * 0.939599991f);
            *(float *)((t121 + t117)) = u122;
            t117 = 0x14;
            *(float *)((t121 + t117)) = ((*(float *)((t121 + t117))) * 0.939599991f);
            t119 = 0x0;
            t117 = (nlPushMatrix(t119));
            t118 = 0xC0DB4D0;
            t119 = t121;
            t119 = (t119 + 0xC);
            t117 = (FUN_0c0db4d0(t119, (((int)stk + 4) + 0x3C)));
            t117 = 0x3C;
            u131 = *(float *)((((int)stk + 4) + t117));
            t117 = 0x40;
            t117 = (FUN_0c0d9dc0((*(float *)((((int)stk + 4) + t117))), u131));
            t117 = (short)t117;
            u123 = 0.0f;
            *(unsigned int *)(((int)stk + 12)) = t117;
            t117 = 0x3C;
            u134 = *(float *)((((int)stk + 4) + t117));
            u135 = (-u134);
            if (u134 > u123) {
                u135 = u134;
            }
            t117 = 0x40;
            u123 = 0.0f;
            u138 = *(float *)((((int)stk + 4) + t117));
            u139 = u138;
            if (!(u138 > u123)) {
                u139 = (-u138);
            }
            if (u135 > u139) {
                u123 = u135;
            } else {
                u123 = u139;
            }
            t117 = 0x28;
            *(float *)((((int)stk + 4) + t117)) = u123;
            t117 = 0xC07670C;
            u122 = (*(float *)((t117 + 0x0)));
            t119 = t121;
            if (u122 > u123) {
                t117 = 0xC07670C;
                u123 = (*(float *)((t117 + 0x0)));
                t117 = 0x28;
                *(float *)((((int)stk + 4) + t117)) = u123;
            }
            t117 = (FUN_0c0dcca0(t119));
            t117 = 0x3CE;
            t119 = (*(int *)(((int)stk + 4)));
            t119 = (*(short *)((t119 + t117)));
            t117 = (nlRotateAY(t119));
            t117 = 0x3CC;
            t119 = (*(int *)(((int)stk + 4)));
            t119 = (*(short *)((t119 + t117)));
            t117 = (nlRotateAX(t119));
            t119 = (*(int *)(((int)stk + 12)));
            t117 = (nlRotateAZ(t119));
            t117 = 0xC076718;
            u123 = (*(float *)((t117 + 0x0)));
            t117 = 0x28;
            u122 = (*(float *)((((int)stk + 4) + t117)));
            t117 = 0x20;
            u122 = (u122 * u123);
            *(float *)((((int)stk + 4) + t117)) = u122;
            t117 = (nlScale(u122, 1.0f, 1.0f));
            t119 = (t120 * 0x3769);
            t117 = (nlRotateAZ(t119));
            t118 = (*(int *)((t121 + 0x18)));
            t117 = 0x24;
            u123 = (float)t118;
            u123 = (u123 * 0.03125f);
            *(float *)((((int)stk + 4) + t117)) = u123;
            t117 = 0xC076720;
            u122 = (*(float *)((t117 + 0x0)));
            t117 = 0x30;
            *(float *)((((int)stk + 4) + t117)) = (u123 * u122);
            u161 = (u123 * u122);
            t117 = (FUN_0c0848bc((u161 + 0.299999982f), (u123 * u122), (u123 * 0.299999982f)));
            t117 = 0x20;
            u123 = (*(float *)((((int)stk + 4) + t117)));
            u164 = u123;
            if (1.0f > u123) {
                u164 = 1.0f;
            }
            t117 = (FUN_0c0de000(u164));
            t118 = 0xC0C465C;
            t119 = 0x293;
            t117 = (FUN_0c0c465c(t119));
            t119 = 0x1;
            t117 = (nlPopMatrix(t119));
            t118 = (*(int *)((t121 + 0x18)));
            t118 = (t118 - 1);
            *(unsigned int *)((t121 + 0x18)) = t118;
        }
        u122 = u172;
        u123 = u173;
        t119 = t171;
        t120 = (t120 + 0x1);
        t121 = (t121 + 0x1C);
        if ((int)t120 < (int)0x80) continue;
        break;
    }
    FUN_0c0849da();
    t177 = (int)((int)(*(int *)(((int)stk + 8))) / (int)0xA);
    *(unsigned int *)(((int)stk + 12)) = t177;
    t179 = (int)((int)(*(int *)(((int)stk + 8))) % (int)0xA);
    *(float *)(((int)stk + 60)) = ((float)t179 / 10.0f);
    t180 = *(int *)0xC0FF8F4;
    t181 = t177;
    u182 = ((float)t179 / 10.0f);
    if ((int)t177 >= (int)(t180 - 1)) {
        t181 = (t180 - 1);
        u182 = 0.0f;
    }
    *(float *)(((int)stk + 48)) = 1.0f;
    u189 = 10.0f;
    u190 = ((float)t179 / 10.0f);
    if ((int)(*(int *)(((int)stk + 8))) > (int)0x64) {
        t185 = *(int *)(((int)stk + 8));
        u186 = ((float)(t185 - 100) * 0.0166666657f);
        *(float *)(((int)stk + 48)) = (1.0f - u186);
        u188 = (1.0f - u186);
        u189 = 0.0166666657f;
        u190 = ((float)(t185 - 100) * 0.0166666657f);
    }
    t193 = *(int *)(((int)stk + 8));
    t214 = 0x2C;
    if (((int)(t193 - 5) >= 0) && (u194 = *(float *)(((int)stk + 48)), u194 > 0.0f)) {
        nlPushMatrix(0x0);
        t196 = (((struct o123C_int *)(a4))->v);
        (((struct o123C_uint *)(a4))->v) = (t196 + 0x1);
        if ((int)((((struct o123C_int *)(a4))->v)) >= (int)0xC0) {
            (((struct o123C_uint *)(a4))->v) = 0x0;
        }
        nlUnitMatrix();
        FUN_0c0c906c(0xC0FF8F0, 0xC0FF8FC, t181, (*(signed char *)((0xC0FFB8C + ((*(int *)0xC23A258) & 0x7)))), u182);
        FUN_0c0db840(((t196 * 0x1C) + (0x1240 + a4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((t196 * 0x1C) + (0x1240 + a4)) + 0xC)) = *(struct mv3 *)(0xC247C6C); }
        *(unsigned int *)((((t196 * 0x1C) + (0x1240 + a4)) + 0x18)) = 0x20;
        t214 = (nlPopMatrix(0x1));
    } else {
        t216 = 0x64;
        t217 = (t193 - 5);
        u211 = u188;
        u212 = u189;
        u213 = u190;
    }
    t218 = 0x0;
    t219 = (0x1240 + a4);
    u220 = u211;
    u221 = u212;
    u222 = u213;
    u223 = u182;
    for (;;) {
        if ((*(int *)((t219 + 0x18))) == 0) {
            u265 = u220;
        } else {
            t215 = 0x3BA3D70A;
            t214 = 0x10;
            u221 = (*(float *)((t219 + t214)));
            u222 = (*(float *)&(t215));
            u221 = (u221 + u222);
            *(float *)((t219 + t214)) = u221;
            t217 = t219;
            t214 = (nlAddVector(t217, (t219 + 0xC)));
            t217 = (*(int *)((t219 + 0x18)));
            u222 = (float)t217;
            u222 = (u222 * 0.03125f);
            u222 = (-u222);
            u222 = (u222 + 1.0f);
            t214 = 0xC0769C0;
            u221 = 0.299999982f;
            u229 = *(float *)((t214 + 0x0));
            t216 = 0x1C;
            t214 = 0x14;
            u230 = u221;
            u230 = u230 + u229 * u222;
            u221 = u230;
            *(float *)((((int)stk + 4) + t214)) = u221;
            if ((int)t217 > (int)t216) {
                t215 = (*(int *)((t219 + 0x18)));
                t214 = 0xC0769C4;
                u221 = (*(float *)((t214 + 0x0)));
                t215 = (t215 - 36);
                u222 = (float)t215;
                u222 = (u222 * u221);
                u222 = (-u222);
                u223 = u222;
                u223 = (u223 + 1.0f);
            } else {
                t215 = (*(int *)((t219 + 0x18)));
                t214 = 0xC0769C8;
                u221 = (*(float *)((t214 + 0x0)));
                u222 = (float)t215;
                u223 = u222;
                u223 = (u223 * u221);
            }
            t214 = 0xC0769CC;
            u222 = (*(float *)((t214 + 0x0)));
            if (u223 > u222) {
                u223 = u222;
            }
            t214 = 0x2C;
            u221 = 0.0f;
            u222 = (*(float *)((((int)stk + 4) + t214)));
            u223 = (u223 * u222);
            if (u223 > u221) {
                t217 = 0x0;
                t214 = (nlPushMatrix(t217));
                t216 = 0xC0DCCA0;
                t217 = t219;
                t214 = (FUN_0c0dcca0(t217));
                t214 = 0x3CE;
                t217 = (*(int *)(((int)stk + 4)));
                t217 = (*(short *)((t217 + t214)));
                t214 = (nlRotateAY(t217));
                t216 = 0xC0DC6E0;
                t214 = 0x3CC;
                t217 = (*(int *)(((int)stk + 4)));
                t217 = (*(short *)((t217 + t214)));
                t214 = (nlRotateAX(t217));
                t217 = 0x371F;
                t217 = (t218 * t217);
                t214 = (nlRotateAZ(t217));
                t214 = 0x14;
                t216 = 0xC0DCB80;
                u250 = *(float *)((((int)stk + 4) + t214));
                t214 = (nlScale(u250, u250, 1.0f));
                t216 = 0xC0DE000;
                t214 = 0x14;
                t214 = (FUN_0c0de000((*(float *)((((int)stk + 4) + t214)))));
                t217 = 0x246;
                t214 = (FUN_0c0c475c(t217, u223));
                t216 = 0xC0DC4C0;
                t217 = 0x1;
                t214 = (nlPopMatrix(t217));
            } else {
                t256 = t215;
                t257 = t216;
                t258 = t217;
                u259 = u221;
                u260 = u222;
            }
            u221 = u259;
            u222 = u260;
            t215 = t256;
            t216 = t257;
            t217 = t258;
            *(unsigned int *)((t219 + 0x18)) = ((*(int *)((t219 + 0x18))) - 1);
        }
        u220 = u265;
        t218 = (t218 + 0x1);
        t219 = (t219 + 0x1C);
        if ((int)t218 < (int)0xC0) continue;
        break;
    }
    FUN_0c0849da();
    t268 = *(int *)(((int)stk + 12));
    t273 = t268;
    u274 = (*(float *)(((int)stk + 60)));
    if ((int)t268 >= (int)((*(int *)0xC0FF8F4) - 1)) {
        t273 = ((*(int *)0xC0FF8F4) - 1);
        u274 = 0.0f;
    }
    t276 = t273;
    u277 = u274;
    if ((int)t273 < 0) {
        t276 = 0x0;
        u277 = 0.0f;
    }
    FUN_0c0c92b2(0xC0FF8F0, 0xC0FF8FC, t276, u277, 1.0f);
    return (FUN_0c0849da());
}

int FUN_0c0a163c(int a4, int a5, int a6, int a7)
{
    static const short part[10][4] = {
        {0x000, 0x48, 0, 0}, {0x0C0, 0x60, 1, 0}, {0x100, 0x78, 2, 1}, {0x180, 0x90, 3, 0}, {0x1C0, 0xA8, 4, 2},
        {0x240, 0x120, 9, 0}, {0x280, 0xC0, 5, 0}, {0x2C0, 0xD8, 6, 3}, {0x340, 0xF0, 7, 0}, {0x380, 0x108, 8, 4}
    };
    float v[3];
    float w[3];
    float u;
    int t0;
    int t17;
    int k;
    int j;
    int p;
    int r;

    t0 = *(int *)(a4 + 0x30);
    if ((*(int *)(t0 + 0xC8) & 1) == 0 && (*(int *)(t0 + 0x2EC) & 15) != 0) {
        *(int *)(a4 + 0x34) = 1;
    }
    if (*(int *)((*(int *)(t0 + 0xBC) << 2) + 0xC247030) == 0 || (*(int *)0xC23ED5C & 6) != 0) {
        *(int *)(t0 + 0x384) = 0;
        return FUN_0c0e19f2();
    }
    if (*(int *)(a4 + 0x34) == 0 && *(int *)(a4 + 0x38) >= 0) {
        t17 = *(int *)(a4 + 0x38);
        nlPushMatrix(0);
        for (k = 0; k < 10; k++) {
            FUN_0c0dbda0(*(int *)(t0 + 0x3E4) + part[k][0]);
            for (j = 0; j < 2; j++) {
                FUN_0c0a155c(t17, a4 + part[k][1] + j * 12, part[k][2], *(int *)(a4 + 0x44));
            }
            if (part[k][3] != 0) {
                if (*(int *)(a4 + 0x44) != 0) {
                    FUN_0c0975d0(t17, a4 + 0x138 + (part[k][3] - 1) * 0x50, 1, 0x24);
                } else {
                    FUN_0c097720(t17, a4 + 0x138 + (part[k][3] - 1) * 0x50, 1, 0x24);
                }
            }
            if (k != 0) {
                continue;
            }
            FUN_0c0dbda0(*(int *)(t0 + 0x3E4) + ((unsigned char)*(signed char *)(0xC10CE9A + ((unsigned int)FUN_0c0da2e0() % 3)) << 6));
            if (*(int *)(a4 + 0x38) < 0 || *(int *)(a4 + 0x38) > 0x24) {
                continue;
            }
            FUN_0c0db840((int)v);
            w[0] = v[0];
            w[1] = v[1];
            w[2] = v[2];
            p = ((t17 >= 0 ? (t17 & 0xF) : (~((~t17 + 1) & 0xF) + 1)) << 1) * 0x1C + a4 + 0x368;
            for (j = 0; j < 2; j++, p += 0x1C) {
                *(int *)(p + 0x18) = 0x28;
                *(float *)(p + 0x0) = w[0];
                *(float *)(p + 0x4) = w[1];
                *(float *)(p + 0x8) = w[2];
                for (r = 0xC; r <= 0x14; r += 4) {
                    u = (float)(FUN_0c0da2e0() & 0x7FFF);
                    u = u * 0.5f;
                    u = u / 32767.0f;
                    u = u + -0.25f;
                    *(float *)(p + r) = u;
                }
            }
            if (*(int *)(a4 + 0x38) < 0 || *(int *)(a4 + 0x38) > 0x24) {
                continue;
            }
            FUN_0c0db840((int)v);
            w[0] = v[0];
            w[1] = v[1];
            w[2] = v[2];
            p = (t17 % 10) * 24 + a4 + 0x278;
            *(int *)(p + 0x0) = 0x14;
            *(int *)(p + 0x10) = -(FUN_0c0da2e0() & 0x4000) + 0xE000;
            *(float *)(p + 0x14) = ((float)(unsigned char)FUN_0c0da2e0() / 512.0f) + 0.25f;
            for (j = 0; j < 3; j++) {
                u = w[j];
                u = u + 4.0f * ((float)(unsigned char)FUN_0c0da2e0() / 255.0f);
                *(float *)(p + 4 + j * 4) = u + -2.0f;
            }
        }
        nlPopMatrix(1);
    }
    if (*(int *)(a4 + 0x44) != 0) {
        FUN_0c096094(a4 + 0x368, 0x20);
        u = *(float *)0xC0A1CC0;
        FUN_0c084800(u, u, 1.0f);
    } else {
        FUN_0c0961f8(a4 + 0x368, 0x20);
        FUN_0c084800(1.0f, *(float *)0xC0A1CC4, 0.5f);
    }
    FUN_0c095fa0(a4 + 0x278, 0xA);
    r = FUN_0c0849da();
    if (--*(int *)(a4 + 0x3C) < 0) {
        *(int *)(a4 + 0x3C) = *(int *)(a4 + 0x40);
        r = 0x40;
        if (++*(int *)(a4 + 0x38) > 0x64) {
            *(int *)(t0 + 0x384) = 0;
            r = FUN_0c0e19f2();
        }
    }
    return r;
}
