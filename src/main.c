#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef enum { ROCK, PAPER, SCISSORS, SPOCK, LIZARD } shapes;
const char *SHAPE_STRINGS[] = {"🪨", "🗒️", "️✂️", "🖖", "🦎"};
#define WINNING_SCORE 5

int p1_score = 0;
int agent_score = 0;
shapes move = ROCK;
char menu_select;
int agent_move;

int main() {
  printf("Welcome to 🪨     🗒️      ✂️      🖖      🦎! \n");
  printf("(s) Single Player \n");
  printf("(e) Exit \n");
  printf("Select and item:");
  menu_select = getchar();
  if (menu_select == 's') {
    printf("Starting game 🎉");
  } else if (menu_select == 'e') {
    printf("Exiting game!");
    return 0;
  } else {
    printf("Error, exiting the game");
    return 0;
  }
  while (true) {
    printf("Select a shape: \n");
    printf("0 🪨 || 1 🗒️ || 2 ✂️ || 3 🖖 || 4 🦎 ");
    scanf("%d", &move);
    if (move != 0 && move != 1 && move != 2 && move != 3 && move != 4) {
      printf("Shape key does not %d does not exist, try again\n", move);
      continue;
    }
    srand((unsigned)time(NULL));
    agent_move = rand() % 5;
    printf("Agent has chosen %d\n", agent_move);

    switch (move) {
    case ROCK:
      if (agent_move == SCISSORS || agent_move == LIZARD) {
        printf("Player wins");
        p1_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else if (agent_move == PAPER || agent_move == SPOCK) {
        printf("Agent wins");
        agent_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else {
        printf("Tie!");
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      }
      break;
    case PAPER:
      if (agent_move == ROCK || agent_move == SPOCK) {
        printf("Player wins\n");
        p1_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else if (agent_move == SCISSORS || agent_move == LIZARD) {
        printf("Agent wins\n");
        agent_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else {
        printf("Tie!\n");
      }
      break;
    case SCISSORS:
      if (agent_move == PAPER || agent_move == LIZARD) {
        printf("Player wins\n");
        p1_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else if (agent_move == ROCK || agent_move == SPOCK) {
        printf("Agent wins\n");
        agent_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else {
        printf("Tie!\n");
      }
      break;
    case SPOCK:
      if (agent_move == SCISSORS || agent_move == ROCK) {
        printf("Player wins\n");
        p1_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else if (agent_move == PAPER || agent_move == LIZARD) {
        printf("Agent wins\n");
        agent_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else {
        printf("Tie!\n");
      }
      break;
    case LIZARD:
      if (agent_move == PAPER || agent_move == SPOCK) {
        printf("Player wins\n");
        p1_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else if (agent_move == ROCK || agent_move == SCISSORS) {
        printf("Player wins\n");
        p1_score++;
        printf("👫:🤖 %d:%d", p1_score, agent_score);
      } else {
        printf("Tie!\n");
      }
      break;
    }
    if (p1_score == 5) {
      printf("Player is the overall winner");
      return 0;
    } else if (agent_score == 5) {
      printf("Agent is the overall winner");
    }
  }
}