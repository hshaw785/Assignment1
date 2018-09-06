/*
 * Author: Haley Shaw
 *
 * Date: 09/05/2018
 *
 * This program is for calculating the annualized return rate of an
 * investment given the initial and final values of the investment
 * and the time elapsed.
 *
 */

 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>

 int main(int argc, char **argv) {

   double initialValue, finalValue, days, weeks, years, timePassed, rateOfReturn;

   printf("Please enter the starting value of the investment: \n");
   scanf("%lf", &initialValue);
   printf("Please enter the final value of the investment: \n");
   scanf("%lf", &finalValue);
   printf("Please enter the number of years between the two investments: \n");
   scanf("%lf", &years);
   printf("Please enter the number of weeks between the two investments: \n");
   scanf("%lf", &weeks);
   printf("Please enter the number of days between the two investments: \n");
   scanf("%lf", &days);

   timePassed = years + (weeks * 7 / 365) + (days / 365);

   if(initialValue >= 0 && finalValue >= 0 && timePassed >= 0) {

     rateOfReturn = 100 * (pow( (finalValue / initialValue) , (1 / timePassed) ) - 1);

     printf("Initial Value:\t %lf\n", initialValue);
     printf("Final Value:\t %lf\n", finalValue);
     printf("Years:\t %lf\n", timePassed);
     printf("Annualized Rate of Return: %lf%\n", rateOfReturn);
   }else{
     printf("ERROR: One or more of your input values are not valid.");
     exit(1);
   }
 }
