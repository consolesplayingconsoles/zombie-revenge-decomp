/* Straight-line functions with calls and guards (batch gen_adz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
void FUN_0c05faf6(int a4, int a5);

void FUN_0c05faf6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05FBFE, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t1 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t1 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t0 + 0x1EC)) = t1;
    *(unsigned int *)((t0 + 0x1EC)) = ((*(int *)((t0 + 0x1EC))) | ((int)0x1 << (int)(*(int *)(((0xD0 + a4) + 0x0)))));
    *(unsigned int *)(((0x1E8 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t0 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t0) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t0 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t0) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    *(unsigned int *)((t0 + 0x220)) = 0x9C;
    t1 = *(int *)((a4 + 0xBC));
    t2 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
}
