#include <iostream>
using namespace std;

void slove()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    { 
       if(i % 3 == 0) cout << " " << i;
       else
       {
            int t = i;
            while (t > 0)
            {
                if(t % 10 == 3)
                { cout << " " << i;
                    break;
                }
                t = t / 10;
            }
       }
    }
    cout << endl;  
}

signed main()
{
    slove();
    return 0;
}
/*   PASS

void sloveA()
{
    int H,W;
    while(cin >> H >> W)
    {
        if(H == 0 && W ==0) break;
        for(int i = 0 ; i < H ;i++)
        {
            for(int j = 0 ;j < W;j++)
            {
                cout << "#";
            }
            cout << '\n';
        }
        cout << '\n';     //tip
    }
}

void sloveB()
{
    int H,W;
    while(cin >> H >> W)
    {
        if(H == 0 && W ==0) break;
        for(int i = 0; i < H; i++)
        {
            if(i == 0 || i == H - 1) for(int j = 0 ;j < W;j++) cout << "#";
            else
            {
                cout << '#';
                for(int j = 0 ;j < W-2;j++) cout << ".";
                cout << '#';
            }
            cout << '\n';
        }
        cout << endl;
    }
}

void sloveC()
{
    int H,W;
    while(cin >> H >> W)
    {
        if(H == 0 && W ==0) break;
        for (int i = 0;i < H;i ++)
        {
            for (int j = 0;j < W;j ++)
            {
                if(i % 2 == 0)
                {
                    if(j % 2 == 0) cout << '#';
                    else cout << '.';
                }
                else
                {
                    if(j % 2 == 0) cout << '.';
                    else cout << '#';
                }
            }
            cout << '\n';
        }
        cout << endl;
    }
}


D_example
void call(int n){
  int i = 1;
 CHECK_NUM:               
  int x = i;                //x = 1                  
  if ( x % 3 == 0 ){        //x = 1   not            是否是三的倍数 是的就打印
    cout << " " << i;       
    goto END_CHECK_NUM;
  } 
 INCLUDE3:                  //x = 1                                
  if ( x % 10 == 3 ){       //not                    是否是三的整10倍  是就打印
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;                  //x = 0                  他的10位是否是三   是就打印
  if ( x ) goto INCLUDE3;   //not
 END_CHECK_NUM:             
  if ( ++i <= n ) goto CHECK_NUM; //                 找n这个值里有多少个3的倍数  有多少个十位和个位是三  

  cout << endl;
}



*/