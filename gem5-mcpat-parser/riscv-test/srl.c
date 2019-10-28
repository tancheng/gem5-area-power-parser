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
                         // srl r1, r15, r16;
                          "srl ra,a5,a6;"
                         // srl r2, r17, r18;
                          "srl sp,a7,s2;"
                         // srl r3, r19, r20;
                          "srl gp,s3,s4;"
                         // srl r4, r21, r22;
                          "srl tp,s5,s6;"
                         // srl r5, r23, r24;
                          "srl t0,s7,s8;"
                         // srl r6, r25, r26;
                          "srl t1,s9,s10;"
                         // srl r7, r27, r28;
                          "srl t2,s11,t3;"
                         // srl r8, r29, r30;
                          "srl s0,t4,t5;"
                         // srl r9, r31, r32;
                          "srl s1,t6,t0;"
                         // srl r10, r1, r2;
                          "srl a0,ra,sp;"
                         // srl r11, r3, r4;
                          "srl a1,gp,tp;"
                         // srl r12, r5, r6;
                          "srl a2,t0,t1;"
                         // srl r13, r7, r8;
                          "srl a3,t2,s0;"
                         // srl r14, r9, r10;
                          "srl a4,s1,a0;"
                         // srl r15, r11, r12;
                          "srl a5,a1,a2;"
                         // srl r16, r13, r14;
                          "srl a6,a3,a4;"
                         // srl r17, r15, r16;
                          "srl a7,a5,a6;"
                         // srl r18, r17, r18;
                          "srl s2,a7,s2;"
                         // srl r19, r19, r20;
                          "srl s3,s3,s4;"
                         // srl r20, r21, r22;
                          "srl s4,s5,s6;"
                         // srl r21, r23, r24;
                          "srl s5,s7,s8;"
                         // srl r22, r25, r26;
                          "srl s6,s9,s10;"
                         // srl r23, r27, r28;
                          "srl s7,s11,t3;"
                         // srl r24, r29, r30;
                          "srl s8,t4,t5;"
                         // srl r25, r31, r32;
                          "srl s9,t6,t0;"
                         // srl r26, r1, r2;
                          "srl s10,ra,sp;"
                         // srl r27, r3, r4;
                          "srl s11,gp,tp;"
                         // srl r28, r5, r6;
                          "srl t3,t0,t1;"
                         // srl r29, r7, r8;
                          "srl t4,t2,s0;"
                         // srl r30, r9, r10;
                          "srl t5,s1,a0;"
                         // srl r31, r11, r12;
                          "srl t6,a1,a2;"
                         // srl r1, r15, r16;
                          "srl ra,a5,a6;"
                         // srl r2, r17, r18;
                          "srl sp,a7,s2;"
                         // srl r3, r19, r20;
                          "srl gp,s3,s4;"
                         // srl r4, r21, r22;
                          "srl tp,s5,s6;"
                         // srl r5, r23, r24;
                          "srl t0,s7,s8;"
                         // srl r6, r25, r26;
                          "srl t1,s9,s10;"
                         // srl r7, r27, r28;
                          "srl t2,s11,t3;"
                         // srl r8, r29, r30;
                          "srl s0,t4,t5;"
                         // srl r9, r31, r32;
                          "srl s1,t6,t0;"
                         // srl r10, r1, r2;
                          "srl a0,ra,sp;"
                         // srl r11, r3, r4;
                          "srl a1,gp,tp;"
                         // srl r12, r5, r6;
                          "srl a2,t0,t1;"
                         // srl r13, r7, r8;
                          "srl a3,t2,s0;"
                         // srl r14, r9, r10;
                          "srl a4,s1,a0;"
                         // srl r15, r11, r12;
                          "srl a5,a1,a2;"
                         // srl r16, r13, r14;
                          "srl a6,a3,a4;"
                         // srl r17, r15, r16;
                          "srl a7,a5,a6;"
                         // srl r18, r17, r18;
                          "srl s2,a7,s2;"
                         // srl r19, r19, r20;
                          "srl s3,s3,s4;"
                         // srl r20, r21, r22;
                          "srl s4,s5,s6;"
                         // srl r21, r23, r24;
                          "srl s5,s7,s8;"
                         // srl r22, r25, r26;
                          "srl s6,s9,s10;"
                         // srl r23, r27, r28;
                          "srl s7,s11,t3;"
                         // srl r24, r29, r30;
                          "srl s8,t4,t5;"
                         // srl r25, r31, r32;
                          "srl s9,t6,t0;"
                         // srl r26, r1, r2;
                          "srl s10,ra,sp;"
                         // srl r27, r3, r4;
                          "srl s11,gp,tp;"
                         // srl r28, r5, r6;
                          "srl t3,t0,t1;"
                         // srl r29, r7, r8;
                          "srl t4,t2,s0;"
                         // srl r30, r9, r10;
                          "srl t5,s1,a0;"
                         // srl r31, r11, r12;
                          "srl t6,a1,a2;"
                         // srl r1, r15, r16;
                          "srl ra,a5,a6;"
                         // srl r2, r17, r18;
                          "srl sp,a7,s2;"
                         // srl r3, r19, r20;
                          "srl gp,s3,s4;"
                         // srl r4, r21, r22;
                          "srl tp,s5,s6;"
                         // srl r5, r23, r24;
                          "srl t0,s7,s8;"
                         // srl r6, r25, r26;
                          "srl t1,s9,s10;"
                         // srl r7, r27, r28;
                          "srl t2,s11,t3;"
                         // srl r8, r29, r30;
                          "srl s0,t4,t5;"
                         // srl r9, r31, r32;
                          "srl s1,t6,t0;"
                         // srl r10, r1, r2;
                          "srl a0,ra,sp;"
                         // srl r11, r3, r4;
                          "srl a1,gp,tp;"
                         // srl r12, r5, r6;
                          "srl a2,t0,t1;"
                         // srl r13, r7, r8;
                          "srl a3,t2,s0;"
                         // srl r14, r9, r10;
                          "srl a4,s1,a0;"
                         // srl r15, r11, r12;
                          "srl a5,a1,a2;"
                         // srl r16, r13, r14;
                          "srl a6,a3,a4;"
                         // srl r17, r15, r16;
                          "srl a7,a5,a6;"
                         // srl r18, r17, r18;
                          "srl s2,a7,s2;"
                         // srl r19, r19, r20;
                          "srl s3,s3,s4;"
                         // srl r20, r21, r22;
                          "srl s4,s5,s6;"
                         // srl r21, r23, r24;
                          "srl s5,s7,s8;"
                         // srl r22, r25, r26;
                          "srl s6,s9,s10;"
                         // srl r23, r27, r28;
                          "srl s7,s11,t3;"
                         // srl r24, r29, r30;
                          "srl s8,t4,t5;"
                         // srl r25, r31, r32;
                          "srl s9,t6,t0;"
                         // srl r26, r1, r2;
                          "srl s10,ra,sp;"
                         // srl r27, r3, r4;
                          "srl s11,gp,tp;"
                         // srl r28, r5, r6;
                          "srl t3,t0,t1;"
                         // srl r29, r7, r8;
                          "srl t4,t2,s0;"
                         // srl r30, r9, r10;
                          "srl t5,s1,a0;"
                         // srl r31, r11, r12;
                          "srl t6,a1,a2;"
                         // srl r1, r15, r16;
                          "srl ra,a5,a6;"
                         // srl r2, r17, r18;
                          "srl sp,a7,s2;"
                         // srl r3, r19, r20;
                          "srl gp,s3,s4;"
                         // srl r4, r21, r22;
                          "srl tp,s5,s6;"
                         // srl r5, r23, r24;
                          "srl t0,s7,s8;"
                         // srl r6, r25, r26;
                          "srl t1,s9,s10;"
                         // srl r7, r27, r28;
                          "srl t2,s11,t3;"
                         // srl r8, r29, r30;
                          "srl s0,t4,t5;"
                         // srl r9, r31, r32;
                          "srl s1,t6,t0;"
                         // srl r10, r1, r2;
                          "srl a0,ra,sp;"
                         // srl r11, r3, r4;
                          "srl a1,gp,tp;"
                         // srl r12, r5, r6;
                          "srl a2,t0,t1;"
                         // srl r13, r7, r8;
                          "srl a3,t2,s0;"
                         // srl r14, r9, r10;
                          "srl a4,s1,a0;"
                         // srl r15, r11, r12;
                          "srl a5,a1,a2;"
                         // srl r16, r13, r14;
                          "srl a6,a3,a4;"
                         // srl r17, r15, r16;
                          "srl a7,a5,a6;"
                         // srl r18, r17, r18;
                          "srl s2,a7,s2;"
                         // srl r19, r19, r20;
                          "srl s3,s3,s4;"
                         // srl r20, r21, r22;
                          "srl s4,s5,s6;"
                         // srl r21, r23, r24;
                          "srl s5,s7,s8;"
                         // srl r22, r25, r26;
                          "srl s6,s9,s10;"
                         // srl r23, r27, r28;
                          "srl s7,s11,t3;"
                         // srl r24, r29, r30;
                          "srl s8,t4,t5;"
                         // srl r25, r31, r32;
                          "srl s9,t6,t0;"
                         // srl r26, r1, r2;
                          "srl s10,ra,sp;"
                         // srl r27, r3, r4;
                          "srl s11,gp,tp;"
                         // srl r28, r5, r6;
                          "srl t3,t0,t1;"
                         // srl r29, r7, r8;
                          "srl t4,t2,s0;"
                         // srl r30, r9, r10;
                          "srl t5,s1,a0;"
                         // srl r31, r11, r12;
                          "srl t6,a1,a2;"
                         // srl r1, r15, r16;
                          "srl ra,a5,a6;"
                         // srl r2, r17, r18;
                          "srl sp,a7,s2;"
                         // srl r3, r19, r20;
                          "srl gp,s3,s4;"
                         // srl r4, r21, r22;
                          "srl tp,s5,s6;"
                         // srl r5, r23, r24;
                          "srl t0,s7,s8;"
                         // srl r6, r25, r26;
                          "srl t1,s9,s10;"
                         // srl r7, r27, r28;
                          "srl t2,s11,t3;"
                         // srl r8, r29, r30;
                          "srl s0,t4,t5;"
                         // srl r9, r31, r32;
                          "srl s1,t6,t0;"
                         // srl r10, r1, r2;
                          "srl a0,ra,sp;"
                         // srl r11, r3, r4;
                          "srl a1,gp,tp;"
                         // srl r12, r5, r6;
                          "srl a2,t0,t1;"
                         // srl r13, r7, r8;
                          "srl a3,t2,s0;"
                         // srl r14, r9, r10;
                          "srl a4,s1,a0;"
                         // srl r15, r11, r12;
                          "srl a5,a1,a2;"
                         // srl r16, r13, r14;
                          "srl a6,a3,a4;"
                         // srl r17, r15, r16;
                          "srl a7,a5,a6;"
                         // srl r18, r17, r18;
                          "srl s2,a7,s2;"
                         // srl r19, r19, r20;
                          "srl s3,s3,s4;"
                         // srl r20, r21, r22;
                          "srl s4,s5,s6;"
                         // srl r21, r23, r24;
                          "srl s5,s7,s8;"
                         // srl r22, r25, r26;
                          "srl s6,s9,s10;"
                         // srl r23, r27, r28;
                          "srl s7,s11,t3;"
                         // srl r24, r29, r30;
                          "srl s8,t4,t5;"
                         // srl r25, r31, r32;
                          "srl s9,t6,t0;"
                         // srl r26, r1, r2;
                          "srl s10,ra,sp;"
                         // srl r27, r3, r4;
                          "srl s11,gp,tp;"
                         // srl r28, r5, r6;
                          "srl t3,t0,t1;"
                         // srl r29, r7, r8;
                          "srl t4,t2,s0;"
                         // srl r30, r9, r10;
                          "srl t5,s1,a0;"
                         // srl r31, r11, r12;
                          "srl t6,a1,a2;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
