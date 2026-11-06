#include <iostream>
using namespace std;

void slove()
{
    int second = 0;
    int minute = 0;
    int hour = 0;

    cin >> second;
    minute = second / 60;
    second = second % 60;

    hour = minute / 60;
    minute = minute % 60;
    
    cout << hour << ":" << minute << ":" << second << '\n';
}

int main()
{
    slove();
    return 0;
}

/*
int main()
{
    int x;
    int y;
    int S;
    int C;
    cin >> x;
    cin >> y;
    C = 2*(x+y);
    S = x*y;

    cout << S << " " << C << '\n';
    return 0;
}
*/
/*
void slove()
{
    int second = 0;
    int minute = 0;
    int hour = 0;

    cin >> second;

    while(second > 59)
    {
        second-=60;
        minute++;
        if (minute > 59)
        {
            hour++;
            minute = 0;
        }
    }

    cout << hour << ":" << minute << ":" << second << '\n';
}
*/