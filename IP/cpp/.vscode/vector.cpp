#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vecList(5);
    
    for (int i=0;i<5;i++)
        vecList.at(i) = 1 + i;

    for (int j=0;j<vecList.size();j++)
        cout<<vecList.at(j)<<",";

    cout << endl;
    
    cout << vecList.front() << endl;
    cout << vecList.back() << endl;
    cout << vecList.size() << endl;

    for (int j=0;j<vecList.size();j++)
        cout<<vecList.at(j)<<",";

    cout << endl;
    cout << endl;


    vecList.push_back(6);
    cout << vecList.back() << endl;
    cout << vecList.size() << endl;

    for (int j=0;j<vecList.size();j++)
        cout<<vecList.at(j)<<",";

    cout << endl;
    cout << endl;
    

    vecList.pop_back();
    cout << vecList.back() << endl;
    cout << vecList.size() << endl;
    cout << endl;


    for (int j=0;j<vecList.size();j++)
        cout<<vecList.at(j)<<",";

    cout << endl;

    cout << vecList.back() << endl;
    cout << vecList.size() << endl;
    cout << endl;

    for (int j=0;j<vecList.size();j++)
        cout<<vecList.at(j)<<",";

}