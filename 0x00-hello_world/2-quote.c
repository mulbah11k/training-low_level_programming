#include <unistd.h>

int main(){
    const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, quote, 5);
    return 1;
}
