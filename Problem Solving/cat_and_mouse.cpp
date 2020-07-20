# include <iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        int a_diff = c-a;
        if(a_diff <0){
            a_diff = a_diff * -1;
        }
        // cout << "a_diff" << a_diff;
        int b_diff = c-b;
        if(b_diff <0){
            b_diff = b_diff * -1;
        }
        if(a_diff<b_diff)
        {
            cout << "Cat A" << endl;
        }
        else if(a_diff == b_diff)
        {
            cout << "Mouse C" << endl;
        }
        else
        {
            cout << "Cat B" << endl;
        }
        
    }
}