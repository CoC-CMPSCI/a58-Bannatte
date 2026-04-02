#include <iostream>
#include <fstream> // file stream
#include <string>
using namespace std;

int main()
{
    int N;
    double score1, score2;
    string stuName;
    ofstream ofs; // defined class in fstream
    ofs.open("student.txt")

    cout << "Enter the total number of students:";
    cin >> N;
    ofs << N << endl;
    
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the student name and two scores: ";
        cin >> stuName >> score1 >> score2;
        ofs << stuName << " " << score1 << " " << score2 << endl;
    }
    ofs.close();
    return 0;
}
