#include <iostream>
using namespace std;


int main()
{
    int* ip = new int; //  1 allocates memory (4 bytes)  
                   //  2 creates int  
                   //  3 assigns its address to ip 
    *ip = 12345;
    cout << *ip << endl;

    delete ip;  // de-allocates memory (frees it) 

}
