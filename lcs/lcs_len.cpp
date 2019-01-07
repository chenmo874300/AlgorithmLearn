#include <iostream>
#include<time.h>
#include <algorithm>
using namespace std;

/*  返回长度 */
int lcs_len(char A[], char B[], int m, int n,int i){
    if((m - 1) < 0 || (n - 1) < 0){
        return i;
    }
    if(A[m - 1] == B[n - 1]){
        --m;
        --n;
        i++;
        return lcs_len(A, B, m, n, i);
    }else{
        return max(lcs_len(A, B, m - 1, n, i),lcs_len(A, B, m, n - 1, i));
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    cout << "start" << endl;
    clock_t start_time=clock();
{
//被测试代码
    char A[] = {'d','p','b','t','a','b','t','a'};
    char B[] = {'a','d','p','a','t','d'};
    int a = lcs_len(A,B,8,6,0);
    cout << a << endl;
}
    clock_t end_time=clock();
    cout << "end" << endl;
    cout<< "Running time is: "<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC*1000<<"ms"<<endl;//输出运行时间
return 0;

}