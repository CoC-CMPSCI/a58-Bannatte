#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int M;
    double score1, score2, sum, avg;
    string sname;
    ifstream ifs;
    ifs.open("students.txt");
    if(!ifs.is_open()){
        cerr << "Failed to open file." << endl;
        return 1;
    }
    ifs >> M;
    for (int i = 0; i < M; ++i) 
    {
        ifs >> sname >> score1 >> score2;
        sum = score1 + score2;
        avg = sum / 2.0;
        cout << sname << " " << score1 << " " << score2 << "\t" << sum << "\t" << avg << endl;
    }
    ifs.close();
    return 0;
}
