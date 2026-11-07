/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c035828(int, int, int, int, int, float, float);
int FUN_0c05fd8c(int, int, int, int, int, float, float, float, float);
int FUN_0c0848d6(int, float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c060ca0(int a4, int a5, int a6, int a7);
int FUN_0c093844(int a4, int a5, int a6, int a7);
int FUN_0c092f14(int a4);

int FUN_0c060ca0(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t3;
    register int t8;
    register int t52;
    register int t12;
    register int t24;
    register int t25;
    register int t27;
    register int t39;
    register int t45;
    register int t46;
    register int t51;
    register int t33;

    t0 = *(int *)((a4 + 0x230));
    if ((*(int *)((0xC247030 + ((*(int *)((t0 + 0xBC))) << 2)))) != 4) {
        t3 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(t0, a5, a6, a7);
    }
    t8 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t8 - 1);
    t52 = 0x22C;
    if ((int)(t8 - 1) > 0) {
    } else {
        FUN_0c0da2e0();
        *(unsigned int *)(((int)stk + 16)) = ((FUN_0c0e5f1c()) + 0x4);
        if ((*(int *)((a4 + 0x240))) != 0) {
            *(unsigned int *)((a4 + 0x240)) = 0x0;
            t12 = *(int *)((a4 + 0x228));
            if (16384.0f > _builtin_fabsf((float)t12)) {
                *(unsigned int *)((a4 + 0x228)) = 0xFFFFC000;
            } else {
                *(unsigned int *)((a4 + 0x228)) = 0x4000;
            }
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
            FUN_0c035828((*(int *)((a4 + 0x230))), 0x800, 0xFFFFFFFF, (((int)stk + 4) + 0x4), (((int)stk + 8) + 0x4), 1.0f, 0.0272199996f);
            if (((*(int *)(((int)stk + 8))) & 0x8000) != 0) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 12)));
            }
            if ((int)(*(int *)(((int)stk + 8))) < (int)0x3000) {
                *(unsigned int *)(((int)stk + 8)) = 0x3000;
            }
            t33 = t12;
        } else {
            t24 = FUN_0c0da2e0();
            t25 = ((~(((~t24) + 0x1) & 0xF)) + 0x1);
            if ((int)t24 >= 0) {
                t25 = (t24 & 0xF);
            }
            t27 = *(int *)((a4 + 0x228));
            FUN_0c0da2e0();
            *(unsigned int *)(((int)stk + 8)) = (((((FUN_0c0e5f1c()) << 8) << 2) << 1) + 0x1800);
            *(unsigned int *)((a4 + 0x228)) = ((*(int *)((a4 + 0x228))) + 0x8000);
            t33 = ((((t25 << 8) << 2) << 1) + t27);
        }
        t39 = (*(int *)(((int)stk + 16)));
        *(int *)((int)stk + 4) = t39;
        FUN_0c05fd8c((*(int *)((a4 + 0x230))), (*(int *)((a4 + 0x234))), (*(int *)(((int)stk + 8))), t33, t39, 1.0f, 1.0f, 1.0f, 1.0f);
        FUN_0c0cc3f8(0xE31A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
        t45 = *(int *)((a4 + 0x23C));
        *(unsigned int *)((a4 + 0x23C)) = (t45 - 1);
        if ((int)(t45 - 1) <= 0) {
            t46 = ((int (*)(void))(FUN_0c0e19f2))();
        }
        FUN_0c0da2e0();
        t51 = FUN_0c0e5f1c();
        *(unsigned int *)(((0x22C + a4) + 0x0)) = (t51 + 0x5);
        t52 = (t51 + 0x5);
    }
    return t52;
}

int FUN_0c093844(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)((a4 + 0x88));
    t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
    if ((*(int *)((((t0 << 2) + 0xC247030) + 0x0))) == 0) {
        FUN_0c0e19f2(((t0 << 2) + 0xC247030), a5, a6, a7);
    } else {
        t2 = ((t0 << 2) + 0xC247030);
    }
    t0 = *(int *)((0xC247030 + ((*(int *)((a4 + 0x88))) << 2)));
    if (t0 == 8) {
        return t0;
    }
    FUN_0c0848d6(t2, (*(float *)(((0x45C + t1) + 0x0))), (*(float *)(((0x45C + t1) + 0x4))), (*(float *)(((0x45C + t1) + 0x8))));
    t0 = *(int *)((a4 + 0x9C));
    t2 = *(int *)((a4 + 0x8C));
    if (((*(int *)((a4 + 0xA8))) & 0x8000) != 0) {
        *(unsigned int *)((a4 + 0xA8)) = ((*(int *)((a4 + 0xA8))) + 0x180);
    } else {
        *(unsigned int *)((a4 + 0xA8)) = ((*(int *)((a4 + 0xA8))) + 0x1800);
    }
    *(unsigned int *)((a4 + 0xAC)) = ((*(int *)((a4 + 0xAC))) + 0x280);
    u0 = 1.19999993f;
    u0 = u0 + 0.199999988f * (FUN_0c0d9e90((*(int *)((a4 + 0xA8)))));
    *(float *)((a4 + 0x74)) = u0;
    u0 = (float)(*(int *)(((a4 + 0x68) + 0x0)));
    u0 = u0 + 2048.0f * (FUN_0c0da410((*(int *)((a4 + 0xAC)))));
    *(unsigned short *)((a4 + 0x60)) = (int)u0;
    nlPushMatrix(0x0);
    nlMultiMatrix((*(int *)((t1 + 0x3E4))));
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ((*(short *)((a4 + 0x64))));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    nlScale(1.0f, (*(float *)((a4 + 0x74))), 1.0f);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c465c((*(short *)((((t0 << 1) + t2) + 0x0))));
    nlPopMatrix(0x1);
    t1 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t1 + 0x1);
    if ((((t1 + 0x1) - 1) & (*(int *)((a4 + 0xA0)))) == 0) {
        *(unsigned int *)((a4 + 0x9C)) = ((*(int *)((a4 + 0x9C))) + 0x1);
        if ((int)(*(short *)(((((t0 << 1) + t2) + 0x2) + 0x0))) < 0) {
            *(unsigned int *)((a4 + 0x9C)) = 0x0;
        }
    }
    return FUN_0c0849da();
}


