#include <iostream>
#include <cstdlib>//library for rand()
#include <ctime>//library for time

int main ()
{
 time_t t;
 srand((unsigned) time(&t)); //seed random values with current time
 int x = rand() % 51;//generate a random number and store it in x
 printf("%d\n", x); // print random number

 return 0;
}
