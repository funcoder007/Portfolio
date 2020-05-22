//Kadane's algorithm
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
   int num,i,max=0,maxnow=0;
   int arr[20];
    printf("Enter The number of elements you want in the array :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("Enter the value of element : ");
        scanf("%d",&arr[i]);

    }

    printf(" Array : ");
    for(i=1;i<=num;i++)
    {
     printf("%d ",arr[i]);

    }
    for(i=1;i<=num;i++)
    {
      maxnow=maxnow+arr[i];
      if(maxnow>max)
      {
          max=maxnow;
      }
      if(maxnow<0)
      {
          maxnow=0;
      }
    }
    if (max==0)
    {
        max=arr[1];
    }
    printf("\nMaximum sum in the given sub array is : %d",max);
 }
