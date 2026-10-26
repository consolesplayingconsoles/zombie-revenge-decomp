/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0c0340(int, float);
int FUN_0c0cc3f8(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e61d4(int, int);
int FUN_0c0a9d50(int a4, int a5, float f4);
int FUN_0c0b455c(void);

int FUN_0c0a9d50(int a4, int a5, float f4)
{
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    float u13;
    int t32;
    int t59;
    int t60;
    int t61;
    int t14;
    int t15;
    int t40;
    int t41;
    int t43;
    int t44;
    float u45;
    int t50;
    int t57;
    int stk[10];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a5 + 0xC)));
    *(float *)0xC2021B8 = (float)(*(short *)((a5 + 0x0)));
    t5 = *(short *)((a5 + 0x2));
    *(float *)0xC2021BC = (float)t5;
    t6 = 0xC0A9E54;
    t7 = 0xC2021BC;
    t8 = 0xC2021B8;
    t9 = t5;
    t10 = a4;
    t11 = a5;
    t12 = (((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1);
    u13 = (float)t5;
    for (;;) {
        if ((t12 != 0) && (t14 = *(int *)(((int)stk + 4)), t7 = t14, t15 = *(signed char *)((t7 + 0x0)), t9 = t15, t9 != 0)) {
            t6 = (*(int *)(((int)stk + 4)));
            t6 = (*(signed char *)((t6 + 0x0)));
            if (t6 == 10) {
                t9 = (*(short *)((a5 + 0x0)));
                t8 = 0xC2021B8;
                t32 = t9;
                t9 = 0xC2021BC;
                u13 = (float)t32;
                *(float *)((t8 + 0x0)) = u13;
                u13 = (*(float *)((t9 + 0x0)));
                u13 = (u13 + 34.0f);
                *(float *)((t9 + 0x0)) = u13;
            } else {
                t6 = (*(int *)(((int)stk + 4)));
                t6 = (*(signed char *)((t6 + 0x0)));
                t12 = (t12 - 1);
                if (t6 != 32) {
                    t6 = (*(int *)(((int)stk + 4)));
                    t8 = 0xC2021B4;
                    t6 = (*(signed char *)((t6 + 0x0)));
                    t6 = (t6 - 46);
                    t6 = (t6 << 1);
                    t9 = (*(short *)((0xC1E87BC + t6)));
                    *(unsigned int *)((t8 + 0x0)) = t9;
                    t10 = t8;
                    t6 = (FUN_0c0c0340(t10, f4));
                } else {
                    t40 = t7;
                    t41 = t8;
                    t43 = t10;
                    t44 = t11;
                    u45 = u13;
                }
                u13 = u45;
                t7 = t40;
                t8 = t41;
                t9 = 0xC2021B8;
                t10 = t43;
                t11 = t44;
                u13 = (*(float *)((t9 + 0x0)));
                u13 = (u13 + 18.0f);
                *(float *)((t9 + 0x0)) = u13;
            }
            t9 = (*(int *)(((int)stk + 4)));
            t9 = (t9 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t9;
            continue;
        }
        break;
    }
    if (((int)t12 < (int)0xF) && (t50 = *(int *)0xC23A258, (t50 & 4) != 0)) {
        *(unsigned int *)0xC2021B4 = 0x2038;
        FUN_0c0c0340(0xC2021B4, f4);
    } else {
        t57 = t11;
    }
    t59 = *(int *)(((int)stk + 8));
    if (((t59 & 1) == 0) && (t12 == 0)) {
        t60 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t60 - 1);
        t61 = *(signed char *)(((t60 - 1) + 0x0));
        if (t61 != 32) {
            return FUN_0c0cc3f8(0x32A9, t57);
        }
        return t61;
    }
    return t59;
}

int FUN_0c0b455c(void)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t17;

    t0 = 0xC2038E4;
    t1 = 0x4;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC0B35E4, 0x474, (*(int *)0xC23ECEC));
        FUN_0c0e19d0(t3);
        *(float *)(((0x468 + t3) + 0x8)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x4)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x0)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x8)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x4)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x0)) = 1.0f;
        *(float *)((t3 + 0x284)) = 1.0f;
        *(float *)((t3 + 0x27C)) = 1.0f;
        *(float *)((t3 + 0x278)) = 1.0f;
        *(float *)((t3 + 0x274)) = 1.0f;
        *(unsigned int *)((t3 + 0x32C)) = 0x0;
        t5 = *(int *)((t0 + 0x14));
        *(unsigned int *)((t3 + 0xBC)) = t1;
        *(unsigned int *)(((0xC0 + t3) + 0x0)) = (*(signed char *)((t0 + 0x1)));
        FUN_0c0e61d4((0x45C + t3), (0x468 + t3));
        FUN_0c0855ba(t3);
        FUN_0c0ba6e8(t3);
        if ((*(int *)((t3 + 0xC0))) == 17) {
            *(unsigned int *)((t3 + 0x404)) = 0x9D5;
            *(unsigned int *)((t3 + 0x410)) = 0x9D3;
            *(unsigned int *)((t3 + 0x41C)) = 0x9D4;
            *(unsigned int *)((t3 + 0x418)) = 0x9D6;
            *(unsigned int *)((t3 + 0x424)) = 0x9D7;
            *(unsigned int *)((t3 + 0x414)) = 0x9D8;
            *(unsigned int *)((t3 + 0x420)) = 0x9D9;
        }
        FUN_0c0ba776(t3);
        FUN_0c085638(t3);
        t17 = FUN_0c0b359e(t3, t5);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x18);
        if ((int)t1 >= (int)0xA) {
            break;
        }
    }
    return t17;
}
