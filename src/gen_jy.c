/* Straight-line functions with calls and guards (batch gen_jy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19f2(int, int, int, int);
int FUN_0c03ea28(int a4, int a5, int a6, int a7);
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };


int FUN_0c03ea28(int a4, int a5, int a6, int a7)
{
    register int t10;
    register int t11;
    register int t30;
    int t2;
    register int t3;
    register int t34;

    if (((*(int *)0xC23ED50) == (*(int *)((a4 + 0x30)))) && (t2 = *(int *)((a4 + 0x34)), t3 = *(int *)0xC2462FC, (t3 & t2) == 0)) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t10 = *(int *)((a4 + 0x38));
    t11 = *(int *)0xC2462F4;
    if (t10 != 0) {
        if (t10 != 1) {
            if (t10 != 2) {
            } else {
                if (t11 == 0) {
                    *(unsigned int *)0xC2462FC = ((*(int *)0xC2462FC) | (*(int *)((a4 + 0x34))));
                }
            }
        } else {
            if ((int)t11 > 0) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            }
        }
        t34 = t10;
    } else {
        t30 = (((struct o40_int *)(a4))->v);
        (((struct o40_uint *)(a4))->v) = (t30 - 1);
        if ((int)(t30 - 1) > 0) {
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
        }
        t34 = 0x40;
    }
    return t34;
}
