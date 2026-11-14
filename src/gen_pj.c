/* Straight-line functions with calls and guards (batch gen_pj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
int FUN_0c01ac8c(void);
int FUN_0c0b607c(void);
int FUN_0c0b63e8(void);
int FUN_0c0c0340(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0c0120(int a4);
int FUN_0c0b5ff4(int a4, int a5);

int FUN_0c0c0120(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    (((struct o34_float *)(a4))->v) = 320.0f;
    (((struct o38_float *)(a4))->v) = 240.0f;
    t0 = FUN_0c0da2e0();
    if ((t0 & 3) != 0) {
        t0 = FUN_0c0da2e0();
        if ((t0 & 7) == 0) {
            t0 = FUN_0c0da2e0();
            t1 = FUN_0c0da2e0();
            u0 = 0.00305185094f;
            u1 = ((float)t0 * (FUN_0c0da410((t1 << 1))));
        } else {
            t0 = FUN_0c0da2e0();
            t1 = FUN_0c0da2e0();
            u0 = 0.000305185094f;
            u1 = ((float)t0 * (FUN_0c0da410((t1 << 1))));
        }
        u2 = ((((struct o38_float *)(a4))->v));
        u2 = u2 + u0 * u1;
        (((struct o38_float *)(a4))->v) = u2;
    }
    t0 = FUN_0c0da2e0();
    if ((t0 & 31) == 0) {
        (((struct o58_uint *)(a4))->v) = (unsigned char)(FUN_0c0da2e0());
    } else {
        (((struct o58_uint *)(a4))->v) = 0x0;
    }
    if (((*(int *)0xC23A258) & 1) != 0) {
        *(unsigned int *)((a4 + 0x30)) = 0x206F;
    } else {
        *(unsigned int *)((a4 + 0x30)) = 0x2070;
    }
    return FUN_0c0c0340((a4 + 0x30));
}

int FUN_0c0b5ff4(int a4, int a5)
{
    FUN_0c0b607c();
    FUN_0c01ac8c();
    return FUN_0c0b63e8();
}
