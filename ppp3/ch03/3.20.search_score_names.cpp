#include <PPPheaders.h>

int main ()
// name-and-value pairs.
{
  vector<string> names;
  vector<int> scores;
  string name;
  int score;

  cout << "Please follow the prompts to enter the candidates name and score. Once all data has been entered, enter Name: 'NoName' followed by Score: '0' to exit.\n";

  while (true) {
    cout << "Please enter your name: \n";
    cin >> name;
    cout << "Please enter your score: \n";
    cin >> score;

    if (name == "NoName" && score == 0) {
      break;
    }

    for (int i = 0; i < names.size(); i++) {
      if (name == names[i]) {
        cout << "Error: this name has already been entered!";
        return 1;
      }
    }

    names.push_back(name);
    scores.push_back(score);
  }
 
  cout << "Please enter score to output all users with the matching score: \n";
  bool score_found;

  while (cin>>score) {
    score_found = false;
    for (int i = 0; i < scores.size(); i++) {
      if (score == scores[i]) {
        score_found = true;
        cout << "Name: " << names[i] << "\tScore: " << scores[i] << "\n";
      }
    }
    if (score_found == false) {
      cout << "Score not found.\n";
    }
    cout << "Please enter score to output all users with the matching score: \n";
  }

  return 0;
}
