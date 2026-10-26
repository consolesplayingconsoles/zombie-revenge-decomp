/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c078dc2(int a4, int a5, int a6, int a7);

int FUN_0c078dc2(int a4, int a5, int a6, int a7)
{
    int t1;
    int t9;
    int t22;
    int t57;
    int t58;
    int t62;
    int t64;
    int t69;
    int t71;
    int t73;
    int t75;
    int t96;
    int t63;
    int t65;
    int stk[14];

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x21C));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
            } else {
                FUN_0c0cc3f8(0xD28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                *(unsigned int *)((a4 + 0x21C)) = ((*(int *)((a4 + 0x21C))) + 0x1);
            }
        } else {
            t9 = *(int *)((a4 + 0x224));
            *(unsigned int *)((a4 + 0x224)) = (t9 - 1);
            *(float *)((a4 + 0x64)) = ((float)((t9 - 1) & 0x1) * 0.5f);
            if ((int)(*(int *)((a4 + 0x224))) <= 0) {
                *(unsigned int *)((a4 + 0x21C)) = ((*(int *)((a4 + 0x21C))) + 0x1);
            }
        }
    } else {
        if ((*(int *)((a4 + 0x1BC))) != 0) {
            *(unsigned int *)((a4 + 0x1BC)) = 0x0;
            if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
                t22 = *(int *)((a4 + 0x1C4));
                *(unsigned int *)(((t22 << 2) + 0xC247584)) = ((*(int *)(((t22 << 2) + 0xC247584))) + 0x12C);
            }
            if ((int)(*(int *)((a4 + 0x1C4))) < (int)0xC) {
                *(unsigned int *)((a4 + 0x21C)) = ((*(int *)((a4 + 0x21C))) + 0x2);
            } else {
                *(unsigned int *)((a4 + 0x224)) = 0x3C;
                *(unsigned int *)((a4 + 0x21C)) = ((*(int *)((a4 + 0x21C))) + 0x1);
            }
        } else {
            FUN_0c01cdf2(a4);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0dcc70(0.0f, (*(float *)((a4 + 0x64))), 0.0f);
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    if ((int)(*(int *)((a4 + 0x21C))) < (int)0x2) {
        t57 = 0x21C;
        t58 = 0x0;
        for (;;) {
            if ((int)t58 >= (int)0x16) {
                break;
            }
            t57 = 0x220;
            t57 = (FUN_0c0c465c(((*(int *)((a4 + t57))) + t58)));
            t58 = (t58 + 0x1);
        }
    } else {
        if ((*(int *)((a4 + 0x21C))) == 2) {
            t62 = 0xC078F54;
            t64 = 0x0;
            for (;;) {
                if ((int)t64 >= (int)0x16) {
                    break;
                }
                t62 = (FUN_0c0e18ce(0xC07903A, 0xB4));
                t65 = t62;
                t62 = (FUN_0c0e19d0(t62));
                t63 = t65;
                t63 = (t63 + 0x30);
                t62 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t63) = *(struct mv3 *)((a4 + 0x30)); }
                t63 = t65;
                t63 = (t63 + 0x60);
                t62 = 0x6;
                t62 = (FUN_0c0e6248());
                t62 = 0x220;
                t69 = *(int *)((a4 + t62));
                t62 = 0x78;
                *(unsigned int *)((t65 + t62)) = (t69 + t64);
                t62 = (FUN_0c0da2e0());
                t62 = (unsigned char)t62;
                t71 = t62;
                t62 = 0x48;
                *(float *)((t65 + t62)) = ((((float)t71 * 1.0f) / 256.0f) + -0.5f);
                t62 = (FUN_0c0da2e0());
                t62 = (unsigned char)t62;
                t73 = t62;
                t62 = 0x4C;
                *(float *)((t65 + t62)) = ((((float)t73 * 0.5f) / 256.0f) + 0.5f);
                t62 = (FUN_0c0da2e0());
                t62 = (unsigned char)t62;
                t75 = t62;
                t62 = 0x50;
                *(float *)((t65 + t62)) = ((((float)t75 * 1.0f) / 256.0f) + -0.5f);
                t62 = (FUN_0c0da2e0());
                t62 = (unsigned char)t62;
                *(unsigned int *)(((t65 + 0x68) + 0x0)) = t62;
                t62 = (FUN_0c0da2e0());
                t63 = 0x6C;
                t63 = (t63 + t65);
                t62 = (unsigned char)t62;
                *(unsigned int *)((t63 + 0x0)) = t62;
                t62 = (FUN_0c0da2e0());
                t63 = 0x70;
                t63 = (t63 + t65);
                t62 = (unsigned char)t62;
                *(unsigned int *)((t63 + 0x0)) = t62;
                t64 = (t64 + 0x1);
                t62 = 0x98;
                *(unsigned int *)((t65 + t62)) = 0x3C;
            }
        }
    }
    nlPopMatrix(0x1);
    t96 = *(int *)((a4 + 0x21C));
    if (t96 == 3) {
        return FUN_0c0e19f2();
    }
    return t96;
}
