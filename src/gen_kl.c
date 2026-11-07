/* Straight-line functions with calls and guards (batch gen_kl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
float FUN_0c0e93e0(int a4, int a5, int a6);
float FUN_0c0e9fc0(int a4, int a5, int a6);
float FUN_0c0e9500(int a4, int a5, int a6);
float FUN_0c0ea0e0(int a4, int a5, int a6);

float FUN_0c0e93e0(int a4, int a5, int a6)
{
    float v[4];
    float inv;
    float r;
    float *d;
    float *o;
    int *e;
    int n;
    int w;

    n = *(int *)a4;
    e = (int *)(a4 + 4);
    o = (float *)a6;
    for (;;) {
        if (e[0] & 1) {
            d = (float *)e;
            e += 8;
        } else {
            d = (float *)((int)(e + 2) + e[1]);
            e += 2;
        }
        v[0] = d[1];
        v[1] = d[0];
        v[2] = d[3];
        v[3] = 1.0f;
        _builtin_ftrv(v, v);
        inv = 1.0f / v[0];
        o[6] = 0.0f;
        o[7] = d[5];
        o[4] = d[6];
        o[5] = d[7];
        o[2] = inv;
        o[3] = v[2] * inv;
        o[1] = v[0];
        r = d[7];
        if (--n == 0) {
            w = e[0];
            if (w <= 0 || (w & 128) == 0) {
                *(int *)o = -1;
                return r;
            }
            n = e[1];
            e += 2;
            *(int *)o = -1;
        } else {
            *(int *)o = (int)(o + 6);
        }
        o += 8;
    }
}

float FUN_0c0e9fc0(int a4, int a5, int a6)
{
    float v[4];
    float inv;
    float r;
    float *d;
    float *o;
    int *e;
    int n;
    int w;

    n = *(int *)a4;
    e = (int *)(a4 + 4);
    o = (float *)a6;
    for (;;) {
        if (e[0] & 1) {
            d = (float *)e;
            e += 8;
        } else {
            d = (float *)((int)(e + 2) + e[1]);
            e += 2;
        }
        v[0] = d[1];
        v[1] = d[0];
        v[2] = d[3];
        v[3] = 1.0f;
        _builtin_ftrv(v, v);
        inv = 1.0f / v[0];
        o[6] = d[4];
        o[7] = d[5];
        o[4] = d[6];
        o[5] = d[7];
        o[2] = inv;
        o[3] = v[2] * inv;
        o[1] = v[0];
        r = d[7];
        if (--n == 0) {
            w = e[0];
            if (w <= 0 || (w & 128) == 0) {
                *(int *)o = -1;
                return r;
            }
            n = e[1];
            e += 2;
            *(int *)o = -1;
        } else {
            *(int *)o = (int)(o + 6);
        }
        o += 8;
    }
}

float FUN_0c0e9500(int a4, int a5, int a6)
{
    float v[4];
    float inv;
    float r;
    float *d;
    float *o;
    int *e;
    int n;
    int t;

    t = *(int *)a4;
    n = 3;
    e = (int *)(a4 + 4);
    o = (float *)a6;
    for (;;) {
        if (e[0] & 1) {
            d = (float *)e;
            e += 8;
        } else {
            d = (float *)((int)(e + 2) + e[1]);
            e += 2;
        }
        v[0] = d[1];
        v[1] = d[0];
        v[2] = d[3];
        v[3] = 1.0f;
        _builtin_ftrv(v, v);
        inv = 1.0f / v[0];
        o[6] = 0.0f;
        o[7] = d[5];
        o[4] = d[6];
        o[5] = d[7];
        o[2] = inv;
        o[3] = v[2] * inv;
        o[1] = v[0];
        r = d[7];
        if (--n == 0) {
            *(int *)o = -1;
            if (--t == 0) {
                return r;
            }
            n = 3;
        } else {
            *(int *)o = (int)(o + 6);
        }
        o += 8;
    }
}

float FUN_0c0ea0e0(int a4, int a5, int a6)
{
    float v[4];
    float inv;
    float r;
    float *d;
    float *o;
    int *e;
    int n;
    int t;

    t = *(int *)a4;
    n = 3;
    e = (int *)(a4 + 4);
    o = (float *)a6;
    for (;;) {
        if (e[0] & 1) {
            d = (float *)e;
            e += 8;
        } else {
            d = (float *)((int)(e + 2) + e[1]);
            e += 2;
        }
        v[0] = d[1];
        v[1] = d[0];
        v[2] = d[3];
        v[3] = 1.0f;
        _builtin_ftrv(v, v);
        inv = 1.0f / v[0];
        o[6] = d[4];
        o[7] = d[5];
        o[4] = d[6];
        o[5] = d[7];
        o[2] = inv;
        o[3] = v[2] * inv;
        o[1] = v[0];
        r = d[7];
        if (--n == 0) {
            *(int *)o = -1;
            if (--t == 0) {
                return r;
            }
            n = 3;
        } else {
            *(int *)o = (int)(o + 6);
        }
        o += 8;
    }
}
