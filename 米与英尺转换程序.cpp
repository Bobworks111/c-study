#include <stdio.h>
int main()
{
    printf("m" "cm");
    double foot;
    double inch;
    scanf ("%lf %lf", &foot , &inch);
    printf ("%f,\n",
          ((foot + inch /12) * 0.3084));

    return 0;           
}