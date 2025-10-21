// IMPORTING IMAGES, VIDEO AND WEBCAM

//# include <opencv2/imgcodecs.hpp>
//# include <opencv2/highgui.hpp>
//# include <opencv2/imgproc.hpp>
//# include <iostream>
//
//using namespace cv;
//using namespace std;

// Images

//int main() {
//    
//    string path = "Resources/test.png";
//    Mat img = imread(path); // Mat is matrix data type to handle images
//    imshow("Image", img);
//    waitKey(0); // infinite delay - does not close until manually closed
//    
//}

// Video

//int main() {
//    
//    string path = "Resources/test_video.mp4";
//    VideoCapture cap(path);
//    
//    Mat img;
//    
//    while(true){
//        
//        cap.read(img);
//        imshow("Image", img);
//        waitKey(1); // 1ms delay
//
//    }
//}

// Webcam

//int main() {
//    
//    VideoCapture cap(1); //id 0 for default webcam, 1 for secondary webcam, etc.,
//    
//    Mat img;
//    
//    while(true){
//        
//        cap.read(img);
//        imshow("Image", img);
//        waitKey(1); // 1ms delay
//
//    }
//}
