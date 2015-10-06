/*
 * engine.h
 *
 *  Created on: 2015. 10. 5.
 *      Author: InhoChoi
 */

#ifndef DRIVERS_ENGINE_H_
#define DRIVERS_ENGINE_H_

#include "TinyJS.h"

extern "C"{
#include "main.h"
#include "cmsis_os.h"
#include "js_Digital_IO.h"

	void EngineInit();
	void Execute(const char * str);
	static void RegisterNative();
	//Delay Functions
	void Delay(CScriptVar *v, void *userdata);
}




#endif /* DRIVERS_ENGINE_H_ */
