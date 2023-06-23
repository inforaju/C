#include<stdio.h>

#define MAXWIDTH   10           // let's set the maximum width ...
#define MAXHEIGHT  10			//  ... and the maximum height 
void main()
{
    int  a[9][9];               /* Current coordinates */
    char direction;         	/* Direction of movement - N, S, E, W */
    int distance; 				 /* Size of movement */
    int  instructionCount;  	/* Number of instructions */
    int i,j;                 	/* For-loop variable */
    int x,y;
    int t1,t2;
    int b[0][0];
    
    printf("Enter the start point (x,y): ");
    scanf("%d",&a[0][0]);
    
    
    //x%=MAXWIDTH; /* Make sure that the coordinates wrap so that they're still in the matrix */
    //y%=MAXHEIGHT;
    /* Read the number of moves */
    printf("\nEnter the Number of Instructions \n");
    scanf("%d",&instructionCount);
    
    /* process each instruction */
    for(i=0; i<instructionCount; i++)
    {
        printf("\nEnter the no. of steps along with direction (e.g. 4N) \n");
        scanf("%d%c",&distance,&direction);
        /* Now we increment/decrement according to the direction. However
        * we have to stop when we hit the edges, i.e. can't go less than
        * zero or greater than the width (for x) or height (for y);
        */
        for(i=1; i<=2; i++)
        {
            for(j=1; j<=2; j++)
            {
                switch(direction)
                {
                    /* North is upwards (towards the max) */
                    case 'n':
                    case 'N': a[i][j]=a[i-1][(i-1)+distance];
                        if(y > MAXHEIGHT)
                            y = MAXHEIGHT;
                        break;
                    /* South is down (towards zero) */
                    case 's':
                    case 'S': a[i][j]=a[i-1][(i-1)-distance];
                        if(y < 0)
                            y = 0;
                        break;
                        
                    /* East is to the right (towards the max) */
                    case 'e':
                    case 'E': a[i][j]=a[(i-1)+distance][i-1];
                        if(x > MAXWIDTH)
                            x = MAXWIDTH;
                        break;
                        
                    /* West is to the left (towards zero) */
                    case 'w':
                    case 'W':a[i][j]=a[(i-1)-distance][i-1];
                        if(x < 0)
                            x = 0;
                        break;
                        
                    /* Something incorrect was provided */
                    default : printf("\nError in input detected\n");
                        a[i][j]=b[0][0];
                }
            }
        }
        
        printf("\nThe Final Destination is %d\n", b[0][0]);
        return 0; /* Needed to prevent a compiler warning */
    }
}