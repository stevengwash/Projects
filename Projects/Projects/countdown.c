#include <time.h>
#include <stdio.h>

int main(void)
{

int seconds = 0;

printf("Seconds: ");
scanf( "%d", &seconds);

while (seconds > 0)
{
int H = seconds / 3600;
int M = (seconds % 3600) / 60;
int S = seconds % 60 ;
    
printf("\r%02d:%02d:%02d", H, M, S);

fflush(stdout);
clock_t stop = clock() + CLOCKS_PER_SEC;
while (clock() < stop) { }

seconds --;
}

printf ("\rPeace 'Y'\n");
return 0;
}