#include "PPPheaders.h"

int main()
// Rock, Paper, Scissors game.
{
  int player_choice;
  vector<int> computer_moves = {0, 1, 2};
  vector<string> move_names = {"Rock", "Paper", "Scissors"};
  int computer_choice;
  int turn = 0;

  cout << "Choose Rock(0), Paper(1), or Scissors(2). Enter (-1) to quit.\n";
  while (cin >> player_choice) {
    // Get the player_choice
    if (player_choice == -1) {
      break;
    }

    if (turn == computer_moves.size()) {
      turn = 0;
    }

    switch (player_choice) {
      case 0:
        cout << "You chose Rock.\n";
        break;
      case 1:
        cout << "You chose Paper.\n";
        break;
      case 2:
        cout << "You chose Scissors.\n";
        break;
      default:
        cout << "Please choose between number 0, 1 or 2.\n";
        continue;
    }

    // determine the computer_choice
    computer_choice = computer_moves[turn];
    cout << "Computer chose " << move_names[computer_choice]<< ".\n";
    turn++;

    // compare player_choice with computer_choice
    if (player_choice == computer_choice) {
      cout << "It's a draw!\n";
    }
    else if (player_choice == 0 && computer_choice == 2) {
      cout << "You win!\n";
    }
    else if (player_choice == 1 && computer_choice == 0) {
      cout << "You win!\n";
    }
    else if (player_choice == 2 && computer_choice == 1) {
      cout << "You win!\n";
    }
    else {
      cout << "You lose!\n";
    }

    cout << "Choose Rock(0), Paper(1), or Scissors(2).\n";
  }
  return 0;
}
