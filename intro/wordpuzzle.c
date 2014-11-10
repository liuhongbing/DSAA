#include <stdio.h>

int findwordinpuzzle(char wordpuzzle[][4], char *pword, int totalrow, int totalcol, int direct)
{
    int result = 0;
    int row, col;
    int startrow, startcol;
    int endrow, endcol;
    int n;
    
    if(wordpuzzle == NULL || pword == NULL)
        return result;

    switch(direct)
    {
        case 0:
        for(row = 0; row < totalrow; row++)
        {
            n = 0;
            for(col = 0; col < totalcol; col++)
            {
                if(wordpuzzle[row][col] == pword[n])
                {
                    if(n == 0)
                    {
                        startrow = row;
                        startcol = col;
                    }
                    n++;
                }
                else
                {
                    n = 0;
                }
                
                if(pword[n] == '\0')
                {
                    result = 1;
                    endrow = row;
                    endcol = col;
                    printf("Find word \"%s\" at direct %d, from (%d, %d) to (%d, %d)\n", pword, direct, startrow, startcol, endrow, endcol);
                }
            }
        }
        break;
        
    }
    
    return result;
}

int main(int argc, char *argv[])
{
    char wordpuzzle[][4]={"this", "wath", "oahg", "fgdt"};
    char *pword = "a";
    int totalcol, totalrow, direct;

    totalrow = 4;
    totalcol = 4;
    direct = 0;

    if(findwordinpuzzle(wordpuzzle, pword, totalrow, totalcol, direct) != 1)
    {
        printf("Not Found!\n");
    }
    
    return 0; 
}
