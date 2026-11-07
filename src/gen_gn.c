/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
int kmiReadRegister(int);
int thunk_kmiWriteRegister(int, int);
int FUN_0c220360(Stk63 s);

int FUN_0c220360(Stk63 s)
{
    register int t47;
    register int t48;
    register int t70;

    *(unsigned int *)0xC952354 = (*(int *)(((int)&s + 248)));
    *(unsigned int *)0xC952358 = (*(int *)(((int)&s + 240)));
    *(unsigned int *)0xC95235C = (*(int *)(((int)&s + 244)));
    *(unsigned int *)0xC9525DC = (((((((((((*(int *)(((int)&s + 84))) << 1) | (*(int *)(((int)&s + 80)))) | ((*(int *)(((int)&s + 92))) << 2)) | (((*(int *)(((int)&s + 104))) << 2) << 1)) | (((*(int *)(((int)&s + 48))) << 2) << 2)) | ((((*(int *)(((int)&s + 96))) << 2) << 2) << 1)) | ((((*(int *)(((int)&s + 40))) << 2) << 2) << 2)) | ((*(int *)(((int)&s + 44))) << 7)) | ((*(int *)(((int)&s + 72))) << 8)) | (((*(int *)(((int)&s + 76))) << 8) << 1));
    *(unsigned int *)0xC9525E8 = (((*(int *)(((int)&s + 4))) & 0x7FF) | (((*(int *)(((int)&s + 0))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525E0 = (((*(int *)(((int)&s + 4))) & 0x7FF) << 16);
    *(unsigned int *)0xC9525EC = (((*(int *)(((int)&s + 8))) & 0x7FF) | (((*(int *)(((int)&s + 20))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525F0 = (((*(int *)(((int)&s + 16))) & 0x7FF) | (((*(int *)(((int)&s + 12))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525E4 = (((*(int *)(((int)&s + 116))) & 0x7FF) | (((*(int *)(((int)&s + 120))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525F4 = (((((*(int *)(((int)&s + 24))) & 0x7F) | (((*(int *)(((int)&s + 28))) & 0xF) << 8)) | (((((*(int *)(((int)&s + 32))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)(((int)&s + 36))) & 0x7F) << 22));
    *(unsigned int *)0xC952600 = ((((((((*(int *)(((int)&s + 52))) & 0x1) | (((*(int *)(((int)&s + 56))) & 0x1) << 1)) | (((*(int *)(((int)&s + 60))) & 0x1) << 2)) | ((((*(int *)(((int)&s + 64))) & 0x1) << 2) << 1)) | (((0xF & (*(int *)(((int)&s + 68)))) << 2) << 2)) | (((*(int *)(((int)&s + 108))) & 0x1) << 8)) | (((*(int *)(((int)&s + 112))) & 0x3F) << 16));
    *(unsigned int *)0xC952604 = ((*(int *)0xC952354) + (*(int *)0xC95234C));
    *(unsigned int *)0xC952608 = (((*(int *)0xC952358) + (*(int *)0xC952350)) | (((*(int *)0xC95235C) + (*(int *)0xC952350)) << 16));
    if ((*(int *)0xC9527E8) != 1) {
        if (((*(int *)0xC952300) & 2) != 0) {
            for (;;) {
                t47 = kmiReadRegister(0x10C);
                if ((t47 & 0x3FF) != 0) {
                    break;
                }
            }
            for (;;) {
                t48 = kmiReadRegister(0x10C);
                if ((t48 & 0x3FF) == 0) {
                    break;
                }
            }
        }
    }
    thunk_kmiWriteRegister(0xE8, ((*(int *)0xC952600) | 0x8));
    t70 = 0x0;
    if (((*(int *)0xC952318) & 1) != 0) {
        t70 = 0x800000;
    }
    thunk_kmiWriteRegister(0x44, t70);
    thunk_kmiWriteRegister(0x5C, 0x0);
    thunk_kmiWriteRegister(0xD0, (*(int *)0xC9525DC));
    thunk_kmiWriteRegister(0xD8, (*(int *)0xC9525EC));
    thunk_kmiWriteRegister(0xCC, (*(int *)0xC9525E4));
    thunk_kmiWriteRegister(0xD4, (*(int *)0xC9525E8));
    thunk_kmiWriteRegister(0xDC, (*(int *)0xC9525F0));
    thunk_kmiWriteRegister(0xE0, (*(int *)0xC9525F4));
    thunk_kmiWriteRegister(0xEC, (*(int *)0xC952604));
    thunk_kmiWriteRegister(0xF0, (*(int *)0xC952608));
    return (thunk_kmiWriteRegister(0xC8, (*(int *)0xC9525E0)));
}
