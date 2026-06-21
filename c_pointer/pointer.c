#include <stdio.h>

int pointer() {
  // int myAge = 43;
  // printf("%d", myAge);	// outputs the value of myAge, which is 43
  // printf("%p", &myAge);	// outputs the memory address of myAge

  int myAge = 43;	// an int variable
  int* ptr = &myAge;	// a pointer variable, with the name ptr, that stores the address of myAge

  printf("%d\n", myAge);	// output the value of myAge, which is 43
  printf("%p\n", &myAge);	// output the memory address of myAge
  printf("%p\n", ptr); 		// output the memory address of myAge with the pointer
}
