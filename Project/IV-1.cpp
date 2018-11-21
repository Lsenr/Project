//#include<stdio.h>
//int main()
//{
//	int num, sum = 0;
//	for (int i=1; ; i++) {
//		scanf("%d", &num);
//		if (num % 2 != 0)
//			sum += num;
//		if ((num == 0 || num < 0) && num % 2 != 0) {
//			sum = sum - num;
//			break;
//		}
//		if ((num == 0 || num < 0) && num % 2 == 0)
//			break;
//	}
//	printf("%d", sum);
//	return 0;
//}


//第二种优化版~~~~~


//#include<stdio.h>
//int main()
//{
//	int num, sum = 0;
//	for (int i = 1; ; i++)
//	{
//		scanf("%d", &num);
//		if (num == 0 || num < 0)
//		{
//			break;
//		}
//		if (num % 2 != 0)
//			sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}
