#include <stdio.h>
#include <math.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))
int mat[10][10];

//This function wiil create the 2D matrix from user input
void A ()
{
  int i, j;
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
	  scanf ("%d", &mat[i][j]);

	}
    }
}


//This function wiil check if i have path between given i and j
void B ()
{
       for (int k=0; k < 10; k++)
    {
      for (int i=0; i < 10; i++)
	    {
	  for (int j=0; j < 10; j++)
	        {
	        if(i!=j&&mat[i][j]==0)
	           mat[i][j]=100000;
	          mat[i][j] = min(mat[i][j], mat[i][k]+mat[k][j]);
        	
        	}
        }
    } 
  int i = 0, j = 0;
  scanf ("%d", &i);
  scanf ("%d", &j);
  if (mat[i][j] != 100000&&mat[i][j]!=0)
    printf ("True\n");
  else
    printf ("False\n");
}

//This function will shortest path between given i and j
void C ()
{   
     for (int k=0; k < 10; k++)
    {
      for (int i=0; i < 10; i++)
	    {
	  for (int j=0; j < 10; j++)
	        {
	           if(i!=j&&mat[i][j]==0)
	           mat[i][j]=100000; 
	          mat[i][j] = min(mat[i][j], mat[i][k]+mat[k][j]);
        	 
        	}
        }
    }   
        int i=0,j=0;
        scanf ("%d", &i);
        scanf ("%d", &j);
  if (mat[i][j] != 0&&mat[i][j]!=100000)
  printf ("%d" "\n", mat[i][j]);
  else
      printf ("-1" "\n");
  
}


