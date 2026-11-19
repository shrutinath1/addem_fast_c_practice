#include <stdio.h>
#include <time.h<>
#include <stdlib.h>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 3) {
      printf("Usage: ./hello.exe <name> <count>\n");
    }
    char *name = argv[1];
    long count = strtol(argv[2], NULL, 10);
    for (long i = 0; i < count; i++) {
      printf("Hello %s\n", name);
    }
    return 0;
}
