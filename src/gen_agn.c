/* Straight-line functions with calls and guards (batch gen_agn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o20C_int { char p[0x20C]; int v; };
struct o210_int { char p[0x210]; int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o220_short { char p[0x220]; short v; };
struct o222_short { char p[0x222]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o280_float { char p[0x280]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o304_int { char p[0x304]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o338_float { char p[0x338]; float v; };
struct o33C_float { char p[0x33C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o340_float { char p[0x340]; float v; };
struct o344_float { char p[0x344]; float v; };
struct o348_float { char p[0x348]; float v; };
struct o34C_float { char p[0x34C]; float v; };
struct o350_float { char p[0x350]; float v; };
struct o354_float { char p[0x354]; float v; };
struct o358_float { char p[0x358]; float v; };
struct o35C_float { char p[0x35C]; float v; };
struct o360_float { char p[0x360]; float v; };
struct o364_float { char p[0x364]; float v; };
struct o374_uint { char p[0x374]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3FC_int { char p[0x3FC]; int v; };
struct o3FC_uint { char p[0x3FC]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o400_int { char p[0x400]; int v; };
struct o400_uint { char p[0x400]; unsigned int v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o424_int { char p[0x424]; int v; };
struct o424_uint { char p[0x424]; unsigned int v; };
struct o430_int { char p[0x430]; int v; };
struct o430_uint { char p[0x430]; unsigned int v; };
struct o434_int { char p[0x434]; int v; };
struct o434_uint { char p[0x434]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o48C_int { char p[0x48C]; int v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4C4_int { char p[0x4C4]; int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4CC_int { char p[0x4CC]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o554_int { char p[0x554]; int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
struct o560_int { char p[0x560]; int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o578_uint { char p[0x578]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o584_int { char p[0x584]; int v; };
struct o584_uint { char p[0x584]; unsigned int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A0_uint { char p[0x5A0]; unsigned int v; };
struct o5A4_int { char p[0x5A4]; int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5A8_int { char p[0x5A8]; int v; };
struct o5A8_uint { char p[0x5A8]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C0_int { char p[0x5C0]; int v; };
struct o5C0_uint { char p[0x5C0]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o62_short { char p[0x62]; short v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c016a64(void);
int FUN_0c022838(int);
int FUN_0c0278d0(int, int);
int FUN_0c029646(int, int, int);
int FUN_0c02a19a(int);
int FUN_0c02a416(int);
int FUN_0c02dc30(int);
int FUN_0c034d0c(int);
int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c03611c(int);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c03a77a(int);
int FUN_0c03a834(int);
int FUN_0c03a998(int);
int FUN_0c03aaa2(int);
int FUN_0c03ac0e(int);
int FUN_0c03afe8(int);
int FUN_0c03b30c(int);
int FUN_0c03b40c(int);
int FUN_0c03b4da(int);
int FUN_0c03b568(int);
int FUN_0c03bffe(int);
int FUN_0c03c336(int);
int FUN_0c03c510(int);
int FUN_0c03c592(int, int, int, int);
int FUN_0c03c65c(int);
int FUN_0c03c70c(int);
int FUN_0c03c75c(int);
int FUN_0c03c900(int);
int FUN_0c03c9e0(int);
int FUN_0c03cb3a(int);
int FUN_0c03cc70(int);
int FUN_0c03ce1e(int);
int FUN_0c03cfb8(int);
int FUN_0c03d020(int);
int FUN_0c03d038(int);
int FUN_0c03d516(int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c062f54(int, int, int);
int FUN_0c070114(int, int);
int FUN_0c07e24e(void);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a447c(int, int);
int FUN_0c0a44c6(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c60d0(int, int, int);
int FUN_0c0c710e(int, int, int, int, float, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0aee08(int a4, float f4);
int FUN_0c0aeabc(int a4, int a5, int a6, int a7);
int FUN_0c07056c(int a4);
int FUN_0c02800c(int a4, int a5, int a6, int a7);
int FUN_0c070258(int a4, int a5, int a6);
void FUN_0c03d588(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c069152(int a4, int a5, int a6, int a7);
int FUN_0c03d2ae(int a4);
int FUN_0c08b8e0(int a4, int a5);
int FUN_0c073c64(void);
int FUN_0c029bf2(int a4, float f4);

int FUN_0c0aee08(int a4, float f4)
{
    int stk[2];
    register int t0;
    register int t35;
    register int t39;
    register int t47;
    register int t70;

    t0 = (((struct o400_int *)(a4))->v);
    switch (t0) {
    case 1:
        if (((((struct o80_int *)((*(int *)0xC24FA6C)))->v)) == 0) {
        } else {
            (((struct o400_uint *)(a4))->v) = 0x2;
            (((struct o424_uint *)(a4))->v) = 0x0;
        }
        break;
    case 2:
        t70 = (((struct o424_int *)(a4))->v);
        (((struct o3FC_uint *)(a4))->v) = 0x1E;
        (((struct o430_uint *)(a4))->v) = 0x4000;
        (((struct o434_uint *)(a4))->v) = ((int)((int)0x8000 / (int)((((struct o3FC_int *)(a4))->v))));
        (((struct o338_float *)(a4))->v) = (((*(float *)(((((((t70 << 1) + t70) << 2) << 1) + 0xC202378) + 0x0))) - ((((struct o254_float *)(a4))->v))) * 0.5f);
        (((struct o33C_float *)(a4))->v) = ((((((struct o4_float *)((((((t70 << 1) + t70) << 2) << 1) + 0xC202378)))->v)) - ((((struct o258_float *)(a4))->v))) * 0.5f);
        (((struct o340_float *)(a4))->v) = ((((((struct o8_float *)((((((t70 << 1) + t70) << 2) << 1) + 0xC202378)))->v)) - ((((struct o25C_float *)(a4))->v))) * 0.5f);
        (((struct o344_float *)(a4))->v) = ((((((struct oC_float *)((((((t70 << 1) + t70) << 2) << 1) + 0xC202378)))->v)) - ((((struct o278_float *)(a4))->v))) * 0.5f);
        (((struct o348_float *)(a4))->v) = ((((((struct o10_float *)((((((t70 << 1) + t70) << 2) << 1) + 0xC202378)))->v)) - ((((struct o27C_float *)(a4))->v))) * 0.5f);
        (((struct o34C_float *)(a4))->v) = ((((((struct o14_float *)((((((t70 << 1) + t70) << 2) << 1) + 0xC202378)))->v)) - ((((struct o280_float *)(a4))->v))) * 0.5f);
        (((struct o350_float *)(a4))->v) = (((((struct o254_float *)(a4))->v)) + ((((struct o338_float *)(a4))->v)));
        (((struct o354_float *)(a4))->v) = (((((struct o258_float *)(a4))->v)) + ((((struct o33C_float *)(a4))->v)));
        (((struct o358_float *)(a4))->v) = (((((struct o25C_float *)(a4))->v)) + ((((struct o340_float *)(a4))->v)));
        (((struct o35C_float *)(a4))->v) = (((((struct o278_float *)(a4))->v)) + ((((struct o344_float *)(a4))->v)));
        (((struct o360_float *)(a4))->v) = (((((struct o27C_float *)(a4))->v)) + ((((struct o348_float *)(a4))->v)));
        (((struct o364_float *)(a4))->v) = (((((struct o280_float *)(a4))->v)) + ((((struct o34C_float *)(a4))->v)));
        (((struct o400_uint *)(a4))->v) = 0x3;
        break;
    case 3:
        (((struct o430_uint *)(a4))->v) = (((((struct o430_int *)(a4))->v)) + ((((struct o434_int *)(a4))->v)));
        (((struct o254_float *)(a4))->v) = (((((struct o350_float *)(a4))->v)) - (((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o338_float *)(a4))->v)))));
        (((struct o258_float *)(a4))->v) = (((((struct o354_float *)(a4))->v)) - (((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o33C_float *)(a4))->v)))));
        (((struct o25C_float *)(a4))->v) = (((((struct o358_float *)(a4))->v)) - (((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o340_float *)(a4))->v)))));
        (((struct o278_float *)(a4))->v) = (((((struct o35C_float *)(a4))->v)) - (((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o344_float *)(a4))->v)))));
        (((struct o27C_float *)(a4))->v) = (((((struct o360_float *)(a4))->v)) - (((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o348_float *)(a4))->v)))));
        (((struct o280_float *)(a4))->v) = (((((struct o364_float *)(a4))->v)) - (((FUN_0c0da410(((((struct o430_int *)(a4))->v)))) * ((((struct o34C_float *)(a4))->v)))));
        t35 = (((struct o3FC_int *)(a4))->v);
        (((struct o3FC_uint *)(a4))->v) = (t35 - 1);
        if ((int)(t35 - 1) <= 0) {
            (((struct o400_uint *)(a4))->v) = 0x4;
        }
        t39 = *(int *)0xC24FA6C;
        if (((((struct o424_int *)(a4))->v)) != ((((struct o78_int *)(t39))->v))) {
            (((struct o424_uint *)(a4))->v) = ((((struct o78_int *)(t39))->v));
            (((struct o400_uint *)(a4))->v) = 0x2;
        }
        break;
    case 4:
        t47 = *(int *)0xC24FA6C;
        if (((((struct o424_int *)(a4))->v)) != ((((struct o78_int *)(t47))->v))) {
            (((struct o424_uint *)(a4))->v) = ((((struct o78_int *)(t47))->v));
            (((struct o400_uint *)(a4))->v) = 0x2;
        }
        break;
    }
    FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), (((((struct o254_float *)(a4))->v)) - ((((struct o278_float *)(a4))->v))), (((((struct o258_float *)(a4))->v)) - ((((struct o27C_float *)(a4))->v))), (((((struct o25C_float *)(a4))->v)) - ((((struct o280_float *)(a4))->v))));
    (((struct o3CC_ushort *)(a4))->v) = (*(int *)(((int)stk + 0)));
    (((struct o3CE_ushort *)(a4))->v) = (*(int *)(((int)stk + 4)));
    return (FUN_0c07e24e());
}

int FUN_0c0aeabc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = 0xC10F924;
    u0 = 420.0f;
    if (((((struct o84_int *)(a4))->v)) == 0) {
        t0 = 0xC10F918;
        u0 = 50.0f;
    }
    FUN_0c0c710e(t0, a5, a6, a7, u0, 400.0f);
    t0 = (((struct o84_int *)(a4))->v);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    if ((*(int *)0xC23A1A0) == 0) {
        u0 = ((((struct o4_float *)((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490)))->v));
    } else {
        u0 = (((((struct o4_float *)((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490)))->v)) + -0.0149999997f);
    }
    FUN_0c0dcc70((*(float *)(((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490) + 0x0))), u0, ((((struct o8_float *)((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490)))->v)));
    nlRotateAZ(0x8000);
    nlScale(0.00199999986f, 0.00199999986f, 0.00199999986f);
    FUN_0c0de000(0.00199999986f);
    FUN_0c0c465c((((*(int *)0xC23A258) & 0x7) + 0x34));
    nlUnitMatrix();
    if ((*(int *)0xC23A1A0) == 0) {
        u0 = ((((struct o4_float *)(((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490) + 0xC)))->v));
    } else {
        u0 = (((((struct o4_float *)(((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490) + 0xC)))->v)) + -0.0149999997f);
    }
    FUN_0c0dcc70(((((struct oC_float *)((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490)))->v)), u0, ((((struct o8_float *)(((((((t0 << 1) << 1) + (t0 << 1)) << 2) + 0xC202490) + 0xC)))->v)));
    nlScale(0.00199999986f, 0.00199999986f, 0.00199999986f);
    FUN_0c0de000(0.00199999986f);
    FUN_0c0c465c((((*(int *)0xC23A258) & 0x7) + 0x34));
    nlPopMatrix(0x1);
    (((struct o10_float *)0xC24FA74)->v) = 1.0f;
    (((struct o14_float *)0xC24FA74)->v) = 1.0f;
    (((struct o2C_float *)0xC24FA74)->v) = 1.0f;
    (((struct o1C_float *)0xC24FA74)->v) = 0.0f;
    (((struct o18_float *)0xC24FA74)->v) = 0.0f;
    (((struct o24_float *)0xC24FA74)->v) = 1.0f;
    (((struct o20_float *)0xC24FA74)->v) = 1.0f;
    (((struct o28_uint *)0xC24FA74)->v) = 0x0;
    (((struct o30_uint *)0xC24FA74)->v) = 0xFFFFFFFF;
    (((struct oC_float *)0xC24FA74)->v) = 0.00139999995f;
    (((struct o4_float *)0xC24FA74)->v) = 320.0f;
    (((struct o8_float *)0xC24FA74)->v) = 400.0f;
    (((struct o0_uint *)0xC24FA74)->v) = (((int)((int)((int)((int)((((struct oA0_int *)(a4))->v)) / (int)0x3C)) / (int)0xA)) + 0x2050);
    (((struct o34_uint *)0xC24FA74)->v) = 0x3007;
    t0 = ((int (*)(int, float))(FUN_0c0c0340))(0xC24FA74, 1.0f);
    (((struct o0_uint *)0xC24FA74)->v) = (((int)((int)((int)((int)((((struct oA0_int *)(a4))->v)) / (int)0x3C)) % (int)0xA)) + 0x2050);
    (((struct o34_uint *)0xC24FA74)->v) = 0x3005;
    t0 = ((int (*)(int))(FUN_0c0c0340))(0xC24FA74);
    u0 = 500.0f;
    if (((((struct o84_int *)(a4))->v)) == 0) {
        u0 = 140.0f;
    }
    (((struct o4_float *)0xC24FA74)->v) = u0;
    (((struct o34_uint *)0xC24FA74)->v) = 0x300A;
    if ((*(int *)0xC23A1A0) == 0) {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2074;
    } else {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2078;
    }
    (((struct o8_float *)0xC24FA74)->v) = 302.0f;
    t0 = ((int (*)(int))(FUN_0c0c0340))(0xC24FA74);
    if ((*(int *)0xC23A1A0) == 0) {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2075;
    } else {
        (((struct o0_uint *)0xC24FA74)->v) = 0x2079;
    }
    (((struct o8_float *)0xC24FA74)->v) = ((((struct o0_float *)0xC0AEE68)->v));
    t0 = ((int (*)(int))(FUN_0c0c0340))(0xC24FA74);
    (((struct o8_float *)0xC24FA74)->v) = ((((struct o8_float *)0xC0AEE68)->v));
    (((struct o0_uint *)0xC24FA74)->v) = (((int)((int)(((((((struct oA0_int *)(a4))->v)) >> 1) >> 1) >> 1) % (int)0x3)) + 0x203C);
    return (((int (*)(int))(FUN_0c0c0340))(0xC24FA74));
}

int FUN_0c07056c(int a4)
{
    int stk[28];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_2 = a4;
    v0_1 = *(int *)((v0_2 + 0x34));
    v0_4 = (((struct o54_int *)(v0_2))->v);
    *(int *)((int)stk + 0) = (v0_1 - v0_4);
    v0_5 = (int)((int)(FUN_0c0da2e0()) % (int)0x2710);
    v0_3 = (v0_5);
    v0_0 = (0xC0DA2E0);
    v0_0 = (v0_2);
    if (((int)(v0_1 - v0_4) > (int)v0_5)) goto L_C0705AA;
    L_C0707E4:;
    return v0_3;
    L_C0705AA:;
    { struct mv14 { int w[14]; }; *(struct mv14 *)((((int)stk + 4) + 0x34)) = *(struct mv14 *)(0xC0FC318); }
    *(unsigned int *)(((int)stk + 16)) = ((((struct o70_int *)(v0_0))->v));
    v0_1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)(((int)stk + 8)) = 0xC246FF0;
    w0_1 = (((struct o278_float *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_1 = (0x0);
    v0_2 = (0x4);
    v0_3 = (0xC);
    w0_0 = ((w0_1 + -60.0f));
    w0_1 = ((w0_1 + 60.0f));
    L_C0705E4:;
    v0_5 = *(int *)((((v0_2 << 2) + ((*(int *)(((int)stk + 8))) + 0x40)) + 0x0));
    v0_4 = (v0_5);
    if ((v0_5 == 4)) goto L_C070608;
    if ((v0_4 == 2)) goto L_C070608;
    if ((v0_4 != 3)) goto L_C07061A;
    L_C070608:;
    v0_4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_4 + 0x1);
    *(unsigned int *)((((((v0_4 + 0x1) - 1) << 2) + (((int)stk + 4) + 0x14)) + 0x0)) = v0_2;
    L_C07061A:;
    v0_4 = (int)(v0_2 + 0x1) < (int)v0_3;
    v0_2 = ((v0_2 + 0x1));
    if (v0_4) goto L_C0705E4;
    v0_3 = (0x58);
    if ((!(((((struct o58_float *)(v0_0))->v)) > w0_0))) goto L_C07062A;
    w0_0 = ((*(float *)((v0_0 + v0_3))));
    L_C07062A:;
    v0_3 = (0x64);
    if ((!(w0_1 > ((((struct o64_float *)(v0_0))->v))))) goto L_C070634;
    w0_1 = ((*(float *)((v0_0 + v0_3))));
    L_C070634:;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_2 = (0x3E8);
    w0_2 = ((w0_1 - w0_0));
    w0_3 = (15.0f);
    w0_1 = (1000.0f);
    L_C070708:;
    if (!(((int)(*(int *)(((int)stk + 12))) < (int)0x4))) goto L_C070710;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    w0_4 = w0_0;
    w0_4 = w0_4 + w0_2 * (((float)((int)((int)(FUN_0c0da2e0()) % (int)v0_2)) / w0_1));
    *(float *)(((int)stk + 56)) = w0_4;
    v0_5 = (int)((int)(FUN_0c0da2e0()) % (int)v0_2);
    w0_4 = ((((struct o60_float *)(v0_0))->v));
    w0_4 = w0_4 + ((((((struct o6C_float *)(v0_0))->v)) - ((((struct o60_float *)(v0_0))->v)))) * (((float)v0_5 / w0_1));
    *(float *)(((int)stk + 64)) = w0_4;
    v0_3 = ((((int)stk + 4) + 0x14));
    v0_4 = (v0_1);
    FPUL_ = (v0_5);
    if (((int)(*(int *)(((int)stk + 4))) <= 0)) goto L_C0706FC;
    goto L_C0706CE;
    L_C070710:;
    w0_0 = ((((struct o5C_float *)(v0_0))->v));
    w0_0 = w0_0 + ((((((struct o68_float *)(v0_0))->v)) - ((((struct o5C_float *)(v0_0))->v)))) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)v0_2)) / w0_1));
    *(float *)(((int)stk + 60)) = w0_0;
    (((struct o40_ushort *)(((int)stk + 4)))->v) = (FUN_0c0da2e0());
    (((struct o42_ushort *)(((int)stk + 4)))->v) = (FUN_0c0da2e0());
    (((struct o44_ushort *)(((int)stk + 4)))->v) = (FUN_0c0da2e0());
    *(unsigned short *)(((int)stk + 74)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
    *(float *)(((int)stk + 88)) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0xB)) - 5) / w0_1);
    *(float *)(((int)stk + 92)) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0xB)) - 5) / w0_1);
    v0_2 = (int)((int)(FUN_0c0da2e0()) % (int)0xB);
    *(float *)(((int)stk + 96)) = ((float)(v0_2 - 5) / w0_1);
    *(unsigned int *)(((int)stk + 100)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0x4)));
    v0_4 = (0x1);
    FPUL_ = ((v0_2 - 5));
    if (((*(int *)0xC23ED9C) == 4)) goto L_C0707C0;
    *(unsigned short *)(((int)stk + 108)) = v0_1;
    L_C0707C0:;
    FUN_0c070114((((int)stk + 4) + 0x34), v0_4);
    v0_1 = (((struct o70_int *)(v0_0))->v);
    (((struct o70_uint *)(v0_0))->v) = (v0_1 + 0x8);
    if (((*(int *)(((v0_1 + 0x8) + 0x4))) != 0)) goto L_C0707DE;
    (((struct o70_uint *)(v0_0))->v) = ((((struct o74_int *)(v0_0))->v));
    L_C0707DE:;
    (((struct o54_uint *)(v0_0))->v) = (*(int *)((v0_0 + 0x34)));
    v0_3 = (0x54);
    goto L_C0707E4;
    L_C0706CE:;
    v0_5 = *(int *)((((*(int *)((v0_3 + 0x0))) << 2) + (*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 60)) = ((((struct o34_float *)(v0_5))->v));
    v0_5 = !(w0_3 > (nlLength((((int)stk + 4) + 0x34), (v0_5 + 0x30))));
    if (v0_5) goto L_C0706F2;
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    L_C0706FC:;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_C070710;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C070708;
    L_C0706F2:;
    v0_5 = (int)(v0_4 + 0x1) < (int)(*(int *)(((int)stk + 4)));
    v0_3 = ((v0_3 + 0x4));
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C0706CE;
    goto L_C0706FC;
}

int FUN_0c02800c(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t10;
    register int t28;
    register int t32;
    register int t45;
    register int t63;
    register int t71;
    register int t81;
    register int t82;
    register int t84;
    register int t92;
    register int t101;
    register int t107;
    register int t112;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t0 = (((struct o3A0_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                switch (t0) {
                case 3:
                    if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) == 4) {
                        FUN_0c0278d0(a4, 0x1);
                        t10 = (((struct o3B0_int *)(a4))->v);
                        (((struct o3B0_uint *)(a4))->v) = (t10 - 1);
                        if ((int)(t10 - 1) <= 0) {
                            (((struct o374_uint *)(a4))->v) = 0x0;
                            (((struct o3B0_uint *)(a4))->v) = 0x0;
                            (((struct o3AC_uint *)(a4))->v) = 0x78;
                            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                            { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 12)) = *(struct mv4 *)(0xC0F53D8); }
                            *(float *)(((int)stk + 28)) = 0.0f;
                            *(float *)(((int)stk + 32)) = -4.90189981f;
                            *(float *)(((int)stk + 36)) = -14.0120993f;
                            R1008 = 0x0;
                            R1004 = 0x0;
                            R1000 = 0x0;
                            FUN_0c062d4a(a4, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x1C), 0xFFFFEAAB, R1000, R1004, R1008);
                            FUN_0c0372f8(a4, 0x133A9, 0x233A9, ((((struct o3AC_int *)(a4))->v)));
                        } else {
                            (((struct o374_uint *)(a4))->v) = ((int)((int)((-((((struct o3B0_int *)(a4))->v))) + 0xB4) / (int)0x3));
                        }
                    } else {
                        (((struct o374_uint *)(a4))->v) = 0x0;
                        (((struct o3A0_uint *)(a4))->v) = 0x5;
                    }
                    t28 = FUN_0c02a416(a4);
                    if (t28 != 0) {
                        (((struct o374_uint *)(a4))->v) = 0x0;
                        (((struct o3A0_uint *)(a4))->v) = 0x5;
                    }
                    break;
                case 4:
                    t32 = (((struct o3AC_int *)(a4))->v);
                    (((struct o3AC_uint *)(a4))->v) = (t32 - 1);
                    if ((int)(t32 - 1) > (int)0x64) {
                        FUN_0c0278d0(a4, 0x1);
                    }
                    if ((int)((((struct o3AC_int *)(a4))->v)) < 0) {
                        (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                    }
                    break;
                case 5:
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 12) + 0x14)) = *(struct mv2 *)(0xC0F53E8); }
                    FUN_0c0a44c6(a4, (((int)stk + 12) + 0x14));
                    t45 = ((int (*)(int))(FUN_0c02a19a))(a4);
                    break;
                }
                t112 = (FUN_0c022838(a4));
            } else {
                if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) == 4) {
                    FUN_0c0278d0(a4, 0x1);
                    t63 = (((struct o3B0_int *)(a4))->v);
                    (((struct o3B0_uint *)(a4))->v) = (t63 - 1);
                    if ((int)(t63 - 1) < 0) {
                        *(float *)(((int)stk + 28)) = 0.0f;
                        *(float *)(((int)stk + 32)) = -4.90189981f;
                        *(float *)(((int)stk + 36)) = -14.0120993f;
                        FUN_0c062f54(a4, (((int)stk + 12) + 0x10), 0x0);
                        (((struct o3B0_uint *)(a4))->v) = 0x3C;
                        FUN_0c0372f8(a4, 0x333A9, 0x433A9, ((((struct o3B0_int *)(a4))->v)));
                        (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                    }
                    t71 = FUN_0c02a416(a4);
                    if (t71 == 0) {
                        t112 = (FUN_0c022838(a4));
                    } else {
                        (((struct o534_uint *)(a4))->v) = 0x0;
                        t112 = (((int (*)(int))(FUN_0c02a19a))(a4));
                    }
                } else {
                    t112 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
                }
            }
        } else {
            t81 = (((struct o3B0_int *)(a4))->v);
            (((struct o3B0_uint *)(a4))->v) = (t81 - 1);
            if ((int)(t81 - 1) < 0) {
                t82 = FUN_0c034d0c(a4);
                if (t82 != 0) {
                    (((struct o3B0_uint *)(a4))->v) = 0x28;
                    (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                    t84 = FUN_0c02a416(a4);
                    if (t84 == 0) {
                        t112 = (FUN_0c022838(a4));
                    } else {
                        (((struct o534_uint *)(a4))->v) = 0x0;
                        t112 = (((int (*)(int))(FUN_0c02a19a))(a4));
                    }
                } else {
                    t112 = (((int (*)(int))(FUN_0c02a19a))(a4));
                }
            } else {
                t92 = FUN_0c02a416(a4);
                if (t92 == 0) {
                    t112 = (FUN_0c022838(a4));
                } else {
                    (((struct o534_uint *)(a4))->v) = 0x0;
                    t112 = (((int (*)(int))(FUN_0c02a19a))(a4));
                }
            }
        }
    } else {
        t101 = FUN_0c0278d0(a4, 0x0);
        if (t101 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 12) + 0x14)) = *(struct mv2 *)(0xC0F53D0); }
            FUN_0c0a447c(a4, (((int)stk + 12) + 0x14));
            (((struct o3B0_uint *)(a4))->v) = 0xA;
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
        }
        t107 = FUN_0c02a416(a4);
        if (t107 == 0) {
            t112 = (FUN_0c022838(a4));
        } else {
            (((struct o534_uint *)(a4))->v) = 0x0;
            t112 = (((int (*)(int))(FUN_0c02a19a))(a4));
        }
    }
    return t112;
}

int FUN_0c070258(int a4, int a5, int a6)
{
    int stk[19];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t17;
    register int t21;
    register float u40;
    register float u43;
    register float u45;
    register float u48;
    register float u50;
    register float u53;
    register float u55;
    register float u64;
    register float u70;
    register float u78;
    register int t94;
    register int t113;
    register int t36;

    if ((((((struct o0_int *)0xC23ED88)->v)) & 0x200) == 0) {
    } else {
        { struct mv14 { int w[14]; }; *(struct mv14 *)((((int)stk + 0) + 0x14)) = *(struct mv14 *)(0xC0FC2E0); }
        t1 = (((struct o70_int *)(a4))->v);
        t2 = (((int)stk + 0) + 0x14);
        t3 = 0x0;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)(((t3 << 2) + 0xC247030));
            if (t6 == 4) {
                *(unsigned int *)((((t4 << 2) + (((int)stk + 0) + 0xC)) + 0x0)) = t3;
                t4 = (t4 + 0x1);
            } else {
                if ((int)(*(int *)((((t3 << 2) + 0xC247030) + 0x0))) >= (int)0x2) {
                    t2 = t5;
                    t2 = (t2 << 2);
                    t2 = (t2 + (((int)stk + 0) + 0x4));
                    *(unsigned int *)((t2 + 0x0)) = t3;
                    t5 = (t5 + 0x1);
                }
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        if ((int)t4 > 0) {
            t17 = (int)((int)(FUN_0c0da2e0()) % (int)t4);
            t113 = (t17 << 2);
            t36 = (*(int *)(((((*(int *)(((((int)stk + 0) + 0xC) + (t17 << 2)))) << 2) + 0xC246FF0) + 0x0)));
        } else {
            t113 = t6;
            t36 = 0x0;
            if ((int)t5 > 0) {
                t21 = (int)((int)(FUN_0c0da2e0()) % (int)t5);
                t113 = (t21 << 2);
                t36 = (*(int *)(((((*(int *)(((((int)stk + 0) + 0x4) + (t21 << 2)))) << 2) + 0xC246FF0) + 0x0)));
            }
        }
        if (t36 == 0) {
        } else {
            u40 = (((struct o30_float *)(t36))->v);
            u43 = (u40 + -20.0f);
            if (((((struct o58_float *)(a4))->v)) > (u40 + -20.0f)) {
                u43 = ((((struct o58_float *)(a4))->v));
            }
            u45 = (((struct o30_float *)(t36))->v);
            u48 = (u45 + 20.0f);
            if ((u45 + 20.0f) > ((((struct o64_float *)(a4))->v))) {
                u48 = ((((struct o64_float *)(a4))->v));
            }
            u50 = (((struct o38_float *)(t36))->v);
            u53 = (u50 + -20.0f);
            if (((((struct o60_float *)(a4))->v)) > (u50 + -20.0f)) {
                u53 = ((((struct o60_float *)(a4))->v));
            }
            u55 = (((struct o38_float *)(t36))->v);
            *(float *)(((int)stk + 0)) = (u55 + 20.0f);
            if ((u55 + 20.0f) > ((((struct o6C_float *)(a4))->v))) {
                *(float *)(((int)stk + 0)) = ((((struct o6C_float *)(a4))->v));
            }
            u64 = u43;
            u64 = u64 + ((u48 - u43)) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) / 1000.0f));
            *(float *)(((int)stk + 20)) = u64;
            u70 = u53;
            u70 = u70 + (((*(float *)(((int)stk + 0))) - u53)) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) / 1000.0f));
            *(float *)(((int)stk + 28)) = u70;
            u78 = ((((struct o5C_float *)(a4))->v));
            u78 = u78 + ((((((struct o68_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)))) * (((float)((int)((int)(FUN_0c0da2e0()) % (int)0x3E8)) / 1000.0f));
            *(float *)(((int)stk + 24)) = u78;
            (((struct o20_ushort *)(((int)stk + 0)))->v) = (FUN_0c0da2e0());
            (((struct o22_ushort *)(((int)stk + 0)))->v) = (FUN_0c0da2e0());
            (((struct o24_ushort *)(((int)stk + 0)))->v) = (FUN_0c0da2e0());
            *(unsigned short *)(((int)stk + 38)) = (*(int *)((t1 + 0x0)));
            *(float *)(((int)stk + 52)) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0xB)) - 5) / 1000.0f);
            *(float *)(((int)stk + 56)) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0xB)) - 5) / 1000.0f);
            *(float *)(((int)stk + 60)) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0xB)) - 5) / 1000.0f);
            *(unsigned int *)(((int)stk + 64)) = (*(int *)((t1 + 0x4)));
            if (((((struct o14_int *)0xC23ED88)->v)) != 4) {
                *(unsigned short *)(((int)stk + 72)) = 0x0;
            }
            FUN_0c070114((((int)stk + 0) + 0x14), 0x1);
            t94 = (((struct o70_int *)(a4))->v);
            (((struct o70_uint *)(a4))->v) = (t94 + 0x8);
            if ((*(int *)(((t94 + 0x8) + 0x4))) == 0) {
                (((struct o70_uint *)(a4))->v) = ((((struct o74_int *)(a4))->v));
            }
            t113 = 0x70;
        }
        (((struct o0_uint *)0xC23ED88)->v) = (((((struct o0_int *)0xC23ED88)->v)) & 0xFFFFFDFF);
    }
    return t113;
}

void FUN_0c03d588(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;
    int t2;

    t2 = (((struct o48C_int *)(a4))->v);
    switch (t2) {
    case 20:
        FUN_0c03c336(a4);
        break;
    case 28:
        FUN_0c03c510(a4);
        break;
    case 30:
        FUN_0c03d020(a4);
        break;
    case 29:
        FUN_0c03cfb8(a4);
        break;
    case 41:
        FUN_0c03c592(a4, a5, a6, a7);
        break;
    default:
        if ((t2 != 43) && (t2 != 42)) {
            switch (t2) {
            case 44:
                FUN_0c03c70c(a4);
                break;
            case 45:
                FUN_0c03c75c(a4);
                break;
            case 46:
                FUN_0c03c900(a4);
                break;
            case 49:
                FUN_0c03c9e0(a4);
                break;
            case 51:
                FUN_0c03cb3a(a4);
                break;
            case 52:
                FUN_0c03cc70(a4);
                break;
            default:
                if ((t2 != 53) && (t2 != 54)) {
                    if ((t2 != 47) && (t2 != 48)) {
                        if (t2 != 31) {
                            FUN_0c03bffe(a4);
                        } else {
                            FUN_0c03d516(a4);
                        }
                    } else {
                        FUN_0c03d038(a4);
                    }
                } else {
                    FUN_0c03ce1e(a4);
                }
                break;
            }
        } else {
            FUN_0c03c65c(a4);
        }
        break;
    }
    t2 = (((struct o560_int *)(a4))->v);
    if ((t2 != 2) && ((t2 != 3) && ((t2 != 4) && ((t2 != 6) && ((t2 != 12) && ((t0 = (((struct o304_int *)(a4))->v), (int)t0 > 0) && (t1 = (((struct o20C_int *)(a4))->v), t1 != 0x200000))))))) {
    } else {
        FUN_0c03611c(a4);
        (((struct o554_uint *)(a4))->v) = 0x0;
    }
    (((struct o5A8_uint *)(a4))->v) = (((((struct o5A8_int *)(a4))->v)) & 0x3);
    (((struct o5A4_uint *)(a4))->v) = (((((struct o5A4_int *)(a4))->v)) & 0x3);
    (((struct o5A0_uint *)(a4))->v) = (((((struct o5A0_int *)(a4))->v)) & 0x1);
    (((struct o57C_uint *)(a4))->v) = ((int)((int)((((struct o57C_int *)(a4))->v)) % (int)0x5));
    (((struct o580_uint *)(a4))->v) = (((((struct o580_int *)(a4))->v)) & 0x3);
    (((struct o584_uint *)(a4))->v) = (((((struct o584_int *)(a4))->v)) & 0x3);
    (((struct o578_uint *)(a4))->v) = ((int)((int)((((struct o578_int *)(a4))->v)) % (int)0xA));
    t0 = (((struct o560_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                FUN_0c02dc30(a4);
    return;
            }
            case 2:
            {
                FUN_0c03afe8(a4);
    return;
            }
            case 4:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                FUN_0c03aaa2(a4);
    return;
            }
            case 6:
            {
                (((struct o57C_uint *)(a4))->v) = 0x3;
                FUN_0c03a834(a4);
    return;
            }
            case 8:
            {
                (((struct o57C_uint *)(a4))->v) = 0x4;
                FUN_0c03aaa2(a4);
    return;
            }
            case 10:
            {
                FUN_0c03a998(a4);
    return;
            }
            case 12:
            {
                FUN_0c03a77a(a4);
    return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                FUN_0c03b40c(a4);
    return;
            }
            case 18:
            {
                FUN_0c03b4da(a4);
    return;
            }
            case 20:
            {
                (((struct o4C8_uint *)(a4))->v) = 0xB;
                return;
            }
            case 22:
            {
                t0 = (((struct o48C_int *)(a4))->v);
                if ((t0 != 47) && (t0 != 48)) {
                    FUN_0c03afe8(a4);
    return;
                }
                FUN_0c03b30c(a4);
    return;
            }
            case 24:
            {
                FUN_0c03ac0e(a4);
    return;
            }
            default:
            {
                FUN_0c03b568(a4);
    return;
            }
        }
    }
}

int FUN_0c069152(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register float u4;
    register int t31;
    register int t32;
    register int t33;
    register int t79;
    register float u80;
    register float u81;
    register float u74;
    register float u75;
    register float u68;
    register float u69;
    register int t84;
    register int t119;
    register float u133;
    register float u155;
    register int t29;
    register int t30;
    register float u34;
    register float u35;
    register float u62;
    register float u63;
    register int t48;
    register int t49;
    register float u51;
    register float u52;

    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if (((((struct o34_float *)(a4))->v)) > 30.0f) {
                u4 = (((struct o34_float *)(a4))->v);
                (((struct o34_float *)(a4))->v) = (u4 + 0.199999988f);
                if ((u4 + 0.199999988f) > 35.0f) {
                    FUN_0c0e19f2();
                }
            } else {
                (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.699999988f);
            }
            (((struct o74_float *)(a4))->v) = (((((struct o74_float *)(a4))->v)) + 0.0599999987f);
        }
    } else {
        t31 = 0x0;
        t32 = 0x0;
        t33 = 0x0;
        for (;;) {
            t79 = t31;
            u80 = u34;
            u81 = u35;
            if ((*(int *)((t33 + 0xC247030))) == 4) {
                t31 = 0xC246FF0;
                t31 = (t31 + t32);
                t31 = (*(int *)((t31 + 0x0)));
                u35 = ((((struct o30_float *)(a4))->v));
                u34 = ((((struct o30_float *)(t31))->v));
                u34 = (u34 - u35);
                u34 = _builtin_fabsf(u34);
                t79 = t31;
                u74 = u34;
                u75 = u35;
                if (4.0f > u34) {
                    u34 = ((((struct o38_float *)(t31))->v));
                    u35 = ((((struct o38_float *)(a4))->v));
                    u34 = (u34 - u35);
                    u34 = _builtin_fabsf(u34);
                    t79 = t31;
                    u68 = u34;
                    u69 = u35;
                    if (4.0f > u34) {
                        u34 = ((((struct o34_float *)(t31))->v));
                        u35 = ((((struct o34_float *)(a4))->v));
                        u34 = (u34 - u35);
                        u34 = _builtin_fabsf(u34);
                        if (10.0999994f > u34) {
                            if (((((struct oA0_int *)(a4))->v)) == 8) {
                                t31 = 0xBE;
                                FUN_0c0cc3f8(t31, a5, a6, a7);
                            } else {
                                t48 = t29;
                                t49 = t30;
                                u51 = u34;
                                u52 = u35;
                            }
                            u34 = u51;
                            u35 = u52;
                            t29 = t48;
                            t30 = t49;
                            t31 = 0x229A9;
                            FUN_0c0cc3f8(t31, 0x0, 0x0, 0x0);
                            t29 = (*(int *)0xC2475B0);
                            t30 = ((((struct oA0_int *)(a4))->v));
                            t29 = (t29 | t30);
                            *(unsigned int *)0xC2475B0 = t29;
                            FUN_0c016a64();
                            t30 = ((((struct o80_int *)(a4))->v));
                            t30 = (t30 + 0x1);
                            (((struct o80_uint *)(a4))->v) = t30;
                        } else {
                            t79 = t31;
                            u62 = u34;
                            u63 = u35;
                        }
                        u68 = u62;
                        u69 = u63;
                    }
                    u74 = u68;
                    u75 = u69;
                }
                u80 = u74;
                u81 = u75;
            }
            u34 = u80;
            u35 = u81;
            t29 = 0x8;
            t31 = t79;
            t33 = (t33 + 0x4);
            t32 = (t32 + 0x4);
            if ((unsigned int)t33 >= (unsigned int)t29) {
                break;
            }
        }
        t84 = (((struct oA0_int *)(a4))->v);
        if (t84 != 1) {
            if (t84 != 8) {
            } else {
                FUN_0c0c60d0((a4 + 0x30), 0xC0FB043, 0x7);
            }
        } else {
            FUN_0c0c60d0((a4 + 0x30), 0xC0FB03C, 0x7);
        }
    }
    nlPushMatrix(0x0);
    t119 = (((struct oA0_int *)(a4))->v);
    if (t119 != 1) {
        if (t119 != 8) {
        } else {
            (((struct o98_uint *)(a4))->v) = ((int)((int)(((((struct o98_int *)(a4))->v)) + 0x1) % (int)((((struct oA4_int *)(a4))->v))));
            FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
            nlRotateAY(((((struct o62_short *)(a4))->v)));
            nlRotateAZ(((((struct o64_short *)(a4))->v)));
            nlRotateAX(((((struct o60_short *)(a4))->v)));
            u133 = (((struct o74_float *)(a4))->v);
            nlScale(u133, u133, u133);
            FUN_0c0de000(((((struct o74_float *)(a4))->v)));
            FUN_0c0c465c((((((struct o78_int *)(a4))->v)) + ((((struct o98_int *)(a4))->v))));
        }
    } else {
        (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + 0x300);
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
        nlRotateAY((((((struct o62_short *)(a4))->v)) + ((((struct o98_int *)(a4))->v))));
        nlRotateAZ(((((struct o64_short *)(a4))->v)));
        nlRotateAX(((((struct o60_short *)(a4))->v)));
        u155 = (((struct o74_float *)(a4))->v);
        nlScale(u155, u155, u155);
        FUN_0c0de000(((((struct o74_float *)(a4))->v)));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    }
    return nlPopMatrix(0x1);
}

int FUN_0c03d2ae(int a4)
{
    int stk[4];
    int t0;
    register int t11;
    register int t29;
    register int t48;
    int t56;
    int t65;
    int t97;
    register int t1;
    register int t2;
    int t7;
    register int t10;
    int t25;
    register int t28;
    register int t49;
    int t50;
    register int t58;
    register int t111;

    t0 = (((struct o4C4_int *)(a4))->v);
    if (((t0 != 0) && (t0 != 1)) || ((t1 = (((struct o310_int *)(a4))->v), (int)t1 < 0) || (t2 = (((struct o304_int *)(a4))->v), (int)t2 <= 0))) {
        (((struct o57C_uint *)(a4))->v) = 0x0;
        if (((int)((((struct o304_int *)(a4))->v)) > 0) && (t7 = (((struct o57C_int *)(a4))->v), t7 != 4)) {
            t10 = ((((struct o57C_int *)(a4))->v));
        } else {
            t10 = (((((struct o57C_int *)(a4))->v)) + 0x5);
        }
        t11 = (((struct o4F0_int *)(a4))->v);
        (((struct o560_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o4C4_int *)(a4))->v)) << 1) + ((*(int *)(((((((struct o578_int *)(a4))->v)) << 2) + (*(int *)((0xC1F8E40 + (((t11 << 2) + t11) << 2))))))) + (t10 * 0xE)))));
    } else {
        if (((((struct o554_int *)(a4))->v)) == 2) {
            if ((int)((int)((int)(((((struct o310_int *)(a4))->v)) - 1) % (int)0x5)) < (int)0x4) {
                (((struct o560_uint *)(a4))->v) = 0xB;
                (((struct o57C_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o560_uint *)(a4))->v) = 0x2;
                (((struct o57C_uint *)(a4))->v) = 0x3;
            }
        } else {
            (((struct o57C_uint *)(a4))->v) = 0x0;
            if (((int)((((struct o304_int *)(a4))->v)) <= 0) && (t25 = (((struct o57C_int *)(a4))->v), t25 != 4)) {
                t28 = (((((struct o57C_int *)(a4))->v)) + 0x5);
            } else {
                t28 = ((((struct o57C_int *)(a4))->v));
            }
            t29 = (((struct o4F0_int *)(a4))->v);
            (((struct o560_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct o4C4_int *)(a4))->v)) << 1) + ((*(int *)(((((((struct o578_int *)(a4))->v)) << 2) + (*(int *)((0xC1F8E40 + (((t29 << 2) + t29) << 2))))))) + (t28 * 0xE)))));
        }
    }
    t48 = (((struct o560_int *)(a4))->v);
    if ((t48 != 2) && ((t48 != 3) && ((t48 != 4) && ((t48 != 6) && ((t48 != 12) && ((t49 = (((struct o304_int *)(a4))->v), (int)t49 > 0) && (t50 = (((struct o20C_int *)(a4))->v), t50 != 0x200000))))))) {
    } else {
        (((struct o554_uint *)(a4))->v) = 0x1;
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        (((struct o4E4_uint *)(a4))->v) = 0x0;
    }
    if (((((struct o560_int *)(a4))->v)) != 0) {
        t56 = (((struct o4C8_int *)(a4))->v);
        if ((((((t56 == 2)) ? 1 : 0) & (((((((struct o4CC_int *)(a4))->v)) == 0)) ? 1 : 0)) == 0) && (((t56 != 9) || (t58 = (((struct o210_int *)(a4))->v), t58 != 67)) && ((t56 != 4) && ((t56 != 7) && ((t56 != 12) && ((t56 != 10) && ((t56 != 13) && (t56 != 8)))))))) {
        } else {
            FUN_0c0355f8(a4);
        }
        t65 = (((struct o4C8_int *)(a4))->v);
        if ((t65 != 5) && (t65 != 6)) {
            FUN_0c039034(a4);
            FUN_0c039110(a4);
            (((struct o5A4_uint *)(a4))->v) = (((((struct o5A0_int *)(a4))->v)) << 1);
            if (((((struct o560_int *)(a4))->v)) != 11) {
                FUN_0c0356f4(a4, 0x1);
            }
        }
    }
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t111 = 0x5C0;
        if (((((struct o5C0_int *)(a4))->v)) == 0) {
            (((struct o5C0_uint *)(a4))->v) = 0x1;
            t111 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0));
        }
    } else {
        t97 = (((struct o57C_int *)(a4))->v);
        if ((t97 != 0) && ((t97 != 1) && ((t97 != 2) && (t97 != 3)))) {
            t111 = t97;
            if (t97 != 4) {
            } else {
                t111 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0));
            }
        } else {
            t111 = (FUN_0c0cc3f8(0x41BA9, 0x0, 0x0, 0x0));
        }
    }
    return t111;
}

int FUN_0c08b8e0(int a4, int a5)
{
    int stk[18];
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

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    t0 = FUN_0c0da2e0();
    t1 = (int)((int)0x5A / (int)((0xF & t0) + 0x5));
    nlSubVector3op((((int)stk + 4) + 0x38), (*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 12))));
    t5 = FUN_0c0dcea0((((int)stk + 4) + 0x38));
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 60))), (*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 68))));
    FUN_0c0dc5a0();
    *(float *)(((int)stk + 24)) = (1.0f / (float)((0xF & t0) + 0x5));
    *(float *)(((int)stk + 20)) = (1.0f / (float)((0xF & t0) + 0x5));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    FUN_0c0dcca0((*(int *)(((int)stk + 12))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    FUN_0c0db840((((int)stk + 4) + 0x2C));
    *(unsigned int *)(((int)stk + 12)) = (((0xF & t0) + 0x5) - 1);
    *(float *)(((int)stk + 32)) = (0.19156526f / (float)t1);
    if ((int)((0xF & t0) + 0x5) > 0) {
        t18 = 0x0;
        u19 = t5;
        for (;;) {
            t21 = FUN_0c0e19aa(0xC08BB20, 0x64, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t21);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t21 + 0x30)) = *(struct mv3 *)((((int)stk + 4) + 0x2C)); }
            if ((int)t18 < (int)(*(int *)(((int)stk + 12)))) {
                u24 = *(float *)(((int)stk + 20));
                *(float *)(((int)stk + 0)) = (u19 * u24);
                u26 = (u19 * u24);
                u27 = (u26 * (float)(((FUN_0c0da2e0()) & 0x7FFF) + 0x2000));
                u19 = (u19 - ((u27 * 3.05185094e-05f)));
                FUN_0c0dcc70(0.0f, (u27 * 3.05185094e-05f), 0.0f);
                u31 = (u27 * 3.05185094e-05f);
                u32 = (u31 * (float)((FUN_0c0da2e0()) - 16383));
                *(float *)(((int)stk + 48)) = (u32 * 6.10370189e-05f);
                *(float *)(((int)stk + 52)) = 0.0f;
                u34 = (u27 * 3.05185094e-05f);
                u35 = (u34 * (float)((FUN_0c0da2e0()) - 16383));
                *(float *)(((int)stk + 56)) = (u35 * 6.10370189e-05f);
                FUN_0c0db470((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C));
                nlSubVector3op((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x2C), (t21 + 0x30));
                u42 = (u27 * 3.05185094e-05f);
            } else {
                nlSubVector3op((((int)stk + 4) + 0x20), (*(int *)(((int)stk + 28))), (t21 + 0x30));
                u42 = (FUN_0c0dcea0((((int)stk + 4) + 0x20)));
            }
            FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 44))));
            t18 = (t18 + 0x1);
            (((struct o48_ushort *)(t21))->v) = (*(int *)(((int)stk + 4)));
            (((struct o4C_ushort *)(t21))->v) = (*(int *)(((int)stk + 8)));
            (((struct o58_uint *)(t21))->v) = (*(int *)(((int)stk + 16)));
            (((struct o44_float *)(t21))->v) = ((*(float *)(((int)stk + 32))) * u42);
            (((struct o60_uint *)(t21))->v) = t1;
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + (*(float *)(((int)stk + 24))));
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + t1);
            if ((int)t18 < (int)((0xF & t0) + 0x5)) continue;
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c073c64(void)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t9;
    register int t7;
    register int t13;
    register int t11;
    register float u19;
    register float u21;
    register int t24;
    register int t22;
    register float u28;
    register float u30;
    register int t33;
    register int t31;
    register int t34;
    register int t35;
    register int t41;
    register float u44;
    register int t47;
    register int t48;
    register float u49;
    register float u52;
    register float u57;
    register float u60;
    register float u61;
    float R1000;
    int R1004;
    int R1008;

    R1000 = *(float *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0848bc(1.0f, 1.0f, 1.0f);
    t3 = 0xD;
    t4 = 0x0;
    t5 = 0x47AE927;
    for (;;) {
        t9 = (t5 & 0x1);
        t7 = (int)(((unsigned int)t9 >> 1) | ((unsigned int)t9 << 31));
        t13 = ((((t5 >> 1) | t7) ^ t3) & 0x1);
        t11 = (int)(((unsigned int)t13 >> 1) | ((unsigned int)t13 << 31));
        R1004 = (((((0xF & (((t5 >> 1) | t7) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t7) ^ t3))) << 2) << 1);
        u19 = (float)(((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) & 0xFFF);
        u21 = (*(float *)((((((((0xF & (((t5 >> 1) | t7) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t7) ^ t3))) << 2) << 1) + 0xC0FDFEC) + 0x0)));
        u21 = u21 + u19 * ((((((struct o4_float *)(((((((0xF & (((t5 >> 1) | t7) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t7) ^ t3))) << 2) << 1) + 0xC0FDFEC)))->v)) / 4095.0f));
        R1000 = u21;
        t24 = (((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) & 0x1);
        t22 = (int)(((unsigned int)t24 >> 1) | ((unsigned int)t24 << 31));
        u28 = (float)((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) & 0xFFF);
        u30 = ((((struct o8_float *)(((((((0xF & (((t5 >> 1) | t7) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t7) ^ t3))) << 2) << 1) + 0xC0FDFEC)))->v));
        u30 = u30 + u28 * ((((((struct oC_float *)(((((((0xF & (((t5 >> 1) | t7) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t7) ^ t3))) << 2) << 1) + 0xC0FDFEC)))->v)) / 4095.0f));
        t33 = ((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) & 0x1);
        t31 = (int)(((unsigned int)t33 >> 1) | ((unsigned int)t33 << 31));
        t34 = ((((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t31) ^ ((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1));
        t35 = (((((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t31) ^ ((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1)) | ((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1));
        t41 = (((((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t31) ^ ((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1)) & 0xFFF);
        t5 = ((((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t31) ^ ((((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t22) ^ ((((((((t5 >> 1) | t7) ^ t3) >> 1) | t11) ^ (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t7) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1));
        t5 = (t5 >> 1);
        u44 = (1.0f + 1.0f);
        u44 = u44 + 0.000976800919f * (float)t41;
        t47 = (t34 & 0x1);
        t5 = (t5 | ((int)(((unsigned int)t47 >> 1) | ((unsigned int)t47 << 31))));
        t5 = (t5 ^ (t35 * 0x22AC8EE1));
        t3 = t5;
        t3 = (t3 | (t35 * 0x22AC8EE1));
        t48 = *(int *)0xC23A258;
        u49 = 0.5f;
        u49 = u49 + 0.000122100115f * (float)(t5 & 0xFFF);
        t3 = (t3 * 0x22AC8EE1);
        u52 = (float)(t48 + t4);
        if ((int)(t48 + t4) < 0) {
            u52 = ((float)(t48 + t4) + 4.2949673e+09f);
        }
        R1008 = (((int)((int)(int)(u49 * u52) % (int)0x1E)) + 0x1B8);
        u57 = R1000;
        u60 = ((u30 + -280.0f) * (u30 + -280.0f));
        u60 = u60 + ((u57 + -325.0f)) * ((u57 + -325.0f));
        u61 = u44;
        if (2500.0f > u60) {
            u61 = (u44 * (u60 / 2500.0f));
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70((R1000), ((((struct o10_float *)(((R1004) + 0xC0FDFEC)))->v)), u30);
        nlRotateAY(((((struct o3CE_short *)(t1))->v)));
        nlRotateAX(((((struct o3CC_short *)(t1))->v)));
        nlScale(u61, u61, u61);
        FUN_0c0de000(u61);
        FUN_0c0c465c((R1008));
        nlPopMatrix(0x1);
        t4 = (t4 + 0x1);
        if ((int)t4 < (int)0xC8) continue;
        break;
    }
    return FUN_0c0849da();
}

int FUN_0c029bf2(int a4, float f4)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t7;
    register float u17;
    register int t18;
    register float u28;
    register int t30;
    register int t19;
    register float u32;
    register int t33;
    register float u43;
    register int t45;
    register int t34;
    register int t65;
    register int t73;
    register int t93;
    register int t100;
    register float u23;
    register float u38;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t0 = (((struct o3A0_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o3AC_int *)(a4))->v);
                (((struct o3AC_uint *)(a4))->v) = (t1 - 1);
                t100 = 0x3AC;
                if ((int)(t1 - 1) < 0) {
                    (((struct o2C4_uint *)(a4))->v) = 0x32;
                    (((struct o2CC_uint *)(a4))->v) = 0x1;
                    (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                    t100 = 0x3A0;
                }
            } else {
                if (t0 == 3) {
                    if ((((((struct o2EC_int *)(a4))->v)) & 12) != 0) {
                        t7 = (((struct o4F0_int *)(a4))->v);
                        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t7 << 2) + t7) << 2) + 0xC1F8E44))) + 0x0)));
                        (((struct o2CC_uint *)(a4))->v) = 0x1;
                        (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                    }
                    FUN_0c029646(a4, 0x0, 0x40);
                    u17 = *(float *)0xC029EC4;
                    t18 = (((struct o220_short *)(a4))->v);
                    t100 = 0x220;
                    u28 = _builtin_fabsf((float)t18);
                    t30 = 0;
                    if (!(_builtin_fabsf((float)t18) > u17)) {
                        t19 = (((struct o222_short *)(a4))->v);
                        t100 = 0x222;
                        if (!(_builtin_fabsf((float)t19) > u17)) {
                            t100 = (FUN_0c02a19a(a4));
                        } else {
                            u23 = _builtin_fabsf((float)t19);
                        }
                        u28 = u23;
                        t30 = ((_builtin_fabsf((float)t19) > u17));
                    } else {
                        t30 = (1);
                    }
                } else {
                    t100 = t0;
                    if (t0 == 4) {
                        FUN_0c029646(a4, 0x0, 0x40);
                        u32 = *(float *)0xC029EC4;
                        t33 = (((struct o220_short *)(a4))->v);
                        t100 = 0x220;
                        u43 = _builtin_fabsf((float)t33);
                        t45 = 0;
                        if (!(_builtin_fabsf((float)t33) > u32)) {
                            t34 = (((struct o222_short *)(a4))->v);
                            t100 = 0x222;
                            if (!(_builtin_fabsf((float)t34) > u32)) {
                                t100 = (FUN_0c02a19a(a4));
                            } else {
                                u38 = _builtin_fabsf((float)t34);
                            }
                            u43 = u38;
                            t45 = ((_builtin_fabsf((float)t34) > u32));
                        } else {
                            t45 = (1);
                        }
                    }
                }
            }
        } else {
            FUN_0c029646(a4, 0x1, 0x40);
            t65 = (((struct o3B0_int *)(a4))->v);
            (((struct o3B0_uint *)(a4))->v) = (t65 - 1);
            if ((int)(t65 - 1) <= 0) {
                (((struct o374_uint *)(a4))->v) = 0x0;
                (((struct o3B0_uint *)(a4))->v) = 0x0;
                (((struct o3AC_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o374_uint *)(a4))->v) = ((int)((int)((-((((struct o3B0_int *)(a4))->v))) + 0xB4) / (int)0x3));
            }
            t73 = (((struct o3AC_int *)(a4))->v);
            (((struct o3AC_uint *)(a4))->v) = (t73 - 1);
            t100 = 0x3AC;
            if ((int)(t73 - 1) >= 0) {
            } else {
                (((struct o3AC_uint *)(a4))->v) = 0x78;
                (((struct o3B0_uint *)(a4))->v) = 0x0;
                (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
                { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 12)) = *(struct mv4 *)(0xC0F54A4); }
                *(float *)(((int)stk + 28)) = -0.399999976f;
                *(float *)(((int)stk + 32)) = 1.19999993f;
                *(float *)(((int)stk + 36)) = -2.0999999f;
                R1008 = 0x0;
                R1004 = 0x1;
                R1000 = 0x0;
                FUN_0c062d4a(a4, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x1C), 0xFFFFF800, R1000, R1004, R1008);
                t100 = (FUN_0c0372f8(a4, 0x123A9, 0x223A9, ((((struct o3AC_int *)(a4))->v))));
            }
        }
    } else {
        FUN_0c029646(a4, 0x1, 0x40);
        t93 = (((struct o2EC_int *)(a4))->v);
        t100 = t93;
        if ((t93 & 12) == 0) {
        } else {
            (((struct o2C4_uint *)(a4))->v) = 0x2F;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o3AC_uint *)(a4))->v) = 0x78;
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x10)) = *(struct mv3 *)(0xC0F5498); }
            FUN_0c062f54(a4, (((int)stk + 12) + 0x10), 0x1);
            (((struct o3B0_uint *)(a4))->v) = 0x78;
            t100 = (FUN_0c0372f8(a4, 0x323A9, 0x423A9, ((((struct o3B0_int *)(a4))->v))));
        }
    }
    return t100;
}
