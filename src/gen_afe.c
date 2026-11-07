/* Straight-line functions with calls and guards (batch gen_afe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0a8016(int a4, int a5, int a6);

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
    register float u12;
    register float u13;
    register float u14;

    u0 = *(float *)0xC0A8198;
    u1 = *(float *)0xC0A819C;
    u2 = *(float *)0xC0A81A0;
    u3 = *(float *)0xC0A81A4;
    u4 = (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0));
    u5 = ((1.0f - ((float)(unsigned short)a5 / u0)) * (1.0f - ((float)(unsigned short)a5 / u0)));
    u6 = (u5 * (1.0f - ((float)(unsigned short)a5 / u0)));
    u5 = (u4 * ((float)(unsigned short)a5 / u0));
    u7 = (u5 * u2);
    u5 = (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0));
    u8 = (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0));
    u9 = (u4 * ((float)(unsigned short)a5 / u0));
    u10 = (u4 * ((float)(unsigned short)a5 / u0));
    u4 = *(float *)0xC0A81A8;
    u11 = (u6 * u1);
    u12 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x0))) * ((u7 - u5) + u3));
    u12 = u12 + u11 * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 1) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x0)));
    u11 = ((((((float)(unsigned short)a5 / u0) + u8) - u9) + u4) * u2);
    u13 = u12;
    u13 = u13 + u11 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0xC) + 0x0)));
    u11 = (u10 * u1);
    u12 = u13;
    u12 = u12 + u11 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x18) + 0x0)));
    u11 = (u6 * u1);
    u13 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x4))) * ((u7 - u5) + u3));
    u13 = u13 + u11 * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 1) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x4)));
    u11 = ((((((float)(unsigned short)a5 / u0) + u8) - u9) + u4) * u2);
    u14 = u13;
    u14 = u14 + u11 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0xC) + 0x4)));
    u11 = (u10 * u1);
    u13 = u14;
    u13 = u13 + u11 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x18) + 0x4)));
    u11 = (u6 * u1);
    u6 = ((*(float *)(((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x8))) * ((u7 - u5) + u3));
    u6 = u6 + u11 * (*(float *)((((((((short)((unsigned int)a5 >> 16) - 1) << 1) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x8)));
    u3 = ((((((float)(unsigned short)a5 / u0) + u8) - u9) + u4) * u2);
    u0 = u6;
    u0 = u0 + u3 * (*(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0xC) + 0x8)));
    u2 = *(float *)((((((((short)((unsigned int)a5 >> 16) << 1) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x18) + 0x8));
    *(float *)((a6 + 0x0)) = u12;
    u3 = (u10 * u1);
    u4 = u0;
    u4 = u4 + u3 * u2;
    *(float *)((a6 + 0x4)) = u13;
    *(float *)((a6 + 0x8)) = u4;
    return (u10 * u1);
}
