/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0b719e(int a4, int a5);
int FUN_0c0c8b94(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c046170(int a4, float f4);
int FUN_0c0277c4(int a4, float f4);
int FUN_0c01f00c(int a4, int a5);
int FUN_0c0341a6(int a4, int a5);
int FUN_0c037002(int a4, int a5);

int FUN_0c0b719e(int a4, int a5)
{
    float u1;
    float u18;
    int t2;
    int t3;
    float u10;
    float u6;
    int t20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u33;
    int t27;
    float u28;
    float u39;
    float u55;
    int t40;
    int t41;
    int t42;
    float u43;
    int t45;
    float u46;
    float u48;
    int t59;
    int t60;
    float u61;
    int t63;
    int t64;
    float u65;
    float u66;
    int t68;
    float u69;
    float u70;
    int t72;
    float u73;
    float u77;
    float u78;
    float u79;

    u1 = *(float *)0xC0B732C;
    u18 = 0.0f;
    if ((int)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0))) > 0) {
        t2 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
        t3 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0));
        u10 = (((float)t2 / (float)t3) * u1);
        if ((int)t3 < (int)0x32) {
            u6 = (((float)t2 / (float)t3) * u1);
            u10 = (u6 * ((float)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x0))) / (*(float *)0xC0B7330)));
        }
        u18 = u10;
    }
    t20 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
    u21 = *(float *)0xC0B7334;
    u22 = *(float *)0xC0B7338;
    u23 = *(float *)0xC0B733C;
    u24 = ((float)t20 * u22);
    if (((float)t20 * u22) > u23) {
        u24 = u23;
    }
    u33 = ((u18 * u21) + u24);
    if ((int)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x8))) > 0) {
        t27 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
        u28 = ((float)t27 * u21);
        if (((float)t27 * u21) > (1.0f + 1.0f)) {
            u28 = (1.0f + 1.0f);
        }
        u33 = (((u18 * u21) + u24) + u28);
    }
    u39 = *(float *)0xC0B7340;
    u55 = u33;
    if ((int)((*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4))) + (*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC)))) > 0) {
        t40 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
        t41 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
        t42 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
        u43 = ((float)(t40 + t41) / u1);
        if (((float)(t40 + t41) / u1) > 1.0f) {
            u43 = 1.0f;
        }
        t45 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
        u46 = ((((float)t42 / (float)(t45 + t42)) / u39) * u43);
        if (((((float)t42 / (float)(t45 + t42)) / u39) * u43) > 1.0f) {
            u46 = 1.0f;
        }
        u48 = u33;
        u48 = u48 + (1.0f + 1.0f) * u46;
        u55 = u48;
    }
    t59 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x14));
    t60 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x10));
    u61 = (float)(t59 - t60);
    if (!((float)(t59 - t60) > 0.0f)) {
        u61 = 1.0f;
    }
    t63 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0xC));
    t64 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x4));
    u65 = *(float *)0xC0B7344;
    u66 = (((float)(t64 + t63) / u61) * u65);
    if ((((float)(t64 + t63) / u61) * u65) > (1.0f + 1.0f)) {
        u66 = (1.0f + 1.0f);
    }
    t68 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x10));
    u69 = *(float *)0xC0B7348;
    u70 = ((float)t68 * u69);
    if (((float)t68 * u69) > u39) {
        u70 = u39;
    }
    t72 = *(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x18));
    u73 = ((float)t72 * u65);
    if (((float)t72 * u65) > u39) {
        u73 = u39;
    }
    u77 = *(float *)0xC0B7350;
    u78 = (((u55 + u66) + u70) + u73);
    u78 = u78 + (*(float *)0xC0B734C) * (float)(*(int *)((((((a4 << 2) << 2) << 1) + 0xC247544) + 0x1C)));
    u79 = u78;
    if (u78 > u77) {
        u79 = u77;
    }
    return (int)u79;
}

int FUN_0c0c8b94(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t0;
    int t1;
    int t2;
    int t80;
    float u5;
    float u6;
    int t7;
    float u8;
    int t9;
    float u10;
    float u11;
    int t12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    int t68;
    int t55;
    int t25;
    int t23;
    int t31;
    int t29;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t42;
    int stk[9];

    t0 = *(int *)0xC31FD34;
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = 0x0;
    t2 = (t0 + 0x100);
    for (;;) {
        if (!((*(float *)((t2 + 0x18))) > (*(float *)((a7 + 0x0))))) {
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x1C);
            if ((int)t1 >= (int)0x6) {
                break;
            }
            continue;
        }
        break;
    }
    t80 = 0xFFFFFFFF;
    if (((int)(t1 - 1) >= 0) && ((int)(t1 - 1) < (int)0x5)) {
        u5 = *(float *)((a7 + 0x0));
        u6 = *(float *)(((t2 - 28) + 0x0));
        t7 = *(int *)(((t2 - 28) + 0xC));
        u8 = *(float *)((t7 + 0x0));
        t9 = *(int *)((t7 + 0x1C));
        u10 = *(float *)((a7 + 0x8));
        u11 = *(float *)(((t2 - 28) + 0x8));
        t12 = *(int *)((t7 + 0x18));
        u13 = *(float *)((t7 + 0x4));
        u14 = *(float *)((t7 + 0x8));
        u15 = *(float *)((t7 + 0x14));
        u16 = *(float *)((t7 + 0x10));
        u17 = *(float *)((t7 + 0xC));
        u18 = ((-u16) / ((u14 * u15) - (u16 * u17)));
        u19 = (u14 / ((u14 * u15) - (u16 * u17)));
        u20 = (((u10 - u11) - u13) * u18);
        u20 = u20 + ((u5 - u6) - u8) * (u15 / ((u14 * u15) - (u16 * u17)));
        u21 = (((u10 - u11) - u13) * u19);
        u21 = u21 + ((u5 - u6) - u8) * ((-u17) / ((u14 * u15) - (u16 * u17)));
        t68 = 0xFFFFFFFF;
        if (!(0.0f > u20)) {
            t55 = 0xFFFFFFFF;
            if (!(u20 > (float)(t12 - 1)) && !(0.0f > u21)) {
                if (u21 > (float)(t9 - 1)) {
                    t42 = 0xFFFFFFFF;
                } else {
                    *(float *)((a5 + 0x0)) = (u20 - (float)(int)u20);
                    *(float *)((a6 + 0x0)) = (u21 - (float)(int)u21);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = ((t9 * (int)u20) + (int)u21);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = ((t9 * (int)u20) + (int)u21);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = ((t9 * (int)u20) + (int)u21);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((t9 * (int)u20) + (int)u21);
                    t25 = 0xC31FD34;
                    if ((*(float *)((a5 + 0x0))) > 0.0f) {
                        t23 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = (t23 + t9);
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = ((*(int *)(((((int)stk + 4) + 0x4) + 0xC))) + t9);
                        t25 = (t23 + t9);
                    }
                    t31 = t25;
                    if ((*(float *)((a6 + 0x0))) > 0.0f) {
                        t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = (t29 + 0x1);
                        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = ((*(int *)(((((int)stk + 4) + 0x4) + 0xC))) + 0x1);
                        t31 = (t29 + 0x1);
                    }
                    t34 = (int)u21;
                    t35 = ((t9 * (int)u20) + (int)u21);
                    t36 = t31;
                    t37 = a4;
                    t38 = (((int)stk + 4) + 0x4);
                    for (;;) {
                        if ((unsigned int)t38 >= (unsigned int)((((int)stk + 4) + 0x4) + 0x10)) {
                            break;
                        }
                        t36 = (*(int *)((t38 + 0x0)));
                        t38 = (t38 + 0x4);
                        t34 = (*(int *)(((t2 - 28) + 0x14)));
                        t36 = (t36 << 1);
                        t35 = (*(short *)((t36 + t34)));
                        *(unsigned short *)((t37 + 0x0)) = t35;
                        t37 = (t37 + 0x2);
                    }
                    t42 = (t1 - 1);
                }
                t55 = t42;
            }
            t68 = t55;
        }
        t80 = t68;
    }
    return t80;
}

int FUN_0c046170(int a4, float f4)
{
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    int t26;
    int stk[16];

    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = 0.0f;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = f4;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x4B4 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    u18 = *(float *)((a4 + 0x30));
    u19 = *(float *)((a4 + 0x518));
    u20 = *(float *)((a4 + 0x34));
    u21 = *(float *)((a4 + 0x51C));
    u22 = *(float *)((a4 + 0x38));
    u23 = *(float *)((a4 + 0x520));
    u24 = ((u21 - u20) * (u21 - u20));
    u24 = u24 + (u19 - u18) * (u19 - u18);
    u25 = u24;
    u25 = u25 + (u23 - u22) * (u23 - u22);
    t26 = 0x1;
    if (_builtin_sqrtf(u25) > (f4 * 10.0f)) {
        t26 = 0x0;
    }
    return t26;
}

int FUN_0c0277c4(int a4, float f4)
{
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    int t26;
    int stk[16];

    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = 0.0f;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = f4;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x4B4 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    u18 = *(float *)((a4 + 0x30));
    u19 = *(float *)((a4 + 0x518));
    u20 = *(float *)((a4 + 0x34));
    u21 = *(float *)((a4 + 0x51C));
    u22 = *(float *)((a4 + 0x38));
    u23 = *(float *)((a4 + 0x520));
    u24 = ((u21 - u20) * (u21 - u20));
    u24 = u24 + (u19 - u18) * (u19 - u18);
    u25 = u24;
    u25 = u25 + (u23 - u22) * (u23 - u22);
    t26 = 0x1;
    if (_builtin_sqrtf(u25) > (f4 * (1.0f + 1.0f))) {
        t26 = 0x0;
    }
    return t26;
}

int FUN_0c01f00c(int a4, int a5)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u9;

    t0 = *(int *)((a5 + 0x94));
    u1 = *(float *)((a4 + 0x54));
    u2 = *(float *)(((a4 + 0x30) + 0x0));
    u3 = *(float *)(((t0 + 0x30) + 0x0));
    u4 = *(float *)((a4 + 0x5C));
    u5 = *(float *)(((a4 + 0x30) + 0x8));
    u6 = *(float *)(((t0 + 0x30) + 0x8));
    u9 = (((u5 + u4) - u6) * ((u5 + u4) - u6));
    u9 = u9 + ((u2 + u1) - u3) * ((u2 + u1) - u3);
    if (((*(float *)((a4 + 0x214))) + (*(float *)((t0 + 0x214)))) > _builtin_sqrtf(u9)) {
        if (((*(float *)((a4 + 0x218))) + (*(float *)((t0 + 0x218)))) > _builtin_fabsf((((*(float *)(((a4 + 0x30) + 0x4))) + (*(float *)((a4 + 0x58)))) - (*(float *)(((t0 + 0x30) + 0x4)))))) {
            *(float *)((a4 + 0x8C)) = (((*(float *)((a4 + 0x30))) + (*(float *)((t0 + 0x30)))) * 0.5f);
            *(float *)((a4 + 0x90)) = (((*(float *)((a4 + 0x34))) + (*(float *)((t0 + 0x34)))) * 0.5f);
            *(float *)((a4 + 0x94)) = (((*(float *)((a4 + 0x38))) + (*(float *)((t0 + 0x38)))) * 0.5f);
            return 0x4;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0341a6(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    float u5;
    int t14;
    int t20;

    u0 = *(float *)((a4 + 0x30));
    u1 = *(float *)((a5 + 0x30));
    u2 = *(float *)((a4 + 0x38));
    u3 = *(float *)((a5 + 0x38));
    t4 = *(int *)((a4 + 0x4F4));
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + (u0 - u1) * (u0 - u1);
    if (_builtin_sqrtf(u5) > (*(float *)((((*(int *)((((((t4 << 1) + t4) << 2) + 0xC1F79B4) + 0x8))) + 0x7C) + 0x0)))) {
        return 0x0;
    }
    t14 = *(int *)((a4 + 0x4F4));
    if (_builtin_sqrtf(u5) > (*(float *)(((*(int *)((((((t14 << 1) + t14) << 2) + 0xC1F79B4) + 0x8))) + 0x80)))) {
        return 0x1;
    }
    t20 = *(int *)((a4 + 0x4F4));
    if (_builtin_sqrtf(u5) > (*(float *)(((*(int *)(((0xC1F79B4 + (((t20 << 1) + t20) << 2)) + 0x8))) + 0x84)))) {
        return 0x2;
    }
    return 0x3;
}

int FUN_0c037002(int a4, int a5)
{
    float u0;
    float u1;
    float u4;
    float u5;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a4 + 0x4));
    u4 = *(float *)((a4 + 0x8));
    u5 = (u1 * (*(float *)((a5 + 0x4))));
    u5 = u5 + u0 * (*(float *)((a5 + 0x0)));
    u7 = *(float *)((a5 + 0x4));
    u8 = *(float *)((a5 + 0x0));
    u9 = u5;
    u9 = u9 + u4 * (*(float *)((a5 + 0x8)));
    u10 = (u1 * u1);
    u10 = u10 + u0 * u0;
    u11 = *(float *)((a5 + 0x8));
    u12 = u10;
    u12 = u12 + u4 * u4;
    u13 = (u7 * u7);
    u13 = u13 + u8 * u8;
    u14 = u13;
    u14 = u14 + u11 * u11;
    if ((u9 / (_builtin_sqrtf(u12) * _builtin_sqrtf(u14))) > 0.0f) {
        return 0x1;
    }
    if (0.0f > (u9 / (_builtin_sqrtf(u12) * _builtin_sqrtf(u14)))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}
