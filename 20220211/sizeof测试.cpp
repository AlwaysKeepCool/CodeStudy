
int main()
{
	int a = -10;
	int* p = NULL;
	printf("%d\n", !2);
	printf("%d\n", !0);
	a = -a;
	p = &a;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//����д�в��У� yes
	//printf("%d\n", sizeof int);//����д�в��У�  no
	return 0;
}








int main()
{
	int a = 3;
	int b = 4;
	int s = 0;
	printf("%d\n", sizeof(s = a + 3));
	printf("%d\n", s);
	return 0;
}
