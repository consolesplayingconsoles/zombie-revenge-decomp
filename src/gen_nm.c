/* Straight-line functions with calls and guards (batch gen_nm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c033530(int, int);
int FUN_0c036d86(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037acc(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    static const signed char kind[16] = {-1, 0, -1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 3, 5, 5};
    static const int ang[6] = {-8192, 0x2000, 0xA000, -8192, 0x2000, 0xA000};
    static const unsigned char bone[6] = {0xC, 0x24, 0x3C, 0x48, 0x48, 0x60};
    float v[3];
    float d[3];
    float s;
    float h;
    float r;
    int t7;
    int t14;
    int t40;
    int k;
    int i;
    int b;

    if (*(int *)(a4 + 0x48C) == 21 && a5 == 1) {
        FUN_0c0da2e0();
        FUN_0c0da2e0();
        return FUN_0c033530(a4, a8);
    }
    t7 = FUN_0c0e1830(0xC03840E, 0x41C);
    FUN_0c0e19d0(t7);
    t14 = *(int *)((*(int *)(a4 + 0xC0) << 2) + 0xC195BE0);
    *(int *)(t7 + 0x21C) = a10;
    *(int *)(t7 + 0x1DC) = *(short *)(a4 + 0x6E) - 32768;
    *(int *)(t7 + 0x1CC) = a8;
    *(int *)(t7 + 0x414) = *(int *)(a4 + 0x5C8);
    *(float *)(t7 + 0x3EC) = 0.0272199996f;
    for (i = 0; i < 3; i++) {
        *(int *)(t7 + 0x238 + i * 4) = *(short *)(a9 + i * 2);
    }
    for (i = 0; i < 3; i++) {
        *(float *)(t7 + 0x268 + i * 4) = 0.0f;
    }
    for (i = 0; i < 3; i++) {
        *(float *)(t7 + 0x274 + i * 4) = *(float *)(a6 * 12 + t14 + i * 4) * *(float *)(a4 + 0x274 + i * 4);
    }
    for (i = 0; i < 3; i++) {
        *(float *)(t7 + 0x280 + i * 4) = *(float *)(t14 + a7 * 12 + i * 4) * *(float *)(a4 + 0x274 + i * 4);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)d = *(struct mv3 *)0xC0F5630; }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x28C + t7) = *(struct mv3 *)d; }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x298 + t7) = *(struct mv3 *)d; }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x2A4 + t7) = *(struct mv3 *)d; }
    *(int *)(t7 + 0x400) = a5;
    k = (unsigned int)a5 < 0x10 ? kind[a5] : 5;
    if (k >= 0) {
        b = *(short *)(a4 + 0x6E);
        *(int *)(t7 + 0x3E8) = (FUN_0c0da2e0() & 0x3800) + b + ang[k];
        if (k == 0 || k == 3) {
            *(int *)(t7 + 0x3E8) += FUN_0c0da2e0() & 0x8000;
        }
        t40 = *(int *)(a4 + 0xBC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t7 + 0x30) = *(struct mv3 *)(t40 * 0x30 + 0xC23F268 + bone[k]); }
        *(float *)(t7 + 0x3F0) = k == 0 ? 1.19999993f : k <= 2 ? 1.5f : k == 3 ? (1.0f + 1.0f) : *(float *)0xC038C28;
    }
    FUN_0c0376f4(t7);
    FUN_0c037954(t7);
    *(int *)(t7 + 0x3DC) = -1;
    FUN_0c037acc(t7);
    h = *(float *)(t7 + 0x3F0) / (1.0f + 1.0f);
    v[0] = 0.0f;
    s = *(float *)0xC038C40 / h;
    r = *(float *)0xC038C38;
    r = r + *(float *)0xC038C3C * (float)(FUN_0c0da2e0() & 0x7);
    v[1] = s * r;
    s = ((float)*(int *)(t7 + 0x1CC) * *(float *)0xC038C44) / h;
    r = *(float *)0xC038C38;
    r = r + *(float *)0xC038C3C * (float)(FUN_0c0da2e0() & 0x7);
    v[2] = s * r;
    d[0] = 0.0f;
    *(int *)&d[1] = *(int *)(t7 + 0x3E8) + 0x8000;
    d[2] = 0.0f;
    FUN_0c0a6610((int)v, (int)d, 0x220 + t7);
    *(int *)(0x22C + t7) = FUN_0c0da2e0() & 0x900;
    *(int *)(t7 + 0x230) = 0;
    *(int *)(0x234 + t7) = FUN_0c0da2e0() & 0x400;
    *(int *)(t7 + 0x410) = 0;
    if (*(int *)(a4 + 0x380) != 0) {
        return FUN_0c036d86(t7, *(int *)*(int *)(a4 + 0x380));
    }
    return 0x380;
}
