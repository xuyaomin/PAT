#include <cstdio>

int main()
{
    const int ZERO = 48;
    const int SIZE = 10;
    int book[SIZE] = { 0 };

    char c = '\n';
    while ((c = getchar()) != '\n')
    {
       book[(int)c % ZERO]++;
    }
 
    for (int i = 0; i < SIZE; i++)
    {
    	if (book[i] > 0) printf("%d:%d\n", i, book[i]);
    }

    return 0;
}