#include <jni.h>
#include "libavformat/avformat.h"
#include "libavutil/mathematics.h"
#include "libavutil/time.h"
#define  LOG_TAG    "ffmpeg"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
//static const char *TAG="libgpio"
//#define LOGI(fmt,args...) ((void) __android_log_print(ANDROID_LOG_INFO,TAG,fmtargs)
//#define LOG_TAG    "JNILOG"
//#undef LOG
//#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
////#define LOGI(...)  __android_log_print(ANDROID_LOG_VERBOSE,LOG_TAG,__VA_ARGS__)
//#define LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
//#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
//#define LOGF(...)  __android_log_print(ANDROID_LOG_FATAL,LOG_TAG,__VA_ARGS__)


/*
 * Class:     com_fes123_ffmpeg_FFMpegTest
 * Method:    ffmpeg_test
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */

jint  Java_com_fes123_ffmpeg_FFMpegTest_ffmpeg_1test
  (JNIEnv * env, jobject obj, jstring file, jstring url){
	//定义统一的错误返回码，看程序是在哪一步出的问题
	int errorCode = 0, ret;
	AVFormatContext *ifmt_ctx = NULL, *ofmt_ctx = NULL;
	AVOutputFormat *ofmt = NULL;


	av_register_all();

	// NetWork
	if(0 != avformat_network_init()){
		errorCode = 1;
		goto end;
	}

//	__android_log_print(ANDROID_LOG_ERROR,"JNI","Java_com_lt_jni_JNI_print");
//	LOGD("init network success!\n");
//	printf("need input %s\n", file);
/*	if ((ret = avformat_open_input(&ifmt_ctx, "/storage/sdcard/1.flv", 0, 0)) < 0) {
		errorCode = 2;
		goto end;
	}*/
//	printf("open input %s success!\n", file);

end:
//	avformat_close_input(&ifmt_ctx);
//	/* close output */
//	if (ofmt_ctx && !(ofmt->flags & AVFMT_NOFILE))
//		avio_close(ofmt_ctx->pb);
//	avformat_free_context(ofmt_ctx);
//	if (ret < 0 && ret != AVERROR_EOF) {
//		errorCode = 100;
//
//	}
	return errorCode;

}


