#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Declare a global structure since we need to pass 
// it to a function 
struct exam
{
    int roll;
    int marks;
    char name[20];
};
// array of structure object


 // declaration of the function
//void structfun(struct exam *obj);

// function to print structure elements switch
// two different objects
void structfun(struct exam obj)
{
    //Values using the object 1
    printf("Name is : %s\n",obj.name);
    printf("Roll No. is : %d\n",obj.roll);
    printf("Marks are : %d\n",obj.marks);
    
    printf("\n");
    
    // Values using the object 2
    //printf("\nName is : %s",obj2.name);
    //printf("\nRoll No. is : %d",obj2.roll);
    //printf("\nMarks are : %d",obj2.marks);
}

// main function
int main()
{
    // assign values using the object 1
   // obj.obj;
   int i;
    struct exam obj;
//	struct exam obj2;
    for(i=1;i<=2;i++){
	
    scanf("%d",&obj.marks);
    scanf("%d",&obj.roll);
    scanf("%[^\n]%*c",obj.name);
    structfun(obj);
     
 }
	//scanf("%d",&obj2.marks);
    //scanf("%d",&obj2.roll);
    //scanf("%s",obj2.name); 
	
    // assign values using the object 1
   
   
   // structfun(obj2);
    
    // Passing structure to Function
   
	
    return 0;
}
