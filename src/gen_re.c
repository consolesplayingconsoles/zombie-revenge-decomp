/* Straight-line functions with calls and guards (batch gen_re): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e3a08(int a4, int a5);
struct oC4_int { char p[0xC4]; int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c0e3a08(int a4, int a5)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    int R1012;
    int R1016;
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    v0_0 = a4;
    v0_1 = a5;
    R1016 = v0_0;
    R1012 = v0_1;
    (((struct o34_uint *)0xC94C810)->v) = ((((struct oC4_int *)((R1016)))->v));
    if (((unsigned int)((((struct o34_int *)0xC94C810)->v)) >= (unsigned int)0x564)) goto L_C0E3A2E;
    v0_0 = (0xFFFFFFFF);
    L_C0E3C14:;
    return v0_0;
    L_C0E3A2E:;
    if (((R1012) != 0)) goto L_C0E3A3E;
    (((struct oC_uint *)0xC94C810)->v) = 0x200000;
    L_C0E3A56:;
    *(unsigned int *)0xA0702800 = (R1012);
    *(unsigned int *)0xA0702C00 = (0x1 | (0xFFFE & (*(int *)0xA0702C00)));
    v0_0 = (0xA0800000);
    v0_1 = ((R1016));
    v0_2 = ((*(int *)((((R1016) + 0x54) + 0x0))));
    v0_3 = (0x0);
    L_C0E3A84:;
    if (((unsigned int)v0_3 < (unsigned int)((unsigned int)v0_2 >> 2))) goto L_C0E3A7A;
    (((struct o0_uint *)0xA0800050)->v) = (R1012);
    v0_0 = (0xA0800060);
    v0_3 = (0x0);
    L_C0E3AD6:;
    if (((unsigned int)v0_3 < (unsigned int)0x8)) goto L_C0E3AC8;
    *(unsigned int *)0xA0702C00 = ((*(int *)0xA0702C00) & 0xFFFE);
    v0_3 = (0x0);
    L_C0E3B28:;
    if (((unsigned int)v0_3 < (unsigned int)0x8)) goto L_C0E3AEC;
    v0_3 = (0x0);
    L_C0E3B8A:;
    if (((unsigned int)v0_3 < (unsigned int)0x8)) goto L_C0E3B34;
    (((struct o4_uint *)0xC94C810)->v) = ((*(int *)((((R1016) + 0x84) + 0x0))) + 0xA0800000);
    (((struct o8_uint *)0xC94C810)->v) = ((*(int *)((((R1016) + 0x80) + 0x0))) + 0xA0800010);
    (((struct o0_uint *)0xC94C810)->v) = 0xA0800400;
    (((struct o10_uint *)0xC94C810)->v) = 0x0;
    (((struct o18_uint *)0xC94C810)->v) = 0x0;
    L_C0E3BC6:;
    if ((((((struct oC_int *)0xA0800050)->v)) == 0)) goto L_C0E3BC6;
    v0_0 = (0x0);
    goto L_C0E3C14;
    L_C0E3B34:;
    *(unsigned char *)(((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC94C848)) = 0xFFFFFFFF;
    *(unsigned char *)((((unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1) + 0xC94C848) + 0x1)) = 0x0;
    *(unsigned int *)(((0xC94C850 + (unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1)) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((0xC94C84C + (unsigned char)((((v0_3 << 1) + v0_3) << 2) << 1)) + 0x0)) = 0xFFFFFFFF;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E3B8A;
    L_C0E3AEC:;
    *(unsigned int *)(((signed char)(((v0_3 << 1) + v0_3) << 2) + 0xC94C908)) = 0xFFFFFFFF;
    *(unsigned int *)((((signed char)(((v0_3 << 1) + v0_3) << 2) + 0xC94C908) + 0x4)) = 0x0;
    *(unsigned int *)((((signed char)(((v0_3 << 1) + v0_3) << 2) + 0xC94C908) + 0x8)) = 0x0;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E3B28;
    L_C0E3AC8:;
    *(unsigned int *)((v0_0 + 0x0)) = 0xFFFFFFFF;
    if (((*(int *)((v0_0 + 0x0))) != -1)) goto L_C0E3AC8;
    v0_0 = ((v0_0 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E3AD6;
    L_C0E3A7A:;
    *(unsigned int *)((v0_0 + 0x0)) = (*(int *)((v0_1 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_1 = ((v0_1 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E3A84;
    L_C0E3A3E:;
    if (((R1012) != 0x200)) goto L_C0E3A50;
    (((struct oC_uint *)0xC94C810)->v) = 0x800000;
    goto L_C0E3A56;
    L_C0E3A50:;
    v0_0 = (0xFFFFFFFE);
    goto L_C0E3C14;
}
