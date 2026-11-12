/* Straight-line functions with calls and guards (batch gen_uu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4DC_int { char p[0x4DC]; int v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c08e9e0(int);
int FUN_0c042164(int a4);

int FUN_0c042164(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o4E4_int *)(a4))->v);
    (((struct o4E4_uint *)(a4))->v) = (t0 - 1);
    t1 = 0x4E4;
    if ((int)(t0 - 1) < 0) {
        t0 = (((struct o2EC_int *)(a4))->v);
        t1 = t0;
        if ((t0 & 12) != 0) {
            t0 = (((struct o4DC_int *)(a4))->v);
            t1 = (((struct o4E0_int *)(a4))->v);
            (((struct o4E0_uint *)(a4))->v) = (t1 + 0x1);
            if ((int)(*(short *)((((((t1 + 0x1) << 2) << 1) + (*(int *)((((((t0 - 76) << 1) + (t0 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                if (((*(int *)0xC23A1A8) & 1) == 0) {
                    *(volatile float *)0xC042274;
                    FUN_0c08e9e0(0x258);
                }
                *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x200);
                FUN_0c03f4bc(a4);
            } else {
                FUN_0c041dd0(a4);
            }
            t0 = (((struct o4E0_int *)(a4))->v);
            t1 = t0;
            if (t0 == 1) {
                t0 = *(int *)0xC23A1A8;
                if ((t0 & 1) != 0) {
                    (((struct o0_uint *)0xC23EDB0)->v) = 0x0;
                    (((struct o4_uint *)0xC23EDB0)->v) = 0x0;
                }
                t1 = t0;
            }
        }
    }
    return t1;
}
