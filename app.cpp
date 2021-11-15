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
        printf("%d is even", val);
    } else {
        printf("%d is odd", val);
    }
    return 0;
}