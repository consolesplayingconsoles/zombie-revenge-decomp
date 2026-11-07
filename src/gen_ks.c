/* Straight-line functions with calls and guards (batch gen_ks): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0c4654(void);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0f2fa8(int, ...);
int FUN_0c0f30f8(int, int);
int FUN_0c0f31b8(int, int);
int FUN_0c0f3bf4(int, int, int, int, int, int, int, int);
float FUN_0c9e1de0(int, int);
int FUN_0c9e1f3c(int, int, float, float, float, float, float, float, float);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_st_ext(float (*)[4]);
int FUN_0c9e2048(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c09ec84(int a4);
int FUN_0c0f271e(int a4, Stk3 s);
struct o1C6C_uint { char p[0x1C6C]; unsigned int v; };
struct o1C70_uint { char p[0x1C70]; unsigned int v; };
struct o278_float { char p[0x278]; float v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o0_int { int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };




int FUN_0c09ec84(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c0cbafc(0x291, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x293, 0x2, 0xFC000000, 0x84000000);
    t0 = FUN_0c0cbafc(0x344, 0x2, 0xFC000000, 0x84000000);
    if (((((struct o34_int *)0xC24970C)->v)) != 0) {
        return t0;
    }
    if (((((struct o0_int *)0xC24970C)->v)) != 0) {
        return t0;
    }
    (((struct o34_uint *)0xC24970C)->v) = 0x1;
    t0 = *(int *)0xC23EDBC;
    t1 = *(int *)0xC23ECF0;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = FUN_0c0e19aa(0xC09E290, 0x6E68, t1);
                FUN_0c0e19d0(t0);
                *(unsigned int *)((t0 + 0x30)) = a4;
                (((struct o40_uint *)(t0))->v) = ((int)0x2 << (int)((((struct o2E8_int *)(a4))->v)));
                t0 = 0x2A7;
                for (;;) {
                    FUN_0c0c4654();
                    FUN_0c0cbafc(t0, 0x2, 0xFC007000, 0x84002000);
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x2B7) {
                        break;
                    }
                }
                FUN_0c0cbafc(0x3CB, 0x2, 0xFC007000, 0xC002000);
                FUN_0c0cbafc(0x3CC, 0x2, 0xFC007000, 0xC002000);
            } else {
                t0 = t1;
            }
            t2 = t0;
        } else {
            t0 = FUN_0c0e19aa(0xC09E048, 0x7474, t1);
            FUN_0c0e19d0(t0);
            *(unsigned int *)((t0 + 0x30)) = a4;
            (((struct o40_uint *)(t0))->v) = ((int)0x2 << (int)((((struct o2E8_int *)(a4))->v)));
            *(unsigned int *)((t0 + 0x30)) = a4;
            (((struct o40_uint *)(t0))->v) = ((int)0x2 << (int)((((struct o2E8_int *)(a4))->v)));
            (((struct o4C_float *)(t0))->v) = ((((struct o278_float *)(a4))->v));
            (((struct o60_uint *)(t0))->v) = (t0 + 0x64);
            (((struct o54_float *)(t0))->v) = (*(float *)0xC10C5A8);
            (((struct o1C6C_uint *)(t0))->v) = 0xC200F30;
            (((struct o1C70_uint *)(t0))->v) = (0x1C74 + t0);
            FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84002000);
        }
        t0 = t2;
    } else {
        t2 = FUN_0c0e19aa(0xC09DDA8, 0x7474, t1);
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0x30)) = a4;
        (((struct o40_uint *)(t2))->v) = ((int)0x2 << (int)((((struct o2E8_int *)(a4))->v)));
        (((struct o4C_float *)(t2))->v) = ((((struct o278_float *)(a4))->v));
        (((struct o60_uint *)(t2))->v) = (t2 + 0x64);
        (((struct o54_float *)(t2))->v) = (*(float *)0xC10C560);
        (((struct o1C6C_uint *)(t2))->v) = 0xC200F70;
        (((struct o1C70_uint *)(t2))->v) = (0x1C74 + t2);
        FUN_0c0cbafc(0x293, 0x2, 0xFC007000, 0x84002000);
        FUN_0c0cbafc(0x344, 0x2, 0xFC007000, 0x84002000);
    }
    return FUN_0c0cc3f8(0x234A9, 0x0, t0);
}

int FUN_0c0f271e(int a4, Stk3 s)
{
    register int t0;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t34;
    register int t36;
    register int t50;
    register int t40;
    register int t17;

    *(int *)((int)&s + -56) = s.w[2];
    *(int *)((int)&s + -60) = s.w[1];
    t0 = FUN_0c0f2fa8(s.w[1], s.w[2]);
    if (t0 != 0) {
        if (t0 == 1) {
            *(unsigned int *)0xC94D960 = 0x4B8;
        }
        if (t0 == 2) {
            *(unsigned int *)0xC94D960 = 0x44C;
        }
        *(unsigned int *)(((int)&s + 4)) = 0xFFFFFFFF;
        *(unsigned int *)(((int)&s + 8)) = 0xFFFFFFFF;
        *(unsigned int *)((s.w[0] + 0x0)) = (*(int *)(((int)&s + 4)));
        t8 = *(int *)(((int)&s + 8));
        *(unsigned int *)((s.w[0] + 0x4)) = t8;
        t50 = t8;
    } else {
        *(int *)((int)&s + -56) = s.w[2];
        *(int *)((int)&s + -60) = s.w[1];
        *(int *)((int)&s + -64) = 0x0;
        *(int *)((int)&s + -68) = 0x0;
        t9 = FUN_0c0f3bf4(t0, 0x0, 0x0, 0x0, 0x0, 0x0, s.w[1], s.w[2]);
        if (t9 == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            *(unsigned int *)((s.w[0] + 0x0)) = 0x0;
            *(unsigned int *)((s.w[0] + 0x4)) = 0x0;
            t40 = 0x0;
        } else {
            *(unsigned int *)(((int)&s + -52)) = ((int)&s + 10);
            t10 = *(short *)(((int)&s + 10));
            *(unsigned int *)((a4 + 0x0)) = ((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1022);
            if ((((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1022) + 0x3FE) == 0) {
                *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
                t12 = *(int *)(((int)&s + -52));
                *(unsigned short *)((t12 + 0x0)) = ((*(short *)((t12 + 0x0))) & 0x800F);
                *(unsigned int *)(((int)&s + -48)) = ((int)&s + 8);
                FUN_0c0f31b8(((int)&s + -40), ((int)&s + 8));
                FUN_0c0f31b8(((int)&s + -36), ((int)&s + 4));
                for (;;) {
                    if (((unsigned char)(*(signed char *)(((int)&s + -39))) & 0x10) != 0) {
                        break;
                    }
                    FUN_0c0f30f8(((int)&s + -39), 0x7);
                    t17 = (*(int *)((a4 + 0x0)));
                    t17 = (t17 - 1);
                    *(unsigned int *)((a4 + 0x0)) = t17;
                }
                *(unsigned int *)(((int)&s + -44)) = ((int)&s + -40);
                FUN_0c0f31b8((*(int *)(((int)&s + -48))), ((int)&s + -40));
                FUN_0c0f31b8(((int)&s + 4), ((*(int *)(((int)&s + -44))) + 0x4));
            }
            t34 = *(int *)(((int)&s + -52));
            *(unsigned short *)((t34 + 0x0)) = ((*(short *)((t34 + 0x0))) & 0x800F);
            t36 = *(int *)(((int)&s + -52));
            *(unsigned short *)((t36 + 0x0)) = ((*(short *)((t36 + 0x0))) | 0x3FE0);
            *(unsigned int *)((s.w[0] + 0x0)) = (*(int *)(((int)&s + 4)));
            *(unsigned int *)((s.w[0] + 0x4)) = (*(int *)(((int)&s + 8)));
            t40 = s.w[0];
        }
        t50 = t40;
    }
    return t50;
}
