/*
 * memoryallocator.cpp
 *
 *  Created on: Sep 9, 2026
 *      Author: Tangsang Chongbang
 */

#include <stdio.h>
#include <stdlib.h>
#include "memoryallocator.h"

void memory_allocator(size_t size) {
	void *ptr = malloc(size);

	if (ptr == NULL) {
		printf("Failed to allocate %zu bytes\n", size);
		return;
	}
	printf("Allocated %zu bytes at %p\n", size, ptr);
	free(ptr);
}
