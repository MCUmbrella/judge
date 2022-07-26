#include<stdio.h>
#include<malloc.h>
#define RED 1
#define BLUE 2
#define GREEN 3
#define WHITE 0

int mode=0;
int** map;
int width;

void color(int width, int line, int col, int mode)
{
    switch(mode%4)
    {
        case 0: // RB
        {       // GW
            for(int i=0; i!=width/2; i++) // RED
                for(int j=0; j!=width/2; j++)
                    map[i+line][j+col] = RED;
            for(int i=0; i!=width/2; i++) // BLUE
                for(int j=0; j!=width/2; j++)
                    map[i+line][j+col+width/2] = BLUE;
            for(int i=0; i!=width/2; i++) // GREEN
                for(int j=0; j!=width/2; j++)
                    map[i+line+width/2][j+col] = GREEN;
            if(width/2 != 1) color(width/2, line+width/2, col+width/2, ++mode); // WHITE
            break;
        }
        case 1: // GR
        {       // WB
            for(int i=0; i!=width/2; i++) // RED
                for(int j=0; j!=width/2; j++)
                    map[i+line][j+col+width/2] = RED;
            for(int i=0; i!=width/2; i++) // BLUE
                for(int j=0; j!=width/2; j++)
                    map[i+line+width/2][j+col+width/2] = BLUE;
            for(int i=0; i!=width/2; i++) // GREEN
                for(int j=0; j!=width/2; j++)
                    map[i+line][j+col] = GREEN;
            if(width/2 != 1) color(width/2, line+width/2, col, ++mode); // WHITE
            break;
        }
        case 2: // WG
        {       // BR
            for(int i=0; i!=width/2; i++) // RED
                for(int j=0; j!=width/2; j++)
                    map[i+line+width/2][j+col+width/2] = RED;

            for(int i=0; i!=width/2; i++) // BLUE
                for(int j=0; j!=width/2; j++)
                    map[i+line+width/2][j+col] = BLUE;
            for(int i=0; i!=width/2; i++) // GREEN
                for(int j=0; j!=width/2; j++)
                    map[i+line][j+col+width/2] = GREEN;
            if(width/2 != 1) color(width/2, line, col, ++mode); // WHITE
            break;
        }
        case 3: // BW
        {       // RG
            for(int i=0; i!=width/2; i++) // RED
                for(int j=0; j!=width/2; j++)
                    map[i+line+width/2][j+col] = RED;
            for(int i=0; i!=width/2; i++) // BLUE
                for(int j=0; j!=width/2; j++)
                    map[i+line][j+col] = BLUE;
            for(int i=0; i!=width/2; i++) // GREEN
                for(int j=0; j!=width/2; j++)
                    map[i+line+width/2][j+col+width/2] = GREEN;
            if(width/2 != 1) color(width/2, line, col+width/2, ++mode); // WHITE
            break;
        }
    }
}

int main(int argc, char** argv)
{
    scanf("%d", &width);
    map=(int**)malloc(sizeof(int)*width*width); // map = new int[width][width];
    for(int i=0; i!=width; i++)
        map[i] = (int*)malloc(sizeof(int) * width);
    color(width, 0, 0, 0);
    for(int i=0; i!=width; i++)
    {
        for(int j=0; j!=width; j++)
            printf("%d", map[i][j]);
        puts("");
    }
    return 0;
}
