#include <stdio.h>

#include <stdlib.h>
int main(){
    float miles;
    float gallons;
    float mpg;
    float cost_per_gallon;
    float totalCost;
    float cost_per_mile;
    float miles_per_gallon;
    printf("Welcome to Joshua's Gas Mileage Calculator\n");
    printf("Number of gallons used since last fillup: ");
    scanf("%f", &gallons);
    printf("Number of miles travelled since last fillup: ");
    scanf("%f", &miles);
    cost_per_gallon = 3.12;
    totalCost = gallons * cost_per_gallon;
    cost_per_mile = totalCost / miles;
    miles_per_gallon = miles / gallons;
     printf("Number of gallons used since the last visit to the gas station: %f\n", gallons);

    printf("The cost per gallon: %f\n", cost_per_gallon);
    printf("The total cost to refill the tank: %f\n", totalCost);
    printf("Cost per mile: %f\n", cost_per_mile);
    printf("Miles per gallon: %f\n", miles_per_gallon);
  }
  
    