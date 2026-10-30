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

    for (int i = 0; i < names.size(); i++) {
      if (name == names[i]) {
        cout << "Error: this name has already been entered!";
        return 1;
      }
    }

    if (name == "NoName" && score == 0) {
      break;
    }

    names.push_back(name);
    scores.push_back(score);
  }
  for (int x = 0; x < names.size(); x++) {
    cout << "Name: " << names[x] << "\tScore: " << scores[x] << "\n";
  }

  return 0;
}
