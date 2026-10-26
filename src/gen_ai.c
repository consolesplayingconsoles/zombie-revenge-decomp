/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08448c(int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c08b810(int);
int FUN_0c0c47ae(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int);
int FUN_0c0e5dc0(void);
extern int _quick_odd_mvn();
int FUN_0c0a4cd0(int a4, int a5);

int FUN_0c0a4cd0(int a4, int a5)
{
    int t0;
    int t1;
    int t16;
    int t18;
    int t228;
    int t37;
    float u38;
    int t40;
    float u41;
    int t49;
    float u50;
    int t52;
    float u53;
    int t73;
    int t77;
    int t79;
    int t80;
    int t83;
    int t84;
    float u144;
    float u156;
    float u158;
    int t168;
    float u170;
    int t174;
    float u189;
    float u202;
    int t225;
    int t240;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    float u44;
    float u56;
    int stk[21];

    t0 = ((int (*)(int))(_quick_odd_mvn))(a4);
    t1 = ((int (*)(void))(_quick_odd_mvn))();
    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) == 0) {
        t240 = (FUN_0c0e19f2(0xC246FF0));
    } else {
        t16 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
        t18 = *(int *)((0xC247030 + ((*(int *)((t16 + 0xBC))) << 2)));
        t228 = t18;
        if (t18 == 8) {
        } else {
            if ((((*(int *)((t16 + 0x4D0))) != 0) && (((t26 = *(int *)((a4 + 0x80)), (int)t26 > 0) || ((t27 = *(int *)((a4 + 0x80)), t27 == 0) && (t28 = *(int *)((a4 + 0x78)), t28 == 1))) && (t29 = *(int *)((t16 + 0x4DC)), t29 == 0))) || (t30 = *(int *)((t16 + 0x304)), (int)t30 <= 0)) {
                *(unsigned int *)((a4 + 0x80)) = 0xFFFFFFE2;
            }
            if ((int)(*(int *)((a4 + 0x80))) > 0) {
                t37 = *(int *)(((0x80 + a4) + 0x0));
                u38 = *(float *)((a4 + 0x90));
                *(float *)((a4 + 0x90)) = (u38 + (90.0f / (float)t37));
                if ((u38 + (90.0f / (float)t37)) > 90.0f) {
                    *(float *)((a4 + 0x90)) = 90.0f;
                }
                t40 = *(int *)(((0x80 + a4) + 0x0));
                u41 = *(float *)((a4 + 0x94));
                *(float *)((a4 + 0x94)) = (u41 + (-90.0f / (float)t40));
                if (-90.0f > (u41 + (-90.0f / (float)t40))) {
                    *(float *)((a4 + 0x94)) = -90.0f;
                }
                if (((*(float *)((a4 + 0x90))) == 90.0f) && (u44 = *(float *)((a4 + 0x94)), u44 == -90.0f)) {
                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                    *(unsigned int *)((a4 + 0x78)) = 0x1;
                }
            } else {
                if ((int)(*(int *)((a4 + 0x80))) < 0) {
                    t49 = *(int *)(((0x80 + a4) + 0x0));
                    u50 = *(float *)((a4 + 0x90));
                    *(float *)((a4 + 0x90)) = (u50 + (90.0f / (float)t49));
                    if (0.0f > (u50 + (90.0f / (float)t49))) {
                        *(float *)((a4 + 0x90)) = 0.0f;
                    }
                    t52 = *(int *)(((0x80 + a4) + 0x0));
                    u53 = *(float *)((a4 + 0x94));
                    *(float *)((a4 + 0x94)) = (u53 + (-90.0f / (float)t52));
                    if ((u53 + (-90.0f / (float)t52)) > 0.0f) {
                        *(float *)((a4 + 0x94)) = 0.0f;
                    }
                    if (((*(float *)((a4 + 0x90))) == 0.0f) && (u56 = *(float *)((a4 + 0x94)), u56 == 0.0f)) {
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                        *(unsigned int *)((a4 + 0x84)) = 0x0;
                        *(unsigned int *)((a4 + 0x78)) = 0x0;
                        *(unsigned int *)((a4 + 0xA0)) = 0x0;
                        *(unsigned int *)((a4 + 0xA4)) = 0x4;
                    }
                }
            }
            t73 = *(int *)((a4 + 0x84));
            if (t73 != 0) {
                if (t73 != 1) {
                } else {
                    t77 = *(int *)((a4 + 0xA0));
                    if ((int)t77 > 0) {
                        *(volatile int *)((a4 + 0xA0));
                        t79 = FUN_0c0e5dc0();
                        t80 = *(int *)(((0x70 + a4) + 0x0));
                        *(unsigned int *)((a4 + 0x70)) = (t80 + t79);
                        if ((int)(t80 + t79) > (int)a5) {
                            *(unsigned int *)((a4 + 0x70)) = a5;
                        }
                    } else {
                        if ((int)t77 < 0) {
                            *(volatile int *)((a4 + 0xA0));
                            t83 = FUN_0c0e5dc0();
                            t84 = *(int *)(((0x70 + a4) + 0x0));
                            *(unsigned int *)((a4 + 0x70)) = (t84 + t83);
                            if ((int)(t84 + t83) < 0) {
                                *(unsigned int *)((a4 + 0x70)) = a4;
                            }
                        }
                    }
                    *(unsigned int *)(((a4 + 0x68) + 0x0)) = ((*(int *)(((a4 + 0x68) + 0x0))) - (*(int *)(((a4 + 0x68) + 0x8))));
                    *(unsigned int *)(((a4 + 0x68) + 0x4)) = ((*(int *)(((a4 + 0x68) + 0x4))) - (*(int *)(((a4 + 0x68) + 0x8))));
                }
            }
            FUN_0c0848d6((*(float *)(((0x45C + t16) + 0x0))), (*(float *)(((0x45C + t16) + 0x4))), (*(float *)(((0x45C + t16) + 0x8))));
            if ((*(int *)((t16 + 0x38C))) != 0) {
                FUN_0c08b810(a4);
            }
            nlPushMatrix(0x0);
            FUN_0c0dbda0((*(int *)((t16 + 0x3E4))));
            nlPushMatrix(0x0);
            u144 = *(float *)((a4 + 0x90));
            FUN_0c0dcc70(((((*(float *)(((((int)stk + 4) + 0x14) + 0x0))) * u144) / 90.0f) + -1.5f), ((((*(float *)(((((int)stk + 4) + 0x14) + 0x4))) * u144) / 90.0f) + 2.69999981f), ((((*(float *)(((((int)stk + 4) + 0x14) + 0x8))) * u144) / 90.0f) + -0.227699995f));
            nlRotateAY((int)((*(float *)((a4 + 0x90))) * 182.044434f));
            FUN_0c0de000(((*(float *)((t16 + 0x284))) * 1.0f));
            FUN_0c0c47ae(0x72B);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            u156 = *(float *)((a4 + 0x94));
            *(float *)(((int)stk + 8)) = u156;
            u158 = *(float *)(((int)stk + 8));
            FUN_0c0dcc70(((((*(float *)(((int)stk + 12))) * u158) / -90.0f) + 1.5f), ((((*(float *)(((int)stk + 16))) * u158) / -90.0f) + 2.69999981f), ((((*(float *)(((int)stk + 20))) * u156) / -90.0f) + -0.227699995f));
            nlRotateAY((int)((*(float *)((a4 + 0x94))) * 182.044434f));
            FUN_0c0de000(((*(float *)((t16 + 0x284))) * 1.0f));
            FUN_0c0c47ae(0x72C);
            nlPopMatrix(0x1);
            t168 = *(int *)((a4 + 0x84));
            if (t168 != 0) {
                if (t168 != 1) {
                    if (t168 == 2) {
                        nlPushMatrix(0x0);
                        u170 = *(float *)((t16 + 0x284));
                        nlScale((1.0f / u170), (1.0f / u170), (1.0f / u170));
                        FUN_0c0de000((1.0f / (*(float *)((t16 + 0x284)))));
                        t174 = 0x0;
                        for (;;) {
                            if ((int)t174 >= (int)(*(int *)((a4 + 0xA4)))) {
                                break;
                            }
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 4)) = ((((t174 << 1) + t174) << 2) + 0xC201110);
                            FUN_0c0dcc70((*(float *)((((((t174 << 1) + t174) << 2) + 0xC201110) + 0x0))), (*(float *)((((((t174 << 1) + t174) << 2) + 0xC201110) + 0x4))), (*(float *)((((((t174 << 1) + t174) << 2) + 0xC201110) + 0x8))));
                            FUN_0c0c47ae(0x125C);
                            nlPopMatrix(0x1);
                            t174 = (t174 + 0x1);
                        }
                        nlPopMatrix(0x1);
                    }
                } else {
                    nlPushMatrix(0x0);
                    u189 = (*(float *)((a4 + 0x90)));
                    u189 *= -0.319999993f;
                    FUN_0c0dcc70((*(float *)0xC0A51CC), (*(float *)0xC0A51C8), ((u189 / 90.0f) + (*(float *)0xC0A51C4)));
                    nlRotateAZ((*(int *)(((a4 + 0x68) + 0x0))));
                    FUN_0c0de000(((*(float *)((t16 + 0x284))) * 1.0f));
                    FUN_0c0c47ae(0x711);
                    nlPopMatrix(0x1);
                    nlPushMatrix(0x0);
                    u202 = (*(float *)((a4 + 0x94)));
                    u202 *= -0.319999993f;
                    FUN_0c0dcc70((*(float *)0xC0A51D4), (*(float *)0xC0A51C8), ((u202 / -90.0f) + (*(float *)0xC0A51C4)));
                    nlRotateAZ((*(int *)((a4 + 0x6C))));
                    FUN_0c0de000(((*(float *)((t16 + 0x284))) * 1.0f));
                    FUN_0c0c47ae(0x712);
                    nlPopMatrix(0x1);
                }
            }
            nlPopMatrix(0x1);
            FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            t225 = 0x38C;
            if ((*(int *)((t16 + 0x38C))) != 0) {
                t225 = (FUN_0c08448c(0x1));
            }
            t228 = t225;
        }
        t240 = t228;
    }
    return t240;
}
