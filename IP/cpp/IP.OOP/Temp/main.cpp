#include <iostream>
#include "ID.h"

using namespace std;

int main()
{
    Temp *t = new ID("hapon", 19, 12345);

    cout << t->getName() << endl;


    return 0;
}
