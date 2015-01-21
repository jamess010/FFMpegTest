package com.fes123.ffmpeg;



import java.io.File;

import android.app.Activity;
import android.os.Bundle;
import android.os.Environment;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;

public class MainActivity extends Activity {

	private static final String TAG = "MainActivity";


	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		
		
		//得到sdcard路径
		String str = Environment.getExternalStorageDirectory().getPath() + "/1.flv";
		File srcFile = new File(str);
		if(srcFile.exists()){
			Log.i(TAG, str + "存在");		
			FFMpegTest fft = new FFMpegTest();
			int error = fft.ffmpeg_test(str, "rtmp://www.fes123.com:1961/live/1");
			if(error > 0){
				Log.e(TAG, Integer.toString(error));			
			}else{
				Log.i(TAG, "ffmpeg 测试成功");
			}
		}else{
			Log.e(TAG, str + "未发现");		
			
		}
			
		setContentView(R.layout.activity_main);
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	@Override
	public boolean onOptionsItemSelected(MenuItem item) {
		// Handle action bar item clicks here. The action bar will
		// automatically handle clicks on the Home/Up button, so long
		// as you specify a parent activity in AndroidManifest.xml.
		int id = item.getItemId();
		if (id == R.id.action_settings) {
			return true;
		}
		return super.onOptionsItemSelected(item);
	}
}
