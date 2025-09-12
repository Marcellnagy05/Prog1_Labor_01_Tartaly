#include <stdio.h>
#include <math.h>

const double PI = 3.14159265358979323846;

double areaCalcTube(double h, double d)
{
    double r = d / 2.0;
    double area = (r * h * PI) + (r * r * PI) / 2 + (r * r * PI) / 2;
    return area;
}

void secondDegreeEquationRealSqrs(double a, double b, double c)
{
    double D = (b * b) - (4 * a * c);
    printf("%d",D);
    if (D > 0)
    {
        printf("2 real roots");
    }
    else if (D == 0)
    {
        printf("1 real root");
    }
    else
    {
        printf("No real root(s)");
    }
}

void secondDegreeEquationSolutions(double a, double b, double c){
    double D = (b * b) - (4 * a * c);
    double x1,x2;
    if(D < 0){
        printf("No real root(s)");
    }
    else if(D == 0){
        x1 = -b / (2*a);
        printf("Only has one real root: x1 = x2 = %lf", x1);
    }
    else if(D > 0){
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D))/ (2 * a);
        printf("The equation has 2 real roots: x1 = %lf, x2 = %lf", x1,  x2);
    }
}

int main()
{
    //1.Feladat
        double height, diameter;
        printf("Enter the height:\n");
        scanf("%lf",&height);
        printf("Enter the diameter:\n");
        scanf("%lf",&diameter);
        double area = areaCalcTube(height,diameter);

        printf("%lf can of paint you need",area);
    

    //2.Feladat
    double a,b,c;
    printf("Enter the 'a' side:\n");
    scanf("%lf",&a);
    printf("Enter the 'b' side:\n");
    scanf("%lf",&b);
    printf("Enter the 'c' side:\n");
    scanf("%lf",&c);

    secondDegreeEquation(a,b,c);

    //3.Feladat
    int num = 1;

    while (num <= 20){
        printf("%d\n",num);
        num++;
    }

    //4.Feladat
    int length;
    printf("Length of the line?:\n");
    scanf("%d",&length);
    printf("+");
    for(int i = 0; i < length; i++){
        printf("-");
    }
    printf("+");

    //5.Feladat
    double a,b,c;
    printf("Enter the 'a' side:\n");
    scanf("%lf",&a);
    printf("Enter the 'b' side:\n");
    scanf("%lf",&b);
    printf("Enter the 'c' side:\n");
    scanf("%lf",&c);
    secondDegreeEquationSolutions(a,b,c);
    return 0;
}