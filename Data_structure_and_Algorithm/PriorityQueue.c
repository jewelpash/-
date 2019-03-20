int main(void) 
{
  int data;
  int n = 5;
  priorityQueue root;
  root.count = 0;

  push(&root, 10);
  push(&root, 20);
  push(&root, 30);
  push(&root, 40);
  push(&root, 50);
  // PUSH 로 차례로 10 20 30 40 50 값을 추가했습니다.

  for(int i = 0; i < n; i++) 
  {
    int data = pop(&root);
    // POP 맨 처음값을 하나씩 추출하여 값을 출력하도록 합니다.
    
    printf("%d ", data);
    // 값을 출력 합니다.
  }
  
  system("pause");
  return 0;
}