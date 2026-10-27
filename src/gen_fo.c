/* Straight-line functions with calls and guards (batch gen_fo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int, int);
int kmSetCheapShadowMode(int a4);

int kmSetCheapShadowMode(int a4)
{
    int t2;

    if ((int)a4 < 0) {
        *(unsigned int *)0xC239B24 = 0x1;
    } else {
        *(unsigned int *)0xC239B24 = 0x0;
    }
    t2 = *(int *)0xC239B24;
    kmiWriteRegister(0x74, (((0x1 - t2) << 8) | (unsigned char)a4), ((0x1 - t2) << 8));
    return 0x0;
}
