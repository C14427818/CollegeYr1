//lab test 4 *not compiling*

#include <stdio.h>
struct date//for dob
{
    int day;
    int month;
    int year;
};

struct drivers_license
{
    char first_name[11];
    char second_name[21];
    int DOB;
    float height;
    char eye_colour;
    float weight;
};

//prototypes
void enter(struct drivers_license *);

void display(struct drivers_license *);

main()
{
    struct drivers_license driver1, driver2;
    struct drivers_license *ptr1, *ptr2;
    
    ptr1 = &driver1;
    ptr2 = &driver2;
    
    //call enter()
    enter(ptr1, ptr2);
    
    
    //call display()
    display(ptr1, ptr2);
    
}//end main


//implement enter()
void enter(struct drivers_license *ptr1, *ptr2)//to enter all details of first and second driver
{
    printf("Enter first drivers first name: ");
    scanf("%s", ptr1 -> first_name);
    
    printf("\nEnter first drivers second name: ");
    scanf("%s", ptr1 -> second_name);
    
    printf("\nEnter day first driver was born: ");
    scanf("%2d", (&(*ptr1) -> DOB.day));
    
    printf("Enter month first driver was born in: ");
    scanf("%2d", (&(*ptr1) -> DOB.month));
    
    printf("Enter year first driver was born: ");
    scanf("%2d", (&(*ptr1) -> DOB.month));
    
    printf("\nEnter height of first driver in ft: ");
    scanf("%f", (&(*ptr1) -> height));
    
    printf("\nEnter weight of first driver in kg: ");
    scanf("%f", (&(*ptr1) -> weight));
    
    printf("Enter eye colour of first driver: ");
    scanf("%s", ptr1 -> eye_colour);
    
      printf("Enter second drivers first name: ");
    scanf("%s", ptr1 -> first_name);
    
    printf("\nEnter second drivers second name: ");
    scanf("%s", ptr2 -> second_name);
    
    printf("\nEnter day second driver was born: ");
    scanf("%2d", (&(ptr2 -> DOB.day));
    
    printf("Enter month second driver was born in: ");
    scanf("%2d", (&(ptr2 -> DOB.month));
    
    printf("Enter year second driver was born: ");
    scanf("%2d", (&(ptr2 -> DOB.month));
    
    printf("\nEnter height of second driver in ft: ");
    scanf("%f", (&(ptr2) -> height));
    
    printf("\nEnter weight of second driver in kg: ");
    scanf("%f", (&(ptr2) -> weight));
    
    printf("Enter eye colour of second driver: ");
    scanf("%s", ptr2 -> eye_colour);
    
}//end enterd1  


    

    
    
    