#include <iostream>
#include <fstream>

using namespace std;

void writeFile();   // ofstream
void readFile();    // ifstream
void something();

int main()
{
    // writeFile();
    // readFile();
    // something();

    return 0;
}

void writeFile()
{
    ofstream WriteFile;
    WriteFile.open("File.txt");

    if(WriteFile.is_open())
    {
        WriteFile << "Hellow" << endl;
        WriteFile << "World" << endl;
    }
    else
    {
        cerr << "Error while opening the File.txt" << endl;
    }

    if(WriteFile.fail())
    {
        cerr << "Error while writing to File.txt" << endl;
    }

    WriteFile.close();
}

void readFile()
{
    ifstream ReadFile;
    ReadFile.open("File.txt");

    if(!ReadFile.is_open())
    {
        cerr << "Can't read File.txt" << endl;
        return;
    }

    string line;

    while(getline(ReadFile, line))
    {

        cout << line << endl;
    }

    ReadFile.close();
}

void something()
{   // "PON.txt"
    // Ha
    // 19
    // Pon
    // 1
    ofstream WriteFile;
    WriteFile.open("PON.txt");

    if(WriteFile.is_open())
    {
        WriteFile << "Ha" << endl;
        WriteFile << 19 << endl;
        WriteFile << "pon" << endl;
        WriteFile << 1 << endl;
    }
    else
    {
        cerr << "Can't read File.txt" << endl;
        return;
    }

    if(WriteFile.fail())
    {
        cerr << "Error while writing to File.txt" << endl;
    }

    WriteFile.close();

    ifstream ReadFile;
    ReadFile.open("PON.txt");

    string fName;
    int age;
    string lName;
    int no;

    getline(ReadFile, fName);
    ReadFile >> age;
    ReadFile.ignore();
    getline(ReadFile, lName);
    ReadFile >> no;
    ReadFile.ignore();

    ReadFile.close();

    cout << fName << lName << endl;
    cout << age << endl;
    cout << no << endl;
}

//    // stringstream ss(line);
//
//    string line = "123,John,5000.5";  // Simulating a line from a CSV file
//    stringstream ss(line);  // Convert string to a stream
//
//    string id, name, salary;
//
//    getline(ss, id, ',');    // Read until ','
//    getline(ss, name, ',');  // Read until ','
//    getline(ss, salary, ','); // Read until ','
//
//    cout << "ID: " << id << endl;
//    cout << "Name: " << name << endl;
//    cout << "Salary: " << salary << endl;
