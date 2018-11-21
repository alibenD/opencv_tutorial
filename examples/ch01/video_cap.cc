/**
  * @Copyright (C) 2018 All rights reserved.
  * @date: 2018
  * @file: video_cap.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2018-11-21 09:21:08
  * @last_modified_date: 2018-11-21 09:23:06
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <opencv2/opencv.hpp>

//CODE
int main(int argc, char** argv)
{
  cv::VideoCapture cap("/Users/aliben/project/data/cv_img/1.avi");
  while(true)
  {
    cv::Mat frame;
    cap >> frame;
    cv::imshow("Read Video", frame);
    cv::waitKey(15);
  }
  return 0;
}
