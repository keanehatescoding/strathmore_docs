Write a program to compute the area and the circumference of a circle.

__SOLUTION__
__(a) Analysis of the problem__
		__(i) Outputs                                              Variables__
		The area of the circle                                Area
		The circumference of the circle                Circumference
		__(ii) Inputs__
		The radius of the circle                            Radius
		__(iii) Tasks__
		* Input the radius
		* Compute the area
		* Compute the circumference
		* Output the area and circumference
		__Constant__
		The pi of the circle                                    pi = 3.14
__(b) The Program Design__
__(i) Pseudo Code__
BEGIN 
	pi = 3.14
	INPUT Radius
	Area = pi * radius * radius
	Circumference = 2 * pi * radius
	OUTPUT Area, Circumference
END
 __(c) Flowchart Diagrams__
```mermaid

```
 __(d) Program Code__
 ```C
/** AUTHOR KEANE LAKWEY MBAE
Date of Creation: 16/7/2024
Function Ask the user a radius and then compute the area and circumference
**/
 #include <stdio.h>
Define PI 3.14
int main void {
	double radius, area; circumference;

	printf("Input the radius of your circle: ");
	scanf("%lf",&radius);

	area = pi * radius * radius;
	circumference = 2 * radius * radius;

	printf("The area of your circle is %.2lf\n", area);
	printf("The circumference of your circle is %.2lf\n", circumference);

	return 0;
}
```
