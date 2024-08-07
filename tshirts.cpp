#include <iostream>
#include <assert.h>
#include <string>

std::string size(int cms) {
    if(cms < 38) {
        return "S";
    } else if(cms >= 38 && cms < 42) {
         return "M";
    } else if(cms >= 42) {
         return "L";
    }
    return "Invalid size";
}

void testTshirtSizes(){
    assert(size(35) == "S");
    assert(size(37) == "S");
    assert(size(39) == "M");
    assert(size(41) == "M");
    assert(size(43) == "L");
    assert(size(45) == "L");
    assert(size(0) == "Invalid size");
}

int main() {
    testTshirtSizes();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
