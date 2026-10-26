/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void adxf_wait_1ms(void);

void adxf_wait_1ms(void)
{
    int t0;

    t0 = 0xC350;
    for (;;) {
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
}
