#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("students.txt");

    if (!outFile) {
        cout << "Error opening file for writing." << endl;
        exit(0);
    }

    int N;
    cin >> N;
    outFile << N << endl;

    string name;
    int score1, score2;

    for (int i = 0; i < N; i++) {
        cin >> name >> score1 >> score2;
        outFile << name << " " << score1 << " " << score2 << endl;
    }

    outFile.close();
    return 0;
}
