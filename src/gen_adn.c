/* Straight-line functions with calls and guards (batch gen_adn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03578e(int, int, int, int);
float FUN_0c0d9e90(int);
float nlTan(int);
float FUN_0c035828(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

float FUN_0c035828(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int stk[7];
    register int t4;
    register float u5;
    register float t6;
    register float u7;
    register float t8;
    register float u9;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register int t21;
    register float u22;
    register float t23;
    register float u24;
    register float t25;
    register float u26;
    register float t27;
    register float u28;
    register float u29;
    register float u30;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u35;
    register int t3;
    float R1004;
    float R1008;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);

    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    FUN_0c03578e(a4, (*(int *)(((int)stk + 24))), ((int)stk + 12), (((int)stk + 12) + 0x4));
    t4 = 0x0;
    u5 = (*(float *)0xC035960);
    for (;;) {
        t6 = nlTan(t4);
        u7 = *(float *)(((int)stk + 12));
        R1008 = (t6 * u7);
        t8 = FUN_0c0d9e90(t4);
        u9 = (f4 * f4);
        R1004 = (u9 * t8);
        u11 = (u9 * t8);
        u12 = (u11 * (FUN_0c0d9e90(t4)));
        u13 = *(float *)(((int)stk + 12));
        u14 = (f5 / (u12 * (1.0f + 1.0f)));
        u15 = (u14 * u13);
        u16 = (t6 * u7);
        u17 = (u15 * u13);
        u18 = *(float *)(((int)stk + 16));
        if (u5 > _builtin_fabsf(((u16 - u17) - u18))) {
            t3 = t4;
            u5 = _builtin_fabsf(((u16 - u17) - u18));
        }
        t4 = (t4 + a5);
        if ((int)t4 >= (int)0x3800) {
            break;
        }
    }
    t21 = 0x0;
    u22 = (*(float *)0xC035960);
    for (;;) {
        t23 = nlTan(t21);
        u24 = *(float *)(((int)stk + 12));
        R1008 = (t23 * u24);
        t25 = FUN_0c0d9e90(t21);
        u26 = (f4 * f4);
        R1004 = (u26 * t25);
        t27 = FUN_0c0d9e90(t21);
        u28 = (u26 * t25);
        u29 = (u28 * t27);
        u30 = *(float *)(((int)stk + 12));
        u31 = (f5 / (u29 * (1.0f + 1.0f)));
        u32 = (u31 * u30);
        u33 = (t23 * u24);
        u34 = (u32 * u30);
        u35 = *(float *)(((int)stk + 16));
        if (u22 > _builtin_fabsf(((u33 - u34) - u35))) {
            u22 = _builtin_fabsf(((u33 - u34) - u35));
            t21 = (t21 - a5);
            if ((int)t21 <= (int)0xFFFFC800) {
                if ((int)t3 >= (int)(unsigned short)t21) {
                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)t3;
                    *(unsigned int *)((a8 + 0x0)) = (unsigned short)t21;
                    return t27;
                }
                *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)t21;
                *(unsigned int *)((a8 + 0x0)) = (unsigned short)t3;
                return t27;
            }
            continue;
        }
        break;
    }
    if ((int)t3 >= (int)(unsigned short)(t21 + a5)) {
        *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)t3;
        *(unsigned int *)((a8 + 0x0)) = (unsigned short)(t21 + a5);
    } else {
        *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (unsigned short)(t21 + a5);
        *(unsigned int *)((a8 + 0x0)) = (unsigned short)t3;
    }
    return t27;
}
