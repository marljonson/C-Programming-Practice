#include <stdio.h>

int main() {
  int age = 25;		// A normal integer variable
  int *ptr = &age;	// A pointer storing the memory address of 'age'

  printf("Value of age: %d\n", age);
  printf("Address of age: %p\n", ptr);
}
