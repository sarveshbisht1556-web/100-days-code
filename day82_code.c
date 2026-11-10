// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>

// creating enum for traffic light colors
enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{

    // setting current signal color
    enum TrafficLight signal = GREEN;

    // checking signal and printing action
    if (signal == RED)
    {
        printf("Stop\n");
    }
    else if (signal == YELLOW)
    {
        printf("Wait\n");
    }
    else if (signal == GREEN)
    {
        printf("Go\n");
    }

    return 0;
}
