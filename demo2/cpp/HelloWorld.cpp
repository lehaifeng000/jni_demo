#include <jni.h>
#include "HelloWorld.h"
#include <stdio.h>

JNIEXPORT void JNICALL
Java_HelloWorld_displayHelloWorld(JNIEnv *env, jobject obj)
{
    printf("Hello world!/n");
    return;
}



/*
 * Class:     HelloWorld
 * Method:    add
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_HelloWorld_add(JNIEnv *, jobject obj, jint a, jint b){
    printf("this is add methon\n");
    return a+b;
}

/*
 * Class:     HelloWorld
 * Method:    getarr
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_HelloWorld_getarr(JNIEnv *env, jobject obj, jint n){
    jintArray jarr = env->NewIntArray(n) ;
    //2.获取数组指针
    jint *arr = env->GetIntArrayElements(jarr, NULL);
    for(int i=0;i<n;i++){
        arr[i]=(i+1)*10;
    }
    //4.释放资源
    env->ReleaseIntArrayElements(jarr, arr, 0);
    return jarr;
}
