
bool get_events(int,void(*)());
void trigger_event(int);
void reg_event(int,int,void(*)());

/*defining the function function for setting the bits and checking
 * whether the bit is set or not*/

#define set_bit(n,b) (n)=(n)|(1<<(b-1))
#define get_bit(n,b) (n)&(1<<(b-1))

/*declaring the variables for number of modules*/

int no_modules;
int bitmap;
