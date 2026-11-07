/* Straight-line functions with calls and guards (batch gen_lq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dcca0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e6248(void);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c079424(int a4);

int FUN_0c079424(int a4)
{
    int stk[21];
    register int t6;
    register int t11;
    register int t16;
    register int t17;
    register int t18;
    register int t20;
    register int t23;
    register float t27;
    register float t29;
    register int t37;
    register int t42;
    register int t44;
    register float u47;
    register float u48;
    register int t59;
    register int t85;
    register int t86;
    register int t87;
    register int t88;
    register int t92;
    register int t32;
    register float u33;

    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = (0x1674 + a4);
    *(unsigned int *)(((int)stk + 20)) = (0x2190 + a4);
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x38)));
    if ((*(int *)((a4 + 0x30))) != 0) {
    } else {
        if (((*(int *)0xC23ED88) & 32) == 0) {
            t6 = (a4 + 0x3C);
            for (;;) {
                FUN_0c0dcca0(t6);
                nlRotateAY((*(short *)(((*(int *)(((int)stk + 4))) + 0x2))));
                t11 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 20)) = (t11 + 0x2);
                FUN_0c0c465c((unsigned short)(*(short *)((((t11 + 0x2) - 2) + 0x0))));
                t6 = (t6 + 0xC);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x6);
                FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                t16 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t16 - 1);
                if ((t16 - 1) == 0) {
                    break;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            *(unsigned int *)(((int)stk + 12)) = 0xC100D2C;
            *(unsigned int *)(((int)stk + 8)) = 0xC100D38;
            t17 = (a4 + 0x3C);
            for (;;) {
                t18 = FUN_0c0e1830(0xC079718, 0x68);
                FUN_0c0e19d0(t18);
                t20 = t17;
                t17 = (t17 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t18 + 0x40)) = *(struct mv3 *)(t20); }
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x6);
                FUN_0c0e6248();
                t23 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 20)) = (t23 + 0x2);
                *(unsigned short *)((t18 + 0x64)) = (*(short *)((((t23 + 0x2) - 2) + 0x0)));
                *(unsigned int *)((t18 + 0x38)) = (((FUN_0c0da2e0()) & 0x1F) + 0x78);
                t27 = nlLength((t18 + 0x40), (*(int *)(((int)stk + 12))));
                t29 = nlLength((t18 + 0x40), (*(int *)(((int)stk + 8))));
                if (t29 > t27) {
                    t32 = (*(int *)(((int)stk + 12)));
                    u33 = t27;
                } else {
                    t32 = (*(int *)(((int)stk + 8)));
                    u33 = t29;
                }
                nlSubVector3op((((int)stk + 4) + 0x14), (t18 + 0x40), t32);
                nlUnitMatrix();
                if (u33 > 60.0f) {
                    t37 = FUN_0c0da2e0();
                    nlRotateAX((0xFFFFF000 + (t37 & 0x1FFF)));
                    *(float *)((t18 + 0x50)) = ((-((float)(FUN_0c0da2e0()) * 6.10370189e-05f)) + -1.5f);
                    FUN_0c0db470((t18 + 0x4C), (t18 + 0x4C));
                    *(unsigned int *)((t18 + 0x34)) = (((FUN_0c0da2e0()) & 0x3F) + 0x1E);
                    *(unsigned int *)((t18 + 0x3C)) = 0x1;
                } else {
                    t42 = FUN_0c0da2e0();
                    nlRotateAY((0xFFFFF800 + (t42 & 0xFFF)));
                    t44 = FUN_0c0da2e0();
                    nlRotateAX((0xFFFFF800 + (t44 & 0xFFF)));
                    u47 = 1.0f;
                    u47 = u47 + 0.000152592547f * (float)(FUN_0c0da2e0());
                    u48 = (1.5999999f - (u33 * 0.0166666657f));
                    nlScaleUnitVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), (u47 * u48));
                    FUN_0c0db470((((int)stk + 4) + 0x14), (t18 + 0x4C));
                    *(unsigned short *)(((0x5E + t18) + 0x0)) = (((FUN_0c0da2e0()) & 0x1FF) - 256);
                    *(unsigned short *)(((0x60 + t18) + 0x0)) = (((FUN_0c0da2e0()) & 0x1FF) - 256);
                    *(unsigned short *)(((0x62 + t18) + 0x0)) = (((FUN_0c0da2e0()) & 0x1FF) - 256);
                }
                t59 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t59 - 1);
                if ((t59 - 1) != 0) continue;
                break;
            }
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        }
    }
    t85 = (0x469C + a4);
    t86 = (*(int *)((a4 + 0x2544)));
    t87 = (0x3B80 + a4);
    t88 = (0x2548 + a4);
    for (;;) {
        FUN_0c0dcca0(t88);
        nlRotateAY((*(short *)((t87 + 0x2))));
        t92 = *(short *)((t85 + 0x0));
        t85 = (t85 + 0x2);
        FUN_0c0c465c((unsigned short)t92);
        t87 = (t87 + 0x6);
        t88 = (t88 + 0xC);
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        t86 = (t86 - 0x1);
        if (t86 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}
