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
struct o1CC_int { char p[0x1CC]; int v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o230_int { char p[0x230]; int v; };
struct o234_int { char p[0x234]; int v; };
struct o380_int { char p[0x380]; int v; };
struct o3DC_int { char p[0x3DC]; int v; };
struct o3E8_int { char p[0x3E8]; int v; };
struct o3EC_float { char p[0x3EC]; float v; };
struct o3F0_float { char p[0x3F0]; float v; };
struct o400_int { char p[0x400]; int v; };
struct o410_int { char p[0x410]; int v; };
struct o414_int { char p[0x414]; int v; };
struct o48C_int { char p[0x48C]; int v; };
struct o5C8_int { char p[0x5C8]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };


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

    if ((((struct o48C_int *)(a4))->v) == 21 && a5 == 1) {
        FUN_0c0da2e0();
        FUN_0c0da2e0();
        return FUN_0c033530(a4, a8);
    }
    t7 = FUN_0c0e1830(0xC03840E, 0x41C);
    FUN_0c0e19d0(t7);
    t14 = *(int *)(((((struct oC0_int *)(a4))->v) << 2) + 0xC195BE0);
    (((struct o21C_int *)(t7))->v) = a10;
    (((struct o1DC_int *)(t7))->v) = (((struct o6E_short *)(a4))->v) - 32768;
    (((struct o1CC_int *)(t7))->v) = a8;
    (((struct o414_int *)(t7))->v) = (((struct o5C8_int *)(a4))->v);
    (((struct o3EC_float *)(t7))->v) = 0.0272199996f;
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
    (((struct o400_int *)(t7))->v) = a5;
    k = (unsigned int)a5 < 0x10 ? kind[a5] : 5;
    if (k >= 0) {
        b = (((struct o6E_short *)(a4))->v);
        (((struct o3E8_int *)(t7))->v) = (FUN_0c0da2e0() & 0x3800) + b + ang[k];
        if (k == 0 || k == 3) {
            (((struct o3E8_int *)(t7))->v) += FUN_0c0da2e0() & 0x8000;
        }
        t40 = (((struct oBC_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t7 + 0x30) = *(struct mv3 *)(t40 * 0x30 + 0xC23F268 + bone[k]); }
        (((struct o3F0_float *)(t7))->v) = k == 0 ? 1.19999993f : k <= 2 ? 1.5f : k == 3 ? (1.0f + 1.0f) : *(float *)0xC038C28;
    }
    FUN_0c0376f4(t7);
    FUN_0c037954(t7);
    (((struct o3DC_int *)(t7))->v) = -1;
    FUN_0c037acc(t7);
    h = (((struct o3F0_float *)(t7))->v) / (1.0f + 1.0f);
    v[0] = 0.0f;
    s = *(float *)0xC038C40 / h;
    r = *(float *)0xC038C38;
    r = r + *(float *)0xC038C3C * (float)(FUN_0c0da2e0() & 0x7);
    v[1] = s * r;
    s = ((float)(((struct o1CC_int *)(t7))->v) * *(float *)0xC038C44) / h;
    r = *(float *)0xC038C38;
    r = r + *(float *)0xC038C3C * (float)(FUN_0c0da2e0() & 0x7);
    v[2] = s * r;
    d[0] = 0.0f;
    *(int *)&d[1] = (((struct o3E8_int *)(t7))->v) + 0x8000;
    d[2] = 0.0f;
    FUN_0c0a6610((int)v, (int)d, 0x220 + t7);
    (((struct o22C_int *)(t7))->v) = FUN_0c0da2e0() & 0x900;
    (((struct o230_int *)(t7))->v) = 0;
    (((struct o234_int *)(t7))->v) = FUN_0c0da2e0() & 0x400;
    (((struct o410_int *)(t7))->v) = 0;
    if ((((struct o380_int *)(a4))->v) != 0) {
        return FUN_0c036d86(t7, *(int *)(((struct o380_int *)(a4))->v));
    }
    return 0x380;
}
