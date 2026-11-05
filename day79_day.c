// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float average;

    // opening the file in read mode
    fp = fopen("numbers.txt", "r");

    // checking if file opened successfully
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    // reading all integers from the file
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num; // adding number to sum
        count++;    // counting how many numbers are present
    }

    // calculating average
    if (count > 0)
        average = (float)sum / count;
    else
        average = 0;

    // closing the file
    fclose(fp);

    // displaying results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}