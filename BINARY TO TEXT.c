#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int converter();
char text[1000];
struct node{


    char data[7];
    struct node* next;

};
struct node* head=NULL;
int top;
int insert(char arr[])
{
    if(top==-1){
        return 0;
    }

    struct node* newnode;

   if(head==NULL) {
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    head=newnode;
    for(int i=6;i>=0;i--)
    {
        newnode->data[i]=arr[top];
        top--;
    }

if(top!=-1){

  return insert(text);

   }else if(top==-1)
   {
       return 0;
   }


}

if(head!=NULL){

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=head;
    head=newnode;
    for(int i=6;i>=0;i--)
    {
        newnode->data[i]=arr[top];
        top--;
    }
    if(top!=-1){
  return insert(text);

   }else if(top==-1){
   return 0;
   }

}
}
int converter(){
if(head==NULL){
    return 0;
}
int sum=0;
int i=1,j,p;
for(int k=6;k>=0;k--){

    p=(int)head->data[k];
    if(p==49){
        p=1;
    }else if(p==48){
    p=0;}
    j=p*i;
    i=i*2;
    sum=sum+j;

}
printf("%c",sum);

head=head->next;
if(head!=NULL){
    return converter();
}
}
int main()
{
    printf("Enter the 7 bits binary");
    gets(text);
    while(1)
    {
        if(text[top]==NULL){

            top--;
            break;}
            top++;

    }
    insert(text);

converter();
}





