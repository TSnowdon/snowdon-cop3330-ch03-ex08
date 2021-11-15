/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Snowdon
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int val = 0;

    printf("Please insert your number:\n");
    scanf("%d", &val);
    
    if (val % 2 == 0)
    {
        printf("The value %d is an even number", val);
    }
    else if (val % 2 == 1)
    {
        printf("The value %d is not an even number", val);
    }
    return 0;
}