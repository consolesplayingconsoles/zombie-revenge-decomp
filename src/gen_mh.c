/* Straight-line functions with calls and guards (batch gen_mh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e262a(int);
int FUN_0c0e631c(int, int, int);
int buCalcBackupFileSize(int, int, int);
int buMakeBackupFileImage(int, int);
int memset(int, int, int);
int FUN_0c01536e(int a4, int a5, int a6, int a7);

int FUN_0c01536e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = a7;
    if ((int)a7 >= (int)0x2) {
        t3 = 0x2;
        if ((int)a7 >= (int)0x6) {
            t3 = 0x3;
        }
        t2 = t3;
    }
    t3 = *(int *)(((t2 << 2) + 0xC1EF4F0));
    memset(a4, 0x0, 0x60);
    for (t0 = 0; ; t0++) { *(unsigned char *)(a4 + t0) = *(unsigned char *)(0xC0F4CB8 + t0); if (*(unsigned char *)(0xC0F4CB8 + t0) == 0) break; }
    for (t1 = 0; ; t1++) { *(unsigned char *)((a4 + 0x12) + t1) = *(unsigned char *)(t3 + t1); if (*(unsigned char *)(t3 + t1) == 0) break; }
    FUN_0c0e631c((a4 + 0x34), (0xC1EF4AF + ((t2 << 2) << 2)), 0x10);
    *(unsigned int *)((a4 + 0x44)) = 0xC1EF60C;
    *(unsigned int *)((a4 + 0x48)) = 0xC1EF62C;
    *(unsigned short *)((a4 + 0x4C)) = 0x1;
    *(unsigned short *)((a4 + 0x4E)) = 0x1;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned short *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = a5;
    *(unsigned int *)((a4 + 0x5C)) = a6;
    t0 = buCalcBackupFileSize((unsigned short)(*(short *)((a4 + 0x4C))), (unsigned short)(*(short *)((a4 + 0x54))), a6);
    *(unsigned int *)0xC23EB18 = ((t0 << 8) << 1);
    *(unsigned int *)0xC23EB14 = (FUN_0c0e262a(((t0 << 8) << 1)));
    return (buMakeBackupFileImage((*(int *)0xC23EB14), a4));
}
