#include <iostream>

class FileOpenFailed: public std::exception
{
private:
    std::string message;
public:

    FileOpenFailed(const std::string& message);
    const char* what()const noexcept override;
};

class SizeDeterminationFailed: public std::exception
{
private:
    std::string message;
public:

    SizeDeterminationFailed(const std::string& message);
    const char* what()const noexcept override;
};

class MemoryAllocationFailed: public std::exception
{
private:
    std::string message;
public:

    MemoryAllocationFailed(const std::string& message);
    const char* what()const noexcept override;
};

class ReadFailed: public std::exception
{
private:
    std::string message;
public:

    ReadFailed(const std::string& message);
    const char* what()const noexcept override;
};

class FileCloseFailed: public std::exception
{
private:
    std::string message;
public:

    FileCloseFailed(const std::string& message);
    const char* what()const noexcept override;
};