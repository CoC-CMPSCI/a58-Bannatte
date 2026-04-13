#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifs("students.txt");

    if (!ifs) {
        cout << "Failed to open file. " << endl;
        return 1;
    }

    int M;
    ifs >> M;

    cout << "Total " << M << " students" << endl;

    string name;
    int score1, score2;

    for (int i = 0; i < M; i++) {
        ifs >> name >> score1 >> score2;

        int sum = score1 + score2;
        double avg = sum / 2.0;

        cout << "Student Name: " << name << " score1: " << score1 << " score2: " << score2 << " Sum: " << sum << " Avg: " << avg << endl;
    }

    ifs.close();
    return 0;
}
