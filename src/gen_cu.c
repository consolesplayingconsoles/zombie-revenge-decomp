/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
int FUN_0c0c0340(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcca0(int);
int nlAddVector(int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(float);
int FUN_0c0c6352(int a4, int a5, int a6, int a7);
int FUN_0c0ad126(int a4, float f4);
struct o38_float { char p[0x38]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_short { char p[0x4E]; short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_short { char p[0x50]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o54_short { char p[0x54]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o56_short { char p[0x56]; short v; };
struct o56_ushort { char p[0x56]; unsigned short v; };



int FUN_0c0ad126(int a4, float f4)
{
    float u7;
    int stk[3];

    if ((*(int *)((a4 + 0x30))) != 0) {
        
    } else {
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.083166644f);
        FUN_0c0dce80((a4 + 0x40), (a4 + 0x40), (*(float *)0xC0AD2D0));
        nlAddVector((a4 + 0x34), (a4 + 0x40));
        FUN_0c010128((a4 + 0x4C), (a4 + 0x52));
        u7 = *(float *)0xC0AD2E0;
        (((struct o52_ushort *)(a4))->v) = (int)((float)((((struct o52_short *)(a4))->v)) * u7);
        (((struct o54_ushort *)(a4))->v) = (int)((float)((((struct o54_short *)(a4))->v)) * u7);
        (((struct o56_ushort *)(a4))->v) = (int)((float)((((struct o56_short *)(a4))->v)) * u7);
        if (0.0f > ((((struct o38_float *)(a4))->v))) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            _quick_odd_mvn(u7);
            (((struct o4C_ushort *)(a4))->v) = 0x3D00;
            (((struct o4E_ushort *)(a4))->v) = 0xFFFFF100;
            (((struct o50_ushort *)(a4))->v) = 0x0;
            FUN_0c0cc3f8(0x628A9, 0x0, 0x0, 0x0);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY(((((struct o4E_short *)(a4))->v)));
    nlRotateAX(((((struct o4C_short *)(a4))->v)));
    nlRotateAZ(((((struct o50_short *)(a4))->v)));
    FUN_0c0c465c(0xFD9);
    return nlPopMatrix(0x1);
}


