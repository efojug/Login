#include <jni.h>
#include <stdlib.h>
#include <string.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_efojug_login_ui_login_LoginActivity_login(JNIEnv *env, jobject, jstring str) {
    // TODO: implement login()
    const char *uuid = env->GetStringUTFChars(str,JNI_FALSE);
    char *generator = (char*)malloc(strlen("UUID: ") + strlen(uuid) + 1);
    strcpy(generator,"UUID: ");
    strcat(generator, uuid);
    return env->NewStringUTF(generator);
}