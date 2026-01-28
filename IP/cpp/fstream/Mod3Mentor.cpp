#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>

using namespace std;

struct Persona
{
    string name;
    int age;
    string address;
};

void something()
{
    ifstream ReadFile("persona.txt");
    Persona persona1;

    getline(ReadFile, persona1.name);
    ReadFile>>persona1.age;
    ReadFile.ignore();
    getline(ReadFile,persona1.address);

    cout<<persona1.name<<endl<<persona1.age<<endl<<persona1.address<<endl;
}

void ArrayInconvenience1();
void ArrayInconvenience2();
void ArrayInconvenience3();
void Array();
void Vector();
void WriteFileProcessing();
void ReadFileProcessing();
void bubbleSort(int arr[], int size);

int main()
{
    WriteFileProcessing();
    // ReadFileProcessing();
    // something();
    // ArrayInconvenience1();
    // ArrayInconvenience2();
    // ArrayInconvenience3();
    // Array();
    // Vector();

    return 0;
}

void ReadFileProcessing()
{
    ifstream ReadFile("exFile.txt");

    if(!ReadFile.is_open())
    {
        cerr << "Can't read exFile.txt" << endl;
        return;
    }

    string line;

    while(getline(ReadFile, line))
    {

        cout << line << endl;
    }

    ReadFile.close();
}

void WriteFileProcessing()
{
    //ofstream WriteFile("exFile.txt");

    ofstream WriteFile;
    WriteFile.open("exFile.txt");

    if(!WriteFile.is_open())
    {
        cerr << "Can't write to exFile.txt" << endl;
        return;
    }

    WriteFile << 21 << endl;
    WriteFile << "World" << endl;

    if(WriteFile.fail())
    {
        cerr << "Error while writing to exFile.txt" << endl;
    }

    WriteFile.close();
}

void Vector()
{
    vector<int> List;
    List.push_back(6);
    List.push_back(10);
    List.pop_back();
    List.push_back(3);
    List.clear();
    List.push_back(4);

    for(int i=0; i<List.size(); i++)
    {
        cout << List.at(i) << ", ";
    }
    cout << endl;
}

void Array()
{
    int exampleArr[] = {5, 2, 9, 1, 5, 6};
    int exampleSize = 6;
    bubbleSort(exampleArr, exampleSize);

    for(int i = 0; i < exampleSize; i++)
        cout << exampleArr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
        }
    }
}

void ArrayInconvenience3()
{
    char word1[6] = "Hello";
    char word2[6] = "Brodi";
    char result[11] = "";

    strcat(result, word2);
    cout << word1 << endl;

    string word3 = "Hello";
    string word4 = "Hello";
    cout << word3 + word4 << endl;
}

void ArrayInconvenience2()
{
    char name1[5];
    cin >> name1;
    cout << name1 << endl;

    // string name2;
    // cin >> name2;
    // cout << name2;
}

void ArrayInconvenience1()
{
    int* arr = new int[1]; // arr pointing to some array
    int size = 0;
    int input;

    cout << "Enter numbers (enter -1 to stop):\n";
    while(true)
    {
        cin >> input;
        if(input == -1)
            break;
        int* temp = new int[size + 1];

        //copy previous data
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        temp[size] = input; //store new elem

        delete[] arr; // Free
        arr = temp;   // arr pointing to new array
        size++;
    }

    //print array
    cout << "Stored numbers: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; //free
}
