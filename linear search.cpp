#include<stdio.h>
int main()
{
int a[10],i,n,flag=0,key;
scanf("%d",&n);
for(i=0;i<n;i++);

scanf("%d",&a[i]);
scanf("%d",&key);
for(i=0;i<n;i++)
{
	if(a[i]==key)
	{
		flag=1;
		break;
		
	}
}

 if(flag==1)
 printf("found""");
 else
 printf("not found");
}