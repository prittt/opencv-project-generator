#include <cstdint>

#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    Mat1b img;
    img = imread("../data/rana.jpg", IMREAD_GRAYSCALE);
    imshow("Example", img);
    waitKey();
    
    return EXIT_SUCCESS;
}
