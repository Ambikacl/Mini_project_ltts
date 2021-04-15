#include "conversion.h"
float percentage(int ch,int num1)
{
    float percent=0;
    percent = (float)num1 / ch * 100.0;
    printf("Percentage is %0.3f\n\n",percent);
    printf("choose next operation:\n");
    return percent;
}
