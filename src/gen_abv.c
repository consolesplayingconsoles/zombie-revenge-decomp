/* Straight-line functions with calls and guards (batch gen_abv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c02a19a(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c046170(int, float);
int FUN_0c046294(int, int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c09c42c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0e5f1c(void);
int FUN_0c0480ec(int a4);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o398_uint { char p[0x398]; unsigned int v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o534_uint { char p[0x534]; unsigned int v; };


int FUN_0c0480ec(int a4)
{
    int stk[7];
    register int t1;
    register int t20;
    register int t24;
    register int t48;

    FUN_0c034fbc(a4, 0x80, 0x1, 0x0);
    t1 = (((struct o3A0_int *)(a4))->v);
    switch (t1) {
    case 0:
        (((struct o2C4_uint *)(a4))->v) = 0x5A2;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
        break;
    case 1:
        if ((0xC & ((((struct o2EC_int *)(a4))->v))) == 0) {
        } else {
            (((struct o2C4_uint *)(a4))->v) = 0x5A3;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o3AC_uint *)(a4))->v) = 0x3C;
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
        }
        break;
    case 2:
        t48 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t48 - 1);
        if ((int)(t48 - 1) < 0) {
            (((struct o2C4_uint *)(a4))->v) = 0x5A4;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
        }
        break;
    case 3:
        if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
            (((struct o2C4_uint *)(a4))->v) = 0x5A5;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o3AC_uint *)(a4))->v) = 0xB4;
            FUN_0c0cc3f8(0x324A9, 0x0, 0x0, 0x0);
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
        }
        break;
    case 4:
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F6750); }
        *(float *)(((int)stk + 8)) = 20.0f;
        FUN_0c046294(a4, ((int)stk + 4), 0x1);
        FUN_0c046170(a4, 0.0249999985f);
        t20 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t20 - 1);
        if ((int)(t20 - 1) < 0) {
            FUN_0c09c42c(a4);
            (((struct o2C4_uint *)(a4))->v) = 0x5A6;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
        } else {
            *(volatile int *)((a4 + 0x3AC));
            t24 = FUN_0c0e5f1c();
            if (t24 == 0) {
                FUN_0c0cc3f8(0x324A9, 0x0, 0x0, 0x0);
            }
        }
        break;
    case 5:
        if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
            (((struct o398_uint *)(a4))->v) = 0x384;
            (((struct o534_uint *)(a4))->v) = 0x0;
            (((struct o1B0_uint *)(a4))->v) = 0x0;
            FUN_0c02a19a(a4);
        }
        break;
    }
    return (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
}
