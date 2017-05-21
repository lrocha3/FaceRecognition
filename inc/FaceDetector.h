/*
* FaceDetector.h
*
*  Created on: 20/05/2017
*  Author: Luis Rocha
*/

#ifndef _FACEDETECTOR_H_
#define _FACEDETECTOR_H_

#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <atomic>
#include <string>
#include <stdint.h>
#include "Definitions.h"

void DetectAndDisplayFaces(cv::Mat frame, cv::CascadeClassifier face_cascade);
void FaceDetectorThread(StopProgram &condition);

#endif /* _FACEDETECTOR_H_ */
