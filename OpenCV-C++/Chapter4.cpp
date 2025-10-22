// DRAW SHAPES AND TEXT
//
//# include <opencv2/imgcodecs.hpp>
//# include <opencv2/highgui.hpp>
//# include <opencv2/imgproc.hpp>
//# include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main() {
//    
//    // Blank Image
//    
//    Mat img(512,512, CV_8UC3, Scalar(255, 255, 255)); // Defining the size, type, unsigned and channels, and then Scalar to define colors in BGR values
//    
//    circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED); // using numeric values instead of FILLED will create an outline with respective thickness instead
//    
//    rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED); //defining top left and bottom right corner
//    
//    line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2); //defining starting and ending points of the line
//    
//    putText(img, "RaghavaBoppudi", Point(137, 262), FONT_HERSHEY_DUPLEX, 0.9, Scalar(0, 69, 255), 2); //defining the starting point, font, size, Scalar color values and thickness
//    
//    imshow("Image", img);
//    
//    waitKey(0);
//}
