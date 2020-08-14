# include<bits/stdc++.h>
# include<iostream>

using namespace std;

int get_frequency(int arr[],int n)
{
    unordered_map<int, int> hash;
    
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;  // key value pair
        // cout << arr[i]  << hash[arr[i]] << endl;
    }

    int max_count = 0, res = -1;
    for (auto i: hash)
    {
        // cout << i.second << i.first << endl;
        if(i.second > max_count) 
        {
            res = i.first;
            max_count = i.second;            
        }
    }    

    return res;
}

int main()
{
    int n,sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int most_frequent = get_frequency(arr, n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=most_frequent)
        {
            sum++;
        }
    }

    cout << sum << endl;
}