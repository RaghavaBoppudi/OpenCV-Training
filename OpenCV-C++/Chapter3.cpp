// RESIZE AND CROP

# include <opencv2/imgcodecs.hpp>
# include <opencv2/highgui.hpp>
# include <opencv2/imgproc.hpp>
# include <iostream>

using namespace cv;
using namespace std;

int main() {

    string path = "Resources/test.png";
    Mat img = imread(path); // Mat is matrix data type to handle images --> defining an image
    Mat imgResize, imgScale, imgCrop;
    
    // cout << img.size() << endl; //cout is terminal output, img.size() is the size of the image in pixels, endl inserts a new line and flushes the stream(output buffer)
    
    resize(img, imgResize, Size(640,480)); // resize the image to a particular dimension.
    
    resize(img, imgScale, Size(), 0.5, 0.5); // scales the image by 0.5 on x-axis and 0.5 on y-axis
    
    Rect roi(100, 100, 300, 250); //starting pixels and ending pixels for the crop
    
    imgCrop = img(roi);
    
    imshow("Image", img);
    imshow("Resize", imgResize);
    imshow("Scale", imgScale);
    imshow("Crop", imgCrop);
    
    waitKey(0);
}
