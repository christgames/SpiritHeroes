package org.ChristGames.SpiritHeroes;

import org.cocos2dx.lib.Cocos2dxActivity;
import org.cocos2dx.lib.Cocos2dxGLSurfaceView;

import android.os.Bundle;

public class SpiritHeroes extends Cocos2dxActivity{
	
    protected void onCreate(Bundle savedInstanceState){
		super.onCreate(savedInstanceState);	
	}

    public Cocos2dxGLSurfaceView onCreateView() {
    	Cocos2dxGLSurfaceView glSurfaceView = new Cocos2dxGLSurfaceView(this);
    	glSurfaceView.setEGLConfigChooser(5, 6, 5, 0, 16, 8);
    	return glSurfaceView;
    }

    static {
        System.loadLibrary("cocos2dcpp");
    }     
}
