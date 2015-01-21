#include <jni.h>
#include "libavformat/avformat.h"
#include "libavutil/mathematics.h"
#include "libavutil/time.h"


/*
 * Class:     com_fes123_ffmpeg_FFMpegTest
 * Method:    ffmpeg_test
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
jint  Java_com_fes123_ffmpeg_FFMpegTest_ffmpeg_1test
  (JNIEnv * env, jobject obj, jstring file, jstring url){
	//定义统一的错误返回码，看程序是在哪一步出的问题
	int errorCode = 0;

	const char * filename;

	filename = file;

	av_register_all();
end:

	return errorCode;

}


