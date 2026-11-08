/* Straight-line functions with calls and guards (batch gen_jv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int, float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0b3e32(int a4, int a5, int a6, int a7, float f4);
struct o420_int { char p[0x420]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };


int FUN_0c0b3e32(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o88_int *)(a4))->v);
    t1 = *(int *)0xC247CAC;
    if (((((struct o9C_int *)(a4))->v)) == 0) {
        t2 = 0x420;
        if ((int)((((struct o420_int *)(t1))->v)) >= (int)(*(int *)((t0 + 0x0)))) {
            (((struct o94_uint *)(a4))->v) = (*(int *)((t0 + 0x4)));
            (((struct o9C_uint *)(a4))->v) = 0x1;
            t2 = 0x9C;
        }
        return t2;
    }
    t2 = (((struct o94_int *)(a4))->v);
    (((struct o94_uint *)(a4))->v) = (t2 - 1);
    if ((int)(t2 - 1) <= 0) {
        (((struct o88_uint *)(a4))->v) = (t0 + 0xC);
        (((struct o9C_uint *)(a4))->v) = 0x0;
        if ((int)(*(int *)(((t0 + 0xC) + 0x0))) < 0) {
            return FUN_0c0e19f2((t0 + 0xC), t1, a6, a7);
        }
        return 0x9C;
    }
    *(unsigned int *)((a4 + 0x30)) = (*(int *)((t0 + 0x8)));
    return FUN_0c0c0340((a4 + 0x30), f4);
}
