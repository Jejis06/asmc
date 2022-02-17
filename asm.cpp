#include <iostream>
#include <string.h>
int main(int argc,char* gg[])
{
    std::string name = gg[argc-1];
    std::string preserved = "";
    for (int i=0 ; i<name.size()-4;i++){
        preserved+=name[i];
    }
    std::string compile = "nasm -f bin "+name+" -o "+preserved+".bin";
    std::string run = "qemu-system-x86_64 "+preserved+".bin";

    
    system(compile.c_str());
    system(run.c_str());
    

    

}
//nasm -f bin boot.asm -o boot.bin
//qemu-system-x86_64 boot.bin
