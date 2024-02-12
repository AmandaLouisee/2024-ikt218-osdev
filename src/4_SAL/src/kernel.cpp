extern "C"{
    #include "../include/gdt.h"
    }

extern "C" int kernel_main(void);
int kernel_main(){
    init_descriptor_tables();
    return 0;
}