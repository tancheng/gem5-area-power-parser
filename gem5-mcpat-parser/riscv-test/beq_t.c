int main() 
{ 
  __asm__ __volatile__ ( 
                         "li ra,0x6b8b4567;"
                         "li sp,0x6b8b4567;"
                         "li gp,0x6b8b4567;"
                         "li tp,0x6b8b4567;"
                         "li t0,0x6b8b4567;"
                         "li t1,0x6b8b4567;"
                         "li t2,0x6b8b4567;"
                         "li s0,0x6b8b4567;"
                         "li s1,0x6b8b4567;"
                         "li a0,0x6b8b4567;"
                         "li a1,0x6b8b4567;"
                         "li a2,0x6b8b4567;"
                         "li a3,0x6b8b4567;"
                         "li a4,0x6b8b4567;"
                         "li a5,0x6b8b4567;"
                         "li a6,0x6b8b4567;"
                         "li a7,0x6b8b4567;"
                         "li s2,0x6b8b4567;"
                         "li s3,0x6b8b4567;"
                         "li s4,0x6b8b4567;"
                         "li s5,0x6b8b4567;"
                         "li s6,0x6b8b4567;"
                         "li s7,0x6b8b4567;"
                         "li s8,0x6b8b4567;"
                         "li s9,0x6b8b4567;"
                         "li s10,0x6b8b4567;"
                         "li s11,0x6b8b4567;"
                         "li t3,0x6b8b4567;"
                         "li t4,0x6b8b4567;"
                         "li t5,0x6b8b4567;"
                         "li t6,0x6b8b4567;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // beq r1, r15, r16;
                          "m1: beq a5,a6, m124;"
                         // beq r2, r17, r18;
                          "m2: beq a7,s2, m123;"
                         // beq r3, r19, r20;
                          "m3: beq s3,s4, m122;"
                         // beq r4, r21, r22;
                          "m4: beq s5,s6, m121;"
                         // beq r5, r23, r24;
                          "m5: beq s7,s8, m120;"
                         // beq r6, r25, r26;
                          "m6: beq s9,s10, m119;"
                         // beq r7, r27, r28;
                          "m7: beq s11,t3, m118;"
                         // beq r8, r29, r30;
                          "m8: beq t4,t5, m117;"
                         // beq r9, r31, r32;
                          "m9: beq t6,t0, m116;"
                         // beq r10, r1, r2;
                          "m10: beq ra,sp, m115;"
                         // beq r11, r3, r4;
                          "m11: beq gp,tp, m114;"
                         // beq r12, r5, r6;
                          "m12: beq t0,t1, m113;"
                         // beq r13, r7, r8;
                          "m13: beq t2,s0, m112;"
                         // beq r14, r9, r10;
                          "m14: beq s1,a0, m111;"
                         // beq r15, r11, r12;
                          "m15: beq a1,a2, m110;"
                         // beq r16, r13, r14;
                          "m16: beq a3,a4, m109;"
                         // beq r17, r15, r16;
                          "m17: beq a5,a6, m108;"
                         // beq r18, r17, r18;
                          "m18: beq a7,s2, m107;"
                         // beq r19, r19, r20;
                          "m19: beq s3,s4, m106;"
                         // beq r20, r21, r22;
                          "m20: beq s5,s6, m105;"
                         // beq r21, r23, r24;
                          "m21: beq s7,s8, m104;"
                         // beq r22, r25, r26;
                          "m22: beq s9,s10, m103;"
                         // beq r23, r27, r28;
                          "m23: beq s11,t3, m102;"
                         // beq r24, r29, r30;
                          "m24: beq t4,t5, m101;"
                         // beq r25, r31, r32;
                          "m25: beq t6,t0, m100;"
                         // beq r26, r1, r2;
                          "m26: beq ra,sp, m99;"
                         // beq r27, r3, r4;
                          "m27: beq gp,tp, m98;"
                         // beq r28, r5, r6;
                          "m28: beq t0,t1, m97;"
                         // beq r29, r7, r8;
                          "m29: beq t2,s0, m96;"
                         // beq r30, r9, r10;
                          "m30: beq s1,a0, m95;"
                         // beq r31, r11, r12;
                          "m31: beq a1,a2, m94;"
                         // beq r1, r15, r16;
                          "m32: beq a5,a6, m93;"
                         // beq r2, r17, r18;
                          "m33: beq a7,s2, m92;"
                         // beq r3, r19, r20;
                          "m34: beq s3,s4, m91;"
                         // beq r4, r21, r22;
                          "m35: beq s5,s6, m90;"
                         // beq r5, r23, r24;
                          "m36: beq s7,s8, m89;"
                         // beq r6, r25, r26;
                          "m37: beq s9,s10, m88;"
                         // beq r7, r27, r28;
                          "m38: beq s11,t3, m87;"
                         // beq r8, r29, r30;
                          "m39: beq t4,t5, m86;"
                         // beq r9, r31, r32;
                          "m40: beq t6,t0, m85;"
                         // beq r10, r1, r2;
                          "m41: beq ra,sp, m84;"
                         // beq r11, r3, r4;
                          "m42: beq gp,tp, m83;"
                         // beq r12, r5, r6;
                          "m43: beq t0,t1, m82;"
                         // beq r13, r7, r8;
                          "m44: beq t2,s0, m81;"
                         // beq r14, r9, r10;
                          "m45: beq s1,a0, m80;"
                         // beq r15, r11, r12;
                          "m46: beq a1,a2, m79;"
                         // beq r16, r13, r14;
                          "m47: beq a3,a4, m78;"
                         // beq r17, r15, r16;
                          "m48: beq a5,a6, m77;"
                         // beq r18, r17, r18;
                          "m49: beq a7,s2, m76;"
                         // beq r19, r19, r20;
                          "m50: beq s3,s4, m75;"
                         // beq r20, r21, r22;
                          "m51: beq s5,s6, m74;"
                         // beq r21, r23, r24;
                          "m52: beq s7,s8, m73;"
                         // beq r22, r25, r26;
                          "m53: beq s9,s10, m72;"
                         // beq r23, r27, r28;
                          "m54: beq s11,t3, m71;"
                         // beq r24, r29, r30;
                          "m55: beq t4,t5, m70;"
                         // beq r25, r31, r32;
                          "m56: beq t6,t0, m69;"
                         // beq r26, r1, r2;
                          "m57: beq ra,sp, m68;"
                         // beq r27, r3, r4;
                          "m58: beq gp,tp, m67;"
                         // beq r28, r5, r6;
                          "m59: beq t0,t1, m66;"
                         // beq r29, r7, r8;
                          "m60: beq t2,s0, m65;"
                         // beq r30, r9, r10;
                          "m61: beq s1,a0, m64;"
                         // beq r31, r11, r12;
                          "m62: beq a1,a2, m63;"
                         // beq r1, r15, r16;
                          "m63: beq a5,a6, ms;"
                         // beq r2, r17, r18;
                          "m64: beq a7,s2, m62;"
                         // beq r3, r19, r20;
                          "m65: beq s3,s4, m61;"
                         // beq r4, r21, r22;
                          "m66: beq s5,s6, m60;"
                         // beq r5, r23, r24;
                          "m67: beq s7,s8, m59;"
                         // beq r6, r25, r26;
                          "m68: beq s9,s10, m58;"
                         // beq r7, r27, r28;
                          "m69: beq s11,t3, m57;"
                         // beq r8, r29, r30;
                          "m70: beq t4,t5, m56;"
                         // beq r9, r31, r32;
                          "m71: beq t6,t0, m55;"
                         // beq r10, r1, r2;
                          "m72: beq ra,sp, m54;"
                         // beq r11, r3, r4;
                          "m73: beq gp,tp, m53;"
                         // beq r12, r5, r6;
                          "m74: beq t0,t1, m52;"
                         // beq r13, r7, r8;
                          "m75: beq t2,s0, m51;"
                         // beq r14, r9, r10;
                          "m76: beq s1,a0, m50;"
                         // beq r15, r11, r12;
                          "m77: beq a1,a2, m49;"
                         // beq r16, r13, r14;
                          "m78: beq a3,a4, m48;"
                         // beq r17, r15, r16;
                          "m79: beq a5,a6, m47;"
                         // beq r18, r17, r18;
                          "m80: beq a7,s2, m46;"
                         // beq r19, r19, r20;
                          "m81: beq s3,s4, m45;"
                         // beq r20, r21, r22;
                          "m82: beq s5,s6, m44;"
                         // beq r21, r23, r24;
                          "m83: beq s7,s8, m43;"
                         // beq r22, r25, r26;
                          "m84: beq s9,s10, m42;"
                         // beq r23, r27, r28;
                          "m85: beq s11,t3, m41;"
                         // beq r24, r29, r30;
                          "m86: beq t4,t5, m40;"
                         // beq r25, r31, r32;
                          "m87: beq t6,t0, m39;"
                         // beq r26, r1, r2;
                          "m88: beq ra,sp, m38;"
                         // beq r27, r3, r4;
                          "m89: beq gp,tp, m37;"
                         // beq r28, r5, r6;
                          "m90: beq t0,t1, m36;"
                         // beq r29, r7, r8;
                          "m91: beq t2,s0, m35;"
                         // beq r30, r9, r10;
                          "m92: beq s1,a0, m34;"
                         // beq r31, r11, r12;
                          "m93: beq a1,a2, m33;"
                         // beq r1, r15, r16;
                          "m94: beq a5,a6, m32;"
                         // beq r2, r17, r18;
                          "m95: beq a7,s2, m31;"
                         // beq r3, r19, r20;
                          "m96: beq s3,s4, m30;"
                         // beq r4, r21, r22;
                          "m97: beq s5,s6, m29;"
                         // beq r5, r23, r24;
                          "m98: beq s7,s8, m28;"
                         // beq r6, r25, r26;
                          "m99: beq s9,s10, m27;"
                         // beq r7, r27, r28;
                          "m100: beq s11,t3, m26;"
                         // beq r8, r29, r30;
                          "m101: beq t4,t5, m25;"
                         // beq r9, r31, r32;
                          "m102: beq t6,t0, m24;"
                         // beq r10, r1, r2;
                          "m103: beq ra,sp, m23;"
                         // beq r11, r3, r4;
                          "m104: beq gp,tp, m22;"
                         // beq r12, r5, r6;
                          "m105: beq t0,t1, m21;"
                         // beq r13, r7, r8;
                          "m106: beq t2,s0, m20;"
                         // beq r14, r9, r10;
                          "m107: beq s1,a0, m19;"
                         // beq r15, r11, r12;
                          "m108: beq a1,a2, m18;"
                         // beq r16, r13, r14;
                          "m109: beq a3,a4, m17;"
                         // beq r17, r15, r16;
                          "m110: beq a5,a6, m16;"
                         // beq r18, r17, r18;
                          "m111: beq a7,s2, m15;"
                         // beq r19, r19, r20;
                          "m112: beq s3,s4, m14;"
                         // beq r20, r21, r22;
                          "m113: beq s5,s6, m13;"
                         // beq r21, r23, r24;
                          "m114: beq s7,s8, m12;"
                         // beq r22, r25, r26;
                          "m115: beq s9,s10, m11;"
                         // beq r23, r27, r28;
                          "m116: beq s11,t3, m10;"
                         // beq r24, r29, r30;
                          "m117: beq t4,t5, m9;"
                         // beq r25, r31, r32;
                          "m118: beq t6,t0, m8;"
                         // beq r26, r1, r2;
                          "m119: beq ra,sp, m7;"
                         // beq r27, r3, r4;
                          "m120: beq gp,tp, m6;"
                         // beq r28, r5, r6;
                          "m121: beq t0,t1, m5;"
                         // beq r29, r7, r8;
                          "m122: beq t2,s0, m4;"
                         // beq r30, r9, r10;
                          "m123: beq s1,a0, m3;"
                         // beq r31, r11, r12;
                          "m124: beq a1,a2, m2;"
                      );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
