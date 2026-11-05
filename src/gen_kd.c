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
    register int t128;
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
    register int t176;
    register int t181;
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
    register int t271;
    register int t237;
    int t238;
    register float u70;
    register int t83;
    register int t84;
    register float u86;
    register float u93;
    int t104;
    register int t106;
    register int t198;
    register int t199;
    register int t200;

    *(unsigned int *)(((int)stk + 20)) = 0x2;
    kmiFBinit();
    kmiDiscardRenderPipeline();
    *(unsigned int *)0xC952940 = 0x0;
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
        *(unsigned int *)0xC95272C = 0x0;
    } else {
        *(unsigned int *)0xC95272C = 0x1;
    }
    kmiGetDisplayData(0xFF, (*(int *)(((int)stk + 28))), (*(int *)((a4 + 0x14))));
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        *(unsigned int *)0xC95272C = 0x1;
        *(unsigned int *)0xC239C70 = 0x1;
        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
        *(unsigned int *)0xC952508 = 0x0;
        *(unsigned int *)0xC952670 = 0x1;
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
        *(unsigned int *)0xC239C70 = 0x0;
        if (((*(int *)((a4 + 0x4))) & 16) != 0) {
            *(unsigned int *)0xC952640 = 0x1;
            *(unsigned int *)0xC95272C = 0x1;
        } else {
            *(unsigned int *)0xC952640 = 0x0;
        }
        kmChangeLatencyModel((*(int *)0xC952640), (*(int *)((a4 + 0x5C))));
        t56 = *(int *)((a4 + 0x28));
        *(unsigned int *)0xC95273C = (*(int *)((a4 + 0x24)));
        t63 = t56;
        if (((*(int *)0xC95273C) & 0x1F) != 0) {
            t58 = *(int *)0xC95273C;
            *(unsigned int *)0xC95273C = (((*(int *)0xC95273C) + 0x1F) & 0xFFFFFFE0);
            t63 = (t56 - ((-(t58 & 0x1F)) + 0x20));
        }
        t65 = *(int *)0xC952640;
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
        if ((((*(int *)0xC952300) & 64) != 0) && (t104 = *(int *)(((((int)stk + 16) + 0x40) + 0x0)), (unsigned int)t104 < (unsigned int)0x38)) {
            *(unsigned int *)(((((int)stk + 16) + 0x40) + 0x0)) = ((*(int *)(((((int)stk + 16) + 0x40) + 0x0))) + 0x38);
            t106 = 0x38;
        } else {
            t106 = t88;
        }
        t108 = t106;
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
        t126 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
        t128 = t126;
        if (t126 != 0) {
            t127 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x40) + 0x0)) = (t127 - 16);
            t128 = (t127 - 16);
        }
        t130 = t128;
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
        *(unsigned int *)0xC9528EC = (*(int *)((a4 + 0x20)));
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x40);
        *(unsigned int *)0xC9528F0 = (*(int *)(((((int)stk + 16) + 0x40) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x40) + 0x4);
        *(unsigned int *)0xC9528F4 = (*(int *)((((((int)stk + 16) + 0x40) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 16) + 0x40) + 0x8);
        *(unsigned int *)0xC9528F8 = (*(int *)((((((int)stk + 16) + 0x40) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 16) + 0x40) + 0xC);
        *(unsigned int *)0xC9528FC = (*(int *)((((((int)stk + 16) + 0x40) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 16) + 0x40) + 0x10);
        *(unsigned int *)0xC952900 = (*(int *)((((((int)stk + 16) + 0x40) + 0x10) + 0x0)));
        t145 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
        *(int *)((int)stk + 12) = t145;
        kmiChkActiveListType((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 44))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 40))) + 0x0))), t145);
        *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x10)) = (*(int *)0xC952764);
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
        t164 = kmiGetPackOBPParam((*(int *)(((((int)stk + 16) + 0x40) + 0x0))), (*(int *)(((((int)stk + 16) + 0x40) + 0x4))), (*(int *)(((((int)stk + 16) + 0x40) + 0x8))), (*(int *)(((((int)stk + 16) + 0x40) + 0xC))), t159, 0x0);
        *(unsigned int *)(((int)stk + 16)) = t164;
        kmiGetNativeRegOBPSize(t164);
        if ((*(int *)0xC952640) == 1) {
            *(unsigned int *)(((int)stk + 20)) = 0x1;
        }
        t169 = (*(int *)(((int)stk + 20)));
        *(int *)((int)stk + 12) = t169;
        *(int *)((int)stk + 8) = 0x0;
        t171 = (*(int *)(((((int)stk + 16) + 0x40) + 0x10)));
        *(int *)((int)stk + 4) = t171;
        t176 = kmiGetVertexBasePointer((*(int *)(((((int)stk + 16) + 0x40) + 0x0))), (*(int *)(((((int)stk + 16) + 0x40) + 0x4))), (*(int *)(((((int)stk + 16) + 0x40) + 0x8))), (*(int *)(((((int)stk + 16) + 0x40) + 0xC))), t171, 0x0, t169);
        *(unsigned int *)0xC9529A0 = (*(int *)0xC952978);
        *(unsigned int *)0xC9529A4 = (*(int *)0xC95297C);
        *(unsigned int *)0xC9529A8 = (*(int *)0xC952980);
        *(unsigned int *)0xC9529AC = (*(int *)0xC952984);
        t181 = *(int *)0xC952988;
        *(unsigned int *)0xC9529B0 = t181;
        t182 = t176;
        t183 = t181;
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
        *(unsigned int *)0xC952954 = 0x0;
        *(unsigned int *)0xC952958 = 0x0;
        *(unsigned int *)0xC95295C = 0x0;
        *(unsigned int *)0xC952960 = 0x0;
        *(unsigned int *)0xC952964 = 0xC952978;
        *(unsigned int *)0xC952968 = 0xC9529A0;
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
            t199 = (*(int *)0xC952968);
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
    *(unsigned int *)0xC952948 = t213;
    if ((t213 & 7) != 0) {
        *(unsigned int *)0xC952948 = (((*(int *)0xC952948) + 0x7) & 0xFFFFFFF8);
    }
    *(unsigned int *)0xC952944 = ((unsigned int)(((*(int *)0xC952310) - ((*(int *)0xC952948) << 2)) - ((*(int *)0xC95294C) << 1)) >> 1);
    t222 = kmiGetProfileInt(0xC237794, 0xC2377A0, 0x0);
    if (t222 == 1) {
        if ((unsigned int)(*(int *)0xC952944) > (unsigned int)0x400000) {
            *(unsigned int *)0xC952944 = 0x400000;
        }
    } else {
        if ((unsigned int)(*(int *)0xC952944) > (unsigned int)0x200000) {
            *(unsigned int *)0xC952944 = 0x200000;
        }
    }
    t233 = *(int *)0xC952944;
    t273 = 0x3;
    if ((unsigned int)t233 < (unsigned int)(*(int *)0xC952950)) {
    } else {
        t235 = kmiTAallocEx(t233, (((int)stk + 16) + 0x38), (((int)stk + 16) + 0x3C));
        t271 = t235;
        if (t235 == 0) {
            *(unsigned int *)0xC952754 = (*(int *)0xC952944);
            *(int *)((int)stk + 12) = 0x0;
            t237 = *(int *)(((int)stk + 28));
            t238 = *(int *)(((int)stk + 16));
            *(int *)((int)stk + 8) = ((~t237) & t238);
            kmiSetTAEnvironment(((unsigned int)(*(int *)0xC952368) >> 7), ((unsigned int)(*(int *)0xC95236C) >> 7), ((unsigned int)(*(int *)0xC952370) >> 7), ((unsigned int)(*(int *)0xC952374) >> 7), ((~t237) & t238));
            if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
                *(unsigned int *)0xC952508 = 0x1;
            }
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x0)) = 0xC9529A0;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x4)) = 0xC239B2C;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x8)) = 0xC952954;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0xC)) = 0xC952970;
            *(unsigned int *)0xC952904 = (*(int *)(((int)stk + 28)));
            *(unsigned int *)0xC952330 = (*(int *)(((int)stk + 28)));
            *(unsigned int *)0xC952908 = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            *(unsigned int *)0xC95290C = (*(int *)((a4 + 0x10)));
            *(unsigned int *)0xC952910 = (*(int *)((a4 + 0x14)));
            *(unsigned int *)0xC952914 = (*(int *)(((int)stk + 32)));
            *(unsigned int *)0xC952918 = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            *(unsigned int *)0xC95291C = (*(int *)((a4 + 0x10)));
            *(unsigned int *)0xC952920 = (*(int *)((a4 + 0x14)));
            *(unsigned int *)0xC952924 = (*(int *)(((int)stk + 32)));
            *(unsigned int *)0xC952928 = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            *(unsigned int *)0xC95292C = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            *(unsigned int *)0xC952930 = (*(int *)(((int)stk + 48)));
            *(unsigned int *)0xC239C6C = 0x80000000;
            t271 = (kmiAllocSysConfig((*(int *)0xC952940)));
        }
        t273 = t271;
    }
    return t273;
}
