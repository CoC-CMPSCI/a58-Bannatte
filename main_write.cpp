#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream ofs("students.txt");

    if (!ofs) {
        cout << "Failed to open file. " << endl;
        return 1;
    }

    int N;
    cin >> N;
    ofs << N << endl;

    string name;
    int score1, score2;

    for (int i = 0; i < N; i++) {
        cin >> name >> score1 >> score2;
        ofs << name << " " << score1 << " " << score2 << endl;
    }

    ofs.close();
    return 0;
}
