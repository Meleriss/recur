#include <stdio.h>

//int sum_array_rec(int *arr, int num)
//{
//	if (num == -1) {
//		return 0;
//	}
//	return (arr[num - 1] + sum_array_rec(arr, num - 1));
//}

int sum_array_iter(int *arr, int num, int count)
{
	if (num == 0) {
		return count;
	}
	count += arr[num - 1];
	return (sum_array_iter(arr, num - 1, count));
}

//int fibonacci_rec(int num)
//{
//	if (num == 0 || num == -1) {
//		return 1;
//	}
//	if ((num == 0) || (num == 1)) {
//		return 1;
//	}
//	return (fibonacci_rec(num - 2) + fibonacci_rec(num - 1));
//}

int fibonacci_iter_n(int num, int result, int count, int p_result)
{
	if (count > num) {
		return result;
	}
	if (count > 1) {
		return fibonacci_iter_n(num, result + p_result, count + 1, result);
	}
	return -1;
}

int fibonacci_iter(int num)
{
	return fibonacci_iter_n(num, 1, 2, 1);
}

void int_to_str(int number, char a[])
{
	int i, sign;
	
	if((sign = number) < 0)
		n = -n;

}

int main(){
	int num = 5;
	int arr[5] = {1, 2, 3, 4, 5};
	printf("Массив:\n");
	for (int i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}

	//printf("\nСумма рекурсивным процессом = %d\n", sum_array_rec(arr, num));
	int count = 0;
	printf("Сумма итеративным процессом = %d\n", sum_array_iter(arr, num, count));

	//printf("\nЧисла Фибоначчи рекурсивным процессом:\n");
	//	for (int i = 0; i < 5; i++){
	//		printf("%d ", fibonacci_rec(arr[i]));
	//	}
	printf("\nЧисла Фибоначчи итеративным процессом:\n");
		for (int i = 0; i < 5; i++){
			printf("%d ", fibonacci_iter(arr[i]));
		}
	printf("\n");
return 0;
}
