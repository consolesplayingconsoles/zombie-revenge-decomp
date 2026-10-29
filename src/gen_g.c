/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c018142(void);
int FUN_0c01937a(void);
int FUN_0c01d10c(int);
int FUN_0c052064(int);
int FUN_0c056118(int, int, int, int);
int FUN_0c0725c8(void);
int FUN_0c073eb4(void);
int FUN_0c0849da(float);
int FUN_0c087016(int, int);
int FUN_0c08d75c(int, int, int);
int FUN_0c09084c(int, int, int);
int FUN_0c092146(int);
int FUN_0c0a3c34(int, int);
int FUN_0c0a8d80(int);
int FUN_0c0ad702(void);
int FUN_0c0ae2c8(void);
int FUN_0c0aed74(void);
int FUN_0c0c526a(void);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(int);
int _quick_odd_mvn(int, int);
int FUN_0c0847de(int a4);
int FUN_0c08b364(void);
int FUN_0c0ab75a(void);
int FUN_0c0ad948(void);
int FUN_0c0abf7c(void);
int FUN_0c056e7a(int a4);
int FUN_0c0744dc(void);
int FUN_0c07ba5e(void);
int FUN_0c07e0dc(void);
int FUN_0c090a1c(int a4, int a5);
int FUN_0c0a8fd6(int a4, int a5);
int FUN_0c0ae202(void);
int FUN_0c0ae95c(void);
int FUN_0c0b131c(void);
int FUN_0c053ac4(int a4);
int FUN_0c057bfa(int a4);
int FUN_0c05a978(int a4, int a5);
int FUN_0c0685a4(int a4, int a5, int a6, int a7);
int FUN_0c08220e(int a4, int a5);
void FUN_0c082ce0(int a4);
int FUN_0c084610(int a4, int a5);
int FUN_0c092c2c(int a4, int a5);
int FUN_0c09ee68(int a4);
int FUN_0c0ab2ec(void);
int FUN_0c0af792(void);
int FUN_0c0ad932(void);
int FUN_0c0b0996(void);
int FUN_0c08476e(float f4, float f5, float f6);
int FUN_0c0847a8(float f4, float f5, float f6);
int FUN_0c0847ce(float f4, float f5, float f6);
int FUN_0c0a8784(void);
int FUN_0c0b3998(void);
int FUN_0c0a8884(void);
int FUN_0c0ae258(void);
int mwPlaEntryErrFn(int a4, int a5);
int FUN_0c0847f4(float f4, float f5);
int FUN_0c0a8778(void);
int kgCmiNewId(void);
int FUN_0c084566(int a4, float f4);
int FUN_0c0855b0(void);
int FUN_0c07410a(void);
int FUN_0c07e18e(int a4);
int FUN_0c08455e(float f4);
int FUN_0c0845e8(int a4);
int FUN_0c0845f0(int a4);
int FUN_0c085534(void);
void FUN_0c09d320(void);
void FUN_0c0b25d0(void);
int FUN_0c0847a2(int a4, float f4);
int FUN_0c08d834(int a4);
int FUN_0c08d83a(int a4);
int FUN_0c09ee7a(void);
void FUN_0c078d6e(void);
int thunk_FUN_0c073eb4(void);
void FUN_0c082220(void);
void FUN_0c092802(void);
int FUN_0c0b0d14(void);

int FUN_0c0847de(int a4)
{
    *(float *)0xC247F00 = (*(float *)((a4 + 0x0)));
    *(float *)0xC247F04 = (*(float *)(((a4 + 0x4) + 0x0)));
    *(float *)0xC247F08 = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    return 0x30;
}

int FUN_0c08b364(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08B37A, 0xC0, (*(int *)0xC23ECF0));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0ab75a(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0AB770, 0x40, (*(int *)0xC23ECE4));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0ad948(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0AD99C, 0x234, (*(int *)0xC23ECF0));
    return FUN_0c0e19d0(t1);
}

int FUN_0c0abf7c(void)
{
    FUN_0c0a8d80(0xC10E6E0);
    FUN_0c0725c8();
    return FUN_0c0744dc();
}

int FUN_0c056e7a(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x348));
    if (t0 == 13) {
        return FUN_0c056118(a4, 0x6, 0x0, 0x1);
    }
    return t0;
}

int FUN_0c0744dc(void)
{
    return (FUN_0c0e19aa(0xC074254, 0xB4, (*(int *)0xC23ECE4)));
}

int FUN_0c07ba5e(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC07BA72, 0x80);
    return FUN_0c0e19d0(t0);
}

int FUN_0c07e0dc(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC07E0F0, 0x80);
    return FUN_0c0e19d0(t0);
}

int FUN_0c090a1c(int a4, int a5)
{
    return FUN_0c09084c(a4, a5, (*(int *)((0xC246FF0 + ((*(int *)((a4 + 0x1C4))) << 2)))));
}


int FUN_0c0ae202(void)
{
    FUN_0c0e16c0((*(int *)0xC24FA18));
    return FUN_0c0e16c0((*(int *)0xC24FA2C));
}

int FUN_0c0ae95c(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0AE970, 0xB4);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0b131c(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B1330, 0xB4);
    return FUN_0c0e19d0(t0);
}

int FUN_0c053ac4(int a4)
{
    *(unsigned int *)((a4 + 0x2A0)) = ((int)((*(int *)((a4 + 0x2EC))) & 0x70) >> 4);
    return 0x2A0;
}

int FUN_0c057bfa(int a4)
{
    FUN_0c01d10c(a4);
    return FUN_0c092146(a4);
}

int FUN_0c05a978(int a4, int a5)
{
    int t1;

    t1 = *(int *)((0xC1FFCCC + ((unsigned char)(*(signed char *)((a5 + 0x2))) << 2)));
    return ((int (*)(int, int))(t1))(a4, a5);
}

int FUN_0c0685a4(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(int *)0xC23ED5C;
    if ((t0 & 6) != 0) {
        return FUN_0c0e19f2(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c08220e(int a4, int a5)
{
    *(unsigned int *)0xC247D04 = 0x3;
    *(unsigned char *)0xC247CB8 = a4;
    *(unsigned short *)0xC247CBC = a5;
    return a5;
}

void FUN_0c082ce0(int a4)
{
    *(unsigned int *)0xC247DAC = 0x0;
    *(unsigned int *)0xC247DB0 = a4;
    *(unsigned int *)0xC247DB4 = 0xC081E08;
}

int FUN_0c084610(int a4, int a5)
{
    *(unsigned short *)((((a4 * 0xB0) + 0xC247F54) + 0x2)) = a5;
    return a5;
}

int FUN_0c092c2c(int a4, int a5)
{
    int t1;

    t1 = *(int *)((((unsigned short)(*(short *)((a5 + 0x0))) << 2) + 0xC10BA34));
    return ((int (*)(int, int))(t1))(a4, a5);
}

int FUN_0c09ee68(int a4)
{
    int t0;

    t0 = FUN_0c0e5f1c(a4);
    *(unsigned int *)0xC23EDBC = t0;
    return t0;
}

int FUN_0c0ab2ec(void)
{
    FUN_0c0cc3f8(0xB1FA9);
    return FUN_0c0cc3f8(0x81FA9);
}

int FUN_0c0af792(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0AF87A, 0x40);
    return FUN_0c0e19d0(t0);
}

int FUN_0c0ad932(void)
{
    FUN_0c0a8d80(0xC10F374);
    FUN_0c0ad948();
    return FUN_0c0ad702();
}

int FUN_0c0b0996(void)
{
    FUN_0c0cc3f8(0x62AA9);
    return FUN_0c0cc3f8(0x730A9);
}

int FUN_0c08476e(float f4, float f5, float f6)
{
    *(float *)0xC248A58 = f4;
    *(float *)0xC248A5C = f5;
    *(float *)0xC248A60 = f6;
    return 0xB88;
}

int FUN_0c0847a8(float f4, float f5, float f6)
{
    *(float *)0xC247EF4 = f4;
    *(float *)0xC247EF8 = f5;
    *(float *)0xC247EFC = f6;
    return 0x24;
}

int FUN_0c0847ce(float f4, float f5, float f6)
{
    *(float *)0xC247F00 = f4;
    *(float *)0xC247F04 = f5;
    *(float *)0xC247F08 = f6;
    return 0x30;
}

int FUN_0c0a8784(void)
{
    FUN_0c085534();
    return FUN_0c052064(0x1);
}

int FUN_0c0b3998(void)
{
    FUN_0c085534();
    return FUN_0c052064(0x1);
}

int FUN_0c0a8884(void)
{
    FUN_0c018142();
    return FUN_0c01937a();
}

int FUN_0c0ae258(void)
{
    FUN_0c0ae2c8();
    FUN_0c0aed74();
    return FUN_0c0ae95c();
}

int mwPlaEntryErrFn(int a4, int a5)
{
    *(unsigned int *)0xC248A9C = a4;
    *(unsigned int *)0xC248A98 = a5;
    return 0xBC0;
}

int FUN_0c0847f4(float f4, float f5)
{
    *(float *)0xC247F10 = f4;
    *(float *)0xC247F14 = f5;
    return 0x3C;
}

int FUN_0c0a8778(void)
{
    FUN_0c0a8784();
    return FUN_0c0c526a();
}

int kgCmiNewId(void)
{
    int t0;

    t0 = *(int *)0xC24FAAC;
    *(unsigned int *)0xC24FAAC = (t0 + 0x1);
    return ((t0 + 0x1) - 1);
}

int FUN_0c084566(int a4, float f4)
{
    *(unsigned int *)0xC247ED8 = a4;
    *(float *)0xC247EDC = f4;
    return 0x4;
}

int FUN_0c0855b0(void)
{
    return FUN_0c0cbe74(0x0, 0x0, 0xCA10000);
}

int FUN_0c07410a(void)
{
    return FUN_0c087016(0xC0FE174, 0x1E);
}

int FUN_0c07e18e(int a4)
{
    return FUN_0c0a3c34(a4, 0xC101374);
}

int FUN_0c08455e(float f4)
{
    *(float *)0xC247F18 = f4;
    return 0x40;
}

int FUN_0c0845e8(int a4)
{
    *(unsigned int *)0xC247F4C = a4;
    return 0x74;
}

int FUN_0c0845f0(int a4)
{
    *(unsigned int *)0xC247F50 = a4;
    return 0x78;
}

int FUN_0c085534(void)
{
    return FUN_0c0e1830(0xC08553C, 0x30);
}

void FUN_0c09d320(void)
{
    *(unsigned int *)0xC249720 = 0x0;
}

void FUN_0c0b25d0(void)
{
    *(unsigned int *)0xC24FAAC = 0xC;
}

int FUN_0c0847a2(int a4, float f4)
{
    *(unsigned int *)0xC247F0C = a4;
    return FUN_0c0849da(f4);
}

int FUN_0c08d834(int a4)
{
    return FUN_0c08d75c(a4, 0x1, 0x1);
}

int FUN_0c08d83a(int a4)
{
    return FUN_0c08d75c(a4, 0x0, 0x1);
}

int FUN_0c09ee7a(void)
{
    return (*(int *)0xC249744);
}

void FUN_0c078d6e(void)
{
    
}

int thunk_FUN_0c073eb4(void)
{
    return FUN_0c073eb4();
}

void FUN_0c082220(void)
{
    
}

void FUN_0c092802(void)
{
    
}

int FUN_0c0b0d14(void)
{
    return 0x1;
}
