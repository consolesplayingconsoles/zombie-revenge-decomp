/* Straight-line functions with calls and guards (batch gen_abf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
int FUN_0c049b80(int);
int FUN_0c053ac4(int);
int FUN_0c04ebcc(int a4);

int FUN_0c04ebcc(int a4)
{
    int t0;
    register int t1;

    t1 = (((struct o3B0_int *)(a4))->v);
    (((struct o3B0_uint *)(a4))->v) = (t1 + 0x1);
    if (((int)(t1 + 0x1) <= (int)0x19) && (t0 = (((struct o2EC_int *)(a4))->v), (t0 & 12) == 0)) {
        return t0;
    }
    (((struct o1B0_uint *)(a4))->v) = 0x0;
    t0 = (((struct o2EC_int *)(a4))->v);
    if ((t0 & 12) != 0) {
        FUN_0c053ac4(a4);
        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + (*(short *)(((((((struct o2A0_int *)(a4))->v)) << 1) + 0xC0F85D8))));
        (((struct o1BC_uint *)(a4))->v) = 0x0;
        (((struct o3B0_uint *)(a4))->v) = 0x0;
        (((struct o2D4_uint *)(a4))->v) = 0x0;
        return FUN_0c049b80(a4);
    }
    return t0;
}
