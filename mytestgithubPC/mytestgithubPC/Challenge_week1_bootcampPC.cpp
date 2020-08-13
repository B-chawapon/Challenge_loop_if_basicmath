#include<stdio.h>
#include<math.h>
    float num1st, num2nd, countsd, sd,countnumber;
    float sum = 0;
    float average,averagesd;
    float sumpow2 = 0;
    float numpow2[100];
    float num[100];
    int i=0;

float averagefunction(){
    average = sum / countnumber;
    printf("\nAverage = %.2f", average);
}
float sdfunction(){
    for (i = 0; i < countnumber; i++)
        {
            numpow2[i] = pow((num[i] - average), 2);
            sumpow2 += numpow2[i];
        }
    countsd = countnumber - 1;
    averagesd = sumpow2 / countsd;
    sd = sqrt(averagesd);
    printf("\nSD = %.2f", sd);
}
int main()
{
    scanf("%f %f", &num1st, &num2nd);
    if (num1st > num2nd)
    {
        countnumber = ((num1st - num2nd) + 1);  
        for (; num1st >= num2nd; num1st--)
        {
            for (; i < countnumber;)
            {
                num[i] = num1st;
                printf("%.0f ", num[i]);
                break;
            }
            sum += num[i];
            i++;
        }
        averagefunction();
        sdfunction();
    }
    else if (num1st < num2nd)
    {
        countnumber = ((num2nd - num1st) + 1);
        for (; num2nd >= num1st; num1st++)
        {
            for (; i < countnumber;)
            {
                num[i] = num1st;
                printf("%.0f ", num[i]);
                break;
            }
            sum += num[i];
            i++;
        }
        averagefunction();
        sdfunction();
    }
    else if (num1st == num2nd)
    {
        printf("Average = %.1f\n", num1st);
        printf("SD = %.2f", 0.00);
    }
    return 0;
}