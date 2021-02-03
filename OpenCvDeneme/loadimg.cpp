#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>



using namespace std;

int main()
{
  cv::Mat img = cv::imread("mantar.png", 1);
  
  if (img.empty())
  {
    cout << "Resim açılamıyor." << endl;
    return -1;
  }

  cv::imshow("Resim", img);
  cv::waitKey(0);

  return 0;
}
// Derledi :
// g++ -I "C:\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\include" -L "C:\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\x64\mingw\lib\" loadimg.cpp  -lopencv_highgui411 -lopencv_core411 -lopencv_imgproc411 -lopencv_imgcodecs411 -o loadimg



