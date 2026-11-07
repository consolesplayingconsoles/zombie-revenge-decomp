/* Straight-line functions with calls and guards (batch gen_iq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c075f30(int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
extern int FUN_0c0b145c();
int FUN_0c0b1542(int, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5dc0(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
float FUN_0c0a3f40(int a4, int a5, int a6, int a7);
int FUN_0c0b1b60(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0a3190(int a4, int a5, int a6, int a7);
int FUN_0c0b1904(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0b1c88(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a350c(int a4, int a5, int a6, int a7);
int FUN_0c0760c4(int a4, int a5, int a6, int a7);

float FUN_0c0a3f40(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t2;
    register int t3;
    register float u23;
    register float u41;
    register int t4;

    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t3 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (t3 - 1);
    if (((int)(t3 - 1) > 0) && (t4 = *(int *)((t1 + 0x2EC)), (t4 & 15) == 0)) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((*(int *)((t1 + 0xBC))) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)) + 0x80));
    FUN_0c0db470(0xC10D090, (((int)stk + 4) + 0xC));
    FUN_0c0dbda0((0x2AC + t2));
    FUN_0c0dcca0((((int)stk + 4) + 0xC));
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY((*(short *)((t2 + 0x3CE))));
    nlRotateAX((*(short *)((t2 + 0x3CC))));
    nlRotateAZ(0x7FFF);
    u23 = *(float *)((a4 + 0x50));
    nlScale(u23, (*(float *)((a4 + 0x54))), u23);
    FUN_0c0de000(((*(float *)((a4 + 0x50))) + (*(float *)((a4 + 0x54)))));
    FUN_0c0dcca0(0xC10D09C);
    FUN_0c0848d6((*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))), (*(float *)((a4 + 0x48))));
    FUN_0c0c465c(0x297);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - (*(float *)(((0x4C + a4) + 0x0))));
    u41 = (*(float *)((a4 + 0x54)));
    u41 = u41 + (1.0f + 1.0f) * (*(float *)(((0x4C + a4) + 0x0)));
    *(float *)((a4 + 0x54)) = u41;
    return (1.0f + 1.0f);
}


int FUN_0c0a3190(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t2 = *(short *)((a4 + 0x58));
    *(unsigned short *)((a4 + 0x58)) = (t2 + 0x1);
    if (((int)(short)(t2 + 0x1) <= (int)(*(short *)((a4 + 0x5A)))) && (t0 = *(int *)((a4 + 0x30)), t1 = *(int *)((0x2EC + t0)), (t1 & 15) == 0)) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t0 = *(short *)((a4 + 0x54));
    *(unsigned short *)((a4 + 0x54)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)(*(short *)((a4 + 0x56)))) {
        t0 = *(int *)((a4 + 0x4C));
        *(unsigned int *)((a4 + 0x4C)) = (t0 + 0x2);
        if ((int)(*(short *)(((t0 + 0x2) + 0x0))) < 0) {
            *(unsigned int *)((a4 + 0x4C)) = (*(int *)((a4 + 0x50)));
        }
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((((((*(int *)(((*(int *)((a4 + 0x30))) + 0xBC))) << 8) + 0xC25F840) + (((((*(short *)((a4 + 0x34))) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    if ((*(short *)((a4 + 0x36))) != 0) {
        t0 = *(short *)((a4 + 0x34));
        if (t0 != 1) {
            if (t0 != 0) {
            } else {
                FUN_0c0dcc70(-0.25f, -1.67799997f, 0.0429999977f);
                nlRotateAX(0xFFFFC000);
            }
        } else {
            FUN_0c0dcc70(0.25f, -1.67799997f, 0.0429999977f);
            nlRotateAX(0xFFFFC000);
        }
    }
    FUN_0c0dcca0((a4 + 0x38));
    nlRotateAZ((*(short *)((a4 + 0x48))));
    nlRotateAY((*(short *)((a4 + 0x46))));
    nlRotateAX((*(short *)((a4 + 0x44))));
    FUN_0c0c465c((*(short *)(((*(int *)((a4 + 0x4C))) + 0x0))));
    return nlPopMatrix(0x1);
}



int FUN_0c0a350c(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t6;
    register int t16;
    register int t17;
    register int t19;
    register int t41;

    if ((*(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC247030) + 0x0))) != 0) {
        t6 = *(int *)(((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0) + 0x0));
        if (((*(int *)((t6 + 0x290))) & 0x40000000) != 0) {
            FUN_0c0e19f2(a4, a5, a6, a7);
        }
        t16 = *(int *)((0xC247030 + ((*(int *)((t6 + 0xBC))) << 2)));
        if (t16 != 8) {
            t17 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t17 + 0x1);
            t19 = *(short *)((((t17 + 0x1) << 1) + (*(int *)((a4 + 0x8C)))));
            *(unsigned int *)((a4 + 0x78)) = t19;
            if ((int)t19 < 0) {
                *(unsigned int *)((a4 + 0xA0)) = 0x0;
                *(unsigned int *)((a4 + 0x78)) = (*(short *)((((*(int *)((a4 + 0xA0))) << 1) + (*(int *)((a4 + 0x8C))))));
            }
            nlPushMatrix(0x0);
            nlMultiMatrix((((((*(int *)((a4 + 0x7C))) << 2) << 2) << 2) + (*(int *)((t6 + 0x3E4)))));
            FUN_0c0dcca0((a4 + 0x30));
            FUN_0c0848d6((*(float *)(((0x45C + t6) + 0x0))), (*(float *)(((0x45C + t6) + 0x4))), (*(float *)(((0x45C + t6) + 0x8))));
            FUN_0c0de000(_builtin_fabsf((*(float *)((t6 + 0x284)))));
            t41 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((t6 + 0x454))) << 2) + 0xC195F48)))))((*(int *)((a4 + 0x78))), (*(float *)((t6 + 0x458))));
            FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            return nlPopMatrix(0x1);
        }
        return t16;
    }
    return FUN_0c0e19f2(a4, a5, a6, a7);
}

int FUN_0c0760c4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if (((*(int *)0xC23A180) == 3) && (t0 = *(int *)0xC23ED5C, (t0 & 4) != 0)) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t0 = *(int *)0xC23ED9C;
    if (((int)t0 >= (int)0x11) && ((int)t0 <= (int)0x12)) {
        return 0x12;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0FE620);
    nlRotateAY((*(short *)0xC0FE62E));
    FUN_0c0c465c((*(short *)0xC0FE632));
    nlPopMatrix(0x1);
    if (((*(short *)((a4 + 0x74))) & 32) != 0) {
        t0 = 0x0;
        t1 = 0xC0FE650;
        for (;;) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0(t1);
            nlRotateAY((*(short *)((t1 + 0xE))));
            *(volatile short *)((a4 + 0x74));
            t2 = FUN_0c0e5dc0();
            u0 = FUN_0c0da410(t2);
            FUN_0c0c475c((*(short *)((t1 + 0x12))), (u0 * (1.0f + 1.0f)));
            nlPopMatrix(0x1);
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x18);
            if ((unsigned int)t0 >= (unsigned int)0x2) {
                break;
            }
        }
    }
    *(unsigned short *)((a4 + 0x74)) = ((*(short *)((a4 + 0x74))) + 0x1);
    return FUN_0c075f30(a4);
}




