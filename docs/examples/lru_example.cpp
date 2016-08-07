#include "lru_cache.h"
#include <string>
#include <iostream>

int main(void) {
	// Typedef our template for easy of readability and use.
	typedef LRUCache<int,std::string> string_cache_t;
	
	// Instantiate a string cache with at most three elements.
	string_cache_t *cache = new string_cache_t(3);
	
	// Insert data into the cache.
	std::string quote_1 = "Number is the within of all things. -Pythagoras";
	cache->insert( 4, quote_1 );

	// Fetch it out.
	std::cout << cache->fetch( 4 ) << std::endl;	
}
