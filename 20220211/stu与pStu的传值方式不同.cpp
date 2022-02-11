//stu与pStu的传值方式不同
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
	pStu->age = 18;//结构成员访问
}

int main()
{
	struct Stu stu;
	struct Stu* pStu = &stu;//结构成员访问
	stu.age = 20;//结构成员访问
	set_age1(stu);
	printf("set_aga1的age为:%d\n", stu.age);//20
	pStu->age = 20;//结构成员访问
	printf("pStu->age的age为:%d\n", pStu->age);//20
	set_age2(pStu);
	printf("set_age2的age为:%d\n", pStu->age);//18
	return 0;
}
