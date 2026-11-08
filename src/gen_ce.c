/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01e2e8(int);
int FUN_0c01e32e(int, int);
int FUN_0c01e720(int);
int FUN_0c037334(int, int);
int FUN_0c038ce0(int, int);
int FUN_0c038ed4(int, float);
int FUN_0c038f9c(int);
int FUN_0c039e96(int);
int FUN_0c03a112(int);
int FUN_0c049c0a(int);
int FUN_0c04e5b8(int, int);
int FUN_0c07787c(void);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c08696c(int);
int FUN_0c08e970(int, int, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0c0340(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int nlSetTextureParameter(int, int);
int FUN_0c0d85c0(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0de310(float, float, float);
int FUN_0c0de3a0(float, float, float);
int FUN_0c0de3b0(float, float, float);
int nlObjPutSetSaturate(float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(int, int, float, float, float, float);
int FUN_0c22fa8e(int);
int FUN_0c2348c4(int, int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int check_file_correct(int, int);
int gdFsReopenHn(int, int, int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int search_dir(int, int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xwrite1(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_sys(int);
int kmLoadRectangleTexturePart(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int pdVibSetUnitInfo(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c01e656(int a4, int a5, float f4, float f5);
int FUN_0c01d1ac(int a4, int a5, int a6, int a7);
int FUN_0c0328e4(int a4);
int FUN_0c03a834(int a4, int a5);
int FUN_0c084bf6(int a4, int a5);
int FUN_0c08a7f0(int a4, int a5, float f4);
int FUN_0c0b96a4(void);
int trigger(int a4, int a5);
int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8);
int FUN_0c04313c(int a4, int a5, int a6);
int FUN_0c086aaa(int a4);
int FUN_0c0d8730(int a4, int a5);
int FUN_0c0e3930(int a4, int a5, int a6);
int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int FUN_0c22ef4a(int a4, int a5, int a6);
int FUN_0c038d08(int a4, int a5, int a6, int a7);
int FUN_0c0be6ee(int a4, int a5);
int vmsfs_fwrite(int a4, int a5, int a6);
int vmsfs_setvolume(int a4, int a5);
int vmsfs_fisexist(int a4, int a5);
int FUN_0c02a35a(int a4);
int FUN_0c077780(int a4);
int FUN_0c084800(float f4, float f5, float f6);
int FUN_0c0a7ad4(int a4, int a5, int a6);
int FUN_0c0ded80(int a4);
int kmfSetTimeOutCount(int a4, int a5);
int gdFsDaPauseG(void);
int vmsfs_fsetparam(int a4, int a5, int a6);
int FUN_0c034238(int a4, int a5);
int FUN_0c04433c(int a4, int a5, int a6);
int FUN_0c04db10(int a4);
int FUN_0c08fa08(int a4, int a5);
int FUN_0c0a57b8(void);
int FUN_0c0a58d8(void);
int FUN_0c0c710e(int a4, float f4, float f5);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o1CC_int { char p[0x1CC]; int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1D8_int { char p[0x1D8]; int v; };
struct o1D8_uint { char p[0x1D8]; unsigned int v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2F4_uint { char p[0x2F4]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o304_uint { char p[0x304]; unsigned int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o31C_int { char p[0x31C]; int v; };
struct o31C_uint { char p[0x31C]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o388_uint { char p[0x388]; unsigned int v; };
struct o390_float { char p[0x390]; float v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o48C_int { char p[0x48C]; int v; };
struct o498_int { char p[0x498]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o510_int { char p[0x510]; int v; };
struct o510_uint { char p[0x510]; unsigned int v; };
struct o534_int { char p[0x534]; int v; };
struct o578_int { char p[0x578]; int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o54C_int { char p[0x54C]; int v; };









int FUN_0c03a834(int a4, int a5)
{
    int t3;
    int t5;
    int t26;
    int t31;
    int t14;
    int t20;
    int t21;

    FUN_0c038ce0(a4, a5);
    FUN_0c038ed4(a4, (1.0f + 1.0f));
    if (((((struct o20C_int *)(a4))->v)) != 0x1000) {
        t3 = (((struct o4F0_int *)(a4))->v);
        t5 = (((struct o5A0_int *)(a4))->v);
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((t5 << 1) + (t5 << 2)) + ((*(int *)(((((t3 << 2) + t3) << 2) + 0xC1F8E4C))) + 0xFC)) + 0x2)));
    }
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1000;
    (((struct o210_uint *)(a4))->v) = 0x8;
    (((struct o4C4_uint *)(a4))->v) = 0x2;
    (((struct o4C8_uint *)(a4))->v) = 0x5;
    FUN_0c038f9c(a4);
    if (((((((struct oC8_int *)(a4))->v)) & 0x1CC) != 0) && (t14 = (((struct o304_int *)(a4))->v), (int)t14 <= 0)) {
        (((struct oA4_uint *)(a4))->v) = (((((struct oA4_int *)(a4))->v)) & 0xFFFFF7FF);
    }
    if ((((((struct o578_int *)(a4))->v)) == 6) && ((t20 = (((struct o304_int *)(a4))->v), (int)t20 <= 0) && (t21 = (((struct oC8_int *)(a4))->v), (t21 & 4) != 0))) {
        FUN_0c039e96(a4);
    }
    t26 = (((struct o578_int *)(a4))->v);
    if (t26 == 9) {
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            t31 = (((struct oC8_int *)(a4))->v);
            if ((t31 & 4) != 0) {
                return FUN_0c03a112(a4);
            }
            return t31;
        }
        return 0x304;
    }
    return t26;
}

int FUN_0c084bf6(int a4, int a5)
{
    int t1;
    int t10;

    t1 = FUN_0c0e19aa(0xC084CE4, 0x74, (*(int *)0xC23ECE0));
    FUN_0c0e19d0(t1);
    (((struct o60_uint *)(t1))->v) = a4;
    (((struct o6C_float *)(t1))->v) = 1.0f;
    (((struct o70_float *)(t1))->v) = (1.0f / (float)a4);
    (((struct o5C_uint *)(t1))->v) = a5;
    (((struct o30_float *)(t1))->v) = (float)((((struct o0_int *)0xC248A64)->v));
    (((struct o34_float *)(t1))->v) = (float)((((struct o4_int *)0xC248A64)->v));
    (((struct o38_float *)(t1))->v) = (float)((((struct o8_int *)0xC248A64)->v));
    (((struct o3C_float *)(t1))->v) = (((((struct o30_float *)(t1))->v)) / ((float)a4 * 0.5f));
    (((struct o40_float *)(t1))->v) = (((((struct o34_float *)(t1))->v)) / ((float)a4 * 0.5f));
    (((struct o44_float *)(t1))->v) = (((((struct o38_float *)(t1))->v)) / ((float)a4 * 0.5f));
    (((struct o48_uint *)(t1))->v) = (unsigned char)((int)((((struct oC_int *)0xC248A64)->v)) >> 8);
    t10 = *(signed char *)0xC248A70;
    (((struct o50_uint *)(t1))->v) = (unsigned char)t10;
    (((struct o4C_float *)(t1))->v) = ((float)(((((((unsigned char)t10 << 2) << 2) << 2) << 1) + ((((struct o48_int *)(t1))->v))) - 128) / (float)a4);
    return 0x4C;
}




int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t41;
    int t34;
    int t6;
    int t27;
    int t8;
    int t20;
    int t13;
    int t9;
    int t10;
    int t11;
    int t12;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = a8;
    t1 = vmsfs_fgetinfo(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4));
    t41 = t1;
    if ((int)t1 >= 0) {
        t34 = 0xFFFFFF0B;
        if ((unsigned char)(*(signed char *)(((int)stk + 14))) == 1) {
            t6 = *(short *)(((int)stk + 12));
            t27 = 0xFFFFFF00;
            if (((unsigned int)a7 < (unsigned int)(unsigned short)t6) && (((unsigned int)a8 <= (unsigned int)(unsigned short)t6) && ((unsigned int)(a7 + a8) <= (unsigned int)(unsigned short)t6))) {
                t8 = check_file_correct(a4, (*(int *)(((int)stk + 4))));
                t20 = t8;
                if ((int)t8 >= 0) {
                    t13 = 0x0;
                    if ((unsigned int)0x0 < (unsigned int)a8) {
                        t9 = 0x0;
                        t10 = a6;
                        t11 = a7;
                        for (;;) {
                            t12 = vmsfs_write_retry(a4, t11, t10);
                            if ((int)t12 < 0) {
                                break;
                            }
                            t9 = (t9 + 0x1);
                            t10 = (t10 + 0x200);
                            t11 = (t11 + 0x1);
                            if ((unsigned int)t9 >= (unsigned int)a8) {
                                return 0x0;
                            }
                        }
                        t13 = t12;
                    }
                    t20 = t13;
                }
                t27 = t20;
            }
            t34 = t27;
        }
        t41 = t34;
    }
    return t41;
}


int FUN_0c086aaa(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t4;
    int t14;
    int t23;
    int t29;
    int t30;
    int t33;
    int t31;
    int t41;
    int t50;
    int t56;

    t0 = (((struct o2FC_int *)(a4))->v);
    t1 = (((struct o3D4_int *)(a4))->v);
    t2 = FUN_0c037334(a4, 0x0);
    if (t2 != 0xFFFF0000) {
        *(unsigned int *)((t0 + 0x20)) = t2;
        t6 = 0x3000;
        if ((int)t2 > (int)0x3000) {
        } else {
            t4 = t2;
            if ((int)t2 < (int)0xFFFFD000) {
                t4 = 0xFFFFD000;
            }
            t6 = t4;
        }
        if (((*(int *)((t0 + 0x28))) & 0x1) != 0) {
            *(unsigned short *)(((t1 + 0x16) + 0x0)) = ((*(short *)(((t1 + 0x16) + 0x0))) - t6);
        }
        t14 = *(int *)((t0 + 0x28));
        if ((t14 & 2) != 0) {
            (((struct o28_ushort *)(t1))->v) = (((((struct o28_short *)(t1))->v)) + t6);
        }
        if ((*(int *)((t0 + 0x30))) == 0) {
            t23 = (((struct o2EC_int *)(a4))->v);
            if ((t23 & 12) != 0) {
                *(unsigned int *)((t0 + 0x30)) = 0x1;
                *(unsigned int *)((t0 + 0x24)) = 0xA;
                return t23;
            }
            if ((*(int *)((t0 + 0x2C))) != ((((struct o2BC_int *)(a4))->v))) {
                return FUN_0c08696c(a4);
            }
            return 0x2BC;
        }
        *(unsigned int *)((t0 + 0x20)) = ((*(int *)((t0 + 0x20))) >> 1);
        t29 = *(int *)((t0 + 0x24));
        *(unsigned int *)((t0 + 0x24)) = (t29 - 1);
        if ((int)(t29 - 1) < 0) {
            return FUN_0c08696c(a4);
        }
        return t14;
    }
    t30 = *(int *)((t0 + 0x20));
    if (t30 != 0xFFFF0000) {
        t33 = 0x3000;
        if ((int)t30 > (int)0x3000) {
        } else {
            t31 = t30;
            if ((int)t30 < (int)0xFFFFD000) {
                t31 = 0xFFFFD000;
            }
            t33 = t31;
        }
        if (((*(int *)((t0 + 0x28))) & 0x1) != 0) {
            *(unsigned short *)(((t1 + 0x16) + 0x0)) = ((*(short *)(((t1 + 0x16) + 0x0))) - t33);
        }
        t41 = *(int *)((t0 + 0x28));
        if ((t41 & 2) != 0) {
            (((struct o28_ushort *)(t1))->v) = (((((struct o28_short *)(t1))->v)) + t33);
        }
        if ((*(int *)((t0 + 0x30))) == 0) {
            t50 = (((struct o2EC_int *)(a4))->v);
            if ((t50 & 12) != 0) {
                *(unsigned int *)((t0 + 0x30)) = 0x1;
                *(unsigned int *)((t0 + 0x24)) = 0xA;
                return t50;
            }
            if ((*(int *)((t0 + 0x2C))) != ((((struct o2BC_int *)(a4))->v))) {
                return FUN_0c08696c(a4);
            }
            return 0x2BC;
        }
        *(unsigned int *)((t0 + 0x20)) = ((*(int *)((t0 + 0x20))) >> 1);
        t56 = *(int *)((t0 + 0x24));
        *(unsigned int *)((t0 + 0x24)) = (t56 - 1);
        if ((int)(t56 - 1) < 0) {
            return FUN_0c08696c(a4);
        }
        return t41;
    }
    return FUN_0c08696c(a4);
}



int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t2;
    int t3;
    int t10;
    int t11;
    int t12;
    int stk[12];

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a6;
    *(unsigned int *)(((int)stk + 40)) = a7;
    if ((int)a5 < (int)0x8) {
        *(unsigned short *)(((*(int *)(((int)stk + 32))) + 0x0)) = 0x0;
        return 0xFFFFFFFF;
    }
    t2 = FUN_0c2348c4((*(int *)(((int)stk + 36))), a5, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x10), (((int)stk + 12) + 0x10), a14);
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 36));
        *(unsigned short *)(((*(int *)(((int)stk + 32))) + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a11 + 0x0)) = (*(int *)(((int)stk + 16)));
        *(unsigned char *)((a10 + 0x0)) = (*(int *)(((int)stk + 20)));
        *(unsigned char *)((a8 + 0x0)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)((a12 + 0x0)) = (*(int *)(((int)stk + 28)));
        *(unsigned char *)(((*(int *)(((int)stk + 40))) + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c22ef4a(int a4, int a5, int a6)
{
    int t15;
    int t19;
    int t20;
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t24;
    int t25;
    int stk[522];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    t15 = a6;
    t19 = a5;
    t20 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        R1004 = (((int)stk + 4) + 0x4);
        t0 = a5;
        t1 = a4;
        t2 = a6;
        for (;;) {
            kmiCopyFromFrameBuffer((R1004), t0, 0x800);
            t7 = 0x40;
            t8 = (R1004);
            for (;;) {
                if (t7 == 0) {
                    break;
                }
                FUN_0c22fa8e(t8);
                t7 = (t7 - 1);
                t8 = (t8 + 0x20);
            }
            kmiCopyToFrameBuffer(t1, (R1004), 0x800);
            t2 = (t2 - 0x800);
            t0 = (t0 + 0x800);
            t1 = (t1 + 0x800);
            if ((unsigned int)t2 <= (unsigned int)0x800) {
                break;
            }
        }
        t15 = t2;
        t19 = t0;
        t20 = t1;
    }
    R1004 = (((int)stk + 4) + 0x4);
    kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), t19, t15);
    t24 = 0x40;
    t25 = (R1004);
    for (;;) {
        if (t24 == 0) {
            break;
        }
        FUN_0c22fa8e(t25);
        t24 = (t24 - 1);
        t25 = (t25 + 0x20);
    }
    return (kmiCopyToFrameBuffer(t20, (R1004), t15));
}

int FUN_0c038d08(int a4, int a5, int a6, int a7)
{
    int t0;
    int t33;
    int t24;
    int t4;
    int t15;

    t0 = (((struct o534_int *)(a4))->v);
    t33 = t0;
    if ((t0 & 2) != 0) {
        t24 = 0xCC;
        if ((int)((((struct oCC_int *)(a4))->v)) >= 0) {
            t4 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
            (((struct oCC_uint *)(a4))->v) = 0xFFFFFFFF;
            if (((((struct o48C_int *)(a4))->v)) == 50) {
                (((struct oD0_uint *)(t4))->v) = 0xFFFFFFFF;
                (((struct o2F4_uint *)(t4))->v) = 0x0;
            } else {
                (((struct oD0_uint *)(t4))->v) = 0xFFFFFFFF;
                (((struct o2F4_uint *)(t4))->v) = 0x400;
                if (((((struct o1BC_int *)(a4))->v)) != 0) {
                    (((struct o1DC_uint *)(t4))->v) = ((((struct o1DC_int *)(a4))->v));
                    (((struct o1D8_uint *)(t4))->v) = ((((struct o1D8_int *)(a4))->v));
                    (((struct o1D4_float *)(t4))->v) = ((((struct o1D4_float *)(a4))->v));
                    t15 = ((((struct o1CC_int *)(a4))->v));
                } else {
                    (((struct o1DC_uint *)(t4))->v) = ((((struct o6E_short *)(a4))->v));
                    (((struct o1D8_uint *)(t4))->v) = 0x4000;
                    (((struct o1D4_float *)(t4))->v) = (*(float *)0xC038EC4);
                    t15 = 0x1E;
                }
                (((struct o1CC_uint *)(t4))->v) = t15;
            }
            (((struct o1EC_uint *)(a4))->v) = 0xFFC;
            (((struct o1B0_uint *)(a4))->v) = 0x0;
            t24 = 0x1B0;
        }
        t33 = t24;
    }
    return t33;
}

int FUN_0c0be6ee(int a4, int a5)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t8;
    int t11;
    int t19;
    int t2;
    int t6;
    float u7;
    int t27;

    t1 = 0xC2623A0;
    t3 = a4;
    t4 = a5;
    t5 = ((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) + 0x18);
    for (;;) {
        t8 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        if (t8 == 0) {
            return t1;
        }
        if ((t8 & 0x80000000) != 0) {
            t2 = t5;
            t2 = (t2 - 4);
            t5 = t2;
            t5 = (t5 + 0x50);
        } else {
            t6 = 0x10;
            if ((t8 & t6) != 0) {
                t6 = (*(int *)((t5 + 0x0)));
                t5 = (t5 + 0x4);
                t11 = t5;
                for (;;) {
                    t3 = (*(int *)((t11 + 0x0)));
                    if ((t3 & 0x1) == 0) {
                        t11 = (t11 + 0x8);
                    } else {
                        u7 = (*(float *)((t4 + 0x0)));
                        t1 = 0x4;
                        *(float *)((t11 + 0x0)) = u7;
                        t3 = (*(int *)((t11 + 0x0)));
                        t3 = (t3 | 0x1);
                        *(unsigned int *)((t11 + 0x0)) = t3;
                        u7 = (*(float *)((t4 + t1)));
                        *(float *)((t11 + t1)) = u7;
                        t1 = 0x8;
                        u7 = (*(float *)((t4 + t1)));
                        t4 = (t4 + 0xC);
                        *(float *)((t11 + t1)) = u7;
                        t11 = (t11 + 0x20);
                    }
                    t6 = (t6 - 0x1);
                    if (t6 == 0) {
                        break;
                    }
                }
                t27 = t11;
            } else {
                t6 = 0x8;
                if ((t8 & t6) == 0) {
                    break;
                }
                t6 = (*(int *)((t5 + 0x0)));
                t5 = (t5 + 0x4);
                t3 = t6;
                t6 = (t6 << 1);
                t6 = (t6 + t3);
                t19 = t5;
                for (;;) {
                    if (((*(int *)((t19 + 0x0))) & 0x1) == 0) {
                        t19 = (t19 + 0x8);
                    } else {
                        u7 = (*(float *)((t4 + 0x0)));
                        t1 = 0x4;
                        *(float *)((t19 + 0x0)) = u7;
                        t3 = (*(int *)((t19 + 0x0)));
                        t3 = (t3 | 0x1);
                        *(unsigned int *)((t19 + 0x0)) = t3;
                        u7 = (*(float *)((t4 + t1)));
                        *(float *)((t19 + t1)) = u7;
                        t1 = 0x8;
                        u7 = (*(float *)((t4 + t1)));
                        t4 = (t4 + 0xC);
                        *(float *)((t19 + t1)) = u7;
                        t19 = (t19 + 0x20);
                    }
                    t6 = (t6 - 0x1);
                    if (t6 == 0) {
                        break;
                    }
                }
                t27 = t19;
            }
            t5 = t27;
        }
    }
    for (;;) {
    }
}

int vmsfs_fwrite(int a4, int a5, int a6)
{
    int t61;
    int t50;
    int t3;
    int t16;
    int t4;
    int t8;
    int t5;
    int t6;
    int t7;
    int t27;
    int t31;
    int t28;
    int t29;
    int t30;
    int t39;

    t61 = 0xFFFFFF00;
    if (a4 != 0) {
        t50 = 0xFFFFFF01;
        if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956768) + 0x2))) == 0) {
        } else {
            t3 = *(int *)((a4 + 0x4));
            if (t3 != 1) {
                t16 = 0xFFFFFF0B;
                if (t3 != 2) {
                } else {
                    t4 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((0xC956768 + (t4 * 0x148)) + 0x30)) = 0x1;
                    *(unsigned int *)(((0xC956768 + (t4 * 0x148)) + 0x34)) = a6;
                    t8 = 0x0;
                    if ((int)a6 > 0) {
                        t5 = 0x0;
                        t6 = a5;
                        for (;;) {
                            t7 = vmsfs_xwrite1(a4, t6);
                            if ((int)t7 < 0) {
                                break;
                            }
                            t5 = (t5 + 0x1);
                            t6 = (t6 + 0x200);
                            if ((int)t5 >= (int)a6) {
                                return 0x0;
                            }
                        }
                        t8 = t7;
                    }
                    t16 = t8;
                }
                t39 = t16;
            } else {
                t27 = *(int *)((a4 + 0x28));
                *(unsigned int *)(((0xC956768 + (t27 * 0x148)) + 0x30)) = 0x1;
                *(unsigned int *)(((0xC956768 + (t27 * 0x148)) + 0x34)) = a6;
                t31 = 0x0;
                if ((int)a6 > 0) {
                    t28 = 0x0;
                    t29 = a5;
                    for (;;) {
                        t30 = vmsfs_fwrite1(a4, t29);
                        if ((int)t30 < 0) {
                            break;
                        }
                        t28 = (t28 + 0x1);
                        t29 = (t29 + 0x200);
                        if ((int)t28 >= (int)a6) {
                            return 0x0;
                        }
                    }
                    t31 = t30;
                }
                t39 = t31;
            }
            t50 = t39;
        }
        t61 = t50;
    }
    return t61;
}

int vmsfs_setvolume(int a4, int a5)
{
    int t1;
    int t3;
    int t6;
    int t8;
    int t9;
    int t13;
    int t14;
    int t4;
    int t5;
    int t11;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 8)), t5 = *(signed char *)(((t4 + 0xC956768) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t8 = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x10);
            t9 = 0x0;
            for (;;) {
                if ((int)t9 >= (int)0x20) {
                    break;
                }
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x1);
            }
            t13 = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x10);
            t14 = 0x0;
            for (;;) {
                if ((int)t14 >= (int)0x20) {
                    break;
                }
                t11 = (*(int *)(((int)stk + 4)));
                t14 = (t14 + 0x1);
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t11;
                t11 = (t11 - 1);
                *(unsigned char *)((t13 + 0x0)) = ((*(signed char *)((t11 + 0x0))));
                t13 = (t13 + 0x1);
            }
            return write_sys(a4);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_fisexist(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int stk[15];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a5;
    if ((*(signed char *)(((a4 * 0x148) + 0xC95676A))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC956770))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            t7 = search_dir(a4, (R1004), (((int)stk + 4) + 0x4));
            if ((int)t7 >= 0) {
                return 0x0;
            }
            return 0xFFFFFF05;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c02a35a(int a4)
{
    int t1;
    int t2;
    int t3;
    int t15;
    int t5;
    int t6;
    int t7;
    int t13;

    FUN_0c0da2e0();
    t1 = FUN_0c0e5f1c();
    t2 = (((struct o54C_int *)(a4))->v);
    t3 = t2;
    if ((int)t2 > (int)0x3) {
        t3 = 0x3;
    }
    t15 = 0x4;
    if (t3 == 0) {
    } else {
        t5 = 0x0;
        t6 = (t1 + 0x1);
        for (;;) {
            t7 = (((struct o4F4_int *)(a4))->v);
            t6 = (t6 - (*(int *)(((t5 << 2) + (((*(int *)((((((t7 << 1) + t7) << 2) + 0xC1F79B4) + 0x8))) + 0x38) + ((((t3 - 1) << 2) + (t3 - 1)) << 2))))));
            if ((int)t6 > 0) {
                t5 = (t5 + 0x1);
                if ((int)t5 >= (int)0x5) {
                    break;
                }
                continue;
            }
            break;
        }
        if ((int)t5 > (int)0x4) {
            t13 = 0x4;
        } else {
            t13 = t5;
        }
        t15 = t13;
    }
    return t15;
}


int FUN_0c084800(float f4, float f5, float f6)
{
    if ((*(int *)0xC247F0C) != 0) {
        nlObjPutSetSaturate((*(float *)0xC247F10), (*(float *)0xC247F14));
        FUN_0c0de3a0((f4 * (*(float *)0xC247EF4)), (f5 * (*(float *)0xC247EF8)), (f6 * (*(float *)0xC247EFC)));
        return FUN_0c0de3b0((f4 * (*(float *)0xC247F00)), (f5 * (*(float *)0xC247F04)), (f6 * (*(float *)0xC247F08)));
    }
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    return FUN_0c0de310(f4, f5, f6);
}


int FUN_0c0ded80(int a4)
{
    int t0;
    int t31;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t22;
    int t24;
    int t1;
    int t2;
    int t3;
    int t19;

    t0 = *(int *)((a4 + 0x0));
    t31 = 0x0;
    if (((int)t0 >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        t4 = t0;
        t5 = a4;
        t6 = 0x0;
        t7 = (a4 + 0x18);
        for (;;) {
            t8 = *(int *)((t7 + 0x20));
            t9 = t7;
            t7 = (t7 + 0x50);
            t22 = t8;
            if ((int)t8 >= 0) {
                t3 = 0xC948270;
                t2 = 0xC943D78;
                t4 = (*(int *)((t3 + 0x0)));
                t5 = (t8 + t4);
                t5 = (t5 << 2);
                t5 = (t5 << 1);
                t5 = (t5 + (*(int *)((t2 + 0x0))));
                t4 = (*(int *)((t5 + 0x0)));
                if (t4 == 0) {
                    t6 = 0x1;
                    t19 = 0xFFFFFFFF;
                } else {
                    t19 = (*(int *)((t5 + 0x4)));
                }
                t22 = t19;
            }
            t24 = *(int *)((t9 + 0xC));
            if ((int)t22 >= 0) {
                t4 = 0xC0D83F0;
                t5 = t9;
                t2 = (nlSetTextureParameter(t5, t22));
            } else {
                t4 = 0xC0D85C0;
                t5 = t9;
                t2 = (FUN_0c0d85c0(t5));
            }
            t2 = 0x4C;
            t3 = (*(int *)((t9 + 0xC)));
            t3 = (t3 | (t24 & 0x7E00000));
            *(unsigned int *)((t9 + 0xC)) = t3;
            t4 = (*(int *)((t9 + t2)));
            t7 = (t7 + t4);
            t5 = (*(int *)((t7 + 0x0)));
            if (t5 == 0) {
                break;
            }
        }
        t31 = t6;
    }
    return t31;
}

int kmfSetTimeOutCount(int a4, int a5)
{
    int t2;

    (((struct o4_uint *)0xC952520)->v) = a4;
    (((struct o0_uint *)0xC952520)->v) = a5;
    if (a5 == 0) {
        *(unsigned int *)0xC952300 = ((*(int *)0xC952300) | 0x10);
    } else {
        t2 = *(int *)0xA05F689C;
        if ((t2 != 4) && ((t2 != 5) && ((t2 != 6) && (t2 != 8)))) {
            *(unsigned int *)0xC952300 = ((*(int *)0xC952300) & 0xFFFFFFEF);
        } else {
            *(unsigned int *)0xC952300 = ((*(int *)0xC952300) | 0x10);
        }
    }
    return 0x0;
}

int gdFsDaPauseG(void)
{
    int t2;
    int t23;
    int t3;
    int t7;
    int t19;
    int t21;
    int t10;
    int t11;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC2393C4) + 0x14))), 0x0, 0x0, 0x0);
    t23 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t7 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x30)))))();
        if (t7 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t7;
            (((struct o50_ushort *)(t2))->v) = 0x4;
            if ((((((struct o3A_short *)((*(int *)0xC2393C4)))->v)) != 0) && (t10 = *(int *)0xC2393C4, t11 = *(int *)((t10 + 0x2C)), (int)t11 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC94D9DC;
                (((struct o48_ushort *)(t2))->v) = 0x8;
            } else {
                (((struct o48_ushort *)(t2))->v) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t19 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC2393C4) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t21 = 0x0;
        if (t7 == 0) {
            t21 = 0xFFFFFFF3;
        }
        t23 = t21;
    }
    return t23;
}

int vmsfs_fsetparam(int a4, int a5, int a6)
{
    int t3;
    int t7;
    int t11;
    int stk[5];

    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC95676A))) != 0) {
        t3 = vmsio_isready((*(int *)((a4 + 0x28))));
        if (t3 == 0) {
            vmsfs_unmount((*(int *)((a4 + 0x28))));
            return 0xFFFFFF01;
        }
        t7 = vmsio_ismount((*(int *)((a4 + 0x28))));
        if (t7 != 0) {
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC956770))) == 0) {
                return 0xFFFFFF01;
            }
            t11 = buIsFormat((*(int *)((a4 + 0x28))));
            if ((int)t11 < 0) {
                return 0xFFFFFF03;
            }
            *(unsigned short *)((a4 + 0x2)) = (*(short *)(((int)stk + 8)));
            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((int)stk + 4)));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int FUN_0c034238(int a4, int a5)
{
    int t23;
    int stk[15];

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((-(*(short *)((a4 + 0x70)))));
    nlRotateAX((-(*(short *)((a4 + 0x6C)))));
    nlRotateAY((-(*(short *)((a4 + 0x6E)))));
    *(float *)(((int)stk + 36)) = ((-(*(float *)((a5 + 0x30)))) + (*(float *)((a4 + 0x30))));
    *(float *)(((int)stk + 40)) = ((-(*(float *)((a5 + 0x34)))) + (*(float *)((a4 + 0x34))));
    *(float *)(((int)stk + 44)) = ((-(*(float *)((a5 + 0x38)))) + (*(float *)((a4 + 0x38))));
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    FUN_0c0a7714((((int)stk + 4) + 0x10), ((int)stk + 4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 8))));
    t23 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)t23;
    return (unsigned short)t23;
}


int FUN_0c04db10(int a4)
{
    int t0;
    int t1;
    int t10;
    int stk[5];

    t0 = (((struct oAC_int *)(a4))->v);
    if (((int)t0 >= (int)0x9) && ((int)t0 <= (int)0xB)) {
        t1 = (((struct o31C_int *)(a4))->v);
        (((struct o31C_uint *)(a4))->v) = (t1 + 0x1);
        if ((int)(t1 + 0x1) > (int)0x6) {
            FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((((struct o98_float *)(a4))->v)), ((((struct o9C_float *)(a4))->v)), ((((struct oA0_float *)(a4))->v)));
            if (8192.0f > _builtin_fabsf((float)(short)(((((struct o6E_short *)(a4))->v)) - (*(int *)(((int)stk + 4)))))) {
                if ((int)(*(int *)((((((((((struct oBC_int *)(a4))->v)) + 0x1) & 0x1) << 2) + 0xC247030) + 0x0))) >= (int)0x4) {
                    t10 = (((struct oBC_int *)(a4))->v);
                    if (((*(float *)0xC2475AC) + -9.0f) > (*(float *)(((t10 << 2) + ((((((t10 + 0x1) & 0x1) << 2) << 2) << 2) + 0xC247084))))) {
                        FUN_0c04e5b8(a4, (*(int *)(((int)stk + 4))));
                        return 0x1;
                    }
                    return 0x0;
                }
                FUN_0c04e5b8(a4, (*(int *)(((int)stk + 4))));
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    (((struct o31C_uint *)(a4))->v) = 0x0;
    return 0x0;
}

int FUN_0c08fa08(int a4, int a5)
{
    int t22;
    int t2;
    int t21;
    int stk[11];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a5;
    t22 = 0xC8;
    if ((((((struct oC8_int *)(a4))->v)) & 0x1FC) != 0) {
        t2 = FUN_0c0e19aa(0xC08FAF8, 0x4C, (*(int *)0xC23ECF0));
        *(unsigned int *)((t2 + 0x30)) = ((((struct oBC_int *)(a4))->v));
        if (((*(int *)0xC23A1A8) & 0x100) != 0) {
            *(unsigned int *)((t2 + 0x34)) = 0x0;
        } else {
            *(unsigned int *)((t2 + 0x34)) = ((((struct o498_int *)(a4))->v));
        }
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY(((((struct o6E_short *)(a4))->v)));
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = -0.5f;
        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        (((struct o38_float *)(t2))->v) = (*(float *)(((int)stk + 8)));
        (((struct o3C_float *)(t2))->v) = (*(float *)(((int)stk + 12)));
        (((struct o40_float *)(t2))->v) = (*(float *)(((int)stk + 16)));
        nlPopMatrix(0x1);
        (((struct o44_uint *)(t2))->v) = (unsigned short)(*(short *)(((R1004) + 0x4)));
        t21 = *(short *)(((R1004) + 0x6));
        (((struct o48_uint *)(t2))->v) = (unsigned short)t21;
        t22 = (unsigned short)t21;
    }
    return t22;
}

int FUN_0c0a57b8(void)
{
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;

    if (((((struct o0_short *)0xC10AF2A)->v)) == 0x1498) {
        (((struct o0_ushort *)0xC10AF2A)->v) = 0x5BE;
    }
    if (((((struct o4_short *)0xC10AF2A)->v)) == 0x1496) {
        (((struct o4_ushort *)0xC10AF2A)->v) = 0x5BC;
    }
    if (((((struct o8_short *)0xC10AF2A)->v)) == 0x1497) {
        (((struct o8_ushort *)0xC10AF2A)->v) = 0x150F;
    }
    if (((((struct o10_short *)0xC10AF2A)->v)) == 0x14CD) {
        (((struct o10_ushort *)0xC10AF2A)->v) = 0x150D;
    }
    if (((((struct o14_short *)0xC10AF2A)->v)) == 0x14CF) {
        (((struct o14_ushort *)0xC10AF2A)->v) = 0x150E;
    }
    if (((((struct o1C_short *)0xC10AF2A)->v)) == 0x14AA) {
        (((struct o1C_ushort *)0xC10AF2A)->v) = 0x1511;
    }
    if (((((struct o20_short *)0xC10AF2A)->v)) == 0x14A9) {
        (((struct o20_ushort *)0xC10AF2A)->v) = 0x1510;
    }
    if (((((struct o24_short *)0xC10AF2A)->v)) == 0x14AB) {
        (((struct o24_ushort *)0xC10AF2A)->v) = 0x1512;
    }
    t24 = 0xF;
    t25 = 0xC10D150;
    t26 = 0xC10B264;
    for (;;) {
        t27 = *(short *)((t25 + 0x0));
        t25 = (t25 + 0x2);
        t24 = (t24 - 0x1);
        *(unsigned short *)((t26 + 0x0)) = t27;
        t26 = (t26 + 0x2);
        if (t24 == 0) {
            break;
        }
    }
    t28 = 0x9;
    t29 = 0xC10B294;
    t30 = 0xC10D16E;
    for (;;) {
        t31 = *(short *)((t30 + 0x0));
        t30 = (t30 + 0x2);
        t28 = (t28 - 0x1);
        *(unsigned short *)((t29 + 0x0)) = t31;
        t29 = (t29 + 0x2);
        if (t28 == 0) {
            break;
        }
    }
    t32 = 0x5;
    t33 = 0xC10B2B0;
    t34 = 0xC10D180;
    for (;;) {
        t35 = *(short *)((t34 + 0x0));
        t34 = (t34 + 0x2);
        t32 = (t32 - 0x1);
        *(unsigned short *)((t33 + 0x0)) = t35;
        t33 = (t33 + 0x2);
        if (t32 == 0) {
            break;
        }
    }
    (((struct o0_ushort *)0xC10B584)->v) = 0x537;
    (((struct o4_ushort *)0xC10B584)->v) = 0x53C;
    (((struct o6_ushort *)0xC10B584)->v) = 0x539;
    (((struct o8_ushort *)0xC10B584)->v) = 0x538;
    *(unsigned short *)0xC10B458 = 0x47E;
    return 0x538;
}

int FUN_0c0a58d8(void)
{
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;

    if (((((struct o0_short *)0xC10AF2A)->v)) == 0x5BE) {
        (((struct o0_ushort *)0xC10AF2A)->v) = 0x1498;
    }
    if (((((struct o4_short *)0xC10AF2A)->v)) == 0x5BC) {
        (((struct o4_ushort *)0xC10AF2A)->v) = 0x1496;
    }
    if (((((struct o8_short *)0xC10AF2A)->v)) == 0x150F) {
        (((struct o8_ushort *)0xC10AF2A)->v) = 0x1497;
    }
    if (((((struct o10_short *)0xC10AF2A)->v)) == 0x150D) {
        (((struct o10_ushort *)0xC10AF2A)->v) = 0x14CD;
    }
    if (((((struct o14_short *)0xC10AF2A)->v)) == 0x150E) {
        (((struct o14_ushort *)0xC10AF2A)->v) = 0x14CF;
    }
    if (((((struct o1C_short *)0xC10AF2A)->v)) == 0x1511) {
        (((struct o1C_ushort *)0xC10AF2A)->v) = 0x14AA;
    }
    if (((((struct o20_short *)0xC10AF2A)->v)) == 0x1510) {
        (((struct o20_ushort *)0xC10AF2A)->v) = 0x14A9;
    }
    if (((((struct o24_short *)0xC10AF2A)->v)) == 0x1512) {
        (((struct o24_ushort *)0xC10AF2A)->v) = 0x14AB;
    }
    t24 = 0xF;
    t25 = 0xC10B246;
    t26 = 0xC10B264;
    for (;;) {
        t27 = *(short *)((t25 + 0x0));
        t25 = (t25 + 0x2);
        t24 = (t24 - 0x1);
        *(unsigned short *)((t26 + 0x0)) = t27;
        t26 = (t26 + 0x2);
        if (t24 == 0) {
            break;
        }
    }
    t28 = 0x9;
    t29 = 0xC10B294;
    t30 = 0xC10B282;
    for (;;) {
        t31 = *(short *)((t30 + 0x0));
        t30 = (t30 + 0x2);
        t28 = (t28 - 0x1);
        *(unsigned short *)((t29 + 0x0)) = t31;
        t29 = (t29 + 0x2);
        if (t28 == 0) {
            break;
        }
    }
    t32 = 0x5;
    t33 = 0xC10B2B0;
    t34 = 0xC10B2A6;
    for (;;) {
        t35 = *(short *)((t34 + 0x0));
        t34 = (t34 + 0x2);
        t32 = (t32 - 0x1);
        *(unsigned short *)((t33 + 0x0)) = t35;
        t33 = (t33 + 0x2);
        if (t32 == 0) {
            break;
        }
    }
    (((struct o0_ushort *)0xC10B584)->v) = 0x50A;
    (((struct o4_ushort *)0xC10B584)->v) = 0x510;
    (((struct o6_ushort *)0xC10B584)->v) = 0x50C;
    (((struct o8_ushort *)0xC10B584)->v) = 0x50B;
    *(unsigned short *)0xC10B458 = 0x448;
    return 0x50B;
}




int pdVibSetUnitInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t44;
    int t36;
    int t5;
    int t9;
    int t12;
    int t14;
    int t16;
    int t18;
    int t30;
    int t25;
    int t20;

    t44 = 0xFFFFFFFE;
    if (((*(int *)((a7 + 0x0))) & 0x100) != 0) {
        t36 = 0xFFFFFFFE;
        if ((unsigned char)(*(signed char *)((a6 + 0x4))) != 8) {
        } else {
            t5 = *(int *)((a6 + 0x8));
            if (a9 != 0) {
                *(unsigned int *)((a9 + 0x0)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t5 + 0x8) + 0x0))) >> 2) >> 2) & 0xF);
            }
            t9 = *(signed char *)(((t5 + 0x8) + 0x1));
            *(unsigned char *)((a8 + 0x0)) = (((unsigned int)(unsigned char)(*(signed char *)(((t5 + 0x8) + 0x0))) >> 2) & 0x3);
            *(unsigned char *)((a8 + 0x1)) = ((*(signed char *)(((t5 + 0x8) + 0x0))) & 0x3);
            t12 = 0x0;
            if ((0x80 & (unsigned char)t9) != 0) {
                t12 = 0x1;
            }
            *(unsigned char *)((a8 + 0x2)) = t12;
            t14 = 0x0;
            if ((0x40 & (unsigned char)t9) != 0) {
                t14 = 0x1;
            }
            *(unsigned char *)((a8 + 0x3)) = t14;
            t16 = 0x0;
            if ((0x20 & (unsigned char)t9) != 0) {
                t16 = 0x1;
            }
            *(unsigned char *)((a8 + 0x4)) = t16;
            t18 = 0x0;
            if ((0x10 & (unsigned char)t9) != 0) {
                t18 = 0x1;
            }
            *(unsigned char *)((a8 + 0x5)) = t18;
            if ((0xF & (unsigned char)t9) != 0) {
                if ((0xF & (unsigned char)t9) != 1) {
                    if ((0xF & (unsigned char)t9) != 15) {
                        *(unsigned char *)((a8 + 0x6)) = 0xFF;
                        t20 = 0xFF;
                    } else {
                        *(unsigned char *)((a8 + 0x6)) = 0x0;
                        t20 = 0x0;
                    }
                    t25 = t20;
                } else {
                    *(unsigned char *)((a8 + 0x6)) = (*(signed char *)((((t5 + 0x8) + 0x2) + 0x0)));
                    t25 = (*(signed char *)((((t5 + 0x8) + 0x2) + 0x0)));
                }
                t30 = t25;
            } else {
                *(unsigned char *)((a8 + 0x6)) = (*(signed char *)((((t5 + 0x8) + 0x2) + 0x0)));
                t30 = (*(signed char *)(((t5 + 0x8) + 0x3)));
            }
            *(unsigned char *)((a8 + 0x7)) = t30;
            t36 = 0x0;
        }
        t44 = t36;
    }
    return t44;
}

int FUN_0c0328e4(int a4)
{
    int t1;
    int t25;
    int t4;
    float u11;
    float u12;
    float u13;
    int stk[16];
    float s1;

    t1 = *(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)));
    t25 = t1;
    if (t1 == 4) {
        t4 = *(int *)((((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), (((((struct o30_float *)(t4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o34_float *)(t4))->v)) - ((((struct o34_float *)(a4))->v))), (((((struct o38_float *)(t4))->v)) - ((((struct o38_float *)(a4))->v))));
        u11 = (((struct o60_float *)(a4))->v);
        u12 = (((struct o68_float *)(a4))->v);
        u13 = (u12 * u12);
        u13 = u13 + u11 * u11;
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(int *)(((int)stk + 4))));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = 0.0f;
        s1 = _builtin_sqrtf(u13);
        *(float *)(((int)stk + 32)) = s1;
        FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
        *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
        nlPopMatrix(0x1);
        (((struct o60_float *)(a4))->v) = (*(float *)(((((int)stk + 4) + 0x20) + 0x0)));
        (((struct o68_float *)(a4))->v) = ((((struct o8_float *)((((int)stk + 4) + 0x20)))->v));
        t25 = 0x68;
        s1;
    }
    return t25;
}


int FUN_0c0e3930(int a4, int a5, int a6)
{
    int t2;
    int t4;
    int t5;
    int t6;
    int t13;
    int t17;
    int t22;
    int t26;
    int stk[7];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)0xC94C820 = ((*(int *)0xC94C820) - (*(int *)(((int)stk + 20))));
    t2 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((signed char)(((t2 << 1) + t2) << 2) + 0xC94C908)) = 0xFFFFFFFF;
    *(unsigned int *)(((((*(int *)(((int)stk + 24))) << 2) + 0xA0800060) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t4 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 8)) = (t4 + 0x1);
    t5 = 0xC94C908;
    t6 = (t4 + 0x1);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x8) {
            break;
        }
        t5 = (*(signed char *)(((int)stk + 8)));
        t13 = t5;
        t5 = (t5 << 1);
        t5 = (t5 + t13);
        t5 = (t5 << 2);
        t5 = (signed char)t5;
        t6 = 0xC94C908;
        t5 = (*(int *)((t6 + t5)));
        if (t5 != -1) {
            if ((*(int *)(((int)stk + 4))) == 0) {
                t17 = *(int *)(((int)stk + 8));
                t5 = 0xC94C90C;
                t5 = (*(int *)(((signed char)(((t17 << 1) + t17) << 2) + t5)));
                *(unsigned int *)(((int)stk + 4)) = t5;
            }
            t22 = *(int *)(((int)stk + 8));
            t5 = 0xC94C910;
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (*(int *)(((signed char)(((t22 << 1) + t22) << 2) + t5))));
            t6 = (*(int *)(((int)stk + 8)));
            t26 = t6;
            t6 = (t6 << 1);
            t6 = (t6 + t26);
            t6 = (t6 << 2);
            t6 = (signed char)t6;
            t5 = 0xC94C90C;
            *(unsigned int *)((t6 + t5)) = ((*(int *)((t6 + t5))) - (*(int *)(((int)stk + 20))));
        }
        t6 = (*(int *)(((int)stk + 8)));
        t6 = (t6 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = t6;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)(((int)stk + 12)));
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c04433c(int a4, int a5, int a6)
{
    int t6;
    int t7;
    int t9;
    int t15;
    int t19;

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R6 = a6;
    L_C04433C:;
    R13 = (0x4);
    R14 = (0xC);
    R5 = (0x4);
    R7 = (0xC246FF0);
    goto L_C044348;
    L_C044348:;
    t6 = (*(int *)((((R5 << 2) + (R7 + 0x40)) + 0x0))) == 0;
    if (t6) goto L_C044374;
    goto L_C044358;
    L_C044358:;
    t7 = *(int *)((((R5 << 2) + R7) + 0x0));
    t9 = ((((struct o48C_int *)(t7))->v)) != 51;
    R6 = (t7);
    if (t9) goto L_C044374;
    goto L_C04436A;
    L_C04436A:;
    (((struct o510_uint *)(R4))->v) = ((((struct oBC_int *)(R6))->v));
    goto L_C04437A;
    L_C04437A:;
    if (((int)R5 < (int)R14)) goto L_C044382;
    goto L_C04437E;
    L_C04437E:;
    R0 = (0x0);
    goto L_C0443F0;
    L_C0443F0:;
    return R0;
    L_C044382:;
    (((struct o304_uint *)(R4))->v) = 0x1;
    (((struct o308_uint *)(R4))->v) = 0x1;
    (((struct oC8_uint *)(R4))->v) = R13;
    (((struct o274_float *)(R4))->v) = (1.0f + 1.0f);
    (((struct o278_float *)(R4))->v) = (1.0f + 1.0f);
    (((struct o27C_float *)(R4))->v) = (1.0f + 1.0f);
    (((struct o284_float *)(R4))->v) = (1.0f + 1.0f);
    (((struct o8_float *)((0x45C + R4)))->v) = 1.0f;
    (((struct o4_float *)((0x45C + R4)))->v) = 1.0f;
    *(float *)(((0x45C + R4) + 0x0)) = 1.0f;
    *(unsigned int *)((((((((struct oBC_int *)(R4))->v)) << 2) + (R7 + 0x40)) + 0x0)) = R13;
    (((struct o388_uint *)(R4))->v) = 0x0;
    (((struct o390_float *)(R4))->v) = 0.0f;
    (((struct oA4_uint *)(R4))->v) = 0xA7F;
    (((struct o1EC_uint *)(R4))->v) = 0xFFFFFFFF;
    t15 = (((struct o510_int *)(R4))->v);
    (((struct o1B0_uint *)(R4))->v) = (((int)t15 >= 0) ? (0x1 << (t15 & 31)) : ((-(int)t15 & 31) ? ((int)0x1 >> (-(int)t15 & 31)) : ((int)0x1 >> 31)));
    (((struct o2C4_uint *)(R4))->v) = ((((struct o2C4_int *)(R6))->v));
    R0 = (0x1);
    R14 = ((0x45C + R4));
    goto L_C0443F0;
    L_C044374:;
    t19 = (int)(R5 + 0x1) < (int)R14;
    R5 = ((R5 + 0x1));
    if (t19) goto L_C044348;
    goto L_C04437A;
}

int FUN_0c0b96a4(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t14;

    t0 = 0xC204698;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x14));
        t3 = FUN_0c0e1830(0xC0B35E4, 0x474);
        FUN_0c0e19d0(t3);
        *(unsigned int *)(((0xC0 + t3) + 0x0)) = (*(signed char *)((t0 + 0x1)));
        *(unsigned int *)((t3 + 0xBC)) = (*(signed char *)((t0 + 0x0)));
        *(float *)(((0x468 + t3) + 0x8)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x4)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x0)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x8)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x4)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x0)) = 1.0f;
        *(float *)((t3 + 0x284)) = 1.0f;
        *(float *)((t3 + 0x27C)) = 1.0f;
        *(float *)((t3 + 0x278)) = 1.0f;
        *(float *)((t3 + 0x274)) = 1.0f;
        FUN_0c0855ba(t3);
        FUN_0c0ba6e8(t3);
        FUN_0c0ba776(t3);
        FUN_0c085638(t3);
        FUN_0c0b359e(t3, t2);
        FUN_0c049c0a(t3);
        *(unsigned char *)(((*(int *)((t3 + 0xC0))) + 0xC31FC7E)) = 0x1;
        *(unsigned int *)(((0xC246FF0 + t1) + 0x0)) = t3;
        t14 = (0xC247030 + t1);
        t1 = (t1 + 0x4);
        *(unsigned int *)((t14 + 0x0)) = 0x4;
        *(unsigned short *)((t3 + 0x6C)) = 0xFFFFF8E4;
        t0 = (t0 + 0x18);
        if ((unsigned int)t1 >= (unsigned int)0xC) {
            break;
        }
    }
    return 0x6C;
}

int FUN_0c01d1ac(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t7;
    int t28;
    int t34;
    int stk[9];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    t0 = *(int *)((a4 + 0x34));
    R1004 = (unsigned short)t0;
    t2 = *(int *)((a4 + 0x38));
    t3 = *(int *)(((((*(int *)((a4 + 0x38))) << 2) + 0xC246FF0) + 0x0));
    if (t3 != 0) {
        t7 = *(int *)(((((*(int *)((a4 + 0x38))) << 2) + 0xC247030) + 0x0));
        if (((int)t7 >= (int)0x2) && (t7 != 5)) {
        } else {
            FUN_0c0e19f2(0xC246FF0, t7, a6, a7);
        }
        t28 = 0x3E4;
        if (((((struct o3E4_int *)(t3))->v)) != 0) {
            nlPushMatrix(0x0);
            FUN_0c0dbda0((((((R1004) << 2) << 2) << 2) + ((((struct o3E4_int *)(t3))->v))));
            FUN_0c0dcc70(((((struct o3C_float *)(a4))->v)), ((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)));
            FUN_0c0db840((((int)stk + 4) + 0x4));
            *(float *)(((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + ((((short)((unsigned int)t0 >> 16) << 1) + (short)((unsigned int)t0 >> 16)) << 2)) + 0x0)) = (*(float *)(((int)stk + 8)));
            *(float *)((((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + ((((short)((unsigned int)t0 >> 16) << 1) + (short)((unsigned int)t0 >> 16)) << 2)) + 0x4) + 0x0)) = (*(float *)(((int)stk + 12)));
            *(float *)((((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + ((((short)((unsigned int)t0 >> 16) << 1) + (short)((unsigned int)t0 >> 16)) << 2)) + 0x8) + 0x0)) = (*(float *)(((int)stk + 16)));
            t28 = (nlPopMatrix(0x1));
        }
        t34 = t28;
    }
    return t34;
}


int FUN_0c0a7ad4(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float t5;
    float t6;
    float u7;
    int t9;
    int t11;
    int t14;
    int t16;
    int t26;
    float u27;
    float u29;
    int t30;
    int t20;
    int stk[27];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    R1004 = a5;
    R1008 = a6;
    nlGetMatrix((((int)stk + 4) + 0xC));
    t1 = R1012;
    t4 = FUN_0c0d9dc0((-(*(float *)(((int)stk + 52)))), (*(float *)(((int)stk + 56))));
    *(unsigned int *)((t1 + 0x0)) = (short)t4;
    t5 = FUN_0c0da410((short)t4);
    t6 = FUN_0c0d9e90((short)t4);
    u7 = *(float *)(((int)stk + 48));
    if ((((short)t4 + 0x2000) & 0x4000) == 0) {
        t9 = FUN_0c0d9dc0((u7 * t6), (*(float *)(((int)stk + 56))));
        t11 = ((short)t9 + 0x8000);
        if (!(0.0f > t6)) {
            t11 = (short)t9;
        }
        t20 = t11;
    } else {
        t14 = FUN_0c0d9dc0((u7 * t5), (-(*(float *)(((int)stk + 52)))));
        t16 = (short)t14;
        if (0.0f > t5) {
            t16 = ((short)t14 + 0x8000);
        }
        t20 = t16;
    }
    *(unsigned int *)(((R1004) + 0x0)) = (short)t20;
    t26 = R1008;
    u27 = ((*(float *)(((int)stk + 40))) * t5);
    u27 = u27 + t6 * (*(float *)(((int)stk + 36)));
    u29 = ((*(float *)(((int)stk + 24))) * t5);
    u29 = u29 + t6 * (*(float *)(((int)stk + 20)));
    t30 = FUN_0c0d9dc0(u29, u27);
    *(unsigned int *)((t26 + 0x0)) = (short)t30;
    return (short)t30;
}

