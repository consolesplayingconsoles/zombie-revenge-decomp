/* Straight-line functions with calls and guards (batch gen_sf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c021e50(int, int, int, int);
int FUN_0c021eba(int a4, int a5, int a6, int a7);
struct o474_int { char p[0x474]; int v; };
struct o498_int { char p[0x498]; int v; };
struct o49C_int { char p[0x49C]; int v; };
struct o49C_uint { char p[0x49C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c021eba(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    (((struct o49C_uint *)(a4))->v) = (*(int *)(((((((((struct o498_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0x8)));
    t0 = (((struct o49C_int *)(a4))->v);
    if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && (t0 != 3)))) {
        if ((t0 != 4) && ((t0 != 5) && (t0 != 6))) {
        } else {
            FUN_0c021e50(a4, a5, a6, a7);
        }
    }
    t0 = *(short *)(((((((((struct o498_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0x4));
    if ((unsigned short)t0 != 5) {
        if ((unsigned short)t0 != 4) {
            if ((unsigned short)t0 != 3) {
                if ((unsigned short)t0 != 2) {
                    return (unsigned short)t0;
                }
                t1 = (((struct o474_int *)(a4))->v);
                return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
            }
            *(unsigned int *)(((((((((struct o498_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0xC)) = (*(int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030) + 0x0)));
            *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030) + 0x0)) = 0x8;
            *(unsigned short *)(((((((((struct o498_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0x4)) = 0x4;
            return 0x4;
        }
        return (unsigned short)t0;
    }
    *(unsigned short *)(((((((((struct o498_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0x4)) = 0x2;
    *(unsigned int *)(((((((((struct o498_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0x8)) = 0x1;
    *(unsigned int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030) + 0x0)) = (*(int *)(((((((((struct o498_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0xC)));
    return 0x498;
}
