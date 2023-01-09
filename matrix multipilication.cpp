#include<stdio.h>
int main()
{

int a[5][5],b[5][5],c[5][5],i,j,k,n,m,l;
 printf("enter the r&c of a");
 scanf("%d%d",&n,&m);
 printf("enter the r&c of b");
 scanf("%d%d",&m,&l);
 
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 scanf("%d",&a[i][j]);
 
 for(j=0;j<n;j++)
 for(k=0;k<n;k++)
 scanf("%d",&b[j][k]);
 
 for(i=0;i<n;i++)
 {
 	for(k=0;k<n;k++)
 	{
 		c[i][k]=0;
 		for(j=0;j<m;j++)
 		{
 			c[i][k]=c[i][k]+a[i][j]*b[j][k];
			 	 }
	 }
 }
 for(i=0;i<n;i++)
 {
 	for(k=0;k<l;k++)
 	printf("%d\t",c[i][k]);
 	printf("\n");
 	
 }
}