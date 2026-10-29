/* Straight-line functions with calls and guards (batch gen_gf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dcc70(float, float, float);
int FUN_0c0e262a(int);
extern float _builtin_sqrtf(float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c01d636(int a4, int a5, int a6, int a7);

int FUN_0c01d636(int a4, int a5, int a6, int a7)
{
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u26;
    float u27;
    float u28;
    float u38;
    float u39;
    float u52;
    float u53;
    float u54;
    float u55;
    float u56;
    float u66;
    float u67;
    float u68;
    int t90;
    int t92;
    int t104;
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t10;
    int stk[14];

    *(unsigned int *)(((int)stk + 20)) = a6;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if (a5 == 0) {
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        t3 = a4;
        t4 = a5;
        t5 = a6;
        t6 = a7;
        t7 = a5;
        for (;;) {
            if ((*(int *)((t7 + 0x4))) != 0) {
                t9 = (*(int *)((t7 + 0x4)));
                t3 = 0xAC;
                t2 = 0xC0E262A;
                t9 = (t9 + 0x8);
                t8 = t9;
                t8 = (t8 + 0xC);
                t0 = (FUN_0c0e262a(t3));
                t10 = t0;
                t0 = 0xC01D6EC;
                *(volatile float *)((t0 + 0x0));
                t0 = 0x4;
                *(volatile float *)((t9 + t0));
                t0 = 0x8;
                if ((-(-(*(float *)((t8 + 0x0))))) > (*(float *)((t9 + 0x0)))) {
                    *(float *)((t9 + 0x0)) = (-(*(float *)((t8 + 0x0))));
                }
                if ((-(-(*(float *)((t8 + t0))))) > (*(float *)((t9 + t0)))) {
                    *(float *)((t9 + t0)) = (-(*(float *)((t8 + t0))));
                }
                u26 = *(float *)((t9 + t0));
                t0 = 0xC;
                u27 = *(float *)((t9 + 0x0));
                t3 = 0x1;
                u28 = (u26 * u26);
                u28 = u28 + u27 * u27;
                *(float *)((t10 + t0)) = _builtin_sqrtf(u28);
                t0 = 0x94;
                *(unsigned int *)((t10 + 0x8)) = (*(int *)0xC245F98);
                *(unsigned int *)((t10 + 0x0)) = 0x0;
                *(unsigned int *)((t10 + 0x4)) = t3;
                *(unsigned int *)((t10 + t0)) = a4;
                t0 = (t0 - 4);
                *(unsigned int *)((t10 + t0)) = (*(int *)((t7 + 0x4)));
                t0 = (t0 + 0x8);
                t2 = (*(int *)((t7 + 0x0)));
                *(unsigned int *)((t10 + t0)) = t2;
                if ((*(int *)(((int)stk + 16))) != 0) {
                    t0 = 0xA8;
                    *(unsigned int *)(((*(int *)(((int)stk + 4))) + t0)) = t10;
                } else {
                    t0 = 0x84;
                    *(unsigned int *)((a4 + t0)) = t10;
                }
                t0 = 0xA8;
                t9 = 0xC0DC510;
                *(unsigned int *)((t10 + t0)) = 0x0;
                t3 = 0x0;
                t0 = (nlPushMatrix(t3));
                t9 = 0xC0DCCC0;
                t0 = (nlUnitMatrix());
                t0 = 0x38;
                t9 = 0xC0DCC70;
                u38 = *(float *)((a4 + t0));
                t0 = 0x34;
                u39 = *(float *)((a4 + t0));
                t0 = 0x30;
                t0 = (FUN_0c0dcc70((*(float *)((a4 + t0))), u39, u38));
                t9 = 0xC0DC950;
                t0 = 0x70;
                t3 = (*(short *)((a4 + t0)));
                t0 = (nlRotateAZ(t3));
                t9 = 0xC0DC890;
                t0 = 0x6E;
                t3 = (*(short *)((a4 + t0)));
                t0 = (nlRotateAY(t3));
                t9 = 0xC0DC6E0;
                t0 = 0x6C;
                t3 = (*(short *)((a4 + t0)));
                t0 = (nlRotateAX(t3));
                t9 = 0xC0DB640;
                t3 = t10;
                t3 = (t3 + 0x10);
                t0 = (nlGetMatrix(t3));
                t8 = 0xC0DB900;
                t3 = 0x0;
                t0 = (nlInvertMatrix(t3));
                t3 = t10;
                t3 = (t3 + 0x50);
                t0 = (nlGetMatrix(t3));
                t9 = 0xC0DC4C0;
                t3 = 0x1;
                t0 = (nlPopMatrix(t3));
                t0 = 0xC01D814;
                t5 = 0xC23FE68;
                u52 = *(float *)((t0 + 0x0));
                t0 = 0x30;
                u53 = *(float *)((a4 + t0));
                t0 = 0xC;
                u54 = *(float *)((t5 + 0x0));
                t4 = 0x1F;
                u55 = *(float *)((t10 + t0));
                t0 = 0x8;
                u56 = *(float *)((t5 + t0));
                t0 = 0x38;
                t8 = (int)(((u53 - u54) - u55) * u52);
                *(unsigned int *)(((int)stk + 4)) = (int)((((*(float *)((a4 + t0))) - u56) - u55) * u52);
                t2 = (*(int *)(((int)stk + 20)));
                t3 = 0x3F;
                if (t2 != 0) {
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t8 = 0x0;
                    t9 = t3;
                    *(unsigned int *)(((int)stk + 12)) = t4;
                } else {
                    if ((int)t8 < 0) {
                        t8 = 0x0;
                    } else {
                        if ((int)t8 > (int)t3) {
                            t8 = t3;
                        }
                    }
                    if ((int)(*(int *)(((int)stk + 4))) < 0) {
                        *(unsigned int *)(((int)stk + 4)) = 0x0;
                    } else {
                        t2 = (*(int *)(((int)stk + 4)));
                        if ((int)t2 > (int)t4) {
                            *(unsigned int *)(((int)stk + 4)) = t4;
                        }
                    }
                    t0 = 0x30;
                    u66 = *(float *)((a4 + t0));
                    t0 = 0xC;
                    u67 = *(float *)((t10 + t0));
                    t0 = 0x8;
                    u68 = *(float *)((t5 + t0));
                    t0 = 0x38;
                    t9 = (int)(((u66 - u54) + u67) * u52);
                    *(unsigned int *)(((int)stk + 12)) = (int)((((*(float *)((a4 + t0))) - u68) + u67) * u52);
                    if ((int)t9 < 0) {
                        t9 = 0x0;
                    } else {
                        if ((int)t9 > (int)t3) {
                            t9 = t3;
                        }
                    }
                    if ((int)(*(int *)(((int)stk + 12))) < 0) {
                        *(unsigned int *)(((int)stk + 12)) = 0x0;
                    } else {
                        t2 = (*(int *)(((int)stk + 12)));
                        if ((int)t2 > (int)t4) {
                            *(unsigned int *)(((int)stk + 12)) = t4;
                        }
                    }
                }
                t0 = 0x9C;
                t2 = t9;
                t2 = (t2 - t8);
                t2 = (t2 + 0x1);
                *(unsigned int *)((t10 + t0)) = (*(int *)0xC245F98);
                t1 = (*(int *)(((int)stk + 12)));
                t0 = 0xA0;
                t1 = (t1 - (*(int *)(((int)stk + 4))));
                t1 = (t1 + 0x1);
                t2 = (t2 * t1);
                *(unsigned int *)(((int)stk + 8)) = t2;
                t1 = (*(int *)0xC245F98);
                t1 = (t1 + 0x1);
                *(unsigned int *)0xC245F98 = t1;
                *(unsigned int *)((t10 + t0)) = (*(int *)(((int)stk + 8)));
                t3 = (*(int *)(((int)stk + 8)));
                t90 = t3;
                t3 = (t3 << 1);
                t3 = (t3 + t90);
                t3 = (t3 << 2);
                t0 = (FUN_0c0e262a(t3));
                t1 = 0xA4;
                t4 = 0xC23FF94;
                t1 = (t1 + t10);
                *(unsigned int *)((t1 + 0x0)) = t0;
                t92 = *(int *)(((int)stk + 4));
                t0 = 0xA4;
                t2 = t92;
                t3 = (*(int *)((t10 + t0)));
                *(unsigned int *)(((int)stk + 8)) = t92;
                *(unsigned int *)(((int)stk + 4)) = ((((t92 << 1) + t2) << 8) + t4);
                for (;;) {
                    t1 = (*(int *)(((int)stk + 8)));
                    if ((int)t1 > (int)(*(int *)(((int)stk + 12)))) {
                        break;
                    }
                    t6 = t8;
                    t6 = (t6 << 1);
                    t2 = (*(int *)(((int)stk + 4)));
                    t6 = (t6 + t8);
                    t5 = t8;
                    t6 = (t6 << 2);
                    t6 = (t6 + t2);
                    if ((int)t5 <= (int)t9) {
                        for (;;) {
                            t4 = t6;
                            t5 = (t5 + 0x1);
                            *(unsigned int *)((t3 + 0x8)) = t10;
                            *(unsigned int *)((t3 + 0x4)) = t6;
                            t2 = (*(int *)((t4 + 0x0)));
                            *(unsigned int *)((t3 + 0x0)) = t2;
                            *(unsigned int *)(((*(int *)((t4 + 0x0))) + 0x4)) = t3;
                            *(unsigned int *)((t4 + 0x0)) = t3;
                            t3 = (t3 + 0xC);
                            t6 = (t6 + 0xC);
                            if ((int)t5 > (int)t9) {
                                break;
                            }
                        }
                    }
                    t4 = 0x300;
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
                    t2 = (*(int *)(((int)stk + 4)));
                    t2 = (t2 + t4);
                    *(unsigned int *)(((int)stk + 4)) = t2;
                }
                t7 = (t7 + 0x8);
                *(unsigned int *)(((int)stk + 4)) = t10;
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
                continue;
            }
            break;
        }
        t104 = t0;
    }
    return t104;
}
