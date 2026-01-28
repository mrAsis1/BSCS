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
    vecP = addPlayer("sir wa luspo", 69, vecP, "MCFC.txt");
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






