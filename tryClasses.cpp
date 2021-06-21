#include "tryClasses.h"
#include "catchClasses.h"

OpenTheFile::OpenTheFile(){throw FileOpenFailed("failed to open file");}
DetermineItsSize::DetermineItsSize(){throw SizeDeterminationFailed("failed to determine size");}
AllocateThatMuchMemory::AllocateThatMuchMemory(){throw MemoryAllocationFailed("failed to allocate memory");}
ReadTheFileIntoMemory::ReadTheFileIntoMemory(){throw ReadFailed("failed to read file into memory");}
CloseTheFile::CloseTheFile(){throw FileCloseFailed("failed to close file");}