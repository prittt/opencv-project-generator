#define _CRT_SECURE_NO_WARNINGS //To suppress 'fopen' opencv warning/bug 

#include <cstdint>

#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    // Read and display grayscale image
    Mat1b img_grayscale;
    img_grayscale = imread("../data/rana.jpg", IMREAD_GRAYSCALE);
    if (img_grayscale.empty()) {
        cout << "Unable to read grayscale image" << endl;
    }
    else {
        imshow("Example - Grayscale", img_grayscale);
        waitKey();
    }

    // Read and display color image
    Mat3b img_color;
    img_color = imread("../data/rana.jpg", IMREAD_COLOR);
    if (img_color.empty()) {
        cout << "Unable to read grayscale image" << endl;
    }
    else {
        imshow("Example - Color", img_color);
        waitKey();
    }

    return EXIT_SUCCESS;
}
