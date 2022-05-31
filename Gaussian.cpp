#include "BlurLib.h"

using namespace cv;

int main() // we can use int main as well just don't forget
            // to add return 0 in the end
{
    cv::String path = "shrek.jpg";
    Mat img = imread(path);

    Mat Blur_img;    //Defining Output Image matrix
    GaussianBlur(img, Blur_img, Size(305, 305), 10,
        10);


    imshow("Image", img); // Image before the conversion
    imshow("Blurimg", Blur_img); // Blurred Image

    waitKey(0); // wait for keystroke
    return 0;
}