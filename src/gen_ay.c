/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c07e24e(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0e5dc0(void);
int FUN_0c22fa7e(int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int thunk_kmiWriteRegister(int, int);
int FUN_0c03bd28(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int kmiInitializeDevice(void);
int FUN_0c0aee08(int a4, float f4);

int FUN_0c03bd28(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    int t4;
    int t21;
    int t27;
    int t29;
    int t35;
    int t38;
    int t58;
    int t69;
    int t83;
    int t97;
    int t102;
    int t116;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F7;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F7 = f7;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(volatile int *)((R4 + 0x304));
    *(volatile int *)((R4 + 0x308));
    t4 = (int)(*(int *)((R4 + 0x55C))) <= 0;
    R11 = ((FUN_0c0e5dc0()));
    R12 = (0x0);
    R14 = (R4);
    if (t4) goto L_C03BD8C;
    if (((int)R4 <= 0)) goto L_C03BD8C;
    R4 = (R12);
    L_C03BD8E:;
    R0 = (0x57C);
    if (((int)(*(int *)((R14 + 0x57C))) <= (int)R7)) goto L_C03BD98;
    *(unsigned int *)((R14 + R0)) = R7;
    L_C03BD98:;
    if ((R4 != 0)) goto L_C03BDF4;
    if (((*(int *)((R14 + 0x4C8))) == 10)) goto L_C03BDE0;
    R0 = (0x500);
    if (((int)(*(int *)((R14 + 0x500))) < (int)0x6)) goto L_C03BDBA;
    if (((int)(*(int *)((R14 + R0))) <= (int)0xD)) goto L_C03BDE0;
    L_C03BDBA:;
    t21 = *(int *)((R14 + 0x578));
    R5 = (t21);
    if ((t21 == 4)) goto L_C03BDD4;
    if ((R5 == 5)) goto L_C03BDD4;
    if (!(((*(int *)((R14 + 0x48C))) != 51))) goto L_C03BDD4;
    *(unsigned int *)((R14 + 0x55C)) = R12;
    goto L_C03BDEE;
    L_C03BDD4:;
    t27 = *(int *)((R14 + 0x55C));
    *(unsigned int *)((R14 + 0x55C)) = (t27 - 1);
    if (((int)(t27 - 1) <= 0)) goto L_C03BDEE;
    L_C03BDE0:;
    *(unsigned int *)((R14 + 0x560)) = R12;
    *(unsigned int *)((R14 + 0x57C)) = R12;
    L_C03BE74:;
    t29 = *(int *)((R14 + 0x560));
    R0 = (0x560);
    R4 = (t29);
    if (!((t29 != 0))) goto L_C03BFEA;
    R0 = (R4);
    if ((R4 != 10)) goto L_C03BE8C;
    goto L_C03BFEA;
    L_C03BFEA:;
    return R0;
    L_C03BE8C:;
    t35 = *(int *)((R14 + 0x48C));
    R0 = (t35);
    if ((t35 == 51)) goto L_C03BF66;
    t38 = *(int *)((R14 + 0x4C8));
    R4 = (t38);
    if ((t38 != 2)) goto L_C03BEA6;
    if (((*(int *)((R14 + 0x4CC))) == 0)) goto L_C03BEF8;
    L_C03BEA6:;
    if ((R4 != 9)) goto L_C03BEB6;
    if (((*(int *)((R14 + 0x210))) == 67)) goto L_C03BEF8;
    L_C03BEB6:;
    if ((R4 == 4)) goto L_C03BEF8;
    if ((R4 == 7)) goto L_C03BEF8;
    if ((R4 == 12)) goto L_C03BEF8;
    if ((R4 == 10)) goto L_C03BEF8;
    if ((R4 == 13)) goto L_C03BEF8;
    if ((R4 == 8)) goto L_C03BEF8;
    R0 = (0x500);
    if (((int)(*(int *)((R14 + 0x500))) < (int)0x6)) goto L_C03BEFE;
    if (((int)(*(int *)((R14 + R0))) > (int)0xD)) goto L_C03BEFE;
    L_C03BEF8:;
    FUN_0c0355f8(R14);
    L_C03BEFE:;
    t58 = *(int *)((R14 + 0x4C8));
    R0 = (t58);
    R4 = (t58);
    if ((t58 == 5)) goto L_C03BF66;
    R0 = (R4);
    if ((R4 == 6)) goto L_C03BF66;
    FUN_0c039034(R14);
    FUN_0c039110(R14);
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C03BF2C;
    *(unsigned int *)((R14 + 0x5A4)) = ((*(int *)((R14 + 0x5A0))) << 1);
    L_C03BF2C:;
    t69 = *(int *)((R14 + 0x560));
    R0 = (t69);
    if ((t69 == 11)) goto L_C03BF66;
    R4 = (R14);
    R5 = (0x1);
    R0 = ((FUN_0c0356f4(R4, R5)));
    L_C03BF66:;
    if ((a8 == 0)) goto L_C03BFEA;
    R9 = ((((a8 - 1) * 0x34) + 0xC1F02E8));
    if ((!((float)(*(int *)((R14 + 0x56C))) > (*(float *)((((R11 << 2) + (((a8 - 1) * 0x34) + 0xC1F02E8)) + 0x0)))))) goto L_C03BFA2;
    if (((int)R11 <= (int)0x1)) goto L_C03BFA2;
    *(unsigned int *)((R14 + 0x560)) = 0x9;
    *(unsigned int *)((R14 + 0x56C)) = R12;
    R0 = (0x56C);
    goto L_C03BFEA;
    L_C03BFA2:;
    t83 = *(int *)((R14 + 0x560));
    R0 = (t83);
    if ((t83 != 1)) goto L_C03BFEA;
    R0 = (0x5A0);
    if (((*(int *)((R14 + 0x5A0))) != 0)) goto L_C03BFEA;
    R0 = (0x304);
    if (((int)(*(int *)((R14 + 0x304))) <= 0)) goto L_C03BFEA;
    R10 = ((R9 + 0x30));
    R13 = ((R9 + 0x2C));
    R8 = (0x8);
    L_C03BFC4:;
    if (((int)R11 > (int)(*(short *)((R13 + 0x0))))) goto L_C03BFDE;
    t97 = FUN_0c0da2e0();
    R0 = ((t97 & 0xF));
    if (((int)(t97 & 0xF) >= (int)(*(short *)((R10 + 0x0))))) goto L_C03BFDE;
    *(unsigned int *)((R14 + 0x560)) = R8;
    R0 = (0x560);
    goto L_C03BFEA;
    L_C03BFDE:;
    t102 = (unsigned int)(R13 + 0x2) < (unsigned int)(R9 + 0x30);
    R10 = ((R10 + 0x2));
    R13 = ((R13 + 0x2));
    if (t102) goto L_C03BFC4;
    goto L_C03BFEA;
    L_C03BDEE:;
    *(unsigned int *)((R14 + 0x57C)) = 0x2;
    L_C03BDF4:;
    if (((int)R6 <= 0)) goto L_C03BE10;
    if ((R4 == 0)) goto L_C03BE10;
    if (((int)(*(int *)((R14 + 0x310))) < (int)(R6 + (*(int *)((R14 + 0x4C0)))))) goto L_C03BE10;
    *(unsigned int *)((R14 + 0x57C)) = 0x3;
    L_C03BE10:;
    if (((int)(*(int *)((R14 + 0x304))) > 0)) goto L_C03BE20;
    if (!(((*(int *)((R14 + 0x57C))) != 4))) goto L_C03BE20;
    R4 = (((*(int *)((R14 + 0x57C))) + 0x5));
    goto L_C03BE40;
    L_C03BE20:;
    R4 = ((*(int *)((R14 + 0x57C))));
    L_C03BE40:;
    t116 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)(((0x560 + R14) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x4C4 + R14) + 0x0))) << 1) + ((*(int *)((((*(int *)(((0x578 + R14) + 0x0))) << 2) + (*(int *)((0xC1F8E40 + (((t116 << 2) + t116) << 2))))))) + (R4 * 0xE)))));
    goto L_C03BE74;
    L_C03BD8C:;
    R4 = (0x1);
    goto L_C03BD8E;
}

int kmiInitializeDevice(void)
{
    int t1;
    int t4;
    int t17;
    int t57;
    int t58;
    int t77;
    int t80;
    int t81;
    int t14;
    int t9;
    int t36;
    int t32;
    int t28;
    int t25;
    int stk[8];

    *(unsigned int *)0xC952610 = 0x0;
    *(unsigned int *)(((int)stk + 8)) = (kmiReadRegister(0x0));
    t1 = kmiReadRegister(0x4);
    *(unsigned int *)0xC9522FC = 0x5;
    if ((*(int *)(((int)stk + 8))) != 0x17FD11DB) {
        *(unsigned int *)0xC9522FC = 0x5;
        t14 = 0xDD18957;
    } else {
        if (t1 == 1) {
            *(unsigned int *)0xC9522FC = 0x5;
            t9 = 0xDD18957;
        } else {
            t4 = 0xDD18957;
            if ((unsigned int)t1 >= (unsigned int)0x11) {
                *(unsigned int *)0xC9522FC = 0x6;
                *(unsigned int *)0xC952610 = 0x800408;
                t4 = 0x15D1C951;
            }
            t9 = t4;
        }
        t14 = t9;
    }
    t17 = *(int *)0xA05F689C;
    if (t17 != 0) {
        if (t17 != 1) {
            if (t17 != 2) {
                if ((t17 != 4) && ((t17 != 5) && (t17 != 6))) {
                    if (t17 != 8) {
                        if (t17 != 9) {
                            *(unsigned int *)0xC952300 = 0x8F;
                        } else {
                            *(unsigned int *)0xC952300 = 0xF;
                        }
                    } else {
                        *(unsigned int *)0xC952300 = 0x1F;
                    }
                    t25 = 0x101;
                } else {
                    *(unsigned int *)0xC952300 = 0x7F;
                    t25 = 0x10101;
                }
                t28 = t25;
            } else {
                *(unsigned int *)0xC952300 = 0x3;
                t28 = 0x101;
            }
            t32 = t28;
        } else {
            *(unsigned int *)0xC952300 = 0x1;
            t32 = 0x0;
        }
        t36 = t32;
    } else {
        *(unsigned int *)0xC952300 = 0x0;
        t36 = 0x0;
    }
    kmiWriteRegister(0xA8, t14);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    if (((*(int *)0xC952318) & 1) != 0) {
        thunk_kmiWriteRegister(0x44, 0x800000);
    } else {
        thunk_kmiWriteRegister(0x44, 0x0);
    }
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t57 = 0x110;
    t58 = 0x92039;
    if ((*(int *)0xC9522FC) == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t57 = 0x98;
        t58 = (*(int *)0xC952610);
    }
    kmiWriteRegister(t57, t58);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t36);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    if ((*(int *)0xC9522FC) != 6) {
        for (;;) {
        }
    }
    t77 = 0x7DF77;
    if ((*(int *)0xC9522FC) == 6) {
        t77 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t77);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t80 = 0x0;
    t81 = 0xA5000000;
    for (;;) {
        FUN_0c22fa7e(t81, ((int)stk + 4), 0x4);
        t80 = (t80 + 0x1);
        t81 = (t81 + 0x4);
        if ((int)t80 >= (int)0x200000) {
            break;
        }
    }
    return 0x1;
}

int FUN_0c0aee08(int a4, float f4)
{
    int t0;
    int t29;
    int t33;
    int t41;
    int stk[6];

    t0 = *(int *)((a4 + 0x400));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 == 3) {
                *(unsigned int *)((a4 + 0x430)) = ((*(int *)((a4 + 0x430))) + (*(int *)(((0x434 + a4) + 0x0))));
                *(float *)((a4 + 0x254)) = ((*(float *)((a4 + 0x350))) - ((FUN_0c0da410((*(int *)((a4 + 0x430))))) * (*(float *)((a4 + 0x338)))));
                *(float *)((a4 + 0x258)) = ((*(float *)((a4 + 0x354))) - ((FUN_0c0da410((*(int *)((a4 + 0x430))))) * (*(float *)((a4 + 0x33C)))));
                *(float *)((a4 + 0x25C)) = ((*(float *)((a4 + 0x358))) - ((FUN_0c0da410((*(int *)((a4 + 0x430))))) * (*(float *)((a4 + 0x340)))));
                *(float *)((a4 + 0x278)) = ((*(float *)((a4 + 0x35C))) - ((FUN_0c0da410((*(int *)((a4 + 0x430))))) * (*(float *)((a4 + 0x344)))));
                *(float *)((a4 + 0x27C)) = ((*(float *)((a4 + 0x360))) - ((FUN_0c0da410((*(int *)((a4 + 0x430))))) * (*(float *)((a4 + 0x348)))));
                *(float *)((a4 + 0x280)) = ((*(float *)((a4 + 0x364))) - ((FUN_0c0da410((*(int *)((a4 + 0x430))))) * (*(float *)((a4 + 0x34C)))));
                t29 = *(int *)((a4 + 0x3FC));
                *(unsigned int *)((a4 + 0x3FC)) = (t29 - 1);
                if ((int)(t29 - 1) <= 0) {
                    *(unsigned int *)((a4 + 0x400)) = 0x4;
                }
                t33 = *(int *)0xC24FA6C;
                if ((*(int *)((a4 + 0x424))) != (*(int *)((t33 + 0x78)))) {
                    *(unsigned int *)((a4 + 0x424)) = (*(int *)((t33 + 0x78)));
                    *(unsigned int *)((a4 + 0x400)) = 0x2;
                }
            } else {
                if (t0 == 4) {
                    t41 = *(int *)0xC24FA6C;
                    if ((*(int *)((a4 + 0x424))) != (*(int *)((t41 + 0x78)))) {
                        *(unsigned int *)((a4 + 0x424)) = (*(int *)((t41 + 0x78)));
                        *(unsigned int *)((a4 + 0x400)) = 0x2;
                    }
                }
            }
        } else {
            *(volatile int *)((a4 + 0x424));
            *(unsigned int *)((a4 + 0x3FC)) = 0x1E;
            *(unsigned int *)((a4 + 0x430)) = 0x4000;
            *(volatile int *)((a4 + 0x3FC));
            *(unsigned int *)(((0x434 + a4) + 0x0)) = (FUN_0c0e5dc0());
            *(float *)((a4 + 0x338)) = (((*(float *)((a4 + 0x0))) - (*(float *)((a4 + 0x254)))) * 0.5f);
            *(float *)((a4 + 0x33C)) = (((*(float *)((a4 + 0x4))) - (*(float *)((a4 + 0x258)))) * 0.5f);
            *(float *)((a4 + 0x340)) = (((*(float *)((a4 + 0x8))) - (*(float *)((a4 + 0x25C)))) * 0.5f);
            *(float *)((a4 + 0x344)) = (((*(float *)((a4 + 0xC))) - (*(float *)((a4 + 0x278)))) * 0.5f);
            *(float *)((a4 + 0x348)) = (((*(float *)((a4 + 0x10))) - (*(float *)((a4 + 0x27C)))) * 0.5f);
            *(float *)((a4 + 0x34C)) = (((*(float *)((a4 + 0x14))) - (*(float *)((a4 + 0x280)))) * 0.5f);
            *(float *)((a4 + 0x350)) = ((*(float *)((a4 + 0x254))) + (*(float *)((a4 + 0x338))));
            *(float *)((a4 + 0x354)) = ((*(float *)((a4 + 0x258))) + (*(float *)((a4 + 0x33C))));
            *(float *)((a4 + 0x358)) = ((*(float *)((a4 + 0x25C))) + (*(float *)((a4 + 0x340))));
            *(float *)((a4 + 0x35C)) = ((*(float *)((a4 + 0x278))) + (*(float *)((a4 + 0x344))));
            *(float *)((a4 + 0x360)) = ((*(float *)((a4 + 0x27C))) + (*(float *)((a4 + 0x348))));
            *(float *)((a4 + 0x364)) = ((*(float *)((a4 + 0x280))) + (*(float *)((a4 + 0x34C))));
            *(unsigned int *)((a4 + 0x400)) = 0x3;
        }
    } else {
        if ((*(int *)(((*(int *)0xC24FA6C) + 0x80))) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x400)) = 0x2;
            *(unsigned int *)((a4 + 0x424)) = 0x0;
        }
    }
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x254))) - (*(float *)((a4 + 0x278)))), ((*(float *)((a4 + 0x258))) - (*(float *)((a4 + 0x27C)))), ((*(float *)((a4 + 0x25C))) - (*(float *)((a4 + 0x280)))));
    *(unsigned short *)((a4 + 0x3CC)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((a4 + 0x3CE)) = (*(int *)(((int)stk + 8)));
    return (FUN_0c07e24e());
}
