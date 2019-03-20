#include<stdio.h> 
#include<stdlib.h> 
typedef struct list 
    {//Node 생성 
    int data; 
    struct list *link; 
    }
Node, *pNode; 
Node *talloc(void) 
    {//구조체의 동적할당 
    return (Node *)malloc(sizeof(Node)); 
    } 
void main() 
    { pNode head, p, tail;//head:데이터의 시작, p:진행중인 데이터, tail:데이터의 마지막 
     head = talloc();//head생성 
     scanf("%d", &head->data);//head의 데이터를 넣음 
     tail = head;//head가 마지막 데이터임 
     while(p=talloc(), scanf("%d", &p->data)!=EOF ) 
         {// ctrl + z 가 나오기 전까직 데이터를 입력받음 
         tail->link = p;//마지막 데이터와 새로운 데이터를 연결해줌 
         tail=p;//새로운 데이터가 마지막 데이터가 됨 
         } tail->link=NULL;//마지막 데이터가 가르키는 link는 없음 
     p = head;//처음부터 탐색하기 위해 p를 head로 둠 
     while (p != NULL) 
         {//진행중인 데이터가 마지막이 아닐때 까직 while문을 돌림 
         printf("%d\n", p->data);//데이터를 출력함 
         p = p->link;//진행중인 데이터가 가르키는 link로 이동(다음데이터로 이동) 
     } 
    }