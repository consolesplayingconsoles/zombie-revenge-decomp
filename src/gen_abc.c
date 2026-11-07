/* Straight-line functions with calls and guards (batch gen_abc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c4684(int);
float FUN_0c0d9e90(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int thunk_kmSetCheapShadowMode(int);
int FUN_0c06d9fc(int a4);

int FUN_0c06d9fc(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x30));
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        thunk_kmSetCheapShadowMode(0x80);
        FUN_0c0e19f2();
    }
    if ((*(int *)0xC23ED50) != (*(int *)((t0 + 0x80)))) {
        return 0x80;
    }
    t1 = *(int *)((a4 + 0x54));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
    } else {
        if ((int)(*(int *)((t0 + 0x98))) <= (int)0x1) {
            return 0x98;
        }
        *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) + 0x1);
    }
    u0 = FUN_0c0d9e90(((*(short *)((t0 + 0x62))) - (*(int *)(((t0 + 0x68) + 0x0)))));
    *(float *)((a4 + 0x48)) = ((((-u0) + 1.0f) * 13.0f) / 10.0f);
    if (((((-u0) + 1.0f) * 13.0f) / 10.0f) > 0.0f) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x34));
        nlRotateAY((*(short *)((a4 + 0x4E))));
        nlRotateAZ((*(short *)((a4 + 0x50))));
        nlScale((*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))), (*(float *)((a4 + 0x48))));
        u0 = *(float *)((a4 + 0x40));
        u1 = *(float *)((a4 + 0x44));
        u2 = *(float *)((a4 + 0x48));
        u3 = (u1 / 0.625f);
        if ((u2 / 10.0f) > (u1 / 0.625f)) {
            u3 = (u2 / 10.0f);
        }
        u4 = (u0 / 0.625f);
        if (u3 > (u0 / 0.625f)) {
            u0 = (u1 / 0.625f);
            if ((u2 / 10.0f) > (u1 / 0.625f)) {
                u0 = (u2 / 10.0f);
            }
            u4 = u0;
        }
        FUN_0c0de000(u4);
        FUN_0c0df4c0(0x2);
        FUN_0c0c4684((*(short *)((a4 + 0x52))));
        return nlPopMatrix(0x1);
    }
    return 0x48;
}
