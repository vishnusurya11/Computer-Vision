//Header files
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	String image_name;
	if(argc > 1 )
	{
		image_name=argv[1];
	}else
	{
		cout<<"input image is not given"<<endl;
		return 0;
	}
	Mat image,gray_image;

	image = imread(image_name,1);
	cvtColor(image,gray_image,COLOR_BGR2GRAY);

	imwrite("../Images/ronaldo_gray.jpeg",gray_image);
	namedWindow("RGB image", WINDOW_AUTOSIZE);
	namedWindow("Gray Scale image", WINDOW_AUTOSIZE);
	imshow("RGB image",image);
	imshow("Gray Scale image",gray_image);
	waitKey(0);
	return 0;
}