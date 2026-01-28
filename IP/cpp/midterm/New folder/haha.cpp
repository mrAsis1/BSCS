
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct timeType
{
    string name;
    int distance;
    int sec;
};

vector<timeType> readFile(string fileName);

int main()
{
    vector<timeType> vec = readFile("Record.txt");

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i).name << " , " << vec.at(i).distance << " , " << vec.at(i).sec << endl;
    }

    return 0;
}

vector<timeType> readFile(string fileName)
{
    vector<timeType> vec;
    timeType temp;

    ifstream readFile;
    readFile.open(fileName);

    if(readFile.is_open())
    {
        while(!readFile.eof())
        {
            getline(readFile,temp.name,',');
            readFile >> temp.distance;
            readFile.ignore();
            readFile >> temp.sec;
            readFile.ignore();
            vec.push_back(temp);
        }
    }
    else
    {
        cout << "file not open" << endl;
    }
    readFile.close();
    return vec;
}







