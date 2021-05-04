
#include "main.h"

static void* thread_func(void* params) {
    return (void*)NULL;
}

int main(int argc, char** argv) {
    pthread_t thr;
    int ret = 0;
    ret = pthread_create(&thr, NULL, thread_func, NULL);
    if (ret != 0) {
        printf("thread create failed.\n");
        return 0;
    }

    ret = pthread_join(thr, NULL);
    if (ret != 0) {
        printf("thread finish waiting failed.\n");
        return 0;
    }

    printf("hello pthread.\n");

    return 0;
}