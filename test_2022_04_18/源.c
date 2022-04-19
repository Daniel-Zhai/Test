#define _CRT_SECURE_NO_WARNINGS

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define Maxsize 100
typedef int status;


//汉诺塔__后进先出——栈
typedef struct {
	int* top;
	int* base;
	int stacksize;
}SqStack;

status InitStack(SqStack* S)
{
	S->base = (int*)malloc(Maxsize * sizeof(int));
	if (!S->base)return OVERFLOW;
	S->top = S->base;
	S->stacksize = Maxsize;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	SqStack A;
	SqStack B;
	SqStack C;

	int ret = InitStack(&A);

	return 0;
}