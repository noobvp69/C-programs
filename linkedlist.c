#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};





void printlinkedlist(struct node *p){
	while(p != NULL){
		printf("%d",p->data);
		p = p->next;
		if( p!= NULL){
			printf("->");
		}
	}
}



int main(){
	struct node * head;
struct node * one = NULL;
struct node * two = NULL;
struct node * three = NULL;

one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

one->data = 1;
two->data = 2;
three->data = 3;

one->next=two;
two->next=three;
three->next=NULL;

head = one;
printlinkedlist(head);
// insert at the beginning
struct node *newnode;
struct node *newnode1;
newnode = malloc(sizeof(struct node));
newnode1 = malloc(sizeof(struct node));
newnode->data = 0;
newnode->next = head;
head = newnode;
printf("\n inserting a node at the beginning\n");

printlinkedlist(head);

//insert at the end
printf("\n inserting a node at the end\n");
newnode1->data=4;
three->next=newnode1;
newnode1->next=NULL;
head = newnode ;
printlinkedlist(head);

}
