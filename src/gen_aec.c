/* Straight-line functions with calls and guards (batch gen_aec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c049b80(int);
int FUN_0c053c64(int, int);
int FUN_0c04e402(int a4, int a5);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };


int FUN_0c04e402(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c053c64(a4, 0x1);
    if ((((((struct o2EC_int *)(a4))->v)) & 12) != 0) {
        FUN_0c049b80(a4);
        (((struct o2D4_uint *)(a4))->v) = 0x2;
        (((struct o3AC_uint *)(a4))->v) = 0x0;
        t1 = 0x3AC;
    } else {
        t2 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t2 - 1);
        t3 = 0x3AC;
        if ((int)(t2 - 1) < 0) {
            t2 = 0x3AC;
            if (((*(int *)0xC23A1A8) & 0x100) == 0) {
                (((struct o20C_uint *)(a4))->v) = 0x800;
                t2 = 0x20C;
            }
            t4 = t2;
            if (((*(int *)((a5 + 0x0))) & 0x400) != 0) {
                (((struct o20C_uint *)(a4))->v) = 0x40;
                (((struct o210_uint *)(a4))->v) = 0x7A;
                (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((((struct oC0_int *)(a4))->v)) << 2) << 2) + 0xC0F82AA) + 0x0)));
                (((struct o2CC_uint *)(a4))->v) = 0x1;
                (((struct o2D4_uint *)(a4))->v) = 0x1;
                if ((int)((((struct o394_int *)(a4))->v)) >= 0) {
                    (((struct o394_uint *)(a4))->v) = 0x1;
                }
                t4 = 0x394;
            }
            t3 = t4;
        }
        t2 = t3;
        if ((((*(int *)((a5 + 0x0))) & 0x202) != 0) && (t0 = *(int *)((a5 + 0x8)), (t0 & 0x400) == 0)) {
            t0 = 0x394;
            if ((int)((((struct o394_int *)(a4))->v)) >= 0) {
                if ((int)((((struct o3AC_int *)(a4))->v)) > (int)0xFFFFFFF4) {
                    (((struct o20C_uint *)(a4))->v) = 0x80;
                    (((struct o210_uint *)(a4))->v) = 0x7C;
                    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((0xC0F82AA + ((((((struct oC0_int *)(a4))->v)) << 2) << 2)) + 0x2)));
                    (((struct o2CC_uint *)(a4))->v) = 0x1;
                    (((struct o2D4_uint *)(a4))->v) = 0x1;
                    (((struct o3AC_uint *)(a4))->v) = 0x0;
                }
                t0 = 0x3AC;
            }
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}
