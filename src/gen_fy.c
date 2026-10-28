/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0c46cc(int, int, int, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e27be(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c078846(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0be4d0(int a4, int a5, int a6, int a7);
int FUN_0c0be46c(int a4, int a5, int a6);

int FUN_0c078846(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t2;
    int t5;
    int t10;
    int t17;
    int t19;
    int t21;
    int t29;
    int t32;
    int t34;
    int t40;
    int t50;
    int t51;
    float u52;
    float u53;
    float u54;
    float u55;
    float u57;
    int t58;
    int t64;
    int t68;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F4;
    float F5;
    float F13;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    t0 = R8;
    *(int *)((int)stk + 12) = t0;
    *(float *)(((int)stk + 8)) = F15;
    t2 = ((*(int *)0xC23ED5C) & 6) == 0;
    *(unsigned int *)(((int)stk + 8)) = t0;
    *(float *)(((int)stk + 4)) = F15;
    R11 = (R4);
    if (t2) goto L_C078868;
    FUN_0c0e19f2(R4, R5, R6, R7);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    L_C078868:;
    t5 = *(int *)((R11 + 0x30));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (t5);
    R12 = (0x0);
    if ((t5 == 0)) goto L_C0788B0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if ((R0 == 1)) goto L_C0788CE;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    L_C07898A:;
    return R0;
    L_C0788CE:;
    t10 = *(int *)((R11 + 0x34));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R13 = (t10);
    R14 = (0xC0FFF60);
    R4 = (0xC247F54);
    R5 = (0x10);
    R6 = ((R11 + 0x38));
    L_C0788DA:;
    t17 = (*(short *)((R4 + 0x0))) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t17) goto L_C0788EA;
    t19 = (*(short *)((R4 + 0x2))) != 3;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t19) goto L_C0788EA;
    *(unsigned int *)((R6 + 0x0)) = R4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R6 = ((R6 + 0x4));
    L_C0788EA:;
    t21 = (R5 - 0x1) != 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R4 = ((R4 + 0xB0));
    R5 = ((R5 - 0x1));
    if (t21) goto L_C0788DA;
    *(unsigned int *)((R6 + 0x0)) = R12;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R10 = (0x1);
    R8 = (0xC0DC510);
    R9 = (0xC0DC4C0);
    F15 = (-100.0f);
    L_C078982:;
    t29 = (*(float *)((R14 + 0x4))) > F15;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (0x4);
    if (t29) goto L_C078900;
    goto L_C07898A;
    L_C078900:;
    t32 = (*(short *)((R14 + 0x10))) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t32) goto L_C078912;
    t34 = (*(int *)0xC23EDB0) != 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t34) goto L_C078912;
    *(unsigned int *)((R13 + 0x0)) = R10;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    L_C07894C:;
    nlPushMatrix(0x0);
    FUN_0c0dcca0(R14);
    nlRotateAY((*(short *)((R14 + 0xE))));
    t40 = (*(int *)((R13 + 0x0))) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t40) goto L_C078972;
    FUN_0c0c465c(((*(short *)((R14 + 0x12))) + 0x1));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    L_C07897A:;
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R13 = ((R13 + 0x4));
    R14 = ((R14 + 0x18));
    goto L_C078982;
    L_C078972:;
    FUN_0c0c46cc((*(short *)((R14 + 0x12))), R5, R6, F4, F5);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    goto L_C07897A;
    L_C078912:;
    *(unsigned int *)((R13 + 0x0)) = R10;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R4 = ((R11 + 0x38));
    L_C078946:;
    t50 = (*(int *)((R4 + 0x0))) != 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t50) goto L_C07891A;
    goto L_C07894C;
    L_C07891A:;
    t51 = *(int *)((R4 + 0x0));
    u52 = *(float *)((R14 + 0x8));
    u53 = *(float *)(((t51 + 0x34) + 0x8));
    u54 = *(float *)((R14 + 0x0));
    u55 = *(float *)(((t51 + 0x34) + 0x0));
    u57 = ((u53 - u52) * (u53 - u52));
    u57 = u57 + (u55 - u54) * (u55 - u54);
    t58 = !((*(float *)((t51 + 0x98))) > u57);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R5 = (t51);
    R6 = ((t51 + 0x34));
    F4 = (u57);
    F5 = ((u55 - u54));
    if (t58) goto L_C078944;
    *(unsigned int *)((R13 + 0x0)) = R12;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    goto L_C07894C;
    L_C078944:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R4 = ((R4 + 0x4));
    goto L_C078946;
    L_C0788B0:;
    t64 = FUN_0c0e27be(0x44);
    *(unsigned int *)((R11 + 0x34)) = t64;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R4 = (t64);
    R5 = (R12);
    R6 = (0x11);
    L_C0788BE:;
    *(unsigned int *)((R4 + 0x0)) = R12;
    t68 = (unsigned int)(R5 + 0x1) < (unsigned int)R6;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x1));
    if (t68) goto L_C0788BE;
    *(unsigned int *)((R11 + 0x30)) = ((*(int *)((R11 + 0x30))) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    goto L_C0788CE;
}

int FUN_0c0be4d0(int a4, int a5, int a6, int a7)
{
    int t19;
    int t20;
    int t21;
    int t5;
    int t6;
    float u7;
    int t8;
    int t9;
    int t24;
    int t25;
    int stk[3];

    if ((*(int *)((a5 + 0x4))) != 0) {
        t19 = a5;
        t20 = a6;
        t21 = a7;
        if ((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) != 0) {
            t5 = (*(int *)((a5 + 0x0)));
            t6 = (*(int *)((a5 + 0x4)));
            for (;;) {
                u7 = *(float *)((t5 + 0x4));
                t8 = *(int *)((t5 + 0x0));
                t9 = t5;
                t5 = (t5 + 0x24);
                *(float *)((t8 + 0x0)) = u7;
                *(float *)((t8 + 0x4)) = (*(float *)((t9 + 0x8)));
                *(float *)((t8 + 0x8)) = (*(float *)((t9 + 0xC)));
                *(float *)((t8 + 0xC)) = (*(float *)((t9 + 0x10)));
                *(float *)((t8 + 0x10)) = (*(float *)((t9 + 0x14)));
                *(float *)((t8 + 0x14)) = (*(float *)((t9 + 0x18)));
                *(float *)((t8 + 0x18)) = (*(float *)((t9 + 0x1C)));
                t6 = (t6 - 0x1);
                *(float *)((t8 + 0x1C)) = (*(float *)((t9 + 0x20)));
                if (t6 == 0) {
                    break;
                }
            }
            t19 = t8;
            t20 = t5;
            t21 = t6;
        }
        t24 = FUN_0c0e2a4c((*(int *)((a5 + 0x0))), t19, t20, t21, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        *(unsigned int *)((a5 + 0x4)) = 0x0;
        t25 = t24;
    }
    return t25;
}

int FUN_0c0be46c(int a4, int a5, int a6)
{
    int t16;
    int t5;
    int t6;
    int t7;
    int t21;

    if ((*(int *)((a5 + 0x4))) != 0) {
        t16 = 0xC2623A0;
        if ((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) != 0) {
            t5 = (*(int *)((a5 + 0x0)));
            t6 = (*(int *)((a5 + 0x4)));
            for (;;) {
                t7 = *(int *)((t5 + 0x0));
                *(float *)((t7 + 0x0)) = (*(float *)((t5 + 0x4)));
                *(float *)((t7 + 0x4)) = (*(float *)((t5 + 0x8)));
                *(float *)((t7 + 0x8)) = (*(float *)((t5 + 0xC)));
                *(float *)((t7 + 0xC)) = (*(float *)((t5 + 0x10)));
                *(float *)((t7 + 0x10)) = (*(float *)((t5 + 0x14)));
                *(float *)((t7 + 0x14)) = (*(float *)((t5 + 0x18)));
                *(float *)((t7 + 0x18)) = (*(float *)((t5 + 0x1C)));
                *(float *)((t7 + 0x1C)) = (*(float *)((t5 + 0x20)));
                t6 = (t6 - 0x1);
                t5 = (t5 + 0x24);
                if (t6 == 0) {
                    break;
                }
            }
            t16 = 0x1C;
        }
        t21 = t16;
    }
    return t21;
}
