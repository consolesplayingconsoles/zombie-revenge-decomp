/* Straight-line functions with calls and guards (batch gen_ip): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern int FUN_0c0169da();
int FUN_0c016a86(void);
int FUN_0c01cdf2(int);
int FUN_0c01db0e(int, int);
int FUN_0c0236ce(int);
int FUN_0c02a19a(int);
int FUN_0c02a220(int);
int FUN_0c02a432(int);
int FUN_0c02b0c2(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c0497a0(int);
int FUN_0c049804(int);
int FUN_0c04982e(int);
int FUN_0c04a26c(int);
int FUN_0c04a318(int, int);
int FUN_0c0503bc(int);
int FUN_0c051e92(int);
int FUN_0c053aa4(int);
int FUN_0c054d66(int);
int FUN_0c054fb0(int);
int FUN_0c056098(int, int, int);
int FUN_0c05fd8c(int, int, int, int, int, float, float, float, float);
int FUN_0c0603d0(int, int, int, int, int, float, float, float, float);
int FUN_0c063994(int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c07e636(int, int);
int FUN_0c081e0c(int);
int FUN_0c0845e8(int);
int FUN_0c0845f8(int, int);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c086920(int);
int FUN_0c092884(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b359e(int, int);
int FUN_0c0ba00c(int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c0340(int);
int FUN_0c0c1620(int);
int FUN_0c0c465c(int);
int FUN_0c0c497c(int, float);
int FUN_0c0c49b0(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cdf02(void);
int FUN_0c0ce770(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int _divls(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c074112(int a4, int a5, int a6, int a7);
int FUN_0c04f608(int a4, int a5, int a6);
int FUN_0c0cd6f8(int a4);
int FUN_0c048aaa(int a4);
void FUN_0c0880d4(int a4);
int FUN_0c0a9bb8(void);
int FUN_0c0e1e7a(int a4, int a5, int a6);
int FUN_0c0c1910(int a4);
int FUN_0c0802c4(int a4);
int FUN_0c08238c(int a4, int a5);
int FUN_0c0b9f10(int a4);
void FUN_0c02a548(int a4);
int FUN_0c02ce56(int);
int FUN_0c0116d4(void);
int FUN_0c0c17e0(int a4);
int FUN_0c05c5d8(int a4, int a5);
int FUN_0c088274(int a4);
int FUN_0c0899d0(int a4);
int FUN_0c04a118(int a4);
int FUN_0c060e88(int a4, int a5);
int FUN_0c0a3e1c(int a4);
void FUN_0c02b1ac(int a4);
int FUN_0c0609f4(int a4, int a5);
int FUN_0c067de4(int a4);
int FUN_0c0a975a(int a4);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_short { char p[0x220]; short v; };
struct o222_short { char p[0x222]; short v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o29C_float { char p[0x29C]; float v; };
struct o2C_short { char p[0x2C]; short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o324_uint { char p[0x324]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o340_int { char p[0x340]; int v; };
struct o348_int { char p[0x348]; int v; };
struct o350_int { char p[0x350]; int v; };
struct o360_uint { char p[0x360]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_float { char p[0x3B0]; float v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_int { char p[0x3D8]; int v; };
struct o3D8_uint { char p[0x3D8]; unsigned int v; };
struct o3DC_int { char p[0x3DC]; int v; };
struct o3DC_uint { char p[0x3DC]; unsigned int v; };
struct o3E0_int { char p[0x3E0]; int v; };
struct o3E0_uint { char p[0x3E0]; unsigned int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o430_int { char p[0x430]; int v; };
struct o430_uint { char p[0x430]; unsigned int v; };
struct o434_int { char p[0x434]; int v; };
struct o434_uint { char p[0x434]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_short { char p[0x10]; short v; };
struct o18_int { char p[0x18]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c074112(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC195A18));
    t1 = t0;
    if (((*(int *)0xC23ED88) & ((((struct o40_int *)(a4))->v))) != 0) {
        t2 = t0;
        t0 = 0x10;
        for (;;) {
            t3 = *(short *)((t2 + 0x0));
            t2 = (t2 + 0x2);
            FUN_0c0c49b0(t3);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
        FUN_0c0e19f2();
        t1 = t2;
    }
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - (((FUN_0c0da410((*(int *)((a4 + 0x3C))))) + 0.5f) * 0.00999999978f));
    t0 = FUN_0c0da2e0();
    t2 = ((~(((~t0) + 0x1) & 0x1FFF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0x1FFF);
    }
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + (t2 + 0x2000));
    t0 = t1;
    t1 = 0x10;
    for (;;) {
        u0 = (((struct o34_float *)(a4))->v);
        u1 = (((struct o38_float *)(a4))->v);
        t3 = *(short *)((t0 + 0x0));
        t0 = (t0 + 0x2);
        u2 = u0;
        if (u1 > u0) {
            u2 = u1;
        }
        t2 = FUN_0c0c497c(t3, u2);
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t2;
}

int FUN_0c04f608(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = (((struct o3B0_int *)(a4))->v);
    (((struct o3B0_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) >= 0) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o258_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o260_float *)(a4))->v)));
    }
    t0 = (((struct o2EC_int *)(a4))->v);
    if ((t0 & 12) != 0) {
        if ((*(int *)((0xC247030 + (((((((struct oBC_int *)(a4))->v)) + 0x1) & 0x1) << 2)))) == 4) {
            t1 = *(int *)((0xC246FF0 + (((((((struct oBC_int *)(a4))->v)) + 0x1) & 0x1) << 2)));
            (((struct o1B0_uint *)(t1))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x24C + t1)) = *(struct mv3 *)((a4 + 0x60)); }
            (((struct o6E_ushort *)(t1))->v) = ((((struct o6E_short *)(a4))->v));
            FUN_0c056098(t1, a5, a6);
        }
        (((struct o3B4_uint *)(a4))->v) = 0x0;
        (((struct o3B0_uint *)(a4))->v) = 0x0;
        (((struct o3AC_uint *)(a4))->v) = 0x0;
        (((struct o20C_uint *)(a4))->v) = 0x40000000;
        (((struct o210_uint *)(a4))->v) = 0x0;
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((struct o340_int *)(a4))->v)) << 1) + (0xC1FE210 + ((((((struct oC0_int *)(a4))->v)) >> 1) * 0x2C))) + 0x0)));
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o1B0_uint *)(a4))->v) = 0x0;
        (((struct o324_uint *)(a4))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x24C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((0x24C + a4)); }
        (((struct oA4_uint *)(a4))->v) = 0xA7F;
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x80);
        *(unsigned int *)((a4 + 0x0)) = 0xC04F7C8;
        return FUN_0c054fb0(a4);
    }
    return t0;
}


int FUN_0c048aaa(int a4)
{
    int stk[7];
    register int t1;
    register int t21;

    FUN_0c034fbc(a4, 0x300, 0x1, 0x0);
    t1 = (((struct o3A0_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
            } else {
                if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                    (((struct o534_uint *)(a4))->v) = 0x0;
                    (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) & 0xFFFFFFBF);
                    FUN_0c02a19a(a4);
                }
            }
        } else {
            t21 = (((struct o3AC_int *)(a4))->v);
            (((struct o3AC_uint *)(a4))->v) = (t21 - 1);
            if ((int)(t21 - 1) < 0) {
                (((struct o2C4_uint *)(a4))->v) = 0x59A;
                (((struct o2CC_uint *)(a4))->v) = 0x1;
                (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
            }
        }
    } else {
        if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
            (((struct o2C4_uint *)(a4))->v) = 0x599;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o534_uint *)(a4))->v) = 0x0;
            (((struct o3AC_uint *)(a4))->v) = 0x3C;
            (((struct o3A0_uint *)(a4))->v) = (((((struct o3A0_int *)(a4))->v)) + 0x1);
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0xC0F675C); }
            FUN_0c063994(a4, ((int)stk + 4));
        }
    }
    return (FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048CB4)));
}

void FUN_0c0880d4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t0 - 1);
    if (t0 != 0) {
        t0 = *(int *)((a4 + 0x30));
        t1 = FUN_0c0e1830(0xC0889F4, 0x64);
        FUN_0c0e19d0(t1);
        t2 = (((struct oBC_int *)(t0))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F274)); }
        u0 = ((((struct o0_float *)0xC08823C)->v));
        u0 = u0 + ((((struct o4_float *)0xC08823C)->v)) * (float)(FUN_0c0da2e0());
        (((struct o50_float *)(t1))->v) = u0;
        u0 = ((((struct o8_float *)0xC08823C)->v));
        u0 = u0 + ((((struct oC_float *)0xC08823C)->v)) * (float)(FUN_0c0da2e0());
        (((struct o58_float *)(t1))->v) = u0;
        (((struct o5E_ushort *)(t1))->v) = 0x16C;
        (((struct o48_uint *)(t1))->v) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
        (((struct o4C_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = ((((struct o34_float *)(a4))->v));
        (((struct o60_uint *)(t1))->v) = 0x1F;
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - 0.00999999978f);
        FUN_0c0dc5a0();
        nlRotateAY(((((struct o222_short *)(t0))->v)));
        t2 = (((struct o220_short *)(t0))->v);
        t0 = FUN_0c0da2e0();
        nlRotateAX((0xFFFFC001 + (t2 - (t0 & 0xFFF))));
        FUN_0c0db470((t1 + 0x3C), (t1 + 0x3C));
        nlPopMatrix(0x1);
        if ((int)(*(int *)((a4 + 0x3C))) <= 0) {
            FUN_0c0e19f2();
    return;
        }
        return;
    }
}


int FUN_0c0e1e7a(int a4, int a5, int a6)
{
    int stk[21];
    register int t7;
    register int t11;
    register int t13;
    register int t18;
    register int t14;
    register int t15;
    register int t21;
    register int t22;
    register int t32;
    register int t33;
    register int t41;
    register int t44;
    register int t48;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    int R1040;
    int R1044;
    int R1048;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);
    R1044 = *(int *)((int)stk + 44);
    R1048 = *(int *)((int)stk + 48);

    R1044 = a5;
    if ((*(int *)((a4 + 0x1C))) != 0) {
        FUN_0c0db0a0(0xA, 0x11);
        R1036 = 0xC1EA830;
        nlPrintf(0xC1EA830);
        R1032 = a4;
        R1028 = 0xC1EA870;
        nlPrintf(0xC1EA870, a4);
        R1024 = a5;
        R1020 = 0xC1EA880;
        nlPrintf(0xC1EA880, a5);
        t7 = (*(int *)0xC94C790);
        R1016 = t7;
        R1012 = 0xC1EA890;
        nlPrintf(0xC1EA890, t7);
        t11 = (*(int *)(((*(int *)0xC94C790) + 0x0)));
        R1008 = t11;
        R1004 = 0xC1EA8A8;
        nlPrintf(0xC1EA8A8, t11);
        for (;;) {
        }
    }
    t13 = *(int *)((a4 + 0x24));
    t18 = 0x1;
    if (t13 != a4) {
        t14 = t13;
        t15 = 0x1;
        for (;;) {
            t14 = (*(int *)((t14 + 0x24)));
            t15 = (t15 + 0x1);
            if (t14 == a4) {
                break;
            }
        }
        t18 = t15;
    }
    if (((((struct o2C_short *)(a5))->v)) == 0) {
        (((struct o2C_ushort *)(a5))->v) = t18;
        *(unsigned int *)((a5 + 0x20)) = a4;
    } else {
        t21 = *(int *)((a5 + 0x20));
        t22 = *(int *)((t21 + 0x28));
        *(unsigned int *)((t21 + 0x28)) = (*(int *)((a4 + 0x28)));
        *(unsigned int *)(((*(int *)((a4 + 0x28))) + 0x24)) = t21;
        *(unsigned int *)((a4 + 0x28)) = t22;
        *(unsigned int *)((t22 + 0x24)) = a4;
        (((struct o2C_ushort *)(a5))->v) = (((((struct o2C_short *)(a5))->v)) + t18);
    }
    R1048 = (*(int *)((a5 + 0x20)));
    R1040 = (unsigned short)((((struct o2C_short *)(a5))->v));
    t32 = a5;
    for (;;) {
        t33 = R1040;
        R1040 = (t33 - 1);
        if (((t33 - 1) + 0x1) == 0) {
            *(unsigned int *)((a4 + 0x1C)) = (R1044);
            return 0x2C;
        }
        if (t32 == (R1048)) {
            break;
        }
        t32 = (*(int *)((t32 + 0x24)));
    }
    FUN_0c0db0a0(0xA, 0x11);
    R1036 = 0xC1EA8C8;
    nlPrintf(0xC1EA8C8);
    R1032 = a4;
    R1028 = 0xC1EA870;
    nlPrintf(0xC1EA870, a4);
    t41 = t32;
    R1024 = t41;
    R1020 = 0xC1EA880;
    nlPrintf(0xC1EA880, t41);
    t44 = (*(int *)0xC94C790);
    R1016 = t44;
    R1012 = 0xC1EA890;
    nlPrintf(0xC1EA890, t44);
    t48 = (*(int *)(((*(int *)0xC94C790) + 0x0)));
    R1008 = t48;
    R1004 = 0xC1EA8A8;
    nlPrintf(0xC1EA8A8, t48);
    for (;;) {
    }
}

int FUN_0c0c1910(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x38));
    FUN_0c0c1620((*(int *)((a4 + 0x80))));
    FUN_0c0db0a0(0x14, 0x32);
    nlPrintf(0xC1E3C88, ((*(int *)((t0 + 0x2BC)))));
    FUN_0c0db0a0(0x14, 0x33);
    nlPrintf(0xC1E3C9C, ((*(int *)((((*(int *)((((((*(int *)((t0 + 0x2BC))) << 2) << 2) << 1) + 0xC1AAE98))) << 2) + (*(int *)0xC262384)))) + 0xCA10000));
    FUN_0c0db0a0(0x14, 0x34);
    nlPrintf(0xC1E3CA8, ((*(int *)((t0 + 0x2C0)))));
    FUN_0c0db0a0(0x14, 0x35);
    nlPrintf(0xC1E3C9C, ((*(int *)((((*(int *)((((((*(int *)((t0 + 0x2C0))) << 2) << 2) << 1) + 0xC1AAE98))) << 2) + (*(int *)0xC262384)))) + 0xCA10000));
    FUN_0c0db0a0(0x14, 0x36);
    nlPrintf(0xC1E3CBC, ((*(int *)((t0 + 0x2C4)))));
    FUN_0c0db0a0(0x14, 0x37);
    nlPrintf(0xC1E3CD4, ((*(int *)((t0 + 0x2C8)))));
    t0 = *(int *)((a4 + 0x88));
    if (t0 != 0) {
        return t0;
    }
    FUN_0c0db0a0(0x2F, ((*(int *)((a4 + 0x88))) + 0x32));
    nlPrintf(0xC1E3CEC);
    return FUN_0c0c17e0(a4);
}

int FUN_0c0802c4(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    FUN_0c07e5c8(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x284 + a4)) = *(struct mv3 *)((0x3A4 + a4)); }
    if ((*(int *)0xC23ED50) == 8) {
        u0 = (((struct o24_float *)((*(int *)0xC247CA4)))->v);
        (((struct o3DC_uint *)(a4))->v) = 0xFFFFEAAB;
        (((struct o3E0_uint *)(a4))->v) = (*(short *)(((*(int *)0xC247CA4) + 0x10)));
        u1 = u0;
    } else {
        u0 = (((struct o3B0_float *)(a4))->v);
        (((struct o3DC_uint *)(a4))->v) = 0xFFFFFC72;
        (((struct o3E0_uint *)(a4))->v) = (*(short *)(((*(int *)0xC247CA4) + 0x10)));
        t0 = *(int *)0xC247CA4;
        if (((((struct o20_float *)(t0))->v)) > u0) {
            u2 = ((((struct o20_float *)(t0))->v));
        } else {
            u3 = u0;
            if (u0 > ((((struct o24_float *)(t0))->v))) {
                u3 = ((((struct o24_float *)(t0))->v));
            }
            u2 = u3;
        }
        u1 = u2;
    }
    (((struct o3D4_uint *)(a4))->v) = (int)((float)((((struct o3D4_int *)(a4))->v)) + ((float)(FUN_0c07e636(((((struct o3D4_int *)(a4))->v)), ((((struct o3DC_int *)(a4))->v)))) * 0.0199999996f));
    (((struct o3D8_uint *)(a4))->v) = (int)((float)((((struct o3D8_int *)(a4))->v)) + ((float)(FUN_0c07e636(((((struct o3D8_int *)(a4))->v)), ((((struct o3E0_int *)(a4))->v)))) * 0.0199999996f));
    u0 = (((struct o29C_float *)(a4))->v);
    u2 = _builtin_fabsf((u0 - u1));
    if (_builtin_fabsf((u0 - u1)) > 0.299999982f) {
        if (((((struct o29C_float *)(a4))->v)) > u1) {
            u0 = (((struct o29C_float *)(a4))->v);
            (((struct o29C_float *)(a4))->v) = (u0 - 0.299999982f);
            u1 = (u0 - 0.299999982f);
        } else {
            (((struct o29C_float *)(a4))->v) = (((((struct o29C_float *)(a4))->v)) + 0.799999952f);
            u1 = 0.799999952f;
        }
        u2 = u1;
    }
    return FUN_0c07e2b0(a4);
}


int FUN_0c0b9f10(int a4)
{
    register int t0;

    t0 = (((struct o40_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            nlUnitMatrix();
            FUN_0c0dcca0(0xC11270C);
            FUN_0c0dcbb0(0xC112718);
            FUN_0c0de000((1.0f + 1.0f));
            return FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
        }
        t0 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) <= (int)0x1A4) {
            t0 = FUN_0c016a86();
            if (t0 != 0) {
                *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
                return t0;
            }
            nlUnitMatrix();
            FUN_0c0dcca0(0xC11270C);
            FUN_0c0dcbb0(0xC112718);
            FUN_0c0de000((1.0f + 1.0f));
            return FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
        }
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
        return 0x50;
    }
    t0 = (((struct o50_int *)(a4))->v);
    (((struct o50_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)0x28) {
        if ((int)(*(int *)0xC23EDE0) >= (int)0x5) {
            FUN_0c0ba00c(0x0);
        }
        if ((int)(*(int *)0xC23EDE4) >= (int)0x5) {
            FUN_0c0ba00c(0x1);
        }
        (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + 0x1);
    }
    nlUnitMatrix();
    FUN_0c0dcca0(0xC11270C);
    FUN_0c0dcbb0(0xC112718);
    FUN_0c0de000((1.0f + 1.0f));
    return FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
}

void FUN_0c02a548(int a4)
{
    register int t0;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t0 = (((struct o4F8_int *)(a4))->v);
        if ((t0 != 6) && (t0 != 7)) {
            t0 = (((struct o4F8_int *)(a4))->v);
            if ((t0 != 8) && (t0 != 9)) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
        }
        return;
    }
    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02a432(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                if (((((struct o4C8_int *)(a4))->v)) == 2) {
                    FUN_0c02a220(a4);
    return;
                }
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
        }
    }
}


int FUN_0c0116d4(void)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o24_int *)0xC23A184)->v)) == 0x100) {
        (((struct oC_uint *)0xC23ED44)->v) = 0x3;
        if (((unsigned short)((((struct o0_short *)0xC2497C6)->v)) & 0xC) != 0) {
            (((struct o0_uint *)0xC23EDE0)->v) = 0x4;
        } else {
            if (((unsigned short)((((struct o10_short *)0xC2497C6)->v)) & 0xC) != 0) {
                (((struct o4_uint *)0xC23EDE0)->v) = 0x4;
            }
        }
        (((struct o0_uint *)0xC23A184)->v) = 0x0;
        t1 = 0x4;
        t2 = 0xC;
    } else {
        if (((unsigned short)((((struct o0_short *)0xC2497C6)->v)) & 8) != 0) {
            FUN_0c0cdf02();
            FUN_0c0ce770(0x0);
            (((struct o0_uint *)0xC23EDE0)->v) = 0x1;
        }
        if (((*(int *)0xC204994) == 0) && (t0 = (((struct o10_short *)0xC2497C6)->v), ((unsigned short)t0 & 8) != 0)) {
            FUN_0c0cdf02();
            FUN_0c0ce770(0x1);
            (((struct o4_uint *)0xC23EDE0)->v) = 0x1;
        }
    }
    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
    (((struct oC_uint *)0xC23A184)->v) = 0x0;
    (((struct o4_uint *)0xC23ED44)->v) = 0x0;
    t0 = ((int (*)(int, int, int))(FUN_0c0169da))(0x0, t1, t2);
    return ((int (*)(int))(FUN_0c0169da))(0x1);
}

int FUN_0c0c17e0(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x38));
    FUN_0c0db0a0(0x32, 0x32);
    nlPrintf(0xC1E3BA8, ((*(int *)((t0 + 0x2AC)))), ((*(int *)((t0 + 0x2E8)))));
    FUN_0c0db0a0(0x32, 0x33);
    nlPrintf(0xC1E3BC4, ((*(int *)((t0 + 0x2B4)))), ((*(int *)((t0 + 0x2EC)))));
    FUN_0c0db0a0(0x32, 0x34);
    nlPrintf(0xC1E3BE4, ((*(int *)((t0 + 0x2D4)))), ((*(int *)((t0 + 0x2DC)))), ((*(int *)((t0 + 0x2E4)))));
    FUN_0c0db0a0(0x32, 0x35);
    nlPrintf(0xC1E3C00, ((*(int *)((t0 + 0x2C8)))), ((*(int *)(((0x2A4 + t0) + 0x0)))), ((*(int *)(((0x2A4 + t0) + 0x4)))));
    FUN_0c0db0a0(0x32, 0x36);
    nlPrintf(0xC1E3C24, ((*(int *)((t0 + 0x2B0)))), ((*(int *)((t0 + 0x2F0)))));
    FUN_0c0db0a0(0x32, 0x37);
    nlPrintf(0xC1E3C40, ((*(int *)((t0 + 0x2B8)))));
    FUN_0c0db0a0(0x32, 0x38);
    nlPrintf(0xC1E3C54, ((*(int *)((t0 + 0x2D8)))), ((*(int *)((t0 + 0x2E0)))));
    FUN_0c0db0a0(0x32, 0x39);
    nlPrintf(0xC1E3C68, ((*(int *)((t0 + 0x2F4)))));
    FUN_0c0db0a0(0x32, 0x3A);
    return (nlPrintf(0xC1E3C78, ((*(int *)((t0 + 0x2EC))))));
}

int FUN_0c05c5d8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t4;
    register int t5;

    t0 = *(int *)((0xC247604 + (((((struct o350_int *)(a4))->v)) << 2)));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(int *)((((((((struct o350_int *)(a4))->v)) << 2) + 0xC2475D4) + 0x0));
        t1 = 0x348;
        if (((((struct o348_int *)(a4))->v)) != 0) {
            t1 = 0x21C;
            if ((int)((((struct o21C_int *)(t0))->v)) > 0) {
                t0 = FUN_0c0e19aa(0xC05C700, 0x2BC, (*(int *)0xC23ECE4));
                FUN_0c0e19d0(t0);
                (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
                (((struct o200_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
                t4 = 0x0;
                if ((*(signed char *)((a5 + 0x4))) != 0) {
                    t4 = ((((struct o1EC_int *)(a4))->v));
                }
                (((struct o1EC_uint *)(t0))->v) = t4;
                (((struct o1E8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
                (((struct o1F4_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
                (((struct o204_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
                (((struct o1E4_float *)(t0))->v) = ((((struct oC_float *)(a5))->v));
                (((struct o1FC_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
                (((struct o1F8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
                (((struct o22C_uint *)(t0))->v) = (unsigned short)(*(short *)((a5 + 0x8)));
                t4 = (((struct oBC_int *)(a4))->v);
                t5 = (((struct o1E8_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC23F268) + (((t5 << 1) + t5) << 2))); }
                (((struct oD0_uint *)(t0))->v) = ((((struct o350_int *)(a4))->v));
                t1 = 0xD0;
            }
        }
    }
    return t1;
}

int FUN_0c088274(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c0e1830(0xC0889F4, 0x64);
    FUN_0c0e19d0(t0);
    u0 = (*(float *)0xC088384);
    u0 = u0 + (*(float *)0xC088388) * (float)(FUN_0c0da2e0());
    (((struct o50_float *)(t0))->v) = u0;
    u0 = (*(float *)0xC08838C);
    u0 = u0 + (*(float *)0xC088390) * (float)(FUN_0c0da2e0());
    (((struct o58_float *)(t0))->v) = u0;
    (((struct o5E_ushort *)(t0))->v) = 0x16C;
    (((struct o48_uint *)(t0))->v) = (((*(int *)((a4 + 0x3C))) & 0x3) + 0xFB);
    (((struct o4C_float *)(t0))->v) = 1.0f;
    (((struct o44_float *)(t0))->v) = ((((struct o34_float *)(a4))->v));
    (((struct o60_uint *)(t0))->v) = 0x1F;
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - 0.00999999978f);
    FUN_0c0dc5a0();
    t1 = *(int *)((a4 + 0x30));
    nlRotateAY((((((struct o6E_short *)(t1))->v)) + 0x7FFF));
    t2 = (((struct o6C_short *)(t1))->v);
    t3 = FUN_0c0da2e0();
    nlRotateAX((t2 - (t3 & 0xFFF)));
    FUN_0c0db470((t0 + 0x3C), (t0 + 0x3C));
    FUN_0c0dbda0(((((struct o3E4_int *)(t1))->v)));
    FUN_0c0db470(0xC10AA7C, (t0 + 0x30));
    t0 = nlPopMatrix(0x1);
    t1 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t0;
}

int FUN_0c0899d0(int a4)
{
    register int t1;
    int t10;
    register float u12;
    register int t22;
    register float u23;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((int)((((struct o60_int *)(a4))->v)) < 0) {
        (((struct o60_uint *)(a4))->v) = (((((struct o60_int *)(a4))->v)) - 1);
        return 0x60;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    t10 = FUN_0c0da2e0();
    nlRotateAZ((0x7FFF & t10));
    u12 = (((struct o58_float *)(a4))->v);
    nlScale(u12, u12, u12);
    FUN_0c0de000(((((struct o58_float *)(a4))->v)));
    FUN_0c0c465c(0x109);
    nlPopMatrix(0x1);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC089B2C));
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t22 = (((struct o64_int *)(a4))->v);
    (((struct o64_uint *)(a4))->v) = (t22 + 0x1);
    if (((int)(t22 + 0x1) <= (int)0x78) && (u23 = (((struct o34_float *)(a4))->v), !(0.0f > u23))) {
        return 0x34;
    }
    return FUN_0c0e19f2();
}

int FUN_0c04a118(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oBC_int *)(a4))->v);
    t1 = *(int *)0xC23A258;
    if (((((struct o21C_int *)(a4))->v)) != t1) {
        (((struct o21C_uint *)(a4))->v) = t1;
        FUN_0c0497a0(a4);
        FUN_0c049804(a4);
        FUN_0c04a26c(a4);
        FUN_0c04982e(a4);
        FUN_0c053aa4(a4);
        FUN_0c092884(a4, (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0));
        (((struct o360_uint *)(a4))->v) = 0x0;
        (((struct o390_float *)(a4))->v) = ((((struct oB4_float *)(a4))->v));
        if (((((struct o18_int *)0xC23ED9C)->v)) == 0) {
            t1 = (((struct o0_int *)0xC23ED9C)->v);
            if ((t1 != 4) && (t1 != 7)) {
                if ((((((struct o20C_int *)(a4))->v)) & 13) == 0) {
                    t1 = FUN_0c0503bc(a4);
                    if (t1 == 0) {
                        FUN_0c04a318(a4, (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0));
                    }
                }
            } else {
                t1 = FUN_0c0503bc(a4);
                if (t1 != 0) {
                } else {
                    FUN_0c04a318(a4, (((((t0 << 2) + t0) << 2) << 2) + 0xC2497E0));
                }
            }
            t0 = (((struct oBC_int *)(a4))->v);
            *(float *)(((t0 << 2) + 0xC24758C)) = ((*(float *)(((t0 << 2) + 0xC24758C))) * 0.998999953f);
            FUN_0c054d66(a4);
            FUN_0c085704(a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
            FUN_0c051e92(a4);
            FUN_0c01db0e(a4, ((((struct oA4_int *)(a4))->v)));
            FUN_0c086920(a4);
            FUN_0c0bbbf4(a4);
            return FUN_0c01cdf2(a4);
        }
        return 0x390;
    }
    return 0x21C;
}

int FUN_0c060e88(int a4, int a5)
{
    int stk[22];
    register int t20;
    register int t21;

    *(unsigned int *)(((int)stk + 16)) = a5;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((struct o3E4_int *)(a4))->v)) + 0x100));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    (((struct o30_float *)(((int)stk + 8)))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4_float *)((((int)stk + 8) + 0x30)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o8_float *)((((int)stk + 8) + 0x30)))->v) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (*(float *)0xC061008);
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    (((struct o24_float *)(((int)stk + 8)))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4_float *)((((int)stk + 8) + 0x24)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o8_float *)((((int)stk + 8) + 0x24)))->v) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    FUN_0c0a7714((((int)stk + 8) + 0x4), ((int)stk + 8), (((((struct o24_float *)(((int)stk + 8)))->v)) - ((((struct o30_float *)(((int)stk + 8)))->v))), (((((struct o4_float *)((((int)stk + 8) + 0x24)))->v)) - ((((struct o4_float *)((((int)stk + 8) + 0x30)))->v))), (((((struct o8_float *)((((int)stk + 8) + 0x24)))->v)) - ((((struct o8_float *)((((int)stk + 8) + 0x30)))->v))));
    t20 = *(int *)(((int)stk + 8));
    t21 = (((struct o6E_short *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = (t20 - t21);
    *(int *)((int)stk + 4) = 0x8;
    return (FUN_0c05fd8c(a4, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (t20 - t21), 0x8, (1.0f + 1.0f), 1.0f, 1.0f, 1.0f));
}

int FUN_0c0a3e1c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = 0xC10D084;
    t1 = 0x3;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC0A3F40, 0x5C, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0x30)) = a4;
        u0 = *(float *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        u1 = 0.799999952f;
        u1 = u1 + u0 * (float)(FUN_0c0da2e0());
        (((struct o54_float *)(t2))->v) = u1;
        (((struct o50_float *)(t2))->v) = (((((struct o54_float *)(t2))->v)) * 3.0f);
        (((struct o4C_float *)(t2))->v) = (((((struct o50_float *)(t2))->v)) * 0.0124999993f);
        u0 = -0.5f;
        u0 = u0 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        (((struct o34_float *)(t2))->v) = u0;
        u0 = -0.5f;
        u0 = u0 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        (((struct o3C_float *)(t2))->v) = u0;
        u0 = 0.099999994f;
        u0 = u0 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        (((struct o40_float *)(t2))->v) = u0;
        u0 = 0.099999994f;
        u0 = u0 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        (((struct o44_float *)(t2))->v) = u0;
        t1 = (t1 - 0x1);
        u0 = 0.099999994f;
        u0 = u0 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        (((struct o48_float *)(t2))->v) = u0;
        (((struct o58_uint *)(t2))->v) = 0x5A;
        if (t1 == 0) {
            break;
        }
    }
    return 0x58;
}

void FUN_0c02b1ac(int a4)
{
    register int t0;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t0 = (((struct o4F8_int *)(a4))->v);
        if ((t0 != 6) && (t0 != 7)) {
            t0 = (((struct o4F8_int *)(a4))->v);
            if ((t0 != 8) && (t0 != 9)) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
        }
        return;
    }
    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02b0c2(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02b0c2(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                FUN_0c02b0c2(a4);
    return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                FUN_0c02b0c2(a4);
    return;
            }
        }
    }
}

int FUN_0c0609f4(int a4, int a5)
{
    int stk[22];
    register int t20;
    register int t21;
    register float u22;

    *(unsigned int *)(((int)stk + 16)) = a5;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((struct o3E4_int *)(a4))->v)) + 0x100));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    (((struct o30_float *)(((int)stk + 8)))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4_float *)((((int)stk + 8) + 0x30)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o8_float *)((((int)stk + 8) + 0x30)))->v) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (*(float *)0xC060B58);
    *(float *)(((int)stk + 40)) = 0.0f;
    FUN_0c0db470((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    (((struct o24_float *)(((int)stk + 8)))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4_float *)((((int)stk + 8) + 0x24)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o8_float *)((((int)stk + 8) + 0x24)))->v) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    FUN_0c0a7714((((int)stk + 8) + 0x4), ((int)stk + 8), (((((struct o24_float *)(((int)stk + 8)))->v)) - ((((struct o30_float *)(((int)stk + 8)))->v))), (((((struct o4_float *)((((int)stk + 8) + 0x24)))->v)) - ((((struct o4_float *)((((int)stk + 8) + 0x30)))->v))), (((((struct o8_float *)((((int)stk + 8) + 0x24)))->v)) - ((((struct o8_float *)((((int)stk + 8) + 0x30)))->v))));
    t20 = *(int *)(((int)stk + 8));
    t21 = (((struct o6E_short *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = (t20 - t21);
    u22 = *(float *)0xC060B64;
    *(int *)((int)stk + 4) = 0x8;
    return (FUN_0c0603d0(a4, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (t20 - t21), 0x8, u22, 1.0f, 1.0f, 1.0f));
}

int FUN_0c067de4(int a4)
{
    register int t0;
    register float u0;

    if (((*(int *)0xC23ED5C) & 32) != 0) {
        FUN_0c0845f8(0x1, 0x0);
        FUN_0c0845e8(0x0);
        FUN_0c0e19f2();
    }
    u0 = 0.669999957f;
    u0 = u0 + 0.00999999978f * (float)((FUN_0c0da2e0()) & 0x1F);
    (((struct o90_float *)(a4))->v) = u0;
    FUN_0c0846de(0x1, 0.0f, ((((struct o90_float *)(a4))->v)), 0.299999982f, 0.0f);
    (((struct o94_float *)(a4))->v) = ((float)((FUN_0c0da2e0()) & 0x7) + 15.0f);
    FUN_0c0846be(0x1, ((((struct o94_float *)(a4))->v)));
    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    t0 = (((struct o98_int *)(a4))->v);
    (((struct o98_uint *)(a4))->v) = (t0 + 0x800);
    u0 = 1.0f;
    u0 = u0 + 0.199999988f * (FUN_0c0da410((t0 + 0x800)));
    nlScale(u0, u0, u0);
    FUN_0c0de000(u0);
    FUN_0c0c465c((((((struct o78_int *)(a4))->v)) + ((unsigned int)((*(int *)0xC23A258) & 0x3F) >> 1)));
    return nlPopMatrix(0x1);
}

int FUN_0c0a975a(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (((*(int *)0xC23A258) & 1) != 0) {
        *(unsigned int *)((a4 + 0x30)) = ((((struct o68_int *)(a4))->v));
        (((struct o38_float *)(a4))->v) = 240.0f;
        (((struct o58_uint *)(a4))->v) = 0x0;
        t0 = FUN_0c0da2e0();
        if ((t0 & 3) != 0) {
            t0 = FUN_0c0da2e0();
            if ((t0 & 7) == 0) {
                t0 = FUN_0c0da2e0();
                t1 = FUN_0c0da2e0();
                u0 = 0.00305185094f;
                u1 = ((float)t0 * (FUN_0c0da410((t1 << 1))));
            } else {
                t0 = FUN_0c0da2e0();
                t1 = FUN_0c0da2e0();
                u0 = 0.000305185094f;
                u1 = ((float)t0 * (FUN_0c0da410((t1 << 1))));
            }
            u2 = ((((struct o38_float *)(a4))->v));
            u2 = u2 + u0 * u1;
            (((struct o38_float *)(a4))->v) = u2;
        }
        t0 = FUN_0c0da2e0();
        if ((t0 & 31) == 0) {
            (((struct o58_uint *)(a4))->v) = (unsigned char)(FUN_0c0da2e0());
        }
        FUN_0c0c0340((a4 + 0x30));
    }
    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC10D264);
    FUN_0c0dcbb0(0xC10D270);
    FUN_0c0de000((1.0f + 1.0f));
    FUN_0c0c465c((0xC87 + ((*(int *)0xC23A258) & 0x3)));
    t0 = nlPopMatrix(0x1);
    t1 = *(int *)0xC24FA38;
    *(unsigned int *)0xC24FA38 = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    }
    return t0;
}



