# include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    int arr[5][5];
    int sum = 0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
            {
                k=i;
                l=j;
            }
        }
    }
while(k != 2)
    {
            if(k>2)
            {
                k=k-1;
                sum = sum+1;
            }
            else if(k<2)
            {
                k=k+1;
                sum=sum+1;
            }
        }
while(l != 2)
    {
            if(l>2)
            {
                l=l-1;
                sum = sum+1;
            }
            else if(l<2)
            {
                l=l+1;
                sum=sum+1;
            }
        }
cout<< sum;
}
