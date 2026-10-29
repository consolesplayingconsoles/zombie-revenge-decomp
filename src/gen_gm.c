/* Straight-line functions with calls and guards (batch gen_gm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
float FUN_0c01f1b8(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037c66(int);
int FUN_0c037e44(int);
int FUN_0c037ee8(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c086bda(int, float);
int FUN_0c0a4bb2(int);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0be338(int, int);
extern int FUN_0c0be8d2();
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c053fac(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c017aca(int a4, int a5, int a6);
int FUN_0c03840e(int a4, int a5, int a6, int a7);
int FUN_0c02c6ee(int a4, float f4);
int FUN_0c087510(int a4);
int FUN_0c0635ec(int a4, int a5);
int FUN_0c05e158(int a4, int a5, int a6);
int FUN_0c04105c(int a4);

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
    int t312;
    int t315;
    float u320;
    int t329;
    int t342;
    int t343;
    int t344;
    int t345;
    int t346;
    int t347;
    float u348;
    int t351;
    int t352;
    int t353;
    int t354;
    int t355;
    int t356;
    int t357;
    float u361;
    float u362;
    float u363;
    float u367;
    float u371;
    int t372;
    int t387;
    int t400;
    float u404;
    int t388;
    int t389;
    int t390;
    float u391;
    float u392;
    float u393;
    int t406;
    int t407;
    int t408;
    int t419;
    int t421;
    int t506;
    int t509;
    float u514;
    int t523;
    int t536;
    int t537;
    int t538;
    int t539;
    int t540;
    int t541;
    float u542;
    int t545;
    int t546;
    int t547;
    int t548;
    int t549;
    int t550;
    int t551;
    float u555;
    float u556;
    float u557;
    float u561;
    float u565;
    int t566;
    int t581;
    int t594;
    float u598;
    int t582;
    int t583;
    int t584;
    float u585;
    float u586;
    float u587;
    int t600;
    int t601;
    int t602;
    int t613;
    int t615;
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
    int t672;
    int t460;
    int t294;
    float u325;
    int t337;
    int t339;
    int t340;
    int t333;
    int t334;
    int t379;
    float u381;
    float u383;
    float u358;
    float u359;
    float u360;
    int t654;
    int t488;
    float u519;
    int t531;
    int t533;
    int t534;
    int t527;
    int t528;
    int t573;
    float u575;
    float u577;
    float u552;
    float u553;
    float u554;
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
            u26 = (nlLength((((((((t15 << 1) + t15) << 2) << 2) << 2) + 0xC23F268) + 0xC), (((((((t7 << 1) + t7) << 2) << 2) << 2) + 0xC23F268) + 0xB4)));
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
                            u87 = (nlLength((((((((t108 << 1) + t108) << 2) << 2) << 2) + t75) + 0xC), ((((t109 << 2) << 2) + t75) + t76)));
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
                            u172 = (nlLength((((((((t193 << 1) + t193) << 2) << 2) << 2) + t160) + 0xC), ((((t194 << 2) << 2) + t160) + t161)));
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
            t460 = 0xFFFFFFFF;
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
                nlPushMatrix(0x0);
                { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x6C)) = *(struct mv9 *)(0xC0F88E4); }
                { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x48)) = *(struct mv9 *)(0xC0F8908); }
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x38)) = *(struct mv4 *)(0xC0F892C); }
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0xEC)));
                t312 = *(int *)((((t277 << 2) + 0xC246FF0) + 0x0));
                t315 = (t312 + 0x30);
                if (((*(int *)((t312 + 0xC8))) & 0x3FF) != 0) {
                    t315 = (((((((t277 << 1) + t277) << 2) << 2) << 2) + 0xC23F268) + 0xB4);
                }
                nlUnitMatrix();
                FUN_0c0dcca0(t315);
                u320 = *(float *)((t312 + 0x284));
                if (u320 > 1.0f) {
                    nlScale(1.5f, 1.5f, 1.5f);
                    FUN_0c0de000(1.5f);
                } else {
                    u325 = u320;
                }
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x3C) {
                    *(unsigned int *)(((int)stk + 16)) = 0x2;
                    t337 = 0x2;
                } else {
                    t329 = *(int *)(((int)stk + 4));
                    if ((int)t329 >= (int)0x1E) {
                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                        t333 = 0x1;
                        t334 = ((*(int *)(((int)stk + 4))) - 30);
                    } else {
                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                        t333 = t329;
                        t334 = (*(int *)(((int)stk + 4)));
                    }
                    t337 = t333;
                    t339 = 0x1E;
                    t340 = t334;
                }
                t342 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 28)) = (t342 - 60);
                t343 = *(int *)(((int)stk + 16));
                if (t343 == 2) {
                    t344 = t343;
                    t345 = t337;
                    t346 = (t342 - 60);
                    t347 = 0x0;
                    u348 = u325;
                    for (;;) {
                        if ((unsigned int)t347 >= (unsigned int)0xC) {
                            break;
                        }
                        t344 = t347;
                        t346 = (((int)stk + 4) + 0x6C);
                        t345 = 0x18;
                        t346 = (t346 + t344);
                        t345 = (t345 + t346);
                        t346 = (((int)stk + 4) + 0x48);
                        u348 = (*(float *)((t345 + 0x0)));
                        t345 = 0x18;
                        t346 = (t346 + t344);
                        t345 = (t345 + t346);
                        *(float *)(((((int)stk + 4) + 0x2C) + t344)) = u348;
                        u348 = (*(float *)((t345 + 0x0)));
                        t347 = (t347 + 0x4);
                        *(float *)(((((int)stk + 4) + 0x20) + t344)) = u348;
                    }
                    t351 = *(int *)(((int)stk + 28));
                    *(unsigned int *)(((int)stk + 8)) = ((((((t351 << 2) << 2) + t351) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 32)) = ((((((t351 << 2) << 2) + t351) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 12)) = 0x4000;
                    t379 = (((int)stk + 4) + 0x48);
                } else {
                    t352 = *(int *)(((int)stk + 16));
                    *(unsigned int *)(((int)stk + 8)) = (((t352 << 1) + t352) << 2);
                    t353 = t343;
                    t354 = (((t352 << 1) + t352) << 2);
                    t355 = (t339 - t340);
                    t356 = (t342 - 60);
                    t357 = 0x0;
                    u361 = (float)(t339 - t340);
                    u362 = f4;
                    u363 = f5;
                    for (;;) {
                        if ((unsigned int)t357 >= (unsigned int)0xC) {
                            break;
                        }
                        t353 = t357;
                        t355 = (*(int *)(((int)stk + 8)));
                        t356 = ((int)stk + 4);
                        t356 = (t356 + 0x6C);
                        t355 = (t355 + t356);
                        u358 = (float)(t339 - t340);
                        t355 = (t355 + t353);
                        u361 = (float)t340;
                        t356 = 0xC;
                        t354 = t355;
                        t356 = (t356 + t354);
                        *(unsigned int *)(((int)stk + 12)) = t355;
                        u360 = (*(float *)((t356 + 0x0)));
                        t356 = ((int)stk + 4);
                        u363 = u361;
                        u359 = (float)t339;
                        u360 = (u360 * u361);
                        u361 = (*(float *)((t355 + 0x0)));
                        t356 = (t356 + 0x48);
                        u367 = u360;
                        u367 = u367 + u358 * u361;
                        u360 = u367;
                        u362 = u359;
                        u360 = (u360 / u359);
                        *(float *)(((((int)stk + 4) + 0x2C) + t353)) = u360;
                        t355 = (*(int *)(((int)stk + 8)));
                        t355 = (t355 + t356);
                        t355 = (t355 + t353);
                        t356 = 0xC;
                        t354 = t355;
                        t356 = (t356 + t354);
                        *(unsigned int *)(((int)stk + 12)) = t355;
                        u361 = (*(float *)((t356 + 0x0)));
                        u361 = (u361 * u363);
                        u360 = (*(float *)((t355 + 0x0)));
                        t357 = (t357 + 0x4);
                        u371 = u361;
                        u371 = u371 + u358 * u360;
                        u361 = u371;
                        u361 = (u361 / u362);
                        *(float *)(((((int)stk + 4) + 0x20) + t353)) = u361;
                    }
                    t372 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 8)) = (t372 * 0x222);
                    *(unsigned int *)(((int)stk + 32)) = (-(t372 * 0x222));
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) >> 1);
                    t379 = t339;
                    u381 = u359;
                    u383 = u360;
                }
                t387 = *(int *)(((int)stk + 4));
                t400 = t379;
                u404 = _builtin_fabsf((float)(t387 - 60));
                if (5.0f > _builtin_fabsf((float)(t387 - 60))) {
                    t388 = *(int *)(((int)stk + 28));
                    t389 = 0x0;
                    t390 = t379;
                    u391 = u381;
                    u392 = u383;
                    u393 = (float)t388;
                    for (;;) {
                        if ((unsigned int)t389 >= (unsigned int)0xC) {
                            break;
                        }
                        t390 = t389;
                        t390 = (t390 + (((int)stk + 4) + 0x2C));
                        u393 = (*(float *)((t390 + 0x0)));
                        u392 = 1.0f;
                        u392 = (u392 - u393);
                        u393 = (float)t388;
                        u393 = _builtin_fabsf(u393);
                        u393 = (-u393);
                        u393 = (u393 + 5.0f);
                        u391 = (*(float *)((t390 + 0x0)));
                        u392 = (u392 * u393);
                        u392 = (u392 / 5.0f);
                        u391 = (u391 + u392);
                        u392 = 1.0f;
                        *(float *)((t390 + 0x0)) = u391;
                        t390 = t389;
                        t390 = (t390 + (((int)stk + 4) + 0x20));
                        u393 = (*(float *)((t390 + 0x0)));
                        t389 = (t389 + 0x4);
                        u391 = (*(float *)((t390 + 0x0)));
                        u392 = (u392 - u393);
                        u393 = (float)t388;
                        u393 = _builtin_fabsf(u393);
                        u393 = (-u393);
                        u393 = (u393 + 5.0f);
                        u392 = (u392 * u393);
                        u392 = (u392 / 5.0f);
                        u391 = (u391 + u392);
                        *(float *)((t390 + 0x0)) = u391;
                    }
                    t400 = t390;
                    u404 = u393;
                }
                t406 = ((int (*)(int, int, int))(FUN_0c0be8d2))(0x50, (((int)stk + 4) + 0x2C), t400);
                t407 = ((int (*)(int, int))(FUN_0c0be8d2))(0x51, (((int)stk + 4) + 0x2C));
                t408 = ((int (*)(int, int))(FUN_0c0be8d2))(0x52, (((int)stk + 4) + 0x20));
                nlPushMatrix(0x0);
                nlRotateAY((*(int *)(((int)stk + 32))));
                FUN_0c0c47ae(0x51);
                nlPopMatrix(0x1);
                nlPushMatrix(0x0);
                nlRotateAY((*(int *)(((int)stk + 8))));
                FUN_0c0c47ae(0x50);
                nlRotateAY(0xFFFFE0F9);
                t419 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 8)) = (0x8000 - t419);
                *(unsigned int *)(((int)stk + 4)) = 0x4;
                t421 = (0x8000 - t419);
                for (;;) {
                    if ((*(int *)(((int)stk + 4))) == 0) {
                        break;
                    }
                    nlRotateAY(0x4000);
                    nlPushMatrix(0x0);
                    nlRotateAX((*(int *)(((int)stk + 12))));
                    FUN_0c0c47ae(0x52);
                    nlPopMatrix(0x1);
                    t421 = 0x2;
                    if ((int)(*(int *)(((int)stk + 16))) < (int)t421) {
                        nlPushMatrix(0x0);
                        nlRotateAX((*(int *)(((int)stk + 8))));
                        FUN_0c0c47ae(0x52);
                        nlPopMatrix(0x1);
                    }
                    t421 = (*(int *)(((int)stk + 4)));
                    t421 = (t421 - 1);
                    *(unsigned int *)(((int)stk + 4)) = t421;
                }
                nlPopMatrix(0x1);
                nlPopMatrix(0x1);
                FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            }
            t460 = t277;
        }
        t672 = t460;
    } else {
        if ((int)t277 < 0) {
            *(unsigned int *)((a4 + 0xEC)) = 0x0;
            *(unsigned short *)((a4 + 0xEA)) = 0xFFFFFFFF;
            t654 = 0xFFFFFFFF;
        } else {
            if ((*(short *)((a4 + 0xEA))) != (*(short *)((a4 + 0xE8)))) {
                *(unsigned int *)((a4 + 0xEC)) = 0x0;
                *(unsigned short *)((a4 + 0xEA)) = (*(short *)((a4 + 0xE8)));
            } else {
                if (((*(int *)((a4 + 0x338))) & 14) != 0) {
                    if (20.0f > (*(float *)((((*(short *)(((0xE8 + a4) + 0x0))) << 2) + (((((*(int *)((a4 + 0xBC))) << 2) << 2) << 2) + 0xC247084))))) {
                        t488 = ((*(int *)((a4 + 0xEC))) + 0x2);
                    } else {
                        t488 = ((*(int *)((a4 + 0xEC))) + 0x1);
                    }
                    *(unsigned int *)((a4 + 0xEC)) = t488;
                }
            }
            if (((*(int *)0xC23A1A8) & 0x4000) != 0) {
            } else {
                FUN_0c0848bc(1.0f, 1.0f, 1.0f);
                nlPushMatrix(0x0);
                { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x6C)) = *(struct mv9 *)(0xC0F88E4); }
                { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x48)) = *(struct mv9 *)(0xC0F8908); }
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x38)) = *(struct mv4 *)(0xC0F892C); }
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0xEC)));
                t506 = *(int *)((((t277 << 2) + 0xC246FF0) + 0x0));
                t509 = (t506 + 0x30);
                if (((*(int *)((t506 + 0xC8))) & 0x3FF) != 0) {
                    t509 = (((((((t277 << 1) + t277) << 2) << 2) << 2) + 0xC23F268) + 0xB4);
                }
                nlUnitMatrix();
                FUN_0c0dcca0(t509);
                u514 = *(float *)((t506 + 0x284));
                if (u514 > 1.0f) {
                    nlScale(1.5f, 1.5f, 1.5f);
                    FUN_0c0de000(1.5f);
                } else {
                    u519 = u514;
                }
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x3C) {
                    *(unsigned int *)(((int)stk + 16)) = 0x2;
                    t531 = 0x2;
                } else {
                    t523 = *(int *)(((int)stk + 4));
                    if ((int)t523 >= (int)0x1E) {
                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                        t527 = 0x1;
                        t528 = ((*(int *)(((int)stk + 4))) - 30);
                    } else {
                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                        t527 = t523;
                        t528 = (*(int *)(((int)stk + 4)));
                    }
                    t531 = t527;
                    t533 = 0x1E;
                    t534 = t528;
                }
                t536 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 28)) = (t536 - 60);
                t537 = *(int *)(((int)stk + 16));
                if (t537 == 2) {
                    t538 = t537;
                    t539 = t531;
                    t540 = (t536 - 60);
                    t541 = 0x0;
                    u542 = u519;
                    for (;;) {
                        if ((unsigned int)t541 >= (unsigned int)0xC) {
                            break;
                        }
                        t538 = t541;
                        t540 = (((int)stk + 4) + 0x6C);
                        t539 = 0x18;
                        t540 = (t540 + t538);
                        t539 = (t539 + t540);
                        t540 = (((int)stk + 4) + 0x48);
                        u542 = (*(float *)((t539 + 0x0)));
                        t539 = 0x18;
                        t540 = (t540 + t538);
                        t539 = (t539 + t540);
                        *(float *)(((((int)stk + 4) + 0x2C) + t538)) = u542;
                        u542 = (*(float *)((t539 + 0x0)));
                        t541 = (t541 + 0x4);
                        *(float *)(((((int)stk + 4) + 0x20) + t538)) = u542;
                    }
                    t545 = *(int *)(((int)stk + 28));
                    *(unsigned int *)(((int)stk + 8)) = ((((((t545 << 2) << 2) + t545) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 32)) = ((((((t545 << 2) << 2) + t545) << 2) << 1) + 0x8000);
                    *(unsigned int *)(((int)stk + 12)) = 0x4000;
                    t573 = (((int)stk + 4) + 0x48);
                } else {
                    t546 = *(int *)(((int)stk + 16));
                    *(unsigned int *)(((int)stk + 8)) = (((t546 << 1) + t546) << 2);
                    t547 = t537;
                    t548 = (((t546 << 1) + t546) << 2);
                    t549 = (t533 - t534);
                    t550 = (t536 - 60);
                    t551 = 0x0;
                    u555 = (float)(t533 - t534);
                    u556 = f4;
                    u557 = f5;
                    for (;;) {
                        if ((unsigned int)t551 >= (unsigned int)0xC) {
                            break;
                        }
                        t547 = t551;
                        t549 = (*(int *)(((int)stk + 8)));
                        t550 = ((int)stk + 4);
                        t550 = (t550 + 0x6C);
                        t549 = (t549 + t550);
                        u552 = (float)(t533 - t534);
                        t549 = (t549 + t547);
                        u555 = (float)t534;
                        t550 = 0xC;
                        t548 = t549;
                        t550 = (t550 + t548);
                        *(unsigned int *)(((int)stk + 12)) = t549;
                        u554 = (*(float *)((t550 + 0x0)));
                        t550 = ((int)stk + 4);
                        u557 = u555;
                        u553 = (float)t533;
                        u554 = (u554 * u555);
                        u555 = (*(float *)((t549 + 0x0)));
                        t550 = (t550 + 0x48);
                        u561 = u554;
                        u561 = u561 + u552 * u555;
                        u554 = u561;
                        u556 = u553;
                        u554 = (u554 / u553);
                        *(float *)(((((int)stk + 4) + 0x2C) + t547)) = u554;
                        t549 = (*(int *)(((int)stk + 8)));
                        t549 = (t549 + t550);
                        t549 = (t549 + t547);
                        t550 = 0xC;
                        t548 = t549;
                        t550 = (t550 + t548);
                        *(unsigned int *)(((int)stk + 12)) = t549;
                        u555 = (*(float *)((t550 + 0x0)));
                        u555 = (u555 * u557);
                        u554 = (*(float *)((t549 + 0x0)));
                        t551 = (t551 + 0x4);
                        u565 = u555;
                        u565 = u565 + u552 * u554;
                        u555 = u565;
                        u555 = (u555 / u556);
                        *(float *)(((((int)stk + 4) + 0x20) + t547)) = u555;
                    }
                    t566 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 8)) = (t566 * 0x222);
                    *(unsigned int *)(((int)stk + 32)) = (-(t566 * 0x222));
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) >> 1);
                    t573 = t533;
                    u575 = u553;
                    u577 = u554;
                }
                t581 = *(int *)(((int)stk + 4));
                t594 = t573;
                u598 = _builtin_fabsf((float)(t581 - 60));
                if (5.0f > _builtin_fabsf((float)(t581 - 60))) {
                    t582 = *(int *)(((int)stk + 28));
                    t583 = 0x0;
                    t584 = t573;
                    u585 = u575;
                    u586 = u577;
                    u587 = (float)t582;
                    for (;;) {
                        if ((unsigned int)t583 >= (unsigned int)0xC) {
                            break;
                        }
                        t584 = t583;
                        t584 = (t584 + (((int)stk + 4) + 0x2C));
                        u587 = (*(float *)((t584 + 0x0)));
                        u586 = 1.0f;
                        u586 = (u586 - u587);
                        u587 = (float)t582;
                        u587 = _builtin_fabsf(u587);
                        u587 = (-u587);
                        u587 = (u587 + 5.0f);
                        u585 = (*(float *)((t584 + 0x0)));
                        u586 = (u586 * u587);
                        u586 = (u586 / 5.0f);
                        u585 = (u585 + u586);
                        u586 = 1.0f;
                        *(float *)((t584 + 0x0)) = u585;
                        t584 = t583;
                        t584 = (t584 + (((int)stk + 4) + 0x20));
                        u587 = (*(float *)((t584 + 0x0)));
                        t583 = (t583 + 0x4);
                        u585 = (*(float *)((t584 + 0x0)));
                        u586 = (u586 - u587);
                        u587 = (float)t582;
                        u587 = _builtin_fabsf(u587);
                        u587 = (-u587);
                        u587 = (u587 + 5.0f);
                        u586 = (u586 * u587);
                        u586 = (u586 / 5.0f);
                        u585 = (u585 + u586);
                        *(float *)((t584 + 0x0)) = u585;
                    }
                    t594 = t584;
                    u598 = u587;
                }
                t600 = ((int (*)(int, int, int))(FUN_0c0be8d2))(0x50, (((int)stk + 4) + 0x2C), t594);
                t601 = ((int (*)(int, int))(FUN_0c0be8d2))(0x51, (((int)stk + 4) + 0x2C));
                t602 = ((int (*)(int, int))(FUN_0c0be8d2))(0x52, (((int)stk + 4) + 0x20));
                nlPushMatrix(0x0);
                nlRotateAY((*(int *)(((int)stk + 32))));
                FUN_0c0c47ae(0x51);
                nlPopMatrix(0x1);
                nlPushMatrix(0x0);
                nlRotateAY((*(int *)(((int)stk + 8))));
                FUN_0c0c47ae(0x50);
                nlRotateAY(0xFFFFE0F9);
                t613 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 8)) = (0x8000 - t613);
                *(unsigned int *)(((int)stk + 4)) = 0x4;
                t615 = (0x8000 - t613);
                for (;;) {
                    if ((*(int *)(((int)stk + 4))) == 0) {
                        break;
                    }
                    nlRotateAY(0x4000);
                    nlPushMatrix(0x0);
                    nlRotateAX((*(int *)(((int)stk + 12))));
                    FUN_0c0c47ae(0x52);
                    nlPopMatrix(0x1);
                    t615 = 0x2;
                    if ((int)(*(int *)(((int)stk + 16))) < (int)t615) {
                        nlPushMatrix(0x0);
                        nlRotateAX((*(int *)(((int)stk + 8))));
                        FUN_0c0c47ae(0x52);
                        nlPopMatrix(0x1);
                    }
                    t615 = (*(int *)(((int)stk + 4)));
                    t615 = (t615 - 1);
                    *(unsigned int *)(((int)stk + 4)) = t615;
                }
                nlPopMatrix(0x1);
                nlPopMatrix(0x1);
                FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            }
            t654 = t277;
        }
        t672 = t654;
    }
    return t672;
}

int FUN_0c017aca(int a4, int a5, int a6)
{
    int t3;
    int t4;
    int t6;
    int t8;
    int t9;
    int t186;
    int t187;
    int t188;
    float u191;
    int t11;
    int t14;
    int t18;
    int t23;
    int t28;
    int t34;
    int t68;
    int t75;
    int t112;
    int t117;
    int t156;
    int t159;
    int t168;
    int t173;
    int t0;
    int t1;
    int t2;
    int t5;
    float u7;
    int t189;
    int t190;
    int t181;
    int t182;
    int t183;
    float u184;
    int t64;
    int t65;
    int t108;
    int t109;
    int t151;
    int t152;
    int t153;
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
            t186 = t0;
            t187 = t1;
            t188 = t2;
            u191 = u7;
            if ((unsigned int)t9 >= (unsigned int)t0) {
                t189 = t3;
                t190 = t4;
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
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                        t182 = t1;
                        t183 = 0xC0E61D4;
                    }
                        break;
                    case 2:
                    {
                        t3 = 0xC0186A4;
                        t14 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t14;
                        t3 = t14;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                    }
                        break;
                    case 4:
                    {
                        t3 = 0xC0186EC;
                        t18 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t18;
                        t3 = t18;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 6:
                    {
                        t3 = 0xC01874E;
                        t23 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t23;
                        t3 = t23;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 8:
                    {
                        t3 = 0xC0187CC;
                        t28 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t28;
                        t3 = t28;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 10:
                    {
                        t3 = 0xC01885A;
                        t34 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t34;
                        t3 = t34;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                            nlPushMatrix(t3);
                            t2 = 0xC0DCCC0;
                            nlUnitMatrix();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            nlRotateAZ(t3);
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
                            nlPopMatrix(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                        } else {
                            t1 = t5;
                            t2 = 0xC0E61D4;
                            t0 = t5;
                            t1 = (t1 + 0x30);
                            t0 = (t0 + 0x60);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                            t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                            u7 = (float)t2;
                            u7 = (u7 * 0.099999994f);
                            t64 = t0;
                            t65 = t2;
                        }
                        t0 = t64;
                        t2 = t65;
                        *(float *)((t5 + 0x1E4)) = u7;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 12:
                    {
                        t3 = 0xC018918;
                        t68 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t68;
                        t3 = t68;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 14:
                    {
                        t3 = 0xC018A38;
                        t75 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t75;
                        t3 = t75;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                            nlPushMatrix(t3);
                            t2 = 0xC0DCCC0;
                            nlUnitMatrix();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            nlRotateAZ(t3);
                            t2 = 0xC0DC890;
                            t3 = (*(short *)((t5 + 0x6E)));
                            nlRotateAY(t3);
                            t2 = 0xC0DC6E0;
                            t3 = (*(short *)((t5 + 0x6C)));
                            nlRotateAX(t3);
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
                            nlPopMatrix(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                        } else {
                            t1 = t5;
                            t2 = 0xC0E61D4;
                            t0 = t5;
                            t1 = (t1 + 0x30);
                            t0 = (t0 + 0x60);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                            t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                            u7 = (float)t2;
                            u7 = (u7 * 0.099999994f);
                            t108 = t0;
                            t109 = t2;
                        }
                        t0 = t108;
                        t2 = t109;
                        *(float *)((t5 + 0x228)) = u7;
                        *(float *)((t5 + 0x1E4)) = 1.0f;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 16:
                    {
                        t3 = 0xC01898C;
                        t112 = FUN_0c0e19aa(0xC01898C, 0x244, t4);
                        t5 = t112;
                        t3 = t112;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 18:
                    {
                        t3 = 0xC018C7C;
                        t117 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t117;
                        t3 = t117;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                            nlPushMatrix(t3);
                            t2 = 0xC0DCCC0;
                            nlUnitMatrix();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            nlRotateAZ(t3);
                            t2 = 0xC0DC890;
                            t3 = (*(short *)((t5 + 0x6E)));
                            nlRotateAY(t3);
                            t2 = 0xC0DC6E0;
                            t3 = (*(short *)((t5 + 0x6C)));
                            nlRotateAX(t3);
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
                            nlPopMatrix(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                            *(float *)((t5 + 0x228)) = u7;
                            t152 = t1;
                        } else {
                            t151 = t0;
                            t153 = t2;
                        }
                        t0 = t151;
                        t1 = t152;
                        t2 = t153;
                        *(float *)((t5 + 0x1E4)) = 1.0f;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 20:
                    {
                        t3 = 0xC018480;
                        t156 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t156;
                        t3 = t156;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                        t182 = t1;
                        t183 = 0xC0E61D4;
                    }
                        break;
                    case 22:
                    {
                        t3 = 0xC0184E0;
                        t159 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t159;
                        t3 = t159;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 24:
                    {
                        t3 = 0xC018550;
                        t168 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t168;
                        t3 = t168;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    default:
                    {
                        t3 = 0xC01860C;
                        t173 = FUN_0c0e19aa(t3, 0x54, t4);
                        t5 = t173;
                        t3 = t173;
                        FUN_0c0e19d0(t3);
                        t1 = 0xC017AD0;
                        t0 = t5;
                        t2 = 0xC0E61D4;
                        t0 = (t0 + 0x38);
                        *(unsigned int *)((t5 + 0x4)) = t1;
                        t1 = t6;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
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
                t186 = t181;
                t187 = t182;
                t188 = t183;
                u191 = u184;
            }
            u7 = u191;
            t0 = t186;
            t6 = (t6 + 0x1C);
            t1 = t187;
            t2 = t188;
            t3 = t189;
            t4 = t190;
            continue;
        }
        break;
    }
    return t8;
}

int FUN_0c03840e(int a4, int a5, int a6, int a7)
{
    int t1;
    int t17;
    int t21;
    int t22;
    int t60;
    int t61;
    float u94;
    int t96;
    int t100;
    int t101;
    int t102;
    float u103;
    float u104;
    int t240;
    int t253;
    int t254;
    int t328;
    float u24;
    int t26;
    float u97;
    float u98;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t127;
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    int t188;
    int t244;
    int t245;
    int t246;
    int t247;
    int t248;
    float u256;
    int t258;
    int stk[12];

    if ((*(int *)((a4 + 0x414))) == 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x224)) = ((*(float *)((a4 + 0x224))) - (*(float *)(((0x3EC + a4) + 0x0))));
    nlAddVector((a4 + 0x30), (0x220 + a4));
    *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + (*(int *)(((0x22C + a4) + 0x0))));
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((0x230 + a4) + 0x0))));
    *(unsigned short *)((a4 + 0x70)) = ((*(short *)((a4 + 0x70))) + (*(int *)(((0x234 + a4) + 0x0))));
    FUN_0c0376f4(a4);
    FUN_0c037954(a4);
    t17 = *(int *)((a4 + 0x3F8));
    if (t17 != 0) {
        if (t17 == 1) {
            FUN_0c037c66(a4);
            *(unsigned int *)((a4 + 0x3E0)) = 0xFFFFFFFF;
            if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + 0x21C))) & 0x1)) {
                t21 = 0x21C;
                t22 = 0x0;
                for (;;) {
                    if (((*(int *)((((t22 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t21 = 0x3DC, t26 = *(int *)((a4 + t21)), t26 != t22)) {
                        t21 = 0x3F4;
                        u24 = (*(float *)((a4 + t21)));
                        u24 = (u24 + 4.0f);
                        t21 = 0x4;
                        if (u24 > ((*(float *)((((((t22 << 1) + t22) << 2) + (0x370 + a4)) + t21))))) {
                            break;
                        }
                        t22 = (t22 + 0x1);
                        if ((int)t22 >= (int)0x3) {
                            t21 = 0x3E0;
                            if ((int)(*(int *)((a4 + t21))) >= 0) {
                                t21 = 0x22C;
                                *(unsigned int *)((a4 + t21)) = 0x0;
                                t21 = (t21 + 0x4);
                                *(unsigned int *)((a4 + t21)) = 0x0;
                                t21 = (t21 + 0x4);
                                *(unsigned int *)((a4 + t21)) = 0x0;
                                t21 = 0x3F8;
                                *(unsigned int *)((a4 + t21)) = ((*(int *)((a4 + t21))) + 0x1);
                                t21 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                t21 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                t21 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                t21 = 0x3FC;
                                if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                                    t22 = a4;
                                    t21 = (FUN_0c037ee8(t22));
                                    return t21;
                                }
                                return t21;
                            }
                            t21 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                            t21 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                            t21 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                            t21 = 0x3FC;
                            if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                                t22 = a4;
                                t21 = (FUN_0c037ee8(t22));
                                return t21;
                            }
                            return t21;
                        }
                        continue;
                    }
                    t22 = (t22 + 0x1);
                    if ((int)t22 >= (int)0x3) {
                        t21 = 0x3E0;
                        if ((int)(*(int *)((a4 + t21))) >= 0) {
                            t21 = 0x22C;
                            *(unsigned int *)((a4 + t21)) = 0x0;
                            t21 = (t21 + 0x4);
                            *(unsigned int *)((a4 + t21)) = 0x0;
                            t21 = (t21 + 0x4);
                            *(unsigned int *)((a4 + t21)) = 0x0;
                            t21 = 0x3F8;
                            *(unsigned int *)((a4 + t21)) = ((*(int *)((a4 + t21))) + 0x1);
                            t21 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                            t21 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                            t21 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                            t21 = 0x3FC;
                            if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                                t22 = a4;
                                t21 = (FUN_0c037ee8(t22));
                                return t21;
                            }
                            return t21;
                        }
                        t21 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                        t21 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                        t21 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                        t21 = 0x3FC;
                        if (((*(int *)((a4 + t21))) & 0x1) == 0) {
                            t22 = a4;
                            t21 = (FUN_0c037ee8(t22));
                            return t21;
                        }
                        return t21;
                    }
                }
                *(unsigned int *)((a4 + 0x3E0)) = t22;
            }
            if ((int)(*(int *)((a4 + 0x3E0))) >= 0) {
                *(unsigned int *)((a4 + 0x22C)) = 0x0;
                *(unsigned int *)((a4 + 0x230)) = 0x0;
                *(unsigned int *)((a4 + 0x234)) = 0x0;
                *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
            }
        } else {
            if (t17 == 2) {
                FUN_0c086bda((a4 + 0x30), ((*(float *)((a4 + 0x224))) * 5.0f));
                *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
            } else {
                if (t17 == 3) {
                    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.049999997f);
                    t60 = *(int *)((a4 + 0x3FC));
                    *(unsigned int *)((a4 + 0x3FC)) = (t60 + 0x1);
                    if ((int)t60 > (int)0x3C) {
                        t61 = ((int (*)(void))(FUN_0c0e19f2))();
                    }
                }
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x3E0)) = 0xFFFFFFFF;
        if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + 0x21C))) & 0x1)) {
            *(float *)((a4 + 0x3F4)) = (FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4)));
            u94 = *(float *)((a4 + 0x3F4));
            t96 = 0x3F4;
            if (-10.0f > u94) {
                t96 = (((int (*)(void))(FUN_0c0e19f2))());
            } else {
                u97 = u94;
                u98 = -10.0f;
            }
            t100 = t96;
            t101 = a4;
            t102 = 0x0;
            u103 = u97;
            u104 = u98;
            for (;;) {
                if ((*(int *)((((t102 << 2) + (0x238 + a4)) + 0x0))) != 0) {
                    t101 = t102;
                    t100 = 0x3F4;
                    t101 = (t101 << 1);
                    t101 = (t101 + t102);
                    u104 = (*(float *)((a4 + t100)));
                    t101 = (t101 << 2);
                    u104 = (u104 + 4.0f);
                    t100 = 0x4;
                    u103 = (*(float *)((((0x370 + a4) + t101) + t100)));
                    if (u104 > u103) {
                        break;
                    }
                    t102 = (t102 + 0x1);
                    if ((int)t102 >= (int)0x3) {
                        t100 = 0x3E0;
                        if ((int)(*(int *)((a4 + t100))) < 0) {
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                            t100 = 0x3FC;
                            if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                t101 = a4;
                                t100 = (FUN_0c037ee8(t101));
                                return t100;
                            }
                            return t100;
                        }
                        t101 = a4;
                        t100 = (FUN_0c037e44(t101));
                        if (t100 != 0) {
                            t101 = a4;
                            t100 = (FUN_0c0376f4(t101));
                            t100 = 0x238;
                            if ((((*(int *)((a4 + t100))) != 0) && (t100 = 0x3E0, t117 = *(int *)((a4 + t100)), t117 != 0)) || (((t100 = 0x23C, t118 = *(int *)((a4 + t100)), t118 != 0) && (t100 = 0x3E0, t119 = *(int *)((a4 + t100)), t100 = t119, t100 != 1)) || ((t100 = 0x240, t120 = *(int *)((a4 + t100)), t120 != 0) && (t100 = 0x3E0, t121 = *(int *)((a4 + t100)), t100 = t121, t100 != 2)))) {
                                t100 = 0x3F8;
                                *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                t101 = a4;
                                t100 = (FUN_0c037c66(t101));
                                t100 = 0x3E0;
                                *(unsigned int *)((a4 + t100)) = 0xFFFFFFFF;
                                t100 = 0x21C;
                                if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + t100))) & 0x1)) {
                                    t101 = 0x0;
                                    for (;;) {
                                        if (((*(int *)((((t101 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t100 = 0x3DC, t127 = *(int *)((a4 + t100)), t127 != t101)) {
                                            t100 = 0x3F4;
                                            u104 = (*(float *)((a4 + t100)));
                                            u104 = (u104 + 4.0f);
                                            t100 = 0x4;
                                            u103 = (*(float *)((((((t101 << 1) + t101) << 2) + (0x370 + a4)) + t100)));
                                            if (u104 > u103) {
                                                break;
                                            }
                                            t101 = (t101 + 0x1);
                                            if ((int)t101 >= (int)0x3) {
                                                t100 = 0x3E0;
                                                if ((int)(*(int *)((a4 + t100))) >= 0) {
                                                    t100 = 0x22C;
                                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                                    t100 = (t100 + 0x4);
                                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                                    t100 = (t100 + 0x4);
                                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                                    t100 = 0x3F8;
                                                    *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                                    t100 = 0xC;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                                    t100 = 0xC;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                                    t100 = 0xC;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                                    t100 = 0x3FC;
                                                    if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                                        t101 = a4;
                                                        t100 = (FUN_0c037ee8(t101));
                                                        return t100;
                                                    }
                                                    return t100;
                                                }
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                                t100 = 0x3FC;
                                                if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                                    t101 = a4;
                                                    t100 = (FUN_0c037ee8(t101));
                                                    return t100;
                                                }
                                                return t100;
                                            }
                                            continue;
                                        }
                                        t101 = (t101 + 0x1);
                                        if ((int)t101 >= (int)0x3) {
                                            t100 = 0x3E0;
                                            if ((int)(*(int *)((a4 + t100))) >= 0) {
                                                t100 = 0x22C;
                                                *(unsigned int *)((a4 + t100)) = 0x0;
                                                t100 = (t100 + 0x4);
                                                *(unsigned int *)((a4 + t100)) = 0x0;
                                                t100 = (t100 + 0x4);
                                                *(unsigned int *)((a4 + t100)) = 0x0;
                                                t100 = 0x3F8;
                                                *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                                t100 = 0x3FC;
                                                if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                                    t101 = a4;
                                                    t100 = (FUN_0c037ee8(t101));
                                                    return t100;
                                                }
                                                return t100;
                                            }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                            t100 = 0x3FC;
                                            if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                                t101 = a4;
                                                t100 = (FUN_0c037ee8(t101));
                                                return t100;
                                            }
                                            return t100;
                                        }
                                    }
                                    t100 = 0x3E0;
                                    *(unsigned int *)((a4 + t100)) = t101;
                                    t100 = 0x3E0;
                                    if ((int)(*(int *)((a4 + t100))) >= 0) {
                                        t100 = 0x22C;
                                        *(unsigned int *)((a4 + t100)) = 0x0;
                                        t100 = (t100 + 0x4);
                                        *(unsigned int *)((a4 + t100)) = 0x0;
                                        t100 = (t100 + 0x4);
                                        *(unsigned int *)((a4 + t100)) = 0x0;
                                        t100 = 0x3F8;
                                        *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                        t100 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                        t100 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                        t100 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                        t100 = 0x3FC;
                                        if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                            t101 = a4;
                                            t100 = (FUN_0c037ee8(t101));
                                            return t100;
                                        }
                                        return t100;
                                    }
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                    t100 = 0x3FC;
                                    if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                        t101 = a4;
                                        t100 = (FUN_0c037ee8(t101));
                                        return t100;
                                    }
                                    return t100;
                                }
                                t100 = 0x3E0;
                                if ((int)(*(int *)((a4 + t100))) >= 0) {
                                    t100 = 0x22C;
                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                    t100 = (t100 + 0x4);
                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                    t100 = (t100 + 0x4);
                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                    t100 = 0x3F8;
                                    *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                    t100 = 0x3FC;
                                    if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                        t101 = a4;
                                        t100 = (FUN_0c037ee8(t101));
                                        return t100;
                                    }
                                    return t100;
                                }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                t100 = 0x3FC;
                                if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                    t101 = a4;
                                    t100 = (FUN_0c037ee8(t101));
                                    return t100;
                                }
                                return t100;
                            }
                            t100 = 0x22C;
                            *(unsigned int *)((a4 + t100)) = 0x0;
                            t100 = (t100 + 0x4);
                            *(unsigned int *)((a4 + t100)) = 0x0;
                            t100 = (t100 + 0x4);
                            *(unsigned int *)((a4 + t100)) = 0x0;
                            t100 = 0x3F8;
                            *(unsigned int *)((a4 + t100)) = 0x2;
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                            t100 = 0x3FC;
                            if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                t101 = a4;
                                t100 = (FUN_0c037ee8(t101));
                                return t100;
                            }
                            return t100;
                        }
                        t100 = 0x410;
                        if ((*(int *)((a4 + t100))) == 0) {
                            t101 = 0x2CA9;
                            t100 = (FUN_0c0cc3f8(t101, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
                            t100 = 0x410;
                            *(unsigned int *)((a4 + t100)) = 0x1;
                            t100 = 0x224;
                            t101 = a4;
                            t101 = (t101 + 0x30);
                            t100 = (FUN_0c086bda(t101, ((*(float *)((a4 + t100))) * 5.0f)));
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                            t100 = 0x3FC;
                            if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                t101 = a4;
                                t100 = (FUN_0c037ee8(t101));
                                return t100;
                            }
                            return t100;
                        }
                        t100 = 0x224;
                        t101 = a4;
                        t101 = (t101 + 0x30);
                        t100 = (FUN_0c086bda(t101, ((*(float *)((a4 + t100))) * 5.0f)));
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                        t100 = 0x3FC;
                        if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                            t101 = a4;
                            t100 = (FUN_0c037ee8(t101));
                            return t100;
                        }
                        return t100;
                    }
                    continue;
                }
                t102 = (t102 + 0x1);
                if ((int)t102 >= (int)0x3) {
                    t100 = 0x3E0;
                    if ((int)(*(int *)((a4 + t100))) < 0) {
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                        t100 = 0x3FC;
                        if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                            t101 = a4;
                            t100 = (FUN_0c037ee8(t101));
                            return t100;
                        }
                        return t100;
                    }
                    t101 = a4;
                    t100 = (FUN_0c037e44(t101));
                    if (t100 != 0) {
                        t101 = a4;
                        t100 = (FUN_0c0376f4(t101));
                        t100 = 0x238;
                        if ((((*(int *)((a4 + t100))) != 0) && (t100 = 0x3E0, t178 = *(int *)((a4 + t100)), t178 != 0)) || (((t100 = 0x23C, t179 = *(int *)((a4 + t100)), t179 != 0) && (t100 = 0x3E0, t180 = *(int *)((a4 + t100)), t100 = t180, t100 != 1)) || ((t100 = 0x240, t181 = *(int *)((a4 + t100)), t181 != 0) && (t100 = 0x3E0, t182 = *(int *)((a4 + t100)), t100 = t182, t100 != 2)))) {
                            t100 = 0x3F8;
                            *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                            t101 = a4;
                            t100 = (FUN_0c037c66(t101));
                            t100 = 0x3E0;
                            *(unsigned int *)((a4 + t100)) = 0xFFFFFFFF;
                            t100 = 0x21C;
                            if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + t100))) & 0x1)) {
                                t101 = 0x0;
                                for (;;) {
                                    if (((*(int *)((((t101 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t100 = 0x3DC, t188 = *(int *)((a4 + t100)), t188 != t101)) {
                                        t100 = 0x3F4;
                                        u104 = (*(float *)((a4 + t100)));
                                        u104 = (u104 + 4.0f);
                                        t100 = 0x4;
                                        u103 = (*(float *)((((((t101 << 1) + t101) << 2) + (0x370 + a4)) + t100)));
                                        if (u104 > u103) {
                                            break;
                                        }
                                        t101 = (t101 + 0x1);
                                        if ((int)t101 >= (int)0x3) {
                                            t100 = 0x3E0;
                                            if ((int)(*(int *)((a4 + t100))) >= 0) {
                                                t100 = 0x22C;
                                                *(unsigned int *)((a4 + t100)) = 0x0;
                                                t100 = (t100 + 0x4);
                                                *(unsigned int *)((a4 + t100)) = 0x0;
                                                t100 = (t100 + 0x4);
                                                *(unsigned int *)((a4 + t100)) = 0x0;
                                                t100 = 0x3F8;
                                                *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                                t100 = 0xC;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                                t100 = 0x3FC;
                                                if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                                    t101 = a4;
                                                    t100 = (FUN_0c037ee8(t101));
                                                    return t100;
                                                }
                                                return t100;
                                            }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                            t100 = 0x3FC;
                                            if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                                t101 = a4;
                                                t100 = (FUN_0c037ee8(t101));
                                                return t100;
                                            }
                                            return t100;
                                        }
                                        continue;
                                    }
                                    t101 = (t101 + 0x1);
                                    if ((int)t101 >= (int)0x3) {
                                        t100 = 0x3E0;
                                        if ((int)(*(int *)((a4 + t100))) >= 0) {
                                            t100 = 0x22C;
                                            *(unsigned int *)((a4 + t100)) = 0x0;
                                            t100 = (t100 + 0x4);
                                            *(unsigned int *)((a4 + t100)) = 0x0;
                                            t100 = (t100 + 0x4);
                                            *(unsigned int *)((a4 + t100)) = 0x0;
                                            t100 = 0x3F8;
                                            *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                            t100 = 0xC;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                            t100 = 0x3FC;
                                            if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                                t101 = a4;
                                                t100 = (FUN_0c037ee8(t101));
                                                return t100;
                                            }
                                            return t100;
                                        }
                                        t100 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                        t100 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                        t100 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                        t100 = 0x3FC;
                                        if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                            t101 = a4;
                                            t100 = (FUN_0c037ee8(t101));
                                            return t100;
                                        }
                                        return t100;
                                    }
                                }
                                t100 = 0x3E0;
                                *(unsigned int *)((a4 + t100)) = t101;
                                t100 = 0x3E0;
                                if ((int)(*(int *)((a4 + t100))) >= 0) {
                                    t100 = 0x22C;
                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                    t100 = (t100 + 0x4);
                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                    t100 = (t100 + 0x4);
                                    *(unsigned int *)((a4 + t100)) = 0x0;
                                    t100 = 0x3F8;
                                    *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                    t100 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                    t100 = 0x3FC;
                                    if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                        t101 = a4;
                                        t100 = (FUN_0c037ee8(t101));
                                        return t100;
                                    }
                                    return t100;
                                }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                t100 = 0x3FC;
                                if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                    t101 = a4;
                                    t100 = (FUN_0c037ee8(t101));
                                    return t100;
                                }
                                return t100;
                            }
                            t100 = 0x3E0;
                            if ((int)(*(int *)((a4 + t100))) >= 0) {
                                t100 = 0x22C;
                                *(unsigned int *)((a4 + t100)) = 0x0;
                                t100 = (t100 + 0x4);
                                *(unsigned int *)((a4 + t100)) = 0x0;
                                t100 = (t100 + 0x4);
                                *(unsigned int *)((a4 + t100)) = 0x0;
                                t100 = 0x3F8;
                                *(unsigned int *)((a4 + t100)) = ((*(int *)((a4 + t100))) + 0x1);
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                t100 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                t100 = 0x3FC;
                                if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                    t101 = a4;
                                    t100 = (FUN_0c037ee8(t101));
                                    return t100;
                                }
                                return t100;
                            }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                            t100 = 0xC;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                            t100 = 0x3FC;
                            if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                                t101 = a4;
                                t100 = (FUN_0c037ee8(t101));
                                return t100;
                            }
                            return t100;
                        }
                        t100 = 0x22C;
                        *(unsigned int *)((a4 + t100)) = 0x0;
                        t100 = (t100 + 0x4);
                        *(unsigned int *)((a4 + t100)) = 0x0;
                        t100 = (t100 + 0x4);
                        *(unsigned int *)((a4 + t100)) = 0x0;
                        t100 = 0x3F8;
                        *(unsigned int *)((a4 + t100)) = 0x2;
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                        t100 = 0x3FC;
                        if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                            t101 = a4;
                            t100 = (FUN_0c037ee8(t101));
                            return t100;
                        }
                        return t100;
                    }
                    t100 = 0x410;
                    if ((*(int *)((a4 + t100))) == 0) {
                        t101 = 0x2CA9;
                        t100 = (FUN_0c0cc3f8(t101, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
                        t100 = 0x410;
                        *(unsigned int *)((a4 + t100)) = 0x1;
                        t100 = 0x224;
                        t101 = a4;
                        t101 = (t101 + 0x30);
                        t100 = (FUN_0c086bda(t101, ((*(float *)((a4 + t100))) * 5.0f)));
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                        t100 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                        t100 = 0x3FC;
                        if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                            t101 = a4;
                            t100 = (FUN_0c037ee8(t101));
                            return t100;
                        }
                        return t100;
                    }
                    t100 = 0x224;
                    t101 = a4;
                    t101 = (t101 + 0x30);
                    t100 = (FUN_0c086bda(t101, ((*(float *)((a4 + t100))) * 5.0f)));
                    t100 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                    t100 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                    t100 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                    t100 = 0x3FC;
                    if (((*(int *)((a4 + t100))) & 0x1) == 0) {
                        t101 = a4;
                        t100 = (FUN_0c037ee8(t101));
                        return t100;
                    }
                    return t100;
                }
            }
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (((*(float *)(((0x3F4 + a4) + 0x0))) - (*(float *)(((0x4 + (t101 + (0x370 + a4))) + 0x0)))) + 4.0f));
            FUN_0c0376f4(a4);
            *(unsigned int *)((a4 + 0x3E0)) = t102;
        }
        if ((int)(*(int *)((a4 + 0x3E0))) < 0) {
        } else {
            t240 = FUN_0c037e44(a4);
            if (t240 != 0) {
                FUN_0c0376f4(a4);
                if ((((*(int *)((a4 + 0x238))) != 0) && (t244 = *(int *)((a4 + 0x3E0)), t244 != 0)) || (((t245 = *(int *)((a4 + 0x23C)), t245 != 0) && (t246 = *(int *)((a4 + 0x3E0)), t246 != 1)) || ((t247 = *(int *)((a4 + 0x240)), t247 != 0) && (t248 = *(int *)((a4 + 0x3E0)), t248 != 2)))) {
                    *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
                    FUN_0c037c66(a4);
                    *(unsigned int *)((a4 + 0x3E0)) = 0xFFFFFFFF;
                    if (((*(int *)0xC23A258) & 0x1) == ((*(int *)((a4 + 0x21C))) & 0x1)) {
                        t253 = 0x21C;
                        t254 = 0x0;
                        for (;;) {
                            if (((*(int *)((((t254 << 2) + (0x238 + a4)) + 0x0))) != 0) && (t253 = 0x3DC, t258 = *(int *)((a4 + t253)), t258 != t254)) {
                                t253 = 0x3F4;
                                u256 = (*(float *)((a4 + t253)));
                                u256 = (u256 + 4.0f);
                                t253 = 0x4;
                                if (u256 > ((*(float *)((((((t254 << 1) + t254) << 2) + (0x370 + a4)) + t253))))) {
                                    break;
                                }
                                t254 = (t254 + 0x1);
                                if ((int)t254 >= (int)0x3) {
                                    t253 = 0x3E0;
                                    if ((int)(*(int *)((a4 + t253))) >= 0) {
                                        t253 = 0x22C;
                                        *(unsigned int *)((a4 + t253)) = 0x0;
                                        t253 = (t253 + 0x4);
                                        *(unsigned int *)((a4 + t253)) = 0x0;
                                        t253 = (t253 + 0x4);
                                        *(unsigned int *)((a4 + t253)) = 0x0;
                                        t253 = 0x3F8;
                                        *(unsigned int *)((a4 + t253)) = ((*(int *)((a4 + t253))) + 0x1);
                                        t253 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                        t253 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                        t253 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                        t253 = 0x3FC;
                                        if (((*(int *)((a4 + t253))) & 0x1) == 0) {
                                            t254 = a4;
                                            t253 = (FUN_0c037ee8(t254));
                                            return t253;
                                        }
                                        return t253;
                                    }
                                    t253 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                    t253 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                    t253 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                    t253 = 0x3FC;
                                    if (((*(int *)((a4 + t253))) & 0x1) == 0) {
                                        t254 = a4;
                                        t253 = (FUN_0c037ee8(t254));
                                        return t253;
                                    }
                                    return t253;
                                }
                                continue;
                            }
                            t254 = (t254 + 0x1);
                            if ((int)t254 >= (int)0x3) {
                                t253 = 0x3E0;
                                if ((int)(*(int *)((a4 + t253))) >= 0) {
                                    t253 = 0x22C;
                                    *(unsigned int *)((a4 + t253)) = 0x0;
                                    t253 = (t253 + 0x4);
                                    *(unsigned int *)((a4 + t253)) = 0x0;
                                    t253 = (t253 + 0x4);
                                    *(unsigned int *)((a4 + t253)) = 0x0;
                                    t253 = 0x3F8;
                                    *(unsigned int *)((a4 + t253)) = ((*(int *)((a4 + t253))) + 0x1);
                                    t253 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                    t253 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                    t253 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                    t253 = 0x3FC;
                                    if (((*(int *)((a4 + t253))) & 0x1) == 0) {
                                        t254 = a4;
                                        t253 = (FUN_0c037ee8(t254));
                                        return t253;
                                    }
                                    return t253;
                                }
                                t253 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                                t253 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                                t253 = 0xC;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                                t253 = 0x3FC;
                                if (((*(int *)((a4 + t253))) & 0x1) == 0) {
                                    t254 = a4;
                                    t253 = (FUN_0c037ee8(t254));
                                    return t253;
                                }
                                return t253;
                            }
                        }
                        *(unsigned int *)((a4 + 0x3E0)) = t254;
                    }
                    if ((int)(*(int *)((a4 + 0x3E0))) >= 0) {
                        *(unsigned int *)((a4 + 0x22C)) = 0x0;
                        *(unsigned int *)((a4 + 0x230)) = 0x0;
                        *(unsigned int *)((a4 + 0x234)) = 0x0;
                        *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) + 0x1);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x22C)) = 0x0;
                    *(unsigned int *)((a4 + 0x230)) = 0x0;
                    *(unsigned int *)((a4 + 0x234)) = 0x0;
                    *(unsigned int *)((a4 + 0x3F8)) = 0x2;
                }
            } else {
                if ((*(int *)((a4 + 0x410))) == 0) {
                    FUN_0c0cc3f8(0x2CA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    *(unsigned int *)((a4 + 0x410)) = 0x1;
                }
                FUN_0c086bda((a4 + 0x30), ((*(float *)((a4 + 0x224))) * 5.0f));
            }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
    t328 = 0x3FC;
    if (((*(int *)((a4 + 0x3FC))) & 0x1) == 0) {
        t328 = (FUN_0c037ee8(a4));
    }
    return t328;
}

int FUN_0c02c6ee(int a4, float f4)
{
    int t11;
    int t86;
    int t85;
    int t27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u35;
    float u37;
    float t69;
    float t71;
    float t73;
    int t103;
    float u5;
    int stk[28];

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        t103 = 0x474;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFF7FF);
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & 0xFFFFF00F);
        if ((((*(float *)((a4 + 0x390))) + 10.0f) > (*(float *)((a4 + 0x34)))) && (u5 = *(float *)((a4 + 0x4C)), !(u5 > 0.0f))) {
            *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + 10.0f);
            *(float *)((a4 + 0x64)) = 0.0f;
        }
        *(float *)((a4 + 0x4B0)) = 0.0f;
        *(float *)((a4 + 0x4B4)) = 0.0f;
        *(float *)((a4 + 0x4B8)) = 0.0f;
        t11 = *(int *)((a4 + 0x4C8));
        t86 = t11;
        if (t11 == 2) {
        } else {
            t85 = 0;
            if ((*(int *)((a4 + 0x50C))) == 0) {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)((a4 + 0x24C))), (*(float *)((a4 + 0x250))), (*(float *)((a4 + 0x254))));
                nlRotateAY((*(int *)((a4 + 0x52C))));
                *(float *)(((int)stk + 60)) = 0.0f;
                *(float *)(((int)stk + 64)) = 3.0f;
                *(float *)(((int)stk + 68)) = -15.0f;
                FUN_0c0db470((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C));
                *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 48)));
                *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 52)));
                *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 56)));
                nlPopMatrix(0x1);
                t85 = (1);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x38)) = *(struct mv3 *)((0x24C + a4)); }
                t27 = *(int *)((a4 + 0x510));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x2C)) = *(struct mv3 *)(((((((t27 << 1) + t27) << 2) << 2) << 2) + 0xC23F268)); }
                u28 = *(float *)(((((int)stk + 4) + 0x38) + 0x0));
                u29 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
                u30 = *(float *)(((((int)stk + 4) + 0x38) + 0x4));
                u31 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
                u32 = *(float *)(((((int)stk + 4) + 0x2C) + 0x8));
                u33 = *(float *)(((((int)stk + 4) + 0x38) + 0x8));
                u35 = ((u30 - u29) * (u30 - u29));
                u35 = u35 + (u28 - u31) * (u28 - u31);
                u37 = u35;
                u37 = u37 + (u33 - u32) * (u33 - u32);
                FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x38) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x2C) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x38) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x2C) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x38) + 0x8))) - u32));
                if (_builtin_sqrtf(u37) > 35.0f) {
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    FUN_0c0dcc70((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x4))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x8))));
                    nlRotateAY((*(int *)(((int)stk + 8))));
                    nlRotateAX((*(int *)(((int)stk + 4))));
                    *(float *)(((int)stk + 36)) = 0.0f;
                    *(float *)(((int)stk + 40)) = 0.0f;
                    *(float *)(((int)stk + 44)) = 30.0f;
                    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                    *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 32)));
                    nlPopMatrix(0x1);
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x38)); }
                }
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY((*(int *)(((int)stk + 8))));
                nlRotateAX((*(int *)(((int)stk + 4))));
                t69 = FUN_0c0da410(((*(int *)0xC23A258) * 0x333));
                *(float *)(((int)stk + 24)) = (t69 * 2.5f);
                t71 = FUN_0c0d9e90(((*(int *)0xC23A258) * 0x333));
                *(float *)(((int)stk + 28)) = (t71 * 2.5f);
                t73 = FUN_0c0da410(((*(int *)0xC23A258) * 0x222));
                *(float *)(((int)stk + 32)) = (t73 * 5.0f);
                FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
                *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
                *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 20)));
                nlPopMatrix(0x1);
                nlAddVector((0x518 + a4), (((int)stk + 4) + 0x20));
                _builtin_sqrtf(u37);
                t85 = ((_builtin_sqrtf(u37) > 35.0f));
            }
            *(unsigned int *)((a4 + 0x514)) = 0x1;
            t86 = 0x514;
        }
        t103 = t86;
    }
    return t103;
}

int FUN_0c087510(int a4)
{
    int t0;
    int t5;
    int t6;
    int t10;
    int t19;
    int t28;
    float u40;
    int t41;
    int t46;
    float u49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t55;
    int t58;
    int t72;
    float u76;
    int t79;
    int t21;
    int t22;
    int t12;
    int t13;
    int t27;
    int t36;
    int stk[17];

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t0 = *(int *)((a4 + 0x58));
    if (t0 != 9) {
        if (t0 != 10) {
            t5 = 0x0;
            t6 = 0xA;
            if ((int)(*(int *)(((*(int *)((a4 + 0x30))) + 0x304))) <= 0) {
                t5 = 0x3;
                t6 = 0x3C;
            }
            t12 = t5;
            t13 = t6;
        } else {
            *(unsigned int *)(((int)stk + 16)) = 0x3;
            t10 = 0x19;
            if ((int)(*(int *)(((*(int *)((a4 + 0x30))) + 0x304))) <= 0) {
                t10 = 0x3C;
            }
            t12 = 0x3;
            t13 = t10;
        }
        t21 = t12;
        t22 = t13;
    } else {
        t19 = 0x5;
        if ((int)(*(int *)(((*(int *)((a4 + 0x30))) + 0x304))) <= 0) {
            t19 = 0x18;
        }
        t21 = 0x0;
        t22 = t19;
    }
    if (((int)(*(int *)((a4 + 0x40))) < (int)0x3) && (t27 = *(int *)0xC23ED84, t27 == 1)) {
        t28 = FUN_0c0e1830(0xC08C1AA, 0xA4);
        FUN_0c0e19d0(t28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t28 + 0x70)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned short *)((t28 + 0x8A)) = (*(short *)((a4 + 0x5C)));
        *(float *)((t28 + 0x90)) = 10.0f;
        *(unsigned short *)((t28 + 0x9A)) = 0xFF;
        *(unsigned short *)((t28 + 0xA0)) = 0x6;
        *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
    } else {
        t36 = 0x3C;
    }
    if ((int)(*(int *)((a4 + 0x44))) >= (int)t22) {
        return FUN_0c0e19f2(t36);
    }
    u40 = 0.299999982f;
    u40 = u40 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 12)) = u40;
    t41 = FUN_0c0da2e0();
    *(unsigned int *)(((int)stk + 4)) = ((((FUN_0c0da2e0()) & 0x3FFF) + (*(int *)(((0x5C + a4) + 0x0)))) - 24575);
    *(unsigned int *)(((int)stk + 8)) = (((FUN_0c0da2e0()) & 0x1FFF) + 0x71C);
    nlPushMatrix(0x0);
    t46 = ((t41 & 0x3) + t21);
    for (;;) {
        u49 = (*(float *)(((int)stk + 12)));
        u49 = u49 + 1.22074025e-05f * (float)(FUN_0c0da2e0());
        t50 = FUN_0c0da2e0();
        t51 = *(int *)(((int)stk + 4));
        t52 = FUN_0c0da2e0();
        t53 = *(int *)(((int)stk + 8));
        t55 = FUN_0c0e19aa(0xC087834, 0x64, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t55);
        if ((int)t46 <= (int)(*(int *)(((int)stk + 16)))) {
            t58 = *(int *)((a4 + 0x48));
            *(unsigned int *)((a4 + 0x48)) = (t58 + 0x1);
            if (((t58 + 0x1) & 0x8) != 0) {
                *(unsigned int *)(((0x58 + t55) + 0x0)) = 0x1;
            }
        }
        nlUnitMatrix();
        nlRotateAY((((0x1FF & t50) + t51) - 256));
        nlRotateAX((-((unsigned char)t52 + t53)));
        *(float *)((t55 + 0x44)) = (u49 + -0.199999988f);
        FUN_0c0db470((t55 + 0x3C), (t55 + 0x3C));
        t72 = *(int *)(((*(int *)((a4 + 0x30))) + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t55 + 0x30)) = *(struct mv3 *)(((((((t72 << 1) + t72) << 2) << 2) << 2) + 0xC23F274)); }
        *(unsigned int *)((t55 + 0x60)) = (unsigned short)(*(short *)((((*(int *)0xC23ED84) << 1) + 0xC10AA78)));
        u76 = 2.19999981f;
        u76 = u76 + 1.83111042e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t55 + 0x48)) = u76;
        *(unsigned short *)((t55 + 0x50)) = (int)((u49 + -0.199999988f) * 6826.0f);
        nlAddVector((t55 + 0x30), (t55 + 0x3C));
        *(unsigned short *)((t55 + 0x54)) = (((0x1FF & t50) + t51) - 256);
        *(unsigned short *)((t55 + 0x52)) = ((unsigned char)t52 + t53);
        *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + 0x1);
        t79 = (t46 == 0);
        t46 = (t46 - 1);
        if (!t79) continue;
        break;
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0635ec(int a4, int a5)
{
    int t1;
    int t71;
    int t3;
    int t12;
    int t14;
    float u38;
    int t16;
    int stk[25];

    t1 = FUN_0c0a4bb2((*(int *)((a4 + 0xBC))));
    t71 = t1;
    if (t1 == 0) {
    } else {
        t3 = FUN_0c0e19aa(0xC06348E, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t3);
        *(unsigned int *)((t3 + 0xBC)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)(((0x200 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
        if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
            t12 = 0x0;
            if ((*(signed char *)((a5 + 0x4))) != 0) {
                t12 = (*(int *)((a4 + 0x1EC)));
            }
            t16 = t12;
        } else {
            t14 = *(int *)((a4 + 0xBC));
            t16 = (((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31)));
        }
        *(unsigned int *)((t3 + 0x1EC)) = t16;
        FUN_0c0cc3f8(0x52BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        *(unsigned int *)(((0x1E8 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
        *(unsigned int *)(((0x1F4 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
        *(unsigned int *)(((0x204 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
        *(float *)((t3 + 0x1E4)) = 1.0f;
        *(unsigned int *)(((0x1FC + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
        *(unsigned int *)((t3 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
        *(unsigned int *)(((0x22C + t3) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
        *(unsigned int *)((t3 + 0x220)) = 0x125C;
        *(float *)((t3 + 0x24C)) = (*(float *)((a5 + 0xC)));
        nlPushMatrix(0x0);
        FUN_0c0dbda0((*(int *)((a4 + 0x3E4))));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
        *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 1.0f;
        FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
        *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 4) + 0x2C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 4) + 0x2C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
        u38 = *(float *)((a4 + 0x284));
        nlScale((1.0f / u38), (1.0f / u38), (1.0f / u38));
        FUN_0c0de000((1.0f / (*(float *)((a4 + 0x284)))));
        *(float *)(((int)stk + 24)) = (*(float *)((t1 + 0x0)));
        *(float *)(((int)stk + 28)) = (*(float *)((t1 + 0x4)));
        *(float *)(((int)stk + 32)) = (*(float *)((t1 + 0x8)));
        FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
        *(float *)(((t3 + 0x30) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)(((t3 + 0x34) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)(((t3 + 0x38) + 0x0)) = (*(float *)(((int)stk + 20)));
        nlPopMatrix(0x1);
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x8)))));
        *(unsigned short *)((t3 + 0x6C)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)((t3 + 0x6E)) = (*(int *)(((int)stk + 8)));
        *(unsigned short *)((t3 + 0x70)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x3C)) = *(struct mv3 *)((t3 + 0x30)); }
        *(float *)((t3 + 0x258)) = (*(float *)((a4 + 0x390)));
        *(float *)((t3 + 0x2A4)) = 0.0f;
        *(float *)((t3 + 0x2A8)) = 0.0f;
        *(float *)((t3 + 0x2AC)) = 0.0f;
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(short *)((t3 + 0x6E))));
        nlRotateAX((*(short *)((t3 + 0x6C))));
        *(float *)(((int)stk + 48)) = 0.0f;
        *(float *)(((int)stk + 52)) = 0.0f;
        *(float *)(((int)stk + 56)) = -0.049999997f;
        FUN_0c0db470((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20));
        *(float *)(((0x2B0 + t3) + 0x0)) = (*(float *)(((int)stk + 36)));
        *(float *)(((0x2B4 + t3) + 0x0)) = (*(float *)(((int)stk + 40)));
        *(float *)(((0x2B8 + t3) + 0x0)) = (*(float *)(((int)stk + 44)));
        t71 = (nlPopMatrix(0x1));
    }
    return t71;
}

int FUN_0c05e158(int a4, int a5, int a6)
{
    int t3;
    int t21;
    float u30;
    int t38;
    float u70;
    int t45;
    int t50;
    int t51;
    float u111;
    int t118;
    int t19;
    float u35;
    int stk[10];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0F9C38); }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t3 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t3 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t3 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t19 = a4;
    }
    t21 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t21 - 1);
    if ((int)(t21 - 1) <= 0) {
        FUN_0c0e19f2(t19);
    }
    if ((*(int *)((a4 + 0x23C))) == 0) {
        *(unsigned int *)((a4 + 0x23C)) = 0x1;
        u30 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
        *(float *)((a4 + 0x238)) = (0.099999994f - u30);
        u35 = u30;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    }
    if ((*(int *)((a4 + 0xD4))) != 0) {
        t38 = *(int *)((a4 + 0x244));
        *(unsigned int *)((a4 + 0x244)) = (t38 - 1);
        if ((int)(t38 - 1) >= 0) {
            u70 = u35;
            if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xCC))) << 2)))) == 4) {
                t45 = *(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0));
                FUN_0c0a68ec(((int)stk + 4), ((*(float *)((t45 + 0x30))) - (*(float *)((a4 + 0x30)))), ((*(float *)((t45 + 0x38))) - (*(float *)((a4 + 0x38)))));
                t50 = *(int *)(((int)stk + 4));
                t51 = *(short *)((a4 + 0x6E));
                if (_builtin_fabsf((float)(short)(t51 - t50)) > 1280.0f) {
                    if ((int)(short)(t51 - t50) > 0) {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x300);
                        *(unsigned int *)((a4 + 0xEC)) = 0x300;
                    } else {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) - 0x300);
                        *(unsigned int *)((a4 + 0xEC)) = 0xFFFFFD00;
                    }
                }
                u70 = _builtin_fabsf((float)(short)(t51 - t50));
            }
        } else {
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((0xEC + a4) + 0x0))));
            *(unsigned int *)((a4 + 0xEC)) = ((*(int *)((a4 + 0xEC))) - ((((*(int *)(((0xEC + a4) + 0x0))) >> 1) >> 1) >> 1));
        }
    }
    FUN_0c0a6688((((int)stk + 4) + 0x4), (a4 + 0x6C), (a4 + 0x48));
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlRotateAY(0x4000);
    u111 = *(float *)((a4 + 0x24C));
    nlScale((*(float *)((a4 + 0x238))), u111, u111);
    FUN_0c0de000((*(float *)((a4 + 0x238))));
    FUN_0c0c475c((*(int *)((a4 + 0x220))), 0.699999988f);
    t118 = FUN_0c0e1830(0xC05E41C, 0x5C);
    FUN_0c0e19d0(t118);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t118 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0e6248();
    *(unsigned int *)((t118 + 0x30)) = (*(int *)((a4 + 0x220)));
    *(unsigned int *)((t118 + 0x54)) = 0x1E;
    *(float *)((t118 + 0x34)) = (*(float *)((a4 + 0x238)));
    *(float *)((t118 + 0x38)) = (*(float *)((a4 + 0x24C)));
    *(unsigned int *)((t118 + 0x50)) = 0x400;
    return (nlPopMatrix(0x1));
}

int FUN_0c04105c(int a4)
{
    int t0;
    int t14;
    int t5;
    int t6;
    int t33;
    int t21;
    int t29;
    int t23;
    int t25;
    int t45;
    int t78;
    int t47;
    int t72;
    int t48;
    int t49;
    int t92;
    int t102;
    int t93;
    int t94;
    int t106;
    int t84;
    int t37;
    int stk[14];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)((a4 + 0x60)); }
                *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
                nlAddVector((a4 + 0x48), (0x4B0 + a4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
                *(float *)((a4 + 0x4B0)) = 0.0f;
                *(float *)((a4 + 0x4B4)) = 0.0f;
                *(float *)((a4 + 0x4B8)) = 0.0f;
                t14 = 0x34;
                if (!((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390))))) {
                    t5 = *(int *)((a4 + 0x4DC));
                    t6 = *(int *)((a4 + 0x4E0));
                    *(unsigned int *)((a4 + 0x4E0)) = (t6 + 0x1);
                    if ((int)(*(short *)((((((t6 + 0x1) << 2) << 1) + (*(int *)((((((t5 - 76) << 1) + (t5 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                        FUN_0c03f4bc(a4);
                    } else {
                        FUN_0c041dd0(a4);
                    }
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    t14 = 0x4EC;
                }
                t37 = t14;
            } else {
                t33 = t0;
                if (t0 == 3) {
                    t21 = *(int *)((a4 + 0x4E4));
                    *(unsigned int *)((a4 + 0x4E4)) = (t21 - 1);
                    t29 = 0x4E4;
                    if ((int)(t21 - 1) < 0) {
                        t23 = *(int *)((a4 + 0x2EC));
                        t25 = t23;
                        if ((t23 & 12) != 0) {
                            t25 = (FUN_0c03f4bc(a4));
                        }
                        t29 = t25;
                    }
                    t33 = t29;
                }
                t37 = t33;
            }
            t84 = t37;
        } else {
            t45 = *(int *)((a4 + 0x4E4));
            *(unsigned int *)((a4 + 0x4E4)) = (t45 - 1);
            t78 = 0x4E4;
            if ((int)(t45 - 1) >= 0) {
            } else {
                t47 = *(int *)((a4 + 0x2EC));
                t72 = t47;
                if ((t47 & 12) == 0) {
                } else {
                    t48 = *(int *)((a4 + 0x4DC));
                    t49 = *(int *)((a4 + 0x4E0));
                    *(unsigned int *)((a4 + 0x4E0)) = (t49 + 0x1);
                    if ((int)(*(short *)((((((t49 + 0x1) << 2) << 1) + (*(int *)((((((t48 - 76) << 1) + (t48 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                        FUN_0c03f4bc(a4);
                    } else {
                        FUN_0c041dd0(a4);
                    }
                    *(unsigned int *)(((int)stk + 16)) = 0x1000;
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    nlRotateAY((*(short *)((a4 + 0x6E))));
                    nlRotateAX((*(int *)(((int)stk + 16))));
                    *(float *)(((int)stk + 32)) = 0.0f;
                    *(float *)(((int)stk + 36)) = 0.0f;
                    *(float *)(((int)stk + 40)) = -0.25f;
                    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
                    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
                    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)((a4 + 0x4B0)) = (*(float *)(((int)stk + 12)));
                    *(float *)((a4 + 0x4B4)) = (*(float *)(((int)stk + 8)));
                    *(float *)((a4 + 0x4B8)) = (*(float *)(((int)stk + 4)));
                    nlPopMatrix(0x1);
                    nlAddVector((a4 + 0x48), (0x4B0 + a4));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
                    *(float *)((a4 + 0x4B0)) = 0.0f;
                    *(float *)((a4 + 0x4B4)) = 0.0f;
                    *(float *)((a4 + 0x4B8)) = 0.0f;
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    *(unsigned int *)0xC23EDB0 = 0x0;
                    *(unsigned int *)0xC23EDB4 = 0x0;
                    t72 = 0xC23EDB4;
                }
                t78 = t72;
            }
            t84 = t78;
        }
        t106 = t84;
    } else {
        t92 = *(int *)((a4 + 0x4E4));
        *(unsigned int *)((a4 + 0x4E4)) = (t92 - 1);
        t102 = 0x4E4;
        if ((int)(t92 - 1) >= 0) {
        } else {
            t93 = *(int *)((a4 + 0x4DC));
            t94 = *(int *)((a4 + 0x4E0));
            *(unsigned int *)((a4 + 0x4E0)) = (t94 + 0x1);
            if ((int)(*(short *)((((((t94 + 0x1) << 2) << 1) + (*(int *)((((((t93 - 76) << 1) + (t93 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                FUN_0c03f4bc(a4);
            } else {
                FUN_0c041dd0(a4);
            }
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            t102 = 0x4EC;
        }
        t106 = t102;
    }
    return t106;
}
