/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0961f8(int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c097720(int, int, int, int);
int FUN_0c0a155c(int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e5f1c(void);
int FUN_0c0e5fe4(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0a163c(int a4, int a5, int a6, int a7);
struct o2EC_int { char p[0x2EC]; int v; };
struct o384_uint { char p[0x384]; unsigned int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC8_int { char p[0xC8]; int v; };


int FUN_0c0a163c(int a4, int a5, int a6, int a7)
{
    static const short part[10][4] = {
        {0x000, 0x48, 0, 0}, {0x0C0, 0x60, 1, 0}, {0x100, 0x78, 2, 1}, {0x180, 0x90, 3, 0}, {0x1C0, 0xA8, 4, 2},
        {0x240, 0x120, 9, 0}, {0x280, 0xC0, 5, 0}, {0x2C0, 0xD8, 6, 3}, {0x340, 0xF0, 7, 0}, {0x380, 0x108, 8, 4}
    };
    float v[3];
    float w[3];
    float u;
    int t0;
    int t17;
    int k;
    int j;
    int p;
    int r;

    t0 = *(int *)(a4 + 0x30);
    if ((*(int *)(t0 + 0xC8) & 1) == 0 && (*(int *)(t0 + 0x2EC) & 15) != 0) {
        *(int *)(a4 + 0x34) = 1;
    }
    if (*(int *)((*(int *)(t0 + 0xBC) << 2) + 0xC247030) == 0 || (*(int *)0xC23ED5C & 6) != 0) {
        *(int *)(t0 + 0x384) = 0;
        return FUN_0c0e19f2();
    }
    if (*(int *)(a4 + 0x34) == 0 && *(int *)(a4 + 0x38) >= 0) {
        t17 = *(int *)(a4 + 0x38);
        nlPushMatrix(0);
        for (k = 0; k < 10; k++) {
            FUN_0c0dbda0(*(int *)(t0 + 0x3E4) + part[k][0]);
            for (j = 0; j < 2; j++) {
                FUN_0c0a155c(t17, a4 + part[k][1] + j * 12, part[k][2], *(int *)(a4 + 0x44));
            }
            if (part[k][3] != 0) {
                if (*(int *)(a4 + 0x44) != 0) {
                    FUN_0c0975d0(t17, a4 + 0x138 + (part[k][3] - 1) * 0x50, 1, 0x24);
                } else {
                    FUN_0c097720(t17, a4 + 0x138 + (part[k][3] - 1) * 0x50, 1, 0x24);
                }
            }
            if (k != 0) {
                continue;
            }
            FUN_0c0da2e0();
            FUN_0c0dbda0(*(int *)(t0 + 0x3E4) + ((unsigned char)*(signed char *)(0xC10CE9A + FUN_0c0e5fe4()) << 6));
            if (*(int *)(a4 + 0x38) < 0 || *(int *)(a4 + 0x38) > 0x24) {
                continue;
            }
            FUN_0c0db840((int)v);
            w[0] = v[0];
            w[1] = v[1];
            w[2] = v[2];
            p = ((t17 >= 0 ? (t17 & 0xF) : (~((~t17 + 1) & 0xF) + 1)) << 1) * 0x1C + a4 + 0x368;
            for (j = 0; j < 2; j++, p += 0x1C) {
                *(int *)(p + 0x18) = 0x28;
                *(float *)(p + 0x0) = w[0];
                *(float *)(p + 0x4) = w[1];
                *(float *)(p + 0x8) = w[2];
                for (r = 0xC; r <= 0x14; r += 4) {
                    u = (float)(FUN_0c0da2e0() & 0x7FFF);
                    u = u * 0.5f;
                    u = u / 32767.0f;
                    u = u + -0.25f;
                    *(float *)(p + r) = u;
                }
            }
            if (*(int *)(a4 + 0x38) < 0 || *(int *)(a4 + 0x38) > 0x24) {
                continue;
            }
            FUN_0c0db840((int)v);
            w[0] = v[0];
            w[1] = v[1];
            w[2] = v[2];
            p = FUN_0c0e5f1c() * 24 + a4 + 0x278;
            *(int *)(p + 0x0) = 0x14;
            *(int *)(p + 0x10) = -(FUN_0c0da2e0() & 0x4000) + 0xE000;
            *(float *)(p + 0x14) = ((float)(unsigned char)FUN_0c0da2e0() / 512.0f) + 0.25f;
            for (j = 0; j < 3; j++) {
                u = w[j];
                u = u + 4.0f * ((float)(unsigned char)FUN_0c0da2e0() / 255.0f);
                *(float *)(p + 4 + j * 4) = u + -2.0f;
            }
        }
        nlPopMatrix(1);
    }
    if (*(int *)(a4 + 0x44) != 0) {
        FUN_0c096094(a4 + 0x368, 0x20);
        u = *(float *)0xC0A1CC0;
        FUN_0c084800(u, u, 1.0f);
    } else {
        FUN_0c0961f8(a4 + 0x368, 0x20);
        FUN_0c084800(1.0f, *(float *)0xC0A1CC4, 0.5f);
    }
    FUN_0c095fa0(a4 + 0x278, 0xA);
    r = FUN_0c0849da();
    if (--*(int *)(a4 + 0x3C) < 0) {
        *(int *)(a4 + 0x3C) = *(int *)(a4 + 0x40);
        r = 0x40;
        if (++*(int *)(a4 + 0x38) > 0x64) {
            *(int *)(t0 + 0x384) = 0;
            r = FUN_0c0e19f2();
        }
    }
    return r;
}
