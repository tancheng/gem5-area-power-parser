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
                         // sltu r1, r15, r16;
                          "sltu ra,a5,a6;"
                         // sltu r2, r17, r18;
                          "sltu sp,a7,s2;"
                         // sltu r3, r19, r20;
                          "sltu gp,s3,s4;"
                         // sltu r4, r21, r22;
                          "sltu tp,s5,s6;"
                         // sltu r5, r23, r24;
                          "sltu t0,s7,s8;"
                         // sltu r6, r25, r26;
                          "sltu t1,s9,s10;"
                         // sltu r7, r27, r28;
                          "sltu t2,s11,t3;"
                         // sltu r8, r29, r30;
                          "sltu s0,t4,t5;"
                         // sltu r9, r31, r32;
                          "sltu s1,t6,t0;"
                         // sltu r10, r1, r2;
                          "sltu a0,ra,sp;"
                         // sltu r11, r3, r4;
                          "sltu a1,gp,tp;"
                         // sltu r12, r5, r6;
                          "sltu a2,t0,t1;"
                         // sltu r13, r7, r8;
                          "sltu a3,t2,s0;"
                         // sltu r14, r9, r10;
                          "sltu a4,s1,a0;"
                         // sltu r15, r11, r12;
                          "sltu a5,a1,a2;"
                         // sltu r16, r13, r14;
                          "sltu a6,a3,a4;"
                         // sltu r17, r15, r16;
                          "sltu a7,a5,a6;"
                         // sltu r18, r17, r18;
                          "sltu s2,a7,s2;"
                         // sltu r19, r19, r20;
                          "sltu s3,s3,s4;"
                         // sltu r20, r21, r22;
                          "sltu s4,s5,s6;"
                         // sltu r21, r23, r24;
                          "sltu s5,s7,s8;"
                         // sltu r22, r25, r26;
                          "sltu s6,s9,s10;"
                         // sltu r23, r27, r28;
                          "sltu s7,s11,t3;"
                         // sltu r24, r29, r30;
                          "sltu s8,t4,t5;"
                         // sltu r25, r31, r32;
                          "sltu s9,t6,t0;"
                         // sltu r26, r1, r2;
                          "sltu s10,ra,sp;"
                         // sltu r27, r3, r4;
                          "sltu s11,gp,tp;"
                         // sltu r28, r5, r6;
                          "sltu t3,t0,t1;"
                         // sltu r29, r7, r8;
                          "sltu t4,t2,s0;"
                         // sltu r30, r9, r10;
                          "sltu t5,s1,a0;"
                         // sltu r31, r11, r12;
                          "sltu t6,a1,a2;"
                         // sltu r1, r15, r16;
                          "sltu ra,a5,a6;"
                         // sltu r2, r17, r18;
                          "sltu sp,a7,s2;"
                         // sltu r3, r19, r20;
                          "sltu gp,s3,s4;"
                         // sltu r4, r21, r22;
                          "sltu tp,s5,s6;"
                         // sltu r5, r23, r24;
                          "sltu t0,s7,s8;"
                         // sltu r6, r25, r26;
                          "sltu t1,s9,s10;"
                         // sltu r7, r27, r28;
                          "sltu t2,s11,t3;"
                         // sltu r8, r29, r30;
                          "sltu s0,t4,t5;"
                         // sltu r9, r31, r32;
                          "sltu s1,t6,t0;"
                         // sltu r10, r1, r2;
                          "sltu a0,ra,sp;"
                         // sltu r11, r3, r4;
                          "sltu a1,gp,tp;"
                         // sltu r12, r5, r6;
                          "sltu a2,t0,t1;"
                         // sltu r13, r7, r8;
                          "sltu a3,t2,s0;"
                         // sltu r14, r9, r10;
                          "sltu a4,s1,a0;"
                         // sltu r15, r11, r12;
                          "sltu a5,a1,a2;"
                         // sltu r16, r13, r14;
                          "sltu a6,a3,a4;"
                         // sltu r17, r15, r16;
                          "sltu a7,a5,a6;"
                         // sltu r18, r17, r18;
                          "sltu s2,a7,s2;"
                         // sltu r19, r19, r20;
                          "sltu s3,s3,s4;"
                         // sltu r20, r21, r22;
                          "sltu s4,s5,s6;"
                         // sltu r21, r23, r24;
                          "sltu s5,s7,s8;"
                         // sltu r22, r25, r26;
                          "sltu s6,s9,s10;"
                         // sltu r23, r27, r28;
                          "sltu s7,s11,t3;"
                         // sltu r24, r29, r30;
                          "sltu s8,t4,t5;"
                         // sltu r25, r31, r32;
                          "sltu s9,t6,t0;"
                         // sltu r26, r1, r2;
                          "sltu s10,ra,sp;"
                         // sltu r27, r3, r4;
                          "sltu s11,gp,tp;"
                         // sltu r28, r5, r6;
                          "sltu t3,t0,t1;"
                         // sltu r29, r7, r8;
                          "sltu t4,t2,s0;"
                         // sltu r30, r9, r10;
                          "sltu t5,s1,a0;"
                         // sltu r31, r11, r12;
                          "sltu t6,a1,a2;"
                         // sltu r1, r15, r16;
                          "sltu ra,a5,a6;"
                         // sltu r2, r17, r18;
                          "sltu sp,a7,s2;"
                         // sltu r3, r19, r20;
                          "sltu gp,s3,s4;"
                         // sltu r4, r21, r22;
                          "sltu tp,s5,s6;"
                         // sltu r5, r23, r24;
                          "sltu t0,s7,s8;"
                         // sltu r6, r25, r26;
                          "sltu t1,s9,s10;"
                         // sltu r7, r27, r28;
                          "sltu t2,s11,t3;"
                         // sltu r8, r29, r30;
                          "sltu s0,t4,t5;"
                         // sltu r9, r31, r32;
                          "sltu s1,t6,t0;"
                         // sltu r10, r1, r2;
                          "sltu a0,ra,sp;"
                         // sltu r11, r3, r4;
                          "sltu a1,gp,tp;"
                         // sltu r12, r5, r6;
                          "sltu a2,t0,t1;"
                         // sltu r13, r7, r8;
                          "sltu a3,t2,s0;"
                         // sltu r14, r9, r10;
                          "sltu a4,s1,a0;"
                         // sltu r15, r11, r12;
                          "sltu a5,a1,a2;"
                         // sltu r16, r13, r14;
                          "sltu a6,a3,a4;"
                         // sltu r17, r15, r16;
                          "sltu a7,a5,a6;"
                         // sltu r18, r17, r18;
                          "sltu s2,a7,s2;"
                         // sltu r19, r19, r20;
                          "sltu s3,s3,s4;"
                         // sltu r20, r21, r22;
                          "sltu s4,s5,s6;"
                         // sltu r21, r23, r24;
                          "sltu s5,s7,s8;"
                         // sltu r22, r25, r26;
                          "sltu s6,s9,s10;"
                         // sltu r23, r27, r28;
                          "sltu s7,s11,t3;"
                         // sltu r24, r29, r30;
                          "sltu s8,t4,t5;"
                         // sltu r25, r31, r32;
                          "sltu s9,t6,t0;"
                         // sltu r26, r1, r2;
                          "sltu s10,ra,sp;"
                         // sltu r27, r3, r4;
                          "sltu s11,gp,tp;"
                         // sltu r28, r5, r6;
                          "sltu t3,t0,t1;"
                         // sltu r29, r7, r8;
                          "sltu t4,t2,s0;"
                         // sltu r30, r9, r10;
                          "sltu t5,s1,a0;"
                         // sltu r31, r11, r12;
                          "sltu t6,a1,a2;"
                         // sltu r1, r15, r16;
                          "sltu ra,a5,a6;"
                         // sltu r2, r17, r18;
                          "sltu sp,a7,s2;"
                         // sltu r3, r19, r20;
                          "sltu gp,s3,s4;"
                         // sltu r4, r21, r22;
                          "sltu tp,s5,s6;"
                         // sltu r5, r23, r24;
                          "sltu t0,s7,s8;"
                         // sltu r6, r25, r26;
                          "sltu t1,s9,s10;"
                         // sltu r7, r27, r28;
                          "sltu t2,s11,t3;"
                         // sltu r8, r29, r30;
                          "sltu s0,t4,t5;"
                         // sltu r9, r31, r32;
                          "sltu s1,t6,t0;"
                         // sltu r10, r1, r2;
                          "sltu a0,ra,sp;"
                         // sltu r11, r3, r4;
                          "sltu a1,gp,tp;"
                         // sltu r12, r5, r6;
                          "sltu a2,t0,t1;"
                         // sltu r13, r7, r8;
                          "sltu a3,t2,s0;"
                         // sltu r14, r9, r10;
                          "sltu a4,s1,a0;"
                         // sltu r15, r11, r12;
                          "sltu a5,a1,a2;"
                         // sltu r16, r13, r14;
                          "sltu a6,a3,a4;"
                         // sltu r17, r15, r16;
                          "sltu a7,a5,a6;"
                         // sltu r18, r17, r18;
                          "sltu s2,a7,s2;"
                         // sltu r19, r19, r20;
                          "sltu s3,s3,s4;"
                         // sltu r20, r21, r22;
                          "sltu s4,s5,s6;"
                         // sltu r21, r23, r24;
                          "sltu s5,s7,s8;"
                         // sltu r22, r25, r26;
                          "sltu s6,s9,s10;"
                         // sltu r23, r27, r28;
                          "sltu s7,s11,t3;"
                         // sltu r24, r29, r30;
                          "sltu s8,t4,t5;"
                         // sltu r25, r31, r32;
                          "sltu s9,t6,t0;"
                         // sltu r26, r1, r2;
                          "sltu s10,ra,sp;"
                         // sltu r27, r3, r4;
                          "sltu s11,gp,tp;"
                         // sltu r28, r5, r6;
                          "sltu t3,t0,t1;"
                         // sltu r29, r7, r8;
                          "sltu t4,t2,s0;"
                         // sltu r30, r9, r10;
                          "sltu t5,s1,a0;"
                         // sltu r31, r11, r12;
                          "sltu t6,a1,a2;"
                         // sltu r1, r15, r16;
                          "sltu ra,a5,a6;"
                         // sltu r2, r17, r18;
                          "sltu sp,a7,s2;"
                         // sltu r3, r19, r20;
                          "sltu gp,s3,s4;"
                         // sltu r4, r21, r22;
                          "sltu tp,s5,s6;"
                         // sltu r5, r23, r24;
                          "sltu t0,s7,s8;"
                         // sltu r6, r25, r26;
                          "sltu t1,s9,s10;"
                         // sltu r7, r27, r28;
                          "sltu t2,s11,t3;"
                         // sltu r8, r29, r30;
                          "sltu s0,t4,t5;"
                         // sltu r9, r31, r32;
                          "sltu s1,t6,t0;"
                         // sltu r10, r1, r2;
                          "sltu a0,ra,sp;"
                         // sltu r11, r3, r4;
                          "sltu a1,gp,tp;"
                         // sltu r12, r5, r6;
                          "sltu a2,t0,t1;"
                         // sltu r13, r7, r8;
                          "sltu a3,t2,s0;"
                         // sltu r14, r9, r10;
                          "sltu a4,s1,a0;"
                         // sltu r15, r11, r12;
                          "sltu a5,a1,a2;"
                         // sltu r16, r13, r14;
                          "sltu a6,a3,a4;"
                         // sltu r17, r15, r16;
                          "sltu a7,a5,a6;"
                         // sltu r18, r17, r18;
                          "sltu s2,a7,s2;"
                         // sltu r19, r19, r20;
                          "sltu s3,s3,s4;"
                         // sltu r20, r21, r22;
                          "sltu s4,s5,s6;"
                         // sltu r21, r23, r24;
                          "sltu s5,s7,s8;"
                         // sltu r22, r25, r26;
                          "sltu s6,s9,s10;"
                         // sltu r23, r27, r28;
                          "sltu s7,s11,t3;"
                         // sltu r24, r29, r30;
                          "sltu s8,t4,t5;"
                         // sltu r25, r31, r32;
                          "sltu s9,t6,t0;"
                         // sltu r26, r1, r2;
                          "sltu s10,ra,sp;"
                         // sltu r27, r3, r4;
                          "sltu s11,gp,tp;"
                         // sltu r28, r5, r6;
                          "sltu t3,t0,t1;"
                         // sltu r29, r7, r8;
                          "sltu t4,t2,s0;"
                         // sltu r30, r9, r10;
                          "sltu t5,s1,a0;"
                         // sltu r31, r11, r12;
                          "sltu t6,a1,a2;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
