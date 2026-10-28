/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c05265c(float f4);

int FUN_0c05265c(float f4)
{
    int t2;
    int t3;

    t2 = (*(int *)0xC2475CC);
    t3 = (*(int *)0xC2475D0);
    for (;;) {
        t3 = (t3 - 0x1);
        *(float *)(((*(int *)((t2 + 0x0))) + 0x18)) = ((*(float *)((t2 + 0x1C))) + (1.0f - f4));
        t2 = (t2 + 0x24);
        if (t3 == 0) {
            break;
        }
    }
    return FUN_0c0c465c(0x2D);
}
