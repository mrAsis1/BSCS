#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct timeType
{
     int hr;
     double min;
     int sec;
};

struct runnerPersonType
{
     string name;
     int distance;
     timeType time;
     double minPerKm;
     double kmPerHour;
};

vector<runnerPersonType> readFile(string fileName);
void writeFile(vector<runnerPersonType> vec);
void print(vector<runnerPersonType> vec);

int main()
{
    vector<runnerPersonType> vec = readFile("Record.txt");
    print(vec);
    writeFile(vec);

    return 0;
}

vector<runnerPersonType> readFile(string fileName)
{
    vector<runnerPersonType> vec;
    timeType temp1;
    runnerPersonType temp2;
    int time;
    double min;
    double hr;

    ifstream readFile;
    readFile.open(fileName);

    if(readFile.is_open())
    {
        while(!readFile.eof())
        {
            getline(readFile,temp2.name,',');
            readFile >> temp2.distance;
            readFile.ignore();
            readFile >> time;
            readFile.ignore();

            hr = static_cast<double>(time) / 3600;
            min = static_cast<double>(time) / 60;

            temp1.hr = time / 3600;
            time %= 3600;

            temp1.min = time / 60;
            time %= 60;

            temp1.sec = time;

            temp2.time = temp1;

            temp2.minPerKm = min / temp2.distance;
            temp2.kmPerHour = temp2.distance / hr;

            vec.push_back(temp2);
        }
    }
    else
    {
        cout << "file not open on reading file" << endl;
    }
    readFile.close();

    return vec;
}

void print(vector<runnerPersonType> vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i).name << "," << vec.at(i).distance << ","
             << vec.at(i).time.hr << "hr " << vec.at(i).time.min << "min " << vec.at(i).time.sec << "sec,"
             << vec.at(i).minPerKm << "," << vec.at(i).kmPerHour << endl;
    }
}

void writeFile(vector<runnerPersonType> vec)
{
    ofstream writeFile;
    writeFile.open("new record.txt");

    if(writeFile.is_open())
    {
        for(int i = 0; i < vec.size(); i++)
        {
            writeFile << vec.at(i).name << "," << vec.at(i).distance << ","
                 << vec.at(i).time.hr << "hr " << vec.at(i).time.min << "min " << vec.at(i).time.sec << "sec,"
                 << vec.at(i).minPerKm << "," << vec.at(i).kmPerHour << endl;
        }
    }
    else
    {
        cout << "file not open on writing file" << endl;
    }

    writeFile.close();
}



