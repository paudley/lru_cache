instdir=$(includedir)
inst_HEADERS = lru_cache.h

# unit tests
TESTS = unit_lru_cache
noinst_PROGRAMS = unit_lru_cache
CLEANFILES = lru_cache_unit.cpp

%_unit.cpp: %.cpp %.h unit_test.h
	$(CXX) -E -o $*_unit.cpp $*.cpp @CFLAGS@ @LDFLAGS@ -DSTATS=1 -DDEBUG=1 -DUNITTEST=1 -lstdc++

unit_lru_cache_SOURCES = lru_cache_unit.cpp
