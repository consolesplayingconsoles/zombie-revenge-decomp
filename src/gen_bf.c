/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c035f64(int);
int _quick_odd_mvn(int, int, int, float, float);
int FUN_0c02d12c(int a4, int a5, int a6, float f4, float f5);
struct o330_int { char p[0x330]; int v; };
struct o4F0_uint { char p[0x4F0]; unsigned int v; };
struct o4F4_uint { char p[0x4F4]; unsigned int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_uint { char p[0x514]; unsigned int v; };
struct o554_int { char p[0x554]; int v; };
struct o558_uint { char p[0x558]; unsigned int v; };
struct o5CC_uint { char p[0x5CC]; unsigned int v; };


int FUN_0c02d12c(int a4, int a5, int a6, float f4, float f5)
{
    int t5;
    float u7;
    int t9;
    float u17;

    if (((((struct o330_int *)(a4))->v)) != 0) {
        (((struct o4F0_uint *)(a4))->v) = 0x14;
        (((struct o5CC_uint *)(a4))->v) = 0x0;
        (((struct o508_uint *)(a4))->v) = 0x0;
        if (((((struct o554_int *)(a4))->v)) == 2) {
            (((struct o4F4_uint *)(a4))->v) = 0x19;
        } else {
            (((struct o4F4_uint *)(a4))->v) = 0x18;
        }
    } else {
        (((struct o4F0_uint *)(a4))->v) = 0x13;
        (((struct o5CC_uint *)(a4))->v) = 0x1;
        t5 = FUN_0c035f64(a4);
        if ((int)t5 >= 0) {
            u7 = *(float *)((((*(int *)(((0xBC + a4) + 0x0))) << 2) + ((((t5 << 2) << 2) << 2) + 0xC247694)));
            t9 = *(int *)((((t5 << 2) + 0xC2475D4) + 0x0));
            if (((((struct o50C_int *)(a4))->v)) != 0) {
                u17 = (*(float *)(((((*(int *)(((0xBC + a4) + 0x0))) << 2) + (0xC247084 + (((((((struct o510_int *)(a4))->v)) << 2) << 2) << 2))) + 0x0)));
            } else {
                u17 = (*(float *)0xC02D284);
            }
            if (!(u7 > u17)) {
                (((struct o558_uint *)(a4))->v) = t5;
                (((struct o508_uint *)(a4))->v) = 0x1;
                (((struct o514_uint *)(a4))->v) = 0x1;
                _quick_odd_mvn(t5, t9, 0xC2475D4, u17, u7);
                (((struct o4F4_uint *)(a4))->v) = 0x17;
            } else {
                (((struct o558_uint *)(a4))->v) = 0x0;
                (((struct o508_uint *)(a4))->v) = 0x0;
                (((struct o4F4_uint *)(a4))->v) = 0x1;
            }
        } else {
            (((struct o558_uint *)(a4))->v) = 0x0;
            (((struct o508_uint *)(a4))->v) = 0x0;
            (((struct o4F4_uint *)(a4))->v) = 0x1;
        }
    }
    return 0x4F4;
}
