int main() 
{ 
  __asm__ __volatile__ ( 
                         "li ra,0x6b8b4567;"
                         "li sp,0x327b23c6;"
                         "li gp,0x643c9869;"
                         "li tp,0x66334873;"
                         "li t0,0x74b0dc51;"
                         "li t1,0x19495cff;"
                         "li t2,0x2ae8944a;"
                         "li s0,0x625558ec;"
                         "li s1,0x238e1f29;"
                         "li a0,0x46e87ccd;"
                         "li a1,0x3d1b58ba;"
                         "li a2,0x507ed7ab;"
                         "li a3,0x2eb141f2;"
                         "li a4,0x41b71efb;"
                         "li a5,0x79e2a9e3;"
                         "li a6,0x7545e146;"
                         "li a7,0x515f007c;"
                         "li s2,0x5bd062c2;"
                         "li s3,0x12200854;"
                         "li s4,0x4db127f8;"
                         "li s5,0x216231b;"
                         "li s6,0x1f16e9e8;"
                         "li s7,0x1190cde7;"
                         "li s8,0x66ef438d;"
                         "li s9,0x140e0f76;"
                         "li s10,0x3352255a;"
                         "li s11,0x109cf92e;"
                         "li t3,0xded7263;"
                         "li t4,0x7fdcc233;"
                         "li t5,0x1befd79f;"
                         "li t6,0x41a7c4c9;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // bne r1, r15, r16;
                          "m1: bne a5,a6, m124;"
                         // bne r2, r17, r18;
                          "m2: bne a7,s2, m123;"
                         // bne r3, r19, r20;
                          "m3: bne s3,s4, m122;"
                         // bne r4, r21, r22;
                          "m4: bne s5,s6, m121;"
                         // bne r5, r23, r24;
                          "m5: bne s7,s8, m120;"
                         // bne r6, r25, r26;
                          "m6: bne s9,s10, m119;"
                         // bne r7, r27, r28;
                          "m7: bne s11,t3, m118;"
                         // bne r8, r29, r30;
                          "m8: bne t4,t5, m117;"
                         // bne r9, r31, r32;
                          "m9: bne t6,t0, m116;"
                         // bne r10, r1, r2;
                          "m10: bne ra,sp, m115;"
                         // bne r11, r3, r4;
                          "m11: bne gp,tp, m114;"
                         // bne r12, r5, r6;
                          "m12: bne t0,t1, m113;"
                         // bne r13, r7, r8;
                          "m13: bne t2,s0, m112;"
                         // bne r14, r9, r10;
                          "m14: bne s1,a0, m111;"
                         // bne r15, r11, r12;
                          "m15: bne a1,a2, m110;"
                         // bne r16, r13, r14;
                          "m16: bne a3,a4, m109;"
                         // bne r17, r15, r16;
                          "m17: bne a5,a6, m108;"
                         // bne r18, r17, r18;
                          "m18: bne a7,s2, m107;"
                         // bne r19, r19, r20;
                          "m19: bne s3,s4, m106;"
                         // bne r20, r21, r22;
                          "m20: bne s5,s6, m105;"
                         // bne r21, r23, r24;
                          "m21: bne s7,s8, m104;"
                         // bne r22, r25, r26;
                          "m22: bne s9,s10, m103;"
                         // bne r23, r27, r28;
                          "m23: bne s11,t3, m102;"
                         // bne r24, r29, r30;
                          "m24: bne t4,t5, m101;"
                         // bne r25, r31, r32;
                          "m25: bne t6,t0, m100;"
                         // bne r26, r1, r2;
                          "m26: bne ra,sp, m99;"
                         // bne r27, r3, r4;
                          "m27: bne gp,tp, m98;"
                         // bne r28, r5, r6;
                          "m28: bne t0,t1, m97;"
                         // bne r29, r7, r8;
                          "m29: bne t2,s0, m96;"
                         // bne r30, r9, r10;
                          "m30: bne s1,a0, m95;"
                         // bne r31, r11, r12;
                          "m31: bne a1,a2, m94;"
                         // bne r1, r15, r16;
                          "m32: bne a5,a6, m93;"
                         // bne r2, r17, r18;
                          "m33: bne a7,s2, m92;"
                         // bne r3, r19, r20;
                          "m34: bne s3,s4, m91;"
                         // bne r4, r21, r22;
                          "m35: bne s5,s6, m90;"
                         // bne r5, r23, r24;
                          "m36: bne s7,s8, m89;"
                         // bne r6, r25, r26;
                          "m37: bne s9,s10, m88;"
                         // bne r7, r27, r28;
                          "m38: bne s11,t3, m87;"
                         // bne r8, r29, r30;
                          "m39: bne t4,t5, m86;"
                         // bne r9, r31, r32;
                          "m40: bne t6,t0, m85;"
                         // bne r10, r1, r2;
                          "m41: bne ra,sp, m84;"
                         // bne r11, r3, r4;
                          "m42: bne gp,tp, m83;"
                         // bne r12, r5, r6;
                          "m43: bne t0,t1, m82;"
                         // bne r13, r7, r8;
                          "m44: bne t2,s0, m81;"
                         // bne r14, r9, r10;
                          "m45: bne s1,a0, m80;"
                         // bne r15, r11, r12;
                          "m46: bne a1,a2, m79;"
                         // bne r16, r13, r14;
                          "m47: bne a3,a4, m78;"
                         // bne r17, r15, r16;
                          "m48: bne a5,a6, m77;"
                         // bne r18, r17, r18;
                          "m49: bne a7,s2, m76;"
                         // bne r19, r19, r20;
                          "m50: bne s3,s4, m75;"
                         // bne r20, r21, r22;
                          "m51: bne s5,s6, m74;"
                         // bne r21, r23, r24;
                          "m52: bne s7,s8, m73;"
                         // bne r22, r25, r26;
                          "m53: bne s9,s10, m72;"
                         // bne r23, r27, r28;
                          "m54: bne s11,t3, m71;"
                         // bne r24, r29, r30;
                          "m55: bne t4,t5, m70;"
                         // bne r25, r31, r32;
                          "m56: bne t6,t0, m69;"
                         // bne r26, r1, r2;
                          "m57: bne ra,sp, m68;"
                         // bne r27, r3, r4;
                          "m58: bne gp,tp, m67;"
                         // bne r28, r5, r6;
                          "m59: bne t0,t1, m66;"
                         // bne r29, r7, r8;
                          "m60: bne t2,s0, m65;"
                         // bne r30, r9, r10;
                          "m61: bne s1,a0, m64;"
                         // bne r31, r11, r12;
                          "m62: bne a1,a2, m63;"
                         // bne r1, r15, r16;
                          "m63: bne a5,a6, ms;"
                         // bne r2, r17, r18;
                          "m64: bne a7,s2, m62;"
                         // bne r3, r19, r20;
                          "m65: bne s3,s4, m61;"
                         // bne r4, r21, r22;
                          "m66: bne s5,s6, m60;"
                         // bne r5, r23, r24;
                          "m67: bne s7,s8, m59;"
                         // bne r6, r25, r26;
                          "m68: bne s9,s10, m58;"
                         // bne r7, r27, r28;
                          "m69: bne s11,t3, m57;"
                         // bne r8, r29, r30;
                          "m70: bne t4,t5, m56;"
                         // bne r9, r31, r32;
                          "m71: bne t6,t0, m55;"
                         // bne r10, r1, r2;
                          "m72: bne ra,sp, m54;"
                         // bne r11, r3, r4;
                          "m73: bne gp,tp, m53;"
                         // bne r12, r5, r6;
                          "m74: bne t0,t1, m52;"
                         // bne r13, r7, r8;
                          "m75: bne t2,s0, m51;"
                         // bne r14, r9, r10;
                          "m76: bne s1,a0, m50;"
                         // bne r15, r11, r12;
                          "m77: bne a1,a2, m49;"
                         // bne r16, r13, r14;
                          "m78: bne a3,a4, m48;"
                         // bne r17, r15, r16;
                          "m79: bne a5,a6, m47;"
                         // bne r18, r17, r18;
                          "m80: bne a7,s2, m46;"
                         // bne r19, r19, r20;
                          "m81: bne s3,s4, m45;"
                         // bne r20, r21, r22;
                          "m82: bne s5,s6, m44;"
                         // bne r21, r23, r24;
                          "m83: bne s7,s8, m43;"
                         // bne r22, r25, r26;
                          "m84: bne s9,s10, m42;"
                         // bne r23, r27, r28;
                          "m85: bne s11,t3, m41;"
                         // bne r24, r29, r30;
                          "m86: bne t4,t5, m40;"
                         // bne r25, r31, r32;
                          "m87: bne t6,t0, m39;"
                         // bne r26, r1, r2;
                          "m88: bne ra,sp, m38;"
                         // bne r27, r3, r4;
                          "m89: bne gp,tp, m37;"
                         // bne r28, r5, r6;
                          "m90: bne t0,t1, m36;"
                         // bne r29, r7, r8;
                          "m91: bne t2,s0, m35;"
                         // bne r30, r9, r10;
                          "m92: bne s1,a0, m34;"
                         // bne r31, r11, r12;
                          "m93: bne a1,a2, m33;"
                         // bne r1, r15, r16;
                          "m94: bne a5,a6, m32;"
                         // bne r2, r17, r18;
                          "m95: bne a7,s2, m31;"
                         // bne r3, r19, r20;
                          "m96: bne s3,s4, m30;"
                         // bne r4, r21, r22;
                          "m97: bne s5,s6, m29;"
                         // bne r5, r23, r24;
                          "m98: bne s7,s8, m28;"
                         // bne r6, r25, r26;
                          "m99: bne s9,s10, m27;"
                         // bne r7, r27, r28;
                          "m100: bne s11,t3, m26;"
                         // bne r8, r29, r30;
                          "m101: bne t4,t5, m25;"
                         // bne r9, r31, r32;
                          "m102: bne t6,t0, m24;"
                         // bne r10, r1, r2;
                          "m103: bne ra,sp, m23;"
                         // bne r11, r3, r4;
                          "m104: bne gp,tp, m22;"
                         // bne r12, r5, r6;
                          "m105: bne t0,t1, m21;"
                         // bne r13, r7, r8;
                          "m106: bne t2,s0, m20;"
                         // bne r14, r9, r10;
                          "m107: bne s1,a0, m19;"
                         // bne r15, r11, r12;
                          "m108: bne a1,a2, m18;"
                         // bne r16, r13, r14;
                          "m109: bne a3,a4, m17;"
                         // bne r17, r15, r16;
                          "m110: bne a5,a6, m16;"
                         // bne r18, r17, r18;
                          "m111: bne a7,s2, m15;"
                         // bne r19, r19, r20;
                          "m112: bne s3,s4, m14;"
                         // bne r20, r21, r22;
                          "m113: bne s5,s6, m13;"
                         // bne r21, r23, r24;
                          "m114: bne s7,s8, m12;"
                         // bne r22, r25, r26;
                          "m115: bne s9,s10, m11;"
                         // bne r23, r27, r28;
                          "m116: bne s11,t3, m10;"
                         // bne r24, r29, r30;
                          "m117: bne t4,t5, m9;"
                         // bne r25, r31, r32;
                          "m118: bne t6,t0, m8;"
                         // bne r26, r1, r2;
                          "m119: bne ra,sp, m7;"
                         // bne r27, r3, r4;
                          "m120: bne gp,tp, m6;"
                         // bne r28, r5, r6;
                          "m121: bne t0,t1, m5;"
                         // bne r29, r7, r8;
                          "m122: bne t2,s0, m4;"
                         // bne r30, r9, r10;
                          "m123: bne s1,a0, m3;"
                         // bne r31, r11, r12;
                          "m124: bne a1,a2, m2;"
                      );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
