#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h" 
//��ջ

//��ʼ��ջ
Status initLStack(LinkStack* s)
{
	if (s == NULL)
	{
		return ERROR;
	}
	s->top = NULL;
	s->count = 0;
	return SUCCESS;
}

//�ж�ջ�Ƿ�Ϊ��
Status isEmptyLStack(LinkStack* s)
{
	//if (s == NULL)
	//{
	//	return ERROR;
	//}
	//if (s->count == 0)
	//	printf("����Ϊ��\n");
	//else
	//	printf("����Ϊ��\n");
	//return SUCCESS;

	if (s->count == 0)
		 return ERROR;
	else
		return SUCCESS;
};

//�õ�ջ��Ԫ��
Status getTopLStack(LinkStack* s, ElemType* e)
{
	if (s == NULL || s->top == NULL)
	{
		return ERROR;
	}
	*e = s->top->data;
	return SUCCESS;
}

//���ջ
Status clearLStack(LinkStack* s)
{
	if (s == NULL)
	{
		return ERROR;
	}
	LinkStackPtr p;
	while (s->count)
	{
		p = s->top;
		s->top = p->next;
		free(p);
		s->count--;
	}
	return SUCCESS;
}

//����ջ
Status destroyLStack(LinkStack* s)
{
	if (s == NULL)
	{
		return ERROR;
	}
	clearLStack(s);
	//free(s);
	return SUCCESS;
}

//���ջ����
Status LStackLength(LinkStack* s, ElemType* length)
{
	if (s == NULL)
	{
		return ERROR;
	}
	length = s->count;
	return SUCCESS;
}

//��ջ
Status pushLStack(LinkStack* s, ElemType data)
{
	if (s == NULL)
	{
		return ERROR;
	}
	LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
	if (p)
	{
		p->next = s->top;
		s->top = p;
		p->data = data;
		s->count++;
		return SUCCESS;
	}
	else
	{
		return ERROR;
	}
}

//��ջ
Status popLStack(LinkStack* s, ElemType* data)
{
	if (s == NULL || s->top == NULL)
	{
		return ERROR;
	}
	LinkStackPtr p = s->top;
	*data = p->data;
	s->top = p->next;
	free(p);
	s->count--;
	return SUCCESS;
}

