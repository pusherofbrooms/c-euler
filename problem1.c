/* Project Euler Problem 1
   sum all of the multiples of 3 or 5 below 1000
 */

#include <stdio.h>

int main (int argc, char *argv[]){
  int sum=0;
  for (int i=1; i <= 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  printf("%d\n", sum);
  return 0;
}