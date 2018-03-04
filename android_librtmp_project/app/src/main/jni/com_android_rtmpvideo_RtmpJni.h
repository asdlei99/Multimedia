/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_android_rtmpvideo_RtmpJni */

#ifndef _Included_com_android_rtmpvideo_RtmpJni
#define _Included_com_android_rtmpvideo_RtmpJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_android_rtmpvideo_RtmpJni
 * Method:    initRtmp
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_android_rtmpvideo_RtmpJni_initRtmp
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_android_rtmpvideo_RtmpJni
 * Method:    sendSpsAndPps
 * Signature: ([BI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_android_rtmpvideo_RtmpJni_sendSpsAndPps
  (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint);

/*
 * Class:     com_android_rtmpvideo_RtmpJni
 * Method:    sendVideoFrame
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_com_android_rtmpvideo_RtmpJni_sendVideoFrame
  (JNIEnv *, jclass, jbyteArray, jint, jint);

/*
 * Class:     com_android_rtmpvideo_RtmpJni
 * Method:    sendAacSpec
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_android_rtmpvideo_RtmpJni_sendAacSpec
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     com_android_rtmpvideo_RtmpJni
 * Method:    sendAacData
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_com_android_rtmpvideo_RtmpJni_sendAacData
  (JNIEnv *, jclass, jbyteArray, jint, jint);

/*
 * Class:     com_android_rtmpvideo_RtmpJni
 * Method:    stopRtmp
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_android_rtmpvideo_RtmpJni_stopRtmp
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif