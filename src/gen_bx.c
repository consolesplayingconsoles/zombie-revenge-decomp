/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_GetStat(int);
int ADX_DecodeInfoAiff(int, int, int, int);
int FUN_0c01a50c(int, int);
int FUN_0c01a632(int);
extern int FUN_0c01a672();
int FUN_0c0236ce(int);
int FUN_0c02a19a(int);
int FUN_0c02a220(int);
int FUN_0c02a35a(void);
int FUN_0c02a416(int);
int FUN_0c02ae4e(int);
int FUN_0c031206(int);
int FUN_0c03227c(int);
int FUN_0c032394(int);
int FUN_0c034c26(int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c03611c(int);
int FUN_0c036806(int, int, int, int, int, int, int);
int FUN_0c038ce0(int, int);
int FUN_0c038d08(int);
int FUN_0c038ed4(int, float);
int FUN_0c038f9c(int);
int FUN_0c039e96(int);
int FUN_0c03a112(int);
int FUN_0c04a058(int);
int FUN_0c053dcc(int, int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c08696c(int);
int FUN_0c08f5d0(int, int);
int FUN_0c08f638(int, int, int, int, float, float, float, float, float);
int FUN_0c0a5cc6(void);
int FUN_0c0a5dfa(void);
int FUN_0c0a5fdc(void);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b3440(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc720(void);
int FUN_0c0ce486(void);
int FUN_0c0cf6e4(int, int, float, float, float, float, float);
int FUN_0c0cff8e(int);
int FUN_0c0d0276(int);
int FUN_0c0d063e(void);
int FUN_0c0d8960(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int _quick_evn_mvn(void);
extern int _quick_odd_mvn();
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int check_cache(int);
int check_caps(int);
int direntry(int, int);
int gdFsReopenHn(int, int, int, int);
int kmSetVertex(int, int, int, int);
int kmSetVertexRenderState(int);
int kmStartVertexStrip(int);
int memset(int, int, int);
int mpdrv_insertnop(int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_getcond_ns(int, int);
int pdGetPeripheral(int);
extern int thunk_FUN_0c0ce2ac();
int vmsfs_c_progress(int);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_mount2(int);
int vmsfs_save_file_verify(int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int kmSetFramebufferTexture(int a4);
int frame_make(void);
int FUN_0c028fd6(int a4, int a5, int a6);
int FUN_0c0af590(void);
int FUN_0c0cfe90(int a4);
int ADXB_DecodeHeaderAiff(int a4, int a5, int a6);
int FUN_0c019a5c(int a4, int a5, int a6, int a7);
int FUN_0c04e0a0(int a4);
int FUN_0c055090(int a4, int a5, int a6, int a7);
int FUN_0c0e0454(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c02a8dc(int a4);
int FUN_0c02f39e(int a4);
int FUN_0c03afe8(int a4, int a5);
int FUN_0c086530(int a4, int a5);
int FUN_0c0a6356(void);
int FUN_0c0b32a8(int a4);
int vmsfs_mount(int a4);
void FUN_0c031290(int a4);
int FUN_0c0327c8(int a4, float f4, float f5, float f6);
int FUN_0c03e8dc(int a4);
int FUN_0c0d7430(int a4, int a5, int a6);
int FUN_0c0e0550(float f4, float f5, float f6, float f7);
int gdFsDaPlaySctG(int a4, int a5, int a6);
int vmsfs_findfirst(int a4, int a5, int a6, int a7);
int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9);
void FUN_0c02aef8(int a4);
int FUN_0c046294(int a4, int a5, int a6);
int FUN_0c08fbb8(int a4, int a5, float f4, float f5);
int ADXB_ExecOneSpsd(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7);
int kmiGetNativeRegOBPSize(int a4);
void FUN_0c02a9d6(int a4);
struct o10E4_int { char p[0x10E4]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1D8_uint { char p[0x1D8]; unsigned int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o23C_short { char p[0x23C]; short v; };
struct o23E_short { char p[0x23E]; short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o284_float { char p[0x284]; float v; };
struct o28C_int { char p[0x28C]; int v; };
struct o294_int { char p[0x294]; int v; };
struct o29C_int { char p[0x29C]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o304_uint { char p[0x304]; unsigned int v; };
struct o32C_int { char p[0x32C]; int v; };
struct o330_int { char p[0x330]; int v; };
struct o340_int { char p[0x340]; int v; };
struct o36_short { char p[0x36]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3D0_uint { char p[0x3D0]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o4DC_uint { char p[0x4DC]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o500_uint { char p[0x500]; unsigned int v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o514_int { char p[0x514]; int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o578_int { char p[0x578]; int v; };
struct o578_uint { char p[0x578]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o584_uint { char p[0x584]; unsigned int v; };
struct o5A0_int { char p[0x5A0]; int v; };
struct o5A0_uint { char p[0x5A0]; unsigned int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5A8_int { char p[0x5A8]; int v; };
struct o5A8_uint { char p[0x5A8]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o80_short { char p[0x80]; short v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oAA_ushort { char p[0xAA]; unsigned short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct o358_int { char p[0x358]; int v; };
struct o3C0_int { char p[0x3C0]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };





int frame_make(void)
{
    int t0;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t37;
    int t8;
    int t9;
    int t23;
    int t64;
    int t65;
    int t66;

    t0 = *(int *)0xC98E18C;
    t10 = (((struct o10E4_int *)(t0))->v);
    t7 = 0x10E4;
    if ((int)t10 > 0) {
        t7 = (mpdrv_insertnop(((((struct o10E4_int *)(t0))->v))));
    } else {
    }
    t11 = (0x44C + t0);
    t12 = (t0 + 0x28);
    t13 = 0x0;
    for (;;) {
        if ((int)t13 >= (int)0x18) {
            break;
        }
        t10 = 0xF90;
        t7 = (*(int *)0xC98E18C);
        t10 = (t10 + t7);
        t10 = (t10 + t13);
        t9 = (*(signed char *)((t10 + 0x0)));
        if ((t9 != 0) && (t23 = *(signed char *)((t12 + 0x6)), t7 = t23, t7 == 0)) {
            t7 = (*(signed char *)((t12 + 0x4)));
            t7 = (unsigned char)t7;
            if (t7 != 1) {
                if (t7 != 2) {
                    if (t7 != 3) {
                        if (t7 != 4) {
                            if (t7 != 9) {
                                t64 = t8;
                                t65 = t9;
                                t66 = t10;
                            } else {
                                t37 = *(int *)((t11 + 0x0));
                                t9 = t37;
                                if ((t9 & 0x1) != 0) {
                                    t37 = 0x1;
                                }
                                t9 = 0xC231B06;
                                t7 = (mpdrv_set_getcond_ns(t13, t37));
                            }
                        } else {
                            t9 = 0xC231BAC;
                            t7 = (mpdrv_set_dkill_ns(t13));
                        }
                    } else {
                        t9 = 0xC231BF0;
                        t7 = (mpdrv_set_dreset_ns(t13));
                    }
                } else {
                    t9 = 0xC231C34;
                    t7 = (mpdrv_set_allstatreq_ns(t13));
                }
            } else {
                t7 = (mpdrv_set_dreq_ns(t13));
            }
        } else {
            t64 = t8;
            t65 = t9;
            t66 = t10;
        }
        t8 = t64;
        t11 = (t11 + 0x78);
        t9 = t65;
        t10 = t66;
        t12 = (t12 + 0x2C);
        t13 = (t13 + 0x1);
    }
    mpdrv_set_end_ns();
    return 0x0;
}


int FUN_0c0af590(void)
{
    int t2;
    int t6;
    int t8;
    float u11;
    float u13;
    float u15;
    float u17;
    int t20;
    int stk[15];

    *(unsigned int *)(((int)stk + 8)) = 0xA;
    nlPushMatrix(0x0);
    for (;;) {
        t2 = FUN_0c0e19aa(0xC0AF6E0, 0x58, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        nlUnitMatrix();
        FUN_0c0dcca0(0xC10FDB4);
        t6 = FUN_0c0da2e0();
        nlRotateAX((t6 & 0xFFF));
        t8 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t8 + 0x3333);
        nlRotateAZ((t8 + 0x3333));
        u11 = 0.0f;
        u11 = u11 + 9.15555283e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x30)) = u11;
        u13 = 0.099999994f;
        u13 = u13 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x3C)) = u13;
        u15 = 0.099999994f;
        u15 = u15 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x48)) = u15;
        u17 = 0.199999988f;
        u17 = u17 + 3.05185063e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x50)) = u17;
        *(unsigned int *)((t2 + 0x54)) = 0x78;
        FUN_0c0db470((t2 + 0x30), (t2 + 0x30));
        FUN_0c0db4d0((t2 + 0x3C), (t2 + 0x3C));
        t20 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t20 - 1);
        if ((t20 - 1) == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0cfe90(int a4)
{
    int t1;
    int t6;
    int t23;
    int t8;
    int t25;

    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    t1 = *(int *)((a4 + 0x34));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                FUN_0c0d0276(a4);
                t6 = FUN_0c0da2e0();
                if (((*(int *)((a4 + 0x38))) != 0) && (t8 = *(int *)((a4 + 0x30)), (int)t8 >= (int)0x78)) {
                    (((struct o18_uint *)0xC23ED44)->v) = 0x0;
                    (((struct o10_uint *)0xC23ED44)->v) = (*(int *)(((((((struct o0_int *)0xC9433A8)->v)) * 0x1C) + 0xC20BB24)));
                    (((struct o4_uint *)0xC23ED44)->v) = 0x1F;
                    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
                    FUN_0c0cc720();
                    return FUN_0c0d063e();
                }
                return t6;
            }
            if (((((struct o4_int *)0xC23A1A8)->v)) != 13) {
                (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) & 0xFFFFFFDF);
                (((struct o0_uint *)0xC9433A8)->v) = ((((struct o4_int *)0xC23A1A8)->v));
                (((struct o20_uint *)0xC9433A8)->v) = 0x8C9F;
            } else {
                (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) | 0x20);
                (((struct o0_uint *)0xC9433A8)->v) = 0x0;
                (((struct o1C_uint *)0xC9433A8)->v) = 0x0;
                (((struct o20_uint *)0xC9433A8)->v) = 0x34BBF;
                (((struct o24_uint *)0xC9433A8)->v) = 0x0;
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
            FUN_0c0d0276(a4);
            t23 = FUN_0c0da2e0();
            if (((*(int *)((a4 + 0x38))) != 0) && (t25 = *(int *)((a4 + 0x30)), (int)t25 >= (int)0x78)) {
                (((struct o18_uint *)0xC23ED44)->v) = 0x0;
                (((struct o10_uint *)0xC23ED44)->v) = (*(int *)(((((((struct o0_int *)0xC9433A8)->v)) * 0x1C) + 0xC20BB24)));
                (((struct o4_uint *)0xC23ED44)->v) = 0x1F;
                (((struct o0_uint *)0xC23ED44)->v) = 0x1;
                FUN_0c0cc720();
                return FUN_0c0d063e();
            }
            return t23;
        }
        FUN_0c0cff8e(a4);
        return FUN_0c0da2e0();
    }
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
    FUN_0c0cff8e(a4);
    return FUN_0c0da2e0();
}

int ADXB_DecodeHeaderAiff(int a4, int a5, int a6)
{
    int t2;
    int stk[12];

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoAiff((*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), (((int)stk + 4) + 0x18), (a4 + 0xC));
    if ((int)t2 < 0) {
        return 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o4A_ushort *)(a4))->v) = 0x0;
    (((struct o48_ushort *)(a4))->v) = 0x0;
    (((struct o26_ushort *)(a4))->v) = 0x0;
    (((struct o24_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
    (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
    (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
    (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
    (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
    (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
    (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
    (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
    (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
    (((struct o9C_uint *)(a4))->v) = 0x0;
    (((struct o98_uint *)(a4))->v) = 0x0;
    (((struct oA8_ushort *)(a4))->v) = 0x3;
    if ((*(signed char *)((a4 + 0xD))) == 8) {
        (((struct oAA_ushort *)(a4))->v) = 0x1;
    } else {
        (((struct oAA_ushort *)(a4))->v) = 0x0;
    }
    memset((a4 + 0x4C), 0x0, 0x4);
    return (*(short *)(((int)stk + 28)));
}

int FUN_0c019a5c(int a4, int a5, int a6, int a7)
{
    int t6;
    int t7;
    int t13;
    int t35;
    int t36;
    int t42;
    int t30;
    int t24;
    int t18;
    int t12;
    int t74;
    int t59;
    int t53;
    int t47;
    int t41;
    int t61;
    int t68;
    int stk[3];

    if (((*(int *)0xC23A258) & 31) == 0) {
        *(unsigned int *)0xC23F244 = ((*(int *)0xC23F244) ^ 0x1);
    }
    t6 = (((struct o0_int *)0xC23EDE0)->v);
    if (t6 != 11) {
        if ((t6 != 3) && ((t6 != 1) && ((t6 != 4) && (t6 != 9)))) {
            if (t6 != 0) {
                if ((t6 != 6) && (t6 != 7)) {
                    t12 = 0xC23F1AC;
                } else {
                    t7 = ((int (*)(int))(FUN_0c01a672))(0x0);
                }
                t18 = t12;
            } else {
                t13 = ((int (*)(int, int, int, int))(thunk_FUN_0c0ce2ac))(0x0, a5, a6, a7);
            }
            t24 = t18;
        } else {
            FUN_0c01a50c(0x0, 0x5);
        }
        t30 = t24;
    } else {
        FUN_0c01a632(0x0);
    }
    if (((((struct o0_int *)0xC204998)->v)) == 0) {
        t35 = (((struct o4_int *)0xC23EDE0)->v);
        if (t35 != 11) {
            if ((t35 != 3) && ((t35 != 1) && ((t35 != 4) && (t35 != 9)))) {
                if (t35 != 0) {
                    if ((t35 != 6) && (t35 != 7)) {
                        t41 = t30;
                    } else {
                        t36 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c01a672))(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
                    }
                    t47 = t41;
                } else {
                    t42 = ((int (*)(int))(thunk_FUN_0c0ce2ac))(0x1);
                }
                t53 = t47;
            } else {
                FUN_0c01a50c(0x1, 0x5);
            }
            t59 = t53;
        } else {
            FUN_0c01a632(0x1);
        }
        t74 = t59;
    } else {
        if ((((((struct o10_int *)0xC204998)->v)) != 0) && (t61 = *(int *)0xC23ED50, t61 == 6)) {
            FUN_0c0cf6e4(0x1, (*(int *)0xC260840), 400.0f, 34.0f, 0.5f, 0.5f, 1.0f);
        } else {
            t68 = t30;
        }
        t74 = t68;
    }
    return FUN_0c0ce486();
}

int FUN_0c04e0a0(int a4)
{
    int t8;
    int t13;
    int t21;

    if (((((struct o394_int *)(a4))->v)) == 0) {
        if ((int)((((struct o29C_int *)(a4))->v)) > (int)0x2) {
            t8 = *(int *)0xC247CB0;
            if ((((((struct o20C_int *)(a4))->v)) & 0x10) == 0) {
                (((struct o3AC_uint *)(a4))->v) = (unsigned short)(short)((((((struct o3CE_short *)(t8))->v)) + ((((struct o294_int *)(a4))->v))) - ((((struct o6E_short *)(a4))->v)));
                (((struct o3B0_uint *)(a4))->v) = ((int)((((struct o3AC_int *)(a4))->v)) >> 13);
                t13 = (((struct o3B0_int *)(a4))->v);
                if (((int)t13 > (int)0x1) && ((int)t13 < (int)0x7)) {
                    (((struct o20C_uint *)(a4))->v) = 0x10;
                    (((struct o210_uint *)(a4))->v) = 0x4;
                    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((((*(int *)(((0x3B0 + a4) + 0x0))) << 1) + (*(int *)((0xC1FE2E0 + ((((((struct o340_int *)(a4))->v)) << 2) << 1)))))));
                    (((struct o394_uint *)(a4))->v) = 0x1;
                    (((struct o3B4_uint *)(a4))->v) = (short)(((((((((struct o3B0_int *)(a4))->v)) << 8) << 2) << 2) << 1) - ((((struct o3AC_int *)(a4))->v)));
                    (((struct o2D4_uint *)(a4))->v) = 0x1;
                } else {
                    t21 = *(int *)((((((((struct oC0_int *)(a4))->v)) >> 1) << 2) + 0xC1FE200));
                    (((struct o20C_uint *)(a4))->v) = 0x4;
                    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((t21 + (((((((struct o32C_int *)(a4))->v)) * 0x16) + (*(int *)(((0x340 + a4) + 0x0)))) << 1))));
                    (((struct o2D4_uint *)(a4))->v) = 0x1;
                    (((struct o3AC_uint *)(a4))->v) = 0x0;
                    (((struct o3B0_uint *)(a4))->v) = 0x0;
                    FUN_0c053dcc(a4, 0x1);
                }
                (((struct o2CC_uint *)(a4))->v) = 0x1;
                return FUN_0c08696c(a4);
            }
            return 0x20C;
        }
        return 0x29C;
    }
    return 0x394;
}




int FUN_0c02f39e(int a4)
{
    int t7;
    int t9;
    int t10;
    int t11;
    int t21;
    int t30;
    int t41;
    int stk[19];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    L_C02F39E:;
    R12 = (0xC23F268);
    R14 = (R4);
    if ((((((struct o508_int *)(R4))->v)) != 0)) goto L_C02F3F4;
    goto L_C02F3B4;
    L_C02F3B4:;
    if ((((((struct o50C_int *)(R14))->v)) != 0)) goto L_C02F3C6;
    goto L_C02F3BC;
    L_C02F3BC:;
    t7 = (FUN_0c034c26(R14)) == 0;
    if (t7) goto L_C02F486;
    goto L_C02F3C6;
    L_C02F3C6:;
    t9 = *(int *)(((((((struct o510_int *)(R14))->v)) << 2) + 0xC246FF0));
    t10 = (((struct oBC_int *)(R14))->v);
    t11 = (((struct oBC_int *)(t9))->v);
    R13 = (t9);
    R4 = (((((((t10 << 1) + t10) << 2) << 2) << 2) + R12));
    R5 = (((((((t11 << 1) + t11) << 2) << 2) << 2) + R12));
    goto L_C02F412;
    L_C02F412:;
    *(float *)(((int)stk + 48)) = ((*(float *)((R5 + 0x0))) - (*(float *)((R4 + 0x0))));
    *(float *)(((int)stk + 52)) = (((((struct o4_float *)(R5))->v)) - ((((struct o4_float *)(R4))->v)));
    *(float *)(((int)stk + 56)) = (((((struct o8_float *)(R5))->v)) - ((((struct o8_float *)(R4))->v)));
    t21 = FUN_0c036806(R4, (((int)stk + 4) + 0x2C), 0xA5E, (((int)stk + 4) + 0x14), (((int)stk + 8) + 0x1C), (((int)stk + 12) + 0x8), ((int)stk + 16));
    R4 = (t21);
    if ((t21 != 4)) goto L_C02F482;
    goto L_C02F45A;
    L_C02F45A:;
    if ((((((struct o508_int *)(R14))->v)) != 0)) goto L_C02F470;
    goto L_C02F462;
    L_C02F462:;
    if ((((((struct oBC_int *)(R13))->v)) != (*(int *)(((int)stk + 16))))) goto L_C02F470;
    goto L_C02F46C;
    L_C02F46C:;
    R0 = (0x3);
    goto L_C02F48C;
    L_C02F48C:;
    return R0;
    L_C02F470:;
    t30 = (((struct o28C_int *)(R14))->v);
    R5 = (t30);
    if ((t30 == 0)) goto L_C02F482;
    goto L_C02F478;
    L_C02F478:;
    if ((R5 != (*(int *)(((int)stk + 16))))) goto L_C02F482;
    goto L_C02F47E;
    L_C02F47E:;
    R0 = (0x2);
    goto L_C02F48C;
    L_C02F482:;
    if ((R4 == 0)) goto L_C02F48A;
    goto L_C02F486;
    L_C02F486:;
    R0 = (0x0);
    goto L_C02F48C;
    L_C02F48A:;
    R0 = (0x1);
    goto L_C02F48C;
    L_C02F3F4:;
    if ((((((struct o514_int *)(R14))->v)) == 0)) goto L_C02F486;
    goto L_C02F3FC;
    L_C02F3FC:;
    t41 = (((struct oBC_int *)(R14))->v);
    R4 = (((((((t41 << 1) + t41) << 2) << 2) << 2) + R12));
    R5 = ((0x518 + R14));
    goto L_C02F412;
}

int FUN_0c03afe8(int a4, int a5)
{
    int t5;
    int t8;
    int t9;
    int t11;
    int t18;
    int t4;
    int t15;

    FUN_0c038ce0(a4, a5);
    if ((int)((((struct o57C_int *)(a4))->v)) > (int)0x2) {
        (((struct o57C_uint *)(a4))->v) = 0x2;
    }
    if ((((((struct o5A8_int *)(a4))->v)) == 1) && (t4 = (((struct o580_int *)(a4))->v), t4 == 0)) {
        t5 = (((struct o4F0_int *)(a4))->v);
        t15 = ((((struct o80_short *)((*(int *)(((0xC1F8E3C + (((t5 << 2) + t5) << 2)) + 0x10)))))->v));
    } else {
        t8 = (((struct o4F0_int *)(a4))->v);
        t9 = *(int *)(((0x584 + a4) + 0x0));
        t11 = *(int *)(((0x5A4 + a4) + 0x0));
        t15 = (*(short *)((((*(int *)(((0x57C + a4) + 0x0))) << 1) + (((*(int *)((((((t8 << 2) + t8) << 2) + 0xC1F8E3C) + 0x10))) + ((((t9 << 1) + t9) << 2) << 2)) + (((t11 << 1) + t11) << 2)))));
    }
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)t15;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x200;
    (((struct o210_uint *)(a4))->v) = 0x7;
    (((struct o4C4_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x4;
    t18 = (((struct o578_int *)(a4))->v);
    if (t18 == 9) {
        if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
            if ((0x4 & ((((struct oC8_int *)(a4))->v))) != 0) {
                return FUN_0c039e96(a4);
            }
            return 0xC8;
        }
        return 0x304;
    }
    return t18;
}

int FUN_0c086530(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t15;
    int t0;
    int t1;

    t2 = a4;
    t3 = a5;
    t4 = 0x0;
    for (;;) {
        if ((t4 != 0) && ((t4 != 1) && (t4 != 9))) {
            t5 = *(signed char *)((t2 + 0x0));
            t6 = (t2 + 0x1);
            t7 = (t2 + 0x2);
            t2 = (t2 + 0x3);
            *(unsigned short *)((t3 + 0x0)) = (((unsigned char)t5 << 8) | 0x80);
            t3 = (t3 + 0x2);
            *(unsigned short *)((t3 + 0x0)) = (((unsigned char)(*(signed char *)((t6 + 0x0))) << 8) | 0x80);
            t3 = (t3 + 0x2);
            *(unsigned short *)((t3 + 0x0)) = (((unsigned char)(*(signed char *)((t7 + 0x0))) << 8) | 0x80);
            t3 = (t3 + 0x2);
        } else {
            t0 = t2;
            t0 = (t0 + 0x3);
            t1 = (*(signed char *)((t2 + 0x0)));
            t1 = (unsigned char)t1;
            t1 = (t1 << 8);
            *(unsigned short *)((t3 + 0x0)) = ((((unsigned char)(*(signed char *)((t0 + 0x0))) & 0xF0) | t1) | 0x8);
            t3 = (t3 + 0x2);
            t1 = (*(signed char *)(((t2 + 0x1) + 0x0)));
            t1 = (unsigned char)t1;
            t1 = (t1 << 8);
            *(unsigned short *)((t3 + 0x0)) = ((((((unsigned char)(*(signed char *)((t0 + 0x0))) & 0xF) << 2) << 2) | t1) | 0x8);
            t3 = (t3 + 0x2);
            t1 = ((unsigned char)(*(signed char *)(((t2 + 0x2) + 0x0))) << 8);
            t15 = *(signed char *)((t2 + 0x4));
            t2 = (t2 + 0x5);
            *(unsigned short *)((t3 + 0x0)) = ((((unsigned char)t15 & 0xF0) | t1) | 0x8);
            t3 = (t3 + 0x2);
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x10) {
            break;
        }
    }
    (((struct o60_float *)(a5))->v) = ((float)((((((((struct o36_short *)(a4))->v)) << 2) << 2) << 1) | 0x10) / 6553.59961f);
    (((struct o64_float *)(a5))->v) = ((float)((((((((struct o38_short *)(a4))->v)) << 2) << 2) << 1) | 0x10) / 6553.59961f);
    (((struct o68_float *)(a5))->v) = ((float)((-(((((((struct o3A_short *)(a4))->v)) << 2) << 2) << 1)) | 0x10) / 6553.59961f);
    return 0x68;
}


int FUN_0c0b32a8(int a4)
{
    int t0;
    int t1;
    int t29;
    int t19;
    int t11;

    t0 = *(int *)0xC23A1A8;
    t1 = *(int *)0xC23ECFC;
    if ((t0 & 0x1) == 0) {
        if ((*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC2475A4))) != 0) {
            t11 = (*(int *)((((((*(short *)((t1 + 0x2))) << 2) << 1) + 0xC2035CC) + 0x0)));
        } else {
            t11 = (*(int *)((((((*(short *)((t1 + 0x2))) << 2) << 1) + 0xC2035CC) + 0x4)));
        }
        t19 = t11;
    } else {
        t19 = (*(int *)((((*(short *)((t1 + 0x2))) << 2) + 0xC20379C)));
    }
    if (((t0 & 0x100) == 0) && (t19 != 0)) {
        *(unsigned int *)0xC23EDB0 = 0x1;
        if (((unsigned short)(*(short *)((t19 + 0xA))) & 0x100) != 0) {
            (((struct o20C_uint *)(a4))->v) = 0x20000000;
        } else {
            (((struct o20C_uint *)(a4))->v) = 0x40000000;
        }
        (((struct oA4_uint *)(a4))->v) = 0xA7D;
        *(unsigned int *)((a4 + 0x0)) = 0xC0B3440;
        (((struct o3D0_uint *)(a4))->v) = t19;
        *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)((t19 + 0x4))) - 1);
        *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)((t19 + 0x8)));
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)((t19 + 0x2)));
        (((struct o2E8_uint *)(a4))->v) = (unsigned char)(*(short *)((t19 + 0xA)));
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        return FUN_0c0b3440(a4);
    }
    t29 = FUN_0c04a058(a4);
    *(unsigned int *)0xC23EDB0 = 0x0;
    return t29;
}

int vmsfs_mount(int a4)
{
    int t4;
    int t6;
    int t7;
    int t11;
    int t12;
    int t13;

    if ((*(int *)(((*(int *)0xC956764) + 0x8))) == 1) {
        return vmsfs_mount2(a4);
    }
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
        t4 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
        *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = (*(int *)((((((t4 << 2) + t4) << 2) << 2) + 0xC239D14)));
        t6 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x30));
        t7 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x34));
        *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = (t6 + 0x1);
        vmsfs_c_progress(a4);
        t11 = vmsfs_mediainfo_retry(a4, (*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))));
        if ((int)t11 < 0) {
            *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0x9)) = 0x0;
            *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0x8)) = 0x0;
            return 0xFFFFFF01;
        }
        t12 = check_caps(((a4 * 0x148) + 0xC956768));
        if ((int)t12 < 0) {
            return 0xFFFFFF83;
        }
        t13 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
        *(unsigned int *)((t13 + 0x30)) = (*(int *)((t13 + 0x1C)));
        *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0x9)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0x8)) = 0x1;
        *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xA)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xB)) = 0x0;
        *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xC)) = 0x0;
        return check_cache(a4);
    }
    return 0xFFFFFF01;
}

void FUN_0c031290(int a4)
{
    int t0;
    int t5;
    int t8;
    int t12;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t5 = (((struct o4F8_int *)(a4))->v);
        if ((t5 != 6) && (t5 != 7)) {
            t8 = (((struct o4F8_int *)(a4))->v);
            if ((t8 != 8) && (t8 != 9)) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
        }
        return;
    }
    t12 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t12 < (unsigned int)0xE) {
        switch ((t12 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c031206(a4);
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

int FUN_0c0327c8(int a4, float f4, float f5, float f6)
{
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    int t25;
    int t27;
    float u26;
    int stk[15];

    *(float *)(((int)stk + 4)) = f6;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((((struct o23E_short *)(a4))->v)));
    nlRotateAX(((((struct o23C_short *)(a4))->v)));
    if ((int)((((struct o4EC_int *)(a4))->v)) > 0) {
        *(float *)(((int)stk + 20)) = f4;
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = f5;
        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
        *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
    } else {
        *(float *)(((int)stk + 20)) = (-f4);
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = f5;
        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
        *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
    }
    nlPopMatrix(0x1);
    nlAddVector((0x4B0 + a4), (((int)stk + 4) + 0x1C));
    u20 = (((struct o60_float *)(a4))->v);
    u21 = (((struct o64_float *)(a4))->v);
    u22 = (((struct o68_float *)(a4))->v);
    u23 = (u21 * u21);
    u23 = u23 + u20 * u20;
    u24 = u23;
    u24 = u24 + u22 * u22;
    t25 = FUN_0c032394(a4);
    t27 = 0x0;
    if (((int)t25 < 0) && (u26 = *(float *)(((int)stk + 4)), _builtin_sqrtf(u24) > u26)) {
        t27 = 0x1;
    }
    return t27;
}

int FUN_0c03e8dc(int a4)
{
    int t4;
    int t6;

    (((struct oA4_uint *)(a4))->v) = 0xA7F;
    (((struct o4DC_uint *)(a4))->v) = 0x0;
    (((struct o578_uint *)(a4))->v) = 0x0;
    (((struct o57C_uint *)(a4))->v) = 0x2;
    (((struct o304_uint *)(a4))->v) = 0x0;
    *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030)) = 0x5;
    (((struct o560_uint *)(a4))->v) = 0x6;
    (((struct o5A0_uint *)(a4))->v) = 0x0;
    (((struct o5A4_uint *)(a4))->v) = 0x0;
    (((struct o5A8_uint *)(a4))->v) = 0x0;
    (((struct o580_uint *)(a4))->v) = 0x0;
    (((struct o584_uint *)(a4))->v) = 0x0;
    FUN_0c03611c(a4);
    (((struct o554_uint *)(a4))->v) = 0x0;
    (((struct o1D4_float *)(a4))->v) = 100.0f;
    (((struct o1CC_uint *)(a4))->v) = 0x46;
    (((struct o1DC_uint *)(a4))->v) = ((((struct o6E_short *)(a4))->v));
    (((struct o1D8_uint *)(a4))->v) = 0x4000;
    (((struct o500_uint *)(a4))->v) = 0x1;
    FUN_0c038ed4(a4, 5.0f);
    t4 = (((struct o4F0_int *)(a4))->v);
    t6 = (((struct o5A0_int *)(a4))->v);
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((t6 << 1) + (t6 << 2)) + ((*(int *)(((((t4 << 2) + t4) << 2) + 0xC1F8E4C))) + 0xFC)) + 0x2)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1000;
    (((struct o210_uint *)(a4))->v) = 0x8;
    (((struct o4C4_uint *)(a4))->v) = 0x2;
    (((struct o4C8_uint *)(a4))->v) = 0x5;
    FUN_0c038f9c(a4);
    if ((((((struct oC8_int *)(a4))->v)) & 4) != 0) {
        FUN_0c03a112(a4);
    }
    FUN_0c038d08(a4);
    (((struct o4D0_uint *)(a4))->v) = 0x1;
    (((struct o534_uint *)(a4))->v) = 0x0;
    (((struct o1BC_uint *)(a4))->v) = 0x0;
    return 0x1BC;
}

int FUN_0c0d7430(int a4, int a5, int a6)
{
    int t5;
    int t7;
    int t8;
    int t9;
    float u11;
    float u12;
    float u13;
    float u14;
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((*(int *)0xC9480B0) + 0x6C)) = ((a6 * 0x3C) + (*(int *)0xC947AA8));
    FUN_0c0d8960(0x17);
    kmSetVertexRenderState((*(int *)0xC9480B0));
    t5 = kmStartVertexStrip(0xC944450);
    *(unsigned int *)(((int)stk + 36)) = 0x0;
    t7 = t5;
    t8 = (*(int *)(((int)stk + 4)));
    t9 = a5;
    for (;;) {
        t8 = (t8 - 0x1);
        if (t8 == 0) {
            break;
        }
        t7 = 0x8;
        *(unsigned int *)(((int)stk + 8)) = 0xE0000000;
        *(float *)((((int)stk + 4) + t7)) = (*(float *)((t9 + 0x0)));
        t7 = 0x4;
        u11 = *(float *)((t9 + t7));
        t7 = 0xC;
        *(float *)((((int)stk + 4) + t7)) = u11;
        t7 = 0x8;
        u12 = *(float *)((t9 + t7));
        t7 = 0x10;
        *(float *)((((int)stk + 4) + t7)) = u12;
        t7 = 0xC;
        u13 = *(float *)((t9 + t7));
        t7 = 0x14;
        *(float *)((((int)stk + 4) + t7)) = u13;
        t7 = 0x10;
        u14 = *(float *)((t9 + t7));
        t7 = 0x18;
        *(float *)((((int)stk + 4) + t7)) = u14;
        *(unsigned int *)(((int)stk + 32)) = (*(int *)((t9 + 0x14)));
        t7 = (kmSetVertex(0xC944450, (((int)stk + 4) + 0x4), 0x3, 0x20));
        t9 = (t9 + 0x1C);
    }
    *(unsigned int *)(((int)stk + 8)) = 0xF0000000;
    *(float *)(((int)stk + 12)) = (*(float *)((t9 + 0x0)));
    *(float *)(((int)stk + 16)) = (*(float *)((t9 + 0x4)));
    *(float *)(((int)stk + 20)) = (*(float *)((t9 + 0x8)));
    *(float *)(((int)stk + 24)) = (*(float *)((t9 + 0xC)));
    *(float *)(((int)stk + 28)) = (*(float *)((t9 + 0x10)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((t9 + 0x14)));
    return (kmSetVertex(0xC944450, (((int)stk + 4) + 0x4), 0x3, 0x20));
}

int FUN_0c0e0550(float f4, float f5, float f6, float f7)
{
    float u2;
    float u4;
    float u6;
    float u8;
    float u10;
    float u13;
    float u15;
    float u17;
    int t19;
    int t21;
    int t23;
    int t25;
    int stk[9];
    float R1004;
    float R1008;
    float R1012;
    float R1016;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);

    R1016 = f4;
    R1012 = f5;
    R1008 = f6;
    R1004 = f7;
    R1016 = ((R1016) * 255.0f);
    R1012 = ((R1012) * 255.0f);
    u2 = R1008;
    R1008 = (u2 * 255.0f);
    R1004 = ((R1004) * 255.0f);
    u4 = R1016;
    u6 = u4;
    if (!(2.14748365e+09f > u4)) {
        u6 = (u4 - (2.14748365e+09f + 2.14748365e+09f));
    }
    u8 = R1012;
    u10 = u8;
    if (!(2.14748365e+09f > u8)) {
        u10 = (u8 - (2.14748365e+09f + 2.14748365e+09f));
    }
    u13 = (u2 * 255.0f);
    if (!(2.14748365e+09f > (u2 * 255.0f))) {
        u13 = ((u2 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u15 = R1004;
    u17 = u15;
    if (!(2.14748365e+09f > u15)) {
        u17 = (u15 - (2.14748365e+09f + 2.14748365e+09f));
    }
    t19 = (int)u6;
    if ((unsigned int)(int)u6 > (unsigned int)0xFF) {
        t19 = 0xFF;
    }
    t21 = (int)u10;
    if ((unsigned int)(int)u10 > (unsigned int)0xFF) {
        t21 = 0xFF;
    }
    t23 = (int)u13;
    if ((unsigned int)(int)u13 > (unsigned int)0xFF) {
        t23 = 0xFF;
    }
    t25 = (int)u17;
    if ((unsigned int)(int)u17 > (unsigned int)0xFF) {
        t25 = 0xFF;
    }
    return ((((((t19 << 8) | t21) << 8) | t23) << 8) | t25);
}

int gdFsDaPlaySctG(int a4, int a5, int a6)
{
    int t28;
    int t2;
    int t3;
    int t7;
    int t19;

    t28 = 0xFFFFFFF3;
    if ((int)a4 >= (int)0xB05E) {
        t2 = gdFsReopenHn((*(int *)(((*(int *)0xC2393C4) + 0x14))), 0x0, 0x0, 0x0);
        t28 = 0xFFFFFFF3;
        if (t2 != 0) {
            t3 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t7 = ((int (*)(int, int, int))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x2C)))))(a4, a5, a6);
            if (t7 != 0) {
                *(unsigned int *)((t2 + 0x3C)) = t7;
                (((struct o50_ushort *)(t2))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC2393C4) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC2393C4)))->v) = 0x1;
                    (((struct o0_uint *)0xC94D9C8)->v) = 0x2;
                    (((struct o4_uint *)0xC94D9C8)->v) = a4;
                    (((struct o8_uint *)0xC94D9C8)->v) = a5;
                    (((struct oC_uint *)0xC94D9C8)->v) = a6;
                    *(unsigned int *)((t2 + 0x4)) = 0xC94D9D8;
                    (((struct o48_ushort *)(t2))->v) = 0x8;
                } else {
                    (((struct o48_ushort *)(t2))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
                t19 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC2393C4) + 0xC)))))->v))))();
            }
            _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
            t28 = 0x0;
            if (t7 == 0) {
                t28 = 0xFFFFFFF3;
            }
        }
    }
    return t28;
}

int vmsfs_findfirst(int a4, int a5, int a6, int a7)
{
    int t58;
    int t1;
    int t3;
    int t38;
    int t5;
    int t28;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t16;
    int t23;
    int t18;
    int t19;
    int t20;
    int t48;
    int t4;

    t58 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t48 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(signed char *)((((a4 * 0x148) + 0xC956768) + 0x8)), t4 != 0)) {
                t5 = buIsFormat(a4);
                t28 = 0xFFFFFF03;
                if ((int)t5 >= 0) {
                    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x18)) = 0x0;
                    t7 = (direntry(a4, 0x0));
                    t8 = 0x0;
                    for (;;) {
                        t10 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30));
                        if ((int)t8 >= (int)t10) {
                            if (0x0 == 0) {
                                return 0xFFFFFF05;
                            }
                            t8 = t7;
                            t7 = a5;
                            t8 = (t8 + 0x4);
                            t12 = t10;
                            t13 = (t7 + 0xC);
                            for (;;) {
                                if ((unsigned int)t7 >= (unsigned int)t13) {
                                    break;
                                }
                                t12 = (*(signed char *)((t8 + 0x0)));
                                t8 = (t8 + 0x1);
                                *(unsigned char *)((t7 + 0x0)) = t12;
                                t7 = (t7 + 0x1);
                            }
                            *(unsigned char *)((t13 + 0x0)) = 0x0;
                            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x18))) + 0x1);
                            return 0x0;
                        }
                        t16 = *(signed char *)((t7 + 0x0));
                        if (((unsigned char)t16 != 51) && ((unsigned char)t16 != 0xCC)) {
                            t7 = (t7 + 0x20);
                            t8 = (t8 + 0x1);
                            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x18))) + 0x1);
                            continue;
                        }
                        break;
                    }
                    t23 = 0xFFFFFF05;
                    if (0x1 != 0) {
                        t18 = t10;
                        t19 = a5;
                        t20 = (t7 + 0x4);
                        for (;;) {
                            if ((unsigned int)t19 >= (unsigned int)(a5 + 0xC)) {
                                break;
                            }
                            t18 = (*(signed char *)((t20 + 0x0)));
                            t20 = (t20 + 0x1);
                            *(unsigned char *)((t19 + 0x0)) = t18;
                            t19 = (t19 + 0x1);
                        }
                        *(unsigned char *)(((a5 + 0xC) + 0x0)) = 0x0;
                        *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x18))) + 0x1);
                        t23 = 0x0;
                    }
                    t28 = t23;
                }
                t38 = t28;
            }
            t48 = t38;
        }
        t58 = t48;
    }
    return t58;
}

int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t43;
    int t37;
    int t6;
    int t31;
    int t9;
    int t11;
    int t12;
    int t14;
    int t32;
    int stk[11];

    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = vmsfs_diskfree(a4, 0x0);
    t1 = vmsfs_fgetsize(a4, a5);
    t2 = t0;
    if ((int)t1 > 0) {
        t2 = (t0 + t1);
    }
    t43 = t2;
    if ((int)t2 >= 0) {
        t37 = 0xFFFFFF04;
        if ((unsigned int)t2 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                t32 = (vmsfs_save_file_verify(a4, a5, (*(int *)(((int)stk + 16))), a7, a8, a9));
            } else {
                t6 = vmsfs_fcreate(a4, a5, a8, ((int)stk + 12));
                t31 = t6;
                if ((int)t6 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
                    t11 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
                    t9 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = ((*(int *)((((((t9 << 2) + t9) << 2) << 2) + 0xC239D40))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t12 = 0x0;
                        for (;;) {
                            t14 = vmsfs_fwrite1((*(int *)(((int)stk + 12))), t11);
                            if ((int)t14 >= 0) {
                                t12 = (t12 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t12 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                            return t14;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                    t31 = 0x0;
                }
                t32 = t31;
            }
            t37 = t32;
        }
        t43 = t37;
    }
    return t43;
}

void FUN_0c02aef8(int a4)
{
    int t0;
    int t5;
    int t8;
    int t12;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t5 = (((struct o4F8_int *)(a4))->v);
        if ((t5 != 6) && (t5 != 7)) {
            t8 = (((struct o4F8_int *)(a4))->v);
            if ((t8 != 8) && (t8 != 9)) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
        }
        return;
    }
    t12 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t12 < (unsigned int)0xE) {
        switch ((t12 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02ae4e(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02ae4e(a4);
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
                FUN_0c02ae4e(a4);
    return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                FUN_0c02ae4e(a4);
    return;
            }
        }
    }
}


int FUN_0c08fbb8(int a4, int a5, float f4, float f5)
{
    int t1;
    int t2;
    int t3;
    float u5;
    int t6;
    int t9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u17;
    float t29;
    float t30;
    int t7;
    float u24;
    float s1;

    if ((((((struct oC8_int *)(a4))->v)) & 0x1FC) != 0) {
        t1 = (((struct o6E_short *)(a4))->v);
        t2 = *(short *)((a5 + 0x4));
        t3 = *(short *)((a5 + 0x6));
        u5 = ((float)(unsigned short)t3 * ((((struct o284_float *)(a4))->v)));
        t6 = (((struct o510_int *)(a4))->v);
        if ((t6 != -1) && (t7 = *(int *)(((t6 << 2) + 0xC247030)), t7 != 0)) {
            t9 = *(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0));
            u10 = (((struct o30_float *)(a4))->v);
            u11 = (((struct o30_float *)(t9))->v);
            u12 = (((struct o38_float *)(a4))->v);
            u13 = (((struct o38_float *)(t9))->v);
            u14 = ((u13 - u12) * (u13 - u12));
            u14 = u14 + (u11 - u10) * (u11 - u10);
            u15 = (((struct o284_float *)(a4))->v);
            s1 = _builtin_sqrtf(u14);
            u17 = (s1 + -10.0f);
            if ((s1 + -10.0f) > (u15 * 100.0f)) {
                u17 = (((((struct o284_float *)(a4))->v)) * 100.0f);
            }
            u24 = u17;
        } else {
            u24 = (((((struct o284_float *)(a4))->v)) * 100.0f);
        }
        t29 = FUN_0c0da410((t1 - 32768));
        t30 = FUN_0c0d9e90((t1 - 32768));
        FUN_0c08f638(a4, (unsigned short)(*(short *)((a5 + 0x2))), (unsigned short)t2, (unsigned short)t3, -0.5f, 1.5f, (u24 * t29), (u24 * t30), (u5 * 0.399999976f));
        return FUN_0c08f5d0((a4 + 0x30), ((((struct o6E_short *)(a4))->v)));
    }
    return 0xC8;
}

int ADXB_ExecOneSpsd(int a4, int a5, int a6, int a7)
{
    int t1;
    int t69;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t28;
    int t35;
    int t36;
    int t70;
    int t76;
    int t75;
    int t59;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t69 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        t26 = (t26 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t25)) = (*(short *)((((t24 << 1) + t1) + 0x0)));
                        t28 = *(short *)(((((t24 + 0x1) << 1) + t1) + 0x0));
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = t28;
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t16 > 0) {
                    t35 = 0x0;
                    t36 = 0x0;
                    for (;;) {
                        t36 = (t36 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t35)) = (*(short *)((t1 + t35)));
                        t35 = (t35 + 0x2);
                        if ((int)t36 >= (int)t16) {
                            break;
                        }
                    }
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = ((t16 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t59 = 0x0;
        }
        t69 = t59;
    }
    t70 = *(int *)((a4 + 0x4));
    t76 = t70;
    if (t70 == 2) {
        t75 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t69);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t76 = t75;
    }
    return t76;
}

int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7)
{
    int t1;
    int t69;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t28;
    int t35;
    int t36;
    int t70;
    int t76;
    int t75;
    int t59;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t69 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        t26 = (t26 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t25)) = (*(short *)((((t24 << 1) + t1) + 0x0)));
                        t28 = *(short *)(((((t24 + 0x1) << 1) + t1) + 0x0));
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = t28;
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t16 > 0) {
                    t35 = 0x0;
                    t36 = 0x0;
                    for (;;) {
                        t36 = (t36 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t35)) = (*(short *)((t1 + t35)));
                        t35 = (t35 + 0x2);
                        if ((int)t36 >= (int)t16) {
                            break;
                        }
                    }
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = ((t16 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t59 = 0x0;
        }
        t69 = t59;
    }
    t70 = *(int *)((a4 + 0x4));
    t76 = t70;
    if (t70 == 2) {
        t75 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t69);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t76 = t75;
    }
    return t76;
}

int kmiGetNativeRegOBPSize(int a4)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t13;
    int stk[8];

    t1 = *(int *)0xC2377E8;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(int *)0xC2377E4);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t1;
    t3 = *(int *)0xC2377F0;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = (*(int *)0xC2377EC);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = t3;
    *(unsigned int *)(((int)stk + 8)) = (((unsigned int)((unsigned int)a4 >> 16) >> 1) & 0x3);
    *(unsigned int *)(((int)stk + 4)) = (((unsigned int)a4 >> 21) & 0x3);
    *(unsigned int *)(((int)stk + 12)) = (((unsigned int)a4 >> 23) & 0x3);
    t4 = *(int *)0xC95275C;
    t5 = *(int *)0xC952758;
    t13 = (t5 * t4);
    if (((*(int *)0xC952300) & 32) != 0) {
        t13 = ((t5 * t4) + (t5 * t4));
        if ((*(int *)0xC952760) != 0) {
            t13 = ((t5 * t4) << 2);
        }
    }
    *(unsigned int *)0xC952950 = ((((((((*(int *)(((((int)stk + 4) + 0xC) + ((*(int *)(((int)stk + 8))) << 2)))) + (*(int *)(((((int)stk + 4) + 0xC) + ((((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 2) >> 1) & 0x3) << 2))))) + (*(int *)(((((int)stk + 4) + 0xC) + ((*(int *)(((int)stk + 4))) << 2))))) + (*(int *)(((((int)stk + 4) + 0xC) + ((*(int *)(((int)stk + 12))) << 2))))) + (*(int *)(((((int)stk + 4) + 0xC) + ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2))))) << 2) + 0x18) * t13);
    return ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2);
}

void FUN_0c02a9d6(int a4)
{
    int t0;
    int t5;
    int t8;
    int t12;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t5 = (((struct o4F8_int *)(a4))->v);
        if ((t5 != 6) && (t5 != 7)) {
            t8 = (((struct o4F8_int *)(a4))->v);
            if ((t8 != 8) && (t8 != 9)) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
        }
        return;
    }
    t12 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t12 < (unsigned int)0xE) {
        switch ((t12 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                (((struct o554_uint *)(a4))->v) = 0x1;
                FUN_0c02a8dc(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02a8dc(a4);
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
                FUN_0c02a8dc(a4);
    return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                FUN_0c02a8dc(a4);
    return;
            }
        }
    }
}


int FUN_0c055090(int a4, int a5, int a6, int a7)
{
    int reps;
    int i;
    int id;
    int w;
    int m;
    int *q;

    reps = (((struct o330_int *)(a4))->v);
    if (reps == 0) {
        return 0xFFFFFFFF;
    }
    reps = reps == 3 ? 2 : 1;
    for (; reps != 0; reps--) {
        for (i = 0; ; i++) {
            q = (int *)(0xC2479B4 + i * 32);
            if (q[0] != 0 && q[7] == a4) {
                break;
            }
            if (i == 9) {
                return 0xFFFFFFFF;
            }
        }
        id = q[1];
        if ((((struct o3C0_int *)(0xC2475D4))->v) >= 0xB) {
            break;
        }
        w = q[5];
        *(int *)w = q[6];
        (((struct oBC_int *)(w))->v) = id;
        *(int *)(q[2] * 4 + (0x34C + a4)) = id;
        m = q[3];
        if ((((m >= 0) ? (0x1 << (m & 31)) : ((-m & 31) ? (0x1 >> (-m & 31)) : (0x1 >> 31))) & 0xE) != 0) {
            (((struct o358_int *)(a4))->v) = id;
        }
        *(int *)(0xC247634 + id * 4) = q[3];
        *(int *)(0xC247604 + id * 4) = q[4];
        *(int *)(0xC2475D4 + id * 4) = w;
        if (q[4] == 1 && *(int *)(0xC1FF6D8 + q[3] * 4) != 0) {
            ((int (*)(int, int, int, int))*(int *)(0xC1FF6D8 + q[3] * 4))(a4, id, w, 0xC2475D4 + id * 4);
        }
        q[0] = 0;
        q[2] = 0;
        q[7] = 0;
        q[5] = 0;
        q[6] = 0;
    }
    if (reps == 0) {
        return 0;
    }
    return 0xFFFFFFFF;
}


