/* Straight-line functions with calls and guards (batch gen_kv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c1248(int, int);
int FUN_0c0e2a4c(int);
int FUN_0c0c137c(int a4);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c0c137c(int a4)
{
    register int t0;

    t0 = *(int *)(((a4 - 12) + 0x0));
    if ((*(int *)(((a4 - 12) + ((t0 - 1) << 2)))) != t0) {
        (((struct o0_uint *)0xC2622C0)->v) = 0xFFEECC00;
        (((struct o4_uint *)0xC2622C0)->v) = a4;
        (((struct o8_uint *)0xC2622C0)->v) = (*(int *)(((a4 - 12) + 0x0)));
        (((struct oC_uint *)0xC2622C0)->v) = (*(int *)(((a4 - 12) + (((*(int *)(((a4 - 12) + 0x0))) - 1) << 2))));
        for (;;) {
        }
    }
    (((struct o0_uint *)0xC2622C0)->v) = 0xEE00EE;
    (((struct o4_uint *)0xC2622C0)->v) = a4;
    (((struct o8_uint *)0xC2622C0)->v) = (*(int *)(((a4 - 12) + 0x0)));
    (((struct oC_uint *)0xC2622C0)->v) = (*(int *)(((a4 - 12) + (((*(int *)(((a4 - 12) + 0x0))) - 1) << 2))));
    FUN_0c0e2a4c(a4);
    return FUN_0c0c1248(0x0, a4);
}
