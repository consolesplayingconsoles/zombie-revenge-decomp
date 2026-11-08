/* Straight-line functions with calls and guards (batch gen_kd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmChangeLatencyModel(int, int);
int kmiAllocSysConfig(int);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyDummyGlobalData(int);
int kmiDiscardRenderPipeline(void);
int kmiFBinit(void);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int kmSetSystemConfiguration(int a4);
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int kmSetSystemConfiguration(int a4)
{
    int stk[39];
    register int t30;
    register int t40;
    register int t47;
    register int t56;
    register int t63;
    register int t58;
    register int t65;
    register int t66;
    register int t68;
    register int t69;
    register float u71;
    register int t73;
    register int t74;
    register int t75;
    register float u76;
    register int t78;
    register int t79;
    register int t80;
    register float u81;
    register int t87;
    int t88;
    int t89;
    register int t90;
    register int t91;
    register float u94;
    register int t108;
    register int t109;
    register int t110;
    register int t111;
    register int t112;
    register int t118;
    register int t126;
    register int t127;
    register int t130;
    register int t131;
    register int t132;
    register int t145;
    register int t157;
    register int t159;
    register int t164;
    register int t169;
    register int t171;
    register int t182;
    register int t183;
    register int t184;
    register int t187;
    register int t188;
    register int t189;
    register int t197;
    register int t201;
    register int t213;
    register int t222;
    register int t233;
    register int t273;
    register int t235;
    register int t237;
    int t238;
    register float u70;
    register int t83;
    register int t84;
    register float u86;
    register float u93;
    int t104;
    register int t198;
    register int t199;
    register int t200;

    *(unsigned int *)(((int)stk + 20)) = 0x2;
    kmiFBinit();
    kmiDiscardRenderPipeline();
    (((struct o14_uint *)0xC95292C)->v) = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x1) != 0) {
        *(unsigned int *)(((int)stk + 32)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 32) != 0) {
        *(unsigned int *)(((int)stk + 48)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 48)) = 0x1;
    }
    if (((*(int *)((a4 + 0x4))) & 0x2) != 0) {
        *(unsigned int *)(((int)stk + 28)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        (((struct o0_uint *)0xC95272C)->v) = 0x0;
    } else {
        (((struct o0_uint *)0xC95272C)->v) = 0x1;
    }
    kmiGetDisplayData(0xFF, (*(int *)(((int)stk + 28))), (*(int *)((a4 + 0x14))));
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        (((struct o0_uint *)0xC95272C)->v) = 0x1;
        (((struct o4_uint *)0xC239C6C)->v) = 0x1;
        (((struct o20_uint *)0xC952640)->v) = ((((struct o18_int *)0xC952640)->v));
        *(unsigned int *)(((((((struct o18_int *)0xC952640)->v)) << 2) + 0xC952648)) = 0x2;
        *(unsigned int *)0xC952508 = 0x0;
        (((struct o30_uint *)0xC952640)->v) = 0x1;
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 16) + 0x24);
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x1);
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0)) = (0x2 & (*(int *)(((*(int *)((a4 + 0x20))) + 0x10))));
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x4);
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 16) + 0x24) + 0xC);
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0xC) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x8);
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x24) + 0x10);
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x10) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x10);
        t30 = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        *(int *)((int)stk + 12) = t30;
        kmiChkActiveListType((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), t30);
        *(int *)((int)stk + 8) = 0x1;
        t40 = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        *(int *)((int)stk + 4) = t40;
        t47 = kmiGetPackOBPParam((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), t40, 0x1);
        *(unsigned int *)(((int)stk + 16)) = t47;
        kmiGetNativeRegOBPSize(t47);
    } else {
        (((struct o4_uint *)0xC239C6C)->v) = 0x0;
        if (((*(int *)((a4 + 0x4))) & 16) != 0) {
            (((struct o0_uint *)0xC952640)->v) = 0x1;
            (((struct o0_uint *)0xC95272C)->v) = 0x1;
        } else {
            (((struct o0_uint *)0xC952640)->v) = 0x0;
        }
        kmChangeLatencyModel(((((struct o0_int *)0xC952640)->v)), ((((struct o5C_int *)(a4))->v)));
        t56 = *(int *)((a4 + 0x28));
        (((struct o10_uint *)0xC95272C)->v) = (*(int *)((a4 + 0x24)));
        t63 = t56;
        if ((((((struct o10_int *)0xC95272C)->v)) & 0x1F) != 0) {
            t58 = (((struct o10_int *)0xC95272C)->v);
            (((struct o10_uint *)0xC95272C)->v) = ((((((struct o10_int *)0xC95272C)->v)) + 0x1F) & 0xFFFFFFE0);
            t63 = (t56 - ((-(t58 & 0x1F)) + 0x20));
        }
        t65 = (((struct o0_int *)0xC952640)->v);
        t66 = t63;
        if (t65 == 0) {
            t66 = ((unsigned int)t63 >> 1);
        }
        t68 = (((int)stk + 16) + 0x40);
        for (;;) {
            if ((unsigned int)t68 >= (unsigned int)((((int)stk + 16) + 0x40) + 0x14)) {
                break;
            }
            *(unsigned int *)((t68 + 0x0)) = 0x0;
            t68 = (t68 + 0x4);
        }
        t69 = (a4 + 0x2C);
        u71 = 0.0f;
        for (;;) {
            if ((unsigned int)t69 >= (unsigned int)(a4 + 0x40)) {
                break;
            }
            u70 = (*(float *)((t69 + 0x0)));
            t69 = (t69 + 0x4);
            u71 = (u71 + u70);
        }
        if (u71 > 100.0f) {
            t73 = 0xC21DF00;
            t74 = (a4 + 0x40);
            t75 = 0x0;
            u76 = u70;
            for (;;) {
                if ((unsigned int)t75 >= (unsigned int)0x14) {
                    break;
                }
                t74 = a4;
                t74 = (t74 + 0x2C);
                t74 = (t74 + t75);
                t73 = t75;
                u76 = (*(float *)((t74 + 0x0)));
                t75 = (t75 + 0x4);
                u76 = (u76 * 100.0f);
                u76 = (u76 / u71);
                *(float *)(((((int)stk + 16) + 0x54) + t73)) = u76;
            }
            t83 = t73;
            t84 = t74;
            u86 = u76;
        } else {
            t78 = 0xC21DF00;
            t79 = (a4 + 0x40);
            t80 = 0x0;
            u81 = u70;
            for (;;) {
                if ((unsigned int)t80 >= (unsigned int)0x14) {
                    break;
                }
                t79 = a4;
                t79 = (t79 + 0x2C);
                t79 = (t79 + t80);
                t78 = t80;
                u81 = (*(float *)((t79 + 0x0)));
                t80 = (t80 + 0x4);
                *(float *)(((((int)stk + 16) + 0x54) + t78)) = u81;
            }
            t83 = t78;
            t84 = t79;
            u86 = u81;
        }
        t87 = t83;
        t88 = 0xC952640;
        t89 = t65;
        t90 = t84;
        t91 = 0x0;
        u94 = u86;
        for (;;) {
            if ((unsigned int)t91 >= (unsigned int)0x14) {
                break;
            }
            t87 = t91;
            t90 = t91;
            u94 = (*(float *)(((((int)stk + 16) + 0x54) + t87)));
            t90 = (t90 + (((int)stk + 16) + 0x40));
            u93 = (float)t66;
            if ((int)t66 < 0) {
                t89 = 0x4F800000;
                u93 = (u93 + ((*(float *)&(t89))));
            }
            u94 = (u94 * u93);
            t88 = 0x4F000000;
            u94 = (u94 / 100.0f);
            u93 = (*(float *)&(t88));
            if (!(u93 > u94)) {
                u93 = (u93 + u93);
                u94 = (u94 - u93);
            }
            t88 = 0xFFFFFFF8;
            t91 = (t91 + 0x4);
            t89 = (int)u94;
            t89 = (t89 & t88);
            *(unsigned int *)((t90 + 0x0)) = t89;
        }
        if (((((((struct o0_int *)0xC952300)->v)) & 64) != 0) && (t104 = (((struct o40_int *)(((int)stk + 16)))->v), (unsigned int)t104 < (unsigned int)0x38)) {
            (((struct o40_uint *)(((int)stk + 16)))->v) = (((((struct o40_int *)(((int)stk + 16)))->v)) + 0x38);
            t108 = 0x38;
        } else {
            t108 = t88;
        }
        t109 = 0xC952300;
        t110 = 0x0;
        t111 = 0x0;
        t112 = 0xFFFFFFFF;
        for (;;) {
            if ((unsigned int)t110 >= (unsigned int)0x5) {
                break;
            }
            *(unsigned int *)(((int)stk + 16)) = ((t110 << 2) + (((int)stk + 16) + 0x40));
            t109 = (*(int *)((((t110 << 2) + (((int)stk + 16) + 0x40)) + 0x0)));
            t108 = t109;
            t111 = (t111 + t109);
            if ((int)t108 > (int)t112) {
                *(unsigned int *)(((int)stk + 24)) = t110;
                t112 = (*(int *)(((int)stk + 16)));
                t112 = (*(int *)((t112 + 0x0)));
            }
            t110 = (t110 + 0x1);
        }
        if ((unsigned int)t111 > (unsigned int)t66) {
            t118 = *(int *)(((int)stk + 24));
            *(unsigned int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0)) = ((*(int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0))) - (t111 - t66));
            *(unsigned int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0)) = ((*(int *)((((t118 << 2) + (((int)stk + 16) + 0x40)) + 0x0))) & 0xFFFFFFE0);
        }
        t126 = (((struct o40_int *)(((int)stk + 16)))->v);
        t130 = t126;
        if (t126 != 0) {
            t127 = (((struct o40_int *)(((int)stk + 16)))->v);
            (((struct o40_uint *)(((int)stk + 16)))->v) = (t127 - 16);
            t130 = (t127 - 16);
        }
        t131 = ((((int)stk + 16) + 0x40) + 0x4);
        t132 = ((((int)stk + 16) + 0x40) + 0x4);
        for (;;) {
            if ((unsigned int)t131 >= (unsigned int)((((int)stk + 16) + 0x40) + 0x14)) {
                break;
            }
            t130 = (*(int *)((t131 + 0x0)));
            if (t130 != 0) {
                t130 = (*(int *)((t132 + 0x0)));
                t130 = (t130 - 16);
                *(unsigned int *)((t132 + 0x0)) = t130;
            }
            t131 = (t131 + 0x4);
            t132 = (t132 + 0x4);
        }
        (((struct o0_uint *)0xC9528EC)->v) = (*(int *)((a4 + 0x20)));
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x40);
        (((struct o4_uint *)0xC9528EC)->v) = ((((struct o40_int *)(((int)stk + 16)))->v));
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x40) + 0x4);
        (((struct o8_uint *)0xC9528EC)->v) = (*(int *)((((((int)stk + 16) + 0x40) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 16) + 0x40) + 0x8);
        (((struct oC_uint *)0xC9528EC)->v) = (*(int *)((((((int)stk + 16) + 0x40) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 16) + 0x40) + 0xC);
        (((struct o10_uint *)0xC9528EC)->v) = (*(int *)((((((int)stk + 16) + 0x40) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 16) + 0x40) + 0x10);
        (((struct o14_uint *)0xC9528EC)->v) = (*(int *)((((((int)stk + 16) + 0x40) + 0x10) + 0x0)));
        t145 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
        *(int *)((int)stk + 12) = t145;
        kmiChkActiveListType((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 44))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 40))) + 0x0))), t145);
        *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x10)) = ((((struct o38_int *)0xC95272C)->v));
        t157 = 0xC9529D4;
        for (;;) {
            if ((unsigned int)t157 >= (unsigned int)0xC9529E8) {
                break;
            }
            *(unsigned int *)((t157 + 0x0)) = 0x0;
            t157 = (t157 + 0x4);
        }
        *(int *)((int)stk + 12) = 0x0;
        t159 = (*(int *)(((((int)stk + 16) + 0x40) + 0x10)));
        *(int *)((int)stk + 8) = t159;
        t164 = kmiGetPackOBPParam(((((struct o40_int *)(((int)stk + 16)))->v)), (*(int *)(((((int)stk + 16) + 0x40) + 0x4))), (*(int *)(((((int)stk + 16) + 0x40) + 0x8))), (*(int *)(((((int)stk + 16) + 0x40) + 0xC))), t159, 0x0);
        *(unsigned int *)(((int)stk + 16)) = t164;
        kmiGetNativeRegOBPSize(t164);
        if (((((struct o0_int *)0xC952640)->v)) == 1) {
            *(unsigned int *)(((int)stk + 20)) = 0x1;
        }
        t169 = (*(int *)(((int)stk + 20)));
        *(int *)((int)stk + 12) = t169;
        *(int *)((int)stk + 8) = 0x0;
        t171 = (*(int *)(((((int)stk + 16) + 0x40) + 0x10)));
        *(int *)((int)stk + 4) = t171;
        t182 = kmiGetVertexBasePointer(((((struct o40_int *)(((int)stk + 16)))->v)), (*(int *)(((((int)stk + 16) + 0x40) + 0x4))), (*(int *)(((((int)stk + 16) + 0x40) + 0x8))), (*(int *)(((((int)stk + 16) + 0x40) + 0xC))), t171, 0x0, t169);
        (((struct o28_uint *)0xC952978)->v) = ((((struct o0_int *)0xC952978)->v));
        (((struct o2C_uint *)0xC952978)->v) = ((((struct o4_int *)0xC952978)->v));
        (((struct o30_uint *)0xC952978)->v) = ((((struct o8_int *)0xC952978)->v));
        (((struct o34_uint *)0xC952978)->v) = ((((struct oC_int *)0xC952978)->v));
        t183 = (((struct o10_int *)0xC952978)->v);
        (((struct o38_uint *)0xC952978)->v) = t183;
        t184 = 0x0;
        for (;;) {
            if ((unsigned int)t184 >= (unsigned int)0x14) {
                break;
            }
            t182 = t184;
            t183 = (*(int *)((0xC9529A0 + t182)));
            t184 = (t184 + 0x4);
            *(unsigned int *)((0xC9529B4 + t182)) = t183;
        }
        (((struct o28_uint *)0xC95292C)->v) = 0x0;
        (((struct o2C_uint *)0xC95292C)->v) = 0x0;
        (((struct o30_uint *)0xC95292C)->v) = 0x0;
        (((struct o34_uint *)0xC95292C)->v) = 0x0;
        (((struct o38_uint *)0xC95292C)->v) = 0xC952978;
        (((struct o3C_uint *)0xC95292C)->v) = 0xC9529A0;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 20)))) {
            t187 = 0xC952978;
            t188 = 0xC952970;
            t189 = 0x0;
            for (;;) {
                t189 = (t189 + 0x1);
                *(unsigned int *)((t188 + 0x0)) = t187;
                t187 = (t187 + 0x14);
                t188 = (t188 + 0x4);
                if ((unsigned int)t189 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
                    break;
                }
            }
        }
        t197 = (kmiCopyDummyGlobalData((*(int *)(((int)stk + 20)))));
        t201 = 0x0;
        for (;;) {
            if ((unsigned int)t201 >= (unsigned int)0x14) {
                break;
            }
            t197 = 0xC9529D4;
            t199 = ((((struct o3C_int *)0xC95292C)->v));
            t200 = (*(int *)((t201 + t197)));
            t199 = (t199 + t201);
            t198 = (*(int *)((t199 + 0x0)));
            t200 = (t200 << 2);
            t201 = (t201 + 0x4);
            t198 = (t198 + t200);
            *(unsigned int *)((t199 + 0x0)) = t198;
        }
    }
    t213 = *(int *)((a4 + 0x1C));
    (((struct o1C_uint *)0xC95292C)->v) = t213;
    if ((t213 & 7) != 0) {
        (((struct o1C_uint *)0xC95292C)->v) = ((((((struct o1C_int *)0xC95292C)->v)) + 0x7) & 0xFFFFFFF8);
    }
    (((struct o18_uint *)0xC95292C)->v) = ((unsigned int)((((((struct o10_int *)0xC952300)->v)) - (((((struct o1C_int *)0xC95292C)->v)) << 2)) - (((((struct o20_int *)0xC95292C)->v)) << 1)) >> 1);
    t222 = kmiGetProfileInt(0xC237794, 0xC2377A0, 0x0);
    if (t222 == 1) {
        if ((unsigned int)((((struct o18_int *)0xC95292C)->v)) > (unsigned int)0x400000) {
            (((struct o18_uint *)0xC95292C)->v) = 0x400000;
        }
    } else {
        if ((unsigned int)((((struct o18_int *)0xC95292C)->v)) > (unsigned int)0x200000) {
            (((struct o18_uint *)0xC95292C)->v) = 0x200000;
        }
    }
    t233 = (((struct o18_int *)0xC95292C)->v);
    t273 = 0x3;
    if ((unsigned int)t233 < (unsigned int)((((struct o24_int *)0xC95292C)->v))) {
    } else {
        t235 = kmiTAallocEx(t233, (((int)stk + 16) + 0x38), (((int)stk + 16) + 0x3C));
        t273 = t235;
        if (t235 == 0) {
            (((struct o28_uint *)0xC95272C)->v) = ((((struct o18_int *)0xC95292C)->v));
            *(int *)((int)stk + 12) = 0x0;
            t237 = *(int *)(((int)stk + 28));
            t238 = *(int *)(((int)stk + 16));
            *(int *)((int)stk + 8) = ((~t237) & t238);
            kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC952368)->v)) >> 7), ((~t237) & t238));
            if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
                *(unsigned int *)0xC952508 = 0x1;
            }
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x0)) = 0xC9529A0;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x4)) = 0xC239B2C;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x8)) = 0xC952954;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0xC)) = 0xC952970;
            (((struct o18_uint *)0xC9528EC)->v) = (*(int *)(((int)stk + 28)));
            (((struct o30_uint *)0xC952300)->v) = (*(int *)(((int)stk + 28)));
            (((struct o1C_uint *)0xC9528EC)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o20_uint *)0xC9528EC)->v) = (*(int *)((a4 + 0x10)));
            (((struct o24_uint *)0xC9528EC)->v) = (*(int *)((a4 + 0x14)));
            (((struct o28_uint *)0xC9528EC)->v) = (*(int *)(((int)stk + 32)));
            (((struct o2C_uint *)0xC9528EC)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o30_uint *)0xC9528EC)->v) = (*(int *)((a4 + 0x10)));
            (((struct o34_uint *)0xC9528EC)->v) = (*(int *)((a4 + 0x14)));
            (((struct o38_uint *)0xC9528EC)->v) = (*(int *)(((int)stk + 32)));
            (((struct o3C_uint *)0xC9528EC)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o0_uint *)0xC95292C)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o4_uint *)0xC95292C)->v) = (*(int *)(((int)stk + 48)));
            (((struct o0_uint *)0xC239C6C)->v) = 0x80000000;
            t273 = (kmiAllocSysConfig(((((struct o14_int *)0xC95292C)->v))));
        }
    }
    return t273;
}
