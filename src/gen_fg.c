/* Straight-line functions with calls and guards (batch gen_fg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cc3f8(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c05ef0c(int a4, int a5);

int FUN_0c05ef0c(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    int t12;
    int t20;
    int t21;

    t1 = *(int *)((((*(int *)((a4 + 0x350))) << 2) + 0xC2475D4));
    if ((*(int *)((a4 + 0x348))) == 0) {
        return 0x348;
    }
    t3 = *(int *)((t1 + 0x21C));
    *(unsigned int *)((t1 + 0x21C)) = (t3 - 1);
    if ((int)t3 <= 0) {
        return 0x21C;
    }
    t5 = FUN_0c0e19aa(0xC05F07C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t5);
    *(unsigned int *)((t5 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t12 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t12 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t5 + 0x1EC)) = t12;
    *(unsigned int *)(((0x1E8 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t5 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t5 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)((t5 + 0x22C)) = 0x14;
    t20 = *(int *)((a4 + 0xBC));
    t21 = *(int *)((t5 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x30)) = *(struct mv3 *)((((((((t20 << 1) + t20) << 2) << 2) << 2) + 0xC23F268) + (((t21 << 1) + t21) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x3C)) = *(struct mv3 *)((t5 + 0x30)); }
    *(unsigned int *)((t5 + 0x220)) = 0x125B;
    *(unsigned int *)((t5 + 0x23C)) = 0x100;
    *(unsigned int *)((t5 + 0x248)) = 0xC8;
    return FUN_0c0cc3f8(0xA30A9);
}
