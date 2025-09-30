#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef enum { ROCK, PAPER, SCISSORS, SPOCK, LIZARD } p1, agent;
const char *SHAPE_STRINGS[] = {"🪨", "🗒️", "️✂️", "🖖", "🦎"};
#define WINNING_SCORE 5;
int p1_score();
int agent_score();
const size_t NUMBER_COUNT = 1;
int move;
int begin;

void generate_and_print_random_numbers() {
  for (size_t i = 0; i < NUMBER_COUNT; ++i)
    printf("%d ", rand());
  puts("");
}

int main() {
  printf("Welcome to 🪨     🗒️      ✂️      🖖      🦎! \n");
  printf("(1) Single Player \n");
  printf("(0) Exit \n");
  printf("Select and item:");
  scanf("%d", &begin);
  if (begin == 1) {
    printf("Starting game 🎉");
  } else if (begin == 0) {
    printf("Exiting game!");
    return 0;
  } else {
    printf("Error, exiting game");
    return 0;
  }
  while (true) {
    printf("Select af shape: \n");
    printf("0 🪨 || 1 🗒️ || 2 ✂️ || 3 🖖 || 4 🦎");
    switch (move) {
      case (ROCK)

    }
  }
}