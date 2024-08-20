/// Quality control process : determines the count of meassurements falling outside the range

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i=0; i < n; i++){
        scanf("%d", &array[i]);
    }
    int lower_limit, upper_limit;
    scanf("%d %d", &lower_limit, &upper_limit);

    int outside_range_count = 0;
    for (int i = 0; i < n; i++){
        if (array[i] < lower_limit || array[i] > upper_limit){
            outside_range_count++;
        }
    }
    printf("%d\n", outside_range_count);
    return 0;
}
