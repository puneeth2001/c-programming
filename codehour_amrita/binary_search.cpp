#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int search_for_k(int arr[],int first, int last, int k)
{
    if(last >= first)
    {
        int mid = first + (last - first)/2;
        if(arr[mid] == k)
        {
            return mid;
        }
        if(arr[mid]>k)
        {
            return search_for_k(arr,first,mid-1,k);
        }
        return search_for_k(arr,mid+1,last,k);
    }
    return -1;
}

int main()
{
    int n,t,k;
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cin >> t >> k;
        int arr[t];
        for(int j=0; j<t; j++)
        {
            std::cin >> arr[j];
        }
        std::cout << (search_for_k(arr,0,t-1,k)) <<endl;
    }
}