#include<stdio.h>
void main()
{
	int sum=0,temp=0,csum[10],rsum[10],i,j,k,flag=0,n;
	int a[5][5];
	printf("\nEnter the size\n");// 5*5 sudoku
	scanf("%d",&n);
	printf("\nEnter the sudokku\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			}
		}
		printf("\nThe entered sudokku is \n");
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d      ",a[i][j]);
			}
		printf("\n");
	}

		sum=n*(n+1)/2;
	//find the column sum
	i=0;
	temp=0;
	while(i<n){
	for(j=0;j<n;j++)
		{
			temp=temp+a[i][j];
			}
			csum[i]=temp;
			temp=0;
			i++;
		}

	//find the row sum
	j=0;
	temp=0;
	while(j<n){
	for(i=0;i<n;i++)
		{
			temp=temp+a[i][j];
			}
			rsum[j]=temp;
			temp=0;
			j++;
		}

	for(i=0;i<n;i++){
		if((rsum[i]!=sum)||(csum[i]!=sum)){
			flag=1;
			break;
			}
		}

	if(flag==0){
		printf("\nValid Sudokku\n");

	}
	else{
		printf("\ninvalid sudokku \n");

	}
}



