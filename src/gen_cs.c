/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c049c0a(int);
extern int FUN_0c0558f8();
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c4784(int, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(int, int);
int FUN_0c05664c(int a4, int a5, int a6, int a7);
int FUN_0c08b124(int a4);
int FUN_0c0b7734(void);

int FUN_0c05664c(int a4, int a5, int a6, int a7)
{
    int t20;
    int t23;
    int t24;
    int t63;
    int t59;
    int t68;
    int t78;
    int t86;
    int t111;
    int t120;
    int t129;
    int t132;
    int t130;
    int t1;
    int t146;
    int t138;
    int t121;
    int t112;
    int t104;
    int t97;
    float u77;
    int t91;

    if ((((*(int *)0xC23A1A8) & 0x8000) != 0) && (t1 = *(int *)((a4 + 0x22C)), (t1 & 4) == 0)) {
        t20 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
        t146 = (FUN_0c0e19f2());
    } else {
        t23 = *(int *)((0xC247604 + ((*(int *)((a4 + 0xBC))) << 2)));
        t24 = *(int *)0xC23ED50;
        if (t23 != 7) {
            if (t23 != 8) {
                if (t23 != 9) {
                    if (t23 != 1) {
                        if ((t23 != 2) && ((t23 != 11) && ((t23 != 3) && (t23 != 4)))) {
                            t63 = t23;
                            if (t23 != 10) {
                            } else {
                                t59 = 0x234;
                                if ((*(int *)((a4 + 0x234))) == t24) {
                                    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = (*(int *)((a4 + 0x238)));
                                    *(unsigned int *)((a4 + 0x238)) = 0x0;
                                    t59 = 0x238;
                                }
                                t63 = t59;
                            }
                            t97 = t63;
                        } else {
                            if (((*(int *)0xC23ED5C) & 0x40000) != 0) {
                                t68 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                                FUN_0c0e19f2();
                            }
                            if ((((*(int *)0xC23ED60) & 1) != 0) && (u77 = *(float *)((a4 + 0x34)), 5.0f > u77)) {
                                t78 = ((int (*)(int))(FUN_0c0558f8))(a4);
                                FUN_0c0e19f2();
                            }
                            t86 = *(int *)0xC23ED50;
                            if ((*(int *)((a4 + 0x234))) != t86) {
                                *(unsigned int *)((a4 + 0x238)) = (*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)));
                                *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247604) + 0x0)) = 0xA;
                                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.5f);
                                t91 = 0x34;
                            } else {
                                *(unsigned int *)((a4 + 0x234)) = t86;
                                t91 = 0x234;
                            }
                            t97 = t91;
                        }
                        t104 = t97;
                    } else {
                        *(unsigned int *)((a4 + 0x234)) = t24;
                        *(unsigned int *)((a4 + 0x25C)) = 0x0;
                        t104 = 0x25C;
                    }
                    t112 = t104;
                } else {
                    t111 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                    *(unsigned int *)((a4 + 0x0)) = 0xC056B1A;
                    t112 = t111;
                }
                t121 = t112;
            } else {
                t120 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                *(unsigned int *)((a4 + 0x268)) = 0x0;
                *(unsigned int *)((a4 + 0x0)) = 0xC056AE8;
                t121 = 0x268;
            }
            t138 = t121;
        } else {
            t129 = *(int *)((a4 + 0x25C));
            *(unsigned int *)((a4 + 0x25C)) = (t129 - 1);
            t132 = 0x25C;
            if ((int)(t129 - 1) <= 0) {
                t130 = ((int (*)(int, int, int, int))(FUN_0c0558f8))(a4, a5, a6, a7);
                t132 = (FUN_0c0e19f2());
            }
            t138 = t132;
        }
        t146 = t138;
    }
    return t146;
}


