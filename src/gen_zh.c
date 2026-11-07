/* Straight-line functions with calls and guards (batch gen_zh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037acc(int, float);
int FUN_0c037e44(int a4);

int FUN_0c037e44(int a4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)((a4 + 0x224));
    u1 = *(float *)((a4 + 0x3EC));
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    if ((u0 > u2) && ((u1 * (1.0f + 1.0f)) > u0)) {
        if ((*(float *)0xC037FA4) > (*(float *)((a4 + 0x34)))) {
            if (0.0f > (*(float *)((a4 + 0x224)))) {
                u0 = (*(float *)((a4 + 0x224)));
                u0 *= -0.25f;
                *(float *)((a4 + 0x224)) = u0;
            }
            return 0x0;
        }
        *(float *)((a4 + 0x3EC)) = 0.0f;
        *(float *)((a4 + 0x220)) = 0.0f;
        *(float *)((a4 + 0x224)) = 0.0f;
        *(float *)((a4 + 0x228)) = 0.0f;
        *(unsigned int *)((a4 + 0x3DC)) = (*(int *)((a4 + 0x3E0)));
        FUN_0c037acc(a4, 0.0f);
        u0 = *(float *)0xC037FAC;
        *(unsigned int *)((a4 + 0x22C)) = (int)((float)(*(int *)((a4 + 0x22C))) * u0);
        *(unsigned int *)((a4 + 0x230)) = (int)((float)(*(int *)((a4 + 0x230))) * u0);
        *(unsigned int *)((a4 + 0x234)) = (int)((float)(*(int *)((a4 + 0x234))) * u0);
        return 0x1;
    }
    if (0.0f > (*(float *)((a4 + 0x224)))) {
        u0 = (*(float *)((a4 + 0x224)));
        u0 *= -0.25f;
        *(float *)((a4 + 0x224)) = u0;
    }
    return 0x0;
}
