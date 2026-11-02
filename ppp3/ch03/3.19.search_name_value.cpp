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
 
  cout << "Please enter a name you would like to search for: \n";
  bool name_found;

  while (cin>>name) {
    name_found = false;
    for (int i = 0; i < names.size(); i++) {
      if (name == names[i]) {
        name_found = true;
        cout << "Name: " << names[i] << "\tScore: " << scores[i] << "\n";
      }
    }
    if (name_found == false) {
      cout << "Name not found.\n";
    }
    cout << "Please enter a name you would like to search for: \n";
  }

  return 0;
}
