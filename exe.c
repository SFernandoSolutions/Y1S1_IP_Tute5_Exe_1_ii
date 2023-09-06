//ii) Prompt the user to enter series of numbers from the keyboard and display the
//numbers. If user enters a negative number stop reading the numbers.
//iii) Modify the program written in ii) above display the sum and average of the
//positive numbers entered.

#include <stdio.h>
int main(void){
//	create variable
	int num, count, loop;
	double avg;
	
//	assign values to variable
	count=0;
	loop=1;
	
//	input number
	printf("Enter your number : ");
	scanf("%d",&num);
	
//	loop	
	while (num>0){
		
//		calculating sum of entering numbers
		count=count+num;
		
//		Calculating count of entering numbers 
		loop=loop+1;
		
//		input number
		printf("Enter your number : ");
		scanf("%d",&num);
		
//		if enter negative entering count (-1)
		if(num<0){
			loop=loop-1;
		}
		
	}
//	calculate average
	avg=count/loop;
	
//	output
	printf("Count is : %d\n",count);
	printf("Avearage is : %.2lf\n",avg);
	
	return 0;
}
