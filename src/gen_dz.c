/* Straight-line functions with calls and guards (batch gen_dz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, float, float);
int FUN_0c0d9ca0(float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAZ(int);
int FUN_0c075f30(int a4, float f4, float f5);

int FUN_0c075f30(int a4, float f4, float f5)
{
    int t0;
    int t3;
    int t6;
    int t7;
    int t9;
    int t10;
    float u12;
    float u13;
    int t34;
    int t36;
    int t37;
    float u38;
    float u39;
    float u40;
    float u19;
    float u62;
    int t4;
    int t5;
    int t8;
    float u11;
    float u14;
    int t26;
    int t28;
    int t29;
    float u30;
    float u31;
    float u32;
    int t49;
    int stk[15];

    t0 = *(int *)0xC23ED88;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((a4 + 0x34));
    t3 = 0xC075F84;
    t6 = a4;
    t7 = ((int)t0 >> 4);
    t9 = 0x4;
    t10 = 0x0;
    u12 = f4;
    u13 = f5;
    for (;;) {
        if ((int)t9 >= (int)0xC) {
            break;
        }
        t34 = t4;
        t36 = t5;
        t37 = t6;
        u38 = u11;
        u39 = u12;
        u40 = u13;
        if ((t7 & 0x1) != 0) {
            t6 = t9;
            t3 = 0xC246FF0;
            t6 = (t6 << 2);
            t5 = 0x22C;
            t6 = (*(int *)((t6 + t3)));
            t6 = (t6 + t5);
            t3 = (FUN_0c0db470(t6, ((int)stk + 4)));
            t3 = 0x4;
            u13 = (*(float *)(((int)stk + 4)));
            u12 = (*(float *)((((int)stk + 4) + t3)));
            u11 = u12;
            u11 = (u11 * u12);
            u19 = u11;
            u19 = u19 + u13 * u13;
            u11 = u19;
            u11 = _builtin_sqrtf(u11);
            u14 = u11;
            if (!(u14 > 17.5f)) {
                t3 = 0x4;
                t5 = 0xC0D9DC0;
                u13 = (*(float *)((((int)stk + 4) + t3)));
                u13 = (-u13);
                u12 = (*(float *)(((int)stk + 4)));
                t3 = (FUN_0c0d9dc0(u12, u13));
                t8 = t3;
                u12 = 2.5f;
                u12 = (u12 / u14);
                t3 = (FUN_0c0d9ca0(u12));
                t6 = t3;
                t5 = (short)t8;
                t4 = (short)t10;
                t5 = (t5 - (short)t6);
                if ((int)t5 < (int)t4) {
                    t3 = 0x78;
                    t10 = t8;
                    *(unsigned int *)((a4 + t3)) = 0x0;
                    t10 = (t10 - t6);
                }
                t26 = t4;
                t28 = t5;
                t29 = t6;
            } else {
                u30 = u11;
                u31 = u12;
                u32 = u13;
            }
            t34 = t26;
            t36 = t28;
            t37 = t29;
            u38 = u30;
            u39 = u31;
            u40 = u32;
        }
        u11 = u38;
        u12 = u39;
        u13 = u40;
        t4 = t34;
        t7 = (t7 >> 1);
        t5 = t36;
        t6 = t37;
        t9 = (t9 + 0x1);
    }
    *(unsigned short *)((a4 + 0x32)) = (int)((float)(*(short *)((a4 + 0x32))) - ((float)(*(short *)(((0x30 + a4) + 0x0))) * 0.099999994f));
    *(unsigned short *)((a4 + 0x30)) = ((*(short *)((a4 + 0x30))) + (*(short *)(((0x32 + a4) + 0x0))));
    if ((int)((*(short *)((a4 + 0x30))) + (*(short *)((a4 + 0x32)))) > (int)(short)t10) {
        if (((short)t10 == 0) && (t49 = *(int *)((a4 + 0x78)), t49 == 0)) {
            FUN_0c0cc3f8(0xF2BA9, u12, u13);
            *(unsigned int *)((a4 + 0x78)) = 0x1;
        }
        u62 = (float)(*(short *)((a4 + 0x32)));
        u62 *= -0.199999988f;
        *(unsigned short *)((a4 + 0x32)) = (int)u62;
        *(unsigned short *)((a4 + 0x30)) = t10;
    }
    nlQuickInvertMatrix();
    nlRotateAZ((*(short *)((a4 + 0x30))));
    FUN_0c0c47ae((*(short *)((a4 + 0x76))));
    return (nlPopMatrix(0x1));
}
