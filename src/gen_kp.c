/* Straight-line functions with calls and guards (batch gen_kp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08448c(int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c08b810(int);
int FUN_0c0bb980(int);
int FUN_0c0bc744(int);
int FUN_0c0bc750(int, int);
int FUN_0c0bc798(int, int, int);
int FUN_0c0bcad0(int, int, int, int, int, int);
int FUN_0c0bd164(int, int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
void FUN_0c0bbbf4(int a4);
struct o104_int { char p[0x104]; int v; };
struct o110_int { char p[0x110]; int v; };
struct o114_int { char p[0x114]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o120_int { char p[0x120]; int v; };
struct o242_short { char p[0x242]; short v; };
struct o246_short { char p[0x246]; short v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o32C_int { char p[0x32C]; int v; };
struct o388_int { char p[0x388]; int v; };
struct o388_uint { char p[0x388]; unsigned int v; };
struct o38C_int { char p[0x38C]; int v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3E8_float { char p[0x3E8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40C_int { char p[0x40C]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o454_short { char p[0x454]; short v; };
struct o458_float { char p[0x458]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o460_float { char p[0x460]; float v; };
struct o464_float { char p[0x464]; float v; };
struct o468_float { char p[0x468]; float v; };
struct o46C_float { char p[0x46C]; float v; };
struct o470_float { char p[0x470]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o74_int { char p[0x74]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct o404_int { char p[0x404]; int v; };
struct oC_float { char p[0xC]; float v; };



void FUN_0c0bbbf4(int a4)
{
    int stk[29];
    register int t2;
    register int t4;
    register int t14;
    register int t130;
    register int t133;
    register int t135;
    register int t158;
    register int t163;
    register int t185;
    register int t187;
    register int t194;
    register int t210;
    register int t213;
    register int t220;
    register int t222;
    register int t242;
    register int t249;
    register int t251;
    register int t258;
    register int t282;
    register int t284;
    register int t291;
    register int t307;
    register int t310;
    register int t317;
    register int t319;
    register int t339;
    register int t346;
    register int t348;
    register int t368;
    register int t375;
    register int t378;
    register int t382;
    register int t384;
    register int t404;
    register int t411;
    register int t413;
    register int t420;
    register int t423;
    register int t426;
    register int t429;
    register int t445;
    register int t452;
    register int t454;
    register int t478;
    register int t480;
    register int t509;
    register int t516;
    register int t518;
    register int t525;
    register int t528;
    register int t531;
    register int t534;
    register int t550;
    register int t557;
    register int t559;
    register int t583;
    register int t585;
    register int t610;
    register float u117;
    register int t490;
    register int t491;
    register int t492;

    *(unsigned int *)(((int)stk + 8)) = ((((struct oBC_int *)(a4))->v));
    t2 = *(int *)(((((((struct oC0_int *)(a4))->v)) << 2) + 0xC195BE0));
    t4 = (((struct o3D4_int *)(a4))->v);
    *(unsigned int *)0xC260A34 = (*(int *)((((((((struct oC4_int *)(a4))->v)) << 2) + (0xC26086C + ((((((struct oC0_int *)(a4))->v)) << 2) << 1))) + 0x0)));
    FUN_0c0dc5a0();
    FUN_0c0dcbb0((0x274 + a4));
    nlInvertMatrix(0x0);
    nlGetMatrix((((int)stk + 8) + 0x8));
    nlPopMatrix(0x1);
    if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
    } else {
        t14 = (((struct o32C_int *)(a4))->v);
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                } else {
                    (((struct o468_float *)(a4))->v) = 0.699999988f;
                    (((struct o46C_float *)(a4))->v) = 0.5f;
                    (((struct o470_float *)(a4))->v) = 0.899999976f;
                }
            } else {
                (((struct o468_float *)(a4))->v) = 0.899999976f;
                (((struct o46C_float *)(a4))->v) = 0.699999988f;
                (((struct o470_float *)(a4))->v) = 1.0f;
            }
        } else {
            (((struct o468_float *)(a4))->v) = 1.0f;
            (((struct o46C_float *)(a4))->v) = 1.0f;
            (((struct o470_float *)(a4))->v) = 1.0f;
        }
        if (((((struct o45C_float *)(a4))->v)) > ((((struct o468_float *)(a4))->v))) {
            (((struct o45C_float *)(a4))->v) = (((((struct o45C_float *)(a4))->v)) - 0.0199999996f);
        } else {
            if (((((struct o468_float *)(a4))->v)) > ((((struct o45C_float *)(a4))->v))) {
                (((struct o45C_float *)(a4))->v) = (((((struct o45C_float *)(a4))->v)) + 0.0199999996f);
            }
        }
        if (((((struct o460_float *)(a4))->v)) > ((((struct o46C_float *)(a4))->v))) {
            (((struct o460_float *)(a4))->v) = (((((struct o460_float *)(a4))->v)) - 0.0199999996f);
        } else {
            if (((((struct o46C_float *)(a4))->v)) > ((((struct o460_float *)(a4))->v))) {
                (((struct o460_float *)(a4))->v) = (((((struct o460_float *)(a4))->v)) + 0.0199999996f);
            }
        }
        if (((((struct o464_float *)(a4))->v)) > ((((struct o470_float *)(a4))->v))) {
            (((struct o464_float *)(a4))->v) = (((((struct o464_float *)(a4))->v)) - 0.0199999996f);
        } else {
            if (((((struct o470_float *)(a4))->v)) > ((((struct o464_float *)(a4))->v))) {
                (((struct o464_float *)(a4))->v) = (((((struct o464_float *)(a4))->v)) + 0.0199999996f);
            }
        }
    }
    FUN_0c0848d6(((((struct o45C_float *)(a4))->v)), ((((struct o4_float *)((0x45C + a4)))->v)), ((((struct o8_float *)((0x45C + a4)))->v)));
    if (((((struct o38C_int *)(a4))->v)) != 0) {
        FUN_0c08b810(a4);
    }
    *(unsigned int *)0xC260868 = ((((struct o3E4_int *)(a4))->v));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ((-((((struct o70_short *)(a4))->v))));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    if ((int)((((struct oBC_int *)(a4))->v)) >= (int)0x4) {
        nlRotateAX((-((((struct o242_short *)(a4))->v))));
        nlRotateAZ((-((((struct o246_short *)(a4))->v))));
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, ((((struct o3E8_float *)(a4))->v)), 0.0f);
    nlRotateAZ((*(short *)((t4 + 0x0))));
    nlRotateAY((*(short *)(((t4 + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((t4 + 0x2) + 0x2) + 0x0))));
    FUN_0c0dcbb0((0x274 + a4));
    if (((((struct o274_float *)(a4))->v)) > ((((struct o278_float *)(a4))->v))) {
        u117 = ((((struct o274_float *)(a4))->v));
    } else {
        u117 = ((((struct o278_float *)(a4))->v));
    }
    (((struct o280_float *)(a4))->v) = u117;
    nlPushMatrix(0x0);
    if (((((struct o388_int *)(a4))->v)) != 0) {
        (((struct o388_uint *)(a4))->v) = 0x2;
    }
    (((struct o388_uint *)(a4))->v) = 0x2;
    *(int *)((int)stk + 4) = 0x0;
    FUN_0c0bd164(a4, t2, (((t4 + 0x2) + 0x2) + 0x2), (0x404 + a4), 0x0);
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t130 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))(((((struct o404_int *)(a4))->v)), ((((struct o458_float *)(a4))->v)));
    t133 = ((int (*)(void))(((((struct o110_int *)((*(int *)0xC260A34)))->v))))();
    if ((*(int *)0xC260868) != 0) {
        t135 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t135 + 0x40);
        nlGetMatrix(((t135 + 0x40) - 64));
    }
    FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x0);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct oC_float *)(t2))->v)), ((((struct o4_float *)((t2 + 0xC)))->v)), (-((((struct o8_float *)((t2 + 0xC)))->v))));
    FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x1);
    FUN_0c0bc744(a4);
    nlRotateAZ((*(short *)((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x0))));
    nlRotateAY((*(short *)(((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x0))));
    t158 = ((int (*)(int))(((((struct o104_int *)((*(int *)0xC260A34)))->v))))(a4);
    FUN_0c0bc798(a4, ((t2 + 0xC) + 0xC), ((0x404 + a4) + 0x4));
    FUN_0c0db840(0xC260844);
    nlPopMatrix(0x1);
    if ((*(int *)0xC260868) != 0) {
        t163 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t163 + 0x40);
        nlGetMatrix(((t163 + 0x40) - 64));
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct oC_float *)(((t2 + 0xC) + 0xC)))->v)), ((((struct o4_float *)((((t2 + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)((((t2 + 0xC) + 0xC) + 0xC)))->v))));
    nlRotateAZ((*(short *)(((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)(((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t185 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)(((((0x404 + a4) + 0x4) + 0x8) + 0x0))), ((((struct o458_float *)(a4))->v)));
    if ((*(int *)0xC260868) != 0) {
        t187 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t187 + 0x40);
        nlGetMatrix(((t187 + 0x40) - 64));
    }
    t194 = ((int (*)(void))(((((struct o118_int *)((*(int *)0xC260A34)))->v))))();
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct oC_float *)((((t2 + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)(((((t2 + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)(((((t2 + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
    FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x2);
    nlRotateAZ((*(short *)((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)(((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    t210 = ((int (*)(void))(((((struct o11C_int *)((*(int *)0xC260A34)))->v))))();
    t213 = ((int (*)(int))(((((struct o74_int *)((*(int *)0xC260A34)))->v))))(a4);
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t220 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
    if ((*(int *)0xC260868) != 0) {
        t222 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t222 + 0x40);
        nlGetMatrix(((t222 + 0x40) - 64));
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct oC_float *)(((((t2 + 0xC) + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
    FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x3);
    nlRotateAZ((*(short *)(((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)(((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    t242 = ((int (*)(int))(((((struct o94_int *)((*(int *)0xC260A34)))->v))))(a4);
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t249 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)(((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
    if ((*(int *)0xC260868) != 0) {
        t251 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t251 + 0x40);
        nlGetMatrix(((t251 + 0x40) - 64));
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 8) + 0x8));
    t258 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (t258 << 8);
    nlGetMatrix(((((t258 << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)) + 0x80));
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct oC_float *)((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)(((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)(((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
    nlRotateAZ((*(short *)((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)(((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t282 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
    if ((*(int *)0xC260868) != 0) {
        t284 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t284 + 0x40);
        nlGetMatrix(((t284 + 0x40) - 64));
    }
    t291 = ((int (*)(void))(((((struct o118_int *)((*(int *)0xC260A34)))->v))))();
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct oC_float *)(((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
    FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x4);
    nlRotateAZ((*(short *)(((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)(((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    t307 = ((int (*)(void))(((((struct o11C_int *)((*(int *)0xC260A34)))->v))))();
    t310 = ((int (*)(int))(((((struct o84_int *)((*(int *)0xC260A34)))->v))))(a4);
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t317 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)(((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
    if ((*(int *)0xC260868) != 0) {
        t319 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t319 + 0x40);
        nlGetMatrix(((t319 + 0x40) - 64));
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct oC_float *)((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)(((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)(((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
    FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x5);
    nlRotateAZ((*(short *)((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)(((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    t339 = ((int (*)(int))(((((struct oA4_int *)((*(int *)0xC260A34)))->v))))(a4);
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t346 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
    if ((*(int *)0xC260868) != 0) {
        t348 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t348 + 0x40);
        nlGetMatrix(((t348 + 0x40) - 64));
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 8) + 0x8));
    nlGetMatrix((((*(int *)(((int)stk + 12))) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(volatile int *)((a4 + 0x2F4));
    *(int *)((int)stk + 4) = 0x1;
    FUN_0c0bd164(a4, (((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2), (((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4), 0x1);
    t368 = ((int (*)(int))(((((struct oF4_int *)((*(int *)0xC260A34)))->v))))(a4);
    FUN_0c0de000(((((struct o280_float *)(a4))->v)));
    t375 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)(((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
    t378 = ((int (*)(int))(((((struct o114_int *)((*(int *)0xC260A34)))->v))))(a4);
    t382 = ((int (*)(int, int))((*(int *)(((*(int *)0xC260A34) + 0x4)))))(a4, ((((struct o40C_int *)(a4))->v)));
    if ((*(int *)0xC260868) != 0) {
        t384 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t384 + 0x40);
        nlGetMatrix(((t384 + 0x40) - 64));
    }
    if ((((((struct o2F4_int *)(a4))->v)) & 1) == 0) {
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        FUN_0c0bcad0(a4, ((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6), ((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4), 0x0, 0x0);
        t490 = (((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x12);
        t491 = (((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0x24);
        t492 = (((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0xC);
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct oC_float *)((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)(((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)(((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
        nlRotateAZ((*(short *)((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x0))));
        nlRotateAY((*(short *)(((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x0))));
        nlRotateAX((*(short *)((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x0))));
        t404 = ((int (*)(void))(((((struct oB4_int *)((*(int *)0xC260A34)))->v))))();
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        t411 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
        if ((*(int *)0xC260868) != 0) {
            t413 = *(int *)0xC260868;
            *(unsigned int *)0xC260868 = (t413 + 0x40);
            nlGetMatrix(((t413 + 0x40) - 64));
        }
        t420 = ((int (*)(void))(((((struct o120_int *)((*(int *)0xC260A34)))->v))))();
        t423 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x14)))))(a4);
        t426 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x34)))))();
        t429 = ((int (*)(void))(((((struct o54_int *)((*(int *)0xC260A34)))->v))))();
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct oC_float *)(((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)((((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)((((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
        FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x6);
        nlRotateAZ((*(short *)(((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAY((*(short *)((((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAX((*(short *)(((((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        t445 = ((int (*)(int))(((((struct oD4_int *)((*(int *)0xC260A34)))->v))))(a4);
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        t452 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)(((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
        if ((*(int *)0xC260868) != 0) {
            t454 = *(int *)0xC260868;
            *(unsigned int *)0xC260868 = (t454 + 0x40);
            nlGetMatrix(((t454 + 0x40) - 64));
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct oC_float *)((((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), ((((struct o4_float *)(((((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v)), (-((((struct o8_float *)(((((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC)))->v))));
        FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x7);
        nlRotateAZ((*(short *)((((((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAY((*(short *)(((((((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAX((*(short *)((((((((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        t478 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)((((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
        if ((*(int *)0xC260868) != 0) {
            t480 = *(int *)0xC260868;
            *(unsigned int *)0xC260868 = (t480 + 0x40);
            nlGetMatrix(((t480 + 0x40) - 64));
        }
        FUN_0c0db840(0xC260850);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        t490 = (((((((((((((((((((((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x6) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2);
        t491 = (((((((((((((t2 + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC);
        t492 = (((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4);
    }
    if ((((((struct o2F4_int *)(a4))->v)) & 1) == 0) {
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0x0;
        FUN_0c0bcad0(a4, t491, t490, t492, 0x0, 0x2);
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((t491 + 0x0))), ((((struct o4_float *)(t491))->v)), (-((((struct o8_float *)(t491))->v))));
        nlRotateAZ((*(short *)((t490 + 0x0))));
        nlRotateAY((*(short *)(((t490 + 0x2) + 0x0))));
        nlRotateAX((*(short *)((((t490 + 0x2) + 0x2) + 0x0))));
        t509 = ((int (*)(void))(((((struct oC4_int *)((*(int *)0xC260A34)))->v))))();
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        t516 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)((t492 + 0x0))), ((((struct o458_float *)(a4))->v)));
        if ((*(int *)0xC260868) != 0) {
            t518 = *(int *)0xC260868;
            *(unsigned int *)0xC260868 = (t518 + 0x40);
            nlGetMatrix(((t518 + 0x40) - 64));
        }
        t525 = ((int (*)(void))(((((struct o120_int *)((*(int *)0xC260A34)))->v))))();
        t528 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x24)))))(a4);
        t531 = ((int (*)(int))(((((struct o44_int *)((*(int *)0xC260A34)))->v))))(a4);
        t534 = ((int (*)(int))(((((struct o64_int *)((*(int *)0xC260A34)))->v))))(a4);
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct oC_float *)(t491))->v)), ((((struct o4_float *)((t491 + 0xC)))->v)), (-((((struct o8_float *)((t491 + 0xC)))->v))));
        FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x8);
        nlRotateAZ((*(short *)(((((t490 + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAY((*(short *)((((((t490 + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAX((*(short *)(((((((t490 + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        t550 = ((int (*)(int))(((((struct oE4_int *)((*(int *)0xC260A34)))->v))))(a4);
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        t557 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)(((t492 + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
        if ((*(int *)0xC260868) != 0) {
            t559 = *(int *)0xC260868;
            *(unsigned int *)0xC260868 = (t559 + 0x40);
            nlGetMatrix(((t559 + 0x40) - 64));
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct oC_float *)((t491 + 0xC)))->v)), ((((struct o4_float *)(((t491 + 0xC) + 0xC)))->v)), (-((((struct o8_float *)(((t491 + 0xC) + 0xC)))->v))));
        FUN_0c0bc750((*(int *)(((int)stk + 8))), 0x9);
        nlRotateAZ((*(short *)((((((((t490 + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAY((*(short *)(((((((((t490 + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        nlRotateAX((*(short *)((((((((((t490 + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        t583 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)((((t492 + 0x4) + 0x4) + 0x0))), ((((struct o458_float *)(a4))->v)));
        if ((*(int *)0xC260868) != 0) {
            t585 = *(int *)0xC260868;
            *(unsigned int *)0xC260868 = (t585 + 0x40);
            nlGetMatrix(((t585 + 0x40) - 64));
        }
        FUN_0c0db840(0xC26085C);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
    }
    nlPopMatrix(0x1);
    FUN_0c0bb980(a4);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    FUN_0c0849da();
    if (((((struct o38C_int *)(a4))->v)) != 0) {
        FUN_0c08448c(0x1);
    }
    if ((((((struct oC8_int *)(a4))->v)) & 0x400) == 0) {
        t610 = *(int *)(((int)stk + 8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB4 + ((((((t610 << 1) + t610) << 2) << 2) << 2) + 0xC23F268))) = *(struct mv3 *)((((((((t610 << 1) + t610) << 2) << 2) << 2) + 0xC23F268) + 0xC)); }
    }
}
