#include <stdio.h>

int pointer() {
  int myAge = 43;
  printf("%d", myAge);	// outputs the value of myAge, which is 43
  printf("%p", &myAge);	// outputs the memory address of myAge
}
