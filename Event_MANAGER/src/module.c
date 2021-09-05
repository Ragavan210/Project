#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"mod_event.h"
#include"modules.h"

void mod1()
{
        printf("1st module\n");
}
void mod2()
{
        printf("2nd module\n");
}
void mod3()
{
        printf("3rd module\n");

}
void mod4()
{
        printf("4th module\n");

}
void mod5()
{
        printf("5th module\n");
}
void mod6()
{
        printf("6th module\n");
}
void mod7()
{
        printf("7th module\n");

}
void mod8()
{
        printf("8th module\n");
}
void mod9()
{
        printf("9th module\n");
}
void mod10()
{
        printf("10th module\n");
}
void (*fptr[])()={&mod1,&mod2,&mod3,&mod4,&mod5,&mod6,&mod7,&mod8,&mod9,&mod10};

void module()
{
        bool result=true;
        int choice,wish;
        do{
        printf("Enter the number of modules:\n");
        scanf("%d",&no_modules);
        if(no_modules>0 && no_modules<=10)
        {
                for(int i=0;i<no_modules;i++)
                {
                        bitmap=0;
                        result = get_events(i,fptr[i]);
                        if(!result)
                        {
                                printf("Do you want to update the module %d again .... Then press 1 :   ",i+1);
                                scanf("%d",&wish);
                                if(wish==1)
                                {
                                        i--;

                                }
                                else
                                {
                                        exit(0);
                               }
                        }

                }
                printf("IF you want to update the module again !!! Press 1 !!!  :  ");
                scanf("%d",&wish);
        }
        else
        {
                printf("!!! Please Enter the valid Module !!!  ... IF you what to continue Enter 1   :  ");
                scanf("%d",&wish);
        }
        }while(wish==1);

}

