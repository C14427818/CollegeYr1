/*Assignment 2 authorisation code program to encrypt
and also decrypt a users code
Author:C14427818
Date:25/2/15
*/

#include <stdio.h>
#define AUTHCODE 4
#define CODE 4


//prototypes
void opt1(int*, int*);
void opt2(int*, int*, int*, int*, int*);
void opt3(int*, int*);
void opt4(int*, int*);
void opt5(int*);

main()
{
    int loop=1;
    int code[CODE]={0};
    int access_code[AUTHCODE]={4,5,2,3};
    int choice=0;
    int counter_good=0;
    int counter_bad=0;
    int error_check=0;

//keeping menu looping around
while(loop!=0)
{
	
    printf("\n\n1. Enter Code\n"
    "2. Encrypt code and verify if correct\n"
    "3. Decrypt code\n"
    "4. Display the number of times the code was entered\n (i)Successfully\n (ii)Incorrectly\n"
    "5. Exit\n\n");
    
    printf("Please enter your choice : ");
    flushall();//so extra digits or letters entered in a case aren't carried through the loop
    
    scanf("%d",&choice);
        
   if(getchar()!= '\n')//preventing characters from being entered
   {
       printf("\n\nNICE TRY BUT NO CHARACTERS!!\n\n");
   }
   else
   {
        switch(choice)
        {
            case 1 : 
            {
                //call opt1
                opt1(code, &error_check);
            break;
            }
        
            case 2 : 
            {   
                //call opt2
                opt2(code, &counter_good, &counter_bad, access_code, &error_check);
           
            break;
            }
            case 3 :
            {
                //call opt3
                opt3(code, &error_check);
            
            break;
            }
            case 4 :
            {
                //call opt4
                opt4(&counter_good, &counter_bad);
            
            break;
            }
            case 5 :
            {   
                //call opt5
                opt5(&loop);
            
            break;
            }
        }//end switch
        
    }//end else making sure option was entered
    
}//end while loop    
    return 0;
}//end main

    //implement opt1 entering code
    void opt1(int *code, int *error)
    {
        int i;
        
        printf("\n\nPlease enter your code ONE digit at a time between 0-9\n\n");
        
    
            //storing code entered into an array
            for( i=0; i<CODE; i++ )
            {
                scanf( "%d", & *(code + i) );
                if( *(code + i)<0 || *(code + i)>9 || getchar() != '\n')
                {
                    printf("\n\nONLY ONE DIGIT AT A TIME AND NO CHARACTERS! TRY AGAIN!!\n\n");
                    
                    i=4;//sending user back to the menu
                   
                }//error checking to make sure user enters digits between 0-9
                else
                {
                    *(error)=1;//letting user encrypt code after entering
                    
                }//end else
                
            }//end for loop
        
    }//end fxn opt1
    
    //implement opt2 encrypting code
    void opt2( int *org_code, int *counter1, int *counter2, int *acode, int *error )
    {
        if( *(error)==1 )//making sure code is entered first
        {
                *(error)=2;//giving user access to decrypt option
                int i,j;
                int temp;
                int temp1=0;
        
                //encrypting the code using the algorithm
                temp = *(org_code + 0) +1;
        
                *(org_code + 0) =  *(org_code + 2) + 1;
                *(org_code + 2) = temp;
            
                temp = *(org_code + 1) + 1;
            
                *(org_code + 1) = *(org_code + 3) +1;
                *(org_code + 3) = temp;
       
                for( j=0; j<AUTHCODE; j++ );        
                {
                    if( *(org_code + j) == 10 )
                    {
                            *(org_code + j)=0;
                    }
                }            
                //end of encryption algorithm
        
        
            //checking each number to see if code encrypted correctly
            for( i=0; i<AUTHCODE; i++ )
            {
                if(*(org_code + i)  ==  *(acode + i))
                {
                    
                    temp1++;//counter to make sure all four digits are correct
                    
                }//end if checking if all four numbers are equal to authorisation code
            
            }//end for looping the four numbers to check if they are correct
            
        
            //printing out if code was encrypted correctly/incorrectly and counting it
            if( temp1==4 )
            {
                printf("\n\nCORRECT CODE\n\n");
                
                
                    *(counter1)= *(counter1) + 1;//counting times code was entered right
                
            }//end if checking if code was right
            else
            {
                printf("\n\nERROR CODE\n\n");
                
        
                    *(counter2)= *(counter2) + 1;//counting times code was entered wrong
                
            }//end else checking if code was wrong
            
        }
        else
        {
            printf("\n\nMUST ENTER CODE FIRST OR YOU HAVE ALREADY ENCRYPTED YOUR CODE!\n\n");
        }//end else that checks if user has not entered code
        
    }//end encryption opt2
    
    
    //implement opt3 decrypting code
    void opt3( int* org_code, int *error )
    {
        if( *(error)==2 )//making sure code is encrypted
        {
            *(error)=1;//letting user encrypt code again after decrypting but stopping them decrypting twice
            int i;
            int temp;
        
                //decrypting the code using the algorithm
                temp = *(org_code + 0) - 1;
        
                *(org_code + 0) =  *(org_code + 2) - 1;
                *(org_code + 2) = temp;
            
                temp = *(org_code + 1) - 1;
            
                *(org_code + 1) = *(org_code + 3) - 1;
                *(org_code + 3) = temp;
       
                for( i=0; i<AUTHCODE; i++ );        
                {
                    if( *(org_code + i) == -1 )
                    {
                            *(org_code + i)= 9;
                    }
                }            
                //end of decryption algorithm
        
            printf("\n\nCODE DECRYPTED\n\n");
        }//end if checking that checks if code was entered and encrypted
        else
        {
            printf("\n\nMUST ENTER CODE AND ENCRYPT CODE BEFORE YOU CAN DECRYPT CODE!\n\n");
        }//end else printing error message
      
    }//end decryption opt3
    
    
    //implement opt4 counting times code entered right or wrong
    void opt4( int *counter, int *counter1 )
    {
        
        printf("\n\n(i)Successfully: %d times\n", *(counter));
      
        printf("(ii)Incorrectly: %d times\n\n", *(counter1));
        
    }//end opt4 showing user times code entered correctly/incorrectly
    
    
    //implement opt5 giving user option to exit program
    void opt5( int *exit )
    {
        
        printf("\n\nAre you sure you want to exit?\n");
        printf("\n\nPress 0 to exit or any other key and enter to go back to the menu: ");
        
        flushall();//making sure characters don't affect program 
        scanf( "%d",& *(exit) );
        
    }//end exit opt 5
            
            


    
    
