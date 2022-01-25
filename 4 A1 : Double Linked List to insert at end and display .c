#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct dll{
    int data;
    struct dll *prev;
    struct dll *next;
};

struct dll * head=NULL;
struct dll * insert(struct dll *head,int val){
    struct dll *temp,*ptr;
    if(head==NULL){
        head =( struct dll * )malloc(sizeof(struct dll));
        head->data = val;
        head->next = NULL;
        head->prev=NULL;
        return head;
    }
    else{
        temp = head;
        ptr= ( struct dll * )malloc(sizeof(struct dll));
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->data=val;
        ptr->next=NULL;
        ptr->prev=temp;
        
        return head;
    }
}
int main() {

int n;
    scanf("%d",&n);
    int i,d;
    for(i=0;i<n;i++){
        scanf("%d",&d);
        head=insert(head,d);
    }
    struct dll * t=head;
    for(i=0;i<n-1;i++){
        printf("%d<==>",t->data);
        t=t->next;
    }
    printf("%d",t->data);
    return 0;
}
