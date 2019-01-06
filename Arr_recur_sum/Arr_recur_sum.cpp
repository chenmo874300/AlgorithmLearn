#include <iostream>

using namespace std;
int sum(int A[],int n)
{
    return (n==1) ? A[0] : sum(A,n-1) + A[n-1];
}
int main(int argc, char const *argv[])
{
    /* code */
    int n = 10;
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int s = sum(A,10);
    cout << s << endl;
    return 0;
}
