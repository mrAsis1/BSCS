#include <iostream>
using namespace std;

int main()
{
    int sex = 0;
    int  Waist, Hip = 0;
    double Ratio = 0;

    cout << "0-male" << endl;
    cout << "1-female" << endl;

    cout << "choice: ";
    cin >> sex;

    if(sex)
    {
        cout << "female" << endl;
        cout << "Female Waist (inches): ";
        cin >> Waist;

        cout << "Female Hip (inches): ";
        cin >> Hip;

        Ratio = Waist / Hip;

        cout << Waist << endl;
        cout << Hip << endl << Ratio;
    }
    else
    {
        cout << "male" << endl;
        cout << "male Waist (inches): ";
        cin >> Waist;

        cout << "male Hip (inches): ";
        cin >> Hip;

        Ratio = Waist / Hip;

        cout << Waist << endl;
        cout << Hip << endl << Ratio;
    }

    return 0;
}