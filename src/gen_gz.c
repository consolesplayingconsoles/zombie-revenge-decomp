/* Straight-line functions with calls and guards (batch gen_gz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c058fa0(int);
int FUN_0c0cee6a(int, float);
int FUN_0c0db0a0(int, int);
int FUN_0c0e2582(int, int);
int FUN_0c0e6248(int);
int nlPrintf(int, ...);
int FUN_0c0e262a(int a4);
int FUN_0c0cf16a(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0e262a(int a4)
{
    int t0;

    *(unsigned int *)0xC94C7E8 = a4;
    t0 = 0xC52315C;
    for (;;) {
        t0 = ((*(int *)((t0 + 0x8))) << 2);
        t0 = (t0 + 0xC52315C);
        if ((int)(-(*(int *)((t0 + 0x0)))) >= (int)((((((a4 + 0x7) >> 1) >> 1) >> 1) << 1) + 0x4)) {
            break;
        }
        if ((*(int *)((t0 + 0x8))) == 0) {
            FUN_0c0db0a0(0x10, 0x17);
            nlPrintf(0xC1EA9B8);
            for (;;) {
            }
        }
    }
    return FUN_0c0e2582(t0, ((((((a4 + 0x7) >> 1) >> 1) >> 1) << 1) + 0x4));
}

int FUN_0c0cf16a(int a4, int a5, int a6, int a7, int a8)
{
    *(unsigned short *)0xC20B30E = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC20B2FC) = *(struct mv3 *)(a7); }
    if (a4 == 2) {
        FUN_0c0e6248(a4);
    }
    *(unsigned int *)0xC20B314 = a5;
    *(unsigned int *)0xC20B318 = a6;
    FUN_0c058fa0(0xC20B2FC);
    return FUN_0c0cee6a(a7, (*(float *)0xC0CF23C));
}
