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

    t0 = *(int *)0xC23ED50;
    t63 = t0;
    if (t0 == 64) {
    } else {
        nlPushMatrix(0x0);
        t3 = *(int *)((a4 + 0x3C));
        t4 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
        t5 = *(int *)((a4 + 0x50));
        *(unsigned int *)(((int)stk + 16)) = t5;
        t6 = *(int *)((a4 + 0x4C));
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)((a4 + 0x40))) + (t5 << 2));
        *(unsigned int *)(((int)stk + 28)) = ((*(int *)((a4 + 0x44))) + (t5 << 2));
        *(unsigned int *)(((int)stk + 32)) = ((t5 << 2) + (*(int *)((a4 + 0x48))));
        FUN_0c0de3c0(0x4, 0x1);
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 8) + 0x20);
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 8) + 0x20) + 0x18);
        t11 = (t6 + (t5 << 2));
        t12 = t3;
        for (;;) {
            *(unsigned int *)(((int)stk + 20)) = (((int)stk + 8) + 0x20);
            *(unsigned int *)(((int)stk + 24)) = 0xC10A984;
            t13 = *(int *)(((int)stk + 32));
            *(unsigned int *)(((int)stk + 32)) = (t13 - 4);
            *(int *)((int)stk + 4) = (t13 - 4);
            t14 = FUN_0c0da2e0();
            t15 = *(int *)(((t13 - 4) + 0x0));
            *(unsigned int *)(((t13 - 4) + 0x0)) = (t15 + ((t14 & 0x1FF) + 0x400));
            t11 = (t11 - 4);
            u17 = 0.899999976f;
            u17 = u17 + 0.099999994f * (FUN_0c0da410((t15 + ((t14 & 0x1FF) + 0x400))));
            u18 = *(float *)((t12 + 0xC));
            t19 = *(int *)((t11 + 0x0));
            t20 = 0x4;
            for (;;) {
                t21 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 20)) = (t21 + 0xC);
                t22 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 24)) = (t22 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((t21 + 0xC) - 12)) = *(struct mv3 *)(((t22 + 0xC) - 12)); }
                t20 = (t20 - 0x1);
                if (t20 == 0) {
                    break;
                }
            }
            t23 = *(int *)(((int)stk + 36));
            *(unsigned int *)(((int)stk + 36)) = (t23 - 4);
            *(int *)((int)stk + 4) = (t23 - 4);
            t24 = FUN_0c0da2e0();
            t25 = *(int *)(((t23 - 4) + 0x0));
            *(unsigned int *)(((t23 - 4) + 0x0)) = (t25 + ((t24 & 0xFFF) + 0x200));
            t26 = FUN_0c0da410((t25 + ((t24 & 0xFFF) + 0x200)));
            t27 = *(int *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 28)) = (t27 - 4);
            *(int *)((int)stk + 4) = (t27 - 4);
            t28 = FUN_0c0da2e0();
            t29 = *(int *)(((t27 - 4) + 0x0));
            *(unsigned int *)(((t27 - 4) + 0x0)) = (t29 + ((unsigned char)t28 + 0x100));
            t30 = FUN_0c0da410((t29 + ((unsigned char)t28 + 0x100)));
            t31 = *(int *)(((int)stk + 8));
            *(float *)((t31 + 0x0)) = ((*(float *)((t31 + 0x0))) + ((t30 * 1.0f)));
            t34 = *(int *)(((int)stk + 12));
            *(float *)((t34 + 0x0)) = ((*(float *)((t34 + 0x0))) + ((t30 * 1.0f)));
            u37 = (t26 * 0.099999994f);
            t38 = *(int *)(((int)stk + 8));
            u40 = (t26 * 0.099999994f);
            *(float *)((t38 + 0x4)) = ((*(float *)((t38 + 0x4))) * (u37 + 0.899999976f));
            t41 = *(int *)(((int)stk + 12));
            *(float *)((t41 + 0x4)) = ((*(float *)((t41 + 0x4))) * (0.899999976f - u40));
            t43 = ((int (*)(int, int, float))(FUN_0c0be6ee))(((short)((unsigned int)t19 >> 16) + 0x1B8), (((int)stk + 8) + 0x20), (t30 * 1.0f));
            FUN_0c0dbda0((0x2AC + t4));
            FUN_0c0dcca0(t12);
            nlRotateAY((*(short *)((t4 + 0x3CE))));
            nlRotateAX((*(short *)((t4 + 0x3CC))));
            nlScale((u18 * u17), (u18 * u17), (u18 * u17));
            FUN_0c0de000((u18 * u17));
            FUN_0c0c475c(((short)((unsigned int)t19 >> 16) + 0x1B8), (*(float *)0xC087580));
            t12 = (t12 + 0x10);
            *(unsigned int *)((t11 + 0x0)) = ((((FUN_0c0da2e0()) + (*(int *)((t11 + 0x0)))) + 0x4000) & 0x1FFFFF);
            t56 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t56 - 1);
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
