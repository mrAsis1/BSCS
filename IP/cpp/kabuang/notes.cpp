#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void vects();
void rands();

int main()
{
    //vec();
    rands();
}

void vec()
{
    //#include <vector>

    vector<string> bike;
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << ".size() " << cars.size() << endl;
    cout << ".front() " << cars.front() << endl;               // cars.front()
    cout << ".back() " <<cars.back() << endl;                  // cars.back()
    cout << endl;

    for(int i = 0; i < cars.size(); i++)                       // cars.size
        cout << cars.at(i) << " ";                             // cars.at() car[]
    cout << endl;

    cars.push_back("Tesla");                                   //push_back()

    cout << ".push_back() ";
    for(int i = 0; i < cars.size(); i++)
        cout << cars.at(i) << " ";
    cout << endl;

    cars.pop_back();                                           //pop_back()

    cout << ".pop_back() ";
    for(int i = 0; i < cars.size(); i++)
        cout << cars.at(i) << " ";
    cout << endl;
    cout << endl;

    cout << cars.empty() << endl;                              // cars.empty() Outputs 1 (empty) 0 (not empty)
}
    /*
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
    */

void rands()
{

    // #include <cstdlib>       library for rand()
    // #include <ctime>         library for time

     time_t t;
     srand((unsigned) time(&t));   // seed random values with current time
     int x = rand() % 10;          //generate a random number and store it in x
     cout << x << endl;            // print random number

}

