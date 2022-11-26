#include <stdio.h>
#include<math.h>
int main()
{
	int n;
	double s;
	printf("Lets calculate the square root of a number \n");
	printf("Please enter a number : ");
	scanf("%d" ,&n);
	if (n > 0) 
	{
	s= sqrt(n);
	printf("the square root of %lf\n", s);
	}else{
		printf("you have entered invalid input \n Goodday!\n");
	}
return 0;
}
