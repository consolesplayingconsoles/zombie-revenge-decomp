/* Straight-line functions with calls and guards (batch gen_mf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
float FUN_0c0e2d00(Stk4, float, float, float, float, float, float, float, float);
int FUN_0c0e2d6c(int a4, float f4, float f5, float f6, float f7);

int FUN_0c0e2d6c(int a4, float f4, float f5, float f6, float f7)
{
    float q[4];
    float P[3];
    float H[3];
    float *p;
    float *vi;
    float *vj;
    float *v;
    float r2;
    float t;
    float e;
    float c;
    float w;
    float dx;
    float dy;
    float dz;
    float dd;
    int *g;
    int ng;
    int n;
    int k;
    int j;
    int a;
    int b;
    int id;
    int type;

    *(int *)0xC94C6E4 = 0;
    r2 = f7 * f7;
    id = 0;
    g = (int *)a4;
    ng = *g++;
    while (--ng >= 0) {
        n = g[0];
        p = (float *)(g + 1);
        if (!(f4 - f7 > p[0]) && !(f5 - f7 > p[1]) && !(f6 - f7 > p[2])
                && !(p[3] > f4 + f7) && !(p[4] > f5 + f7) && !(p[5] > f6 + f7)) {
            for (p += 6, k = n; --k >= 0; p += 18) {
                q[1] = f5 * p[1];
                q[1] = q[1] + p[0] * f4;
                q[1] = q[1] + p[2] * f6;
                q[1] = q[1] + p[3];
                q[2] = p[3];
                e = p[1] * p[1];
                e = e + p[0] * p[0];
                e = e + p[2] * p[2];
                t = -q[1] / e;
                e = -(t * q[1]);
                if (e > r2) {
                    continue;
                }
                P[0] = f4 + t * p[0];
                P[1] = f5 + t * p[1];
                P[2] = f6 + t * p[2];
                type = ((int *)p)[4];
                if (type == 0) {
                    a = 1; b = 2; w = p[0];
                } else if (type == 1) {
                    a = 2; b = 0; w = p[1];
                } else if (type == 2) {
                    a = 0; b = 1; w = p[2];
                } else {
                    a = -1;
                }
                for (j = 0; j < 4; j++) {
                    vi = p + 5 + 3 * j;
                    vj = p + 5 + 3 * ((j + 1) & 3);
                    if (a < 0) {
                        break;
                    }
                    c = (vi[a] - P[a]) * (vj[b] - vi[b]);
                    c = c - (vi[b] - P[b]) * (vj[a] - vi[a]);
                    if (0.0f > w * c) {
                        break;
                    }
                }
                if (j == 4) {
                    H[0] = P[0]; H[1] = P[1]; H[2] = P[2];
                    dx = p[0]; dy = p[1]; dz = p[2];
                    dd = e;
                } else {
                    q[0] = f6;
                    dd = FUN_0c0e2d00(*(Stk4 *)q, vi[0], vi[1], vi[2], vj[0], vj[1], vj[2], f4, f5);
                    if (dd > r2) {
                        continue;
                    }
                    H[0] = *(float *)0xC94C7FC;
                    H[1] = *(float *)0xC94C800;
                    H[2] = *(float *)0xC94C804;
                    c = (H[1] - vi[1]) * (H[1] - vj[1]);
                    c = c + (H[0] - vj[0]) * (H[0] - vi[0]);
                    c = c + (H[2] - vj[2]) * (H[2] - vi[2]);
                    if (0.0f > c) {
                        dx = f4 - H[0]; dy = f5 - H[1]; dz = f6 - H[2];
                    } else {
                        for (v = vi;; v = vj) {
                            dx = f4 - v[0]; dy = f5 - v[1]; dz = f6 - v[2];
                            dd = dy * dy;
                            dd = dd + dx * dx;
                            dd = dd + dz * dz;
                            if (r2 > dd || v == vj) {
                                break;
                            }
                        }
                        if (!(r2 > dd)) {
                            continue;
                        }
                        H[0] = v[0]; H[1] = v[1]; H[2] = v[2];
                    }
                }
                if (id == 0 || q[3] > dd) {
                    q[3] = dd;
                    id = ((int *)p)[17];
                    *(float *)0xC94C6E0 = dd;
                    *(float *)0xC94C7F8 = q[1];
                    *(float *)0xC94C6C4 = H[0];
                    *(float *)0xC94C6C8 = H[1];
                    *(float *)0xC94C6CC = H[2];
                    *(float *)0xC94C6D0 = dx;
                    *(float *)0xC94C6D4 = dy;
                    *(float *)0xC94C6D8 = dz;
                    *(float *)0xC94C6DC = q[2];
                    *(int *)0xC94C6E4 = (int)p;
                }
            }
        }
        g = (int *)((int)g + 72 * n + 28);
    }
    return id;
}
