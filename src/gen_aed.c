/* Straight-line functions with calls and guards (batch gen_aed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c056234(int, int);
void FUN_0c056118(int a4, int a5, int a6, int a7);
struct o224_int { char p[0x224]; int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o25C_uint { char p[0x25C]; unsigned int v; };
struct o330_int { char p[0x330]; int v; };
struct o330_uint { char p[0x330]; unsigned int v; };
struct o334_uint { char p[0x334]; unsigned int v; };
struct o338_int { char p[0x338]; int v; };
struct o338_uint { char p[0x338]; unsigned int v; };
struct o340_uint { char p[0x340]; unsigned int v; };
struct o344_int { char p[0x344]; int v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };


void FUN_0c056118(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = *(int *)((((0x34C + a4) + ((a7 & 0x1) << 2)) + 0x0));
    t2 = *(int *)((((t0 << 2) + 0xC2475D4) + 0x0));
    if ((int)(*(int *)((((0x344 + a4) + (a7 << 2)) + 0x0))) > (int)0x3) {
        if ((*(int *)((((a7 << 2) + (0x344 + a4)) + 0x0))) != 0) {
            *(unsigned int *)(((0xC247604 + (t0 << 2)) + 0x0)) = a5;
            if (a5 != 3) {
                if ((a5 == 7) || (a5 == 6)) {
                    (((struct o25C_uint *)(t2))->v) = 0x0;
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(a6); }
                (((struct o224_uint *)(t2))->v) = (((((struct o224_int *)(t2))->v)) - 1);
                (((struct o23C_uint *)(t2))->v) = 0x0;
                FUN_0c056234(a4, t2);
            }
            (((struct o338_uint *)(a4))->v) = (((((struct o338_int *)(a4))->v)) & (~((int)0x1 << (int)(*(int *)((((0x344 + a4) + ((a7 & 0x1) << 2)) + 0x0))))));
            (((struct o334_uint *)(a4))->v) = 0x0;
            *(unsigned int *)((((0x344 + a4) + ((a7 & 0x1) << 2)) + 0x0)) = 0x0;
            *(unsigned int *)((((0x34C + a4) + ((a7 & 0x1) << 2)) + 0x0)) = 0x0;
            (((struct o39C_uint *)(a4))->v) = (((((struct o39C_int *)(a4))->v)) & (~((((struct o22C_int *)(t2))->v))));
            if (a7 != 0) {
                (((struct o340_uint *)(a4))->v) = ((((struct o344_int *)(a4))->v));
                if (((((struct o330_int *)(a4))->v)) == 3) {
                    (((struct o330_uint *)(a4))->v) = 0x1;
                } else {
                    (((struct o330_uint *)(a4))->v) = 0x0;
                }
            } else {
                (((struct o340_uint *)(a4))->v) = 0x0;
                (((struct o330_uint *)(a4))->v) = 0x0;
            }
        }
    }
}
