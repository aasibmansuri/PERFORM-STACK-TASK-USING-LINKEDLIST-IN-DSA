#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};


int isempty(struct node* top){
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull(){
	 
	 struct node* p=(struct node*)malloc(sizeof(struct node));
	 if(p==NULL)
	 {
	 	return 1;
 	
	 }
	 else
     {
     	return 0;
	 }
}
void traversel(struct node * ptr)
{
	printf("\t\t\t**you list's element\n");
    printf("\t\t\t*$$$$$$$$$*$\n");
  	while (ptr!=NULL)
	{

		printf("\t\t\t\tElement:%d\n",ptr->data);
	
		ptr=ptr->next;
	
	}
	printf("\t\t\t*$$$$$$$$$*$\n");
}
struct node* push(struct node* top,int data)
{
	 if(isfull())
	 {
	 	printf("stack overflow!!!");
	 	return top;
	 }
	 else
	 {
	 	struct node* n=(struct node*)malloc(sizeof(struct node));
	 	n->data=data;
	 	n->next=top;
	 	top=n;
	 	return top;
	 }
}

struct node* pop(struct node* top)
{
	if(isempty(top))
	{
		printf("stack is empty\n");
	}
	else
	{
        struct node* temp = top;
        top = top->next;
        free(temp);
        return top;

	}
}


int main() {
	
	int choice,n;
	   struct node* top = NULL;
	while(1)
	{
	
	printf("press 1 :to push element.\n");
	printf("press 2 :to pop element.\n");
	printf("press 3 :show stack element.\n");
	printf("press 4 :Exit\n");
	printf("enter your choice:-");
	scanf("%d",&choice);
	
 
    
    switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &n);
                top = push(top, n);
                break;
            case 2:
                top = pop(top);
                break;
            case 3:
                traversel(top);
                break;
            case 4:
                printf("Thank you... goodbye\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }	
}

    return 0;
}