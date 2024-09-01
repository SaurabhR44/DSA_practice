// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int r1, c1, r2, c2;

//     // Input dimensions
//     printf("Enter rows and columns of the first matrix: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter rows and columns of the second matrix: ");
//     scanf("%d %d", &r2, &c2);

//     // Check if multiplication is possible
//     if (c1 != r2) {
//         printf("Multiplication not possible.\n");
//         return -1;
//     }

//     // Allocate memory for matrices
//     int *mat1 = (int *)malloc(r1 * c1 * sizeof(int));
//     int *mat2 = (int *)malloc(r2 * c2 * sizeof(int));
//     int *result = (int *)malloc(r1 * c2 * sizeof(int));

//     // Input elements of the first matrix
//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < r1 * c1; i++) {
//         scanf("%d", &mat1[i]);
//     }

//     // Input elements of the second matrix
//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i < r2 * c2; i++) {
//         scanf("%d", &mat2[i]);
//     }

//     // Multiply matrices
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             result[i * c2 + j] = 0;
//             for (int k = 0; k < c1; k++) {
//                 result[i * c2 + j] += mat1[i * c1 + k] * mat2[k * c2 + j];
//             }
//         }
//     }

//     // Display result
//     printf("Resulting matrix:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             printf("%d ", result[i * c2 + j]);
//         }
//         printf("\n");
//     }

//     // Free memory
//     free(mat1);
//     free(mat2);
//     free(result);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for the employee data
// typedef struct {
//     int employeeNo;
//     char name[100];
//     float salary;
//     char designation[50];
// } Employee;

// // Define the node structure for the singly linked list
// typedef struct Node {
//     Employee data;          // Data of type Employee
//     struct Node* next;      // Pointer to the next node
// } Node;



// Now implement the following operations for counting the number of nodes,concatenate two list,sum of all node values in the list
// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a singly linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to count nodes in the linked list
// int countNodes(struct Node* head) {
//     int count = 0;
//     struct Node* current = head;
//     while (current != NULL) {
//         count++;
//         current = current->next;
//     }
//     return count;
// }

// // Function to concatenate two linked lists
// struct Node* concatenateLists(struct Node* list1, struct Node* list2) {
//     if (list1 == NULL) {
//         return list2;
//     }

//     struct Node* current = list1;
//     while (current->next != NULL) {
//         current = current->next;
//     }
//     current->next = list2;

//     return list1;
// }

// // Function to compute the sum of all node values
// int sumOfValues(struct Node* head) {
//     int sum = 0;
//     struct Node* current = head;
//     while (current != NULL) {
//         sum += current->data;
//         current = current->next;
//     }
//     return sum;
// }

// // Example usage
// int main() {
//     // Create a sample linked list: 1 -> 2 -> 3 -> NULL
//     struct Node* head = (struct Node*)malloc(sizeof(struct Node));
//     head->data = 1;
//     head->next = (struct Node*)malloc(sizeof(struct Node));
//     head->next->data = 2;
//     head->next->next = (struct Node*)malloc(sizeof(struct Node));
//     head->next->next->data = 3;
//     head->next->next->next = NULL;

//     // Create another linked list: 4 -> 5 -> NULL
//     struct Node* secondList = (struct Node*)malloc(sizeof(struct Node));
//     secondList->data = 4;
//     secondList->next = (struct Node*)malloc(sizeof(struct Node));
//     secondList->next->data = 5;
//     secondList->next->next = NULL;

//     // Concatenate the two lists
//     struct Node* concatenatedList = concatenateLists(head, secondList); 

//     // Print the concatenated list
//     struct Node* current = concatenatedList;
//     while (current != NULL) {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");

//     // Compute the sum of all node values
//     int totalSum = sumOfValues(concatenatedList);
//     printf("Sum of all node values: %d\n", totalSum);
//     int countfinal = countNodes(head);
//     printf("Total number of nodes are--->%d",countfinal);
//     // Clean up memory (free allocated nodes)
//     while (concatenatedList != NULL) {
//         struct Node* temp = concatenatedList;
//         concatenatedList = concatenatedList->next;
//         free(temp);
//     }

//     return 0;
// }


// Delete a node with a given key value,delete all alternate nodes,delete all the nodes in one program please without using double pointer



// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// void deleteNode(struct Node* head, int key) {
//     if (head == NULL)
//         return;

//     struct Node* temp = head;
//     struct Node* prev = NULL;

//     while (temp != NULL && temp->data != key) {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Node with key %d not found.\n", key);
//         return;
//     }

//     if (prev != NULL)
//         prev->next = temp->next;
//     else
//         head = temp->next;

//     free(temp);
// }

// // Usage example
// int main() {
//     struct Node* head = NULL; // Initialize your linked list here

//     // Insert nodes into the list

//     // Call deleteNode with the desired key value
//     deleteNode(head, 42);

//     // Print the updated list

//     return 0;
// }


// void deleteAlternateNodes(struct Node* head) {
//     if (head == NULL || head->next == NULL)
//         return;

//     struct Node* current = head;
//     struct Node* next;

//     while (current != NULL && current->next != NULL) {
//         next = current->next;
//         current->next = next->next;
//         free(next);
//         current = current->next;
//     }
// }



// void deleteAllNodes(struct Node* head) {
//     struct Node* current = head;
//     struct Node* temp;

//     while (current != NULL) {
//         temp = current;
//         current = current->next;
//         free(temp);
//     }
// }

// ----------------------------------------------------------------------------------------------------------------------------------------
// Apply the concepts to implement following operations for a Doubly linked list
//  reverse a doubly linked list
//  Find the node pairs with a given sum in a doubly linked list
//  Insert a node after a node with a given value
//  Remove duplicate nodes from a doubly linked list
// in C

// #include <stdio.h>
// #include <stdlib.h>

// // Node structure
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// // Function to reverse a doubly linked list
// struct Node* reverse(struct Node* head) {
//     struct Node* temp = NULL;
//     struct Node* current = head;

//     while (current != NULL) {
//         // Swap next and prev
//         temp = current->prev;
//         current->prev = current->next;
//         current->next = temp;
//         current = current->prev;
//     }

//     // Before changing the head, check for the cases like empty list and list with only one node
//     if (temp != NULL) {
//         head = temp->prev;
//     }

//     return head;
// }

// // Function to print the doubly linked list
// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// // Utility function to insert a node at the beginning
// struct Node* push(struct Node* head, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->prev = NULL;
//     new_node->next = head;
//     if (head != NULL)
//         head->prev = new_node;
//     return new_node;
// }

// int main() {
//     struct Node* head = NULL;

//     // Insert nodes into the list
//     head = push(head, 2);
//     head = push(head, 4);
//     head = push(head, 8);
//     head = push(head, 10);

//     printf("Original Doubly linked list: ");
//     printList(head);

//     // Reverse the doubly linked list
//     head = reverse(head);

//     printf("Reversed Doubly linked list: ");
//     printList(head);

//     return 0;
// }


// -----------------------------------------------------------------------------------------------------------------------------------------




// #include <stdio.h>
// #include <stdlib.h>

// // Node structure
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// // Function to find pairs with a given sum in a doubly linked list
// void findPairsWithGivenSum(struct Node* head, int sum) {
//     struct Node* first = head;
//     struct Node* second = head;

//     // Move second to the end of the doubly linked list
//     while (second->next != NULL) {
//         second = second->next;
//     }

//     int found = 0;

//     while (first != NULL && second != NULL && first != second && second->next != first) {
//         if ((first->data + second->data) == sum) {
//             printf("(%d, %d)\n", first->data, second->data);
//             first = first->next;
//             second = second->prev;
//             found = 1;
//         } else if ((first->data + second->data) < sum) {
//             first = first->next;
//         } else {
//             second = second->prev;
//         }
//     }

//     if (found == 0) {
//         printf("No pair found\n");
//     }
// }

// // Utility functions to insert nodes
// struct Node* push(struct Node* head, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->prev = NULL;
//     new_node->next = head;
//     if (head != NULL)
//         head->prev = new_node;
//     return new_node;
// }

// // Function to print the doubly linked list
// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Insert nodes into the list
//     head = push(head, 1);
//     head = push(head, 2);
//     head = push(head, 4);
//     head = push(head, 5);
//     head = push(head, 6);
//     head = push(head, 8);
//     head = push(head, 9);

//     printf("Doubly linked list: ");
//     printList(head);

//     int sum = 10;
//     printf("Pairs with sum %d:\n", sum);
//     findPairsWithGivenSum(head, sum);

//     return 0;
// }


// -------------------------------------------------------------------------------------------------------------------------------------------


// #include <stdio.h>
// #include <stdlib.h>

// // Node structure
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// // Function to insert a node after a given node value
// struct Node* insertAfterValue(struct Node* head, int value, int new_data) {
//     struct Node* temp = head;

//     while (temp != NULL && temp->data != value) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Value %d not found in the list.\n", value);
//         return head;
//     }

//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->next = temp->next;
//     new_node->prev = temp;

//     if (temp->next != NULL) {
//         temp->next->prev = new_node;
//     }
//     temp->next = new_node;

//     return head;
// }

// // Utility functions to insert nodes
// struct Node* push(struct Node* head, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->prev = NULL;
//     new_node->next = head;
//     if (head != NULL)
//         head->prev = new_node;
//     return new_node;
// }

// // Function to print the doubly linked list
// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Insert nodes into the list
//     head = push(head, 2);
//     head = push(head, 4);
//     head = push(head, 8);
//     head = push(head, 10);

//     printf("Original Doubly linked list: ");
//     printList(head);

//     // Insert a node after a given value
//     head = insertAfterValue(head, 4, 6);

//     printf("Modified Doubly linked list: ");
//     printList(head);

//     return 0;
// }


// ------------------------------------------------------------------------------------------------------------------------------------------------


// #include <stdio.h>
// #include <stdlib.h>

// // Node structure
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// // Function to remove duplicate nodes from a doubly linked list
// struct Node* removeDuplicates(struct Node* head) {
//     struct Node* current = head;
//     struct Node* next_next;

//     if (current == NULL) {
//         return head;
//     }

//     while (current->next != NULL) {
//         if (current->data == current->next->data) {
//             next_next = current->next->next;
//             free(current->next);
//             current->next = next_next;
//             if (next_next != NULL) {
//                 next_next->prev = current;
//             }
//         } else {
//             current = current->next;
//         }
//     }

//     return head;
// }

// // Utility functions to insert nodes
// struct Node* push(struct Node* head, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->prev = NULL;
//     new_node->next = head;
//     if (head != NULL)
//         head->prev = new_node;
//     return new_node;
// }

// // Function to print the doubly linked list
// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Insert nodes into the list (including duplicates)
//     head = push(head, 20);
//     head = push(head, 20);
//     head = push(head, 13);
//     head = push(head, 13);
//     head = push(head, 11);
//     head = push(head, 11);

//     printf("Original Doubly linked list: ");
//     printList(head);

//     // Remove duplicates
//     head = removeDuplicates(head);

//     printf("Doubly linked list after removing duplicates: ");
//     printList(head);

//     return 0;
// }
