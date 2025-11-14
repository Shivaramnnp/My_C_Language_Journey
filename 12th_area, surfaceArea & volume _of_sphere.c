#include<stdio.h>
#include<math.h>
int main(){
  
    double radius = 0.0;
    double area =0.0;
    double surfaceArea = 0.0;
     double volume = 0.0;
    const double PI = 3.14159;
   
    
    printf("Enter the Radius of Circle : ");
    scanf("%lf",&radius);

    area = PI * pow(radius, 2);  // area of a circle formule
    
    surfaceArea = 4 * PI * pow(radius, 2); //surfaceArea of sphere (3d circle)

    volume = (4.0/3.0) * PI * pow(radius, 3); // volume of sphere

    printf("The area of circle is : %.4lf\n",area);

    printf("The area of Sphere is : %.4lf\n",surfaceArea);

     printf("The area of Sphere is : %.4lf\n",volume);

    return 0;
}