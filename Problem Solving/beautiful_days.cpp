# include <iostream>

using namespace std;

int reverse(int n)
{
    int rev =0;
    while(n>0){
        rev = rev*10 + n%10;
        n=n/10;
    }
    
    return rev;
}

int main()
{
    int a,b,c,count=0;
    cin >> a >> b >> c;
    
    for(int i=a;i<=b;i++)
    {
        // cout << reverse(i) << endl;
        if(abs(i-reverse(i))%c ==0)
        {
            count++;
        }
    }

    cout << count << endl;
    

}