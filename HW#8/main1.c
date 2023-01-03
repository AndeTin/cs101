#include<stdio.h>
void print_spaces(int r)
{
    int i;
    for(i=0;i<r;i++)
    {
        printf(" ");
    }
}
void print_stars(int r)
{
    int i;
    for(i=0;i<2*r-1;i++)
    {
        printf("*");
    }
}
int main()
{
    int r,rows=7;
    for(r=1;r<rows;r++)
    {
        print_spaces(rows-r);
        print_stars(r);
        printf("\n");
    }
}