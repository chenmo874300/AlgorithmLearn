#include <iostream>

using namespace std;
/* 颠倒区间内的数组 */
void swap(int* A, int lo, int hi)
{
    A[lo] ^= A[hi];
    A[hi] ^= A[lo];
    A[lo] ^= A[hi]; 
}
void reverse(int* A, int lo, int hi)
{
    if(lo < hi){
        swap(A,lo,hi);
        reverse(A,lo + 1,hi - 1);
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 0;
    reverse(A,2,6);
    while(n<10)
    {
        cout << A[n] << endl;
        n++;
    }
    return 0;
}
