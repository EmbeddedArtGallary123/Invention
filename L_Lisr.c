#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *link;
};
struct node *head = NULL;//global variable

void create_list()
{
    int n,i,data;
    printf("no of nodes:");
    scanf("%d\n", &n);
    printf("no of nodes:%d\n",n);
    for (i = 0; i < n; i++)
    {
        struct node * pnew;
        pnew = (struct node*)malloc(sizeof(struct node));
        
        scanf("%d", &pnew->val);
        
        if(head == NULL)
        {
            head = pnew;
            printf("node- %d = %d\n",i ,pnew->val);
        }
        else 
        {            
            struct node *tmp;
            
            tmp = head;
            while(tmp->link != NULL)
            {
                tmp = tmp->link;
                
            }
            printf("node- %d = %d\n",i ,pnew->val);
            tmp->link = pnew;
        }
    }
}

void length_list()
{
    struct node *len = head;
    int count = 0;
    
    while(len != NULL)
    {
        len =len->link;
        ++count;
    }
    printf("count is - %d", count);
}
int main() {
   
   create_list();
   length_list();
    return 0;
}


//reverse logic
struct node *phead, *Ptrave, *Prev;

phead = head node ;

while (phead != NULL)
{
	ptrave = phead -> nxt;
	phead -> nxt = prev;
	prev = phead;
	phead = ptrave;
}
