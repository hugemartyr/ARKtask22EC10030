#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char c[5];
    int a[8],amt[8],change[8];

    for(int i=0;i<8;i++)
        {
            a[i]=50;

        }
    printf("Enter the code for the drink of your choice:: ");
    scanf("%s",c);

    
    
        if(strcmp(c,"PEPS")==0)
            {
                printf("You have chosen Pepsi!\n");
                printf("Enter 30 rs please:: ");
                scanf("%d",&amt[0]);
                if(amt[0]>=30)
                    {
                        printf("The change returned is:: %d\n Enjoy your Drink",amt[0]-30);
                                       
                    }

                if(amt[0]<30)   
                    {
                        
                       printf("The Amount entered is insufficient");

                    }
            }
            
    
        else if(strcmp(c,"MDEW")==0)
            {
                printf("You have chosen Mountain Dew!\n");
                printf("Enter 30 rs please:: ");
                scanf("%d",&amt[0]);
                if(amt[0]>=30)
                    {
                        printf("The change returned is:: %d\n Enjoy your Drink",amt[0]-30);
                                       
                    }

                if(amt[0]<30)   
                    {
                        
                       printf("The Amount entered is insufficient");

                    }
            }
    

}