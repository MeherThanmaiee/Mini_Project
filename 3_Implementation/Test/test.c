#include "fun.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
struct customer
{
  char name[20];
  char address[50];
  char phno[10];
  int period;
}c;
struct allocdealloc
{
 char name[20];
 int roomno;
 char roomtype[20];
 char foodtype[20];
 int year;
 int month;
 int day;
 int hour;
 int minute;
 }a;
struct billing
{
 int bill;
 }b;
void test_avail(void){
    int count=100
    TEST_ASSERT_EQUAL(1,avail(count));
    
}
void test_customer_details(void){
    strcpy(c.name,"meher");
    strcpy(c.address,"vijayawada");
    strcpy(c.phno,"8367230297");
    strcpy(c.period,"3");

TEST_ASSERT_EQUAL_STRING("meher",c.name);
TEST_ASSERT_EQUAL_STRING("vijayawada",c.address);
TEST_ASSERT_EQUAL_STRING("8367230297",c.phno);
TEST_ASSERT_EQUAL_STRING("3",c.period);
}
void test_room_alloc(){
     strcpy(a.name,"meher");
    strcpy(a.roomno,"4");
    strcpy(a.roomtype,"delux");
    strcpy(a.foodtype,"non_veg");

TEST_ASSERT_EQUAL_STRING("meher",name);
TEST_ASSERT_EQUAL_STRING("4",roomno);
TEST_ASSERT_EQUAL_STRING("delux",roomtype);
TEST_ASSERT_EQUAL_STRING("non_veg",a.foodtype);
}
void test_room_dealloc(){
     strcpy(c.name,"meher");
    strcpy(c.roomno,"4");
    
 

TEST_ASSERT_EQUAL_STRING("meher",c.name);
TEST_ASSERT_EQUAL_STRING("4",c.roomno);

}
void test_billing(){
     strcpy(b.name,"meher");
    strcpy(b.roomno,"4");
int bill=7200;
TEST_ASSERT_EQUAL_STRING("meher",b.name);
TEST_ASSERT(bill==7200);

}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */

    RUN_TEST(avail);
    RUN_TEST(customer_details);
    RUN_TEST(room_alloc);
    RUN_TEST(room_dealloc);
    RUN_TEST(billing);


    /* Close the Unity Test Framework */
    return UNITY_END();
}
