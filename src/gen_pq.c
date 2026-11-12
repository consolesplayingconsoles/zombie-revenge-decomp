/* Straight-line functions with calls and guards (batch gen_pq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o288_int { char p[0x288]; int v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c0855f4(int);
int FUN_0c0b359e(int, int);
int FUN_0c0b35e4(int);
int FUN_0c0bb134(int);
int FUN_0c0c44d6(int, int, int);
int FUN_0c0e19f2(void);
int FUN_0c0b2c7e(int a4);

int FUN_0c0b2c7e(int a4)
{
    if ((*(int *)0xC23ED9C) != 24) {
        FUN_0c0bb134(a4);
        FUN_0c0855f4(a4);
        FUN_0c0c44d6((*(int *)0xC23ED50), ((((struct oC0_int *)(a4))->v)), 0x0);
        FUN_0c0e19f2();
    }
    if (((((struct o288_int *)(a4))->v)) == 0) {
        FUN_0c0b359e(a4, (*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC1FE7E0))));
        (((struct o288_uint *)(a4))->v) = (((((struct o288_int *)(a4))->v)) + 0x1);
        return 0x288;
    }
    return FUN_0c0b35e4(a4);
}
