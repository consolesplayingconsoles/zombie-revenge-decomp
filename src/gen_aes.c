/* Straight-line functions with calls and guards (batch gen_aes): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0556ce(int, int, int);
int FUN_0c05816a(int a4, int a5, int a6, int a7);
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o330_int { char p[0x330]; int v; };
struct o330_uint { char p[0x330]; unsigned int v; };
struct o338_int { char p[0x338]; int v; };
struct o338_uint { char p[0x338]; unsigned int v; };
struct o340_uint { char p[0x340]; unsigned int v; };
struct o344_int { char p[0x344]; int v; };
struct o348_uint { char p[0x348]; unsigned int v; };
struct o350_uint { char p[0x350]; unsigned int v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c05816a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0556ce(a5, 0x1, 0x0);
    t1 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t2 = *(int *)(((t0 << 2) + 0xC2475D4));
        (((struct o348_uint *)(a4))->v) = a5;
        (((struct o350_uint *)(a4))->v) = t0;
        (((struct o340_uint *)(a4))->v) = a5;
        if (((((struct o330_int *)(a4))->v)) == 1) {
            (((struct o330_uint *)(a4))->v) = 0x3;
        } else {
            (((struct o330_uint *)(a4))->v) = 0x2;
        }
        (((struct o39C_uint *)(a4))->v) = (((((struct o39C_int *)(a4))->v)) | ((((struct o22C_int *)(t2))->v)));
        (((struct o338_uint *)(a4))->v) = (((((struct o338_int *)(a4))->v)) | ((int)0x1 << (int)((((struct o344_int *)(a4))->v))));
        (((struct o23C_uint *)(t2))->v) = ((((struct oBC_int *)(a4))->v));
        if (((*(int *)0xC23A1A8) & 0x100) == 0) {
            (((struct o21C_uint *)(t2))->v) = (*(int *)(((a5 << 2) + 0xC1FF60C)));
        } else {
            (((struct o21C_uint *)(t2))->v) = (*(int *)((((a5 << 2) << 2) + 0xC20C0B8)));
        }
        if ((*(int *)(((a5 << 2) + 0xC1FF6D8))) != 0) {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC1FF6D8)))))(a4, a5, a6, a7);
        }
        t1 = t0;
    }
    return t1;
}
