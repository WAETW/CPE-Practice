#include <stdio.h>

int main()
{
    int test_cases = 0;
    int result[test_cases];
    scanf("%d", &test_cases);
    for(int i = 0; i < test_cases; i++)
    {
        int number_of_store = 0;
        int store[20];
        scanf("%d", &number_of_store);
        for(int j = 0; j < number_of_store; j++)
        {
            scanf("%d", &store[j]);
        }
        for(int j = 0; j < number_of_store; j++)
        {
            for(int sort_it = j + 1; sort_it < number_of_store; sort_it++)
            {
                if(store[j] > store[sort_it])
                {
                    int tmp = store[j];
                    store[j] = store[sort_it];
                    store[sort_it] = tmp;
                }
            }
        }
        result[i] = (store[number_of_store - 1] - store[0]) * 2;
    }
    for(int i = 0; i < test_cases; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}
