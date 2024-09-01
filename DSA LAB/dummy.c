// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node
// {
//     int data;
//     struct node* prev;
//     struct node* next;
// }Node;
// // Node* head = NULL;
// Node* createnode(int data);
// Node* Insertatbeg(Node** head,int data);
// Node* Insertatend(Node** head,int data);
// Node* Deletefrombeg(Node** head);
// Node* Deletefromend(Node** head);
// // Node* Insertatpos(Node* head,int data,int pos);
// // int countNodes(Node* head);
// void display(Node* head);



// // Node *Insertatpos(Node *head, int data, int pos)
// // {
// //     Node *newnode = createnode(data);
// //     if (pos == 1)
// //     {
// //         newnode->next = head;
// //         head = newnode;
// //         head->prev = NULL;
// //         return head;
// //     }
// //     Node *temp = head;
// //     for (int i = 1; i < pos - 1 && temp != NULL; i++)
// //     {
// //         temp = temp->next;
// //     }
// //     if (temp == NULL)
// //     {
// //         printf("Position exceeds the list length. Inserting at the end.\n");
// //         return Insertatend(head, data);
// //     }
// //     newnode->next = temp->next;
// //     temp->next = newnode;
// //     newnode->prev = temp;
// //     return head;

// // }


// // int countNodes(Node *head)
// // {
// //     int count = 0;
// //     Node *temp = head;
// //     while (temp != NULL)
// //     {
// //         count++;
// //         temp = temp->next;
// //     }
// //     return count;
// // }


// Node *Deletefrombeg(Node **head)
// {
//     if (*head == NULL)
//     {
//         printf("List is empty\n");
//     }
//     else
//     {
//         Node *temp = *head;
//         *head = (*head)->next;
//         (*head)->prev=NULL;
//         free(temp);
//     }
//     return *head;
// }

// // The code is same for the Singly as well as Doubly Linked list!!!!
// Node *Deletefromend(Node **head)
// {
//     if (*head == NULL)
//     {
//         printf("List is empty\n");
//         return *head;
//     }
//     else if ((*head)->next == NULL)
//     {
//         free(*head);
//         *head = NULL;
//     }
//     else
//     {
//         Node *t1 = *head;
//         while (t1->next->next != NULL)
//         {
//             t1 = t1->next;
//         }
//         Node *temp = t1->next;
//         t1->next = NULL;
//         free(temp);
//     }
//     return *head;
// }



// // Node *Deleteatpos(Node *head, int pos)
// // {
// //     Node *nextnode;
// //     Node *temp;
// //     int i = 1;
// //     temp = head;
// //     while (i < pos - 1)
// //     {
// //         temp = temp->next;
// //         i++;
// //     }
// //     nextnode = temp->next;
// //     temp->next = nextnode->next;
// //     nextnode->next->prev = temp;
// //     free(nextnode);
// //     nextnode = NULL;
// //     return head;
// // }



// Node* Insertatbeg(Node **head, int data)
// {
//     if (*head==NULL)
//     {
//         Node* newnode = createnode(data);
//         *head = newnode;
//     }
    
//     else{
//     Node *newnode = createnode(data);
//     newnode->next = *head;
//     newnode->prev=NULL;
//     *head = newnode;
// }
//     return *head;
// }

// Node *Insertatend(Node **head, int data)
// {
//     if (*head == NULL)
//     {
//         *head = createnode(data);
//     }
//     else
//     {
//         Node *newnode = createnode(data);
//         Node *temp = *head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//         newnode->prev = temp;

//     }
//     return *head;
// }




// void display(Node* head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// Node *createnode(int data)
// {
//     Node *newnode = (Node *)malloc(sizeof(Node));
//     newnode->data = data;
//     newnode->next = NULL;
//     newnode->prev = NULL;
//     return newnode;
// }

// int main()
// {
//     Node *head = NULL;
//     int ch, data, pos;
//     while (1)
//     {
//         display(head);
//         printf("\n1. Insert at the Beginning\n");
//         printf("2. Insert at the End\n");
//         printf("3. Delete from the Beginning\n");
//         printf("4. Delete at the End\n");
//         printf("5. Insert at a Particular Position\n");
//         printf("6. Count the Number of Nodes\n");
//         printf("7. Delete at the given position\n");
//         printf("Enter your choice: ");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             head = Insertatbeg(&head, data);
//             break;
//         case 2:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             head = Insertatend(&head, data);
//             break;
//         case 3:
//             head = Deletefrombeg(&head);
//             break;
//         case 4:
//             head = Deletefromend(&head);
//             break;
//         // case 5:
//         //     printf("Enter the data to be inserted: ");
//         //     scanf("%d", &data);
//         //     printf("Enter the position: ");
//         //     scanf("%d", &pos);
//         //     head = Insertatpos(head, data, pos);
//         //     break;
//         // case 6:
//         //     printf("The number of nodes is: %d\n", countNodes(head));
//         //     break;
//         // case 7:
//         //     printf("Enter the position");
//         //     scanf("%d", &pos);
//         //     head = Deleteatpos(head, pos);
//         default:
//             printf("Invalid choice! Please try again.\n");
//             break;
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>

// // Node structure for polynomial terms
// typedef struct node {
//     int coeff;
//     int pow;
//     struct node* next;
// } node;

// void input(node** head, node** tail, int n);
// node* sum(node* head1, node* head2);
// int eval(node* head, int x);
// void destroy(node **head);

// // Main function
// int main() {
//     int m = 0, n = 0;
//     node* head1 = NULL;
//     node* head2 = NULL;
//     node* tail1 = NULL;
//     node* tail2 = NULL;
//     int x = 0; // value of the variable for evaluation

//     // Input number of terms in the two polynomials and the value of x
//     scanf("%d %d", &m, &n);
//     scanf("%d", &x);

//     // Input terms for the two polynomials
//     input(&head1, &tail1, m);
//     input(&head2, &tail2, n);

//     // Compute the sum of the two polynomials
//     node *headres = sum(head1, head2);

//     // Evaluate the resulting polynomial at x
//     int res = eval(headres, x);

//     // Print the result or -1 if the polynomial is empty
//     printf("%d\n", res);

//     // Free the allocated memory for the resulting polynomial
//     destroy(&headres);

//     return 0;
// }

// // Function to input the polynomial terms
// void input(node** head, node** tail, int n) {
//     for (int i = 0; i < n; i++) {
//         int coeff, pow;
//         scanf("%d %d", &coeff, &pow);

//         node* new_node = (node*)malloc(sizeof(node));
//         new_node->coeff = coeff;
//         new_node->pow = pow;
//         new_node->next = NULL;

//         if (*head == NULL) {
//             *head = *tail = new_node;
//         } else {
//             (*tail)->next = new_node;
//             *tail = new_node;   
//         }
//     }
// }

// // Function to sum two polynomials
// node* sum(node* head1, node* head2) {
//     node* headres = NULL;
//     node* tailres = NULL;

//     while (head1 != NULL || head2 != NULL) {
//         int coeff, pow;

//         if (head1 != NULL && (head2 == NULL || head1->pow > head2->pow)) {
//             coeff = head1->coeff;
//             pow = head1->pow;
//             head1 = head1->next;
//         } else if (head2 != NULL && (head1 == NULL || head2->pow > head1->pow)) {
//             coeff = head2->coeff;
//             pow = head2->pow;
//             head2 = head2->next;
//         } else {
//             coeff = head1->coeff + head2->coeff;
//             pow = head1->pow;
//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         if (coeff != 0) {
//             node* new_node = (node*)malloc(sizeof(node));
//             new_node->coeff = coeff;
//             new_node->pow = pow;
//             new_node->next = NULL;

//             if (headres == NULL) {
//                 headres = tailres = new_node;
//             } else {
//                 tailres->next = new_node;
//                 tailres = new_node;
//             }
//         }
//     }

//     return headres;
// }

// Function to evaluate the polynomial at a given value of x
// int eval(node* head, int x) {
//     int result = 0;
//     while (head != NULL) {
//         result += head->coeff * pow(x, head->pow);
//         head = head->next;
//     }
//     return (result == 0) ? -1 : result;
// }

// // Function to free the allocated memory of a linked list
// void destroy(node **head) {
//     node *temp;
//     while (*head != NULL) {
//         temp = *head;
//         *head = (*head)->next;
//         free(temp);
// }
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// /* Link list Node */
// struct Node {
//     int data;
//     struct Node* next;
// };

// /* Function to append a node at the end */
// void append(struct Node** head_ref, int new_data) {
//     struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
//     if (new_node == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }

//     struct Node* last = head_ref;  
    
//     new_node->data = new_data;  // assign data to the new node
//     new_node->next = NULL;  // since this will be the last node, make next of it as NULL

//     // If the Linked List is empty, then make the new node as head
//     if (*head_ref == NULL) {
//         *head_ref = new_node;
//         return;
//     }

//     // Else traverse till the last node
//     while (last->next != NULL) {
//         last = last->next;
//     }

//     // Change the next of the last node
//     last->next = new_node;
// }

// /* Function to print linked list */
// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d", node->data);
//         if (node->next != NULL) {
//             printf("->");
//         }
//         node = node->next;
//     }
//     printf("->NULL\n");
// }

// /* This function distributes the nodes in zigzag fashion */
// void zigZagList(struct Node* head) {
//     if (!head) return;

//     struct Node* current = head;
//     int flag = 1;  // start with '<' relation

//     while (current->next != NULL) {
//         if (flag) {  // '<' relation expected
//             if (current->data > current->next->data) {
//                 // Swap data
//                 int temp = current->data;
//                 current->data = current->next->data;
//                 current->next->data = temp;
//             }
//         } else {  // '>' relation expected
//             if (current->data < current->next->data) {
//                 // Swap data
//                 int temp = current->data;
//                 current->data = current->next->data;
//                 current->next->data = temp;
//             }
//         }
//         current = current->next;
//         flag = !flag;  // flip the flag
//     }
// }

// /* Driver program to test above functions */
// int main() {
//     struct Node* head = NULL;
//     int data;
//     char buffer[1024];

//     // Read a line of input
//     fgets(buffer, sizeof(buffer), stdin);

//     // Use strtok to split the input into tokens
//     char* token = strtok(buffer, " ");
//     while (token != NULL) {
//         data = atoi(token);  // Convert token to integer
//         append(&head, data);
//         token = strtok(NULL, " ");
//     }

//     zigZagList(head);

//     printList(head);

//     // Free the allocated memory
//     struct Node* temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//  return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *createnode(int val)
// {
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=val;
//     newnode->next=NULL;
//     return newnode;
// }

// void display(struct node *head)
// {
//     struct node *temp=head;
//     while(temp!=NULL)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }

// struct node *valdel(struct node *head,int nodval)
// {
//     if(head==NULL)
//     {
//         printf("empty linked list");
//         return 0;
//     }
//     else if(head->data==nodval){

//     }
//     else
//     {
//         struct node *temp=head;
//         while(temp->next!=NULL && temp!=NULL)
//         {
//             if(temp->data==nodval)
//             {
//                 struct node *todel=temp;
//                 temp->next=todel->next;
//                 free(todel);
//                 break;
//             }
//             temp=temp->next;
//         }
//         return head;
//     }
// }

// int main()
// {
//     struct node *head=createnode(2);
//     head->next=createnode(3);
//     head->next->next=createnode(4);
//     printf("Linked list : ");
//     display(head);
//     head=valdel(head,3);
//     printf("\nDeleted node value linked list :");
//     display(head);
// return 0;
// }


#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
}Node;
Node* createNode(int data);
Node* mergeSortedLists(Node* head1, Node* head2);
void printList(Node* head);
void freeList(Node* head);
int main() {
    int N1;
    scanf("%d", &N1);
    Node* head1 = NULL;
    Node* tail1 = NULL;
    for (int i = 0; i < N1; i++) {
        int value;
        scanf("%d", &value);
        Node* newNode = createNode(value);
        if (head1 == NULL) {
            head1 = tail1 = newNode;
        } else {
            tail1->next = newNode;
            newNode->prev = tail1;
            tail1 = newNode;
        }
    }
    int N2;
    scanf("%d", &N2);
    Node* head2 = NULL;
    Node* tail2 = NULL;
    for (int i = 0; i < N2; i++) {
        int value;
        scanf("%d", &value);
        Node* newNode = createNode(value);
        if (head2 == NULL) {
            head2 = tail2 = newNode;
        } else {
            tail2->next = newNode;
            newNode->prev = tail2;
            tail2 = newNode;
        }
    }
    Node* mergedHead = mergeSortedLists(head1, head2);

    // Print the merged list
    printList(mergedHead);

    // Free allocated memory
    freeList(mergedHead);

    return 0;
}

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Merge two sorted doubly linked lists
Node* mergeSortedLists(Node* head1, Node* head2) {
     
}

// Print all nodes in the list
void printList(Node* head) {
//Write the code here
   }

// Free all nodes in the list
void freeList(Node* head) {
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
