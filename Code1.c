#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[])
{
    char flname[40],ch; 
    
    printf("enter the source file name:"); 

    scanf("%s",flname); 

    FILE *flptr1,*flptr2; 
    flptr1=fopen(flname,"r"); 

    if(flptr1==NULL) 
      { 
        printf("There was an error opening File named %s \n",flname); 
        exit(0); 
      } 
  
    printf("enter the destination file name:"); 
    
    scanf("%s",flname); 
    
    flptr2=fopen(flname,"w"); 
    
    if(flptr2==NULL) 
      { 
        printf("There was an error opening File named %s\n",flname); 
        exit(0); 
      } 
    
    ch=fgetc(flptr1);
 
    while(ch!=EOF) 
    { 
        fputc(ch,flptr2); 
        ch=fgetc(flptr1); 
    } 
    printf("Successfully copied from source to destination \n"); 

    fclose(flptr2); 

    fclose(flptr1); 

    return EXIT_SUCCESS; 

}



/* How the program works?

First, we provide program with the input file (also known as source file in this assignment).
Then we will provide program with Output file (also known as destination file in this assignment).
The program will look for the source or the input file, if it finds one it will start coping the text from the file with the while loop, we implemented in the code. If the program cannot find the file the user typed, it will return a message “There was an error opening the file” and will exit the code.
Let us say the program was able to locate the source file and it copied the text content from it, then it will look for the destination file or the output file. If the file name user entered does not exist, the program will simply create one for the user. 
After the destination file is located the program will paste the text content (copied from source) in it and will give the user message that the procedure has been completed successfully.   
*/

