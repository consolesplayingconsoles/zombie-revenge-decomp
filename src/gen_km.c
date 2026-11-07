/* Straight-line functions with calls and guards (batch gen_km): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c9dfce0(int a4);

float FUN_0c9dfce0(int a4)
{
    register int t0;
    register int t1;
    register float u2;

    t0 = *(short *)(((a4 + 0x4) + 0x0));
    t1 = *(short *)((((a4 + 0x4) + 0x2) + 0x0));
    *(unsigned int *)(((int)_builtin_get_gbr() + 96)) = ((((unsigned int)t0) << 16) | (((unsigned int)((((unsigned int)t0) << 16) | (((unsigned int)t0) >> 16))) >> 16));
    u2 = *(float *)0xC9DFDE8;
    *(float *)0xC9DD1CC = ((float)(unsigned char)t0 * u2);
    *(float *)0xC9DD1C8 = ((float)(unsigned char)((unsigned int)t0 >> 8) * u2);
    *(float *)0xC9DD1C4 = ((float)(unsigned char)t1 * u2);
    *(float *)0xC9DD1C0 = ((float)(unsigned char)((unsigned int)t1 >> 8) * u2);
    return ((float)(unsigned char)t0 * u2);
}
