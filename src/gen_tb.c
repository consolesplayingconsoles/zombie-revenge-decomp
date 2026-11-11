/* Straight-line functions with calls and guards (batch gen_tb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a57b8(void);
int FUN_0c0a58d8(void);
int FUN_0c0b359e(int, int);
int FUN_0c0bd32e(void);
int FUN_0c0bd4ac(void);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0b8bcc(int a4, int a5, int a6, int a7, float f4);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };


int FUN_0c0b8bcc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[20];
    register int t0;
    register int t1;
    register int t8;
    register int t24;
    register int t27;
    register int t221;
    register int t266;
    register int t283;
    register int t284;
    register int t289;
    register int t290;
    register int t296;
    register int t322;
    register int t297;
    register int t298;
    register int t299;
    register int t306;
    register int t319;
    register int t335;
    register int t336;
    register int t337;
    register float u338;
    register int t346;
    register int t361;
    int t386;
    register int t404;
    register int t407;
    register int t408;
    register int t427;
    register int t433;
    register int t452;
    int t479;
    int t480;
    register int t481;
    int t531;
    register int t533;
    register int t534;
    register float u537;
    register int t563;
    int t579;
    int t585;
    register int t648;
    register int t649;
    register int t650;
    register int t652;
    int t36;
    register int t192;
    register int t83;
    int t84;
    int t96;
    register int t127;
    int t128;
    int t140;
    int t180;
    register int t216;
    int t199;
    int t204;
    register int t327;
    register int t331;
    register float u332;
    register float u326;
    register int t314;
    register int t316;
    register int t343;
    register int t350;
    int t355;
    int t380;
    register int t383;
    register int t384;
    register int t385;
    register int t389;
    register int t390;
    register int t391;
    register int t401;
    register float u402;
    register int t488;
    register int t489;
    register int t490;
    int t518;
    register int t526;
    register int t527;
    register int t528;
    register int t532;
    register float u535;
    register float u536;
    register int t542;
    register int t549;
    int t555;
    register int t561;
    register float u565;
    register int t566;
    register float u567;
    register int t568;
    register float u569;
    register float u570;
    register int t591;
    register float u593;
    register int t582;
    register int t583;
    register int t584;
    register int t588;
    register int t589;
    register int t590;
    int t664;
    register int t667;

    t0 = (((struct o98_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t1 = (((struct o84_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                t8 = (((struct oA4_int *)(a4))->v);
                (((struct oA4_uint *)(a4))->v) = (t8 - 1);
                if ((int)(t8 - 1) <= 0) {
                    (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) + 0x1);
                    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | ((int)0x1 << (int)t0));
                }
            }
        } else {
            if ((int)(*(int *)((((((t0 << 1) << 2) + 0xC249880) + 0x4) + 0x0))) < (int)0xFFFFFFC0) {
                t24 = (((struct oA8_int *)(a4))->v);
                (((struct oA8_uint *)(a4))->v) = (t24 + 0x1);
                if (t24 == 0) {
                    *(unsigned int *)(((int)stk + 16)) = 0xFFFFFFFF;
                }
            } else {
                if ((int)(*(int *)((((((t0 << 1) << 2) + 0xC249880) + 0x4) + 0x0))) > (int)0x40) {
                    t27 = (((struct oA8_int *)(a4))->v);
                    (((struct oA8_uint *)(a4))->v) = (t27 + 0x1);
                    if (t27 == 0) {
                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                    }
                } else {
                    (((struct oA8_uint *)(a4))->v) = 0x0;
                }
            }
            if (((*(int *)(((int)stk + 16))) != 0) && (t36 = (((struct o88_int *)(a4))->v), t36 == 2)) {
                (((struct oA0_uint *)(a4))->v) = ((((struct o9C_int *)(a4))->v));
                *(unsigned char *)((0xC24FB48 + ((((struct o9C_int *)(a4))->v)))) = 0xFFFFFFFF;
                for (;;) {
                    (((struct o9C_uint *)(a4))->v) = (((((struct o9C_int *)(a4))->v)) + (*(int *)(((int)stk + 16))));
                    if ((int)((((struct o9C_int *)(a4))->v)) < 0) {
                        (((struct o9C_uint *)(a4))->v) = 0x2;
                    }
                    if ((int)((((struct o9C_int *)(a4))->v)) > (int)0x3) {
                        (((struct o9C_uint *)(a4))->v) = 0x0;
                    }
                    if ((*(signed char *)((0xC24FB48 + ((((struct o9C_int *)(a4))->v))))) == -1) {
                        break;
                    }
                }
                *(unsigned char *)((0xC24FB48 + ((((struct o9C_int *)(a4))->v)))) = t0;
                FUN_0c0cc3f8(0x1731A9, (t0 << 1), 0xFFFFFFFF, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            } else {
                if ((((((struct o8_int *)0xC23A1A0)->v)) & 1) == 0) {
                    (((struct o8_uint *)0xC204994)->v) = 0x0;
                    if (t0 != 0) {
                        if ((((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 0x200) != 0) && ((t83 = *(int *)0xC2497B0, (t83 & 0x80000) != 0) && (t84 = (((struct o4_int *)0xC204994)->v), t84 != 0))) {
                            *(unsigned int *)(((t0 << 2) + 0xC23EDD0)) = 0x1;
                            (((struct o8_uint *)0xC204994)->v) = 0x1;
                            FUN_0c0bd4ac();
                            FUN_0c0a58d8();
                            t192 = 0x1;
                        } else {
                            t192 = 0x0;
                            if ((((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 0x606) != 0) && (t96 = *(int *)0xC2497B0, (t96 & 0x80000) != 0)) {
                                if (((((struct o4_int *)0xC204994)->v)) != 0) {
                                    FUN_0c0bd32e();
                                    FUN_0c0a57b8();
                                }
                                *(unsigned int *)(((t0 << 2) + 0xC23EDD0)) = 0x1;
                                t192 = 0x1;
                            }
                        }
                    } else {
                        if ((((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 0x200) != 0) && ((t127 = *(int *)0xC2497B0, (t127 & 8) != 0) && (t128 = (((struct o4_int *)0xC204994)->v), t128 != 0))) {
                            *(unsigned int *)(((t0 << 2) + 0xC23EDD0)) = 0x1;
                            (((struct o8_uint *)0xC204994)->v) = 0x1;
                            FUN_0c0bd4ac();
                            FUN_0c0a58d8();
                            t192 = 0x1;
                        } else {
                            t192 = 0x0;
                            if ((((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 0x606) != 0) && (t140 = *(int *)0xC2497B0, (t140 & 8) != 0)) {
                                if (((((struct o4_int *)0xC204994)->v)) != 0) {
                                    FUN_0c0bd32e();
                                    FUN_0c0a57b8();
                                }
                                *(unsigned int *)(((t0 << 2) + 0xC23EDD0)) = 0x1;
                                t192 = 0x1;
                            }
                        }
                    }
                } else {
                    t192 = 0x0;
                    if ((((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 0x604) != 0) && (t180 = *(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x4)), ((unsigned short)t180 & 8) != 0)) {
                        *(unsigned int *)(((t0 << 2) + 0xC23EDD0)) = 0x1;
                        t192 = 0x1;
                    }
                }
                if ((((((struct o8_int *)0xC23A1A0)->v)) & 1) == 0) {
                    t216 = 0x1;
                    if ((((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 0x606) == 0) && (t199 = *(short *)0xC24FB4E, t199 != 0)) {
                        t216 = t192;
                    }
                } else {
                    t216 = 0x1;
                    if ((((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 0x604) == 0) && (t204 = *(short *)0xC24FB4E, t204 != 0)) {
                        t216 = t192;
                    }
                    if (((unsigned short)(*(short *)(((((t0 << 2) << 2) + 0xC2497C0) + 0x8))) & 2) != 0) {
                        (((struct o8_uint *)0xC23A258)->v) = 0x1;
                    }
                }
                if (t216 != 0) {
                    *(unsigned int *)(((t0 << 2) + 0xC23EDE0)) = 0x4;
                    (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) + 0x1);
                    (((struct oA4_uint *)(a4))->v) = 0x78;
                    *(unsigned int *)(((t0 << 2) + 0xC23EDC0)) = (unsigned char)(*(signed char *)(((0xC1125C0 + ((((struct o9C_int *)(a4))->v))) + 0x0)));
                    *(unsigned char *)((((((struct o9C_int *)(a4))->v)) + 0xC24FB4B)) = 0x1;
                    t221 = (((struct o9C_int *)(a4))->v);
                    FUN_0c0b359e((*(int *)(((((((struct o9C_int *)(a4))->v)) << 2) + 0xC246FF0))), (((((t221 << 2) << 1) + t221) << 2) + 0xC112530));
                    FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    if (((((struct o0_int *)0xC23A1A0)->v)) != 3) {
                        FUN_0c0cc3f8((*(int *)(((((*(int *)(((t0 << 2) + 0xC23EDC0))) >> 1) << 2) + 0xC2046F8))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    }
                }
            }
        }
    } else {
        if ((*(int *)((0xC23EDE0 + (t0 << 2)))) != 1) {
        } else {
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) + 0x1);
            (((struct o88_uint *)(a4))->v) = (((((struct o88_int *)(a4))->v)) + 0x1);
            *(unsigned int *)((0xC23EDE0 + (t0 << 2))) = 0x3;
            *(unsigned short *)0xC24FB4E = 0x384;
            t266 = t0;
            if ((*(signed char *)((0xC24FB48 + t0))) != -1) {
                t266 = (t0 + 0x1);
                if ((int)(t0 + 0x1) >= (int)0x3) {
                    t266 = 0x0;
                }
            }
            (((struct o9C_uint *)(a4))->v) = t266;
            *(unsigned char *)((0xC24FB48 + t266)) = t0;
        }
    }
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 28)) = ((((t0 << 2) << 1) + t0) << 2);
    *(unsigned int *)(((int)stk + 8)) = (0xC1125F0 + ((((t0 << 2) << 1) + t0) << 2));
    *(unsigned int *)(((int)stk + 4)) = (a4 + 0x30);
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x54);
    t283 = (((struct o9C_int *)(a4))->v);
    t284 = (((struct o88_int *)(a4))->v);
    if (t284 != 0) {
        if (t284 == 1) {
            (((struct o88_uint *)(a4))->v) = (((((struct o88_int *)(a4))->v)) + 0x1);
        } else {
            if (t284 == 2) {
                t298 = *(int *)(((int)stk + 16));
                if (t298 != 0) {
                    (((struct o88_uint *)(a4))->v) = (((((struct o88_int *)(a4))->v)) + 0x1);
                    (((struct o8C_uint *)(a4))->v) = 0x0;
                    t289 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 8)) = (t289 + 0xC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((t289 + 0xC) - 12)); }
                    t290 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 8)) = (t290 + 0xC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)(((t290 + 0xC) - 12)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
                    (((struct o90_uint *)(a4))->v) = 0x0;
                    t331 = (((struct oA0_int *)(a4))->v);
                    if ((int)(*(int *)(((int)stk + 16))) < 0) {
                        (((struct o94_uint *)(a4))->v) = 0x0;
                    } else {
                        (((struct o94_uint *)(a4))->v) = 0x1;
                    }
                    t327 = 0x94;
                } else {
                    t296 = (((struct o84_int *)(a4))->v);
                    t322 = t296;
                    if (t296 == 2) {
                        (((struct o88_uint *)(a4))->v) = 0x4;
                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                        t297 = 0xC0B9170;
                        t299 = (a4 + 0x54);
                        for (;;) {
                            if ((int)(*(int *)(((int)stk + 16))) >= (int)0x3) {
                                break;
                            }
                            if ((*(int *)(((int)stk + 16))) != 0) {
                                t299 = 0xC0DA2E0;
                                t297 = (FUN_0c0da2e0());
                                t297 = (t297 << 1);
                                *(unsigned int *)(((int)stk + 20)) = t297;
                                t299 = (*(int *)(((int)stk + 12)));
                                t306 = t299;
                                *(int *)((int)stk + 0) = t306;
                                t299 = 0xC0D9E90;
                                *(float *)((t306 + 0x0)) = ((FUN_0c0d9e90((*(int *)(((int)stk + 20))))) * 0.399999976f);
                                t299 = (*(int *)(((int)stk + 12)));
                                t298 = (0x4 + t299);
                                t299 = 0xC0DA410;
                                *(int *)((int)stk + 0) = t298;
                                *(float *)((t298 + 0x0)) = ((FUN_0c0da410((*(int *)(((int)stk + 20))))) * 0.399999976f);
                            } else {
                                t314 = t297;
                                t316 = t299;
                            }
                            t297 = t314;
                            t298 = (*(int *)(((int)stk + 4)));
                            t299 = t316;
                            t299 = 0xC0E61D4;
                            t298 = (t298 + 0xC);
                            *(unsigned int *)(((int)stk + 4)) = t298;
                            t298 = (t298 - 12);
                            t319 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 8)) = (t319 + 0xC);
                            t297 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t298) = *(struct mv3 *)(((t319 + 0xC) - 12)); }
                            t297 = (*(int *)(((int)stk + 12)));
                            t297 = (t297 + 0xC);
                            *(unsigned int *)(((int)stk + 12)) = t297;
                            t299 = (*(int *)(((int)stk + 16)));
                            t299 = (t299 + 0x1);
                            *(unsigned int *)(((int)stk + 16)) = t299;
                        }
                        t322 = t297;
                        u326 = 0.399999976f;
                    }
                    t327 = t322;
                    t331 = t283;
                    u332 = u326;
                }
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 28))) + 0xC1125F0);
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                *(unsigned int *)(((int)stk + 12)) = 0xC1126B4;
                *(unsigned int *)(((int)stk + 20)) = 0xC1126C0;
                t335 = t327;
                t336 = 0xC1126B4;
                t337 = t331;
                u338 = u332;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 4))) < (int)0x3) {
                        t336 = 0xC0DCCC0;
                        t335 = (nlUnitMatrix());
                        t336 = 0xC204994;
                        if ((*(int *)((t336 + 0x0))) != 0) {
                            t335 = (FUN_0c0dcc70(4.0f, 0.0f, 0.0f));
                        } else {
                            t343 = t336;
                        }
                        t346 = *(int *)(((int)stk + 16));
                        t336 = t343;
                        *(unsigned int *)(((int)stk + 16)) = (t346 + 0xC);
                        t335 = (FUN_0c0dcca0(((t346 + 0xC) - 12)));
                        t336 = ((((struct o0_int *)0xC204994)->v));
                        if (t336 != 0) {
                            t336 = 0xC0DCB80;
                            t335 = (nlScale(0.75f, 0.75f, 0.75f));
                        } else {
                            t350 = t336;
                        }
                        t336 = t350;
                        t335 = ((((struct o0_int *)0xC23A1A0)->v));
                        if ((t335 == 3) && (t355 = (t335 == 3), t335 = t337, t335 == 2)) {
                            t335 = 0xC1125C8;
                        } else {
                            t335 = 0xC1125C4;
                        }
                        t335 = (FUN_0c0c465c((*(short *)(((t337 << 1) + t335)))));
                        t361 = *(int *)(((int)stk + 4));
                        if (t361 == 0) {
                            t335 = 0xC0B937C;
                            u338 = (*(float *)((t335 + 0x0)));
                            t335 = ((((struct o0_int *)0xC23A258)->v));
                            t336 = 0xC0DC510;
                            t335 = (t335 & 0x7);
                            t335 = (t335 + 0x33);
                            *(unsigned int *)(((int)stk + 8)) = t335;
                            t335 = (nlPushMatrix(0x0));
                            t335 = (FUN_0c0dcca0((*(int *)(((int)stk + 12)))));
                            t336 = 0xC0DCB80;
                            t335 = (nlScale(u338, u338, u338));
                            t335 = (FUN_0c0de000(u338));
                            t335 = (FUN_0c0c465c((*(int *)(((int)stk + 8)))));
                            t335 = (FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4)));
                            t335 = (FUN_0c0dcca0((*(int *)(((int)stk + 20)))));
                            t336 = 0xC0DC950;
                            t335 = (nlRotateAZ(0x7FFF));
                            t335 = (nlScale(u338, u338, u338));
                            t336 = 0xC0DE000;
                            t335 = (FUN_0c0de000(u338));
                            t335 = (FUN_0c0c465c((*(int *)(((int)stk + 8)))));
                            t335 = (nlPopMatrix(0x1));
                            for (;;) {
                                t337 = (t337 + 0x1);
                                if ((int)t337 >= (int)0x3) {
                                    t337 = 0x0;
                                }
                                t335 = t337;
                                t335 = (*(signed char *)((0xC24FB48 + t335)));
                                if ((t335 != -1) && (t380 = 0x9C, t380 = (t380 + a4), t383 = *(int *)((t380 + 0x0)), t384 = (t335 == -1), t335 = t383, t385 = *(signed char *)((0xC24FB48 + t335)), t380 = t385, t380 != t0)) continue;
                                break;
                            }
                        } else {
                            t386 = t361;
                            for (;;) {
                                t337 = (t337 + 0x1);
                                if ((int)t337 >= (int)0x3) {
                                    t337 = 0x0;
                                }
                                t335 = t337;
                                t335 = (*(signed char *)((0xC24FB48 + t335)));
                                if ((t335 != -1) && (t386 = 0x9C, t386 = (t386 + a4), t389 = *(int *)((t386 + 0x0)), t390 = (t335 == -1), t335 = t389, t391 = *(signed char *)((0xC24FB48 + t335)), t386 = t391, t386 != t0)) continue;
                                break;
                            }
                        }
                        t336 = (*(int *)(((int)stk + 4)));
                        t336 = (t336 + 0x1);
                        *(unsigned int *)(((int)stk + 4)) = t336;
                        continue;
                    }
                    break;
                }
            } else {
                if (t284 == 3) {
                    if (((((struct o94_int *)(a4))->v)) != 0) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 8))) + 0x18);
                        t401 = (a4 + 0x30);
                        u402 = (FUN_0c0da410(((((struct oAC_int *)(a4))->v))));
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
                        t401 = (a4 + 0x48);
                        u402 = (FUN_0c0d9e90(((((struct oAC_int *)(a4))->v))));
                    }
                    t404 = (((struct oAC_int *)(a4))->v);
                    (((struct oAC_uint *)(a4))->v) = (t404 + 0x666);
                    if ((int)(t404 + 0x666) >= (int)0x3FFF) {
                        (((struct o88_uint *)(a4))->v) = 0x2;
                        (((struct oAC_uint *)(a4))->v) = 0x0;
                    }
                    t407 = (((struct o8C_int *)(a4))->v);
                    if (t407 != 0) {
                        if (t407 != 1) {
                            t480 = 0x666;
                            if (t407 != 2) {
                            } else {
                                t408 = (((struct o90_int *)(a4))->v);
                                (((struct o90_uint *)(a4))->v) = (t408 + 0x1);
                                if ((int)t408 < (int)0x3) {
                                    (((struct o4_float *)(t401))->v) = (((((struct o4_float *)(t401))->v)) + ((((struct o7C_float *)(a4))->v)));
                                    t480 = 0x666;
                                } else {
                                    (((struct o8C_uint *)(a4))->v) = (((((struct o8C_int *)(a4))->v)) + 0x1);
                                    t480 = *(int *)(((int)stk + 4));
                                    (((struct o4_float *)(t401))->v) = ((((struct o4_float *)(t480))->v));
                                }
                            }
                        } else {
                            t427 = (((struct o90_int *)(a4))->v);
                            (((struct o90_uint *)(a4))->v) = (t427 + 0x1);
                            if ((int)t427 < (int)0x1) {
                                *(float *)((t401 + 0x0)) = ((*(float *)((t401 + 0x0))) + ((((struct o78_float *)(a4))->v)));
                                (((struct o8_float *)(t401))->v) = (((((struct o8_float *)(t401))->v)) + ((((struct o80_float *)(a4))->v)));
                            } else {
                                (((struct o8C_uint *)(a4))->v) = (((((struct o8C_int *)(a4))->v)) + 0x1);
                                (((struct o90_uint *)(a4))->v) = 0x0;
                                t433 = *(int *)(((int)stk + 4));
                                *(float *)((t401 + 0x0)) = (*(float *)((t433 + 0x0)));
                                (((struct o8_float *)(t401))->v) = ((((struct o8_float *)(t433))->v));
                                (((struct o7C_float *)(a4))->v) = ((((((struct o4_float *)(t433))->v)) - ((((struct o4_float *)(t401))->v))) * 0.25f);
                            }
                            t480 = 0x1;
                        }
                    } else {
                        t452 = (((struct o90_int *)(a4))->v);
                        (((struct o90_uint *)(a4))->v) = (t452 + 0x1);
                        if ((int)t452 < (int)0x3) {
                            (((struct o4_float *)(t401))->v) = (((((struct o4_float *)(t401))->v)) + 0.649999976f);
                            t480 = (t452 + 0x1);
                        } else {
                            (((struct o8C_uint *)(a4))->v) = (((((struct o8C_int *)(a4))->v)) + 0x1);
                            (((struct o90_uint *)(a4))->v) = 0x0;
                            (((struct o78_float *)(a4))->v) = (((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) - (*(float *)((t401 + 0x0)))) * 0.5f);
                            t480 = *(int *)(((int)stk + 4));
                            (((struct o80_float *)(a4))->v) = ((((((struct o8_float *)(t480))->v)) - ((((struct o8_float *)(t401))->v))) * 0.5f);
                        }
                    }
                    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x30);
                    t481 = (((struct oA0_int *)(a4))->v);
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    *(float *)(((int)stk + 24)) = (1.0f - u402);
                    t479 = 0x14;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x3) {
                            break;
                        }
                        if ((((*(int *)(((int)stk + 4))) == 0) && (t479 = 0x94, t488 = *(int *)((a4 + t479)), t480 = t488, t480 != 0)) || ((t489 = *(int *)(((int)stk + 4)), t479 = t489, t479 == 2) && (t479 = 0x94, t490 = *(int *)((a4 + t479)), t490 == 0))) {
                        } else {
                            t479 = 0x14;
                            t480 = 0xC0DCD50;
                            t479 = (nlGetAverageVector((*(int *)(((int)stk + 8))), ((*(int *)(((int)stk + 8))) + 0xC), (*(int *)(((int)stk + 12))), u402, (*(float *)((((int)stk + 4) + t479)))));
                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0xC);
                        }
                        t480 = 0xC0DCCC0;
                        t479 = (nlUnitMatrix());
                        t480 = 0xC204994;
                        if ((*(int *)((t480 + 0x0))) != 0) {
                            t479 = (FUN_0c0dcc70(4.0f, 0.0f, 0.0f));
                        }
                        t480 = 0xC0DCCA0;
                        t479 = (FUN_0c0dcca0((*(int *)(((int)stk + 12)))));
                        t480 = 0xC204994;
                        if ((*(int *)((t480 + 0x0))) != 0) {
                            t479 = (nlScale(0.75f, 0.75f, 0.75f));
                        }
                        t480 = 0xC23A1A0;
                        t479 = (*(int *)((t480 + 0x0)));
                        if ((t479 == 3) && (t518 = (t479 == 3), t479 = t481, t479 == 2)) {
                            t479 = 0xC1125C8;
                        } else {
                            t479 = 0xC1125C4;
                        }
                        t479 = (FUN_0c0c465c((*(short *)(((t481 << 1) + t479)))));
                        for (;;) {
                            t481 = (t481 + 0x1);
                            if ((int)t481 >= (int)0x3) {
                                t481 = 0x0;
                            }
                            t479 = t481;
                            t479 = (*(signed char *)((0xC24FB48 + t479)));
                            if ((t479 != -1) && (t480 = 0x9C, t480 = (t480 + a4), t526 = *(int *)((t480 + 0x0)), t527 = (t479 == -1), t479 = t526, t528 = *(signed char *)((0xC24FB48 + t479)), t480 = t528, t480 != t0)) continue;
                            break;
                        }
                        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
                        t480 = (*(int *)(((int)stk + 4)));
                        t480 = (t480 + 0x1);
                        *(unsigned int *)(((int)stk + 4)) = t480;
                    }
                } else {
                    if (t284 == 4) {
                        *(unsigned int *)(((int)stk + 16)) = 0x3;
                        t531 = 0xC0B9580;
                        t533 = (a4 + 0x30);
                        t534 = t283;
                        u537 = f4;
                        for (;;) {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                break;
                            }
                            t533 = 0xC0DCCC0;
                            t531 = (nlUnitMatrix());
                            t533 = 0xC204994;
                            if ((*(int *)((t533 + 0x0))) != 0) {
                                u537 = 4.0f;
                                t531 = (FUN_0c0dcc70(u537, 0.0f, 0.0f));
                            } else {
                                t542 = t533;
                            }
                            t533 = t542;
                            t531 = (FUN_0c0dcca0((*(int *)(((int)stk + 4)))));
                            t533 = ((((struct o0_int *)0xC204994)->v));
                            if (t533 != 0) {
                                t533 = 0xC0DCB80;
                                u537 = 0.75f;
                                t531 = (nlScale(u537, 0.75f, 0.75f));
                            } else {
                                t549 = t533;
                            }
                            t532 = 0xC23A1A0;
                            t533 = t549;
                            t533 = 0xC1125C4;
                            *(unsigned int *)(((int)stk + 8)) = ((t534 << 1) + t533);
                            t531 = (*(int *)((t532 + 0x0)));
                            if ((t531 == 3) && (t555 = (t531 == 3), t531 = t534, t531 == 2)) {
                                t531 = (*(short *)(((*(int *)(((int)stk + 8))) + 0x4)));
                                t561 = t531;
                            } else {
                                t561 = (*(short *)(((*(int *)(((int)stk + 8))) + 0x0)));
                            }
                            t531 = (FUN_0c0c465c(t561));
                            t563 = *(int *)(((int)stk + 4));
                            u537 = (*(float *)((t563 + 0x0)));
                            if (((u537 > -32.0f) && (t531 = 0xC0B9698, u565 = *(float *)((t531 + 0x0)), u536 = u565, !(u537 > u536))) || ((t566 = *(int *)(((int)stk + 4)), t533 = t566, t531 = 0x4, u567 = *(float *)((t533 + t531)), u536 = u567, u536 > -32.0f) && (t531 = 0xC0B969C, t568 = *(int *)(((int)stk + 4)), t533 = t568, u569 = *(float *)((t531 + 0x0)), u536 = u569, t531 = 0x4, u570 = *(float *)((t533 + t531)), u535 = u570, !(u535 > u536)))) {
                                t531 = 0x4;
                                t533 = (*(int *)(((int)stk + 4)));
                                t532 = t531;
                                u536 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
                                u535 = (*(float *)((t533 + 0x0)));
                                u535 = (u535 + u536);
                                *(float *)((t533 + 0x0)) = u535;
                                t533 = (*(int *)(((int)stk + 12)));
                                t579 = *(int *)(((int)stk + 4));
                                t532 = (t532 + t533);
                                u535 = (*(float *)((t579 + t531)));
                                u536 = (*(float *)((t532 + 0x0)));
                                u535 = (u535 + u536);
                                *(float *)((t579 + t531)) = u535;
                                for (;;) {
                                    t534 = (t534 + 0x1);
                                    if ((int)t534 >= (int)0x3) {
                                        t534 = 0x0;
                                    }
                                    t531 = t534;
                                    t531 = (*(signed char *)((0xC24FB48 + t531)));
                                    if ((t531 != -1) && (t579 = 0x9C, t579 = (t579 + a4), t582 = *(int *)((t579 + 0x0)), t583 = (t531 == -1), t531 = t582, t584 = *(signed char *)((0xC24FB48 + t531)), t579 = t584, t579 != t0)) continue;
                                    break;
                                }
                                t591 = t532;
                                u593 = u535;
                            } else {
                                t585 = t563;
                                for (;;) {
                                    t534 = (t534 + 0x1);
                                    if ((int)t534 >= (int)0x3) {
                                        t534 = 0x0;
                                    }
                                    t531 = t534;
                                    t531 = (*(signed char *)((0xC24FB48 + t531)));
                                    if ((t531 != -1) && (t585 = 0x9C, t585 = (t585 + a4), t588 = *(int *)((t585 + 0x0)), t589 = (t531 == -1), t531 = t588, t590 = *(signed char *)((0xC24FB48 + t531)), t585 = t590, t585 != t0)) continue;
                                    break;
                                }
                            }
                            u535 = u593;
                            t532 = t591;
                            t533 = (*(int *)(((int)stk + 4)));
                            t533 = (t533 + 0xC);
                            *(unsigned int *)(((int)stk + 4)) = t533;
                            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
                            t532 = (*(int *)(((int)stk + 16)));
                            t532 = (t532 - 1);
                            *(unsigned int *)(((int)stk + 16)) = t532;
                        }
                    }
                }
            }
        }
    } else {
        nlUnitMatrix();
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + 0xC112680));
        if (((((struct o0_int *)0xC204994)->v)) != 0) {
            FUN_0c0dcc70(4.0f, 0.0f, 0.0f);
        }
        nlRotateAY(0x7FFF);
        t648 = FUN_0c0c465c(0xC86);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 28))) + 0xC112638);
        t649 = t283;
        t650 = 0x0;
        for (;;) {
            if ((int)t650 >= (int)0x3) {
                break;
            }
            t648 = (nlUnitMatrix());
            t652 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t652 + 0xC);
            t648 = (FUN_0c0dcca0(((t652 + 0xC) - 12)));
            t648 = (nlRotateAY(0xFFFFE001));
            t648 = (nlRotateAX(0xFFFFC71D));
            t648 = (nlRotateAZ(0xFFFFF1C8));
            if (((((struct o0_int *)0xC204994)->v)) != 0) {
                t648 = (nlScale(0.75f, 0.75f, 0.75f));
            }
            t649 = t650;
            t649 = (t649 << 1);
            t648 = ((((struct o0_int *)0xC23A1A0)->v));
            t649 = (t649 + 0xC1125C4);
            if ((t648 == 3) && (t664 = (t648 == 3), t648 = t650, t648 == 2)) {
                t648 = (*(short *)((t649 + 0x4)));
                t667 = t648;
            } else {
                t667 = (*(short *)((t649 + 0x0)));
            }
            t648 = (FUN_0c0c465c(t667));
            t650 = (t650 + 0x1);
        }
    }
    return nlPopMatrix(0x1);
}
