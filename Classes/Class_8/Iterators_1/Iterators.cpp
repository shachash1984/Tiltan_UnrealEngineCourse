#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors

using namespace std;


int main()
{
    vector<int> vectorOfInts = { 1, 2, 3, 4, 5 };
      
    // Declaring iterator to a vector
	vector<int>::iterator it1;
      
    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";

    for (it1 = vectorOfInts.begin(); it1 != vectorOfInts.end(); it1++)
    {
	    cout << *it1 << " ";
    }
    cout << endl;

    //This works too:
    for (it1 = begin(vectorOfInts); it1 < end(vectorOfInts); ++it1)
    {
	    cout << *it1 << " ";
    }
    cout << endl;

    // Declaring iterator to a vector
    vector<int>::iterator it2 = vectorOfInts.begin();
      
    // Using advance() to increment iterator position
    // points to 4
    advance(it2, 3);
      
    // Displaying iterator position
    cout << "The position of iterator after advancing is : ";
    cout << *it2 << " \n";


    vector<int> ar = { 0, 1, 2, 3, 4};
      
    // Declaring iterators to a vector
    vector<int>::iterator ptr = ar.begin();
    vector<int>::iterator ftr = ar.end();

     // Using next() to return new iterator
    // points to 3
    auto it_next = next(ptr, 3); // same as ptr+3;
      
    // Using prev() to return new iterator
    // points to 2
    auto it_prev = prev(ftr, 3); // same as ftr - 3;

    // Displaying iterator position
    cout << "The position of new iterator using next() is : ";
    cout << *it_next << " ";
    cout << endl;
      
    // Displaying iterator position
    cout << "The position of new iterator using prev()  is : ";
    cout << *it_prev << " ";
    cout << endl;


     vector<int> ar1 = {10, 20, 30}; 
      
    // Declaring iterator to a vector
    vector<int>::iterator it_ins = ar.begin();
     
    // Using advance to set position
    advance(it_ins, 3);


    /* A little more complex - read carefully*/

    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar1.begin(), ar1.end(), inserter(ar,it_ins)); // ar1.begin() == start of the inserted vector
																			// ar1.end() == end of the inserted vector
																			// inserter(ar, it_ins) == what is the "receiver vector" and where should it insert the inserted vector
      
    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : ar)
    {
	    cout << x << " ";
    }
        
    getchar();
    return 0;    
}