//stu��pStu�Ĵ�ֵ��ʽ��ͬ
struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};

void set_age1(struct Stu stu)
{
	stu.age = 18;
}

void set_age2(struct Stu* pStu)
{
	pStu->age = 18;//�ṹ��Ա����
}

int main()
{
	struct Stu stu;
	struct Stu* pStu = &stu;//�ṹ��Ա����
	stu.age = 20;//�ṹ��Ա����
	set_age1(stu);
	printf("set_aga1��ageΪ:%d\n", stu.age);//20
	pStu->age = 20;//�ṹ��Ա����
	printf("pStu->age��ageΪ:%d\n", pStu->age);//20
	set_age2(pStu);
	printf("set_age2��ageΪ:%d\n", pStu->age);//18
	return 0;
}
