#include <stdio.h>
#include <stdlib.h>
struct Node
{

    int data;
    int priority;
    struct Node *next;
};
struct Node *head = NULL;

int count()
{
    int cnt = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
struct Node *createNode(int data, int pri)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->priority = pri;
    node->next = NULL;
}
void addNode(int data, int pri)
{
    struct Node *node = createNode(data, pri);
    if (head == NULL)
        head = node;
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = node;
    }
}
void addFirst(int data, int pri)
{
    struct Node *node = createNode(data, pri);
    node->next = head;
    head = node;
}
int addAtPos(int pos, int data, int pri)
{
    int cnt = count();
    if (pos <= 0 || pos > cnt)
        return -1;
    else
    {
        if (pos == 1)
            addFirst(data, pri);
        else if (pos == cnt + 1)
            addNode(data, pri);
        else
        {
            struct Node *node = createNode(data, pri);
            struct Node *temp = head;
            while (pos - 2)
            {
                pos--;
                temp = temp->next;
            }
            node->next = temp->next;
            temp->next = node;
        }
        return 0;
    }
}
void sortLL()
{
    int x, pri;
    printf("Enter the priiority\n");
    scanf("%d", &pri);
    printf("Enter the data\n");
    scanf("%d", &x);
    struct Node *temp = head;
    int cnt = 1;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->priority < pri)
        {
            addAtPos(cnt, x, pri);
            flag = 1;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    if (flag == 0)
        addNode(x, pri);
}
void printLL()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("|%d |", temp->data);
        temp = temp->next;
    }
}
void main()
{
    sortLL();
    sortLL();
    sortLL();
    sortLL();
    printLL();
}
