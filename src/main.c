/* hello.c */
#include <stdio.h>

void main(void) {
  char input[100];
  for (int i = 0; i < 100; i++) {
    input[i] = 0;
  }
  
  scanf("%100s", input);
  for (int i = 0; i < 100; i++) {
    if (input[i] != 0) {
      printf("%c%d", input[i], input[i]);
    } else { break; }    
  }
}
