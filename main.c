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
        printf("2 valos gyoke van");
    }
    else if (D == 0)
    {
        printf("1 valos gyoke van");
    }
    else
    {
        printf("Nincs valos gyoke");
    }
}

void secondDegreeEquationSolutions(double a, double b, double c){
    double D = (b * b) - (4 * a * c);
    double x1,x2;
    if(D < 0){
        printf("Nincs valos gyöke");
    }
    else if(D == 0){
        x1 = -b / (2*a);
        printf("Az egyenletnek 1 valos gyoke van: x1 = x2 = %lf", x1);
    }
    else if(D > 0){
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D))/ (2 * a);
        printf("Az egyenletnek 2 valos gyoke van: x1 = %lf, x2 = %lf", x1,  x2);
    }
}

int main()
{
    /*1.Feladat
        double height, diameter;
        printf("Enter the height:\n");
        scanf("%lf",&height);
        printf("Enter the diameter:\n");
        scanf("%lf",&diameter);
        double area = areaCalcTube(height,diameter);

        printf("%lf doboz festek kell",area);
    */

    //2.Feladat
    // double a,b,c;
    // printf("Add meg az 'a'-t:\n");
    // scanf("%lf",&a);
    // printf("Add meg az 'b'-t:\n");
    // scanf("%lf",&b);
    // printf("Add meg az 'c'-t:\n");
    // scanf("%lf",&c);

    // secondDegreeEquation(a,b,c);

    //3.Feladat
    // int num = 1;

    // while (num <= 20){
    //     printf("%d\n",num);
    //     num++;
    // }

    //4.Feladat
    // int length;
    // printf("Mekkora legyen a szakasz?\n");
    // scanf("%d",&length);
    // printf("+");
    // for(int i = 0; i < length; i++){
    //     printf("-");
    // }
    // printf("+");

    //5.Feladat
    double a,b,c;
    printf("Add meg az 'a'-t:\n");
    scanf("%lf",&a);
    printf("Add meg az 'b'-t:\n");
    scanf("%lf",&b);
    printf("Add meg az 'c'-t:\n");
    scanf("%lf",&c);
    secondDegreeEquationSolutions(a,b,c);
    return 0;
}