/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0371b0(int);
int FUN_0c0da2e0(void);
int FUN_0c0e5f1c(int);
int FUN_0c03048e(int a4);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o340_int { char p[0x340]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B8_int { char p[0x3B8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o500_uint { char p[0x500]; unsigned int v; };
struct o508_uint { char p[0x508]; unsigned int v; };


int FUN_0c03048e(int a4)
{
    int t2;
    int t11;
    int t15;
    int t16;
    int t17;
    int t19;

    if ((((((struct o3B8_int *)(a4))->v)) & 0x1) != 0) {
        t2 = (((struct o340_int *)(a4))->v);
        if (t2 != 1) {
            if (t2 != 2) {
            } else {
                (((struct o2C4_uint *)(a4))->v) = 0x540;
            }
        } else {
            (((struct o2C4_uint *)(a4))->v) = 0x53E;
        }
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o20C_uint *)(a4))->v) = 0x1;
        (((struct o4C8_uint *)(a4))->v) = 0x0;
        (((struct o500_uint *)(a4))->v) = 0x1;
        (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
        return 0x4F8;
    }
    t11 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t11 << 2) + t11) << 2) + 0xC1F8E44))) + 0x0)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o508_uint *)(a4))->v) = 0x0;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    FUN_0c0da2e0();
    t15 = *(int *)(((0x4F4 + a4) + 0x0));
    t16 = *(int *)(((0x4F8 + a4) + 0x0));
    t17 = *(int *)(((0xC1F79BC + (((t15 << 1) + t15) << 2)) + 0x0));
    t19 = (int)((unsigned int)((int)((unsigned int)t16 + (unsigned int)0x0)) + ((((int)0x0 > (int)t16)) ? 1u : 0u));
    *(volatile int *)(((t17 + (((t19 >> 1) << 2) << 1)) + 0x4));
    *(unsigned int *)(((0x3B0 + a4) + 0x0)) = ((FUN_0c0e5f1c((t17 + (((t19 >> 1) << 2) << 1)))) + (*(int *)((a4 + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c0371b0(a4);
}
