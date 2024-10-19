#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double LengthA , LengthB , Area, LengthC, Extent ;
    printf ( "  A, B eingeben \n" ) ;
    scanf ( "%lg %lg" , &LengthA , &LengthB ) ;
    Area = ( LengthA * LengthB ) / 2.0 ;
    LengthC = sqrt(LengthA*LengthA+LengthB*LengthB);
    Extent = LengthA+LengthB+LengthC;

    printf ("Length A = %lf \n" , LengthA ) ;
    printf ("Length B = %lf \n" , LengthB ) ;
    printf ("Length C = %lf \n" , LengthC ) ;
    printf ("Area = %lg \n" , Area ) ;
    printf ("Extent = %lg \n" , Extent ) ;

    if (Area<10)
    {
       printf ("Area less than 10\n");
    }
    else if (Area>=10)
    {
       printf ("Area greater or equal 10\n");
    }
    return 0;
}
