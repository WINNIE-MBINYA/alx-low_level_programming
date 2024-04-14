#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/**
 * linear_search - searches for a value in an array of integers using linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if array is NULL
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - searches for a value in a sorted array of integers using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value);

/**
 * _binary_search - recursively searches for a value in a sorted array of integers using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left index of the sub-array to search in
 * @right: right index of the sub-array to search in
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if not found
 */
int _binary_search(int *array, size_t left, size_t right, int value);

/**
 * jump_search - searches for a value in a sorted array of integers using jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value);

/**
 * interpolation_search - searches for a value in a sorted array of integers using interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers using exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value);

/**
 * advanced_binary_recursive - recursively searches for a value in a sorted array of integers using advanced binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left index of the sub-array to search in
 * @right: right index of the sub-array to search in
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - searches for a value in a sorted array of integers using advanced binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in array, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value);

/**
 * jump_list - searches for a value in a singly linked list using jump search algorithm
 * @list: pointer to the head of the list
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * linear_skip - searches for a value in a singly linked list with an express lane
 * @list: pointer to the head of the list
 * @value: value to search for
 *
 * Return: pointer to the node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
