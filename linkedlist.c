#include<stdio.h>
#include<stdlib.h>
 

 struct node
 {
      int data;
      struct node *next; 
 };

 struct node *head=NULL,*tail=NULL; 

 void insertnodeE(){            // insert in singly linkedlist at the end 
        struct node *ptr;
        ptr=(struct node *)malloc(sizeof(struct node));

        int num;
        printf("enter element to insert in linked list:\n");
        scanf("%d",&num);
        ptr->data=num;
        ptr->next=NULL;

        if(head==NULL && tail==NULL){
            head=ptr;
            tail=ptr;
        }else{
            tail->next=ptr;
            tail=tail->next;
        }

 }

   void insertnodeB(){              // insert in singly linkedlist at the beginning 
       struct node *ptr,*temp;
       ptr=(struct node *)malloc(sizeof(struct node));

       int num;
        printf("enter element to insert in linked list:\n");
        scanf("%d",&num);
        ptr->data=num;
        ptr->next=NULL;

        if(head==NULL && tail==NULL){
            head=ptr;
            tail=ptr;
        }else{
            ptr->next=head;
            head=ptr;

        }

   }

   void insertnodeA(struct node *head){     // insert in singly linkedlist at the position starting index is 0 
       int loc;
       printf("enter loc where to insert");
       scanf("%d",&loc);

       if(loc>0){

       struct node *ptr;
       ptr=(struct node *)malloc(sizeof(struct node));

       int num ,i;
       printf("enter element to insert in linked list" );
       scanf("%d",&num);
     
       ptr->data=num;
       ptr->next=NULL;
        

        if(head==NULL){
            head=ptr;
            
        }else{
            struct node *temp;
            temp=head;
            for(i=0;i<loc-1;i++){
                temp=temp->next;
            }
            ptr->next=temp->next;
            temp->next=ptr;

           }
       } else if(loc==0) {
           insertnodeB();
       }

   }


   void deletenodeB(){


       if(head==NULL && tail==NULL){
           printf("there is no element in singly linkedlist\n");
       }else{
           struct node *temp;
           temp=head;
           head=head->next;
           printf("deleted element is %d",temp->data);
           free(temp);
       }


   }

   void deletenodeE(){

        if(head==NULL && tail==NULL){
           printf("there is no element in singly linkedlist\n");
       }else{
           struct node *temp,*ptr;
           temp=head;
           
           while(temp->next!=NULL){
               
                ptr=temp;
               temp=temp->next;
           }
           ptr->next=NULL;
           tail=ptr; 
           printf("deleted element is %d",temp->data);
           free(temp);
       }

   }

   void deletenodeA(){
               
              if(head==NULL && tail==NULL){
                    printf("there is no element in singly linkedlist\n");
                 }else{
                      struct node *temp,*ptr;
                      temp=head;

                      int loc,i;
                      printf("enter location of element deleted");
                      scanf("%d",&loc);
                 

                  for(i=0;i<loc;i++){
                      ptr=temp;
                      temp=temp->next;
                     } 


                     if(temp==tail){

                         tail=ptr;
                         tail->next=NULL;
                         printf("deleted element is %d",temp->data);
                         free(temp);

                     }else if(temp==head){

                         head=temp->next;
                         printf("deleted element is %d",temp->data);
                         free(temp);

                     }else{

                         ptr->next=temp->next;
                         printf("deleted element is %d",temp->data);
                         free(temp);

                     }
                }

   }

   void reverselinkedlist(struct node *head){




       

   }



 void display(struct node *head){

     if(head==NULL ){
         printf("No element in linked list");

     }else{
           struct node *ptr;
           ptr=head;
                while(ptr!=NULL){
                    printf("%d\n",ptr->data);
                    ptr=ptr->next;
                }
         }
 
 }

int menu(){
    int choice;
    printf("\n1.insert element in singly linked list at begnning\n");
    printf("2.insert element in  singly linkedlist at end\n");
    printf("3.insert element in singly linkedlist at any position\n");
    printf("4.delete element in a singly linked list at begnning\n");
    printf("5.delete element in a singly linked list at end\n");
    printf("6.delete  element in a singly linked list at any position\n");
    printf("7.display reverseorder to  a singly linked list\n");
    printf("8.display linked list\n");
    printf("9.exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    return(choice);
}



  int main(){

      
      while(1){
          switch(menu()){
                case 1:insertnodeB();
                 break;
                 case 2: insertnodeE();
                  break;  
                 case 3:insertnodeA(head);
                   break; 
                  case 4:deletenodeB();
                  break;
                  case 5:deletenodeE();
                    break;
                  case 6:deletenodeA();
                    break; 
                   case 7:reverselinkedlist(head);
                    break;  
                  case 8:display(head);
                    break;
                 case 9:exit(0);

                  default:
                    printf("Enter wrong choice\n");       

             }
             
        
         }
            return 0;
 
  }
 
