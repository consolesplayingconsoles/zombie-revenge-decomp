/* Straight-line functions with calls and guards (batch gen_pt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0562b4(int);
int FUN_0c0564d0(int);
int FUN_0c057e2a(int);
int FUN_0c057f2c(int);
int FUN_0c049b80(int a4);

int FUN_0c049b80(int a4)
{
    register int t0;

    t0 = FUN_0c0562b4(a4);
    if (t0 != 0) {
        t0 = FUN_0c0564d0(a4);
        if (t0 != 0) {
            *(unsigned int *)((a4 + 0x20C)) = 0x200000;
            *(unsigned int *)((a4 + 0x210)) = 0x3A;
            return 0xFFFFFFFF;
        }
        t0 = FUN_0c057f2c(a4);
    } else {
        t0 = FUN_0c057e2a(a4);
    }
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned int *)((a4 + 0x210)) = 0x0;
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    if ((int)(*(int *)((a4 + 0x394))) > 0) {
        *(unsigned int *)((a4 + 0x394)) = 0x0;
    }
    return 0x394;
}
