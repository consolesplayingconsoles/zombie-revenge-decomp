/* Straight-line functions with calls and guards (batch gen_ph): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c2180a0(void);
int FUN_0c218676(int, int);
int FUN_0c2186aa(int, int);
int FUN_0c2186d2(void);
int FUN_0c22fa94(int, int);
int kmiExecuteDMAChain(void);
int kmiFatalErrorEntry(int);
int kmiFinalizeRender(int, int);
int kmiInterruptHandlerSH(int a4);

int kmiInterruptHandlerSH(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t11;
    register int t10;
    register int t28;
    register int t30;
    register int t20;
    register int t27;
    register int t36;
    register int t44;
    register int t43;
    register int t58;
    register int t59;
    register int t60;
    register int t63;
    register int t49;
    register int t51;
    register int t76;
    register int t77;
    register int t78;
    register int t81;
    register int t66;
    register int t69;
    register int t94;
    register int t95;
    register int t96;
    register int t99;
    register int t85;
    register int t87;
    register int t112;
    register int t113;
    register int t114;
    register int t117;
    register int t103;
    register int t105;
    register int t130;
    register int t131;
    register int t132;
    register int t134;
    register int t135;
    register int t120;
    register int t123;
    int t137;
    register int t143;
    register int t147;
    register int t138;
    register int t140;
    register int t155;
    register int t159;
    register int t150;
    register int t152;
    register int t167;
    register int t171;
    register int t162;
    register int t164;
    register int t174;
    register int t175;
    register int t176;
    register int t177;
    int t178;
    register int t179;
    register int t180;
    register int t181;
    register int t6;
    register int t29;
    register int t22;
    register int t23;
    register int t37;
    register int t38;
    register int t41;
    register int t52;
    register int t53;
    register int t56;
    register int t70;
    register int t71;
    register int t74;
    register int t88;
    register int t89;
    register int t92;
    register int t106;
    register int t107;
    register int t110;
    register int t124;
    register int t125;
    register int t127;
    register int t128;
    register int t144;
    register int t145;
    register int t148;
    register int t141;
    register int t156;
    register int t157;
    register int t160;
    register int t153;
    register int t168;
    register int t169;
    register int t170;
    register int t172;
    register int t165;
    register int t188;
    register int t189;
    register int t190;
    register int t191;
    register int t192;

    t0 = *(int *)0xA05F6900;
    if ((t0 & 0x8) != 0) {
        t1 = FUN_0c2180a0();
        t3 = t1;
        if (t1 != 0) {
            t3 = (kmiFatalErrorEntry(t1));
        }
        t6 = t3;
    }
    t11 = t0;
    if ((t0 & 0x20) != 0) {
        *(unsigned int *)0xA05F6900 = 0x20;
        t10 = *(int *)0xC9525AC;
        *(unsigned int *)0xC9525AC = (t10 | 0x4);
        t11 = (t10 | 0x4);
    }
    t28 = t6;
    t30 = t11;
    if ((t0 & 0x4) != 0) {
        *(unsigned int *)0xA05F6900 = 0x7;
        *(unsigned int *)0xC952504 = 0x0;
        *(unsigned int *)0xC952804 = 0x0;
        *(unsigned int *)0xC952848 = ((*(int *)0xC952844) - (*(int *)0xFFD8000C));
        if ((*(int *)0xC952674) != 0) {
            *(unsigned int *)0xC952674 = 0x0;
            *(unsigned int *)0xC95281C = 0x0;
            *(unsigned int *)0xA05F8048 = (*(int *)0xC9525C8);
            *(unsigned int *)0xA05F804C = (*(int *)0xC9525C0);
            *(unsigned int *)0xA05F8068 = (*(int *)0xC9525B0);
            t20 = *(int *)0xC9525B4;
            *(unsigned int *)0xA05F806C = t20;
            t22 = 0xC9525B4;
            t23 = t20;
        } else {
            *(unsigned int *)((((*(int *)0xC95265C) << 2) + 0xC952648)) = 0x5;
            t22 = 0xC952648;
            t23 = 0x5;
        }
        t27 = *(int *)0xC9525AC;
        *(unsigned int *)0xC9525AC = (t27 | 0x1);
        *(unsigned int *)0xC952854 = 0x0;
        t28 = t22;
        t29 = t23;
        t30 = (t27 | 0x1);
    }
    t36 = t28;
    if ((t0 & 0x80000) != 0) {
        *(unsigned int *)0xFFA0002C = ((*(int *)0xFFA0002C) & 0xFFFFFFFC);
        *(unsigned int *)0xA05F6900 = 0x80000;
        t36 = (kmiExecuteDMAChain());
    } else {
        t37 = t29;
        t38 = t30;
        t41 = 0x80000;
    }
    t44 = t38;
    if ((t0 & 0x40) != 0) {
        *(unsigned int *)0xA05F6900 = 0x40;
        t43 = *(int *)0xC9525AC;
        *(unsigned int *)0xC9525AC = (t43 | 0x40);
        t44 = (t43 | 0x40);
    }
    t58 = t36;
    t59 = t37;
    t60 = t44;
    t63 = t41;
    if ((t0 & 0x80) != 0) {
        *(unsigned int *)0xA05F6900 = 0x80;
        *(unsigned int *)0xC952668 = ((*(int *)0xC952668) | 0x1);
        t49 = *(int *)0xC952664;
        t51 = 0xC952668;
        if (t49 == (*(int *)0xC952668)) {
            t51 = (kmiFinalizeRender(0x80, t41));
        } else {
            t52 = t49;
            t53 = 0xC952664;
            t56 = t41;
        }
        t58 = t51;
        t59 = t52;
        t60 = t53;
        t63 = t56;
    }
    t76 = t58;
    t77 = t59;
    t78 = t60;
    t81 = t63;
    if ((t0 & 0x100) != 0) {
        *(unsigned int *)0xA05F6900 = 0x100;
        *(unsigned int *)0xC952668 = ((*(int *)0xC952668) | 0x2);
        t66 = *(int *)0xC952668;
        t69 = 0xC952664;
        if ((*(int *)0xC952664) == t66) {
            t69 = (kmiFinalizeRender(0x100, t63));
        } else {
            t70 = 0xC952668;
            t71 = t66;
            t74 = t63;
        }
        t76 = t69;
        t77 = t70;
        t78 = t71;
        t81 = t74;
    }
    t94 = t76;
    t95 = t77;
    t96 = t78;
    t99 = t81;
    if ((t0 & 0x200) != 0) {
        *(unsigned int *)0xA05F6900 = 0x200;
        *(unsigned int *)0xC952668 = ((*(int *)0xC952668) | 0x4);
        t85 = *(int *)0xC952664;
        t87 = 0xC952668;
        if (t85 == (*(int *)0xC952668)) {
            t87 = (kmiFinalizeRender(0x200, t81));
        } else {
            t88 = t85;
            t89 = 0xC952664;
            t92 = t81;
        }
        t94 = t87;
        t95 = t88;
        t96 = t89;
        t99 = t92;
    }
    t112 = t94;
    t113 = t95;
    t114 = t96;
    t117 = t99;
    if ((t0 & 0x400) != 0) {
        *(unsigned int *)0xA05F6900 = 0x400;
        *(unsigned int *)0xC952668 = ((*(int *)0xC952668) | 0x8);
        t103 = *(int *)0xC952664;
        t105 = 0xC952668;
        if (t103 == (*(int *)0xC952668)) {
            t105 = (kmiFinalizeRender(0x400, t99));
        } else {
            t106 = t103;
            t107 = 0xC952664;
            t110 = t99;
        }
        t112 = t105;
        t113 = t106;
        t114 = t107;
        t117 = t110;
    }
    t130 = t112;
    t131 = t113;
    t132 = t114;
    t134 = 0x200000;
    t135 = t117;
    if ((t0 & 0x200000) != 0) {
        *(unsigned int *)0xA05F6900 = 0x200000;
        *(unsigned int *)0xC952668 = ((*(int *)0xC952668) | 0x10);
        t120 = *(int *)0xC952668;
        t123 = 0xC952664;
        if ((*(int *)0xC952664) == t120) {
            t123 = (kmiFinalizeRender(0x200000, t117));
        } else {
            t124 = 0xC952668;
            t125 = t120;
            t127 = 0x200000;
            t128 = t117;
        }
        t130 = t123;
        t131 = t124;
        t132 = t125;
        t134 = t127;
        t135 = t128;
    }
    t137 = *(int *)0xA05F6908;
    t143 = t130;
    t147 = t134;
    if ((0x4 & t137) != 0) {
        t138 = FUN_0c218676(t134, t135);
        t140 = t138;
        if (t138 != 0) {
            t140 = (kmiFatalErrorEntry(t138));
        } else {
            t141 = t138;
        }
        t143 = t140;
        t147 = t141;
    } else {
        t144 = t131;
        t145 = t132;
        t148 = t135;
    }
    t155 = t143;
    t159 = t147;
    if ((0x8 & t137) != 0) {
        t150 = FUN_0c2186aa(t147, t148);
        t152 = t150;
        if (t150 != 0) {
            t152 = (kmiFatalErrorEntry(t150));
        } else {
            t153 = t150;
        }
        t155 = t152;
        t159 = t153;
    } else {
        t156 = t144;
        t157 = t145;
        t160 = t148;
    }
    t167 = t155;
    t171 = t159;
    if ((t137 & 0x2) != 0) {
        t162 = FUN_0c2186d2();
        t164 = t162;
        if (t162 != 0) {
            t164 = (kmiFatalErrorEntry(t162));
        } else {
            t165 = t162;
        }
        t167 = t164;
        t171 = t165;
    } else {
        t168 = t156;
        t169 = t157;
        t170 = 0x2;
        t172 = t160;
    }
    t174 = t167;
    t175 = t168;
    t176 = t169;
    t177 = t170;
    t178 = t171;
    t179 = t172;
    t180 = t137;
    t181 = 0x0;
    for (;;) {
        if ((int)t181 >= (int)0xA) {
            break;
        }
        t176 = 0xC9525AC;
        t178 = 0x1;
        t178 = ((int)t178 << (int)t181);
        t177 = (*(int *)((t176 + 0x0)));
        if ((t177 & t178) != 0) {
            t178 = (~t178);
            t177 = (*(int *)((t176 + 0x0)));
            t177 = (t177 & t178);
            *(unsigned int *)((t176 + 0x0)) = t177;
            t180 = t181;
            t174 = 0xC952530;
            t180 = (t180 << 2);
            t180 = (t180 << 1);
            t179 = (*(int *)((t180 + t174)));
            t174 = (t174 - 4);
            t178 = (*(int *)((t180 + t174)));
            t174 = (FUN_0c22fa94(t178, t179));
        } else {
            t188 = t175;
            t189 = t176;
            t190 = t177;
            t191 = t178;
            t192 = t179;
        }
        t175 = t188;
        t181 = (t181 + 0x1);
        t176 = t189;
        t177 = t190;
        t178 = t191;
        t179 = t192;
    }
    return 0x0;
}
