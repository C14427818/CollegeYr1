/*program for drawing a tree  */

 #include <stdio.h>

main()
{
    int treesize=0;
    int i,j;
    
    printf("What size tree do you want?\n");
    scanf("%d",&treesize);
    
    for(i=1;i<treesize+1;i++)
    {
        for(j=0;j<treesize-i;j++)//for spacing in the tree
        {
            printf(" ");
             
        }//end first inner for [i]
        
         for(j=1;j<(i*2);j++)//to show the tree made of *'s
        {
            printf("*");
             
        }//end second inner for [j]
        printf("\n");
    }//end outer for
    
    for(i=1; i<treesize;i++)
    {
        printf(" ");
         
    }//end for
    
      printf("*");//for trunk of tree
     flushall();
     getchar();
     
}//end main()

    
    

    
 

    