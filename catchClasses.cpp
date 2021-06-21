#include "catchClasses.h"

FileOpenFailed::FileOpenFailed(const std::string& message){
    this->message = message;
}
const char* FileOpenFailed::what()const noexcept{
    return message.data();
}

SizeDeterminationFailed::SizeDeterminationFailed(const std::string& message){
    this->message = message;
}
const char*  SizeDeterminationFailed::what()const noexcept{
    return message.data();
}

MemoryAllocationFailed::MemoryAllocationFailed(const std::string& message){
    this->message = message;
}
const char* MemoryAllocationFailed::what()const noexcept{
    return message.data();
}

ReadFailed::ReadFailed(const std::string& message){
    this->message = message;
}
const char* ReadFailed::what()const noexcept{
    return message.data();
}

FileCloseFailed::FileCloseFailed(const std::string& message){
    this->message = message;
}
const char* FileCloseFailed::what()const noexcept{
    return message.data();
}