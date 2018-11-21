/**
  * @Copyright (C) 2018 All rights reserved.
  * @date: 2018
  * @file: canny_edge_img.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2018-11-21 09:12:01
  * @last_modified_date: 2018-11-21 09:18:18
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

//CODE
int main(int argc, char** argv)
{
  auto src_img = cv::imread("/Users/aliben/project/data/cv_img/fruit.jpg");
  cv::imshow("Origin", src_img);
  cv::Mat dst_img, edge, gray_img;

  dst_img.create(src_img.size(), src_img.type());
  cv::cvtColor(src_img, gray_img, cv::COLOR_BGR2GRAY);

  cv::blur(gray_img, edge, cv::Size(3,3));
  cv::Canny(edge, edge, 3, 9, 3);
  cv::imshow("Canny Edge", edge);
  cv::waitKey(4000);
  return 0;
}
