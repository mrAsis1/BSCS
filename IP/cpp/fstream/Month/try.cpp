#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Month
{
    string mon;
    int num;
};

vector<Month> readFile(string fileName);
vector<Month> inRange(vector<Month> vec, int x, int y);

void Print(vector<Month> month)
{
    for(int i = 0; i < month.size(); i++)
        cout << month.at(i).mon << '\t' << month.at(i).num << endl;
    cout << endl;
}

int main()
{
    vector<Month> month = readFile("Month.txt");
    Print(month);
    vector<Month> range = inRange(month, 4, 8);
    Print(range);
}

vector<Month> readFile(string fileName)
{
    ifstream read;
    read.open(fileName);

    Month temp;
    vector<Month> month;

    if(read.is_open())
    {
        while(!read.eof())
        {
            getline(read, temp.mon, '\t');

            if (temp.mon.empty())
                break;

            read >> temp.num;
            read.ignore();
            month.push_back(temp);
        }
    }

    else
        cout << "file not open" << endl;

    read.close();
    return month;
}

vector<Month> inRange(vector<Month> vec, int x, int y)
{
    vector<Month> newVec;

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec.at(i).num >= x && vec.at(i).num <= y)
            newVec.push_back(vec.at(i));
    }
    return newVec;
}
