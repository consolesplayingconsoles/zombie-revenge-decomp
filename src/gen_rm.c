/* Straight-line functions with calls and guards (batch gen_rm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcbe0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c099548(int a4, int a5, int a6, int a7, float f4);

int FUN_0c099548(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t2;
    register int t15;
    register int t20;
    register float u21;
    register float u24;
    register int t29;
    register int t42;
    register int t47;
    register float u48;
    register float u51;
    register int t57;
    register int t75;
    register int t76;
    register int t77;
    register float u80;
    register float u81;
    register float u82;
    register int t176;
    register float u179;
    register float u180;
    register float u181;
    register float u98;
    register int t103;
    register int t105;
    register float u107;
    register float u116;
    register float u117;
    register float u140;
    register float u141;
    register float u149;
    register float u151;
    register int t185;
    register int t194;
    register int t187;
    int t4;
    register int t5;
    register float u70;
    register float u71;
    register float u78;
    register float u79;
    register float u172;
    register float u173;
    register float u174;
    register int t109;
    register float u113;
    register float u165;
    register float u166;
    register float u167;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
    FUN_0c0685a4(a4, a5, a6, a7);
    t2 = *(int *)((a4 + 0x34));
    t76 = 0x2EC;
    if (((*(int *)(((t2 << 2) + 0xC247030))) != 0) && (t4 = *(int *)(((int)stk + 4)), t5 = (((struct o2EC_int *)(t4))->v), (t5 & 15) == 0)) {
    } else {
        *(unsigned int *)((a4 + 0x38)) = 0x1;
        t76 = (t2 << 2);
    }
    if ((*(int *)((a4 + 0x38))) != 0) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dbda0((((((struct o3E4_int *)((*(int *)(((int)stk + 4)))))->v)) + 0x40));
        if ((int)((*(int *)((a4 + 0x3C))) & 0xF) > (int)0x7) {
            t15 = (((struct o48_int *)(a4))->v);
            (((struct o48_uint *)(a4))->v) = (t15 + 0x1);
            if ((int)(t15 + 0x1) >= (int)0xB4) {
                (((struct o48_uint *)(a4))->v) = 0x0;
            }
            *(unsigned int *)((((t15 * 0x3C) + (a4 + 0x5C)) + 0x0)) = 0x5A;
            *(unsigned int *)((((t15 * 0x3C) + (a4 + 0x5C)) + 0x4)) = 0x0;
            *(unsigned int *)((((t15 * 0x3C) + (a4 + 0x5C)) + 0x8)) = 0xFB;
            (((struct o18_float *)(((t15 * 0x3C) + (a4 + 0x5C))))->v) = 1.0f;
            *(unsigned int *)((((t15 * 0x3C) + (a4 + 0x5C)) + 0xC)) = (FUN_0c0da2e0());
            t20 = *(int *)(((int)stk + 4));
            u21 = 1.0f;
            u21 = u21 + 3.05175781e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
            (((struct o1C_float *)(((t15 * 0x3C) + (a4 + 0x5C))))->v) = (u21 * ((((struct o278_float *)(t20))->v)));
            u24 = 0.5f;
            u24 = u24 + 1.52587891e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
            (((struct o20_float *)(((t15 * 0x3C) + (a4 + 0x5C))))->v) = u24;
            nlPushMatrix(0x0);
            FUN_0c0db470(0xC10C010, (((t15 * 0x3C) + (a4 + 0x5C)) + 0x24));
            *(float *)0xC200B98 = (((-((float)((*(int *)((a4 + 0x3C))) & 0x7) * 0.0857142732f))) + -0.199999988f);
            t29 = FUN_0c0da2e0();
            nlRotateAZ((t29 << 1));
            FUN_0c0dcbe0(0xC10C01C);
            FUN_0c0db470(0xC200B90, (((t15 * 0x3C) + (a4 + 0x5C)) + 0x30));
            nlPopMatrix(0x1);
        }
        FUN_0c0dbda0((((((struct o3E4_int *)((*(int *)(((int)stk + 4)))))->v)) + 0x140));
        t42 = (((struct o48_int *)(a4))->v);
        (((struct o48_uint *)(a4))->v) = (t42 + 0x1);
        if ((int)(t42 + 0x1) >= (int)0xB4) {
            (((struct o48_uint *)(a4))->v) = 0x0;
        }
        *(unsigned int *)((((t42 * 0x3C) + (a4 + 0x5C)) + 0x0)) = 0x5A;
        *(unsigned int *)((((t42 * 0x3C) + (a4 + 0x5C)) + 0x4)) = 0x0;
        *(unsigned int *)((((t42 * 0x3C) + (a4 + 0x5C)) + 0x8)) = 0xFB;
        (((struct o18_float *)(((t42 * 0x3C) + (a4 + 0x5C))))->v) = 1.0f;
        *(unsigned int *)((((t42 * 0x3C) + (a4 + 0x5C)) + 0xC)) = (FUN_0c0da2e0());
        t47 = *(int *)(((int)stk + 4));
        u48 = 1.0f;
        u48 = u48 + 3.05175781e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
        (((struct o1C_float *)(((t42 * 0x3C) + (a4 + 0x5C))))->v) = (u48 * ((((struct o278_float *)(t47))->v)));
        u51 = 0.5f;
        u51 = u51 + 1.52587891e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
        (((struct o20_float *)(((t42 * 0x3C) + (a4 + 0x5C))))->v) = u51;
        FUN_0c0db840((((int)stk + 4) + 0x8));
        (((struct o24_float *)(((t42 * 0x3C) + (a4 + 0x5C))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o28_float *)(((t42 * 0x3C) + (a4 + 0x5C))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o2C_float *)(((t42 * 0x3C) + (a4 + 0x5C))))->v) = (*(float *)(((int)stk + 20)));
        nlPushMatrix(0x0);
        t57 = FUN_0c0da2e0();
        nlRotateAY((t57 << 1));
        FUN_0c0dcbe0(0xC10C028);
        FUN_0c0db470(0xC10C034, (((t42 * 0x3C) + (a4 + 0x5C)) + 0x30));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        u70 = u51;
        u71 = 1.52587891e-05f;
    }
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t75 = 0xC247CAC;
    t77 = (a4 + 0x5C);
    u80 = f4;
    u81 = u70;
    u82 = u71;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < (int)0xB4) {
            t176 = t76;
            u179 = u78;
            u180 = u79;
            u181 = u80;
            if ((*(int *)((t77 + 0x0))) == 0) {
            } else {
                *(unsigned int *)((t77 + 0x0)) = ((*(int *)((t77 + 0x0))) - 1);
                if ((*(int *)((t77 + 0x4))) == 0) {
                    t76 = 0x30;
                    t76 = (t76 + t77);
                    t75 = 0x24;
                    u79 = (*(float *)((t76 + 0x0)));
                    u78 = (*(float *)((t77 + t75)));
                    t76 = 0x34;
                    t76 = (t76 + t77);
                    u78 = (u78 + u79);
                    *(float *)((t77 + t75)) = u78;
                    t75 = 0x28;
                    u78 = (*(float *)((t77 + t75)));
                    u79 = (*(float *)((t76 + 0x0)));
                    t76 = 0x38;
                    t76 = (t76 + t77);
                    u78 = (u78 + u79);
                    *(float *)((t77 + t75)) = u78;
                    t75 = 0x2C;
                    u78 = (*(float *)((t77 + t75)));
                    u79 = (*(float *)((t76 + 0x0)));
                    t76 = 0x54;
                    u78 = (u78 + u79);
                    *(float *)((t77 + t75)) = u78;
                    t75 = 0xC0998D0;
                    u80 = (*(float *)((t75 + 0x0)));
                    t75 = 0x34;
                    u79 = (*(float *)((t77 + t75)));
                    u79 = (u79 + u80);
                    *(float *)((t77 + t75)) = u79;
                    t75 = 0xC0998D4;
                    u80 = (*(float *)((t75 + 0x0)));
                    t75 = 0x1C;
                    t76 = (t76 + a4);
                    u78 = (*(float *)((t77 + t75)));
                    u79 = (*(float *)((t76 + 0x0)));
                    u98 = u78;
                    u98 = u98 + u80 * u79;
                    u78 = u98;
                    *(float *)((t77 + t75)) = u78;
                    t75 = 0x4C;
                    u79 = (*(float *)((a4 + t75)));
                    t75 = 0x28;
                    u78 = (*(float *)((t77 + t75)));
                    if (u79 > u78) {
                        t75 = 0xC0998D8;
                        u81 = (*(float *)((t75 + 0x0)));
                        t75 = 0xC0998DC;
                        u82 = (*(float *)((t75 + 0x0)));
                        t75 = 0x28;
                        t75 = (t75 + t77);
                        t103 = t75;
                        *(int *)((int)stk + 0) = t103;
                        t75 = (FUN_0c0da2e0());
                        t75 = (t75 & 0x7FFF);
                        t105 = t75;
                        t75 = 0x4C;
                        u78 = (*(float *)((a4 + t75)));
                        u79 = (float)t105;
                        u107 = u78;
                        u107 = u107 + u82 * u79;
                        u78 = u107;
                        u79 = (*(float *)((t103 + 0x0)));
                        u78 = (u78 + u81);
                        u79 = (u79 + u78);
                        *(float *)((t103 + 0x0)) = u79;
                        *(unsigned int *)((t77 + 0x4)) = 0x1;
                    } else {
                        t109 = t76;
                        u113 = u80;
                    }
                    u80 = u113;
                    t76 = t109;
                    t75 = (nlPushMatrix(0x0));
                    t75 = 0x2C;
                    u116 = *(float *)((t77 + t75));
                    t75 = 0x28;
                    u117 = *(float *)((t77 + t75));
                    t75 = 0x24;
                    u80 = (*(float *)((t77 + t75)));
                    t75 = (FUN_0c0dcc70(u80, u117, u116));
                    t75 = 0x3CE;
                    t75 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 8))) + t75)))));
                    t75 = 0x3CC;
                    t75 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 8))) + t75)))));
                    t75 = (nlRotateAZ((*(int *)((t77 + 0xC)))));
                    t75 = 0x1C;
                    u82 = (*(float *)((t77 + t75)));
                    u80 = u82;
                    t75 = (nlScale(u80, u82, u82));
                    t75 = 0x1C;
                    u80 = (*(float *)((t77 + t75)));
                    t75 = (FUN_0c0de000(u80));
                    t75 = 0x20;
                    u80 = 1.0f;
                    t75 = (FUN_0c084800(u80, (*(float *)((t77 + t75))), 1.0f));
                    t75 = (FUN_0c0c465c((*(int *)((t77 + 0x8)))));
                    t75 = (nlPopMatrix(0x1));
                } else {
                    t75 = 0xC0998FC;
                    u78 = 0.0f;
                    u80 = (*(float *)((t75 + 0x0)));
                    t75 = 0x18;
                    u79 = (*(float *)((t77 + t75)));
                    u79 = (u79 - u80);
                    *(float *)((t77 + t75)) = u79;
                    if (u78 > u79) {
                        *(unsigned int *)((t77 + 0x0)) = 0x0;
                        t176 = t76;
                        u165 = u78;
                        u166 = u79;
                        u167 = u80;
                    } else {
                        t75 = (nlPushMatrix(0x0));
                        t75 = 0x2C;
                        u140 = *(float *)((t77 + t75));
                        t75 = 0x28;
                        u141 = *(float *)((t77 + t75));
                        t75 = 0x24;
                        u80 = (*(float *)((t77 + t75)));
                        t75 = (FUN_0c0dcc70(u80, u141, u140));
                        t75 = (nlRotateAX(0x3FFF));
                        t75 = (nlRotateAZ((*(int *)((t77 + 0xC)))));
                        t75 = 0xC099A34;
                        u80 = (*(float *)((t75 + 0x0)));
                        t75 = 0x18;
                        u79 = (*(float *)((t77 + t75)));
                        t75 = 0x54;
                        u149 = *(float *)((a4 + t75));
                        t75 = 0x1C;
                        u79 = (-u79);
                        u79 = (u79 + 1.0f);
                        u82 = (*(float *)((t77 + t75)));
                        u79 = (u79 * u149);
                        u151 = u82;
                        u151 = u151 + u80 * u79;
                        u82 = u151;
                        u80 = u82;
                        t75 = (nlScale(u80, u82, u82));
                        u80 = u82;
                        t75 = (FUN_0c0de000(u80));
                        t75 = 0x18;
                        u79 = (*(float *)((t77 + t75)));
                        t75 = 0x20;
                        u80 = 1.0f;
                        t75 = (FUN_0c084800(u80, ((*(float *)((t77 + t75))) * u79), 1.0f));
                        t75 = 0x18;
                        u80 = (*(float *)((t77 + t75)));
                        t75 = (FUN_0c0c475c((*(int *)((t77 + 0x8))), u80));
                        t75 = (nlPopMatrix(0x1));
                    }
                    u172 = u165;
                    u173 = u166;
                    u174 = u167;
                }
                u179 = u172;
                u180 = u173;
                u181 = u174;
            }
            u78 = u179;
            u79 = u180;
            u80 = u181;
            t76 = t176;
            t77 = (t77 + 0x3C);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            continue;
        }
        break;
    }
    FUN_0c0849da();
    t185 = (((struct o40_int *)(a4))->v);
    (((struct o40_uint *)(a4))->v) = (t185 - 1);
    t194 = 0x40;
    if ((int)(t185 - 1) < 0) {
        (((struct o40_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
        t187 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t187 + 0x1);
        t194 = 0x40;
        if ((int)(t187 + 0x1) > (int)0xC8) {
            t194 = (FUN_0c0e19f2());
        }
    }
    return t194;
}
