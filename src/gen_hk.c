/* Straight-line functions with calls and guards (batch gen_hk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c098e1c(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c098f08(int a4, int a5, int a6, int a7);
struct o14_float { char p[0x14]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c098f08(int a4, int a5, int a6, int a7)
{
    static const short part[10][4] = {
        {0x000, 0x48, 0, 0}, {0x0C0, 0x6C, 1, 0}, {0x100, 0x90, 2, 1}, {0x180, 0xB4, 3, 0}, {0x1C0, 0xD8, 4, 2},
        {0x240, 0x18C, 9, 0}, {0x280, 0xFC, 5, 0}, {0x2C0, 0x120, 6, 3}, {0x340, 0x144, 7, 0}, {0x380, 0x168, 8, 4}
    };
    float v[3];
    float w[3];
    float u;
    int t0;
    int t13;
    int k;
    int j;
    int p;
    int r;

    t0 = *(int *)(a4 + 0x30);
    FUN_0c0685a4(a4, a5, a6, a7);
    if (*(int *)((*(int *)(a4 + 0x34) << 2) + 0xC247030) == 0) {
        return FUN_0c0e19f2();
    }
    if (((((struct o2EC_int *)(t0))->v) & 15) != 0) {
        *(int *)(a4 + 0x38) = 1;
    }
    if (*(int *)(a4 + 0x38) != 0) {
        return FUN_0c0e19f2();
    }
    if (*(int *)(a4 + 0x3C) >= 0xE) {
        t13 = *(int *)(a4 + 0x3C) - 14;
        nlPushMatrix(0);
        for (k = 0; k < 10; k++) {
            FUN_0c0dbda0((((struct o3E4_int *)(t0))->v) + part[k][0]);
            for (j = 0; j < 3; j++) {
                FUN_0c098e1c(t13, a4 + part[k][1] + j * 12, part[k][2]);
            }
            if (part[k][3] != 0) {
                FUN_0c0975d0(t13, a4 + 0x1B0 + (part[k][3] - 1) * 0xF0, 3, 0xA);
            }
            if (k != 0) {
                continue;
            }
            FUN_0c0db840((int)v);
            w[0] = v[0];
            w[1] = v[1];
            w[2] = v[2];
            p = (t13 >= 0 ? (t13 & 0x1F) : (~((~t13 + 1) & 0x1F) + 1)) * 5 * 0x1C + a4 + 0x660;
            for (j = 0; j < 5; j++, p += 0x1C) {
                *(int *)(p + 0x18) = 0x28;
                *(float *)(p + 0x0) = w[0];
                (((struct o4_float *)(p))->v) = w[1];
                (((struct o8_float *)(p))->v) = w[2];
                for (r = 0xC; r <= 0x14; r += 4) {
                    u = (float)(FUN_0c0da2e0() & 0x7FFF);
                    u = u * 0.5f;
                    u = u / 32767.0f;
                    u = u + -0.25f;
                    *(float *)(p + r) = u;
                }
            }
            FUN_0c0db840((int)v);
            w[0] = v[0];
            w[1] = v[1];
            w[2] = v[2];
            p = FUN_0c0e5f1c() * 24 + a4 + 0x570;
            *(int *)(p + 0x0) = 0x14;
            *(int *)(p + 0x10) = -(FUN_0c0da2e0() & 0x4000) + 0xE000;
            (((struct o14_float *)(p))->v) = ((float)(unsigned char)FUN_0c0da2e0() / 255.0f) + 0.5f;
            for (j = 0; j < 3; j++) {
                u = w[j];
                u = u + 4.0f * ((float)(unsigned char)FUN_0c0da2e0() / 255.0f);
                *(float *)(p + 4 + j * 4) = u + -2.0f;
            }
        }
        nlPopMatrix(1);
    }
    FUN_0c096094(a4 + 0x660, 0xA0);
    FUN_0c084800(0.899999976f, 0.899999976f, 1.0f);
    FUN_0c095fa0(a4 + 0x570, 0xA);
    FUN_0c0849da();
    r = 0x40;
    if (--(((struct o40_int *)(a4))->v) < 0) {
        (((struct o40_int *)(a4))->v) = (((struct o44_int *)(a4))->v);
        if (++*(int *)(a4 + 0x3C) > 0xC8) {
            r = FUN_0c0e19f2();
        }
    }
    return r;
}
