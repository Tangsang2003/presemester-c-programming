/*
 * memoryallocator.h
 *
 *  Created on: Sep 9, 2026
 *      Author: Tangsang Chongbang
 */

#ifndef MEMORYALLOCATOR_H_
#define MEMORYALLOCATOR_H_

#include <stddef.h>

/**
 * Will allocate the memory of specified bytes, prints the location and frees the allocated memory
 *
 * \param size				:[IN] size to be allocated
 */
void memory_allocator(size_t size);

#endif /* MEMORYALLOCATOR_H_ */
