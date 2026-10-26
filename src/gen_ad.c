/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0169da(int, int, int, int);
int FUN_0c050d40(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0be338(int, int);
extern int FUN_0c0be8d2();
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc720(void);
int FUN_0c0cee40(void);
int FUN_0c0cee9e(void);
int FUN_0c0cf3ec(void);
int FUN_0c0cf486(void);
int FUN_0c0cfb0e(int);
int FUN_0c0d1230(void);
int FUN_0c0d6254(int, int, int);
int FUN_0c0d6592(int, int);
int FUN_0c0d6e5a(int);
int FUN_0c0d6fae(int);
float FUN_0c0d7114(int, int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
float FUN_0c0dcda0(int, int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e5f1c(void);
int FUN_0c0e609c(void);
int FUN_0c0e61d4(void);
int FUN_0c0e6248(void);
int FUN_0c0d432e(int a4, int a5, int a6, float f4);
int FUN_0c0d07cc(int a4);
int FUN_0c053fac(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c017aca(int a4, int a5, int a6);

int FUN_0c0d432e(int a4, int a5, int a6, float f4)
{
    int t2;
    int t3;
    int t4;
    int t5;
    float u9;
    int t13;
    int t19;
    int t20;
    float u192;
    float u199;
    float u206;
    int t232;
    float t239;
    int t247;
    int t261;
    float u263;
    float u265;
    int t325;
    int t0;
    int t1;
    int t6;
    int t7;
    float u8;
    int t27;
    int t41;
    int t85;
    int t86;
    int t87;
    int t88;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t107;
    int t108;
    int t182;
    int t242;
    int t253;
    int t254;
    int t255;
    int t256;
    int t257;
    int t258;
    int t271;
    int t273;
    int t274;
    float u275;
    int t268;
    int t269;
    int t279;
    int t287;
    int t310;
    float u311;
    int t306;
    float u307;
    int t323;
    int t324;
    int t334;
    int t358;
    int t359;
    int t360;
    int t361;
    int t362;
    int t363;
    int t364;
    int t365;
    int t369;
    int t370;
    int t371;
    int t372;
    int t376;
    int t377;
    int t378;
    int t379;
    int t380;
    int t381;
    int t382;
    int t386;
    int t387;
    int t388;
    int t389;
    int t392;
    int t396;
    int t397;
    int t401;
    int t402;
    int stk[20];

    *(unsigned int *)(((int)stk + 36)) = 0xC943554;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    t2 = 0xC943554;
    t3 = a4;
    t4 = a5;
    t5 = a6;
    u9 = f4;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x2) {
            t3 = 0xC23A258;
            t1 = 0x1;
            t0 = 0x6C;
            t2 = (*(int *)((t3 + 0x0)));
            t3 = 0x1D4;
            t13 = (((*(int *)(((int)stk + 20))) + t2) & 0x1);
            t2 = t3;
            t7 = t13;
            t2 = (t2 - 116);
            t1 = (t1 - t13);
            *(unsigned int *)(((int)stk + 16)) = t13;
            t4 = (*(int *)(((int)stk + 36)));
            t7 = (t7 * t3);
            t4 = (t4 + t2);
            t7 = (t7 + t4);
            t1 = (t1 * t3);
            t4 = (t4 + t1);
            *(unsigned int *)(((int)stk + 8)) = t4;
            t6 = (*(int *)((t7 + t0)));
            t0 = 0x70;
            t2 = (*(int *)((t7 + t0)));
            *(unsigned int *)(((int)stk + 44)) = t2;
            t2 = 0xA4;
            *(unsigned int *)(((int)stk + 4)) = (t7 + 0x7C);
            t2 = (t2 + t7);
            *(unsigned int *)(((int)stk + 12)) = t2;
            t0 = 0x340;
            t5 = 0x0;
            t3 = 0xC20C0B4;
            t4 = t5;
            t19 = *(int *)((t6 + t0));
            t2 = t19;
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((t7 + 0x14)) = t19;
            t2 = (t2 + t3);
            t20 = *(signed char *)((t2 + 0x0));
            t2 = 0xC0D6254;
            *(unsigned int *)((t7 + 0x18)) = t20;
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
                t27 = t3;
            }
            t0 = 0xF4;
            t3 = t27;
            t2 = (*(int *)((t7 + t0)));
            *(unsigned int *)(((int)stk + 32)) = t2;
            t2 = 0xC0D6E5A;
            t3 = t7;
            t0 = (FUN_0c0d6e5a(t3));
            t2 = 0xC0D6254;
            t4 = 0x2;
            *(unsigned int *)(((int)stk + 28)) = t0;
            t5 = t0;
            t3 = t7;
            t0 = (FUN_0c0d6254(t3, t4, t5));
            t0 = 0x11C;
            t2 = 0xC0D6FAE;
            *(unsigned int *)(((int)stk + 40)) = (*(int *)((t7 + t0)));
            t3 = t7;
            t0 = (FUN_0c0d6fae(t3));
            t2 = 0xC0D6254;
            t4 = 0x3;
            *(unsigned int *)(((int)stk + 24)) = t0;
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
                t41 = t1;
            }
            t0 = (*(int *)((t6 + t0)));
            t1 = t41;
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
            if (((((int)t2 >= 0) ? (0x200000 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x200000 >> (-(int)t2 & 31)) : ((int)0x200000 >> 31))) & t1) != 0) {
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
            if (((t0 == 4) && (t85 = (t0 == 4), t0 = 0x48, t86 = *(int *)((t7 + t0)), t2 = t86, (int)t2 < (int)0x3)) || (t87 = (t0 == 4), t0 = 0x170, t88 = *(int *)((t7 + t0)), t2 = t88, t2 != 0)) {
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
                if (((t0 == 4) && ((t95 = (t0 == 4), t0 = 0x48, t96 = *(int *)((t7 + t0)), t96 == 0) || ((t97 = (t0 == 4), t0 = 0x40, t98 = *(int *)((t7 + t0)), t0 = t98, t0 == 4) && (t99 = (t0 == 4), t0 = 0x210, t100 = *(int *)((t6 + t0)), t100 != 0)))) || ((t101 = (t0 == 4), t0 = 0x198, t102 = *(int *)((t7 + t0)), t0 = t102, t0 != -3) || (t103 = *(int *)((t7 + 0x1C)), t3 = 0x1C1, (t103 & t3) == 0))) {
                    t0 = (*(int *)((t7 + 0x1C)));
                    t0 = (t0 | 0x20);
                    *(unsigned int *)((t7 + 0x1C)) = t0;
                }
                t0 = 0x198;
                t0 = (*(int *)((t7 + t0)));
                if ((t0 == -3) && (t107 = *(int *)((t7 + 0x1C)), t108 = (t0 == -3), t0 = t107, (t0 & 1) != 0)) {
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
                if (((((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31))) & t3) != 0) {
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
                t2 = (*(int *)(((*(int *)(((int)stk + 12))) + 0x20)));
                if ((int)t2 < (int)0xAAA) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x1);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (*(int *)(((int)stk + 12)));
                t4 = 0x11C7;
                if ((int)(*(int *)((t2 + 0x20))) < (int)t4) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x2);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (*(int *)(((int)stk + 12)));
                t3 = 0x1FFF;
                if ((int)(*(int *)((t2 + 0x20))) < (int)t3) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x4);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (*(int *)(((int)stk + 12)));
                t5 = 0x38E3;
                if ((int)(*(int *)((t2 + 0x20))) < (int)t5) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x8);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (*(int *)(((int)stk + 12)));
                t1 = (*(int *)((t2 + 0x20)));
                if ((int)t1 < (int)0x471C) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x8);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = (*(int *)(((int)stk + 4)));
                if ((int)(*(int *)((t2 + 0x20))) < (int)0xAAA) {
                    t1 = (*(int *)((t7 + 0x24)));
                    t1 = (t1 | 0x10);
                    *(unsigned int *)((t7 + 0x24)) = t1;
                }
                t2 = (*(int *)(((int)stk + 4)));
                if ((int)(*(int *)((t2 + 0x20))) < (int)t4) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x20);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x20)));
                if ((int)t2 < (int)t3) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x40);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = (*(int *)(((int)stk + 4)));
                if ((int)(*(int *)((t2 + 0x20))) < (int)t5) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x80);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t2 = 0x471C;
                t1 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x20)));
                if ((int)t1 < (int)t2) {
                    t0 = (*(int *)((t7 + 0x24)));
                    t0 = (t0 | 0x100);
                    *(unsigned int *)((t7 + 0x24)) = t0;
                }
                t182 = t5;
            }
            t0 = 0xC0D4738;
            t5 = t182;
            t2 = (*(int *)(((int)stk + 4)));
            u9 = (*(float *)((t0 + 0x0)));
            t0 = 0x14;
            u8 = (*(float *)((t2 + t0)));
            if (u9 > u8) {
                t2 = 0x200;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t2);
            }
            t0 = 0xC0D473C;
            t2 = (*(int *)(((int)stk + 4)));
            u192 = *(float *)((t0 + 0x0));
            t0 = 0x14;
            u8 = (*(float *)((t2 + t0)));
            if (u192 > u8) {
                t2 = 0x400;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t2);
            }
            t0 = 0xC0D4740;
            t2 = (*(int *)(((int)stk + 4)));
            u199 = *(float *)((t0 + 0x0));
            t0 = 0x14;
            u8 = (*(float *)((t2 + t0)));
            if (u199 > u8) {
                t3 = 0x800;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
            }
            t0 = 0xC0D47E4;
            t2 = (*(int *)(((int)stk + 4)));
            u206 = *(float *)((t0 + 0x0));
            t0 = 0x14;
            u8 = (*(float *)((t2 + t0)));
            if (u206 > u8) {
                t3 = 0x1000;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
            }
            t2 = (*(int *)(((int)stk + 4)));
            t0 = 0x14;
            u8 = (*(float *)((t2 + t0)));
            if (u9 > u8) {
                t3 = 0x2000;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
            } else {
                t1 = (*(int *)(((int)stk + 4)));
                t0 = 0x14;
                u8 = (*(float *)((t1 + t0)));
                if (u192 > u8) {
                    t3 = 0x4000;
                    *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                } else {
                    t1 = (*(int *)(((int)stk + 4)));
                    t0 = 0x14;
                    u8 = (*(float *)((t1 + t0)));
                    t232 = *(int *)((t7 + 0x24));
                    if (u199 > u8) {
                        t3 = 0x8000;
                    } else {
                        t3 = 0x10000;
                    }
                    *(unsigned int *)((t7 + 0x24)) = (t232 | t3);
                }
            }
            t0 = 0x6C;
            t2 = 0xC0D7114;
            t3 = (*(int *)((t7 + t0)));
            t4 = t6;
            t4 = (t4 + 0x30);
            t3 = (t3 + 0x30);
            t239 = FUN_0c0d7114(t3, t4);
            u8 = 0.0f;
            if (t239 != u8) {
                t2 = 0x200000;
                *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t2);
                t242 = t2;
            }
            t0 = 0xA0;
            t2 = t242;
            t1 = 0x471C;
            t0 = (*(int *)((t7 + t0)));
            if ((int)t0 < (int)t1) {
                t2 = 0x100;
                t247 = 0x800000;
                if (((*(int *)((t7 + 0x24))) & t2) != 0) {
                    t247 = 0x400000;
                }
                t0 = (*(int *)((t7 + 0x24)));
                t0 = (t0 | t247);
                *(unsigned int *)((t7 + 0x24)) = t0;
            }
            t2 = (*(int *)((t7 + 0x1C)));
            if (((t2 & 0x4) != 0) && ((t253 = *(int *)((t7 + 0x14)), t1 = t253, t0 = 0xC1FE3D0, t1 = (t1 << 2), t254 = *(int *)((t1 + t0)), t255 = ((t2 & 0x4) == 0), t2 = t254, t2 != 0) && (t0 = 0x6C, t256 = *(int *)((t7 + t0)), t257 = ((t2 & 0x4) == 0), t2 = t256, t0 = 0x32C, t258 = *(int *)((t2 + t0)), t1 = t258, (int)t1 < (int)0x2))) {
                t2 = 0xC0DA2E0;
                t0 = (FUN_0c0da2e0());
                t2 = (*(int *)(((int)stk + 16)));
                t1 = 0xC943530;
                t261 = t0;
                t0 = 0xC0D48CC;
                t2 = (t2 << 2);
                t2 = (t2 << 2);
                t2 = (t2 << 1);
                t1 = (t1 + t2);
                t2 = 0xC0E5F1C;
                u8 = (*(float *)((t1 + 0x0)));
                u8 = (-u8);
                u8 = (u8 + 1.0f);
                u263 = u8;
                u8 = 1.0f;
                u265 = u8;
                u265 = u265 + (*(float *)((t0 + 0x0))) * u263;
                u8 = u265;
                t0 = (int)u8;
                t1 = t261;
                t0 = (FUN_0c0e5f1c());
                if (t0 == 0) {
                    t2 = (*(int *)((t7 + 0x24)));
                    t3 = 0x1000000;
                    t2 = (t2 | t3);
                    *(unsigned int *)((t7 + 0x24)) = t2;
                    t268 = t2;
                    t269 = t3;
                }
                t273 = t268;
                t274 = t269;
            } else {
                t271 = t1;
                t273 = t2;
                u275 = u8;
            }
            u8 = u275;
            t0 = (*(int *)((t7 + 0x8)));
            t1 = t271;
            t2 = t273;
            t3 = t274;
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
                t279 = t4;
            }
            t0 = (*(int *)((t7 + 0x8)));
            t4 = t279;
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
            if (((t3 == 0) || (t0 = t3, t0 == 1)) && (t287 = *(int *)((t7 + 0x24)), t2 = 0x400, (t287 & t2) != 0)) {
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
                    u9 = (*(float *)((t0 + 0x0)));
                    t5 = (t5 + t4);
                    t3 = (t3 - t5);
                    t4 = (short)t3;
                    u8 = (float)t4;
                    u8 = _builtin_fabsf(u8);
                    if (u9 > u8) {
                        t3 = 0x8000000;
                        *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                    }
                    t306 = t5;
                    u307 = u9;
                }
                t310 = t306;
                u311 = u307;
            }
            u9 = u311;
            t0 = 0xAC;
            t5 = t310;
            t0 = (*(int *)((t6 + t0)));
            if (t0 == 4) {
                t0 = (*(int *)(((int)stk + 8)));
                t0 = (*(int *)((t0 + 0x1C)));
                t0 = (t0 & 0x40);
                t0 = (t0 | 0x80);
                if (t0 == 0) {
                    t3 = 0x10000000;
                    *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                }
                t0 = 0xAC;
                t0 = (*(int *)((t6 + t0)));
                if ((t0 == 4) && (t323 = *(int *)(((int)stk + 8)), t2 = 0x10000000, t324 = *(int *)((t323 + 0x24)), t1 = t324, (t1 & t2) == 0)) {
                    t2 = 0xC23A1A8;
                    t0 = 0x80000;
                    t325 = *(int *)(((int)stk + 16));
                    t1 = (*(int *)((t2 + 0x0)));
                    t0 = (((int)t325 >= 0) ? (t0 << (t325 & 31)) : ((-(int)t325 & 31) ? ((int)t0 >> (-(int)t325 & 31)) : ((int)t0 >> 31)));
                    if ((t0 & t1) == 0) {
                        t3 = 0x20000000;
                        *(unsigned int *)((t7 + 0x24)) = ((*(int *)((t7 + 0x24))) | t3);
                    }
                }
            }
            t2 = 0x0;
            *(unsigned int *)((t7 + 0x20)) = t2;
            if ((((*(int *)((t7 + 0x2C))) & 0x10) == 0) && (t0 = 0x10C, t1 = 0x2, t334 = *(int *)((t7 + t0)), t2 = t334, (int)t2 <= (int)t1)) {
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
                if (((t0 & 64) == 0) && ((t358 = *(int *)((t7 + 0x2C)), t359 = ((t0 & 64) == 0), t0 = t358, (t0 & 4) == 0) && ((t360 = *(int *)((t7 + 0x24)), t2 = t360, t2 == 0) && ((t361 = *(int *)(((int)stk + 8)), t362 = ((t0 & 64) == 0), t0 = t361, t363 = *(int *)((t0 + 0x1C)), t0 = t363, (t0 & 128) == 0) && ((t364 = *(int *)((t7 + 0x24)), t2 = 0x400000, (t364 & t2) != 0) && (t365 = *(int *)((t7 + 0x24)), t1 = t365, (t1 & 0x400) != 0)))))) {
                    t2 = (*(int *)((t7 + 0x20)));
                    t2 = (t2 | 0x8);
                    *(unsigned int *)((t7 + 0x20)) = t2;
                }
                if ((((*(int *)((t7 + 0x2C))) & 0x4) != 0) && (((t369 = *(int *)(((int)stk + 8)), t0 = t369, t370 = *(int *)((t0 + 0x1C)), t0 = t370, (t0 & 128) == 0) || (t371 = *(int *)((t7 + 0x14)), t0 = t371, t0 == 7)) && (t372 = *(int *)((t7 + 0x24)), t0 = t372, (t0 & 32) != 0))) {
                    *(unsigned int *)((t7 + 0x20)) = ((*(int *)((t7 + 0x20))) | 0x10);
                }
                t1 = (*(int *)((t7 + 0x24)));
                t2 = 0x400000;
                if (((t1 & t2) == 0) && ((t376 = *(int *)((t7 + 0x1C)), t0 = t376, (t0 & 128) == 0) && ((t377 = ((t1 & t2) == 0), t2 = 0x80, t378 = *(int *)((t7 + 0x24)), t3 = t378, (t2 & t3) == 0) || ((t379 = ((t1 & t2) == 0), t1 = 0x40, (t1 & t3) != 0) && (((0x800 & t3) != 0) && (t0 = 0x20C, t380 = *(int *)(((int)stk + 44)), t381 = ((t1 & t2) == 0), t1 = t380, t2 = 0x40182, t382 = *(int *)((t1 + t0)), (t382 & t2) != 0)))))) {
                    t0 = (*(int *)((t7 + 0x20)));
                    t0 = (t0 | 0x20);
                    *(unsigned int *)((t7 + 0x20)) = t0;
                }
                t2 = (*(int *)(((int)stk + 8)));
                if ((((*(int *)((t2 + 0x20))) & 0x10) != 0) || ((t386 = *(int *)(((int)stk + 8)), t0 = t386, t387 = *(int *)((t0 + 0x1C)), t0 = t387, (t0 & 128) == 0) && ((t388 = *(int *)((t7 + 0x24)), t2 = 0x800000, (t388 & t2) != 0) && (t389 = *(int *)((t7 + 0x24)), t1 = t389, (t1 & 0x400) != 0)))) {
                    t0 = (*(int *)((t7 + 0x20)));
                    t0 = (t0 | 0x40);
                    *(unsigned int *)((t7 + 0x20)) = t0;
                }
                t2 = 0x400000;
                if ((((*(int *)((t7 + 0x24))) & t2) != 0) && (t0 = 0x94, t392 = *(int *)((t7 + t0)), t0 = t392, (int)t0 > 0)) {
                    t0 = (*(int *)((t7 + 0x20)));
                    t0 = (t0 | 0x80);
                    *(unsigned int *)((t7 + 0x20)) = t0;
                }
            }
            t0 = 0x74;
            t2 = 0x0;
            *(unsigned int *)((t7 + 0x28)) = t2;
            t0 = (*(int *)((t7 + t0)));
            if ((t0 == 2) && (t396 = *(int *)(((int)stk + 28)), t2 = t396, t397 = *(int *)(((int)stk + 32)), t2 != t397)) {
                t2 = (*(int *)((t7 + 0x28)));
                t2 = (t2 | 0x1);
                *(unsigned int *)((t7 + 0x28)) = t2;
            }
            t0 = 0x74;
            t0 = (*(int *)((t7 + t0)));
            if ((t0 == 3) && (t401 = *(int *)(((int)stk + 24)), t2 = t401, t402 = *(int *)(((int)stk + 40)), t2 != t402)) {
                t2 = (*(int *)((t7 + 0x28)));
                t2 = (t2 | 0x2);
                *(unsigned int *)((t7 + 0x28)) = t2;
            }
            t0 = (*(int *)(((int)stk + 28)));
            if (t0 != -1) {
                *(unsigned int *)((t7 + 0x28)) = ((*(int *)((t7 + 0x28))) | 0x4);
            }
            t0 = (*(int *)(((int)stk + 24)));
            if (t0 != -1) {
                *(unsigned int *)((t7 + 0x28)) = ((*(int *)((t7 + 0x28))) | 0x8);
            }
            t2 = (*(int *)(((int)stk + 20)));
            t2 = (t2 + 0x1);
            *(unsigned int *)(((int)stk + 20)) = t2;
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c0d07cc(int a4)
{
    int t2;
    int t17;
    int t54;
    int t60;
    int t81;
    float t82;
    int t85;
    int t90;
    int t97;
    int t104;
    int t111;
    int t117;
    int t127;
    int t137;
    int t167;
    int t171;
    int t172;
    int t179;
    int t189;
    int t213;
    int t225;
    int t241;
    int t243;
    int t247;
    int t248;
    int t250;
    int t254;
    int t260;
    int t261;
    int t266;
    int t277;
    int t283;
    int t296;
    int t323;
    int stk[16];

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
    float F0;
    float F1;
    float F3;
    float F10;
    int T_;
    R4 = a4;
    L_C0D07CC:;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((((*(int *)0xC23A1BC) << 2) + 0xC246FF0) + 0x0)));
    t2 = *(int *)((R4 + 0x38));
    R0 = (t2);
    R10 = (0x1);
    R11 = (0x0);
    R12 = (0x2);
    R13 = (0xC246FF0);
    R14 = (R4);
    R8 = (0xC9433CC);
    R9 = (0xC23A1A8);
    if ((t2 == 0)) goto L_C0D0828;
    goto L_C0D0800;
    L_C0D0800:;
    if ((R0 == 1)) goto L_C0D0830;
    goto L_C0D0804;
    L_C0D0804:;
    if ((R0 == 2)) goto L_C0D088C;
    goto L_C0D0808;
    L_C0D0808:;
    if ((R0 == 3)) goto L_C0D08BC;
    goto L_C0D080C;
    L_C0D080C:;
    if ((R0 != 4)) goto L_C0D0814;
    goto L_C0D0810;
    L_C0D0810:;
    goto L_C0D0C24;
    L_C0D0C24:;
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) + 0x1);
    t17 = *(int *)((R8 + 0x0));
    R0 = (t17);
    if ((t17 != 1)) goto L_C0D0C74;
    goto L_C0D0C30;
    L_C0D0C30:;
    if (((*(int *)0xC23EDB0) != 0)) goto L_C0D0C68;
    goto L_C0D0C38;
    L_C0D0C38:;
    *(unsigned int *)((R14 + 0x4C)) = R10;
    *(unsigned int *)0xC23EDB0 = R10;
    R0 = (0x4C);
    goto L_C0D0F58;
    L_C0D0F58:;
    return R0;
    L_C0D0C68:;
    FUN_0c0cf486();
    R0 = ((FUN_0c0cf3ec()));
    goto L_C0D0C74;
    L_C0D0C74:;
    if (((*(int *)(((*(int *)0xC9433DC) + 0x38))) == 0)) goto L_C0D0C82;
    goto L_C0D0C7E;
    L_C0D0C7E:;
    goto L_C0D0F58;
    L_C0D0C82:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    if (((*(int *)((R8 + 0x0))) != 1)) goto L_C0D0C94;
    goto L_C0D0C8E;
    L_C0D0C8E:;
    FUN_0c0cf3ec();
    goto L_C0D0C94;
    L_C0D0C94:;
    if (((*(int *)0xC23EDB0) == 0)) goto L_C0D0CD8;
    goto L_C0D0C9C;
    L_C0D0C9C:;
    *(unsigned int *)((R14 + 0x50)) = ((*(int *)((R14 + 0x50))) + 0x1);
    if (((*(int *)((R14 + 0x4C))) == 0)) goto L_C0D0CBA;
    goto L_C0D0CAC;
    L_C0D0CAC:;
    if (((*(int *)((R14 + 0x50))) != 0xF0)) goto L_C0D0CBA;
    goto L_C0D0CB6;
    L_C0D0CB6:;
    *(unsigned int *)0xC23EDB0 = R11;
    goto L_C0D0CBA;
    L_C0D0CBA:;
    if (((int)(*(int *)((R14 + 0x50))) <= (int)0x3C)) goto L_C0D0CCC;
    goto L_C0D0CC4;
    L_C0D0CC4:;
    if ((((*(int *)0xC2498F4) & 8) != 0)) goto L_C0D0CD4;
    goto L_C0D0CCC;
    L_C0D0CCC:;
    if ((((*(int *)0xC23A1A8) & 16) == 0)) goto L_C0D0CD8;
    goto L_C0D0CD4;
    L_C0D0CD4:;
    *(unsigned int *)0xC23EDB0 = R11;
    goto L_C0D0CD8;
    L_C0D0CD8:;
    if (((*(int *)((R8 + 0x0))) != 1)) goto L_C0D0CEA;
    goto L_C0D0CDE;
    L_C0D0CDE:;
    if (((*(int *)0xC23EDB0) == 0)) goto L_C0D0CEA;
    goto L_C0D0CE6;
    L_C0D0CE6:;
    *(unsigned int *)((R14 + 0x48)) = R10;
    goto L_C0D0CEA;
    L_C0D0CEA:;
    if (((*(int *)((R14 + 0x48))) != 1)) goto L_C0D0CFE;
    goto L_C0D0CF2;
    L_C0D0CF2:;
    if (((*(int *)0xC23EDB0) != 0)) goto L_C0D0CFE;
    goto L_C0D0CFA;
    L_C0D0CFA:;
    *(unsigned int *)((R14 + 0x48)) = R12;
    goto L_C0D0CFE;
    L_C0D0CFE:;
    t54 = *(int *)((R9 + 0x0));
    R4 = ((t54 & 0x20));
    if (((t54 & 0x20) == 0)) goto L_C0D0D14;
    goto L_C0D0D08;
    L_C0D0D08:;
    if ((R4 == 0)) goto L_C0D0D6E;
    goto L_C0D0D0C;
    L_C0D0D0C:;
    if (((int)(*(int *)((R14 + 0x30))) <= (int)0x78)) goto L_C0D0D6E;
    goto L_C0D0D14;
    L_C0D0D14:;
    t60 = *(int *)((R8 + 0x0));
    R4 = (t60);
    if ((t60 != 1)) goto L_C0D0D2C;
    goto L_C0D0D1C;
    L_C0D0D1C:;
    if ((R4 != 1)) goto L_C0D0D6E;
    goto L_C0D0D24;
    L_C0D0D24:;
    if (((*(int *)((R14 + 0x48))) != 2)) goto L_C0D0D6E;
    goto L_C0D0D2C;
    L_C0D0D2C:;
    if ((R4 != 1)) goto L_C0D0D68;
    goto L_C0D0D34;
    L_C0D0D34:;
    R3 = (0xC23A1A8);
    if ((((*(int *)0xC23A1A8) & 32) == 0)) goto L_C0D0D68;
    goto L_C0D0D3C;
    L_C0D0D3C:;
    if ((((*(int *)((R3 + 0x0))) & 64) != 0)) goto L_C0D0D68;
    goto L_C0D0D42;
    L_C0D0D42:;
    *(unsigned int *)((R14 + 0x48)) = 0x4;
    *(unsigned int *)((R14 + 0x30)) = R11;
    goto L_C0D0D6E;
    L_C0D0D6E:;
    R0 = (0x48);
    if (((int)(*(int *)((R14 + 0x48))) >= (int)0x3)) goto L_C0D0D7C;
    goto L_C0D0D78;
    L_C0D0D78:;
    goto L_C0D0F58;
    L_C0D0D7C:;
    R0 = (0x44);
    if (((*(int *)((R14 + 0x44))) == 0)) goto L_C0D0D8C;
    goto L_C0D0D84;
    L_C0D0D84:;
    *(unsigned int *)((R14 + R0)) = ((*(int *)((R14 + R0))) - 1);
    goto L_C0D0F58;
    L_C0D0D8C:;
    if (((*(int *)((R14 + 0x48))) != 4)) goto L_C0D0DCE;
    goto L_C0D0D94;
    L_C0D0D94:;
    t81 = *(int *)0xC247CAC;
    t82 = FUN_0c0dcda0((0x254 + t81), (t81 + 0x260));
    F0 = (t82);
    if (((1.0f + 1.0f) > t82)) goto L_C0D0DC8;
    goto L_C0D0DAC;
    L_C0D0DAC:;
    t85 = *(int *)0xC23A1A8;
    R0 = (t85);
    if (((t85 & 32) == 0)) goto L_C0D0DBC;
    goto L_C0D0DB4;
    L_C0D0DB4:;
    if (((int)(*(int *)((R14 + 0x30))) > (int)0x3C)) goto L_C0D0DC8;
    goto L_C0D0DBC;
    L_C0D0DBC:;
    t90 = *(int *)0xC23A1A8;
    R0 = (t90);
    if (((t90 & 16) != 0)) goto L_C0D0DC8;
    goto L_C0D0DC4;
    L_C0D0DC4:;
    goto L_C0D0F58;
    L_C0D0DC8:;
    *(unsigned int *)((R14 + 0x3C)) = 0x4;
    goto L_C0D0E40;
    L_C0D0E40:;
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) + 0x1);
    goto L_C0D0F58;
    L_C0D0DCE:;
    R0 = (0xC2498F4);
    if ((((*(int *)0xC2498F4) & 0x1010) == 0)) goto L_C0D0DEA;
    goto L_C0D0DD8;
    L_C0D0DD8:;
    t97 = *(int *)((R14 + 0x3C));
    *(unsigned int *)((R14 + 0x3C)) = (t97 - 1);
    if (((int)(t97 - 1) >= 0)) goto L_C0D0E04;
    goto L_C0D0DE4;
    L_C0D0DE4:;
    *(unsigned int *)((R14 + 0x3C)) = 0x3;
    goto L_C0D0E04;
    L_C0D0E04:;
    FUN_0c0cc3f8(0x29A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    goto L_C0D0E0C;
    L_C0D0E0C:;
    if ((((*(int *)0xC2498F4) & 0x604) == 0)) goto L_C0D0E24;
    goto L_C0D0E16;
    L_C0D0E16:;
    FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) + 0x1);
    goto L_C0D0E24;
    L_C0D0E24:;
    t104 = *(int *)((R14 + 0x58));
    *(unsigned int *)((R14 + 0x58)) = (t104 + 0x1);
    R0 = (0x58);
    if (((int)(t104 + 0x1) >= (int)0x4650)) goto L_C0D0E36;
    goto L_C0D0E32;
    L_C0D0E32:;
    goto L_C0D0F58;
    L_C0D0E36:;
    *(unsigned int *)((R14 + 0x3C)) = 0x3;
    R0 = ((FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
    goto L_C0D0E40;
    L_C0D0DEA:;
    if ((((*(int *)((R0 + 0x0))) & 0x2020) == 0)) goto L_C0D0E0C;
    goto L_C0D0DF2;
    L_C0D0DF2:;
    t111 = *(int *)((R14 + 0x3C));
    *(unsigned int *)((R14 + 0x3C)) = (t111 + 0x1);
    if (((int)(t111 + 0x1) <= (int)0x3)) goto L_C0D0E04;
    goto L_C0D0E02;
    L_C0D0E02:;
    *(unsigned int *)((R14 + 0x3C)) = R11;
    goto L_C0D0E04;
    L_C0D0D68:;
    *(unsigned int *)((R14 + 0x48)) = 0x3;
    goto L_C0D0D6E;
    L_C0D0814:;
    if ((R0 != 5)) goto L_C0D081C;
    goto L_C0D0818;
    L_C0D0818:;
    goto L_C0D0C74;
    L_C0D081C:;
    if ((R0 != 6)) goto L_C0D0824;
    goto L_C0D0820;
    L_C0D0820:;
    goto L_C0D0E70;
    L_C0D0E70:;
    *(unsigned int *)((R9 + 0x0)) = ((*(int *)((R9 + 0x0))) & 0x21);
    FUN_0c0cc6dc();
    t117 = *(int *)((R14 + 0x3C));
    R0 = (t117);
    R4 = (0xC23ED54);
    if ((t117 == 0)) goto L_C0D0E96;
    goto L_C0D0E82;
    L_C0D0E82:;
    if ((R0 == 1)) goto L_C0D0EA8;
    goto L_C0D0E86;
    L_C0D0E86:;
    if ((R0 == 2)) goto L_C0D0EAC;
    goto L_C0D0E8A;
    L_C0D0E8A:;
    if ((R0 == 3)) goto L_C0D0EC8;
    goto L_C0D0E8E;
    L_C0D0E8E:;
    if ((R0 == 4)) goto L_C0D0ECE;
    goto L_C0D0E92;
    L_C0D0E92:;
    goto L_C0D0EFE;
    L_C0D0EFE:;
    if (((int)(*(int *)((R14 + 0x3C))) >= (int)0x3)) goto L_C0D0F36;
    goto L_C0D0F06;
    L_C0D0F06:;
    t127 = *(int *)0xC23A1BC;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((t127 << 2) + 0xC23EDC0)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t127 << 2) + 0xC23EDD0)));
    FUN_0c0169da((*(int *)0xC23A1BC), R5, R6, R7);
    *(unsigned int *)((((*(int *)0xC23A1BC) << 2) + 0xC23EDC0)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)((((*(int *)0xC23A1BC) << 2) + 0xC23EDD0)) = (*(int *)(((int)stk + 8)));
    goto L_C0D0F36;
    L_C0D0F36:;
    FUN_0c0cc720();
    return FUN_0c0d8c40(0x0, 0x0, 0x0);
    L_C0D0ECE:;
    t137 = *(int *)0xC9433A8;
    *(unsigned int *)0xC9433A8 = (t137 + 0x1);
    if (((t137 + 0x1) != 13)) goto L_C0D0EE4;
    goto L_C0D0EDE;
    L_C0D0EDE:;
    *(unsigned int *)((R9 + 0x0)) = ((*(int *)((R9 + 0x0))) | 0x6);
    goto L_C0D0EE4;
    L_C0D0EE4:;
    *(unsigned int *)((R4 + 0x0)) = (*(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB24)));
    goto L_C0D0EF4;
    L_C0D0EF4:;
    *(unsigned int *)0xC23ED44 = R10;
    *(unsigned int *)0xC23ED48 = 0x1F;
    goto L_C0D0EFE;
    L_C0D0EC8:;
    *(unsigned int *)0xC23A260 = R10;
    goto L_C0D0EFE;
    L_C0D0EAC:;
    *(unsigned int *)((R4 + 0x0)) = 0x5;
    *(unsigned int *)0xC23ED44 = R10;
    *(unsigned int *)0xC23ED48 = 0x1F;
    *(unsigned int *)(((0xC23EDE0 + ((*(int *)0xC23A1BC) << 2)) + 0x0)) = R10;
    goto L_C0D0EFE;
    L_C0D0EA8:;
    *(unsigned int *)((R4 + 0x0)) = R12;
    goto L_C0D0EF4;
    L_C0D0E96:;
    if ((((*(int *)((R9 + 0x0))) & 32) == 0)) goto L_C0D0EE4;
    goto L_C0D0E9C;
    L_C0D0E9C:;
    *(unsigned int *)0xC9433A8 = R11;
    *(unsigned int *)0xC9433C4 = R11;
    *(unsigned int *)((R8 + 0x0)) = R11;
    goto L_C0D0EE4;
    L_C0D0824:;
    goto L_C0D0F58;
    L_C0D08BC:;
    *(unsigned int *)(((int)stk + 24)) = R11;
    if (((*(int *)0xC23EDB0) != 0)) goto L_C0D08CC;
    goto L_C0D08C6;
    L_C0D08C6:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) + 0x1);
    goto L_C0D08CC;
    L_C0D08CC:;
    if (((*(int *)((R14 + 0x30))) != 4)) goto L_C0D08E8;
    goto L_C0D08D2;
    L_C0D08D2:;
    if (((*(int *)((R14 + 0x34))) != 0)) goto L_C0D08E8;
    goto L_C0D08D8;
    L_C0D08D8:;
    if (((*(int *)((0x394 + (*(int *)(((int)stk + 8)))))) == -1)) goto L_C0D08E8;
    goto L_C0D08E2;
    L_C0D08E2:;
    *(unsigned int *)((R14 + 0x34)) = R10;
    FUN_0c0cfb0e(0x1);
    goto L_C0D08E8;
    L_C0D08E8:;
    R6 = (0x230);
    if (((int)(*(int *)((R14 + 0x40))) >= (int)R12)) goto L_C0D099C;
    goto L_C0D08F2;
    L_C0D08F2:;
    R5 = (0x4);
    goto L_C0D0996;
    L_C0D0996:;
    if (((int)R5 < (int)0xC)) goto L_C0D08F6;
    goto L_C0D099C;
    L_C0D099C:;
    if (((*(int *)((R14 + 0x40))) != 0)) goto L_C0D09A8;
    goto L_C0D09A4;
    L_C0D09A4:;
    goto L_C0D0B8E;
    L_C0D0B8E:;
    if (((*(int *)(((R13 + 0x40) + ((*(int *)0xC23A1BC) << 2)))) != 7)) goto L_C0D0BAC;
    goto L_C0D0B9E;
    L_C0D0B9E:;
    *(unsigned int *)((R8 + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)0xC9433C4 = (*(int *)0xC9433C8);
    *(unsigned int *)(((int)stk + 24)) = R10;
    goto L_C0D0BAC;
    L_C0D0BAC:;
    t167 = *(int *)((R8 + 0x0));
    R0 = (t167);
    T_ = (((t167 == 2)));
    goto L_C0D0BB0;
    L_C0D0BB0:;
    if ((!T_)) goto L_C0D0BF0;
    goto L_C0D0BB2;
    L_C0D0BB2:;
    t171 = *(int *)0xC23A1BC;
    t172 = *(int *)((((R13 + 0x40) + (t171 << 2)) + 0x0));
    R0 = (t172);
    R4 = ((t171 << 2));
    if ((t172 != 4)) goto L_C0D0BEE;
    goto L_C0D0BC4;
    L_C0D0BC4:;
    R0 = (0xC247594);
    if (((int)(*(int *)((R4 + 0xC247594))) <= 0)) goto L_C0D0BEE;
    goto L_C0D0BCC;
    L_C0D0BCC:;
    t179 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((*(int *)((t179 + 0xBC))) << 2) + 0xC247594)) = R11;
    FUN_0c050d40(t179);
    *(unsigned int *)(((((*(int *)((t179 + 0xBC))) << 2) + (R13 + 0x40)) + 0x0)) = 0x5;
    R0 = (0xBC);
    goto L_C0D0BEE;
    L_C0D0BEE:;
    *(unsigned int *)(((int)stk + 24)) = R10;
    goto L_C0D0BF0;
    L_C0D0BF0:;
    if (((*(int *)(((int)stk + 24))) != 0)) goto L_C0D0BFA;
    goto L_C0D0BF6;
    L_C0D0BF6:;
    goto L_C0D0F58;
    L_C0D0BFA:;
    if (((*(int *)((R8 + 0x0))) != 1)) goto L_C0D0C16;
    goto L_C0D0C00;
    L_C0D0C00:;
    t189 = *(int *)((0xC20BB20 + ((*(int *)0xC9433A8) * 0x1C)));
    R0 = (t189);
    if (((t189 & 4) == 0)) goto L_C0D0C16;
    goto L_C0D0C12;
    L_C0D0C12:;
    goto L_C0D0F58;
    L_C0D0C16:;
    FUN_0c0d1230();
    *(unsigned int *)((R14 + 0x44)) = 0x2F;
    *(unsigned int *)((R14 + 0x30)) = R11;
    R0 = (0x44);
    goto L_C0D0E40;
    L_C0D09A8:;
    *(unsigned int *)(((int)stk + 4)) = R11;
    *(unsigned int *)(((int)stk + 28)) = R11;
    *(unsigned int *)(((int)stk + 12)) = 0xC9433BC;
    R4 = (0xC9433BC);
    R7 = (0xC9433B4);
    goto L_C0D09F0;
    L_C0D09F0:;
    if (((unsigned int)R7 < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C0D09B8;
    goto L_C0D09F6;
    L_C0D09F6:;
    *(unsigned int *)0xC9433AC = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 4)) = 0xC9433B4;
    *(unsigned int *)(((int)stk + 12)) = 0xC9433BC;
    R4 = (R11);
    R7 = (0xC9433BC);
    goto L_C0D0A74;
    L_C0D0A74:;
    if (((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C0D0A34;
    goto L_C0D0A7C;
    L_C0D0A7C:;
    *(unsigned int *)(((int)stk + 4)) = 0xC9433B4;
    *(unsigned int *)(((int)stk + 12)) = 0xC9433BC;
    R5 = (0xC9433BC);
    goto L_C0D0AC0;
    L_C0D0AC0:;
    if (((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C0D0A8A;
    goto L_C0D0AC8;
    L_C0D0AC8:;
    R4 = (0x10);
    R5 = (0x10);
    R7 = (0x10);
    goto L_C0D0ACE;
    L_C0D0ACE:;
    if (((int)(*(int *)((((R13 + 0x40) + R4) + 0x0))) < (int)R12)) goto L_C0D0B0C;
    goto L_C0D0ADA;
    L_C0D0ADA:;
    t213 = *(int *)(((R13 + R7) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t213;
    if ((((*(int *)((t213 + 0xC8))) & R6) == 0)) goto L_C0D0B0C;
    goto L_C0D0AEC;
    L_C0D0AEC:;
    if (((*(int *)((R5 + (R13 + 0x40)))) == 5)) goto L_C0D0B0C;
    goto L_C0D0AF8;
    L_C0D0AF8:;
    *(unsigned int *)(((int)stk + 28)) = R10;
    goto L_C0D0B18;
    L_C0D0B18:;
    R7 = (R11);
    if (((*(int *)(((int)stk + 28))) != 0)) goto L_C0D0B30;
    goto L_C0D0B20;
    L_C0D0B20:;
    *(unsigned int *)((R9 + 0x0)) = ((*(int *)((R9 + 0x0))) | R12);
    *(unsigned int *)((R8 + 0x0)) = R10;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x1B0)) = 0xFFFFFFFF;
    goto L_C0D0B30;
    L_C0D0B30:;
    R4 = (R11);
    R5 = (0x200);
    goto L_C0D0B34;
    L_C0D0B34:;
    *(unsigned int *)(((int)stk + 16)) = (0xC2460F4 + R4);
    t225 = *(int *)(((0xC2460F4 + R4) + 0x8));
    R6 = (t225);
    if ((t225 == 0)) goto L_C0D0B50;
    goto L_C0D0B40;
    L_C0D0B40:;
    if ((R6 == 4)) goto L_C0D0B50;
    goto L_C0D0B48;
    L_C0D0B48:;
    *(unsigned int *)((R14 + 0x5C)) = R11;
    R7 = (R10);
    goto L_C0D0B56;
    L_C0D0B56:;
    if ((R7 != 0)) goto L_C0D0B8E;
    goto L_C0D0B5A;
    L_C0D0B5A:;
    R0 = (0x5C);
    if (((*(int *)((R14 + 0x5C))) != 0)) goto L_C0D0B70;
    goto L_C0D0B62;
    L_C0D0B62:;
    R3 = (0x4);
    goto L_C0D0B74;
    L_C0D0B74:;
    *(unsigned int *)((R14 + R0)) = R3;
    if (((*(int *)((R14 + R0))) != 0)) goto L_C0D0B8E;
    goto L_C0D0B7C;
    L_C0D0B7C:;
    *(unsigned int *)((R9 + 0x0)) = ((*(int *)((R9 + 0x0))) | R12);
    *(unsigned int *)((R8 + 0x0)) = R10;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 24)) = R10;
    goto L_C0D0B8E;
    L_C0D0B70:;
    R3 = (((*(int *)((R14 + R0))) - 1));
    goto L_C0D0B74;
    L_C0D0B50:;
    t241 = (unsigned int)(R4 + 0x10) < (unsigned int)R5;
    R4 = ((R4 + 0x10));
    if (t241) goto L_C0D0B34;
    goto L_C0D0B56;
    L_C0D0B0C:;
    t243 = (unsigned int)(R4 + 0x4) < (unsigned int)0x30;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x4));
    R7 = ((R7 + 0x4));
    if (t243) goto L_C0D0ACE;
    goto L_C0D0B18;
    L_C0D0A8A:;
    t247 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t247 + 0x4);
    t248 = *(int *)((((t247 + 0x4) - 4) + 0x0));
    *(unsigned int *)(((int)stk + 20)) = t248;
    if ((t248 == -1)) goto L_C0D0ABE;
    goto L_C0D0A9A;
    L_C0D0A9A:;
    t250 = *(int *)(((int)stk + 20));
    R7 = ((t250 << 2));
    if (((int)(*(int *)((((R13 + 0x40) + (t250 << 2)) + 0x0))) < (int)R12)) goto L_C0D0ABE;
    goto L_C0D0AAA;
    L_C0D0AAA:;
    t254 = *(int *)(((R7 + R13) + 0x0));
    R7 = (t254);
    if (((*(int *)((t254 + 0x48C))) != (*(int *)((R5 + 0x0))))) goto L_C0D0ABE;
    goto L_C0D0ABA;
    L_C0D0ABA:;
    *(unsigned int *)((R7 + 0x5C4)) = R4;
    goto L_C0D0ABE;
    L_C0D0ABE:;
    R5 = ((R5 + 0x4));
    goto L_C0D0AC0;
    L_C0D0A34:;
    t260 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t260 + 0x4);
    t261 = *(int *)((((t260 + 0x4) - 4) + 0x0));
    R5 = (t261);
    if ((t261 == -1)) goto L_C0D0A72;
    goto L_C0D0A46;
    L_C0D0A46:;
    if (((int)(*(int *)((((R5 << 2) + (R13 + 0x40)) + 0x0))) < (int)R12)) goto L_C0D0A72;
    goto L_C0D0A56;
    L_C0D0A56:;
    t266 = *(int *)((((R5 << 2) + R13) + 0x0));
    R5 = (t266);
    if (((*(int *)((t266 + 0x48C))) != (*(int *)((R7 + 0x0))))) goto L_C0D0A72;
    goto L_C0D0A68;
    L_C0D0A68:;
    R0 = (0x5C4);
    if (((unsigned int)R4 >= (unsigned int)(*(int *)((R5 + 0x5C4))))) goto L_C0D0A72;
    goto L_C0D0A70;
    L_C0D0A70:;
    R4 = ((*(int *)((R5 + R0))));
    goto L_C0D0A72;
    L_C0D0A72:;
    R7 = ((R7 + 0x4));
    goto L_C0D0A74;
    L_C0D09B8:;
    t277 = *(int *)((R7 + 0x0));
    R5 = (t277);
    R7 = ((R7 + 0x4));
    if ((t277 == -1)) goto L_C0D09EE;
    goto L_C0D09C2;
    L_C0D09C2:;
    if (((int)(*(int *)((((R5 << 2) + (R13 + 0x40)) + 0x0))) < (int)R12)) goto L_C0D09EE;
    goto L_C0D09D2;
    L_C0D09D2:;
    t283 = *(int *)((((R5 << 2) + R13) + 0x0));
    R5 = (t283);
    if (((*(int *)((t283 + 0x48C))) != (*(int *)((R4 + 0x0))))) goto L_C0D09EE;
    goto L_C0D09E4;
    L_C0D09E4:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (*(int *)((R5 + 0x304))));
    goto L_C0D09EE;
    L_C0D09EE:;
    R4 = ((R4 + 0x4));
    goto L_C0D09F0;
    L_C0D08F6:;
    R4 = ((R5 << 2));
    if (((int)(*(int *)((((R13 + 0x40) + (R5 << 2)) + 0x0))) < (int)R12)) goto L_C0D0994;
    goto L_C0D0906;
    L_C0D0906:;
    t296 = (*(int *)(((R13 + R4) + 0x0)));
    R4 = (R11);
    R7 = t296;
    goto L_C0D092E;
    L_C0D092E:;
    if (((int)R4 >= (int)R12)) goto L_C0D093E;
    goto L_C0D0932;
    L_C0D0932:;
    if (((*(int *)(((R4 << 2) + 0xC9433B4))) != R5)) goto L_C0D092C;
    goto L_C0D093E;
    L_C0D093E:;
    if ((R4 != 2)) goto L_C0D0994;
    goto L_C0D0946;
    L_C0D0946:;
    if ((((*(int *)((R7 + 0xC8))) & R6) == 0)) goto L_C0D0994;
    goto L_C0D094E;
    L_C0D094E:;
    *(unsigned int *)((((*(int *)((R14 + 0x40))) << 2) + 0xC9433B4)) = R5;
    *(unsigned int *)((((*(int *)((R14 + 0x40))) << 2) + 0xC9433BC)) = (*(int *)((R7 + 0x48C)));
    *(unsigned int *)0xC9433B0 = ((*(int *)0xC9433B0) + (*(int *)((R7 + 0x308))));
    *(unsigned int *)((R14 + 0x40)) = ((*(int *)((R14 + 0x40))) + 0x1);
    *(unsigned int *)((R7 + 0x5C4)) = (*(int *)(((*(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB34))) + ((*(int *)0xC23A1B0) << 2))));
    goto L_C0D0994;
    L_C0D0994:;
    R5 = ((R5 + 0x1));
    goto L_C0D0996;
    L_C0D092C:;
    R4 = ((R4 + 0x1));
    goto L_C0D092E;
    L_C0D088C:;
    if (((int)(*(int *)0xC23ED50) < (int)(*(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB2C))))) goto L_C0D08BC;
    goto L_C0D08A2;
    L_C0D08A2:;
    *(unsigned int *)(((0x54 + R14) + 0x0)) = (FUN_0c0cee40());
    FUN_0c0cee9e();
    FUN_0c0cfb0e(0x2);
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) + 0x1);
    goto L_C0D08BC;
    L_C0D0830:;
    t323 = *(int *)((R14 + 0x38));
    *(unsigned int *)((R14 + 0x38)) = (t323 + 0x1);
    R0 = ((t323 + 0x1));
    goto L_C0D0F58;
    L_C0D0828:;
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) + 0x1);
    goto L_C0D0F58;
}

int FUN_0c053fac(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t2;
    int t4;
    int t61;
    int t64;
    int t68;
    float u72;
    int t14;
    int t15;
    int t50;
    int t52;
    float u58;
    int t35;
    int t36;
    int t39;
    int t42;
    int t45;
    float u46;
    float u47;
    int t49;
    int t40;
    int t41;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    float u82;
    float u83;
    float u84;
    float u86;
    int t88;
    float u158;
    float u154;
    int t108;
    int t109;
    float u125;
    float u126;
    float u128;
    float u131;
    int t134;
    int t143;
    int t140;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    float u167;
    float u168;
    float u169;
    float u171;
    int t173;
    float u243;
    float u239;
    int t193;
    int t194;
    float u210;
    float u211;
    float u213;
    float u216;
    int t219;
    int t228;
    int t225;
    int t277;
    int t261;
    int t267;
    int t315;
    int t318;
    float u323;
    int t332;
    int t345;
    int t346;
    int t347;
    int t348;
    int t349;
    int t350;
    float u351;
    int t354;
    int t355;
    int t356;
    int t357;
    int t358;
    int t359;
    int t360;
    float u364;
    float u365;
    float u366;
    float u370;
    float u374;
    int t375;
    int t390;
    int t403;
    float u407;
    int t391;
    int t392;
    int t393;
    float u394;
    float u395;
    float u396;
    int t409;
    int t410;
    int t411;
    int t422;
    int t424;
    int t512;
    int t515;
    float u520;
    int t529;
    int t542;
    int t543;
    int t544;
    int t545;
    int t546;
    int t547;
    float u548;
    int t551;
    int t552;
    int t553;
    int t554;
    int t555;
    int t556;
    int t557;
    float u561;
    float u562;
    float u563;
    float u567;
    float u571;
    int t572;
    int t587;
    int t600;
    float u604;
    int t588;
    int t589;
    int t590;
    float u591;
    float u592;
    float u593;
    int t606;
    int t607;
    int t608;
    int t619;
    int t621;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t62;
    int t69;
    float u70;
    float u71;
    int t20;
    int t21;
    int t24;
    float u26;
    int t51;
    int t56;
    float u57;
    float u59;
    int t37;
    int t247;
    int t249;
    float u85;
    float u87;
    int t98;
    int t99;
    int t100;
    int t112;
    int t113;
    int t114;
    int t118;
    int t119;
    float u120;
    float u121;
    float u122;
    float u150;
    int t142;
    float u170;
    float u172;
    int t183;
    int t184;
    int t185;
    int t197;
    int t198;
    int t199;
    int t203;
    int t204;
    float u205;
    float u206;
    float u207;
    float u235;
    int t227;
    int t271;
    int t678;
    int t463;
    int t294;
    float u328;
    int t340;
    int t342;
    int t343;
    int t336;
    int t337;
    int t382;
    float u384;
    float u386;
    float u361;
    float u362;
    float u363;
    int t660;
    int t491;
    float u525;
    int t537;
    int t539;
    int t540;
    int t533;
    int t534;
    int t579;
    float u581;
    float u583;
    float u558;
    float u559;
    float u560;
    int stk[48];

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0xBC)));
    t2 = 0xFFFFFFFF;
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        t2 = 0x0;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t4 = *(int *)0xC23A1A8;
    t61 = 0xC054004;
    t64 = 0x0;
    t68 = a6;
    u72 = f4;
    if (((((t4 & 0x100) == 0) && (t5 = *(short *)((a4 + 0xE8)), (int)t5 > 0)) || (((t4 & 0x100) != 0) && (t6 = *(short *)((a4 + 0xE8)), (int)t6 >= 0))) && ((t7 = *(short *)((a4 + 0xE8)), t8 = *(int *)((0xC247030 + (t7 << 2))), t8 == 4) && (t9 = *(int *)((((t7 << 2) + 0xC246FF0) + 0x0)), t10 = *(int *)((t9 + 0x20C)), (t10 & 0x88000) == 0))) {
        t14 = *(int *)((t9 + 0xC8));
        if ((t14 & 0x400) != 0) {
            t15 = *(int *)((a4 + 0xBC));
            t24 = t7;
            u26 = (FUN_0c0dcda0((((((((t15 << 1) + t15) << 2) << 2) << 2) + 0xC23F268) + 0xC), (((((((t7 << 1) + t7) << 2) << 2) << 2) + 0xC23F268) + 0xB4)));
        } else {
            t20 = t14;
            t21 = 0x400;
            t24 = (t7 << 2);
            u26 = (*(float *)(((t7 << 2) + (((((*(int *)(((int)stk + 16))) << 2) << 2) << 2) + 0xC247084))));
        }
        t50 = 0xC054130;
        t52 = t21;
        u58 = 35.0f;
        if (35.0f > u26) {
            FUN_0c0a7714((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x10), ((*(float *)((a4 + 0x30))) - (*(float *)((t9 + 0x30)))), ((*(float *)((a4 + 0x34))) - (*(float *)((t9 + 0x34)))), ((*(float *)((a4 + 0x38))) - (*(float *)((t9 + 0x38)))));
            t35 = *(int *)(((int)stk + 20));
            t36 = *(short *)((a4 + 0x6E));
            if (9216.0f > _builtin_fabsf((float)(short)(t36 - t35))) {
                *(unsigned int *)(((int)stk + 4)) = 0x1;
                t37 = 0x1;
            }
            t39 = *(int *)0xC23A1A8;
            t42 = 0xC054138;
            t45 = (short)(t36 - t35);
            u46 = 9216.0f;
            u47 = _builtin_fabsf((float)(short)(t36 - t35));
            t49 = 0;
            if ((t39 & 0x100) != 0) {
                t40 = *(int *)(((int)stk + 20));
                t41 = *(short *)((a4 + 0x6E));
                *(unsigned int *)(((int)stk + 4)) = (((4551.0f > _builtin_fabsf((float)(short)(t41 - t40)))) ? 1 : 0);
                t42 = (((4551.0f > _builtin_fabsf((float)(short)(t41 - t40)))) ? 1 : 0);
                t45 = t40;
                u46 = 4551.0f;
                u47 = _builtin_fabsf((float)(short)(t41 - t40));
                t49 = ((4551.0f > _builtin_fabsf((float)(short)(t41 - t40))));
            } else {
                t49 = (1);
            }
            t50 = t42;
            t52 = t37;
            t56 = t45;
            u57 = u46;
            u58 = u47;
        } else {
            t51 = t20;
            u59 = u26;
        }
        t61 = t50;
        t62 = t51;
        t64 = t52;
        t68 = t56;
        t69 = t24;
        u70 = u57;
        u71 = u58;
        u72 = u59;
    }
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        t74 = t61;
        t75 = t62;
        t76 = t64;
        t77 = t68;
        t78 = a7;
        t79 = t69;
        t80 = 0x4;
        t81 = t2;
        u82 = u70;
        u83 = u71;
        u84 = u72;
        u86 = 999.899963f;
        for (;;) {
            t88 = *(int *)(((int)stk + 16));
            if ((int)t80 < (int)0x10) {
                t74 = 0xBC;
                t76 = (*(int *)((a4 + t74)));
                u158 = u84;
                if (t80 != t76) {
                    t74 = 0xC246FF0;
                    t74 = (t74 + 0x40);
                    t74 = (*(int *)(((t80 << 2) + t74)));
                    u154 = u84;
                    if ((t74 == 4) && (t79 = 0xC246FF0, t79 = (t79 + (t80 << 2)), t98 = (t74 == 4), t74 = 0x20C, t99 = *(int *)((t79 + 0x0)), t79 = t99, t77 = 0x8C000, t100 = *(int *)((t79 + t74)), (t100 & t77) == 0)) {
                        t75 = (*(int *)(((int)stk + 4)));
                        if (t75 != 0) {
                            t74 = 0xC054218;
                            u85 = (*(float *)((t74 + 0x0)));
                        } else {
                            t74 = 0xC05421C;
                            u85 = (*(float *)((t74 + 0x0)));
                        }
                        t74 = 0xC8;
                        t76 = (*(int *)((t79 + t74)));
                        if ((t76 & 0x400) != 0) {
                            t74 = 0xBC;
                            t76 = t80;
                            t108 = *(int *)((a4 + t74));
                            t75 = 0xC23F268;
                            t109 = (((t80 << 1) + t76) << 2);
                            t76 = 0xB4;
                            u87 = (FUN_0c0dcda0((((((((t108 << 1) + t108) << 2) << 2) << 2) + t75) + 0xC), ((((t109 << 2) << 2) + t75) + t76)));
                        } else {
                            u87 = (*(float *)(((((((t88 << 2) << 2) << 2) + 0xC247084) + (t80 << 2)) + 0x0)));
                            t112 = t74;
                            t113 = t75;
                            t114 = t76;
                            t118 = t77;
                            t119 = t78;
                            u120 = u82;
                            u121 = u83;
                            u122 = u84;
                        }
                        u82 = u120;
                        u83 = u121;
                        u84 = u122;
                        t74 = t112;
                        t75 = t113;
                        t76 = t114;
                        t77 = t118;
                        t78 = t119;
                        if (u85 > u87) {
                            t74 = 0x38;
                            u83 = (*(float *)((t79 + t74)));
                            u125 = *(float *)((a4 + t74));
                            t74 = 0x34;
                            u126 = *(float *)((a4 + t74));
                            u128 = (u125 - u83);
                            u83 = (*(float *)((t79 + t74)));
                            t74 = 0x30;
                            u84 = (*(float *)((a4 + t74)));
                            u131 = (u126 - u83);
                            u83 = (*(float *)((t79 + t74)));
                            u84 = (u84 - u83);
                            t74 = (FUN_0c0a7714((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x10), u84, u131, u128));
                            t76 = (*(int *)(((int)stk + 4)));
                            t134 = 0x1800;
                            if (t76 != 0) {
                                t134 = 0x2400;
                            }
                            t76 = (*(int *)0xC23A1A8);
                            t143 = t134;
                            if ((t76 & 0x100) != 0) {
                                t75 = (*(int *)(((int)stk + 4)));
                                t140 = 0x1800;
                                if (t75 != 0) {
                                    t140 = 0x11C7;
                                }
                                t142 = t75;
                                t143 = t140;
                            }
                            t74 = 0x6E;
                            t75 = t142;
                            t78 = (*(short *)((a4 + t74)));
                            t78 = (t78 - (*(int *)(((int)stk + 20))));
                            t77 = (short)t78;
                            u83 = (float)t77;
                            u82 = (float)t143;
                            u83 = _builtin_fabsf(u83);
                            if ((u82 > u83) && (u86 > u87)) {
                                t81 = t80;
                                u86 = u87;
                            }
                        } else {
                            u150 = u84;
                        }
                        u154 = u150;
                    }
                    u158 = u154;
                }
                u84 = u158;
                t80 = (t80 + 0x1);
                continue;
            }
            break;
        }
        t247 = t81;
        t249 = ((((t88 << 2) << 2) << 2) + 0xC247084);
    } else {
        t159 = t61;
        t160 = t62;
        t161 = t64;
        t162 = t68;
        t163 = a7;
        t164 = t69;
        t165 = 0x0;
        t166 = t2;
        u167 = u70;
        u168 = u71;
        u169 = u72;
        u171 = 999.899963f;
        for (;;) {
            t173 = *(int *)(((int)stk + 16));
            if ((int)t165 < (int)0x10) {
                t159 = 0xBC;
                t161 = (*(int *)((a4 + t159)));
                u243 = u169;
                if (t165 != t161) {
                    t159 = 0xC246FF0;
                    t159 = (t159 + 0x40);
                    t159 = (*(int *)(((t165 << 2) + t159)));
                    u239 = u169;
                    if ((t159 == 4) && (t164 = 0xC246FF0, t164 = (t164 + (t165 << 2)), t183 = (t159 == 4), t159 = 0x20C, t184 = *(int *)((t164 + 0x0)), t164 = t184, t162 = 0x8C000, t185 = *(int *)((t164 + t159)), (t185 & t162) == 0)) {
                        t160 = (*(int *)(((int)stk + 4)));
                        if (t160 != 0) {
                            t159 = 0xC054218;
                            u170 = (*(float *)((t159 + 0x0)));
                        } else {
                            t159 = 0xC05421C;
                            u170 = (*(float *)((t159 + 0x0)));
                        }
                        t159 = 0xC8;
                        t161 = (*(int *)((t164 + t159)));
                        if ((t161 & 0x400) != 0) {
                            t159 = 0xBC;
                            t161 = t165;
                            t193 = *(int *)((a4 + t159));
                            t160 = 0xC23F268;
                            t194 = (((t165 << 1) + t161) << 2);
                            t161 = 0xB4;
                            u172 = (FUN_0c0dcda0((((((((t193 << 1) + t193) << 2) << 2) << 2) + t160) + 0xC), ((((t194 << 2) << 2) + t160) + t161)));
                        } else {
                            u172 = (*(float *)(((((((t173 << 2) << 2) << 2) + 0xC247084) + (t165 << 2)) + 0x0)));
                            t197 = t159;
                            t198 = t160;
                            t199 = t161;
                            t203 = t162;
                            t204 = t163;
                            u205 = u167;
                            u206 = u168;
                            u207 = u169;
                        }
                        u167 = u205;
                        u168 = u206;
                        u169 = u207;
                        t159 = t197;
                        t160 = t198;
                        t161 = t199;
                        t162 = t203;
                        t163 = t204;
                        if (u170 > u172) {
                            t159 = 0x38;
                            u168 = (*(float *)((t164 + t159)));
                            u210 = *(float *)((a4 + t159));
                            t159 = 0x34;
                            u211 = *(float *)((a4 + t159));
                            u213 = (u210 - u168);
                            u168 = (*(float *)((t164 + t159)));
                            t159 = 0x30;
                            u169 = (*(float *)((a4 + t159)));
                            u216 = (u211 - u168);
                            u168 = (*(float *)((t164 + t159)));
                            u169 = (u169 - u168);
                            t159 = (FUN_0c0a7714((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x10), u169, u216, u213));
                            t161 = (*(int *)(((int)stk + 4)));
                            t219 = 0x1800;
                            if (t161 != 0) {
                                t219 = 0x2400;
                            }
                            t161 = (*(int *)0xC23A1A8);
                            t228 = t219;
                            if ((t161 & 0x100) != 0) {
                                t160 = (*(int *)(((int)stk + 4)));
                                t225 = 0x1800;
                                if (t160 != 0) {
                                    t225 = 0x11C7;
                                }
                                t227 = t160;
                                t228 = t225;
                            }
                            t159 = 0x6E;
                            t160 = t227;
                            t163 = (*(short *)((a4 + t159)));
                            t163 = (t163 - (*(int *)(((int)stk + 20))));
                            t162 = (short)t163;
                            u168 = (float)t162;
                            u167 = (float)t228;
                            u168 = _builtin_fabsf(u168);
                            if ((u167 > u168) && (u171 > u172)) {
                                t166 = t165;
                                u171 = u172;
                            }
                        } else {
                            u235 = u169;
                        }
                        u239 = u235;
                    }
                    u243 = u239;
                }
                u169 = u243;
                t165 = (t165 + 0x1);
                continue;
            }
            break;
        }
        t247 = t166;
        t249 = ((((t173 << 2) << 2) << 2) + 0xC247084);
    }
    t277 = t247;
    if ((*(int *)(((int)stk + 4))) != 0) {
        t261 = *(int *)0xC23A1A8;
        if ((((t261 & 0x100) == 0) && (t247 != 0)) || (((t261 & 0x100) != 0) && ((int)t247 >= 0))) {
            t267 = t247;
            if ((*(float *)((t249 + (t247 << 2)))) > ((*(float *)((t249 + ((*(short *)((a4 + 0xE8))) << 2)))) + -2.0f)) {
                t267 = (*(short *)((a4 + 0xE8)));
            }
            t271 = t267;
        } else {
            t271 = (*(short *)((a4 + 0xE8)));
        }
        t277 = t271;
    }
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        if ((int)t277 <= 0) {
            *(unsigned int *)((a4 + 0xEC)) = 0x0;
            *(unsigned short *)((a4 + 0xEA)) = 0x0;
            t463 = 0xFFFFFFFF;
        } else {
            if ((*(short *)((a4 + 0xEA))) != (*(short *)((a4 + 0xE8)))) {
                *(unsigned int *)((a4 + 0xEC)) = 0x0;
                *(unsigned short *)((a4 + 0xEA)) = (*(short *)((a4 + 0xE8)));
            } else {
                if (((*(int *)((a4 + 0x338))) & 14) != 0) {
                    if (20.0f > (*(float *)((((*(short *)(((0xE8 + a4) + 0x0))) << 2) + (((((*(int *)((a4 + 0xBC))) << 2) << 2) << 2) + 0xC247084))))) {
                        t294 = ((*(int *)((a4 + 0xEC))) + 0x2);
                    } else {
                        t294 = ((*(int *)((a4 + 0xEC))) + 0x1);
                    }
                    *(unsigned int *)((a4 + 0xEC)) = t294;
                }
            }
            if (((*(int *)0xC23A1A8) & 0x4000) != 0) {
            } else {
                FUN_0c0848bc(1.0f, 1.0f, 1.0f);
                FUN_0c0dc510(0x0);
                FUN_0c0e61d4();
                FUN_0c0e61d4();
                FUN_0c0e609c();
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0xEC)));
                t315 = *(int *)((((t277 << 2) + 0xC246FF0) + 0x0));
                t318 = (t315 + 0x30);
                if (((*(int *)((t315 + 0xC8))) & 0x3FF) != 0) {
                    t318 = (((((((t277 << 1) + t277) << 2) << 2) << 2) + 0xC23F268) + 0xB4);
                }
                FUN_0c0dccc0();
                FUN_0c0dcca0(t318);
                u323 = *(float *)((t315 + 0x284));
                if (u323 > 1.0f) {
                    FUN_0c0dcb80(1.5f, 1.5f, 1.5f);
                    FUN_0c0de000(1.5f);
                } else {
                    u328 = u323;
                }
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x3C) {
                    *(unsigned int *)(((int)stk + 16)) = 0x2;
                    t340 = 0x2;
                } else {
                    t332 = *(int *)(((int)stk + 4));
                    if ((int)t332 >= (int)0x1E) {
                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                        t336 = 0x1;
                        t337 = ((*(int *)(((int)stk + 4))) - 30);
                    } else {
                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                        t336 = t332;
                        t337 = (*(int *)(((int)stk + 4)));
                    }
                    t340 = t336;
                    t342 = 0x1E;
                    t343 = t337;
                }
                t345 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 28)) = (t345 - 60);
                t346 = *(int *)(((int)stk + 16));
                if (t346 == 2) {
                    t347 = t346;
                    t348 = t340;
                    t349 = (t345 - 60);
                    t350 = 0x0;
                    u351 = u328;
                    for (;;) {
                        if ((unsigned int)t350 >= (unsigned int)0xC) {
                            break;
                        }
                        t347 = t350;
                        t349 = (((int)stk + 4) + 0x6C);
                        t348 = 0x18;
                        t349 = (t349 + t347);
                        t348 = (t348 + t349);
                        t349 = (((int)stk + 4) + 0x48);
                        u351 = (*(float *)((t348 + 0x0)));
                        t348 = 0x18;
                        t349 = (t349 + t347);
                        t348 = (t348 + t349);
                        *(float *)(((((int)stk + 4) + 0x2C) + t347)) = u351;
                        u351 = (*(float *)((t348 + 0x0)));
                        t350 = (t350 + 0x4);
                        *(float *)(((((int)stk + 4) + 0x20) + t347)) = u351;
                    }
                    t354 = *(int *)(((int)stk + 28));
                    *(unsigned int *)(((int)stk + 8)) = ((((((t354 << 2) << 2) + t354) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 32)) = ((((((t354 << 2) << 2) + t354) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 12)) = 0x4000;
                    t382 = (((int)stk + 4) + 0x48);
                } else {
                    t355 = *(int *)(((int)stk + 16));
                    *(unsigned int *)(((int)stk + 8)) = (((t355 << 1) + t355) << 2);
                    t356 = t346;
                    t357 = (((t355 << 1) + t355) << 2);
                    t358 = (t342 - t343);
                    t359 = (t345 - 60);
                    t360 = 0x0;
                    u364 = (float)(t342 - t343);
                    u365 = f4;
                    u366 = f5;
                    for (;;) {
                        if ((unsigned int)t360 >= (unsigned int)0xC) {
                            break;
                        }
                        t356 = t360;
                        t358 = (*(int *)(((int)stk + 8)));
                        t359 = ((int)stk + 4);
                        t359 = (t359 + 0x6C);
                        t358 = (t358 + t359);
                        u361 = (float)(t342 - t343);
                        t358 = (t358 + t356);
                        u364 = (float)t343;
                        t359 = 0xC;
                        t357 = t358;
                        t359 = (t359 + t357);
                        *(unsigned int *)(((int)stk + 12)) = t358;
                        u363 = (*(float *)((t359 + 0x0)));
                        t359 = ((int)stk + 4);
                        u366 = u364;
                        u362 = (float)t342;
                        u363 = (u363 * u364);
                        u364 = (*(float *)((t358 + 0x0)));
                        t359 = (t359 + 0x48);
                        u370 = u363;
                        u370 = u370 + u361 * u364;
                        u363 = u370;
                        u365 = u362;
                        u363 = (u363 / u362);
                        *(float *)(((((int)stk + 4) + 0x2C) + t356)) = u363;
                        t358 = (*(int *)(((int)stk + 8)));
                        t358 = (t358 + t359);
                        t358 = (t358 + t356);
                        t359 = 0xC;
                        t357 = t358;
                        t359 = (t359 + t357);
                        *(unsigned int *)(((int)stk + 12)) = t358;
                        u364 = (*(float *)((t359 + 0x0)));
                        u364 = (u364 * u366);
                        u363 = (*(float *)((t358 + 0x0)));
                        t360 = (t360 + 0x4);
                        u374 = u364;
                        u374 = u374 + u361 * u363;
                        u364 = u374;
                        u364 = (u364 / u365);
                        *(float *)(((((int)stk + 4) + 0x20) + t356)) = u364;
                    }
                    t375 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 8)) = (t375 * 0x222);
                    *(unsigned int *)(((int)stk + 32)) = (-(t375 * 0x222));
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) >> 1);
                    t382 = t342;
                    u384 = u362;
                    u386 = u363;
                }
                t390 = *(int *)(((int)stk + 4));
                t403 = t382;
                u407 = _builtin_fabsf((float)(t390 - 60));
                if (5.0f > _builtin_fabsf((float)(t390 - 60))) {
                    t391 = *(int *)(((int)stk + 28));
                    t392 = 0x0;
                    t393 = t382;
                    u394 = u384;
                    u395 = u386;
                    u396 = (float)t391;
                    for (;;) {
                        if ((unsigned int)t392 >= (unsigned int)0xC) {
                            break;
                        }
                        t393 = t392;
                        t393 = (t393 + (((int)stk + 4) + 0x2C));
                        u396 = (*(float *)((t393 + 0x0)));
                        u395 = 1.0f;
                        u395 = (u395 - u396);
                        u396 = (float)t391;
                        u396 = _builtin_fabsf(u396);
                        u396 = (-u396);
                        u396 = (u396 + 5.0f);
                        u394 = (*(float *)((t393 + 0x0)));
                        u395 = (u395 * u396);
                        u395 = (u395 / 5.0f);
                        u394 = (u394 + u395);
                        u395 = 1.0f;
                        *(float *)((t393 + 0x0)) = u394;
                        t393 = t392;
                        t393 = (t393 + (((int)stk + 4) + 0x20));
                        u396 = (*(float *)((t393 + 0x0)));
                        t392 = (t392 + 0x4);
                        u394 = (*(float *)((t393 + 0x0)));
                        u395 = (u395 - u396);
                        u396 = (float)t391;
                        u396 = _builtin_fabsf(u396);
                        u396 = (-u396);
                        u396 = (u396 + 5.0f);
                        u395 = (u395 * u396);
                        u395 = (u395 / 5.0f);
                        u394 = (u394 + u395);
                        *(float *)((t393 + 0x0)) = u394;
                    }
                    t403 = t393;
                    u407 = u396;
                }
                t409 = ((int (*)(int, int, int))(FUN_0c0be8d2))(0x50, (((int)stk + 4) + 0x2C), t403);
                t410 = ((int (*)(int, int))(FUN_0c0be8d2))(0x51, (((int)stk + 4) + 0x2C));
                t411 = ((int (*)(int, int))(FUN_0c0be8d2))(0x52, (((int)stk + 4) + 0x20));
                FUN_0c0dc510(0x0);
                FUN_0c0dc890((*(int *)(((int)stk + 32))));
                FUN_0c0c47ae(0x51);
                FUN_0c0dc4c0(0x1);
                FUN_0c0dc510(0x0);
                FUN_0c0dc890((*(int *)(((int)stk + 8))));
                FUN_0c0c47ae(0x50);
                FUN_0c0dc890(0xFFFFE0F9);
                t422 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 8)) = (0x8000 - t422);
                *(unsigned int *)(((int)stk + 4)) = 0x4;
                t424 = (0x8000 - t422);
                for (;;) {
                    if ((*(int *)(((int)stk + 4))) == 0) {
                        break;
                    }
                    FUN_0c0dc890(0x4000);
                    FUN_0c0dc510(0x0);
                    FUN_0c0dc6e0((*(int *)(((int)stk + 12))));
                    FUN_0c0c47ae(0x52);
                    FUN_0c0dc4c0(0x1);
                    t424 = 0x2;
                    if ((int)(*(int *)(((int)stk + 16))) < (int)t424) {
                        FUN_0c0dc510(0x0);
                        FUN_0c0dc6e0((*(int *)(((int)stk + 8))));
                        FUN_0c0c47ae(0x52);
                        FUN_0c0dc4c0(0x1);
                    }
                    t424 = (*(int *)(((int)stk + 4)));
                    t424 = (t424 - 1);
                    *(unsigned int *)(((int)stk + 4)) = t424;
                }
                FUN_0c0dc4c0(0x1);
                FUN_0c0dc4c0(0x1);
                FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            }
            t463 = t277;
        }
        t678 = t463;
    } else {
        if ((int)t277 < 0) {
            *(unsigned int *)((a4 + 0xEC)) = 0x0;
            *(unsigned short *)((a4 + 0xEA)) = 0xFFFFFFFF;
            t660 = 0xFFFFFFFF;
        } else {
            if ((*(short *)((a4 + 0xEA))) != (*(short *)((a4 + 0xE8)))) {
                *(unsigned int *)((a4 + 0xEC)) = 0x0;
                *(unsigned short *)((a4 + 0xEA)) = (*(short *)((a4 + 0xE8)));
            } else {
                if (((*(int *)((a4 + 0x338))) & 14) != 0) {
                    if (20.0f > (*(float *)((((*(short *)(((0xE8 + a4) + 0x0))) << 2) + (((((*(int *)((a4 + 0xBC))) << 2) << 2) << 2) + 0xC247084))))) {
                        t491 = ((*(int *)((a4 + 0xEC))) + 0x2);
                    } else {
                        t491 = ((*(int *)((a4 + 0xEC))) + 0x1);
                    }
                    *(unsigned int *)((a4 + 0xEC)) = t491;
                }
            }
            if (((*(int *)0xC23A1A8) & 0x4000) != 0) {
            } else {
                FUN_0c0848bc(1.0f, 1.0f, 1.0f);
                FUN_0c0dc510(0x0);
                FUN_0c0e61d4();
                FUN_0c0e61d4();
                FUN_0c0e609c();
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0xEC)));
                t512 = *(int *)((((t277 << 2) + 0xC246FF0) + 0x0));
                t515 = (t512 + 0x30);
                if (((*(int *)((t512 + 0xC8))) & 0x3FF) != 0) {
                    t515 = (((((((t277 << 1) + t277) << 2) << 2) << 2) + 0xC23F268) + 0xB4);
                }
                FUN_0c0dccc0();
                FUN_0c0dcca0(t515);
                u520 = *(float *)((t512 + 0x284));
                if (u520 > 1.0f) {
                    FUN_0c0dcb80(1.5f, 1.5f, 1.5f);
                    FUN_0c0de000(1.5f);
                } else {
                    u525 = u520;
                }
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x3C) {
                    *(unsigned int *)(((int)stk + 16)) = 0x2;
                    t537 = 0x2;
                } else {
                    t529 = *(int *)(((int)stk + 4));
                    if ((int)t529 >= (int)0x1E) {
                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                        t533 = 0x1;
                        t534 = ((*(int *)(((int)stk + 4))) - 30);
                    } else {
                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                        t533 = t529;
                        t534 = (*(int *)(((int)stk + 4)));
                    }
                    t537 = t533;
                    t539 = 0x1E;
                    t540 = t534;
                }
                t542 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 28)) = (t542 - 60);
                t543 = *(int *)(((int)stk + 16));
                if (t543 == 2) {
                    t544 = t543;
                    t545 = t537;
                    t546 = (t542 - 60);
                    t547 = 0x0;
                    u548 = u525;
                    for (;;) {
                        if ((unsigned int)t547 >= (unsigned int)0xC) {
                            break;
                        }
                        t544 = t547;
                        t546 = (((int)stk + 4) + 0x6C);
                        t545 = 0x18;
                        t546 = (t546 + t544);
                        t545 = (t545 + t546);
                        t546 = (((int)stk + 4) + 0x48);
                        u548 = (*(float *)((t545 + 0x0)));
                        t545 = 0x18;
                        t546 = (t546 + t544);
                        t545 = (t545 + t546);
                        *(float *)(((((int)stk + 4) + 0x2C) + t544)) = u548;
                        u548 = (*(float *)((t545 + 0x0)));
                        t547 = (t547 + 0x4);
                        *(float *)(((((int)stk + 4) + 0x20) + t544)) = u548;
                    }
                    t551 = *(int *)(((int)stk + 28));
                    *(unsigned int *)(((int)stk + 8)) = ((((((t551 << 2) << 2) + t551) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 32)) = ((((((t551 << 2) << 2) + t551) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 12)) = 0x4000;
                    t579 = (((int)stk + 4) + 0x48);
                } else {
                    t552 = *(int *)(((int)stk + 16));
                    *(unsigned int *)(((int)stk + 8)) = (((t552 << 1) + t552) << 2);
                    t553 = t543;
                    t554 = (((t552 << 1) + t552) << 2);
                    t555 = (t539 - t540);
                    t556 = (t542 - 60);
                    t557 = 0x0;
                    u561 = (float)(t539 - t540);
                    u562 = f4;
                    u563 = f5;
                    for (;;) {
                        if ((unsigned int)t557 >= (unsigned int)0xC) {
                            break;
                        }
                        t553 = t557;
                        t555 = (*(int *)(((int)stk + 8)));
                        t556 = ((int)stk + 4);
                        t556 = (t556 + 0x6C);
                        t555 = (t555 + t556);
                        u558 = (float)(t539 - t540);
                        t555 = (t555 + t553);
                        u561 = (float)t540;
                        t556 = 0xC;
                        t554 = t555;
                        t556 = (t556 + t554);
                        *(unsigned int *)(((int)stk + 12)) = t555;
                        u560 = (*(float *)((t556 + 0x0)));
                        t556 = ((int)stk + 4);
                        u563 = u561;
                        u559 = (float)t539;
                        u560 = (u560 * u561);
                        u561 = (*(float *)((t555 + 0x0)));
                        t556 = (t556 + 0x48);
                        u567 = u560;
                        u567 = u567 + u558 * u561;
                        u560 = u567;
                        u562 = u559;
                        u560 = (u560 / u559);
                        *(float *)(((((int)stk + 4) + 0x2C) + t553)) = u560;
                        t555 = (*(int *)(((int)stk + 8)));
                        t555 = (t555 + t556);
                        t555 = (t555 + t553);
                        t556 = 0xC;
                        t554 = t555;
                        t556 = (t556 + t554);
                        *(unsigned int *)(((int)stk + 12)) = t555;
                        u561 = (*(float *)((t556 + 0x0)));
                        u561 = (u561 * u563);
                        u560 = (*(float *)((t555 + 0x0)));
                        t557 = (t557 + 0x4);
                        u571 = u561;
                        u571 = u571 + u558 * u560;
                        u561 = u571;
                        u561 = (u561 / u562);
                        *(float *)(((((int)stk + 4) + 0x20) + t553)) = u561;
                    }
                    t572 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 8)) = (t572 * 0x222);
                    *(unsigned int *)(((int)stk + 32)) = (-(t572 * 0x222));
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) >> 1);
                    t579 = t539;
                    u581 = u559;
                    u583 = u560;
                }
                t587 = *(int *)(((int)stk + 4));
                t600 = t579;
                u604 = _builtin_fabsf((float)(t587 - 60));
                if (5.0f > _builtin_fabsf((float)(t587 - 60))) {
                    t588 = *(int *)(((int)stk + 28));
                    t589 = 0x0;
                    t590 = t579;
                    u591 = u581;
                    u592 = u583;
                    u593 = (float)t588;
                    for (;;) {
                        if ((unsigned int)t589 >= (unsigned int)0xC) {
                            break;
                        }
                        t590 = t589;
                        t590 = (t590 + (((int)stk + 4) + 0x2C));
                        u593 = (*(float *)((t590 + 0x0)));
                        u592 = 1.0f;
                        u592 = (u592 - u593);
                        u593 = (float)t588;
                        u593 = _builtin_fabsf(u593);
                        u593 = (-u593);
                        u593 = (u593 + 5.0f);
                        u591 = (*(float *)((t590 + 0x0)));
                        u592 = (u592 * u593);
                        u592 = (u592 / 5.0f);
                        u591 = (u591 + u592);
                        u592 = 1.0f;
                        *(float *)((t590 + 0x0)) = u591;
                        t590 = t589;
                        t590 = (t590 + (((int)stk + 4) + 0x20));
                        u593 = (*(float *)((t590 + 0x0)));
                        t589 = (t589 + 0x4);
                        u591 = (*(float *)((t590 + 0x0)));
                        u592 = (u592 - u593);
                        u593 = (float)t588;
                        u593 = _builtin_fabsf(u593);
                        u593 = (-u593);
                        u593 = (u593 + 5.0f);
                        u592 = (u592 * u593);
                        u592 = (u592 / 5.0f);
                        u591 = (u591 + u592);
                        *(float *)((t590 + 0x0)) = u591;
                    }
                    t600 = t590;
                    u604 = u593;
                }
                t606 = ((int (*)(int, int, int))(FUN_0c0be8d2))(0x50, (((int)stk + 4) + 0x2C), t600);
                t607 = ((int (*)(int, int))(FUN_0c0be8d2))(0x51, (((int)stk + 4) + 0x2C));
                t608 = ((int (*)(int, int))(FUN_0c0be8d2))(0x52, (((int)stk + 4) + 0x20));
                FUN_0c0dc510(0x0);
                FUN_0c0dc890((*(int *)(((int)stk + 32))));
                FUN_0c0c47ae(0x51);
                FUN_0c0dc4c0(0x1);
                FUN_0c0dc510(0x0);
                FUN_0c0dc890((*(int *)(((int)stk + 8))));
                FUN_0c0c47ae(0x50);
                FUN_0c0dc890(0xFFFFE0F9);
                t619 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 8)) = (0x8000 - t619);
                *(unsigned int *)(((int)stk + 4)) = 0x4;
                t621 = (0x8000 - t619);
                for (;;) {
                    if ((*(int *)(((int)stk + 4))) == 0) {
                        break;
                    }
                    FUN_0c0dc890(0x4000);
                    FUN_0c0dc510(0x0);
                    FUN_0c0dc6e0((*(int *)(((int)stk + 12))));
                    FUN_0c0c47ae(0x52);
                    FUN_0c0dc4c0(0x1);
                    t621 = 0x2;
                    if ((int)(*(int *)(((int)stk + 16))) < (int)t621) {
                        FUN_0c0dc510(0x0);
                        FUN_0c0dc6e0((*(int *)(((int)stk + 8))));
                        FUN_0c0c47ae(0x52);
                        FUN_0c0dc4c0(0x1);
                    }
                    t621 = (*(int *)(((int)stk + 4)));
                    t621 = (t621 - 1);
                    *(unsigned int *)(((int)stk + 4)) = t621;
                }
                FUN_0c0dc4c0(0x1);
                FUN_0c0dc4c0(0x1);
                FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            }
            t660 = t277;
        }
        t678 = t660;
    }
    return t678;
}

int FUN_0c017aca(int a4, int a5, int a6)
{
    int t3;
    int t4;
    int t6;
    int t8;
    int t9;
    int t202;
    int t203;
    int t204;
    float u207;
    int t11;
    int t15;
    int t20;
    int t26;
    int t32;
    int t39;
    int t75;
    int t83;
    int t122;
    int t128;
    int t168;
    int t172;
    int t182;
    int t188;
    int t0;
    int t1;
    int t2;
    int t5;
    float u7;
    int t205;
    int t206;
    int t197;
    int t198;
    int t199;
    float u200;
    int t71;
    int t72;
    int t118;
    int t119;
    int t163;
    int t164;
    int t165;
    int stk[18];

    t3 = 0xC0F5240;
    t4 = a6;
    t6 = 0xC0F5240;
    for (;;) {
        t8 = *(short *)((t6 + 0x14));
        if (t8 != -1) {
            t1 = 0xC23ECE4;
            t9 = *(short *)((t6 + 0x14));
            t4 = (*(int *)((t1 + 0x0)));
            t0 = 0xE;
            t202 = t0;
            t203 = t1;
            t204 = t2;
            u207 = u7;
            if ((unsigned int)t9 >= (unsigned int)t0) {
                t205 = t3;
                t206 = t4;
            } else {
                t0 = (t9 << 1);
                switch (t0) {
                    case 0:
                    {
                        t3 = 0xC018450;
                        t11 = FUN_0c0e19aa(0xC018450, 0xB4, t4);
                        t5 = t11;
                        t3 = t11;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t197 = t0;
                    }
                        break;
                    case 2:
                    {
                        t3 = 0xC0186A4;
                        t15 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t15;
                        t3 = t15;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t197 = t0;
                    }
                        break;
                    case 4:
                    {
                        t3 = 0xC0186EC;
                        t20 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t20;
                        t3 = t20;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t197 = t0;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 6:
                    {
                        t3 = 0xC01874E;
                        t26 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t26;
                        t3 = t26;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t197 = t0;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 8:
                    {
                        t3 = 0xC0187CC;
                        t32 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t32;
                        t3 = t32;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t0 = 0x6E;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0xE)));
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t0 = 0x1DC;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x10)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x1E4)) = u7;
                        t197 = t0;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 10:
                    {
                        t3 = 0xC01885A;
                        t39 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t39;
                        t3 = t39;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t0 = 0x70;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0x10)));
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t0 = 0x1DC;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0xC)));
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = (*(int *)((t6 + 0x18)));
                            *(unsigned int *)(((int)stk + 4)) = t2;
                            t3 = 0x0;
                            FUN_0c0dc510(t3);
                            t2 = 0xC0DCCC0;
                            FUN_0c0dccc0();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            FUN_0c0dc950(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            t3 = ((int)stk + 4);
                            u7 = (*(float *)((t1 + 0x0)));
                            *(float *)(((int)stk + 20)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x4)));
                            *(float *)(((int)stk + 24)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x8)));
                            t2 = 0xC0DB470;
                            *(float *)(((int)stk + 28)) = u7;
                            t3 = (t3 + 0x10);
                            FUN_0c0db470(t3, (((int)stk + 4) + 0x4));
                            t1 = t5;
                            u7 = (*(float *)(((int)stk + 8)));
                            t1 = (t1 + 0x60);
                            t2 = t5;
                            *(float *)((t1 + 0x0)) = u7;
                            t2 = (t2 + 0x64);
                            u7 = (*(float *)(((int)stk + 12)));
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = t5;
                            u7 = (*(float *)(((int)stk + 16)));
                            t2 = (t2 + 0x68);
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = 0xC0DC4C0;
                            t3 = 0x1;
                            FUN_0c0dc4c0(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                            t71 = t1;
                        } else {
                            t1 = t5;
                            t2 = 0xC0E61D4;
                            t0 = t5;
                            t1 = (t1 + 0x30);
                            t0 = (t0 + 0x60);
                            FUN_0c0e61d4();
                            t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                            u7 = (float)t2;
                            u7 = (u7 * 0.099999994f);
                            t72 = t2;
                        }
                        t1 = t71;
                        t2 = t72;
                        *(float *)((t5 + 0x1E4)) = u7;
                        t198 = t1;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 12:
                    {
                        t3 = 0xC018918;
                        t75 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t75;
                        t3 = t75;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t0 = 0x6C;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0xC)));
                        t1 = 0x6E;
                        t1 = (t1 + t5);
                        t0 = 0x70;
                        *(unsigned short *)((t1 + 0x0)) = (*(short *)((t6 + 0xE)));
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0x10)));
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x1E4)) = u7;
                        t197 = t0;
                        t198 = t1;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 14:
                    {
                        t3 = 0xC018A38;
                        t83 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t83;
                        t3 = t83;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x6C);
                        FUN_0c0e6248();
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = (*(int *)((t6 + 0x18)));
                            *(unsigned int *)(((int)stk + 4)) = t2;
                            t3 = 0x0;
                            FUN_0c0dc510(t3);
                            t2 = 0xC0DCCC0;
                            FUN_0c0dccc0();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            FUN_0c0dc950(t3);
                            t2 = 0xC0DC890;
                            t3 = (*(short *)((t5 + 0x6E)));
                            FUN_0c0dc890(t3);
                            t2 = 0xC0DC6E0;
                            t3 = (*(short *)((t5 + 0x6C)));
                            FUN_0c0dc6e0(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            t3 = ((int)stk + 4);
                            u7 = (*(float *)((t1 + 0x0)));
                            *(float *)(((int)stk + 20)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x4)));
                            *(float *)(((int)stk + 24)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x8)));
                            t2 = 0xC0DB470;
                            *(float *)(((int)stk + 28)) = u7;
                            t3 = (t3 + 0x10);
                            FUN_0c0db470(t3, (((int)stk + 4) + 0x4));
                            t1 = t5;
                            u7 = (*(float *)(((int)stk + 8)));
                            t1 = (t1 + 0x60);
                            t2 = t5;
                            *(float *)((t1 + 0x0)) = u7;
                            t2 = (t2 + 0x64);
                            u7 = (*(float *)(((int)stk + 12)));
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = t5;
                            u7 = (*(float *)(((int)stk + 16)));
                            t2 = (t2 + 0x68);
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = 0xC0DC4C0;
                            t3 = 0x1;
                            FUN_0c0dc4c0(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                            t118 = t1;
                        } else {
                            t1 = t5;
                            t2 = 0xC0E61D4;
                            t0 = t5;
                            t1 = (t1 + 0x30);
                            t0 = (t0 + 0x60);
                            FUN_0c0e61d4();
                            t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                            u7 = (float)t2;
                            u7 = (u7 * 0.099999994f);
                            t119 = t2;
                        }
                        t1 = t118;
                        t2 = t119;
                        *(float *)((t5 + 0x228)) = u7;
                        *(float *)((t5 + 0x1E4)) = 1.0f;
                        t198 = t1;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 16:
                    {
                        t3 = 0xC01898C;
                        t122 = FUN_0c0e19aa(0xC01898C, 0x244, t4);
                        t5 = t122;
                        t3 = t122;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x6C);
                        FUN_0c0e6248();
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x1E4)) = u7;
                        t197 = t0;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 18:
                    {
                        t3 = 0xC018C7C;
                        t128 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t128;
                        t3 = t128;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x6C);
                        FUN_0c0e6248();
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0xB4)) = u7;
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = (*(int *)((t6 + 0x18)));
                            *(unsigned int *)(((int)stk + 4)) = t2;
                            t3 = 0x0;
                            FUN_0c0dc510(t3);
                            t2 = 0xC0DCCC0;
                            FUN_0c0dccc0();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            FUN_0c0dc950(t3);
                            t2 = 0xC0DC890;
                            t3 = (*(short *)((t5 + 0x6E)));
                            FUN_0c0dc890(t3);
                            t2 = 0xC0DC6E0;
                            t3 = (*(short *)((t5 + 0x6C)));
                            FUN_0c0dc6e0(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            t3 = ((int)stk + 4);
                            u7 = (*(float *)((t1 + 0x0)));
                            *(float *)(((int)stk + 20)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x4)));
                            *(float *)(((int)stk + 24)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x8)));
                            t2 = 0xC0DB470;
                            *(float *)(((int)stk + 28)) = u7;
                            t3 = (t3 + 0x10);
                            FUN_0c0db470(t3, (((int)stk + 4) + 0x4));
                            t1 = t5;
                            u7 = (*(float *)(((int)stk + 8)));
                            t1 = (t1 + 0x60);
                            t2 = t5;
                            *(float *)((t1 + 0x0)) = u7;
                            t2 = (t2 + 0x64);
                            u7 = (*(float *)(((int)stk + 12)));
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = t5;
                            u7 = (*(float *)(((int)stk + 16)));
                            t2 = (t2 + 0x68);
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = 0xC0DC4C0;
                            t3 = 0x1;
                            FUN_0c0dc4c0(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                            *(float *)((t5 + 0x228)) = u7;
                            t164 = t1;
                        } else {
                            t163 = t0;
                            t165 = t2;
                        }
                        t0 = t163;
                        t1 = t164;
                        t2 = t165;
                        *(float *)((t5 + 0x1E4)) = 1.0f;
                        t197 = t0;
                        t198 = t1;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 20:
                    {
                        t3 = 0xC018480;
                        t168 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t168;
                        t3 = t168;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t197 = t0;
                    }
                        break;
                    case 22:
                    {
                        t3 = 0xC0184E0;
                        t172 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t172;
                        t3 = t172;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = 0x1;
                            *(unsigned int *)((t5 + (t2 + 0x7F))) = t2;
                        } else {
                            t0 = 0x2;
                            *(unsigned int *)((t5 + (t0 + 0x7E))) = t0;
                        }
                        t197 = t0;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    case 24:
                    {
                        t3 = 0xC018550;
                        t182 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t182;
                        t3 = t182;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t197 = t0;
                        t199 = t2;
                        u200 = u7;
                    }
                        break;
                    default:
                    {
                        t3 = 0xC01860C;
                        t188 = FUN_0c0e19aa(t3, 0x54, t4);
                        t5 = t188;
                        t3 = t188;
                        FUN_0c0e19d0(t3);
                        t1 = 0xC017AD0;
                        t0 = t5;
                        t2 = 0xC0E61D4;
                        t0 = (t0 + 0x38);
                        *(unsigned int *)((t5 + 0x4)) = t1;
                        t1 = t6;
                        FUN_0c0e61d4();
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x44);
                        FUN_0c0e6248();
                        t0 = 0x4A;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (*(int *)((t6 + 0x18)));
                        *(unsigned int *)((t5 + 0x50)) = t2;
                        t3 = (*(short *)((t5 + 0x4A)));
                        t2 = 0xC0BE338;
                        t3 = (unsigned short)t3;
                        FUN_0c0be338(t3, (t5 + 0x30));
                    }
                        break;
                }
                t202 = t197;
                t203 = t198;
                t204 = t199;
                u207 = u200;
            }
            u7 = u207;
            t0 = t202;
            t6 = (t6 + 0x1C);
            t1 = t203;
            t2 = t204;
            t3 = t205;
            t4 = t206;
            continue;
        }
        break;
    }
    return t8;
}
