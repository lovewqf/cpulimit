#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
    struct _stat st;
    if (_stat("cpulimit.c", &st) != 0) {
        perror("stat");
        return 1;
    }
    printf("File size: %lld bytes\n", st.st_size);
    return 0;
}
