int main() 
{ 
  __asm__ __volatile__ ( 
                         "li ra,0xb4cab;"
                         "li sp,0xb4cab;"
                         "li gp,0xb4cab;"
                         "li tp,0xb4cab;"
                         "li t0,0xb4cab;"
                         "li t1,0xb4cab;"
                         "li t2,0xb4cab;"
                         "li s0,0xb4cab;"
                         "li s1,0xb4cab;"
                         "li a0,0xb4cab;"
                         "li a1,0xb4cab;"
                         "li a2,0xb4cab;"
                         "li a3,0xb4cab;"
                         "li a4,0xb4cab;"
                         "li a5,0xb4cab;"
                         "li a6,0xb4cab;"
                         "li a7,0xb4cab;"
                         "li s2,0xb4cab;"
                         "li s3,0xb4cab;"
                         "li s4,0xb4cab;"
                         "li s5,0xb4cab;"
                         "li s6,0xb4cab;"
                         "li s7,0xb4cab;"
                         "li s8,0xb4cab;"
                         "li s9,0xb4cab;"
                         "li s10,0xb4cab;"
                         "li s11,0xb4cab;"
                         "li t3,0xb4cab;"
                         "li t4,0xb4cab;"
                         "li t5,0xb4cab;"
                         "li t6,0xb4cab;"
           
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // bgeu r1, r15, r16;
                          "m1: bgeu a5,a6, m124;"
                         // bgeu r2, r17, r18;
                          "m2: bgeu a7,s2, m123;"
                         // bgeu r3, r19, r20;
                          "m3: bgeu s3,s4, m122;"
                         // bgeu r4, r21, r22;
                          "m4: bgeu s5,s6, m121;"
                         // bgeu r5, r23, r24;
                          "m5: bgeu s7,s8, m120;"
                         // bgeu r6, r25, r26;
                          "m6: bgeu s9,s10, m119;"
                         // bgeu r7, r27, r28;
                          "m7: bgeu s11,t3, m118;"
                         // bgeu r8, r29, r30;
                          "m8: bgeu t4,t5, m117;"
                         // bgeu r9, r31, r32;
                          "m9: bgeu t0,t6, m116;"
                         // bgeu r10, r1, r2;
                          "m10: bgeu ra,sp, m115;"
                         // bgeu r11, r3, r4;
                          "m11: bgeu gp,tp, m114;"
                         // bgeu r12, r5, r6;
                          "m12: bgeu t0,t1, m113;"
                         // bgeu r13, r7, r8;
                          "m13: bgeu t2,s0, m112;"
                         // bgeu r14, r9, r10;
                          "m14: bgeu s1,a0, m111;"
                         // bgeu r15, r11, r12;
                          "m15: bgeu a1,a2, m110;"
                         // bgeu r16, r13, r14;
                          "m16: bgeu a3,a4, m109;"
                         // bgeu r17, r15, r16;
                          "m17: bgeu a5,a6, m108;"
                         // bgeu r18, r17, r18;
                          "m18: bgeu a7,s2, m107;"
                         // bgeu r19, r19, r20;
                          "m19: bgeu s3,s4, m106;"
                         // bgeu r20, r21, r22;
                          "m20: bgeu s5,s6, m105;"
                         // bgeu r21, r23, r24;
                          "m21: bgeu s7,s8, m104;"
                         // bgeu r22, r25, r26;
                          "m22: bgeu s9,s10, m103;"
                         // bgeu r23, r27, r28;
                          "m23: bgeu s11,t3, m102;"
                         // bgeu r24, r29, r30;
                          "m24: bgeu t4,t5, m101;"
                         // bgeu r25, r31, r32;
                          "m25: bgeu t0,t6, m100;"
                         // bgeu r26, r1, r2;
                          "m26: bgeu ra,sp, m99;"
                         // bgeu r27, r3, r4;
                          "m27: bgeu gp,tp, m98;"
                         // bgeu r28, r5, r6;
                          "m28: bgeu t0,t1, m97;"
                         // bgeu r29, r7, r8;
                          "m29: bgeu t2,s0, m96;"
                         // bgeu r30, r9, r10;
                          "m30: bgeu s1,a0, m95;"
                         // bgeu r31, r11, r12;
                          "m31: bgeu a1,a2, m94;"
                         // bgeu r1, r15, r16;
                          "m32: bgeu a5,a6, m93;"
                         // bgeu r2, r17, r18;
                          "m33: bgeu a7,s2, m92;"
                         // bgeu r3, r19, r20;
                          "m34: bgeu s3,s4, m91;"
                         // bgeu r4, r21, r22;
                          "m35: bgeu s5,s6, m90;"
                         // bgeu r5, r23, r24;
                          "m36: bgeu s7,s8, m89;"
                         // bgeu r6, r25, r26;
                          "m37: bgeu s9,s10, m88;"
                         // bgeu r7, r27, r28;
                          "m38: bgeu s11,t3, m87;"
                         // bgeu r8, r29, r30;
                          "m39: bgeu t4,t5, m86;"
                         // bgeu r9, r31, r32;
                          "m40: bgeu t0,t6, m85;"
                         // bgeu r10, r1, r2;
                          "m41: bgeu ra,sp, m84;"
                         // bgeu r11, r3, r4;
                          "m42: bgeu gp,tp, m83;"
                         // bgeu r12, r5, r6;
                          "m43: bgeu t0,t1, m82;"
                         // bgeu r13, r7, r8;
                          "m44: bgeu t2,s0, m81;"
                         // bgeu r14, r9, r10;
                          "m45: bgeu s1,a0, m80;"
                         // bgeu r15, r11, r12;
                          "m46: bgeu a1,a2, m79;"
                         // bgeu r16, r13, r14;
                          "m47: bgeu a3,a4, m78;"
                         // bgeu r17, r15, r16;
                          "m48: bgeu a5,a6, m77;"
                         // bgeu r18, r17, r18;
                          "m49: bgeu a7,s2, m76;"
                         // bgeu r19, r19, r20;
                          "m50: bgeu s3,s4, m75;"
                         // bgeu r20, r21, r22;
                          "m51: bgeu s5,s6, m74;"
                         // bgeu r21, r23, r24;
                          "m52: bgeu s7,s8, m73;"
                         // bgeu r22, r25, r26;
                          "m53: bgeu s9,s10, m72;"
                         // bgeu r23, r27, r28;
                          "m54: bgeu s11,t3, m71;"
                         // bgeu r24, r29, r30;
                          "m55: bgeu t4,t5, m70;"
                         // bgeu r25, r31, r32;
                          "m56: bgeu t0,t6, m69;"
                         // bgeu r26, r1, r2;
                          "m57: bgeu ra,sp, m68;"
                         // bgeu r27, r3, r4;
                          "m58: bgeu gp,tp, m67;"
                         // bgeu r28, r5, r6;
                          "m59: bgeu t0,t1, m66;"
                         // bgeu r29, r7, r8;
                          "m60: bgeu t2,s0, m65;"
                         // bgeu r30, r9, r10;
                          "m61: bgeu s1,a0, m64;"
                         // bgeu r31, r11, r12;
                          "m62: bgeu a1,a2, m63;"
                         // bgeu r1, r15, r16;
                          "m63: bgeu a5,a6, ms;"
                         // bgeu r2, r17, r18;
                          "m64: bgeu a7,s2, m62;"
                         // bgeu r3, r19, r20;
                          "m65: bgeu s3,s4, m61;"
                         // bgeu r4, r21, r22;
                          "m66: bgeu s5,s6, m60;"
                         // bgeu r5, r23, r24;
                          "m67: bgeu s7,s8, m59;"
                         // bgeu r6, r25, r26;
                          "m68: bgeu s9,s10, m58;"
                         // bgeu r7, r27, r28;
                          "m69: bgeu s11,t3, m57;"
                         // bgeu r8, r29, r30;
                          "m70: bgeu t4,t5, m56;"
                         // bgeu r9, r31, r32;
                          "m71: bgeu t0,t6, m55;"
                         // bgeu r10, r1, r2;
                          "m72: bgeu ra,sp, m54;"
                         // bgeu r11, r3, r4;
                          "m73: bgeu gp,tp, m53;"
                         // bgeu r12, r5, r6;
                          "m74: bgeu t0,t1, m52;"
                         // bgeu r13, r7, r8;
                          "m75: bgeu t2,s0, m51;"
                         // bgeu r14, r9, r10;
                          "m76: bgeu s1,a0, m50;"
                         // bgeu r15, r11, r12;
                          "m77: bgeu a1,a2, m49;"
                         // bgeu r16, r13, r14;
                          "m78: bgeu a3,a4, m48;"
                         // bgeu r17, r15, r16;
                          "m79: bgeu a5,a6, m47;"
                         // bgeu r18, r17, r18;
                          "m80: bgeu a7,s2, m46;"
                         // bgeu r19, r19, r20;
                          "m81: bgeu s3,s4, m45;"
                         // bgeu r20, r21, r22;
                          "m82: bgeu s5,s6, m44;"
                         // bgeu r21, r23, r24;
                          "m83: bgeu s7,s8, m43;"
                         // bgeu r22, r25, r26;
                          "m84: bgeu s9,s10, m42;"
                         // bgeu r23, r27, r28;
                          "m85: bgeu s11,t3, m41;"
                         // bgeu r24, r29, r30;
                          "m86: bgeu t4,t5, m40;"
                         // bgeu r25, r31, r32;
                          "m87: bgeu t0,t6, m39;"
                         // bgeu r26, r1, r2;
                          "m88: bgeu ra,sp, m38;"
                         // bgeu r27, r3, r4;
                          "m89: bgeu gp,tp, m37;"
                         // bgeu r28, r5, r6;
                          "m90: bgeu t0,t1, m36;"
                         // bgeu r29, r7, r8;
                          "m91: bgeu t2,s0, m35;"
                         // bgeu r30, r9, r10;
                          "m92: bgeu s1,a0, m34;"
                         // bgeu r31, r11, r12;
                          "m93: bgeu a1,a2, m33;"
                         // bgeu r1, r15, r16;
                          "m94: bgeu a5,a6, m32;"
                         // bgeu r2, r17, r18;
                          "m95: bgeu a7,s2, m31;"
                         // bgeu r3, r19, r20;
                          "m96: bgeu s3,s4, m30;"
                         // bgeu r4, r21, r22;
                          "m97: bgeu s5,s6, m29;"
                         // bgeu r5, r23, r24;
                          "m98: bgeu s7,s8, m28;"
                         // bgeu r6, r25, r26;
                          "m99: bgeu s9,s10, m27;"
                         // bgeu r7, r27, r28;
                          "m100: bgeu s11,t3, m26;"
                         // bgeu r8, r29, r30;
                          "m101: bgeu t4,t5, m25;"
                         // bgeu r9, r31, r32;
                          "m102: bgeu t0,t6, m24;"
                         // bgeu r10, r1, r2;
                          "m103: bgeu ra,sp, m23;"
                         // bgeu r11, r3, r4;
                          "m104: bgeu gp,tp, m22;"
                         // bgeu r12, r5, r6;
                          "m105: bgeu t0,t1, m21;"
                         // bgeu r13, r7, r8;
                          "m106: bgeu t2,s0, m20;"
                         // bgeu r14, r9, r10;
                          "m107: bgeu s1,a0, m19;"
                         // bgeu r15, r11, r12;
                          "m108: bgeu a1,a2, m18;"
                         // bgeu r16, r13, r14;
                          "m109: bgeu a3,a4, m17;"
                         // bgeu r17, r15, r16;
                          "m110: bgeu a5,a6, m16;"
                         // bgeu r18, r17, r18;
                          "m111: bgeu a7,s2, m15;"
                         // bgeu r19, r19, r20;
                          "m112: bgeu s3,s4, m14;"
                         // bgeu r20, r21, r22;
                          "m113: bgeu s5,s6, m13;"
                         // bgeu r21, r23, r24;
                          "m114: bgeu s7,s8, m12;"
                         // bgeu r22, r25, r26;
                          "m115: bgeu s9,s10, m11;"
                         // bgeu r23, r27, r28;
                          "m116: bgeu s11,t3, m10;"
                         // bgeu r24, r29, r30;
                          "m117: bgeu t4,t5, m9;"
                         // bgeu r25, r31, r32;
                          "m118: bgeu t0,t6, m8;"
                         // bgeu r26, r1, r2;
                          "m119: bgeu ra,sp, m7;"
                         // bgeu r27, r3, r4;
                          "m120: bgeu gp,tp, m6;"
                         // bgeu r28, r5, r6;
                          "m121: bgeu t0,t1, m5;"
                         // bgeu r29, r7, r8;
                          "m122: bgeu t2,s0, m4;"
                         // bgeu r30, r9, r10;
                          "m123: bgeu s1,a0, m3;"
                         // bgeu r31, r11, r12;
                          "m124: bgeu a1,a2, m2;"
                      );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
