/* Straight-line functions with calls and guards (batch gen_acz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20C_int { char p[0x20C]; int v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3D4_int { char p[0x3D4]; int v; };
int FUN_0c08696c(int);
int FUN_0c086a44(int a4);

int FUN_0c086a44(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o2FC_int *)(a4))->v);
    t1 = (((struct o3D4_int *)(a4))->v);
    t2 = (((struct o20C_int *)(a4))->v);
    if ((t2 & 1) != 0) {
        t3 = *(int *)((t0 + 0x20));
        t0 = 0x3000;
        if ((int)t3 > (int)0x3000) {
        } else {
            t0 = t3;
            if ((int)t3 < (int)0xFFFFD000) {
                t0 = 0xFFFFD000;
            }
        }
        (((struct o28_ushort *)(t1))->v) = (((((struct o28_short *)(t1))->v)) + t0);
        return t2;
    }
    return FUN_0c08696c(a4);
}
