/* Straight-line functions with calls and guards (batch gen_iu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c02a19a(int);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c06b45e(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e14c4(int);
int FUN_0c0e15d4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e19f2(void);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0c69f6(int a4, int a5, int a6, int a7);
int FUN_0c02691c(int a4, float f4);
int FUN_0c06b544(int a4);
int FUN_0c0ab990(int a4, float f4);
struct o1BC_int { char p[0x1BC]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o28C_int { char p[0x28C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o500_int { char p[0x500]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_int { char p[0xC]; int v; };



int FUN_0c0c69f6(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((((((struct oC_int *)0xC23ED50)->v)) & 6) != 0) {
        if ((*(int *)((a4 + 0x30))) != 0) {
            FUN_0c0e15d4((*(int *)((a4 + 0x30))));
        } else {
            t0 = a4;
        }
        FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x30))) == 0) {
        *(unsigned int *)((a4 + 0x30)) = (FUN_0c0e14c4(0xC0C69B6));
    }
    if ((int)(*(int *)((a4 + 0x3C))) < 0) {
        t0 = 0x0;
        for (;;) {
            if ((*(int *)((((((t0 << 2) << 2) << 1) + 0xC246074) + 0x0))) == ((((struct o0_int *)0xC23ED50)->v))) {
                break;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                if ((int)(*(int *)((a4 + 0x3C))) >= 0) {
                    *(unsigned int *)((a4 + 0x38)) = (((*(int *)(((((((*(int *)((a4 + 0x3C))) << 2) << 2) << 1) + 0xC246074) + 0xC))) + (*(int *)0xC247074)) - (*(int *)0xC2462F4));
                    t0 = (*(int *)((a4 + 0x30)));
                    return FUN_0c0e16c0(t0);
                }
                t0 = (*(int *)((a4 + 0x30)));
                return FUN_0c0e16c0(t0);
            }
        }
        *(unsigned int *)((a4 + 0x3C)) = t0;
    }
    if ((int)(*(int *)((a4 + 0x3C))) >= 0) {
        *(unsigned int *)((a4 + 0x38)) = (((*(int *)(((((((*(int *)((a4 + 0x3C))) << 2) << 2) << 1) + 0xC246074) + 0xC))) + (*(int *)0xC247074)) - (*(int *)0xC2462F4));
    }
    return FUN_0c0e16c0((*(int *)((a4 + 0x30))));
}


int FUN_0c06b544(int a4)
{
    int stk[4];
    register int t2;
    register int t9;
    register float u12;

    FUN_0c06b45e(a4);
    if (((((struct o1BC_int *)(a4))->v)) != 0) {
        t2 = (((struct o1C4_int *)(a4))->v);
        *(unsigned int *)((((t2 & 0x1) << 2) + 0xC247584)) = ((*(int *)((((t2 & 0x1) << 2) + 0xC247584))) + 0x14);
        (((struct o3AC_uint *)(a4))->v) = 0x1;
        (((struct o3B4_uint *)(a4))->v) = 0x1800;
        (((struct o1BC_uint *)(a4))->v) = 0x0;
        FUN_0c0cc3f8(0x92AA9, 0x0, 0x0, 0x0);
    }
    if (((((struct o3AC_int *)(a4))->v)) != 0) {
        t9 = (((struct o3B0_int *)(a4))->v);
        (((struct o3B0_uint *)(a4))->v) = (t9 + 0xC00);
        u12 = 16384.0f;
        u12 = u12 + (float)((((struct o3B4_int *)(a4))->v)) * (FUN_0c0da410((t9 + 0xC00)));
        (((struct o6C_ushort *)(a4))->v) = (int)u12;
        (((struct o3B4_uint *)(a4))->v) = (((((struct o3B4_int *)(a4))->v)) - 102);
        if ((int)((((struct o3B4_int *)(a4))->v)) <= (int)0x20) {
            (((struct o6C_ushort *)(a4))->v) = 0x4000;
            (((struct o3AC_uint *)(a4))->v) = 0x0;
            (((struct o3B0_uint *)(a4))->v) = 0x0;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o28C_int *)(a4))->v)));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}

int FUN_0c0ab990(int a4, float f4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                if ((*(int *)0xC24FA38) == 0x21C) {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                    *(float *)((a4 + 0x38)) = ((((struct o8_float *)0xC0ABA88)->v));
                }
            }
        } else {
            if (!((*(float *)((a4 + 0x38))) > ((((struct o0_float *)0xC0ABA88)->v)))) {
                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 0.00999999978f);
            }
            if ((*(int *)0xC24FA38) == 0xB4) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                *(float *)((a4 + 0x38)) = 0.0f;
                *(float *)((a4 + 0x44)) = 0.0f;
            }
        }
    } else {
        t0 = *(int *)((a4 + 0x4C));
        *(unsigned int *)((a4 + 0x4C)) = (t0 + 0x444);
        if ((int)(t0 + 0x444) >= (int)0x7FFF) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
        u0 = ((FUN_0c0da410((*(int *)((a4 + 0x4C))))) * (1.0f + 1.0f));
        u0 = -u0;
        *(float *)((a4 + 0x44)) = u0;
    }
    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + (*(float *)(((0x38 + a4) + 0x0))));
    FUN_0c0dbda0((((((struct o0_int *)0xC247CAC)->v)) + 0x2AC));
    FUN_0c0dcca0((a4 + 0x40));
    *(unsigned int *)0xC247CF8 = 0x1;
    return nlGetMatrix((((((struct o4_int *)0xC247CAC)->v)) + 0x2AC));
}

int FUN_0c02691c(int a4, float f4)
{
    int stk[13];
    register float u0;
    register float u23;
    register float u24;
    register float u6;
    register float u19;
    register float u20;
    register float u16;
    register float u13;
    register int t36;
    register int t37;
    register int t40;
    register int t45;

    u0 = *(float *)0xC026A48;
    u23 = 0.0f;
    u24 = u0;
    if (((((struct o500_int *)(a4))->v)) == 2) {
    } else {
        u6 = *(float *)0xC026A4C;
        u19 = 0.0f;
        u20 = u6;
        if (((((struct o500_int *)(a4))->v)) == 3) {
        } else {
            u16 = u0;
            if (((((struct o500_int *)(a4))->v)) == 4) {
            } else {
                u13 = 0.0f;
                if (((((struct o500_int *)(a4))->v)) == 5) {
                    u13 = u6;
                }
                u16 = u13;
            }
            u19 = u16;
            u20 = 0.0f;
        }
        u23 = u19;
        u24 = u20;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    *(float *)(((int)stk + 20)) = u23;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = u24;
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    nlPopMatrix(0x1);
    t36 = FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
    if (t36 != 0) {
        t37 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t37 + 0x1);
        t40 = 0x3B0;
        if ((int)(t37 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
            t40 = (FUN_0c02a19a(a4));
        }
        t45 = t40;
    } else {
        t45 = (FUN_0c02a19a(a4));
    }
    return t45;
}

