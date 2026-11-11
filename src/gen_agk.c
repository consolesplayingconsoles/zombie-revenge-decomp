/* Straight-line functions with calls and guards (batch gen_agk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o38C_int { char p[0x38C]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o4DC_int { char p[0x4DC]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
int FUN_0c08448c(int);
int FUN_0c0848d6(int, int, float, float, float);
int FUN_0c0849da(void);
int FUN_0c08b810(int);
int FUN_0c0c47ae(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0a4cd0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0a4cd0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[8];
    register int t14;
    register int t16;
    register int t216;
    register int t35;
    register float u36;
    register int t38;
    register float u39;
    register int t47;
    register float u48;
    register int t50;
    register float u51;
    register int t71;
    register int t109;
    register int t110;
    register int t75;
    register int t77;
    register int t78;
    register int t81;
    register int t82;
    register float u125;
    register float u129;
    register float u131;
    register float u140;
    register float u143;
    register float u146;
    register float u147;
    register int t155;
    register float u157;
    register int t161;
    register float u177;
    register float u190;
    register int t229;
    register int t24;
    register int t25;
    int t26;
    int t27;
    register int t28;
    float u42;
    float u54;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC10D0E8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC10D0F4); }
    if ((*(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC247030) + 0x0))) == 0) {
        t229 = (FUN_0c0e19f2());
    } else {
        t14 = *(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        t16 = *(int *)((0xC247030 + (((((struct oBC_int *)(t14))->v)) << 2)));
        t216 = t16;
        if (t16 == 8) {
        } else {
            if (((((((struct o4D0_int *)(t14))->v)) != 0) && (((t24 = (((struct o80_int *)(a4))->v), (int)t24 > 0) || ((t25 = (((struct o80_int *)(a4))->v), t25 == 0) && (t26 = (((struct o78_int *)(a4))->v), t26 == 1))) && (t27 = (((struct o4DC_int *)(t14))->v), t27 == 0))) || (t28 = (((struct o304_int *)(t14))->v), (int)t28 <= 0)) {
                (((struct o80_uint *)(a4))->v) = 0xFFFFFFE2;
            }
            if ((int)((((struct o80_int *)(a4))->v)) > 0) {
                t35 = (((struct o80_int *)(a4))->v);
                u36 = (((struct o90_float *)(a4))->v);
                (((struct o90_float *)(a4))->v) = (u36 + (90.0f / (float)t35));
                if ((u36 + (90.0f / (float)t35)) > 90.0f) {
                    (((struct o90_float *)(a4))->v) = 90.0f;
                }
                t38 = (((struct o80_int *)(a4))->v);
                u39 = (((struct o94_float *)(a4))->v);
                (((struct o94_float *)(a4))->v) = (u39 + (-90.0f / (float)t38));
                if (-90.0f > (u39 + (-90.0f / (float)t38))) {
                    (((struct o94_float *)(a4))->v) = -90.0f;
                }
                if ((((((struct o90_float *)(a4))->v)) == 90.0f) && (u42 = (((struct o94_float *)(a4))->v), u42 == -90.0f)) {
                    (((struct o80_uint *)(a4))->v) = 0x0;
                    (((struct o78_uint *)(a4))->v) = 0x1;
                }
            } else {
                if ((int)((((struct o80_int *)(a4))->v)) < 0) {
                    t47 = (((struct o80_int *)(a4))->v);
                    u48 = (((struct o90_float *)(a4))->v);
                    (((struct o90_float *)(a4))->v) = (u48 + (90.0f / (float)t47));
                    if (0.0f > (u48 + (90.0f / (float)t47))) {
                        (((struct o90_float *)(a4))->v) = 0.0f;
                    }
                    t50 = (((struct o80_int *)(a4))->v);
                    u51 = (((struct o94_float *)(a4))->v);
                    (((struct o94_float *)(a4))->v) = (u51 + (-90.0f / (float)t50));
                    if ((u51 + (-90.0f / (float)t50)) > 0.0f) {
                        (((struct o94_float *)(a4))->v) = 0.0f;
                    }
                    if ((((((struct o90_float *)(a4))->v)) == 0.0f) && (u54 = (((struct o94_float *)(a4))->v), u54 == 0.0f)) {
                        (((struct o80_uint *)(a4))->v) = 0x0;
                        (((struct o84_uint *)(a4))->v) = 0x0;
                        (((struct o78_uint *)(a4))->v) = 0x0;
                        (((struct oA0_uint *)(a4))->v) = 0x0;
                        (((struct oA4_uint *)(a4))->v) = 0x4;
                    }
                }
            }
            t71 = (((struct o84_int *)(a4))->v);
            t109 = 0x0;
            t110 = a5;
            if (t71 != 0) {
                if (t71 != 1) {
                    t109 = 0x0;
                    t110 = a5;
                } else {
                    t75 = (((struct oA0_int *)(a4))->v);
                    if ((int)t75 > 0) {
                        t77 = (int)((int)0x1000 / (int)((((struct oA0_int *)(a4))->v)));
                        t78 = (((struct o70_int *)(a4))->v);
                        (((struct o70_uint *)(a4))->v) = (t78 + t77);
                        if ((int)(t78 + t77) > (int)0x1000) {
                            (((struct o70_uint *)(a4))->v) = 0x1000;
                        }
                    } else {
                        if ((int)t75 < 0) {
                            t81 = (int)((int)0x1000 / (int)((((struct oA0_int *)(a4))->v)));
                            t82 = (((struct o70_int *)(a4))->v);
                            (((struct o70_uint *)(a4))->v) = (t82 + t81);
                            if ((int)(t82 + t81) < 0) {
                                (((struct o70_uint *)(a4))->v) = 0x0;
                            }
                        }
                    }
                    (((struct o68_uint *)(a4))->v) = (((((struct o68_int *)(a4))->v)) - (*(int *)(((a4 + 0x68) + 0x8))));
                    *(unsigned int *)(((a4 + 0x68) + 0x4)) = ((*(int *)(((a4 + 0x68) + 0x4))) - (*(int *)(((a4 + 0x68) + 0x8))));
                    t109 = (a4 + 0x68);
                    t110 = 0x1000;
                }
            }
            FUN_0c0848d6(t109, t110, ((((struct o45C_float *)(t14))->v)), ((((struct o4_float *)((0x45C + t14)))->v)), ((((struct o8_float *)((0x45C + t14)))->v)));
            if (((((struct o38C_int *)(t14))->v)) != 0) {
                FUN_0c08b810(a4);
            }
            nlPushMatrix(0x0);
            FUN_0c0dbda0(((((struct o3E4_int *)(t14))->v)));
            nlPushMatrix(0x0);
            u125 = (((struct o90_float *)(a4))->v);
            u129 = ((((((struct o4_float *)((((int)stk + 0) + 0x14)))->v)) * u125) / 90.0f);
            u131 = ((((((struct o14_float *)(((int)stk + 0)))->v)) * u125) / 90.0f);
            FUN_0c0dcc70((u131 + -1.5f), (u129 + 2.69999981f), ((((((((struct o8_float *)((((int)stk + 0) + 0x14)))->v)) * u125) / 90.0f)) + -0.227699995f));
            nlRotateAY((int)(((((struct o90_float *)(a4))->v)) * 182.044434f));
            FUN_0c0de000((((((struct o284_float *)(t14))->v)) * 1.0f));
            FUN_0c0c47ae(0x72B);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            u140 = (((struct o94_float *)(a4))->v);
            *(float *)(((int)stk + 4)) = u140;
            u143 = *(float *)(((int)stk + 4));
            u146 = (((*(float *)(((int)stk + 12))) * u143) / -90.0f);
            u147 = (((*(float *)(((int)stk + 8))) * u143) / -90.0f);
            FUN_0c0dcc70((u147 + 1.5f), (u146 + 2.69999981f), (((((*(float *)(((int)stk + 16))) * u140) / -90.0f)) + -0.227699995f));
            nlRotateAY((int)(((((struct o94_float *)(a4))->v)) * 182.044434f));
            FUN_0c0de000((((((struct o284_float *)(t14))->v)) * 1.0f));
            FUN_0c0c47ae(0x72C);
            nlPopMatrix(0x1);
            t155 = (((struct o84_int *)(a4))->v);
            if (t155 != 0) {
                if (t155 != 1) {
                    if (t155 == 2) {
                        nlPushMatrix(0x0);
                        u157 = (((struct o284_float *)(t14))->v);
                        nlScale((1.0f / u157), (1.0f / u157), (1.0f / u157));
                        FUN_0c0de000((1.0f / ((((struct o284_float *)(t14))->v))));
                        t161 = 0x0;
                        for (;;) {
                            if ((int)t161 >= (int)((((struct oA4_int *)(a4))->v))) {
                                break;
                            }
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 0)) = ((((t161 << 1) + t161) << 2) + 0xC201110);
                            FUN_0c0dcc70((*(float *)((((((t161 << 1) + t161) << 2) + 0xC201110) + 0x0))), ((((struct o4_float *)(((((t161 << 1) + t161) << 2) + 0xC201110)))->v)), ((((struct o8_float *)(((((t161 << 1) + t161) << 2) + 0xC201110)))->v)));
                            FUN_0c0c47ae(0x125C);
                            nlPopMatrix(0x1);
                            t161 = (t161 + 0x1);
                        }
                        nlPopMatrix(0x1);
                    }
                } else {
                    nlPushMatrix(0x0);
                    u177 = ((((struct o90_float *)(a4))->v));
                    u177 *= -0.319999993f;
                    FUN_0c0dcc70(((((struct o8_float *)0xC0A51C4)->v)), ((((struct o4_float *)0xC0A51C4)->v)), ((u177 / 90.0f) + ((((struct o0_float *)0xC0A51C4)->v))));
                    nlRotateAZ(((((struct o68_int *)(a4))->v)));
                    FUN_0c0de000((((((struct o284_float *)(t14))->v)) * 1.0f));
                    FUN_0c0c47ae(0x711);
                    nlPopMatrix(0x1);
                    nlPushMatrix(0x0);
                    u190 = ((((struct o94_float *)(a4))->v));
                    u190 *= -0.319999993f;
                    FUN_0c0dcc70(((((struct o10_float *)0xC0A51C4)->v)), ((((struct o4_float *)0xC0A51C4)->v)), ((u190 / -90.0f) + ((((struct o0_float *)0xC0A51C4)->v))));
                    nlRotateAZ(((((struct o6C_int *)(a4))->v)));
                    FUN_0c0de000((((((struct o284_float *)(t14))->v)) * 1.0f));
                    FUN_0c0c47ae(0x712);
                    nlPopMatrix(0x1);
                }
            }
            nlPopMatrix(0x1);
            FUN_0c0849da();
            t216 = 0x38C;
            if (((((struct o38C_int *)(t14))->v)) != 0) {
                t216 = (FUN_0c08448c(0x1));
            }
        }
        t229 = t216;
    }
    return t229;
}
