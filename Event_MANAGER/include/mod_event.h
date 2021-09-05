
bool get_events(int,void(*)());
void trigger_event(int);
void reg_event(int,int,void(*)());
/* Defining the function to set and check the bit */
#define set_bit(n,k) (n)=(n)|(1<<(k-1))
#define get_bit(n,k) (n)&(1<<(k-1))

int no_modules;
int bitmap;
