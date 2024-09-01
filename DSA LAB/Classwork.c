
// ---------------------------------------------------------------Understanding Pointers-------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int* ptr;
//     int* ptr1;
//     int i,n;
//     printf("Enter the number of Elements: ");
//     scanf("%d",&n);
//     printf("Total number of elements: %d\n",n);
//     ptr = (int*)malloc(n*sizeof(int));
//     ptr1 = (int*)calloc(n,sizeof(int));

//     if (ptr==NULL||ptr1==NULL)
//     {
//         printf("Insufficient space");

//     }
//     else{
//         printf("Memory allocated succesfully\n");
//         for (i = 0; i < n; i++)
//         {
//             ptr[i] = i+10;
//         }
//           for (i = 0; i < n; i++)
//         {
//             printf("%d\n",ptr[i]);
//         }
//         free(ptr);
//         free(ptr1);
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------
// -----------------------------------------------Array Based list----------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 3
// typedef struct arrayList {
//     int last;
//     int a[MAX];
// } ARLST;

// void initList(ARLST *pal) {
//     pal->last = -1;
// }

// int append(ARLST *pal, int ele) {
//     if (pal->last == MAX - 1) {
//         return 0;
//     }
//     pal->a[++(pal->last)] = ele;
//     return 1;
// }

// int deletelast(ARLST *pal, int *pele) {
//     if (pal->last == -1) {
//         return 0;
//     }
//     *pele = pal->a[pal->last--];
//     return 1;
// }
// void display(ARLST *pal) {
//     if (pal->last == -1) {
//         printf("List is Empty\n");
//     } else {
//         for (int i = 0; i <= pal->last; i++) {
//             printf("%d ", pal->a[i]);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     ARLST al;
//     int choice, ele, status;
//     initList(&al);
//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. InsertEnd\n");
//         printf("2. DeleteEnd\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter an Element: ");
//                 scanf("%d", &ele);
//                 status = append(&al, ele);
//                 if (status) {
//                     printf("Inserted successfully\n");
//                 } else {
//                     printf("List is full\n");
//                 }
//                 break;
//             case 2:
//                 status = deletelast(&al, &ele);
//                 if (status) {
//                     printf("Deleted element: %d\n", ele);
//                 } else {
//                     printf("List is empty\n");
//                 }
//                 break;
//             case 3:
//                 display(&al);
//                 break;
//             case 4:
//                 printf("Exiting program. Have a great day!\n");
//                 exit(0);
//             default:
//                 printf("Invalid choice\n");
//                 break;
//         }
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------Single Linked list---------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// // Define the node structure
// typedef struct node {
//     int data;
//     struct node *next;
// }Node;

// // Function prototypes
// Node *createnode(int data);
// Node *insertatbeg(Node *head, int data);
// Node *insertatend(Node *head, int data);
// Node *Deletefrombeg(Node *head);
// Node *Deletefromend(Node *head);
// Node *insertatpos(Node *head, int data, int pos);
// Node *Deleteatpos(Node *head, int pos);
// Node *reverse(Node *head);
// void display(Node *head);
// int countnodes(Node *head);
// int Sumof(Node *head);

// // Function to create a new node
// Node *createnode(int data) {
//     Node *newnode = (Node *)malloc(sizeof(Node));
//     newnode->data = data;
//     newnode->next = NULL;
//     return newnode;
// }

// // Function to insert a node at the beginning
// Node *insertatbeg(Node *head, int data) {
//     Node *newnode = createnode(data);
//     newnode->next = head;
//     head = newnode;
//     return head;
// }

// // Function to display the linked list
// void display(Node *head) {
//     Node *temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Function to reverse the linked list
// Node *reverse(Node *head) {
//     Node *prevnode = NULL, *currentnode = head, *nextnode;
//     while (currentnode != NULL) {
//         nextnode = currentnode->next;
//         currentnode->next = prevnode;
//         prevnode = currentnode;
//         currentnode = nextnode;
//     }
//     head = prevnode;
//     return head;
// }

// // Function to calculate the sum of all nodes
// int Sumof(Node *head) {
//     Node *temp = head;
//     int sum = 0;
//     while (temp != NULL) {
//         sum += temp->data;
//         temp = temp->next;
//     }
//     return sum;
// }

// // Function to delete a node from the beginning
// Node *Deletefrombeg(Node *head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return head;
//     }
//     Node *temp = head;
//     head = head->next;
//     free(temp);
//     return head;
// }

// // Function to delete a node at a specific position
// Node *Deleteatpos(Node *head, int pos) {
//     if (head == NULL || pos <= 0) {
//         printf("Invalid position or empty list.\n");
//         return head;
//     }

//     if (pos == 1) {
//         Node *temp = head;
//         head = head->next;
//         free(temp);
//         return head;
//     }

//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL || temp->next == NULL) {
//         printf("Position exceeds the list length.\n");
//         return head;
//     }

//     Node *nextnode = temp->next;
//     temp->next = nextnode->next;
//     free(nextnode);
//     return head;
// }

// // Function to insert a node at the end
// Node *insertatend(Node *head, int data) {
//     if (head == NULL) {
//         head = createnode(data);
//     } else {
//         Node *newnode = createnode(data);
//         Node *temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//     }
//     return head;
// }

// // Function to count the number of nodes iteratively
// int countNodes(Node *head) {
//     int count = 0;
//     Node *temp = head;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// // Function to count the number of nodes recursively
// int countnodes(Node *head) {
//     if (head == NULL) {
//         return 0;
//     } else {
//         return 1 + countnodes(head->next);
//     }
// }

// // Function to delete a node from the end
// Node *Deletefromend(Node *head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return head;
//     } else if (head->next == NULL) {
//         free(head);
//         return NULL;
//     } else {
//         Node *t1 = head;
//         while (t1->next->next != NULL) {
//             t1 = t1->next;
//         }
//         Node *temp = t1->next;
//         t1->next = NULL;
//         free(temp);
//         return head;
//     }
// }

// // Function to insert a node at a specific position
// Node *insertatpos(Node *head, int data, int pos){
//     if (pos <= 0) {
//         printf("Invalid position.\n");
//         return head;
//     }

//     if (pos == 1) {
//         return insertatbeg(head, data);
//     }

//     Node *newnode = createnode(data);
//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Position exceeds the list length. Inserting at the end.\n");
//         return insertatend(head, data);
//     }
//     newnode->next = temp->next;
//     temp->next = newnode;
//     return head;
// }

// // Main function
// int main() {
//     Node *head = NULL;
//     int ch, data, pos, result;

//     while (1) {
//         display(head);
//         printf("\nMenu:\n");
//         printf("1. Insert at the Beginning\n");
//         printf("2. Insert at the End\n");
//         printf("3. Delete from the Beginning\n");
//         printf("4. Delete at the End\n");
//         printf("5. Insert at a Particular Position\n");
//         printf("6. Count the Number of Nodes (Iterative)\n");
//         printf("7. Count the Number of Nodes (Recursive)\n");
//         printf("8. Delete at a Given Position\n");
//         printf("9. Reverse the Linked List\n");
//         printf("10. Sum of the Nodes\n");
//         printf("11. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &ch);

//         switch (ch) {
//             case 1:
//                 printf("Enter the data to be inserted: ");
//                 scanf("%d", &data);
//                 head = insertatbeg(head, data);
//                 break;
//             case 2:
//                 printf("Enter the data to be inserted: ");
//                 scanf("%d", &data);
//                 head = insertatend(head, data);
//                 break;
//             case 3:
//                 head = Deletefrombeg(head);
//                 break;
//             case 4:
//                 head = Deletefromend(head);
//                 break;
//             case 5:
//                 printf("Enter the data to be inserted: ");
//                 scanf("%d", &data);
//                 printf("Enter the position: ");
//                 scanf("%d", &pos);
//                 head = insertatpos(head, data, pos);
//                 break;
//             case 6:
//                 printf("The number of nodes (Iterative) is: %d\n", countNodes(head));
//                 break;
//             case 7:
//                 printf("The number of nodes (Recursive) is: %d\n", countnodes(head));
//                 break;
//             case 8:
//                 printf("Enter the position: ");
//                 scanf("%d", &pos);
//                 head = Deleteatpos(head, pos);
//                 break;
//             case 9:
//                 printf("Reversed list is as follows:\n");
//                 head = reverse(head);
//                 display(head);
//                 break;
//             case 10:
//                 result = Sumof(head);
//                 printf("The Sum of Nodes is: %d\n", result);
//                 break;
//             case 11:
//                 printf("Exiting program. Have a great day!\n");
//                 exit(0);
//             default:
//                 printf("Invalid choice! Please try again.\n");
//                 break;
//         }
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------Doubly Linked list--------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node {
//     int data;
//     struct node *prev;
//     struct node *next;
// } Node;
// Node *head = NULL;
// Node *createnode(int data);
// Node *Insertatbeg(Node *head, int data);
// Node *Insertatend(Node *head, int data);
// Node *Deletefrombeg(Node *head);
// Node *Deletefromend(Node *head);
// Node *Insertatpos(Node *head, int data, int pos);
// Node *Deleteatpos(Node *head, int pos);
// int countNodes(Node *head);
// void display(Node *head);

// Node *createnode(int data) {
//     Node *newnode = (Node *)malloc(sizeof(Node));
//     newnode->data = data;
//     newnode->next = NULL;
//     newnode->prev = NULL;
//     return newnode;
// }
// Node *Insertatbeg(Node *head, int data) {
//     Node *newnode = createnode(data);
//     if (head != NULL) {
//         head->prev = newnode;
//     }
//     newnode->next = head;
//     head = newnode;
//     return head;
// }

// Node *Insertatend(Node *head, int data) {
//     if (head == NULL) {
//         return createnode(data);
//     }
//     Node *newnode = createnode(data);
//     Node *temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     newnode->prev = temp;
//     return head;
// }

// Node *Insertatpos(Node *head, int data, int pos) {
//     if (pos == 1) {
//         return Insertatbeg(head, data);
//     }
//     Node *newnode = createnode(data);
//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Position exceeds the list length. Inserting at the end.\n");
//         free(newnode);
//         return Insertatend(head, data);
//     }
//     newnode->next = temp->next;
//     newnode->prev = temp;
//     if (temp->next != NULL) {
//         temp->next->prev = newnode;
//     }
//     temp->next = newnode;
//     return head;
// }

// Node *Deletefrombeg(Node *head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return head;
//     }
//     Node *temp = head;
//     head = head->next;
//     if (head != NULL) {
//         head->prev = NULL;
//     }
//     free(temp);
//     return head;
// }

// Node *Deletefromend(Node *head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return head;
//     }
//     if (head->next == NULL) {
//         free(head);
//         return NULL;
//     }
//     Node *temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->prev->next = NULL;
//     free(temp);
//     return head;
// }

// Node *Deleteatpos(Node *head, int pos) {
//     if (head == NULL || pos <= 0) {
//         printf("Invalid position or list is empty.\n");
//         return head;
//     }
//     if (pos == 1) {
//         return Deletefrombeg(head);
//     }
//     Node *temp = head;
//     for (int i = 1; i < pos && temp != NULL; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("Position exceeds the list length.\n");
//         return head;
//     }
//     if (temp->prev != NULL) {
//         temp->prev->next = temp->next;
//     }
//     if (temp->next != NULL) {
//         temp->next->prev = temp->prev;
//     }
//     free(temp);
//     return head;
// }

// int countNodes(Node *head) {
//     int count = 0;
//     Node *temp = head;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// void display(Node *head) {
//     Node *temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     int ch, data, pos;
//     while (1) {
//         display(head);
//         printf("\n1. Insert at the Beginning\n");
//         printf("2. Insert at the End\n");
//         printf("3. Delete from the Beginning\n");
//         printf("4. Delete at the End\n");
//         printf("5. Insert at a Particular Position\n");
//         printf("6. Count the Number of Nodes\n");
//         printf("7. Delete at the given position\n");
//         printf("8. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &ch);
//         switch (ch) {
//             case 1:
//                 printf("Enter the data to be inserted: ");
//                 scanf("%d", &data);
//                 head = Insertatbeg(head, data);
//                 break;
//             case 2:
//                 printf("Enter the data to be inserted: ");
//                 scanf("%d", &data);
//                 head = Insertatend(head, data);
//                 break;
//             case 3:
//                 head = Deletefrombeg(head);
//                 break;
//             case 4:
//                 head = Deletefromend(head);
//                 break;
//             case 5:
//                 printf("Enter the data to be inserted: ");
//                 scanf("%d", &data);
//                 printf("Enter the position: ");
//                 scanf("%d", &pos);
//                 head = Insertatpos(head, data, pos);
//                 break;
//             case 6:
//                 printf("The number of nodes is: %d\n", countNodes(head));
//                 break;
//             case 7:
//                 printf("Enter the position: ");
//                 scanf("%d", &pos);
//                 head = Deleteatpos(head, pos);
//                 break;
//             case 8:
//                 printf("Exiting program. Have a great day!\n");
//                 exit(0);
//             default:
//                 printf("Invalid choice! Please try again.\n");
//                 break;
//         }
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------
// ----------------------------------------------------------Using double pointers---------------------------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node
// {
//     int data;
//     struct node *prev;
//     struct node *next;
// } Node;

// Node *createnode(int data);
// void Insertatbeg(Node **head, int data);
// void Insertatend(Node **head, int data);
// void Deletefrombeg(Node **head);
// void Deletefromend(Node **head);
// void Insertatpos(Node **head, int data, int pos);
// void Deleteatpos(Node **head, int pos);
// int countNodes(Node *head);
// void display(Node *head);

// void Insertatpos(Node **head, int data, int pos)
// {
//     Node *newnode = createnode(data);
//     if (pos == 1)
//     {
//         newnode->next = *head;
//         if (*head != NULL)
//         {
//             (*head)->prev = newnode;
//         }
//         *head = newnode;
//         return;
//     }
//     Node *temp = *head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++)
//     {
//         temp = temp->next;
//     }
//     if (temp == NULL)
//     {
//         printf("Position exceeds the list length. Inserting at the end.\n");
//         Insertatend(head, data);
//         return;
//     }
//     newnode->next = temp->next;
//     if (temp->next != NULL)
//     {
//         temp->next->prev = newnode;
//     }
//     temp->next = newnode;
//     newnode->prev = temp;
// }

// int countNodes(Node *head)
// {
//     int count = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// void Deleteatpos(Node **head, int pos)
// {
//     if (*head == NULL || pos <= 0)
//     {
//         printf("Invalid position or list is empty.\n");
//     }
//     if (pos == 1)
//     {
//         if (*head == NULL)
//         {
//             printf("List is empty\n");
//             return;
//         }
//         Node *temp = *head;
//         *head = (*head)->next;
//         if (*head != NULL)
//         {
//             (*head)->prev = NULL;
//         }
//         free(temp);
//     }
//     Node *temp = *head;
//     for (int i = 1; i < pos && temp != NULL; i++)
//     {
//         temp = temp->next;
//     }
//     if (temp == NULL)
//     {
//         printf("Position exceeds the list length.\n");
//     }
//     if (temp->prev != NULL)
//     {
//         temp->prev->next = temp->next;
//     }
//     if (temp->next != NULL)
//     {
//         temp->next->prev = temp->prev;
//     }
//     free(temp);
// }
// void Deletefrombeg(Node **head)
// {
//     if (*head == NULL)
//     {
//         printf("List is empty\n");
//         return;
//     }
//     Node *temp = *head;
//     *head = (*head)->next;
//     if (*head != NULL)
//     {
//         (*head)->prev = NULL;
//     }
//     free(temp);
// }

// void Deletefromend(Node **head)
// {
//     if (*head == NULL)
//     {
//         printf("List is empty\n");
//         return;
//     }
//     if ((*head)->next == NULL)
//     {
//         free(*head);
//         *head = NULL;
//         return;
//     }
//     Node *temp = *head;
//     while (temp->next->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Node *lastNode = temp->next;
//     temp->next = NULL;
//     free(lastNode);
// }

// void Insertatbeg(Node **head, int data)
// {
//     Node *newnode = createnode(data);
//     newnode->next = *head;
//     if (*head != NULL)
//     {
//         (*head)->prev = newnode;
//     }
//     *head = newnode;
// }

// void Insertatend(Node **head, int data)
// {
//     Node *newnode = createnode(data);
//     if (*head == NULL)
//     {
//         *head = newnode;
//         return;
//     }
//     Node *temp = *head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     newnode->prev = temp;
// }

// void display(Node *head)
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
//         printf("7. Delete at a Particular Position\n");
//         printf("Enter your choice: ");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             Insertatbeg(&head, data);
//             break;
//         case 2:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             Insertatend(&head, data);
//             break;
//         case 3:
//             Deletefrombeg(&head);
//             break;
//         case 4:
//             Deletefromend(&head);
//             break;
//         case 5:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             printf("Enter the position: ");
//             scanf("%d", &pos);
//             Insertatpos(&head, data, pos);
//             break;
//         case 6:
//             printf("The number of nodes is: %d\n", countNodes(head));
//             break;
//         case 7:
//             printf("Enter the position: ");
//             scanf("%d", &pos);
//             Deleteatpos(&head,pos);
//         default:
//             printf("Invalid choice! Please try again.\n");
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// // Define the node structure
// typedef struct node
// {
//     int data;
//     struct node *next;
// } Node;
// // Function prototypes
// Node *createnode(int data);
// Node *insertatbeg(Node *head, int data);
// Node *insertatend(Node *head, int data);
// Node *Deletefrombeg(Node *head);
// Node *Deletefromend(Node *head);
// Node *insertatpos(Node *head, int data, int pos);
// Node *Deleteatpos(Node *head, int pos);
// Node *reverse(Node *head);
// void display(Node *head);
// int countNodes(Node *head);
// int Sumof(Node *head);
// // Function to create a new node
// Node *createnode(int data)
// {
//     Node *newnode = (Node *)malloc(sizeof(Node));
//     newnode->data = data;
//     newnode->next = NULL;
//     return newnode;
// }
// // Function to insert a node at the beginning
// Node *insertatbeg(Node *head, int data)
// {
//     Node *newnode = createnode(data);
//     if (head == NULL)
//     {
//         newnode->next = newnode;
//         return newnode;
//     }
//     Node *temp = head;
//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     newnode->next = head;
//     temp->next = newnode;
//     head = newnode;
//     return head;
// }
// // Function to insert a node at the end
// Node *insertatend(Node *head, int data)
// {
//     Node *newnode = createnode(data);
//     if (head == NULL)
//     {
//         newnode->next = newnode;
//         return newnode;
//     }
//     Node *temp = head;
//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     newnode->next = head;
//     return head;
// }
// // Function to display the circular linked list
// void display(Node *head)
// {
//     if (head == NULL)
//     {
//         printf("List is empty.\n");
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != head)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     // Print the last node (the node that points back to head)
//     printf("%d -> (head)\n", temp->data);
// }
// // Function to reverse the circular linked list
// Node *reverse(Node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     Node *prev = NULL, *current = head, *next;
//     Node *tail = head;
//     do
//     {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     } while (current != head);
//     tail->next = prev;
//     head = prev;
//     return head;
// }
// Node *Deletefrombeg(Node *head)
// {
//     if (head == NULL)
//     {
//         printf("List is empty.\n");
//         return NULL;
//     }

//     if (head->next == head)
//     {
//         free(head);
//         return NULL;
//     }
//     Node *temp = head;
//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     Node *toDelete = head;
//     head = head->next;
//     temp->next = head;
//     free(toDelete);
//     return head;
// }
// Node *Deletefromend(Node *head)
// {
//     if (head == NULL)
//     {
//         printf("List is empty.\n");
//         return NULL;
//     }
//     if (head->next == head)
//     {
//         free(head);
//         return NULL;
//     }

//     Node *temp = head;
//     while (temp->next->next != head)
//     {
//         temp = temp->next;
//     }
//     Node *toDelete = temp->next;
//     temp->next = head;
//     free(toDelete);
//     return head;
// }

// // Function to insert a node at a specific position
// Node *insertatpos(Node *head, int data, int pos)
// {
//     if (pos == 1)
//     {
//         return insertatbeg(head, data);
//     }
//     Node *newnode = createnode(data);
//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp->next != head; i++)
//     {
//         temp = temp->next;
//     }
//     if (temp->next == head)
//     {
//         printf("Position exceeds list length. Inserting at the end.\n");
//         return insertatend(head, data);
//     }
//     newnode->next = temp->next;
//     temp->next = newnode;
//     return head;
// }

// // Function to delete a node at a specific position
// Node *Deleteatpos(Node *head, int pos)
// {
//     if (head == NULL)
//     {
//         printf("List is empty.\n");
//         return NULL;
//     }

//     if (pos == 1)
//     {
//         return Deletefrombeg(head);
//     }

//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp->next != head; i++)
//     {
//         temp = temp->next;
//     }

//     if (temp->next == head)
//     {
//         printf("Position exceeds list length.\n");
//         return head;
//     }
//     Node *toDelete = temp->next;
//     temp->next = toDelete->next;
//     free(toDelete);
//     return head;
// }

// // Function to count the number of nodes
// int countNodes(Node *head)
// {
//     if (head == NULL)
//         return 0;
//     int count = 0;
//     Node *temp = head;
//     do
//     {
//         count++;
//         temp = temp->next;
//     } while (temp != head);
//     return count;
// }

// // Function to sum the nodes' data
// int Sumof(Node *head)
// {
//     if (head == NULL)
//     {
//         return 0;
//     }
//     int sum = 0;
//     Node *temp = head;
//     do
//     {
//         sum += temp->data;
//         temp = temp->next;
//     } while (temp != head);
//     return sum;
// }

// // Main function to test the Circular Linked List operations
// int main()
// {
//     Node *head = NULL;
//     int ch, data, pos;
//     int result;
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
//         printf("8. Reverse the linked List:\n");
//         printf("9. Sum of the Nodes\n");
//         printf("Enter your choice: ");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             head = insertatbeg(head, data);
//             break;
//         case 2:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             head = insertatend(head, data);
//             break;
//         case 3:
//             head = Deletefrombeg(head);
//             break;
//         case 4:
//             head = Deletefromend(head);
//             break;
//         case 5:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             printf("Enter the position: ");
//             scanf("%d", &pos);
//             head = insertatpos(head, data, pos);
//             break;
//         case 6:
//             printf("The number of nodes is: %d\n", countNodes(head));
//             break;
//         case 7:
//             printf("Enter the position: ");
//             scanf("%d", &pos);
//             head = Deleteatpos(head, pos);
//             break;
//         case 8:
//             printf("Reversed list is as follows:\n");
//             head = reverse(head);
//             display(head);
//             break;
//         case 9:
//             result = Sumof(head);
//             printf("The Sum of Nodes is: %d\n", result);
//             break;
//         default:
//             printf("Invalid choice! Please try again.\n");
//             break;
//         }
//     }
//     return 0;
// }

// ---------------------------------------Circular Doubly Linked list---------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node
// {
//     int data;
//     struct node *prev;
//     struct node *next;
// } Node;
// Node *createNode(int data);
// Node *Insertatbeg(Node *head, int data);
// Node *Insertatend(Node *head, int data);
// Node *Deletefrombeg(Node *head);
// Node *Insertatpos(Node *head, int data, int pos);
// Node *Deletefromend(Node *head);
// Node *Deleteatpos(Node *head, int pos);
// int countNodes(Node *head);
// void display(Node *head);

// Node *createNode(int data)
// {
//     Node *newnode = (Node *)malloc(sizeof(Node));
//     newnode->data = data;
//     newnode->prev = NULL;
//     newnode->next = NULL;
//     return newnode;
// }
// Node *Insertatbeg(Node *head, int data)
// {
//     Node *newnode = createNode(data);
//     if (head == NULL)
//     {
//         head = newnode;
//         head->prev = head;
//         head->next = head;
//     }
//     else
//     {
//         Node *last = head->prev;
//         newnode->next = head;
//         head->prev = newnode;
//         newnode->prev = last;
//         last->next = newnode;
//         head = newnode;
//     }
//     return head;
// }
// Node *Insertatend(Node *head, int data)
// {
//     Node *newnode = createNode(data);
//     if (head == NULL)
//     {
//         newnode->next = newnode;
//         newnode->prev = newnode;
//         head = newnode;
//     }
//     else
//     {
//         Node *last = head->prev;
//         newnode->prev = last;
//         newnode->next = head;
//         last->next = newnode;
//         head->prev = newnode;
//     }
//     return head;
// }
// Node *Insertatpos(Node *head, int data, int pos)
// {
//     if (pos == 1)
//     {
//         return Insertatbeg(head, data);
//     }
//     Node *newnode = createNode(data);
//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp->next != head; i++)
//     {
//         temp = temp->next;
//     }
//     if (temp->next == head)
//     {
//         printf("Position exceeds list length. Inserting at the end.\n");
//         return Insertatend(head, data);
//     }
//     newnode->next = temp->next;
//     newnode->prev = temp;
//     temp->next->prev = newnode;
//     temp->next = newnode;
//     return head;
// }
// Node *Deletefrombeg(Node *head)
// {

//     if (head == NULL)
//     {
//         printf("The list is empty, nothing to delete\n");
//         return NULL;
//     }
//     else if (head->next == head)
//     {
//         free(head);
//         head = NULL;
//     }
//     else
//     {
//         Node *last = head->prev;
//         Node *temp = head;
//         head = head->next;
//         head->prev = last;
//         last->next = head;
//         free(temp);
//     }
//     return head;
// }

// int countNodes(Node *head)
// {
//     if (head == NULL)
//     {
//         return 0;
//     }

//     Node *temp = head;
//     int count = 0;

//     do
//     {
//         count++;
//         temp = temp->next;
//     } while (temp != head);

//     return count;
// }
// Node *Deletefromend(Node *head)
// {
//     if (head == NULL)
//     {
//         printf("The list is empty, nothing to delete\n");
//         return NULL;
//     }
//     else if (head->next == head)
//     {
//         free(head);
//         head = NULL;
//     }
//     else
//     {
//         Node *last = head->prev;
//         Node *secondLast = last->prev;
//         secondLast->next = head;
//         head->prev = secondLast;
//         free(last);
//     }
//     return head;
// }
// void display(Node *head)
// {
//     if (head == NULL)
//     {
//         printf("List is empty");
//     }
//     else
//     {
//         Node *temp = head;
//         while (temp->next != head)
//         {
//             printf("%d<->", temp->data);
//             temp = temp->next;
//         }
//         printf("%d", temp->data);
//     }
// }

// Node *Deleteatpos(Node *head, int pos)
// {
//     if (head == NULL)
//     {
//         printf("List is empty.\n");
//         return NULL;
//     }

//     if (pos == 1)
//     {
//         return Deletefrombeg(head);
//     }

//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp->next != head; i++)
//     {
//         temp = temp->next;
//     }

//     if (temp->next == head)
//     {
//         printf("Position exceeds list length.\n");
//         return head;
//     }
//     Node *toDelete = temp->next;
//     temp->next = toDelete->next;
//     toDelete->next->prev = temp;
//     free(toDelete);
//     return head;
// }
// int main()
// {
//     Node *head = NULL;
//     int ch, data, pos;
//     while (1)
//     {

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
//             head = Insertatbeg(head, data);
//             display(head);
//             break;
//         case 2:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             head = Insertatend(head, data);
//             display(head);
//             break;
//         case 3:
//             head = Deletefrombeg(head);
//             display(head);
//             break;
//         case 4:
//             head = Deletefromend(head);
//             display(head);
//             break;
//         case 5:
//             printf("Enter the data to be inserted: ");
//             scanf("%d", &data);
//             printf("Enter the position: ");
//             scanf("%d", &pos);
//             head = Insertatpos(head, data, pos);
//             display(head);
//             break;
//         case 6:
//             printf("The number of nodes is: %d\n", countNodes(head));
//             break;
//         case 7:
//             printf("Enter the position");
//             scanf("%d", &pos);
//             head = Deleteatpos(head, pos);
//             display(head);
//             break;
//         default:
//             printf("Invalid choice! Please try again.\n");
//             break;
//         }
//     }
//     return 0;
// }

// ---------------------------------Sparse Matrix using array of Structures-----------------------------
// #include <stdio.h>
// #define MAX 100
// typedef struct {
//     int row;
//     int col;
//     int value;
// } SparseMatrix;

// void printSparseMatrix(SparseMatrix sparse[], int size) {
//     printf("Row  Col  Value\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d    %d    %d\n", sparse[i].row, sparse[i].col, sparse[i].value);
//     }
// }
// int main() {
//     int rows = 4, cols = 5;
//     int matrix[4][5] = {
//         {0, 0, 3, 0, 4},
//         {0, 0, 5, 7, 0},
//         {0, 0, 0, 0, 0},
//         {0, 2, 6, 0, 0}
//     };
//     SparseMatrix sparse[MAX];
//     int k = 0; // Index for sparse matrix array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (matrix[i][j] != 0) {
//                 sparse[k].row = i;
//                 sparse[k].col = j;
//                 sparse[k].value = matrix[i][j];
//                 k++;
//             }
//         }
//     }
//     printf("Sparse Matrix Representation:\n");
//     printSparseMatrix(sparse, k);
//     return 0;
// }

// -------------------------------------Sparse Matrix using Linked list(ordered)-----------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node {
//     int row;
//     int col;
//     int value;
//     struct Node* next;
// } Node;
// Node* createNode(int row, int col, int value) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->row = row;
//     newNode->col = col;
//     newNode->value = value;
//     newNode->next = NULL;
//     return newNode;
// }
// void insert(Node** head, int row, int col, int value) {
//     Node* newNode = createNode(row, col, value);
//     if (*head == NULL || ((*head)->row > row) || ((*head)->row == row && (*head)->col > col)) {
//         newNode->next = *head;
//         *head = newNode;
//     } else {
//         Node* current = *head;
//         while (current->next != NULL && (current->next->row < row ||
//                (current->next->row == row && current->next->col < col))) {
//             current = current->next;
//         }
//         newNode->next = current->next;
//         current->next = newNode;
//     }
// }
// void printSparseMatrix(Node* head) {
//     printf("Row  Col  Value\n");
//     Node* temp = head;
//     while (temp != NULL) {
//         printf("%d    %d    %d\n", temp->row, temp->col, temp->value);
//         temp = temp->next;
//     }
// }
// int main() {
//     Node* sparseMatrix = NULL;
//     // Example matrix with some non-zero elements
//     insert(&sparseMatrix, 0, 2, 3);
//     insert(&sparseMatrix, 0, 4, 4);
//     insert(&sparseMatrix, 1, 2, 5);
//     insert(&sparseMatrix, 1, 3, 7);
//     insert(&sparseMatrix, 3, 1, 2);
//     insert(&sparseMatrix, 3, 2, 6);
//     insert(&sparseMatrix, 3, 7, 4);
//     printf("Linked List Representation of Sparse Matrix:\n");
//     printSparseMatrix(sparseMatrix);
//     return 0;
// }
// ----------------------------------------------Sparse Matrix(unordered)-------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int value;
//     int row_position;
//     int column_position;
//     struct Node *next;
// };
// void create_new_node(struct Node **start, int non_zero_element, int row_index, int column_index) {
//     struct Node* temp = *start;
//     struct Node* r;
//     if (temp == NULL) {  // Fix the comparison
//         temp = (struct Node*)malloc(sizeof(struct Node));  // Fix the memory allocation
//         temp->value = non_zero_element;
//         temp->row_position = row_index;
//         temp->column_position = column_index;
//         temp->next = NULL;
//         *start = temp;
//     } else {
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         r = (struct Node*)malloc(sizeof(struct Node));  // Fix the memory allocation
//         r->value = non_zero_element;
//         r->row_position = row_index;
//         r->column_position = column_index;
//         r->next = NULL;
//         temp->next = r;
//     }
// }
// void printList(struct Node* start) {
//     struct Node* temp = start;
//     printf("Row position: ");
//     while (temp != NULL) {
//         printf("%d \n", temp->row_position);
//         temp = temp->next;
//     }
//     printf("\n");
//     temp = start;
//     printf("Column position: ");
//     while (temp != NULL) {
//         printf("%d \n", temp->column_position);
//         temp = temp->next;
//     }
//     printf("\n");
//     temp = start;
//     printf("Value: ");
//     while (temp != NULL) {
//         printf("%d \n", temp->value);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// int main() {
//     int SparseMatrix[4][5] = {
//         {0, 0, 3, 0, 4},
//         {0, 0, 5, 7, 0},
//         {0, 0, 0, 0, 0},
//         {0, 2, 6, 0, 0}
//     };
//     struct Node* start = NULL;
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 5; j++) {
//             if (SparseMatrix[i][j] != 0) {
//                 create_new_node(&start, SparseMatrix[i][j], i, j);
//             }
//         }
//     }
//     printList(start);  // Moved outside the loop
//     return 0;
// }

// ----------------------------------------------------------------Stack Implementation--------------------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// #define size 3
// struct STACK
// {
//     int array[size];
//     int TOP;
// };
// typedef struct STACK Stack;
// void init(Stack *s);
// int isFull(Stack *s);
// int isEmpty(Stack *s);
// void push(Stack *s, int data);
// int pop(Stack *s);
// int peek(Stack *s);
// void display(Stack *s);
// int isFull(Stack *s)
// {
//     return s->TOP >= size - 1;
// }
// int isEmpty(Stack *s)
// {
//     return s->TOP == -1;
// }

// void push(Stack *s, int data)
// {
//     if (isFull(s))
//     {
//         printf("Stack is Full");
//     }
//     else
//     {
//         s->array[++(s->TOP)] = data;
//     }
// }
// int pop(Stack *s)
// {
//     if (isEmpty(s))
//     {
//         printf("Stack is Empty");
//         return -1;
//     }
//     else
//     {
//         return s->array[(s->TOP)--];
//     }
// }
// int peek(Stack *s)
// {
//     if (!isEmpty(s))
//     {
//         return s->array[s->TOP];
//     }
// }
// void init(Stack *s)
// {
//     s->TOP = -1;
// }
// void display(Stack *s)
// {
//     int i;
//     if (isEmpty(s))
//     {
//         printf("The Stack is Empty\n");
//     }
//     else
//     {
//         printf("Stack elements are:\n");
//         for (i = 0; i <= s->TOP; i++)
//         {
//             printf("%d\n", s->array[i]);
//         }
//     }
// }
// int main()
// {

//     Stack s;
//     init(&s);
//     int choice, value;
//     while (1)
//     {
//         printf("\nStack Operations\n");
//         printf("1. Push\n");
//         printf("2. POP\n");
//         printf("3. PEEK\n");
//         printf("4. DISPLAY");
//         printf("5. Exit\n");
//         printf("Enter your choice:\n");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf("Enter the value to push: ");
//             scanf("%d", &value);
//             push(&s, value);
//             display(&s);
//             break;
//         case 2:
//             value = pop(&s);
//             if (value != -1)
//             {
//                 printf("Popped value is: %d", value);
//             }
//             break;
//         case 3:
//             printf("The top element is: %d", peek(&s));
//             break;
//         case 4:
//             display(&s);
//         default:
//             break;
//         }
//     }
//     return 0;
// }

// -------------------------------Stack Implementation using Linked List--------------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };
// void push(int x);
// void display();
// void peek();
// void pop();

// struct node *top = NULL;
// void push(int x)
// {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = x;
//     newnode->link = top;
//     top = newnode;
// }
// void display()
// {
//     struct node *temp;
//     temp = top;
//     if (top == NULL)
//     {
//         printf("List is Empty");
//     }
//     else
//     {
//         while (temp != NULL)
//         {
//             printf("%d ", temp->data);
//             temp = temp->link;
//         }
//     }
// }
// void peek()
// {
//     if (top == NULL)
//     {
//         printf("List is Empty");
//     }
//     else
//     {
//         printf("Top element is %d", top->data);
//     }
// }
// void pop()
// {
//     struct node *temp;
//     temp = top;
//     if (top == NULL)
//     {
//         printf("List is Empty");
//     }
//     else
//     {
//         printf("The popped element is %d", top->data);
//         top = top->link;
//         free(temp);
//     }
// }

// int main()
// {
//     int choice, value;
//     while (1)
//     {
//         printf("\nStack Operations\n");
//         printf("1. Push\n");
//         printf("2. POP\n");
//         printf("3. PEEK\n");
//         printf("4. DISPLAY");
//         printf("5. Exit\n");
//         printf("Enter your choice:\n");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf("Enter the value to push: ");
//             scanf("%d", &value);
//             push(value);
//             display();
//             break;
//         case 2:
//             if (value != -1)
//             {
//                 printf("Popped value is: %d", value);
//             }
//             break;
//         case 3:
//             pop();
//             break;
//         case 4:
//             display();
//         default:
//             break;
//         }
//     }
//     return 0;
// }

// ---------------------------------Infix to postfix operation Implementation-----------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int prec(char c);
// int associativity(char c);
// void infixtopostfix(char s[]);

// int prec(char c)
// {
//     if (c == '^')
//     {
//         return 3;
//     }
//     else if (c == '/' || c == '*')
//     {
//         return 2;
//     }
//     else if (c == '+' || c == '-')
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }
// int associativity(char c)
// {
//     if (c == '^')
//     {
//         return 'R';
//     }
//     else
//     {
//         return 'L';
//     }
// }
// void infixtopostfix(char s[])
// {
//     char result[100];
//     int resultIndex = 0;
//     int length = strlen(s);
//     char stack[100];
//     int stackIndex = -1;
//     int i;
//     for (i = 0; i < length; i++)
//     {
//         char c = s[i];
//         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
//         {
//             result[resultIndex++] = c;
//             // resultIndex++
//         }
//         else if (c == '(')
//         {
//             stack[++stackIndex] = c;
//         }
//         else if (c == ')')
//         {
//             while (stackIndex >= 0 && stack[stackIndex] != '(')
//             {
//                 result[resultIndex++] = stack[stackIndex--];
//             }

//             stackIndex--;
//         }
//         else
//         {
//         while (stackIndex >= 0 && (prec(s[i]) < prec(stack[stackIndex])) || (prec(s[i])) == prec(stack[stackIndex]) && associativity(s[i]=='L'))
//             {
//                 result[resultIndex++] = stack[stackIndex--];
//             }
//             stack[++stackIndex]=c;
//         }
//     }
//     while (stackIndex>=0)
//     {
//         result[resultIndex++]=stack[stackIndex--];
//     }
//     result[resultIndex]='\0';
//     printf("%s",result);
// }
// int main()
// {
//     char exp[] = "K+L-M*N+(O^P)*W/U/V*T+Q";
//     infixtopostfix(exp);
//     return 0;
// }
