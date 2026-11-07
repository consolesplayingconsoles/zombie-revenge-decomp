/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c0685a4(int);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e16c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c07a5f8(int a4);
int FUN_0c08e1d4(int a4, int a5, int a6, int a7);


int FUN_0c08e1d4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t10;
    int t11;
    int t13;
    int t16;
    int t14;
    int t18;
    float u19;
    int t29;
    int t31;
    float u34;
    int t44;

    t0 = *(int *)((a4 + 0x34));
    if ((int)(*(int *)((t0 + 0x3B0))) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c0de3c0(0x4, 0x1);
    nlPushMatrix(0x0);
    t10 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t11 = *(int *)((t0 + 0xBC));
    FUN_0c0da2e0();
    t13 = *(int *)((t0 + 0x374));
    t16 = 0x7;
    if ((int)(t13 >> 1) > (int)0x7) {
    } else {
        t14 = (t13 >> 1);
        if ((int)(t13 >> 1) < 0) {
            t14 = 0x0;
        }
        t16 = t14;
    }
    t18 = *(int *)((t0 + 0x374));
    u19 = ((float)t18 * 0.349999994f);
    if (((float)t18 * 0.349999994f) > 6.0f) {
        u19 = 6.0f;
    }
    FUN_0c0dcca0((((((((t11 << 1) + t11) << 2) << 2) << 2) + 0xC23F268) + 0x24));
    nlRotateAY((*(short *)((t10 + 0x3CE))));
    nlRotateAX((*(short *)((t10 + 0x3CC))));
    nlScale(u19, u19, u19);
    FUN_0c0de000(u19);
    FUN_0c0c465c(0x291);
    t29 = t16;
    for (;;) {
        t31 = FUN_0c0e19aa(0xC08E3A8, 0x54, (*(int *)((a4 + 0x30))));
        FUN_0c0e19d0(t31);
        *(unsigned int *)((t31 + 0x3C)) = (((((((t11 << 1) + t11) << 2) << 2) << 2) + 0xC23F268) + 0x24);
        u34 = 0.5f;
        u34 = u34 + 7.62962736e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t31 + 0x40)) = u34;
        *(unsigned short *)(((0x46 + t31) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        *(unsigned short *)(((0x44 + t31) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        *(unsigned int *)((t31 + 0x4C)) = 0xE38;
        *(unsigned short *)((t31 + 0x4A)) = 0x100;
        *(unsigned int *)((t31 + 0x50)) = 0x71C;
        nlUnitMatrix();
        FUN_0c0dcca0((((((((t11 << 1) + t11) << 2) << 2) << 2) + 0xC23F268) + 0x24));
        nlRotateAY((*(short *)((t31 + 0x46))));
        nlRotateAX((*(short *)((t31 + 0x44))));
        FUN_0c0db470(0xC10ABD4, (t31 + 0x30));
        t44 = (t29 == 0);
        t29 = (t29 - 1);
        if (t44) {
            break;
        }
    }
    nlPopMatrix(0x1);
    FUN_0c0e16c0((*(int *)((a4 + 0x30))));
    return FUN_0c0de3c0(0x4, 0x5);
}
