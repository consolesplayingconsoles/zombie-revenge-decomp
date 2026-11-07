/* Straight-line functions with calls and guards (batch gen_afu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0a80e2(int a4, int a5, int a6);

float FUN_0c0a80e2(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    u0 = (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f));
    u1 = ((1.0f - ((float)(unsigned short)a5 / 65536.0f)) * (1.0f - ((float)(unsigned short)a5 / 65536.0f)));
    u2 = (u1 * (1.0f - ((float)(unsigned short)a5 / 65536.0f)));
    u1 = (u0 * ((float)(unsigned short)a5 / 65536.0f));
    u3 = (u1 * 0.5f);
    u1 = (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f));
    u4 = (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f));
    u5 = (u0 * ((float)(unsigned short)a5 / 65536.0f));
    u6 = (u0 * ((float)(unsigned short)a5 / 65536.0f));
    u0 = (u2 * 0.166669995f);
    u7 = ((*(float *)((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x0))) * ((u3 - u1) + 0.666666627f));
    u7 = u7 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 1) + a4) + 0x0)));
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u8 = u7;
    u8 = u8 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x8) + 0x0)));
    u0 = (u6 * 0.166669995f);
    u7 = u8;
    u7 = u7 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x10) + 0x0)));
    u0 = (u2 * 0.166669995f);
    u2 = ((*(float *)((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x4))) * ((u3 - u1) + 0.666666627f));
    u2 = u2 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 1) + a4) + 0x4)));
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u1 = u2;
    u1 = u1 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x8) + 0x4)));
    u0 = *(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x10) + 0x4));
    *(float *)((a6 + 0x0)) = u7;
    u2 = (u6 * 0.166669995f);
    u3 = u1;
    u3 = u3 + u2 * u0;
    *(float *)((a6 + 0x4)) = u3;
    return (u6 * 0.166669995f);
}
