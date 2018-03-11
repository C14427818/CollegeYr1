//using student record structure

#include <stdio.h>
#include <string.h>

//is global now can be put in main or any function but will only be relevant to function it is in
struct student_rec
{
    int ID;
    char surname[21];
    char firstname[11];
    int results[5];
};//student1,student2; and function name is just struct

main()
{
    //declare structure variables
    struct student_rec student1,student2;
    int i;
    /*struct student_rec student3= {  {2345},
                                                            {"Doyle"},
                                                            {"Paul"},
                                                            {{10,20,30,40,50}}
                                                        };
    */
    //enter data for student
    printf("Enter student ID\n");
    scanf("%d",&student1.ID);
    
    printf("\nEnter student surname\n");
    gets(student1.surname);
    
    printf("\nEnter firstname\n");
    gets(student1.firstname);
    //scanf("%s", student1.firstname);
    printf("\nEnter exam results\n");
    
    for(i=0; i<5; i++)
    {
        scanf("%d",&student1.results[i]);
    }
    
    

    
    