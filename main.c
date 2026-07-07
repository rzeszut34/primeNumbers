#include<stdio.h>
#include<stdbool.h>


#define NUMBER_OF_PRIMES 1000

int main()
{
  int i = 2;
  int primesCount = 0;
  int primes[NUMBER_OF_PRIMES];
  while(primesCount < NUMBER_OF_PRIMES){
    bool isPrime = true;
    for(int j = 2; j < i/2+1; ++j){
      for(int temp_j = j; temp_j <= i; temp_j +=j){
        if(temp_j == i){
          isPrime = false;
          continue;
        }
      }
      if(isPrime == false){
        continue;
      }
    }
    if(isPrime){
      primes[primesCount] = i;
      ++primesCount;
    }
    ++i;
  }

  for (int index = 0; index < NUMBER_OF_PRIMES; ++index){
    printf("%d ", primes[index]);
  }
  return 0;
}
