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
int FUN_0c0cc3f8(int, int, int, int);
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
int FUN_0c0e19f2(void);
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
struct o1C4_int { char p[0x1C4]; int v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o220_short { char p[0x220]; short v; };
struct o222_short { char p[0x222]; short v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o510_int { char p[0x510]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };






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

    t0 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t0 - 1);
    t45 = (t0 - 1);
    if (((t0 - 1) & 3) != 0) {
        t52 = a4;
    } else {
        nlPushMatrix(0x0);
        t2 = *(int *)((a4 + 0x30));
        R1020 = ((((struct o222_short *)(t2))->v));
        R1012 = ((((struct o220_short *)(t2))->v));
        R1008 = 0xC10AA94;
        R1016 = ((((struct o40_int *)(a4))->v));
        for (;;) {
            t6 = FUN_0c0e1830(0xC0889F4, 0x64);
            FUN_0c0e19d0(t6);
            t8 = (((struct oBC_int *)(t2))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)(((((((t8 << 1) + t8) << 2) << 2) << 2) + 0xC23F274)); }
            (((struct o50_float *)(t6))->v) = 3.0f;
            t9 = FUN_0c0da2e0();
            u11 = 1.0f;
            u11 = u11 + 0.5f * (FUN_0c0d9e90((0x1000 + (t9 & 0x1FFF))));
            (((struct o58_float *)(t6))->v) = u11;
            (((struct o60_uint *)(t6))->v) = 0x1F;
            (((struct o5E_ushort *)(t6))->v) = 0x1999;
            *(unsigned int *)(((0x48 + t6) + 0x0)) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
            (((struct o44_float *)(t6))->v) = ((((struct o34_float *)(a4))->v));
            (((struct o4C_float *)(t6))->v) = 1.0f;
            nlUnitMatrix();
            FUN_0c0dcca0((t6 + 0x30));
            t16 = R1008;
            R1008 = (t16 + 0x2);
            t17 = *(short *)((((t16 + 0x2) - 2) + 0x0));
            t18 = R1020;
            R1004 = (t17 + t18);
            t19 = FUN_0c0da2e0();
            nlRotateAY((((t19 & 0xFFF) + (t17 + t18)) - 2048));
            t21 = R1008;
            R1008 = (t21 + 0x2);
            t22 = *(short *)((((t21 + 0x2) - 2) + 0x0));
            t23 = R1012;
            R1004 = (t22 + t23);
            t24 = FUN_0c0da2e0();
            nlRotateAX((((t24 & 0xFFF) + (t22 + t23)) - 2048));
            FUN_0c0db4d0((t6 + 0x3C), (t6 + 0x3C));
            t27 = FUN_0c0da2e0();
            (((struct o30_float *)(t6))->v) = ((FUN_0c0d9e90(t27)) * (1.0f + 1.0f));
            t29 = FUN_0c0da2e0();
            (((struct o34_float *)(t6))->v) = ((FUN_0c0da410(t29)) * (1.0f + 1.0f));
            (((struct o38_float *)(t6))->v) = 0.0f;
            FUN_0c0db470((t6 + 0x30), (t6 + 0x30));
            t32 = R1016;
            R1016 = (t32 - 1);
            if (((t32 - 1) + 0x1) != 0) continue;
            break;
        }
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - 0.000999999931f);
        nlPopMatrix(0x1);
        t35 = *(int *)((a4 + 0x3C));
        t41 = t35;
        if ((t35 & 31) == 0) {
            if ((int)((((struct o40_int *)(a4))->v)) < (int)0x7) {
                (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + 0x1);
            }
            t41 = 0x40;
        }
        t45 = t41;
    }
    if ((int)(*(int *)((a4 + 0x3C))) <= 0) {
        return FUN_0c0e19f2();
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
    if ((((((struct oD8_int *)(v0_5))->v)) != 0)) goto L_C09024E;
    if ((((((struct o4D0_int *)(v0_3))->v)) == 0)) goto L_C090252;
    L_C09024E:;
    v0_2 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C090252:;
    v0_6 = (((struct o48_int *)(v0_1))->v);
    v0_5 = (v0_6);
    v0_2 = (0x9);
    w0_0 = (0.0f);
    if ((v0_6 == 0)) goto L_C090276;
    if ((v0_5 == 1)) goto L_C090290;
    if ((v0_5 == 2)) goto L_C0902EC;
    if ((v0_5 == 3)) goto L_C09030A;
    if ((v0_5 != 4)) goto L_C090272;
    v0_4 = (((struct o44_int *)(v0_1))->v);
    (((struct o44_uint *)(v0_1))->v) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)v0_2)) goto L_C0903B0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    (((struct o3C_float *)(v0_1))->v) = w0_0;
    (((struct o38_float *)(v0_1))->v) = w0_0;
    L_C0903A8:;
    (((struct o48_uint *)(v0_1))->v) = (((((struct o48_int *)(v0_1))->v)) + 0x1);
    L_C0903B0:;
    nlAddVector((v0_3 + 0x48), (v0_1 + 0x38));
    v0_5 = (0x48);
    if (((int)((((struct o48_int *)(v0_1))->v)) <= (int)0x4)) goto L_C0903CA;
    v0_5 = ((((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0)));
    goto L_C0903CA;
    L_C090272:;
    goto L_C0903B0;
    L_C09030A:;
    v0_5 = (((struct o44_int *)(v0_1))->v);
    (((struct o44_uint *)(v0_1))->v) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) <= (int)0x2D)) goto L_C0903B0;
    if (((*(int *)(((v0_4 + 0x40) + (((((struct o510_int *)(v0_3))->v)) << 2)))) == 4)) goto L_C09032C;
    v0_5 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_2, v0_0);
    L_C09032C:;
    v0_4 = *(int *)((((((((struct o510_int *)(v0_3))->v)) << 2) + v0_4) + 0x0));
    *(float *)(((int)stk + 4)) = (((((struct o30_float *)(v0_4))->v)) - ((((struct o30_float *)(v0_3))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o38_float *)(v0_4))->v)) - ((((struct o38_float *)(v0_3))->v)));
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
    (((struct o3C_float *)(v0_1))->v) = (*(float *)0xC090438);
    L_C090388:;
    (((struct o44_uint *)(v0_1))->v) = 0x0;
    goto L_C0903A8;
    L_C0902EC:;
    v0_4 = (((struct o44_int *)(v0_1))->v);
    (((struct o44_uint *)(v0_1))->v) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)v0_2)) goto L_C0903B0;
    (((struct o38_float *)(v0_1))->v) = w0_0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    w0_0 = ((*(float *)0xC090420));
    L_C090304:;
    (((struct o3C_float *)(v0_1))->v) = w0_0;
    goto L_C090388;
    L_C090290:;
    v0_4 = (((struct o44_int *)(v0_1))->v);
    (((struct o44_uint *)(v0_1))->v) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) > (int)0x17)) goto L_C0902A2;
    goto L_C0903B0;
    L_C0902A2:;
    v0_4 = (((struct o6E_short *)(v0_3))->v);
    (((struct o38_float *)(v0_1))->v) = ((FUN_0c0da410(v0_4)) * 0.599999964f);
    (((struct o40_float *)(v0_1))->v) = ((FUN_0c0d9e90(v0_4)) * 0.599999964f);
    w0_0 = (2.16666651f);
    goto L_C090304;
    L_C090276:;
    (((struct o38_float *)(v0_1))->v) = w0_0;
    (((struct o3C_float *)(v0_1))->v) = w0_0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    (((struct o44_uint *)(v0_1))->v) = 0x0;
    (((struct o48_uint *)(v0_1))->v) = (((((struct o48_int *)(v0_1))->v)) + 0x1);
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
    t0 = (((struct oBC_int *)(a4))->v);
    t1 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    if (((((struct oD8_int *)(a4))->v)) == 0) {
        t116 = a4;
    } else {
        FUN_0c05a98a(a4, a5, a6);
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
                FUN_0c0cc3f8((*(int *)((0xC1FFB70 + (((((struct o1F8_int *)(a4))->v)) << 2)))), 0x0, 0x0, 0x0);
                if ((*(int *)((0xC1FFB70 + (((((struct o1F8_int *)(a4))->v)) << 2)))) != 0) {
                    FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x0);
                }
            } else {
                if ((int)((((struct oC0_int *)((*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v)) < (int)0x29) {
                    FUN_0c0cc3f8((*(int *)(((((((struct o1F8_int *)(a4))->v)) << 2) + 0xC1FFBE4))), 0x0, 0x0, 0x0);
                    t33 = 0x1;
                } else {
                    FUN_0c0cc3f8((*(int *)(((((((struct o1F8_int *)(a4))->v)) << 2) + 0xC1FFC58))), 0x0, 0x0, 0x0);
                    t33 = 0x2;
                }
                FUN_0c0cc054(((((struct o1C4_int *)(a4))->v)), t33);
            }
            FUN_0c054c8a(a4);
            if (((((struct o23C_int *)(a4))->v)) != 0) {
                FUN_0c0909fc(a4);
            }
        }
        if (((((struct oD8_int *)(a4))->v)) == 4) {
            FUN_0c0cc3f8(0x82DA9, 0x0, 0x0, 0x0);
            FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x3);
        } else {
            if (((((struct oD8_int *)(a4))->v)) == 2) {
                t56 = *(int *)((0xC246FF0 + (((((struct oBC_int *)(a4))->v)) << 2)));
                t59 = *(int *)((0xC246FF0 + (((((struct o1C4_int *)(a4))->v)) << 2)));
                if (((*(int *)0xC23A1A8) & 0x100) != 0) {
                    FUN_0c053c64(t59, 0x0);
                }
                t67 = (((struct o6E_short *)(t56))->v);
                t68 = (((struct o6E_short *)(t59))->v);
                if (16384.0f > _builtin_fabsf((float)(short)(t68 - t67))) {
                    if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
                        FUN_0c0cc3f8((*(int *)((0xC1FFB70 + (((((struct o1F8_int *)(a4))->v)) << 2)))), t67, (t68 - t67), 0x0);
                        FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0x4);
                    } else {
                        if ((int)((((struct oC0_int *)(t56))->v)) < (int)0x29) {
                            t81 = 0xC1FFBE4;
                            t82 = (((((struct o1F8_int *)(a4))->v)) << 2);
                        } else {
                            t81 = 0xC1FFC58;
                            t82 = (((((struct o1F8_int *)(a4))->v)) << 2);
                        }
                        FUN_0c0cc3f8((*(int *)((t82 + t81))), t67, (t68 - t67), 0x0);
                    }
                    FUN_0c0909fc(a4);
                } else {
                    FUN_0c090f70(a4);
                }
            }
        }
        if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
            t103 = (((struct oBC_int *)(a4))->v);
            *(unsigned int *)(((((t103 << 2) << 2) << 1) + 0xC247550)) = ((*(int *)(((((t103 << 2) << 2) << 1) + 0xC247550))) + 0x1);
        }
        (((struct oD8_uint *)(a4))->v) = 0x0;
    }
    t120 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t120 - 1);
    if (((int)(t120 - 1) >= 0) && (t121 = *(int *)((a4 + 0x1C)), t122 = (((struct o20C_int *)(t121))->v), (t122 & 0xC1800) == 0)) {
    } else {
        FUN_0c0e19f2();
    }
    return FUN_0c01cdc2(a4);
}
