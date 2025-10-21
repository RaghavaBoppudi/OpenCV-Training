// BASIC FUNCTIONS - cvtColor, GaussianBlur, Canny, dilate, erode
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
//    string path = "Resources/test.png";
//    Mat img = imread(path); // Mat is matrix data type to handle images --> defining an image
//    Mat imgGray, imgBlur, imgCanny, imgDilate, imgErode;
//    
//    cvtColor(img, imgGray, COLOR_BGR2GRAY); // Convert color image to grayscale
//    GaussianBlur(img, imgBlur, Size(7,7), 5,0); //Apply a gaussian blur to image
//    Canny(imgBlur, imgCanny, 25, 75); //Edge detection using Canny
//    
//    Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
//    dilate(imgCanny, imgDilate, kernel); //dilate image (make edges thicker)
//    erode(imgCanny, imgErode, kernel); //erode image (make edges thinner)
//    
//    imshow("Image", img);
//    imshow("Image Gray", imgGray);
//    imshow("Image Blur", imgBlur);
//    imshow("Image Canny", imgCanny);
//    imshow("Image Dilation", imgDilate);
//    imshow("Image Erosion", imgErode);
//    waitKey(0); // infinite delay - does not close until manually closed
//
//}
