/* Straight-line functions with calls and guards (batch gen_pt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0562b4(int);
int FUN_0c0564d0(int);
int FUN_0c057e2a(int);
int FUN_0c057f2c(int);
int FUN_0c049b80(int a4);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o340_int { char p[0x340]; int v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };


int FUN_0c049b80(int a4)
{
    register int t0;

    t0 = FUN_0c0562b4(a4);
    if (t0 != 0) {
        t0 = FUN_0c0564d0(a4);
        if (t0 != 0) {
            (((struct o20C_uint *)(a4))->v) = 0x200000;
            (((struct o210_uint *)(a4))->v) = 0x3A;
            return 0xFFFFFFFF;
        }
        t0 = FUN_0c057f2c(a4);
    } else {
        t0 = FUN_0c057e2a(a4);
    }
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o210_uint *)(a4))->v) = 0x0;
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((struct o340_int *)(a4))->v)) << 1) + (0xC1FE210 + ((((((struct oC0_int *)(a4))->v)) >> 1) * 0x2C))) + 0x0)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    if ((int)((((struct o394_int *)(a4))->v)) > 0) {
        (((struct o394_uint *)(a4))->v) = 0x0;
    }
    return 0x394;
}
