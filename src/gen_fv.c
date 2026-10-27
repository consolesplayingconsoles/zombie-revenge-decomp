/* Straight-line functions with calls and guards (batch gen_fv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[11]; } Stk11;
extern int FUN_0c0469f6();
int FUN_0c0e5dc0(void);
int FUN_0c21be80(int);
int kmProcessVertexRenderState(int a4);
int FUN_0c049124(int a4, int a5, int a6);
int FUN_0c0494e0(int a4, int a5, int a6);

int kmProcessVertexRenderState(int a4)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t6;
    int t8;
    int t12;
    int t17;
    int t27;
    int t23;
    int t31;
    int t38;
    int t43;
    int t49;
    int t61;
    int t56;
    int t70;
    int t87;
    int t74;
    int t82;
    int t97;
    int t93;
    int t104;
    int t102;
    int t108;
    int t120;
    int t116;
    int t130;
    int t126;
    int t140;
    int t136;
    int t145;
    int t151;
    int t157;
    int t168;
    int t164;
    int t175;
    int t172;
    int t173;
    int t180;
    int t194;
    int t188;
    int t204;
    int t205;
    int t206;
    int t209;
    int t207;
    int t210;
    int t211;
    int t212;
    int t248;
    int t237;
    int t238;
    int t241;
    int t244;
    int t255;
    int t268;
    int t273;
    int t281;
    int t286;
    int t298;
    int t289;
    int t293;
    int t310;
    int t305;
    int t315;
    int t64;
    int t65;
    int t77;
    int t185;
    int t219;
    int t262;
    int t271;
    int t274;
    int stk[18];

    t0 = *(int *)((a4 + 0x94));
    t1 = *(int *)((a4 + 0x98));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x9C)));
    t3 = *(int *)((a4 + 0x90));
    t5 = *(int *)0xC237768;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = (*(int *)0xC237764);
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t5;
    t6 = *(int *)0xC237770;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = (*(int *)0xC23776C);
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0xC)) = t6;
    t8 = *(int *)((a4 + 0x0));
    t12 = t0;
    if ((0x1 & t8) != 0) {
        t12 = ((t0 & 0x1FFFFFFF) | ((*(int *)((a4 + 0x14))) << 29));
    }
    t17 = t12;
    if ((0x2 & t8) != 0) {
        t17 = ((0xE7FFFFFF & t12) | ((*(int *)((a4 + 0x18))) << 27));
    }
    t27 = t17;
    if ((0x20 & t8) != 0) {
        t23 = (t17 & 0xFBFFFFFF);
        if ((*(int *)((a4 + 0x28))) != 0) {
            t23 = (t17 | 0x4000000);
        }
        t27 = t23;
    }
    t31 = t27;
    if ((0x8 & t8) != 0) {
        t31 = ((0xFDFFFFFF & t27) | (((((unsigned int)(*(int *)((a4 + 0x20))) >> 1) << 16) << 8) << 1));
    }
    *(unsigned int *)(((int)stk + 16)) = (0x200 & t8);
    t38 = t31;
    if ((0x200 & t8) != 0) {
        t38 = ((t31 & 0xFEFFFFFF) | (((*(int *)((a4 + 0x40))) << 16) << 8));
    }
    t43 = t38;
    if ((0x8 & t8) != 0) {
        t43 = ((0xFF7FFFFF & t38) | (((*(int *)((a4 + 0x20))) & 0x1) << 23));
    }
    *(unsigned int *)(((int)stk + 8)) = (0x800000 & t8);
    t49 = t43;
    if ((0x800000 & t8) != 0) {
        t49 = ((0xFFBFFFFF & t43) | ((*(int *)((a4 + 0x10))) << 22));
    }
    t61 = t49;
    if ((t8 & 0x4000000) != 0) {
        t56 = (t49 & 0xFFEFFFFF);
        if ((*(int *)((a4 + 0xB4))) != 0) {
            t56 = (t49 | 0x100000);
        }
        t61 = t56;
    }
    t70 = t1;
    if (((0x40 & t8) != 0) && (t64 = *(int *)((a4 + 0x2C)), (unsigned int)t64 < (unsigned int)0xC)) {
        switch ((t64 << 1)) {
            case 0:
            {
                t65 = ((((t1 & 0x1FFFFFFF) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
            }
                break;
            case 2:
            {
                t65 = ((((t1 & 0x1FFFFFFF) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
            }
                break;
            case 4:
            {
                t65 = (0xC0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 6:
            {
                t65 = (0x40000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 8:
            {
                t65 = (0xE0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 10:
            {
                t65 = (0x60000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 12:
            {
                t65 = (0xA0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 14:
            case 18:
            {
                t65 = t1;
            }
                break;
            case 16:
            {
                t65 = (0x80000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 20:
            {
                t65 = (0x20000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            default:
            {
                t65 = (t1 & 0x1FFFFFFF);
            }
                break;
        }
        t70 = t65;
    }
    t87 = t70;
    if ((0x80 & t8) != 0) {
        *(unsigned int *)(((int)stk + 4)) = (t70 & 0x1FFFFFFF);
        t74 = *(int *)((a4 + 0x30));
        t82 = t70;
        if ((unsigned int)t74 < (unsigned int)0xC) {
            switch ((t74 << 1)) {
                case 0:
                {
                    t77 = ((((*(int *)(((int)stk + 4))) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t77 = ((((*(int *)(((int)stk + 4))) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t77 = (0x18000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 6:
                case 10:
                {
                    t77 = t70;
                }
                    break;
                case 8:
                {
                    t77 = (0x1C000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 12:
                {
                    t77 = (0x14000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 14:
                {
                    t77 = (0xC000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 16:
                {
                    t77 = (0x10000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 18:
                {
                    t77 = (0x8000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 20:
                {
                    t77 = ((t70 & 0xE3FFFFFF) | 0x4000000);
                }
                    break;
                default:
                {
                    t77 = (t70 & 0xE3FFFFFF);
                }
                    break;
            }
            t82 = t77;
        }
        t87 = t82;
    }
    t97 = t87;
    if ((t8 & 0x1000000) != 0) {
        t93 = (t87 & 0xFDFFFFFF);
        if ((*(int *)((a4 + 0x34))) != 0) {
            t93 = (t87 | 0x2000000);
        }
        t97 = t93;
    }
    t104 = t97;
    if ((0x2000000 & t8) != 0) {
        t102 = (t97 & 0xFEFFFFFF);
        if ((*(int *)((a4 + 0x38))) != 0) {
            t102 = (t97 | 0x1000000);
        }
        t104 = t102;
    }
    t108 = t104;
    if ((0x100 & t8) != 0) {
        t108 = ((0xFF3FFFFF & t104) | (((*(int *)((a4 + 0x3C))) & 0x3) << 22));
    }
    t120 = t108;
    if ((0x40000 & t8) != 0) {
        t116 = (t108 & 0xFFDFFFFF);
        if ((*(int *)((a4 + 0x64))) != 0) {
            t116 = (t108 | 0x200000);
        }
        t120 = t116;
    }
    t130 = t120;
    if ((0x400 & t8) != 0) {
        t126 = (t120 & 0xFFEFFFFF);
        if ((*(int *)((a4 + 0x44))) != 0) {
            t126 = (t120 | 0x100000);
        }
        t130 = t126;
    }
    t140 = t130;
    if ((0x800 & t8) != 0) {
        t136 = (t130 & 0xFFF7FFFF);
        if ((*(int *)((a4 + 0x48))) != 0) {
            t136 = (t130 | 0x80000);
        }
        t140 = t136;
    }
    t145 = t140;
    if ((t8 & 0x1000) != 0) {
        t145 = ((0xFFFE7FFF & t140) | ((*(int *)((a4 + 0x4C))) << 15));
    }
    t151 = t145;
    if ((0x2000 & t8) != 0) {
        t151 = ((0xFFF9FFFF & t145) | (((*(int *)((a4 + 0x50))) << 16) << 1));
    }
    t157 = t151;
    if ((0x4000 & t8) != 0) {
        t157 = ((0xFFFF9FFF & t151) | ((*(int *)(((((*(int *)((a4 + 0x54))) << 2) + (((int)stk + 4) + 0x14)) + 0x0))) << 13));
    }
    t168 = t157;
    if ((0x8000 & t8) != 0) {
        t164 = (t157 & 0xFFFFEFFF);
        if ((*(int *)((a4 + 0x58))) != 0) {
            t164 = (t157 | 0x1000);
        }
        t168 = t164;
    }
    t175 = t168;
    if ((0x10000 & t8) != 0) {
        t172 = *(int *)((a4 + 0x5C));
        t173 = (t172 & 0xF);
        if ((t172 & 0xF) == 0) {
            t173 = 0x4;
        }
        t175 = ((0xFFFFF0FF & t168) | (t173 << 8));
    }
    t180 = t175;
    if ((0x20000 & t8) != 0) {
        t180 = ((0xFFFFFF3F & t175) | (((((*(int *)((a4 + 0x60))) & 0x3) << 2) << 2) << 2));
    }
    t194 = t180;
    if ((((*(int *)((a4 + 0x20))) >> 1) == 1) && (t185 = *(int *)((a4 + 0x6C)), t185 != 0)) {
        t188 = FUN_0c21be80((*(int *)(((*(int *)((a4 + 0x6C))) + 0xC))));
        *(unsigned int *)(((int)stk + 4)) = ((t180 & 0xFFFFFFC7) | ((t188 << 2) << 1));
        t194 = ((((t180 & 0xFFFFFFC7) | ((t188 << 2) << 1)) & 0xFFFFFFF8) | (FUN_0c21be80((*(int *)(((*(int *)((a4 + 0x6C))) + 0x10))))));
    }
    if (((*(int *)((a4 + 0x20))) >> 1) == 1) {
        if ((*(int *)((a4 + 0x6C))) != 0) {
            t204 = *(int *)((a4 + 0x6C));
            t205 = *(int *)(((int)stk + 12));
            t206 = *(int *)((t204 + 0x18));
            t209 = ((0x1 & t206) & 0x1);
            t207 = (int)(((unsigned int)t209 >> 1) | ((unsigned int)t209 << 31));
            t210 = *(int *)((t204 + 0x8));
            if (((((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000)) & 0x38000000) != 0x28000000) && ((((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000)) & 0x38000000) != 0x30000000)) {
                t211 = *(int *)((a4 + 0x6C));
                *(unsigned int *)(((int)stk + 20)) = t211;
                t212 = *(int *)((t211 + 0x18));
                t219 = ((0xFDFFFFFF & ((((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000)) & 0xFBFFFFFF) | ((((~(0x4 & t212)) & 0x4) << 16) << 8))) | ((t212 & 0x10) << 21));
            } else {
                t219 = ((0xF81FFFFF & ((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000))) | (((*(int *)((a4 + 0x68))) & 0x3F) << 21));
            }
            *(unsigned int *)(((int)stk + 12)) = ((t219 & 0xFFE00000) | ((unsigned int)((unsigned int)(*(int *)(((*(int *)((a4 + 0x6C))) + 0x1C))) >> 2) >> 1));
        }
    }
    t248 = t3;
    if ((0x100000 & t8) != 0) {
        t237 = *(int *)((a4 + 0x4));
        t238 = t3;
        if (t237 == 0) {
            t238 = (0x80000000 | (t3 & 0x1FFFFFFF));
        }
        t241 = t238;
        if (t237 == 1) {
            t241 = (0x80000000 | (t238 & 0x1FFFFFFF));
        }
        t244 = t241;
        if (t237 == 2) {
            t244 = (0xA0000000 | (0x1FFFFFFF & t241));
        }
        t248 = t244;
    }
    t255 = t248;
    if ((0x200000 & t8) != 0) {
        t255 = ((0xF8FFFFFF & t248) | (((*(int *)((a4 + 0x8))) << 16) << 8));
    }
    if ((0x8000000 & t8) != 0) {
        t262 = (*(int *)((a4 + 0xB8)));
    } else {
        t262 = (*(int *)0xC9524D8);
    }
    t268 = (((t262 << 16) << 2) | (0xFFF3FFFF & (t255 | 0x800000)));
    if ((0x10000000 & t8) != 0) {
        t268 = ((0xFFFCFFFF & (((t262 << 16) << 2) | (0xFFF3FFFF & (t255 | 0x800000)))) | ((*(int *)((a4 + 0xBC))) << 16));
    }
    t273 = (0xFFFFFF3F & t268);
    if ((((*(int *)((a4 + 0xA0))) & 0x60000000) != 0) && (t271 = *(int *)((a4 + 0x8)), (t271 & 1) != 0)) {
        t273 = (0x40 | (0xFFFFFF3F & t268));
    }
    t281 = t273;
    if (((0x10 & t8) != 0) && (t274 = *(int *)((a4 + 0x24)), (t274 & 1) != 0)) {
        t281 = ((0xFFFFFFBF & ((0xFFFFFF7F & t273) | ((*(int *)((a4 + 0x24))) << 7))) | ((((*(int *)0xC239B24) << 2) << 2) << 2));
    }
    t286 = t281;
    if ((t8 & 0x400000) != 0) {
        t286 = ((0xFFFFFFCF & t281) | (((*(int *)((a4 + 0xC))) << 2) << 2));
    }
    t298 = t286;
    if ((0x8 & t8) != 0) {
        t289 = *(int *)((a4 + 0x20));
        t293 = ((0xFFFFFFF7 & t286) | ((((unsigned int)t289 >> 1) << 2) << 1));
        if ((0x8 & t8) != 0) {
            t293 = ((0xFFFFFFFD & ((0xFFFFFFF7 & t286) | ((((unsigned int)t289 >> 1) << 2) << 1))) | (((*(int *)((a4 + 0x20))) & 0x1) << 1));
        }
        t298 = t293;
    }
    t310 = t298;
    if ((*(int *)(((int)stk + 16))) != 0) {
        t305 = (t298 & 0xFFFFFFFB);
        if ((*(int *)((a4 + 0x40))) != 0) {
            t305 = (t298 | 0x4);
        }
        t310 = t305;
    }
    t315 = t310;
    if ((*(int *)(((int)stk + 8))) != 0) {
        t315 = ((*(int *)((a4 + 0x10))) | (0xFFFFFFFE & t310));
    }
    *(unsigned int *)((a4 + 0x94)) = (t61 & 0xFFD00000);
    *(unsigned int *)((a4 + 0x98)) = t194;
    *(unsigned int *)((a4 + 0x9C)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)((a4 + 0x90)) = (t315 & 0xE78F00FF);
    return 0x0;
}

int FUN_0c049124(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int t14;
    int t20;
    int t38;
    int stk[26];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    *(volatile int *)((R4 + 0x304));
    *(volatile int *)((R4 + 0x308));
    t2 = FUN_0c0e5dc0();
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 4) + 0x2C)) = *(struct mv11 *)(0xC0F6778); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 4)) = *(struct mv11 *)(0xC0F67A4); }
    t3 = *(int *)((R4 + 0x4F8));
    R0 = (t3);
    R13 = (0x0);
    R14 = (R4);
    R4 = (t2);
    R5 = ((((int)stk + 4) + 0x2C));
    R6 = (t3);
    if ((t3 == 4)) goto L_C0491FE;
    R0 = (R6);
    if ((R6 == 5)) goto L_C0491FE;
    *(unsigned int *)((R14 + 0x4D4)) = ((*(int *)((R14 + 0x4D4))) - 1);
    t14 = *(int *)((R14 + 0x4F8));
    R0 = (t14);
    R6 = (t14);
    if ((t14 == 10)) goto L_C0491FE;
    R0 = (R6);
    if ((R6 == 11)) goto L_C0491FE;
    t20 = *(int *)((R14 + 0x4F8));
    R0 = (t20);
    R6 = (t20);
    if ((t20 == 8)) goto L_C0491FE;
    R0 = (R6);
    if ((R6 == 9)) goto L_C0491FE;
    *(float *)((R14 + 0x458)) = 1.0f;
    *(unsigned short *)((R14 + 0x454)) = R13;
    R6 = (((R4 << 2) + R5));
    if (((float)(*(int *)((R14 + 0x310))) > (*(float *)((((R4 << 2) + R5) + 0x0))))) goto L_C0491CA;
    R0 = (0x564);
    if ((!((float)(*(int *)((R14 + 0x564))) > (*(float *)((R6 + 0x0)))))) goto L_C0491FE;
    L_C0491CA:;
    *(unsigned int *)((R14 + 0x4D0)) = R13;
    if (((*(int *)((R14 + 0x5A0))) != 0)) goto L_C0491DE;
    *(unsigned int *)((R14 + 0x4F8)) = 0xA;
    L_C0491E4:;
    *(unsigned int *)((R14 + 0x568)) = (*(int *)((R14 + 0x310)));
    *(unsigned int *)((R14 + 0x310)) = R13;
    *(unsigned int *)((R14 + 0x564)) = R13;
    *(unsigned int *)((R14 + 0x56C)) = R13;
    *(unsigned int *)((R14 + 0x4D4)) = 0xFFFFFFFF;
    R0 = (0x4D4);
    L_C0491FE:;
    return R0;
    L_C0491DE:;
    t38 = ((int (*)(int, Stk11))(FUN_0c0469f6))(R14, *(Stk11 *)(((int)stk + 4)));
    goto L_C0491E4;
}

int FUN_0c0494e0(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int t14;
    int t20;
    int t38;
    int stk[26];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    *(volatile int *)((R4 + 0x304));
    *(volatile int *)((R4 + 0x308));
    t2 = FUN_0c0e5dc0();
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 4) + 0x2C)) = *(struct mv11 *)(0xC0F67D0); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 4)) = *(struct mv11 *)(0xC0F67FC); }
    t3 = *(int *)((R4 + 0x4F8));
    R0 = (t3);
    R13 = (0x0);
    R14 = (R4);
    R4 = (t2);
    R5 = ((((int)stk + 4) + 0x2C));
    R6 = (t3);
    if ((t3 == 4)) goto L_C0495BA;
    R0 = (R6);
    if ((R6 == 5)) goto L_C0495BA;
    *(unsigned int *)((R14 + 0x4D4)) = ((*(int *)((R14 + 0x4D4))) - 1);
    t14 = *(int *)((R14 + 0x4F8));
    R0 = (t14);
    R6 = (t14);
    if ((t14 == 10)) goto L_C0495BA;
    R0 = (R6);
    if ((R6 == 11)) goto L_C0495BA;
    t20 = *(int *)((R14 + 0x4F8));
    R0 = (t20);
    R6 = (t20);
    if ((t20 == 8)) goto L_C0495BA;
    R0 = (R6);
    if ((R6 == 9)) goto L_C0495BA;
    *(float *)((R14 + 0x458)) = 1.0f;
    *(unsigned short *)((R14 + 0x454)) = R13;
    R6 = (((R4 << 2) + R5));
    if (((float)(*(int *)((R14 + 0x310))) > (*(float *)((((R4 << 2) + R5) + 0x0))))) goto L_C049586;
    R0 = (0x564);
    if ((!((float)(*(int *)((R14 + 0x564))) > (*(float *)((R6 + 0x0)))))) goto L_C0495BA;
    L_C049586:;
    *(unsigned int *)((R14 + 0x4D0)) = R13;
    if (((*(int *)((R14 + 0x5A0))) != 0)) goto L_C04959A;
    *(unsigned int *)((R14 + 0x4F8)) = 0xA;
    L_C0495A0:;
    *(unsigned int *)((R14 + 0x568)) = (*(int *)((R14 + 0x310)));
    *(unsigned int *)((R14 + 0x310)) = R13;
    *(unsigned int *)((R14 + 0x564)) = R13;
    *(unsigned int *)((R14 + 0x56C)) = R13;
    *(unsigned int *)((R14 + 0x4D4)) = 0xFFFFFFFF;
    R0 = (0x4D4);
    L_C0495BA:;
    return R0;
    L_C04959A:;
    t38 = ((int (*)(int, Stk11))(FUN_0c0469f6))(R14, *(Stk11 *)(((int)stk + 4)));
    goto L_C0495A0;
}
