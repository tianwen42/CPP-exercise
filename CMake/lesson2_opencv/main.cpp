// Uncomment the following line if you are compiling this code in Visual Studio
// #include "stdafx.h"

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{

    std::cout << "Running" << std::endl;
    // Read the image file
    Mat image = imread("C:/Users/Administrator/Pictures/Saved Pictures/1.jpg");

    // Check for failure
    if (image.empty()) {
        cout << "Could not open or find the image" << endl;
        cin.get(); // wait for any key press
        return -1;
    }

    String windowName = "The Guitar"; // Name of the window

    namedWindow(windowName); // Create a window

    imshow(windowName, image); // Show our image inside the created window.

    waitKey(0); // Wait for any keystroke in the window

    destroyWindow(windowName); // destroy the created window

    return 0;
}