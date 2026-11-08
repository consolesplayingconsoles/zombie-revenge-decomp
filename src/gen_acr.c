/* Straight-line functions with calls and guards (batch gen_acr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0a7ed4(int a4, int a5, int a6, int a7);
struct o20_short { char p[0x20]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };



float FUN_0c0a7ed4(int a4, int a5, int a6, int a7)
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
    register float u13;
    register float u14;
    register float u15;
    register float u16;

    u0 = (((struct o0_float *)0xC0A8198)->v);
    u1 = (((struct o4_float *)0xC0A8198)->v);
    u2 = (((struct o8_float *)0xC0A8198)->v);
    u3 = (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0));
    u4 = ((1.0f - ((float)(unsigned short)a5 / u0)) * (1.0f - ((float)(unsigned short)a5 / u0)));
    u5 = (u4 * (1.0f - ((float)(unsigned short)a5 / u0)));
    u4 = (u3 * ((float)(unsigned short)a5 / u0));
    u6 = (u4 * u2);
    u4 = (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0));
    u7 = (((float)(unsigned short)a5 / u0) * ((float)(unsigned short)a5 / u0));
    u8 = (((struct oC_float *)0xC0A8198)->v);
    u9 = (((struct o10_float *)0xC0A8198)->v);
    u10 = (u3 * ((float)(unsigned short)a5 / u0));
    u11 = (u3 * ((float)(unsigned short)a5 / u0));
    u3 = (u5 * u1);
    u12 = (((((struct o4_float *)(((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4)))->v)) * ((u6 - u4) + u8));
    u12 = u12 + u3 * ((((struct o4_float *)((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 2) + a4)))->v));
    u3 = ((((((float)(unsigned short)a5 / u0) + u7) - u10) + u9) * u2);
    u13 = u12;
    u13 = u13 + u3 * ((((struct o4_float *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x10)))->v));
    u3 = (u11 * u1);
    u12 = u13;
    u12 = u12 + u3 * ((((struct o4_float *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x20)))->v));
    u3 = (u5 * u1);
    u13 = (((((struct o8_float *)(((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4)))->v)) * ((u6 - u4) + u8));
    u13 = u13 + u3 * ((((struct o8_float *)((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 2) + a4)))->v));
    u3 = ((((((float)(unsigned short)a5 / u0) + u7) - u10) + u9) * u2);
    u14 = u13;
    u14 = u14 + u3 * ((((struct o8_float *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x10)))->v));
    u3 = (u11 * u1);
    u13 = u14;
    u13 = u13 + u3 * ((((struct o8_float *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x20)))->v));
    u3 = (u5 * u1);
    u14 = (((((struct oC_float *)(((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4)))->v)) * ((u6 - u4) + u8));
    u14 = u14 + u3 * ((((struct oC_float *)((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 2) + a4)))->v));
    u3 = ((((((float)(unsigned short)a5 / u0) + u7) - u10) + u9) * u2);
    u15 = u14;
    u15 = u15 + u3 * ((((struct oC_float *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x10)))->v));
    u3 = (u11 * u1);
    u14 = u15;
    u14 = u14 + u3 * ((((struct oC_float *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x20)))->v));
    t0 = *(short *)(((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x20) + 0x2));
    t1 = *(short *)(((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x10) + 0x2));
    u3 = (u5 * u1);
    u15 = ((float)(*(short *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x0))) * ((u6 - u4) + u8));
    u15 = u15 + u3 * (float)(*(short *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 2) + a4) + 0x0)));
    u3 = ((((((float)(unsigned short)a5 / u0) + u7) - u10) + u9) * u2);
    u16 = u15;
    u16 = u16 + u3 * (float)(*(short *)(((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x10) + 0x0)));
    u3 = (u11 * u1);
    u15 = u16;
    u15 = u15 + u3 * (float)((((struct o20_short *)(((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4)))->v));
    t2 = *(short *)(((((((short)((unsigned int)a5 >> 16) - 1) << 2) << 2) + a4) + 0x2));
    t3 = *(short *)((((((short)((unsigned int)a5 >> 16) << 2) << 2) + a4) + 0x2));
    *(float *)((a6 + 0x0)) = u12;
    (((struct o4_float *)(a6))->v) = u13;
    (((struct o8_float *)(a6))->v) = u14;
    *(unsigned int *)((a7 + 0x0)) = (int)u15;
    u3 = (u5 * u1);
    u5 = ((float)t3 * ((u6 - u4) + u8));
    u5 = u5 + u3 * (float)t2;
    u3 = ((((((float)(unsigned short)a5 / u0) + u7) - u10) + u9) * u2);
    u0 = u5;
    u0 = u0 + u3 * (float)t1;
    u2 = (u11 * u1);
    u3 = u0;
    u3 = u3 + u2 * (float)t0;
    *(unsigned int *)((a7 + 0x4)) = (int)u3;
    return (u11 * u1);
}
