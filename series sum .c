#include<stdio.h>
#include<math.h>

int main()
{
	int x, n, i, j, factorial;
	
	printf("Enter Value of 'x' and 'n': \n");
	scanf("%d %d", &x, &n);
	
	float y;
	float sign= 1;
	float series = 0;
	
	if (n==0)
	{
		printf("The value of 'y' is 1");
	}
	
	else if(x==0)
	{
		printf("The value of 'y' is 0");
	}
	
	else
	{
	
	for(i=1; i<=n; i+=2)
	{
		factorial = 1;
		
		for(j=1; j<=i; j++){
		
		factorial = factorial * j;
		
//		printf("factorial: %d\n", factorial);
//		printf("value of j: %d\n", j);
		
		}
	
//	printf("value of i: %d\n", i);
	
	series = series + ((pow(x,i) / factorial)*sign);
	sign= sign * (-1);
	
//	printf("series: %.2f\n", series);
	
	}
	
	printf("\nThe value of 'y' is %.2f", series);
}

return 0;
}

//#include<stdio.h>
//int main()
//
//{
//	int num, size, i,j;
//	
//	printf("Enter size of triangle and starting number: \n");
//	scanf("\n %d %d", &size, &num);
//	printf("\n***\t***\t***\t***\t***\t***\n\n");
//	for (i=size; i>0; i--){
//		
//		for(j=1; j<=size; j++){
//		
//			if(num==10){
//				num=1;
//				}	
//		
//		printf("%d\t", num);
//		num+=1;
//		}
//		
//	size-=1;
//	printf("\n\n");	
//	}
//
//return 0;	
//}
