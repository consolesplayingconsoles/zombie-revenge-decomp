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
    stk[3] = a8;
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
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = ((vmsfs_rewrite_exec_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), v0_5)));
    L_C224C5E:;
    v0_8 = (v0_6);
    if ((v0_8 != v0_0)) goto L_C224C76;
    vmsfs_unmount((*(int *)((v0_3 + 0x10))));
    L_C224C76:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_8;
    v0_7 = *(int *)((v0_3 + 0x7C));
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
    v0_9 = *(int *)((v0_3 + 0x74));
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
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = ((vmsfs_load_file_ex((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), v0_5)));
    goto L_C224C5E;
    L_C224BFA:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x28)));
    *(int *)((int)stk + 8) = v0_5;
    *(int *)((int)stk + 4) = (v0_3 + 0x6C);
    v0_6 = ((vmsfs_save_exec_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), (v0_3 + 0x6C), v0_5)));
    goto L_C224C5E;
    L_C224BDA:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x28)));
    *(int *)((int)stk + 8) = v0_5;
    *(int *)((int)stk + 4) = (v0_3 + 0x6C);
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
    v0_6 = ((vmsfs_fdelete((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), v0_6, v0_7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12))));
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
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = ((vmsfs_format((*(int *)((v0_3 + 0x14))), (v0_3 + 0x4C), (*(int *)((v0_3 + 0x1C))), (v0_3 + 0x6C), v0_5)));
    goto L_C224C5E;
    L_C224AF2:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_6 = ((vmsfs_mount((*(int *)((v0_3 + 0x14))), v0_5, v0_6, v0_7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28))));
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
    v0_0 = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x1C)) = *(struct mv3 *)(0xC0F54B4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x10)) = *(struct mv3 *)(0xC0F54C0); }
    v0_3 = *(int *)((v0_0 + 0x3A0));
    v0_2 = (v0_3);
    v0_1 = (0x1);
    v0_0 = (v0_0);
    if ((v0_3 == 0)) goto L_C029E54;
    if ((v0_2 == 1)) goto L_C029EE4;
    if ((v0_2 != 2)) goto L_C029E40;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_3 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_3 - 1);
    v0_2 = (0x3AC);
    if (((int)(v0_3 - 1) >= 0)) goto L_C02A002;
    *(unsigned int *)((v0_0 + 0x2C4)) = 0x32;
    *(unsigned int *)((v0_0 + 0x2CC)) = v0_1;
    *(unsigned int *)((v0_0 + 0x3A0)) = ((*(int *)((v0_0 + 0x3A0))) + 0x1);
    v0_2 = (0x3A0);
    L_C02A002:;
    return v0_2;
    L_C029E40:;
    if ((v0_2 != 3)) goto L_C029E48;
    if ((((*(int *)((v0_0 + 0x2EC))) & 12) == 0)) goto L_C029FD6;
    v0_2 = *(int *)((v0_0 + 0x4F0));
    *(unsigned int *)((v0_0 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((v0_2 << 2) + v0_2) << 2) + 0xC1F8E44))) + 0x0)));
    *(unsigned int *)((v0_0 + 0x2CC)) = v0_1;
    *(unsigned int *)((v0_0 + 0x3A0)) = ((*(int *)((v0_0 + 0x3A0))) + 0x1);
    L_C029FD6:;
    FUN_0c029646(v0_0, 0x0, 0x40);
    v0_2 = (0x220);
    w0_0 = (64.0f);
    if ((_builtin_fabsf((float)(*(short *)((v0_0 + 0x220)))) > 64.0f)) goto L_C02A002;
    v0_2 = (0x222);
    if ((_builtin_fabsf((float)(*(short *)((v0_0 + 0x222)))) > w0_0)) goto L_C02A002;
    v0_2 = ((FUN_0c02a19a(v0_0, R5, R6, R7)));
    goto L_C02A002;
    L_C029E48:;
    if ((v0_2 != 4)) goto L_C029E50;
    goto L_C029FD6;
    L_C029E50:;
    goto L_C02A002;
    L_C029EE4:;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_4 = *(int *)((v0_0 + 0x3B0));
    *(unsigned int *)((v0_0 + 0x3B0)) = (v0_4 - 1);
    v0_2 = (0x3B0);
    v0_3 = (0x0);
    if (((int)(v0_4 - 1) > 0)) goto L_C029F08;
    *(unsigned int *)((v0_0 + 0x374)) = v0_3;
    *(unsigned int *)((v0_0 + 0x3B0)) = v0_3;
    *(unsigned int *)((v0_0 + 0x3AC)) = v0_3;
    L_C029F1C:;
    v0_4 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_4 - 1);
    v0_2 = (0x3AC);
    if (((int)(v0_4 - 1) >= 0)) goto L_C02A002;
    *(unsigned int *)((v0_0 + v0_2)) = 0x78;
    *(unsigned int *)((v0_0 + (v0_2 + 0x4))) = v0_3;
    *(unsigned int *)((v0_0 + ((v0_2 + 0x4) - 16))) = ((*(int *)((v0_0 + ((v0_2 + 0x4) - 16)))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 28)) = *(struct mv4 *)(0xC0F54CC); }
    *(int *)((int)stk + 24) = (v0_3);
    *(int *)((int)stk + 20) = (v0_1);
    *(int *)((int)stk + 16) = (v0_3);
    FUN_0c062d4a(v0_0, (((int)stk + 16) + 0xC), (((int)stk + 16) + 0x28), 0xFFFFF800, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
    v0_2 = v0_3;
    *(int *)((int)stk + 12) = v0_2;
    v0_1 = v0_1;
    *(int *)((int)stk + 8) = v0_1;
    v0_3 = v0_3;
    *(int *)((int)stk + 4) = v0_3;
    FUN_0c062d4a(v0_0, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x28), 0xFFFFF800, v0_3, v0_1, v0_2);
    v0_2 = ((FUN_0c0372f8(v0_0, 0x123A9, 0x223A9, (*(int *)((v0_0 + 0x3AC))))));
    goto L_C02A002;
    L_C029F08:;
    *(volatile int *)((v0_0 + v0_2));
    *(unsigned int *)(((0x374 + v0_0) + 0x0)) = (FUN_0c0e5dc0());
    goto L_C029F1C;
    L_C029E54:;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_3 = *(int *)((v0_0 + 0x2EC));
    v0_2 = (v0_3);
    if (((v0_3 & 12) != 0)) goto L_C029E68;
    goto L_C02A002;
    L_C029E68:;
    *(unsigned int *)((v0_0 + 0x2C4)) = 0x2F;
    *(unsigned int *)((v0_0 + 0x2CC)) = v0_1;
    *(unsigned int *)((v0_0 + 0x3AC)) = 0x82;
    *(unsigned int *)((v0_0 + 0x3A0)) = ((*(int *)((v0_0 + 0x3A0))) + 0x1);
    FUN_0c062f54(v0_0, (((int)stk + 28) + 0x1C), 0x1);
    FUN_0c062f54(v0_0, (((int)stk + 28) + 0x10), 0x1);
    *(unsigned int *)((v0_0 + 0x3B0)) = 0x82;
    v0_2 = ((FUN_0c0372f8(v0_0, 0x323A9, 0x423A9, (*(int *)((v0_0 + 0x3B0))))));
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
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)(*(int *)((a4 + 0xBC))));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    t24 = *(int *)((a4 + 0xBC));
    t25 = *(signed char *)((a5 + 0x3));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + ((((unsigned char)t25 << 1) + (unsigned char)t25) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)((t1 + 0x220)) = 0x4F;
    u28 = 12.0f;
    if ((unsigned char)(*(signed char *)((a5 + 0x3))) == 1) {
        u28 = 20.0f;
    }
    *(float *)((t1 + 0x24C)) = u28;
    *(float *)((t1 + 0x250)) = ((*(float *)((t1 + 0x24C))) / (float)(unsigned short)(*(short *)((a5 + 0x8))));
    *(float *)((t1 + 0x254)) = 1.00999999f;
    *(float *)((t1 + 0x258)) = 0.00999999978f;
    *(unsigned int *)((t1 + 0x240)) = 0x5;
    *(unsigned int *)((t1 + 0x23C)) = (*(int *)((t1 + 0x240)));
    FUN_0c0dc5a0();
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = (*(float *)((t1 + 0x250)));
    nlUnitMatrix();
    nlRotateAY(((*(short *)((a4 + 0x6E))) + 0x8000));
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

    t0 = *(int *)((a4 + 0xDC));
    t1 = *(int *)((a4 + 0xE4));
    t2 = FUN_0c0e1830(0xC0C6EF4, 0x110);
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x30)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)(((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F274)); }
    *(float *)((t2 + 0x70)) = ((*(float *)((t2 + 0x70))) + (1.0f + 1.0f));
    *(unsigned int *)((t2 + 0xCC)) = t0;
    *(unsigned int *)((t2 + 0xC8)) = t1;
    *(float *)((t2 + 0xF8)) = 1.0f;
    *(float *)((t2 + 0xFC)) = 1.0f;
    *(float *)((t2 + 0x54)) = 1.0f;
    *(float *)((t2 + 0x58)) = 1.0f;
    *(float *)((t2 + 0x44)) = (1.0f + 1.0f);
    *(float *)((t2 + 0x48)) = (1.0f + 1.0f);
    *(float *)((t2 + 0x60)) = 1.0f;
    *(unsigned int *)((t2 + 0x68)) = 0x300A;
    *(unsigned int *)((t2 + 0x64)) = 0xFFFFFFFF;
    *(unsigned int *)((t2 + 0x10C)) = 0x5A;
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
    *(float *)((t1 + 0x70)) = (*(float *)(((t0 + 0x30) + 0x0)));
    *(float *)((t1 + 0x74)) = ((*(float *)(((t0 + 0x30) + 0x4))) + 15.0f);
    *(float *)((t1 + 0x78)) = (*(float *)(((t0 + 0x30) + 0x8)));
    *(float *)((t1 + 0x58)) = 1.0f;
    *(float *)((t1 + 0x5C)) = 1.0f;
    *(float *)((t1 + 0x48)) = 0.5f;
    *(float *)((t1 + 0x4C)) = 0.5f;
    *(float *)((t1 + 0x64)) = 1.0f;
    *(unsigned int *)((t1 + 0x6C)) = 0x200A;
    *(unsigned int *)((t1 + 0x68)) = 0xFFFFFFFF;
    *(unsigned int *)((t1 + 0x100)) = 0x6B;
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
    *(unsigned short *)((a4 + 0x3CC)) = (*(short *)((a4 + 0x3D4)));
    *(unsigned short *)((a4 + 0x3CE)) = (*(short *)((a4 + 0x3D8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + a4)) = *(struct mv3 *)((0x260 + a4)); }
    nlRotateAX((-(*(short *)((a4 + 0x3CC)))));
    nlRotateAY((-(*(short *)((a4 + 0x3CE)))));
    FUN_0c0dcc70((-(*(float *)((a4 + 0x254)))), (-(*(float *)((a4 + 0x258)))), (-(*(float *)((a4 + 0x25C)))));
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
    *(unsigned short *)((t1 + 0x60)) = 0x0;
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)(*(short *)0xC0FA52A);
    *(float *)((t1 + 0x74)) = (*(float *)0xC0691A4);
    *(unsigned int *)((t1 + 0xA0)) = 0x8;
    t6 = *(short *)0xC0FA524;
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
    *(unsigned int *)((t1 + 0x8C)) = a4;
    return 0x8C;
}
