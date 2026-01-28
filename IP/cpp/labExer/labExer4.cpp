#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> sorted;

vector<int> genRandVectorItems (vector<int> a);
vector<int> vectorFreqList (vector<int> a);
void dispFreqList (vector <int> a);

int main()
{
    vector<int> vec; // = {1,9,2,8,2,7,4,6,6,2};

    vec = genRandVectorItems (vec);
    vec = vectorFreqList (vec);
    dispFreqList (vec);

}

vector<int> genRandVectorItems (vector<int> a)
{
    time_t t;
    srand((unsigned) time(&t));

    for(int i = 0; i < 10; i++)
        a.push_back(rand() % 101);
    return a;
}

vector<int> vectorFreqList (vector<int> a)
{
    vector<int> b;
    for(int i = 0; i < a.size()-1; i++)
    {
        for(int j = i + 1; j < a.size(); j++)
        {
            if(a.at(i) > a.at(j))
            {
                int temp = a.at(i);
                a.at(i) = a.at(j);
                a.at(j) = temp;
            }
        }
    }

    sorted = a;

    int ctr;
    for(int i = 0; i < a.size(); i++)
    {
        ctr = 0;
        if(i != 0)
        {
            if(a.at(i) == a.at(i-1))
                continue;
        }
        for(int j = i; j < a.size(); j++)
        {
            if(a.at(i) == a.at(j))
                ctr++;
        }
        b.push_back(a.at(i));
        b.push_back(ctr);
    }

    return b;
}

void dispFreqList (vector <int> a)
{
    for(int i = 0; i < sorted.size(); i++)
        cout << sorted.at(i) << " ";
    cout << endl;

    cout << endl;

    for(int i = 0; i < a.size(); i+=2)
        cout << a.at(i) << " " << a.at(i+1) << endl;
}
