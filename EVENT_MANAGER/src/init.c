#include<stdio.h>
#include<stdbool.h>
#include"modules.h"
#include"mod_event.h"

int main()
{	int event_ID,wish;
	module();
	do
	{
		printf("Enter the event ID to get the modules that are interested:\n");
         	scanf("%d",&event_ID);
		trigger_event(event_ID);
		printf("Do you want to check for other events !!! Press 1 !!!\n");
		scanf("%d",&wish);

	}while(wish == 1);
	return 0;
}
