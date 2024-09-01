// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.

// Solution
// #include <stdio.h>
// #include <stdlib.h>
// // Function to find the indices of the two numbers
// int *twoSum(int *nums, int numsSize, int target, int *returnSize)
// {
//     // Allocate memory for the return array
//     int *result = (int *)malloc(2 * sizeof(int));
//     // Iterate over the array
//     for (int i = 0; i < numsSize; i++)
//     {
//         // Nested loop to find the second number
//         for (int j = i + 1; j < numsSize; j++)
//         {
//             // If the two numbers add up to the target, return their indices
//             if (nums[i] + nums[j] == target)
//             {
//                 result[0] = i;
//                 result[1] = j;
//                 *returnSize = 2; // Set the size of the return array
//                 return result;
//             }
//         }
//     }
//     *returnSize = 0; // If no solution is found, set the return size to 0
//     return NULL;
// }
// int main()
// {
//     int numsSize, target, returnSize;
//     // Input the size of the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &numsSize);
//     // Allocate memory for the array
//     int *nums = (int *)malloc(numsSize * sizeof(int));
//     // Input the elements of the array
//     printf("Enter the elements: ");
//     for (int i = 0; i < numsSize; i++)
//     {
//         scanf("%d", &nums[i]);
//     }
//     // Input the target value
//     printf("Enter the target value: ");
//     scanf("%d", &target);
//     // Call the twoSum function
//     int *indices = twoSum(nums, numsSize, target, &returnSize);
//     // Print the result
//     if (indices != NULL)
//     {
//         printf("Indices: [%d, %d]\n", indices[0], indices[1]);
//         free(indices); // Free the allocated memory for indices
//     }
//     else
//     {
//         printf("No solution found.\n");
//     }

//     // Free the allocated memory for the array
//     free(nums);

//     return 0;
// }

// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.
// Custom Judge:

// The judge will test your solution with the following code:

// int[] nums = [...]; // Input array
// int val = ...; // Value to remove
// int[] expectedNums = [...]; // The expected answer with correct length.
//                             // It is sorted with no values equaling val.

// int k = removeElement(nums, val); // Calls your implementation

// assert k == expectedNums.length;
// sort(nums, 0, k); // Sort the first k elements of nums
// for (int i = 0; i < actualLength; i++) {
//     assert nums[i] == expectedNums[i];
// }
// If all assertions pass, then your solution will be accepted.

// Example 1:

// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 2.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// Example 2:

// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
// Note that the five elements can be returned in any order.
// It does not matter what you leave beyond the returned k (hence they are underscores).

// Constraints:

// 0 <= nums.length <= 100
// 0 <= nums[i] <= 50
// 0 <= val <= 100

// #include <stdio.h>
// int removeElement(int* nums, int numsSize, int val) {
//     int k = 0; // Pointer for the position to place non-val elements

//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] != val) {
//             nums[k] = nums[i]; // Place the element at the next position
//             k++; // Move the pointer
//         }
//     }

//     return k; // Return the number of elements that are not equal to val
// }

// void printArray(int* nums, int numsSize) {
//     for (int i = 0; i < numsSize; i++) {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int nums[] = {3, 2, 2, 3};
//     int numsSize = sizeof(nums) / sizeof(nums[0]);
//     int val = 3;

//     printf("Original array: ");
//     printArray(nums, numsSize);

//     int k = removeElement(nums, numsSize, val);

//     printf("Array after removing %d: ", val);
//     printArray(nums, k); // Print only the first k elements

//     printf("Number of elements not equal to %d: %d\n", val, k);

//     return 0;
// }

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,1]
// Output: 1
// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4
// Example 3:

// Input: nums = [1]
// Output: 1

// Constraints:

// 1 <= nums.length <= 3 * 104
// -3 * 104 <= nums[i] <= 3 * 104
// Each element in the array appears twice except for one element which appears only once.

// #include <stdio.h>
// int singleNumber(int* nums, int numsSize) {
//     int result = 0;
//     for (int i = 0; i < numsSize; i++) {
//         result ^= nums[i];
//     }
//     return result;
// }
// int main() {
//     int nums1[] = {2, 2, 1};
//     int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
//     printf("The single number is: %d\n", singleNumber(nums1, numsSize1));

//     int nums2[] = {4, 1, 2, 1, 2};
//     int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
//     printf("The single number is: %d\n", singleNumber(nums2, numsSize2));

//     int nums3[] = {1};
//     int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
//     printf("The single number is: %d\n", singleNumber(nums3, numsSize3));

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------
//     You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
// Constraints:
// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104

// #include <stdio.h>
// int maxProfit(int* prices, int pricesSize) {
//     if (pricesSize == 0) return 0;

//     int min_price = prices[0];
//     int max_profit = 0;

//     for (int i = 1; i < pricesSize; i++) {
//         if (prices[i] < min_price) {
//             min_price = prices[i];
//         } else if (prices[i] - min_price > max_profit) {
//             max_profit = prices[i] - min_price;
//         }
//     }

//     return max_profit;
// }

// int main() {
//     int prices1[] = {7, 1, 5, 3, 6, 4};
//     int size1 = sizeof(prices1) / sizeof(prices1[0]);
//     printf("Max Profit: %d\n", maxProfit(prices1, size1)); // Output: 5

//     int prices2[] = {7, 6, 4, 3, 1};
//     int size2 = sizeof(prices2) / sizeof(prices2[0]);
//     printf("Max Profit: %d\n", maxProfit(prices2, size2)); // Output: 0

//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------------

// Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
// Specifically, ans is the concatenation of two nums arrays.
// Return the array ans.
// Example 1:
// Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]
// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]
// Example 2:
// Input: nums = [1,3,2,1]
// Output: [1,3,2,1,1,3,2,1]
// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
// - ans = [1,3,2,1,1,3,2,1]
// Constraints:
// n == nums.length
// 1 <= n <= 1000
// 1 <= nums[i] <= 1000

// #include <stdio.h>
// #include <stdlib.h>

// int *getConcatenation(int *nums, int numsSize, int *returnSize)
// {
//     *returnSize = 2 * numsSize;
//     int *ans = (int *)malloc((*returnSize) * sizeof(int));

//     for (int i = 0; i < numsSize; i++)
//     {
//         ans[i] = nums[i];
//         ans[i + numsSize] = nums[i];
//     }

//     return ans;
// }

// int main()
// {
//     int nums[] = {1, 2, 1};
//     int numsSize = sizeof(nums) / sizeof(nums[0]);
//     int returnSize;

//     int *ans = getConcatenation(nums, numsSize, &returnSize);

//     printf("Concatenated array: ");
//     for (int i = 0; i < returnSize; i++)
//     {
//         printf("%d ", ans[i]);
//     }

//     // Free the allocated memory
//     free(ans);

//     return 0;
// }

// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.
// Example 1:
// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
// Example 2:
// Input: nums = [1,1,1,1]
// Output: 6
// Explanation: Each pair in the array are good.
// Example 3:
// Input: nums = [1,2,3]
// Output: 0

// #include <stdio.h>
// int numIdenticalPairs(int *nums, int numsSize)
// {
//     int count = 0;
//     int freq[101] = {0}; // Array to count frequencies, assuming nums[i] <= 100
//     for (int i = 0; i < numsSize; i++)
//     {
//         count += freq[nums[i]]; // Add the count of previous occurrences of nums[i]
//         freq[nums[i]]++;        // Increment the count of nums[i] for future pairs
//     }
//     return count;
// }
// int main()
// {
//     int nums1[] = {1, 2, 3, 1, 1, 3};
//     int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
//     printf("Number of good pairs: %d\n", numIdenticalPairs(nums1, numsSize1)); // Output: 4
//     int nums2[] = {1, 1, 1, 1};
//     int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
//     printf("Number of good pairs: %d\n", numIdenticalPairs(nums2, numsSize2)); // Output: 6
//     int nums3[] = {1, 2, 3};
//     int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
//     printf("Number of good pairs: %d\n", numIdenticalPairs(nums3, numsSize3)); // Output: 0
//     return 0;
// }



// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.
// Custom Judge:
// The judge will test your solution with the following code:
// int[] nums = [...]; // Input array
// int[] expectedNums = [...]; // The expected answer with correct length
// int k = removeDuplicates(nums); // Calls your implementation
// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }
// If all assertions pass, then your solution will be accepted.
// Example 1:
// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// Example 2:
// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// Constraints:
// 1 <= nums.length <= 3 * 104

// #include <stdio.h>
// int removeDuplicates(int* nums, int numsSize) {
//     if (numsSize == 0) {
//         return 0;
//     }

//     int i = 0;
//     for (int j = 1; j < numsSize; j++) {
//         if (nums[j] != nums[i]) {
//             i++;
//             nums[i] = nums[j];
//         }
//     }

//     return i + 1;
// }
// int main() {
//     int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//     int numsSize = sizeof(nums) / sizeof(nums[0]);
//     int k = removeDuplicates(nums, numsSize);
//     printf("Number of unique elements: %d\n", k);
//     printf("Array after removing duplicates: ");
//     for (int i = 0; i < k; i++) {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");

//     return 0;
// }



// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
// Example 1:
// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
// Example 2:
// Input: head = [], val = 1
// Output: []
// Example 3:
// Input: head = [7,7,7,7], val = 7
// Output: []
// Constraints:
// The number of nodes in the list is in the range [0, 104].
// 1 <= Node.val <= 50
// 0 <= val <= 50


// #include <stdlib.h>
// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };
// struct ListNode* removeElements(struct ListNode* head, int val) {
//     // Handle the case where the head itself needs to be removed.
//     while (head != NULL && head->val == val) {
//         struct ListNode* temp = head;
//         head = head->next;
//         free(temp);
//     }
//     // Now head is either NULL or does not have the target value.
//     struct ListNode* current = head;
//     while (current != NULL && current->next != NULL) {
//         if (current->next->val == val) {
//             struct ListNode* temp = current->next;
//             current->next = current->next->next;
//             free(temp);
//         } else {
//             current = current->next;
//         }
//     }
//     return head;
// }




// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
// Return the array in the form [x1,y1,x2,y2,...,xn,yn].
// Example 1:
// Input: nums = [2,5,1,3,4,7], n = 3
// Output: [2,3,5,4,1,7] 
// Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
// Example 2:
// Input: nums = [1,2,3,4,4,3,2,1], n = 4
// Output: [1,4,2,3,3,2,4,1]
// Example 3:
// Input: nums = [1,1,2,2], n = 2
// Output: [1,2,1,2]
// Constraints:
// 1 <= n <= 500
// nums.length == 2n
// 1 <= nums[i] <= 10^3


// #include <stdio.h>
// #include <stdlib.h>

// /**
//  * Shuffle the array as described.
//  *
//  * @param nums The input array of size numsSize.
//  * @param numsSize The size of the input array (which is 2 * n).
//  * @param n The integer value representing half the length of the array.
//  * @param returnSize A pointer to an integer where the size of the return array will be stored.
//  * @return A pointer to the shuffled array.
//  */
// int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
//     // Allocate memory for the result array
//     int* result = (int*)malloc(numsSize * sizeof(int));
//     if (result == NULL) {
//         // Handle memory allocation failure
//         return NULL;
//     }
//     // Shuffle the array
//     for (int i = 0; i < n; i++) {
//         result[2 * i] = nums[i];
//         result[2 * i + 1] = nums[n + i];
//     }
//     // Set the return size
//     *returnSize = numsSize;    
//     // Return the result array
//     return result;
// }
// int main() {
//     int nums[] = {2, 5, 1, 3, 4, 7}; // Example input
//     int n = 3;
//     int returnSize;
    
//     // Call the shuffle function
//     int* result = shuffle(nums, 6, n, &returnSize);
    
//     if (result != NULL) {
//         // Print the result
//         printf("Output: [");
//         for (int i = 0; i < returnSize; i++) {
//             printf("%d", result[i]);
//             if (i < returnSize - 1) {
//                 printf(",");
//             }
//         }
//         printf("]\n");

//         // Free the allocated memory
//         free(result);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }






// #include <stdio.h>
// #include <limits.h>
// double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//     // Ensure nums1 is the smaller array
//     if (nums1Size > nums2Size) {
//         return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
//     }

//     int low = 0, high = nums1Size;
//     while (low <= high) {
//         int partition1 = (low + high) / 2;
//         int partition2 = (nums1Size + nums2Size + 1) / 2 - partition1;

//         int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
//         int minRight1 = (partition1 == nums1Size) ? INT_MAX : nums1[partition1];

//         int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
//         int minRight2 = (partition2 == nums2Size) ? INT_MAX : nums2[partition2];

//         if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
//             if ((nums1Size + nums2Size) % 2 == 0) {
//                 return (double)( (maxLeft1 > maxLeft2 ? maxLeft1 : maxLeft2) + 
//                                  (minRight1 < minRight2 ? minRight1 : minRight2) ) / 2;
//             } else {
//                 return (double)(maxLeft1 > maxLeft2 ? maxLeft1 : maxLeft2);
//             }
//         } else if (maxLeft1 > minRight2) {
//             high = partition1 - 1;
//         } else {
//             low = partition1 + 1;
//         }
//     }

//     // If the input arrays are not sorted or the inputs are invalid
//     return -1.0;
// }


// int main() {
//     int nums1[] = {1, 3};
//     int nums2[] = {2};
//     int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
//     int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
//     double median = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
//     printf("Median: %f\n", median);
//     int nums3[] = {1, 2};
//     int nums4[] = {3, 4};
//     nums1Size = sizeof(nums3) / sizeof(nums3[0]);
//     nums2Size = sizeof(nums4) / sizeof(nums4[0]);
//     median = findMedianSortedArrays(nums3, nums1Size, nums4, nums2Size);
//     printf("Median: %f\n", median);
//     return 0;
// }




// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.
// Example 1:
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:
// Input: height = [1,1]
// Output: 1
// Constraints:
// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104
//Bruteforce approach

// #include <stdio.h>
// Function to find the maximum area using brute force
// int maxArea(int* height, int heightSize) {
//     int max_area = 0;

//     // Loop through each pair of lines
//     for (int i = 0; i < heightSize - 1; i++) {
//         for (int j = i + 1; j < heightSize; j++) {
//             // Calculate the area for the current pair of lines
//             int height_min = height[i] < height[j] ? height[i] : height[j];
//             int area = height_min * (j - i);
//             // Update the maximum area found so far
//             if (area > max_area) {
//                 max_area = area;
//             }
//         }
//     }

//     return max_area;
// }
// int main() {
//     int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int heightSize = sizeof(height) / sizeof(height[0]);

//     int max_area = maxArea(height, heightSize);
//     printf("The maximum area of water the container can hold is: %d\n", max_area);
//     return 0;
// }


// #include <stdio.h>
// // Function to find the maximum area using the two-pointer technique
// int maxArea(int* height, int heightSize) {
//     int left = 0;
//     int right = heightSize - 1;
//     int max_area = 0;
//     // Move the pointers towards each other
//     while (left < right) {
//         // Calculate the area with the current left and right pointers
//         int height_min = height[left] < height[right] ? height[left] : height[right];
//         int area = height_min * (right - left);
        
//         // Update the maximum area if the current area is larger
//         if (area > max_area) {
//             max_area = area;
//         }

//         // Move the pointer pointing to the shorter line
//         if (height[left] < height[right]) {
//             left++;
//         } else {
//             right--;
//         }
//     }
//     return max_area;
// }
// int main() {
//     int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int heightSize = sizeof(height) / sizeof(height[0]);
//     int max_area = maxArea(height, heightSize);
//     printf("The maximum area of water the container can hold is: %d\n", max_area);

//     return 0;
// }



// Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.
// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.
// Example 2:
// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
// Constraints:
// The number of nodes in the list is in the range [1, 100].
// 1 <= Node.val <= 100

// #include <stdio.h>
// #include <stdlib.h>
// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };
// // Function to find the middle node and return the second half of the list
// struct ListNode* middleNode(struct ListNode* head) {
//     struct ListNode *slow = head;
//     struct ListNode *fast = head;
//     // Move fast by 2 and slow by 1
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     // Slow will be at the middle node when fast reaches the end
//     return slow;
// }
// // Helper function to print the linked list
// void printList(struct ListNode* head) {
//     while (head != NULL) {
//         printf("%d ", head->val);
//         head = head->next;
//     }
//     printf("\n");
// }
// // Helper function to create a new node
// struct ListNode* createNode(int val) {
//     struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//     newNode->val = val;
//     newNode->next = NULL;
//     return newNode;
// }
// int main() {
//     // Creating the list: [1, 2, 3, 4, 5, 6]
//     struct ListNode* head = createNode(1);
//     head->next = createNode(2);
//     head->next->next = createNode(3);
//     head->next->next->next = createNode(4);
//     head->next->next->next->next = createNode(5);
//     head->next->next->next->next->next = createNode(6);
//     // Find and print the second half of the list
//     struct ListNode* mid = middleNode(head);
//     printList(mid);
//     return 0;
// }




// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
// Note that multiple kids can have the greatest number of candies.
// Example 1:
// Input: candies = [2,3,5,1,3], extraCandies = 3
// Output: [true,true,true,false,true] 
// Explanation: If you give all extraCandies to:
// - Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
// - Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
// - Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
// - Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
// - Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
// Example 2:
// Input: candies = [4,2,1,1,2], extraCandies = 1
// Output: [true,false,false,false,false] 
// Explanation: There is only 1 extra candy.
// Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.
// Example 3:
// Input: candies = [12,1,12], extraCandies = 10
// Output: [true,false,true]
// Constraints:
// n == candies.length
// 2 <= n <= 100
// 1 <= candies[i] <= 100
// 1 <= extraCandies <= 50

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
//     int max_candies = candies[0];
//     // Find the maximum number of candies
//     for (int i = 1; i < candiesSize; i++) {
//         if (candies[i] > max_candies) {
//             max_candies = candies[i];
//         }
//     }
//     // Allocate memory for the result array
//     bool* result = (bool*)malloc(candiesSize * sizeof(bool));
//     if (result == NULL) {
//         // Handle memory allocation failure
//         *returnSize = 0;
//         return NULL;
//     }
//     // Populate the result array
//     for (int i = 0; i < candiesSize; i++) {
//         if (candies[i] + extraCandies >= max_candies) {
//             result[i] = true;
//         } else {
//             result[i] = false;
//         }
//     }
//     // Set the return size
//     *returnSize = candiesSize;
//     // Return the result array
//     return result;
// }

// int main() {
//     int candies[] = {2, 3, 5, 1, 3};
//     int candiesSize = sizeof(candies) / sizeof(candies[0]);
//     int extraCandies = 3;
//     int returnSize;
//     // Call the function
//     bool* result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);
//     // Print the result
//     if (result != NULL) {
//         printf("[");
//         for (int i = 0; i < returnSize; i++) {
//             printf(result[i] ? "true" : "false");
//             if (i < returnSize - 1) {
//                 printf(", ");
//             }
//         }
//         printf("]\n");
//         // Free the allocated memory
//         free(result);
//     }
//     return 0;
// }



// You are given a 0-indexed array of strings words and a character x.
// Return an array of indices representing the words that contain the character x.
// Note that the returned array may be in any order.
// Example 1:
// Input: words = ["leet","code"], x = "e"
// Output: [0,1]
// Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.
// Example 2:
// Input: words = ["abc","bcd","aaaa","cbc"], x = "a"
// Output: [0,2]
// Explanation: "a" occurs in "abc", and "aaaa". Hence, we return indices 0 and 2.
// Example 3:
// Input: words = ["abc","bcd","aaaa","cbc"], x = "z"
// Output: []
// Explanation: "z" does not occur in any of the words. Hence, we return an empty array.
// Constraints:
// 1 <= words.length <= 5;
// 1 <= words[i].length <= 50
// x is a lowercase English letter.
// words[i] consists only of lowercase English letters.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
// int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
//     // Allocate initial memory for the indices array
//     int* indices = (int*)malloc(wordsSize * sizeof(int));
//     if (indices == NULL) {
//         // Handle memory allocation failure
//         *returnSize = 0;
//         return NULL;
//     }
//     *returnSize = 0;  // Initialize the size of the result array
//     // Iterate through the list of words
//     for (int i = 0; i < wordsSize; i++) {
//         // Check if the character x is in the current word
//         if (strchr(words[i], x) != NULL) {
//             indices[*returnSize] = i;  // Store the index
//             (*returnSize)++;  // Increment the size of the result array
//         }
//     }
//     // Reallocate memory to fit the exact number of indices found
//     indices = (int*)realloc(indices, (*returnSize) * sizeof(int));
//     if (indices == NULL) {
//         // Handle memory reallocation failure
//         *returnSize = 0;
//         return NULL;
//     }
//     return indices;
// }
// int main() {
//     char* words[] = {"leet", "code", "example", "testing"};
//     int wordsSize = 4;
//     char x = 'e';
//     int returnSize;
//     int* indices = findWordsContaining(words, wordsSize, x, &returnSize);
//     if (indices != NULL) {
//         printf("Indices of words containing '%c':\n", x);
//         for (int i = 0; i < returnSize; i++) {
//             printf("%d ", indices[i]);
//         }
//         printf("\n");
//         // Free allocated memory
//         free(indices);
//     } else {
//         printf("No indices found or memory allocation failed.\n");
//     }
//     return 0;
// }

// Given the head of a singly linked list, reverse the list, and return the reversed list.
// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Example 2:
// Input: head = [1,2]
// Output: [2,1]
// Example 3:
// Input: head = []
// Output: []
// Constraints:
// The number of nodes in the list is the range [0, 5000].
// -5000 <= Node.val <= 5000

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// struct ListNode* reverseList(struct ListNode* head) {
//     if(head==NULL){
//         return 0;
//     }
//     else{
//         struct ListNode* prevNode=NULL;
//         struct ListNode* currentNode=head;
//         struct ListNode* nextNode;
//         while(currentNode!=NULL){
//             nextNode=currentNode->next;
//             currentNode->next=prevNode;
//             prevNode=currentNode;
//             currentNode=nextNode;
//         }
//         head=prevNode;
//         return head;
//     }
// }



// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
// Return the decimal value of the number in the linked list.
// The most significant bit is at the head of the linked list.
// Example 1:
// Input: head = [1,0,1]
// Output: 5
// Explanation: (101) in base 2 = (5) in base 10
// Example 2:
// Input: head = [0]
// Output: 0
// Constraints:
// The Linked List is not empty.
// Number of nodes will not exceed 30.
// Each node's value is either 0 or 1.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// #include <stdio.h>
// #include <stdlib.h>
// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };
// // Function to calculate the decimal value of the binary number
// int getDecimalValue(struct ListNode* head) {
//     int decimal_value = 0;
//     struct ListNode* current = head;
//     while (current != NULL) {
//         // Shift left (multiply by 2) and add the current node's value
//         decimal_value = (decimal_value * 2) + current->val;
//         current = current->next;
//     }
//     return decimal_value;
// }
// // Helper function to create a new node
// struct ListNode* createNode(int val) {
//     struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//     newNode->val = val;
//     newNode->next = NULL;
//     return newNode;
// }
// int main() {
//     // Creating the linked list [1, 0, 1]
//     struct ListNode* head = createNode(0);
//     head->next = createNode(1);
//     head->next->next = createNode(1);
//     // Calculating the decimal value
//     int result = getDecimalValue(head);
//     printf("Decimal value: %d\n", result);  // Output: 5
//     // Free the allocated memory
//     struct ListNode* current = head;
//     struct ListNode* next;
//     while (current != NULL) {
//         next = current->next;
//         free(current);
//         current = next;
//     }
//     return 0;
// }



// Given the head of a singly linked list, return true if it is a 
// palindrome
//  or false otherwise.
// Example 1:
// Input: head = [1,2,2,1]
// Output: true
// Example 2:
// Input: head = [1,2]
// Output: false
// Constraints:
// The number of nodes in the list is in the range [1, 105].
// 0 <= Node.val <= 9
// Follow up: Could you do it in O(n) time and O(1) space?


// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

// // Helper function to create a new ListNode.
// struct ListNode* createNode(int val) {
//     struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//     newNode->val = val;
//     newNode->next = NULL;
//     return newNode;
// }
// bool isPalindrome(struct ListNode* head) {
//     if (head == NULL || head->next == NULL) {
//         return true; // An empty list or a single-element list is a palindrome.
//     }
//     // Step 1: Find the middle of the linked list using the slow and fast pointers.
//     struct ListNode* slow = head;
//     struct ListNode* fast = head;

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // Step 2: Reverse the second half of the linked list.
//     struct ListNode* prev = NULL;
//     struct ListNode* curr = slow;
//     struct ListNode* next = NULL;

//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }

//     // Now, 'prev' is the head of the reversed second half of the list.

//     // Step 3: Compare the first half and the reversed second half.
//     struct ListNode* firstHalf = head;
//     struct ListNode* secondHalf = prev;

//     while (secondHalf != NULL) {
//         if (firstHalf->val != secondHalf->val) {
//             return false;
//         }
//         firstHalf = firstHalf->next;
//         secondHalf = secondHalf->next;
//     }

//     // The list is a palindrome if all corresponding nodes match.
//     return true;
// }

// // Example usage
// int main() {
//     // Creating the linked list [1,2,2,1]
//     struct ListNode* head = createNode(1);
//     head->next = createNode(2);
//     head->next->next = createNode(2);
//     head->next->next->next = createNode(1);

//     // Check if the linked list is a palindrome
//     if (isPalindrome(head)) {
//         printf("The linked list is a palindrome.\n");
//     } else {
//         printf("The linked list is not a palindrome.\n");
//     }

//     // Free the allocated memory
//     struct ListNode* temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return 0;
// }


// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise.
// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
// Constraints:
// -231 <= x <= 231 - 1
// Follow up: Could you solve it without converting the integer to a string?
// in C 

// #include <stdbool.h>

// bool isPalindrome(int x) {
//     // Step 1: Handle negative numbers and numbers ending in 0
//     if (x < 0 || (x % 10 == 0 && x != 0)) {
//         return false;
//     }

//     int reversedHalf = 0;

//     // Step 2: Reverse the second half of the number
//     while (x > reversedHalf) {
//         reversedHalf = reversedHalf * 10 + x % 10;
//         x /= 10;
//     }

//     // Step 3: Compare the first half and the reversed second half
//     return x == reversedHalf || x == reversedHalf / 10;
// }

// // Example usage
// #include <stdio.h>

// int main() {
//     int x = 121;

//     if (isPalindrome(x)) {
//         printf("%d is a palindrome.\n", x);
//     } else {
//         printf("%d is not a palindrome.\n", x);
//     }

//     return 0;
// }




// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
// Example 1:
// Input: head = [1,1,2]
// Output: [1,2]
// Example 2:
// Input: head = [1,1,2,3,3]
// Output: [1,2,3]
// Constraints:
// The number of nodes in the list is in the range [0, 300].
// -100 <= Node.val <= 100
// The list is guaranteed to be sorted in ascending order.
// in C

// #include <stdio.h>
// #include <stdlib.h>
// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };
// // Function to delete duplicates in a sorted linked list
// struct ListNode* deleteDuplicates(struct ListNode* head) {
//     struct ListNode* current = head;
//     while (current != NULL && current->next != NULL) {
//         if (current->val == current->next->val) {
//             struct ListNode* temp = current->next;
//             current->next = current->next->next;
//             free(temp);  // Free the memory of the duplicate node
//         } else {
//             current = current->next;
//         }
//     }
//     return head;
// }
// // Function to create a new node
// struct ListNode* newNode(int val) {
//     struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
//     node->val = val;
//     node->next = NULL;
//     return node;
// }
// // Function to print the linked list
// void printList(struct ListNode* head) {
//     struct ListNode* temp = head;
//     while (temp != NULL) {
//         printf("%d ", temp->val);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// // Example usage
// int main() {
//     // Creating the linked list [1, 3, 3, 3, 3]
//     struct ListNode* head = newNode(1);
//     head->next = newNode(3);
//     head->next->next = newNode(3);
//     head->next->next->next = newNode(3);
//     head->next->next->next->next = newNode(3);
//     printf("Original list: ");
//     printList(head);
//     // Deleting duplicates
//     head = deleteDuplicates(head);
//     printf("List after removing duplicates: ");
//     printList(head);
//     // Free the remaining nodes
//     struct ListNode* temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return 0;
// }









// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
// Example 1:
// Input: s = "()"
// Output: true
// Example 2:
// Input: s = "()[]{}"
// Output: true
// Example 3:
// Input: s = "(]"
// Output: false
// Example 4:
// Input: s = "([])"
// Output: true
// Constraints:
// 1 <= s.length <= 10 power 4=10000
// s consists of parentheses only '()[]{}'.

// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// bool isValid(char* s) {
//     char stack[10000];
//     int top = -1;
//     while(*s) {
//         switch (*s) {
//             case '(':
//             case '{':
//             case '[':
//                 stack[++top] = *s;
//                 break;
//             case ')':
//                 if (top > -1 && stack[top] == '(')
//                     top--;
//                 else
//                     return false;
//                 break;
//             case '}':
//                 if (top > -1 && stack[top] == '{')
//                     top--;
//                 else
//                     return false;
//                 break;
//             case ']':
//                 if (top > -1 && stack[top] == '[')
//                     top--;
//                 else
//                     return false;
//                 break;
//             default:
//                 return false;
//         } 
//         s++;
//     }
//     return top == -1;
// }
// int main() {
//     char s1[] = "()";
//     char s2[] = "()[]{}";
//     char s3[] = "(]";
//     char s4[] = "([])";
//     printf("Is valid? %s -> %s\n", s1, isValid(s1) ? "true" : "false");
//     printf("Is valid? %s -> %s\n", s2, isValid(s2) ? "true" : "false");
//     printf("Is valid? %s -> %s\n", s3, isValid(s3) ? "true" : "false");
//     printf("Is valid? %s -> %s\n", s4, isValid(s4) ? "true" : "false");
//     return 0;
// }





// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
// Return the answer in an array.
// Example 1:
// Input: nums = [8,1,2,2,3]
// Output: [4,0,1,1,3]
// Explanation: 
// For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
// For nums[1]=1 does not exist any smaller number than it.
// For nums[2]=2 there exist one smaller number than it (1). 
// For nums[3]=2 there exist one smaller number than it (1). 
// For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
// Example 2:
// Input: nums = [6,5,4,8]
// Output: [2,1,0,3]
// Example 3:
// Input: nums = [7,7,7,7]
// Output: [0,0,0,0]
// Constraints:
// 2 <= nums.length <= 500
// 0 <= nums[i] <= 100

// #include <stdio.h>
// #include <stdlib.h>
// int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
//     *returnSize = numsSize;
//     int* result = (int*)malloc(numsSize * sizeof(int));

//     for (int i = 0; i < numsSize; i++) {
//         int count = 0;
//         for (int j = 0; j < numsSize; j++) {
//             if (nums[j] < nums[i] && j != i) {
//                 count++;
//             }
//         }
//         result[i] = count;
//     }
//     return result;
// }
// int main() {
//     int nums[] = {8, 1, 2, 2, 3};
//     int numsSize = sizeof(nums) / sizeof(nums[0]);
//     int returnSize;
//     int* result = smallerNumbersThanCurrent(nums, numsSize, &returnSize);
//     printf("Output: [");
//     for (int i = 0; i < returnSize; i++) {
//         printf("%d", result[i]);
//         if (i < returnSize - 1) {
//             printf(", ");
//         }
//     }
//     printf("]\n");
//     free(result);  
//     return 0;
// }


// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
// Example 1:
// Input: s = "Hello"
// Output: "hello"
// Example 2:
// Input: s = "here"
// Output: "here"
// Example 3:
// Input: s = "LOVELY"
// Output: "lovely"
// Constraints:
// 1 <= s.length <= 100
// s consists of printable ASCII characters.


// #include <stdio.h>
// void toLowercase(char *s) {
//     for (int i = 0; s[i] != '\0'; i++) {
//         // Check if the character is an uppercase letter
//         if (s[i] >= 'A' && s[i] <= 'Z') {
//             s[i] = s[i] + 32;
//         }
//     }
// }
// int main() {
//     char s1[] = "Hello";
//     char s2[] = "here";
//     char s3[] = "LOVELY";
//     toLowercase(s1);
//     toLowercase(s2);
//     toLowercase(s3);
//     printf("%s\n", s1);  // Output: hello
//     printf("%s\n", s2);  // Output: here
//     printf("%s\n", s3);  // Output: lovely
//     return 0;
// }



// You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.
// You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:
// An integer x.
// Record a new score of x.
// '+'.
// Record a new score that is the sum of the previous two scores.
// 'D'.
// Record a new score that is the double of the previous score.
// 'C'.
// Invalidate the previous score, removing it from the record.
// Return the sum of all the scores on the record after applying all the operations.
// The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.
// Example 1:
// Input: ops = ["5","2","C","D","+"]
// Output: 30
// Explanation:
// "5" - Add 5 to the record, record is now [5].
// "2" - Add 2 to the record, record is now [5, 2].
// "C" - Invalidate and remove the previous score, record is now [5].
// "D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
// "+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
// The total sum is 5 + 10 + 15 = 30.
// Example 2:
// Input: ops = ["5","-2","4","C","D","9","+","+"]
// Output: 27
// Explanation:
// "5" - Add 5 to the record, record is now [5].
// "-2" - Add -2 to the record, record is now [5, -2].
// "4" - Add 4 to the record, record is now [5, -2, 4].
// "C" - Invalidate and remove the previous score, record is now [5, -2].
// "D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
// "9" - Add 9 to the record, record is now [5, -2, -4, 9].
// "+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
// "+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
// The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
// Example 3:
// Input: ops = ["1","C"]
// Output: 0
// Explanation:
// "1" - Add 1 to the record, record is now [1].
// "C" - Invalidate and remove the previous score, record is now [].
// Since the record is empty, the total sum is 0.
// Constraints:
// 1 <= operations.length <= 1000
// operations[i] is "C", "D", "+", or a string representing an integer in the range [-3 * 104, 3 * 104].
// For operation "+", there will always be at least two previous scores on the record.
// For operations "C" and "D", there will always be at least one previous score on the record.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int calPoints(char **ops, int opsSize) {
//     int record[1000];  // Array to store the scores
//     int top = -1;      // Points to the last valid score in the record
//     int sum = 0;       // To keep the sum of all scores
    
//     for (int i = 0; i < opsSize; i++) {
//         if (strcmp(ops[i], "C") == 0) {
//             sum -= record[top];
//             top--;  // Remove the last score
//         } else if (strcmp(ops[i], "D") == 0) {
//             record[top + 1] = 2 * record[top];  // Double the last score
//             top++;  // Now increment top to point to the new score
//             sum += record[top];
//         } else if (strcmp(ops[i], "+") == 0) {
//             record[top + 1] = record[top] + record[top - 1];  // Sum of the last two scores
//             top++;  // Now increment top to point to the new score
//             sum += record[top];
//         } else {
//             record[++top] = atoi(ops[i]);  // Convert the string to an integer and add to record
//             sum += record[top];
//         }
//     }
//     return sum;
// }

// int main() {
//     char *ops1[] = {"5","2","C","D","+"};
//     int size1 = sizeof(ops1) / sizeof(ops1[0]);
//     printf("Output: %d\n", calPoints(ops1, size1));  // Output: 30

//     char *ops2[] = {"5","-2","4","C","D","9","+","+"};
//     int size2 = sizeof(ops2) / sizeof(ops2[0]);
//     printf("Output: %d\n", calPoints(ops2, size2));  // Output: 27

//     char *ops3[] = {"1","C"};
//     int size3 = sizeof(ops3) / sizeof(ops3[0]);
//     printf("Output: %d\n", calPoints(ops3, size3));  // Output: 0

//     return 0;
// }




// You are given an integer n and an integer start.
// Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.
// Return the bitwise XOR of all elements of nums.
// Example 1:
// Input: n = 5, start = 0
// Output: 8
// Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
// Where "^" corresponds to bitwise XOR operator.
// Example 2:
// Input: n = 4, start = 3
// Output: 8
// Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
// Constraints:
// 1 <= n <= 1000
// 0 <= start <= 1000
// n == nums.length

// int xorOperation(int n, int start) {
//     int result = start;  // Initialize the result with the first element
//     for (int i = 1; i < n; i++) {  // Start from i = 1 since start is already used
//         result ^= (start + 2 * i);  // XOR the current result with the next element
//     }
//     return result;  // Return the final XOR result
// }



// You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
// Return the score of s.
// Example 1:
// Input: s = "hello"
// Output: 13
// Explanation:
// The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.
// Example 2:
// Input: s = "zaz"
// Output: 50
// Explanation:
// The ASCII values of the characters in s are: 'z' = 122, 'a' = 97. So, the score of s would be |122 - 97| + |97 - 122| = 25 + 25 = 50.
// Constraints:
// 2 <= s.length <= 100
// s consists only of lowercase English letters.
// in C

// #include <stdio.h>
// #include <stdlib.h>
// int calculateScore(char *s) {
//     int score = 0;   
//     for (int i = 1; s[i] != '\0'; i++) {
//         score += abs(s[i] - s[i-1]);
//     }
    
//     return score;
// }
// int main() {
//     char s1[] = "hello";
//     char s2[] = "zaz";
//     printf("Score of '%s': %d\n", s1, calculateScore(s1));
//     printf("Score of '%s': %d\n", s2, calculateScore(s2));
//     return 0;
// }

