#include <stdio.h>
#include <math.h>

int main() {

    double A = sqrt(9); // square root of 9 => 3
    double B = pow(2,4); // 2 ^ 4 = 16
    int C = round(3.14); // 3
    int D = ceil(3.14); // 4
    int E = floor(3.99); // 3
    double F = fabs(-100); // 100
    double G = log(3); // log of 3
    double H = sin(45); // 1.09
    double I = cos(45); // 0.85
    double J = tan(45); // 0.52
    
    printf("\n%lf",A);
    printf("\n%lf",B);
    printf("\n%d",C);
    printf("\n%d",D);
    printf("\n%d",E);
    printf("\n%lf",F);
    printf("\n%lf",G);
    printf("\n%lf",H);
    printf("\n%lf",I);
    printf("\n%lf",J);

}