/* Straight-line functions with calls and guards (batch gen_ky): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutInit(int a4, int a5, int a6, int a7);

int nlObjPutInit(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    *(float *)0xC948254 = (*(float *)0xC20CE48);
    *(unsigned int *)0xC94C688 = 0x0;
    u0 = *(float *)0xC0DE340;
    u1 = *(float *)0xC0DE344;
    u2 = *(float *)0xC0DE348;
    t0 = 0x0;
    t1 = a7;
    for (;;) {
        t3 = 0x0;
        for (;;) {
            *(float *)(((((t0 << 8) << 1) + 0xC948640) + (t3 << 2))) = 0.0f;
            u3 = ((((float)t3 * u0) / u2) + u1);
            u4 = ((((float)t3 * u0) / u2) + u1);
            u5 = (((u3 * u4) + (u3 * u4)) - 1.0f);
            u6 = (((u3 * u4) + (u3 * u4)) - 1.0f);
            if ((int)t0 < (int)0x2) {
                *(float *)(((((t0 << 8) << 1) + 0xC948640) + (t3 << 2))) = (u5 * u6);
            } else {
                t1 = 0x0;
                u3 = 1.0f;
                if ((int)t0 > 0) {
                    u4 = 1.0f;
                    for (;;) {
                        t1 = (t1 + 0x1);
                        u7 = (u5 * u6);
                        u4 = (u4 * u7);
                        if ((int)t1 >= (int)t0) {
                            break;
                        }
                    }
                    u3 = u4;
                }
                *(float *)(((((t0 << 8) << 1) + 0xC948640) + (t3 << 2))) = u3;
            }
            t2 = (t3 << 2);
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x80) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x20) {
            break;
        }
    }
    return t2;
}
