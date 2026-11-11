/* Straight-line functions with calls and guards (batch gen_mj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
int FUN_0c02134a(void);
int FUN_0c021376(void);
int FUN_0c044638(void);
int FUN_0c0451c0(void);
int FUN_0c04533a(int);
int FUN_0c045544(int);
int FUN_0c045588(int);
int FUN_0c04561a(int);
int FUN_0c04569c(int);
int FUN_0c045756(void);
int FUN_0c045840(void);
int FUN_0c04590c(int);
int FUN_0c045ca2(int);
int FUN_0c045cce(int a4);

int FUN_0c045cce(int a4)
{
    register int t0;

    if (((*(int *)0xC2497E0) & 4) != 0) {
        if ((*(int *)((a4 + 0x30))) == 0) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            (((struct o4C_uint *)(a4))->v) = 0x0;
            (((struct o60_uint *)(a4))->v) = 0x14;
            (((struct o68_uint *)(a4))->v) = ((((struct o64_int *)(a4))->v));
            *(unsigned int *)(((*(int *)((((((struct o64_int *)(a4))->v)) + 0x8))) + 0x0)) = 0x0;
            FUN_0c02134a();
        } else {
            *(unsigned int *)((a4 + 0x30)) = 0x0;
            (((struct o6C_uint *)(a4))->v) = 0x0;
            FUN_0c021376();
        }
    }
    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c045ca2(a4);
            if (((*(int *)0xC249838) & 4) != 0) {
                (((struct o6C_uint *)(a4))->v) = 0x2;
                *(unsigned int *)((a4 + 0x30)) = 0x0;
                FUN_0c021376();
            }
        }
    } else {
        if ((int)((((struct o6C_int *)(a4))->v)) > 0) {
            t0 = (((struct o6C_int *)(a4))->v);
            (((struct o6C_uint *)(a4))->v) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                (((struct o6C_uint *)(a4))->v) = 0x0;
                *(unsigned int *)((a4 + 0x30)) = 0x1;
                FUN_0c02134a();
            }
        }
    }
    FUN_0c044638();
    FUN_0c0451c0();
    FUN_0c04533a(a4);
    FUN_0c045544(a4);
    FUN_0c045588(a4);
    FUN_0c04561a(a4);
    FUN_0c04569c(a4);
    FUN_0c045756();
    FUN_0c045840();
    return FUN_0c04590c(a4);
}
