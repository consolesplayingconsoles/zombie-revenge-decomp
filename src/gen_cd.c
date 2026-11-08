/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08e970(int, int, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(int, int, float, float, float, float);
int FUN_0c08a8e0(int, int);
int FUN_0c08e6d8(int a4);
struct o0_uint { unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c08e6d8(int a4)
{
    float u0;
    float u1;
    float t2;
    int t3;
    float u4;
    float u5;
    int t6;
    float u7;
    int t8;
    float u9;
    int t10;
    float u11;
    int t12;
    float s1;

    u0 = *(float *)(((0x34 + a4) + 0x0));
    u1 = *(float *)((a4 + 0x30));
    *(float *)((a4 + 0x30)) = (u1 + u0);
    t2 = FUN_0c0d9e90((int)(u1 + u0));
    t3 = (((struct o24_int *)0xC248A64)->v);
    s1 = _builtin_fabsf(t2);
    u4 = ((1.0f - s1) * 128.0f);
    u4 = u4 + s1 * (float)(unsigned char)((int)t3 >> 8);
    u5 = ((1.0f - s1) * 5.0f);
    u5 = u5 + s1 * (float)(unsigned char)t3;
    (((struct oC_uint *)0xC248A64)->v) = (((int)u4 << 8) | (int)u5);
    t6 = (((struct o18_int *)0xC248A64)->v);
    u7 = ((1.0f - s1) * 255.0f);
    u7 = u7 + s1 * (float)t6;
    (((struct o0_uint *)0xC248A64)->v) = (int)u7;
    t8 = (((struct o1C_int *)0xC248A64)->v);
    u9 = ((1.0f - s1) * 255.0f);
    u9 = u9 + s1 * (float)t8;
    (((struct o4_uint *)0xC248A64)->v) = (int)u9;
    t10 = (((struct o20_int *)0xC248A64)->v);
    u11 = ((1.0f - s1) * 255.0f);
    u11 = u11 + s1 * (float)t10;
    (((struct o8_uint *)0xC248A64)->v) = (int)u11;
    t12 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t12 - 1);
    if ((t12 - 1) == 0) {
        return FUN_0c0e19f2();
    }
    return 0xB94;
}
