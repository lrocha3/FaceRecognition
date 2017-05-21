/*
 * main.cpp
 *
 *  Created on: 20/05/2017
 *  Author: Luis Rocha
 */

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <atomic>
#include <thread>
#include <functional>

#include "FaceDetector.h"
#include "Definitions.h"

using namespace std;
using namespace cv;


inline int RaspberryCameraDriverSetup()
{
	return system("sudo modprobe bcm2835-v4l2");
};

int main(void)
{
	StopProgram condition;

	/* Set-up Raspberry Pi camera drivers */
	if(RaspberryCameraDriverSetup() == COMMAND_NOT_EXECUTED)
	{
		return 0;
	}

	/* Atomic variables must be passed as references */
	thread t1(FaceDetectorThread, ref(condition));

	/* Wait until a key is pressed */
	printf("Press any key to leave..\n");
	getchar();

	/* Set the condition to true in order to finish the execution of FaceDetectorThread thread */
	condition.set(true);

	/* Wait until the thread FaceDetectorThread finishes execution*/
	t1.join();

    return 0;
}
