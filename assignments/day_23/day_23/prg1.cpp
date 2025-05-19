#include <iostream>
#include <string>

using namespace std;

const int MAX_USERS = 10;
const int MAX_QUIZZES = 3;
const int MAX_QUESTIONS = 3;

struct Question {
    string text;
    string options[4];
    int correctAnswer;
};

struct Quiz {
    string title;
    Question questions[MAX_QUESTIONS];
};

struct User {
    string name;
    bool attended[MAX_QUIZZES] = {false};
    int scores[MAX_QUIZZES] = {0};
};

Quiz quizzes[MAX_QUIZZES] = {
    {"Math Quiz", {
        {"What is 2 + 2?", {"2", "3", "4", "5"}, 2},
        {"What is 3 + 5?", {"5", "6", "7", "8"}, 3},
        {"What is 7 - 3?", {"3", "4", "5", "6"}, 1}
    }},
    {"Science Quiz", {
        {"What is the chemical symbol for water?", {"H2O", "CO2", "O2", "H2"}, 0},
        {"What planet is known as the Red Planet?", {"Earth", "Mars", "Jupiter", "Saturn"}, 1},
        {"What is the boiling point of water?", {"90°C", "95°C", "100°C", "105°C"}, 2}
    }},
    {"History Quiz", {
        {"Who discovered America?", {"Columbus", "Magellan", "Vasco da Gama", "Cook"}, 0},
        {"In which year did World War II end?", {"1942", "1945", "1950", "1955"}, 1},
        {"Who was the first President of the USA?", {"Lincoln", "Washington", "Jefferson", "Adams"}, 1}
    }}
};

User users[MAX_USERS];
int userCount = 0;

void displayQuizzes() {
    cout << "\nAvailable Quizzes:\n";
    for (int i = 0; i < MAX_QUIZZES; ++i) {
        cout << i + 1 << ". " << quizzes[i].title << endl;
    }
}

void takeQuiz(int userIndex, int quizIndex) {
    int score = 0;
    for (int i = 0; i < MAX_QUESTIONS; ++i) {
        cout << quizzes[quizIndex].questions[i].text << endl;
        for (int j = 0; j < 4; ++j) {
            cout << char('A' + j) << ". " << quizzes[quizIndex].questions[i].options[j] << endl;
        }
        cout << "Enter your answer (A/B/C/D): ";
        char answer;
        cin >> answer;
        if (toupper(answer) - 'A' == quizzes[quizIndex].questions[i].correctAnswer) {
            ++score;
        }
    }
    users[userIndex].scores[quizIndex] = score;
    users[userIndex].attended[quizIndex] = true;
    cout << "You scored " << score << " out of " << MAX_QUESTIONS << " in the " << quizzes[quizIndex].title << endl;
}

void displayScores(int userIndex) {
    cout << "\n" << users[userIndex].name << "'s Scores:\n";
    for (int i = 0; i < MAX_QUIZZES; ++i) {
        if (users[userIndex].attended[i]) {
            cout << quizzes[i].title << ": " << users[userIndex].scores[i] << "/" << MAX_QUESTIONS << endl;
        } else {
            cout << quizzes[i].title << ": Not Attempted\n";
        }
    }
}

int main() {
    cout << "Enter your name: ";
    string name;
    cin >> name;

    int userIndex = -1;
    for (int i = 0; i < userCount; ++i) {
        if (users[i].name == name) {
            userIndex = i;
            break;
        }
    }

    if (userIndex == -1) {
        if (userCount < MAX_USERS) {
            users[userCount].name = name;
            userIndex = userCount++;
        } else {
            cout << "User limit reached.\n";
            return 0;
        }
    }

    while (true) {
        displayScores(userIndex);
        displayQuizzes();
        cout << "Enter quiz number to take (1-" << MAX_QUIZZES << ") or 0 to exit: ";
        int quizChoice;
        cin >> quizChoice;
        if (quizChoice == 0) break;
        if (quizChoice >= 1 && quizChoice <= MAX_QUIZZES) {
            if (users[userIndex].attended[quizChoice - 1]) {
                cout << "You have already attended this quiz.\n";
            } else {
                takeQuiz(userIndex, quizChoice - 1);
            }
        } else {
            cout << "Invalid quiz number.\n";
        }
    }

    return 0;
}
