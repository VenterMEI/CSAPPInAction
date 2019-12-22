#include <stdio.h>

typedef unsigned char * byte_pointer;

void main(void){
    int x= 97;  //binary 
    byte_pointer tmp = (byte_pointer) &x;
    printf("%d\n", (int) *tmp); // 97
    printf("%c\n", *tmp);   // a
    printf("%.2x\n",tmp[0]);    // 61
    printf("%.2x\n",tmp[1]);    // 00
    printf("%.2x\n",tmp[2]);    // 00
    printf("%.2x\n",tmp[3]);    // 00
    printf("%.2x\n",tmp[5]);    // (random number) 99
}
 