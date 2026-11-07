/* Straight-line functions with calls and guards (batch gen_aep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c056098(int);
int FUN_0c0e20e6(int, int, int);
int FUN_0c031e5e(int a4, int a5, int a6);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_int { char p[0x2D4]; int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_uint { char p[0x2EC]; unsigned int v; };
struct o374_uint { char p[0x374]; unsigned int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o540_int { char p[0x540]; int v; };
struct o550_float { char p[0x550]; float v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c031e5e(int a4, int a5, int a6)
{
    register int t38;
    register int t7;
    register int t10;

    t38 = 0x50C;
    if (((((struct o50C_int *)(a4))->v)) != 0) {
        t7 = *(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0));
        if ((int)(*(int *)((a4 + 0x8))) > (int)(*(int *)((t7 + 0x8)))) {
            FUN_0c0e20e6(a4, t7, a6);
            t10 = *(int *)((a4 + 0x8));
            *(unsigned int *)((a4 + 0x8)) = (*(int *)((t7 + 0x8)));
            *(unsigned int *)((t7 + 0x8)) = t10;
            (((struct o2D4_uint *)(a4))->v) = (((((struct o2D4_int *)(a4))->v)) + 0x1);
        }
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)((((((struct o540_int *)(a4))->v)) + 0x4)));
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o20C_uint *)(a4))->v) = 0x40000;
        (((struct o210_uint *)(a4))->v) = 0x3C;
        (((struct oCC_uint *)(a4))->v) = ((((struct oBC_int *)(t7))->v));
        (((struct o1EC_uint *)(a4))->v) = (~((int)0x1 << (int)((((struct oBC_int *)(t7))->v))));
        (((struct o2EC_uint *)(a4))->v) = 0x0;
        (((struct o550_float *)(a4))->v) = ((((struct o8_float *)(((((struct o540_int *)(a4))->v))))->v));
        (((struct oD8_uint *)(a4))->v) = 0x0;
        if ((((((struct o20C_int *)(t7))->v)) & 0x200000) != 0) {
            FUN_0c056098(t7);
        }
        (((struct oD0_uint *)(t7))->v) = ((((struct oBC_int *)(a4))->v));
        *(unsigned int *)(((0x2C4 + t7) + 0x0)) = (unsigned short)(*(short *)((((((struct o540_int *)(a4))->v)) + 0x6)));
        (((struct o2D4_uint *)(t7))->v) = 0x0;
        (((struct o2CC_uint *)(t7))->v) = 0x1;
        (((struct o1B0_uint *)(t7))->v) = (~((int)0x1 << (int)((((struct oBC_int *)(a4))->v))));
        (((struct o20C_uint *)(t7))->v) = 0x80000;
        (((struct o210_uint *)(t7))->v) = 0x42;
        (((struct o374_uint *)(t7))->v) = 0x0;
        (((struct o6E_ushort *)(t7))->v) = (((((struct o6E_short *)(t7))->v)) + 0x8000);
        t38 = 0x6E;
    }
    return t38;
}
