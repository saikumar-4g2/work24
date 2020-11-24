#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <stdarg.h>
#include <cafeteria.h>
#define PROJECT_NAME    "CafeteriaRating"

/* Prototypes for all the test functions */
void test_mylib(void)
//void test_mylib1(void)

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "mylib", test_mylib);
 // CU_add_test(suite, "mylib1", test_mylib1);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}



/* Write all the test functions */



float overall_rating(int count,...)    //helps to take variable number of arguments
{
    int i=0;
    //int frequency_array[10]={};   //To know the no of students given a particular scale
    int rating_array[40]={};     //To store individual ratings given by the 40 students
    int total_rating=0;          // A variable to store the total rating given 40 students
    //float average_rating=0;     //Variable to store average overall rating of cafeteria
    va_list lst;                //variable of va_list defined in stdarg.h header file
    va_start(lst,count);        // va_start is a macro to intialize va_list
    for(i=0;i<count;i++)
    {
         rating_array[i]=va_arg(lst,int);   //va_arg
         while(rating_array[i]<1||rating_array[i]>max_rating)
         {
             printf("Please enter the cafeteria rating in between 1 and 10: ");
             scanf("%d",&rating_array[i]);
         }
         total_rating+=rating_array[i];

    }
    avg_rating(int total_rating);
  }

void test_mylib(void) {
 CU_ASSERT(4.5==overall_rating(40,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6));

}

