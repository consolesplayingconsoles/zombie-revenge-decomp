/* Straight-line functions with calls and guards (batch gen_tr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7984(int, int, float, float, float);
float FUN_0c0d9e90(int);
int FUN_0c0db470(int, int);
int FUN_0c0dcc70(float, float, float);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
float FUN_0c037c66(int a4);

float FUN_0c037c66(int a4)
{
    int stk[13];
    register int t0;
    register int t8;
    register int t15;
    register int t23;
    register int t33;
    register int t34;
    register float u54;
    register float u55;
    register float u56;
    register float u57;
    register float u58;
    register float u62;
    register float u63;
    register int t66;
    register int t68;
    register float u69;
    register int t70;
    register float u71;
    register int t26;
    register int t18;
    register int t11;

    t0 = *(int *)((a4 + 0x3DC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t8 = 0x1;
                if ((*(int *)((a4 + 0x238))) != 0) {
                    t8 = 0x0;
                }
                t11 = t8;
            }
            t18 = t11;
        } else {
            t15 = 0x0;
            if ((*(int *)((a4 + 0x238))) == 0) {
                t15 = 0x2;
            }
            t18 = t15;
        }
        t26 = t18;
    } else {
        t23 = 0x2;
        if ((*(int *)((a4 + 0x240))) == 0) {
            t23 = 0x1;
        }
        t26 = t23;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    *(unsigned int *)(((int)stk + 12)) = (0x370 + a4);
    t33 = *(int *)((a4 + 0x3DC));
    t34 = *(int *)(((int)stk + 12));
    FUN_0c0dcc70(((*(float *)((((0x370 + a4) + (((t26 << 1) + t26) << 2)) + 0x0))) - (*(float *)((((((t33 << 1) + t33) << 2) + t34) + 0x0)))), ((*(float *)((((0x370 + a4) + (((t26 << 1) + t26) << 2)) + 0x4))) - (*(float *)((((((t33 << 1) + t33) << 2) + t34) + 0x4)))), ((*(float *)((((0x370 + a4) + (((t26 << 1) + t26) << 2)) + 0x8))) - (*(float *)((((((t33 << 1) + t33) << 2) + t34) + 0x8)))));
    nlRotateAY((-(*(int *)((a4 + 0x3E8)))));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    nlPopMatrix(0x1);
    FUN_0c0a7984(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((((int)stk + 4) + 0x24) + 0x0))), (*(float *)(((((int)stk + 4) + 0x24) + 0x4))), (*(float *)(((((int)stk + 4) + 0x24) + 0x8))));
    u54 = *(float *)(((((int)stk + 4) + 0x24) + 0x0));
    u55 = *(float *)(((((int)stk + 4) + 0x24) + 0x4));
    u56 = *(float *)(((((int)stk + 4) + 0x24) + 0x8));
    u57 = (u55 * u55);
    u57 = u57 + u54 * u54;
    u58 = u57;
    u58 = u58 + u56 * u56;
    u62 = ((FUN_0c0d9e90((*(int *)(((int)stk + 4))))) * (*(float *)((a4 + 0x3F0))));
    u63 = (((-(u62 * 0.0272199996f)) / _builtin_sqrtf(u58)) / 6.27999973f);
    *(unsigned int *)(((int)stk + 12)) = (int)(u63 * 65536.0f);
    t66 = *(int *)(((int)stk + 12));
    t68 = *(int *)((a4 + 0x22C));
    u69 = ((FUN_0c0d9e90((*(int *)(((int)stk + 8))))) * (*(float *)((a4 + 0x3F0))));
    *(unsigned int *)((a4 + 0x22C)) = (t68 + t66);
    t70 = *(int *)((a4 + 0x234));
    u71 = (((-(u69 * 0.0272199996f)) / _builtin_sqrtf(u58)) / 6.27999973f);
    *(unsigned int *)((a4 + 0x234)) = (t70 + (int)(u71 * 65536.0f));
    if ((*(int *)((a4 + 0x22C))) == 0) {
        if ((*(int *)((a4 + 0x234))) == 0) {
            *(unsigned int *)((a4 + 0x22C)) = 0xFFFFFDB0;
            *(unsigned int *)((a4 + 0x234)) = 0xFFFFFDB0;
        }
    }
    return (u71 * 65536.0f);
}
