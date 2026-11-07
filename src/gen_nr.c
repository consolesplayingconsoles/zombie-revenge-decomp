/* Straight-line functions with calls and guards (batch gen_nr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07e636(int, int);
int FUN_0c0c465c(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0cd9c0(int a4);

int FUN_0c0cd9c0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    t0 = *(int *)((a4 + 0x34));
    u1 = 0.00999999978f;
    u1 = u1 + 2.44148055e-06f * (float)(FUN_0c0da2e0());
    u2 = *(float *)((a4 + 0x64));
    u3 = *(float *)((a4 + 0x44));
    u4 = *(float *)((a4 + 0x38));
    u5 = *(float *)((a4 + 0x4C));
    u6 = *(float *)((a4 + 0x40));
    u7 = *(float *)(((t0 - 12) + 0x4));
    u8 = ((u6 - u5) * (u6 - u5));
    u8 = u8 + ((u4 - u3)) * ((u4 - u3));
    u3 = (*(float *)((a4 + 0x38)));
    u3 = u3 + 0.000213629566f * ((float)((FUN_0c0da2e0()) - 16384));
    u4 = *(float *)((a4 + 0x44));
    u5 = (*(float *)((a4 + 0x40)));
    u5 = u5 + 0.000213629566f * ((float)((FUN_0c0da2e0()) - 16384));
    t0 = FUN_0c0d9dc0((u5 - (*(float *)((a4 + 0x4C)))), (u3 - u4));
    u3 = (u1 * u2);
    u4 = (*(float *)(((a4 + 0x50) + 0x0)));
    u4 = u4 + u3 * (FUN_0c0d9e90((short)t0));
    *(float *)(((a4 + 0x50) + 0x0)) = u4;
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0102572199f);
    u3 = (u1 * u2);
    u1 = (*(float *)(((a4 + 0x58) + 0x0)));
    u1 = u1 + u3 * (FUN_0c0da410((short)t0));
    *(float *)(((a4 + 0x58) + 0x0)) = u1;
    FUN_0c0dce80((a4 + 0x50), (a4 + 0x50), 0.979999959f);
    nlAddVector((a4 + 0x44), (a4 + 0x50));
    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x5C)) = (int)((float)(*(short *)((a4 + 0x5C))) + ((float)((-(*(short *)(((0x5C + a4) + 0x0)))) - 16383) * 0.049999997f));
            if ((*(float *)((a4 + 0x4C))) > 230.0f) {
                *(float *)((a4 + 0x4C)) = 230.0f;
            }
            if (3.0f > (*(float *)((a4 + 0x48)))) {
                t0 = FUN_0c0da2e0();
                if ((t0 & 31) != 0) {
                    t0 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
                    FUN_0c0e19d0(t0);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x70)) = *(struct mv3 *)((a4 + 0x44)); }
                    *(unsigned short *)((t0 + 0x9A)) = 0x3B7;
                    *(unsigned short *)((t0 + 0xA0)) = 0x10;
                    u1 = 0.199999988f;
                    u1 = u1 + 1.52592547e-05f * (float)(FUN_0c0da2e0());
                    *(float *)((t0 + 0x90)) = u1;
                }
                FUN_0c0e19f2();
            }
        }
    } else {
        if ((*(int *)((a4 + 0x74))) != 0) {
            if (!(1145.0f > (*(float *)((a4 + 0x44)))) && (u0 = *(float *)((a4 + 0x50)), !(0.0f > u0))) {
                *(float *)((a4 + 0x44)) = 1145.0f;
                *(float *)((a4 + 0x50)) = (-(*(float *)((a4 + 0x50))));
            }
            if (!((*(float *)((a4 + 0x4C))) > 260.0f)) {
                if (10.0f > (*(float *)((a4 + 0x48)))) {
                    *(float *)((a4 + 0x48)) = 10.0f;
                }
            } else {
                if (u7 > (*(float *)((a4 + 0x48)))) {
                    *(float *)((a4 + 0x48)) = u7;
                }
            }
            if (!((*(float *)((a4 + 0x4C))) > 230.0f)) {
                *(unsigned int *)((a4 + 0x30)) = 0x1;
            }
        } else {
            if (u7 > (*(float *)((a4 + 0x48)))) {
                *(float *)((a4 + 0x48)) = u7;
            }
        }
    }
    t0 = FUN_0c0d9dc0((*(float *)((a4 + 0x50))), (*(float *)((a4 + 0x58))));
    *(unsigned short *)(((0x5E + a4) + 0x0)) = (int)((float)(*(short *)(((0x5E + a4) + 0x0))) + ((float)(FUN_0c07e636((*(short *)((a4 + 0x5E))), (0x7FFF + (short)t0))) * 0.099999994f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x44));
    nlRotateAY((*(short *)((a4 + 0x5E))));
    nlRotateAX((*(short *)((a4 + 0x5C))));
    u0 = *(float *)((a4 + 0x68));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x68))));
    FUN_0c0c465c((*(short *)((((*(int *)((a4 + 0x6C))) << 1) + 0xC1E9F14))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x6C));
    *(unsigned int *)((a4 + 0x6C)) = (t0 + 0x1);
    if ((unsigned int)(t0 + 0x1) >= (unsigned int)0x8) {
        *(unsigned int *)((a4 + 0x6C)) = 0x0;
    }
    t0 = 0xC0CDD08;
    if (!(_builtin_sqrtf(u8) > 5.0f)) {
        t1 = *(int *)((a4 + 0x78));
        *(unsigned int *)((a4 + 0x78)) = (t1 - 1);
        if ((t1 - 1) == 0) {
            FUN_0c0e19f2();
        }
        t1 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t1 + 0xC);
        *(float *)((a4 + 0x38)) = (*(float *)(((t1 + 0xC) + 0x0)));
        *(float *)((a4 + 0x3C)) = (*(float *)(((*(int *)((a4 + 0x34))) + 0x4)));
        *(float *)((a4 + 0x40)) = (*(float *)(((*(int *)((a4 + 0x34))) + 0x8)));
        t1 = 0x74;
        if ((*(int *)((a4 + 0x74))) != 0) {
            u0 = (*(float *)(((a4 + 0x38) + 0x0)));
            u0 = u0 + 0.000976592302f * ((float)((FUN_0c0da2e0()) - 16384));
            *(float *)(((a4 + 0x38) + 0x0)) = u0;
            t2 = FUN_0c0da2e0();
            u0 = (*(float *)(((a4 + 0x40) + 0x0)));
            u0 = u0 + 0.000976592302f * ((float)(t2 - 16384));
            *(float *)(((a4 + 0x40) + 0x0)) = u0;
            t1 = (t2 - 16384);
        }
        t0 = t1;
    }
    return t0;
}
