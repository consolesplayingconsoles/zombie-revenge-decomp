/* Straight-line functions with calls and guards (batch gen_mh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e262a(int);
int FUN_0c0e631c(int, int, int);
int buCalcBackupFileSize(int, int, int);
int buMakeBackupFileImage(int, int);
int memset(int, int, int);
int FUN_0c01536e(int a4, int a5, int a6, int a7);
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_short { char p[0x54]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };



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
    (((struct o44_uint *)(a4))->v) = 0xC1EF60C;
    (((struct o48_uint *)(a4))->v) = 0xC1EF62C;
    (((struct o4C_ushort *)(a4))->v) = 0x1;
    (((struct o4E_ushort *)(a4))->v) = 0x1;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_ushort *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = a5;
    (((struct o5C_uint *)(a4))->v) = a6;
    t0 = buCalcBackupFileSize((unsigned short)((((struct o4C_short *)(a4))->v)), (unsigned short)((((struct o54_short *)(a4))->v)), a6);
    (((struct o4_uint *)0xC23EB14)->v) = ((t0 << 8) << 1);
    (((struct o0_uint *)0xC23EB14)->v) = (FUN_0c0e262a(((t0 << 8) << 1)));
    return (buMakeBackupFileImage(((((struct o0_int *)0xC23EB14)->v)), a4));
}
