#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Question {
public:
    char text[100];
    char option1[50], option2[50], option3[50], option4[50];
    int correctOption;

    void copyString(const char* src, char* dest) {
        int i = 0;
        while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    void setQuestion(const char* qText, const char* op1, const char* op2, const char* op3, const char* op4, int correct) {
        copyString(qText, text);
        copyString(op1, option1);
        copyString(op2, option2);
        copyString(op3, option3);
        copyString(op4, option4);
        correctOption = correct;
    }

    void display(int number) {
        cout << "\nQ" << number << ": " << text << endl;
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cout << "3. " << option3 << endl;
        cout << "4. " << option4 << endl;
    }

    bool isCorrect(int answer) {
        return (answer - 1 == correctOption);
    }
};

class Exam {
    Question questions[10];
    int selectedIndices[5];
    int score;

public:
    Exam() {
        score = 0;

        questions[0].setQuestion("What is the color of the sky on a clear day?", "Blue", "Green", "Red", "Black", 0);
        questions[1].setQuestion("How many days are there in a week?", "5", "6", "7", "8", 2);
        questions[2].setQuestion("Which fruit is yellow and long?", "Apple", "Banana", "Orange", "Grapes", 1);
        questions[3].setQuestion("What do we breathe in to stay alive?", "Oxygen", "Carbon", "Nitrogen", "Smoke", 0);
        questions[4].setQuestion("Which animal is known as man's best friend?", "Cat", "Elephant", "Dog", "Horse", 2);
        questions[5].setQuestion("What is H2O commonly known as?", "Salt", "Sugar", "Water", "Air", 2);
        questions[6].setQuestion("Which direction does the sun rise from?", "North", "East", "West", "South", 1);
        questions[7].setQuestion("What do bees make?", "Silk", "Wax", "Milk", "Honey", 3);
        questions[8].setQuestion("Which season comes after summer?", "Winter", "Spring", "Monsoon", "Autumn", 2);
        questions[9].setQuestion("Which shape has 3 sides?", "Square", "Circle", "Triangle", "Rectangle", 2);

    }

    void startExam() {
        srand(time(0));
        int count = 0;

        while (count < 5) {
            int randIndex = rand() % 10;
            bool exists = false;
            for (int i = 0; i < count; i++) {
                if (selectedIndices[i] == randIndex) {
                    exists = true;
                    break;
                }
            }
            if (!exists) {
                selectedIndices[count] = randIndex;
                count++;
            }
        }

        for (int i = 0; i < 5; i++) {
            int qIndex = selectedIndices[i];
            questions[qIndex].display(i + 1);
            int answer;
            cout << "Your answer (1-4): ";
            cin >> answer;

            if (questions[qIndex].isCorrect(answer)) {
                cout << "Correct!\n";
                score++;
            }
            else {
                cout << "Wrong!\n";
            }
        }
    }
    void TotalMarks() {

        cout << "----------- Exam Finished --------------" << endl;
        cout << "Score: " << score << " / 5" << endl;
        cout << "Percentage: " << (score * 100) / 5 << "%\n";
    
    }
};

int main() {
    Exam e;
    e.startExam();
    e.TotalMarks();
    return 0;
}
