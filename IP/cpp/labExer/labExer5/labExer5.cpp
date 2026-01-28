#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

struct student
{
 string studentName;
 double score;
};

vector<student> readFromRecord (string fileName);
double recAverage (vector<student> S);
double recSTDev(vector<student> S);
double recPearCorr(vector<student> S1, vector <student> S2);
void writeResultToFile (double ave1, double ave2, double stDev1,double stDev2, double PearCorr);

int main()
{
    vector<student> student1 = readFromRecord("StudentScore1.txt");
    vector<student> student2 = readFromRecord("StudentScore2.txt");

    if (student1.size() != student2.size()) {
        cerr << "Error: Mismatched data sizes in input files." << endl;
        return 1;
    }

    double ave1 = recAverage(student1);
    double ave2 = recAverage(student2);
    double stDev1 = recSTDev(student1);
    double stDev2 = recSTDev(student2);
    double PearCorr = recPearCorr(student1, student2);

    writeResultToFile(ave1, ave2, stDev1, stDev2, PearCorr);

    return 0;
}

vector<student> readFromRecord (string fileName)
{
    vector<student> students;

    ifstream readFile;
    readFile.open(fileName);

    string name;
    double score;

    if(!readFile.is_open())
    {
        cout << "Error opening file" << endl;
        return students;
    }

//    while(!readFile.eof())
//    {
//        getline(readFile, name, '\t');
//       readFile >> score;
//        readFile.ignore();
//
//        if(readFile.fail())
//            break;
//
//       students.push_back({name, score});
//    }

    while (readFile >> name >> score)
        students.push_back({name, score});


    readFile.close();
    return students;
}

double recAverage (vector<student> S)
{
    double ave = 0;

    for(int i = 0; i < S.size(); i++)
        ave += S.at(i).score;

    return ave / S.size();
}

double recSTDev(vector<student> S)
{
    double a = 0;
    double b;
    double temp;

    for(int i = 0; i < S.size(); i++)
    {
        temp = S.at(i).score - recAverage (S);
        a += temp * temp;
    }

    b = a / S.size();

    return sqrt(b);
}

double recPearCorr(vector<student> S1, vector <student> S2)
{
    double xM = recAverage(S1);
    double yM = recAverage(S2);
    double a = 0;
    double temp;

    for(int i = 0; i < S1.size(); i++)
        a += (S1.at(i).score - xM) * (S2.at(i).score - yM);

    return a/((S1.size()-1)*(recSTDev(S1)*recSTDev(S2)));
}

void writeResultToFile (double ave1, double ave2, double stDev1,double stDev2, double PearCorr)
{
    ofstream writeFile;
    writeFile.open("scoreDescStat.txt");

    if(writeFile.is_open())
    {
        writeFile << "Average of Student 1 : " << ave1 << endl;
        writeFile << "Average of Student 2 : " << ave2 << endl;
        writeFile << "Standard Deviation of Student 1 : " << stDev1 << endl;
        writeFile << "Standard Deviation of Student 2 : " << stDev2 << endl;
        writeFile << "Pearson Correlation Coefficient : " << PearCorr << endl;
    }
    else
        cerr << "Error while opening the File.txt" << endl;

    if(writeFile.fail())
        cerr << "Error while writing to File.txt" << endl;

    writeFile.close();
    cout << "File Created" << endl;
}
