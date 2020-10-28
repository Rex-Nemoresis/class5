#include <iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    VideoCapture cap(0);
    while(1)
    {
        Mat frame;
        Mat hsvMat;
        Mat detectMat;
        Mat rst;
        cap>>frame;
        //medianBlur(frame, rst, 5);

        //blur(frame, rst,Size(5,5),Point(-1,-1));

        //GaussianBlur(frame, rst, Size(5, 5), 0, 0);

        Sobel(frame, rst, -1, 1, 0, 5, 1, 0);
        imshow("rst",rst);
         waitKey(30);
    }
}