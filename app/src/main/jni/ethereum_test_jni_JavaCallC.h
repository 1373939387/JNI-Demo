/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ethereum_test_jni_JavaCallC */

#ifndef _Included_ethereum_test_jni_JavaCallC
#define _Included_ethereum_test_jni_JavaCallC
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ethereum_test_jni_JavaCallC
 * Method:    sum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_ethereum_test_jni_JavaCallC_sum
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     ethereum_test_jni_JavaCallC
 * Method:    sayHello
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ethereum_test_jni_JavaCallC_sayHello
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ethereum_test_jni_JavaCallC
 * Method:    increaseArrayEles
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_ethereum_test_jni_JavaCallC_increaseArrayEles
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     ethereum_test_jni_JavaCallC
 * Method:    checkPwd
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ethereum_test_jni_JavaCallC_checkPwd
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
