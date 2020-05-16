#include<stdio.h>
void main()
{
    int x,i,pos,n;
    int arr[100];
      //to scan the size of array
    printf("enter the length of array\n");
    scanf("%d",&n);
	//scan the elements
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
	//scan position and element to be added
    printf("input positions: ");
    scanf("%d",&pos);
    printf("input element to be added:\n");
    scanf("%d",&x);
	//shifting array elements
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}
