#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char text[1000];
int text_value;
int top=0;
int temparr[7];
int temp;
struct node {

int data[7];
struct node* next;


};
struct node* head=NULL;
int insert(char arr[])
{
  struct node* newnode;



text_value=(int)arr[top];
top--;
temp=text_value;
for(int m=6;m>=0;m--){
  temp=text_value%2;
  text_value=text_value/2;

    temparr[m]=temp;



}

if(head==NULL){

        newnode=(struct node*)malloc(sizeof(struct node));
  newnode->next=NULL;

  head=newnode;





}
if(head!=NULL){
 newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=head;
    head=newnode;
    for(int m=6;m>=0;m--){

        newnode->data[m]=temparr[m];
    }

}

if(top!=-1){
    return insert(text);
}
else{
    return 0;
}

}
int converter(){

    for(int i=0;i<7;i++){

        printf("%d",head->data[i]);
}
head=head->next;
 if(head==NULL) {
    return 0;
   }
   else{
    return converter();
   }


}

int main(){


printf("enter your text");
gets(text);
while(1){


    if(text[top]==NULL){

        top--;
        break;
    }
    top++;
}
insert(text);
converter();



}



