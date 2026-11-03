/* Straight-line functions with calls and guards (batch gen_jb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c05ee68(int a4);
int FUN_0c089b50(int a4);
int FUN_0c08bed4(int a4);

int FUN_0c05ee68(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)0xC247CAC;
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    u0 = *(float *)0xC05EF9C;
    nlScale(u0, u0, u0);
    FUN_0c0de000(u0);
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0xD8))) == 1) {
        FUN_0c054c8a(a4);
    }
    if (((*(int *)0xC23A258) & 1) == 0) {
        t0 = *(int *)((a4 + 0x220));
        *(unsigned int *)((a4 + 0x220)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x34D) {
            FUN_0c0e19f2();
        }
    }
    t0 = *(int *)((a4 + 0x23C));
    *(unsigned int *)((a4 + 0x23C)) = (t0 + 0x1);
    if (t0 == 0) {
        return FUN_0c01cdc2(a4);
    }
    return 0x23C;
}

int FUN_0c089b50(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    u0 = 1.0f;
    u0 = u0 + (*(float *)0xC089CB8) * (FUN_0c0da410(((((*(int *)((a4 + 0x64))) << 8) << 2) << 2)));
    *(float *)((a4 + 0x58)) = u0;
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    nlRotateAZ((*(short *)((t0 + 0x3D0))));
    u0 = *(float *)((a4 + 0x58));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x58))));
    FUN_0c0c465c(0x291);
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return 0x64;
}

int FUN_0c08bed4(int a4)
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
    FUN_0c0c465c((*(int *)((a4 + 0x50))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC08C004));
    return nlAddVector((a4 + 0x30), (a4 + 0x3C));
}
