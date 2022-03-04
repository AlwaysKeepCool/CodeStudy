#include"queue.h"

void TestLinkQueue()
{
	LinkQueue q;
	LinkQueueInit(&q);
	LinkQueueEn(&q,1);
	LinkQueueEn(&q, 2);
	LinkQueueEn(&q, 3);
	LinkQueueEn(&q, 4);
	LinkQueueEn(&q, 5);
	LinkQueueEn(&q, 6);
	LinkQueueShow(&q);

	LinkQueueDe(&q);
	LinkQueueShow(&q);

	while (!LinkQueueEmpty(&q))
	{
		printf("%d ³ö¶Ó¡£\n", LinkQueueFront(&q));
		LinkQueueDe(&q);
	}

	//LinkQueueDestroy(&q);
}


int main()
{
	TestLinkQueue();
	return 0;
}