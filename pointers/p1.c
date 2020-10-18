# include <stdio.h>

void Increment(int* b){
    *b = *b + 1; // using callby reference
}

int main()
{
    int a = 10;
    int* b = &a;
    Increment(b);  //sending adress of a
    printf("a = %d",a);
}