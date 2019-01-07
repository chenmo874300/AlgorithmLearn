#include <iostream>
#include<time.h>
using namespace std;

int fib(int n)
{
    return (n < 2) ? n : fib(n - 1) + fib(n - 2);
}
int main(int argc, char const *argv[])
{
    /* code */
    cout << "start" << endl;
    clock_t start_time=clock();
{
//被测试代码
    unsigned long int a = 0,b = 1;
    int n = 51,i = 0;
    while(n != i){
        ++i;
        a = a + b;
        swap(a, b);
    }
    cout << a << endl;
    
}
    clock_t end_time=clock();
    cout << "end" << endl;
    cout<< "Running time is: "<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC*1000<<"ms"<<endl;//输出运行时间
return 0;

}