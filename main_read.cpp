#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    int num, score1, score2, total;
    double avg;
    string sname;
    ifstream ifs;
    ifs.open("students.txt");

    ifs >> num;
    cout << fixed << setprecision(2);
    for (int i = 0; i < num; ++i) {
        ifs >> sname >> score1 >> score2;
        total = score1 + score2;
        avg = total / 2.0;
        cout << sname << " " << score1 << " " << 
    }
}
