
// https://www.hackerrank.com/dsa-lab-2-1723648473
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int nums[n];
//     for (int i = 0; i < n; ++i) {
//         scanf("%d", &nums[i]);
//     }
//     int even_counts[1000] = {0};
//     int max_freq = 0;
//     int most_frequent_even = -1;

//     for (int i = 0; i < n; ++i) {
//         if (nums[i] % 2 == 0) {
//             even_counts[nums[i]]++;
//             if (even_counts[nums[i]] > max_freq) {
//                 max_freq = even_counts[nums[i]];
//                 most_frequent_even = nums[i];
//             } else if (even_counts[nums[i]] == max_freq && nums[i] < most_frequent_even) {
//                 most_frequent_even = nums[i];
//             }
//         }
//     }
//     printf("%d\n", most_frequent_even);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------

// #include <stdio.h>
// #include <string.h>
// typedef struct hotel {
//     char name[50];
//     int price;
//     int squarefeet;
//     double ratio;
// }HOTEL;
// void Ratio_Order(HOTEL *h, int n);
// int main() {
//     int n;
//     scanf("%d", &n);
//     HOTEL h[n];
//     for (int i = 0; i < n; ++i) {
//         scanf("%s %d %d", h[i].name, &h[i].price, &h[i].squarefeet);
//         h[i].ratio = (double)h[i].squarefeet / h[i].price;
//     }
//     Ratio_Order(h, n);
//     return 0;
// }
// void Ratio_Order(HOTEL *h, int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (h[j].ratio < h[j + 1].ratio) {
//                 HOTEL temp = h[j];
//                 h[j] = h[j + 1];
//                 h[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; ++i) {
//         printf("%s %d %d %.2lf\n", h[i].name, h[i].price, h[i].squarefeet, h[i].ratio);
//     }
// }
// ------------------------------------------------------------------------------------------------------------------------------
// https://www.hackerrank.com/dsa-lab-2-1723648473
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// // Function to get the lexicographically smallest string by swapping adjacent digits
// void lexicographically_smallest_string(char *s) {
// for(int i=0;i<strlen(s)-1;i++)
// {
//         if((s[i]%2==s[i+1]%2))
//         {
//             if(s[i]>s[i+1])
//             {     
//               char temp=s[i+1];
//               s[i+1]=s[i];
//               s[i]=temp;
//               break;
//             }   
//         }
// }
// }


// int main() {
//    char s[101];
  
//    // Read the input string


//    scanf("%100s", s);
  
//    // Process the string
//    lexicographically_smallest_string(s);
  
//    // Print the result
//    printf("%s\n", s);
 
//    return 0;
// }


// -----------------------------------------------------------------------------------------------------------------------------------

// #include <assert.h>
// #include <ctype.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// // Check if the move is valid
// int isValidMove(int maze[100][100], int visited[100][100], int n, int m, int x, int y) {
//     return (x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == 0 && !visited[x][y]);
// }
// // Recursive function to find the path
// int findPath(int maze[100][100], int visited[100][100], int n, int m, int x, int y) {
//     // Base case: if we've reached the bottom-right corner
//     if (x == n - 1 && y == m - 1) {
//         return 1;
//     }

//     // Mark the current cell as visited
//     visited[x][y] = 1;

//     // Explore in all four directions (Down, Right, Up, Left)
//     if (isValidMove(maze, visited, n, m, x + 1, y) && findPath(maze, visited, n, m, x + 1, y)) {
//         return 1;
//     }
//     if (isValidMove(maze, visited, n, m, x, y + 1) && findPath(maze, visited, n, m, x, y + 1)) {
//         return 1;
//     }
//     if (isValidMove(maze, visited, n, m, x - 1, y) && findPath(maze, visited, n, m, x - 1, y)) {
//         return 1;
//     }
//     if (isValidMove(maze, visited, n, m, x, y - 1) && findPath(maze, visited, n, m, x, y - 1)) {
//         return 1;
//     }
//     // Backtrack: Unmark the current cell as visited and return 0
//     visited[x][y] = 0;
//     return 0;
// }
// int main() {
//     int n, m;
//     int maze[100][100];
//     int visited[100][100] = {0}; // Initialize visited cells to 0
//     // Input number of rows and columns
//     scanf("%d %d", &n, &m);
//     // Input maze
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &maze[i][j]);
//         }
//     }
//     // Check if start or end are blocked
//     if (maze[0][0] == 1 || maze[n-1][m-1] == 1) {
//         printf("NO\n");
//         return 0;
//     }
//     // Check if there is a path
//     if (findPath(maze, visited, n, m, 0, 0)) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// https://www.hackerrank.com/contests/dsa-lab-3-1724059625/challenges

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>

// typedef struct node
// {
//     int coeff;
//     int pow;
//     struct node* next;
// }node;          

// void input(node** head,node** tail,int n);
// node* sum(node* head1,node* head2);
// int eval(node* head,int x);
// void destroy(node **head);

// int main()
// {
//     int m=0;
//     int n=0;
//     node* head1=NULL;
//     node* head2=NULL;
//     node* tail1=NULL;
//     node* tail2=NULL;
//     int x=0;//value of the variable for evaluation
//     scanf("%d %d",&m,&n);
//     scanf("%d",&x);
//     input(&head1,&tail1,m);
//     input(&head2,&tail2,n);
//     node *headres=sum(head1,head2);
//     int res=eval(headres,x);
//     printf("%d",res);
//     destroy(&headres);
//     return 0;
// }

// void input(node** head,node** tail,int n)
// {   for (int i = 0; i < n; i++) {
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
// node* sum(node* head1,node* head2)
// {
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

// int eval(node* head,int x)
// {
//     int result = 0;
//     while (head != NULL) {
//         result += head->coeff * pow(x, head->pow);
//         head = head->next;
//     }
//     return (result == 0) ? -1 : result;
// }
// void destroy(node **head)
// {
//     node *temp;
//     while (*head != NULL) {
//     temp = *head;
//     *head = (*head)->next;
//     free(temp);
// }
// }





// -----------------------------------------------------------------------------------------------------------------------------------



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

//     struct Node* last = *head_ref;  
    
//     new_node->data = new_data;
//     new_node->next = NULL;  

//     if (*head_ref == NULL) {
//         *head_ref = new_node;
//         return;
//     }
//     while (last->next != NULL) {
//         last = last->next;
//     }
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
//     int flag = 1;

//     while (current->next != NULL) {
//         if (flag) {  
//             if (current->data > current->next->data) {
               
//                 int temp = current->data;
//                 current->data = current->next->data;
//                 current->next->data = temp;
//             }
//         } else {  
//             if (current->data < current->next->data) {
//                 int temp = current->data;
//                 current->data = current->next->data;
//                 current->next->data = temp;
//             }
//         }
//         current = current->next;
//         flag = !flag; 
//     }
// }

// /* Driver program to test above functions */
// int main() {
//     struct Node* head = NULL;
//     int data;
//     char buffer[1024];
//     fgets(buffer, sizeof(buffer), stdin);
//     char* token = strtok(buffer, " ");
//     while (token != NULL) {
//         data = atoi(token);  
//         append(&head, data);
//         token = strtok(NULL, " ");
//     }
//     zigZagList(head);
//     printList(head);
//     struct Node* temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//  return 0;
// }




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Structure to represent a node in the doubly linked list
struct Movie {
    int movie_id;
    char name[50];
    int available_seats;
    struct Movie* prev;
    struct Movie* next;
};
// Function to create a new node
struct Movie* createMovie(int movie_id, char name[], int available_seats) {
    struct Movie* newMovie = (struct Movie*)malloc(sizeof(struct Movie));
    newMovie->movie_id = movie_id;
    strcpy(newMovie->name, name);
    newMovie->available_seats = available_seats;
    newMovie->prev = NULL;
    newMovie->next = NULL;
    return newMovie;
}
// Function to add a movie at the beginning of the doubly linked list
void addMovie(struct Movie** head_ref, int movie_id, char name[], int available_seats) {
    struct Movie* newMovie = createMovie(movie_id, name, available_seats);
    if (*head_ref == NULL) {
        *head_ref = newMovie;
    } else {
        newMovie->next = *head_ref;
        (*head_ref)->prev = newMovie;
        *head_ref = newMovie;
    }
}

// Function to book a ticket for a specific movie
void bookTicket(struct Movie* head, int movie_id) {
    struct Movie* current = head;
    while (current != NULL) {
        if (current->movie_id == movie_id) {
            if (current->available_seats > 0) {
                current->available_seats--;
                printf("Booking successful for Movie ID: %d\n", movie_id);
            } else {
                printf("No available seats for Movie ID: %d\n", movie_id);
            }
            return;
        }
        current = current->next;
    }
    printf("Movie not found\n");
}

// Function to cancel a ticket for a specific movie
void cancelTicket(struct Movie* head, int movie_id) {
    struct Movie* current = head;
    while (current != NULL) {
        if (current->movie_id == movie_id) {
            current->available_seats++;
            printf("Cancellation successful for Movie ID: %d\n", movie_id);
            return;
        }
        current = current->next;
    }
    printf("Movie not found\n");
}

// Function to remove a movie based on movie ID
void removeMovie(struct Movie** head_ref, int movie_id) {
    struct Movie* current = *head_ref;
    while (current != NULL) {
        if (current->movie_id == movie_id) {
            if (current->prev != NULL) {
                current->prev->next = current->next;
            } else {
                *head_ref = current->next;
            }
            
            if (current->next != NULL) {
                current->next->prev = current->prev;
            }
            
            printf("Movie removed: %d\n", movie_id);
            free(current);
            return;
        }
        current = current->next;
    }
    printf("Movie not found\n");
}

// Function to display the current list of movies
void displayMovies(struct Movie* node) {
    while (node != NULL) {
        printf("Movie ID: %d, Name: %s, Available Seats: %d\n",node->movie_id, node->name, node->available_seats);
        node = node->next;
    }
}
int main() {
    struct Movie* head = NULL;
    int n, movie_id, available_seats;
    char name[50];
    char command[10];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &movie_id, name, &available_seats);
        addMovie(&head, movie_id, name, available_seats);
    }
    
    while (scanf("%s", command) == 1) {
        if (strcmp(command, "Exit") == 0) {
            break;
        }
        scanf("%d", &movie_id);
        if (strcmp(command, "Book") == 0) {
            bookTicket(head, movie_id);
        } else if (strcmp(command, "Cancel") == 0){
            cancelTicket(head, movie_id);
        } else if (strcmp(command, "Remove") == 0){
            removeMovie(&head, movie_id);
        }
        displayMovies(head);
    }
return 0;
}


