#include <stdio.h>

const double PI = 3.14159265358979323846;

double areaCalcTube(double h, double d){
    double r = d / 2.0;
    double area = (r * h * PI) + (r*r*PI)/2 + (r*r*PI)/2;
    return area;
}

int main(){
    double height, diameter;
    printf("Enter the height:\n");
    scanf("%lf",&height);
    printf("Enter the diameter:\n");
    scanf("%lf",&diameter);
    double area = areaCalcTube(height,diameter);

    printf("%lf doboz festek kell",area);

    return 0;
}