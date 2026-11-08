/* Straight-line functions with calls and guards (batch gen_lt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0e19f2(void);
int FUN_0c0307c0(int a4, int a5, int a6, int a7);
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };


int FUN_0c0307c0(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;

    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            FUN_0c0cc3f8(((((struct o9C_int *)(a4))->v)), a5, a6, a7);
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    FUN_0c0cc3f8(((((struct o98_int *)(a4))->v)), a5, a6, a7);
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}
