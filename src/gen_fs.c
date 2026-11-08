/* Straight-line functions with calls and guards (batch gen_fs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0b75e8(void);
int FUN_0c0b8590(void);
int send_message_in_current_mode(int);
int syIntAdrChk_dumpline(int, int, int);
int syIntAdrChk_finish(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_init(void);
int syIntAdrChk_printh(int);
int syIntChkDump(int a4, int a5);
int BL_Reset(void);
struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };


int syIntChkDump(int a4, int a5)
{
    int t0;
    int t16;
    int t56;
    int t57;
    int t73;
    int t76;
    int stk[12];

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = *(short *)(((int)stk + 4));
    if (((unsigned short)t0 != 0x300) && (((unsigned short)t0 != 0x340) && (((unsigned short)t0 != 0x380) && ((unsigned short)t0 != 0x3C0)))) {
        return (unsigned short)t0;
    }
    *(unsigned int *)0xC98F1B4 = a5;
    *(unsigned int *)(((int)stk + 12)) = (syIntAdrChk_init());
    send_message_in_current_mode(0xC2389E4);
    syIntAdrChk_dumpline(0xC238A08, 0xA, 0x8);
    syIntAdrChk_dumpline(0xC238A14, 0x12, 0x8);
    syIntAdrChk_dumpline(0xC238A20, 0x1A, 0x8);
    syIntAdrChk_dumpline(0xC238A2C, 0x22, 0x8);
    send_message_in_current_mode(0xC238A38);
    syIntAdrChk_printh(((((struct oA8_int *)((*(int *)0xC98F1B4)))->v)));
    send_message_in_current_mode(0xC238A40);
    syIntAdrChk_printh(((((struct oAC_int *)((*(int *)0xC98F1B4)))->v)));
    syIntAdrChk_dumpline(0xC238A4C, 0x2D, 0x8);
    t16 = *(int *)0xC98F1B4;
    *(unsigned int *)(((int)stk + 8)) = ((((struct oF0_int *)(t16))->v));
    (((struct oF0_uint *)(t16))->v) = (*(int *)(((*(int *)0xC98F1B4) + 0x4)));
    syIntAdrChk_dumpline(0xC238A5C, 0x35, 0x8);
    (((struct oF0_uint *)((*(int *)0xC98F1B4)))->v) = (*(int *)(((int)stk + 8)));
    syIntAdrChk_dumpline(0xC238A68, 0x2, 0x8);
    send_message_in_current_mode(0xC238A78);
    syIntAdrChk_printh(((((struct oF0_int *)((*(int *)0xC98F1B4)))->v)));
    send_message_in_current_mode(0xC238A80);
    syIntAdrChk_printh(((((struct oF4_int *)((*(int *)0xC98F1B4)))->v)));
    send_message_in_current_mode(0xC238A88);
    syIntAdrChk_printh(((((struct oF8_int *)((*(int *)0xC98F1B4)))->v)));
    send_message_in_current_mode(0xC238A90);
    syIntAdrChk_printh(((((struct oFC_int *)((*(int *)0xC98F1B4)))->v)));
    send_message_in_current_mode(0xC238A98);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC98F1B4) + 0x0))));
    send_message_in_current_mode(0xC238AA0);
    syIntAdrChk_printh(((((struct o100_int *)((*(int *)0xC98F1B4)))->v)));
    send_message_in_current_mode(0xC238AA8);
    syIntAdrChk_printh(((((struct o104_int *)((*(int *)0xC98F1B4)))->v)));
    send_message_in_current_mode(0xC238AB0);
    syIntAdrChk_printh(((((struct o108_int *)((*(int *)0xC98F1B4)))->v)));
    t56 = 0x0;
    for (;;) {
        t57 = ((~(((~t56) + 0x1) & 0x3)) + 0x1);
        if ((int)t56 >= 0) {
            t57 = (t56 & 0x3);
        }
        if (t57 == 0) {
            send_message_in_current_mode(0xC238AB8);
        }
        syIntAdrChk_printh((*(int *)((((t56 << 2) + 0xC2388D0) + 0x0))));
        send_message_in_current_mode(0xC238ABC);
        syIntAdrChk_printh((*(int *)(((*(int *)((((t56 << 2) + 0xC2388D0) + 0x0))) + 0x0))));
        send_message_in_current_mode(0xC238AC0);
        t56 = (t56 + 0x1);
        if ((int)t56 >= (int)0x45) {
            break;
        }
    }
    send_message_in_current_mode(0xC238AB8);
    t73 = 0xC238AC4;
    if ((*(int *)(((int)stk + 12))) != 0) {
        
        t73 = 0xC238B10;
    }
    send_message_in_current_mode(t73);
    for (;;) {
        t76 = syIntAdrChk_getchar();
        if ((signed char)t76 == 13) {
            break;
        }
    }
    *(unsigned int *)0xFF000024 = (unsigned short)(*(short *)(((int)stk + 4)));
    return syIntAdrChk_finish();
}

int BL_Reset(void)
{
    FUN_0c0b75e8();
    return FUN_0c0b8590();
}
