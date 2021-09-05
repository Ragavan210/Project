#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"mod_event.h"
#include"modules.h"

struct node
{       int module_ID;
	int events_bitmap;
	void (*module_ptr)();
	struct node *next;
}*head=NULL,*temp1,*temp2,*temp3;


bool get_events(int i,void (*cb_func)())
{       int events,event_ID,wish;
	printf("Enter the number of events for the module %d :\n",i+1);
	scanf("%d",&events);
	if(events>0 && events<=32)
	{
		for(int j=0;j<events;j++)
		{
			printf("Enter the event ID :\n");
			scanf("%d",&event_ID);
			if(event_ID>0 && event_ID<=32)
			{
				set_bit(bitmap,event_ID);

			}
			else
                        {
                                printf("It is Invalid event ID .... If you want to continue press 1 !!!!");
                                scanf("%d",&wish);
                                if(wish==1)
                                {
                                        j--;
                                }
                                else
                                {
                                        exit(0);
                                }

                        }


		}
		reg_event(i+1,bitmap,cb_func);
	}
	else
	{
		printf("Please Enter the Valid event ID");
		return false;

	}


	return true;
}
void reg_event(int module_id,int result,void (*mods_ptr)())
{
	temp2= (struct node*)malloc(sizeof(struct node*));
	temp2->module_ID=module_id;
	temp2->events_bitmap=result;

	temp2->module_ptr=mods_ptr;
	if(head==NULL)
	{
		head=temp1=temp2;
		return;
	}
	temp1->next=temp2;
	temp1=temp2;
	return;

}

void trigger_event(int req_event)
{

	temp3=head;
	int flag=1;
	while(temp3)
	{ 
		if(get_bit(temp3->events_bitmap,req_event)){
			temp3->module_ptr();
			flag=0; 
		}
		temp3=temp3->next;
	}
	if(flag)
	{
		printf("The event you entered is unliked one\n");
	}



}
