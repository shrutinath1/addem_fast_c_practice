#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int game_over(int answer, int first, int second, time_t start, int seconds) {
  if (answer != first + second) {
    return 1;
  }
  time_t elapsed = time(NULL) - start;
  
