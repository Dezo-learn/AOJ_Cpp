#include <iostream>
#include <algorithm>
using namespace std;

int slove()
{
    int a,b,c;
    int count = 0;

    cin >> a >> b >> c;
    for(int i=1;i*i <= c;i++)
    {
        if(c % i == 0)
        {
            int j = c / i;
            if (a <= i && i <= b) count++;
            if (a <= j && j <= b && j != i) count++;
        }
    }
    cout << count << endl;
    return 0;
}

int main()
{
    slove();
    return 0;
}

/*
void sloveA()
{
    int i;
    for(i = 0;i < 1000;i++)
        cout << "Hello World"<< endl;
}


void sloveB() //循环输入
{
    int x,i = 1; //C++这里一定要先初始化  C++23不用
    while(cin >> x && x != 0)
    {
        cout << "Case " << i << ": " << x << endl;
        i++;
    }
}

void sloveC()
{
    int a,b,temp=0;
    while(cin >> a && cin >> b)
    {
        if(a==0 && b==0) break;
        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        cout << a << " " << b << endl;
    }
}

int sloveD_1()
{
    int a,b,c;
    int count = 0;

    cin >> a >> b >> c;
    for (int i = 1; i <= c; i++)
    {
        if(c % i == 0 && a <= i && i<= b) count++;
    }
    cout << count << endl;
    return 0;
}

int sloveD_2()  找因数更优
{
    int a,b,c;
    int count = 0;

    cin >> a >> b >> c;
    for(int i=1;i*i <= c;i++)
    {
        if(c % i == 0)
        {
            int j = c / i;
            if (a <= i && i <= b) count++;
            if (a <= j && j <= b && j != i) count++;
        }
    }
    cout << count << endl;
    return 0;
}
*/