#include <smaccm_sender.h>
#include <sender.h>
#include <inttypes.h>

void periodic_ping(const int64_t *periodic_100_ms) {

   printf("sender ping received (%" PRI64 ").  Writing to receiver \n", *periodic_100_ms);
   
   A_Struct test_data;
   test_data.field1 = 1.0;
   test_data.field2 = 2.0; 
   ping_Output1(&test_data);
   
   bool result = ping_Output1(&test_data);
   printf("At time: %llu: ", timer_time());
   printf("second attempt at pinging receiver was: %d\n", result);
}
