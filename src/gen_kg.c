/* Straight-line functions with calls and guards (batch gen_kg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c47ae(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector(int, int);
int FUN_0c09b7d8(int a4, int a5, int a6, int a7);

int FUN_0c09b7d8(int a4, int a5, int a6, int a7)
{
    int stk[27];
    register int t3;
    register int t14;
    register int t15;
    register int t33;
    register int t34;
    register float u44;
    register float u47;
    register float u49;

    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x30)));
    t3 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((*(int *)0xC24970C) == 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c0848bc(1.0f, 1.0f, 1.0f);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(*(int *)0xC23A258) >> 1);
    t14 = 0x0;
    t15 = 0xC10C204;
    for (;;) {
        FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 20))) + 0x3E4))) + ((((*(int *)((t15 + 0x0))) << 2) << 2) << 2)));
        FUN_0c0dcca0((t15 + 0x8));
        FUN_0c0dccf0();
        FUN_0c0db840((((int)stk + 4) + 0x2C));
        *(unsigned int *)(((int)stk + 4)) = (((t14 << 1) + t14) << 2);
        nlSubVector((((int)stk + 4) + 0x2C), ((((t14 << 1) + t14) << 2) + (a4 + 0x48)));
        FUN_0c0db840(((a4 + 0x48) + (*(int *)(((int)stk + 4)))));
        FUN_0c0dce80((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x2C), 0.869999945f);
        *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + -0.269999981f);
        nlPushMatrix(0x0);
        FUN_0c0dbda0((0x2AC + t3));
        FUN_0c0db4d0((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
        t33 = FUN_0c0d9dc0((*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 24))));
        *(unsigned int *)(((int)stk + 4)) = (t14 << 2);
        t34 = *(int *)((((t14 << 2) + (0x138 + a4)) + 0x0));
        *(unsigned int *)((((t14 << 2) + (0x138 + a4)) + 0x0)) = (t34 + (int)((float)((0x4000 + (short)t33) - t34) * 0.199999988f));
        nlPopMatrix(0x1);
        nlRotateAY((*(short *)((t3 + 0x3CE))));
        FUN_0c0dcca0(0xC10C3A0);
        nlRotateAX((*(short *)((t3 + 0x3CC))));
        nlRotateAZ((*(int *)((((0x138 + a4) + (*(int *)(((int)stk + 4)))) + 0x0))));
        u44 = *(float *)((t15 + 0x4));
        *(float *)(((int)stk + 8)) = (u44 * 0.839999914f);
        nlScale((u44 * 0.839999914f), (u44 * 0.839999914f), 1.0f);
        FUN_0c0dcca0(0xC10C394);
        u47 = *(float *)((t15 + 0x4));
        *(float *)(((int)stk + 12)) = (u47 * 0.839999914f);
        u49 = 1.0f;
        if (1.0f > (u47 * 0.839999914f)) {
        } else {
            u49 = (*(float *)(((int)stk + 12)));
        }
        FUN_0c0de000(u49);
        FUN_0c0c47ae(((0x1F & ((t14 * 0x17) + (*(int *)(((int)stk + 16))))) + 0x1B8));
        t14 = (t14 + 0x1);
        t15 = (t15 + 0x14);
        if ((unsigned int)t14 < (unsigned int)0x14) continue;
        break;
    }
    nlPopMatrix(0x1);
    return (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12)));
}
