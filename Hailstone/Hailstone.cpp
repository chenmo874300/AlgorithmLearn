#include <iostream>

using namespace std;
int Hailstone(int n)
{
    int length = 0;

    while(n > 1)
    {
        (n & 1) == 0 ? n /= 2 : n = 3 * n + 1;//(n % 2)
        ++length;  
    }
    return length;
}
int main(int argc, char const *argv[])
{
    /* code */
    cout << Hailstone(7) << endl; 
    return 0;
}
