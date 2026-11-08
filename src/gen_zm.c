/* Straight-line functions with calls and guards (batch gen_zm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05025c(int);
int FUN_0c050830(int a4);
struct o1BC_int { char p[0x1BC]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o1CC_int { char p[0x1CC]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };



int FUN_0c050830(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_0 = a4;
    v0_1 = (((struct o6E_short *)((*(int *)(((((((struct o1C4_int *)(v0_0))->v)) << 2) + 0xC246FF0)))))->v);
    v0_3 = (((struct o6E_short *)(v0_0))->v);
    v0_2 = (0xC0508E0);
    FPUL_ = ((short)(v0_1 - v0_3));
    if ((16384.0f > _builtin_fabsf((float)(short)(v0_1 - v0_3)))) goto L_C0508C6;
    (((struct o20C_uint *)(v0_0))->v) = 0x40;
    (((struct o210_uint *)(v0_0))->v) = 0x7B;
    (((struct o2CC_uint *)(v0_0))->v) = 0x1;
    v0_3 = (0x100);
    v0_1 = (0xC247594);
    w0_0 = (0.099999994f);
    if ((((*(int *)0xC23A1A8) & 0x100) != 0)) goto L_C0508A6;
    v0_2 = *(int *)0xC23ED9C;
    v0_4 = (v0_2);
    if ((v0_2 == 4)) goto L_C050888;
    if ((v0_4 != 7)) goto L_C0508A6;
    L_C050888:;
    v0_4 = (((struct o1CC_int *)(v0_0))->v);
    v0_2 = (0x1CC);
    FPUL_ = (v0_4);
    if ((!(((float)(*(int *)((v0_1 + (((((struct oBC_int *)(v0_0))->v)) << 2)))) - (((float)v0_4 * w0_0))) > 0.0f))) goto L_C0508C6;
    L_C0508A6:;
    v0_4 = (((struct o1BC_int *)(v0_0))->v);
    v0_2 = (v0_4);
    if ((v0_4 == 19)) goto L_C0508F4;
    if ((v0_2 == 20)) goto L_C0508F4;
    if ((v0_2 == 21)) goto L_C0508F4;
    if ((v0_2 == 3)) goto L_C0508F4;
    if ((v0_2 == 4)) goto L_C0508F4;
    if ((v0_2 == 11)) goto L_C0508F4;
    if ((v0_2 == 5)) goto L_C0508F4;
    L_C0508C6:;
    return 0x0;
    L_C0508F4:;
    (((struct o2C4_uint *)(v0_0))->v) = 0x458;
    (((struct o3AC_uint *)(v0_0))->v) = 0xF;
    if (((v0_3 & (*(int *)0xC23A1A8)) != 0)) goto L_C050940;
    if ((((((struct o0_int *)0xC204998)->v)) == 0)) goto L_C050920;
    if ((((((struct o14_int *)0xC204998)->v)) != 0)) goto L_C050940;
    if (((int)(*(int *)0xC1FF894) >= 0)) goto L_C050940;
    L_C050920:;
    v0_2 = (((struct oBC_int *)(v0_0))->v);
    v0_3 = *(int *)((v0_1 + (v0_2 << 2)));
    w0_0 = ((float)((((struct o1CC_int *)(v0_0))->v)) * w0_0);
    *(unsigned int *)((v0_1 + (v0_2 << 2))) = (int)((float)v0_3 - w0_0);
    FPUL_ = ((int)((float)v0_3 - w0_0));
    L_C050940:;
    v0_1 = (((struct oBC_int *)(v0_0))->v);
    *(unsigned int *)(((((v0_1 << 2) << 2) << 1) + 0xC247554)) = ((*(int *)(((((v0_1 << 2) << 2) << 1) + 0xC247554))) + 0x1);
    v0_1 = (((struct oBC_int *)(v0_0))->v);
    *(unsigned int *)(((v0_1 << 2) + 0xC247584)) = ((*(int *)(((v0_1 << 2) + 0xC247584))) + 0x14);
    (((struct o1BC_uint *)(v0_0))->v) = 0x0;
    FUN_0c05025c(v0_0);
    return 0xFFFFFFFF;
}
