/* Straight-line functions with calls and guards (batch gen_pw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[9]; } Stk9;
int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e5f1c(void);
int FUN_0c03d038(int a4);
struct o20C_int { char p[0x20C]; int v; };
struct o210_int { char p[0x210]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o4C4_int { char p[0x4C4]; int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o554_int { char p[0x554]; int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
struct o560_int { char p[0x560]; int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5C0_int { char p[0x5C0]; int v; };
struct o5C0_uint { char p[0x5C0]; unsigned int v; };
struct o4CC_int { char p[0x4CC]; int v; };
struct o578_int { char p[0x578]; int v; };



int FUN_0c03d038(int a4)
{
    int stk[10];
    int t0;
    register int t11;
    register int t20;
    register int t31;
    register int t50;
    int t58;
    int t67;
    register int t93;
    int t99;
    register int t101;
    register int t1;
    register int t2;
    int t7;
    register int t10;
    int t27;
    register int t30;
    register int t51;
    int t52;
    register int t60;
    register int t119;
    register int t114;
    register int t108;

    { struct mv9 { int w[9]; }; *(struct mv9 *)(((int)stk + 4)) = *(struct mv9 *)(0xC0F563C); }
    t0 = (((struct o4C4_int *)(a4))->v);
    if (((t0 != 0) && (t0 != 1)) || ((t1 = (((struct o310_int *)(a4))->v), (int)t1 < 0) || (t2 = (((struct o304_int *)(a4))->v), (int)t2 <= 0))) {
        (((struct o57C_uint *)(a4))->v) = 0x0;
        if (((int)((((struct o304_int *)(a4))->v)) <= 0) && (t7 = (((struct o57C_int *)(a4))->v), t7 != 4)) {
            t10 = (((((struct o57C_int *)(a4))->v)) + 0x5);
        } else {
            t10 = ((((struct o57C_int *)(a4))->v));
        }
        t11 = (((struct o4F0_int *)(a4))->v);
        (((struct o560_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o4C4_int *)(a4))->v)) << 1) + ((*(int *)(((((((struct o578_int *)(a4))->v)) << 2) + (*(int *)((0xC1F8E40 + (((t11 << 2) + t11) << 2))))))) + (t10 * 0xE)))));
    } else {
        if (((((struct o554_int *)(a4))->v)) == 2) {
            FUN_0c0da2e0();
            t20 = FUN_0c0e5f1c();
            if ((int)t20 < (int)(*(int *)(((((((((struct o310_int *)(a4))->v)) - 1) << 2) + ((int)stk + 4)) + 0x0)))) {
                (((struct o560_uint *)(a4))->v) = 0x2;
                (((struct o57C_uint *)(a4))->v) = 0x3;
            } else {
                (((struct o560_uint *)(a4))->v) = 0xB;
                (((struct o57C_uint *)(a4))->v) = 0x0;
            }
        } else {
            (((struct o57C_uint *)(a4))->v) = 0x0;
            if (((int)((((struct o304_int *)(a4))->v)) > 0) && (t27 = (((struct o57C_int *)(a4))->v), t27 != 4)) {
                t30 = ((((struct o57C_int *)(a4))->v));
            } else {
                t30 = (((((struct o57C_int *)(a4))->v)) + 0x5);
            }
            t31 = (((struct o4F0_int *)(a4))->v);
            (((struct o560_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o4C4_int *)(a4))->v)) << 1) + ((*(int *)(((((((struct o578_int *)(a4))->v)) << 2) + (*(int *)((0xC1F8E40 + (((t31 << 2) + t31) << 2))))))) + (t30 * 0xE)))));
        }
    }
    t50 = (((struct o560_int *)(a4))->v);
    if ((t50 != 2) && ((t50 != 3) && ((t50 != 4) && ((t50 != 6) && ((t50 != 12) && ((t51 = (((struct o304_int *)(a4))->v), (int)t51 > 0) && (t52 = (((struct o20C_int *)(a4))->v), t52 != 0x200000))))))) {
    } else {
        (((struct o554_uint *)(a4))->v) = 0x1;
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        (((struct o4E4_uint *)(a4))->v) = 0x0;
    }
    if (((((struct o560_int *)(a4))->v)) != 0) {
        t58 = (((struct o4C8_int *)(a4))->v);
        if ((((((t58 == 2)) ? 1 : 0) & (((((((struct o4CC_int *)(a4))->v)) == 0)) ? 1 : 0)) == 0) && (((t58 != 9) || (t60 = (((struct o210_int *)(a4))->v), t60 != 67)) && ((t58 != 4) && ((t58 != 7) && ((t58 != 12) && ((t58 != 10) && ((t58 != 13) && (t58 != 8)))))))) {
        } else {
            FUN_0c0355f8(a4);
        }
        t67 = (((struct o4C8_int *)(a4))->v);
        if ((t67 != 5) && (t67 != 6)) {
            FUN_0c039034(a4);
            FUN_0c039110(a4);
            (((struct o5A4_uint *)(a4))->v) = (((((struct o5A0_int *)(a4))->v)) << 1);
            if (((((struct o560_int *)(a4))->v)) != 11) {
                FUN_0c0356f4(a4, 0x1);
            }
        }
    }
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t93 = 0x5C0;
        if (((((struct o5C0_int *)(a4))->v)) == 0) {
            (((struct o5C0_uint *)(a4))->v) = 0x1;
            t93 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0));
        }
        t119 = t93;
    } else {
        t99 = (((struct o57C_int *)(a4))->v);
        if ((t99 != 0) && (t99 != 1)) {
            if ((t99 != 2) && (t99 != 3)) {
                t101 = t99;
                if (t99 != 4) {
                } else {
                    t101 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0));
                }
                t108 = t101;
            } else {
                t108 = (FUN_0c0cc3f8(0x41BA9, 0x0, 0x0, 0x0));
            }
            t114 = t108;
        } else {
            t114 = (FUN_0c0cc3f8(0x31BA9, 0x0, 0x0, 0x0));
        }
        t119 = t114;
    }
    return t119;
}
