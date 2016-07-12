//
//  brightness.cpp
//  opencvtest
//
//  Created by 五零 on 16/7/12.
//  Copyright © 2016年 五零. All rights reserved.
//

#include "brightness.hpp"
#include "opencv2/core/core.hpp"
using namespace cv;
using namespace std;
#include "opencv2/highgui/highgui.hpp"
#include <iostream>


struct Brightness{
    
    cv::Mat src;
    
    int demo(){
        
        Mat img = imread("MyPic.JPG", CV_LOAD_IMAGE_COLOR);
        
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
        
        return 1;
    };
    

}brightness;