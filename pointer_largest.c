#include<stdio.h>
int *find_largest(int a[], int n)
{
    int *p = a;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *p)
            p = &a[i];
    }
    return p;
}
int main()
{
    int a[]={1,2,3,4,5,7,6};
    int *p = find_largest(a, sizeof(a)/sizeof(a[0]));
    printf("%d", *p);
    return 0;
}