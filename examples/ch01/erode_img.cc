/**
  * @Copyright (C) 2018 All rights reserved.
  * @date: 2018
  * @file: erode_img.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2018-11-21 09:03:49
  * @last_modified_date: 2018-11-21 09:07:19
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

//CODE
int main(int argc, char** argv)
{
  auto src_img = cv::imread("/Users/aliben/project/data/cv_img/cat.jpg");
  cv::imshow("Origin Image", src_img);

  auto element = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(15,15));
  cv::Mat dst_img;
  cv::erode(src_img, dst_img, element);
  cv::imshow("Eroded Image", dst_img);
  cv::waitKey(4000);
  return 0;
}
