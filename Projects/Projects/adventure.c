#include <stdio.h>
#include <strings.h>

int main()
{
    char direction;
    char North[10];
    char East[10];
    char South[10];
    char West[10];

    printf("Enter direction (N,E,W,S):\n");
    scanf("%s", &direction);

    switch (direction)
    {
    case 'N':
        printf("Choose between('East or West'):\n");
        char next_direction;
        scanf("%s", &next_direction);
        if (next_direction = 'E')
        {
            printf("maybe its West\n");
            scanf("it's neither this"
                  "%s",
                  &next_direction);
        }

        {
        case 'E':
            printf("Choose between('North or South'):\n");

            scanf("%s", &next_direction);
            if (next_direction = 'N')
            {
                printf("maybe its South\n");
                scanf("it's neither this"
                      "%s",
                      &next_direction);
            }
        case 'S':
            printf("Choose between('East or West'):\n");

            scanf("%s", &next_direction);
            if (next_direction = 'E')
            {
                
                scanf("%s", &next_direction);
                printf("Amazing :) \n");
                break;
                scanf("%c", &direction);
            
            }
        case 'W':
            printf("Choose between('North or South'):\n");

            scanf("%s", &next_direction);
            if (next_direction = 'N')
            {
                printf("maybe its South\n");
                scanf("it's neither this"
                      "%s",
                      &next_direction);
                printf("Amazing :) \n");
                scanf("%c", &direction);
                break;
                default:
    printf("Some other time champ\n");
    break;
            
            }
        }
    }
}