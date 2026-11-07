/* Straight-line functions with calls and guards (batch gen_lm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e5f1c(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c073c64(void);
struct o10_float { char p[0x10]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c073c64(void)
{
    int stk[16];
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t6;
    register int t11;
    register int t9;
    register float u14;
    register int t17;
    register int t15;
    register float u20;
    register int t23;
    register int t21;
    register int t24;
    register int t25;
    register int t31;
    register float u33;
    register int t36;
    register float u38;
    register float u46;
    register float u47;
    register float u48;
    float R1004;
    int R1008;
    int R1012;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0848bc(1.0f, 1.0f, 1.0f);
    t3 = 0xD;
    t4 = 0x0;
    t5 = 0x47AE927;
    for (;;) {
        t8 = (t5 & 0x1);
        t6 = (int)(((unsigned int)t8 >> 1) | ((unsigned int)t8 << 31));
        t11 = ((((t5 >> 1) | t6) ^ t3) & 0x1);
        t9 = (int)(((unsigned int)t11 >> 1) | ((unsigned int)t11 << 31));
        R1008 = (((((0xF & (((t5 >> 1) | t6) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t6) ^ t3))) << 2) << 1);
        u14 = (*(float *)((((((((0xF & (((t5 >> 1) | t6) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t6) ^ t3))) << 2) << 1) + 0xC0FDFEC) + 0x0)));
        u14 = u14 + (float)(((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) & 0xFFF) * (((((struct o4_float *)(((((((0xF & (((t5 >> 1) | t6) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t6) ^ t3))) << 2) << 1) + 0xC0FDFEC)))->v)) / 4095.0f);
        R1004 = u14;
        t17 = (((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) & 0x1);
        t15 = (int)(((unsigned int)t17 >> 1) | ((unsigned int)t17 << 31));
        u20 = ((((struct o8_float *)(((((((0xF & (((t5 >> 1) | t6) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t6) ^ t3))) << 2) << 1) + 0xC0FDFEC)))->v));
        u20 = u20 + (float)((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) & 0xFFF) * (((((struct oC_float *)(((((((0xF & (((t5 >> 1) | t6) ^ t3)) << 1) + (0xF & (((t5 >> 1) | t6) ^ t3))) << 2) << 1) + 0xC0FDFEC)))->v)) / 4095.0f);
        t23 = ((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) & 0x1);
        t21 = (int)(((unsigned int)t23 >> 1) | ((unsigned int)t23 << 31));
        t24 = ((((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t21) ^ ((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1));
        t25 = (((((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t21) ^ ((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1)) | ((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1));
        t31 = (((((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t21) ^ ((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1)) & 0xFFF);
        t5 = ((((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1)) >> 1) | t21) ^ ((((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1) | (((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) >> 1) | t15) ^ ((((((((t5 >> 1) | t6) ^ t3) >> 1) | t9) ^ (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) | (((((t5 >> 1) | t6) ^ t3) | t3) * 0x22AC8EE1)) * 0x22AC8EE1))) * 0x22AC8EE1));
        t5 = (t5 >> 1);
        u33 = (1.0f + 1.0f);
        u33 = u33 + 0.000976800919f * (float)t31;
        t36 = (t24 & 0x1);
        t5 = (t5 | ((int)(((unsigned int)t36 >> 1) | ((unsigned int)t36 << 31))));
        t5 = (t5 ^ (t25 * 0x22AC8EE1));
        t3 = t5;
        t3 = (t3 | (t25 * 0x22AC8EE1));
        *(volatile int *)0xC23A258;
        u38 = 0.5f;
        u38 = u38 + 0.000122100115f * (float)(t5 & 0xFFF);
        t3 = (t3 * 0x22AC8EE1);
        
        R1012 = ((FUN_0c0e5f1c(t24)) + 0x1B8);
        u46 = R1004;
        u47 = ((u20 + -280.0f) * (u20 + -280.0f));
        u47 = u47 + (u46 + -325.0f) * (u46 + -325.0f);
        u48 = u33;
        if (2500.0f > u47) {
            u48 = (u33 * (u47 / 2500.0f));
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70((R1004), ((((struct o10_float *)(((R1008) + 0xC0FDFEC)))->v)), u20);
        nlRotateAY(((((struct o3CE_short *)(t1))->v)));
        nlRotateAX(((((struct o3CC_short *)(t1))->v)));
        nlScale(u48, u48, u48);
        FUN_0c0de000(u48);
        FUN_0c0c465c((R1012));
        nlPopMatrix(0x1);
        t4 = (t4 + 0x1);
        if ((int)t4 < (int)0xC8) continue;
        break;
    }
    return FUN_0c0849da();
}
