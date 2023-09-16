#include <stdio.h>
#include <stdlib.h>

// reads 5 integers
// calculates mininmal Sum and maximal Sum of 4 of the integers

int smallestNumber (int integer[6], int numberOfIntegers);
int biggestNumber (int integer[6], int numberOfIntegers);
int calculateSum (int integer[6], int numberOfIntegers);

int main()
{
    int numberOfIntegers = 5;
    int integer[numberOfIntegers+1];
    int minSum = 0;
    int maxSum = 0;
    int sum = 0;
    int smallestInt = 0;
    int biggestInt = 0;
    printf(": ");
    scanf("%d %d %d %d %d", &integer[0], &integer[1], &integer[2], &integer[3], &integer[4]);
    smallestInt = smallestNumber(integer, numberOfIntegers);
    biggestInt = biggestNumber(integer, numberOfIntegers);
    sum = calculateSum(integer, numberOfIntegers);
    minSum = sum - biggestInt;
    maxSum = sum - smallestInt;
    printf("minimum sum: %d\n", minSum);
    printf("maximum sum: %d", maxSum);
    return 0;
}

int smallestNumber (int integer[6], int numberOfIntegers)
{
    int smallestNumber = integer[0];
    for (int i=0; i<numberOfIntegers; i++)
    {
        if ( integer[i] < smallestNumber)
        {
            smallestNumber = integer[i];
        }
    }
    return smallestNumber;
}

int biggestNumber (int integer[6], int numberOfIntegers)
{
    int biggestNumber = integer[0];
    for (int i=0; i<numberOfIntegers; i++)
    {
        if ( integer[i] > biggestNumber)
        {
            biggestNumber = integer[i];
        }
    }
    return biggestNumber;
}

int calculateSum (int integer[6], int numberOfIntegers)
{
    int sum = 0;
    for (int i=0; i<numberOfIntegers; i++)
    {
        sum = sum + integer[i];
    }
    return sum;
}
