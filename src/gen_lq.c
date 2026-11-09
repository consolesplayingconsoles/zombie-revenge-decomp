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
struct o2544_int { char p[0x2544]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };


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
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    nlPushMatrix(0x0);
    R1004 = (0x1674 + a4);
    R1020 = (0x2190 + a4);
    R1016 = (*(int *)((a4 + 0x38)));
    if ((*(int *)((a4 + 0x30))) != 0) {
    } else {
        if (((*(int *)0xC23ED88) & 32) == 0) {
            t6 = (a4 + 0x3C);
            for (;;) {
                FUN_0c0dcca0(t6);
                nlRotateAY((*(short *)(((R1004) + 0x2))));
                t11 = R1020;
                R1020 = (t11 + 0x2);
                FUN_0c0c465c((unsigned short)(*(short *)((((t11 + 0x2) - 2) + 0x0))));
                t6 = (t6 + 0xC);
                R1004 = ((R1004) + 0x6);
                FUN_0c0db800(0x0, 0x0, 0x0, 0x0, R1004);
                t16 = R1016;
                R1016 = (t16 - 1);
                if ((t16 - 1) == 0) {
                    break;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            R1012 = 0xC100D2C;
            R1008 = 0xC100D38;
            t17 = (a4 + 0x3C);
            for (;;) {
                t18 = FUN_0c0e1830(0xC079718, 0x68);
                FUN_0c0e19d0(t18);
                t20 = t17;
                t17 = (t17 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t18 + 0x40)) = *(struct mv3 *)(t20); }
                R1004 = ((R1004) + 0x6);
                { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t18 + 0x58)) = *(struct mvb6 *)(((R1004) - 0x6)); }
                t23 = R1020;
                R1020 = (t23 + 0x2);
                (((struct o64_ushort *)(t18))->v) = (*(short *)((((t23 + 0x2) - 2) + 0x0)));
                *(unsigned int *)((t18 + 0x38)) = (((FUN_0c0da2e0()) & 0x1F) + 0x78);
                t27 = nlLength((t18 + 0x40), (R1012));
                t29 = nlLength((t18 + 0x40), (R1008));
                if (t29 > t27) {
                    t32 = (R1012);
                    u33 = t27;
                } else {
                    t32 = (R1008);
                    u33 = t29;
                }
                nlSubVector3op((((int)stk + 4) + 0x14), (t18 + 0x40), t32);
                nlUnitMatrix();
                if (u33 > 60.0f) {
                    t37 = FUN_0c0da2e0();
                    nlRotateAX((0xFFFFF000 + (t37 & 0x1FFF)));
                    (((struct o50_float *)(t18))->v) = ((-((float)(FUN_0c0da2e0()) * 6.10370189e-05f)) + -1.5f);
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
                    (((struct o5E_ushort *)(t18))->v) = (((FUN_0c0da2e0()) & 0x1FF) - 256);
                    (((struct o60_ushort *)(t18))->v) = (((FUN_0c0da2e0()) & 0x1FF) - 256);
                    (((struct o62_ushort *)(t18))->v) = (((FUN_0c0da2e0()) & 0x1FF) - 256);
                }
                t59 = R1016;
                R1016 = (t59 - 1);
                if ((t59 - 1) != 0) continue;
                break;
            }
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, R1004);
        }
    }
    t85 = (0x469C + a4);
    t86 = ((((struct o2544_int *)(a4))->v));
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
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, R1004);
        t86 = (t86 - 0x1);
        if (t86 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}
