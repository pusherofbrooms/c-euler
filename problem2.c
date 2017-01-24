/* Project Euler Problem 2
   sum all even numbered fibonacci numbers <= 4,000,000
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
  int fib1=1;
  int fib2=2;
  int sum=0;
  int total=2; // prime the total pump
  while (sum <= 4000000){
    sum = fib1 + fib2;
    fib1 = fib2;
    fib2 = sum;
    if (sum % 2 == 0){
      total += sum;
    }
  }
  printf("%d\n", total);
  return 0;
}
