// pointers and arrays
# include <stdio.h>

int Double(int* a,int size)
{
    for(int i=0;i<size;i++)
    {
        a[i] = a[i] * 2;
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    // int* b = &a;
    int size = sizeof(a)/sizeof(a[0]);
    Double(a,size);
    for(int i=0;i<size ;i++)
    {
        printf("%d ",a[i]);
    }
}