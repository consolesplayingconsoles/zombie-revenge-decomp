/* Straight-line functions with calls and guards (batch gen_aaz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c02a8dc(int a4, int a5, int a6, int a7);
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o538_int { char p[0x538]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o554_uint { char p[0x554]; unsigned int v; };


int FUN_0c02a8dc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        (((struct o538_uint *)(a4))->v) = 0xA;
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        return 0x4F8;
    }
    t0 = FUN_0c03593a(a4);
    if (t0 != 0) {
        t0 = FUN_0c02a35a(a4);
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        (((struct o538_uint *)(a4))->v) = 0x2;
                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                    } else {
                        (((struct o538_uint *)(a4))->v) = 0x2;
                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                    }
                } else {
                    (((struct o538_uint *)(a4))->v) = 0x2;
                    (((struct o4F8_uint *)(a4))->v) = 0x6;
                }
            } else {
                (((struct o538_uint *)(a4))->v) = 0x2;
                (((struct o4F8_uint *)(a4))->v) = 0x2;
            }
            return 0x4F8;
        }
        t0 = FUN_0c035b26(a4);
        if (t0 != 0) {
            t0 = FUN_0c035ce4(a4);
            if (t0 != 0) {
                (((struct o554_uint *)(a4))->v) = 0x2;
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                t0 = (((struct o4F0_int *)(a4))->v);
                t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C));
                return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
            }
        }
        t0 = (((struct o538_int *)(a4))->v);
        if ((t0 != 8) && ((t0 != 6) && (t0 != 7))) {
            if (t0 == 4) {
                (((struct o4F8_uint *)(a4))->v) = 0x2;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x2;
        }
        return 0x4F8;
    }
    (((struct o538_uint *)(a4))->v) = 0x1;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        (((struct o4F8_uint *)(a4))->v) = 0x0;
    } else {
        (((struct o4F8_uint *)(a4))->v) = 0x2;
    }
    return 0x4F8;
}
