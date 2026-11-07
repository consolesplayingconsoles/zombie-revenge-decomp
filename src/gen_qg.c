/* Straight-line functions with calls and guards (batch gen_qg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float FUN_0c0dcea0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e5dc0(void);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int FUN_0c08b8e0(int a4, int a5);

int FUN_0c08b8e0(int a4, int a5)
{
    int stk[19];
    int t0;
    register int t1;
    register float t5;
    register int t18;
    register float u19;
    register int t21;
    register float u24;
    register float u26;
    register float u27;
    register float u31;
    register float u32;
    register float u34;
    register float u35;
    register float u42;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    t0 = FUN_0c0da2e0();
    t1 = FUN_0c0e5dc0();
    nlSubVector3op((((int)stk + 8) + 0x38), (*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 16))));
    t5 = FUN_0c0dcea0((((int)stk + 8) + 0x38));
    FUN_0c0a78fc(((int)stk + 8), (((int)stk + 8) + 0x4), (*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 68))), (*(float *)(((int)stk + 72))));
    FUN_0c0dc5a0();
    *(float *)(((int)stk + 28)) = (1.0f / (float)((0xF & t0) + 0x5));
    *(float *)(((int)stk + 24)) = (1.0f / (float)((0xF & t0) + 0x5));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    FUN_0c0dcca0((*(int *)(((int)stk + 16))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    nlRotateAZ((*(int *)(((int)stk + 12))));
    FUN_0c0db840((((int)stk + 8) + 0x2C));
    *(unsigned int *)(((int)stk + 16)) = (((0xF & t0) + 0x5) - 1);
    *(float *)(((int)stk + 36)) = (0.19156526f / (float)t1);
    if ((int)((0xF & t0) + 0x5) > 0) {
        t18 = 0x0;
        u19 = t5;
        for (;;) {
            t21 = FUN_0c0e19aa(0xC08BB20, 0x64, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t21);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t21 + 0x30)) = *(struct mv3 *)((((int)stk + 8) + 0x2C)); }
            if ((int)t18 < (int)(*(int *)(((int)stk + 16)))) {
                u24 = *(float *)(((int)stk + 24));
                *(float *)(((int)stk + 4)) = (u19 * u24);
                u26 = (u19 * u24);
                u27 = (u26 * (float)(((FUN_0c0da2e0()) & 0x7FFF) + 0x2000));
                u19 = (u19 - ((u27 * 3.05185094e-05f)));
                FUN_0c0dcc70(0.0f, (u27 * 3.05185094e-05f), 0.0f);
                u31 = (u27 * 3.05185094e-05f);
                u32 = (u31 * (float)((FUN_0c0da2e0()) - 16383));
                *(float *)(((int)stk + 52)) = (u32 * 6.10370189e-05f);
                *(float *)(((int)stk + 56)) = 0.0f;
                u34 = (u27 * 3.05185094e-05f);
                u35 = (u34 * (float)((FUN_0c0da2e0()) - 16383));
                *(float *)(((int)stk + 60)) = (u35 * 6.10370189e-05f);
                FUN_0c0db470((((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x2C));
                nlSubVector3op((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x2C), (t21 + 0x30));
                u42 = (u27 * 3.05185094e-05f);
            } else {
                nlSubVector3op((((int)stk + 8) + 0x20), (*(int *)(((int)stk + 32))), (t21 + 0x30));
                u42 = (FUN_0c0dcea0((((int)stk + 8) + 0x20)));
            }
            FUN_0c0a78fc(((int)stk + 8), (((int)stk + 8) + 0x4), (*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 44))), (*(float *)(((int)stk + 48))));
            t18 = (t18 + 0x1);
            *(unsigned short *)((t21 + 0x48)) = (*(int *)(((int)stk + 8)));
            *(unsigned short *)((t21 + 0x4C)) = (*(int *)(((int)stk + 12)));
            *(unsigned int *)((t21 + 0x58)) = (*(int *)(((int)stk + 20)));
            *(float *)((t21 + 0x44)) = ((*(float *)(((int)stk + 36))) * u42);
            *(unsigned int *)((t21 + 0x60)) = t1;
            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + (*(float *)(((int)stk + 28))));
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + t1);
            if ((int)t18 < (int)((0xF & t0) + 0x5)) continue;
            break;
        }
    }
    return (nlPopMatrix(0x1));
}
