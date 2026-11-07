/* Straight-line functions with calls and guards (batch gen_rt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int mwPlySetLpFlg(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c068b62(int a4);

int FUN_0c068b62(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        mwPlySetLpFlg(a4);
        FUN_0c0e19f2();
    }
    t1 = *(int *)((a4 + 0x220));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            *(unsigned int *)((a4 + 0x1BC)) = 0x0;
            *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x230))))) * (float)(*(int *)((a4 + 0x22C))));
            *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x234))))) * (float)(*(int *)((a4 + 0x22C))));
            *(unsigned int *)((a4 + 0x230)) = ((*(int *)((a4 + 0x230))) + 0x500);
            *(unsigned int *)((a4 + 0x234)) = ((*(int *)((a4 + 0x234))) + 0x800);
            u0 = FUN_0c0da410((*(short *)((a4 + 0x6C))));
            u1 = FUN_0c0da410((*(short *)((a4 + 0x70))));
            u2 = _builtin_fabsf((u0 * 10.0f));
            *(float *)((a4 + 0x64)) = (u2 + (_builtin_fabsf((u1 * 10.0f))));
            t1 = 0xC0;
            t2 = t0;
            t0 = (*(int *)((a4 + 0xC0)));
            u0 = 10.0f;
            for (;;) {
                t3 = (int)t0 <= 0;
                t0 = (t0 - 1);
                if (t3) {
                    break;
                }
                t1 = 0x228;
                t2 = (*(int *)((a4 + t1)));
                t1 = 0x64;
                t3 = t1;
                u1 = (*(float *)((a4 + t1)));
                t3 = (t3 + t2);
                u0 = (*(float *)((t3 + 0x0)));
                u1 = (u1 + u0);
                *(float *)((a4 + t1)) = u1;
            }
            t0 = *(int *)((a4 + 0x22C));
            *(unsigned int *)((a4 + 0x22C)) = (t0 - 32);
            if ((int)(t0 - 32) < 0) {
                *(unsigned int *)((a4 + 0x1BC)) = 0x0;
                *(unsigned int *)((a4 + 0x220)) = 0x0;
                *(float *)((a4 + 0x64)) = 0.0f;
            }
        }
    } else {
        if ((*(int *)((a4 + 0xC0))) != 0) {
            *(unsigned int *)((a4 + 0x1BC)) = ((*(int *)((a4 + 0x1BC))) | (*(int *)(((0x1BC + (*(int *)((a4 + 0x228)))) + 0x0))));
        }
        if ((*(int *)((a4 + 0x1BC))) == 0) {
        } else {
            if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
                t0 = *(int *)((a4 + 0x1C4));
                *(unsigned int *)(((t0 << 2) + 0xC247584)) = ((*(int *)(((t0 << 2) + 0xC247584))) + 0xA);
            }
            t0 = *(int *)((a4 + 0xC0));
            *(unsigned int *)((a4 + 0x22C)) = ((-(((((t0 << 2) + t0) << 2) << 2) << 1)) + 0x300);
            *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x64)))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    FUN_0c0c465c((*(int *)((a4 + 0x21C))));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}
