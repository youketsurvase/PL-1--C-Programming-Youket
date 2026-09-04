/*
Program (4)-> Write a program to calculate the area of a cricle.
Solution(2)-> User Define Values
*/

# include <stdio.h>
int main()
{
    float radius, area;

    printf("\n Enter the radius of the cricle:");
    scanf("%f", &radius);
    area = (3.14*radius*radius);
    printf("\n Area of Circle= %f", area);

    return 0;

}