/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
int kmiReadRegister(int);
int thunk_kmiWriteRegister(int, int);
int FUN_0c220360(Stk63 s);

int FUN_0c220360(Stk63 s)
{
    int stk[72];
    register int t47;
    register int t48;
    register int t70;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    stk[5] = s.w[4];
    stk[6] = s.w[5];
    stk[7] = s.w[6];
    stk[8] = s.w[7];
    stk[9] = s.w[8];
    stk[10] = s.w[9];
    stk[11] = s.w[10];
    stk[12] = s.w[11];
    stk[13] = s.w[12];
    stk[14] = s.w[13];
    stk[15] = s.w[14];
    stk[16] = s.w[15];
    stk[17] = s.w[16];
    stk[18] = s.w[17];
    stk[19] = s.w[18];
    stk[20] = s.w[19];
    stk[21] = s.w[20];
    stk[22] = s.w[21];
    stk[23] = s.w[22];
    stk[24] = s.w[23];
    stk[25] = s.w[24];
    stk[26] = s.w[25];
    stk[27] = s.w[26];
    stk[28] = s.w[27];
    stk[29] = s.w[28];
    stk[30] = s.w[29];
    stk[31] = s.w[30];
    stk[32] = s.w[31];
    stk[33] = s.w[32];
    stk[34] = s.w[33];
    stk[35] = s.w[34];
    stk[36] = s.w[35];
    stk[37] = s.w[36];
    stk[38] = s.w[37];
    stk[39] = s.w[38];
    stk[40] = s.w[39];
    stk[41] = s.w[40];
    stk[42] = s.w[41];
    stk[43] = s.w[42];
    stk[44] = s.w[43];
    stk[45] = s.w[44];
    stk[46] = s.w[45];
    stk[47] = s.w[46];
    stk[48] = s.w[47];
    stk[49] = s.w[48];
    stk[50] = s.w[49];
    stk[51] = s.w[50];
    stk[52] = s.w[51];
    stk[53] = s.w[52];
    stk[54] = s.w[53];
    stk[55] = s.w[54];
    stk[56] = s.w[55];
    stk[57] = s.w[56];
    stk[58] = s.w[57];
    stk[59] = s.w[58];
    stk[60] = s.w[59];
    stk[61] = s.w[60];
    stk[62] = s.w[61];
    stk[63] = s.w[62];
    *(unsigned int *)0xC952354 = (*(int *)(((((int)stk + 4) + 0x10) + 0xF8)));
    *(unsigned int *)0xC952358 = (*(int *)(((((int)stk + 4) + 0x10) + 0xF0)));
    *(unsigned int *)0xC95235C = (*(int *)(((((int)stk + 4) + 0x10) + 0xF4)));
    *(unsigned int *)0xC9525DC = (((((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x54))) << 1) | (*(int *)(((((int)stk + 4) + 0x10) + 0x50)))) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x5C))) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x68))) << 2) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x30))) << 2) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x60))) << 2) << 2) << 1)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x28))) << 2) << 2) << 2)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x2C))) << 7)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x48))) << 8)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x4C))) << 8) << 1));
    *(unsigned int *)0xC9525E8 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525E0 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) << 16);
    *(unsigned int *)0xC9525EC = (((*(int *)(((((int)stk + 4) + 0x10) + 0x8))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x14))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525F0 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x10))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0xC))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525E4 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x74))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x78))) & 0x7FF) << 16));
    *(unsigned int *)0xC9525F4 = (((((*(int *)(((((int)stk + 4) + 0x10) + 0x18))) & 0x7F) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x1C))) & 0xF) << 8)) | (((((*(int *)(((((int)stk + 4) + 0x10) + 0x20))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x24))) & 0x7F) << 22));
    *(unsigned int *)0xC952600 = ((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x34))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x38))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x3C))) & 0x1) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x40))) & 0x1) << 2) << 1)) | (((0xF & (*(int *)(((((int)stk + 4) + 0x10) + 0x44)))) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x6C))) & 0x1) << 8)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x70))) & 0x3F) << 16));
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
