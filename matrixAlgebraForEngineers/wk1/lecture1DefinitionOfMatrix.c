#include <stdio.h>

main ()
{
    int twoByTwo[2][2] = {
        {1, 2},
        {3, 4}
    };

    int threeByTwo[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int twoByThree[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int columnVector[3][1] = {
        {1},
        {2},
        {3}
    };

    int rowVector[1][3] = {
        {1, 2, 3}
    };

    for (int i = 0; i < 2; i++)
    {
        printf ("row = twoByTwo[%d][0] = %d \n", i, twoByTwo[i][0]);
        printf ("column = twoByTwo[0][%d] = %d \n", i, twoByTwo[0][i]);
        printf ("row = twoByTwo[%d][1] = %d \n", i, twoByTwo[i][1]);
        printf ("column = twoByTwo[1][%d] = %d \n", i, twoByTwo[1][i]);
    }

    puts ("\n");

    for (int i = 0; i < 3; i++)
    {
        printf ("row = threeByTwo[%d][0] = %d \n", i, threeByTwo[i][0]);
        printf ("row = threeByTwo[%d][1] = %d \n", i, threeByTwo[i][1]);

        if (i == 2)
        {
            for (int i = 0; i < 2; i++)
            {
                printf ("column = threeByTwo[0][%d] = %d \n", i, threeByTwo[0][i]);
                printf ("column = threeByTwo[1][%d] = %d \n", i, threeByTwo[1][i]);
                printf ("column = threeByTwo[2][%d] = %d \n", i, threeByTwo[2][i]);
            }
        }
    }

    puts ("\n");

    for (int i = 0; i < 2; i++)
    {
        printf ("row = twoByThree[%d][0] = %d \n", i, twoByThree[i][0]);
        printf ("row = twoByThree[%d][1] = %d \n", i, twoByThree[i][1]);
        printf ("row = twoByThree[%d][2] = %d \n", i, twoByThree[i][2]);

        if (i == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                printf ("column = twoByThree[0][%d] = %d \n", i, twoByThree[0][i]);
                printf ("column = twoByThree[1][%d] = %d \n", i, twoByThree[1][i]);
            }
        }
    }

    puts ("\n");

    for (int i = 0; i < 3; i++)
    {
        printf ("column = columnVector[%d][0] = %d \n", i, columnVector[i][0]);
    }

    puts ("\n");

    for (int i = 0; i < 3; i++)
    {
        printf ("row = rowVector[0][%d] = %d \n", i, rowVector[0][i]);
    }

    return 0;
}