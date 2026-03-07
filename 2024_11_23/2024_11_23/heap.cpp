#include"heap.h"

void HPInit(heap* php)
{
	php->capacity = 0;
	php->size = 0;
	php->arr = NULL;
}

void HPDestroy(heap* php) {
	php->capacity = 0;
	php->size = 0;
	if (php->arr)
		free(php->arr);
	php->arr = NULL;
}

void swap(HPDataType&x,HPDataType&y)
{
	HPDataType z;
	z = x;
	x = y;
	y = z;
}

void AdjustUp(HPDataType*arr,int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] < arr[parent])
		{
			swap(arr[child], arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
			
		
	}
}

void HPPush(heap* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapicity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HPDataType* tmp = (HPDataType*)realloc(php->arr,newcapicity);
		if (tmp == NULL)
		{
			perror("realloc fail!\n");
			exit(1);
		}
		php->arr = tmp;
		php->capacity = newcapicity;
	}
	php->arr[php->size] = x;
	AdjustUp(php->arr, php->size);
	php->size++;
}