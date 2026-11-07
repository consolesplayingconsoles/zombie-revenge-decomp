/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetStat(int);
int ADXT_StartAfs(int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e4428(int);
void FUN_0c0cc3f8(int a4, int a5, int a6, int a7);

void FUN_0c0cc3f8(int a4, int a5, int a6, int a7)
{
    int b[3];
    int t2;
    int k;
    int m;
    int s;
    int i;

    if (a4 == 0) {
        return;
    }
    t2 = *(int *)0xC23A180;
    if (t2 == 3 || (t2 == 1 && *(int *)0xC522924 == 0)) {
        return;
    }
    if (a4 < 0) {
        _builtin_trapa(129);
        return;
    }
    if (a4 >= 0x12F) {
        *(int *)0xC5229AC = a4;
        if ((0xF & a4) == 0) {
            FUN_0c0e40ec(8, a4, 0);
            return;
        }
        FUN_0c0e4428(a4);
        k = a4 == 0x920A9 ? 0x1B : a4 == 0x328A9 ? 0x1C : a4 == 0x128A9 ? 0x1E : 0;
        if (k != 0) {
            FUN_0c0cc054(0, k);
            FUN_0c0cc054(1, k);
        }
        return;
    }
    if (a4 < 0x16) {
        ADXT_StartAfs(*(int *)0xC5158E4, 1, a4);
        return;
    }
    m = a4 < 0x53 ? 1 : a4 < 0x79 ? 2 : a4 < 0xA8 ? 4 : 8;
    for (i = 0; i < 3; i++) {
        s = ADXT_GetStat(((int *)0xC5158E8)[i]);
        if (s == 5 || s == 0) {
            *(int *)0xC522928 &= ~((int *)0xC52292C)[i];
            ((int *)0xC52292C)[i] = 0;
        }
    }
    for (i = 0; i < 3; i++) {
        b[i] = ((int *)0xC52292C)[i];
    }
    k = (*(int *)0xC522928 & m & 7) != 0 ? m : 0;
    if (k == 0 && (b[0] & b[1] & b[2]) != 0) {
        return;
    }
    for (i = 0; i < 3; i++) {
        if (b[i] == k) {
            ((int *)0xC5229B0)[i] = a4;
            ADXT_StartAfs(((int *)0xC5158E8)[i], 1, a4);
            ((int *)0xC52292C)[i] = m;
            break;
        }
    }
    *(int *)0xC522928 |= m;
}
