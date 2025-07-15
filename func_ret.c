#include<stdio.h>
int check(int x, int y, int n)
{
    if ((x > 0 && x < n) && (y > 0 && y < n))
    return 1;
    else
    return 0;
}
int main()
{
    int x,y,n, check_var;
    printf("Enter a range n:");
    scanf("%d" ,&n);
    printf("Enter x and then y:\n");
    scanf("%d %d",&x, &y);
    check_var = check(x, y ,n);
    printf("%d", check_var);
    return 0;
}