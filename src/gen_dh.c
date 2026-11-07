/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c022838(int);
int FUN_0c0277c4(int, float);
extern int FUN_0c02a19a();
int FUN_0c02a416(int);
int FUN_0c03f4bc(int);
int FUN_0c03f6c2(int, int, int, int);
int FUN_0c03f884(int);
int FUN_0c03faa0(int);
int FUN_0c03fd20(int);
int FUN_0c03fed2(int);
int FUN_0c0402b8(int, int, int);
int FUN_0c04045c(int, int);
int FUN_0c040e18(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c040fc4(int);
int FUN_0c04105c(int);
int FUN_0c041370(int, float, float, float, float, float, float, float, float);
int FUN_0c041700(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c04173a(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c0418d4(int);
int FUN_0c041f2a(int);
int FUN_0c04206a(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05473c(int, int, int, int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c0a447c(int, int);
int FUN_0c0a44c6(int, int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b5d54(void);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cf4c4(int, int, int, int, int, float, float, float, float, float);
int FUN_0c0cf6e4(int, int, float, float, float, float, float);
int FUN_0c0cfa18(int, int);
int FUN_0c0d9ca0(int, float, float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int _quick_evn_mvn(void);
int _quick_odd_mvn(void);
extern float _builtin_sqrtf(float);
int memset(int, int, int);
int strlen(int);
void FUN_0c04228c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0d1284(int a4);
int FUN_0c02829e(int a4, int a5, int a6, int a7);
int FUN_0c02fc26(int a4, float f4);
void FUN_0c089d04(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
void FUN_0c022e60(int a4, int a5, int a6, int a7, float f4);

void FUN_0c04228c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int t1;
    int t9;
    int t3;
    int t11;

    t0 = *(int *)((a4 + 0x4E8));
    *(unsigned int *)((a4 + 0x4E8)) = (t0 + 0x1);
    t1 = *(int *)((a4 + 0x4DC));
    t9 = a5;
    if ((t0 + 0x1) == (*(int *)(((((((t1 - 76) << 1) + (t1 - 76)) << 2) + 0xC1F518C) + 0x4)))) {
        t3 = *(int *)((a4 + 0x4DC));
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (*(int *)(((0xC1F518C + ((((t3 - 76) << 1) + (t3 - 76)) << 2)) + 0x8))));
        t9 = 0xC23ED88;
    }
    t11 = *(int *)((a4 + 0x4DC));
    if ((unsigned int)(t11 - 76) >= (unsigned int)0x4C) {
        FUN_0c041f2a(a4);
    return;
    }
    switch (((t11 - 76) << 1)) {
        case 0:
        {
            return;
        }
        case 2:
        {
            ((int (*)(int, int))(0xC041F72))(a4, t9);
    return;
        }
        case 4:
        {
            ((int (*)(int, int))(0xC041F90))(a4, t9);
    return;
        }
        case 6:
        {
            ((int (*)(int, int))(0xC04204C))(a4, t9);
    return;
        }
        case 8:
        {
            FUN_0c04206a(a4);
    return;
        }
        case 10:
        {
            ((int (*)(int, int))(0xC04209A))(a4, t9);
    return;
        }
        case 12:
        case 14:
        case 18:
        case 20:
        case 30:
        case 34:
        case 36:
        case 38:
        case 40:
        case 42:
        case 48:
        case 52:
        case 58:
        case 64:
        case 70:
        case 78:
        case 80:
        case 86:
        case 94:
        case 98:
        case 100:
        case 116:
        case 118:
        case 120:
        case 138:
        case 140:
        case 142:
        case 144:
        case 146:
        {
            FUN_0c041f2a(a4);
    return;
        }
        case 16:
        {
            ((int (*)(int, int))(0xC03FAF4))(a4, t9);
    return;
        }
        case 22:
        {
            ((int (*)(int, int))(0xC03FAB6))(a4, t9);
    return;
        }
        case 24:
        case 26:
        {
            FUN_0c03fd20(a4);
    return;
        }
        case 28:
        {
            ((int (*)(int, int))(0xC03FB28))(a4, t9);
    return;
        }
        case 32:
        {
            ((int (*)(int, int))(0xC0421EE))(a4, t9);
    return;
        }
        case 44:
        {
            ((int (*)(int, int))(0xC03FEBA))(a4, t9);
    return;
        }
        case 46:
        {
            ((int (*)(int, int))(0xC03FE28))(a4, t9);
    return;
        }
        case 50:
        {
            ((int (*)(int, int))(0xC03FAB6))(a4, t9);
    return;
        }
        case 54:
        {
            FUN_0c03faa0(a4);
    return;
        }
        case 56:
        {
            FUN_0c03f4bc(a4);
    return;
        }
        case 60:
        case 62:
        {
            ((int (*)(int, int))(0xC0400E4))(a4, t9);
    return;
        }
        case 66:
        {
            ((int (*)(int, int))(0xC0421EE))(a4, t9);
    return;
        }
        case 68:
        {
            FUN_0c03fed2(a4);
    return;
        }
        case 72:
        {
            ((int (*)(int, int))(0xC03FF9C))(a4, t9);
    return;
        }
        case 74:
        {
            FUN_0c0402b8(a4, t9, a6);
    return;
        }
        case 76:
        {
            FUN_0c04045c(a4, t9);
    return;
        }
        case 82:
        {
            ((int (*)(int, int))(0xC042164))(a4, t9);
    return;
        }
        case 84:
        case 88:
        case 90:
        {
            ((int (*)(int, int))(0xC0406A8))(a4, t9);
    return;
        }
        case 92:
        {
            ((int (*)(int, int))(0xC040802))(a4, t9);
    return;
        }
        case 96:
        {
            ((int (*)(int, int))(0xC040808))(a4, t9);
    return;
        }
        case 102:
        {
            ((int (*)(int, int))(0xC0408A0))(a4, t9);
    return;
        }
        case 104:
        {
            FUN_0c040e18(a4, t9, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
            ((int (*)(int))(0xC040DFA))(a4);
    return;
        }
        case 106:
        {
            FUN_0c041f2a(a4);
            ((int (*)(int))(0xC040DFA))(a4);
    return;
        }
        case 108:
        {
            FUN_0c040fc4(a4);
    return;
        }
        case 110:
        {
            FUN_0c04105c(a4);
    return;
        }
        case 112:
        {
            FUN_0c041370(a4, f4, f5, f6, f7, f8, f9, f10, f11);
    return;
        }
        case 114:
        {
            ((int (*)(int, int))(0xC0421EE))(a4, t9);
    return;
        }
        case 122:
        {
            FUN_0c041700(a4, t9, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    return;
        }
        case 124:
        {
            FUN_0c04173a(a4, t9, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    return;
        }
        case 126:
        {
            ((int (*)(int, int))(0xC04179C))(a4, t9);
    return;
        }
        case 128:
        {
            ((int (*)(int, int))(0xC0418AC))(a4, t9);
    return;
        }
        case 130:
        case 132:
        {
            FUN_0c0418d4(a4);
    return;
        }
        case 134:
        {
            ((int (*)(int, int))(0xC041BA0))(a4, t9);
    return;
        }
        case 136:
        {
            ((int (*)(int, int))(0xC041C04))(a4, t9);
    return;
        }
        case 148:
        {
            FUN_0c03f6c2(a4, t9, a6, a7);
    return;
        }
        default:
        {
            FUN_0c03f884(a4);
    return;
        }
    }
}





