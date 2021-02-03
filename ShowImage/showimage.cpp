#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream> //cout için gerekli

using namespace std;
using namespace cv;

int main()
{
	Mat img = cv::imread("resim.jpg");

	if (img.empty())
	{
		cout << "Resim acilamadi" << endl;
	}
	else
	{
		namedWindow("Resim Gosterme", WINDOW_AUTOSIZE); //deneme isimli windows penceresi oluştu
		imshow("Resim Gosterme", img);
		waitKey(0);						 //bir tuşa basmayı bekliyor
		destroyWindow("Resim Gosterme"); //pecere kapandı
	}
	return 0;
}