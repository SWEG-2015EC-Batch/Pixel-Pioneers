#include <iostream>
using namespace std;

int main()
{
    const int numExams = 5;
    char Names[numExams][30];
    int examScores[numExams];

    for (int i = 0; i < numExams; ++i) {
        cout << "Enter the name for Exam " << i + 1 << ": ";
        cin >> Names[i];

        cout << "Enter the score for Exam " << i + 1 << ": ";
        cin >> examScores[i];
    }

    int totalMarks = 0;
    for (int i = 0; i < numExams; ++i) {
        totalMarks += examScores[i];
    }
    const char* scoreLevel = "Fail"; 
    if (totalMarks >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMarks >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMarks >= 50) {
        scoreLevel = "Fair";
    } else if (totalMarks >= 40) {
        scoreLevel = "Poor";
    }

    // Display results in tabular format
    cout << "\nExam Scores Report:" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Exam\t\tScore" << endl;
    cout << "--------------------------------------" << endl;

    for (int i = 0; i < numExams; ++i) {
        cout << Names[i] << "\t\t" << examScores[i] << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << "Total Marks\t" << totalMarks << endl;
    cout << "Score Level\t" << scoreLevel << endl;
}
