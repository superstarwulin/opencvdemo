//
//  main.cpp
//  opencvtest
//
//  Created by 五零 on 16/7/11.
//  Copyright © 2016年 五零. All rights reserved.
//
#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include "brightness.hpp"
using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Mat img = imread("/Users/superstarwulin/Sites/xcode/helloworld/opencvtest/assets/zzx.jpg", CV_LOAD_IMAGE_COLOR);
    
    if (img.empty())
    {
        cout << "Image cannot be loaded..!!" << endl;
        return -1;
    }
    
    Mat imgH = img + Scalar(75, 75, 75); //increase the brightness by 75 units
    //img.convertTo(imgH, -1, 1, 75);
    
    Mat imgL = img + Scalar(-75, -75, -75); //decrease the brightness by 75 units
    //img.convertTo(imgL, -1, 1, -75);
    
    namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
    namedWindow("High Brightness", CV_WINDOW_AUTOSIZE);
    namedWindow("Low Brightness", CV_WINDOW_AUTOSIZE);
    
    imshow("Original Image", img);
    imshow("High Brightness", imgH);
    imshow("Low Brightness", imgL);
    
    waitKey(0);
    
    destroyAllWindows(); //destroy all open windows
    
    
//    cv::Mat src;
//    
//    src=cv::imread("/Users/superstarwulin/Sites/xcode/helloworld/opencvtest/assets/zzx.jpg", -1);
//    
//    
//    
//    
//    //上面的路徑為圖片路徑
//    
//    cv::imshow("show image",src);  //這邊會show圖出來
//    
//    cv::waitKey(0);

    return 0;
}
