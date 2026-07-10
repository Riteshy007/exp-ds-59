#include<stdio.h>
int main()
{
	int size,i,x,sum=0,first_position=-1;
	printf("enter the size of the array:");
	scanf("%d,&size");
	int arr[size];
	printf("enter the elements of the array:");
	for(i=0;<size;i++)
	{
		scanf("%d,&arr[i]");
	}
	printf("enter the number to be found:");
	scanf("%d,&x");
	for(i=0;<size;i++)
	{
		if(arr[i]==x)
		{
			count++;
			if(first_position==-1)
			{
				first_position=i;
			}
		}
	}
	print("\nNumber of occurances of %d:\n",x,count);
	if (first_position != -1){
		printf("first occurence of %d is at position: \n",x,first_position);
	}
	
}
