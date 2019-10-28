int main() 
{ 
  __asm__ __volatile__ ( 
                         "lui ra,0xb4c1f;"
                         "lui sp,0xb26ed;"
                         "lui gp,0xc9eac;"
                         "lui tp,0x34ed6;"
                         "lui t0,0xe39c;"
                         "lui t1,0x95e93;"
                         "lui t2,0x896f8;"
                         "lui s0,0x55f11;"
                         "lui s1,0xe2161;"
                         "lui a0,0x8813b;"
                         "lui a1,0xb5c8b;"
                         "lui a2,0xedcb2;"
                         "lui a3,0x144dd;"
                         "lui a4,0x72316;"
                         "lui a5,0x2b181;"
                         "lui a6,0x5e89a;"
                         "lui a7,0xf0591;"
                         "lui s2,0x687f;"
                         "lui s3,0x976;"
                         "lui s4,0x12cd3;"
                         "lui s5,0x6233c;"
                         "lui s6,0x6ebd9;"
                         "lui s7,0xcf00;"
                         "lui s8,0xf49fb;"
                         "lui s9,0xe10b6;"
                         "lui s10,0x2288f;"
                         "lui s11,0xcfa37;"
                         "lui t3,0xd7341;"
                         "lui t4,0xcca30;"
                         "lui t5,0xfd95d;"
                         "lui t6,0x7c8e3;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // sub r1, r15, r16;
                          "sub ra,a5,a6;"
                         // sub r2, r17, r18;
                          "sub sp,a7,s2;"
                         // sub r3, r19, r20;
                          "sub gp,s3,s4;"
                         // sub r4, r21, r22;
                          "sub tp,s5,s6;"
                         // sub r5, r23, r24;
                          "sub t0,s7,s8;"
                         // sub r6, r25, r26;
                          "sub t1,s9,s10;"
                         // sub r7, r27, r28;
                          "sub t2,s11,t3;"
                         // sub r8, r29, r30;
                          "sub s0,t4,t5;"
                         // sub r9, r31, r32;
                          "sub s1,t6,t0;"
                         // sub r10, r1, r2;
                          "sub a0,ra,sp;"
                         // sub r11, r3, r4;
                          "sub a1,gp,tp;"
                         // sub r12, r5, r6;
                          "sub a2,t0,t1;"
                         // sub r13, r7, r8;
                          "sub a3,t2,s0;"
                         // sub r14, r9, r10;
                          "sub a4,s1,a0;"
                         // sub r15, r11, r12;
                          "sub a5,a1,a2;"
                         // sub r16, r13, r14;
                          "sub a6,a3,a4;"
                         // sub r17, r15, r16;
                          "sub a7,a5,a6;"
                         // sub r18, r17, r18;
                          "sub s2,a7,s2;"
                         // sub r19, r19, r20;
                          "sub s3,s3,s4;"
                         // sub r20, r21, r22;
                          "sub s4,s5,s6;"
                         // sub r21, r23, r24;
                          "sub s5,s7,s8;"
                         // sub r22, r25, r26;
                          "sub s6,s9,s10;"
                         // sub r23, r27, r28;
                          "sub s7,s11,t3;"
                         // sub r24, r29, r30;
                          "sub s8,t4,t5;"
                         // sub r25, r31, r32;
                          "sub s9,t6,t0;"
                         // sub r26, r1, r2;
                          "sub s10,ra,sp;"
                         // sub r27, r3, r4;
                          "sub s11,gp,tp;"
                         // sub r28, r5, r6;
                          "sub t3,t0,t1;"
                         // sub r29, r7, r8;
                          "sub t4,t2,s0;"
                         // sub r30, r9, r10;
                          "sub t5,s1,a0;"
                         // sub r31, r11, r12;
                          "sub t6,a1,a2;"
                         // sub r1, r15, r16;
                          "sub ra,a5,a6;"
                         // sub r2, r17, r18;
                          "sub sp,a7,s2;"
                         // sub r3, r19, r20;
                          "sub gp,s3,s4;"
                         // sub r4, r21, r22;
                          "sub tp,s5,s6;"
                         // sub r5, r23, r24;
                          "sub t0,s7,s8;"
                         // sub r6, r25, r26;
                          "sub t1,s9,s10;"
                         // sub r7, r27, r28;
                          "sub t2,s11,t3;"
                         // sub r8, r29, r30;
                          "sub s0,t4,t5;"
                         // sub r9, r31, r32;
                          "sub s1,t6,t0;"
                         // sub r10, r1, r2;
                          "sub a0,ra,sp;"
                         // sub r11, r3, r4;
                          "sub a1,gp,tp;"
                         // sub r12, r5, r6;
                          "sub a2,t0,t1;"
                         // sub r13, r7, r8;
                          "sub a3,t2,s0;"
                         // sub r14, r9, r10;
                          "sub a4,s1,a0;"
                         // sub r15, r11, r12;
                          "sub a5,a1,a2;"
                         // sub r16, r13, r14;
                          "sub a6,a3,a4;"
                         // sub r17, r15, r16;
                          "sub a7,a5,a6;"
                         // sub r18, r17, r18;
                          "sub s2,a7,s2;"
                         // sub r19, r19, r20;
                          "sub s3,s3,s4;"
                         // sub r20, r21, r22;
                          "sub s4,s5,s6;"
                         // sub r21, r23, r24;
                          "sub s5,s7,s8;"
                         // sub r22, r25, r26;
                          "sub s6,s9,s10;"
                         // sub r23, r27, r28;
                          "sub s7,s11,t3;"
                         // sub r24, r29, r30;
                          "sub s8,t4,t5;"
                         // sub r25, r31, r32;
                          "sub s9,t6,t0;"
                         // sub r26, r1, r2;
                          "sub s10,ra,sp;"
                         // sub r27, r3, r4;
                          "sub s11,gp,tp;"
                         // sub r28, r5, r6;
                          "sub t3,t0,t1;"
                         // sub r29, r7, r8;
                          "sub t4,t2,s0;"
                         // sub r30, r9, r10;
                          "sub t5,s1,a0;"
                         // sub r31, r11, r12;
                          "sub t6,a1,a2;"
                         // sub r1, r15, r16;
                          "sub ra,a5,a6;"
                         // sub r2, r17, r18;
                          "sub sp,a7,s2;"
                         // sub r3, r19, r20;
                          "sub gp,s3,s4;"
                         // sub r4, r21, r22;
                          "sub tp,s5,s6;"
                         // sub r5, r23, r24;
                          "sub t0,s7,s8;"
                         // sub r6, r25, r26;
                          "sub t1,s9,s10;"
                         // sub r7, r27, r28;
                          "sub t2,s11,t3;"
                         // sub r8, r29, r30;
                          "sub s0,t4,t5;"
                         // sub r9, r31, r32;
                          "sub s1,t6,t0;"
                         // sub r10, r1, r2;
                          "sub a0,ra,sp;"
                         // sub r11, r3, r4;
                          "sub a1,gp,tp;"
                         // sub r12, r5, r6;
                          "sub a2,t0,t1;"
                         // sub r13, r7, r8;
                          "sub a3,t2,s0;"
                         // sub r14, r9, r10;
                          "sub a4,s1,a0;"
                         // sub r15, r11, r12;
                          "sub a5,a1,a2;"
                         // sub r16, r13, r14;
                          "sub a6,a3,a4;"
                         // sub r17, r15, r16;
                          "sub a7,a5,a6;"
                         // sub r18, r17, r18;
                          "sub s2,a7,s2;"
                         // sub r19, r19, r20;
                          "sub s3,s3,s4;"
                         // sub r20, r21, r22;
                          "sub s4,s5,s6;"
                         // sub r21, r23, r24;
                          "sub s5,s7,s8;"
                         // sub r22, r25, r26;
                          "sub s6,s9,s10;"
                         // sub r23, r27, r28;
                          "sub s7,s11,t3;"
                         // sub r24, r29, r30;
                          "sub s8,t4,t5;"
                         // sub r25, r31, r32;
                          "sub s9,t6,t0;"
                         // sub r26, r1, r2;
                          "sub s10,ra,sp;"
                         // sub r27, r3, r4;
                          "sub s11,gp,tp;"
                         // sub r28, r5, r6;
                          "sub t3,t0,t1;"
                         // sub r29, r7, r8;
                          "sub t4,t2,s0;"
                         // sub r30, r9, r10;
                          "sub t5,s1,a0;"
                         // sub r31, r11, r12;
                          "sub t6,a1,a2;"
                         // sub r1, r15, r16;
                          "sub ra,a5,a6;"
                         // sub r2, r17, r18;
                          "sub sp,a7,s2;"
                         // sub r3, r19, r20;
                          "sub gp,s3,s4;"
                         // sub r4, r21, r22;
                          "sub tp,s5,s6;"
                         // sub r5, r23, r24;
                          "sub t0,s7,s8;"
                         // sub r6, r25, r26;
                          "sub t1,s9,s10;"
                         // sub r7, r27, r28;
                          "sub t2,s11,t3;"
                         // sub r8, r29, r30;
                          "sub s0,t4,t5;"
                         // sub r9, r31, r32;
                          "sub s1,t6,t0;"
                         // sub r10, r1, r2;
                          "sub a0,ra,sp;"
                         // sub r11, r3, r4;
                          "sub a1,gp,tp;"
                         // sub r12, r5, r6;
                          "sub a2,t0,t1;"
                         // sub r13, r7, r8;
                          "sub a3,t2,s0;"
                         // sub r14, r9, r10;
                          "sub a4,s1,a0;"
                         // sub r15, r11, r12;
                          "sub a5,a1,a2;"
                         // sub r16, r13, r14;
                          "sub a6,a3,a4;"
                         // sub r17, r15, r16;
                          "sub a7,a5,a6;"
                         // sub r18, r17, r18;
                          "sub s2,a7,s2;"
                         // sub r19, r19, r20;
                          "sub s3,s3,s4;"
                         // sub r20, r21, r22;
                          "sub s4,s5,s6;"
                         // sub r21, r23, r24;
                          "sub s5,s7,s8;"
                         // sub r22, r25, r26;
                          "sub s6,s9,s10;"
                         // sub r23, r27, r28;
                          "sub s7,s11,t3;"
                         // sub r24, r29, r30;
                          "sub s8,t4,t5;"
                         // sub r25, r31, r32;
                          "sub s9,t6,t0;"
                         // sub r26, r1, r2;
                          "sub s10,ra,sp;"
                         // sub r27, r3, r4;
                          "sub s11,gp,tp;"
                         // sub r28, r5, r6;
                          "sub t3,t0,t1;"
                         // sub r29, r7, r8;
                          "sub t4,t2,s0;"
                         // sub r30, r9, r10;
                          "sub t5,s1,a0;"
                         // sub r31, r11, r12;
                          "sub t6,a1,a2;"
                         // sub r1, r15, r16;
                          "sub ra,a5,a6;"
                         // sub r2, r17, r18;
                          "sub sp,a7,s2;"
                         // sub r3, r19, r20;
                          "sub gp,s3,s4;"
                         // sub r4, r21, r22;
                          "sub tp,s5,s6;"
                         // sub r5, r23, r24;
                          "sub t0,s7,s8;"
                         // sub r6, r25, r26;
                          "sub t1,s9,s10;"
                         // sub r7, r27, r28;
                          "sub t2,s11,t3;"
                         // sub r8, r29, r30;
                          "sub s0,t4,t5;"
                         // sub r9, r31, r32;
                          "sub s1,t6,t0;"
                         // sub r10, r1, r2;
                          "sub a0,ra,sp;"
                         // sub r11, r3, r4;
                          "sub a1,gp,tp;"
                         // sub r12, r5, r6;
                          "sub a2,t0,t1;"
                         // sub r13, r7, r8;
                          "sub a3,t2,s0;"
                         // sub r14, r9, r10;
                          "sub a4,s1,a0;"
                         // sub r15, r11, r12;
                          "sub a5,a1,a2;"
                         // sub r16, r13, r14;
                          "sub a6,a3,a4;"
                         // sub r17, r15, r16;
                          "sub a7,a5,a6;"
                         // sub r18, r17, r18;
                          "sub s2,a7,s2;"
                         // sub r19, r19, r20;
                          "sub s3,s3,s4;"
                         // sub r20, r21, r22;
                          "sub s4,s5,s6;"
                         // sub r21, r23, r24;
                          "sub s5,s7,s8;"
                         // sub r22, r25, r26;
                          "sub s6,s9,s10;"
                         // sub r23, r27, r28;
                          "sub s7,s11,t3;"
                         // sub r24, r29, r30;
                          "sub s8,t4,t5;"
                         // sub r25, r31, r32;
                          "sub s9,t6,t0;"
                         // sub r26, r1, r2;
                          "sub s10,ra,sp;"
                         // sub r27, r3, r4;
                          "sub s11,gp,tp;"
                         // sub r28, r5, r6;
                          "sub t3,t0,t1;"
                         // sub r29, r7, r8;
                          "sub t4,t2,s0;"
                         // sub r30, r9, r10;
                          "sub t5,s1,a0;"
                         // sub r31, r11, r12;
                          "sub t6,a1,a2;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
