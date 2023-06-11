/*

Dynamic Memory Allocation
1. ABC private ltd. manages emloyee records of other companies.
2. Employee Id can be of any length and it can contain any character
3. For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
4. Then, you have to take employee id as an input and display it on screen.
5. Store the employee id in a character array which is allocated dynamically.
6. You have to create only one character array dynamically.

employee1:
Enter no of characters on you Id
30
dynamically allocate the character array.
take input from user

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to ABC pvt. ltd. Company\n");
    char **arr = (char**)malloc(3*sizeof(char *));    

    for (int i = 0; i < 3; i++)
    {
        char id[100];
        int n;
        printf("Enter the no of character in your eID-%d: \n", i+1);
        scanf("%d", &n);
        getchar();    // it consume the enter event(valid input for next scanf function) after entering the value of n
        arr[i] = (char *)malloc(n * sizeof(char));
        printf("Enter the Employee ID-%d: \n", i+1);
        // fgets(id, sizeof(id), stdin);
        scanf("%s", &id);
        strcpy(arr[i], id);
    }
    
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

