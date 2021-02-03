// Derleme  MacOs: g++ $(pkg-config --cflags --libs opencv4) -std=c++11  main.cpp -o main
#include <iostream>
#include<opencv2/opencv.hpp>

static void mouseTiklandi(int event,int x,int y,int,void*)
{
    if( event != cv::EVENT_LBUTTONDOWN )
        return;
    if(event==cv::EVENT_RBUTTONDOWN)
            std::cout<<"Mouse Sağ Click  x:"<< x<< " y: "<< y <<std::endl;

    std::cout<<"Mouse Tıklandı  x:"<< x<< " y: "<< y <<std::endl;
}

int main()
{
    cv::Mat orginalImage=cv::imread("atlar.jpg",cv::COLOR_RGBA2BGR);
    cv::namedWindow("resim",cv::WINDOW_AUTOSIZE);

    cv::imshow("resim",orginalImage);
    cv::setMouseCallback("resim",mouseTiklandi,0);
    cv::waitKey();
    cv::destroyAllWindows();
}