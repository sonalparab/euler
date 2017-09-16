#include <stdio.h>
#include <stdlib.h>

int problem1(){
  int sum = 0;
  int i;
  for(i = 0; i < 1000; i++){
    if(i % 3 == 0)
      sum += i;
    else if(i % 5 == 0)
      sum += i;
  }
  return sum;
}

int problem2(){
  int sum = 0;
  int a = 1;
  int b = 2;
  while(b < 4000000){
    int temp = a;
    a = b;
    b = temp + b;
    //printf("a = %d, b = %d\n",a,b);
    if(a % 2 == 0)
      sum += a;
  }
  return sum;
}

int problem5(){
  int num = 20;
  int bool = 0;
  while(bool == 0){
    int i;
    for(i = 20; i > 1; i--){
      if(num % i != 0){
	bool = 1;
	break;
      }
    }
    if(bool == 1){
      num += 20;
      bool = 0;
    }
    else
      break;
  }
  return num;	
}

int main(){
  printf("The sum of all multiples of 3 and 5 less than 1000 is %d\n",problem1());
  printf("The sum of all even Fibonacci numbers less than 4 million is %d\n",problem2());
  printf("The smallest positive number evenly divisible by all numbers from 1-20 is %d\n",problem5());
}
