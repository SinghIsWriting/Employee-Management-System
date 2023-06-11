#include <stdio.h>
#include <string.h>   // for strcpy()
#include <stdlib.h>   // for malloc()

int main()
{
    printf("\n\t********* Welcome to ABC pvt. ltd. Company *********\n");
    // Dynamically allocating memory for a character array of strings
    char **arr = (char**)malloc(3*sizeof(char *));    

    // Implementing a loop for taking input of the length of eIDs and all the three employees eIDs
    for (int i = 0; i < 3; i++)
    {
        char id[100];
        int n;
        printf("Enter the no of character in your eID-%d: \n", i+1);
        scanf("%d", &n);
        getchar();    // it consume the enter event(valid input for next scanf function) after entering the value of n

        // Dynamically allocating memory for eIDs stored in the array
        arr[i] = (char *)malloc(n * sizeof(char));

        printf("Enter the Employee ID-%d: \n", i+1);
        scanf("%s", &id);
        strcpy(arr[i], id);
    }
    
    // Displaying all the three Employee eIDs
    for (int j = 0; j < 3; j++)
    {
        printf("Employee Id of Employee %d: %s\n", j+1, arr[j]);
    }

    // Free the allocated memory for each string
    for (int i = 0; i < 3; i++)
    {
        free(arr[i]);
    }

    // Free the allocated memory for the array
    free(arr);

    return 0;
}

