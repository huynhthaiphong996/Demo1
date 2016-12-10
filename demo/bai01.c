#include <stdio.h>

void main()
{
    int i,n,a[20],*p;
    printf("Nhap n:");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
    printf("\nNhap gia tri phan tu thu %d:",i+1);
    scanf("%d",p+i);
    }
    printf("\nDay da nhap:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
