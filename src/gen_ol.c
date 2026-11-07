/* Straight-line functions with calls and guards (batch gen_ol): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c47ae(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c09d6fe(int a4, int a5, int a6, int a7);

int FUN_0c09d6fe(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t171;
    register float u5;
    register float u10;
    register float u6;
    register float u7;
    register int t12;
    register int t13;
    register int t14;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register float u29;
    register float u30;
    register int t31;
    register int t32;
    register int t47;
    register int t60;
    register int t87;
    register int t88;
    register int t89;
    register int t91;
    register float u96;
    register float u112;
    register float u113;
    register float u134;
    register float u137;
    register float u153;
    register float u155;
    register float u159;
    register float u162;
    int t2;
    register float u9;
    register float u84;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register float u57;
    register float u58;
    register int t90;
    register float u92;
    register float u93;
    register float u94;
    register float u95;

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    t171 = 0x0;
    if ((a7 == 0) && (t2 = *(int *)((a5 + 0x4)), (t2 & 128) != 0)) {
    } else {
        u5 = *(float *)((a4 + 0x4));
        u10 = u5;
        if (1.0f > u5) {
            u6 = *(float *)((a4 + 0x4));
            u7 = *(float *)(((0x24 + a5) + 0x0));
            *(float *)((a4 + 0x4)) = (u6 + u7);
            u9 = (u6 + u7);
            u10 = u7;
        }
        t12 = *(int *)((a4 + 0xC));
        *(unsigned int *)((a4 + 0xC)) = (t12 - 1);
        if (((int)(t12 - 1) <= 0) && (a7 != 0)) {
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            t13 = *(int *)((a5 + 0x4));
            if ((t13 & 32) != 0) {
                t14 = *(int *)((a4 + 0xC));
                *(unsigned int *)(((int)stk + 4)) = ((-t14) + 0x1);
                if ((int)((-t14) + 0x1) > (int)(*(int *)((a5 + 0x38)))) {
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a5 + 0x38)));
                }
            }
            if ((int)(*(int *)(((int)stk + 4))) > 0) {
                t24 = t13;
                t25 = a4;
                t26 = a5;
                t27 = a6;
                t28 = a7;
                u29 = u9;
                u30 = u10;
                for (;;) {
                    t31 = *(int *)((a4 + 0x10));
                    t32 = *(int *)((a4 + 0x14));
                    if ((*(int *)((((t31 * 0x1C) + t32) + 0x10))) == 0) {
                        t24 = 0xC;
                        *(unsigned int *)((((t31 * 0x1C) + t32) + 0x10)) = (*(int *)((a5 + 0x0)));
                        *(float *)((((t31 * 0x1C) + t32) + t24)) = 0.0f;
                        t25 = 0x0;
                        t24 = (nlPushMatrix(t25));
                        t24 = (nlUnitMatrix());
                        t24 = (FUN_0c0da2e0());
                        t25 = t24;
                        t25 = (t25 << 1);
                        t24 = (nlRotateAZ(t25));
                        t24 = (FUN_0c0da2e0());
                        t25 = t24;
                        t25 = (t25 << 1);
                        t24 = (nlRotateAY(t25));
                        t24 = 0x30;
                        u30 = (*(float *)((a5 + t24)));
                        t26 = ((t31 * 0x1C) + t32);
                        *(float *)0xC249724 = u30;
                        t25 = 0xC249724;
                        t24 = (FUN_0c0db470(t25, t26));
                        t26 = a6;
                        t25 = ((t31 * 0x1C) + t32);
                        t24 = (nlAddVector(t25, t26));
                        t25 = 0x1;
                        t24 = (nlPopMatrix(t25));
                        t47 = *(int *)((a4 + 0x10));
                        *(unsigned int *)((a4 + 0x10)) = (t47 + 0x1);
                        if ((int)(t47 + 0x1) >= (int)(*(int *)((a5 + 0x34)))) {
                            *(unsigned int *)((a4 + 0x10)) = 0x0;
                        }
                    } else {
                        t53 = t25;
                        t54 = t26;
                        t55 = t27;
                        t56 = t28;
                        u57 = u29;
                        u58 = u30;
                    }
                    t60 = *(int *)(((int)stk + 4));
                    u29 = u57;
                    u30 = u58;
                    t25 = t53;
                    t26 = t54;
                    t27 = t55;
                    t28 = t56;
                    *(unsigned int *)(((int)stk + 4)) = (t60 - 1);
                    if ((int)(t60 - 1) <= 0) {
                        break;
                    }
                }
            }
            *(unsigned int *)((a4 + 0xC)) = (int)(*(float *)((a4 + 0x8)));
            *(float *)((a4 + 0x8)) = ((*(float *)((a4 + 0x8))) - (*(float *)(((0x28 + a5) + 0x0))));
            u84 = 0.0f;
        }
        t87 = *(int *)((a4 + 0x14));
        t88 = nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        t89 = t88;
        t91 = t87;
        u96 = u84;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 12))) < (int)(*(int *)((a5 + 0x34)))) {
                if ((*(int *)((t91 + 0x10))) == 0) {
                } else {
                    *(unsigned int *)(((int)stk + 20)) = 0x1;
                    t89 = (*(int *)((a5 + 0x4)));
                    if ((t89 & 16) != 0) {
                        t89 = 0xC09D918;
                        u93 = (*(float *)((t89 + 0x0)));
                        t89 = 0xC;
                        u92 = (*(float *)((t91 + t89)));
                        u92 = (u92 * u93);
                        u96 = (-(FUN_0c0d9e90((int)u92)));
                        u96 = (u96 + 1.0f);
                    } else {
                        t89 = 0xC09D918;
                        u93 = (*(float *)((t89 + 0x0)));
                        t89 = 0xC;
                        u92 = (*(float *)((t91 + t89)));
                        u92 = (u92 * u93);
                        u96 = (FUN_0c0da410((int)u92));
                    }
                    t89 = 0xC;
                    u94 = 1.0f;
                    u93 = (*(float *)((a5 + t89)));
                    u94 = (u94 - u96);
                    t89 = 0x10;
                    u92 = (*(float *)((a4 + 0x0)));
                    u112 = *(float *)((a5 + t89));
                    t89 = 0x4;
                    u113 = u93;
                    u113 = u113 + u112 * u94;
                    u93 = u113;
                    u95 = u93;
                    u95 = (u95 * u92);
                    u93 = (*(float *)((a4 + t89)));
                    u92 = u96;
                    u92 = (u92 * u93);
                    if (((*(int *)0xC23A258) & 0x1) != 0) {
                        u93 = 1.0f;
                    } else {
                        t89 = 0xC09D928;
                        u93 = (*(float *)((t89 + 0x0)));
                    }
                    u92 = (u92 * u93);
                    t89 = 0xC09D92C;
                    u93 = (*(float *)((t89 + 0x0)));
                    t89 = 0x4;
                    u92 = (u92 * u93);
                    *(float *)((((int)stk + 4) + t89)) = u92;
                    t89 = (nlUnitMatrix());
                    t89 = (FUN_0c0dcca0(a6));
                    t89 = (*(int *)((a5 + 0x4)));
                    if ((t89 & 64) != 0) {
                        t89 = 0x4;
                        u93 = (float)(*(int *)((a5 + 0x8)));
                        u92 = u93;
                        u92 = (u92 * u96);
                        u93 = (*(float *)((a4 + t89)));
                        u92 = (u92 * u93);
                        t89 = (nlRotateAZ((int)u92));
                    } else {
                        t89 = 0x4;
                        u93 = (float)(*(int *)((a5 + 0x8)));
                        u92 = u93;
                        u92 = (u92 * u96);
                        u93 = (*(float *)((a4 + t89)));
                        u92 = (u92 * u93);
                        t89 = (nlRotateAY((int)u92));
                    }
                    t89 = 0x8;
                    u92 = (*(float *)((t91 + t89)));
                    u93 = (*(float *)((a6 + t89)));
                    t89 = 0x4;
                    u92 = (u92 - u93);
                    u93 = (*(float *)((a6 + t89)));
                    u134 = (u92 * u94);
                    u92 = (*(float *)((t91 + t89)));
                    u92 = (u92 - u93);
                    u93 = (*(float *)((a6 + 0x0)));
                    u137 = (u92 * u94);
                    u92 = (*(float *)((t91 + 0x0)));
                    u92 = (u92 - u93);
                    t89 = (FUN_0c0dcc70((u92 * u94), u137, u134));
                    t89 = (FUN_0c0dccf0());
                    t89 = 0x3CE;
                    t89 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 16))) + t89)))));
                    t89 = 0x3CC;
                    t89 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 16))) + t89)))));
                    t89 = (nlRotateAZ((*(int *)((t91 + 0x18)))));
                    t89 = (nlScale(u95, u95, u95));
                    t89 = (FUN_0c0de000(u95));
                    t89 = 0x4;
                    u96 = (*(float *)((((int)stk + 4) + t89)));
                    t89 = 0x8;
                    *(unsigned int *)(((int)stk + 4)) = (a5 + 0x14);
                    u93 = (*(float *)(((a5 + 0x14) + t89)));
                    t89 = 0x4;
                    u153 = (u96 * u93);
                    u93 = (*(float *)(((a5 + 0x14) + t89)));
                    u155 = (u96 * u93);
                    u93 = (*(float *)(((a5 + 0x14) + 0x0)));
                    t89 = (FUN_0c0848bc((u96 * u93), u155, u153));
                    t89 = (FUN_0c0c47ae((*(int *)((t91 + 0x10)))));
                    t90 = 0x4;
                    t90 = (t90 + a4);
                    u159 = *(float *)((t90 + 0x0));
                    t90 = 0x20;
                    t90 = (t90 + a5);
                    t89 = 0xC;
                    u93 = (*(float *)((t90 + 0x0)));
                    u92 = (*(float *)((t91 + t89)));
                    u162 = u92;
                    u162 = u162 + u159 * u93;
                    u92 = u162;
                    u93 = u92;
                    *(float *)((t91 + t89)) = u92;
                    if (u93 > 1.0f) {
                        *(unsigned int *)((t91 + 0x10)) = 0x0;
                    }
                }
                t91 = (t91 + 0x1C);
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                continue;
            }
            break;
        }
        nlPopMatrix(0x1);
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        t171 = (*(int *)(((int)stk + 20)));
    }
    return t171;
}
