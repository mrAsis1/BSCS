#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct DataPoint {
    double x;
    double y;
};

vector<DataPoint> readData(string fileName);

int main()
{
    vector<DataPoint> vec = readData("RegressionData.txt");

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i).x << " " << vec.at(i).y << endl;
    }
}

vector<DataPoint> readData(string fileName)
{
    ifstream readFile;
    readFile.open(fileName);

    vector<DataPoint> vec;
    DataPoint temp;

    if(readFile.is_open())
    {
        while(!readFile.eof())
        {
            readFile >> temp.x >> temp.y;
            if (readFile.fail())
                break;
            vec.push_back(temp);
        }
    }
    else
    {
        cout << "not open" << endl;
    }
    readFile.close();
    return vec;
}
