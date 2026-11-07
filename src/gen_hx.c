/* Straight-line functions with calls and guards (batch gen_hx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01843e(int, int, int, int);
int FUN_0c01cdc2(int);
int FUN_0c053c64(int, int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0847a2(int, float);
int FUN_0c0847b8(int);
int FUN_0c0847de(int);
int FUN_0c0847f4(float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c086b70(void);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0ba1d8(int);
int FUN_0c0ba278(int);
extern int FUN_0c0be6ee();
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e262a(int);
int FUN_0c0e2794(int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c01913c(int a4, int a5, int a6, int a7);
int FUN_0c087290(int a4);
int FUN_0c0ba31a(int a4, int a5, int a6, int a7);
int FUN_0c0b86cc(void);
int FUN_0c0887bc(int a4);
void FUN_0c076cc0(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c07d72e(int a4, int a5, int a6, int a7);
int FUN_0c05d95c(int a4, int a5);
float FUN_0c0901bc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c07c21c(int a4, int a5, int a6, int a7);
int FUN_0c05ac0c(int a4, int a5, int a6);




int FUN_0c0b86cc(void)
{
    int stk[6];
    register int t19;
    register int t13;
    register int t14;
    register int t23;
    register int t24;
    register int t25;
    register int t30;
    register int t40;
    register int t35;
    register int t34;
    register int t51;
    register int t53;
    register int t56;
    register int t60;
    register int t64;
    register int t20;

    *(unsigned int *)0xC23ED6C = 0x1;
    *(unsigned int *)0xC23ED70 = 0x0;
    *(unsigned int *)0xC23EDE4 = 0x0;
    *(unsigned int *)0xC23EDE0 = 0x0;
    *(unsigned int *)0xC23ECFC = (((((*(int *)0xC23ED50) << 2) << 2) << 1) + 0xC2087EC);
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23A190 = 0x0;
    *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
    t19 = 0xC23A18C;
    if ((*(int *)0xC23ED44) != 0) {
        FUN_0c086b70();
        *(unsigned int *)0xC23ED58 = (*(int *)0xC23ED50);
        *(unsigned int *)0xC23A18C = 0x1;
        if ((*(int *)0xC23ED48) == 31) {
            *(unsigned int *)0xC23ED50 = (*(int *)0xC23ED54);
            *(unsigned int *)0xC23ED54 = 0x0;
        } else {
            *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
        }
        *(unsigned int *)0xC23A190 = 0x0;
        *(unsigned int *)0xC23ED44 = 0x0;
        *(unsigned int *)0xC23ED48 = 0x0;
        t13 = *(int *)0xC23ED50;
        *(unsigned int *)0xC23ECFC = ((((t13 << 2) << 2) << 1) + 0xC2087EC);
        t14 = *(short *)((0x4 + ((((t13 << 2) << 2) << 1) + 0xC2087EC)));
        *(unsigned int *)0xC23ED00 = (0xC2087EC + ((((unsigned char)t14 << 2) << 2) << 1));
        t19 = (0xC2087EC + ((((unsigned char)t14 << 2) << 2) << 1));
    } else {
        t20 = 0xC23EDE0;
    }
    t23 = *(int *)(((*(int *)0xC23ECFC) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = t23;
    t24 = ((int (*)(int, int))(t23))(t19, t20);
    *(int *)((int)stk + 20) = 0xC23ECFC;
    t25 = *(int *)0xC2498F4;
    if ((t25 & 8) == 0) {
        return t25;
    }
    t30 = *(int *)0xC23ED50;
    if (t30 != 9) {
        t40 = t30;
        if (t30 == 11) {
        } else {
            t35 = t30;
            if (t30 == 12) {
            } else {
                t34 = FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                *(unsigned int *)0xC23A260 = 0x3;
                t35 = t34;
            }
            t40 = t35;
        }
        return t40;
    }
    if ((*(int *)0xC2041EC) != 0) {
        if ((*(int *)0xC2041F0) != 0) {
            t51 = 0x828A9;
            if ((*(int *)0xC522D6C) == 4) {
                t51 = 0x2A;
            }
            t53 = FUN_0c0cc3f8(t51, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
            if ((*(int *)0xC204994) != 0) {
                t56 = *(short *)0xC2497D8;
                if (((unsigned short)t56 & 8) == 0) {
                    if ((int)(*(int *)0xC23EABC) > 0) {
                        *(unsigned int *)0xC23A180 = 0x2;
                        *(unsigned int *)0xC23ED50 = 0x1;
                        *(unsigned int *)0xC23ED44 = 0x0;
                        *(unsigned int *)0xC23ED48 = 0x0;
                        *(unsigned int *)0xC23A184 = 0x0;
                        *(unsigned int *)0xC23A190 = 0x0;
                        *(unsigned int *)0xC23A18C = 0x0;
                        *(unsigned int *)0xC249890 = 0x0;
                        *(unsigned int *)0xC2475B0 = 0x0;
                        return 0xC23A180;
                    }
                    return (unsigned short)t56;
                }
                return (unsigned short)t56;
            }
            if ((int)(*(int *)0xC23EABC) > 0) {
                *(unsigned int *)0xC23A180 = 0x2;
                *(unsigned int *)0xC23ED50 = 0x1;
                *(unsigned int *)0xC23ED44 = 0x0;
                *(unsigned int *)0xC23ED48 = 0x0;
                *(unsigned int *)0xC23A184 = 0x0;
                *(unsigned int *)0xC23A190 = 0x0;
                *(unsigned int *)0xC23A18C = 0x0;
                *(unsigned int *)0xC249890 = 0x0;
                *(unsigned int *)0xC2475B0 = 0x0;
                return 0xC23A180;
            }
            return t53;
        }
        t60 = 0x28A9;
        if ((*(int *)0xC522D6C) == 4) {
            t60 = 0x3A;
        }
        return (FUN_0c0cc3f8(t60, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
    }
    t64 = 0x28A9;
    if ((*(int *)0xC522D6C) == 4) {
        t64 = 0x3A;
    }
    return (FUN_0c0cc3f8(t64, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
}

int FUN_0c0887bc(int a4)
{
    int stk[18];
    register int t0;
    register int t45;
    register int t2;
    register int t6;
    register int t8;
    register int t9;
    register float u11;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t27;
    register int t29;
    register int t32;
    register int t35;
    register int t41;
    register int t52;

    t0 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t0 - 1);
    t45 = (t0 - 1);
    if (((t0 - 1) & 3) != 0) {
        t52 = a4;
    } else {
        nlPushMatrix(0x0);
        t2 = *(int *)((a4 + 0x30));
        *(unsigned int *)(((int)stk + 20)) = (*(short *)((t2 + 0x222)));
        *(unsigned int *)(((int)stk + 12)) = (*(short *)((t2 + 0x220)));
        *(unsigned int *)(((int)stk + 8)) = 0xC10AA94;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x40)));
        for (;;) {
            t6 = FUN_0c0e1830(0xC0889F4, 0x64);
            FUN_0c0e19d0(t6);
            t8 = *(int *)((t2 + 0xBC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)(((((((t8 << 1) + t8) << 2) << 2) << 2) + 0xC23F274)); }
            *(float *)((t6 + 0x50)) = 3.0f;
            t9 = FUN_0c0da2e0();
            u11 = 1.0f;
            u11 = u11 + 0.5f * (FUN_0c0d9e90((0x1000 + (t9 & 0x1FFF))));
            *(float *)((t6 + 0x58)) = u11;
            *(unsigned int *)((t6 + 0x60)) = 0x1F;
            *(unsigned short *)((t6 + 0x5E)) = 0x1999;
            *(unsigned int *)(((0x48 + t6) + 0x0)) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
            *(float *)((t6 + 0x44)) = (*(float *)((a4 + 0x34)));
            *(float *)((t6 + 0x4C)) = 1.0f;
            nlUnitMatrix();
            FUN_0c0dcca0((t6 + 0x30));
            t16 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t16 + 0x2);
            t17 = *(short *)((((t16 + 0x2) - 2) + 0x0));
            t18 = *(int *)(((int)stk + 20));
            *(int *)((int)stk + 4) = (t17 + t18);
            t19 = FUN_0c0da2e0();
            nlRotateAY((((t19 & 0xFFF) + (t17 + t18)) - 2048));
            t21 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t21 + 0x2);
            t22 = *(short *)((((t21 + 0x2) - 2) + 0x0));
            t23 = *(int *)(((int)stk + 12));
            *(int *)((int)stk + 4) = (t22 + t23);
            t24 = FUN_0c0da2e0();
            nlRotateAX((((t24 & 0xFFF) + (t22 + t23)) - 2048));
            FUN_0c0db4d0((t6 + 0x3C), (t6 + 0x3C));
            t27 = FUN_0c0da2e0();
            *(float *)((t6 + 0x30)) = ((FUN_0c0d9e90(t27)) * (1.0f + 1.0f));
            t29 = FUN_0c0da2e0();
            *(float *)((t6 + 0x34)) = ((FUN_0c0da410(t29)) * (1.0f + 1.0f));
            *(float *)((t6 + 0x38)) = 0.0f;
            FUN_0c0db470((t6 + 0x30), (t6 + 0x30));
            t32 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t32 - 1);
            if (((t32 - 1) + 0x1) != 0) continue;
            break;
        }
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.000999999931f);
        nlPopMatrix(0x1);
        t35 = *(int *)((a4 + 0x3C));
        t41 = t35;
        if ((t35 & 31) == 0) {
            if ((int)(*(int *)((a4 + 0x40))) < (int)0x7) {
                *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
            }
            t41 = 0x40;
        }
        t45 = t41;
    }
    if ((int)(*(int *)((a4 + 0x3C))) <= 0) {
        return FUN_0c0e19f2(t52);
    }
    return t45;
}




float FUN_0c0901bc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register float F0;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_2 = a4;
    v0_0 = a5;
    w0_1 = f4;
    v0_1 = (0xC0E19F2);
    v0_3 = (0xC246074);
    v0_1 = (v0_2);
    if (((*(short *)((((((*(int *)((v0_2 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 0)) goto L_C0901E8;
    v0_4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(v0_2, v0_0, a6, a7);
    L_C0901E8:;
    if (((unsigned short)(*(short *)((((((*(int *)((v0_1 + 0x34))) << 2) << 2) + (0x80 + v0_3)) + 0x4))) == 2)) goto L_C090216;
    v0_3 = *(int *)((((((*(int *)((v0_1 + 0x34))) << 2) << 2) + (0x80 + v0_3)) + 0xC));
    v0_5 = (v0_3);
    if (!((v0_3 != 3))) goto L_C0903CA;
    v0_2 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    goto L_C090216;
    L_C0903CA:;
    return F0;
    L_C090216:;
    v0_3 = *(int *)(((((*(int *)((v0_1 + 0x30))) << 2) + 0xC247030) + 0x0));
    v0_4 = (0xC246FF0);
    v0_2 = (v0_3);
    if (((int)v0_3 < (int)0x2)) goto L_C090230;
    if (((int)v0_2 < (int)0x5)) goto L_C090234;
    L_C090230:;
    v0_3 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C090234:;
    v0_5 = *(int *)(((((*(int *)((v0_1 + 0x30))) << 2) + v0_4) + 0x0));
    v0_3 = (v0_5);
    if (((*(int *)((v0_5 + 0xD8))) != 0)) goto L_C09024E;
    if (((*(int *)((v0_3 + 0x4D0))) == 0)) goto L_C090252;
    L_C09024E:;
    v0_2 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C090252:;
    v0_6 = *(int *)((v0_1 + 0x48));
    v0_5 = (v0_6);
    v0_2 = (0x9);
    w0_0 = (0.0f);
    if ((v0_6 == 0)) goto L_C090276;
    if ((v0_5 == 1)) goto L_C090290;
    if ((v0_5 == 2)) goto L_C0902EC;
    if ((v0_5 == 3)) goto L_C09030A;
    if ((v0_5 != 4)) goto L_C090272;
    v0_4 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)v0_2)) goto L_C0903B0;
    *(float *)((v0_1 + 0x40)) = w0_0;
    *(float *)((v0_1 + 0x3C)) = w0_0;
    *(float *)((v0_1 + 0x38)) = w0_0;
    L_C0903A8:;
    *(unsigned int *)((v0_1 + 0x48)) = ((*(int *)((v0_1 + 0x48))) + 0x1);
    L_C0903B0:;
    nlAddVector((v0_3 + 0x48), (v0_1 + 0x38));
    v0_5 = (0x48);
    if (((int)(*(int *)((v0_1 + 0x48))) <= (int)0x4)) goto L_C0903CA;
    v0_5 = ((((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0)));
    goto L_C0903CA;
    L_C090272:;
    goto L_C0903B0;
    L_C09030A:;
    v0_5 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) <= (int)0x2D)) goto L_C0903B0;
    if (((*(int *)(((v0_4 + 0x40) + ((*(int *)((v0_3 + 0x510))) << 2)))) == 4)) goto L_C09032C;
    v0_5 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C09032C:;
    v0_4 = *(int *)(((((*(int *)((v0_3 + 0x510))) << 2) + v0_4) + 0x0));
    *(float *)(((int)stk + 4)) = ((*(float *)((v0_4 + 0x30))) - (*(float *)((v0_3 + 0x30))));
    *(float *)(((int)stk + 12)) = ((*(float *)((v0_4 + 0x38))) - (*(float *)((v0_3 + 0x38))));
    *(float *)(((int)stk + 8)) = w0_0;
    w0_2 = FUN_0c0dcea0(((int)stk + 4));
    w0_3 = *(float *)0xC090428;
    w0_4 = *(float *)0xC09042C;
    w0_5 = ((w0_2 + w0_3));
    w0_0 = ((w0_2 + w0_3));
    w0_1 = (w0_4);
    if ((!((w0_2 + w0_3) > w0_4))) goto L_C09036C;
    w0_0 = (w0_1);
    L_C09036C:;
    FUN_0c0dce80((v0_1 + 0x38), ((int)stk + 4), ((w0_0 / w0_5) / (*(float *)0xC090430)));
    *(float *)((v0_1 + 0x3C)) = (*(float *)0xC090438);
    L_C090388:;
    *(unsigned int *)((v0_1 + 0x44)) = 0x0;
    goto L_C0903A8;
    L_C0902EC:;
    v0_4 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)v0_2)) goto L_C0903B0;
    *(float *)((v0_1 + 0x38)) = w0_0;
    *(float *)((v0_1 + 0x40)) = w0_0;
    w0_0 = ((*(float *)0xC090420));
    L_C090304:;
    *(float *)((v0_1 + 0x3C)) = w0_0;
    goto L_C090388;
    L_C090290:;
    v0_4 = *(int *)((v0_1 + 0x44));
    *(unsigned int *)((v0_1 + 0x44)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) > (int)0x17)) goto L_C0902A2;
    goto L_C0903B0;
    L_C0902A2:;
    v0_4 = *(short *)((v0_3 + 0x6E));
    *(float *)((v0_1 + 0x38)) = ((FUN_0c0da410(v0_4)) * 0.599999964f);
    *(float *)((v0_1 + 0x40)) = ((FUN_0c0d9e90(v0_4)) * 0.599999964f);
    w0_0 = (2.16666651f);
    goto L_C090304;
    L_C090276:;
    *(float *)((v0_1 + 0x38)) = w0_0;
    *(float *)((v0_1 + 0x3C)) = w0_0;
    *(float *)((v0_1 + 0x40)) = w0_0;
    *(unsigned int *)((v0_1 + 0x44)) = 0x0;
    *(unsigned int *)((v0_1 + 0x48)) = ((*(int *)((v0_1 + 0x48))) + 0x1);
    goto L_C090290;
}


int FUN_0c05ac0c(int a4, int a5, int a6)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t56;
    register int t59;
    register int t67;
    register int t68;
    register int t103;
    register int t120;
    register int t116;
    register int t33;
    register int t81;
    register int t82;
    register int t121;
    register int t122;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    if ((*(int *)((a4 + 0xD8))) == 0) {
        t116 = a4;
    } else {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
                FUN_0c0cc3f8((*(int *)((0xC1FFB70 + ((*(int *)((a4 + 0x1F8))) << 2)))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                if ((*(int *)((0xC1FFB70 + ((*(int *)((a4 + 0x1F8))) << 2)))) != 0) {
                    FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x0);
                }
            } else {
                if ((int)(*(int *)(((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0))) + 0xC0))) < (int)0x29) {
                    FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFBE4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    t33 = 0x1;
                } else {
                    FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFC58))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    t33 = 0x2;
                }
                FUN_0c0cc054((*(int *)((a4 + 0x1C4))), t33);
            }
            FUN_0c054c8a(a4);
            if ((*(int *)((a4 + 0x23C))) != 0) {
                FUN_0c0909fc(a4);
            }
        }
        if ((*(int *)((a4 + 0xD8))) == 4) {
            FUN_0c0cc3f8(0x82DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x3);
        } else {
            if ((*(int *)((a4 + 0xD8))) == 2) {
                t56 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0xBC))) << 2)));
                t59 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0x1C4))) << 2)));
                if (((*(int *)0xC23A1A8) & 0x100) != 0) {
                    FUN_0c053c64(t59, 0x0);
                }
                t67 = *(short *)((t56 + 0x6E));
                t68 = *(short *)((t59 + 0x6E));
                if (16384.0f > _builtin_fabsf((float)(short)(t68 - t67))) {
                    if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
                        FUN_0c0cc3f8((*(int *)((0xC1FFB70 + ((*(int *)((a4 + 0x1F8))) << 2)))), t67, (t68 - t67), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x4);
                    } else {
                        if ((int)(*(int *)((t56 + 0xC0))) < (int)0x29) {
                            t81 = 0xC1FFBE4;
                            t82 = ((*(int *)((a4 + 0x1F8))) << 2);
                        } else {
                            t81 = 0xC1FFC58;
                            t82 = ((*(int *)((a4 + 0x1F8))) << 2);
                        }
                        FUN_0c0cc3f8((*(int *)((t82 + t81))), t67, (t68 - t67), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    }
                    FUN_0c0909fc(a4);
                } else {
                    FUN_0c090f70(a4);
                }
            }
        }
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t103 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t103 << 2) << 2) << 1) + 0xC247550)) = ((*(int *)(((((t103 << 2) << 2) << 1) + 0xC247550))) + 0x1);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    }
    t120 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t120 - 1);
    if (((int)(t120 - 1) >= 0) && (t121 = *(int *)((a4 + 0x1C)), t122 = *(int *)((t121 + 0x20C)), (t122 & 0xC1800) == 0)) {
    } else {
        FUN_0c0e19f2(t116);
    }
    return FUN_0c01cdc2(a4);
}
