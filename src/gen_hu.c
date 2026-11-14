/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c01843e(void);
extern int FUN_0c01cdc2();
int FUN_0c022c5e(int);
int FUN_0c02a19a(int);
int FUN_0c032394(int);
int FUN_0c03261c(int, float, float);
int FUN_0c03271c(int, float, float);
int FUN_0c0327c8(int, float, float, float);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c054ae0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c05b274(int, int, int, int, int);
int FUN_0c0685a4(int, int, int);
int FUN_0c0848d6(int, int, int, int, float, float, float);
int FUN_0c0849da(void);
extern int FUN_0c0909fc();
int FUN_0c090bf0(int);
int FUN_0c090c68(int);
int FUN_0c090f70(int);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0b3cee(void);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de260(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5fe4(void);
extern float _builtin_sqrtf(float);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c060152(int a4, int a5, int a6, int a7);
int FUN_0c0b3a88(int a4);
int FUN_0c064220(int a4, int a5);
int FUN_0c02585c(int a4);
int FUN_0c07bcac(int a4, int a5, int a6);
void FUN_0c0a3916(int a4, int a5, int a6, int a7);
int FUN_0c05ba2a(int a4, int a5);
int FUN_0c018c7c(int a4);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o238_float { char p[0x238]; float v; };
struct o248_int { char p[0x248]; int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o290_int { char p[0x290]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o344_int { char p[0x344]; int v; };
struct o34C_int { char p[0x34C]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o488_int { char p[0x488]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4E8_int { char p[0x4E8]; int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o510_int { char p[0x510]; int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o88_int { char p[0x88]; int v; };
struct o88_ushort { char p[0x88]; unsigned short v; };
struct o8A_ushort { char p[0x8A]; unsigned short v; };
struct o8C_ushort { char p[0x8C]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oD8_int { char p[0xD8]; int v; };
struct oE8_short { char p[0xE8]; short v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o220_int { char p[0x220]; int v; };
struct o8C_int { char p[0x8C]; int v; };




int FUN_0c060152(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t9;
    register int t22;
    register int t23;
    register int t25;
    register int t26;
    register int t67;
    register int t78;
    register int t79;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register float u68;

    t1 = *(int *)0xC247CAC;
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        FUN_0c090c68(a4);
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        *(unsigned int *)((a4 + 0x0)) = 0xC05FF8C;
    } else {
        t9 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t9 - 1);
        if ((int)(t9 - 1) <= 0) {
            FUN_0c0e19f2();
        }
    }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0272199996f);
    t22 = (((struct o248_int *)(a4))->v);
    t23 = 0x3CDEFC7A;
    t25 = ((((((t22 - 1) - 1) << 1) + ((t22 - 1) - 1)) << 2) + (0x25C + a4));
    t26 = ((((((t22 - 1) << 1) + (t22 - 1)) << 2) + (0x25C + a4)) + 0xC);
    for (;;) {
        if ((unsigned int)t26 <= (unsigned int)((0x25C + a4) + 0x24)) {
            break;
        }
        t26 = (t26 - 12);
        t23 = t26;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)(t25); }
        t25 = (t25 - 12);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x274 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x268 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + a4)) = *(struct mv3 *)((a4 + 0x30)); }
    if (((((struct oD8_int *)(a4))->v)) == 0) {
        FUN_0c01cdc2(a4, t26);
    } else {
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c0cc3f8(0xF31A9, t26, (t22 - 1), (0x25C + a4));
            FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x15);
        } else {
            t45 = t25;
            t46 = t26;
            t47 = (t22 - 1);
            t48 = (0x25C + a4);
        }
        t56 = t45;
        t57 = t46;
        t58 = t47;
        t59 = t48;
    }
    FUN_0c0848d6(t56, t57, t58, t59, ((((struct o24C_float *)(a4))->v)), ((((struct o250_float *)(a4))->v)), ((((struct o254_float *)(a4))->v)));
    t67 = 0x0;
    for (;;) {
        if ((int)t67 >= (int)((((struct o248_int *)(a4))->v))) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((((t67 << 1) + t67) << 2) + (0x25C + a4)));
        nlRotateAY(((((struct o3CE_short *)(t1))->v)));
        nlRotateAX(((((struct o3CC_short *)(t1))->v)));
        u68 = 4.0f;
        u68 = (u68 - ((float)t67 / (1.0f + 1.0f)));
        nlScale(u68, u68, u68);
        FUN_0c0de000(u68);
        t78 = FUN_0c0da2e0();
        t79 = ((~(((~t78) + 0x1) & 0x3)) + 0x1);
        if ((int)t78 >= 0) {
            t79 = (t78 & 0x3);
        }
        FUN_0c0c465c((((((struct o220_int *)(a4))->v)) + t79));
        nlPopMatrix(0x1);
        t67 = (t67 + 0x1);
    }
    return FUN_0c0849da();
}


int FUN_0c064220(int a4, int a5)
{
    int stk[18];
    register int t1;
    register int t10;
    register int t24;
    register int t25;
    register int t41;
    register int t47;
    register int t14;

    t1 = FUN_0c0e19aa(0xC064520, 0x2BC, ((((struct o0_int *)0xC23ECE4)->v)));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)((((struct oE8_short *)(a4))->v)) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = ((((struct o1EC_int *)(a4))->v));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)((((struct oBC_int *)(a4))->v)));
    }
    (((struct o1EC_uint *)(t1))->v) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    t24 = (((struct oBC_int *)(a4))->v);
    t25 = (((struct o1E8_int *)(t1))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t25 << 1) + t25) << 2))); }
    (((struct o6E_ushort *)(t1))->v) = ((((struct o6E_short *)(a4))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    (((struct o220_uint *)(t1))->v) = 0x4F;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = ((((struct o6E_short *)(t1))->v));
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x8)) = 0x0;
    FUN_0c0a6780((((int)stk + 4) + 0x18), (t1 + 0x48), 0.0f, 0.0f, -10.0f);
    (((struct o6C_ushort *)(t1))->v) = (*(int *)(((((int)stk + 4) + 0x18) + 0x0)));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((t1 + 0x30));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX((((((struct o6C_short *)(a4))->v)) + 0x4000));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    FUN_0c0db840((((int)stk + 4) + 0xC));
    FUN_0c0a79fa(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
    t41 = FUN_0c0e19aa(0xC08C1AA, 0xA4, ((((struct oC_int *)0xC23ECE4)->v)));
    FUN_0c0e19d0(t41);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t41 + 0x70)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    (((struct o88_ushort *)(t41))->v) = (*(int *)((((int)stk + 4) + 0x0)));
    (((struct o8A_ushort *)(t41))->v) = (*(int *)((((int)stk + 4) + 0x4)));
    (((struct o8C_ushort *)(t41))->v) = (*(int *)((((int)stk + 4) + 0x8)));
    (((struct o9A_ushort *)(t41))->v) = 0x3FB;
    (((struct oA2_ushort *)(t41))->v) = 0x1;
    (((struct oA0_ushort *)(t41))->v) = 0x3;
    (((struct o90_float *)(t41))->v) = (1.0f + 1.0f);
    t47 = FUN_0c0e19aa(0xC08C25A, 0xA4, ((((struct oC_int *)0xC23ECE4)->v)));
    FUN_0c0e19d0(t47);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t47 + 0x70)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    (((struct o9A_ushort *)(t47))->v) = 0x344;
    (((struct oA2_ushort *)(t47))->v) = 0x1;
    (((struct oA0_ushort *)(t47))->v) = 0xA;
    (((struct o90_float *)(t47))->v) = (1.0f + 1.0f);
    return (nlPopMatrix(0x1));
}


int FUN_0c07bcac(int a4, int a5, int a6)
{
    int stk[17];
    register int t0;
    register float t13;
    register float u14;
    register int t41;
    register float u47;
    register float u48;
    register float u54;
    register int t59;
    register float u79;
    register int t30;
    register int t31;
    register int t32;
    register int t19;
    register int t20;
    register int t21;
    register int t42;
    register float u43;

    t0 = (((struct o0_int *)0xC247C78)->v);
    *(float *)(((int)stk + 16)) = ((float)t0 * 0.00138888881f);
    if ((int)((((struct o98_int *)(a4))->v)) < (int)0x78) {
        (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + 0x1);
        t30 = 0xC247C78;
        t31 = t0;
        t32 = a6;
    } else {
        if ((int)t0 < (int)0x2D0) {
            (((struct o0_uint *)0xC247C78)->v) = (((((struct o0_int *)0xC247C78)->v)) + 0x1);
            *(float *)0xC200798 = ((*(float *)(((int)stk + 16))) * 60.0f);
            t19 = 0xC247C78;
            t20 = t0;
            t21 = 0x2D0;
        } else {
            if (t0 == 0x2D0) {
                (((struct o0_uint *)0xC247C78)->v) = (((((struct o0_int *)0xC247C78)->v)) + 0x1);
                (((struct o10_uint *)0xC247C78)->v) = (*(int *)0xC23A258);
            }
            t13 = FUN_0c0da410((((*(int *)0xC23A258) - ((((struct o10_int *)0xC247C78)->v))) * 0x111));
            u14 = 60.0f;
            u14 = u14 + 60.0f * t13;
            *(float *)0xC200798 = u14;
        }
        t30 = t19;
        t31 = t20;
        t32 = t21;
    }
    FUN_0c0685a4(t30, t31, t32);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0xC20092C;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    FUN_0c0dcca0(0xC200920);
    t41 = 0xC07BDA8;
    for (;;) {
        if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
            t42 = (*(int *)(((int)stk + 8)));
            t41 = 0xC200900;
            t42 = (t42 << 2);
            u47 = *(float *)0xC200798;
            u48 = *(float *)((t42 + t41));
            t41 = 0xC200910;
            *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (u48 + u47);
            u43 = ((((u48 + u47) * 6.28317976f) - (*(float *)((t42 + t41)))) / 24.0f);
            t41 = (nlPushMatrix(0x0));
            t41 = 0xC;
            u54 = (float)((*(int *)(((int)stk + 8))) * 0x64);
            *(unsigned int *)((((a4 + 0x68) + t42) + 0x0)) = (int)((float)(*(int *)((((a4 + 0x68) + t42) + 0x0))) + (u54 * (*(float *)((((int)stk + 4) + t41)))));
            t41 = (nlRotateAZ((*(int *)((((a4 + 0x68) + t42) + 0x0)))));
            t41 = (nlRotateAX(((*(int *)((((a4 + 0x68) + t42) + 0x0))) << 1)));
            t59 = *(int *)((((a4 + 0x68) + t42) + 0x0));
            t41 = (nlRotateAY(((t59 << 1) + t59)));
            t42 = 0x0;
            for (;;) {
                t41 = (nlRotateAY(0x555));
                t41 = (nlPushMatrix(0x0));
                t41 = (FUN_0c0dcc70((*(float *)0xC200798), 0.0f, 0.0f));
                t41 = (FUN_0c0c465c((*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
                t41 = (nlPopMatrix(0x1));
                t41 = (nlRotateAY(0x555));
                if (u43 > 0.0f) {
                    t41 = (nlPushMatrix(0x0));
                    t41 = 0x8;
                    t41 = (FUN_0c0dcc70(0.0f, 0.0f, (*(float *)((((int)stk + 4) + t41)))));
                    t41 = (nlScale(u43, 1.69999993f, 1.69999993f));
                    t41 = (nlRotateAX(((((unsigned int)(*(int *)0xC23A258) >> 1) & 0xFFF) * 0x3763)));
                    t41 = (nlRotateAZ(0x4000));
                    t41 = 0xC07BF38;
                    t41 = (nlScale(1.0f, (*(float *)((t41 + 0x0))), 1.0f));
                    u79 = u43;
                    if (1.69999993f > u43) {
                        u79 = 1.69999993f;
                    }
                    t41 = (FUN_0c0de000(u79));
                    t41 = ((((*(unsigned int *)0xC23A258 >> 1) + t42) & 0xFF) % 3);
                    t41 = (FUN_0c0c465c((0x2BB + t41)));
                    t41 = (nlPopMatrix(0x1));
                }
                t42 = (t42 + 0x1);
                if ((int)t42 >= (int)0x18) {
                    break;
                }
            }
            t41 = (nlPopMatrix(0x1));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
            continue;
        }
        break;
    }
    return (nlPopMatrix(0x1));
}

void FUN_0c0a3916(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((*(int *)0xC23A1A8) & 0x10000001) == 0x10000001) {
        return;
    }
    if ((*(short *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        FUN_0c0e19f2();
    return;
    }
    if ((unsigned short)(*(short *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x4))) == 1) {
        return;
    }
    t0 = *(int *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x0));
    if ((((((struct o290_int *)(t0))->v)) & 0x40000000) != 0) {
        FUN_0c0e19f2();
    }
    if ((*(int *)((0xC247030 + (((((struct oBC_int *)(t0))->v)) << 2)))) == 8) {
        return;
    }
    t1 = (((struct o4C8_int *)(t0))->v);
    if (t1 != 1) {
        if (t1 != 2) {
        } else {
            if (((((struct o4E8_int *)(t0))->v)) == 1) {
                (((struct o4E8_uint *)(t0))->v) = 0x0;
                (((struct oA0_uint *)(a4))->v) = 0x0;
                (((struct oA4_uint *)(a4))->v) = 0x2;
            }
            if (((((struct o4E8_int *)(t0))->v)) == 2) {
                (((struct o4E8_uint *)(t0))->v) = 0x0;
                (((struct oA0_uint *)(a4))->v) = 0x0;
                (((struct oA4_uint *)(a4))->v) = 0x3;
            }
            if (((((struct o4E8_int *)(t0))->v)) == 3) {
                (((struct o4E8_uint *)(t0))->v) = 0x0;
                (((struct oA0_uint *)(a4))->v) = 0x0;
                (((struct oA4_uint *)(a4))->v) = 0x4;
            }
            if (((((struct oA4_int *)(a4))->v)) == 2) {
                t1 = *(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)));
                t2 = (((struct oA0_int *)(a4))->v);
                (((struct oA0_uint *)(a4))->v) = (t2 + 0x1);
                t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
                (((struct o78_uint *)(a4))->v) = t3;
                if ((int)t3 < 0) {
                    (((struct oA0_uint *)(a4))->v) = 0x0;
                    (((struct oA4_uint *)(a4))->v) = 0x1;
                    (((struct o78_uint *)(a4))->v) = (*(short *)(((((((struct oA0_int *)(a4))->v)) << 1) + (*(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)))))));
                }
            } else {
                if (((((struct oA4_int *)(a4))->v)) == 3) {
                    t1 = *(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)));
                    t2 = (((struct oA0_int *)(a4))->v);
                    (((struct oA0_uint *)(a4))->v) = (t2 + 0x1);
                    t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
                    (((struct o78_uint *)(a4))->v) = t3;
                    if ((int)t3 < 0) {
                        (((struct oA0_uint *)(a4))->v) = (((((struct oA0_int *)(a4))->v)) - 1);
                        (((struct o78_uint *)(a4))->v) = (*(short *)(((((((struct oA0_int *)(a4))->v)) << 1) + (*(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)))))));
                    }
                } else {
                    if (((((struct oA4_int *)(a4))->v)) == 4) {
                        t1 = *(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)));
                        t2 = (((struct oA0_int *)(a4))->v);
                        (((struct oA0_uint *)(a4))->v) = (t2 + 0x1);
                        t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
                        (((struct o78_uint *)(a4))->v) = t3;
                        if ((int)t3 < 0) {
                            (((struct oA0_uint *)(a4))->v) = 0x0;
                            (((struct oA4_uint *)(a4))->v) = 0x1;
                            (((struct o78_uint *)(a4))->v) = (*(short *)(((((((struct oA0_int *)(a4))->v)) << 1) + (*(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)))))));
                        }
                    }
                }
            }
        }
    } else {
        (((struct oA4_uint *)(a4))->v) = 0x1;
        t1 = *(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)));
        t2 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t2 + 0x1);
        t3 = *(short *)(((t1 + ((t2 + 0x1) << 1)) + 0x0));
        (((struct o78_uint *)(a4))->v) = t3;
        if ((int)t3 >= 0) {
        } else {
            (((struct oA0_uint *)(a4))->v) = 0x0;
            (((struct o78_uint *)(a4))->v) = (*(short *)(((((((struct oA0_int *)(a4))->v)) << 1) + (*(int *)((((((struct o8C_int *)(a4))->v)) + (((((struct oA4_int *)(a4))->v)) << 2)))))));
        }
    }
    nlPushMatrix(0x0);
    nlMultiMatrix(((((struct o3E4_int *)(t0))->v)));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    nlPopMatrix(0x1);
}

int FUN_0c05ba2a(int a4, int a5)
{
    int stk[13];

    register int R7;
    register int R9;
    register int R10;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_2 = a5;
    v0_4 = (0xBC);
    v0_5 = (0x1);
    v0_0 = (v0_2);
    v0_1 = (v0_7);
    v0_2 = (0x0);
    v0_3 = (0x0);
    if (((int)((((struct oBC_int *)(v0_7))->v)) >= (int)0x2)) goto L_C05BAA2;
    v0_4 = (0x344);
    if ((((((struct o344_int *)(v0_1))->v)) != 0)) goto L_C05BA5C;
    L_C05BC56:;
    return v0_4;
    L_C05BA5C:;
    v0_6 = *(int *)(((((((struct o34C_int *)(v0_1))->v)) << 2) + 0xC2475D4));
    v0_4 = (0x21C);
    v0_7 = (v0_6);
    if (((int)((((struct o21C_int *)(v0_6))->v)) <= 0)) goto L_C05BAA4;
    v0_9 = *(int *)((v0_7 + v0_4));
    v0_6 = (v0_9);
    v0_8 = (0x5);
    v0_2 = (0xC247544);
    if (((int)v0_9 >= (int)0x5)) goto L_C05BA8C;
    *(unsigned int *)((v0_7 + v0_4)) = v0_3;
    v0_7 = (((struct oBC_int *)(v0_1))->v);
    v0_4 = (0xBC);
    v0_6 = (((*(int *)(((v0_2 + (((v0_7 << 2) << 2) << 1)) + 0x0))) + 0x1));
    v0_2 = ((v0_2 + (((v0_7 << 2) << 2) << 1)));
    L_C05BAA0:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_6;
    L_C05BAA2:;
    v0_2 = (v0_5);
    L_C05BAA4:;
    if ((v0_2 != 0)) goto L_C05BAAC;
    goto L_C05BC56;
    L_C05BAAC:;
    v0_6 = FUN_0c0e19aa(0xC05BCD0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(v0_6);
    (((struct o21C_uint *)(v0_6))->v) = v0_5;
    (((struct oBC_uint *)(v0_6))->v) = ((((struct oBC_int *)(v0_1))->v));
    (((struct o200_uint *)(v0_6))->v) = (unsigned char)(*(signed char *)((v0_0 + 0x2)));
    v0_4 = (0xE8);
    v0_6 = (v0_6);
    if (((int)((((struct oE8_short *)(v0_1))->v)) >= (int)0x4)) goto L_C05BB18;
    if (((*(signed char *)((v0_0 + 0x4))) == 0)) goto L_C05BAEA;
    v0_4 = (((((struct o1EC_int *)(v0_1))->v)));
    L_C05BB24:;
    (((struct o1EC_uint *)(v0_6))->v) = v0_4;
    (((struct o1E8_uint *)(v0_6))->v) = (unsigned char)(*(signed char *)((v0_0 + 0x3)));
    (((struct o1F4_uint *)(v0_6))->v) = (unsigned char)(*(signed char *)((v0_0 + 0x4)));
    (((struct o204_uint *)(v0_6))->v) = (unsigned char)(*(signed char *)((v0_0 + 0x5)));
    (((struct o1E4_float *)(v0_6))->v) = (((((struct oC_float *)(v0_0))->v)) * 1.5f);
    (((struct o1FC_uint *)(v0_6))->v) = (unsigned char)(*(signed char *)((v0_0 + 0x1)));
    (((struct o1F8_uint *)(v0_6))->v) = (unsigned char)(*(signed char *)((v0_0 + 0x0)));
    (((struct o22C_uint *)(v0_6))->v) = (unsigned short)(*(short *)((v0_0 + 0x8)));
    FUN_0c0cc3f8(0x828A9, v0_2, v0_3, R7);
    FUN_0c0cc054(((((struct oBC_int *)(v0_1))->v)), 0x5);
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((((struct oBC_int *)(v0_1))->v)) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
    v0_2 = (((struct o344_int *)(v0_1))->v);
    FUN_0c0db470(((((v0_2 << 1) + v0_2) << 2) + 0xC1FEFBC), (v0_6 + 0x30));
    nlPopMatrix(0x1);
    (((struct o6E_ushort *)(v0_6))->v) = ((((struct o6E_short *)(v0_1))->v));
    (((struct o220_uint *)(v0_6))->v) = 0x124E;
    *(unsigned int *)((((int)stk + 8) + 0x0)) = (FUN_0c054ae0(v0_1));
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((struct o6E_short *)(v0_6))->v));
    *(unsigned int *)((((int)stk + 8) + 0x8)) = 0x0;
    FUN_0c0a6780(((int)stk + 8), (v0_6 + 0x48), 0.0f, 0.0f, -6.0f);
    (((struct o238_float *)(v0_6))->v) = 0.599999964f;
    (((struct o6C_ushort *)(v0_6))->v) = (*(int *)((((int)stk + 8) + 0x0)));
    (((struct o24C_float *)(v0_6))->v) = 2.5f;
    (((struct o250_float *)(v0_6))->v) = 2.5f;
    (((struct o3C_float *)(v0_6))->v) = (((((struct o30_float *)(v0_6))->v)) - (((((struct o48_float *)(v0_6))->v)) * 0.699999988f));
    (((struct o40_float *)(v0_6))->v) = (((((struct o34_float *)(v0_6))->v)) - (((((struct o4C_float *)(v0_6))->v)) * 0.699999988f));
    (((struct o44_float *)(v0_6))->v) = (((((struct o38_float *)(v0_6))->v)) - (((((struct o50_float *)(v0_6))->v)) * 0.699999988f));
    *(int *)((int)stk + 4) = 0x0;
    v0_4 = ((FUN_0c05b274(v0_1, v0_0, v0_6, 0x1, 0x0)));
    goto L_C05BC56;
    L_C05BAEA:;
    v0_4 = (0x0);
    goto L_C05BB24;
    L_C05BB18:;
    v0_4 = ((~(((int)v0_5 << (int)(*(short *)((v0_1 + v0_4)))) | 0xFF000)));
    goto L_C05BB24;
    L_C05BA8C:;
    *(unsigned int *)((v0_7 + v0_4)) = (v0_6 - v0_8);
    v0_7 = (((struct oBC_int *)(v0_1))->v);
    v0_4 = (0xBC);
    v0_6 = (((*(int *)(((v0_2 + (((v0_7 << 2) << 2) << 1)) + 0x0))) + v0_8));
    v0_2 = ((v0_2 + (((v0_7 << 2) << 2) << 1)));
    goto L_C05BAA0;
}

int FUN_0c02585c(int a4)
{
    int stk[12];
    register int t1;
    register int t2;
    register int t6;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t21;
    register int t30;
    register int t34;
    register float u35;
    register float u36;
    register float u37;
    register float u38;
    register float u39;
    register float u40;
    register float u41;
    register float u42;
    register int t47;
    register int t51;
    register int t56;
    register int t57;
    register int t58;
    register int t65;
    register int t73;

    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    t1 = (((struct o3AC_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    t2 = FUN_0c032394(a4);
                    if ((int)t2 < 0) {
                        (((struct o534_uint *)(a4))->v) = 0x0;
                        FUN_0c02a19a(a4);
                    }
                    t6 = (((struct o488_int *)(a4))->v);
                    if (((((struct oD8_int *)(t6))->v)) != 0) {
                        if (((((struct oD8_int *)(t6))->v)) == 2) {
                            FUN_0c090f70(t6);
                        } else {
                            t11 = ((int (*)(int))(FUN_0c0909fc))(t6);
                        }
                        (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x3C)) = *(struct mv3 *)((t6 + 0x30)); }
                        t15 = (((struct oBC_int *)(t6))->v);
                        t16 = (((struct o1E8_int *)(t6))->v);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)((((((((t15 << 1) + t15) << 2) << 2) << 2) + 0xC23F268) + (((t16 << 1) + t16) << 2))); }
                        t17 = ((int (*)(int))(FUN_0c01cdc2))(t6);
                    }
                } else {
                    if (t1 == 4) {
                        t21 = FUN_0c032394(a4);
                        if ((int)t21 < 0) {
                            (((struct o534_uint *)(a4))->v) = 0x0;
                            FUN_0c02a19a(a4);
                        }
                    }
                }
            } else {
                t30 = FUN_0c03261c(a4, 3.0f, 20.0f);
                if (t30 == 0) {
                    (((struct o534_uint *)(a4))->v) = 0x0;
                    FUN_0c02a19a(a4);
                }
                t34 = (((struct o510_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)((((((((t34 << 1) + t34) << 2) << 2) << 2) + 0xC23F268) + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
                u35 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
                u36 = (((struct o4_float *)((((int)stk + 4) + 0xC)))->v);
                u37 = (((struct o4_float *)(((int)stk + 4)))->v);
                u38 = *(float *)((((int)stk + 4) + 0x0));
                u39 = (((struct o8_float *)((((int)stk + 4) + 0xC)))->v);
                u40 = (((struct o8_float *)(((int)stk + 4)))->v);
                u41 = ((u37 - u36) * (u37 - u36));
                u41 = u41 + (u38 - u35) * (u38 - u35);
                u42 = u41;
                u42 = u42 + (u40 - u39) * (u40 - u39);
                if (!(_builtin_sqrtf(u42) > 10.0f)) {
                    (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
                }
                t47 = (((struct o488_int *)(a4))->v);
                if (((((struct oD8_int *)(t47))->v)) != 0) {
                    if (((((struct oD8_int *)(t47))->v)) != 2) {
                        t51 = ((int (*)(int, Stk3))(FUN_0c0909fc))(t47, *(Stk3 *)(((int)stk + 4)));
                    } else {
                        FUN_0c090f70(t47);
                    }
                    (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t47 + 0x3C)) = *(struct mv3 *)((t47 + 0x30)); }
                    t56 = (((struct oBC_int *)(t47))->v);
                    t57 = (((struct o1E8_int *)(t47))->v);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t47 + 0x30)) = *(struct mv3 *)((((((((t56 << 1) + t56) << 2) << 2) << 2) + 0xC23F268) + (((t57 << 1) + t57) << 2))); }
                    t58 = ((int (*)(int, int))(FUN_0c01cdc2))(t47, (((int)stk + 4) + 0xC));
                }
            }
        } else {
            t65 = FUN_0c03271c(a4, 4.0f, 20.0f);
            if (t65 == 0) {
            } else {
                (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
            }
        }
    } else {
        t73 = FUN_0c0327c8(a4, 0.0199999996f, 0.0399999991f, 0.799999952f);
        if (t73 != 0) {
            (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
        }
    }
    return (FUN_0c022c5e(a4));
}

