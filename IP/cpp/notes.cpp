#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct CollatzInfo {
    int startingNumber;
    int length;
    vector<int> sequence;
};

vector<CollatzInfo> generateCollatzSequences(int start, int last);
CollatzInfo findLongestSequence(const vector<CollatzInfo>& sequences);
void storeIn1DArray(const vector<CollatzInfo>& sequences, int arr[]);
void storeIn2DArray(const vector<CollatzInfo>& sequences, int arr[][2]);
void writeResultsToFile(const vector<CollatzInfo>& sequences, int arr1D[], int arr2D[][2], CollatzInfo longest, string fileName);

void readFile(string filename);

int start, last;

int main()
{
    readFile("CollatzInput.txt");

/* CollatzInput.txt
    1
    100
*/

    int arr1[last/2] = {0};
    int arr2[last/2][2] = {0};

    vector<CollatzInfo> vec = generateCollatzSequences(start,last);
    CollatzInfo longest = findLongestSequence(vec);

    storeIn1DArray(vec, arr1);
    storeIn2DArray(vec, arr2);

    writeResultsToFile(vec, arr1, arr2, longest, "CollatzAnalysis.txt");

}


vector<CollatzInfo> generateCollatzSequences(int start, int last)
{
    vector<CollatzInfo> vec;
    CollatzInfo temp;
    int ctr;

    for(int i = start; i <= last; i++)
    {
        int t = i;
        ctr = 1;
        temp.sequence.clear();
        while(t != 1)
        {
            temp.sequence.push_back(t);
            if(t % 2 == 0)
                t /= 2;
            else
                t = t * 3 + 1;
            ctr++;
        }
        temp.sequence.push_back(1);
        temp.startingNumber = i;
        temp.length = ctr;
        vec.push_back(temp);
    }
    return vec;
}

CollatzInfo findLongestSequence(const vector<CollatzInfo>& sequences)
{
    CollatzInfo maxx = sequences.at(0);

    for(int i = 0; i < sequences.size(); i++)
    {
        if(sequences.at(i).length > maxx.length)
            maxx = sequences.at(i);
    }
    return maxx;
}

void storeIn1DArray(const vector<CollatzInfo>& sequences, int arr[])
{
    int m = 0;

    for(int i = 0; i < sequences.size(); i++)
    {
        if(sequences.at(i).length > 20)
            arr[m++] = sequences.at(i).startingNumber;
    }

}

void storeIn2DArray(const vector<CollatzInfo>& sequences, int arr[][2])
{
    int k = 0;
    for(int i = 0; i < sequences.size(); i++)
    {
        if(sequences.at(i).length <= 20)
            continue;
        else
        {
            for(int j = 0; j < 2; j++)
            {
                if(j == 0)
                    arr[k][j] = sequences.at(i).startingNumber;
                else
                    arr[k][j] = sequences.at(i).length;
            }
            k++;
        }
    }
}

void writeResultsToFile(const vector<CollatzInfo>& sequences, int arr1D[], int arr2D[][2], CollatzInfo longest, string fileName)
{
    ofstream write;
    write.open(fileName);

    if(write.is_open())
    {
        write << "Collatz Sequence Analysis:" << endl;
        write << "Number"<< "\t" << "Length" << endl;
        for(int i = 0; i < sequences.size(); i++)
            write << sequences.at(i).startingNumber << "\t" << sequences.at(i).length << endl;
        write << endl;



        write << "1D Array (Numbers with Sequence Length > 20):" << endl;
        for(int i = 0; i < last/2; i++)
        {
            if(arr1D[i] == 0)
                break;
            else
                write << arr1D[i] << " ";
        }
        write << endl;
        write << endl;

        write << "2D Array (Number and Length):" << endl;
        write << "Number"<< "\t" << "Length" << endl;
        for(int i = 0; i < last/2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                if(arr2D[i][j] == 0)
                    break;
                else
                {
                    if(j == 0)
                        write << arr2D[i][j] << "\t";
                    else
                        write << arr2D[i][j] << endl;
                }
            }
        }
        write << endl;

        write << "Longest Sequence:" << endl;
        write << "Starting Number: " << longest.startingNumber <<endl;
        write << "Length: " << longest.length <<endl;
    }
    else
    {
        cout << "file not open 2" << endl;
        return;
    }
    write.close();
}

void readFile(string filename)
{
    ifstream readfile;
    readfile.open(filename);

    if(readfile.is_open())
    {
        readfile >> start;
        readfile >> last;
    }
    else
    {
        cout << "file not open 1" << endl;
        return;
    }
    readfile.close();
}

/*
#include <iostream>
#include <fstream>
#include <vector>

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



#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Player
{
    string name;
    int num;
};

vector<Player> readFile(string fileName);

vector<Player> addPlayer (string name, int num, vector<Player> p, string fileName);

void printVec(vector<Player> P)
{
    for(int i = 0; i < P.size(); i++)
    {
        cout << P.at(i).name << "\t" << P.at(i).num << endl;
    }
}

int main()
{
    vector<Player> vecP = readFile("MCFC.txt");
    // printVec(vecP);
    vecP = addPlayer("king", 69, vecP, "MCFC.txt");
    printVec(vecP);

}

vector<Player> readFile(string fileName)
{
    ifstream readFile;
    readFile.open(fileName);

    vector<Player> players;
    Player player;

    if(readFile.is_open())
    {
        while(!readFile.eof())
        {
            getline(readFile, player.name, '\t');

            if (player.name.empty())
                break;

            readFile >> player.num;
            readFile.ignore();
            players.push_back(player);
        }
    }
    else
    {
        cout << "no file " << endl;
    }

    readFile.close();

    return players;
}


vector<Player> addPlayer(string name, int num, vector<Player> p, string fileName)
{
    ofstream add;
    add.open(fileName);

    Player temp;
    temp.name = name;
    temp.num = num;
    p.push_back(temp);

    if(add.is_open())
    {
        for(int i = 0; i < p.size(); i++)
        {
            add << p.at(i).name << '\t' << p.at(i).num << endl;
        }
    }
    else
    {
        cout << "add fail" << endl;
    }
    add.close();
    return p;
}

    assign()	Fills a vector with multiple values
    at()	    Returns an indexed element from a vector
    back()  	Returns the last element of a vector
    begin() 	Returns an iterator pointing to the beginning of a vector
    capacity()	Returns the number of elements that a vector's reserved memory is able to store
    clear()	    Removes all of the contents of a vector
    data()	    Returns a pointer to the block of memory where a vector's elements are stored
    empty() 	Checks whether a vector is empty or not
    end()	    Returns an iterator pointing to the end of a vector
    erase() 	Removes a number of elements from a vector
    front() 	Returns the first element of a vector
    insert()	Inserts a number of elements into a vector
    max_size()	Returns the maximum number of elements that a vector can have
    pop_back()	Removes the last element of a vector
    push_back()	Adds an element to the end of a vector
    rbegin()	Returns a reverse iterator pointing to the last element of a vector
    rend()  	Returns a reverse iterator pointing to a position right before the first element of a vector
    reserve()	Reserves memory for a vector
    resize()	Changes the size of a vector, adding or removing elements if necessary
    shrink_to_fit() 	Reduces the reseved memory of a vector if necessary to exactly fit the number of elements
    size()  	Returns the number of elements in a vector
    swap()  	Swaps the contents of one vector with another


void rands()
{

     #include <cstdlib>       library for rand()
     #include <ctime>         library for time

     time_t t;
     srand((unsigned) time(&t));   // seed random values with current time
     int x = rand() % 10;          //generate a random number and store it in x
     cout << x << endl;            // print random number

}
*/
