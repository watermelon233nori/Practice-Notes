#include <stdio.h>
#include <stdlib.h>

int finalValueAfterOperations(char **operations, int operationsSize)
{
    int ans=0;
    for (char i = 0; i < operationsSize; i++)
    {
        if (operations[i][1] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    return ans;
}

int main(int argc, char *argv[])
{
    char *operations[] = {"--X", "X++", "X++"};
    printf("%d",finalValueAfterOperations(operations, 3));
    return 0;
}
