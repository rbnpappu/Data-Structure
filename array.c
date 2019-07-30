#include<stdio.h>
void insertion();
void devision();
void rev();
void search();
int main()
{
int ch;
printf("1.insertion\n");
printf("2.devision\n");
printf("3.reverse\n");
printf("4.search\n:");
printf("Enter your choice:");
scanf("%d",&ch);
while(1)
{






switch(ch)
{
case 1:
insertion();
break;
case 2:
devision();
break;
case 3:
rev();
break;
case 4:
search();
case 5:
exit(0);
break;
default:
printf("default choice:");





}
}
return 0;
}
void insertion()
{

int n;
printf("Enter the no of space in an array:");
scanf("%d",&n);
int arr[n],i,p,c=0,n1;
for(i=0;i<n;i++)
{

printf("Enter the number:");
scanf("%d",&arr[i]);


}
printf("Enter the position:");
scanf("%d",&p);
for(c=n-1;c>=p-1;c--)
{
arr[c+1]=arr[c];

}
printf("enter the number in an array:");
scanf("%d",&n1);
arr[p-1]=n1;
for(i=0;i<=n;i++)
{

printf("%d\n",arr[i]);

}

}

void devision()
{

int n;
printf("Enter the no of space in an array:");
scanf("%d",&n);
int arr[n],i,p,c=0;
for(i=0;i<n;i++)
{

printf("Enter the number:");
scanf("%d",&arr[i]);


}
printf("Enter the position:");
scanf("%d",&p);
for(c=p-1;c>=0;c--)
{
arr[p-1]=0;

}
for(i=0;i<=n;i++)
{

printf("After insertion:%d",arr[i]);

}

}

void rev()
{

int n;
printf("Enter the no of space in an array:");
scanf("%d",&n);
int arr[n],i,p,c=0;
for(i=0;i<n;i++)
{

printf("Enter the elements in array:");
scanf("%d",&arr[i]);

}
for(i=n-1;i>=0;i--)
{

    printf("%d",arr[i]);
}


}

void search()
{

int n;
printf("Enter the no of space in an array:");
scanf("%d",&n);
int arr[n],i,c=0,n1;
for(i=0;i<n;i++)
{

printf("Enter the number:");
scanf("%d",&arr[i]);


}
printf("enter the element for search:");
scanf("%d",&n1);
for(i=0;i<n;i++)
{

if(arr[i]==n1)
{
   c++;
}
}
if(c!=0)
{

printf("The elements is found in an array:%d",n);
printf("the number is repeated:%d",c);

}

}








