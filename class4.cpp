#include <iostream>  //标准输入输出流
#include <algorithm> //算法库
#include <iomanip>   //输入输出(I/O) 控制库(Manipulators) 
#include <numbers>   //数字库
#include <cstring>   //字符串库
#include <numeric>   //数值算法库
#include <vector>    //向量库
using namespace std;
using namespace numbers;

void slove()
{
    int n;
    cin >> n ;
    vector<int> num(n); 
    for(int i = 0;i < n;i++)
    {
        cin >> num[i];
    }
    sort(num.begin(),num.end()); 
    long long summary = accumulate(num.begin(),num.end(),0LL);     //小心整数溢出了  accumulate的第三个参数是初始值，0LL表示long long类型的0，防止溢出
    cout << num[0] << " " << num[n-1] << " " << summary << endl;
}

signed main()
{
    slove();
    return 0;
}

/*PASS
void sloveA()
{
    int a,b;
    cin >> a >> b;

    int d = a / b;
    int r = a % b;
    double f = 1.0 * a / b;     //以后在编程题中遇到小数无脑double float存在精度问题 32单片机可能要考虑内存但是计算机不用考虑
     
    cout << d << " " << r << " " << fixed << setprecision(5) << f <<endl;
}


void sloveB()
{
    double r;
    cin >> r;
    double S = pi * r * r;
    double C = pi * 2 * r;

    cout << fixed << setprecision(6) << S <<" " << C << endl;
}

void sloveC()
{
    int a;
    int b;
    char s;
    while (cin >> a >> s >> b)
    {
        if(s == '?') break;
        int result = 0;
        switch(s)
        {
            case '*':result = a * b;break;
            case '-':result = a - b;break;
            case '+':result = a + b;break;
            case '/':result = a / b;break;
            default:cout << "Error: Invalid operator" << endl;break;
        }
        cout << result << endl;
    }

}
*/