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
                         // bltu r1, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r2, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r3, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r4, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r5, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r6, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r7, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r8, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r9, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r10, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r11, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r12, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r13, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r14, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r15, r11, r12;
                          "bltu a1,a2, ms;"
                         // bltu r16, r13, r14;
                          "bltu a3,a4, ms;"
                         // bltu r17, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r18, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r19, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r20, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r21, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r22, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r23, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r24, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r25, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r26, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r27, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r28, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r29, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r30, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r31, r11, r12;
                          "bltu a1,a2, ms;"
                         // bltu r1, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r2, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r3, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r4, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r5, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r6, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r7, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r8, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r9, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r10, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r11, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r12, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r13, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r14, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r15, r11, r12;
                          "bltu a1,a2, ms;"
                         // bltu r16, r13, r14;
                          "bltu a3,a4, ms;"
                         // bltu r17, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r18, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r19, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r20, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r21, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r22, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r23, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r24, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r25, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r26, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r27, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r28, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r29, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r30, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r31, r11, r12;
                          "bltu a1,a2, ms;"
                         // bltu r1, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r2, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r3, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r4, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r5, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r6, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r7, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r8, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r9, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r10, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r11, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r12, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r13, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r14, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r15, r11, r12;
                          "bltu a1,a2, ms;"
                         // bltu r16, r13, r14;
                          "bltu a3,a4, ms;"
                         // bltu r17, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r18, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r19, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r20, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r21, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r22, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r23, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r24, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r25, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r26, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r27, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r28, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r29, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r30, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r31, r11, r12;
                          "bltu a1,a2, ms;"
                         // bltu r1, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r2, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r3, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r4, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r5, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r6, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r7, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r8, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r9, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r10, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r11, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r12, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r13, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r14, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r15, r11, r12;
                          "bltu a1,a2, ms;"
                         // bltu r16, r13, r14;
                          "bltu a3,a4, ms;"
                         // bltu r17, r15, r16;
                          "bltu a5,a6, ms;"
                         // bltu r18, r17, r18;
                          "bltu a7,s2, ms;"
                         // bltu r19, r19, r20;
                          "bltu s3,s4, ms;"
                         // bltu r20, r21, r22;
                          "bltu s5,s6, ms;"
                         // bltu r21, r23, r24;
                          "bltu s7,s8, ms;"
                         // bltu r22, r25, r26;
                          "bltu s9,s10, ms;"
                         // bltu r23, r27, r28;
                          "bltu s11,t3, ms;"
                         // bltu r24, r29, r30;
                          "bltu t4,t5, ms;"
                         // bltu r25, r31, r32;
                          "bltu t6,t0, ms;"
                         // bltu r26, r1, r2;
                          "bltu ra,sp, ms;"
                         // bltu r27, r3, r4;
                          "bltu gp,tp, ms;"
                         // bltu r28, r5, r6;
                          "bltu t0,t1, ms;"
                         // bltu r29, r7, r8;
                          "bltu t2,s0, ms;"
                         // bltu r30, r9, r10;
                          "bltu s1,a0, ms;"
                         // bltu r31, r11, r12;
                          "bltu a1,a2, ms;"
 "ms: "
                      );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
