/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
float FUN_0c01f1b8(int, int);
int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c02bc00(int);
int FUN_0c02bc0e(int);
int FUN_0c02bc1c(int);
int FUN_0c02bc2a(int, int, int);
int FUN_0c031e3c(int);
int FUN_0c031e5e(int, int, int);
int FUN_0c031f48(int);
int FUN_0c034314(int, int, int);
int FUN_0c034f6c(int, int, int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c035e22(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c043338(int);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c08477e(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0d6c52(int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAY(int);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0dd0a0(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e3630(int, int, int);
int FUN_0c0e36ac(void);
int FUN_0c0e4428(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
int FUN_0c22e160(int, int);
int FUN_0c22e38c(int, int, int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int check_fat_all(int, int, int);
int get_fat(int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int);
int kmCreateTABuffer(int, int);
int kmCreateVertexBuffer(int, int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int mwPlaEntryErrFn(int, int);
int search_dir_by_startfat(int, int);
int search_fat(int, int);
int search_fat_free(int, int);
int search_fat_used(int);
int set_fat(int, int);
int thunk_FUN_0c0546fe(int, int, int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xfind(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int FUN_0c22e202(int a4, int a5);
int FUN_0c0d68dc(int a4, int a5);
int FUN_0c031fbc(int a4, int a5, int a6);
int FUN_0c040e18(int a4);
int FUN_0c066870(int a4, int a5);
float FUN_0c0a81ac(int a4, int a5, int a6, int a7);
int FUN_0c02bda4(int a4);
int kmiWriteFBRegister(Stk29 s);
int kmiAllocSysConfig(int a4);
int vmsfs_xdefrag(int a4, int a5);
int FUN_0c031a4c(int a4);
void FUN_0c0d6ad4(void);
int FUN_0c0e3dc4(void);
int FUN_0c02b330(int a4);
int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c08512c(int a4);
int kmfGetInternalSystemMetrics(int a4);
int FUN_0c043724(int a4);
struct o18_float { char p[0x18]; float v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_int { char p[0x210]; int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o26C_float { char p[0x26C]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3BC_float { char p[0x3BC]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E8_float { char p[0x3E8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o474_uint { char p[0x474]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4CC_uint { char p[0x4CC]; unsigned int v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o534_int { char p[0x534]; int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o538_int { char p[0x538]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o540_int { char p[0x540]; int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o54C_uint { char p[0x54C]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oE4_float { char p[0xE4]; float v; };
struct oEC_float { char p[0xEC]; float v; };
struct oF4_float { char p[0xF4]; float v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };





int FUN_0c031fbc(int a4, int a5, int a6)
{
    int t8;
    int t19;
    int t38;
    int t57;
    int t5;
    int t62;

    (((struct o534_uint *)(a4))->v) = (*(int *)((((((struct o540_int *)(a4))->v)) + 0x0)));
    if ((((((struct o534_int *)(a4))->v)) & 0x20) == 32) {
        t5 = (((((struct o1EC_int *)(a4))->v)) & 0xFFFFF00F);
    } else {
        t5 = (((((struct o1EC_int *)(a4))->v)) | 0xFF0);
    }
    (((struct o1EC_uint *)(a4))->v) = t5;
    t8 = (((struct o534_int *)(a4))->v);
    if ((t8 != 3) && ((t8 != 7) && (t8 != 11))) {
        if ((t8 != 19) && ((t8 != 23) && (t8 != 27))) {
            t19 = (((struct o534_int *)(a4))->v);
            if ((t19 & 0xC) != 0) {
                if ((t19 & 0xC) != 4) {
                    if ((t19 & 0xC) != 8) {
                    } else {
                        (((struct o4C4_uint *)(a4))->v) = 0x2;
                        (((struct o4CC_uint *)(a4))->v) = 0x0;
                    }
                } else {
                    (((struct o4C4_uint *)(a4))->v) = 0x4;
                    (((struct o4CC_uint *)(a4))->v) = 0x1;
                }
            } else {
                (((struct o4C4_uint *)(a4))->v) = 0x0;
                (((struct o4CC_uint *)(a4))->v) = 0x0;
            }
            return FUN_0c031e3c(a4);
        }
        if ((0x40000 & ((((struct o20C_int *)(a4))->v))) == 0) {
            FUN_0c031e5e(a4, a5, a6);
        } else {
            FUN_0c031f48(a4);
        }
        (((struct oD0_uint *)((*(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v) = 0xFFFFFFFF;
        (((struct o20C_uint *)(a4))->v) = 0x80;
        (((struct o210_uint *)(a4))->v) = 0x0;
        (((struct o4C4_uint *)(a4))->v) = 0x6;
        t38 = (((struct o534_int *)(a4))->v);
        if ((t38 & 0xC) != 0) {
            if ((t38 & 0xC) != 4) {
                if ((t38 & 0xC) != 8) {
                } else {
                    (((struct o4CC_uint *)(a4))->v) = 0x0;
                }
            } else {
                (((struct o4CC_uint *)(a4))->v) = 0x1;
            }
        } else {
            (((struct o4CC_uint *)(a4))->v) = 0x0;
        }
        if (((((struct oB4_float *)(a4))->v)) > ((((struct o34_float *)(a4))->v))) {
            (((struct o34_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + (*(float *)0xC032178));
        }
        return 0x34;
    }
    if ((0x40000 & ((((struct o20C_int *)(a4))->v))) == 0) {
        FUN_0c031e5e(a4, a5, a6);
    } else {
        FUN_0c031f48(a4);
    }
    (((struct o4C4_uint *)(a4))->v) = 0x6;
    t57 = (((struct o534_int *)(a4))->v);
    if ((t57 & 0xC) != 0) {
        if ((t57 & 0xC) != 4) {
            t62 = (t57 & 0xC);
            if ((t57 & 0xC) != 8) {
            } else {
                (((struct o4CC_uint *)(a4))->v) = 0x0;
                t62 = 0x4CC;
            }
        } else {
            (((struct o4CC_uint *)(a4))->v) = 0x1;
            t62 = 0x4CC;
        }
    } else {
        (((struct o4CC_uint *)(a4))->v) = 0x0;
        t62 = 0x4CC;
    }
    return t62;
}

int FUN_0c040e18(int a4)
{
    int t0;
    int t2;
    float t5;
    int t26;
    int t28;
    int t51;
    int t59;
    float t52;
    int t67;
    int t42;
    int t35;
    int stk[15];

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 == 2) {
                t2 = (FUN_0c041f2a(a4));
            }
            t42 = t2;
        } else {
            t5 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0x18));
            if (((((struct o26C_float *)(a4))->v)) > (-1.0f)) {
                (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.049999997f);
            }
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o258_float *)(a4))->v)));
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o26C_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o260_float *)(a4))->v)));
            if ((t5 + ((((struct o3BC_float *)(a4))->v))) > ((((struct o34_float *)(a4))->v))) {
                (((struct o258_float *)(a4))->v) = 0.0f;
                (((struct o25C_float *)(a4))->v) = 0.0f;
                (((struct o260_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - ((((struct o3BC_float *)(a4))->v)));
                (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
                (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                t35 = (FUN_0c041dd0(a4));
            } else {
                t26 = (((struct o2EC_int *)(a4))->v);
                t28 = t26;
                if ((t26 & 12) != 0) {
                    t28 = (FUN_0c041dd0(a4));
                }
                t35 = t28;
            }
            t42 = t35;
        }
        t67 = t42;
    } else {
        FUN_0c041f2a(a4);
        t51 = (((struct o4E0_int *)(a4))->v);
        t59 = t51;
        if (t51 != 1) {
        } else {
            t52 = FUN_0c01f1b8((a4 + 0x30), (((int)stk + 4) + 0x18));
            (((struct oC_float *)(((int)stk + 4)))->v) = 0.0f;
            (((struct o4_float *)((((int)stk + 4) + 0xC)))->v) = 0.0f;
            (((struct o8_float *)((((int)stk + 4) + 0xC)))->v) = 0.25f;
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0x0;
            *(unsigned int *)((((int)stk + 4) + 0x4)) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
            *(unsigned int *)((((int)stk + 4) + 0x8)) = 0x0;
            FUN_0c0a6610((((int)stk + 4) + 0xC), ((int)stk + 4), (0x258 + a4));
            (((struct o26C_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (((((struct o3E8_float *)(a4))->v)) - t52));
            (((struct o3BC_float *)(a4))->v) = (((((struct o3E8_float *)(a4))->v)) - t52);
            (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
            t59 = 0x4EC;
        }
        t67 = t59;
    }
    return t67;
}

int FUN_0c066870(int a4, int a5)
{
    FUN_0c0e19d0(a4);
    FUN_0c0dc5a0();
    FUN_0c0dcc70(0.0f, 50.0f, 0.0f);
    nlGetMatrix((0xA4 + a4));
    nlPopMatrix(0x1);
    (((struct o38_float *)(a4))->v) = 10.0f;
    (((struct o4C_float *)(a4))->v) = 0.599999964f;
    (((struct o50_float *)(a4))->v) = 0.25f;
    *(volatile int *)((a5 + 0x38));
    (((struct o32_ushort *)(a4))->v) = ((FUN_0c0e5f1c()) + 0x99);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    *(unsigned int *)((a4 + 0x34)) = 0x4;
    (((struct o60_float *)(a4))->v) = 5.0f;
    (((struct o64_float *)(a4))->v) = 0.0f;
    (((struct o68_float *)(a4))->v) = 5.0f;
    (((struct o6C_float *)(a4))->v) = 1.0f;
    (((struct o3C_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    (((struct o70_float *)(a4))->v) = -5.0f;
    (((struct o74_float *)(a4))->v) = 0.0f;
    (((struct o78_float *)(a4))->v) = 5.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    (((struct o80_float *)(a4))->v) = -5.0f;
    (((struct o84_float *)(a4))->v) = 0.0f;
    (((struct o88_float *)(a4))->v) = -5.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    (((struct o90_float *)(a4))->v) = 5.0f;
    (((struct o94_float *)(a4))->v) = 0.0f;
    (((struct o98_float *)(a4))->v) = -5.0f;
    (((struct o9C_float *)(a4))->v) = 1.0f;
    (((struct o48_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    FUN_0c0da2e0();
    (((struct oE4_float *)(a4))->v) = (((float)((FUN_0c0e5f1c()) - 50) + 0.5f) * 0.00999999978f);
    FUN_0c0da2e0();
    (((struct oEC_float *)(a4))->v) = (((float)((FUN_0c0e5f1c()) - 50) + 0.5f) * 0.00999999978f);
    FUN_0c0da2e0();
    (((struct oF4_float *)(a4))->v) = ((float)((FUN_0c0e5f1c()) - 50) * 0.000499999966f);
    FUN_0c0da2e0();
    (((struct oF8_float *)(a4))->v) = ((float)((FUN_0c0e5f1c()) - 50) * 0.000499999966f);
    FUN_0c0da2e0();
    (((struct oFC_float *)(a4))->v) = ((float)((FUN_0c0e5f1c()) - 50) * 0.000499999966f);
    (((struct o180_uint *)(a4))->v) = 0x960;
    return 0x180;
}



int kmiWriteFBRegister(Stk29 s)
{
    int t9;
    int t10;
    int t11;

    (((struct o0_uint *)0xC9525B0)->v) = (((*(int *)(((int)&s + 88))) & 0x7FF) | (((*(int *)(((int)&s + 84))) & 0x7FF) << 16));
    (((struct o4_uint *)0xC9525B0)->v) = (((*(int *)(((int)&s + 96))) & 0x7FF) | (((*(int *)(((int)&s + 92))) & 0x7FF) << 16));
    (((struct o8_uint *)0xC9525B0)->v) = ((((*(int *)(((int)&s + 72))) & 0xF) | ((((*(int *)(((int)&s + 76))) & 0x1F) << 2) << 2)) | ((((*(int *)(((int)&s + 80))) & 0xF) << 8) << 1));
    (((struct o0_uint *)0xC95233C)->v) = (*(int *)(((int)&s + 0)));
    (((struct o4_uint *)0xC95233C)->v) = (*(int *)(((int)&s + 4)));
    t9 = *(int *)(((int)&s + 8));
    t10 = *(int *)(((int)&s + 0));
    t11 = *(int *)(((int)&s + 4));
    if ((int)((((struct o14_int *)0xC95233C)->v)) > 0) {
        (((struct oC_uint *)0xC9525B0)->v) = (((t10 & 0x3FF) | ((((t11 - ((((struct o14_int *)0xC95233C)->v))) & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    } else {
        (((struct oC_uint *)0xC9525B0)->v) = (((t10 & 0x3FF) | (((t11 & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    }
    (((struct o0_uint *)0xC9525F8)->v) = ((unsigned char)(*(int *)(((int)&s + 20))) | ((unsigned char)(*(int *)(((int)&s + 24))) << 8));
    (((struct o4_uint *)0xC9525F8)->v) = (((unsigned short)(*(int *)(((int)&s + 16))) | (((*(int *)(((int)&s + 12))) & 0x1) << 16)) | ((((*(int *)(((int)&s + 28))) & 0x1) << 16) << 2));
    (((struct o10_uint *)0xC9525B0)->v) = ((*(int *)(((int)&s + 68))) & 0x1FF);
    (((struct o18_uint *)0xC9525B0)->v) = (((((*(int *)(((int)&s + 48))) & 0x7) | ((((*(int *)(((int)&s + 44))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((int)&s + 52))) << 8)) | ((unsigned char)(*(int *)(((int)&s + 56))) << 16));
    (((struct o14_uint *)0xC9525B0)->v) = (((((((((*(int *)(((int)&s + 32))) & 0x1) | (((*(int *)(((int)&s + 40))) & 0x1) << 1)) | (((*(int *)(((int)&s + 60))) & 0x3) << 2)) | (((0x7 & (*(int *)(((int)&s + 64)))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((int)&s + 112))) << 8)) | ((0x1F & (*(int *)(((int)&s + 104)))) << 16)) | (((*(int *)(((int)&s + 100))) & 0x1) << 22)) | (((*(int *)(((int)&s + 108))) & 0x1) << 23));
    return 0x6C;
}


int vmsfs_xdefrag(int a4, int a5)
{
    int t6;
    int t10;
    int t15;
    int t20;
    int t24;
    int t26;
    int t29;
    int t32;
    int t35;
    int t38;
    int t42;
    int t45;
    int t48;
    int t54;
    int stk[13];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F15;
    int T_;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    R4 = a4;
    R5 = a5;
    L_C22791C:;
    R1004 = (R4 * 0x148);
    R10 = (R5);
    R11 = (((R4 * 0x148) + 0xC956768));
    R14 = (R4);
    if (((*(signed char *)((((R4 * 0x148) + 0xC956768) + 0x2))) == 0)) goto L_C227986;
    goto L_C227942;
    L_C227942:;
    t6 = (vmsio_isready(R14)) != 0;
    if (t6) goto L_C227970;
    goto L_C22794C;
    L_C22794C:;
    vmsfs_unmount(R14);
    goto L_C227986;
    L_C227986:;
    R0 = (0xFFFFFF01);
    goto L_C227A8A;
    L_C227A8A:;
    return R0;
    L_C227970:;
    t10 = (vmsio_ismount(R14)) == 0;
    if (t10) goto L_C227986;
    goto L_C22797A;
    L_C22797A:;
    if (((*(signed char *)((((R1004) + 0xC956768) + 0x8))) != 0)) goto L_C22798C;
    goto L_C227986;
    L_C22798C:;
    t15 = (int)(buIsFormat(R14)) >= 0;
    if (t15) goto L_C22799C;
    goto L_C227996;
    L_C227996:;
    R0 = (0xFFFFFF03);
    goto L_C227A8A;
    L_C22799C:;
    if (((*(int *)(((*(int *)((R11 + 0x1C))) + 0x38))) == 0)) goto L_C2279BA;
    goto L_C2279A4;
    L_C2279A4:;
    t20 = vmsfs_xfind(R14, (((int)stk + 4) + 0x4));
    R4 = (t20);
    if ((t20 == 0)) goto L_C2279BA;
    goto L_C2279B2;
    L_C2279B2:;
    t24 = (int)(check_fat_all(R14, R5, R6)) >= 0;
    if (t24) goto L_C2279C0;
    goto L_C2279BA;
    L_C2279BA:;
    R0 = (0xFFFFFF0B);
    goto L_C227A8A;
    L_C2279C0:;
    t26 = search_fat_used(R14);
    R13 = (t26);
    if (((int)t26 < 0)) goto L_C227A60;
    goto L_C2279CA;
    L_C2279CA:;
    t29 = search_fat_free(R14, (R13 + 0x1));
    R12 = (t29);
    if (((int)t29 < 0)) goto L_C227A60;
    goto L_C2279D8;
    L_C2279D8:;
    t32 = vmsfs_read_retry(R14, R13, R10);
    R4 = (t32);
    if (((int)t32 < 0)) goto L_C227A88;
    goto L_C2279E8;
    L_C2279E8:;
    t35 = vmsfs_write_retry(R14, R12, R10);
    R4 = (t35);
    if (((int)t35 < 0)) goto L_C227A88;
    goto L_C2279F8;
    L_C2279F8:;
    t38 = search_fat(R14, R13);
    R5 = (t38);
    if (((int)t38 <= 0)) goto L_C227A0E;
    goto L_C227A04;
    L_C227A04:;
    set_fat(R14, R5);
    goto L_C227A22;
    L_C227A22:;
    t42 = get_fat(R14, R13);
    set_fat(R14, R12);
    set_fat(R14, R13);
    goto L_C2279C0;
    L_C227A0E:;
    t45 = search_dir_by_startfat(R14, R13);
    t48 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))(t45, 0x2, R12);
    goto L_C227A22;
    L_C227A88:;
    R0 = (R4);
    goto L_C227A8A;
    L_C227A60:;
    R4 = ((R11 + 0x48));
    R5 = (0x100);
    R6 = (0x1);
    goto L_C227A6E;
    L_C227A6E:;
    if (((unsigned int)R4 < (unsigned int)((R11 + 0x48) + R5))) goto L_C227A6A;
    goto L_C227A78;
    L_C227A78:;
    t54 = write_dir(R14);
    R4 = (t54);
    if (((int)t54 < 0)) goto L_C227A88;
    goto L_C227A82;
    L_C227A82:;
    R4 = ((write_fat(R14)));
    goto L_C227A88;
    L_C227A6A:;
    *(unsigned char *)((R4 + 0x0)) = R6;
    R4 = ((R4 + 0x1));
    goto L_C227A6E;
}


void FUN_0c0d6ad4(void)
{
    int t20;
    int t35;
    int t46;
    int t57;
    int t71;
    float u74;
    float u77;
    int t78;
    int t81;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F14;
    float F15;
    int T_;
    L_C0D6AD4:;
    R10 = (0xC247594);
    R11 = (0xC943514);
    R12 = (0xC9436B4);
    R9 = (0xC943554);
    goto L_C0D6C2C;
    L_C0D6C2C:;
    R4 = (0x3A8);
    if (((unsigned int)R12 >= (unsigned int)((0x160 + R9) + 0x3A8))) goto L_C0D6C3C;
    goto L_C0D6C38;
    L_C0D6C38:;
    goto L_C0D6AF4;
    L_C0D6AF4:;
    R13 = (R12);
    R14 = ((0x170 + R12));
    if (((*(int *)((R12 + 0x0))) != 0)) goto L_C0D6B04;
    goto L_C0D6B00;
    L_C0D6B00:;
    goto L_C0D6C24;
    L_C0D6C24:;
    R10 = ((R10 + 0x4));
    R11 = ((R11 + 0x20));
    R12 = ((R12 + 0x1D4));
    goto L_C0D6C2C;
    L_C0D6B04:;
    if (((*(int *)((R10 + 0x0))) != 0)) goto L_C0D6B0E;
    goto L_C0D6B0A;
    L_C0D6B0A:;
    goto L_C0D6C24;
    L_C0D6B0E:;
    if (((*(int *)((R14 + 0x0))) != 0)) goto L_C0D6B18;
    goto L_C0D6B14;
    L_C0D6B14:;
    goto L_C0D6C24;
    L_C0D6B18:;
    if (((*(int *)((R14 + 0x14))) != 0)) goto L_C0D6B50;
    goto L_C0D6B1E;
    L_C0D6B1E:;
    *(unsigned int *)((R14 + 0xC)) = ((*(int *)((R14 + 0xC))) + 0x1);
    t20 = FUN_0c0d68dc(R13, R14);
    R0 = (t20);
    if ((t20 != 0)) goto L_C0D6C08;
    goto L_C0D6B2E;
    L_C0D6B2E:;
    R0 = ((FUN_0c0d6c52(R13)));
    goto L_C0D6C24;
    L_C0D6C08:;
    R4 = (0x8);
    if (((int)(*(int *)((R14 + 0x14))) <= 0)) goto L_C0D6C16;
    goto L_C0D6C10;
    L_C0D6C10:;
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) - 1);
    goto L_C0D6C16;
    L_C0D6C16:;
    if ((((*(int *)((R14 + 0x24))) & R4) == 0)) goto L_C0D6C24;
    goto L_C0D6C1C;
    L_C0D6C1C:;
    (((struct o54_uint *)(R13))->v) = ((((struct o98_int *)(R13))->v));
    R0 = (0x54);
    goto L_C0D6C24;
    L_C0D6B50:;
    if (((int)(*(int *)((R14 + 0x14))) >= 0)) goto L_C0D6C08;
    goto L_C0D6B56;
    L_C0D6B56:;
    t35 = *(int *)((R14 + 0x14));
    R0 = (t35);
    if ((t35 != -1)) goto L_C0D6B62;
    goto L_C0D6B5C;
    L_C0D6B5C:;
    *(unsigned int *)((R14 + 0x14)) = 0xFFFFFFFE;
    goto L_C0D6C08;
    L_C0D6B62:;
    R4 = (0x0);
    R5 = (0xC);
    if (((*(int *)((R14 + 0x28))) != -1)) goto L_C0D6B8C;
    goto L_C0D6B6C;
    L_C0D6B6C:;
    R0 = (0x2EC);
    if (((R5 & ((((struct o2EC_int *)(((((struct o6C_int *)(R13))->v))))->v))) == 0)) goto L_C0D6C08;
    goto L_C0D6B78;
    L_C0D6B78:;
    *(unsigned int *)((R14 + 0x28)) = R4;
    t46 = *(int *)((R14 + 0x2C));
    R0 = (t46);
    if ((t46 != -1)) goto L_C0D6C04;
    goto L_C0D6B80;
    L_C0D6B80:;
    (((struct o58_uint *)(R13))->v) = R4;
    (((struct o64_uint *)(R13))->v) = R4;
    *(unsigned int *)((R14 + 0x28)) = R4;
    R0 = (0x64);
    goto L_C0D6C08;
    L_C0D6C04:;
    *(unsigned int *)((R14 + 0x14)) = (*(int *)((R14 + 0x2C)));
    goto L_C0D6C08;
    L_C0D6B8C:;
    if (((*(int *)((R14 + 0x2C))) != -1)) goto L_C0D6BA2;
    goto L_C0D6B92;
    L_C0D6B92:;
    R0 = (0x2EC);
    if (((R5 & ((((struct o2EC_int *)(((((struct o6C_int *)(R13))->v))))->v))) != 0)) goto L_C0D6BCC;
    goto L_C0D6B9E;
    L_C0D6B9E:;
    goto L_C0D6C08;
    L_C0D6BCC:;
    *(unsigned int *)((R14 + 0x14)) = R4;
    goto L_C0D6C08;
    L_C0D6BA2:;
    t57 = *(int *)((R14 + 0x28));
    R0 = (t57);
    if ((t57 != -2)) goto L_C0D6BBA;
    goto L_C0D6BA8;
    L_C0D6BA8:;
    R0 = (0x20C);
    if (((((((struct o20C_int *)(((((struct o6C_int *)(R13))->v))))->v)) & (*(int *)((R14 + 0x2C)))) == 0)) goto L_C0D6C08;
    goto L_C0D6BB6;
    L_C0D6BB6:;
    goto L_C0D6BCC;
    L_C0D6BBA:;
    if ((R0 != -3)) goto L_C0D6BD6;
    goto L_C0D6BBE;
    L_C0D6BBE:;
    R0 = (0x210);
    if ((((((struct o210_int *)(((((struct o6C_int *)(R13))->v))))->v)) != (*(int *)((R14 + 0x2C))))) goto L_C0D6C08;
    goto L_C0D6BCC;
    L_C0D6BD6:;
    t71 = *(int *)((R14 + 0x28));
    R0 = (t71);
    if ((t71 != -4)) goto L_C0D6C08;
    goto L_C0D6BDC;
    L_C0D6BDC:;
    u74 = *(float *)0xC0D6D18;
    FUN_0c0da2e0();
    u77 = 1.0f;
    u77 = u77 + u74 * ((((struct o18_float *)(R11))->v));
    t78 = FUN_0c0e5f1c();
    R0 = (t78);
    if ((t78 == 0)) goto L_C0D6C04;
    goto L_C0D6BFE;
    L_C0D6BFE:;
    t81 = *(int *)((R13 + 0x24));
    R0 = (t81);
    if (((t81 & 16) == 0)) goto L_C0D6C08;
    goto L_C0D6C04;
    L_C0D6C3C:;
}


int FUN_0c02b330(int a4)
{
    int t1;
    int t5;
    int t8;
    int t9;
    int t15;
    int t16;
    int t17;
    int t22;
    int t30;
    int t37;
    int t38;
    int t44;
    int t61;
    int t81;

    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        (((struct o474_uint *)(a4))->v) = 0x0;
        t81 = 0x474;
    } else {
        t1 = FUN_0c02a416(a4);
        if (t1 != 0) {
            (((struct o538_uint *)(a4))->v) = 0xA;
            (((struct o4F8_uint *)(a4))->v) = 0x0;
        } else {
            t5 = (((struct o4F8_int *)(a4))->v);
            if ((t5 != 12) && (t5 != 13)) {
                t8 = FUN_0c03593a(a4);
                if (t8 != 0) {
                    t9 = FUN_0c02a35a(a4);
                    if (t9 != 0) {
                        if (t9 != 1) {
                            if (t9 != 2) {
                                if (t9 != 3) {
                                    (((struct o538_uint *)(a4))->v) = 0x2;
                                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                                } else {
                                    (((struct o538_uint *)(a4))->v) = 0x2;
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                }
                            } else {
                                (((struct o538_uint *)(a4))->v) = 0x2;
                                (((struct o4F8_uint *)(a4))->v) = 0x6;
                            }
                        } else {
                            (((struct o538_uint *)(a4))->v) = 0x2;
                            (((struct o4F8_uint *)(a4))->v) = 0x2;
                        }
                    } else {
                        t15 = FUN_0c035b26(a4);
                        if (t15 != 0) {
                            t16 = FUN_0c035ce4(a4);
                            if (t16 != 0) {
                                (((struct o4F8_uint *)(a4))->v) = 0x4;
                            } else {
                                t17 = (((struct o538_int *)(a4))->v);
                                if ((t17 != 8) && ((t17 != 6) && (t17 != 7))) {
                                    if (t17 == 4) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    } else {
                                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                                    }
                                } else {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                }
                            }
                        } else {
                            t22 = (((struct o538_int *)(a4))->v);
                            if ((t22 != 8) && ((t22 != 6) && (t22 != 7))) {
                                if (t22 == 4) {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                } else {
                                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                                }
                            } else {
                                (((struct o4F8_uint *)(a4))->v) = 0x2;
                            }
                        }
                    }
                } else {
                    (((struct o538_uint *)(a4))->v) = 0x1;
                    (((struct o50C_uint *)(a4))->v) = 0x0;
                    (((struct o524_uint *)(a4))->v) = 0x0;
                    t30 = FUN_0c0236ce(a4);
                    if (t30 == 0) {
                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                    } else {
                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                    }
                }
            } else {
                if (((((struct o54C_int *)(a4))->v)) == 0) {
                    (((struct o54C_uint *)(a4))->v) = 0x1;
                }
                t37 = FUN_0c035b26(a4);
                if (t37 != 0) {
                    t38 = FUN_0c035ce4(a4);
                    if (t38 == 0) {
                        if (((((struct o538_int *)(a4))->v)) != 9) {
                            if (((((struct o538_int *)(a4))->v)) == 1) {
                                (((struct o54C_uint *)(a4))->v) = 0x1;
                                (((struct o4F8_uint *)(a4))->v) = 0x4;
                            } else {
                                t44 = (((struct o538_int *)(a4))->v);
                                if (t44 == 8) {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                } else {
                                    if ((t44 != 6) && (t44 != 7)) {
                                        if (t44 == 4) {
                                            (((struct o4F8_uint *)(a4))->v) = 0x2;
                                        } else {
                                            (((struct o4F8_uint *)(a4))->v) = 0x0;
                                        }
                                    } else {
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    }
                                }
                            }
                        } else {
                            (((struct o4F8_uint *)(a4))->v) = 0x4;
                        }
                    } else {
                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                    }
                } else {
                    if (((((struct o538_int *)(a4))->v)) != 9) {
                        if (((((struct o538_int *)(a4))->v)) == 1) {
                            (((struct o54C_uint *)(a4))->v) = 0x1;
                            (((struct o4F8_uint *)(a4))->v) = 0x4;
                        } else {
                            t61 = (((struct o538_int *)(a4))->v);
                            if (t61 == 8) {
                                (((struct o4F8_uint *)(a4))->v) = 0x2;
                            } else {
                                if ((t61 != 6) && (t61 != 7)) {
                                    if (t61 == 4) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    } else {
                                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                                    }
                                } else {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                }
                            }
                        }
                    } else {
                        (((struct o4F8_uint *)(a4))->v) = 0x4;
                    }
                }
            }
        }
        t81 = 0x4F8;
    }
    return t81;
}


int FUN_0c08512c(int a4)
{
    int t1;
    float u7;
    int t8;
    int t14;
    int t32;
    int t48;
    int t49;

    if (((((struct o58_int *)(a4))->v)) == 0) {
        t1 = (((struct o5C_int *)(a4))->v);
        (((struct o5C_uint *)(a4))->v) = (t1 - 1);
        if ((int)(t1 - 1) > 0) {
        } else {
            (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
            (((struct o5C_uint *)(a4))->v) = ((((((struct o60_int *)(a4))->v)) >> 1) >> 1);
        }
        return 0x5C;
    }
    u7 = (((struct o4C_float *)(a4))->v);
    t8 = (((struct o48_int *)(a4))->v);
    (((struct o48_uint *)(a4))->v) = (t8 - (int)u7);
    if ((int)(t8 - (int)u7) < (int)0x80) {
        (((struct o50_uint *)(a4))->v) = (((((struct o50_int *)(a4))->v)) - 1);
        (((struct o48_uint *)(a4))->v) = (((((struct o48_int *)(a4))->v)) + 0x7F);
    }
    t14 = (((struct o5C_int *)(a4))->v);
    (((struct o5C_uint *)(a4))->v) = (t14 - 1);
    if ((int)(t14 - 1) > 0) {
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o3C_float *)(a4))->v)));
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o40_float *)(a4))->v)));
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o44_float *)(a4))->v)));
    }
    FUN_0c084570(((((struct o48_int *)(a4))->v)), ((((struct o50_int *)(a4))->v)), (int)((((struct o30_float *)(a4))->v)), (int)((((struct o34_float *)(a4))->v)), (int)((((struct o38_float *)(a4))->v)));
    t32 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t32 - 1);
    if ((int)(t32 - 1) < 0) {
        FUN_0c084570(0x80, 0x0, 0xFF, 0xFF, 0xFF);
        FUN_0c0d8c40(0xF0F0F0, 0xF0F0F0, 0xF0F0F0);
        if (((((struct o64_int *)(a4))->v)) != 0) {
            FUN_0c08477e(0x0);
            mwPlaEntryErrFn(0xFFFFFFFF, 0x0);
        }
        return FUN_0c0e19f2();
    }
    if (((((struct o64_int *)(a4))->v)) != 0) {
        *(volatile int *)((a4 + 0x64));
        *(volatile int *)((a4 + 0x60));
        t48 = FUN_0c0e5dc0();
        t49 = t48;
        if ((int)t48 > (int)0xFF) {
            t49 = 0xFF;
        }
        FUN_0c08477e(0x1);
        return mwPlaEntryErrFn(0xFFFFFFFF, (((t49 << 16) | (t49 << 8)) | t49));
    }
    return 0x64;
}

int kmfGetInternalSystemMetrics(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t11;
    int t33;
    int t34;
    int t38;
    int t40;

    t0 = 0x0;
    t1 = 0x4;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x0)) = (*(int *)((t0 + 0xC952780)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x4)) = (*(int *)((t0 + 0xC952774)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x8)) = (*(int *)((t0 + 0xC95276C)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0xC)) = (*(int *)((t0 + 0xC952784)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x10)) = (*(int *)((t0 + 0xC952778)));
        *(unsigned int *)((((((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1) + a4) + 0x14)) = (*(int *)(((0xC952828 + t3) + 0x0)));
        t2 = (t2 + 0x1);
        t11 = *(int *)((t3 + 0xC952514));
        t3 = (t3 + 0x4);
        *(unsigned int *)((((a4 + 0x38) + t1) + 0x0)) = t11;
        t1 = (t1 - 4);
        t0 = (t0 + 0x20);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    if (((((struct o0_int *)0xC952640)->v)) == 0) {
        *(unsigned int *)((a4 + 0x30)) = (*(int *)((((((((struct o18_int *)0xC952640)->v)) & 0x1) << 2) + 0xC952630)));
        *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((-(((((struct o18_int *)0xC952640)->v)) & 0x1)) + 0x1) << 2) + 0xC952630)));
    } else {
        *(unsigned int *)((a4 + 0x34)) = (*(int *)((0xC952630 + ((((((struct o18_int *)0xC952640)->v)) & 0x1) << 2))));
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((((-(((((struct o18_int *)0xC952640)->v)) & 0x1)) + 0x1) << 2) + 0xC952630)));
    }
    (((struct o40_uint *)(a4))->v) = ((((struct o0_int *)0xC9525B0)->v));
    (((struct o44_uint *)(a4))->v) = ((((struct o4_int *)0xC9525B0)->v));
    (((struct o48_uint *)(a4))->v) = ((((struct o0_int *)0xC95280C)->v));
    (((struct o4C_uint *)(a4))->v) = ((((struct o4_int *)0xC95280C)->v));
    (((struct o50_uint *)(a4))->v) = ((((struct o14_int *)0xC95280C)->v));
    (((struct o54_uint *)(a4))->v) = ((((struct o18_int *)0xC95280C)->v));
    t33 = 0x0;
    t34 = 0x0;
    for (;;) {
        *(unsigned int *)((((a4 + 0x58) + t33) + 0x0)) = (*(int *)((t34 + 0xC95267C)));
        *(unsigned int *)((((a4 + 0x58) + t33) + 0x14)) = (*(int *)((t34 + 0xC952680)));
        *(unsigned int *)((((0x80 + a4) + t33) + 0x0)) = (*(int *)((t33 + 0xC9527C0)));
        t38 = *(int *)(((0xC952830 + t33) + 0x0));
        t40 = ((0x94 + a4) + t33);
        t33 = (t33 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t38;
        t34 = (t34 + 0x10);
        if ((unsigned int)t33 >= (unsigned int)0x14) {
            break;
        }
    }
    (((struct oA8_uint *)(a4))->v) = (*(int *)0xC952850);
    (((struct oAC_uint *)(a4))->v) = ((((struct o3C_int *)0xC95280C)->v));
    return 0x0;
}

int FUN_0c043724(int a4)
{
    int t0;
    int t7;
    int t12;
    int t15;
    int t18;
    int t19;
    int t22;

    t0 = (((struct o4C8_int *)(a4))->v);
    if (t0 == 0) {
        return t0;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 == 3) {
                return t0;
            }
            if (t0 != 4) {
                if (t0 == 5) {
                    if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                        return ((int (*)(int))(0xC04345A))(a4);
                    }
                    return 0x2EC;
                }
                if (t0 == 6) {
                    t7 = (((struct o3AC_int *)(a4))->v);
                    (((struct o3AC_uint *)(a4))->v) = (t7 + 0x1);
                    if ((int)(t7 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
                        return ((int (*)(int))(0xC043498))(a4);
                    }
                    return 0x3B0;
                }
                if (t0 == 7) {
                    if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                        return FUN_0c043338(a4);
                    }
                    return 0x2EC;
                }
                if (t0 == 8) {
                    return t0;
                }
                if (t0 == 9) {
                    return t0;
                }
                if (t0 == 10) {
                    if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                        return ((int (*)(int))(0xC043356))(a4);
                    }
                    return 0x2EC;
                }
                return t0;
            }
            if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                t12 = (((struct o3AC_int *)(a4))->v);
                (((struct o3AC_uint *)(a4))->v) = (t12 + 0x1);
                if ((int)(t12 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
                    return 0x3B0;
                }
                return FUN_0c043338(a4);
            }
            return 0x2EC;
        }
        FUN_0c034f6c(a4, 0x100, 0x1);
        t15 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t15 + 0x1);
        if ((int)(t15 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
            FUN_0c0da2e0();
            t18 = FUN_0c0e5f1c();
            if ((t18 != 0) && ((t18 != 1) && ((t18 != 2) && (t18 != 3)))) {
                if (t18 != 4) {
                    return t18;
                }
                return ((int (*)(int))(0xC04343C))(a4);
            }
            return FUN_0c043338(a4);
        }
        return 0x3B0;
    }
    t19 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t19 + 0x1);
    if ((int)(t19 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
        return 0x3B0;
    }
    FUN_0c0da2e0();
    t22 = FUN_0c0e5f1c();
    if (t22 != 0) {
        if (t22 != 1) {
            if ((t22 != 2) && ((t22 != 3) && (t22 != 4))) {
                return t22;
            }
            return ((int (*)(int))(0xC043356))(a4);
        }
        return ((int (*)(int))(0xC04343C))(a4);
    }
    return FUN_0c043338(a4);
}



