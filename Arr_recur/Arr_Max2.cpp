#include <iostream>
#include<time.h>
using namespace std;

void Max2(int A[], int lo, int hi, int& x1, int& x2)//x1最大,x2次大
{
    if(lo + 2 == hi)
    {
        if(A[x1 = lo] < A[x2 = lo + 1])
            swap(x1, x2);
        return;
    }
    if(lo + 3 == hi)
    {
        if(A[x1 = lo] < A[x2 = lo + 1])
            swap(x1, x2);
        if(A[x2] < A[lo + 2])
            if(A[x1] < A[x2 = lo + 2])
                swap(x1, x2);
        return;        
    }
    int mi = (lo + hi) >> 1;
    int x1L,x2L,x1R,x2R;
    Max2(A, lo, mi, x1L, x2L);
    Max2(A, mi, hi, x1R, x2R);
    if(A[x1L] > A[x1R])
    {
        x1 = x1L;
        x2 = (A[x2L] > A[x1R]) ? x2L : x1R;
    }    
    else{
        x1 = x1R;
        x2 = (A[x2R] > A[x1L]) ? x2R : x1L;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    clock_t start_time=clock();
    cout << "start" << endl;
{
//被测试代码
    int A[] = {1,2,3,4,5,6,7,8,9,0,56,45,2,55,333,21,34,12,32,34,22,11};
    int a = 0,b = 0;
    Max2(A, 0, 21, a, b);
    cout << A[a] << " " << A[b] << endl;
    
}
    cout << "end" << endl;
    clock_t end_time=clock();
    cout<< "Running time is: "<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC*1000<<"ms"<<endl;//输出运行时间
return 0;

}
