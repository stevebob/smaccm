#include <user_pong.h>


void In(const PingTwins__msg_impl * msg_data) {
	printf("In%i: Ping recv'd, sending pong.\n",ID);
	Out(msg_data);	
}