/* Straight-line functions with calls and guards (batch gen_tm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f172(int);
int FUN_0c055874(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0556ce(int a4, int a5, int a6);
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o228_uint { char p[0x228]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o34_float { char p[0x34]; float v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };


int FUN_0c0556ce(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = 0xFFFFFFFF;
    if (((int)a4 < (int)0x16) && (t0 = *(int *)0xC247994, (int)t0 < (int)0xC)) {
        t0 = FUN_0c055874();
        t2 = 0xFFFFFFFF;
        if (t0 != 0) {
        } else {
            t0 = 0xFFFFFFFF;
            for (;;) {
                t0 = (t0 + 0x1);
                if ((*(int *)((((t0 << 2) + 0xC247604) + 0x0))) == 0) {
                    break;
                }
            }
            t3 = FUN_0c0e19aa((*(int *)(((a4 << 2) + 0xC1FF74C))), 0x288, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t3);
            *(unsigned int *)0xC247994 = ((*(int *)0xC247994) + 0x1);
            *(unsigned int *)(((0xC247604 + (t0 << 2)) + 0x0)) = a5;
            *(unsigned int *)(((0xC247634 + (t0 << 2)) + 0x0)) = a4;
            *(unsigned int *)((((t0 << 2) + 0xC2475D4) + 0x0)) = t3;
            (((struct oBC_uint *)(t3))->v) = t0;
            (((struct oC8_uint *)(t3))->v) = 0x40000;
            (((struct o220_uint *)(t3))->v) = a4;
            (((struct o240_uint *)(t3))->v) = (unsigned short)(*(short *)(((a4 << 1) + 0xC1FE8AA)));
            (((struct o244_uint *)(t3))->v) = (unsigned short)(*(short *)(((a4 << 1) + 0xC1FE8E4)));
            (((struct o258_float *)(t3))->v) = (*(float *)(((a4 << 2) + 0xC1FF5B4)));
            (((struct o22C_uint *)(t3))->v) = (*(int *)(((a4 << 2) + 0xC1FE9CC)));
            (((struct o224_uint *)(t3))->v) = 0x63;
            t4 = 0x0;
            if ((((int)0x1 << (int)a4) & 0xFC77800) != 0) {
                t4 = 0x1;
            }
            (((struct o228_uint *)(t3))->v) = t4;
            if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 3) {
                (((struct o230_uint *)(t3))->v) = 0x1;
            }
            (((struct o234_uint *)(t3))->v) = (*(int *)0xC23ED50);
            if (((*(int *)0xC23A1A8) & 0x100) == 0) {
                (((struct o21C_uint *)(t3))->v) = (*(int *)(((a4 << 2) + 0xC1FF60C)));
            } else {
                (((struct o21C_uint *)(t3))->v) = (*(int *)((((a4 << 2) << 2) + 0xC20C0B8)));
            }
            if (a6 != 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)(a6); }
            }
            if (a5 != 11) {
            } else {
                (((struct o34_float *)(t3))->v) = ((FUN_0c01f172(t3)) + (*(float *)0xC0558EC));
            }
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}
