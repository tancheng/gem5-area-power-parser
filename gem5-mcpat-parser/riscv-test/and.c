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
                         // and r1, r15, r16;
                          "and ra,a5,a6;"
                         // and r2, r17, r18;
                          "and sp,a7,s2;"
                         // and r3, r19, r20;
                          "and gp,s3,s4;"
                         // and r4, r21, r22;
                          "and tp,s5,s6;"
                         // and r5, r23, r24;
                          "and t0,s7,s8;"
                         // and r6, r25, r26;
                          "and t1,s9,s10;"
                         // and r7, r27, r28;
                          "and t2,s11,t3;"
                         // and r8, r29, r30;
                          "and s0,t4,t5;"
                         // and r9, r31, r32;
                          "and s1,t6,t0;"
                         // and r10, r1, r2;
                          "and a0,ra,sp;"
                         // and r11, r3, r4;
                          "and a1,gp,tp;"
                         // and r12, r5, r6;
                          "and a2,t0,t1;"
                         // and r13, r7, r8;
                          "and a3,t2,s0;"
                         // and r14, r9, r10;
                          "and a4,s1,a0;"
                         // and r15, r11, r12;
                          "and a5,a1,a2;"
                         // and r16, r13, r14;
                          "and a6,a3,a4;"
                         // and r17, r15, r16;
                          "and a7,a5,a6;"
                         // and r18, r17, r18;
                          "and s2,a7,s2;"
                         // and r19, r19, r20;
                          "and s3,s3,s4;"
                         // and r20, r21, r22;
                          "and s4,s5,s6;"
                         // and r21, r23, r24;
                          "and s5,s7,s8;"
                         // and r22, r25, r26;
                          "and s6,s9,s10;"
                         // and r23, r27, r28;
                          "and s7,s11,t3;"
                         // and r24, r29, r30;
                          "and s8,t4,t5;"
                         // and r25, r31, r32;
                          "and s9,t6,t0;"
                         // and r26, r1, r2;
                          "and s10,ra,sp;"
                         // and r27, r3, r4;
                          "and s11,gp,tp;"
                         // and r28, r5, r6;
                          "and t3,t0,t1;"
                         // and r29, r7, r8;
                          "and t4,t2,s0;"
                         // and r30, r9, r10;
                          "and t5,s1,a0;"
                         // and r31, r11, r12;
                          "and t6,a1,a2;"
                         // and r1, r15, r16;
                          "and ra,a5,a6;"
                         // and r2, r17, r18;
                          "and sp,a7,s2;"
                         // and r3, r19, r20;
                          "and gp,s3,s4;"
                         // and r4, r21, r22;
                          "and tp,s5,s6;"
                         // and r5, r23, r24;
                          "and t0,s7,s8;"
                         // and r6, r25, r26;
                          "and t1,s9,s10;"
                         // and r7, r27, r28;
                          "and t2,s11,t3;"
                         // and r8, r29, r30;
                          "and s0,t4,t5;"
                         // and r9, r31, r32;
                          "and s1,t6,t0;"
                         // and r10, r1, r2;
                          "and a0,ra,sp;"
                         // and r11, r3, r4;
                          "and a1,gp,tp;"
                         // and r12, r5, r6;
                          "and a2,t0,t1;"
                         // and r13, r7, r8;
                          "and a3,t2,s0;"
                         // and r14, r9, r10;
                          "and a4,s1,a0;"
                         // and r15, r11, r12;
                          "and a5,a1,a2;"
                         // and r16, r13, r14;
                          "and a6,a3,a4;"
                         // and r17, r15, r16;
                          "and a7,a5,a6;"
                         // and r18, r17, r18;
                          "and s2,a7,s2;"
                         // and r19, r19, r20;
                          "and s3,s3,s4;"
                         // and r20, r21, r22;
                          "and s4,s5,s6;"
                         // and r21, r23, r24;
                          "and s5,s7,s8;"
                         // and r22, r25, r26;
                          "and s6,s9,s10;"
                         // and r23, r27, r28;
                          "and s7,s11,t3;"
                         // and r24, r29, r30;
                          "and s8,t4,t5;"
                         // and r25, r31, r32;
                          "and s9,t6,t0;"
                         // and r26, r1, r2;
                          "and s10,ra,sp;"
                         // and r27, r3, r4;
                          "and s11,gp,tp;"
                         // and r28, r5, r6;
                          "and t3,t0,t1;"
                         // and r29, r7, r8;
                          "and t4,t2,s0;"
                         // and r30, r9, r10;
                          "and t5,s1,a0;"
                         // and r31, r11, r12;
                          "and t6,a1,a2;"
                         // and r1, r15, r16;
                          "and ra,a5,a6;"
                         // and r2, r17, r18;
                          "and sp,a7,s2;"
                         // and r3, r19, r20;
                          "and gp,s3,s4;"
                         // and r4, r21, r22;
                          "and tp,s5,s6;"
                         // and r5, r23, r24;
                          "and t0,s7,s8;"
                         // and r6, r25, r26;
                          "and t1,s9,s10;"
                         // and r7, r27, r28;
                          "and t2,s11,t3;"
                         // and r8, r29, r30;
                          "and s0,t4,t5;"
                         // and r9, r31, r32;
                          "and s1,t6,t0;"
                         // and r10, r1, r2;
                          "and a0,ra,sp;"
                         // and r11, r3, r4;
                          "and a1,gp,tp;"
                         // and r12, r5, r6;
                          "and a2,t0,t1;"
                         // and r13, r7, r8;
                          "and a3,t2,s0;"
                         // and r14, r9, r10;
                          "and a4,s1,a0;"
                         // and r15, r11, r12;
                          "and a5,a1,a2;"
                         // and r16, r13, r14;
                          "and a6,a3,a4;"
                         // and r17, r15, r16;
                          "and a7,a5,a6;"
                         // and r18, r17, r18;
                          "and s2,a7,s2;"
                         // and r19, r19, r20;
                          "and s3,s3,s4;"
                         // and r20, r21, r22;
                          "and s4,s5,s6;"
                         // and r21, r23, r24;
                          "and s5,s7,s8;"
                         // and r22, r25, r26;
                          "and s6,s9,s10;"
                         // and r23, r27, r28;
                          "and s7,s11,t3;"
                         // and r24, r29, r30;
                          "and s8,t4,t5;"
                         // and r25, r31, r32;
                          "and s9,t6,t0;"
                         // and r26, r1, r2;
                          "and s10,ra,sp;"
                         // and r27, r3, r4;
                          "and s11,gp,tp;"
                         // and r28, r5, r6;
                          "and t3,t0,t1;"
                         // and r29, r7, r8;
                          "and t4,t2,s0;"
                         // and r30, r9, r10;
                          "and t5,s1,a0;"
                         // and r31, r11, r12;
                          "and t6,a1,a2;"
                         // and r1, r15, r16;
                          "and ra,a5,a6;"
                         // and r2, r17, r18;
                          "and sp,a7,s2;"
                         // and r3, r19, r20;
                          "and gp,s3,s4;"
                         // and r4, r21, r22;
                          "and tp,s5,s6;"
                         // and r5, r23, r24;
                          "and t0,s7,s8;"
                         // and r6, r25, r26;
                          "and t1,s9,s10;"
                         // and r7, r27, r28;
                          "and t2,s11,t3;"
                         // and r8, r29, r30;
                          "and s0,t4,t5;"
                         // and r9, r31, r32;
                          "and s1,t6,t0;"
                         // and r10, r1, r2;
                          "and a0,ra,sp;"
                         // and r11, r3, r4;
                          "and a1,gp,tp;"
                         // and r12, r5, r6;
                          "and a2,t0,t1;"
                         // and r13, r7, r8;
                          "and a3,t2,s0;"
                         // and r14, r9, r10;
                          "and a4,s1,a0;"
                         // and r15, r11, r12;
                          "and a5,a1,a2;"
                         // and r16, r13, r14;
                          "and a6,a3,a4;"
                         // and r17, r15, r16;
                          "and a7,a5,a6;"
                         // and r18, r17, r18;
                          "and s2,a7,s2;"
                         // and r19, r19, r20;
                          "and s3,s3,s4;"
                         // and r20, r21, r22;
                          "and s4,s5,s6;"
                         // and r21, r23, r24;
                          "and s5,s7,s8;"
                         // and r22, r25, r26;
                          "and s6,s9,s10;"
                         // and r23, r27, r28;
                          "and s7,s11,t3;"
                         // and r24, r29, r30;
                          "and s8,t4,t5;"
                         // and r25, r31, r32;
                          "and s9,t6,t0;"
                         // and r26, r1, r2;
                          "and s10,ra,sp;"
                         // and r27, r3, r4;
                          "and s11,gp,tp;"
                         // and r28, r5, r6;
                          "and t3,t0,t1;"
                         // and r29, r7, r8;
                          "and t4,t2,s0;"
                         // and r30, r9, r10;
                          "and t5,s1,a0;"
                         // and r31, r11, r12;
                          "and t6,a1,a2;"
                         // and r1, r15, r16;
                          "and ra,a5,a6;"
                         // and r2, r17, r18;
                          "and sp,a7,s2;"
                         // and r3, r19, r20;
                          "and gp,s3,s4;"
                         // and r4, r21, r22;
                          "and tp,s5,s6;"
                         // and r5, r23, r24;
                          "and t0,s7,s8;"
                         // and r6, r25, r26;
                          "and t1,s9,s10;"
                         // and r7, r27, r28;
                          "and t2,s11,t3;"
                         // and r8, r29, r30;
                          "and s0,t4,t5;"
                         // and r9, r31, r32;
                          "and s1,t6,t0;"
                         // and r10, r1, r2;
                          "and a0,ra,sp;"
                         // and r11, r3, r4;
                          "and a1,gp,tp;"
                         // and r12, r5, r6;
                          "and a2,t0,t1;"
                         // and r13, r7, r8;
                          "and a3,t2,s0;"
                         // and r14, r9, r10;
                          "and a4,s1,a0;"
                         // and r15, r11, r12;
                          "and a5,a1,a2;"
                         // and r16, r13, r14;
                          "and a6,a3,a4;"
                         // and r17, r15, r16;
                          "and a7,a5,a6;"
                         // and r18, r17, r18;
                          "and s2,a7,s2;"
                         // and r19, r19, r20;
                          "and s3,s3,s4;"
                         // and r20, r21, r22;
                          "and s4,s5,s6;"
                         // and r21, r23, r24;
                          "and s5,s7,s8;"
                         // and r22, r25, r26;
                          "and s6,s9,s10;"
                         // and r23, r27, r28;
                          "and s7,s11,t3;"
                         // and r24, r29, r30;
                          "and s8,t4,t5;"
                         // and r25, r31, r32;
                          "and s9,t6,t0;"
                         // and r26, r1, r2;
                          "and s10,ra,sp;"
                         // and r27, r3, r4;
                          "and s11,gp,tp;"
                         // and r28, r5, r6;
                          "and t3,t0,t1;"
                         // and r29, r7, r8;
                          "and t4,t2,s0;"
                         // and r30, r9, r10;
                          "and t5,s1,a0;"
                         // and r31, r11, r12;
                          "and t6,a1,a2;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
