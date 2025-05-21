#include <iostream>
#include <string>
using namespace std;
int main()
{

void takeQuiz(User &user) {
    int score = 0;
    for (int i = 0; i < MAX_QUESTIONS; ++i) {
        cout << historyQuiz.questions[i].text << endl;
        for (int j = 0; j < 4; ++j) {
            cout << char('A' + j) << ". " << historyQuiz.questions[i].options[j] << endl;
        }
        cout << "Enter your answer (A/B/C/D): ";
        char answer;
        cin >> answer;
        if (toupper(answer) - 'A' == historyQuiz.questions[i].correctAnswer) {
            ++score;
        }
    }
    user.score = score;
    user.attended = true;
    cout << "You scored " << score << " out of " << MAX_QUESTIONS << " in the " << historyQuiz.title << endl;
}

int main() {
    cout << "Enter your name: ";
    string name;
    cin >> name;

    User user = {name};

    while (true) {
        if (user.attended) {
            cout << "\nYou have already attended the quiz.\n";
        } else {
            displayQuiz();
            takeQuiz(user);
        }

        cout << "\nWould you like to attempt the quiz again? (Y/N): ";
        char choice;
        cin >> choice;
        if (toupper(choice) != 'Y') {
            break;
        }
    }

    cout << "\nThank you for participating, " << user.name << "!\n";
    return 0;
}
