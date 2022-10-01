
// C++ program showing Head Recursion
#include <iostream>
using namespace std;
// Recursive function
void fun(int n)
{
    if (n > 0) {
         cout << " "<< n;
 
        // First statement in the function
        fun(n - 1);
 
        cout << " ,"<< n;
        fun(n - 1);
    }
}
 
// Driver code
int main()
{
    int x = 3;
    fun(x);
    return 0;
}