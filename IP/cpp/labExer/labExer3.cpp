#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void randInitMatrix (int A[][4], int B[][4]);
void matrixMultiply(int A[][4], int B[][4], int C[][4]);
void dispMatrices (int A[][4], int B[][4], int C[][4]);

int main()
{
    int A[3][4];
    int B[4][4];
    int C[3][4];

    randInitMatrix (A, B);
    matrixMultiply(A, B, C);
    dispMatrices (A, B, C);
}

void randInitMatrix (int A[][4], int B[][4])
{
    time_t t;
    srand((unsigned) time(&t));

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            A[i][j] = rand() % 6;
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            B[i][j] = rand() % 6;
    }

}


void matrixMultiply(int A[][4], int B[][4], int C[][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 4; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}


void dispMatrices (int A[][4], int B[][4], int C[][4])
{
    cout << "A" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    cout << "B" << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    cout << "C" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}



