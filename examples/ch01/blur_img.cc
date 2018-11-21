/**
  * @Copyright (C) 2018 All rights reserved.
  * @date: 2018
  * @file: blur_img.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2018-11-21 09:08:11
  * @last_modified_date: 2018-11-21 09:11:34
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

//CODE
int main(int argc, char** argv)
{
  auto src_img = cv::imread("/Users/aliben/project/data/cv_img/castle.jpg");
  cv::imshow("Origin Image", src_img);

  cv::Mat dst_img;
  cv::blur(src_img, dst_img, cv::Size(7, 7));
  cv::imshow("Mean-filter", dst_img);
  cv::waitKey(4000);
  return 0;
}
