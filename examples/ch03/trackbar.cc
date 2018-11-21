/**
  * @Copyright (C) 2018 All rights reserved.
  * @date: 2018
  * @file: trackbar.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2018-11-21 14:11:14
  * @last_modified_date: 2018-11-21 14:38:03
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>

const std::string WIN_NAME("Track Bar");
const int max_alpha_value = 100;
int alpha_slider = 70;
double alpha_value;
double beta_value;

cv::Mat src_img1, src_img2, dst_img;
//CODE
void update_trackbar(int alpha_slider, void* unknown=nullptr)
{
  alpha_value = (double)alpha_slider/ max_alpha_value;
  beta_value = (1.0 - alpha_value);
  cv::addWeighted(src_img1,
                  alpha_value,
                  src_img2,
                  beta_value,
                  0.0,
                  dst_img);
  imshow(WIN_NAME, dst_img);
};

int main(int argc, char** argv)
{
  src_img1 = cv::imread("/Users/aliben/project/data/cv_img/flower.jpg");
  src_img2 = cv::imread("/Users/aliben/project/data/cv_img/oo.jpg");

  cv::namedWindow(WIN_NAME, cv::WINDOW_NORMAL);

  // Create TrackBar
  cv::createTrackbar("Mixed",
                     WIN_NAME,
                     &alpha_slider,
                     max_alpha_value,
                     update_trackbar);
  update_trackbar(alpha_slider);
  cv::waitKey(50000);
  return 0;
}
