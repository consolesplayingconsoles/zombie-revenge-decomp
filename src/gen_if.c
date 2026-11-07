/* Straight-line functions with calls and guards (batch gen_if): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c02a19a();
int FUN_0c0321d4(int, int);
int FUN_0c034238(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c046cc0(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c063994(int, int);
int FUN_0c07c964(int);
int FUN_0c0c47ae(int);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e15d4(int, int, int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c07ca74(int a4, int a5, int a6, int a7);
int FUN_0c024938(int a4);
int FUN_0c0477a8(int a4, int a5, int a6, int a7);

int FUN_0c07ca74(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e15d4((*(int *)((a4 + 0x34))), a5, a6, a7);
        FUN_0c0e19f2();
    }
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x38));
    t0 = *(short *)((a4 + 0x44));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t1 = t0;
                t0 = 0x0;
                t2 = 0x0;
                t3 = 0xC100DDC;
                t4 = 0x0;
                for (;;) {
                    if ((unsigned int)t0 >= (unsigned int)0xC) {
                        break;
                    }
                    t5 = 0xC0E19AA;
                    t1 = (FUN_0c0e19aa(0xC07C664, 0xAC, (*(int *)((a4 + 0x34)))));
                    t4 = t1;
                    t1 = (FUN_0c0e19d0(t1));
                    t1 = 0x30;
                    *(unsigned short *)((t4 + t1)) = t0;
                    t1 = (nlPushMatrix(0x0));
                    t5 = 0xC0DCC70;
                    t1 = (FUN_0c0dcc70(0.0f, (*(float *)((t3 + 0x0))), 0.0f));
                    t1 = (nlGetMatrix((t4 + 0x38)));
                    t1 = (nlPopMatrix(0x1));
                    t5 = (*(int *)((t3 + 0x14)));
                    t1 = 0x34;
                    *(unsigned short *)((t4 + t1)) = t5;
                    t1 = (t1 + 0x70);
                    *(unsigned int *)((t4 + t1)) = t2;
                    if (t2 != 0) {
                        t1 = 0xA8;
                        *(unsigned int *)((t2 + t1)) = t4;
                    }
                    t1 = 0x88;
                    t0 = (t0 + 0x1);
                    t2 = t4;
                    *(float *)((t4 + t1)) = 1.0f;
                    t1 = 0x8;
                    u0 = (*(float *)((t3 + t1)));
                    t1 = 0x90;
                    *(float *)((t4 + t1)) = u0;
                    t1 = 0x10;
                    u0 = (*(float *)((t3 + t1)));
                    t1 = 0x94;
                    *(float *)((t4 + t1)) = u0;
                    t1 = 0x4;
                    u0 = (*(float *)((t3 + t1)));
                    t1 = 0x98;
                    *(float *)((t4 + t1)) = u0;
                    t1 = 0xC;
                    u0 = (*(float *)((t3 + t1)));
                    t3 = (t3 + 0x18);
                    t1 = 0x9C;
                    *(float *)((t4 + t1)) = u0;
                }
                *(unsigned short *)((a4 + 0x44)) = ((*(short *)((a4 + 0x44))) + 0x1);
            }
        } else {
            *(unsigned short *)((a4 + 0x48)) = ((*(short *)((a4 + 0x48))) + 0x1);
            if ((int)(*(short *)((a4 + 0x48))) >= (int)0x1E) {
                *(unsigned short *)((a4 + 0x44)) = ((*(short *)((a4 + 0x44))) + 0x1);
            } else {
                if ((int)(*(short *)((a4 + 0x48))) < (int)0x14) {
                    t0 = *(short *)((a4 + 0x4A));
                    *(unsigned short *)((a4 + 0x4A)) = (t0 + 0x1);
                    if ((int)(short)(t0 + 0x1) >= (int)0x1) {
                        t0 = 0x2;
                        for (;;) {
                            if (t0 == 0) {
                                break;
                            }
                            FUN_0c07c964(a4);
                            t0 = (t0 - 1);
                        }
                        *(unsigned short *)((a4 + 0x4A)) = 0x0;
                    }
                }
            }
            FUN_0c0c47ae((*(short *)((a4 + 0x46))));
        }
    } else {
        if ((int)(*(int *)(((*(int *)0xC247CA0) + 0x30))) > (int)(*(short *)((a4 + 0x4E)))) {
            if ((*(short *)((a4 + 0x4C))) != 0) {
                *(unsigned short *)((a4 + 0x44)) = ((*(short *)((a4 + 0x44))) + 0x1);
                *(unsigned short *)((a4 + 0x48)) = 0x0;
                *(unsigned short *)((a4 + 0x4A)) = 0x0;
            } else {
                *(unsigned short *)((a4 + 0x44)) = ((*(short *)((a4 + 0x44))) + 0x3);
            }
        }
        if ((*(short *)(((*(int *)0xC247CA0) + 0x36))) == (*(int *)((a4 + 0x30)))) {
            t0 = 0x2;
            for (;;) {
                if (t0 == 0) {
                    break;
                }
                FUN_0c07c964(a4);
                t0 = (t0 - 1);
            }
        }
        FUN_0c0c47ae((*(short *)((a4 + 0x46))));
    }
    FUN_0c0e16c0((*(int *)((a4 + 0x34))));
    return (nlPopMatrix(0x1));
}


int FUN_0c0477a8(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t10;
    register int t40;
    register int t57;
    register int t58;
    register int t67;
    register int t65;

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t3 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t3 - 1);
                if ((int)(t3 - 1) < 0) {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x59A;
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
            } else {
                if (t0 == 3) {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                        t10 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7);
                    }
                }
            }
        } else {
            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x599;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x534)) = 0x0;
                *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0xC)) = *(struct mv4 *)(0xC0F6718); }
                FUN_0c063994(a4, (((int)stk + 4) + 0xC));
            }
        }
        t67 = (FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC0479B0)));
    } else {
        t40 = FUN_0c046cc0(a4);
        if (t40 == 0) {
            t65 = (((int (*)(int))(FUN_0c02a19a))(a4));
        } else {
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0x6E))));
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 24)) = 0.0f;
            *(float *)(((int)stk + 28)) = -0.0399999991f;
            FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
            *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 12)));
            *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
            nlPopMatrix(0x1);
            FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
            if ((int)(*(int *)((a4 + 0x54C))) >= (int)0x3) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x598;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
            t57 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t57 - 1);
            if ((int)(t57 - 1) < 0) {
                *(unsigned int *)((a4 + 0x534)) = 0x0;
                t58 = ((int (*)(int))(FUN_0c02a19a))(a4);
            }
            t65 = (FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC0479B0)));
        }
        t67 = t65;
    }
    return t67;
}


