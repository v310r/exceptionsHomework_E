#include "tryClasses.h"
#include "catchClasses.h"

#define errorCode int
#define openFile 1
#define sizeHasBeenDetermined 1
#define memoryAllocated 1
#define fileHasBeenRead 1
#define fileClosed 1

// It's just a simple example with meaningless implementation
errorCode read_file(){
    errorCode error = 0;
    if(openFile){
        //...
        if(sizeHasBeenDetermined){
            //...
            if(memoryAllocated){
                //...
                if(fileHasBeenRead){
                    //...
                    if(fileClosed){
                        //...
                    }
                    else{
                        error = -5;
                    }
                }
                else{
                    error = -4;
                }        
            }
            else{
                error = -3;
            }
        }
        else{
            error = -2;
        }
    }
    else{
        error = -1;
    }
    return error;
}

int main(){
    //CAUTION!!! each of these classes will throw an exception in constructors forcefully
    try{
        OpenTheFile throwOpenTheFile;
        DetermineItsSize throwDetermineItsSize;
        AllocateThatMuchMemory throwAllocateThatMuchMemory;
        ReadTheFileIntoMemory throwReadTheFileIntoMemory;
        CloseTheFile throwCloseTheFile;
    }catch(const std::exception& ex){
        std::cout<<"Exception example: "<<ex.what()<<"\n";
    }

    //errorCode example
    int result = read_file();
    std::cout<<"errorCode example: "<<result<<'\n';

}