# include <bits/stdc++.h>
# include <iostream>
using namespace std;

int main()
{
    
    int ds,ms,ys,dg,mg,yg,fine =0;
    cin >> dg >> mg >> yg;
    cin >> ds >> ms >> ys;

    if(yg<ys)
    {
        fine = 0;
    }
    if(yg>ys)
    {
        fine = 10000;
    }
    if(yg == ys)
    {
        if(mg<ms)
        {
            fine =0;
        }
        if(mg>ms)
        {
            fine = (mg-ms)*500;
        }
        if(mg == ms)
        {
            if(dg <= ds)
            {
                fine = 0;
            }
            else
            {
                fine = (dg - ds)*15;
            }
        }
    }

    
    cout << fine <<endl;
}
// sqrt takes time