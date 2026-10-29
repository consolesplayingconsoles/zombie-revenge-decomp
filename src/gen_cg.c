/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0371b0(int);
int FUN_0c0da2e0(void);
int FUN_0c0e5f1c(int);
int FUN_0c03048e(int a4);

int FUN_0c03048e(int a4)
{
    int t2;
    int t11;
    int t15;
    int t16;
    int t17;
    int t19;

    if (((*(int *)((a4 + 0x3B8))) & 0x1) != 0) {
        t2 = *(int *)((a4 + 0x340));
        if (t2 != 1) {
            if (t2 != 2) {
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x540;
            }
        } else {
            *(unsigned int *)((a4 + 0x2C4)) = 0x53E;
        }
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x20C)) = 0x1;
        *(unsigned int *)((a4 + 0x4C8)) = 0x0;
        *(unsigned int *)((a4 + 0x500)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
        return 0x4F8;
    }
    t11 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t11 << 2) + t11) << 2) + 0xC1F8E44))) + 0x0)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x508)) = 0x0;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    FUN_0c0da2e0();
    t15 = *(int *)(((0x4F4 + a4) + 0x0));
    t16 = *(int *)(((0x4F8 + a4) + 0x0));
    t17 = *(int *)(((0xC1F79BC + (((t15 << 1) + t15) << 2)) + 0x0));
    t19 = (int)((unsigned int)((int)((unsigned int)t16 + (unsigned int)0x0)) + ((((int)0x0 > (int)t16)) ? 1u : 0u));
    *(volatile int *)(((t17 + (((t19 >> 1) << 2) << 1)) + 0x4));
    *(unsigned int *)(((0x3B0 + a4) + 0x0)) = ((FUN_0c0e5f1c((t17 + (((t19 >> 1) << 2) << 1)))) + (*(int *)((a4 + 0x0))));
    *(unsigned int *)((a4 + 0x4C8)) = 0x0;
    *(unsigned int *)((a4 + 0x500)) = 0x1;
    *(unsigned int *)((a4 + 0x4E0)) = 0x0;
    *(unsigned int *)((a4 + 0x4E4)) = 0x0;
    *(unsigned int *)((a4 + 0x4E8)) = 0x0;
    *(unsigned int *)((a4 + 0x4EC)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return FUN_0c0371b0(a4);
}
