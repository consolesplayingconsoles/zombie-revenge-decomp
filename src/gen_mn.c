/* Straight-line functions with calls and guards (batch gen_mn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o226_short { char p[0x226]; short v; };
struct o228_short { char p[0x228]; short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o238_short { char p[0x238]; short v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_int { char p[0x3CC]; int v; };
struct o3D0_int { char p[0x3D0]; int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
int FUN_0c0b30f4(int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb134(int);
int FUN_0c0c475c(int, float);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0abc14(int a4, int a5, int a6, int a7);
int FUN_0c0b301e(int a4);
int FUN_0c093524(int a4, int a5);


int FUN_0c0b301e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o3CC_int *)(a4))->v);
    t1 = (((struct o3D0_int *)(a4))->v);
    t2 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t2 + 0x1);
    t3 = *(short *)((t0 + 0x4));
    if ((int)(t2 + 0x1) > (int)t3) {
        (((struct o3AC_uint *)(a4))->v) = ((*(short *)((t1 + 0x4))) - 1);
        (((struct o6E_ushort *)(a4))->v) = (*(short *)((t1 + 0x8)));
        if (((unsigned short)(*(short *)((t1 + 0xA))) & 0x100) != 0) {
            (((struct o20C_uint *)(a4))->v) = 0x20000000;
        } else {
            (((struct o20C_uint *)(a4))->v) = 0x40000000;
        }
        (((struct oA4_uint *)(a4))->v) = 0xA7D;
        (((struct o2C4_uint *)(a4))->v) = (*(short *)((t1 + 0x2)));
        (((struct o2E8_uint *)(a4))->v) = (unsigned char)(*(short *)((t1 + 0xA)));
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        FUN_0c0bb134(a4);
        (((struct oC0_uint *)(a4))->v) = (((((struct oC0_int *)(a4))->v)) + 0x1);
        FUN_0c0ba6e8(a4);
        FUN_0c0ba776(a4);
        *(unsigned int *)((a4 + 0x0)) = 0xC0B30F4;
        return FUN_0c0b30f4(a4);
    }
    return t3;
}

int FUN_0c093524(int a4, int a5)
{
    register int t1;
    register int t26;
    register int t6;
    register int t7;
    int t11;

    t1 = *(int *)(((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0));
    t26 = 0xC246FF0;
    if (t1 != 0) {
        t26 = 0xA0;
        if ((int)((((struct oA0_int *)(a4))->v)) <= (int)((((struct o2B4_int *)(t1))->v))) {
            t6 = (((struct o88_int *)(a4))->v);
            t7 = (((struct o80_int *)(a4))->v);
            if (((*(short *)((((((((t6 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t7 << 2) << 1)) + 0x4))) == 0) && (t11 = *(short *)((((((((t6 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t7 << 2) << 1)) + 0x6)), t11 == 0)) {
                *(unsigned short *)((((((((t6 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t7 << 2) << 1)) + 0x4)) = (*(int *)(((0x404 + t1) + (((((struct o80_int *)(a4))->v)) << 2))));
            }
            *(unsigned short *)((((((((t6 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t7 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t6 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t7 << 2) << 1)) + 0x6))) + 0x1);
            *(unsigned int *)((((((((t6 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t7 << 2) << 1)) + 0x0)) = (*(int *)((a4 + 0x8)));
            *(unsigned int *)((((((((struct o80_int *)(a4))->v)) << 2) + (0x404 + t1)) + 0x0)) = (*(short *)((((((struct o8C_int *)(a4))->v)) + 0x0)));
            *(unsigned int *)((a4 + 0x0)) = 0xC0935CC;
            t26 = 0x8C;
        }
    }
    return t26;
}
