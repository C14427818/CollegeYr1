/*program for drawing a tree  */

 #include <stdio.h>

main()
{
    int treesize=0;
    int i,j;
    
    printf("What size tree do you want?\n");
    scanf("%d",&treesize);
    
    for(i=1;i<treesize;i++)
    {
        for(j=1;j<(treesize-i);j++)//for spacing in the tree
         {
            printf(" ");
             
         }//end first inner for
        
         for(j=1;j<(i*2)-1;j++)//to show the tree made of *'s
         {
            printf("*");
             
         }//end second inner for
        printf("\n");
    }//end outer for
    
    for(i=0; i<(treesize-1);i++)
     {
        printf(" ");
         
     }//end for
    
      printf("*");
     flushall();
     getchar();
     
}//end main()

    
    

    
 

    