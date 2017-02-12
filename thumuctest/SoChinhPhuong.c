#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    int a;
    float b;
    printf("Nhap n:");
    scanf("%d",&n);
    a = (int) sqrt(n);
    b = (float) sqrt(n);
    if(a==b)
    printf("\n%d la so chinh phuong",n,a);
    else printf("\n%d khong phai la so chinh phuong",n);
}
