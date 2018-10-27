#include<stdio.h>
#include<conio.h>
int i,j,k,r,c,m1[10][10],m2[10][10];
int ans[10][10];
void add_matrix();
void sub_matrix();
void mul_matrix();
void div_matrix();
void main()
{
 clrscr();
 printf("\nEnter the number of row and column respectively: ");
 scanf("%d %d",&r,&c);
 printf("\n\nFor 1st Matrix:\n");
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("Enter the a[%d][%d]: ",i+1,j+1);
     scanf("%d",&m1[i][j]);
    }
  }

 printf("\nFor 2nd Matrix:\n");
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("Enter the a[%d][%d]: ",i+1,j+1);
     scanf("%d",&m2[i][j]);
    }
  }
 printf("Your 1st Matrix is:\n");
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("%d  ",m1[i][j]);
     if(j==c-1)
     printf("\n\n");
    }
  }
 printf("Your 2nd Matrix is:\n");
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("%d  ",m2[i][j]);
     if(j==c-1)
     printf("\n\n");
    }
  }
  add_matrix();
  sub_matrix();
  mul_matrix();
  div_matrix();
 getch();
}

void add_matrix()
{
 printf("Addition of Matrices:\n");
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("%d  ",m1[i][j]+m2[i][j]);
     if(j==c-1)
     printf("\n\n");
    }
  }
}

void sub_matrix()
{
 printf("Subtraction of Matrices:\n");
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("%d  ",m1[i][j]-m2[i][j]);
     if(j==c-1)
     printf("\n\n");
    }
  }
}

void mul_matrix()
{
 printf("Multiplication of Matrices:\n");
 if(r==c)
 {
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
      for(k=0;k<c;k++)
       {
	ans[i][j]=ans[i][j]+m1[i][k]*m2[k][j];
       }
      printf("%d  ",ans[i][j]);
      if(j==c-1)
      printf("\n\n");
     }
   }
 }
 else
 printf("Your number of row is not equals to number of columns.\nSo multiplication of matrices is not possible.\n");
}
void div_matrix()
{
 printf("Division of Matrices:\n");
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("%d/%d  ",m1[i][j],m2[i][j]);
     if(j==c-1)
     printf("\n\n");
    }
  }
}
