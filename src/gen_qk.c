/* Straight-line functions with calls and guards (batch gen_qk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c0be6ee();
int FUN_0c0c475c(int, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c087290(int a4);
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c087290(int a4)
{
    int stk[22];
    register int t0;
    register int t63;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register float u17;
    register float u18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register float t26;
    register int t27;
    register int t28;
    register int t29;
    register float t30;
    register int t31;
    register int t34;
    register float u37;
    register int t38;
    register float u40;
    register int t41;
    register int t43;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);

    t0 = *(int *)0xC23ED50;
    t63 = t0;
    if (t0 == 64) {
    } else {
        nlPushMatrix(0x0);
        t3 = *(int *)((a4 + 0x3C));
        t4 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
        t5 = (((struct o50_int *)(a4))->v);
        R1016 = t5;
        t6 = (((struct o4C_int *)(a4))->v);
        R1036 = (((((struct o40_int *)(a4))->v)) + (t5 << 2));
        R1028 = (((((struct o44_int *)(a4))->v)) + (t5 << 2));
        R1032 = ((t5 << 2) + ((((struct o48_int *)(a4))->v)));
        FUN_0c0de3c0(0x4, 0x1);
        R1008 = (((int)stk + 8) + 0x20);
        R1012 = ((((int)stk + 8) + 0x20) + 0x18);
        t11 = (t6 + (t5 << 2));
        t12 = t3;
        for (;;) {
            R1020 = (((int)stk + 8) + 0x20);
            R1024 = 0xC10A984;
            t13 = R1032;
            R1032 = (t13 - 4);
            R1004 = (t13 - 4);
            t14 = FUN_0c0da2e0();
            t15 = *(int *)(((t13 - 4) + 0x0));
            *(unsigned int *)(((t13 - 4) + 0x0)) = (t15 + ((t14 & 0x1FF) + 0x400));
            t11 = (t11 - 4);
            u17 = 0.899999976f;
            u17 = u17 + 0.099999994f * (FUN_0c0da410((t15 + ((t14 & 0x1FF) + 0x400))));
            u18 = (((struct oC_float *)(t12))->v);
            t19 = *(int *)((t11 + 0x0));
            t20 = 0x4;
            for (;;) {
                t21 = R1020;
                R1020 = (t21 + 0xC);
                t22 = R1024;
                R1024 = (t22 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((t21 + 0xC) - 12)) = *(struct mv3 *)(((t22 + 0xC) - 12)); }
                t20 = (t20 - 0x1);
                if (t20 == 0) {
                    break;
                }
            }
            t23 = R1036;
            R1036 = (t23 - 4);
            R1004 = (t23 - 4);
            t24 = FUN_0c0da2e0();
            t25 = *(int *)(((t23 - 4) + 0x0));
            *(unsigned int *)(((t23 - 4) + 0x0)) = (t25 + ((t24 & 0xFFF) + 0x200));
            t26 = FUN_0c0da410((t25 + ((t24 & 0xFFF) + 0x200)));
            t27 = R1028;
            R1028 = (t27 - 4);
            R1004 = (t27 - 4);
            t28 = FUN_0c0da2e0();
            t29 = *(int *)(((t27 - 4) + 0x0));
            *(unsigned int *)(((t27 - 4) + 0x0)) = (t29 + ((unsigned char)t28 + 0x100));
            t30 = FUN_0c0da410((t29 + ((unsigned char)t28 + 0x100)));
            t31 = R1008;
            *(float *)((t31 + 0x0)) = ((*(float *)((t31 + 0x0))) + ((t30 * 1.0f)));
            t34 = R1012;
            *(float *)((t34 + 0x0)) = ((*(float *)((t34 + 0x0))) + ((t30 * 1.0f)));
            u37 = (t26 * 0.099999994f);
            t38 = R1008;
            u40 = (t26 * 0.099999994f);
            (((struct o4_float *)(t38))->v) = (((((struct o4_float *)(t38))->v)) * (u37 + 0.899999976f));
            t41 = R1012;
            (((struct o4_float *)(t41))->v) = (((((struct o4_float *)(t41))->v)) * (0.899999976f - u40));
            t43 = ((int (*)(int, int, float))(FUN_0c0be6ee))(((short)((unsigned int)t19 >> 16) + 0x1B8), (((int)stk + 8) + 0x20), (t30 * 1.0f));
            FUN_0c0dbda0((0x2AC + t4));
            FUN_0c0dcca0(t12);
            nlRotateAY(((((struct o3CE_short *)(t4))->v)));
            nlRotateAX(((((struct o3CC_short *)(t4))->v)));
            nlScale((u18 * u17), (u18 * u17), (u18 * u17));
            FUN_0c0de000((u18 * u17));
            FUN_0c0c475c(((short)((unsigned int)t19 >> 16) + 0x1B8), (*(float *)0xC087580));
            t12 = (t12 + 0x10);
            *(unsigned int *)((t11 + 0x0)) = ((((FUN_0c0da2e0()) + (*(int *)((t11 + 0x0)))) + 0x4000) & 0x1FFFFF);
            t56 = R1016;
            R1016 = (t56 - 1);
            if ((t56 - 1) != 0) continue;
            break;
        }
        t57 = 0x1B8;
        t58 = 0x20;
        for (;;) {
            t59 = t57;
            t57 = (t57 + 0x1);
            t60 = ((int (*)(int, int))(FUN_0c0be6ee))(t59, 0xC10A984);
            t58 = (t58 - 0x1);
            if (t58 == 0) {
                break;
            }
        }
        FUN_0c0de3c0(0x4, 0x5);
        t63 = (nlPopMatrix(0x1));
    }
    return t63;
}
