// COLOR DETECTION

# include <opencv2/imgcodecs.hpp>
# include <opencv2/highgui.hpp>
# include <opencv2/imgproc.hpp>
# include <iostream>

using namespace cv;
using namespace std;

Mat imgHSV, mask;

int hmin = 0, smin = 0, vmin = 255; //hardcoding values
int hmax = 179, smax = 255, vmax = 255;

int main() {

    string path = "Resources/shapes.png";
    Mat img = imread(path); // Mat is matrix data type to handle images
    
    cvtColor(img, imgHSV, COLOR_BGR2HSV); //converting to HSV color space for better color recognition
    
    // 1. Create the window using a standard flag, like WINDOW_NORMAL
    namedWindow("Trackbars", cv::WINDOW_NORMAL);

    // 2. Immediately call resizeWindow to set the desired dimensions
    resizeWindow("Trackbars", 640, 200);
    
    createTrackbar("Hue Min", "Trackbars", &hmin, 179); // maximum allowed value for hue is 180, and 256 for saturation and value
    createTrackbar("Hue Max", "Trackbars", &hmax, 179);
    createTrackbar("Sat Min", "Trackbars", &smin, 255);
    createTrackbar("Sat Max", "Trackbars", &smax, 255);
    createTrackbar("Val Min", "Trackbars", &vmin, 255);
    createTrackbar("Val Max", "Trackbars", &vmax, 255);
    
    while(true) {
        
        Scalar lower(hmin, smin, vmin); //defining lower range of target color with hue minimum, saturation minimum, and value minimum
        Scalar upper(hmax, smax, vmax); //defining upper range of target color with hue maximum, saturation maximum, and value maximum
        
        inRange(imgHSV, lower, upper, mask);
        
        imshow("Image", img);
        imshow("ImageHSV", imgHSV);
        imshow("ImageMask", mask);

        waitKey(1); // Wait for 1ms. This keeps the loop running and allows the trackbars to be interactive.
    }

}
