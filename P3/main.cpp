#include<iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main() {


	Mat img = imread("C:\\Users\\Administrator\\Desktop\\ͷ��\\a.jpg");

	namedWindow("picture");

	imshow("picture", img);

	Mat newimg;

	namedWindow("�´��ڣ�");
	
	cvtColor(img, newimg, CV_YCrCb2BGR);

	imshow("newPitctrue",newimg);

	imwrite("F:\\b.jpg",newimg);

	waitKey(8000);

	return 0;
}
