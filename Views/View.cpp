#include"../Controllers/Control.h"
#include"../Controllers/Converter.h"

int main(){
    int total, cure;
    scanf("%d %d", &total, &cure);
    getchar();
    int dd, yy, mm, res = cure - total;
    char month[20], name[255];
    for(int i = 0; i<total; i++){
        scanf("%d %s %d - %[^\n]", &dd, month, &yy, name);
        getchar();
        mm = monthConverter(month);
        Data *temp = createData(dd, mm, yy, month, name);
        pushPQ(temp);

    }
    while(cure--){
        popTail();
    }
    if(total<=cure) printf("All patients get the cure, %d cure left", res);
    else{
        res = res * -1;
        printf("Need %d more cure\n", res);
        printAll();
    }
    return 0;
}