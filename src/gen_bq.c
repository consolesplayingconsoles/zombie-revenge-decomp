/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0c46cc(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int _quick_odd_mvn(int);
int FUN_0c092638(int a4);
int FUN_0c059500(int a4);
int FUN_0c059620(int a4);

int FUN_0c092638(int a4)
{
    int t0;
    int t9;
    int t21;
    int t16;
    int t23;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)((a4 + 0x8C));
    t9 = 0x1;
    if (((*(int *)((0xC247604 + ((*(int *)((t0 + 0xBC))) << 2)))) == 1) && ((t3 = *(int *)((a4 + 0x88)), t4 = *(int *)((0xC247030 + (t3 << 2))), t4 == 4) && (t5 = *(int *)0xC23ED5C, (t5 & 0x100A4) == 0))) {
        t9 = 0x0;
    }
    t21 = t9;
    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x88))) << 2)))) == 4) {
        t16 = t9;
        if ((*(int *)(((*(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0))) + 0x2BC))) != (*(int *)((a4 + 0x98)))) {
            t16 = 0x1;
        }
        t21 = t16;
    }
    t23 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t23 - 1);
    if (((int)(t23 - 1) > 0) && (t21 == 0)) {
        return 0xA0;
    }
    *(unsigned int *)((t0 + 0x244)) = (*(int *)((a4 + 0x7C)));
    return FUN_0c0e19f2(a4, t21, t0, 0x1);
}

int FUN_0c059500(int a4)
{
    float u7;
    int t12;

    _quick_odd_mvn(a4);
    *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) - ((*(float *)(((0x25C + a4) + 0x0))) * 6.0f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    u7 = *(float *)((a4 + 0x25C));
    nlScale(u7, u7, u7);
    FUN_0c0de000((*(float *)((a4 + 0x25C))));
    t12 = 0x24C;
    if ((*(int *)((a4 + 0x21C))) == 0) {
        t12 = 0x248;
    }
    FUN_0c0c465c((*(int *)((a4 + t12))));
    return nlPopMatrix(0x1);
}

int FUN_0c059620(int a4)
{
    float u7;
    int t12;

    _quick_odd_mvn(a4);
    *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) - ((*(float *)(((0x25C + a4) + 0x0))) * 6.0f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    u7 = *(float *)((a4 + 0x25C));
    nlScale(u7, u7, u7);
    FUN_0c0de000((*(float *)((a4 + 0x25C))));
    t12 = 0x24C;
    if ((*(int *)((a4 + 0x21C))) == 0) {
        t12 = 0x248;
    }
    FUN_0c0c46cc((*(int *)((a4 + t12))));
    return nlPopMatrix(0x1);
}
