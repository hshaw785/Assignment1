/*
 * Author: Haley Shaw
 *
 * Date: 09/05/2018
 *
 * This program is for calculating the angle of refraction of light
 * when crossing an interface from one index of refraction into another,
 * assuming the initial index is air and given the second index and the
 * angle of incidence.
 *
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 int main() {
	 
	 double angleOfIncidence, indexOfRefraction, angleOfRefraction, radAngleOfRefraction, radAngleOfIncidence;
	 
	 // The angle of incidence is the initial angle, the angle of refraction is the
	 // resultant, and we don't need an initial index because we assume it is air (1)
	 
	 printf("Please provide the angle of incidence: \n");
	 scanf("%lf", &angleOfIncidence);
	 printf("Please provide the new index of refraction: \n");
	 scanf("%lf", &indexOfRefraction);
	 
	 // The following changes the angle of incidence from degrees to radians
	 
	 radAngleOfIncidence = (angleOfIncidence / 180) * M_PI;
	 
	 radAngleOfRefraction = asin( sin(radAngleOfIncidence) / indexOfRefraction );
	 
	 // The following changes the angle of refraction from radians to degrees
	 
	 angleOfRefraction = (radAngleOfRefraction / M_PI) * 180;
	 
	 printf("Angle of Incidence: %lf degrees\n", angleOfIncidence);
	 printf("Index of refraction: %lf\n", indexOfRefraction);
	 printf("Angle of refraction: %lf degrees\n", angleOfRefraction);
 }
