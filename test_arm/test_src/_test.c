#include <stdio.h>
#include <string.h>

#define SIZE 512
char memory[SIZE];

void do_nothing() {
  return;
}

void say_hello() {
  printf("Hello, world\n");
}

void modify_memory() {
  for (int i = 0; i <= SIZE; i++) {
    memory[i] = 'A';
  }
}

int main(int argc, char *argv[]) {
  say_hello();
  modify_memory();
  do_nothing();
  return 0;
}

