/* Straight-line functions with calls and guards (batch gen_ms): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c054654(int a4, int a5, int a6, int a7);

int FUN_0c054654(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t0 = 0;
    if (a7 != 0) {
        t1 = *(short *)((a4 + 0x6E));
        t2 = 0;
        if (_builtin_fabsf((float)(short)(t1 - a5)) > 16384.0f) {
            t3 = 0;
            if ((int)(unsigned short)(int)_builtin_fabsf((float)(int)(0xFFFF8000 + (short)(t1 - a5))) > (int)a6) {
                if ((int)(unsigned short)(short)(t1 - a5) <= (int)0x8000) {
                    t4 = ((*(short *)((a4 + 0x6E))) + a6);
                } else {
                    t4 = ((*(short *)((a4 + 0x6E))) - a6);
                }
                *(unsigned short *)((a4 + 0x6E)) = t4;
                t5 = t4;
                t3 = (((int)(unsigned short)(short)(t1 - a5) > (int)0x8000));
            } else {
                *(unsigned short *)((a4 + 0x6E)) = (a5 - 32768);
                t5 = (unsigned short)(int)_builtin_fabsf((float)(int)(0xFFFF8000 + (short)(t1 - a5)));
                t3 = (0);
            }
            u0 = _builtin_fabsf((float)(int)(0xFFFF8000 + (short)(t1 - a5)));
            t4 = (int)_builtin_fabsf((float)(int)(0xFFFF8000 + (short)(t1 - a5)));
            t2 = (t3);
        } else {
            t3 = 0;
            if (_builtin_fabsf((float)(short)(t1 - a5)) > (float)a6) {
                if ((int)(short)(t1 - a5) > 0) {
                    t5 = ((*(short *)((a4 + 0x6E))) - a6);
                } else {
                    t5 = ((*(short *)((a4 + 0x6E))) + a6);
                }
                *(unsigned short *)((a4 + 0x6E)) = t5;
                t3 = (((int)(short)(t1 - a5) > 0));
            } else {
                *(unsigned short *)((a4 + 0x6E)) = a5;
                t3 = (0);
            }
            u0 = _builtin_fabsf((float)(short)(t1 - a5));
            t4 = a6;
            t2 = (t3);
        }
        u1 = u0;
        t0 = (t2);
    } else {
        t1 = *(short *)((a4 + 0x6E));
        t2 = a5;
        if (_builtin_fabsf((float)(short)(t1 - a5)) > 16384.0f) {
            t2 = (a5 - 32768);
        }
        *(unsigned short *)((a4 + 0x6E)) = t2;
        u1 = _builtin_fabsf((float)(short)(t1 - a5));
        t0 = ((_builtin_fabsf((float)(short)(t1 - a5)) > 16384.0f));
    }
    return 0x6E;
}
