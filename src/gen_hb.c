/* Straight-line functions with calls and guards (batch gen_hb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ee84(int, int, int);
int FUN_0c01f00c(int, int);
int FUN_0c029646(int, int, int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c062f54(int, int, int);
int FUN_0c084218(void);
int FUN_0c0b4404(int);
int FUN_0c0c6ac6(int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e1e6a(int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e6248(void);
int FUN_0c0ed62c(int);
int FUN_0c0ed650(int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int vmsfb_sleep(void);
int vmsfs_fclose(int, int);
int vmsfs_fdelete(int, int, int, int, int, int, int, int);
int vmsfs_fdelete_ex(int, int, int);
int vmsfs_format(int, int, int, int, int);
int vmsfs_fread(int, int, int);
int vmsfs_frename(int, int, int);
int vmsfs_fsetattr(int, int, int, int);
int vmsfs_fwrite(int, int, int);
int vmsfs_load_file(int, int, int, int);
int vmsfs_load_file_ex(int, int, int, int, int);
int vmsfs_mount(int, int, int, int, int, int, int, int, int, int, int, int);
int vmsfs_read_disk_image(int, int, int, int);
int vmsfs_rewrite_exec_file(int, int, int, int, int);
int vmsfs_save_exec_file(int, int, int, int, int, int);
int vmsfs_save_file(int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_disk_image(int, int);
int vmsfs_xdefrag(int, int);
int FUN_0c01e9a6(int a4, int a5, int a6);
void vmsfs_c_dispatch(int a4, int a5, int a6, int a7, int a8);
int FUN_0c029e06(int a4);
int FUN_0c0614fa(int a4, int a5);
int FUN_0c0c1248(int a4, int a5);
int FUN_0c0c6df6(int a4);
int FUN_0c0c6b48(int a4, int a5);
int FUN_0c0e152a(int a4);
int FUN_0c0b4384(int a4);
int FUN_0c0690ee(void);
int FUN_0c068d54(int a4);
struct o100_uint { char p[0x100]; unsigned int v; };
struct o10C_uint { char p[0x10C]; unsigned int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o220_short { char p[0x220]; short v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o222_short { char p[0x222]; short v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o240_int { char p[0x240]; int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o374_uint { char p[0x374]; unsigned int v; };
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
struct o3D4_short { char p[0x3D4]; short v; };
struct o3D8_short { char p[0x3D8]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_float { char p[0x64]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_short { char p[0xE8]; short v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };
struct o0_short { short v; };
struct o6_short { char p[0x6]; short v; };




void vmsfs_c_dispatch(int a4, int a5, int a6, int a7, int a8)
{
    int stk[12];

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1012 = a8;
    v0_4 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_7 = a7;
    v0_0 = (0xFFFFFF01);
    v0_1 = (v0_4);
    v0_2 = (0x0);
    v0_3 = ((((((v0_4 << 2) << 2) << 2) << 1) + 0xC954350));
    v0_5 = (0xC954330);
    v0_5 = (0xC954350);
    v0_8 = (0xC22548E);
    v0_4 = (((v0_4 << 2) + 0xC954330));
    L_C224A94:;
    v0_5 = *(int *)((v0_3 + 0x8));
    v0_6 = (v0_5);
    if (!(((unsigned int)v0_5 < (unsigned int)0x15))) goto L_C224C62;
    switch (((v0_6 << 1))) { case 0: goto L_C224C62; case 2: goto L_C224AF2; case 4: goto L_C224C62; case 6: goto L_C224B00; case 8: goto L_C224B1C; case 10: goto L_C224B2E; case 12: goto L_C224B42; case 14: goto L_C224B56; case 16: goto L_C224B68; case 18: goto L_C224B94; case 20: goto L_C224B7E; case 22: goto L_C224BC4; case 24: goto L_C224BDA; case 26: goto L_C224BFA; case 28: goto L_C224C1A; case 30: goto L_C224BA4; case 32: goto L_C224BB4; case 34: goto L_C224C34; case 36: goto L_C224AE6; case 38: goto L_C224C62; case 40: goto L_C224C46; }
    goto L_C224C46;
    L_C224C62:;
    vmsfb_sleep();
    goto L_C224A94;
    L_C224C46:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x24)));
    R1008 = v0_5;
    v0_6 = ((vmsfs_rewrite_exec_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), v0_5)));
    L_C224C5E:;
    v0_8 = (v0_6);
    if ((v0_8 != v0_0)) goto L_C224C76;
    vmsfs_unmount((*(int *)((v0_3 + 0x10))));
    L_C224C76:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_8;
    v0_7 = (((struct o7C_int *)(v0_3))->v);
    v0_10 = *(int *)((v0_3 + 0x8));
    *(unsigned int *)((v0_3 + 0x0)) = v0_2;
    *(unsigned int *)((v0_3 + 0x4)) = v0_2;
    *(unsigned int *)((v0_3 + 0x8)) = v0_2;
    *(unsigned int *)((v0_3 + 0xC)) = v0_2;
    *(unsigned int *)((v0_3 + 0x10)) = v0_2;
    *(unsigned int *)((v0_3 + 0x14)) = v0_2;
    *(unsigned int *)((v0_3 + 0x18)) = v0_2;
    *(unsigned int *)((v0_3 + 0x1C)) = v0_2;
    *(unsigned int *)((v0_3 + 0x20)) = v0_2;
    *(unsigned int *)((v0_3 + 0x24)) = v0_2;
    *(unsigned int *)((v0_3 + 0x28)) = v0_2;
    v0_9 = (((struct o74_int *)(v0_3))->v);
    v0_6 = (0x74);
    v0_5 = (v0_9);
    v0_5 = (v0_10);
    v0_7 = (v0_7);
    if ((v0_9 != 0)) goto L_C224CA0;
    goto L_C224A94;
    L_C224CA0:;
    v0_5 = ((int (*)(int, int, int, int))((*(int *)((v0_3 + v0_6)))))(v0_1, v0_5, v0_8, v0_7);
    goto L_C224A94;
    L_C224C34:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_fdelete_ex((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), (*(int *)((v0_3 + 0x1C))))));
    goto L_C224C5E;
    L_C224C1A:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x24)));
    R1008 = v0_5;
    v0_6 = ((vmsfs_load_file_ex((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), v0_5)));
    goto L_C224C5E;
    L_C224BFA:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x28)));
    R1008 = v0_5;
    R1004 = (v0_3 + 0x6C);
    v0_6 = ((vmsfs_save_exec_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), (v0_3 + 0x6C), v0_5)));
    goto L_C224C5E;
    L_C224BDA:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x28)));
    R1008 = v0_5;
    R1004 = (v0_3 + 0x6C);
    v0_6 = ((vmsfs_save_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), (v0_3 + 0x6C), v0_5)));
    goto L_C224C5E;
    L_C224BC4:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_load_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))))));
    goto L_C224C5E;
    L_C224BB4:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_write_disk_image((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))))));
    goto L_C224C5E;
    L_C224BA4:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_read_disk_image((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), v0_6, v0_7)));
    goto L_C224C5E;
    L_C224B94:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_xdefrag((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))))));
    goto L_C224C5E;
    L_C224B7E:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_fsetattr((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))))));
    goto L_C224C5E;
    L_C224B68:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_frename((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (v0_3 + 0x3C))));
    goto L_C224C5E;
    L_C224B56:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_fdelete((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), v0_6, v0_7, R1012, R1016, R1020, R1024)));
    goto L_C224C5E;
    L_C224B42:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((*(int *)((v0_3 + 0x14))) + 0x28)));
    v0_6 = ((vmsfs_fwrite((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), (*(int *)((v0_3 + 0x1C))))));
    goto L_C224C5E;
    L_C224B2E:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((*(int *)((v0_3 + 0x14))) + 0x28)));
    v0_6 = ((vmsfs_fread((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), (*(int *)((v0_3 + 0x1C))))));
    goto L_C224C5E;
    L_C224B1C:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((*(int *)((v0_3 + 0x14))) + 0x28)));
    v0_6 = ((vmsfs_fclose((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))))));
    goto L_C224C5E;
    L_C224B00:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x24)));
    R1008 = v0_5;
    v0_6 = ((vmsfs_format((*(int *)((v0_3 + 0x14))), (v0_3 + 0x4C), (*(int *)((v0_3 + 0x1C))), (v0_3 + 0x6C), v0_5)));
    goto L_C224C5E;
    L_C224AF2:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_mount((*(int *)((v0_3 + 0x14))), v0_5, v0_6, v0_7, R1012, R1016, R1020, R1024, *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28))));
    goto L_C224C5E;
    L_C224AE6:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((((int (*)(int, int, int, int))(v0_8))((*(int *)((v0_3 + 0x14))), v0_5, v0_6, v0_7)));
    goto L_C224C5E;
}

int FUN_0c029e06(int a4)
{
    int stk[21];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    int R1016;
    int R1020;
    int R1024;
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    v0_0 = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x1C)) = *(struct mv3 *)(0xC0F54B4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x10)) = *(struct mv3 *)(0xC0F54C0); }
    v0_3 = (((struct o3A0_int *)(v0_0))->v);
    v0_2 = (v0_3);
    v0_1 = (0x1);
    v0_0 = (v0_0);
    if ((v0_3 == 0)) goto L_C029E54;
    if ((v0_2 == 1)) goto L_C029EE4;
    if ((v0_2 != 2)) goto L_C029E40;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_3 = (((struct o3AC_int *)(v0_0))->v);
    (((struct o3AC_uint *)(v0_0))->v) = (v0_3 - 1);
    v0_2 = (0x3AC);
    if (((int)(v0_3 - 1) >= 0)) goto L_C02A002;
    (((struct o2C4_uint *)(v0_0))->v) = 0x32;
    (((struct o2CC_uint *)(v0_0))->v) = v0_1;
    (((struct o3A0_uint *)(v0_0))->v) = (((((struct o3A0_int *)(v0_0))->v)) + 0x1);
    v0_2 = (0x3A0);
    L_C02A002:;
    return v0_2;
    L_C029E40:;
    if ((v0_2 != 3)) goto L_C029E48;
    if (((((((struct o2EC_int *)(v0_0))->v)) & 12) == 0)) goto L_C029FD6;
    v0_2 = (((struct o4F0_int *)(v0_0))->v);
    (((struct o2C4_uint *)(v0_0))->v) = (unsigned short)(*(short *)(((*(int *)(((((v0_2 << 2) + v0_2) << 2) + 0xC1F8E44))) + 0x0)));
    (((struct o2CC_uint *)(v0_0))->v) = v0_1;
    (((struct o3A0_uint *)(v0_0))->v) = (((((struct o3A0_int *)(v0_0))->v)) + 0x1);
    L_C029FD6:;
    FUN_0c029646(v0_0, 0x0, 0x40);
    v0_2 = (0x220);
    w0_0 = (64.0f);
    if ((_builtin_fabsf((float)((((struct o220_short *)(v0_0))->v))) > 64.0f)) goto L_C02A002;
    v0_2 = (0x222);
    if ((_builtin_fabsf((float)((((struct o222_short *)(v0_0))->v))) > w0_0)) goto L_C02A002;
    v0_2 = ((FUN_0c02a19a(v0_0, R5, R6, R7)));
    goto L_C02A002;
    L_C029E48:;
    if ((v0_2 != 4)) goto L_C029E50;
    goto L_C029FD6;
    L_C029E50:;
    goto L_C02A002;
    L_C029EE4:;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_4 = (((struct o3B0_int *)(v0_0))->v);
    (((struct o3B0_uint *)(v0_0))->v) = (v0_4 - 1);
    v0_2 = (0x3B0);
    v0_3 = (0x0);
    if (((int)(v0_4 - 1) > 0)) goto L_C029F08;
    (((struct o374_uint *)(v0_0))->v) = v0_3;
    (((struct o3B0_uint *)(v0_0))->v) = v0_3;
    (((struct o3AC_uint *)(v0_0))->v) = v0_3;
    L_C029F1C:;
    v0_4 = (((struct o3AC_int *)(v0_0))->v);
    (((struct o3AC_uint *)(v0_0))->v) = (v0_4 - 1);
    v0_2 = (0x3AC);
    if (((int)(v0_4 - 1) >= 0)) goto L_C02A002;
    *(unsigned int *)((v0_0 + v0_2)) = 0x78;
    *(unsigned int *)((v0_0 + (v0_2 + 0x4))) = v0_3;
    *(unsigned int *)((v0_0 + ((v0_2 + 0x4) - 16))) = ((*(int *)((v0_0 + ((v0_2 + 0x4) - 16)))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 28)) = *(struct mv4 *)(0xC0F54CC); }
    R1024 = (v0_3);
    R1020 = (v0_1);
    R1016 = (v0_3);
    FUN_0c062d4a(v0_0, (((int)stk + 16) + 0xC), (((int)stk + 16) + 0x28), 0xFFFFF800, R1016, R1020, R1024);
    v0_2 = v0_3;
    *(int *)((int)stk + 12) = v0_2;
    v0_1 = v0_1;
    *(int *)((int)stk + 8) = v0_1;
    v0_3 = v0_3;
    *(int *)((int)stk + 4) = v0_3;
    FUN_0c062d4a(v0_0, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x28), 0xFFFFF800, v0_3, v0_1, v0_2);
    v0_2 = ((FUN_0c0372f8(v0_0, 0x123A9, 0x223A9, ((((struct o3AC_int *)(v0_0))->v)))));
    goto L_C02A002;
    L_C029F08:;
    *(volatile int *)((v0_0 + v0_2));
    *(unsigned int *)(((0x374 + v0_0) + 0x0)) = (FUN_0c0e5dc0());
    goto L_C029F1C;
    L_C029E54:;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_3 = (((struct o2EC_int *)(v0_0))->v);
    v0_2 = (v0_3);
    if (((v0_3 & 12) != 0)) goto L_C029E68;
    goto L_C02A002;
    L_C029E68:;
    (((struct o2C4_uint *)(v0_0))->v) = 0x2F;
    (((struct o2CC_uint *)(v0_0))->v) = v0_1;
    (((struct o3AC_uint *)(v0_0))->v) = 0x82;
    (((struct o3A0_uint *)(v0_0))->v) = (((((struct o3A0_int *)(v0_0))->v)) + 0x1);
    FUN_0c062f54(v0_0, (((int)stk + 28) + 0x1C), 0x1);
    FUN_0c062f54(v0_0, (((int)stk + 28) + 0x10), 0x1);
    (((struct o3B0_uint *)(v0_0))->v) = 0x82;
    v0_2 = ((FUN_0c0372f8(v0_0, 0x323A9, 0x423A9, ((((struct o3B0_int *)(v0_0))->v)))));
    goto L_C02A002;
}

int FUN_0c0614fa(int a4, int a5)
{
    int stk[11];
    register int t1;
    register int t10;
    register int t24;
    register int t25;
    register float u28;
    register int t14;

    t1 = FUN_0c0e19aa(0xC061418, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)((((struct oE8_short *)(a4))->v)) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = ((((struct o1EC_int *)(a4))->v));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)((((struct oBC_int *)(a4))->v)));
    }
    (((struct o1EC_uint *)(t1))->v) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    t24 = (((struct oBC_int *)(a4))->v);
    t25 = *(signed char *)((a5 + 0x3));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + ((((unsigned char)t25 << 1) + (unsigned char)t25) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    (((struct o220_uint *)(t1))->v) = 0x4F;
    u28 = 12.0f;
    if ((unsigned char)(*(signed char *)((a5 + 0x3))) == 1) {
        u28 = 20.0f;
    }
    (((struct o24C_float *)(t1))->v) = u28;
    (((struct o250_float *)(t1))->v) = (((((struct o24C_float *)(t1))->v)) / (float)(unsigned short)(*(short *)((a5 + 0x8))));
    (((struct o254_float *)(t1))->v) = 1.00999999f;
    (((struct o258_float *)(t1))->v) = 0.00999999978f;
    (((struct o240_uint *)(t1))->v) = 0x5;
    (((struct o23C_uint *)(t1))->v) = ((((struct o240_int *)(t1))->v));
    FUN_0c0dc5a0();
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = ((((struct o250_float *)(t1))->v));
    nlUnitMatrix();
    nlRotateAY((((((struct o6E_short *)(a4))->v)) + 0x8000));
    FUN_0c0db4d0(((int)stk + 4), (t1 + 0x48));
    nlPopMatrix(0x1);
    return (FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
}


int FUN_0c0c6df6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = (((struct oDC_int *)(a4))->v);
    t1 = (((struct oE4_int *)(a4))->v);
    t2 = FUN_0c0e1830(0xC0C6EF4, 0x110);
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x30)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)(((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F274)); }
    (((struct o70_float *)(t2))->v) = (((((struct o70_float *)(t2))->v)) + (1.0f + 1.0f));
    (((struct oCC_uint *)(t2))->v) = t0;
    (((struct oC8_uint *)(t2))->v) = t1;
    (((struct oF8_float *)(t2))->v) = 1.0f;
    (((struct oFC_float *)(t2))->v) = 1.0f;
    (((struct o54_float *)(t2))->v) = 1.0f;
    (((struct o58_float *)(t2))->v) = 1.0f;
    (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
    (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
    (((struct o60_float *)(t2))->v) = 1.0f;
    (((struct o68_uint *)(t2))->v) = 0x300A;
    (((struct o64_uint *)(t2))->v) = 0xFFFFFFFF;
    (((struct o10C_uint *)(t2))->v) = 0x5A;
    t1 = (0xF8 + t2);
    t3 = ((0xA0 + t2) + 0x28);
    t4 = 0xA;
    t5 = 0x800;
    u0 = 20.0f;
    for (;;) {
        *(float *)(((t1 - 0x4) + 0x0)) = u0;
        t1 = (t1 - 0x4);
        u0 = (u0 + 5.0f);
        t4 = (t4 - 0x1);
        *(unsigned int *)(((t3 - 0x4) + 0x0)) = t5;
        t3 = (t3 - 0x4);
        t5 = (t5 + 0x100);
        if (t4 == 0) {
            break;
        }
    }
    return FUN_0c0c6ac6(t0, 0xC1E9828, (0x100 + t2));
}

int FUN_0c0c6b48(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(int *)(((a4 << 2) + 0xC246FF0));
    t1 = FUN_0c0e1830(0xC0C6C3C, 0x104);
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    t2 = *(signed char *)((a4 + 0xC31FCB8));
    *(unsigned char *)((a4 + 0xC31FCB8)) = (t2 + 0x1);
    *(unsigned int *)((t1 + 0x34)) = (signed char)(t2 + 0x1);
    (((struct o70_float *)(t1))->v) = (*(float *)(((t0 + 0x30) + 0x0)));
    (((struct o74_float *)(t1))->v) = (((((struct o4_float *)((t0 + 0x30)))->v)) + 15.0f);
    (((struct o78_float *)(t1))->v) = ((((struct o8_float *)((t0 + 0x30)))->v));
    (((struct o58_float *)(t1))->v) = 1.0f;
    (((struct o5C_float *)(t1))->v) = 1.0f;
    (((struct o48_float *)(t1))->v) = 0.5f;
    (((struct o4C_float *)(t1))->v) = 0.5f;
    (((struct o64_float *)(t1))->v) = 1.0f;
    (((struct o6C_uint *)(t1))->v) = 0x200A;
    (((struct o68_uint *)(t1))->v) = 0xFFFFFFFF;
    (((struct o100_uint *)(t1))->v) = 0x6B;
    t0 = ((0xA4 + t1) + 0x28);
    t2 = (0xF4 + t1);
    t3 = 0xA;
    t4 = 0x800;
    u0 = 20.0f;
    for (;;) {
        *(float *)(((t2 - 0x4) + 0x0)) = u0;
        t2 = (t2 - 0x4);
        u0 = (u0 + 5.0f);
        t3 = (t3 - 0x1);
        *(unsigned int *)(((t0 - 0x4) + 0x0)) = t4;
        t0 = (t0 - 0x4);
        t4 = (t4 + 0x100);
        if (t3 == 0) {
            break;
        }
    }
    return FUN_0c0c6ac6(a5, 0xC1E9824, (0xF4 + t1));
}

int FUN_0c0e152a(int a4)
{
    int stk[9];
    register int t0;
    register int t3;
    register int t4;
    register int t6;
    register int t37;
    register int t1;
    register int t2;
    register int t9;
    register int t11;
    register int t15;
    register int t17;
    register int t22;
    register int t24;
    register int t32;
    register int t34;

    t0 = *(int *)((a4 + 0x34));
    if (t0 != 0) {
        t3 = a4;
        t4 = t0;
        for (;;) {
            t6 = *(int *)((t4 + 0x18));
            if ((*(int *)((t4 + 0x4))) != 0) {
                t3 = t4;
                t1 = (((int (*)(int))((*(int *)((t4 + 0x4)))))(t3));
            } else {
                t9 = t2;
                t11 = t3;
            }
            t1 = 0x2E;
            t2 = t9;
            t3 = t11;
            *(unsigned int *)((t4 + 0x4)) = 0x0;
            t2 = (*(short *)((t4 + t1)));
            t2 = (unsigned short)t2;
            if ((t2 & 0x4) != 0) {
                t2 = 0xC0ED62C;
                t3 = t4;
                t1 = (FUN_0c0ed62c(t3));
            } else {
                t15 = t2;
                t17 = t3;
            }
            t1 = 0x2E;
            t2 = t15;
            t3 = t17;
            if (((unsigned short)(*(short *)((t4 + t1))) & 0x4) == 0) {
                t3 = t4;
                t1 = (FUN_0c0e1e6a(t3));
            } else {
                t22 = t2;
                t24 = t3;
            }
            t1 = 0x2E;
            t2 = t22;
            t3 = t24;
            t2 = (*(short *)((t4 + t1)));
            t2 = (unsigned short)t2;
            if ((t2 & 0x10) == 0) {
                if (((unsigned short)(*(short *)((t4 + t1))) & 0x8) != 0) {
                    t2 = 0xC0ED650;
                    t3 = t4;
                    t1 = (FUN_0c0ed650(t3));
                } else {
                    t2 = 0xC0E2A4C;
                    t3 = t4;
                    t1 = (FUN_0c0e2a4c(t3, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                }
            } else {
                t32 = t2;
                t34 = t3;
            }
            t2 = t32;
            t3 = t34;
            t4 = t6;
            if (t4 == (*(int *)((a4 + 0x34)))) {
                break;
            }
        }
        t37 = t1;
    }
    return t37;
}

int FUN_0c0b4384(int a4)
{
    nlUnitMatrix();
    FUN_0c0b4404(a4);
    (((struct o3CC_ushort *)(a4))->v) = ((((struct o3D4_short *)(a4))->v));
    (((struct o3CE_ushort *)(a4))->v) = ((((struct o3D8_short *)(a4))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + a4)) = *(struct mv3 *)((0x260 + a4)); }
    nlRotateAX((-((((struct o3CC_short *)(a4))->v))));
    nlRotateAY((-((((struct o3CE_short *)(a4))->v))));
    FUN_0c0dcc70((-((((struct o254_float *)(a4))->v))), (-((((struct o258_float *)(a4))->v))), (-((((struct o25C_float *)(a4))->v))));
    nlGetMatrix((0x2AC + a4));
    nlInvertMatrix(0x0);
    nlGetMatrix((0x2EC + a4));
    FUN_0c0dbda0((0x2AC + a4));
    return FUN_0c084218();
}

int FUN_0c0690ee(void)
{
    register int t1;
    register int t6;

    t1 = FUN_0c0e19aa(0xC069152, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FA518); }
    FUN_0c0e6248();
    (((struct o60_ushort *)(t1))->v) = 0x0;
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)((((struct o6_short *)0xC0FA524)->v));
    (((struct o74_float *)(t1))->v) = (*(float *)0xC0691A4);
    (((struct oA0_uint *)(t1))->v) = 0x8;
    t6 = (((struct o0_short *)0xC0FA524)->v);
    *(unsigned int *)(((0xA4 + t1) + 0x0)) = t6;
    return t6;
}

int FUN_0c068d54(int a4)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC068DA8, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FA4F0); }
    FUN_0c0e6248();
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)(*(short *)0xC0FA502);
    (((struct o8C_uint *)(t1))->v) = a4;
    return 0x8C;
}
