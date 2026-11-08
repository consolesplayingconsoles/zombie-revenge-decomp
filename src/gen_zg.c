/* Straight-line functions with calls and guards (batch gen_zg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0519f0(int);
int FUN_0c0bb1a8(int, int);
int FUN_0c055f24(int a4, int a5, int a6, int a7);
struct o220_int { char p[0x220]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o330_int { char p[0x330]; int v; };
struct o330_uint { char p[0x330]; unsigned int v; };
struct o338_int { char p[0x338]; int v; };
struct o338_uint { char p[0x338]; unsigned int v; };
struct o340_uint { char p[0x340]; unsigned int v; };
struct o344_int { char p[0x344]; int v; };
struct o344_uint { char p[0x344]; unsigned int v; };
struct o34C_uint { char p[0x34C]; unsigned int v; };
struct o358_int { char p[0x358]; int v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c055f24(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct o358_int *)(a4))->v);
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x1;
    (((struct o23C_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o34C_uint *)(a4))->v) = ((((struct oBC_int *)(t1))->v));
    (((struct o344_uint *)(a4))->v) = ((((struct o220_int *)(t1))->v));
    (((struct o338_uint *)(a4))->v) = (((((struct o338_int *)(a4))->v)) | ((int)0x1 << (int)((((struct o220_int *)(t1))->v))));
    (((struct o39C_uint *)(a4))->v) = (((((struct o39C_int *)(a4))->v)) | ((((struct o22C_int *)(t1))->v)));
    if (((((struct o330_int *)(a4))->v)) == 2) {
        (((struct o330_uint *)(a4))->v) = 0x3;
    } else {
        (((struct o330_uint *)(a4))->v) = 0x1;
        (((struct o340_uint *)(a4))->v) = ((((struct o344_int *)(a4))->v));
    }
    FUN_0c0bb1a8(a4, 0x0);
    FUN_0c0519f0(a4);
    t0 = (((struct o344_int *)(a4))->v);
    if ((*(int *)((0xC1FF6D8 + (t0 << 2)))) != 0) {
        t1 = *(int *)((0xC1FF6D8 + (((((struct o344_int *)(a4))->v)) << 2)));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
    }
    return (t0 << 2);
}
