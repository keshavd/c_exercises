#include <stdio.h>
#include <string.h>
int main(){

	int kilometers, suitcases;
	double basefare, luggageCost, total;
	printf("How many kilometers were travelled?");
	scanf("%d", &kilometers);
	printf("How many suitcases were there?");
	scanf("%d", &suitcases);
	basefare = (0.2 * kilometers) + 2;
	printf("The total charge for the trip without suitcases was %.2lf\n", basefare);
	luggageCost = (1.50 * suitcases);
	printf("The charge for the suitcases was %.2lf\n", luggageCost);
	total = (basefare + luggageCost);
	printf("The total cost for the trip was %.2lf\n", total);
}
