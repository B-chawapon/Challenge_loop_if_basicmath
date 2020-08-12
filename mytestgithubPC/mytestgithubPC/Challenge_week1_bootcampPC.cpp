#include<stdio.h>
#include<math.h>
int main()
{
    float num1st, num2nd, countsd, sd;
    float sum = 0;
    float average,averagesd;
    int i = 0;
    float sumpow2 = 0;
    float numpow2[100];
    float num[100];
    scanf("%f %f", &num1st, &num2nd);
    if (num1st > num2nd)
    {
        float countnumber = ((num1st - num2nd) + 1);  
        //printf("%.0f\n", countnumber);
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
        //printf("\n%.0f\n", sum);
        average = sum / countnumber;
        printf("\nAverage = %.1f\n", average);
        for (i = 0; i < countnumber; i++)
        {
            numpow2[i] = pow((num[i] - average), 2);
            sumpow2 += numpow2[i];
        }
        //printf("%f", sumpow2);
        countsd = countnumber - 1;
        averagesd = sumpow2 / countsd;
        sd = sqrt(averagesd);
        printf("SD = %.2f", sd);
    }
    else if (num1st < num2nd)
    {
        float countnumber = ((num2nd - num1st) + 1);
        //printf("%.0f\n", countnumber);
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
        //printf("\n%.0f\n", sum);
        average = sum / countnumber;
        printf("\nAverage = %.1f", average);
        for (i = 0; i < countnumber; i++)
        {
            numpow2[i] = pow((num[i] - average), 2);
            sumpow2 += numpow2[i];
        }
        //printf("%f", sumpow2);
        countsd = countnumber - 1;
        averagesd = sumpow2 / countsd;
        sd = sqrt(averagesd);
        printf("\nSD = %.2f", sd);
    }
    else if (num1st == num2nd)
    {
        printf("Average = %.1f\n", num1st);
        printf("SD = %.2f", 0.00);
    }
    return 0;
}