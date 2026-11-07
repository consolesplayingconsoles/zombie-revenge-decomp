/* Straight-line functions with calls and guards (batch gen_ng): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
float FUN_0c0ed6d8(int a4, int a5, int a6);

float FUN_0c0ed6d8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u4;
    register float u5;
    register float u6;
    register float u8;
    register float u9;
    register float u10;
    float u3[4];
    float u7[4];
    float u20[4];
    float u24[4];
    float u29[4];

    _builtin_prefetch((void *)a4);
    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    _builtin_prefetch((void *)(((a4 + 0x4) + 0x4) + 0x10));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    if ((a6 - 0x1) != 0) {
        u0 = *(float *)(((((a4 + 0x4) + 0x4) + 0x10) + 0x0));
        u1 = *(float *)((((((a4 + 0x4) + 0x4) + 0x10) + 0x4) + 0x0));
        u2 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x10) + 0x4) + 0x4) + 0x0));
        _builtin_prefetch((void *)((((((a4 + 0x4) + 0x4) + 0x10) + 0x4) + 0x4) + 0x10));
        u7[0] = u0;
        u7[1] = u1;
        u7[2] = u2;
        u7[3] = 1.0f;
        _builtin_ftrv(u7, u7);
        if (((a6 - 0x1) - 0x1) != 0) {
            t0 = ((((((a4 + 0x4) + 0x4) + 0x10) + 0x4) + 0x4) + 0x10);
            t1 = a5;
            t2 = ((a6 - 0x1) - 0x1);
            u0 = u3[0];
            u1 = u3[1];
            u2 = u7[0];
            u4 = u7[1];
            u5 = u7[3];
            u6 = (1.0f / u3[3]);
            for (;;) {
                _builtin_prefetch((void *)t1);
                u8 = *(float *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                u9 = *(float *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                u10 = *(float *)((t0 + 0x0));
                t0 = (t0 + 0x10);
                _builtin_prefetch((void *)t0);
                t2 = (t2 - 0x1);
                u1 = (u1 * u6);
                t1 = (t1 + 0xC);
                u0 = (u0 * u6);
                u20[0] = u8;
                u20[1] = u9;
                u20[2] = u10;
                u20[3] = 1.0f;
                _builtin_ftrv(u20, u20);
                *(float *)(((t1 - 0x4) + 0x0)) = u6;
                t1 = (t1 - 0x4);
                *(float *)(((t1 - 0x4) + 0x0)) = u1;
                t1 = (t1 - 0x4);
                *(float *)(((t1 - 0x4) + 0x0)) = u0;
                t1 = (t1 - 0x4);
                t1 = (t1 + 0x10);
                if (t2 != 0) {
                    _builtin_prefetch((void *)t1);
                    u0 = (*(float *)((t0 + 0x0)));
                    t0 = (t0 + 0x4);
                    u1 = (*(float *)((t0 + 0x0)));
                    t0 = (t0 + 0x4);
                    u8 = *(float *)((t0 + 0x0));
                    t0 = (t0 + 0x10);
                    _builtin_prefetch((void *)t0);
                    t2 = (t2 - 0x1);
                    u4 = (u4 * (1.0f / u5));
                    t1 = (t1 + 0xC);
                    u2 = (u2 * (1.0f / u5));
                    u24[0] = u0;
                    u24[1] = u1;
                    u24[2] = u8;
                    u24[3] = 1.0f;
                    _builtin_ftrv(u24, u24);
                    u0 = u24[0];
                    u1 = u24[1];
                    *(float *)(((t1 - 0x4) + 0x0)) = (1.0f / u5);
                    t1 = (t1 - 0x4);
                    *(float *)(((t1 - 0x4) + 0x0)) = u4;
                    t1 = (t1 - 0x4);
                    *(float *)(((t1 - 0x4) + 0x0)) = u2;
                    t1 = (t1 - 0x4);
                    t1 = (t1 + 0x10);
                    if (t2 != 0) {
                        _builtin_prefetch((void *)t1);
                        u6 = 1.0f;
                        u2 = (*(float *)((t0 + 0x0)));
                        t0 = (t0 + 0x4);
                        u4 = (*(float *)((t0 + 0x0)));
                        t0 = (t0 + 0x4);
                        u8 = *(float *)((t0 + 0x0));
                        t0 = (t0 + 0x10);
                        u5 = 1.0f;
                        _builtin_prefetch((void *)t0);
                        u6 = (u6 / u24[3]);
                        t2 = (t2 - 0x1);
                        t1 = (t1 + 0xC);
                        u29[0] = u2;
                        u29[1] = u4;
                        u29[2] = u8;
                        u29[3] = u5;
                        _builtin_ftrv(u29, u29);
                        u2 = u29[0];
                        u4 = u29[1];
                        u5 = u29[3];
                        *(float *)(((t1 - 0x4) + 0x0)) = (1.0f / u20[3]);
                        t1 = (t1 - 0x4);
                        *(float *)(((t1 - 0x4) + 0x0)) = (u20[1] * (1.0f / u20[3]));
                        t1 = (t1 - 0x4);
                        *(float *)(((t1 - 0x4) + 0x0)) = (u20[0] * (1.0f / u20[3]));
                        t1 = (t1 - 0x4);
                        t1 = (t1 + 0x10);
                        if (t2 == 0) {
                            break;
                        }
                        continue;
                    }
                    _builtin_prefetch((void *)t1);
                    u6 = 1.0f;
                    u6 = (u6 / u24[3]);
                    t1 = (t1 + 0xC);
                    *(float *)(((t1 - 0x4) + 0x0)) = (1.0f / u20[3]);
                    t1 = (t1 - 0x4);
                    *(float *)(((t1 - 0x4) + 0x0)) = (u20[1] * (1.0f / u20[3]));
                    t1 = (t1 - 0x4);
                    *(float *)(((t1 - 0x4) + 0x0)) = (u20[0] * (1.0f / u20[3]));
                    t1 = (t1 - 0x4);
                    u1 = (u1 * u6);
                    t1 = (t1 + 0x1C);
                    u0 = (u0 * u6);
                    *(float *)(((t1 - 0x4) + 0x0)) = u6;
                    t1 = (t1 - 0x4);
                    *(float *)(((t1 - 0x4) + 0x0)) = u1;
                    t1 = (t1 - 0x4);
                    *(float *)(((t1 - 0x4) + 0x0)) = u0;
                    t1 = (t1 - 0x4);
                    return u0;
                }
                _builtin_prefetch((void *)t1);
                u4 = (u4 * (1.0f / u5));
                t1 = (t1 + 0xC);
                u2 = (u2 * (1.0f / u5));
                *(float *)(((t1 - 0x4) + 0x0)) = (1.0f / u5);
                t1 = (t1 - 0x4);
                *(float *)(((t1 - 0x4) + 0x0)) = u4;
                t1 = (t1 - 0x4);
                *(float *)(((t1 - 0x4) + 0x0)) = u2;
                t1 = (t1 - 0x4);
                t1 = (t1 + 0x1C);
                *(float *)(((t1 - 0x4) + 0x0)) = (1.0f / u20[3]);
                t1 = (t1 - 0x4);
                *(float *)(((t1 - 0x4) + 0x0)) = (u20[1] * (1.0f / u20[3]));
                t1 = (t1 - 0x4);
                *(float *)(((t1 - 0x4) + 0x0)) = (u20[0] * (1.0f / u20[3]));
                t1 = (t1 - 0x4);
                return u0;
            }
            _builtin_prefetch((void *)t1);
            *(float *)((((t1 + 0xC) - 0x4) + 0x0)) = u6;
            *(float *)(((((t1 + 0xC) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
            *(float *)((((((t1 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
            *(float *)((((((((t1 + 0xC) - 0x4) - 0x4) - 0x4) + 0x1C) - 0x4) + 0x0)) = (1.0f / u5);
            *(float *)(((((((((t1 + 0xC) - 0x4) - 0x4) - 0x4) + 0x1C) - 0x4) - 0x4) + 0x0)) = (u4 * (1.0f / u5));
            *(float *)((((((((((t1 + 0xC) - 0x4) - 0x4) - 0x4) + 0x1C) - 0x4) - 0x4) - 0x4) + 0x0)) = (u2 * (1.0f / u5));
            return (u0 * u6);
        }
        _builtin_prefetch((void *)a5);
        *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = (1.0f / u3[3]);
        *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = (u3[1] * (1.0f / u3[3]));
        *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u3[0] * (1.0f / u3[3]));
        *(float *)((((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x1C) - 0x4) + 0x0)) = (1.0f / u7[3]);
        *(float *)(((((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x1C) - 0x4) - 0x4) + 0x0)) = (u7[1] * (1.0f / u7[3]));
        *(float *)((((((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x1C) - 0x4) - 0x4) - 0x4) + 0x0)) = (u7[0] * (1.0f / u7[3]));
        return (u3[0] * (1.0f / u3[3]));
    }
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = (1.0f / u3[3]);
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = (u3[1] * (1.0f / u3[3]));
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u3[0] * (1.0f / u3[3]));
    return (u3[0] * (1.0f / u3[3]));
}

