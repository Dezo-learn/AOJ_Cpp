#include <iostream>
#include <algorithm>
using namespace std;

void slove()
{
    int W,H,x,y,r;

    cin >> W >> H >> x >> y >> r;
    if(x+r > W || y+r > H || y-r < 0 || x-r < 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int main()
{
    slove();
    return 0;
}


/*
void slove1()
{
    int a,b;
    cin >> a;
    cin >> b;

    if(a > b)
        cout << "a > b" <<'\n';
    else if(a < b)
        cout << "a < b" <<'\n';
    else
        cout << "a == b" <<'\n';
}

void slove()
{
    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;
    if(a<b && b<c)
        cout << "Yes" <<'\n';
    else
        cout << "No" <<'\n';
}

void slove()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cout << a[0] << " " << a[1] << " " << a[2] << '\n';
}
*/