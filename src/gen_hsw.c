/* FUN_0c031014, written by hand: the state switch on the word at +0x4F8 (a braf jump table the generator does not write). States 3
   and 9 call FUN_0c02a416; 3, when it answers, clears the state and tail-calls the handler the table at 0C1F8E3C holds for the word
   at +0x4F0 (20-byte entries); 9 moves to state 10. Every other state, and anything from 14 up, returns. */
int FUN_0c02a416(int);

void FUN_0c031014(int a4)
{
    unsigned int s = *(unsigned int *)(a4 + 0x4F8);

    if (s >= 14)
        return;
    switch (s) {
    case 3:
        if (FUN_0c02a416(a4) == 0)
            return;
        *(int *)(a4 + 0x554) = 1;
        *(int *)(a4 + 0x4F8) = 0;
        ((void (*)(int))(*(int *)(0xC1F8E3C + *(int *)(a4 + 0x4F0) * 20)))(a4);
        return;
    case 9:
        if (FUN_0c02a416(a4) != 0)
            *(int *)(a4 + 0x4F8) = 10;
        return;
    }
}
