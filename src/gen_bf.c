/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c035f64(int);
int FUN_0c0e61d4(int, int, int, float, float);
int FUN_0c02d12c(int a4, int a5, int a6, float f4, float f5);

int FUN_0c02d12c(int a4, int a5, int a6, float f4, float f5)
{
    int t5;
    float u7;
    int t9;
    float u17;

    if ((*(int *)((a4 + 0x330))) != 0) {
        *(unsigned int *)((a4 + 0x4F0)) = 0x14;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        *(unsigned int *)((a4 + 0x508)) = 0x0;
        if ((*(int *)((a4 + 0x554))) == 2) {
            *(unsigned int *)((a4 + 0x4F4)) = 0x19;
        } else {
            *(unsigned int *)((a4 + 0x4F4)) = 0x18;
        }
    } else {
        *(unsigned int *)((a4 + 0x4F0)) = 0x13;
        *(unsigned int *)((a4 + 0x5CC)) = 0x1;
        t5 = FUN_0c035f64(a4);
        if ((int)t5 >= 0) {
            u7 = *(float *)((((*(int *)(((0xBC + a4) + 0x0))) << 2) + ((((t5 << 2) << 2) << 2) + 0xC247694)));
            t9 = *(int *)((((t5 << 2) + 0xC2475D4) + 0x0));
            if ((*(int *)((a4 + 0x50C))) != 0) {
                u17 = (*(float *)(((((*(int *)(((0xBC + a4) + 0x0))) << 2) + (0xC247084 + ((((*(int *)((a4 + 0x510))) << 2) << 2) << 2))) + 0x0)));
            } else {
                u17 = (*(float *)0xC02D284);
            }
            if (!(u7 > u17)) {
                *(unsigned int *)((a4 + 0x558)) = t5;
                *(unsigned int *)((a4 + 0x508)) = 0x1;
                *(unsigned int *)((a4 + 0x514)) = 0x1;
                FUN_0c0e61d4(t5, t9, 0xC2475D4, u17, u7);
                *(unsigned int *)((a4 + 0x4F4)) = 0x17;
            } else {
                *(unsigned int *)((a4 + 0x558)) = 0x0;
                *(unsigned int *)((a4 + 0x508)) = 0x0;
                *(unsigned int *)((a4 + 0x4F4)) = 0x1;
            }
        } else {
            *(unsigned int *)((a4 + 0x558)) = 0x0;
            *(unsigned int *)((a4 + 0x508)) = 0x0;
            *(unsigned int *)((a4 + 0x4F4)) = 0x1;
        }
    }
    return 0x4F4;
}
