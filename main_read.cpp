#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("students.txt");

    if (!inFile) {
        cout << "Error opening file for reading." << endl;
        exit(0);
    }

    int M;
    inFile >> M;

    cout << "Total " << M << " students" << endl;

    string name;
    int score1, score2;

    for (int i = 0; i < M; i++) {
        inFile >> name >> score1 >> score2;

        int sum = score1 + score2;
        double avg = sum / 2.0;

        cout << "Student Name: " << name
             << " score1: " << score1
             << " score2: " << score2
             << " Sum: " << sum
             << " Avg: " << avg << endl;
    }

    inFile.close();
    return 0;
}
