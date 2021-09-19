#include <stdio.h>

int main(){
  unsigned int a = 0;
  printf("%u\n", a);    /* prints int */
  printf("%u\n", a - 1);/* substracting 1 from an insigned int with value 0 leaves 4294967295 (the max value of an unsigned int)*/

  char s[] = "yes";
  printf("%c\n", s[1]); /* prints 2nd char */
  printf("%c\n", s[3]); /* out of bounds prints nothing */
  printf("%s\n", s);    /* prints entire string */
  
  char c = 'c';
  printf("%c\n", c);

  float f = 3.1415;
  printf("%0.2f\n", f); /* prints 2 decimal places */
  return 0;
}
