int main() 
{ 
  __asm__ __volatile__ ( 
                         "li ra,0xb4c20;"
                         "li sp,0xb4c21;"
                         "li gp,0xb4c22;"
                         "li tp,0xb4c23;"
                         "li t0,0xb4c24;"
                         "li t1,0xb4c25;"
                         "li t2,0xb4c26;"
                         "li s0,0xb4c27;"
                         "li s1,0xb4c28;"
                         "li a0,0xb4c29;"
                         "li a1,0xb4c2a;"
                         "li a2,0xb4c2b;"
                         "li a3,0xb4c2c;"
                         "li a4,0xb4c2d;"
                         "li a5,0xb4c2e;"
                         "li a6,0xb4c2f;"
                         "li a7,0xb4c30;"
                         "li s2,0xb4c31;"
                         "li s3,0xb4c32;"
                         "li s4,0xb4c33;"
                         "li s5,0xb4c34;"
                         "li s6,0xb4c35;"
                         "li s7,0xb4c36;"
                         "li s8,0xb4c37;"
                         "li s9,0xb4c38;"
                         "li s10,0xb4c39;"
                         "li s11,0xb4c3a;"
                         "li t3,0xb4c3b;"
                         "li t4,0xb4c3c;"
                         "li t5,0xb4c3d;"
                         "li t6,0xb4c3e;"
           
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // bgeu r1, r15, r16;
                          "m1: bgeu a5,a6, m;"
                         // bgeu r2, r17, r18;
                          "m2: bgeu a7,s2, m;" 
                         // bgeu r3, r19, r20;
                          "m3: bgeu s3,s4, m;"
                         // bgeu r4, r21, r22;
                          "m4: bgeu s5,s6, m;"
                         // bgeu r5, r23, r24;
                          "m5: bgeu s7,s8, m;"
                         // bgeu r6, r25, r26;
                          "m6: bgeu s9,s10, m;"
                         // bgeu r7, r27, r28;
                          "m7: bgeu s11,t3, m;"
                         // bgeu r8, r29, r30;
                          "m8: bgeu t4,t5, m;"
                         // bgeu r9, r31, r32;
                          "m9: bgeu t0,t6, m;"
                         // bgeu r10, r1, r2;
                          "m10: bgeu ra,sp, m;"
                         // bgeu r11, r3, r4;
                          "m11: bgeu gp,tp, m;"
                         // bgeu r12, r5, r6;
                          "m12: bgeu t0,t1, m;"
                         // bgeu r13, r7, r8;
                          "m13: bgeu t2,s0, m;"
                         // bgeu r14, r9, r10;
                          "m14: bgeu s1,a0, m;"
                         // bgeu r15, r11, r12;
                          "m15: bgeu a1,a2, m;"
                         // bgeu r16, r13, r14;
                          "m16: bgeu a3,a4, m;"
                         // bgeu r17, r15, r16;
                          "m17: bgeu a5,a6, m;"
                         // bgeu r18, r17, r18;
                          "m18: bgeu a7,s2, m;"
                         // bgeu r19, r19, r20;
                          "m19: bgeu s3,s4, m;"
                         // bgeu r20, r21, r22;
                          "m20: bgeu s5,s6, m;"
                         // bgeu r21, r23, r24;
                          "m21: bgeu s7,s8, m;"
                         // bgeu r22, r25, r26;
                          "m22: bgeu s9,s10, m;"
                         // bgeu r23, r27, r28;
                          "m23: bgeu s11,t3, m;"
                         // bgeu r24, r29, r30;
                          "m24: bgeu t4,t5, m;"
                         // bgeu r25, r31, r32;
                          "m25: bgeu t0,t6, m;"
                         // bgeu r26, r1, r2;
                          "m26: bgeu ra,sp, m;"
                         // bgeu r27, r3, r4;
                          "m27: bgeu gp,tp, m;"
                         // bgeu r28, r5, r6;
                          "m28: bgeu t0,t1, m;"
                         // bgeu r29, r7, r8;
                          "m29: bgeu t2,s0, m;"
                         // bgeu r30, r9, r10;
                          "m30: bgeu s1,a0, m;"
                         // bgeu r31, r11, r12;
                          "m31: bgeu a1,a2, m;"
                         // bgeu r1, r15, r16;
                          "m32: bgeu a5,a6, m;"
                         // bgeu r2, r17, r18;
                          "m33: bgeu a7,s2, m;"
                         // bgeu r3, r19, r20;
                          "m34: bgeu s3,s4, m;"
                         // bgeu r4, r21, r22;
                          "m35: bgeu s5,s6, m;"
                         // bgeu r5, r23, r24;
                          "m36: bgeu s7,s8, m;"
                         // bgeu r6, r25, r26;
                          "m37: bgeu s9,s10, m;"
                         // bgeu r7, r27, r28;
                          "m38: bgeu s11,t3, m;"
                         // bgeu r8, r29, r30;
                          "m39: bgeu t4,t5, m;"
                         // bgeu r9, r31, r32;
                          "m40: bgeu t0,t6, m;"
                         // bgeu r10, r1, r2;
                          "m41: bgeu ra,sp, m;"
                         // bgeu r11, r3, r4;
                          "m42: bgeu gp,tp, m;"
                         // bgeu r12, r5, r6;
                          "m43: bgeu t0,t1, m;"
                         // bgeu r13, r7, r8;
                          "m44: bgeu t2,s0, m;"
                         // bgeu r14, r9, r10;
                          "m45: bgeu s1,a0, m;"
                         // bgeu r15, r11, r12;
                          "m46: bgeu a1,a2, m;"
                         // bgeu r16, r13, r14;
                          "m47: bgeu a3,a4, m;"
                         // bgeu r17, r15, r16;
                          "m48: bgeu a5,a6, m;"
                         // bgeu r18, r17, r18;
                          "m49: bgeu a7,s2, m;"
                         // bgeu r19, r19, r20;
                          "m50: bgeu s3,s4, m;"
                         // bgeu r20, r21, r22;
                          "m51: bgeu s5,s6, m;"
                         // bgeu r21, r23, r24;
                          "m52: bgeu s7,s8, m;"
                         // bgeu r22, r25, r26;
                          "m53: bgeu s9,s10, m;"
                         // bgeu r23, r27, r28;
                          "m54: bgeu s11,t3, m;"
                         // bgeu r24, r29, r30;
                          "m55: bgeu t4,t5, m;"
                         // bgeu r25, r31, r32;
                          "m56: bgeu t0,t6, m;"
                         // bgeu r26, r1, r2;
                          "m57: bgeu ra,sp, m;"
                         // bgeu r27, r3, r4;
                          "m58: bgeu gp,tp, m;"
                         // bgeu r28, r5, r6;
                          "m59: bgeu t0,t1, m;"
                         // bgeu r29, r7, r8;
                          "m60: bgeu t2,s0, m;"
                         // bgeu r30, r9, r10;
                          "m61: bgeu s1,a0, m;"
                         // bgeu r31, r11, r12;
                          "m62: bgeu a1,a2, m;"
                         // bgeu r1, r15, r16;
                          "m63: bgeu a5,a6, m;"
                         // bgeu r2, r17, r18;
                          "m64: bgeu a7,s2, m;"
                         // bgeu r3, r19, r20;
                          "m65: bgeu s3,s4, m;"
                         // bgeu r4, r21, r22;
                          "m66: bgeu s5,s6, m;"
                         // bgeu r5, r23, r24;
                          "m67: bgeu s7,s8, m;"
                         // bgeu r6, r25, r26;
                          "m68: bgeu s9,s10, m;"
                         // bgeu r7, r27, r28;
                          "m69: bgeu s11,t3, m;"
                         // bgeu r8, r29, r30;
                          "m70: bgeu t4,t5, m;"
                         // bgeu r9, r31, r32;
                          "m71: bgeu t0,t6, m;"
                         // bgeu r10, r1, r2;
                          "m72: bgeu ra,sp, m;"
                         // bgeu r11, r3, r4;
                          "m73: bgeu gp,tp, m;"
                         // bgeu r12, r5, r6;
                          "m74: bgeu t0,t1, m;"
                         // bgeu r13, r7, r8;
                          "m75: bgeu t2,s0, m;"
                         // bgeu r14, r9, r10;
                          "m76: bgeu s1,a0, m;"
                         // bgeu r15, r11, r12;
                          "m77: bgeu a1,a2, m;"
                         // bgeu r16, r13, r14;
                          "m78: bgeu a3,a4, m;"
                         // bgeu r17, r15, r16;
                          "m79: bgeu a5,a6, m;"
                         // bgeu r18, r17, r18;
                          "m80: bgeu a7,s2, m;"
                         // bgeu r19, r19, r20;
                          "m81: bgeu s3,s4, m;"
                         // bgeu r20, r21, r22;
                          "m82: bgeu s5,s6, m;"
                         // bgeu r21, r23, r24;
                          "m83: bgeu s7,s8, m;"
                         // bgeu r22, r25, r26;
                          "m84: bgeu s9,s10, m;"
                         // bgeu r23, r27, r28;
                          "m85: bgeu s11,t3, m;"
                         // bgeu r24, r29, r30;
                          "m86: bgeu t4,t5, m;"
                         // bgeu r25, r31, r32;
                          "m87: bgeu t0,t6, m;"
                         // bgeu r26, r1, r2;
                          "m88: bgeu ra,sp, m;"
                         // bgeu r27, r3, r4;
                          "m89: bgeu gp,tp, m;"
                         // bgeu r28, r5, r6;
                          "m90: bgeu t0,t1, m;"
                         // bgeu r29, r7, r8;
                          "m91: bgeu t2,s0, m;"
                         // bgeu r30, r9, r10;
                          "m92: bgeu s1,a0, m;"
                         // bgeu r31, r11, r12;
                          "m93: bgeu a1,a2, m;"
                         // bgeu r1, r15, r16;
                          "m94: bgeu a5,a6, m;"
                         // bgeu r2, r17, r18;
                          "m95: bgeu a7,s2, m;"
                         // bgeu r3, r19, r20;
                          "m96: bgeu s3,s4, m;"
                         // bgeu r4, r21, r22;
                          "m97: bgeu s5,s6, m;"
                         // bgeu r5, r23, r24;
                          "m98: bgeu s7,s8, m;"
                         // bgeu r6, r25, r26;
                          "m99: bgeu s9,s10, m;"
                         // bgeu r7, r27, r28;
                          "m100: bgeu s11,t3, m;"
                         // bgeu r8, r29, r30;
                          "m101: bgeu t4,t5, m;"
                         // bgeu r9, r31, r32;
                          "m102: bgeu t0,t6, m;"
                         // bgeu r10, r1, r2;
                          "m103: bgeu ra,sp, m;"
                         // bgeu r11, r3, r4;
                          "m104: bgeu gp,tp, m;"
                         // bgeu r12, r5, r6;
                          "m105: bgeu t0,t1, m;"
                         // bgeu r13, r7, r8;
                          "m106: bgeu t2,s0, m;"
                         // bgeu r14, r9, r10;
                          "m107: bgeu s1,a0, m;"
                         // bgeu r15, r11, r12;
                          "m108: bgeu a1,a2, m;"
                         // bgeu r16, r13, r14;
                          "m109: bgeu a3,a4, m;"
                         // bgeu r17, r15, r16;
                          "m110: bgeu a5,a6, m;"
                         // bgeu r18, r17, r18;
                          "m111: bgeu a7,s2, m;"
                         // bgeu r19, r19, r20;
                          "m112: bgeu s3,s4, m;"
                         // bgeu r20, r21, r22;
                          "m113: bgeu s5,s6, m;"
                         // bgeu r21, r23, r24;
                          "m114: bgeu s7,s8, m;"
                         // bgeu r22, r25, r26;
                          "m115: bgeu s9,s10, m;"
                         // bgeu r23, r27, r28;
                          "m116: bgeu s11,t3, m;"
                         // bgeu r24, r29, r30;
                          "m117: bgeu t4,t5, m;"
                         // bgeu r25, r31, r32;
                          "m118: bgeu t0,t6, m;"
                         // bgeu r26, r1, r2;
                          "m119: bgeu ra,sp, m;"
                         // bgeu r27, r3, r4;
                          "m120: bgeu gp,tp, m;"
                         // bgeu r28, r5, r6;
                          "m121: bgeu t0,t1, m;"
                         // bgeu r29, r7, r8;
                          "m122: bgeu t2,s0, m;"
                         // bgeu r30, r9, r10;
                          "m123: bgeu s1,a0, m;"
                         // bgeu r31, r11, r12;
                          "m124: bgeu a1,a2, m;"
                      );
  __asm__ __volatile__ ( "m: csrrwi s9,0x7c1, 0x0;"
                       );
} 
