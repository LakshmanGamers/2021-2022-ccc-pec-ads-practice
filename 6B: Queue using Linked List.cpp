    #include<stdio.h>   
    #include<stdlib.h>  
    struct node   
    {  
        int data;   
        struct node *next;  
    };  
    struct node *front;  
    struct node *rear;   
    void insert(int b);  
    void delete();  
    void disf();
void disr();
    int main ()  
    {  
        int n,a,b;  
        scanf("%d",&n);
        while(n--)   
        {     
            scanf("%d",&a);
            
            
            switch(a)  
            {  
                case 1: 
                    scanf("%d",&b);
                insert(b);  
                break;  
                case 2:  
                delete();  
                break;  
                case 3:  
                disf();
                break;  
                case 4:  
               disr(); 
                break;  
                case 5:
                    if(front==NULL){
                        printf("1\n");
                    }
                    else{
                        printf("0\n");
                    }
                    break;
            }  
        }  
        return 0;
    }  
    void insert(int b)  
    {  
        struct node *ptr;  
        
          
        ptr = (struct node *) malloc (sizeof(struct node));  
        if(ptr == NULL)  
        {  
            printf("invalid\n");  
            return;  
        }  
        else  
        {   
           
           
            ptr -> data = b;  
            if(front == NULL)  
            {  
                front = ptr;  
                rear = ptr;   
                front -> next = NULL;  
                rear -> next = NULL;  
            }  
            else   
            {  
                rear -> next = ptr;  
                rear = ptr;  
                rear->next = NULL;  
            }  
        }  
    }     
    void delete ()  
    {  
        struct node *ptr;  
        if(front == NULL)  
        {  
            printf("invalid\n");  
            return;  
        }  
        else   
        {  
            ptr = front;  
            front = front -> next;  
            free(ptr);  
        }  
    }  
void disf(){
    if(front==NULL)
        printf("invalid\n");
    else
        printf("%d\n",front->data);
}
void disr(){
    if(rear==NULL){
        printf("invalid\n");
    }
    else{
        printf("%d\n",rear->data);
    }
}
 
