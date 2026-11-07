/* Straight-line functions with calls and guards (batch gen_sa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int copy_device(void);
int kdRecvFrame(void);
extern int mpdrv_frame_send();
int kdSendFrame(int a4, int a5);

int kdSendFrame(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    if ((*(int *)0xC9542AC) == 0) {
    } else {
        *(unsigned int *)0xC9542C0 = ((*(int *)0xC9542C4) - 1);
        *(unsigned int *)0xC9542C4 = 0x0;
        if ((*(int *)0xC9542BC) != 0) {
            *(unsigned int *)0xC9542C8 = ((*(int *)0xA05F80C4) & 0x3FF);
            *(unsigned int *)0xC9542CC = ((short)((unsigned int)(*(int *)0xA05F80C4) >> 16) & 0x3FF);
        }
        *(unsigned int *)0xC9542BC = 0x0;
        if ((*(int *)0xC9542B8) != 0) {
            *(unsigned int *)0xA05F8040 = (*(int *)0xC9542B4);
            *(unsigned int *)0xA05F80E8 = ((*(int *)0xA05F80E8) & 0xFFFFFFF7);
            *(unsigned int *)0xC9542B8 = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                *(unsigned int *)0xC954048 = ((*(int *)0xC954048) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFE, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                *(unsigned int *)0xC95404C = ((*(int *)0xC95404C) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFD, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                *(unsigned int *)0xC954050 = ((*(int *)0xC954050) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFC, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                *(unsigned int *)0xC954054 = ((*(int *)0xC954054) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFB, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t1 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t1 >= 0) {
                copy_device();
            } else {
                if ((*(int *)0xC954064) != 0) {
                    t2 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFA, (*(int *)0xC954034), t1);
                }
            }
            t2 = t1;
        } else {
            t1 = ((int (*)(int))(mpdrv_frame_send))(0xC9542B8);
            if ((int)t1 >= 0) {
                *(unsigned int *)0xC9542DC = 0x0;
                *(unsigned short *)(((((*(int *)0xC9542B0) << 1) + 0xC954060) + 0x0)) = 0x0;
                *(unsigned short *)(((((*(int *)0xC9542B0) << 1) + 0xC954058) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                *(unsigned int *)0xC95402C = ((*(int *)0xC95402C) + 0x1);
            } else {
                kdRecvFrame();
                *(unsigned int *)0xC95403C = ((*(int *)0xC95403C) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t3 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFF9, (*(int *)0xC954034), t1);
                }
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}
