/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_vosk_LibVosk */

#ifndef _Included_org_vosk_LibVosk
#define _Included_org_vosk_LibVosk
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_set_log_level
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1set_1log_1level
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_model_new
 * Signature: (Ljava/lang/String;)Lcom/sun/jna/Pointer;
 */
JNIEXPORT jobject JNICALL Java_org_vosk_LibVosk_vosk_1model_1new
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_model_free
 * Signature: (Lcom/sun/jna/Pointer;)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1model_1free
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_spk_model_new
 * Signature: (Ljava/lang/String;)Lcom/sun/jna/Pointer;
 */
JNIEXPORT jobject JNICALL Java_org_vosk_LibVosk_vosk_1spk_1model_1new
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_spk_model_free
 * Signature: (Lcom/sun/jna/Pointer;)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1spk_1model_1free
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_new
 * Signature: (Lorg/vosk/Model;F)Lcom/sun/jna/Pointer;
 */
JNIEXPORT jobject JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1new
  (JNIEnv *, jclass, jobject, jfloat);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_new_spk
 * Signature: (Lcom/sun/jna/Pointer;FLcom/sun/jna/Pointer;)Lcom/sun/jna/Pointer;
 */
JNIEXPORT jobject JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1new_1spk
  (JNIEnv *, jclass, jobject, jfloat, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_new_grm
 * Signature: (Lcom/sun/jna/Pointer;FLjava/lang/String;)Lcom/sun/jna/Pointer;
 */
JNIEXPORT jobject JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1new_1grm
  (JNIEnv *, jclass, jobject, jfloat, jstring);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_set_max_alternatives
 * Signature: (Lcom/sun/jna/Pointer;I)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1set_1max_1alternatives
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_set_words
 * Signature: (Lcom/sun/jna/Pointer;Z)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1set_1words
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_set_partial_words
 * Signature: (Lcom/sun/jna/Pointer;Z)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1set_1partial_1words
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_set_spk_model
 * Signature: (Lcom/sun/jna/Pointer;Lcom/sun/jna/Pointer;)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1set_1spk_1model
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_accept_waveform
 * Signature: (Lcom/sun/jna/Pointer;[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1accept_1waveform
  (JNIEnv *, jclass, jobject, jbyteArray, jint);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_accept_waveform_s
 * Signature: (Lcom/sun/jna/Pointer;[SI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1accept_1waveform_1s
  (JNIEnv *, jclass, jobject, jshortArray, jint);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_accept_waveform_f
 * Signature: (Lcom/sun/jna/Pointer;[FI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1accept_1waveform_1f
  (JNIEnv *, jclass, jobject, jfloatArray, jint);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_result
 * Signature: (Lcom/sun/jna/Pointer;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1result
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_final_result
 * Signature: (Lcom/sun/jna/Pointer;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1final_1result
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_partial_result
 * Signature: (Lcom/sun/jna/Pointer;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1partial_1result
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_reset
 * Signature: (Lcom/sun/jna/Pointer;)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1reset
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_vosk_LibVosk
 * Method:    vosk_recognizer_free
 * Signature: (Lcom/sun/jna/Pointer;)V
 */
JNIEXPORT void JNICALL Java_org_vosk_LibVosk_vosk_1recognizer_1free
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
