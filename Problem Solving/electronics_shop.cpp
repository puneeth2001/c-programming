# include <iostream>

using namespace std;

int main()
{
    int m,k,d,sum=0;
    cin >> m;
    cin >> k;
    cin >> d;
    int key[k],driv[d];

    for(int i=0;i<k;k++)
    {
        cin >>key[i];
        cout << key[i];
    }

    for(int i=0;i<d;i++)
    {
        cin >> driv[i];
    }
    int min = key[0]+driv[0];
    cout << min;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<d;j++)
        {
            sum = driv[j] + key[i];
            if(sum <60 && sum > min)
            {
                min = sum;
            }
        }
    }

    cout << min;

}