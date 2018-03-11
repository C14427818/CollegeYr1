#include <stdio.h>
#include <stdlib.h>
int main()
{

   //file pointers
   FILE *fp1, *fp2, *fp3, *fp4, *ft;

    //arrays to store file names and character
    char ch, file1[20], file2[20], file3[20], file4[20];

    //asks user to input file names
   printf("Enter name of first file\n");
   gets(file1);

   printf("Enter name of second file\n");
   gets(file2);

   printf("Enter name of third file\n");
   gets(file3);

   printf("Enter name of file which will store contents of the other three files\n");
   gets(file4);

    //opens files
   fp1 = fopen(file1,"r");
   fp2 = fopen(file2,"r");
   fp3 = fopen(file3,"r");


   if( fp1 == NULL || fp2 == NULL ||fp3==NULL )// errors in opening files
   {
      printf("Error ");
      printf("Press any key to exit...\n");
   }
   else
    {
        ft = fopen(file4,"w");
        if( ft == NULL )//if file 4 doesnt open
            {
                printf("Error-A file failed to open ");
                printf("Press any key to exit...\n");
            }
            else
            {
                while( ( ch = fgetc(fp1) ) != EOF )//copies file 1 into new file
                {
                    fputc(ch,ft);
                }

                while( ( ch = fgetc(fp2) ) != EOF )//copies file 2 into new file
                {
                    fputc(ch,ft);
                }

                while( ( ch = fgetc(fp3) ) != EOF )//copies file 3 into new file
                {
                    fputc(ch,ft);
                }
                printf("Three files were merged into %s file successfully.\n",file4);
            }//end inner else
    }//end outer else
    //closes all the files
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fclose(ft);
}