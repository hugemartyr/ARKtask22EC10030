#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char c[5];
    int a[8],amt[8],change[8],sum;

    for(int i=0;i<8;i++)
        {
            a[i]=50;

        }
    sum=a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[0];
    while(sum>=0)
    {

    printf("Enter the code for the drink of your choice:: ");
    scanf("%s",c);
        switch(c[4])    
        {



            case 'PEPS': printf("You have selected Pepsi\n Enter 30 rs :: ");
                            scanf("%d",amt[0]);
                            while(amt[0]>=30)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[0]-30);
                                a[0]--;
                                break;
                            }
            

            case 'MDEW': printf("You have selected Mountain Dew\n Enter 30 rs :: ");
                            scanf("%d",amt[1]);
                            while(amt[1]>=30)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[1]-30);
                                a[1]--;
                                break;
                            }
            
            case 'DPEP': printf("You have selected Dr Pepper\n Enter 50 rs :: ");
                            scanf("%d",amt[2]);
                            while(amt[2]>=50)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[2]-50);
                                a[2]--;
                                break;
                            }
        
            case 'COKE': printf("You have selected Coke\n Enter 20 rs :: ");
                            scanf("%d",amt[3]);
                            while(amt[3]>=20)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[3]-20);
                                a[3]--;
                                break;
                            }
        
        
            case 'GATO': printf("You have selected Gatorade\n Enter 20 rs :: ");
                            scanf("%d",amt[4]);
                            while(amt[4]>=20)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[4]-20);
                                a[4]--;
                                break;
                            }
        
        
            case 'DCOK': printf("You have selected Diet Coke\n Enter 30 rs :: ");
                            scanf("%d",amt[5]);
                            while(amt[5]>=30)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[5]-30);
                                a[5]--;
                                break;
                            }
        
        
            case 'MINM': printf("You have selected Minute Maid\n Enter 30 rs :: ");
                            scanf("%d",amt[6]);
                            while(amt[6]>=25)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[6]-25);
                                a[6]--;
                                break;
                            }
        
        
            case 'TROP': printf("You have selected tropicana\n Enter 30 rs :: ");
                            scanf("%d",amt[7]);
                            while(amt[7]>=30)
                            {
                                printf("The change returned is %d\n Enjoy your drink!",amt[7]-30);
                                a[7]--;
                                break;
                            }
        
            default: printf("The Code entered is incorrect");
            
                    
        }

    
    }   
    
printf("Out of drinks");
    
return 0;
}