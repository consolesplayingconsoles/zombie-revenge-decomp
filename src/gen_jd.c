/* Straight-line functions with calls and guards (batch gen_jd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
int FUN_0c022e60(int, int, int, int, float);
int FUN_0c02a19a(int);
int FUN_0c034314(int, int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0845e8(int);
int FUN_0c0845f8(int, int);
int FUN_0c084658(int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a9084(void);
int FUN_0c0c465c(int);
float FUN_0c0d9e90(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c08acc8(int a4);
int FUN_0c0241e4(int a4, int a5, int a6, int a7, float f4);
int FUN_0c067784(int a4);
int FUN_0c0a92fc(int a4);
int FUN_0c0acf44(int a4);

int FUN_0c08acc8(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)((a4 + 0x48));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x48))));
    FUN_0c0c465c((*(int *)((a4 + 0x54))));
    nlPopMatrix(0x1);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t0 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x58;
}

int FUN_0c0241e4(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;
    register int t44;
    register int t1;
    register int t2;
    register int t13;
    register int t20;
    register int t35;
    register int t31;
    register int t27;
    register int t40;
    int t14;

    t0 = FUN_0c022e60(a4, a5, a6, a7, f4);
    t44 = t0;
    if (t0 == 0) {
        t1 = FUN_0c034fbc(a4, 0x400, 0x1, 0x0);
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t2 + 0x1);
            if ((int)(t2 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
                FUN_0c02a19a(a4);
            }
            if ((int)(*(int *)((a4 + 0x54C))) >= (int)(*(int *)((a4 + 0x528)))) {
                t13 = FUN_0c034314(a4, (*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0))), ((int)stk + 4));
                if ((t13 != 0) && (t14 = *(int *)((a4 + 0x3AC)), (int)t14 > (int)0x3C)) {
                    FUN_0c02a19a(a4);
                }
            }
            t20 = *(int *)((a4 + 0x500));
            t35 = t20;
            if (t20 == 3) {
                t31 = 0x54C;
                if ((*(int *)((a4 + 0x54C))) == 0) {
                    t27 = 0x3AC;
                    if ((int)(*(int *)((a4 + 0x3AC))) > (int)0x3C) {
                        t27 = (FUN_0c02a19a(a4));
                    }
                    t31 = t27;
                }
                t35 = t31;
            }
            t40 = t35;
        } else {
            t40 = (FUN_0c02a19a(a4));
        }
        t44 = t40;
    }
    return t44;
}

int FUN_0c067784(int a4)
{
    int stk[4];

    if (((*(int *)0xC23ED5C) & 32) != 0) {
        FUN_0c0845f8(0x0, 0x0);
        FUN_0c0845e8(0x0);
        FUN_0c0e19f2();
    }
    *(float *)((a4 + 0x30)) = ((FUN_0c0d9e90((*(int *)((a4 + 0x98))))) * (*(float *)0xC0678A8));
    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x300);
    FUN_0c084658(0x0, (*(float *)((a4 + 0x30))), (*(float *)0xC0678AC), 0.0f);
    FUN_0c0a68ec(((int)stk + 4), (*(float *)((a4 + 0x30))), (*(float *)0xC0678B4));
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x3C))), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))));
    nlRotateAZ((*(int *)(((int)stk + 4))));
    FUN_0c0c465c((*(int *)((a4 + 0x78))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0a92fc(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x1C));
    if ((*(int *)((a4 + 0xC0))) == 51) {
        t1 = *(int *)((t0 + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + 0x24)); }
    } else {
        t1 = *(int *)((t0 + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + 0x3C)); }
    }
    FUN_0c0e6248(a4);
    return FUN_0c0a9084();
}

int FUN_0c0acf44(int a4)
{
    register int t15;
    register int t16;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY((*(short *)((a4 + 0x4E))));
    nlRotateAX((*(short *)((a4 + 0x4C))));
    nlRotateAZ((*(short *)((a4 + 0x50))));
    FUN_0c0c465c((*(short *)((a4 + 0x58))));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x40), (a4 + 0x40), (*(float *)0xC0AD064));
    nlAddVector((a4 + 0x34), (a4 + 0x40));
    t15 = FUN_0c010128((a4 + 0x4C), (a4 + 0x52));
    t16 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t16 + 0x1);
    if ((t16 + 0x1) == 0xB4) {
        return FUN_0c0e19f2();
    }
    return t15;
}
