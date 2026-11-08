/* Straight-line functions with calls and guards (batch gen_afz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c092c3e(int a4, int a5, int a6);
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };


int FUN_0c092c3e(int a4, int a5, int a6)
{
    int stk[2];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_2 = *(short *)((v0_1 + 0x6));
    v0_1 = FUN_0c0e19aa(0xC092F14, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(v0_1);
    (((struct o80_uint *)(v0_1))->v) = (unsigned char)(*(signed char *)((((((unsigned short)v0_2 << 2) << 1) + 0xC10B8FC) + 0x0)));
    (((struct oA0_uint *)(v0_1))->v) = (unsigned char)(*(signed char *)((((((unsigned short)v0_2 << 2) << 1) + 0xC10B8FC) + 0x1)));
    (((struct oA4_uint *)(v0_1))->v) = (unsigned short)(*(short *)(((*(int *)(((int)stk + 4))) + 0x4)));
    (((struct o8C_uint *)(v0_1))->v) = (*(int *)((((((unsigned short)v0_2 << 2) << 1) + 0xC10B8FC) + 0x4)));
    (((struct o78_uint *)(v0_1))->v) = ((((struct oC0_int *)(v0_0))->v));
    (((struct o88_uint *)(v0_1))->v) = ((((struct oBC_int *)(v0_0))->v));
    v0_2 = (((struct o88_int *)(v0_1))->v);
    v0_3 = (((struct o80_int *)(v0_1))->v);
    v0_4 = (v0_0);
    v0_1 = (v0_1);
    v0_0 = (((((((v0_2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((v0_3 << 2) << 1)));
    if (((*(short *)((((((((v0_2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((v0_3 << 2) << 1)) + 0x4))) != 0)) goto L_C092CD4;
    if (((*(short *)((v0_0 + 0x6))) != 0)) goto L_C092CD4;
    *(unsigned short *)((v0_0 + 0x4)) = (*(int *)(((0x404 + v0_4) + (((((struct o80_int *)(v0_1))->v)) << 2))));
    L_C092CD4:;
    v0_2 = *(short *)((v0_0 + 0x6));
    *(unsigned short *)((v0_0 + 0x6)) = (v0_2 + 0x1);
    *(unsigned int *)((v0_0 + 0x0)) = (*(int *)((v0_1 + 0x8)));
    return (v0_2 + 0x1);
}
