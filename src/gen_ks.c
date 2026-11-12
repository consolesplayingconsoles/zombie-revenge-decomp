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

