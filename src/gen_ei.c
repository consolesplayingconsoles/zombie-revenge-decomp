/* Straight-line functions with calls and guards (batch gen_ei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c036392(int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0e19f2(void);
int FUN_0c09312a(int a4, int a5, int a6, int a7);
int FUN_0c03c9e0(int a4);
struct o20C_int { char p[0x20C]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o568_int { char p[0x568]; int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };


int FUN_0c09312a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t13;
    int t17;
    int t18;
    int t26;
    int t27;
    int t28;
    int stk[4];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R14;
    int T_;
    R4 = a4;
    L_C09312A:;
    t0 = (((struct o88_int *)(R4))->v);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((0xC246FF0 + (t0 << 2)) + 0x0)));
    R14 = (R4);
    R4 = (((t0 << 2) + 0xC247030));
    R5 = (0xC246FF0);
    if (((*(int *)((((t0 << 2) + 0xC247030) + 0x0))) != 0)) goto L_C093154;
    goto L_C09314E;
    L_C09314E:;
    FUN_0c0e19f2();
    goto L_C093154;
    L_C093154:;
    R0 = (0xA8);
    if ((((((struct oA8_int *)(R14))->v)) == 0)) goto L_C093166;
    goto L_C09315C;
    L_C09315C:;
    t11 = *(int *)((R14 + R0));
    *(unsigned int *)((R14 + R0)) = (t11 - 1);
    if (((int)(t11 - 1) > 0)) goto L_C0931C4;
    goto L_C093166;
    L_C093166:;
    t13 = (((struct o98_int *)(R14))->v);
    (((struct o98_uint *)(R14))->v) = (t13 + 0x1);
    R0 = (0xA0);
    if (((((t13 + 0x1) - 1) & ((((struct oA0_int *)(R14))->v))) != 0)) goto L_C0931C4;
    goto L_C093178;
    L_C093178:;
    t17 = (((struct o9C_int *)(R14))->v);
    t18 = (((struct o8C_int *)(R14))->v);
    *(unsigned int *)((((((((struct o80_int *)(R14))->v)) << 2) + (0x404 + (*(int *)(((int)stk + 4))))) + 0x0)) = (*(short *)((((t17 << 1) + t18) + 0x0)));
    (((struct o9C_uint *)(R14))->v) = (((((struct o9C_int *)(R14))->v)) + 0x1);
    R0 = (0x9C);
    if (((int)(*(short *)(((((t17 << 1) + t18) + 0x2) + 0x0))) >= 0)) goto L_C0931C4;
    goto L_C0931A6;
    L_C0931A6:;
    *(unsigned int *)((R14 + R0)) = 0x0;
    t26 = FUN_0c0da2e0();
    t27 = (((struct oA4_int *)(R14))->v);
    t28 = (((struct oA4_int *)(R14))->v);
    (((struct oA8_uint *)(R14))->v) = ((t26 & t27) + t28);
    R0 = (((t26 & t27) + t28));
    goto L_C0931C4;
    L_C0931C4:;
    return R0;
}

int FUN_0c03c9e0(int a4)
{
    int t27;
    int t19;
    int t20;

    FUN_0c03bd28(a4, 0x0, 0x0, 0x0, 0x6);
    if ((((((struct o20C_int *)(a4))->v)) & 64) != 0) {
        if ((((((struct o568_int *)(a4))->v)) + ((((struct o310_int *)(a4))->v))) == 6) {
            FUN_0c036392(a4);
        }
        t19 = 0xF2BA9;
        t20 = 0xF2BA9;
    } else {
        if ((int)((((struct o304_int *)(a4))->v)) <= (int)0x1) {
            (((struct o560_uint *)(a4))->v) = 0x9;
            (((struct o56C_uint *)(a4))->v) = 0x0;
        }
        t19 = 0xC2EA9;
        t20 = 0xB2EA9;
    }
    if ((int)((((struct o304_int *)(a4))->v)) > 0) {
        t27 = (((struct o57C_int *)(a4))->v);
        if (t27 != 0) {
            if ((t27 != 1) && ((t27 != 2) && (t27 != 3))) {
                
                return t27;
            }
            return FUN_0c0cc3f8(t19);
        }
        return FUN_0c0cc3f8(t20);
    }
    return 0x304;
}
