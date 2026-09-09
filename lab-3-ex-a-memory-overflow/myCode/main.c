#include "memoryallocator.h"

int main()
{

	for (int i = 1; i <= 100; i++) {
		memory_allocator(i * 1024);
	}
	return 0;
}
