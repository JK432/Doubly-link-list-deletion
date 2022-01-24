#include <stdio.h>
#include <stdlib.h>

  struct node{
    int data;
    struct node *next;
    struct node *prev;
  };
  struct node * head,*tail,*temp;
  int ls=0;




void begin()
{
  struct node * temp1;
  if(head==0)
  {
    printf("List is empty");

  }
  else{
    temp1=head;
    head=head->next;
    head->prev=NULL;
    free(temp1);
  }
temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  temp=temp->next;
}
}
void end(){
  struct node * temp1;
  if(tail==0){
    printf("empty");

  }
  else{
    temp1=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(temp1);
      }

temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  temp=temp->next;
}


}
void defpos(){
  struct node * temp;
   int pos,i=1;
  scanf("%d",&pos);
 
  if(pos==1){
    begin();
  }
  if(pos==ls-1){
    end();
  }
  else{

    while(i<pos+1){
      temp=head;
      temp=temp->next;
      i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
  }

temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  temp=temp->next;
}

}


int main(){


head=0;
int choice=1,pos;
while(choice==1){
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));

scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0){
  head=tail=newnode;
}
else{
  tail->next=newnode;
  newnode->prev=tail;
  tail=newnode;
}

scanf("%d",&choice);
}



temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  ls++;
  temp=temp->next;
}

printf("\nfrom begining ");
begin();
printf("\nfrom end ");
end();
printf("\nfrom a pos ");
defpos();



}

// from begining
