/* Straight-line functions with calls and guards (batch gen_mq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0a8016(int a4, int a5, int a6);
float FUN_0c0a80e2(int a4, int a5, int a6);



float FUN_0c0a8016(int a4, int a5, int a6)
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
    register float u9;
    register float u10;
    register float u11;

    u0 = *(float *)0xC0A8198;
    u1 = *(float *)0xC0A819C;
    u2 = *(float *)0xC0A81A0;
    u3 = *(float *)0xC0A81A4;
    u4 = (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0));
    u5 = ((1.0f - ((float)(unsigned short)a5 / u0)) * (1.0f - ((float)(unsigned short)a5 / u0)));
    u6 = (u5 * (1.0f - ((float)(unsigned short)a5 / u0)));
    u5 = (u4 * ((float)(unsigned short)a5 / u0));
    u7 = (u4 * ((float)(unsigned short)a5 / u0));
    u8 = (((u5 * u2) - (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0))) + u3);
    u9 = (((((float)(unsigned short)a5 / u0) + (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0))) - (u4 * ((float)(unsigned short)a5 / u0))) + (*(float *)0xC0A81A8));
    u4 = (u6 * u1);
    u10 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x0))) * u8);
    u10 = u10 + u4 * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 1) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x0)));
    u4 = (u9 * u2);
    u8 = u10;
    u8 = u8 + u4 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0xC) + 0x0)));
    u4 = (u7 * u1);
    u10 = u8;
    u10 = u10 + u4 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x18) + 0x0)));
    u4 = (((u5 * u2) - (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0))) + u3);
    u8 = (u6 * u1);
    u11 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x4))) * u4);
    u11 = u11 + u8 * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 1) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x4)));
    u4 = (u9 * u2);
    u8 = u11;
    u8 = u8 + u4 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0xC) + 0x4)));
    u4 = (u7 * u1);
    u11 = u8;
    u11 = u11 + u4 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x18) + 0x4)));
    u4 = (((u5 * u2) - (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0))) + u3);
    u0 = (u6 * u1);
    u3 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x8))) * u4);
    u3 = u3 + u0 * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 1) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x8)));
    u0 = (u9 * u2);
    u2 = u3;
    u2 = u2 + u0 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0xC) + 0x8)));
    u0 = *(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x18) + 0x8));
    *(float *)((a6 + 0x0)) = u10;
    u3 = (u7 * u1);
    u4 = u2;
    u4 = u4 + u3 * u0;
    *(float *)((a6 + 0x4)) = u11;
    *(float *)((a6 + 0x8)) = u4;
    return (u7 * u1);
}

float FUN_0c0a80e2(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    u0 = (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f));
    u1 = ((1.0f - ((float)(unsigned short)a5 / 65536.0f)) * (1.0f - ((float)(unsigned short)a5 / 65536.0f)));
    u2 = (u1 * (1.0f - ((float)(unsigned short)a5 / 65536.0f)));
    u1 = (u0 * ((float)(unsigned short)a5 / 65536.0f));
    u3 = (((((float)(unsigned short)a5 / 65536.0f) + (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) - (u0 * ((float)(unsigned short)a5 / 65536.0f))) + 0.333333313f);
    u4 = (u0 * ((float)(unsigned short)a5 / 65536.0f));
    u0 = (((u1 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f);
    u5 = (u2 * 0.166669995f);
    u6 = ((*(float *)((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x0))) * u0);
    u6 = u6 + u5 * (*(float *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 1) + a4) + 0x0)));
    u0 = (u3 * 0.5f);
    u5 = u6;
    u5 = u5 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x8) + 0x0)));
    u0 = (u4 * 0.166669995f);
    u6 = u5;
    u6 = u6 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x10) + 0x0)));
    u0 = (((u1 * 0.5f) - (((float)(unsigned short)a5 / 65536.0f) * ((float)(unsigned short)a5 / 65536.0f))) + 0.666666627f);
    u1 = (u2 * 0.166669995f);
    u2 = ((*(float *)((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x4))) * u0);
    u2 = u2 + u1 * (*(float *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 1) + a4) + 0x4)));
    u0 = (u3 * 0.5f);
    u1 = u2;
    u1 = u1 + u0 * (*(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x8) + 0x4)));
    u0 = *(float *)(((((((short)((unsigned int)a5 >> 16) << 2) << 1) + a4) + 0x10) + 0x4));
    *(float *)((a6 + 0x0)) = u6;
    u2 = (u4 * 0.166669995f);
    u3 = u1;
    u3 = u3 + u2 * u0;
    *(float *)((a6 + 0x4)) = u3;
    return (u4 * 0.166669995f);
}

