/* Straight-line functions with calls and guards (batch gen_rd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0a81ac(int a4, int a5, int a6, int a7);
struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o28_short { char p[0x28]; short v; };



float FUN_0c0a81ac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
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
    u7 = (((((struct o8_float *)((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4)))->v)) * ((u3 - u1) + 0.666666627f));
    u7 = u7 + u0 * ((((struct o8_float *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4)))->v));
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u8 = u7;
    u8 = u8 + u0 * ((((struct o8_float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14)))->v));
    u0 = (u6 * 0.166669995f);
    u7 = u8;
    u7 = u7 + u0 * ((((struct o8_float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28)))->v));
    u0 = (u2 * 0.166669995f);
    u8 = (((((struct oC_float *)((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4)))->v)) * ((u3 - u1) + 0.666666627f));
    u8 = u8 + u0 * ((((struct oC_float *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4)))->v));
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u9 = u8;
    u9 = u9 + u0 * ((((struct oC_float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14)))->v));
    u0 = (u6 * 0.166669995f);
    u8 = u9;
    u8 = u8 + u0 * ((((struct oC_float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28)))->v));
    u0 = (u2 * 0.166669995f);
    u9 = (((((struct o10_float *)((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4)))->v)) * ((u3 - u1) + 0.666666627f));
    u9 = u9 + u0 * ((((struct o10_float *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4)))->v));
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u10 = u9;
    u10 = u10 + u0 * ((((struct o10_float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14)))->v));
    u0 = (u6 * 0.166669995f);
    u9 = u10;
    u9 = u9 + u0 * ((((struct o10_float *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28)))->v));
    u0 = (u2 * 0.166669995f);
    u10 = ((float)(*(short *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x0))) * ((u3 - u1) + 0.666666627f));
    u10 = u10 + u0 * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x0)));
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u11 = u10;
    u11 = u11 + u0 * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x0)));
    u0 = (u6 * 0.166669995f);
    u10 = u11;
    u10 = u10 + u0 * (float)((((struct o28_short *)((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4)))->v));
    t0 = *(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0x4));
    t1 = *(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x4));
    t2 = *(short *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x4));
    u0 = (u2 * 0.166669995f);
    u11 = ((float)(*(short *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x2))) * ((u3 - u1) + 0.666666627f));
    u11 = u11 + u0 * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) - 1) << 2) + ((short)((unsigned int)a5 >> 16) - 1)) << 2) + a4) + 0x2)));
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u12 = u11;
    u12 = u12 + u0 * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x14) + 0x2)));
    u0 = (u6 * 0.166669995f);
    u11 = u12;
    u11 = u11 + u0 * (float)(*(short *)((((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x28) + 0x2)));
    t3 = *(short *)(((((((short)((unsigned int)a5 >> 16) << 2) + (short)((unsigned int)a5 >> 16)) << 2) + a4) + 0x4));
    *(float *)((a6 + 0x0)) = u7;
    (((struct o4_float *)(a6))->v) = u8;
    (((struct o8_float *)(a6))->v) = u9;
    *(unsigned int *)((a7 + 0x0)) = (int)u10;
    u0 = (u2 * 0.166669995f);
    u2 = ((float)t3 * ((u3 - u1) + 0.666666627f));
    u2 = u2 + u0 * (float)t2;
    u0 = ((((((float)(unsigned short)a5 / 65536.0f) + u4) - u5) + 0.333333313f) * 0.5f);
    u1 = u2;
    u1 = u1 + u0 * (float)t1;
    *(unsigned int *)((a7 + 0x4)) = (int)u11;
    u0 = (u6 * 0.166669995f);
    u2 = u1;
    u2 = u2 + u0 * (float)t0;
    *(unsigned int *)((a7 + 0x8)) = (int)u2;
    return (u6 * 0.166669995f);
}
