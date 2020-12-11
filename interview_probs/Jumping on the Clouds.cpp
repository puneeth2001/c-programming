#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    // int i = 0;
    for(int i=0;i<n-1;i++)
    {

            if(i+2 < n && arr[i+2] == 0)
            {
                count++;
                i++;
            }
            else
            {
                count++; 
            }

    }

    cout << count << endl;
}