/* Straight-line functions with calls and guards (batch gen_sx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db0a0(int, int);
int FUN_0c0db320(int, int, int);
int nlPrintf(int, ...);
int FUN_0c0658f0(void);
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };



int FUN_0c0658f0(void)
{
    int stk[17];
    register int t3;
    register int t12;
    register int t22;
    register int t31;
    register int t41;
    register int t45;
    register int t46;
    register int t67;
    register int t74;
    register int t82;
    register int t83;
    register int t84;
    register int t90;
    register int t92;
    register int t93;
    register int t94;
    register int t96;
    register int t100;
    register int t101;
    register int t102;
    register int t105;
    register int t113;
    register int t116;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);

    FUN_0c0db0a0(0x12, 0x2);
    *(int *)((int)stk + 48) = 0xC0F9FDC;
    nlPrintf(0xC0F9FDC);
    t3 = (((struct o0_int *)0xC247BE0)->v);
    if ((((((((struct o8_int *)0xC2497B0)->v)) & 0x10) == 0) && ((t4 = (((struct o0_int *)0xC2497B0)->v), (t4 & 0x10) == 0) || (t5 = (((struct o0_int *)0xC247BE0)->v), t6 = *(int *)((t5 + 0x10)), (int)t6 <= (int)0x14))) || (t7 = *(int *)((t3 + 0x0)), (unsigned int)t7 < (unsigned int)0x100)) {
    } else {
        *(unsigned int *)((t3 + 0x0)) = ((*(int *)((t3 + 0x0))) - 0x100);
    }
    t12 = (((struct o0_int *)0xC247BE0)->v);
    if ((((((((struct o8_int *)0xC2497B0)->v)) & 0x20) == 0) && ((t13 = (((struct o0_int *)0xC2497B0)->v), (t13 & 0x20) == 0) || (t14 = (((struct o0_int *)0xC247BE0)->v), t15 = *(int *)((t14 + 0x10)), (int)t15 <= (int)0x14))) || (t16 = *(int *)((t12 + 0x0)), (unsigned int)t16 >= (unsigned int)0x7FFF00)) {
    } else {
        *(unsigned int *)((t12 + 0x0)) = ((*(int *)((t12 + 0x0))) + 0x100);
    }
    t22 = (((struct o0_int *)0xC247BE0)->v);
    if ((((((((struct o8_int *)0xC2497B0)->v)) & 0x40) == 0) && ((t23 = (((struct o0_int *)0xC2497B0)->v), (t23 & 0x40) == 0) || (t24 = (((struct o0_int *)0xC247BE0)->v), t25 = *(int *)((t24 + 0x10)), (int)t25 <= (int)0x14))) || (t26 = *(int *)((t22 + 0x0)), (unsigned int)t26 < (unsigned int)0x10000)) {
    } else {
        *(unsigned int *)((t22 + 0x0)) = ((*(int *)((t22 + 0x0))) - 0x10000);
    }
    t31 = (((struct o0_int *)0xC247BE0)->v);
    if ((((((((struct o8_int *)0xC2497B0)->v)) & 0x80) == 0) && ((t32 = (((struct o0_int *)0xC2497B0)->v), (t32 & 0x80) == 0) || (t33 = (((struct o0_int *)0xC247BE0)->v), t34 = *(int *)((t33 + 0x10)), (int)t34 <= (int)0x14))) || (t35 = *(int *)((t31 + 0x0)), (unsigned int)t35 >= (unsigned int)0x7F0000)) {
    } else {
        *(unsigned int *)((t31 + 0x0)) = ((*(int *)((t31 + 0x0))) + 0x10000);
    }
    t41 = (((struct o0_int *)0xC247BE0)->v);
    if ((((((struct o0_int *)0xC2497B0)->v)) & 240) != 0) {
        *(unsigned int *)((t41 + 0x10)) = ((*(int *)((t41 + 0x10))) + 0x1);
    } else {
        *(unsigned int *)((t41 + 0x10)) = 0x0;
    }
    t45 = (((struct o8_int *)0xC2497B0)->v);
    t46 = (((struct o0_int *)0xC247BE0)->v);
    if (t45 != 0x200) {
        if (t45 != 0x400) {
        } else {
            *(unsigned int *)((t46 + 0x20)) = ((*(int *)((t46 + 0x20))) - 1);
            if ((int)(*(int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x20))) < 0) {
                *(unsigned int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x20)) = 0x15;
            }
        }
    } else {
        *(unsigned int *)((t46 + 0x20)) = ((*(int *)((t46 + 0x20))) + 0x1);
        if ((int)(*(int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x20))) >= (int)0x15) {
            *(unsigned int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x20)) = 0x0;
        }
    }
    t67 = (((struct o0_int *)0xC247BE0)->v);
    *(unsigned int *)((t67 + 0x4)) = (((((((*(int *)((t67 + 0x20))) << 16) << 2) << 2) << 2) << 1) + (*(int *)((t67 + 0x0))));
    FUN_0c0db0a0(0x2, 0x6);
    t74 = (*(int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x0)));
    *(int *)((int)stk + 48) = t74;
    *(int *)((int)stk + 44) = 0xC0F9FF0;
    nlPrintf(0xC0F9FF0, t74);
    *(int *)((int)stk + 40) = 0x800000;
    *(int *)((int)stk + 36) = 0xC0FA004;
    nlPrintf(0xC0FA004, 0x800000);
    FUN_0c0db320((*(int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x4))), ((((struct o4_int *)0xC247BE0)->v)), 0x100);
    t82 = (((struct o4_int *)0xC247BE0)->v);
    t83 = *(int *)((((((struct o0_int *)0xC247BE0)->v)) + 0x4));
    *(int *)((int)stk + 64) = 0xC247BE0;
    *(int *)((int)stk + 60) = 0x100;
    *(int *)((int)stk + 56) = 0xC0DB0E0;
    *(unsigned int *)(((int)stk + 24)) = t83;
    *(unsigned int *)(((int)stk + 20)) = t82;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = (((int)stk + 8) + 0x19);
    for (;;) {
        t84 = *(int *)(((int)stk + 12));
        FUN_0c0db0a0(0x1, ((((t84 >> 1) >> 1) >> 1) + 0xC));
        t90 = (*(int *)(((int)stk + 24)));
        R1008 = t90;
        R1004 = 0xC0FA018;
        nlPrintf(0xC0FA018, t90, 0xC0DB0E0, 0x100);
        t92 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 8)) = t92;
        t93 = t92;
        t94 = 0xB;
        for (;;) {
            FUN_0c0db0a0(t94, ((((t84 >> 1) >> 1) >> 1) + 0xC));
            t96 = *(signed char *)((t93 + 0x0));
            t93 = (t93 + 0x1);
            R1008 = (unsigned char)t96;
            R1004 = 0xC0FA020;
            nlPrintf(0xC0FA020, (unsigned char)t96);
            t94 = (t94 + 0x3);
            if ((int)t94 >= (int)0x23) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x8);
        t100 = 0x24;
        t101 = 0x24;
        for (;;) {
            t102 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t102 + 0x1);
            (((struct o18_uchar *)(((int)stk + 8)))->v) = (*(signed char *)((((t102 + 0x1) - 1) + 0x0)));
            *(unsigned char *)(((*(int *)(((int)stk + 28))) + 0x0)) = 0x0;
            t105 = *(signed char *)(((((int)stk + 8) + 0x18) + 0x0));
            if (((int)(unsigned char)t105 >= (int)0x20) && ((int)(unsigned char)t105 < (int)0x80)) {
                FUN_0c0db0a0(t101, ((((t84 >> 1) >> 1) >> 1) + 0xC));
                R1008 = (((int)stk + 8) + 0x18);
                R1004 = 0xC0FA028;
                nlPrintf(0xC0FA028, (((int)stk + 8) + 0x18));
            } else {
                FUN_0c0db0a0(t100, ((((t84 >> 1) >> 1) >> 1) + 0xC));
                R1008 = 0xC0FA02C;
                nlPrintf(0xC0FA02C);
            }
            t100 = (t100 + 0x1);
            t101 = (t101 + 0x1);
            if ((unsigned int)(*(int *)(((int)stk + 16))) >= (unsigned int)(*(int *)(((int)stk + 8)))) {
                break;
            }
        }
        R1008 = 0xC0FA030;
        t113 = nlPrintf(0xC0FA030);
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x8);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x8);
        t116 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t116 + 0x8);
        if ((int)(t116 + 0x8) >= (int)0x100) {
            break;
        }
    }
    return t113;
}
