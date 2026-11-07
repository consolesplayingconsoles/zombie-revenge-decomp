/* Straight-line functions with calls and guards (batch gen_kb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c091be4(int a4);
struct o48_short { char p[0x48]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };


int FUN_0c091be4(int a4)
{
    register float u8;
    register int t14;
    register int t15;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX(((((struct o48_short *)(a4))->v)));
    nlRotateAZ(((((struct o4C_short *)(a4))->v)));
    nlRotateAY(((((struct o4A_short *)(a4))->v)));
    u8 = *(float *)0xC091CE4;
    nlScale(1.0f, u8, 1.0f);
    FUN_0c0de000(u8);
    FUN_0c0c465c((((((struct o60_int *)(a4))->v)) + 0x394));
    nlPopMatrix(0x1);
    t14 = *(int *)0xC23A258;
    if ((t14 & 1) != 0) {
        t15 = (((struct o60_int *)(a4))->v);
        (((struct o60_uint *)(a4))->v) = (t15 + 0x1);
        if ((int)(t15 + 0x1) >= (int)0xF) {
            return FUN_0c0e19f2();
        }
        return 0x60;
    }
    return t14;
}
