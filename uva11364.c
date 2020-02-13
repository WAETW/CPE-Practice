#include <stdio.h>

int main()
{
    int test_cases = 0;
    int result[test_cases];
    scanf("%d", &test_cases);
    for(int i = 0; i < test_cases; i++)
    {
        int number_of_store = 0;
        int input;
        int max = -1, min = 100;
        scanf("%d", &number_of_store);
        for(int j = 0; j < number_of_store; j++)
        {
            scanf("%d", &input);
            if (input > max)
            {
                max = input;
            }
            if (input < min)
            {
                min = input;
            }
        }
        printf("%d\n", (max - min)*2);
    }
    
    return 0;
}
