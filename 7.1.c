/*##Lab Report-07##
1.Define a "Create" function to declear a linked list with for node using dynamic memory a locaton. Print the complete linked list after calling function.
1915002508,Md Sazzad Hossen*/


#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int data ;
node* next;
};
node* create_list();
void print_list(node* head);

int main()
{
    node* head;
    head = NULL;
    head = create_list();
    print_list(head);



        return 0;
}

node* create_list()
{
node *a,*b,*c,*d;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));
    d=(node*) malloc(sizeof(node));

    a->data=12;
    a->next=b;

    b->data=14;
    b->next=c;

    c->data=15;
    c->next=d;

    d->data=18;
    d->next=NULL;

    return a;
}

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->data);
    temp = temp->next;
 }

}
