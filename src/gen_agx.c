/* Straight-line functions with calls and guards (batch gen_agx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
int FUN_0c0c465c(int);
int FUN_0c0c7ef0(void);
int FUN_0c0c7ef8(void);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0c82dc(int a4, int a5, int a6, int a7);

int FUN_0c0c82dc(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t1;
    register float u33;
    register int t40;
    register int t42;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t53;
    register int t55;
    register float t56;
    register int t57;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register float t67;
    register int t68;
    register int t69;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register int t74;
    register int t82;
    register int t83;
    register int t84;
    register int t85;
    register int t88;
    register int t90;
    register float t91;
    register int t100;
    register int t102;
    register int t103;
    register int t104;
    register int t105;
    register int t106;
    register float u112;
    register int t114;
    register int t115;
    register int t116;
    register int t119;
    register float u125;
    register float u126;
    register float u127;

    *(unsigned int *)(((int)stk + 20)) = (*(int *)0xC247CAC);
    t1 = (((struct o0_int *)0xC23ED50)->v);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((t1 << 2) + 0xC1E9C3C)));
    if ((*(int *)0xC23A180) != 3) {
        if ((int)t1 >= (int)0x12) {
            if ((int)t1 > (int)0x1B) {
                FUN_0c0e19f2();
            }
        } else {
            FUN_0c0e19f2();
        }
    } else {
        if ((((((struct oC_int *)0xC23ED50)->v)) & 4) != 0) {
            FUN_0c0e19f2();
        }
    }
    u33 = (((struct o94_float *)(a4))->v);
    (((struct o94_float *)(a4))->v) = (u33 - 0.00199999986f);
    if (!((u33 - 0.00199999986f) > -2.0f)) {
        (((struct o94_float *)(a4))->v) = (((((struct o94_float *)(a4))->v)) + (1.0f + 1.0f));
    }
    if ((*(int *)(((int)stk + 12))) == 0) {
        if (((((struct oF0_int *)(a4))->v)) != 0) {
            (((struct oF0_uint *)(a4))->v) = 0x0;
            return FUN_0c0c7ef8();
        }
        return 0xF0;
    }
    t40 = (((struct oB4_int *)(a4))->v);
    t48 = (((struct oA8_int *)(a4))->v);
    t42 = *(int *)(((0xB4 + a4) + 0x8));
    t49 = (((struct oAC_int *)(a4))->v);
    t46 = (((struct oA4_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 0)) = ((t42 + t40) - 1);
    t47 = t46;
    t50 = (((((t40 << 1) + t40) << 2) + t46) + (((t42 << 1) + t42) << 2));
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (((FUN_0c0da2e0()) & 0x3FF) + (*(int *)((t48 + 0x0))));
        t53 = FUN_0c0da2e0();
        t55 = *(int *)((t49 + 0x0));
        *(unsigned int *)((t48 + 0x0)) = (*(int *)(((int)stk + 4)));
        t48 = (t48 + 0x4);
        *(unsigned int *)((t49 + 0x0)) = (t55 + (t53 & 0x3FF));
        t49 = (t49 + 0x4);
        t56 = FUN_0c0d9e90((t55 + (t53 & 0x3FF)));
        *(float *)((t47 + 0x0)) = 0.0f;
        (((struct o4_float *)(t47))->v) = (t56 * 0.5f);
        (((struct o8_float *)(t47))->v) = 0.0f;
        *(float *)((t50 + 0x0)) = 0.0f;
        t47 = (t47 + 0xC);
        (((struct o4_float *)(t50))->v) = (t56 * 0.5f);
        (((struct o8_float *)(t50))->v) = 0.0f;
        t50 = (t50 + 0xC);
        t57 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t57 - 1);
        if ((t57 - 1) == 0) {
            break;
        }
    }
    *(float *)((t47 + 0x0)) = 0.0f;
    (((struct o4_float *)(t47))->v) = (t56 * 0.5f);
    (((struct o8_float *)(t47))->v) = 0.0f;
    *(float *)((t50 + 0x0)) = 0.0f;
    (((struct o4_float *)(t50))->v) = (t56 * 0.5f);
    (((struct o8_float *)(t50))->v) = 0.0f;
    *(unsigned int *)(((int)stk + 0)) = (((((struct oC4_int *)(a4))->v)) >> 1);
    t60 = t48;
    t61 = t49;
    t62 = (t50 + 0xC);
    for (;;) {
        t63 = FUN_0c0da2e0();
        t64 = *(int *)((t60 + 0x0));
        t65 = FUN_0c0da2e0();
        t66 = *(int *)((t61 + 0x0));
        *(unsigned int *)((t60 + 0x0)) = ((t63 & 0x3FF) + t64);
        *(unsigned int *)((t61 + 0x0)) = (t66 + (t65 & 0x3FF));
        t61 = (t61 + 0x4);
        t60 = (t60 + 0x4);
        t67 = FUN_0c0d9e90((t66 + (t65 & 0x3FF)));
        *(float *)((t62 + 0x0)) = 0.0f;
        (((struct o4_float *)(t62))->v) = (t67 * 0.5f);
        (((struct o8_float *)(t62))->v) = 0.0f;
        t62 = (t62 + 0xC);
        *(float *)((t62 + 0x0)) = 0.0f;
        (((struct o4_float *)(t62))->v) = (t67 * 0.5f);
        (((struct o8_float *)(t62))->v) = 0.0f;
        t62 = (t62 + 0xC);
        t68 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t68 - 1);
        if ((t68 - 1) == 0) {
            break;
        }
    }
    t69 = (((struct o4C_int *)(a4))->v);
    t70 = (((struct oB4_int *)(a4))->v);
    t71 = *(int *)(((0xB4 + a4) + 0x4));
    t72 = *(int *)(((0xB4 + a4) + 0x8));
    t73 = *(int *)(((0xB4 + a4) + 0xC));
    t74 = *(int *)(((0xB4 + a4) + 0x10));
    *(unsigned int *)(((int)stk + 8)) = (((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1);
    *(unsigned int *)(((int)stk + 4)) = (((((((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1) << 1) + (((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1)) << 2) + t62);
    *(unsigned int *)(((int)stk + 0)) = (((((((((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1) << 1) + (((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1)) << 1) + (((((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1) << 1) + (((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1))) << 2) + t62);
    t82 = ((((((((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1) << 1) << 1) + ((((((((t69 - t70) - t71) - t72) - t73) - t74) >> 1) >> 1) << 1)) << 2) + t62);
    t83 = t60;
    t84 = t61;
    t85 = t62;
    for (;;) {
        *(unsigned int *)(((int)stk + 16)) = (((FUN_0c0da2e0()) & 0x3FF) + (*(int *)((t83 + 0x0))));
        t88 = FUN_0c0da2e0();
        t90 = *(int *)((t84 + 0x0));
        *(unsigned int *)((t83 + 0x0)) = (*(int *)(((int)stk + 16)));
        t83 = (t83 + 0x4);
        *(unsigned int *)((t84 + 0x0)) = (t90 + (t88 & 0x3FF));
        t84 = (t84 + 0x4);
        t91 = FUN_0c0d9e90((t90 + (t88 & 0x3FF)));
        *(float *)((t85 + 0x0)) = 0.0f;
        (((struct o4_float *)(t85))->v) = (t91 * 0.5f);
        (((struct o8_float *)(t85))->v) = 0.0f;
        t85 = (t85 + 0xC);
        *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0.0f;
        (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v) = (t91 * 0.5f);
        (((struct o8_float *)((*(int *)(((int)stk + 4)))))->v) = 0.0f;
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
        *(float *)((t82 + 0x0)) = 0.0f;
        (((struct o4_float *)(t82))->v) = (t91 * 0.5f);
        (((struct o8_float *)(t82))->v) = 0.0f;
        t82 = (t82 + 0xC);
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0.0f;
        (((struct o4_float *)((*(int *)(((int)stk + 0)))))->v) = (t91 * 0.5f);
        (((struct o8_float *)((*(int *)(((int)stk + 0)))))->v) = 0.0f;
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0xC);
        t100 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t100 - 1);
        if ((t100 - 1) == 0) {
            break;
        }
    }
    nlPushMatrix(0x0);
    t102 = 0xC0C8660;
    t103 = 0xC0DA2E0;
    for (;;) {
        t104 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t104 + 0x4);
        t105 = *(int *)((((t104 + 0x4) - 4) + 0x0));
        if (t105 == 0) {
            break;
        }
        t106 = *(int *)((t105 + 0x0));
        t102 = 0xA4;
        t114 = *(int *)((a4 + t102));
        t103 = (*(int *)((((((t106 << 2) << 2) << 1) + (a4 + 0x30)) + 0x0)));
        t102 = (t102 - 16);
        u112 = *(float *)((a4 + t102));
        t115 = (*(int *)(((((*(int *)((t105 + 0x0))) << 2) + (0x98 + a4)) + 0x0)));
        t116 = (*(int *)((((((t106 << 2) << 2) << 1) + (a4 + 0x30)) + 0x1C)));
        for (;;) {
            t102 = 0x4;
            t119 = *(int *)((t103 + 0x0));
            t103 = (t103 + 0x4);
            *(float *)((t119 + 0x0)) = ((*(float *)((t115 + 0x0))) + (*(float *)((t114 + 0x0))));
            *(unsigned int *)((t119 + 0x0)) = ((*(int *)((t119 + 0x0))) | 0x1);
            *(float *)((t119 + t102)) = ((*(float *)((t115 + t102))) + (*(float *)((t114 + t102))));
            t102 = 0x8;
            *(float *)((t119 + t102)) = ((*(float *)((t115 + t102))) + (*(float *)((t114 + t102))));
            t102 = 0x4;
            u125 = *(float *)((t114 + t102));
            t102 = 0x10;
            u126 = 0.599999964f;
            u126 = u126 + 0.799999952f * u125;
            *(float *)((t119 + t102)) = u126;
            u127 = *(float *)((t115 + t102));
            t102 = 0x1C;
            *(float *)((t119 + t102)) = (u127 + u112);
            t116 = (t116 - 0x1);
            *(unsigned int *)(((t119 + 0x1C) + 0x0)) = ((*(int *)(((t119 + 0x1C) + 0x0))) | 0x1);
            t114 = (t114 + 0xC);
            t115 = (t115 + 0x14);
            if (t116 == 0) {
                break;
            }
        }
        t102 = (FUN_0c0dbda0(((*(int *)(((int)stk + 20))) + 0x2AC)));
        t102 = (FUN_0c0dcca0((t105 + 0x4)));
        t102 = (*(int *)((t105 + 0x0)));
        t102 = (t102 << 1);
        t102 = (FUN_0c0c465c((unsigned short)(*(short *)((0xC1E9B84 + t102)))));
    }
    nlPopMatrix(0x1);
    if (((((struct oF0_int *)(a4))->v)) == 0) {
        (((struct oF0_uint *)(a4))->v) = 0x1;
        return FUN_0c0c7ef0();
    }
    return 0xF0;
}
