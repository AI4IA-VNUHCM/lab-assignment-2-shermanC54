/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	//Your codes here
	float num;
	int cost = 15000;
	num = distance;
	distance = distance -2;
	if(distance > 0){
		if(distance <= 28){
			cost = cost + distance*8000;
		}else{
			cost = cost + 28*8000;
			distance = distance - 28;
			cost = cost + distance*5000;
		}
	}
	if(num <= 0){
		result = 0;
	}
	result = cost;
	printf("%d", result);
	return 0;
}
