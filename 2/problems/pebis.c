
#define MAX_NUM 32


int main(void) {

    int people = 20;
    
    if (people < MAX_NUM) {
        printf("Youre ok");
    } else if (people == MAX_NUM) {
        printf("Cutting it close");
    } else {
        printf("Youve got too many people");
    }
    
    return 0;
}
