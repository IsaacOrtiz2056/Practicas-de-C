#include<math.h>
float areacirculo(float valorA)
{
    return 3.1416*pow(valorA,2);//pi*(r)^[2]
}

float areapentagono(float valorA, float valorB, float valorC)
{
    return  (valorA*valorB*valorC)/2;//(NL*L*ap)/2
}

float areatrapecio(float valorA, float valorB, float valorC)
{
    return ((valorA+valorB)/2)+valorC;// (baseMay+baseMen)/2
}

float arearectangulo(float valorA, float valorB)
{
    return (valorA+valorB);//(base*alt)
}